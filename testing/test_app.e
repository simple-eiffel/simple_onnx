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

			-- Run basic initialization test
			run_test (agent l_tests.test_simple_onnx_make, "test_simple_onnx_make")
			run_test (agent l_tests.test_available_providers, "test_available_providers")
			run_test (agent l_tests.test_version_info, "test_version_info")
			run_test (agent l_tests.test_create_float32_tensor, "test_create_float32_tensor")
			run_test (agent l_tests.test_shape_creation, "test_shape_creation")

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
		do
			if not l_retried then
				a_test.call (Void)
				io.put_string ("  PASS: " + a_name + "%N")
				passed := passed + 1
			end
		rescue
			io.put_string ("  FAIL: " + a_name + "%N")
			failed := failed + 1
			l_retried := True
			retry
		end

end
