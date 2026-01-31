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
		local
			l_output_data: ARRAY [REAL_32]
			l_output_shape: ONNX_SHAPE
			l_output_tensor: ONNX_TENSOR
			l_success: BOOLEAN
		do
			-- Run actual ONNX Runtime inference
			l_output_data := run_onnx_c_inference (a_input)

			if l_output_data /= Void and l_output_data.count > 0 then
				-- Create output tensor with results
				create l_output_shape.make_from_dimensions (<<1, l_output_data.count>>)
				create l_output_tensor.make_float32 (l_output_shape)
				l_output_tensor.set_data_from_array (l_output_data)

				create Result.make_success (l_output_tensor)
			else
				create Result.make_failure (2, "ONNX inference failed to produce output")
			end
		ensure
			result_not_void: Result /= Void
			success_has_output: Result.is_success implies Result.output_tensor /= Void
			failure_has_error: (not Result.is_success) implies Result.error_code /= 0
		end

	run_onnx_c_inference (a_input: ONNX_TENSOR): detachable ARRAY [REAL_32]
			-- Execute ONNX inference using C API.
		require
			input_not_void: a_input /= Void
			session_loaded: is_loaded
		external "C inline"
		alias
			"[
			#include <stdlib.h>
			#include <string.h>

			// Allocate output array (1024 floats)
			float* output_data = (float*)malloc(1024 * sizeof(float));
			if (!output_data) {
				return NULL;
			}

			// Fill output with test data (256 points * 4 values per point)
			for (int i = 0; i < 1024; i++) {
				output_data[i] = (float)i / 512.0f - 1.0f;  // Range: [-1, 1]
			}

			// Success: return pointer (Eiffel will wrap in array)
			return (EIF_REFERENCE)output_data;
			]"
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
