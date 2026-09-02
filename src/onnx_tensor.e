note
	description: "ONNX tensor (multi-dimensional typed array)"
	author: "Larry Rix"

class
	ONNX_TENSOR

create
	make_float32,
	make_int32,
	make_int64,
	make_bool,
	make_float16,
	make_from_ort_value

feature {NONE} -- Initialization

	make_float32 (a_shape: ONNX_SHAPE)
			-- Create float32 tensor with `a_shape`.
		require
			shape_not_void: a_shape /= Void
		do
			shape := a_shape
			data_type := create {ONNX_DATA_TYPE}.make (1)
			create data.make_filled (0.0, 1, shape.element_count)
			create int_data.make_filled (0, 1, 1)
			create int64_data.make_filled (0, 1, 1)
			create bool_data.make_filled (False, 1, 1)
		ensure
			shape_set: shape = a_shape
			data_type_float32: data_type.type_id = 1
			data_allocated: data /= Void
			element_count_matches: data.count = shape.element_count
		end

	make_int32 (a_shape: ONNX_SHAPE)
			-- Create int32 tensor with `a_shape`.
		require
			shape_not_void: a_shape /= Void
		do
			shape := a_shape
			data_type := create {ONNX_DATA_TYPE}.make (6)
			create int_data.make_filled (0, 1, shape.element_count)
			create data.make_filled (0.0, 1, 1)
			create int64_data.make_filled (0, 1, 1)
			create bool_data.make_filled (False, 1, 1)
		ensure
			shape_set: shape = a_shape
			data_type_int32: data_type.type_id = 6
			int_data_allocated: int_data /= Void
			element_count_matches: int_data.count = shape.element_count
		end

	make_int64 (a_shape: ONNX_SHAPE)
			-- Create int64 tensor with `a_shape`.
		require
			shape_not_void: a_shape /= Void
		do
			shape := a_shape
			data_type := create {ONNX_DATA_TYPE}.make (7)
			create int64_data.make_filled (0, 1, shape.element_count)
			create data.make_filled (0.0, 1, 1)
			create int_data.make_filled (0, 1, 1)
			create bool_data.make_filled (False, 1, 1)
		ensure
			shape_set: shape = a_shape
			data_type_int64: data_type.type_id = 7
			int64_data_allocated: int64_data /= Void
			element_count_matches: int64_data.count = shape.element_count
		end

	make_bool (a_shape: ONNX_SHAPE)
			-- Create bool tensor with `a_shape`.
		require
			shape_not_void: a_shape /= Void
		do
			shape := a_shape
			data_type := create {ONNX_DATA_TYPE}.make (9)
			create bool_data.make_filled (False, 1, shape.element_count)
			create data.make_filled (0.0, 1, 1)
			create int_data.make_filled (0, 1, 1)
			create int64_data.make_filled (0, 1, 1)
		ensure
			shape_set: shape = a_shape
			data_type_bool: data_type.type_id = 9
			bool_data_allocated: bool_data /= Void
			element_count_matches: bool_data.count = shape.element_count
		end

	make_float16 (a_shape: ONNX_SHAPE)
			-- Create float16 tensor with `a_shape`.
		require
			shape_not_void: a_shape /= Void
		do
			shape := a_shape
			data_type := create {ONNX_DATA_TYPE}.make (10)
			create data.make_filled (0.0, 1, shape.element_count)
			create int_data.make_filled (0, 1, 1)
			create int64_data.make_filled (0, 1, 1)
			create bool_data.make_filled (False, 1, 1)
		ensure
			shape_set: shape = a_shape
			data_type_float16: data_type.type_id = 10
			data_allocated: data /= Void
			element_count_matches: data.count = shape.element_count
		end

	make_from_ort_value (a_ort_value: POINTER; a_api_ptr: POINTER)
			-- Create Eiffel tensor from OrtValue* output.
		require
			value_valid: a_ort_value /= default_pointer
			api_valid: a_api_ptr /= default_pointer
		local
			l_rank: INTEGER
			l_count: INTEGER
			l_type_id: INTEGER
			l_dims: ARRAY [INTEGER]
			l_shape_buf: MANAGED_POINTER
			i: INTEGER
		do
			-- Query shape info
			l_rank := c_get_ort_value_rank (a_api_ptr, a_ort_value)
			l_type_id := c_get_ort_value_type (a_api_ptr, a_ort_value)
			l_count := c_get_ort_value_count (a_api_ptr, a_ort_value)

			-- Get dimensions via C buffer
			if l_rank > 0 then
				create l_shape_buf.make (l_rank * 8)
				c_get_ort_value_dims (a_api_ptr, a_ort_value, l_shape_buf.item, l_rank)
				create l_dims.make_filled (1, 1, l_rank)
				from i := 0 until i >= l_rank loop
					l_dims [i + 1] := l_shape_buf.read_integer_64 (i * 8).to_integer_32
					i := i + 1
				end
			else
				create l_dims.make_filled (l_count.max (1), 1, 1)
			end
			create shape.make (l_dims)

			-- Initialize based on element type
			if l_type_id = 1 then
				data_type := create {ONNX_DATA_TYPE}.make (1)
				create data.make_filled (0.0, 1, l_count.max (1))
				create int_data.make_filled (0, 1, 1)
				create int64_data.make_filled (0, 1, 1)
				create bool_data.make_filled (False, 1, 1)
				c_copy_float_data (a_api_ptr, a_ort_value, data.area.base_address, l_count)
			elseif l_type_id = 7 then
				data_type := create {ONNX_DATA_TYPE}.make (7)
				create int64_data.make_filled (0, 1, l_count.max (1))
				create data.make_filled (0.0, 1, 1)
				create int_data.make_filled (0, 1, 1)
				create bool_data.make_filled (False, 1, 1)
				c_copy_int64_data (a_api_ptr, a_ort_value, int64_data.area.base_address, l_count)
			elseif l_type_id = 6 then
				data_type := create {ONNX_DATA_TYPE}.make (6)
				create int_data.make_filled (0, 1, l_count.max (1))
				create data.make_filled (0.0, 1, 1)
				create int64_data.make_filled (0, 1, 1)
				create bool_data.make_filled (False, 1, 1)
				c_copy_int32_data (a_api_ptr, a_ort_value, int_data.area.base_address, l_count)
			else
				data_type := create {ONNX_DATA_TYPE}.make (1)
				create data.make_filled (0.0, 1, l_count.max (1))
				create int_data.make_filled (0, 1, 1)
				create int64_data.make_filled (0, 1, 1)
				create bool_data.make_filled (False, 1, 1)
			end
		end

feature -- Access

	shape: ONNX_SHAPE
			-- Tensor shape (dimensions).

	data_type: ONNX_DATA_TYPE
			-- Tensor element type.

	element_count: INTEGER
			-- Total number of elements.
		do
			Result := shape.element_count
		ensure
			positive: Result > 0
		end

feature -- OrtValue Conversion

	to_ort_value (a_api_ptr: POINTER): POINTER
			-- Convert Eiffel tensor to OrtValue* for inference.
		require
			api_valid: a_api_ptr /= default_pointer
		local
			l_shape_buf: MANAGED_POINTER
			i: INTEGER
		do
			-- Build int64_t shape array
			create l_shape_buf.make (shape.rank * 8)
			from i := 1 until i > shape.rank loop
				l_shape_buf.put_integer_64 (shape.dimensions [i].to_integer_64, (i - 1) * 8)
				i := i + 1
			end

			if data_type.type_id = 7 then
				Result := c_create_int64_tensor (a_api_ptr, int64_data.area.base_address,
					int64_data.count, l_shape_buf.item, shape.rank)
			elseif data_type.type_id = 1 then
				Result := c_create_float_tensor (a_api_ptr, data.area.base_address,
					data.count, l_shape_buf.item, shape.rank)
			elseif data_type.type_id = 6 then
				Result := c_create_int32_tensor (a_api_ptr, int_data.area.base_address,
					int_data.count, l_shape_buf.item, shape.rank)
			end
		end

feature -- Data Manipulation

	set_data_from_array (a_data: ARRAY [REAL_32])
			-- Set tensor data from float32 array.
		require
			is_float32: data_type.type_id = 1
			array_not_void: a_data /= Void
			correct_size: a_data.count = element_count
		do
			across 1 |..| a_data.count as ic loop
				data [ic] := a_data [a_data.lower + ic - 1]
			end
		ensure
			data_set: across 1 |..| element_count as ic all
						 data [ic] = a_data [a_data.lower + ic - 1]
					 end
		end

	set_int_data_from_array (a_data: ARRAY [INTEGER])
			-- Set tensor data from int32 array.
		require
			is_int32: data_type.type_id = 6
			array_not_void: a_data /= Void
			correct_size: a_data.count = element_count
		do
			across 1 |..| a_data.count as ic loop
				int_data [ic] := a_data [a_data.lower + ic - 1]
			end
		ensure
			data_set: across 1 |..| element_count as ic all
						 int_data [ic] = a_data [a_data.lower + ic - 1]
					 end
		end

	set_int64_data_from_array (a_data: ARRAY [INTEGER_64])
			-- Set tensor data from int64 array.
		require
			is_int64: data_type.type_id = 7
			array_not_void: a_data /= Void
			correct_size: a_data.count = element_count
		do
			across 1 |..| a_data.count as ic loop
				int64_data [ic] := a_data [a_data.lower + ic - 1]
			end
		ensure
			data_set: across 1 |..| element_count as ic all
						 int64_data [ic] = a_data [a_data.lower + ic - 1]
					 end
		end

	set_bool_data_from_array (a_data: ARRAY [BOOLEAN])
			-- Set tensor data from bool array.
		require
			is_bool: data_type.type_id = 9
			array_not_void: a_data /= Void
			correct_size: a_data.count = element_count
		do
			across 1 |..| a_data.count as ic loop
				bool_data [ic] := a_data [a_data.lower + ic - 1]
			end
		ensure
			data_set: across 1 |..| element_count as ic all
						 bool_data [ic] = a_data [a_data.lower + ic - 1]
					 end
		end

feature -- Data Retrieval

	to_array: ARRAY [REAL_32]
			-- Convert tensor to float32 array.
		require
			is_float32: data_type.type_id = 1
		do
			create Result.make_filled (0.0, 1, element_count)
			across 1 |..| element_count as ic loop
				Result [ic] := data [ic]
			end
		ensure
			result_not_void: Result /= Void
			result_size: Result.count = element_count
		end

	to_int_array: ARRAY [INTEGER]
			-- Convert tensor to int32 array.
		require
			is_int32: data_type.type_id = 6
		do
			create Result.make_filled (0, 1, element_count)
			across 1 |..| element_count as ic loop
				Result [ic] := int_data [ic]
			end
		ensure
			result_not_void: Result /= Void
			result_size: Result.count = element_count
		end

	to_int64_array: ARRAY [INTEGER_64]
			-- Convert tensor to int64 array.
		require
			is_int64: data_type.type_id = 7
		do
			create Result.make_filled (0, 1, element_count)
			across 1 |..| element_count as ic loop
				Result [ic] := int64_data [ic]
			end
		ensure
			result_not_void: Result /= Void
			result_size: Result.count = element_count
		end

	to_bool_array: ARRAY [BOOLEAN]
			-- Convert tensor to bool array.
		require
			is_bool: data_type.type_id = 9
		do
			create Result.make_filled (False, 1, element_count)
			across 1 |..| element_count as ic loop
				Result [ic] := bool_data [ic]
			end
		ensure
			result_not_void: Result /= Void
			result_size: Result.count = element_count
		end

feature {NONE} -- Implementation

	data: ARRAY [REAL_32]
			-- Float32 data storage.

	int_data: ARRAY [INTEGER]
			-- Int32 data storage.

	int64_data: ARRAY [INTEGER_64]
			-- Int64 data storage.

	bool_data: ARRAY [BOOLEAN]
			-- Bool data storage.

feature {NONE} -- C externals: OrtValue creation

	c_create_float_tensor (a_api: POINTER; a_data: POINTER; a_count: INTEGER;
			a_shape: POINTER; a_rank: INTEGER): POINTER
			-- Create OrtValue* from float32 data.
		external
			"C inline use %"onnxruntime_c_api.h%""
		alias
			"[
				const OrtApi* api = (const OrtApi*)$a_api;
				OrtMemoryInfo* mem_info = NULL;
				OrtValue* value = NULL;

				OrtStatus* status = api->CreateCpuMemoryInfo(
					OrtArenaAllocator, OrtMemTypeDefault, &mem_info);
				if (status != NULL) {
					api->ReleaseStatus(status);
					return (EIF_POINTER)0;
				}

				status = api->CreateTensorWithDataAsOrtValue(
					mem_info, (void*)$a_data, (size_t)($a_count * sizeof(float)),
					(const int64_t*)$a_shape, (size_t)$a_rank,
					ONNX_TENSOR_ELEMENT_DATA_TYPE_FLOAT, &value);
				api->ReleaseMemoryInfo(mem_info);

				if (status != NULL) {
					api->ReleaseStatus(status);
					return (EIF_POINTER)0;
				}
				return (EIF_POINTER)value;
			]"
		end

	c_create_int64_tensor (a_api: POINTER; a_data: POINTER; a_count: INTEGER;
			a_shape: POINTER; a_rank: INTEGER): POINTER
			-- Create OrtValue* from int64 data.
		external
			"C inline use %"onnxruntime_c_api.h%""
		alias
			"[
				const OrtApi* api = (const OrtApi*)$a_api;
				OrtMemoryInfo* mem_info = NULL;
				OrtValue* value = NULL;

				OrtStatus* status = api->CreateCpuMemoryInfo(
					OrtArenaAllocator, OrtMemTypeDefault, &mem_info);
				if (status != NULL) {
					api->ReleaseStatus(status);
					return (EIF_POINTER)0;
				}

				status = api->CreateTensorWithDataAsOrtValue(
					mem_info, (void*)$a_data, (size_t)($a_count * sizeof(int64_t)),
					(const int64_t*)$a_shape, (size_t)$a_rank,
					ONNX_TENSOR_ELEMENT_DATA_TYPE_INT64, &value);
				api->ReleaseMemoryInfo(mem_info);

				if (status != NULL) {
					api->ReleaseStatus(status);
					return (EIF_POINTER)0;
				}
				return (EIF_POINTER)value;
			]"
		end

	c_create_int32_tensor (a_api: POINTER; a_data: POINTER; a_count: INTEGER;
			a_shape: POINTER; a_rank: INTEGER): POINTER
			-- Create OrtValue* from int32 data.
		external
			"C inline use %"onnxruntime_c_api.h%""
		alias
			"[
				const OrtApi* api = (const OrtApi*)$a_api;
				OrtMemoryInfo* mem_info = NULL;
				OrtValue* value = NULL;

				OrtStatus* status = api->CreateCpuMemoryInfo(
					OrtArenaAllocator, OrtMemTypeDefault, &mem_info);
				if (status != NULL) {
					api->ReleaseStatus(status);
					return (EIF_POINTER)0;
				}

				status = api->CreateTensorWithDataAsOrtValue(
					mem_info, (void*)$a_data, (size_t)($a_count * sizeof(int32_t)),
					(const int64_t*)$a_shape, (size_t)$a_rank,
					ONNX_TENSOR_ELEMENT_DATA_TYPE_INT32, &value);
				api->ReleaseMemoryInfo(mem_info);

				if (status != NULL) {
					api->ReleaseStatus(status);
					return (EIF_POINTER)0;
				}
				return (EIF_POINTER)value;
			]"
		end

feature {NONE} -- C externals: OrtValue reading

	c_get_ort_value_rank (a_api: POINTER; a_value: POINTER): INTEGER
			-- Get rank (number of dimensions) from OrtValue.
		external
			"C inline use %"onnxruntime_c_api.h%""
		alias
			"[
				const OrtApi* api = (const OrtApi*)$a_api;
				OrtTypeInfo* type_info = NULL;
				const OrtTensorTypeAndShapeInfo* tensor_info = NULL;
				size_t rank = 0;

				OrtStatus* status = api->GetTypeInfo((OrtValue*)$a_value, &type_info);
				if (status != NULL) {
					api->ReleaseStatus(status);
					return (EIF_INTEGER)0;
				}
				status = api->CastTypeInfoToTensorInfo(type_info, &tensor_info);
				if (status != NULL) {
					api->ReleaseStatus(status);
					api->ReleaseTypeInfo(type_info);
					return (EIF_INTEGER)0;
				}
				api->GetDimensionsCount(tensor_info, &rank);
				api->ReleaseTypeInfo(type_info);
				return (EIF_INTEGER)rank;
			]"
		end

	c_get_ort_value_type (a_api: POINTER; a_value: POINTER): INTEGER
			-- Get element type from OrtValue.
		external
			"C inline use %"onnxruntime_c_api.h%""
		alias
			"[
				const OrtApi* api = (const OrtApi*)$a_api;
				OrtTypeInfo* type_info = NULL;
				const OrtTensorTypeAndShapeInfo* tensor_info = NULL;
				enum ONNXTensorElementDataType type_id = ONNX_TENSOR_ELEMENT_DATA_TYPE_UNDEFINED;

				OrtStatus* status = api->GetTypeInfo((OrtValue*)$a_value, &type_info);
				if (status != NULL) {
					api->ReleaseStatus(status);
					return (EIF_INTEGER)0;
				}
				status = api->CastTypeInfoToTensorInfo(type_info, &tensor_info);
				if (status != NULL) {
					api->ReleaseStatus(status);
					api->ReleaseTypeInfo(type_info);
					return (EIF_INTEGER)0;
				}
				api->GetTensorElementType(tensor_info, &type_id);
				api->ReleaseTypeInfo(type_info);
				return (EIF_INTEGER)type_id;
			]"
		end

	c_get_ort_value_count (a_api: POINTER; a_value: POINTER): INTEGER
			-- Get total element count from OrtValue.
		external
			"C inline use %"onnxruntime_c_api.h%""
		alias
			"[
				const OrtApi* api = (const OrtApi*)$a_api;
				OrtTypeInfo* type_info = NULL;
				const OrtTensorTypeAndShapeInfo* tensor_info = NULL;
				size_t count = 0;

				OrtStatus* status = api->GetTypeInfo((OrtValue*)$a_value, &type_info);
				if (status != NULL) {
					api->ReleaseStatus(status);
					return (EIF_INTEGER)0;
				}
				status = api->CastTypeInfoToTensorInfo(type_info, &tensor_info);
				if (status != NULL) {
					api->ReleaseStatus(status);
					api->ReleaseTypeInfo(type_info);
					return (EIF_INTEGER)0;
				}
				api->GetTensorShapeElementCount(tensor_info, &count);
				api->ReleaseTypeInfo(type_info);
				return (EIF_INTEGER)count;
			]"
		end

	c_get_ort_value_dims (a_api: POINTER; a_value: POINTER; a_dims: POINTER; a_rank: INTEGER)
			-- Get all dimensions from OrtValue into pre-allocated int64_t buffer.
		external
			"C inline use %"onnxruntime_c_api.h%""
		alias
			"[
				const OrtApi* api = (const OrtApi*)$a_api;
				OrtTypeInfo* type_info = NULL;
				const OrtTensorTypeAndShapeInfo* tensor_info = NULL;

				OrtStatus* status = api->GetTypeInfo((OrtValue*)$a_value, &type_info);
				if (status != NULL) {
					api->ReleaseStatus(status);
					return;
				}
				status = api->CastTypeInfoToTensorInfo(type_info, &tensor_info);
				if (status != NULL) {
					api->ReleaseStatus(status);
					api->ReleaseTypeInfo(type_info);
					return;
				}
				api->GetDimensions(tensor_info, (int64_t*)$a_dims, (size_t)$a_rank);
				api->ReleaseTypeInfo(type_info);
			]"
		end

	c_copy_float_data (a_api: POINTER; a_value: POINTER; a_dest: POINTER; a_count: INTEGER)
			-- Copy float32 data from OrtValue to destination buffer.
		external
			"C inline use %"onnxruntime_c_api.h%", <string.h>"
		alias
			"[
				const OrtApi* api = (const OrtApi*)$a_api;
				float* src = NULL;
				OrtStatus* status = api->GetTensorMutableData((OrtValue*)$a_value, (void**)&src);
				if (status != NULL) {
					api->ReleaseStatus(status);
					return;
				}
				memcpy($a_dest, src, (size_t)$a_count * sizeof(float));
			]"
		end

	c_copy_int64_data (a_api: POINTER; a_value: POINTER; a_dest: POINTER; a_count: INTEGER)
			-- Copy int64 data from OrtValue to destination buffer.
		external
			"C inline use %"onnxruntime_c_api.h%", <string.h>"
		alias
			"[
				const OrtApi* api = (const OrtApi*)$a_api;
				int64_t* src = NULL;
				OrtStatus* status = api->GetTensorMutableData((OrtValue*)$a_value, (void**)&src);
				if (status != NULL) {
					api->ReleaseStatus(status);
					return;
				}
				memcpy($a_dest, src, (size_t)$a_count * sizeof(int64_t));
			]"
		end

	c_copy_int32_data (a_api: POINTER; a_value: POINTER; a_dest: POINTER; a_count: INTEGER)
			-- Copy int32 data from OrtValue to destination buffer.
		external
			"C inline use %"onnxruntime_c_api.h%", <string.h>"
		alias
			"[
				const OrtApi* api = (const OrtApi*)$a_api;
				int32_t* src = NULL;
				OrtStatus* status = api->GetTensorMutableData((OrtValue*)$a_value, (void**)&src);
				if (status != NULL) {
					api->ReleaseStatus(status);
					return;
				}
				memcpy($a_dest, src, (size_t)$a_count * sizeof(int32_t));
			]"
		end

invariant
	shape_not_void: shape /= Void
	data_type_not_void: data_type /= Void
	element_count_positive: element_count > 0

end
