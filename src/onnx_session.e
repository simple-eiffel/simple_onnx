note
	description: "ONNX inference session (model-specific)"
	author: "Larry Rix"

class
	ONNX_SESSION

create
	make

feature {NONE} -- Initialization

	make (a_model: ONNX_MODEL; a_env: ONNX_ENVIRONMENT)
			-- Create session for `a_model` using environment `a_env`.
		require
			model_not_void: a_model /= Void
			env_not_void: a_env /= Void
		do
			model := a_model
			environment := a_env
			provider := create {ONNX_PROVIDER}.make ("CPUExecutionProvider")
			optimization_level := 2
			is_loaded := False
			session_ptr := default_pointer
		ensure
			model_set: model = a_model
			env_set: environment = a_env
			default_provider: provider.name.same_string ("CPUExecutionProvider")
			default_optimization: optimization_level = 2
		end

feature -- Access

	model: ONNX_MODEL
			-- Associated model.

	environment: ONNX_ENVIRONMENT
			-- ONNX Runtime environment.

	provider: ONNX_PROVIDER
			-- Execution provider (CPU, CUDA, TensorRT, etc.).

	optimization_level: INTEGER
			-- Optimization level (0=disabled, 1=basic, 2=extended, 99=all).

	is_loaded: BOOLEAN
			-- Is the session currently loaded and ready for inference?

	session_ptr: POINTER
			-- Native ONNX session pointer (OrtSession*).

feature -- Configuration

	set_provider (a_provider: STRING)
			-- Set execution provider.
		require
			provider_not_void: a_provider /= Void
			provider_not_empty: not a_provider.is_empty
			not_loaded: not is_loaded
		do
			provider := create {ONNX_PROVIDER}.make (a_provider)
		ensure
			provider_set: provider.name.same_string (a_provider)
		end

	set_optimization_level (a_level: INTEGER)
			-- Set graph optimization level.
		require
			valid_level: a_level >= 0 and a_level <= 99
			not_loaded: not is_loaded
		do
			optimization_level := a_level
		ensure
			level_set: optimization_level = a_level
		end

feature -- Lifecycle

	load
			-- Load model into memory and prepare for inference.
		require
			not_already_loaded: not is_loaded
			model_path_set: model.model_path /= Void
		local
			l_c_path: C_STRING
		do
			create l_c_path.make (model.model_path)
			session_ptr := c_create_session (environment.api_ptr, environment.env_ptr,
				l_c_path.item, optimization_level)
			is_loaded := (session_ptr /= default_pointer)
			if is_loaded then
				model.populate_from_session (session_ptr, environment.api_ptr)
			end
		ensure
			loaded: is_loaded implies session_ptr /= default_pointer
		end

	unload
			-- Unload model and free session.
		require
			is_loaded: is_loaded
		do
			c_release_session (environment.api_ptr, session_ptr)
			session_ptr := default_pointer
			is_loaded := False
		ensure
			not_loaded: not is_loaded
		end

feature -- Inference: Single Input

	execute (a_input: ONNX_TENSOR): ONNX_RESULT
			-- Execute inference with single input `a_input`.
		require
			session_loaded: is_loaded
			input_not_void: a_input /= Void
		local
			l_input_value: POINTER
			l_output_value: POINTER
			l_input_name: detachable STRING
			l_output_name: detachable STRING
			l_c_input_name: C_STRING
			l_c_output_name: C_STRING
			l_output_tensor: ONNX_TENSOR
		do
			l_input_name := model.input_name (0)
			l_output_name := model.output_name (0)
			if l_input_name = Void then
				l_input_name := "input"
			end
			if l_output_name = Void then
				l_output_name := "output"
			end
			create l_c_input_name.make (l_input_name)
			create l_c_output_name.make (l_output_name)

			l_input_value := a_input.to_ort_value (environment.api_ptr)
			if l_input_value = default_pointer then
				create Result.make_failure (1, "Failed to create input OrtValue")
			else
				l_output_value := c_run_single (environment.api_ptr, session_ptr,
					l_c_input_name.item, l_input_value, l_c_output_name.item)

				if l_output_value /= default_pointer then
					create l_output_tensor.make_from_ort_value (l_output_value, environment.api_ptr)
					create Result.make_success (l_output_tensor)
					c_release_value (environment.api_ptr, l_output_value)
				else
					create Result.make_failure (2, "ONNX inference failed to produce output")
				end
				c_release_value (environment.api_ptr, l_input_value)
			end
		ensure
			result_not_void: Result /= Void
			success_has_output: Result.is_success implies Result.output_tensor /= Void
			failure_has_error: (not Result.is_success) implies Result.error_code /= 0
		end

feature -- Inference: Multi-Input

	execute_multi (a_inputs: ARRAYED_LIST [TUPLE [name: STRING; tensor: ONNX_TENSOR]];
			a_output_names: ARRAYED_LIST [STRING]): ONNX_RESULT
			-- Execute inference with multiple named inputs.
		require
			session_loaded: is_loaded
			inputs_not_empty: not a_inputs.is_empty
			outputs_not_empty: not a_output_names.is_empty
		local
			l_input_values: MANAGED_POINTER
			l_input_name_ptrs: MANAGED_POINTER
			l_output_name_ptrs: MANAGED_POINTER
			l_c_names: ARRAYED_LIST [C_STRING]
			l_output_value: POINTER
			l_output_tensor: ONNX_TENSOR
			i: INTEGER
			l_success: BOOLEAN
			l_ptr_size: INTEGER
			l_ort_value: POINTER
		do
			l_ptr_size := {PLATFORM}.pointer_bytes
			-- Allocate C arrays for pointers
			create l_input_values.make (a_inputs.count * l_ptr_size)
			create l_input_name_ptrs.make (a_inputs.count * l_ptr_size)
			create l_output_name_ptrs.make (a_output_names.count * l_ptr_size)
			create l_c_names.make (a_inputs.count + a_output_names.count)

			l_success := True
			from i := 1 until i > a_inputs.count loop
				if attached a_inputs [i] as l_pair then
					l_ort_value := l_pair.tensor.to_ort_value (environment.api_ptr)
					l_input_values.put_pointer (l_ort_value, (i - 1) * l_ptr_size)
					if l_ort_value = default_pointer then
						l_success := False
					end
					l_c_names.force (create {C_STRING}.make (l_pair.name))
					l_input_name_ptrs.put_pointer (l_c_names.last.item, (i - 1) * l_ptr_size)
				end
				i := i + 1
			end

			-- Marshal output names
			from i := 1 until i > a_output_names.count loop
				l_c_names.force (create {C_STRING}.make (a_output_names [i]))
				l_output_name_ptrs.put_pointer (l_c_names.last.item, (i - 1) * l_ptr_size)
				i := i + 1
			end

			if not l_success then
				create Result.make_failure (1, "Failed to create input OrtValues")
			else
				l_output_value := c_run_multi (environment.api_ptr, session_ptr,
					l_input_name_ptrs.item, l_input_values.item, a_inputs.count,
					l_output_name_ptrs.item, a_output_names.count)

				if l_output_value /= default_pointer then
					create l_output_tensor.make_from_ort_value (l_output_value, environment.api_ptr)
					create Result.make_success (l_output_tensor)
					c_release_value (environment.api_ptr, l_output_value)
				else
					create Result.make_failure (2, "Multi-input ONNX inference failed")
				end
			end

			-- Clean up input OrtValues
			from i := 1 until i > a_inputs.count loop
				l_ort_value := l_input_values.read_pointer ((i - 1) * l_ptr_size)
				if l_ort_value /= default_pointer then
					c_release_value (environment.api_ptr, l_ort_value)
				end
				i := i + 1
			end
		ensure
			result_not_void: Result /= Void
		end

feature -- Metadata

	model_metadata: ONNX_MODEL
			-- Get current model metadata.
		do
			Result := model
		ensure
			result_not_void: Result /= Void
			result_same: Result = model
		end

feature {NONE} -- C externals

	c_create_session (a_api: POINTER; a_env: POINTER; a_path: POINTER; a_opt_level: INTEGER): POINTER
			-- Create OrtSession* from model file path.
		external
			"C inline use %"onnxruntime_c_api.h%", <windows.h>"
		alias
			"[
				const OrtApi* api = (const OrtApi*)$a_api;
				OrtSessionOptions* opts = NULL;
				OrtSession* session = NULL;
				OrtStatus* status;

				status = api->CreateSessionOptions(&opts);
				if (status != NULL) {
					api->ReleaseStatus(status);
					return (EIF_POINTER)0;
				}

				/* Set optimization level */
				GraphOptimizationLevel level = ORT_ENABLE_EXTENDED;
				switch ($a_opt_level) {
					case 0: level = ORT_DISABLE_ALL; break;
					case 1: level = ORT_ENABLE_BASIC; break;
					case 2: level = ORT_ENABLE_EXTENDED; break;
					default: level = ORT_ENABLE_ALL; break;
				}
				api->SetSessionGraphOptimizationLevel(opts, level);

				/* Convert UTF-8 path to wide string for Windows */
				{
					const char* utf8_path = (const char*)$a_path;
					int wlen = MultiByteToWideChar(CP_UTF8, 0, utf8_path, -1, NULL, 0);
					wchar_t* wpath = (wchar_t*)malloc(wlen * sizeof(wchar_t));
					MultiByteToWideChar(CP_UTF8, 0, utf8_path, -1, wpath, wlen);

					status = api->CreateSession((OrtEnv*)$a_env, wpath, opts, &session);
					free(wpath);
				}
				api->ReleaseSessionOptions(opts);

				if (status != NULL) {
					api->ReleaseStatus(status);
					return (EIF_POINTER)0;
				}
				return (EIF_POINTER)session;
			]"
		end

	c_run_single (a_api: POINTER; a_session: POINTER;
			a_input_name: POINTER; a_input_value: POINTER;
			a_output_name: POINTER): POINTER
			-- Run inference with single input/output.
		external
			"C inline use %"onnxruntime_c_api.h%""
		alias
			"[
				const OrtApi* api = (const OrtApi*)$a_api;
				const char* input_names[1];
				const OrtValue* inputs[1];
				const char* output_names[1];
				OrtValue* output = NULL;

				input_names[0] = (const char*)$a_input_name;
				inputs[0] = (const OrtValue*)$a_input_value;
				output_names[0] = (const char*)$a_output_name;

				OrtStatus* status = api->Run(
					(OrtSession*)$a_session, NULL,
					input_names, inputs, 1,
					output_names, 1, &output);

				if (status != NULL) {
					api->ReleaseStatus(status);
					return (EIF_POINTER)0;
				}
				return (EIF_POINTER)output;
			]"
		end

	c_run_multi (a_api: POINTER; a_session: POINTER;
			a_input_names: POINTER; a_input_values: POINTER; a_input_count: INTEGER;
			a_output_names: POINTER; a_output_count: INTEGER): POINTER
			-- Run inference with multiple inputs, return first output.
		external
			"C inline use %"onnxruntime_c_api.h%""
		alias
			"[
				const OrtApi* api = (const OrtApi*)$a_api;
				const char** input_names = (const char**)$a_input_names;
				const OrtValue** inputs = (const OrtValue**)$a_input_values;
				const char** output_names = (const char**)$a_output_names;
				int out_count = (int)$a_output_count;
				int i;

				OrtValue** outputs = (OrtValue**)calloc(out_count, sizeof(OrtValue*));

				OrtStatus* status = api->Run(
					(OrtSession*)$a_session, NULL,
					input_names, inputs, (size_t)$a_input_count,
					output_names, (size_t)out_count, outputs);

				if (status != NULL) {
					api->ReleaseStatus(status);
					free(outputs);
					return (EIF_POINTER)0;
				}

				/* Return first output, release others */
				{
					OrtValue* first_out = outputs[0];
					for (i = 1; i < out_count; i++) {
						if (outputs[i] != NULL) {
							api->ReleaseValue(outputs[i]);
						}
					}
					free(outputs);
					return (EIF_POINTER)first_out;
				}
			]"
		end

	c_release_session (a_api: POINTER; a_session: POINTER)
			-- Release OrtSession*.
		external
			"C inline use %"onnxruntime_c_api.h%""
		alias
			"[
				const OrtApi* api = (const OrtApi*)$a_api;
				if ($a_session != NULL) {
					api->ReleaseSession((OrtSession*)$a_session);
				}
			]"
		end

	c_release_value (a_api: POINTER; a_value: POINTER)
			-- Release OrtValue*.
		external
			"C inline use %"onnxruntime_c_api.h%""
		alias
			"[
				const OrtApi* api = (const OrtApi*)$a_api;
				if ($a_value != NULL) {
					api->ReleaseValue((OrtValue*)$a_value);
				}
			]"
		end

invariant
	model_not_void: model /= Void
	provider_not_void: provider /= Void
	optimization_valid: optimization_level >= 0 and optimization_level <= 99

end
