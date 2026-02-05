note
	description: "ONNX execution provider (backend)"
	author: "Larry Rix"

class
	ONNX_PROVIDER

create
	make

feature {NONE} -- Initialization

	make (a_name: STRING)
			-- Create provider with `a_name`.
		require
			name_not_void: a_name /= Void
			name_not_empty: not a_name.is_empty
			valid_provider: is_valid_provider (a_name)
		do
			name := a_name.twin
		ensure
			name_set: name.same_string (a_name)
		end

feature -- Access

	name: STRING
			-- Provider name: "CPUExecutionProvider", "CUDAExecutionProvider", etc.

	requires_gpu: BOOLEAN
			-- Does this provider require GPU?
		do
			Result := name.starts_with ("CUDA") or name.starts_with ("TensorRT") or
					  name.starts_with ("MIGRAPHX")
		ensure
			definition: Result = (name.starts_with ("CUDA") or name.starts_with ("TensorRT") or
								   name.starts_with ("MIGRAPHX"))
		end

	is_cpu: BOOLEAN
			-- Is this the CPU provider?
		do
			Result := name.starts_with ("CPU")
		ensure
			definition: Result = name.starts_with ("CPU")
		end

feature -- Provider Constants

	cpu_provider: STRING = "CPUExecutionProvider"
	cuda_provider: STRING = "CUDAExecutionProvider"
	tensorrt_provider: STRING = "TensorrtExecutionProvider"
	directml_provider: STRING = "DmlExecutionProvider"
	opencl_provider: STRING = "OpenCLExecutionProvider"
	migraphx_provider: STRING = "MIGraphXExecutionProvider"
	coreml_provider: STRING = "CoreMLExecutionProvider"

feature -- Validation

	is_valid_provider (a_name: STRING): BOOLEAN
			-- Is `a_name` a recognized ONNX provider?
		do
			Result := a_name.same_string (cpu_provider) or
					  a_name.same_string (cuda_provider) or
					  a_name.same_string (tensorrt_provider) or
					  a_name.same_string (directml_provider) or
					  a_name.same_string (opencl_provider) or
					  a_name.same_string (migraphx_provider) or
					  a_name.same_string (coreml_provider)
		ensure
			definition: Result = (a_name.same_string (cpu_provider) or
								   a_name.same_string (cuda_provider) or
								   a_name.same_string (tensorrt_provider) or
								   a_name.same_string (directml_provider) or
								   a_name.same_string (opencl_provider) or
								   a_name.same_string (migraphx_provider) or
								   a_name.same_string (coreml_provider))
		end

invariant
	name_not_void: name /= Void
	name_not_empty: not name.is_empty

end
