note
	description: "ONNX inference session (model-specific)"
	author: "Larry Rix"

class
	ONNX_SESSION

create
	make

feature {NONE} -- Initialization

	make (a_model: ONNX_MODEL)
			-- Create session for `a_model`.
		require
			model_not_void: a_model /= Void
		do
			model := a_model
			provider := create {ONNX_PROVIDER}.make ("CPUExecutionProvider")
			optimization_level := 2
			is_loaded := False
		ensure
			model_set: model = a_model
			default_provider: provider.name.same_string ("CPUExecutionProvider")
			default_optimization: optimization_level = 2
		end

feature -- Access

	model: ONNX_MODEL
			-- Associated model.

	provider: ONNX_PROVIDER
			-- Execution provider (CPU, CUDA, TensorRT, etc.).

	optimization_level: INTEGER
			-- Optimization level (0=disabled, 1=basic, 2=extended, 3=all).

	is_loaded: BOOLEAN
			-- Is the session currently loaded and ready for inference?

feature -- Configuration

	set_provider (a_provider: STRING)
			-- Set execution provider.
		require
			provider_not_void: a_provider /= Void
			provider_not_empty: not a_provider.is_empty
			valid_provider: (create {ONNX_PROVIDER}.make (a_provider)) /= Void
			not_loaded: not is_loaded
		do
			provider := create {ONNX_PROVIDER}.make (a_provider)
		ensure
			provider_set: provider.name.same_string (a_provider)
		end

	set_optimization_level (a_level: INTEGER)
			-- Set graph optimization level.
		require
			valid_level: a_level >= 0 and a_level <= 3
			not_loaded: not is_loaded
		do
			optimization_level := a_level
		ensure
			level_set: optimization_level = a_level
		end

feature -- Lifecycle

	load
			-- Load model into memory and prepare for inference.
		require
			not_already_loaded: not is_loaded
		do
			-- Implementation in Phase 4 (C API call to create session)
			is_loaded := True
		ensure
			loaded: is_loaded
		end

	unload
			-- Unload model and free VRAM.
		require
			is_loaded: is_loaded
		do
			-- Implementation in Phase 4 (C API call to release session)
			is_loaded := False
		ensure
			not_loaded: not is_loaded
		end

feature -- Inference

	execute (a_input: ONNX_TENSOR): ONNX_RESULT
			-- Execute inference with input `a_input`.
		require
			session_loaded: is_loaded
			input_not_void: a_input /= Void
			model_loaded: model /= Void
			input_shape_matches: a_input.shape.compatible_with (model.input_shape (0))
			input_dtype_matches: a_input.data_type.is_equal (model.input_dtype (0))
		do
			-- Implementation in Phase 4 (C API call to run inference)
			create Result.make_failure (0, "Phase 4: Implementation pending")
		ensure
			result_not_void: Result /= Void
			success_has_output: Result.is_success implies Result.output_tensor /= Void
			failure_has_error: (not Result.is_success) implies Result.error_code /= 0
		end

feature -- Metadata

	model_metadata: ONNX_MODEL
			-- Get current model metadata.
		do
			Result := model
		ensure
			result_not_void: Result /= Void
			result_same: Result = model
		end

invariant
	model_not_void: model /= Void
	provider_not_void: provider /= Void
	optimization_valid: optimization_level >= 0 and optimization_level <= 3

end
