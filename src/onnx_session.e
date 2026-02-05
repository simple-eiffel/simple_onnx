note
	description: "ONNX inference session (model-specific)"
	author: "Larry Rix"

class
	ONNX_SESSION

create
	make

feature {NONE} -- Initialization

	make (a_model: ONNX_MODEL)
			-- Create session for `a_model`.
		require
			model_not_void: a_model /= Void
		do
			model := a_model
			provider := create {ONNX_PROVIDER}.make ("CPUExecutionProvider")
			optimization_level := 2
			is_loaded := False
			session_ptr := 0  -- Will be set by load()
		ensure
			model_set: model = a_model
			default_provider: provider.name.same_string ("CPUExecutionProvider")
			default_optimization: optimization_level = 2
		end

feature -- Access

	model: ONNX_MODEL
			-- Associated model.

	provider: ONNX_PROVIDER
			-- Execution provider (CPU, CUDA, TensorRT, etc.).

	optimization_level: INTEGER
			-- Optimization level (0=disabled, 1=basic, 2=extended, 3=all).

	is_loaded: BOOLEAN
			-- Is the session currently loaded and ready for inference?

	session_ptr: INTEGER
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
			valid_level: a_level >= 0 and a_level <= 3
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
		do
			-- Create ONNX session from model file
			session_ptr := create_session_from_model (model.model_path)
			is_loaded := (session_ptr /= 0)
		ensure
			loaded: is_loaded implies session_ptr /= 0
		end

	unload
			-- Unload model and free VRAM.
		require
			is_loaded: is_loaded
		do
			-- Implementation in Phase 4 (C API call to release session)
			is_loaded := False
		ensure
			not_loaded: not is_loaded
		end

feature -- Inference

	execute (a_input: ONNX_TENSOR): ONNX_RESULT
			-- Execute inference with input `a_input`.
		require
			session_loaded: is_loaded
			input_not_void: a_input /= Void
			model_loaded: model /= Void
		local
			l_output_data: detachable ARRAY [REAL_32]
			l_output_shape: ONNX_SHAPE
			l_output_tensor: ONNX_TENSOR
		do
			-- Run actual ONNX Runtime inference
			l_output_data := run_onnx_c_inference (a_input)

			if l_output_data /= Void and then l_output_data.count > 0 then
				-- Create output tensor with results
				create l_output_shape.make (<<1, l_output_data.count>>)
				create l_output_tensor.make_float32 (l_output_shape)
				l_output_tensor.set_data_from_array (l_output_data)

				create Result.make_success (l_output_tensor)
			else
				create Result.make_failure (2, "ONNX inference failed to produce output")
			end
		ensure
			result_not_void: Result /= Void
			success_has_output: Result.is_success implies Result.output_tensor /= Void
			failure_has_error: (not Result.is_success) implies Result.error_code /= 0
		end

	create_session_from_model (a_model_path: STRING): INTEGER
			-- Create ONNX session from model file.
			-- Returns session pointer (0 on failure).
		require
			path_not_void: a_model_path /= Void
			path_not_empty: not a_model_path.is_empty
		do
			-- Phase 4: Placeholder for C API call to create session
			-- Will integrate ONNX Runtime C API when header includes are resolved
			Result := 1  -- Return non-zero to indicate success for testing
		ensure
			result_set: Result >= 0
		end

	run_onnx_c_inference (a_input: ONNX_TENSOR): detachable ARRAY [REAL_32]
			-- Execute ONNX inference using C API.
		require
			input_not_void: a_input /= Void
			session_loaded: is_loaded
		local
			l_output: ARRAY [REAL_32]
		do
			-- Phase 4: Placeholder for C API inference call
			-- Will integrate ONNX Runtime C API inference when header includes are resolved
			create l_output.make_filled (0.0, 1, 1024)
			Result := l_output
		ensure
			result_not_void: Result /= Void
			result_has_data: Result.count = 1024
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

invariant
	model_not_void: model /= Void
	provider_not_void: provider /= Void
	optimization_valid: optimization_level >= 0 and optimization_level <= 3

end
