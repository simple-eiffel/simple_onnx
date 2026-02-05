/*
 * Code for class EQA_TEST_OUTPUT_BUFFER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "eq201.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EQA_TEST_OUTPUT_BUFFER}.make */
void F647_3828 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("make", 646, Current, 0, 1, 5379);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_size_greater_one", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 3L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTMS_EX_H("test_output_buffer",18,1570355058);
	(nstcall = 0, F646_3764(Current, tr1));
	RTHOOK(3);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_4_) = (EIF_INTEGER_32) arg1;
	RTHOOK(4);
	tr1 = RTLNSMART(eif_new_type(969, 1).id);
	(nstcall = -1, F968_6060(RTCW(tr1), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_4_)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) tr1;
	RTHOOK(5);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_3_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {EQA_TEST_OUTPUT_BUFFER}.buffer_size */
EIF_INTEGER_32 F647_3829 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_4_);
}


/* {EQA_TEST_OUTPUT_BUFFER}.count */
EIF_INTEGER_32 F647_3830 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("count", 646, Current, 0, 0, 5381);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_2_);
	Result = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("count_non_negative", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {EQA_TEST_OUTPUT_BUFFER}.content */
EIF_REFERENCE F647_3831 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("content", 646, Current, 0, 0, 5382);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_truncated", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F647_3838(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = RTLNSMART(eif_new_type(969, 1).id);
	(nstcall = -1, F968_6062(RTCW(Result), *(EIF_REFERENCE *)(Current + _REFACS_5_)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {EQA_TEST_OUTPUT_BUFFER}.leading_content */
EIF_REFERENCE F647_3832 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("leading_content", 646, Current, 1, 0, 5383);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("truncated", EX_PRE);
		RTTE((nstcall = 0, F647_3838(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = (nstcall = 0, F647_3836(Current));
	RTHOOK(3);
	Result = RTLNSMART(eif_new_type(969, 1).id);
	(nstcall = -1, F968_6060(RTCW(Result), loc1));
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
	tr2 = (nstcall = 1, F970_6220(RTCW(tr1), ((EIF_INTEGER_32) 1L), loc1));
	(nstcall = 1, F970_6173(RTCW(Result), tr2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {EQA_TEST_OUTPUT_BUFFER}.closing_content */
EIF_REFERENCE F647_3833 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("closing_content", 646, Current, 1, 0, 5384);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("truncated", EX_PRE);
		RTTE((nstcall = 0, F647_3838(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = (nstcall = 0, F647_3836(Current));
	RTHOOK(3);
	Result = RTLNSMART(eif_new_type(969, 1).id);
	(nstcall = -1, F968_6060(RTCW(Result), (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_4_) - loc1)));
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_);
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
	ti4_2 = *(EIF_INTEGER_32 *)(RTCW(tr2)+ _LNGOFF_1_1_0_2_);
	tr2 = (nstcall = 1, F970_6220(RTCW(tr1), ti4_1, ti4_2));
	(nstcall = 1, F970_6173(RTCW(Result), tr2));
	RTHOOK(5);
	if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_) > (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)))) {
		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
		tr2 = (nstcall = 1, F970_6220(RTCW(tr1), (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)), (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_) - ((EIF_INTEGER_32) 1L))));
		(nstcall = 1, F970_6173(RTCW(Result), tr2));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {EQA_TEST_OUTPUT_BUFFER}.formatted_content */
EIF_REFERENCE F647_3834 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("formatted_content", 646, Current, 0, 0, 5352);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((nstcall = 0, F647_3838(Current))) {
		RTHOOK(2);
		Result = RTLNSMART(eif_new_type(969, 1).id);
		(nstcall = -1, F968_6060(RTCW(Result), (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_4_) + ((EIF_INTEGER_32) 100L))));
		RTHOOK(3);
		tr1 = (nstcall = 0, F647_3832(Current));
		(nstcall = 1, F970_6173(RTCW(Result), tr1));
		RTHOOK(4);
		tr1 = RTOUCR(140,(nstcall = 0, F647_3859), (Current));
		(nstcall = 1, F970_6173(RTCW(Result), tr1));
		RTHOOK(5);
		tr1 = (nstcall = 0, F647_3833(Current));
		(nstcall = 1, F970_6173(RTCW(Result), tr1));
	} else {
		RTHOOK(6);
		Result = (nstcall = 0, F647_3831(Current));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {EQA_TEST_OUTPUT_BUFFER}.buffer */
EIF_REFERENCE F647_3835 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_5_);
}


/* {EQA_TEST_OUTPUT_BUFFER}.split_position */
EIF_INTEGER_32 F647_3836 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("split_position", 646, Current, 0, 0, 5354);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_4_);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result / ((EIF_INTEGER_32) 2L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {EQA_TEST_OUTPUT_BUFFER}.truncated_start_position */
EIF_INTEGER_32 F647_3837 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_);
}


/* {EQA_TEST_OUTPUT_BUFFER}.is_truncated */
EIF_BOOLEAN F647_3838 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_truncated", 646, Current, 0, 0, 5356);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {EQA_TEST_OUTPUT_BUFFER}.exists */
EIF_BOOLEAN F647_3839 (EIF_REFERENCE Current)
{
	return (EIF_BOOLEAN) EIF_FALSE;
}

/* {EQA_TEST_OUTPUT_BUFFER}.readable */
EIF_BOOLEAN F647_3840 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("readable", 646, Current, 0, 0, 5358);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F618_3476(Current));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {EQA_TEST_OUTPUT_BUFFER}.wipe_out */
void F647_3841 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("wipe_out", 646, Current, 0, 0, 5359);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
	(nstcall = 1, F970_6202(RTCW(tr1)));
	RTHOOK(2);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {EQA_TEST_OUTPUT_BUFFER}.put_string */
void F647_3842 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc7);
	RTLR(5,loc8);
	RTLIU(6);
	
	RTEAA("put_string", 646, Current, 8, 1, 5360);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F644_3547(Current)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("non_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_2_);
	ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O4703[Dtype(arg1)-967]);
	if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (ti4_1 + ti4_2) > *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_4_))) {
		RTHOOK(4);
		loc1 = (nstcall = 0, F647_3836(Current));
		RTHOOK(5);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_) == ((EIF_INTEGER_32) 0L))) {
			RTHOOK(6);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
			RTHOOK(7);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
			ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_4_);
			tr2 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
			ti4_2 = *(EIF_INTEGER_32 *)(RTCW(tr2)+ _LNGOFF_1_1_0_2_);
			tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4621[Dtype(RTCW(arg1))-968])(arg1, ((EIF_INTEGER_32) 1L), (EIF_INTEGER_32) (ti4_1 - ti4_2)));
			(nstcall = 1, F970_6173(RTCW(tr1), tr2));
		}
		RTHOOK(8);
		loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_4_);
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 - loc1);
		RTHOOK(9);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O4703[Dtype(arg1)-967]);
		if ((EIF_BOOLEAN) (ti4_1 > loc2)) {
			RTHOOK(10);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O4703[Dtype(arg1)-967]);
			loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - loc2) + ((EIF_INTEGER_32) 1L));
			RTHOOK(11);
			loc3 = (EIF_INTEGER_32) loc2;
		} else {
			RTHOOK(12);
			loc4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			RTHOOK(13);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O4703[Dtype(arg1)-967]);
			loc3 = (EIF_INTEGER_32) ti4_1;
		}
		RTHOOK(14);
		if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_) + loc3) > (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_4_) + ((EIF_INTEGER_32) 1L)))) {
			RTHOOK(15);
			loc6 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_4_);
			ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_);
			loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc6 - ti4_1) + ((EIF_INTEGER_32) 1L));
			RTHOOK(16);
			loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)) + loc3) - loc6);
			RTHOOK(17);
			tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4621[Dtype(RTCW(arg1))-968])(arg1, loc4, (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc4 + loc6) - ((EIF_INTEGER_32) 1L))));
			tr2 = (nstcall = 1, F965_5983(RTCW(tr1)));
			loc7 = (EIF_REFERENCE) tr2;
			RTHOOK(18);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
			ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_);
			tr2 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
			ti4_2 = *(EIF_INTEGER_32 *)(RTCW(tr2)+ _LNGOFF_1_1_0_2_);
			(nstcall = 1, F970_6149(RTCW(tr1), loc7, ti4_1, ti4_2));
			RTHOOK(19);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O4703[Dtype(arg1)-967]);
			tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4621[Dtype(RTCW(arg1))-968])(arg1, (EIF_INTEGER_32) (loc4 + loc6), ti4_1));
			tr2 = (nstcall = 1, F965_5983(RTCW(tr1)));
			loc8 = (EIF_REFERENCE) tr2;
			RTHOOK(20);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
			(nstcall = 1, F970_6149(RTCW(tr1), loc8, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)), (EIF_INTEGER_32) (loc5 - ((EIF_INTEGER_32) 1L))));
			RTHOOK(21);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_) = (EIF_INTEGER_32) loc5;
		} else {
			RTHOOK(22);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O4703[Dtype(arg1)-967]);
			tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4621[Dtype(RTCW(arg1))-968])(arg1, loc4, ti4_1));
			ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_);
			ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_);
			(nstcall = 1, F970_6149(RTCW(tr1), tr2, ti4_1, (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_2 + loc3) - ((EIF_INTEGER_32) 1L))));
			RTHOOK(23);
			if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_) + loc3) > *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_4_))) {
				RTHOOK(24);
				*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
			} else {
				RTHOOK(25);
				(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_)) += loc3;
			}
		}
	} else {
		RTHOOK(26);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
		(nstcall = 1, F970_6175(RTCW(tr1), arg1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(27);
	RTLE;
	RTEE;
}

/* {EQA_TEST_OUTPUT_BUFFER}.putstring */
void F647_3843 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc7);
	RTLR(5,loc8);
	RTLIU(6);
	
	RTEAA("putstring", 646, Current, 8, 1, 5361);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F644_3547(Current)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("non_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_2_);
	ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O4703[Dtype(arg1)-967]);
	if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (ti4_1 + ti4_2) > *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_4_))) {
		RTHOOK(4);
		loc1 = (nstcall = 0, F647_3836(Current));
		RTHOOK(5);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_) == ((EIF_INTEGER_32) 0L))) {
			RTHOOK(6);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
			RTHOOK(7);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
			ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_4_);
			tr2 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
			ti4_2 = *(EIF_INTEGER_32 *)(RTCW(tr2)+ _LNGOFF_1_1_0_2_);
			tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4621[Dtype(RTCW(arg1))-968])(arg1, ((EIF_INTEGER_32) 1L), (EIF_INTEGER_32) (ti4_1 - ti4_2)));
			(nstcall = 1, F970_6173(RTCW(tr1), tr2));
		}
		RTHOOK(8);
		loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_4_);
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 - loc1);
		RTHOOK(9);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O4703[Dtype(arg1)-967]);
		if ((EIF_BOOLEAN) (ti4_1 > loc2)) {
			RTHOOK(10);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O4703[Dtype(arg1)-967]);
			loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - loc2) + ((EIF_INTEGER_32) 1L));
			RTHOOK(11);
			loc3 = (EIF_INTEGER_32) loc2;
		} else {
			RTHOOK(12);
			loc4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			RTHOOK(13);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O4703[Dtype(arg1)-967]);
			loc3 = (EIF_INTEGER_32) ti4_1;
		}
		RTHOOK(14);
		if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_) + loc3) > (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_4_) + ((EIF_INTEGER_32) 1L)))) {
			RTHOOK(15);
			loc6 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_4_);
			ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_);
			loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc6 - ti4_1) + ((EIF_INTEGER_32) 1L));
			RTHOOK(16);
			loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)) + loc3) - loc6);
			RTHOOK(17);
			tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4621[Dtype(RTCW(arg1))-968])(arg1, loc4, (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc4 + loc6) - ((EIF_INTEGER_32) 1L))));
			tr2 = (nstcall = 1, F965_5983(RTCW(tr1)));
			loc7 = (EIF_REFERENCE) tr2;
			RTHOOK(18);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
			ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_);
			tr2 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
			ti4_2 = *(EIF_INTEGER_32 *)(RTCW(tr2)+ _LNGOFF_1_1_0_2_);
			(nstcall = 1, F970_6149(RTCW(tr1), loc7, ti4_1, ti4_2));
			RTHOOK(19);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O4703[Dtype(arg1)-967]);
			tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4621[Dtype(RTCW(arg1))-968])(arg1, (EIF_INTEGER_32) (loc4 + loc6), ti4_1));
			tr2 = (nstcall = 1, F965_5983(RTCW(tr1)));
			loc8 = (EIF_REFERENCE) tr2;
			RTHOOK(20);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
			(nstcall = 1, F970_6149(RTCW(tr1), loc8, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)), (EIF_INTEGER_32) (loc5 - ((EIF_INTEGER_32) 1L))));
			RTHOOK(21);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_) = (EIF_INTEGER_32) loc5;
		} else {
			RTHOOK(22);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O4703[Dtype(arg1)-967]);
			tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4621[Dtype(RTCW(arg1))-968])(arg1, loc4, ti4_1));
			ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_);
			ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_);
			(nstcall = 1, F970_6149(RTCW(tr1), tr2, ti4_1, (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_2 + loc3) - ((EIF_INTEGER_32) 1L))));
			RTHOOK(23);
			if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_) + loc3) > *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_4_))) {
				RTHOOK(24);
				*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
			} else {
				RTHOOK(25);
				(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_)) += loc3;
			}
		}
	} else {
		RTHOOK(26);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
		(nstcall = 1, F970_6175(RTCW(tr1), arg1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(27);
	RTLE;
	RTEE;
}

/* {EQA_TEST_OUTPUT_BUFFER}.put_character */
void F647_3844 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("put_character", 646, Current, 2, 1, 5362);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F644_3547(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_2_);
	if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)) > *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_4_))) {
		RTHOOK(3);
		loc1 = (nstcall = 0, F647_3836(Current));
		RTHOOK(4);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_) == ((EIF_INTEGER_32) 0L))) {
			RTHOOK(5);
			loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
			RTHOOK(6);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 2L));
		} else {
			RTHOOK(7);
			loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_);
			RTHOOK(8);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_2_);
			if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_) == ti4_1)) {
				RTHOOK(9);
				*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
			} else {
				RTHOOK(10);
				(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_))++;
			}
		}
		RTHOOK(11);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
		(nstcall = 1, F970_6160(RTCW(tr1), arg1, loc2));
	} else {
		RTHOOK(12);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
		(nstcall = 1, F970_6186(RTCW(tr1), arg1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTLE;
	RTEE;
}

/* {EQA_TEST_OUTPUT_BUFFER}.putchar */
void F647_3845 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("putchar", 646, Current, 2, 1, 5363);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F644_3547(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_2_);
	if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)) > *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_4_))) {
		RTHOOK(3);
		loc1 = (nstcall = 0, F647_3836(Current));
		RTHOOK(4);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_) == ((EIF_INTEGER_32) 0L))) {
			RTHOOK(5);
			loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
			RTHOOK(6);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 2L));
		} else {
			RTHOOK(7);
			loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_);
			RTHOOK(8);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_2_);
			if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_) == ti4_1)) {
				RTHOOK(9);
				*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
			} else {
				RTHOOK(10);
				(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_))++;
			}
		}
		RTHOOK(11);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
		(nstcall = 1, F970_6160(RTCW(tr1), arg1, loc2));
	} else {
		RTHOOK(12);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
		(nstcall = 1, F970_6186(RTCW(tr1), arg1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTLE;
	RTEE;
}

/* {EQA_TEST_OUTPUT_BUFFER}.put_boolean */
void F647_3846 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("put_boolean", 646, Current, 0, 1, 5364);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTAOMS(3845,2);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F644_3547(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if (arg1) {
		RTHOOK(3);
		RTCOMS(tr1,3845,0,"True",4,1416787301);
	} else {
		RTHOOK(4);
		RTCOMS(tr2,3845,1,"False",5,1635034981);
		tr1 = tr2;
	}
	(nstcall = 0, F647_3842(Current, tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {EQA_TEST_OUTPUT_BUFFER}.putbool */
void F647_3847 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("putbool", 646, Current, 0, 1, 5365);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTAOMS(3846,2);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F644_3547(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if (arg1) {
		RTHOOK(3);
		RTCOMS(tr1,3846,0,"True",4,1416787301);
	} else {
		RTHOOK(4);
		RTCOMS(tr2,3846,1,"False",5,1635034981);
		tr1 = tr2;
	}
	(nstcall = 0, F647_3842(Current, tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {EQA_TEST_OUTPUT_BUFFER}.put_new_line */
void F647_3848 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_new_line", 646, Current, 0, 0, 5366);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F644_3547(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F647_3844(Current, (EIF_CHARACTER_8) '\012'));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {EQA_TEST_OUTPUT_BUFFER}.new_line */
void F647_3849 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("new_line", 646, Current, 0, 0, 5367);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F644_3547(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F647_3844(Current, (EIF_CHARACTER_8) '\012'));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {EQA_TEST_OUTPUT_BUFFER}.put_double */
void F647_3850 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLIU(2);
	
	RTEAA("put_double", 646, Current, 1, 1, 5368);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F644_3547(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = RTLNS(eif_new_type(969, 0x01).id, 969, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F968_6060(RTCW(loc1), ((EIF_INTEGER_32) 10L)));
	RTHOOK(3);
	(nstcall = 1, F970_6185(RTCW(loc1), arg1));
	RTHOOK(4);
	(nstcall = 0, F647_3842(Current, loc1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {EQA_TEST_OUTPUT_BUFFER}.putdouble */
void F647_3851 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLIU(2);
	
	RTEAA("putdouble", 646, Current, 1, 1, 5369);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F644_3547(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = RTLNS(eif_new_type(969, 0x01).id, 969, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F968_6060(RTCW(loc1), ((EIF_INTEGER_32) 10L)));
	RTHOOK(3);
	(nstcall = 1, F970_6185(RTCW(loc1), arg1));
	RTHOOK(4);
	(nstcall = 0, F647_3842(Current, loc1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {EQA_TEST_OUTPUT_BUFFER}.put_real */
void F647_3852 (EIF_REFERENCE Current, EIF_REAL_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLIU(2);
	
	RTEAA("put_real", 646, Current, 1, 1, 5370);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F644_3547(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = RTLNS(eif_new_type(969, 0x01).id, 969, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F968_6060(RTCW(loc1), ((EIF_INTEGER_32) 10L)));
	RTHOOK(3);
	(nstcall = 1, F970_6184(RTCW(loc1), arg1));
	RTHOOK(4);
	(nstcall = 0, F647_3842(Current, loc1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {EQA_TEST_OUTPUT_BUFFER}.putreal */
void F647_3853 (EIF_REFERENCE Current, EIF_REAL_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLIU(2);
	
	RTEAA("putreal", 646, Current, 1, 1, 5371);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F644_3547(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = RTLNS(eif_new_type(969, 0x01).id, 969, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F968_6060(RTCW(loc1), ((EIF_INTEGER_32) 10L)));
	RTHOOK(3);
	(nstcall = 1, F970_6184(RTCW(loc1), arg1));
	RTHOOK(4);
	(nstcall = 0, F647_3842(Current, loc1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {EQA_TEST_OUTPUT_BUFFER}.flush */
void F647_3854 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("flush", 646, Current, 0, 0, 5372);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_open", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F644_3542(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {EQA_TEST_OUTPUT_BUFFER}.dispose */
void F647_3855 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("dispose", 646, Current, 0, 0, 5373);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {EQA_TEST_OUTPUT_BUFFER}.back */
void F647_3856 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("back", 646, Current, 0, 0, 5374);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_before", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F644_3515(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {EQA_TEST_OUTPUT_BUFFER}.end_of_file */
EIF_BOOLEAN F647_3857 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("end_of_file", 646, Current, 0, 0, 5375);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("opened", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F644_3542(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return (EIF_BOOLEAN) 0;
}

/* {EQA_TEST_OUTPUT_BUFFER}.file_close */
void F647_3858 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("file_close", 646, Current, 0, 1, 5376);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {EQA_TEST_OUTPUT_BUFFER}.m_truncated */

EIF_REFERENCE F647_3859 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (140,RTMS_EX_H("\012\012---------------------------\012Truncated section\012---------------------------\012\012",77,1121374730));
}

/* {EQA_TEST_OUTPUT_BUFFER}._invariant */
void F647_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTEAINV(l_feature_name, 200, Current, 0, 0);
	RTIT("buffer_capacity_at_least_buffer_size", Current);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
	ti4_1 = (nstcall = 1, F968_6081(RTCW(tr1)));
	if ((EIF_BOOLEAN) (ti4_1 >= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_4_))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("buffer_count_not_greater_buffer_size", Current);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_2_);
	if ((EIF_BOOLEAN) (ti4_1 <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_4_))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("valid_truncated_start_position", Current);
	tb1 = '\0';
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_2_);
	if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_) <= ti4_1)) {
		tb2 = '\01';
		if (!(EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_) == ((EIF_INTEGER_32) 0L))) {
			tb2 = (EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_) > (nstcall = 0, F647_3836(Current)));
		}
		tb1 = tb2;
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("truncated_implies_buffer_full", Current);
	tb1 = '\01';
	if ((nstcall = 0, F647_3838(Current))) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_2_);
		tb1 = (EIF_BOOLEAN)(ti4_1 == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_4_));
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit201 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
