note
	description: "ONNX Runtime environment (global singleton)"
	author: "Larry Rix"

class
	ONNX_ENVIRONMENT

create
	make

feature {NONE} -- Initialization

	make
			-- Initialize ONNX Runtime environment.
		do
			api_ptr := c_get_api
			env_ptr := c_create_env (api_ptr)
			available_providers := create_provider_list
		end

feature -- Access

	api_ptr: POINTER
			-- Pointer to const OrtApi* structure.

	env_ptr: POINTER
			-- Pointer to OrtEnv* instance.

	available_providers: ARRAYED_LIST [STRING]
			-- List of available execution providers on this system.

	is_provider_available (a_name: STRING): BOOLEAN
			-- Is execution provider `a_name` available?
		require
			name_not_void: a_name /= Void
			name_not_empty: not a_name.is_empty
		do
			Result := available_providers.has (a_name)
		end

	version_info: STRING
			-- ONNX Runtime version string.
		local
			l_ptr: POINTER
		do
			l_ptr := c_get_version_string
			if l_ptr /= default_pointer then
				create Result.make_from_c (l_ptr)
			else
				Result := "unknown"
			end
		end

feature {NONE} -- Implementation

	create_provider_list: ARRAYED_LIST [STRING]
			-- Create list of available providers.
		do
			create Result.make (5)
			Result.compare_objects
			Result.force ("CPUExecutionProvider")
		end

feature {NONE} -- C externals

	c_get_api: POINTER
			-- Get OrtApi* pointer.
		external
			"C inline use %"onnxruntime_c_api.h%""
		alias
			"[
				const OrtApiBase* base = OrtGetApiBase();
				return (EIF_POINTER)base->GetApi(ORT_API_VERSION);
			]"
		end

	c_create_env (a_api: POINTER): POINTER
			-- Create OrtEnv* using the API.
		external
			"C inline use %"onnxruntime_c_api.h%""
		alias
			"[
				const OrtApi* api = (const OrtApi*)$a_api;
				OrtEnv* env = NULL;
				OrtStatus* status = api->CreateEnv(ORT_LOGGING_LEVEL_WARNING, "simple_onnx", &env);
				if (status != NULL) {
					api->ReleaseStatus(status);
					return (EIF_POINTER)0;
				}
				return (EIF_POINTER)env;
			]"
		end

	c_get_version_string: POINTER
			-- Get ONNX Runtime build info string.
		external
			"C inline use %"onnxruntime_c_api.h%""
		alias
			"[
				return (EIF_POINTER)OrtGetApiBase()->GetVersionString();
			]"
		end

	c_release_env (a_api: POINTER; a_env: POINTER)
			-- Release OrtEnv*.
		external
			"C inline use %"onnxruntime_c_api.h%""
		alias
			"[
				const OrtApi* api = (const OrtApi*)$a_api;
				if ($a_env != NULL) {
					api->ReleaseEnv((OrtEnv*)$a_env);
				}
			]"
		end

end
