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
			-- Get name of input at `index` (0-based).
		require
			valid_index: a_index >= 0 and a_index < input_count
		do
			-- Implementation in Phase 4 (stub)
		ensure
			result_not_empty: Result /= Void implies not Result.is_empty
		end

	input_shape (a_index: INTEGER): detachable ONNX_SHAPE
			-- Get shape of input at `index` (0-based).
		require
			valid_index: a_index >= 0 and a_index < input_count
		do
			-- Implementation in Phase 4 (stub)
		end

	input_dtype (a_index: INTEGER): detachable ONNX_DATA_TYPE
			-- Get data type of input at `index` (0-based).
		require
			valid_index: a_index >= 0 and a_index < input_count
		do
			-- Implementation in Phase 4 (stub)
		end

	output_name (a_index: INTEGER): detachable STRING
			-- Get name of output at `index` (0-based).
		require
			valid_index: a_index >= 0 and a_index < output_count
		do
			-- Implementation in Phase 4 (stub)
		ensure
			result_not_empty: Result /= Void implies not Result.is_empty
		end

	output_shape (a_index: INTEGER): detachable ONNX_SHAPE
			-- Get shape of output at `index` (0-based).
		require
			valid_index: a_index >= 0 and a_index < output_count
		do
			-- Implementation in Phase 4 (stub)
		end

	output_dtype (a_index: INTEGER): detachable ONNX_DATA_TYPE
			-- Get data type of output at `index` (0-based).
		require
			valid_index: a_index >= 0 and a_index < output_count
		do
			-- Implementation in Phase 4 (stub)
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

invariant
	path_not_void: model_path /= Void
	path_not_empty: not model_path.is_empty
	input_count_non_negative: input_count >= 0
	output_count_non_negative: output_count >= 0
	opset_version_positive: opset_version > 0

end
