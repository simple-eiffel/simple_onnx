note
	description: "ONNX data type enumeration"
	author: "Larry Rix"

class
	ONNX_DATA_TYPE

create
	make

feature {NONE} -- Initialization

	make (a_type_id: INTEGER)
			-- Create data type with `a_type_id`.
		require
			valid_type: is_valid_type (a_type_id)
		do
			type_id := a_type_id
		ensure
			type_id_set: type_id = a_type_id
		end

feature -- Access

	type_id: INTEGER
			-- ONNX type identifier (1=float32, 6=int32, 7=int64, 9=bool, 10=float16)

	name: STRING
			-- Human-readable name of data type.
		do
			inspect type_id
			when 1 then Result := "float32"
			when 6 then Result := "int32"
			when 7 then Result := "int64"
			when 9 then Result := "bool"
			when 10 then Result := "float16"
			else Result := "unknown"
			end
		ensure
			result_not_empty: not Result.is_empty
		end

	element_size: INTEGER
			-- Size in bytes of single element.
		do
			inspect type_id
			when 1 then Result := 4  -- float32
			when 6 then Result := 4  -- int32
			when 7 then Result := 8  -- int64
			when 9 then Result := 1  -- bool
			when 10 then Result := 2 -- float16
			else Result := 0
			end
		ensure
			positive_or_zero: Result >= 0
		end

	is_floating_point: BOOLEAN
			-- Is this a floating-point type?
		do
			Result := type_id = 1 or type_id = 10
		ensure
			consistent: Result = (type_id = 1 or type_id = 10)
		end

	is_integer: BOOLEAN
			-- Is this an integer type?
		do
			Result := type_id = 6 or type_id = 7
		ensure
			consistent: Result = (type_id = 6 or type_id = 7)
		end

	is_boolean: BOOLEAN
			-- Is this a boolean type?
		do
			Result := type_id = 9
		ensure
			consistent: Result = (type_id = 9)
		end

feature -- Comparison

	same_type (other: ONNX_DATA_TYPE): BOOLEAN
			-- Is type same as `other`?
		require
			other_not_void: other /= Void
		do
			Result := type_id = other.type_id
		ensure
			definition: Result = (type_id = other.type_id)
		end

feature -- Type Constants

	float32: INTEGER = 1
	int32: INTEGER = 6
	int64: INTEGER = 7
	bool: INTEGER = 9
	float16: INTEGER = 10

feature -- Validation

	is_valid_type (a_type_id: INTEGER): BOOLEAN
			-- Is `a_type_id` a supported ONNX type?
		do
			Result := a_type_id = float32 or a_type_id = int32 or
					  a_type_id = int64 or a_type_id = bool or a_type_id = float16
		ensure
			definition: Result = (a_type_id = float32 or a_type_id = int32 or
								   a_type_id = int64 or a_type_id = bool or a_type_id = float16)
		end

invariant
	valid_type: is_valid_type (type_id)
	element_size_matches_type: element_size > 0

end
