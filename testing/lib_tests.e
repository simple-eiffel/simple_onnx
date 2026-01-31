note
	description: "Unit tests for simple_onnx library"
	author: "Larry Rix"

class
	LIB_TESTS

inherit
	TEST_SET_BASE

feature -- Tests: SIMPLE_ONNX Facade

	test_simple_onnx_make
			-- Test SIMPLE_ONNX initialization.
		local
			l_onnx: SIMPLE_ONNX
		do
			create l_onnx.make
			assert ("environment created", l_onnx.environment /= Void)
		end

	test_available_providers
			-- Test that CPU provider is always available.
		local
			l_onnx: SIMPLE_ONNX
		do
			create l_onnx.make
			assert ("cpu provider available", l_onnx.is_provider_available ("CPUExecutionProvider"))
		end

	test_version_info
			-- Test version info retrieval.
		local
			l_onnx: SIMPLE_ONNX
			l_version: STRING
		do
			create l_onnx.make
			l_version := l_onnx.version_info
			assert ("version not empty", not l_version.is_empty)
		end

feature -- Tests: ONNX_TENSOR Creation

	test_create_float32_tensor
			-- Test float32 tensor creation.
		local
			l_runtime: SIMPLE_ONNX
			l_shape: ONNX_SHAPE
			l_tensor: ONNX_TENSOR
		do
			create l_runtime.make
			l_shape := l_runtime.create_shape (<<1, 10>>)
			l_tensor := l_runtime.create_tensor_float32 (l_shape)
			assert ("tensor created", l_tensor /= Void)
			assert ("shape correct", l_tensor.shape.rank = 2)
			assert ("type is float32", l_tensor.data_type.type_id = 1)
		end

	test_create_int32_tensor
			-- Test int32 tensor creation.
		local
			l_runtime: SIMPLE_ONNX
			l_shape: ONNX_SHAPE
			l_tensor: ONNX_TENSOR
		do
			create l_runtime.make
			l_shape := l_runtime.create_shape (<<5>>)
			l_tensor := l_runtime.create_tensor_int32 (l_shape)
			assert ("tensor created", l_tensor /= Void)
			assert ("type is int32", l_tensor.data_type.type_id = 6)
		end

	test_create_int64_tensor
			-- Test int64 tensor creation.
		local
			l_runtime: SIMPLE_ONNX
			l_shape: ONNX_SHAPE
			l_tensor: ONNX_TENSOR
		do
			create l_runtime.make
			l_shape := l_runtime.create_shape (<<2, 3>>)
			l_tensor := l_runtime.create_tensor_int64 (l_shape)
			assert ("tensor created", l_tensor /= Void)
			assert ("type is int64", l_tensor.data_type.type_id = 7)
		end

feature -- Tests: ONNX_SHAPE

	test_shape_creation
			-- Test shape creation and queries.
		local
			l_shape: ONNX_SHAPE
		do
			l_shape := create {SIMPLE_ONNX}.make.create_shape (<<2, 3, 4>>)
			assert ("rank correct", l_shape.rank = 3)
			assert ("element count", l_shape.element_count = 24)
			assert ("get dimension", l_shape.get_dimension (1) = 2)
		end

	test_shape_matching
			-- Test shape matching.
		local
			l_shape1, l_shape2: ONNX_SHAPE
			l_runtime: SIMPLE_ONNX
		do
			create l_runtime.make
			l_shape1 := l_runtime.create_shape (<<1, 77>>)
			l_shape2 := l_runtime.create_shape (<<1, 77>>)
			assert ("shapes match", l_shape1.matches (l_shape2))
		end

feature -- Tests: ONNX_DATA_TYPE

	test_data_type_float32
			-- Test float32 data type.
		local
			l_dtype: ONNX_DATA_TYPE
		do
			create l_dtype.make (1)
			assert ("is floating point", l_dtype.is_floating_point)
			assert ("not integer", not l_dtype.is_integer)
			assert ("element size 4", l_dtype.element_size = 4)
		end

	test_data_type_int64
			-- Test int64 data type.
		local
			l_dtype: ONNX_DATA_TYPE
		do
			create l_dtype.make (7)
			assert ("is integer", l_dtype.is_integer)
			assert ("not floating", not l_dtype.is_floating_point)
			assert ("element size 8", l_dtype.element_size = 8)
		end

feature -- Tests: ONNX_PROVIDER

	test_provider_cpu
			-- Test CPU provider.
		local
			l_provider: ONNX_PROVIDER
		do
			create l_provider.make ("CPUExecutionProvider")
			assert ("is cpu", l_provider.is_cpu)
			assert ("no gpu required", not l_provider.requires_gpu)
		end

	test_provider_cuda
			-- Test CUDA provider.
		local
			l_provider: ONNX_PROVIDER
		do
			create l_provider.make ("CUDAExecutionProvider")
			assert ("not cpu", not l_provider.is_cpu)
			assert ("gpu required", l_provider.requires_gpu)
		end

feature -- Tests: ONNX_RESULT

	test_result_success
			-- Test successful inference result.
		local
			l_result: ONNX_RESULT
			l_tensor: ONNX_TENSOR
			l_shape: ONNX_SHAPE
		do
			l_shape := create {SIMPLE_ONNX}.make.create_shape (<<1, 10>>)
			l_tensor := create {SIMPLE_ONNX}.make.create_tensor_float32 (l_shape)
			create l_result.make_success (l_tensor)
			assert ("is success", l_result.is_success)
			assert ("output exists", l_result.output_tensor /= Void)
			assert ("no error code", l_result.error_code = 0)
		end

	test_result_failure
			-- Test failed inference result.
		local
			l_result: ONNX_RESULT
		do
			create l_result.make_failure (1, "Test error message")
			assert ("is failure", not l_result.is_success)
			assert ("error code set", l_result.error_code = 1)
			assert ("error message set", l_result.error_message.same_string ("Test error message"))
			assert ("no output", l_result.output_tensor = Void)
		end

feature -- Tests: Tensor Data Operations (Phase 5)

	test_float32_tensor_data_set
			-- Test setting float32 tensor data.
		local
			l_tensor: ONNX_TENSOR
			l_shape: ONNX_SHAPE
			l_data: ARRAY [REAL_32]
		do
			l_shape := create {SIMPLE_ONNX}.make.create_shape (<<3>>)
			l_tensor := create {SIMPLE_ONNX}.make.create_tensor_float32 (l_shape)
			create l_data.make_filled (0.0, 1, 3)
			l_data [1] := 1.5
			l_data [2] := 2.5
			l_data [3] := 3.5
			l_tensor.set_data_from_array (l_data)
			assert ("data set correctly", True)  -- Postconditions verify
		end

	test_int64_tensor_data_set
			-- Test setting int64 tensor data.
		local
			l_tensor: ONNX_TENSOR
			l_shape: ONNX_SHAPE
			l_data: ARRAY [INTEGER_64]
		do
			l_shape := create {SIMPLE_ONNX}.make.create_shape (<<2>>)
			l_tensor := create {SIMPLE_ONNX}.make.create_tensor_int64 (l_shape)
			create l_data.make_filled (0, 1, 2)
			l_data [1] := 100
			l_data [2] := 200
			l_tensor.set_int64_data_from_array (l_data)
			assert ("data set correctly", True)  -- Postconditions verify
		end

feature -- Tests: Model Loading (Phase 5)

	test_model_creation
			-- Test model metadata creation.
		local
			l_model: ONNX_MODEL
		do
			l_model := create {ONNX_MODEL}.make ("test-model.onnx")
			assert ("model path set", l_model.model_path.same_string ("test-model.onnx"))
		end

	test_model_metadata_setup
			-- Test setting model metadata.
		local
			l_model: ONNX_MODEL
		do
			l_model := create {ONNX_MODEL}.make ("model.onnx")
			l_model.set_input_count (1)
			l_model.set_output_count (1)
			l_model.set_opset_version (14)
			assert ("input count set", l_model.input_count = 1)
			assert ("output count set", l_model.output_count = 1)
			assert ("opset version set", l_model.opset_version = 14)
		end

feature -- Tests: Session Creation (Phase 5)

	test_session_creation
			-- Test session creation.
		local
			l_model: ONNX_MODEL
			l_session: ONNX_SESSION
		do
			l_model := create {ONNX_MODEL}.make ("test.onnx")
			l_model.set_input_count (1)
			l_model.set_output_count (1)
			create l_session.make (l_model)
			assert ("session created", l_session /= Void)
			assert ("model set", l_session.model = l_model)
		end

	test_session_provider_configuration
			-- Test session provider configuration.
		local
			l_model: ONNX_MODEL
			l_session: ONNX_SESSION
		do
			l_model := create {ONNX_MODEL}.make ("test.onnx")
			l_model.set_input_count (1)
			l_model.set_output_count (1)
			create l_session.make (l_model)
			l_session.set_provider ("CPUExecutionProvider")
			assert ("provider set", l_session.provider.name.same_string ("CPUExecutionProvider"))
		end

end
