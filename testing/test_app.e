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
			l_tests.run_all
		end

end
