note
	description: "ONNX node argument (input/output descriptor)"
	author: "Larry Rix"

class
	ONNX_NODE_ARG

create
	make

feature {NONE} -- Initialization

	make (a_name: STRING; a_shape: ONNX_SHAPE; a_data_type: ONNX_DATA_TYPE)
			-- Create node argument descriptor.
		require
			name_not_void: a_name /= Void
			name_not_empty: not a_name.is_empty
			shape_not_void: a_shape /= Void
			data_type_not_void: a_data_type /= Void
		do
			name := a_name.twin
			shape := a_shape
			data_type := a_data_type
		ensure
			name_set: name.same_string (a_name)
			shape_set: shape = a_shape
			data_type_set: data_type = a_data_type
		end

feature -- Access

	name: STRING
			-- Argument name (e.g., "input_ids", "attention_mask").

	shape: ONNX_SHAPE
			-- Expected tensor shape.

	data_type: ONNX_DATA_TYPE
			-- Expected data type.

	description: detachable STRING
			-- Optional description of this argument.

feature -- Modification

	set_description (a_desc: STRING)
			-- Set optional description.
		require
			desc_not_void: a_desc /= Void
		do
			description := a_desc.twin
		ensure
			description_set: description /= Void and description.same_string (a_desc)
		end

feature -- Queries

	is_compatible_with (a_tensor: ONNX_TENSOR): BOOLEAN
			-- Can `a_tensor` be used for this argument?
		require
			tensor_not_void: a_tensor /= Void
		do
			Result := a_tensor.shape.compatible_with (shape) and
					  data_type.is_equal (a_tensor.data_type)
		ensure
			definition: Result = (a_tensor.shape.compatible_with (shape) and
								   data_type.is_equal (a_tensor.data_type))
		end

invariant
	name_not_void: name /= Void
	name_not_empty: not name.is_empty
	shape_not_void: shape /= Void
	data_type_not_void: data_type /= Void

end
