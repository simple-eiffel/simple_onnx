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
	make_float16

feature {NONE} -- Initialization

	make_float32 (a_shape: ONNX_SHAPE)
			-- Create float32 tensor with `a_shape`.
		require
			shape_not_void: a_shape /= Void
		do
			shape := a_shape
			data_type := create {ONNX_DATA_TYPE}.make (1)  -- float32
			create data.make_filled (0.0, 1, shape.element_count)
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
			data_type := create {ONNX_DATA_TYPE}.make (6)  -- int32
			create int_data.make_filled (0, 1, shape.element_count)
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
			data_type := create {ONNX_DATA_TYPE}.make (7)  -- int64
			create int64_data.make_filled (0, 1, shape.element_count)
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
			data_type := create {ONNX_DATA_TYPE}.make (9)  -- bool
			create bool_data.make_filled (False, 1, shape.element_count)
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
			data_type := create {ONNX_DATA_TYPE}.make (10)  -- float16
			create data.make_filled (0.0, 1, shape.element_count)
		ensure
			shape_set: shape = a_shape
			data_type_float16: data_type.type_id = 10
			data_allocated: data /= Void
			element_count_matches: data.count = shape.element_count
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

feature -- Data Manipulation

	set_data_from_array (a_data: ARRAY [REAL_32])
			-- Set tensor data from float32 array (for float tensors).
		require
			is_float32: data_type.type_id = 1
			array_not_void: a_data /= Void
			correct_size: a_data.count = element_count
		do
			across 1 |..| a_data.count as ic
			loop
				data [ic] := a_data [ic.lower + ic - 1]
			end
		ensure
			data_set: across 1 |..| element_count as ic all
						 data [ic] = a_data [ic.lower + ic - 1]
					 end
		end

	set_int_data_from_array (a_data: ARRAY [INTEGER])
			-- Set tensor data from int32 array (for int32 tensors).
		require
			is_int32: data_type.type_id = 6
			array_not_void: a_data /= Void
			correct_size: a_data.count = element_count
		do
			across 1 |..| a_data.count as ic
			loop
				int_data [ic] := a_data [ic.lower + ic - 1]
			end
		ensure
			data_set: across 1 |..| element_count as ic all
						 int_data [ic] = a_data [ic.lower + ic - 1]
					 end
		end

	set_int64_data_from_array (a_data: ARRAY [INTEGER_64])
			-- Set tensor data from int64 array (for int64 tensors).
		require
			is_int64: data_type.type_id = 7
			array_not_void: a_data /= Void
			correct_size: a_data.count = element_count
		do
			across 1 |..| a_data.count as ic
			loop
				int64_data [ic] := a_data [ic.lower + ic - 1]
			end
		ensure
			data_set: across 1 |..| element_count as ic all
						 int64_data [ic] = a_data [ic.lower + ic - 1]
					 end
		end

	set_bool_data_from_array (a_data: ARRAY [BOOLEAN])
			-- Set tensor data from bool array (for bool tensors).
		require
			is_bool: data_type.type_id = 9
			array_not_void: a_data /= Void
			correct_size: a_data.count = element_count
		do
			across 1 |..| a_data.count as ic
			loop
				bool_data [ic] := a_data [ic.lower + ic - 1]
			end
		ensure
			data_set: across 1 |..| element_count as ic all
						 bool_data [ic] = a_data [ic.lower + ic - 1]
					 end
		end

feature -- Data Retrieval

	to_array: ARRAY [REAL_32]
			-- Convert tensor to float32 array.
		require
			is_float32: data_type.type_id = 1
		do
			create Result.make (1, element_count)
			across 1 |..| element_count as ic
			loop
				Result [ic] := data [ic]
			end
		ensure
			result_not_void: Result /= Void
			result_size: Result.count = element_count
			data_matches: across 1 |..| element_count as ic all
							   Result [ic] = data [ic]
						   end
		end

	to_int_array: ARRAY [INTEGER]
			-- Convert tensor to int32 array.
		require
			is_int32: data_type.type_id = 6
		do
			create Result.make (1, element_count)
			across 1 |..| element_count as ic
			loop
				Result [ic] := int_data [ic]
			end
		ensure
			result_not_void: Result /= Void
			result_size: Result.count = element_count
			data_matches: across 1 |..| element_count as ic all
							   Result [ic] = int_data [ic]
						   end
		end

	to_int64_array: ARRAY [INTEGER_64]
			-- Convert tensor to int64 array.
		require
			is_int64: data_type.type_id = 7
		do
			create Result.make (1, element_count)
			across 1 |..| element_count as ic
			loop
				Result [ic] := int64_data [ic]
			end
		ensure
			result_not_void: Result /= Void
			result_size: Result.count = element_count
			data_matches: across 1 |..| element_count as ic all
							   Result [ic] = int64_data [ic]
						   end
		end

	to_bool_array: ARRAY [BOOLEAN]
			-- Convert tensor to bool array.
		require
			is_bool: data_type.type_id = 9
		do
			create Result.make (1, element_count)
			across 1 |..| element_count as ic
			loop
				Result [ic] := bool_data [ic]
			end
		ensure
			result_not_void: Result /= Void
			result_size: Result.count = element_count
			data_matches: across 1 |..| element_count as ic all
							   Result [ic] = bool_data [ic]
						   end
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

invariant
	shape_not_void: shape /= Void
	data_type_not_void: data_type /= Void
	element_count_positive: element_count > 0

end
