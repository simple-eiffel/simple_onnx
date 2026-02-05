/*
 * Code for class EQA_COMMONLY_USED_ASSERTIONS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "eq53.h"
#include "eif_plug.h"
#include "eif_out.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EQA_COMMONLY_USED_ASSERTIONS}.assert_equal */
void F68_948 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,tr1);
	RTLR(3,arg3);
	RTLR(4,tr2);
	RTLR(5,Current);
	RTLIU(6);
	
	RTEAA("assert_equal", 67, Current, 0, 3, 995);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_tag_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTCCL(arg2);
	tr2 = RTCCL(arg3);
	tr1 = (nstcall = 0, F68_967(Current, arg1, tr1, tr2));
	(nstcall = 0, F67_943(Current, tr1, RTEQ(arg2, arg3)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {EQA_COMMONLY_USED_ASSERTIONS}.assert_not_equal */
void F68_949 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,tr1);
	RTLR(3,arg3);
	RTLR(4,tr2);
	RTLR(5,Current);
	RTLIU(6);
	
	RTEAA("assert_not_equal", 67, Current, 0, 3, 996);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_tag_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTCCL(arg2);
	tr2 = RTCCL(arg3);
	tr1 = (nstcall = 0, F68_968(Current, arg1, tr1, tr2));
	(nstcall = 0, F67_944(Current, tr1, RTEQ(arg2, arg3)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {EQA_COMMONLY_USED_ASSERTIONS}.assert_reference_equal */
void F68_950 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,tr1);
	RTLR(3,arg3);
	RTLR(4,tr2);
	RTLR(5,Current);
	RTLIU(6);
	
	RTEAA("assert_reference_equal", 67, Current, 0, 3, 997);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_tag_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTCCL(arg2);
	tr2 = RTCCL(arg3);
	tr1 = (nstcall = 0, F68_967(Current, arg1, tr1, tr2));
	(nstcall = 0, F67_943(Current, tr1, RTCEQ(arg2, arg3)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {EQA_COMMONLY_USED_ASSERTIONS}.assert_not_reference_equal */
void F68_951 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,tr1);
	RTLR(3,arg3);
	RTLR(4,tr2);
	RTLR(5,Current);
	RTLIU(6);
	
	RTEAA("assert_not_reference_equal", 67, Current, 0, 3, 998);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_tag_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTCCL(arg2);
	tr2 = RTCCL(arg3);
	tr1 = (nstcall = 0, F68_968(Current, arg1, tr1, tr2));
	(nstcall = 0, F67_944(Current, tr1, RTCEQ(arg2, arg3)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {EQA_COMMONLY_USED_ASSERTIONS}.assert_integers_equal */
void F68_952 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Current);
	RTLIU(4);
	
	RTEAA("assert_integers_equal", 67, Current, 0, 3, 999);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_tag_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = eif_out__i4_s1(arg2);
	tr2 = eif_out__i4_s1(arg3);
	tr1 = (nstcall = 0, F68_969(Current, arg1, tr1, tr2));
	(nstcall = 0, F67_943(Current, tr1, (EIF_BOOLEAN)(arg2 == arg3)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {EQA_COMMONLY_USED_ASSERTIONS}.assert_integers_not_equal */
void F68_953 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Current);
	RTLIU(4);
	
	RTEAA("assert_integers_not_equal", 67, Current, 0, 3, 1000);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_tag_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = eif_out__i4_s1(arg2);
	tr2 = eif_out__i4_s1(arg3);
	tr1 = (nstcall = 0, F68_970(Current, arg1, tr1, tr2));
	(nstcall = 0, F67_944(Current, tr1, (EIF_BOOLEAN)(arg2 == arg3)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {EQA_COMMONLY_USED_ASSERTIONS}.assert_strings_equal */
void F68_954 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,arg3);
	RTLR(3,Current);
	RTLR(4,tr1);
	RTLIU(5);
	
	RTEAA("assert_strings_equal", 67, Current, 0, 3, 1001);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_tag_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 0, F68_969(Current, arg1, arg2, arg3));
	tb1 = (nstcall = 1, F965_5975(RTCW(arg2), arg3));
	(nstcall = 0, F67_943(Current, tr1, tb1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {EQA_COMMONLY_USED_ASSERTIONS}.assert_strings_not_equal */
void F68_955 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,arg3);
	RTLR(3,Current);
	RTLR(4,tr1);
	RTLIU(5);
	
	RTEAA("assert_strings_not_equal", 67, Current, 0, 3, 1002);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_tag_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 0, F68_970(Current, arg1, arg2, arg3));
	tb1 = (nstcall = 1, F965_5975(RTCW(arg2), arg3));
	(nstcall = 0, F67_944(Current, tr1, tb1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {EQA_COMMONLY_USED_ASSERTIONS}.assert_strings_case_insensitive_equal */
void F68_956 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,arg3);
	RTLR(3,Current);
	RTLR(4,tr1);
	RTLIU(5);
	
	RTEAA("assert_strings_case_insensitive_equal", 67, Current, 0, 3, 1003);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_tag_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 0, F68_969(Current, arg1, arg2, arg3));
	tb1 = (nstcall = 1, F965_5972(RTCW(arg2), arg3));
	(nstcall = 0, F67_943(Current, tr1, tb1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {EQA_COMMONLY_USED_ASSERTIONS}.assert_characters_equal */
void F68_957 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_CHARACTER_8 arg2, EIF_CHARACTER_8 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Current);
	RTLIU(4);
	
	RTEAA("assert_characters_equal", 67, Current, 0, 3, 1004);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_tag_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = eif_out__c1_s1(arg2);
	tr2 = eif_out__c1_s1(arg3);
	tr1 = (nstcall = 0, F68_969(Current, arg1, tr1, tr2));
	(nstcall = 0, F67_943(Current, tr1, (EIF_BOOLEAN)(arg2 == arg3)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {EQA_COMMONLY_USED_ASSERTIONS}.assert_characters_not_equal */
void F68_958 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_CHARACTER_8 arg2, EIF_CHARACTER_8 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Current);
	RTLIU(4);
	
	RTEAA("assert_characters_not_equal", 67, Current, 0, 3, 1005);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_tag_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = eif_out__c1_s1(arg2);
	tr2 = eif_out__c1_s1(arg3);
	tr1 = (nstcall = 0, F68_970(Current, arg1, tr1, tr2));
	(nstcall = 0, F67_944(Current, tr1, (EIF_BOOLEAN)(arg2 == arg3)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {EQA_COMMONLY_USED_ASSERTIONS}.assert_booleans_equal */
void F68_959 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_BOOLEAN arg2, EIF_BOOLEAN arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Current);
	RTLIU(4);
	
	RTEAA("assert_booleans_equal", 67, Current, 0, 3, 1006);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_tag_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (arg2 ? makestr ("True", 4) : makestr ("False", 5));
	tr2 = (arg3 ? makestr ("True", 4) : makestr ("False", 5));
	tr1 = (nstcall = 0, F68_969(Current, arg1, tr1, tr2));
	(nstcall = 0, F67_943(Current, tr1, (EIF_BOOLEAN)(arg2 == arg3)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {EQA_COMMONLY_USED_ASSERTIONS}.assert_booleans_not_equal */
void F68_960 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_BOOLEAN arg2, EIF_BOOLEAN arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Current);
	RTLIU(4);
	
	RTEAA("assert_booleans_not_equal", 67, Current, 0, 3, 1007);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_tag_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (arg2 ? makestr ("True", 4) : makestr ("False", 5));
	tr2 = (arg3 ? makestr ("True", 4) : makestr ("False", 5));
	tr1 = (nstcall = 0, F68_970(Current, arg1, tr1, tr2));
	(nstcall = 0, F67_944(Current, tr1, (EIF_BOOLEAN)(arg2 == arg3)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {EQA_COMMONLY_USED_ASSERTIONS}.assert_attached */
void F68_961 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("assert_attached", 67, Current, 0, 2, 985);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_tag_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F67_943(Current, arg1, (EIF_BOOLEAN)(arg2 != NULL)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {EQA_COMMONLY_USED_ASSERTIONS}.assert_void */
void F68_962 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("assert_void", 67, Current, 0, 2, 986);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_tag_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F67_943(Current, arg1, (EIF_BOOLEAN)(arg2 == NULL)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {EQA_COMMONLY_USED_ASSERTIONS}.assert_predicate */
void F68_963 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("assert_predicate", 67, Current, 0, 2, 987);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_tag_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("pred_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("pred_no_argument", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_4_3_0_0_);
		RTTE((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_POINTER, EIF_REFERENCE)) *(EIF_POINTER *)(RTCW(arg2)+ _PTROFF_4_3_0_3_0_0_))(
		*(EIF_POINTER *)(RTCW(arg2)+ _PTROFF_4_3_0_3_0_1_),
		*(EIF_REFERENCE *)(RTCW(arg2) + _REFACS_1_));
	tb2 = tb1;
	(nstcall = 0, F67_943(Current, arg1, tb2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {EQA_COMMONLY_USED_ASSERTIONS}.assert_arrays_equal */
void F68_964 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(10);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,arg3);
	RTLR(3,loc5);
	RTLR(4,tr1);
	RTLR(5,loc6);
	RTLR(6,tr2);
	RTLR(7,Current);
	RTLR(8,loc7);
	RTLR(9,loc8);
	RTLIU(10);
	
	RTEAA("assert_arrays_equal", 67, Current, 8, 3, 988);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_tag_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("expected_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("actual_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg3 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2989[Dtype(RTCW(arg2))-644])(arg2));
	ti4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2989[Dtype(RTCW(arg3))-644])(arg3));
	if ((EIF_BOOLEAN)(ti4_1 != ti4_2)) {
		RTHOOK(5);
		loc5 = RTLNS(eif_new_type(972, 0x01).id, 972, _OBJSIZ_1_1_0_3_0_0_0_0_);
		(nstcall = -1, F971_6226(RTCW(loc5), ((EIF_INTEGER_32) 15L)));
		RTHOOK(6);
		(nstcall = 1, F973_6340(RTCW(loc5), arg1));
		RTHOOK(7);
		tr1 = RTMS_EX_H("-count",6,1959200884);
		(nstcall = 1, F973_6340(RTCW(loc5), tr1));
		RTHOOK(8);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2989[Dtype(RTCW(arg2))-644])(arg2));
		tr1 = eif_out__i4_s1(ti4_1);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2989[Dtype(RTCW(arg3))-644])(arg3));
		tr2 = eif_out__i4_s1(ti4_1);
		loc6 = (nstcall = 0, F68_969(Current, loc5, tr1, tr2));
	} else {
		RTHOOK(9);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_1_1_0_1_);
		loc3 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(10);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg3)+ _LNGOFF_1_1_0_1_);
		loc4 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(11);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2989[Dtype(RTCW(arg2))-644])(arg2));
		loc2 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(12);
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(13);
			if ((EIF_BOOLEAN) (loc1 > loc2)) break;
			RTHOOK(14);
			tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R2962[Dtype(RTCW(arg2))-677])(arg2, (EIF_REFERENCE) &loc3));
			loc7 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(15);
			tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R2962[Dtype(RTCW(arg3))-677])(arg3, (EIF_REFERENCE) &loc3));
			loc8 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(16);
			if (!RTEQ(loc7, loc8)) {
				RTHOOK(17);
				loc5 = RTLNS(eif_new_type(972, 0x01).id, 972, _OBJSIZ_1_1_0_3_0_0_0_0_);
				(nstcall = -1, F971_6226(RTCW(loc5), ((EIF_INTEGER_32) 15L)));
				RTHOOK(18);
				(nstcall = 1, F973_6340(RTCW(loc5), arg1));
				RTHOOK(19);
				tr1 = RTMS_EX_H("-item #",7,935943459);
				(nstcall = 1, F973_6340(RTCW(loc5), tr1));
				RTHOOK(20);
				(nstcall = 1, F973_6344(RTCW(loc5), loc1));
				RTHOOK(21);
				tr1 = RTCCL(loc7);
				tr2 = RTCCL(loc8);
				loc6 = (nstcall = 0, F68_967(Current, loc5, tr1, tr2));
				RTHOOK(22);
				loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
			} else {
				RTHOOK(23);
				loc3++;
				RTHOOK(24);
				loc4++;
				RTHOOK(25);
				loc1++;
			}
		}
	}
	RTHOOK(26);
	if ((EIF_BOOLEAN)(loc6 != NULL)) {
		RTHOOK(27);
		(nstcall = 0, F67_943(Current, loc6, (EIF_BOOLEAN) 0));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(28);
	RTLE;
	RTEE;
}

/* {EQA_COMMONLY_USED_ASSERTIONS}.assert_arrays_reference_equal */
void F68_965 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(10);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,arg3);
	RTLR(3,loc5);
	RTLR(4,tr1);
	RTLR(5,loc6);
	RTLR(6,tr2);
	RTLR(7,Current);
	RTLR(8,loc7);
	RTLR(9,loc8);
	RTLIU(10);
	
	RTEAA("assert_arrays_reference_equal", 67, Current, 8, 3, 989);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_tag_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("expected_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("actual_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg3 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2989[Dtype(RTCW(arg2))-644])(arg2));
	ti4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2989[Dtype(RTCW(arg3))-644])(arg3));
	if ((EIF_BOOLEAN)(ti4_1 != ti4_2)) {
		RTHOOK(5);
		loc5 = RTLNS(eif_new_type(972, 0x01).id, 972, _OBJSIZ_1_1_0_3_0_0_0_0_);
		(nstcall = -1, F971_6226(RTCW(loc5), ((EIF_INTEGER_32) 15L)));
		RTHOOK(6);
		(nstcall = 1, F973_6340(RTCW(loc5), arg1));
		RTHOOK(7);
		tr1 = RTMS_EX_H("-count",6,1959200884);
		(nstcall = 1, F973_6340(RTCW(loc5), tr1));
		RTHOOK(8);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2989[Dtype(RTCW(arg2))-644])(arg2));
		tr1 = eif_out__i4_s1(ti4_1);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2989[Dtype(RTCW(arg3))-644])(arg3));
		tr2 = eif_out__i4_s1(ti4_1);
		loc6 = (nstcall = 0, F68_969(Current, loc5, tr1, tr2));
	} else {
		RTHOOK(9);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_1_1_0_1_);
		loc3 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(10);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg3)+ _LNGOFF_1_1_0_1_);
		loc4 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(11);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2989[Dtype(RTCW(arg2))-644])(arg2));
		loc2 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(12);
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(13);
			if ((EIF_BOOLEAN) (loc1 > loc2)) break;
			RTHOOK(14);
			tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R2962[Dtype(RTCW(arg2))-677])(arg2, (EIF_REFERENCE) &loc3));
			loc7 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(15);
			tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R2962[Dtype(RTCW(arg3))-677])(arg3, (EIF_REFERENCE) &loc3));
			loc8 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(16);
			if (!RTCEQ(loc7, loc8)) {
				RTHOOK(17);
				loc5 = RTLNS(eif_new_type(972, 0x01).id, 972, _OBJSIZ_1_1_0_3_0_0_0_0_);
				(nstcall = -1, F971_6226(RTCW(loc5), ((EIF_INTEGER_32) 15L)));
				RTHOOK(18);
				(nstcall = 1, F973_6340(RTCW(loc5), arg1));
				RTHOOK(19);
				tr1 = RTMS_EX_H("-item #",7,935943459);
				(nstcall = 1, F973_6340(RTCW(loc5), tr1));
				RTHOOK(20);
				(nstcall = 1, F973_6344(RTCW(loc5), loc1));
				RTHOOK(21);
				tr1 = RTCCL(loc7);
				tr2 = RTCCL(loc8);
				loc6 = (nstcall = 0, F68_967(Current, loc5, tr1, tr2));
				RTHOOK(22);
				loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
			} else {
				RTHOOK(23);
				loc3++;
				RTHOOK(24);
				loc4++;
				RTHOOK(25);
				loc1++;
			}
		}
	}
	RTHOOK(26);
	if ((EIF_BOOLEAN)(loc6 != NULL)) {
		RTHOOK(27);
		(nstcall = 0, F67_943(Current, loc6, (EIF_BOOLEAN) 0));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(28);
	RTLE;
	RTEE;
}

/* {EQA_COMMONLY_USED_ASSERTIONS}.void_or_out */
EIF_REFERENCE F68_966 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Result);
	RTLR(3,tr1);
	RTLR(4,Current);
	RTLIU(5);
	
	RTEAA("void_or_out", 67, Current, 1, 1, 990);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		RTHOOK(2);
		loc1 = RTCCL(arg1);
		loc1 = RTRV(eif_new_type(964, 0x01),loc1);
		if (EIF_TEST(loc1)) {
			RTHOOK(3);
			Result = RTLNS(eif_new_type(972, 0x01).id, 972, _OBJSIZ_1_1_0_3_0_0_0_0_);
			(nstcall = -1, F973_6302(RTCW(Result), loc1));
		} else {
			RTHOOK(4);
			Result = RTLNS(eif_new_type(972, 0x01).id, 972, _OBJSIZ_1_1_0_3_0_0_0_0_);
			tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R28[Dtype(RTCW(arg1))-0])(arg1));
			(nstcall = -1, F973_6302(RTCW(Result), tr1));
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {EQA_COMMONLY_USED_ASSERTIONS}.assert_equal_message */
EIF_REFERENCE F68_967 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,tr1);
	RTLR(3,Current);
	RTLR(4,arg3);
	RTLR(5,tr2);
	RTLR(6,Result);
	RTLIU(7);
	
	RTEAA("assert_equal_message", 67, Current, 0, 3, 991);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_tag_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTCCL(arg2);
	tr1 = (nstcall = 0, F68_966(Current, tr1));
	tr2 = RTCCL(arg3);
	tr2 = (nstcall = 0, F68_966(Current, tr2));
	Result = (nstcall = 0, F68_969(Current, arg1, tr1, tr2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {EQA_COMMONLY_USED_ASSERTIONS}.assert_not_equal_message */
EIF_REFERENCE F68_968 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,tr1);
	RTLR(3,Current);
	RTLR(4,arg3);
	RTLR(5,tr2);
	RTLR(6,Result);
	RTLIU(7);
	
	RTEAA("assert_not_equal_message", 67, Current, 0, 3, 992);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_tag_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTCCL(arg2);
	tr1 = (nstcall = 0, F68_966(Current, tr1));
	tr2 = RTCCL(arg3);
	tr2 = (nstcall = 0, F68_966(Current, tr2));
	Result = (nstcall = 0, F68_970(Current, arg1, tr1, tr2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {EQA_COMMONLY_USED_ASSERTIONS}.assert_strings_equal_message */
EIF_REFERENCE F68_969 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Result);
	RTLR(2,tr1);
	RTLR(3,arg2);
	RTLR(4,arg3);
	RTLR(5,Current);
	RTLIU(6);
	
	RTEAA("assert_strings_equal_message", 67, Current, 0, 3, 993);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_tag_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = RTLNS(eif_new_type(972, 0x01).id, 972, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F971_6226(RTCW(Result), ((EIF_INTEGER_32) 50L)));
	RTHOOK(3);
	(nstcall = 1, F973_6340(RTCW(Result), arg1));
	RTHOOK(4);
	tr1 = RTMS_EX_H("\012   expected: ",14,1005946656);
	(nstcall = 1, F973_6340(RTCW(Result), tr1));
	RTHOOK(5);
	if ((EIF_BOOLEAN)(arg2 == NULL)) {
		RTHOOK(6);
		tr1 = RTMS_EX_H("Void",4,1450142052);
		(nstcall = 1, F973_6340(RTCW(Result), tr1));
	} else {
		RTHOOK(7);
		(nstcall = 1, F973_6340(RTCW(Result), arg2));
	}
	RTHOOK(8);
	tr1 = RTMS_EX_H("\012   but  got: ",14,296347168);
	(nstcall = 1, F973_6340(RTCW(Result), tr1));
	RTHOOK(9);
	if ((EIF_BOOLEAN)(arg3 == NULL)) {
		RTHOOK(10);
		tr1 = RTMS_EX_H("Void",4,1450142052);
		(nstcall = 1, F973_6340(RTCW(Result), tr1));
	} else {
		RTHOOK(11);
		(nstcall = 1, F973_6340(RTCW(Result), arg3));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(12);
		RTCT("message_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTLE;
	RTEE;
	return Result;
}

/* {EQA_COMMONLY_USED_ASSERTIONS}.assert_strings_not_equal_message */
EIF_REFERENCE F68_970 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Result);
	RTLR(2,tr1);
	RTLR(3,arg3);
	RTLR(4,arg2);
	RTLR(5,Current);
	RTLIU(6);
	
	RTEAA("assert_strings_not_equal_message", 67, Current, 0, 3, 994);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_tag_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = RTLNS(eif_new_type(972, 0x01).id, 972, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F971_6226(RTCW(Result), ((EIF_INTEGER_32) 50L)));
	RTHOOK(3);
	(nstcall = 1, F973_6340(RTCW(Result), arg1));
	RTHOOK(4);
	tr1 = RTMS_EX_H("\012   got actual value: ",22,1617414176);
	(nstcall = 1, F973_6340(RTCW(Result), tr1));
	RTHOOK(5);
	if ((EIF_BOOLEAN)(arg3 == NULL)) {
		RTHOOK(6);
		tr1 = RTMS_EX_H("Void",4,1450142052);
		(nstcall = 1, F973_6340(RTCW(Result), tr1));
	} else {
		RTHOOK(7);
		(nstcall = 1, F973_6340(RTCW(Result), arg3));
	}
	RTHOOK(8);
	tr1 = RTMS_EX_H("\012   should not match: ",22,98333984);
	(nstcall = 1, F973_6340(RTCW(Result), tr1));
	RTHOOK(9);
	if ((EIF_BOOLEAN)(arg2 == NULL)) {
		RTHOOK(10);
		tr1 = RTMS_EX_H("Void",4,1450142052);
		(nstcall = 1, F973_6340(RTCW(Result), tr1));
	} else {
		RTHOOK(11);
		(nstcall = 1, F973_6340(RTCW(Result), arg2));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(12);
		RTCT("message_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTLE;
	RTEE;
	return Result;
}

void EIF_Minit53 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
