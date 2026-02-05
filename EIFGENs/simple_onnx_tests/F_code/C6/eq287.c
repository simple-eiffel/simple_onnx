/*
 * Code for class EQA_TEST_INVOCATION_EXCEPTION
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "eq287.h"
#include "eif_helpers.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EQA_TEST_INVOCATION_EXCEPTION}.make */
void F990_6783 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(9);
	RTLR(0,arg1);
	RTLR(1,arg3);
	RTLR(2,arg2);
	RTLR(3,Current);
	RTLR(4,loc1);
	RTLR(5,tr1);
	RTLR(6,loc2);
	RTLR(7,loc3);
	RTLR(8,loc4);
	RTLIU(9);
	
	RTEAA("make", 989, Current, 4, 3, 13681);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_exception_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_feature_name_attached_implies_a_class_name_attached", EX_PRE);
		RTTE((!((EIF_BOOLEAN)(arg3 != NULL)) || ((EIF_BOOLEAN)(arg2 != NULL))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_feature_name_not_empty", EX_PRE);
		tb1 = '\01';
		if ((EIF_BOOLEAN)(arg3 != NULL)) {
			tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4558[Dtype(RTCW(arg3))-968])(arg3));
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R1381[Dtype(RTCW(arg1))-116])(arg1));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_2_0_0_) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(5);
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTHOOK(6);
		tr1 = (nstcall = 1, F968_6076(loc1));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(7);
		tr1 = RTLNS(eif_new_type(969, 0x01).id, 969, _OBJSIZ_1_1_0_3_0_0_0_0_);
		(nstcall = -1, F965_5930(RTCW(tr1)));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	}
	RTHOOK(8);
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		RTHOOK(9);
		tr1 = (nstcall = 1, F968_6076(loc2));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(10);
		tr1 = RTLNS(eif_new_type(969, 0x01).id, 969, _OBJSIZ_1_1_0_3_0_0_0_0_);
		(nstcall = -1, F965_5930(RTCW(tr1)));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	}
	RTHOOK(11);
	tr1 = (nstcall = 1, F117_1471(RTCW(arg1)));
	loc3 = tr1;
	if (EIF_TEST(loc3)) {
		RTHOOK(12);
		tr1 = RTLNS(eif_new_type(971, 0x01).id, 971, _OBJSIZ_1_0_0_4_0_0_0_0_);
		(nstcall = -1, F972_6279(RTCW(tr1), loc3));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(13);
		tr1 = RTLNS(eif_new_type(971, 0x01).id, 971, _OBJSIZ_1_0_0_4_0_0_0_0_);
		(nstcall = -1, F965_5930(RTCW(tr1)));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	}
	RTHOOK(14);
	tb1 = '\0';
	tr1 = (nstcall = 1, F117_1473(RTCW(arg1)));
	loc4 = tr1;
	if (EIF_TEST(loc4)) {
		tb2 = (nstcall = 1, F569_3452(loc4));
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
		RTHOOK(15);
		(nstcall = 0, F990_6784(Current, loc4, arg2, arg3));
	} else {
		RTHOOK(16);
		tr1 = RTLNS(eif_new_type(971, 0x01).id, 971, _OBJSIZ_1_0_0_4_0_0_0_0_);
		(nstcall = -1, F965_5930(RTCW(tr1)));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(17);
	RTLE;
	RTEE;
}

/* {EQA_TEST_INVOCATION_EXCEPTION}.parse_trace */
void F990_6784 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc4 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc5 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc6 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,arg3);
	RTLR(2,arg2);
	RTLR(3,Current);
	RTLR(4,loc7);
	RTLR(5,tr1);
	RTLR(6,loc8);
	RTLIU(7);
	
	RTEAA("parse_trace", 989, Current, 8, 3, 13682);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_trace_not_empty", EX_PRE);
		tb1 = '\0';
		if ((EIF_BOOLEAN)(arg1 != NULL)) {
			tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4558[Dtype(RTCW(arg1))-968])(arg1));
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_feature_name_attached_implies_a_class_name_attached", EX_PRE);
		RTTE((!((EIF_BOOLEAN)(arg3 != NULL)) || ((EIF_BOOLEAN)(arg2 != NULL))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_feature_name_not_empty", EX_PRE);
		tb1 = '\01';
		if ((EIF_BOOLEAN)(arg3 != NULL)) {
			tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4558[Dtype(RTCW(arg3))-968])(arg3));
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(4);
		RTCT("code_valid", EX_PRE);
		RTTE((nstcall = 0, F160_1710(Current, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_2_0_0_))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	loc1 = (nstcall = 0, F990_6796(Current, arg1, ((EIF_INTEGER_32) 1L)));
	RTHOOK(6);
	ti4_1 = (nstcall = 0, F990_6796(Current, arg1, loc1));
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(7);
	if ((EIF_BOOLEAN)(arg2 != NULL)) {
		for (;;) {
			RTHOOK(8);
			if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) break;
			RTHOOK(9);
			if ((EIF_BOOLEAN) !loc5) {
				RTHOOK(10);
				loc3++;
			}
			RTHOOK(11);
			(nstcall = 0, F990_6797(Current, arg1, loc1));
			RTHOOK(12);
			if ((EIF_BOOLEAN) !loc6) {
				RTHOOK(13);
				*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_2_0_1_) = (EIF_INTEGER_32) *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_2_0_2_);
				RTHOOK(14);
				loc6 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			}
			RTHOOK(15);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
			loc7 = tr1;
			if (EIF_TEST(loc7)) {
				RTHOOK(16);
				tb1 = '\0';
				tb2 = (nstcall = 1, F965_5975(loc7, arg2));
				if (tb2) {
					tb2 = '\01';
					if ((EIF_BOOLEAN)(arg3 != NULL)) {
						tb3 = '\0';
						tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
						loc8 = tr1;
						if (EIF_TEST(loc8)) {
							tb4 = (nstcall = 1, F965_5975(loc8, arg3));
							tb3 = tb4;
						}
						tb2 = tb3;
					}
					tb1 = tb2;
				}
				if (tb1) {
					RTHOOK(17);
					loc5 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					RTHOOK(18);
					loc4 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				} else {
					RTHOOK(19);
					if (loc4) {
						RTHOOK(20);
						loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L));
						RTHOOK(21);
						loc4 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
					}
				}
				RTHOOK(22);
				ti4_1 = (nstcall = 0, F990_6796(Current, arg1, loc1));
				loc1 = (EIF_INTEGER_32) ti4_1;
			} else {
				RTHOOK(23);
				loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
			}
		}
		RTHOOK(24);
		if (loc5) {
			RTHOOK(25);
			if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_2_0_0_) == ((EIF_INTEGER_32) 3L))) {
				RTHOOK(26);
				*(EIF_BOOLEAN *)(Current+ _CHROFF_6_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) (loc3 <= ((EIF_INTEGER_32) 2L));
			} else {
				RTHOOK(27);
				*(EIF_BOOLEAN *)(Current+ _CHROFF_6_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) (loc3 <= ((EIF_INTEGER_32) 1L));
			}
			RTHOOK(28);
			if (loc4) {
				RTHOOK(29);
				ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O4778[Dtype(arg1)-970]);
				loc2 = (EIF_INTEGER_32) ti4_1;
			}
			RTHOOK(30);
			*(EIF_BOOLEAN *)(Current+ _CHROFF_6_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		} else {
			RTHOOK(31);
			*(EIF_BOOLEAN *)(Current+ _CHROFF_6_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			RTHOOK(32);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O4778[Dtype(arg1)-970]);
			loc2 = (EIF_INTEGER_32) ti4_1;
		}
	} else {
		RTHOOK(33);
		(nstcall = 0, F990_6797(Current, arg1, loc1));
		RTHOOK(34);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_2_0_1_) = (EIF_INTEGER_32) *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_2_0_2_);
		RTHOOK(35);
		*(EIF_BOOLEAN *)(Current+ _CHROFF_6_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 0L));
		RTHOOK(36);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O4778[Dtype(arg1)-970]);
		loc2 = (EIF_INTEGER_32) ti4_1;
	}
	RTHOOK(37);
	tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4621[Dtype(RTCW(arg1))-968])(arg1, ((EIF_INTEGER_32) 1L), loc2));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(38);
	RTLE;
	RTEE;
}

/* {EQA_TEST_INVOCATION_EXCEPTION}.code */
EIF_INTEGER_32 F990_6785 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_2_0_0_);
}


/* {EQA_TEST_INVOCATION_EXCEPTION}.recipient_name */
EIF_REFERENCE F990_6786 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {EQA_TEST_INVOCATION_EXCEPTION}.class_name */
EIF_REFERENCE F990_6787 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {EQA_TEST_INVOCATION_EXCEPTION}.tag_name */
EIF_REFERENCE F990_6788 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {EQA_TEST_INVOCATION_EXCEPTION}.trace */
EIF_REFERENCE F990_6789 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_3_);
}


/* {EQA_TEST_INVOCATION_EXCEPTION}.break_point_slot */
EIF_INTEGER_32 F990_6790 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_2_0_1_);
}


/* {EQA_TEST_INVOCATION_EXCEPTION}.last_class_name */
EIF_REFERENCE F990_6791 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_4_);
}


/* {EQA_TEST_INVOCATION_EXCEPTION}.last_routine_name */
EIF_REFERENCE F990_6792 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_5_);
}


/* {EQA_TEST_INVOCATION_EXCEPTION}.last_break_point_slot */
EIF_INTEGER_32 F990_6793 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_2_0_2_);
}


/* {EQA_TEST_INVOCATION_EXCEPTION}.is_trace_valid */
EIF_BOOLEAN F990_6794 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_6_0_);
}


/* {EQA_TEST_INVOCATION_EXCEPTION}.is_test_invalid */
EIF_BOOLEAN F990_6795 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_6_1_);
}


/* {EQA_TEST_INVOCATION_EXCEPTION}.go_after_next_dash_line */
EIF_INTEGER_32 F990_6796 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("go_after_next_dash_line", 989, Current, 2, 2, 13672);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_start_valid", EX_PRE);
		tb1 = '\0';
		if ((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L))) {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O4778[Dtype(arg1)-970]);
			tb1 = (EIF_BOOLEAN) (arg2 <= ti4_1);
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if ((EIF_BOOLEAN) (arg2 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(3);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(RTOUCR(135,(nstcall = 0, F990_6798), (Current)))+ _LNGOFF_1_1_0_2_);
		loc2 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(4);
		tr1 = RTOUCR(135,(nstcall = 0, F990_6798), (Current));
		tw1 = (nstcall = 1, (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4544[Dtype(RTCW(arg1))-968])(arg1, arg2));
		tb1 = (nstcall = 1, F971_6260(RTCW(tr1), tw1));
		if (tb1) {
			RTHOOK(5);
			ti4_1 = eif_max_int32 ((EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 - loc2) - ((EIF_INTEGER_32) 1L)),((EIF_INTEGER_32) 1L));
			loc1 = (EIF_INTEGER_32) ti4_1;
		} else {
			RTHOOK(6);
			loc1 = (EIF_INTEGER_32) arg2;
		}
		RTHOOK(7);
		tr1 = RTOUCR(135,(nstcall = 0, F990_6798), (Current));
		ti4_1 = (nstcall = 1, F971_6243(RTCW(arg1), tr1, loc1));
		loc1 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(8);
		if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 0L))) {
			RTHOOK(9);
			Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + loc2);
			RTHOOK(10);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O4778[Dtype(arg1)-970]);
			if ((EIF_BOOLEAN) (Result > ti4_1)) {
				RTHOOK(11);
				Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(12);
		RTCT("result_valid", EX_POST);
		tb1 = '\01';
		if (!(EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) 0L))) {
			tb2 = '\0';
			if ((EIF_BOOLEAN) (Result > arg2)) {
				ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O4778[Dtype(arg1)-970]);
				tb2 = (EIF_BOOLEAN) (Result <= ti4_1);
			}
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(13);
		RTCT("start_zero_implies_result_zero", EX_POST);
		if ((!((EIF_BOOLEAN)(arg2 == ((EIF_INTEGER_32) 0L))) || ((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) 0L))))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTLE;
	RTEE;
	return Result;
}

/* {EQA_TEST_INVOCATION_EXCEPTION}.parse_frame */
void F990_6797 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc5 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_CHARACTER_32 loc7 = (EIF_CHARACTER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc6);
	RTLIU(4);
	
	RTEAA("parse_frame", 989, Current, 7, 2, 13673);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_trace_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_position_valid", EX_PRE);
		tb1 = '\0';
		if ((EIF_BOOLEAN) (arg2 > ((EIF_INTEGER_32) 0L))) {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O4778[Dtype(arg1)-970]);
			tb1 = (EIF_BOOLEAN) (arg2 <= ti4_1);
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	*(EIF_REFERENCE *)(Current + _REFACS_4_) = (EIF_REFERENCE) NULL;
	RTHOOK(4);
	*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) NULL;
	RTHOOK(5);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_2_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(6);
	loc2 = (EIF_INTEGER_32) arg2;
	RTHOOK(7);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O4778[Dtype(arg1)-970]);
	loc3 = (EIF_INTEGER_32) ti4_1;
	for (;;) {
		RTHOOK(8);
		if (loc5) break;
		RTHOOK(9);
		loc1 = (EIF_INTEGER_32) loc2;
		for (;;) {
			RTHOOK(10);
			tb1 = '\01';
			if (!(EIF_BOOLEAN) (loc2 > loc3)) {
				tb2 = '\0';
				tw1 = (nstcall = 1, (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4544[Dtype(RTCW(arg1))-968])(arg1, loc2));
				tr1 = RTLNS(eif_new_type(916, 0x00).id, 916, _OBJSIZ_0_0_0_1_0_0_0_0_);
				*(EIF_CHARACTER_32 *)tr1 = tw1;
				tb3 = (nstcall = 1, F915_5671(RTCW(tr1)));
				if (tb3) {
					tb2 = (EIF_BOOLEAN) (loc1 < loc2);
				}
				tb1 = tb2;
			}
			if (tb1) break;
			RTHOOK(11);
			tw1 = (nstcall = 1, (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4544[Dtype(RTCW(arg1))-968])(arg1, loc2));
			loc7 = (EIF_CHARACTER_32) tw1;
			RTHOOK(12);
			loc2++;
			RTHOOK(13);
			tb2 = '\01';
			tr1 = RTLNS(eif_new_type(916, 0x00).id, 916, _OBJSIZ_0_0_0_1_0_0_0_0_);
			*(EIF_CHARACTER_32 *)tr1 = loc7;
			tb3 = (nstcall = 1, F915_5671(RTCW(tr1)));
			if (!tb3) {
				tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '@';
				tb2 = (EIF_BOOLEAN)(loc7 == tw1);
			}
			if (tb2) {
				RTHOOK(14);
				loc1 = (EIF_INTEGER_32) loc2;
			}
		}
		RTHOOK(15);
		if ((EIF_BOOLEAN) (loc1 < loc2)) {
			RTHOOK(16);
			tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4621[Dtype(RTCW(arg1))-968])(arg1, loc1, (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 1L))));
			loc6 = (EIF_REFERENCE) tr1;
			RTHOOK(17);
			if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_4_) == NULL)) {
				RTHOOK(18);
				RTAR(Current, loc6);
				*(EIF_REFERENCE *)(Current + _REFACS_4_) = (EIF_REFERENCE) loc6;
			} else {
				RTHOOK(19);
				if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_5_) == NULL)) {
					RTHOOK(20);
					RTAR(Current, loc6);
					*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) loc6;
				} else {
					RTHOOK(21);
					tb2 = (nstcall = 1, F965_5961(RTCW(loc6)));
					if (tb2) {
						RTHOOK(22);
						ti4_1 = (nstcall = 1, F965_5995(RTCW(loc6)));
						loc4 = (EIF_INTEGER_32) ti4_1;
						RTHOOK(23);
						if ((EIF_BOOLEAN) (loc4 > ((EIF_INTEGER_32) 0L))) {
							RTHOOK(24);
							*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_2_0_2_) = (EIF_INTEGER_32) loc4;
						}
					}
					RTHOOK(25);
					loc5 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				}
			}
		} else {
			RTHOOK(26);
			loc5 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(27);
	RTLE;
	RTEE;
}

/* {EQA_TEST_INVOCATION_EXCEPTION}.dash_line */

EIF_REFERENCE F990_6798 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (135,RTMS32_EX_H("-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000-\000\000\000\012\000\000\000",80,3325706));
}

/* {EQA_TEST_INVOCATION_EXCEPTION}.class_attribute_name */

EIF_REFERENCE F990_6799 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (136,RTMS_EX_H("class_name",10,2132155749));
}

/* {EQA_TEST_INVOCATION_EXCEPTION}.recipient_attribute_name */

EIF_REFERENCE F990_6800 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (137,RTMS_EX_H("internal_exception",18,551747950));
}

/* {EQA_TEST_INVOCATION_EXCEPTION}.tag_attribute_name */

EIF_REFERENCE F990_6801 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (138,RTMS_EX_H("tag_name",8,1511503973));
}

/* {EQA_TEST_INVOCATION_EXCEPTION}.trace_attribute_name */

EIF_REFERENCE F990_6802 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (139,RTMS_EX_H("trace",5,1919875941));
}

/* {EQA_TEST_INVOCATION_EXCEPTION}.correct_mismatch */
void F990_6803 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc2);
	RTLR(5,loc3);
	RTLR(6,loc4);
	RTLIU(7);
	
	RTEAA("correct_mismatch", 989, Current, 4, 0, 13679);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = '\0';
	tb2 = '\0';
	tb3 = '\0';
	tr1 = RTOUCR(12,(nstcall = 0, F822_4279), (Current));
	tr2 = RTOUCR(136,(nstcall = 0, F990_6799), (Current));
	tr2 = (nstcall = 1, F844_4467(RTCW(tr1), tr2));
	loc1 = RTCCL(tr2);
	loc1 = RTRV(eif_new_type(967, 1),loc1);
	if (EIF_TEST(loc1)) {
		tr1 = RTOUCR(12,(nstcall = 0, F822_4279), (Current));
		tr2 = RTOUCR(137,(nstcall = 0, F990_6800), (Current));
		tr2 = (nstcall = 1, F844_4467(RTCW(tr1), tr2));
		loc2 = RTCCL(tr2);
		loc2 = RTRV(eif_new_type(967, 1),loc2);
		tb3 = EIF_TEST(loc2);
	}
	if (tb3) {
		tr1 = RTOUCR(12,(nstcall = 0, F822_4279), (Current));
		tr2 = RTOUCR(138,(nstcall = 0, F990_6801), (Current));
		tr2 = (nstcall = 1, F844_4467(RTCW(tr1), tr2));
		loc3 = RTCCL(tr2);
		loc3 = RTRV(eif_new_type(970, 1),loc3);
		tb2 = EIF_TEST(loc3);
	}
	if (tb2) {
		tr1 = RTOUCR(12,(nstcall = 0, F822_4279), (Current));
		tr2 = RTOUCR(139,(nstcall = 0, F990_6802), (Current));
		tr2 = (nstcall = 1, F844_4467(RTCW(tr1), tr2));
		loc4 = RTCCL(tr2);
		loc4 = RTRV(eif_new_type(970, 1),loc4);
		tb1 = EIF_TEST(loc4);
	}
	if (tb1) {
		RTHOOK(2);
		tr1 = RTLNS(eif_new_type(969, 0x01).id, 969, _OBJSIZ_1_1_0_3_0_0_0_0_);
		(nstcall = -1, F968_6062(RTCW(tr1), loc1));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
		RTHOOK(3);
		tr1 = RTLNS(eif_new_type(969, 0x01).id, 969, _OBJSIZ_1_1_0_3_0_0_0_0_);
		(nstcall = -1, F968_6062(RTCW(tr1), loc2));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
		RTHOOK(4);
		tr1 = RTLNS(eif_new_type(971, 0x01).id, 971, _OBJSIZ_1_0_0_4_0_0_0_0_);
		(nstcall = -1, F971_6228(RTCW(tr1), loc3));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
		RTHOOK(5);
		tr1 = RTLNS(eif_new_type(971, 0x01).id, 971, _OBJSIZ_1_0_0_4_0_0_0_0_);
		(nstcall = -1, F971_6228(RTCW(tr1), loc4));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(6);
		(nstcall = 0, F822_4278(Current));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {EQA_TEST_INVOCATION_EXCEPTION}._invariant */
void F990_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTEAINV(l_feature_name, 286, Current, 0, 0);
	RTIT("code_valid", Current);
	if ((nstcall = 0, F160_1710(Current, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_2_0_0_)))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("recipient_name_attached", Current);
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("class_name_attached", Current);
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("tag_attached", Current);
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_2_) != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("trace_attached", Current);
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_3_) != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("exception_break_point_slot_positive", Current);
	if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_2_0_1_) >= ((EIF_INTEGER_32) 0L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit287 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
