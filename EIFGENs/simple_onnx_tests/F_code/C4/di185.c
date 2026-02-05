/*
 * Code for class DIRECTORY
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "di185.h"
#include "eif_file.h"
#include "eif_dir.h"
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

/* {DIRECTORY}.make */
void F224_2981 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("make", 223, Current, 0, 1, 3022);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("string_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F224_2982(Current, arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("name_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) == arg1)) {
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
}

/* {DIRECTORY}.make_with_name */
void F224_2982 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("make_with_name", 223, Current, 0, 1, 3023);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("string_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F224_3018(Current, arg1));
	RTHOOK(3);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_0_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("name_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) == arg1)) {
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
}

/* {DIRECTORY}.make_with_path */
void F224_2983 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("make_with_path", 223, Current, 0, 1, 3024);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_path_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 1, F855_4646(RTCW(arg1)));
	(nstcall = 0, F224_2981(Current, tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {DIRECTORY}.make_open_read */
void F224_2984 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("make_open_read", 223, Current, 0, 1, 3025);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("string_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F224_2981(Current, arg1));
	RTHOOK(3);
	(nstcall = 0, F224_2991(Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("name_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) == arg1)) {
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
}

/* {DIRECTORY}.create_dir */
void F224_2985 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("create_dir", 223, Current, 0, 0, 3026);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("physical_not_exists", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F224_3006(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(RTCV((nstcall = 0, F224_3020(Current)))+ _PTROFF_0_1_0_1_0_0_);
	(nstcall = 0, F224_3029(Current, tp1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {DIRECTORY}.recursive_create_dir */
void F224_2986 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc1);
	RTLR(5,loc2);
	RTLR(6,loc4);
	RTLR(7,loc5);
	RTLIU(8);
	
	RTEAA("recursive_create_dir", 223, Current, 5, 0, 3027);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = (nstcall = 0, F224_2987(Current));
	tr2 = (nstcall = 1, F855_4628(RTCW(tr1)));
	loc3 = (EIF_REFERENCE) tr2;
	RTHOOK(2);
	loc1 = RTLNS(eif_new_type(223, 0x01).id, 223, _OBJSIZ_3_0_0_1_0_2_0_0_);
	(nstcall = -1, F224_2983(RTCW(loc1), loc3));
	RTHOOK(3);
	tb1 = (nstcall = 1, F224_3006(RTCW(loc1)));
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(4);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,824,0xFF01,854,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			loc2 = RTLNS(typres0.id, 824, _OBJSIZ_1_1_0_1_0_0_0_0_);
		}
		(nstcall = -1, F825_4344(RTCW(loc2), ((EIF_INTEGER_32) 10L)));
		RTHOOK(5);
		tr1 = (nstcall = 1, F855_4623(RTCW(loc3)));
		loc4 = (EIF_REFERENCE) tr1;
		for (;;) {
			RTHOOK(6);
			tb1 = '\01';
			tb2 = (nstcall = 1, F224_3006(RTCW(loc1)));
			if (!tb2) {
				tb1 = (EIF_BOOLEAN)(loc4 == NULL);
			}
			if (tb1) break;
			RTHOOK(7);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2955[Dtype(RTCW(loc2))-564])(loc2, loc3));
			RTHOOK(8);
			tr1 = (nstcall = 1, F855_4622(RTCW(loc3)));
			loc3 = (EIF_REFERENCE) tr1;
			RTHOOK(9);
			tr1 = (nstcall = 1, F855_4623(RTCW(loc3)));
			loc4 = (EIF_REFERENCE) tr1;
			RTHOOK(10);
			(nstcall = 1, F224_2983(RTCW(loc1), loc3));
		}
		RTHOOK(11);
		(nstcall = 1, F825_4376(RTCW(loc2)));
		for (;;) {
			RTHOOK(12);
			tb2 = (nstcall = 1, F724_4004(RTCW(loc2)));
			if (tb2) break;
			RTHOOK(13);
			tr1 = (nstcall = 1, F825_4349(RTCW(loc2)));
			loc3 = (EIF_REFERENCE) tr1;
			RTHOOK(14);
			(nstcall = 1, F825_4378(RTCW(loc2)));
			RTHOOK(15);
			(nstcall = 1, F224_2983(RTCW(loc1), loc3));
			RTHOOK(16);
			(nstcall = 1, F224_2985(RTCW(loc1)));
			RTHOOK(17);
			tb3 = (nstcall = 1, F224_3006(RTCW(loc1)));
			if ((EIF_BOOLEAN) !tb3) {
				RTHOOK(18);
				loc5 = RTLNS(eif_new_type(135, 0x01).id, 135, _OBJSIZ_5_1_0_3_0_0_0_0_);
				RTHOOK(19);
				tr1 = RTMS32_EX_H("C\000\000\000a\000\000\000n\000\000\000n\000\000\000o\000\000\000t\000\000\000 \000\000\000c\000\000\000r\000\000\000e\000\000\000a\000\000\000t\000\000\000e\000\000\000:\000\000\000 \000\000\000",15,2053611808);
				tr2 = (nstcall = 1, F855_4646(RTCW(loc3)));
				tr2 = (nstcall = 1, F973_6360(tr1, tr2));
				(nstcall = 1, F117_1482(RTCW(loc5), tr2));
				RTHOOK(20);
				(nstcall = 1, F117_1467(RTCW(loc5)));
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(21);
		RTCT("physical_exists", EX_POST);
		if ((nstcall = 0, F224_3006(Current))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(22);
	RTLE;
	RTEE;
}

/* {DIRECTORY}.path */
EIF_REFERENCE F224_2987 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("path", 223, Current, 0, 0, 3028);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNS(eif_new_type(854, 0x01).id, 854, _OBJSIZ_2_1_0_0_0_0_0_0_);
	tp1 = *(EIF_POINTER *)(RTCV((nstcall = 0, F224_3020(Current)))+ _PTROFF_0_1_0_1_0_0_);
	(nstcall = -1, F855_4611(RTCW(Result), tp1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("entry_not_empty", EX_POST);
		tb1 = (nstcall = 1, F855_4615(RTCW(Result)));
		if ((EIF_BOOLEAN) !tb1) {
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

/* {DIRECTORY}.readentry */
void F224_2988 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
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
	
	RTEAA("readentry", 223, Current, 0, 0, 3029);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_opened", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F224_3004(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_3_0_0_1_0_0_);
	tp1 = (nstcall = 0, F224_3033(Current, tp1));
	*(EIF_POINTER *)(Current+ _PTROFF_3_0_0_1_0_1_) = (EIF_POINTER) tp1;
	RTHOOK(3);
	if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_3_0_0_1_0_1_) == (nstcall = 0, F1_33(Current)))) {
		RTHOOK(4);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) NULL;
	} else {
		RTHOOK(5);
		tr1 = RTOUCR(146,(nstcall = 0, F224_3028), (Current));
		tr2 = (nstcall = 1, F226_3080(RTCW(tr1), *(EIF_POINTER *)(Current+ _PTROFF_3_0_0_1_0_1_)));
		RTAR(Current, tr2);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr2;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {DIRECTORY}.name */
EIF_REFERENCE F224_2989 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("name", 223, Current, 0, 0, 3030);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr2 = (nstcall = 1, F965_5986(RTCW(tr1)));
	Result = (EIF_REFERENCE) tr2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("name_not_empty", EX_POST);
		tb1 = (nstcall = 1, F567_3452(RTCW(Result)));
		if ((EIF_BOOLEAN) !tb1) {
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

/* {DIRECTORY}.has_entry */
EIF_BOOLEAN F224_2990 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,loc3);
	RTLR(4,tr1);
	RTLR(5,tr2);
	RTLR(6,loc4);
	RTLIU(7);
	
	RTEAA("has_entry", 223, Current, 4, 1, 3031);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("string_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = RTLNS(eif_new_type(223, 0x01).id, 223, _OBJSIZ_3_0_0_1_0_2_0_0_);
	(nstcall = -1, F224_2984(RTCW(loc1), *(EIF_REFERENCE *)(Current + _REFACS_1_)));
	RTHOOK(3);
	(nstcall = 1, F224_2993(RTCW(loc1)));
	RTHOOK(4);
	(nstcall = 1, F224_2988(RTCW(loc1)));
	RTHOOK(5);
	tp1 = *(EIF_POINTER *)(RTCW(loc1)+ _PTROFF_3_0_0_1_0_1_);
	loc2 = (EIF_POINTER) tp1;
	for (;;) {
		RTHOOK(6);
		tb1 = '\01';
		if (!Result) {
			tb1 = (EIF_BOOLEAN)(loc2 == (nstcall = 0, F1_33(Current)));
		}
		if (tb1) break;
		RTHOOK(7);
		loc3 = arg1;
		loc3 = RTRV(eif_new_type(967, 0x01),loc3);
		if (EIF_TEST(loc3)) {
			RTHOOK(8);
			tr1 = RTOUCR(146,(nstcall = 0, F224_3028), (Current));
			tr2 = (nstcall = 1, F226_3080(RTCW(tr1), loc2));
			tb2 = (nstcall = 1, F965_5975(RTCW(arg1), tr2));
			Result = (EIF_BOOLEAN) tb2;
		} else {
			RTHOOK(9);
			tr1 = RTOUCR(146,(nstcall = 0, F224_3028), (Current));
			tr2 = (nstcall = 1, F226_3079(RTCW(tr1), loc2));
			loc4 = tr2;
			if (EIF_TEST(loc4)) {
				RTHOOK(10);
				tb2 = (nstcall = 1, F965_5975(RTCW(arg1), loc4));
				Result = (EIF_BOOLEAN) tb2;
			}
		}
		RTHOOK(11);
		(nstcall = 1, F224_2988(RTCW(loc1)));
		RTHOOK(12);
		tp1 = *(EIF_POINTER *)(RTCW(loc1)+ _PTROFF_3_0_0_1_0_1_);
		loc2 = (EIF_POINTER) tp1;
	}
	RTHOOK(13);
	(nstcall = 1, F224_2992(RTCW(loc1)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTLE;
	RTEE;
	return Result;
}

/* {DIRECTORY}.open_read */
void F224_2991 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("open_read", 223, Current, 0, 0, 3032);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tp1 = *(EIF_POINTER *)(RTCV((nstcall = 0, F224_3020(Current)))+ _PTROFF_0_1_0_1_0_0_);
	tp1 = (nstcall = 0, F224_3030(Current, tp1));
	*(EIF_POINTER *)(Current+ _PTROFF_3_0_0_1_0_0_) = (EIF_POINTER) tp1;
	RTHOOK(2);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_0_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {DIRECTORY}.close */
void F224_2992 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("close", 223, Current, 0, 0, 3033);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_open", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F224_3004(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_3_0_0_1_0_0_);
	(nstcall = 0, F224_3032(Current, tp1));
	RTHOOK(3);
	tp1 = (nstcall = 0, F1_33(Current));
	*(EIF_POINTER *)(Current+ _PTROFF_3_0_0_1_0_0_) = (EIF_POINTER) tp1;
	RTHOOK(4);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_0_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {DIRECTORY}.start */
void F224_2993 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("start", 223, Current, 0, 0, 3034);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_opened", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F224_3004(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_3_0_0_1_0_0_);
	tp2 = *(EIF_POINTER *)(RTCV((nstcall = 0, F224_3020(Current)))+ _PTROFF_0_1_0_1_0_0_);
	tp1 = (nstcall = 0, F224_3031(Current, tp1, tp2));
	*(EIF_POINTER *)(Current+ _PTROFF_3_0_0_1_0_0_) = (EIF_POINTER) tp1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {DIRECTORY}.change_name */
void F224_2994 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTEAA("change_name", 223, Current, 1, 1, 3035);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("new_name_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("directory_exists", EX_PRE);
		RTTE((nstcall = 0, F224_3006(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = RTOUCR(146,(nstcall = 0, F224_3028), (Current));
	tr2 = (nstcall = 1, F226_3078(RTCW(tr1), arg1, NULL));
	loc1 = (EIF_REFERENCE) tr2;
	RTHOOK(4);
	tp1 = *(EIF_POINTER *)(RTCV((nstcall = 0, F224_3020(Current)))+ _PTROFF_0_1_0_1_0_0_);
	tp2 = *(EIF_POINTER *)(RTCW(loc1)+ _PTROFF_0_1_0_1_0_0_);
	(nstcall = 0, F224_3039(Current, tp1, tp2));
	RTHOOK(5);
	(nstcall = 0, F224_3018(Current, arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("name_changed", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {DIRECTORY}.rename_path */
void F224_2995 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTEAA("rename_path", 223, Current, 1, 1, 3036);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("new_name_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("new_name_not_empty", EX_PRE);
		tb1 = (nstcall = 1, F855_4615(RTCW(arg1)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("file_exists", EX_PRE);
		RTTE((nstcall = 0, F224_3006(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tr1 = (nstcall = 1, F855_4648(RTCW(arg1)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(5);
	tp1 = *(EIF_POINTER *)(RTCV((nstcall = 0, F224_3020(Current)))+ _PTROFF_0_1_0_1_0_0_);
	tp2 = *(EIF_POINTER *)(RTCW(loc1)+ _PTROFF_0_1_0_1_0_0_);
	(nstcall = 0, F224_3039(Current, tp1, tp2));
	RTHOOK(6);
	tr1 = (nstcall = 1, F855_4646(RTCW(arg1)));
	(nstcall = 0, F224_3018(Current, tr1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("name_changed", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tr2 = (nstcall = 1, F855_4646(RTCW(arg1)));
		if ((EIF_BOOLEAN)(tr1 == tr2)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
}

/* {DIRECTORY}.count */
EIF_INTEGER_32 F224_2996 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLIU(2);
	
	RTEAA("count", 223, Current, 1, 0, 3037);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("directory_exists", EX_PRE);
		RTTE((nstcall = 0, F224_3006(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = RTLNS(eif_new_type(223, 0x01).id, 223, _OBJSIZ_3_0_0_1_0_2_0_0_);
	(nstcall = -1, F224_2984(RTCW(loc1), *(EIF_REFERENCE *)(Current + _REFACS_1_)));
	RTHOOK(3);
	(nstcall = 1, F224_2993(RTCW(loc1)));
	RTHOOK(4);
	(nstcall = 1, F224_2988(RTCW(loc1)));
	for (;;) {
		RTHOOK(5);
		tp1 = *(EIF_POINTER *)(RTCW(loc1)+ _PTROFF_3_0_0_1_0_1_);
		if ((EIF_BOOLEAN)(tp1 == (nstcall = 0, F1_33(Current)))) break;
		RTHOOK(6);
		Result++;
		RTHOOK(7);
		(nstcall = 1, F224_2988(RTCW(loc1)));
	}
	RTHOOK(8);
	(nstcall = 1, F224_2992(RTCW(loc1)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
	return Result;
}

/* {DIRECTORY}.entries */
EIF_REFERENCE F224_2997 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("entries", 223, Current, 2, 0, 3038);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = RTLNS(eif_new_type(223, 0x01).id, 223, _OBJSIZ_3_0_0_1_0_2_0_0_);
	(nstcall = -1, F224_2984(RTCW(loc1), *(EIF_REFERENCE *)(Current + _REFACS_1_)));
	RTHOOK(2);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,824,0xFF01,854,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		Result = RTLNS(typres0.id, 824, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	(nstcall = -1, F825_4344(RTCW(Result), ((EIF_INTEGER_32) 16L)));
	RTHOOK(3);
	(nstcall = 1, F224_2993(RTCW(loc1)));
	RTHOOK(4);
	(nstcall = 1, F224_2988(RTCW(loc1)));
	RTHOOK(5);
	tp1 = *(EIF_POINTER *)(RTCW(loc1)+ _PTROFF_3_0_0_1_0_1_);
	loc2 = (EIF_POINTER) tp1;
	for (;;) {
		RTHOOK(6);
		if ((EIF_BOOLEAN)(loc2 == (nstcall = 0, F1_33(Current)))) break;
		RTHOOK(7);
		tr1 = RTLNS(eif_new_type(854, 0x01).id, 854, _OBJSIZ_2_1_0_0_0_0_0_0_);
		(nstcall = -1, F855_4611(RTCW(tr1), loc2));
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2955[Dtype(RTCW(Result))-564])(Result, tr1));
		RTHOOK(8);
		(nstcall = 1, F224_2988(RTCW(loc1)));
		RTHOOK(9);
		tp1 = *(EIF_POINTER *)(RTCW(loc1)+ _PTROFF_3_0_0_1_0_1_);
		loc2 = (EIF_POINTER) tp1;
	}
	RTHOOK(10);
	(nstcall = 1, F224_2992(RTCW(loc1)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTEE;
	return Result;
}

/* {DIRECTORY}.resolved_entries */
EIF_REFERENCE F224_2998 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLR(3,loc3);
	RTLR(4,tr1);
	RTLIU(5);
	
	RTEAA("resolved_entries", 223, Current, 3, 0, 3039);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = RTLNS(eif_new_type(223, 0x01).id, 223, _OBJSIZ_3_0_0_1_0_2_0_0_);
	(nstcall = -1, F224_2984(RTCW(loc1), *(EIF_REFERENCE *)(Current + _REFACS_1_)));
	RTHOOK(2);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,824,0xFF01,854,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		Result = RTLNS(typres0.id, 824, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	(nstcall = -1, F825_4344(RTCW(Result), ((EIF_INTEGER_32) 16L)));
	RTHOOK(3);
	(nstcall = 1, F224_2993(RTCW(loc1)));
	RTHOOK(4);
	(nstcall = 1, F224_2988(RTCW(loc1)));
	RTHOOK(5);
	tp1 = *(EIF_POINTER *)(RTCW(loc1)+ _PTROFF_3_0_0_1_0_1_);
	loc2 = (EIF_POINTER) tp1;
	RTHOOK(6);
	loc3 = (nstcall = 0, F224_2987(Current));
	for (;;) {
		RTHOOK(7);
		if ((EIF_BOOLEAN)(loc2 == (nstcall = 0, F1_33(Current)))) break;
		RTHOOK(8);
		tr1 = RTLNS(eif_new_type(854, 0x01).id, 854, _OBJSIZ_2_1_0_0_0_0_0_0_);
		(nstcall = -1, F855_4611(RTCW(tr1), loc2));
		tr1 = (nstcall = 1, F855_4635(RTCW(loc3), tr1));
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2955[Dtype(RTCW(Result))-564])(Result, tr1));
		RTHOOK(9);
		(nstcall = 1, F224_2988(RTCW(loc1)));
		RTHOOK(10);
		tp1 = *(EIF_POINTER *)(RTCW(loc1)+ _PTROFF_3_0_0_1_0_1_);
		loc2 = (EIF_POINTER) tp1;
	}
	RTHOOK(11);
	(nstcall = 1, F224_2992(RTCW(loc1)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTLE;
	RTEE;
	return Result;
}

/* {DIRECTORY}.linear_representation */
EIF_REFERENCE F224_2999 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTEAA("linear_representation", 223, Current, 2, 0, 3040);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = RTLNS(eif_new_type(223, 0x01).id, 223, _OBJSIZ_3_0_0_1_0_2_0_0_);
	(nstcall = -1, F224_2984(RTCW(loc1), *(EIF_REFERENCE *)(Current + _REFACS_1_)));
	RTHOOK(2);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,824,0xFF01,969,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		Result = RTLNS(typres0.id, 824, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	(nstcall = -1, F825_4344(RTCW(Result), ((EIF_INTEGER_32) 16L)));
	RTHOOK(3);
	(nstcall = 1, F224_2993(RTCW(loc1)));
	RTHOOK(4);
	(nstcall = 1, F224_2988(RTCW(loc1)));
	RTHOOK(5);
	tp1 = *(EIF_POINTER *)(RTCW(loc1)+ _PTROFF_3_0_0_1_0_1_);
	loc2 = (EIF_POINTER) tp1;
	for (;;) {
		RTHOOK(6);
		if ((EIF_BOOLEAN)(loc2 == (nstcall = 0, F1_33(Current)))) break;
		RTHOOK(7);
		tr1 = RTOUCR(146,(nstcall = 0, F224_3028), (Current));
		tr2 = (nstcall = 1, F226_3080(RTCW(tr1), loc2));
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2955[Dtype(RTCW(Result))-564])(Result, tr2));
		RTHOOK(8);
		(nstcall = 1, F224_2988(RTCW(loc1)));
		RTHOOK(9);
		tp1 = *(EIF_POINTER *)(RTCW(loc1)+ _PTROFF_3_0_0_1_0_1_);
		loc2 = (EIF_POINTER) tp1;
	}
	RTHOOK(10);
	(nstcall = 1, F224_2992(RTCW(loc1)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTEE;
	return Result;
}

/* {DIRECTORY}.linear_representation_32 */
EIF_REFERENCE F224_3000 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLR(3,loc3);
	RTLR(4,tr1);
	RTLR(5,tr2);
	RTLIU(6);
	
	RTEAA("linear_representation_32", 223, Current, 3, 0, 3041);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = RTLNS(eif_new_type(223, 0x01).id, 223, _OBJSIZ_3_0_0_1_0_2_0_0_);
	(nstcall = -1, F224_2984(RTCW(loc1), *(EIF_REFERENCE *)(Current + _REFACS_1_)));
	RTHOOK(2);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,824,0xFF01,972,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		Result = RTLNS(typres0.id, 824, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	(nstcall = -1, F825_4344(RTCW(Result), ((EIF_INTEGER_32) 16L)));
	RTHOOK(3);
	(nstcall = 1, F224_2993(RTCW(loc1)));
	RTHOOK(4);
	(nstcall = 1, F224_2988(RTCW(loc1)));
	RTHOOK(5);
	tp1 = *(EIF_POINTER *)(RTCW(loc1)+ _PTROFF_3_0_0_1_0_1_);
	loc2 = (EIF_POINTER) tp1;
	for (;;) {
		RTHOOK(6);
		if ((EIF_BOOLEAN)(loc2 == (nstcall = 0, F1_33(Current)))) break;
		RTHOOK(7);
		loc3 = RTLNS(eif_new_type(854, 0x01).id, 854, _OBJSIZ_2_1_0_0_0_0_0_0_);
		(nstcall = -1, F855_4611(RTCW(loc3), loc2));
		RTHOOK(8);
		tr1 = RTLNS(eif_new_type(972, 0x01).id, 972, _OBJSIZ_1_1_0_3_0_0_0_0_);
		tr2 = (nstcall = 1, F855_4646(RTCW(loc3)));
		(nstcall = -1, F971_6228(RTCW(tr1), tr2));
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2955[Dtype(RTCW(Result))-564])(Result, tr1));
		RTHOOK(9);
		(nstcall = 1, F224_2988(RTCW(loc1)));
		RTHOOK(10);
		tp1 = *(EIF_POINTER *)(RTCW(loc1)+ _PTROFF_3_0_0_1_0_1_);
		loc2 = (EIF_POINTER) tp1;
	}
	RTHOOK(11);
	(nstcall = 1, F224_2992(RTCW(loc1)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTLE;
	RTEE;
	return Result;
}

/* {DIRECTORY}.last_entry_32 */
EIF_REFERENCE F224_3001 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("last_entry_32", 223, Current, 0, 0, 3042);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_3_0_0_1_0_1_) != (nstcall = 0, F1_33(Current)))) {
		RTHOOK(2);
		tr1 = RTOUCR(146,(nstcall = 0, F224_3028), (Current));
		tr2 = (nstcall = 1, F226_3079(RTCW(tr1), *(EIF_POINTER *)(Current+ _PTROFF_3_0_0_1_0_1_)));
		Result = (EIF_REFERENCE) tr2;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {DIRECTORY}.last_entry_8 */
EIF_REFERENCE F224_3002 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("last_entry_8", 223, Current, 0, 0, 3043);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_3_0_0_1_0_1_) != (nstcall = 0, F1_33(Current)))) {
		RTHOOK(2);
		tr1 = RTOUCR(146,(nstcall = 0, F224_3028), (Current));
		tr2 = (nstcall = 1, F226_3080(RTCW(tr1), *(EIF_POINTER *)(Current+ _PTROFF_3_0_0_1_0_1_)));
		Result = (EIF_REFERENCE) tr2;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {DIRECTORY}.lastentry */
static EIF_REFERENCE F224_3003_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("lastentry", 223, Current, 0, 0, 3044);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F224_3003 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current);
	if (!r) {
		if (RTAT(eif_new_type(969, 0))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			RTLIU(1);
			r = (F224_3003_body (Current));
			*(EIF_REFERENCE *)(Current) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


/* {DIRECTORY}.is_closed */
EIF_BOOLEAN F224_3004 (EIF_REFERENCE Current)
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
	
	RTEAA("is_closed", 223, Current, 0, 0, 3045);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_0_0_0_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {DIRECTORY}.is_empty */
EIF_BOOLEAN F224_3005 (EIF_REFERENCE Current)
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
	
	RTEAA("is_empty", 223, Current, 0, 0, 3046);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("directory_exists", EX_PRE);
		RTTE((nstcall = 0, F224_3006(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (nstcall = 0, F224_2996(Current));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 2L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {DIRECTORY}.exists */
EIF_BOOLEAN F224_3006 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("exists", 223, Current, 0, 0, 3047);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tp1 = *(EIF_POINTER *)(RTCV((nstcall = 0, F224_3020(Current)))+ _PTROFF_0_1_0_1_0_0_);
	Result = (nstcall = 0, F224_3035(Current, tp1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {DIRECTORY}.is_readable */
EIF_BOOLEAN F224_3007 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_readable", 223, Current, 0, 0, 3048);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("directory_exists", EX_PRE);
		RTTE((nstcall = 0, F224_3006(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(RTCV((nstcall = 0, F224_3020(Current)))+ _PTROFF_0_1_0_1_0_0_);
	Result = (nstcall = 0, F224_3036(Current, tp1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {DIRECTORY}.is_executable */
EIF_BOOLEAN F224_3008 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_executable", 223, Current, 0, 0, 3049);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("directory_exists", EX_PRE);
		RTTE((nstcall = 0, F224_3006(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(RTCV((nstcall = 0, F224_3020(Current)))+ _PTROFF_0_1_0_1_0_0_);
	Result = (nstcall = 0, F224_3037(Current, tp1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {DIRECTORY}.is_writable */
EIF_BOOLEAN F224_3009 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_writable", 223, Current, 0, 0, 3050);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("directory_exists", EX_PRE);
		RTTE((nstcall = 0, F224_3006(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(RTCV((nstcall = 0, F224_3020(Current)))+ _PTROFF_0_1_0_1_0_0_);
	Result = (nstcall = 0, F224_3038(Current, tp1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {DIRECTORY}.delete */
void F224_3010 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("delete", 223, Current, 0, 0, 3051);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("directory_exists", EX_PRE);
		RTTE((nstcall = 0, F224_3006(Current)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("empty_directory", EX_PRE);
		RTTE((nstcall = 0, F224_3005(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(RTCV((nstcall = 0, F224_3020(Current)))+ _PTROFF_0_1_0_1_0_0_);
	(nstcall = 0, F224_3034(Current, tp1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {DIRECTORY}.delete_content */
void F224_3011 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("delete_content", 223, Current, 0, 0, 3052);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("directory_exists", EX_PRE);
		RTTE((nstcall = 0, F224_3006(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F224_3013(Current, NULL, NULL, ((EIF_INTEGER_32) 0L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {DIRECTORY}.recursive_delete */
void F224_3012 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("recursive_delete", 223, Current, 0, 0, 3053);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("directory_exists", EX_PRE);
		RTTE((nstcall = 0, F224_3006(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F224_3011(Current));
	RTHOOK(3);
	if ((nstcall = 0, F224_3005(Current))) {
		RTHOOK(4);
		(nstcall = 0, F224_3010(Current));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {DIRECTORY}.delete_content_with_action */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F224_3013 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	RTED;
	EIF_REFERENCE EIF_VOLATILE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc5 = (EIF_REFERENCE) 0;
	EIF_POINTER EIF_VOLATILE loc6 = (EIF_POINTER) 0;
	EIF_REFERENCE EIF_VOLATILE loc7 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 EIF_VOLATILE loc8 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE EIF_VOLATILE loc9 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN EIF_VOLATILE loc10 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	RTS_SDX;
	EIF_POINTER  EIF_VOLATILE tp1;
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr2 = NULL;
	EIF_INTEGER_32  EIF_VOLATILE ti4_1;
	EIF_BOOLEAN  EIF_VOLATILE tb1;
	EIF_BOOLEAN  EIF_VOLATILE tb2;
	EIF_BOOLEAN  EIF_VOLATILE tb3;
	RTSN;
	RTDA;
	RTLD;
	RTXD;
	
	RTLI(13);
	RTLR(0,Current);
	RTLR(1,loc9);
	RTLR(2,tr1);
	RTLR(3,loc3);
	RTLR(4,loc5);
	RTLR(5,loc7);
	RTLR(6,loc1);
	RTLR(7,tr2);
	RTLR(8,loc4);
	RTLR(9,arg1);
	RTLR(10,arg2);
	RTLR(11,loc2);
	RTLR(12,saved_except);
	RTLIU(13);
	RTXSLS;
	
	RTEAA("delete_content_with_action", 223, Current, 10, 3, 3054);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("directory_exists", EX_PRE);
		RTTE((nstcall = 0, F224_3006(Current)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_file_number", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTE_T
	RTHOOK(3);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,824,0xFF01,970,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 824, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	ti4_1 = eif_min_int32 (arg3,((EIF_INTEGER_32) 1024L));
	(nstcall = -1, F825_4344(RTCW(tr1), ti4_1));
	loc9 = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	loc3 = RTOUCR(146,(nstcall = 0, F224_3028), (Current));
	RTHOOK(5);
	(nstcall = 1, F226_3107(RTCW(loc3), (EIF_BOOLEAN) 0));
	RTHOOK(6);
	tr1 = RTLNS(eif_new_type(223, 0x01).id, 223, _OBJSIZ_3_0_0_1_0_2_0_0_);
	(nstcall = -1, F224_2984(RTCW(tr1), *(EIF_REFERENCE *)(Current + _REFACS_1_)));
	loc5 = (EIF_REFERENCE) tr1;
	RTHOOK(7);
	(nstcall = 1, F224_2993(RTCW(loc5)));
	RTHOOK(8);
	(nstcall = 1, F224_2988(RTCW(loc5)));
	RTHOOK(9);
	tp1 = *(EIF_POINTER *)(RTCW(loc5)+ _PTROFF_3_0_0_1_0_1_);
	loc6 = (EIF_POINTER) tp1;
	for (;;) {
		RTHOOK(10);
		tb1 = '\01';
		if (!(EIF_BOOLEAN)(loc6 == (nstcall = 0, F1_33(Current)))) {
			tb1 = loc10;
		}
		if (tb1) break;
		RTHOOK(11);
		tr1 = (nstcall = 1, F226_3079(RTCW(loc3), loc6));
		loc7 = (EIF_REFERENCE) tr1;
		RTHOOK(12);
		tb2 = '\0';
		tr1 = RTOUCR(147,(nstcall = 0, F224_3025), (Current));
		tb3 = (nstcall = 1, F965_5975(RTCW(loc7), tr1));
		if ((EIF_BOOLEAN) !tb3) {
			tr1 = RTOUCR(148,(nstcall = 0, F224_3026), (Current));
			tb3 = (nstcall = 1, F965_5975(RTCW(loc7), tr1));
			tb2 = (EIF_BOOLEAN) !tb3;
		}
		if (tb2) {
			RTHOOK(13);
			tr1 = (nstcall = 0, F224_2987(Current));
			tr2 = (nstcall = 1, F855_4634(RTCW(tr1), loc7));
			loc1 = (EIF_REFERENCE) tr2;
			RTHOOK(14);
			tr1 = (nstcall = 1, F855_4646(RTCW(loc1)));
			(nstcall = 1, F226_3106(RTCW(loc3), tr1));
			RTHOOK(15);
			tb2 = *(EIF_BOOLEAN *)(RTCW(loc3)+ _CHROFF_3_0_);
			if (tb2) {
				RTHOOK(16);
				tb2 = '\0';
				tb3 = (nstcall = 1, F226_3087(RTCW(loc3)));
				if ((EIF_BOOLEAN) !tb3) {
					tb3 = (nstcall = 1, F226_3086(RTCW(loc3)));
					tb2 = tb3;
				}
				if (tb2) {
					RTHOOK(17);
					if ((EIF_BOOLEAN)(loc4 != NULL)) {
						RTHOOK(18);
						(nstcall = 1, F224_2983(RTCW(loc4), loc1));
					} else {
						RTHOOK(19);
						tr1 = RTLNS(eif_new_type(223, 0x01).id, 223, _OBJSIZ_3_0_0_1_0_2_0_0_);
						(nstcall = -1, F224_2983(RTCW(tr1), loc1));
						loc4 = (EIF_REFERENCE) tr1;
					}
					RTHOOK(20);
					(nstcall = 1, F224_3014(RTCW(loc4), arg1, arg2, arg3));
				} else {
					RTHOOK(21);
					tb2 = (nstcall = 1, F226_3093(RTCW(loc3)));
					if (tb2) {
						RTHOOK(22);
						if ((EIF_BOOLEAN)(loc2 != NULL)) {
							RTHOOK(23);
							(nstcall = 1, F644_3618(RTCW(loc2), loc1));
						} else {
							RTHOOK(24);
							tr1 = RTLNS(eif_new_type(644, 0x01).id, 644, _OBJSIZ_4_6_2_4_1_1_2_1_);
							(nstcall = -1, F644_3484(RTCW(tr1), loc1));
							loc2 = (EIF_REFERENCE) tr1;
						}
						RTHOOK(25);
						(nstcall = 1, F644_3616(RTCW(loc2)));
						RTHOOK(26);
						tr1 = (nstcall = 1, F855_4646(RTCW(loc1)));
						(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2955[Dtype(RTCW(loc9))-564])(loc9, tr1));
						RTHOOK(27);
						loc8++;
					}
				}
				RTHOOK(28);
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg3 > ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (loc8 >= arg3))) {
					RTHOOK(29);
					if ((EIF_BOOLEAN)(arg1 != NULL)) {
						RTHOOK(30);
						(FUNCTION_CAST(void, (EIF_POINTER, EIF_REFERENCE, EIF_REFERENCE)) *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_4_2_0_3_0_0_))(
							*(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_4_2_0_3_0_1_),
							*(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_), loc9);
					}
					RTHOOK(31);
					if ((EIF_BOOLEAN)(arg2 != NULL)) {
						RTHOOK(32);
						tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_POINTER, EIF_REFERENCE)) *(EIF_POINTER *)(RTCW(arg2)+ _PTROFF_4_3_0_3_0_0_))(
							*(EIF_POINTER *)(RTCW(arg2)+ _PTROFF_4_3_0_3_0_1_),
							*(EIF_REFERENCE *)(RTCW(arg2) + _REFACS_1_));
						tb3 = tb2;
						loc10 = (EIF_BOOLEAN) tb3;
					}
					RTHOOK(33);
					(nstcall = 1, F825_4403(RTCW(loc9)));
					RTHOOK(34);
					loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
				}
			}
		}
		RTHOOK(35);
		(nstcall = 1, F224_2988(RTCW(loc5)));
		RTHOOK(36);
		tp1 = *(EIF_POINTER *)(RTCW(loc5)+ _PTROFF_3_0_0_1_0_1_);
		loc6 = (EIF_POINTER) tp1;
	}
	RTHOOK(37);
	(nstcall = 1, F224_2992(RTCW(loc5)));
	RTHOOK(38);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg3 > ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (loc8 > ((EIF_INTEGER_32) 0L))) && (EIF_BOOLEAN)(arg1 != NULL))) {
		RTHOOK(39);
		(FUNCTION_CAST(void, (EIF_POINTER, EIF_REFERENCE, EIF_REFERENCE)) *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_4_2_0_3_0_0_))(
			*(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_4_2_0_3_0_1_),
			*(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_), loc9);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTE_E
	RTXSC;
	RTS_SRR
	RTHOOK(40);
	tb2 = '\0';
	if ((EIF_BOOLEAN)(loc5 != NULL)) {
		tb3 = (nstcall = 1, F224_3004(RTCW(loc5)));
		tb2 = (EIF_BOOLEAN) !tb3;
	}
	if (tb2) {
		RTHOOK(41);
		(nstcall = 1, F224_2992(RTCW(loc5)));
	}
	/* NOTREACHED */
	RTE_EE
	RTHOOK(42);
	RTEOK;
	RTLE;
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {DIRECTORY}.recursive_delete_with_action */
void F224_3014 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,arg2);
	RTLR(3,loc1);
	RTLIU(4);
	
	RTEAA("recursive_delete_with_action", 223, Current, 1, 3, 3055);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("directory_exists", EX_PRE);
		RTTE((nstcall = 0, F224_3006(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F224_3013(Current, arg1, arg2, arg3));
	RTHOOK(3);
	tb1 = '\01';
	if ((EIF_BOOLEAN)(arg2 != NULL)) {
		tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_POINTER, EIF_REFERENCE)) *(EIF_POINTER *)(RTCW(arg2)+ _PTROFF_4_3_0_3_0_0_))(
			*(EIF_POINTER *)(RTCW(arg2)+ _PTROFF_4_3_0_3_0_1_),
			*(EIF_REFERENCE *)(RTCW(arg2) + _REFACS_1_));
		tb3 = tb2;
		tb1 = (EIF_BOOLEAN) !tb3;
	}
	if (tb1) {
		RTHOOK(4);
		(nstcall = 0, F224_3010(Current));
		RTHOOK(5);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg3 > ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN)(arg1 != NULL))) {
			RTHOOK(6);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,824,0xFF01,964,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
				loc1 = RTLNS(typres0.id, 824, _OBJSIZ_1_1_0_1_0_0_0_0_);
			}
			(nstcall = -1, F825_4344(RTCW(loc1), ((EIF_INTEGER_32) 1L)));
			RTHOOK(7);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2955[Dtype(RTCW(loc1))-564])(loc1, *(EIF_REFERENCE *)(Current + _REFACS_1_)));
			RTHOOK(8);
			(FUNCTION_CAST(void, (EIF_POINTER, EIF_REFERENCE, EIF_REFERENCE)) *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_4_2_0_3_0_0_))(
				*(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_4_2_0_3_0_1_),
				*(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_), loc1);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
}

/* {DIRECTORY}.dispose */
void F224_3015 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("dispose", 223, Current, 0, 0, 3056);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN) !(nstcall = 0, F224_3004(Current))) {
		RTHOOK(2);
		(nstcall = 0, F224_2992(Current));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {DIRECTORY}.directory_pointer */
EIF_POINTER F224_3016 (EIF_REFERENCE Current)
{
	return *(EIF_POINTER *)(Current+ _PTROFF_3_0_0_1_0_0_);
}


/* {DIRECTORY}.last_entry_pointer */
EIF_POINTER F224_3017 (EIF_REFERENCE Current)
{
	return *(EIF_POINTER *)(Current+ _PTROFF_3_0_0_1_0_1_);
}


/* {DIRECTORY}.set_name */
void F224_3018 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("set_name", 223, Current, 0, 1, 3059);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg1;
	RTHOOK(2);
	tr1 = RTOUCR(146,(nstcall = 0, F224_3028), (Current));
	tr2 = (nstcall = 1, F226_3078(RTCW(tr1), arg1, *(EIF_REFERENCE *)(Current + _REFACS_2_)));
	RTAR(Current, tr2);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("name_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) == arg1)) {
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
}

/* {DIRECTORY}.internal_name */
EIF_REFERENCE F224_3019 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {DIRECTORY}.internal_name_pointer */
EIF_REFERENCE F224_3020 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("internal_name_pointer", 223, Current, 1, 0, 3061);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTHOOK(2);
		Result = (EIF_REFERENCE) loc1;
	} else {
		RTHOOK(3);
		RTCT0("internal_name_pointer_set", EX_CHECK);
			RTCF0;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {DIRECTORY}.internal_detachable_name_pointer */
static EIF_REFERENCE F224_3021_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("internal_detachable_name_pointer", 223, Current, 0, 0, 3062);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F224_3021 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	if (!r) {
		if (RTAT(eif_new_type(213, 0))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			RTLIU(1);
			r = (F224_3021_body (Current));
			*(EIF_REFERENCE *)(Current + _REFACS_2_) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


/* {DIRECTORY}.mode */
EIF_INTEGER_32 F224_3022 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_0_0_0_);
}


/* {DIRECTORY}.current_directory_string */

EIF_REFERENCE F224_3025 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (147,RTMS_EX_H(".",1,46));
}

/* {DIRECTORY}.parent_directory_string */

EIF_REFERENCE F224_3026 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (148,RTMS_EX_H("..",2,11822));
}

/* {DIRECTORY}.directory_separator_string */
static EIF_REFERENCE F224_3027_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER_8 tc1;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(149)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("directory_separator_string", 223, Current, 0, 0, 3068);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(969, 0x01).id, 969, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F968_6060(RTCW(tr1), ((EIF_INTEGER_32) 1L)));
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = RTOUCR(10,(nstcall = 0, F1_28), (Current));
	tc1 = RTOUCB(EIF_CHARACTER_8,88,(nstcall = 1, F43_441), (RTCW(tr1)));
	(nstcall = 1, F970_6186(RTCW(Result), tc1));
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F224_3027 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(149,F224_3027_body,(Current));
}

/* {DIRECTORY}.file_info */
static EIF_REFERENCE F224_3028_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(146)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("file_info", 223, Current, 0, 0, 3069);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(225, 0x01).id, 225, _OBJSIZ_3_2_0_0_0_0_0_0_);
	(nstcall = -1, F226_3061(RTCW(tr1)));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F224_3028 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(146,F224_3028_body,(Current));
}

/* {DIRECTORY}.file_mkdir */
void F224_3029 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("file_mkdir", 223, Current, 0, 1, 3070);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);eif_file_mkdir((EIF_FILENAME) arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {DIRECTORY}.dir_open */
EIF_POINTER F224_3030 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	RTEX;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("dir_open", 223, Current, 0, 1, 3071);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_POINTER) eif_dir_open((EIF_FILENAME) arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {DIRECTORY}.dir_rewind */
EIF_POINTER F224_3031 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	RTEX;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("dir_rewind", 223, Current, 0, 2, 3072);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_POINTER) eif_dir_rewind((EIF_POINTER) arg1, (EIF_FILENAME) arg2);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {DIRECTORY}.dir_close */
void F224_3032 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("dir_close", 223, Current, 0, 1, 3073);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);eif_dir_close(arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {DIRECTORY}.eif_dir_next */
EIF_POINTER F224_3033 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	RTEX;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("eif_dir_next", 223, Current, 0, 1, 3074);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_POINTER) eif_dir_next(arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {DIRECTORY}.eif_dir_delete */
void F224_3034 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("eif_dir_delete", 223, Current, 0, 1, 3075);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);eif_file_unlink((EIF_FILENAME) arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {DIRECTORY}.eif_dir_exists */
EIF_BOOLEAN F224_3035 (EIF_REFERENCE Current, EIF_POINTER arg1)
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
	
	RTEAA("eif_dir_exists", 223, Current, 0, 1, 3076);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_BOOLEAN) EIF_TEST(eif_dir_exists((EIF_FILENAME) arg1));
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {DIRECTORY}.eif_dir_is_readable */
EIF_BOOLEAN F224_3036 (EIF_REFERENCE Current, EIF_POINTER arg1)
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
	
	RTEAA("eif_dir_is_readable", 223, Current, 0, 1, 3077);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_BOOLEAN) EIF_TEST(eif_dir_is_readable((EIF_FILENAME) arg1));
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {DIRECTORY}.eif_dir_is_executable */
EIF_BOOLEAN F224_3037 (EIF_REFERENCE Current, EIF_POINTER arg1)
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
	
	RTEAA("eif_dir_is_executable", 223, Current, 0, 1, 3078);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_BOOLEAN) EIF_TEST(eif_dir_is_executable((EIF_FILENAME) arg1));
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {DIRECTORY}.eif_dir_is_writable */
EIF_BOOLEAN F224_3038 (EIF_REFERENCE Current, EIF_POINTER arg1)
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
	
	RTEAA("eif_dir_is_writable", 223, Current, 0, 1, 3079);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_BOOLEAN) EIF_TEST(eif_dir_is_writable((EIF_FILENAME) arg1));
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {DIRECTORY}.eif_dir_rename */
void F224_3039 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("eif_dir_rename", 223, Current, 0, 2, 3080);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);eif_file_rename((EIF_FILENAME) arg1, (EIF_FILENAME) arg2);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {DIRECTORY}._invariant */
void F224_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTEAINV(l_feature_name, 184, Current, 0, 0);
	RTIT("name_attached", Current);
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit185 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
