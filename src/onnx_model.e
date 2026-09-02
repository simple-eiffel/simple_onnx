note
	description: "ONNX model metadata"
	author: "Larry Rix"

class
	ONNX_MODEL

create
	make

feature {NONE} -- Initialization

	make (a_path: STRING)
			-- Create model metadata for model at `a_path`.
		require
			path_not_void: a_path /= Void
			path_not_empty: not a_path.is_empty
		do
			model_path := a_path.twin
			create input_names.make (4)
			create output_names.make (4)
			create input_shapes.make (4)
			create output_shapes.make (4)
			create input_types.make (4)
			create output_types.make (4)
		ensure
			path_set: model_path.same_string (a_path)
		end

feature -- Access

	model_path: STRING
			-- Path to the .onnx model file.

	input_count: INTEGER
			-- Number of model inputs.

	output_count: INTEGER
			-- Number of model outputs.

	opset_version: INTEGER
			-- ONNX opset version used by model.

	input_name (a_index: INTEGER): detachable STRING
			-- Get name of input at `a_index` (0-based).
		require
			valid_index: a_index >= 0 and a_index < input_count
		do
			if a_index < input_names.count then
				Result := input_names [a_index + 1]
			end
		ensure
			result_not_empty: Result /= Void implies not Result.is_empty
		end

	input_shape (a_index: INTEGER): detachable ONNX_SHAPE
			-- Get shape of input at `a_index` (0-based).
		require
			valid_index: a_index >= 0 and a_index < input_count
		do
			if a_index < input_shapes.count then
				Result := input_shapes [a_index + 1]
			end
		end

	input_dtype (a_index: INTEGER): detachable ONNX_DATA_TYPE
			-- Get data type of input at `a_index` (0-based).
		require
			valid_index: a_index >= 0 and a_index < input_count
		do
			if a_index < input_types.count then
				Result := input_types [a_index + 1]
			end
		end

	output_name (a_index: INTEGER): detachable STRING
			-- Get name of output at `a_index` (0-based).
		require
			valid_index: a_index >= 0 and a_index < output_count
		do
			if a_index < output_names.count then
				Result := output_names [a_index + 1]
			end
		ensure
			result_not_empty: Result /= Void implies not Result.is_empty
		end

	output_shape (a_index: INTEGER): detachable ONNX_SHAPE
			-- Get shape of output at `a_index` (0-based).
		require
			valid_index: a_index >= 0 and a_index < output_count
		do
			if a_index < output_shapes.count then
				Result := output_shapes [a_index + 1]
			end
		end

	output_dtype (a_index: INTEGER): detachable ONNX_DATA_TYPE
			-- Get data type of output at `a_index` (0-based).
		require
			valid_index: a_index >= 0 and a_index < output_count
		do
			if a_index < output_types.count then
				Result := output_types [a_index + 1]
			end
		end

feature -- Modification

	set_input_count (a_count: INTEGER)
			-- Set number of model inputs.
		require
			non_negative: a_count >= 0
		do
			input_count := a_count
		ensure
			count_set: input_count = a_count
		end

	set_output_count (a_count: INTEGER)
			-- Set number of model outputs.
		require
			non_negative: a_count >= 0
		do
			output_count := a_count
		ensure
			count_set: output_count = a_count
		end

	set_opset_version (a_version: INTEGER)
			-- Set ONNX opset version.
		require
			positive: a_version > 0
		do
			opset_version := a_version
		ensure
			version_set: opset_version = a_version
		end

feature -- Metadata Population

	populate_from_session (a_session_ptr: POINTER; a_api_ptr: POINTER)
			-- Query input/output counts, names, shapes from loaded session.
		require
			session_valid: a_session_ptr /= default_pointer
			api_valid: a_api_ptr /= default_pointer
		local
			i: INTEGER
			l_name_ptr: POINTER
			l_alloc: POINTER
		do
			input_count := c_get_input_count (a_api_ptr, a_session_ptr)
			output_count := c_get_output_count (a_api_ptr, a_session_ptr)
			l_alloc := c_get_default_allocator (a_api_ptr)

			-- Query input names
			input_names.wipe_out
			from i := 0 until i >= input_count loop
				l_name_ptr := c_get_input_name (a_api_ptr, a_session_ptr, i, l_alloc)
				if l_name_ptr /= default_pointer then
					input_names.force (create {STRING}.make_from_c (l_name_ptr))
					c_allocator_free (a_api_ptr, l_alloc, l_name_ptr)
				else
					input_names.force ("input_" + i.out)
				end
				i := i + 1
			end

			-- Query output names
			output_names.wipe_out
			from i := 0 until i >= output_count loop
				l_name_ptr := c_get_output_name (a_api_ptr, a_session_ptr, i, l_alloc)
				if l_name_ptr /= default_pointer then
					output_names.force (create {STRING}.make_from_c (l_name_ptr))
					c_allocator_free (a_api_ptr, l_alloc, l_name_ptr)
				else
					output_names.force ("output_" + i.out)
				end
				i := i + 1
			end
		ensure
			input_count_set: input_count >= 0
			output_count_set: output_count >= 0
		end

feature {NONE} -- Implementation

	input_names: ARRAYED_LIST [STRING]
			-- Names of model inputs.

	output_names: ARRAYED_LIST [STRING]
			-- Names of model outputs.

	input_shapes: ARRAYED_LIST [ONNX_SHAPE]
			-- Shapes of model inputs.

	output_shapes: ARRAYED_LIST [ONNX_SHAPE]
			-- Shapes of model outputs.

	input_types: ARRAYED_LIST [ONNX_DATA_TYPE]
			-- Data types of model inputs.

	output_types: ARRAYED_LIST [ONNX_DATA_TYPE]
			-- Data types of model outputs.

feature {NONE} -- C externals

	c_get_input_count (a_api: POINTER; a_session: POINTER): INTEGER
			-- Get number of inputs from session.
		external
			"C inline use %"onnxruntime_c_api.h%""
		alias
			"[
				const OrtApi* api = (const OrtApi*)$a_api;
				size_t count = 0;
				OrtStatus* status = api->SessionGetInputCount((OrtSession*)$a_session, &count);
				if (status != NULL) {
					api->ReleaseStatus(status);
					return (EIF_INTEGER)0;
				}
				return (EIF_INTEGER)count;
			]"
		end

	c_get_output_count (a_api: POINTER; a_session: POINTER): INTEGER
			-- Get number of outputs from session.
		external
			"C inline use %"onnxruntime_c_api.h%""
		alias
			"[
				const OrtApi* api = (const OrtApi*)$a_api;
				size_t count = 0;
				OrtStatus* status = api->SessionGetOutputCount((OrtSession*)$a_session, &count);
				if (status != NULL) {
					api->ReleaseStatus(status);
					return (EIF_INTEGER)0;
				}
				return (EIF_INTEGER)count;
			]"
		end

	c_get_default_allocator (a_api: POINTER): POINTER
			-- Get default allocator.
		external
			"C inline use %"onnxruntime_c_api.h%""
		alias
			"[
				const OrtApi* api = (const OrtApi*)$a_api;
				OrtAllocator* allocator = NULL;
				OrtStatus* status = api->GetAllocatorWithDefaultOptions(&allocator);
				if (status != NULL) {
					api->ReleaseStatus(status);
					return (EIF_POINTER)0;
				}
				return (EIF_POINTER)allocator;
			]"
		end

	c_get_input_name (a_api: POINTER; a_session: POINTER; a_index: INTEGER; a_alloc: POINTER): POINTER
			-- Get input name at index.
		external
			"C inline use %"onnxruntime_c_api.h%""
		alias
			"[
				const OrtApi* api = (const OrtApi*)$a_api;
				char* name = NULL;
				OrtStatus* status = api->SessionGetInputName(
					(OrtSession*)$a_session, (size_t)$a_index, (OrtAllocator*)$a_alloc, &name);
				if (status != NULL) {
					api->ReleaseStatus(status);
					return (EIF_POINTER)0;
				}
				return (EIF_POINTER)name;
			]"
		end

	c_get_output_name (a_api: POINTER; a_session: POINTER; a_index: INTEGER; a_alloc: POINTER): POINTER
			-- Get output name at index.
		external
			"C inline use %"onnxruntime_c_api.h%""
		alias
			"[
				const OrtApi* api = (const OrtApi*)$a_api;
				char* name = NULL;
				OrtStatus* status = api->SessionGetOutputName(
					(OrtSession*)$a_session, (size_t)$a_index, (OrtAllocator*)$a_alloc, &name);
				if (status != NULL) {
					api->ReleaseStatus(status);
					return (EIF_POINTER)0;
				}
				return (EIF_POINTER)name;
			]"
		end

	c_allocator_free (a_api: POINTER; a_alloc: POINTER; a_ptr: POINTER)
			-- Free memory allocated by OrtAllocator.
		external
			"C inline use %"onnxruntime_c_api.h%""
		alias
			"[
				const OrtApi* api = (const OrtApi*)$a_api;
				OrtAllocator* alloc = (OrtAllocator*)$a_alloc;
				alloc->Free(alloc, $a_ptr);
			]"
		end

invariant
	path_not_void: model_path /= Void
	path_not_empty: not model_path.is_empty
	input_count_non_negative: input_count >= 0
	output_count_non_negative: output_count >= 0
	opset_version_non_negative: opset_version >= 0

end
