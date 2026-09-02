note
	description: "Test application runner for simple_onnx"
	author: "Larry Rix"

class
	TEST_APP

create
	make

feature {NONE} -- Initialization

	make
			-- Run all tests.
		local
			l_tests: LIB_TESTS
		do
			create l_tests
			io.put_string ("simple_onnx test runner%N")
			io.put_string ("======================%N%N")

			passed := 0
			failed := 0

			-- Environment tests
			run_test (agent l_tests.test_simple_onnx_make, "test_simple_onnx_make")
			run_test (agent l_tests.test_available_providers, "test_available_providers")
			run_test (agent l_tests.test_version_info, "test_version_info")
			run_test (agent l_tests.test_env_api_pointer, "test_env_api_pointer")

			-- Tensor tests
			run_test (agent l_tests.test_create_float32_tensor, "test_create_float32_tensor")
			run_test (agent l_tests.test_create_int32_tensor, "test_create_int32_tensor")
			run_test (agent l_tests.test_create_int64_tensor, "test_create_int64_tensor")
			run_test (agent l_tests.test_float32_tensor_data_set, "test_float32_tensor_data_set")
			run_test (agent l_tests.test_int64_tensor_data_set, "test_int64_tensor_data_set")

			-- Shape tests
			run_test (agent l_tests.test_shape_creation, "test_shape_creation")
			run_test (agent l_tests.test_shape_matching, "test_shape_matching")

			-- Type tests
			run_test (agent l_tests.test_data_type_float32, "test_data_type_float32")
			run_test (agent l_tests.test_data_type_int64, "test_data_type_int64")

			-- Provider tests
			run_test (agent l_tests.test_provider_cpu, "test_provider_cpu")
			run_test (agent l_tests.test_provider_cuda, "test_provider_cuda")

			-- Result tests
			run_test (agent l_tests.test_result_success, "test_result_success")
			run_test (agent l_tests.test_result_failure, "test_result_failure")

			-- Model tests
			run_test (agent l_tests.test_model_creation, "test_model_creation")

			io.put_string ("%N======================%N")
			io.put_string ("Results: " + passed.out + " passed, " + failed.out + " failed%N")
		end

feature {NONE} -- Implementation

	passed: INTEGER
			-- Number of passed tests

	failed: INTEGER
			-- Number of failed tests

	run_test (a_test: PROCEDURE; a_name: STRING)
			-- Run a single test and update counters.
		local
			l_retried: BOOLEAN
			l_exc: detachable EXCEPTION
		do
			if not l_retried then
				a_test.call (Void)
				io.put_string ("  PASS: " + a_name + "%N")
				passed := passed + 1
			end
		rescue
			l_exc := (create {EXCEPTION_MANAGER}).last_exception
			if attached l_exc as al_exc then
				io.put_string ("  FAIL: " + a_name + " [" + al_exc.generator + ": " + al_exc.tag.out + "]%N")
			else
				io.put_string ("  FAIL: " + a_name + " [unknown]%N")
			end
			failed := failed + 1
			l_retried := True
			retry
		end

end
