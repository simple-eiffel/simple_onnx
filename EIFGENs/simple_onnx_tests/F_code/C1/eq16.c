/*
 * Code for class EQA_FILE_SYSTEM
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "eq16.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EQA_FILE_SYSTEM}.make */
void F24_310 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("make", 23, Current, 0, 1, 302);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("an_asserter_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {EQA_FILE_SYSTEM}.asserter */
EIF_REFERENCE F24_311 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {EQA_FILE_SYSTEM}.copy_file */
void F24_312 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3, EIF_BOOLEAN arg4)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	struct eif_ex_30 sloc2;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) sloc2.data;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTSN;
	RTDA;
	RTLD;
	
	memset (&sloc2.overhead, 0, OVERHEAD + _OBJSIZ_0_0_0_0_0_0_0_0_);
	sloc2.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc2.overhead, eif_new_type(46, 0x00).id);
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,arg3);
	RTLR(2,arg2);
	RTLR(3,loc1);
	RTLR(4,loc2);
	RTLR(5,tr1);
	RTLR(6,Current);
	RTLIU(7);
	
	RTEAA("copy_file", 23, Current, 2, 4, 304);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("source_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("destination_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg3 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("environment_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("source_is_closed", EX_PRE);
		tb1 = (nstcall = 1, F644_3542(RTCW(arg1)));
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(5);
		RTCT("destination_is_closed", EX_PRE);
		tb1 = (nstcall = 1, F644_3542(RTCW(arg3)));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(6);
	(nstcall = 1, F644_3553(RTCW(arg1)));
	RTHOOK(7);
	(nstcall = 1, F644_3554(RTCW(arg3)));
	for (;;) {
		RTHOOK(8);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3028[Dtype(RTCW(arg1))-644])(arg1));
		if (tb1) break;
		RTHOOK(9);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2462[Dtype(RTCW(arg1))-221])(arg1));
		RTHOOK(10);
		if (arg4) {
			RTHOOK(11);
			tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
			tr1 = (nstcall = 1, F48_721(RTCW(arg2), tr1));
			tr1 = (nstcall = 1, F47_648(RTCW(loc2), tr1));
			loc1 = (EIF_REFERENCE) tr1;
		} else {
			RTHOOK(12);
			tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
			loc1 = (EIF_REFERENCE) tr1;
		}
		RTHOOK(13);
		tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3028[Dtype(RTCW(arg1))-644])(arg1));
		if ((EIF_BOOLEAN) !tb2) {
			RTHOOK(14);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2416[Dtype(RTCW(arg3))-221])(arg3, loc1));
			RTHOOK(15);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2415[Dtype(RTCW(arg3))-221])(arg3));
		} else {
			RTHOOK(16);
			tb2 = (nstcall = 1, F567_3452(RTCW(loc1)));
			if ((EIF_BOOLEAN) !tb2) {
				RTHOOK(17);
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2416[Dtype(RTCW(arg3))-221])(arg3, loc1));
			}
		}
	}
	RTHOOK(18);
	(nstcall = 1, F644_3570(RTCW(arg1)));
	RTHOOK(19);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R3074[Dtype(RTCW(arg3))-644])(arg3));
	RTHOOK(20);
	(nstcall = 1, F644_3570(RTCW(arg3)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(21);
	RTLE;
	RTEE;
}

/* {EQA_FILE_SYSTEM}.build_path */
EIF_REFERENCE F24_313 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("build_path", 23, Current, 0, 2, 305);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_dir_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_dir_not_empty", EX_PRE);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4558[Dtype(RTCW(arg1))-968])(arg1));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	Result = (nstcall = 0, F24_320(Current, arg2, arg1, ((EIF_INTEGER_32) 0L)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("result_attached", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {EQA_FILE_SYSTEM}.build_path_from_key */
EIF_REFERENCE F24_314 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,arg2);
	RTLR(3,Current);
	RTLR(4,tr1);
	RTLR(5,Result);
	RTLIU(6);
	
	RTEAA("build_path_from_key", 23, Current, 1, 2, 306);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_key_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_key_not_empty", EX_PRE);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4558[Dtype(RTCW(arg1))-968])(arg1));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc1 = RTLNS(eif_new_type(47, 0x01).id, 47, _OBJSIZ_0_0_0_0_0_0_0_0_);
	RTHOOK(4);
	tr1 = (nstcall = 1, F48_711(RTCW(loc1), arg1, *(EIF_REFERENCE *)(Current)));
	Result = (nstcall = 0, F24_320(Current, arg2, tr1, ((EIF_INTEGER_32) 0L)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("result_attached", EX_POST);
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

/* {EQA_FILE_SYSTEM}.build_source_path */
EIF_REFERENCE F24_315 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("build_source_path", 23, Current, 0, 1, 307);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTOUCR(43,(nstcall = 0, F76_1003), (Current));
	Result = (nstcall = 0, F24_314(Current, tr1, arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_attached", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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

/* {EQA_FILE_SYSTEM}.build_target_path */
EIF_REFERENCE F24_316 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("build_target_path", 23, Current, 0, 1, 308);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTOUCR(42,(nstcall = 0, F76_1002), (Current));
	Result = (nstcall = 0, F24_314(Current, tr1, arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_attached", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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

/* {EQA_FILE_SYSTEM}.has_same_content_as_string */
EIF_BOOLEAN F24_317 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc1);
	RTLR(3,Current);
	RTLR(4,loc2);
	RTLR(5,tr1);
	RTLIU(6);
	
	RTEAA("has_same_content_as_string", 23, Current, 4, 2, 309);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_path_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_path_not_empty", EX_PRE);
		tb1 = (nstcall = 1, F15_84(RTCW(arg1)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_string_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	loc1 = (nstcall = 0, F24_316(Current, arg1));
	RTHOOK(5);
	loc2 = RTLNS(eif_new_type(645, 0x01).id, 645, _OBJSIZ_5_7_2_4_1_1_2_1_);
	(nstcall = -1, F646_3764(RTCW(loc2), loc1));
	RTHOOK(6);
	tr1 = RTMS_EX_H("file_exists",11,1654467699);
	tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2403[Dtype(RTCW(loc2))-221])(loc2));
	(nstcall = 0, F24_322(Current, tr1, tb1));
	RTHOOK(7);
	tr1 = RTMS_EX_H("file_readable",13,1781299557);
	tb1 = (nstcall = 1, F644_3521(RTCW(loc2)));
	(nstcall = 0, F24_322(Current, tr1, tb1));
	RTHOOK(8);
	(nstcall = 1, F644_3553(RTCW(loc2)));
	RTHOOK(9);
	loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(10);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg2) + O4703[Dtype(arg2)-967]);
	loc4 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(11);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(12);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2446[Dtype(RTCW(loc2))-221])(loc2));
	for (;;) {
		RTHOOK(13);
		tb1 = '\01';
		tb2 = '\01';
		if (!(EIF_BOOLEAN) (loc3 > loc4)) {
			tb3 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3028[Dtype(RTCW(loc2))-644])(loc2));
			tb2 = tb3;
		}
		if (!tb2) {
			tb1 = (EIF_BOOLEAN) !Result;
		}
		if (tb1) break;
		RTHOOK(14);
		tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R3211[Dtype(RTCW(arg2))-677])(arg2, loc3));
		tc2 = *(EIF_CHARACTER_8 *)(RTCW(loc2) + O2386[Dtype(loc2)-217]);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tc1 == tc2);
		RTHOOK(15);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2446[Dtype(RTCW(loc2))-221])(loc2));
		RTHOOK(16);
		loc3++;
	}
	RTHOOK(17);
	if (Result) {
		RTHOOK(18);
		Result = '\0';
		if ((EIF_BOOLEAN) (loc3 > loc4)) {
			tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3028[Dtype(RTCW(loc2))-644])(loc2));
			Result = tb2;
		}
	}
	RTHOOK(19);
	(nstcall = 1, F644_3570(RTCW(loc2)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(20);
	RTLE;
	RTEE;
	return Result;
}

/* {EQA_FILE_SYSTEM}.has_same_content_as_path */
EIF_BOOLEAN F24_318 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc1);
	RTLR(3,Current);
	RTLR(4,loc2);
	RTLR(5,loc3);
	RTLR(6,loc4);
	RTLR(7,tr1);
	RTLIU(8);
	
	RTEAA("has_same_content_as_path", 23, Current, 4, 2, 310);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_first_path_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_first_path_not_empty", EX_PRE);
		tb1 = (nstcall = 1, F15_84(RTCW(arg1)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_second_path_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("a_second_path_not_empty", EX_PRE);
		tb1 = (nstcall = 1, F15_84(RTCW(arg2)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	loc1 = (nstcall = 0, F24_316(Current, arg1));
	RTHOOK(6);
	loc2 = (nstcall = 0, F24_316(Current, arg2));
	RTHOOK(7);
	loc3 = RTLNS(eif_new_type(645, 0x01).id, 645, _OBJSIZ_5_7_2_4_1_1_2_1_);
	(nstcall = -1, F646_3764(RTCW(loc3), loc1));
	RTHOOK(8);
	loc4 = RTLNS(eif_new_type(645, 0x01).id, 645, _OBJSIZ_5_7_2_4_1_1_2_1_);
	(nstcall = -1, F646_3764(RTCW(loc4), loc2));
	RTHOOK(9);
	tr1 = RTMS_EX_H("file1_exists",12,1549593459);
	tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2403[Dtype(RTCW(loc3))-221])(loc3));
	(nstcall = 0, F24_322(Current, tr1, tb1));
	RTHOOK(10);
	tr1 = RTMS_EX_H("file2_exists",12,1549823859);
	tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2403[Dtype(RTCW(loc4))-221])(loc4));
	(nstcall = 0, F24_322(Current, tr1, tb1));
	RTHOOK(11);
	tr1 = RTMS_EX_H("file1_readable",14,678492517);
	tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2409[Dtype(RTCW(loc3))-221])(loc3));
	(nstcall = 0, F24_322(Current, tr1, tb1));
	RTHOOK(12);
	tr1 = RTMS_EX_H("file2_readable",14,745628261);
	tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2409[Dtype(RTCW(loc4))-221])(loc4));
	(nstcall = 0, F24_322(Current, tr1, tb1));
	RTHOOK(13);
	(nstcall = 1, F644_3553(RTCW(loc3)));
	RTHOOK(14);
	(nstcall = 1, F644_3553(RTCW(loc4)));
	RTHOOK(15);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2446[Dtype(RTCW(loc3))-221])(loc3));
	RTHOOK(16);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2446[Dtype(RTCW(loc4))-221])(loc4));
	RTHOOK(17);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	for (;;) {
		RTHOOK(18);
		tb1 = '\01';
		tb2 = '\01';
		tb3 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3028[Dtype(RTCW(loc3))-644])(loc3));
		if (!tb3) {
			tb3 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3028[Dtype(RTCW(loc4))-644])(loc4));
			tb2 = tb3;
		}
		if (!tb2) {
			tb1 = (EIF_BOOLEAN) !Result;
		}
		if (tb1) break;
		RTHOOK(19);
		tc1 = *(EIF_CHARACTER_8 *)(RTCW(loc3) + O2386[Dtype(loc3)-217]);
		tc2 = *(EIF_CHARACTER_8 *)(RTCW(loc4) + O2386[Dtype(loc4)-217]);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tc1 == tc2);
		RTHOOK(20);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2446[Dtype(RTCW(loc3))-221])(loc3));
		RTHOOK(21);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2446[Dtype(RTCW(loc4))-221])(loc4));
	}
	RTHOOK(22);
	if (Result) {
		RTHOOK(23);
		Result = '\0';
		tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3028[Dtype(RTCW(loc3))-644])(loc3));
		if (tb2) {
			tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3028[Dtype(RTCW(loc4))-644])(loc4));
			Result = tb2;
		}
	}
	RTHOOK(24);
	(nstcall = 1, F644_3570(RTCW(loc3)));
	RTHOOK(25);
	(nstcall = 1, F644_3570(RTCW(loc4)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(26);
	RTLE;
	RTEE;
	return Result;
}

/* {EQA_FILE_SYSTEM}.executable_file_exists */
EIF_REFERENCE F24_319 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,Result);
	RTLR(5,Current);
	RTLIU(6);
	
	RTEAA("executable_file_exists", 23, Current, 1, 1, 311);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		RTHOOK(2);
		loc1 = RTLNS(eif_new_type(644, 0x01).id, 644, _OBJSIZ_4_6_2_4_1_1_2_1_);
		(nstcall = -1, F644_3483(RTCW(loc1), arg1));
		RTHOOK(3);
		tb1 = (nstcall = 1, F644_3518(RTCW(loc1)));
		if ((EIF_BOOLEAN) !tb1) {
			RTHOOK(4);
			tr1 = RTMS32_EX_H("f\000\000\000i\000\000\000l\000\000\000e\000\000\000 \000\000\000",5,1769494816);
			tr2 = (nstcall = 1, F965_5989(RTCW(arg1)));
			tr2 = (nstcall = 1, F973_6360(tr1, tr2));
			tr1 = (nstcall = 1, F965_5989(RTMS_EX_H(" not found",10,261004900)));
			tr1 = (nstcall = 1, F973_6360(RTCW(tr2), tr1));
			Result = (EIF_REFERENCE) tr1;
		} else {
			RTHOOK(5);
			tb1 = (nstcall = 1, F644_3525(RTCW(loc1)));
			if ((EIF_BOOLEAN) !tb1) {
				RTHOOK(6);
				tr1 = RTMS32_EX_H("f\000\000\000i\000\000\000l\000\000\000e\000\000\000 \000\000\000",5,1769494816);
				tr2 = (nstcall = 1, F965_5989(RTCW(arg1)));
				tr2 = (nstcall = 1, F973_6360(tr1, tr2));
				tr1 = (nstcall = 1, F965_5989(RTMS_EX_H(" not a plain file",17,1637487717)));
				tr1 = (nstcall = 1, F973_6360(RTCW(tr2), tr1));
				Result = (EIF_REFERENCE) tr1;
			} else {
				RTHOOK(7);
				tb1 = (nstcall = 1, F644_3523(RTCW(loc1)));
				if ((EIF_BOOLEAN) !tb1) {
					RTHOOK(8);
					tr1 = RTMS32_EX_H("f\000\000\000i\000\000\000l\000\000\000e\000\000\000 \000\000\000",5,1769494816);
					tr2 = (nstcall = 1, F965_5989(RTCW(arg1)));
					tr2 = (nstcall = 1, F973_6360(tr1, tr2));
					tr1 = (nstcall = 1, F965_5989(RTMS_EX_H(" not executable",15,2067964005)));
					tr1 = (nstcall = 1, F973_6360(RTCW(tr2), tr1));
					Result = (EIF_REFERENCE) tr1;
				}
			}
		}
	} else {
		RTHOOK(9);
		Result = RTMS32_EX_H("f\000\000\000i\000\000\000l\000\000\000e\000\000\000 \000\000\000(\000\000\000V\000\000\000o\000\000\000i\000\000\000d\000\000\000 \000\000\000f\000\000\000i\000\000\000l\000\000\000e\000\000\000 \000\000\000n\000\000\000a\000\000\000m\000\000\000e\000\000\000)\000\000\000 \000\000\000n\000\000\000o\000\000\000t\000\000\000 \000\000\000f\000\000\000o\000\000\000u\000\000\000n\000\000\000d\000\000\000",31,1870857828);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
	return Result;
}

/* {EQA_FILE_SYSTEM}.build_partial_path */
EIF_REFERENCE F24_320 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg2);
	RTLR(1,arg1);
	RTLR(2,loc3);
	RTLR(3,tr1);
	RTLR(4,Result);
	RTLR(5,Current);
	RTLIU(6);
	
	RTEAA("build_partial_path", 23, Current, 3, 3, 312);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_prefix_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_strip_not_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_stip_not_too_large", EX_PRE);
		tb1 = '\01';
		if ((EIF_BOOLEAN) (arg3 > ((EIF_INTEGER_32) 0L))) {
			tb2 = '\0';
			if ((EIF_BOOLEAN)(arg1 != NULL)) {
				ti4_1 = (nstcall = 1, F15_80(RTCW(arg1)));
				tb2 = (EIF_BOOLEAN) (arg3 <= ti4_1);
			}
			tb1 = tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	loc3 = RTLNS(eif_new_type(854, 0x01).id, 854, _OBJSIZ_2_1_0_0_0_0_0_0_);
	(nstcall = -1, F855_4607(RTCW(loc3), arg2));
	RTHOOK(5);
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		RTHOOK(6);
		ti4_1 = (nstcall = 1, F15_80(RTCW(arg1)));
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 - arg3);
		RTHOOK(7);
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(8);
			if ((EIF_BOOLEAN) (loc1 > loc2)) break;
			RTHOOK(9);
			tr1 = (nstcall = 1, F15_81(RTCW(arg1), loc1));
			tr1 = (nstcall = 1, F855_4634(RTCW(loc3), tr1));
			loc3 = (EIF_REFERENCE) tr1;
			RTHOOK(10);
			loc1++;
		}
	}
	RTHOOK(11);
	Result = RTLNS(eif_new_type(972, 0x01).id, 972, _OBJSIZ_1_1_0_3_0_0_0_0_);
	tr1 = (nstcall = 1, F855_4646(RTCW(loc3)));
	(nstcall = -1, F971_6228(RTCW(Result), tr1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(12);
		RTCT("result_attached", EX_POST);
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

/* {EQA_FILE_SYSTEM}.delete_directory_tree */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F24_321 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	RTED;
	EIF_REFERENCE EIF_VOLATILE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN EIF_VOLATILE loc2 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	RTS_SDX;
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	RTXD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,Current);
	RTLR(4,saved_except);
	RTLIU(5);
	RTXSLS;
	
	RTEAA("delete_directory_tree", 23, Current, 2, 1, 313);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("directory_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTE_T
	RTHOOK(2);
	if ((EIF_BOOLEAN) !loc2) {
		RTHOOK(3);
		tr1 = RTLNS(eif_new_type(223, 0x01).id, 223, _OBJSIZ_3_0_0_1_0_2_0_0_);
		(nstcall = -1, F224_2981(RTCW(tr1), arg1));
		loc1 = (EIF_REFERENCE) tr1;
		RTHOOK(4);
		(nstcall = 1, F224_3012(RTCW(loc1)));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTE_E
	RTXSC;
	RTS_SRR
	RTHOOK(5);
	loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(6);
	RTER;
	/* NOTREACHED */
	RTE_EE
	RTHOOK(7);
	RTEOK;
	RTLE;
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {EQA_FILE_SYSTEM}.assert */
void F24_322 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_BOOLEAN arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("assert", 23, Current, 0, 2, 314);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_tag_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current);
	(nstcall = 1, F67_943(RTCW(tr1), arg1, arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {EQA_FILE_SYSTEM}.source_directory_key */

EIF_REFERENCE F24_323 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (144,RTMS32_EX_H("S\000\000\000O\000\000\000U\000\000\000R\000\000\000C\000\000\000E\000\000\000_\000\000\000D\000\000\000I\000\000\000R\000\000\000E\000\000\000C\000\000\000T\000\000\000O\000\000\000R\000\000\000Y\000\000\000",16,1000342105));
}

/* {EQA_FILE_SYSTEM}.target_directory_key */

EIF_REFERENCE F24_324 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (145,RTMS32_EX_H("E\000\000\000Q\000\000\000A\000\000\000_\000\000\000T\000\000\000A\000\000\000R\000\000\000G\000\000\000E\000\000\000T\000\000\000_\000\000\000D\000\000\000I\000\000\000R\000\000\000E\000\000\000C\000\000\000T\000\000\000O\000\000\000R\000\000\000Y\000\000\000",20,47551833));
}

void EIF_Minit16 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
