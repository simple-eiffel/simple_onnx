note
	description: "Simple ONNX Runtime wrapper for Eiffel inference"
	author: "Larry Rix"

class
	SIMPLE_ONNX

create
	make

feature {NONE} -- Initialization

	make
			-- Initialize ONNX Runtime environment.
		do
			environment := create {ONNX_ENVIRONMENT}.make
		end

feature -- Access

	environment: ONNX_ENVIRONMENT
			-- ONNX Runtime environment (singleton).

feature -- Model Loading

	load_model (a_path: STRING): detachable ONNX_MODEL
			-- Load model from .onnx file at `a_path`.
			-- Creates a temporary session to query model metadata.
		require
			path_not_void: a_path /= Void
			path_not_empty: not a_path.is_empty
		local
			l_model: ONNX_MODEL
			l_session: ONNX_SESSION
		do
			create l_model.make (a_path)
			-- Create temporary session to populate metadata
			create l_session.make (l_model, environment)
			l_session.load
			if l_session.is_loaded then
				-- Metadata was populated during load
				l_session.unload
				Result := l_model
			end
		ensure
			result_valid: Result /= Void implies (
				not Result.model_path.is_empty and
				Result.input_count > 0 and
				Result.output_count > 0
			)
		end

feature -- Session Creation

	create_session (a_model: ONNX_MODEL): detachable ONNX_SESSION
			-- Create inference session for `a_model`.
		require
			model_not_void: a_model /= Void
		do
			create Result.make (a_model, environment)
			Result.load
			if not Result.is_loaded then
				Result := Void
			end
		ensure
			result_valid: Result /= Void implies (
				Result.model = a_model and
				Result.is_loaded
			)
		end

feature -- Provider Management

	available_providers: ARRAYED_LIST [STRING]
			-- List of available execution providers.
		do
			Result := environment.available_providers
		end

	is_provider_available (a_name: STRING): BOOLEAN
			-- Is execution provider `a_name` available?
		require
			name_not_void: a_name /= Void
			name_not_empty: not a_name.is_empty
		do
			Result := environment.is_provider_available (a_name)
		end

feature -- Information

	version_info: STRING
			-- ONNX Runtime version information.
		do
			Result := environment.version_info
		ensure
			result_not_empty: not Result.is_empty
		end

feature -- Builder Pattern

	create_tensor_float32 (a_shape: ONNX_SHAPE): ONNX_TENSOR
			-- Create float32 input tensor with `a_shape`.
		require
			shape_not_void: a_shape /= Void
		do
			create Result.make_float32 (a_shape)
		ensure
			result_not_void: Result /= Void
			shape_correct: Result.shape = a_shape
			type_correct: Result.data_type.type_id = 1
		end

	create_tensor_int32 (a_shape: ONNX_SHAPE): ONNX_TENSOR
			-- Create int32 input tensor with `a_shape`.
		require
			shape_not_void: a_shape /= Void
		do
			create Result.make_int32 (a_shape)
		ensure
			result_not_void: Result /= Void
			shape_correct: Result.shape = a_shape
			type_correct: Result.data_type.type_id = 6
		end

	create_tensor_int64 (a_shape: ONNX_SHAPE): ONNX_TENSOR
			-- Create int64 input tensor with `a_shape`.
		require
			shape_not_void: a_shape /= Void
		do
			create Result.make_int64 (a_shape)
		ensure
			result_not_void: Result /= Void
			shape_correct: Result.shape = a_shape
			type_correct: Result.data_type.type_id = 7
		end

	create_shape (a_dimensions: ARRAY [INTEGER]): ONNX_SHAPE
			-- Create tensor shape from dimensions array.
		require
			dims_not_void: a_dimensions /= Void
			dims_not_empty: a_dimensions.count > 0
			all_positive: across a_dimensions as ic all ic >= 0 end
		do
			create Result.make (a_dimensions)
		ensure
			result_not_void: Result /= Void
			rank_correct: Result.rank = a_dimensions.count
		end

end
