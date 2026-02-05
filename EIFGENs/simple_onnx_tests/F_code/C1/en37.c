/*
 * Code for class ENCODING_HELPER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "en37.h"
#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ENCODING_HELPER}.multi_byte_to_pointer */
EIF_REFERENCE F52_746 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Result);
	RTLR(4,Current);
	RTLIU(5);
	
	RTEAA("multi_byte_to_pointer", 51, Current, 0, 1, 825);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTLNS(eif_new_type(175, 0x01).id, 175, _OBJSIZ_1_0_0_1_0_0_0_0_);
	(nstcall = -1, F176_1848(RTCW(tr1), arg1));
	tr2 = *(EIF_REFERENCE *)(RTCW(tr1));
	Result = (EIF_REFERENCE) tr2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {ENCODING_HELPER}.wide_string_to_pointer */
EIF_REFERENCE F52_747 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_16 tu2_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("wide_string_to_pointer", 51, Current, 2, 1, 826);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O4778[Dtype(arg1)-970]);
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	Result = RTLNS(eif_new_type(213, 0x01).id, 213, _OBJSIZ_0_1_0_1_0_1_1_0_);
	(nstcall = -1, F214_2527(RTCW(Result), (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L)) * ((EIF_INTEGER_32) 2L))));
	RTHOOK(4);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	for (;;) {
		RTHOOK(5);
		if ((EIF_BOOLEAN)(loc1 == loc2)) break;
		RTHOOK(6);
		tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4543[Dtype(RTCW(arg1))-968])(arg1, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L))));
		tu2_1 = (EIF_NATURAL_16) tu4_1;
		(nstcall = 1, F214_2559(RTCW(Result), tu2_1, (EIF_INTEGER_32) (loc1 * ((EIF_INTEGER_32) 2L))));
		RTHOOK(7);
		loc1++;
	}
	RTHOOK(8);
	(nstcall = 1, F214_2559(RTCW(Result), (EIF_NATURAL_16) ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) (loc1 * ((EIF_INTEGER_32) 2L))));
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
	return Result;
}

/* {ENCODING_HELPER}.pointer_to_multi_byte */
EIF_REFERENCE F52_748 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_8 tu1_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("pointer_to_multi_byte", 51, Current, 2, 2, 827);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_multi_string_not_default", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != (nstcall = 0, F1_33(Current))), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_count_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc2 = RTLNS(eif_new_type(213, 0x01).id, 213, _OBJSIZ_0_1_0_1_0_1_1_0_);
	(nstcall = -1, F214_2530(RTCW(loc2), arg1, arg2));
	RTHOOK(4);
	Result = RTLNS(eif_new_type(969, 0x01).id, 969, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F968_6060(RTCW(Result), arg2));
	RTHOOK(5);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	for (;;) {
		RTHOOK(6);
		if ((EIF_BOOLEAN) (loc1 >= arg2)) break;
		RTHOOK(7);
		tu1_1 = (nstcall = 1, F214_2538(RTCW(loc2), loc1));
		tu4_1 = (EIF_NATURAL_32) tu1_1;
		(nstcall = 1, F967_6030(RTCW(Result), tu4_1));
		RTHOOK(8);
		loc1++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
	return Result;
}

/* {ENCODING_HELPER}.pointer_to_wide_string */
EIF_REFERENCE F52_749 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_16 tu2_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("pointer_to_wide_string", 51, Current, 3, 2, 828);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_w_string_not_default", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != (nstcall = 0, F1_33(Current))), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_count_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc2 = RTLNS(eif_new_type(213, 0x01).id, 213, _OBJSIZ_0_1_0_1_0_1_1_0_);
	(nstcall = -1, F214_2530(RTCW(loc2), arg1, arg2));
	RTHOOK(4);
	loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L)) / ((EIF_INTEGER_32) 2L));
	RTHOOK(5);
	Result = RTLNS(eif_new_type(972, 0x01).id, 972, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F971_6226(RTCW(Result), loc3));
	RTHOOK(6);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	for (;;) {
		RTHOOK(7);
		if ((EIF_BOOLEAN) (loc1 >= loc3)) break;
		RTHOOK(8);
		if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc1 * ((EIF_INTEGER_32) 2L)) <= arg2)) {
			RTHOOK(9);
			tu2_1 = (nstcall = 1, F214_2539(RTCW(loc2), (EIF_INTEGER_32) (loc1 * ((EIF_INTEGER_32) 2L))));
			tu4_1 = (EIF_NATURAL_32) tu2_1;
			(nstcall = 1, F967_6030(RTCW(Result), tu4_1));
		}
		RTHOOK(10);
		loc1++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTLE;
	RTEE;
	return Result;
}

/* {ENCODING_HELPER}.pointer_to_string_32 */
EIF_REFERENCE F52_750 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 tu4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("pointer_to_string_32", 51, Current, 3, 2, 829);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_w_string_not_default", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != (nstcall = 0, F1_33(Current))), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_count_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc2 = RTLNS(eif_new_type(213, 0x01).id, 213, _OBJSIZ_0_1_0_1_0_1_1_0_);
	(nstcall = -1, F214_2530(RTCW(loc2), arg1, arg2));
	RTHOOK(4);
	loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg2 / ((EIF_INTEGER_32) 4L));
	RTHOOK(5);
	Result = RTLNS(eif_new_type(972, 0x01).id, 972, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F971_6226(RTCW(Result), loc3));
	RTHOOK(6);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	for (;;) {
		RTHOOK(7);
		if ((EIF_BOOLEAN) (loc1 >= loc3)) break;
		RTHOOK(8);
		if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc1 * ((EIF_INTEGER_32) 4L)) <= arg2)) {
			RTHOOK(9);
			tu4_1 = (nstcall = 1, F214_2540(RTCW(loc2), (EIF_INTEGER_32) (loc1 * ((EIF_INTEGER_32) 4L))));
			(nstcall = 1, F967_6030(RTCW(Result), tu4_1));
		}
		RTHOOK(10);
		loc1++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTLE;
	RTEE;
	return Result;
}

/* {ENCODING_HELPER}.string_32_to_multi_byte */
EIF_REFERENCE F52_751 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc2 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc4 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("string_32_to_multi_byte", 51, Current, 4, 1, 830);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
	loc3 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	if ((EIF_BOOLEAN) (loc3 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(4);
		Result = RTLNS(eif_new_type(969, 0x01).id, 969, _OBJSIZ_1_1_0_3_0_0_0_0_);
		(nstcall = -1, F968_6060(RTCW(Result), (EIF_INTEGER_32) (loc3 * ((EIF_INTEGER_32) 4L))));
		RTHOOK(5);
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		RTHOOK(6);
		loc4 = RTOUCB(EIF_BOOLEAN,303,(nstcall = 0, F52_757), (Current));
		for (;;) {
			RTHOOK(7);
			if ((EIF_BOOLEAN) (loc1 > loc3)) break;
			RTHOOK(8);
			tu4_1 = (nstcall = 1, F973_6310(RTCW(arg1), loc1));
			loc2 = (EIF_NATURAL_32) tu4_1;
			RTHOOK(9);
			if (loc4) {
				RTHOOK(10);
				tu4_1 = eif_bit_and(loc2,(EIF_NATURAL_32) ((EIF_INTEGER_32) 255L));
				(nstcall = 1, F967_6030(RTCW(Result), tu4_1));
				RTHOOK(11);
				tu4_1 = eif_bit_and(loc2,(EIF_NATURAL_32) ((EIF_INTEGER_32) 65280L));
				tu4_2 = eif_bit_shift_right(tu4_1,((EIF_INTEGER_32) 8L));
				(nstcall = 1, F967_6030(RTCW(Result), tu4_2));
				RTHOOK(12);
				tu4_1 = eif_bit_and(loc2,(EIF_NATURAL_32) ((EIF_INTEGER_32) 16711680L));
				tu4_2 = eif_bit_shift_right(tu4_1,((EIF_INTEGER_32) 16L));
				(nstcall = 1, F967_6030(RTCW(Result), tu4_2));
				RTHOOK(13);
				tu4_1 = eif_bit_and(loc2,(EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(4278190080)));
				tu4_2 = eif_bit_shift_right(tu4_1,((EIF_INTEGER_32) 24L));
				(nstcall = 1, F967_6030(RTCW(Result), tu4_2));
			} else {
				RTHOOK(14);
				tu4_1 = eif_bit_and(loc2,(EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(4278190080)));
				tu4_2 = eif_bit_shift_right(tu4_1,((EIF_INTEGER_32) 24L));
				(nstcall = 1, F967_6030(RTCW(Result), tu4_2));
				RTHOOK(15);
				tu4_1 = eif_bit_and(loc2,(EIF_NATURAL_32) ((EIF_INTEGER_32) 16711680L));
				tu4_2 = eif_bit_shift_right(tu4_1,((EIF_INTEGER_32) 16L));
				(nstcall = 1, F967_6030(RTCW(Result), tu4_2));
				RTHOOK(16);
				tu4_1 = eif_bit_and(loc2,(EIF_NATURAL_32) ((EIF_INTEGER_32) 65280L));
				tu4_2 = eif_bit_shift_right(tu4_1,((EIF_INTEGER_32) 8L));
				(nstcall = 1, F967_6030(RTCW(Result), tu4_2));
				RTHOOK(17);
				tu4_1 = eif_bit_and(loc2,(EIF_NATURAL_32) ((EIF_INTEGER_32) 255L));
				(nstcall = 1, F967_6030(RTCW(Result), tu4_1));
			}
			RTHOOK(18);
			loc1++;
		}
	} else {
		RTHOOK(19);
		Result = RTLNS(eif_new_type(969, 0x01).id, 969, _OBJSIZ_1_1_0_3_0_0_0_0_);
		(nstcall = -1, F965_5930(RTCW(Result)));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(20);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(21);
	RTLE;
	RTEE;
	return Result;
}

/* {ENCODING_HELPER}.string_8_to_wide_string */
EIF_REFERENCE F52_752 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc4 = (EIF_BOOLEAN) 0;
	EIF_NATURAL_32 loc5 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("string_8_to_wide_string", 51, Current, 5, 1, 831);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_w_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
	loc3 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L)) / ((EIF_INTEGER_32) 2L));
	RTHOOK(4);
	loc4 = RTOUCB(EIF_BOOLEAN,303,(nstcall = 0, F52_757), (Current));
	RTHOOK(5);
	Result = RTLNS(eif_new_type(972, 0x01).id, 972, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F971_6226(RTCW(Result), loc2));
	RTHOOK(6);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(7);
		if ((EIF_BOOLEAN) (loc1 > loc3)) break;
		RTHOOK(8);
		if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)) <= loc3)) {
			RTHOOK(9);
			if (loc4) {
				RTHOOK(10);
				tu4_1 = (nstcall = 1, F970_6142(RTCW(arg1), loc1));
				tu4_2 = (nstcall = 1, F970_6142(RTCW(arg1), (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L))));
				tu4_3 = eif_bit_shift_left(tu4_2,((EIF_INTEGER_32) 8L));
				tu4_2 = eif_bit_or(tu4_1,tu4_3);
				loc5 = (EIF_NATURAL_32) tu4_2;
			} else {
				RTHOOK(11);
				tu4_1 = (nstcall = 1, F970_6142(RTCW(arg1), loc1));
				tu4_2 = eif_bit_shift_left(tu4_1,((EIF_INTEGER_32) 8L));
				tu4_1 = (nstcall = 1, F970_6142(RTCW(arg1), (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L))));
				tu4_3 = eif_bit_or(tu4_2,tu4_1);
				loc5 = (EIF_NATURAL_32) tu4_3;
			}
			RTHOOK(12);
			(nstcall = 1, F967_6030(RTCW(Result), loc5));
		}
		RTHOOK(13);
		loc1++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(14);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(15);
	RTLE;
	RTEE;
	return Result;
}

/* {ENCODING_HELPER}.string_16_to_stream */
EIF_REFERENCE F52_753 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_8 tu1_1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("string_16_to_stream", 51, Current, 3, 1, 832);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = (nstcall = 0, F52_747(Current, arg1));
	RTHOOK(3);
	Result = RTLNS(eif_new_type(969, 0x01).id, 969, _OBJSIZ_1_1_0_3_0_0_0_0_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_0_1_0_0_);
	(nstcall = -1, F968_6060(RTCW(Result), ti4_1));
	RTHOOK(4);
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(5);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_0_1_0_0_);
	loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 2L));
	for (;;) {
		RTHOOK(6);
		if ((EIF_BOOLEAN)(loc2 == loc3)) break;
		RTHOOK(7);
		tu1_1 = (nstcall = 1, F214_2538(RTCW(loc1), loc2));
		tc1 = (EIF_CHARACTER_8) tu1_1;
		(nstcall = 1, F970_6186(RTCW(Result), tc1));
		RTHOOK(8);
		loc2++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("valid_count", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_1_0_2_);
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN)(ti4_1 == (EIF_INTEGER_32) (ti4_2 * ((EIF_INTEGER_32) 2L)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTEE;
	return Result;
}

/* {ENCODING_HELPER}.string_general_to_stream */
EIF_REFERENCE F52_754 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,Current);
	RTLIU(4);
	
	RTEAA("string_general_to_stream", 51, Current, 0, 1, 833);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4557[Dtype(RTCW(arg1))-968])(arg1));
	if (tb1) {
		RTHOOK(3);
		tr1 = (nstcall = 1, F965_5983(RTCW(arg1)));
		Result = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(4);
		tr1 = (nstcall = 1, F965_5989(RTCW(arg1)));
		Result = (nstcall = 0, F52_751(Current, tr1));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
	return Result;
}

/* {ENCODING_HELPER}.string_32_switch_endian */
EIF_REFERENCE F52_755 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	EIF_NATURAL_32 tu4_4;
	EIF_NATURAL_32 tu4_5;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("string_32_switch_endian", 51, Current, 3, 1, 834);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_str_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
	loc3 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	Result = RTLNS(eif_new_type(972, 0x01).id, 972, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F971_6226(RTCW(Result), loc3));
	RTHOOK(4);
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(5);
		if ((EIF_BOOLEAN) (loc2 > loc3)) break;
		RTHOOK(6);
		tu4_1 = (nstcall = 1, F973_6310(RTCW(arg1), loc2));
		loc1 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(7);
		tu4_1 = eif_bit_and(loc1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 255L));
		tu4_2 = eif_bit_shift_left(tu4_1,((EIF_INTEGER_32) 24L));
		tu4_1 = eif_bit_and(tu4_2,(EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(4278190080)));
		tu4_2 = eif_bit_and(loc1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 65280L));
		tu4_3 = eif_bit_shift_left(tu4_2,((EIF_INTEGER_32) 8L));
		tu4_2 = eif_bit_and(loc1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 16711680L));
		tu4_4 = eif_bit_shift_right(tu4_2,((EIF_INTEGER_32) 8L));
		tu4_2 = eif_bit_and(loc1,(EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(4278190080)));
		tu4_5 = eif_bit_shift_right(tu4_2,((EIF_INTEGER_32) 24L));
		tu4_2 = eif_bit_and(tu4_5,(EIF_NATURAL_32) ((EIF_INTEGER_32) 255L));
		(nstcall = 1, F967_6030(RTCW(Result), (EIF_NATURAL_32) ((EIF_NATURAL_32) ((EIF_NATURAL_32) (tu4_1 + tu4_3) + tu4_4) + tu4_2)));
		RTHOOK(8);
		loc2++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
	return Result;
}

/* {ENCODING_HELPER}.string_16_switch_endian */
EIF_REFERENCE F52_756 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("string_16_switch_endian", 51, Current, 3, 1, 835);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_str_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
	loc3 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	Result = RTLNS(eif_new_type(972, 0x01).id, 972, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F971_6226(RTCW(Result), loc3));
	RTHOOK(4);
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(5);
		if ((EIF_BOOLEAN) (loc2 > loc3)) break;
		RTHOOK(6);
		tu4_1 = (nstcall = 1, F973_6310(RTCW(arg1), loc2));
		loc1 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(7);
		tu4_1 = eif_bit_and(loc1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 255L));
		tu4_2 = eif_bit_shift_left(tu4_1,((EIF_INTEGER_32) 8L));
		tu4_1 = eif_bit_and(tu4_2,(EIF_NATURAL_32) ((EIF_INTEGER_32) 65280L));
		tu4_2 = eif_bit_and(loc1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 65280L));
		tu4_3 = eif_bit_shift_right(tu4_2,((EIF_INTEGER_32) 8L));
		tu4_2 = eif_bit_and(tu4_3,(EIF_NATURAL_32) ((EIF_INTEGER_32) 255L));
		(nstcall = 1, F967_6030(RTCW(Result), (EIF_NATURAL_32) (tu4_1 + tu4_2)));
		RTHOOK(8);
		loc2++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
	return Result;
}

/* {ENCODING_HELPER}.is_little_endian */
static EIF_BOOLEAN F52_757_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRB(EIF_BOOLEAN)
	RTOUDB(EIF_BOOLEAN, 303)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("is_little_endian", 51, Current, 0, 0, 836);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(179, 0x01).id, 179, _OBJSIZ_0_0_0_0_0_0_0_0_);
	Result = RTOUCB(EIF_BOOLEAN,39,(nstcall = 0, F180_2022), (RTCW(tr1)));
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_BOOLEAN F52_757 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_BOOLEAN,303,F52_757_body,(Current));
}

void EIF_Minit37 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
