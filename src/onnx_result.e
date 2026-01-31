note
	description: "ONNX inference result (success or error)"
	author: "Larry Rix"

class
	ONNX_RESULT

create
	make_success,
	make_failure

feature {NONE} -- Initialization

	make_success (a_tensor: ONNX_TENSOR)
			-- Create successful result with output `a_tensor`.
		require
			tensor_not_void: a_tensor /= Void
		do
			output_tensor := a_tensor
			is_success := True
			error_code := 0
			error_message := ""
		ensure
			is_success_set: is_success
			output_set: output_tensor = a_tensor
			no_error: error_code = 0
		end

	make_failure (a_code: INTEGER; a_message: STRING)
			-- Create failure result with error `a_code` and `a_message`.
		require
			code_nonzero: a_code /= 0
			message_not_void: a_message /= Void
		do
			is_success := False
			error_code := a_code
			error_message := a_message.twin
			output_tensor := Void
		ensure
			is_failure: not is_success
			error_code_set: error_code = a_code
			error_message_set: error_message.same_string (a_message)
			no_output: output_tensor = Void
		end

feature -- Access

	is_success: BOOLEAN
			-- Did inference succeed?

	output_tensor: detachable ONNX_TENSOR
			-- Output tensor (only if successful).

	error_code: INTEGER
			-- Error code (0 = success, >0 = failure).

	error_message: STRING
			-- Human-readable error message.

feature -- Queries

	status: STRING
			-- Human-readable status.
		do
			if is_success then
				Result := "Success"
			else
				Result := "Failure (code: " + error_code.out + ")"
			end
		ensure
			result_not_empty: not Result.is_empty
		end

	summary: STRING
			-- Concise summary of result.
		do
			if is_success then
				Result := "Inference succeeded. Output shape: "
				if output_tensor /= Void then
					Result.append (output_tensor.shape.to_string)
				end
			else
				Result := "Inference failed: " + error_message
			end
		ensure
			result_not_empty: not Result.is_empty
		end

invariant
	success_xor_error: is_success xor (error_code /= 0)
	success_has_output: is_success implies output_tensor /= Void
	failure_has_code: (not is_success) implies error_code /= 0
	error_message_not_void: error_message /= Void

end
