#include "eif_eiffel.h"
#include "eif_rout_obj.h"
#include "eaddress.h"
#include "eoffsets.h"

#ifdef __cplusplus
extern "C" {
#endif

	/* EQA_SYSTEM_PATH extend */
void _A6_43_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	nstcall = 1;
	f_ptr (closed [1].it_r, open [1].it_r);
}

	/* EQA_SYSTEM_PATH extend */
void __A6_43_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2)
{
	GTCX
	nstcall = 1;
	f_ptr (closed [1].it_r, op_2);
}

	/* LIB_TESTS test_simple_onnx_make */
void _A57_116 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	nstcall = 1;
	f_ptr (closed [1].it_r);
}

	/* LIB_TESTS test_simple_onnx_make */
void __A57_116 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed)
{
	GTCX
	nstcall = 1;
	f_ptr (closed [1].it_r);
}

	/* LIB_TESTS test_available_providers */
void _A57_117 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	nstcall = 1;
	f_ptr (closed [1].it_r);
}

	/* LIB_TESTS test_available_providers */
void __A57_117 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed)
{
	GTCX
	nstcall = 1;
	f_ptr (closed [1].it_r);
}

	/* LIB_TESTS test_version_info */
void _A57_118 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	nstcall = 1;
	f_ptr (closed [1].it_r);
}

	/* LIB_TESTS test_version_info */
void __A57_118 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed)
{
	GTCX
	nstcall = 1;
	f_ptr (closed [1].it_r);
}

	/* LIB_TESTS test_create_float32_tensor */
void _A57_119 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	nstcall = 1;
	f_ptr (closed [1].it_r);
}

	/* LIB_TESTS test_create_float32_tensor */
void __A57_119 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed)
{
	GTCX
	nstcall = 1;
	f_ptr (closed [1].it_r);
}

	/* LIB_TESTS test_shape_creation */
void _A57_122 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	nstcall = 1;
	f_ptr (closed [1].it_r);
}

	/* LIB_TESTS test_shape_creation */
void __A57_122 ( void(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed)
{
	GTCX
	nstcall = 1;
	f_ptr (closed [1].it_r);
}

	/* EQA_TEST_EVALUATOR [G#1] inline-agent#1 of execute */
EIF_REFERENCE _A658_271 ( EIF_REFERENCE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	nstcall = 1;
	return (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) F229_6889)(closed [1].it_r);
}

	/* EQA_TEST_EVALUATOR [G#1] inline-agent#1 of execute */
EIF_REFERENCE __A658_271 ( EIF_REFERENCE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed)
{
	GTCX
	nstcall = 1;
	return (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) F229_6889)(closed [1].it_r);
}

	/* PROCEDURE [G#1] call */
void _A315_140 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	nstcall = 1;
	f_ptr (closed [1].it_r, closed [2].it_r);
}

	/* PROCEDURE [G#1] call */
void __A315_140 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed)
{
	GTCX
	nstcall = 1;
	f_ptr (closed [1].it_r, closed [2].it_r);
}

	/* EQA_TEST_SET clean */
void _A55_39 ( void(*f_ptr) (EIF_REFERENCE, EIF_BOOLEAN), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	nstcall = 1;
	f_ptr (closed [1].it_r, closed [2].it_b);
}

	/* EQA_TEST_SET clean */
void __A55_39 ( void(*f_ptr) (EIF_REFERENCE, EIF_BOOLEAN), EIF_TYPED_VALUE * closed)
{
	GTCX
	nstcall = 1;
	f_ptr (closed [1].it_r, closed [2].it_b);
}

	/* EQA_EVALUATOR invoke_routine */
void _A190_208_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	nstcall = 1;
	f_ptr (closed [1].it_r, open [1].it_r, closed [2].it_i4);
}

	/* EQA_EVALUATOR invoke_routine */
void __A190_208_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32), EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2)
{
	GTCX
	nstcall = 1;
	f_ptr (closed [1].it_r, op_2, closed [2].it_i4);
}

	/* RT_DBG_CALL_RECORD inline-agent#1 of record_fields */
void _A205_159_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) F758_6913)(closed [1].it_r, open [1].it_r);
}

	/* RT_DBG_CALL_RECORD inline-agent#1 of record_fields */
void __A205_159_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_REFERENCE op_2)
{
	GTCX
	nstcall = 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) F758_6913)(closed [1].it_r, op_2);
}

	/* MISMATCH_INFORMATION wipe_out */
void A215_98 (EIF_REFERENCE Current)
{
	(FUNCTION_CAST(void, (EIF_REFERENCE)) F844_4515)(Current);
}

	/* MISMATCH_INFORMATION internal_put */
void A215_162 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_POINTER arg2)
{
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_POINTER)) F850_4586)(Current, arg1, arg2);
}

	/* MISMATCH_INFORMATION set_string_versions */
void A215_163 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_POINTER, EIF_POINTER)) F850_4587)(Current, arg1, arg2);
}


#ifdef __cplusplus
}
#endif
