/*
 * Code for class HASH_TABLE_ITERATION_CURSOR [NATURAL_32, POINTER]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ha591.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {HASH_TABLE_ITERATION_CURSOR}.item */
EIF_NATURAL_32 F324_3274 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("item", 323, Current, 0, 0, 3634);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F324_3277(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = *(EIF_REFERENCE *)(RTCW(tr1));
	tu4_1 = (nstcall = 1, F766_4161(RTCW(tr2), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_)));
	Result = (EIF_NATURAL_32) tu4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {HASH_TABLE_ITERATION_CURSOR}.key */
EIF_POINTER F324_3275 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("key", 323, Current, 0, 0, 3635);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F324_3277(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_1_);
	tp1 = (nstcall = 1, F765_4161(RTCW(tr2), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_)));
	Result = (EIF_POINTER) tp1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {HASH_TABLE_ITERATION_CURSOR}.cursor_index */
EIF_INTEGER_32 F324_3276 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("cursor_index", 323, Current, 3, 0, 3636);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_valid", EX_PRE);
		RTTE((nstcall = 0, F310_3260(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_);
	RTHOOK(3);
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(4);
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_)) {
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_1_);
		ti4_1 = (nstcall = 1, F765_4171(tr2));
		loc1 = (EIF_INTEGER_32) ti4_1;
		for (;;) {
			RTHOOK(6);
			if ((EIF_BOOLEAN) (loc1 <= loc3)) break;
			RTHOOK(7);
			tr1 = *(EIF_REFERENCE *)(Current);
			ti4_1 = (nstcall = 1, F846_4506(RTCW(tr1), loc1));
			loc1 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(8);
			loc2--;
			RTHOOK(9);
			if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 0L))) {
				RTHOOK(10);
				Result++;
				RTHOOK(11);
				loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
			}
		}
	} else {
		RTHOOK(12);
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
		for (;;) {
			RTHOOK(13);
			if ((EIF_BOOLEAN) (loc1 >= loc3)) break;
			RTHOOK(14);
			tr1 = *(EIF_REFERENCE *)(Current);
			ti4_1 = (nstcall = 1, F846_4505(RTCW(tr1), loc1));
			loc1 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(15);
			loc2--;
			RTHOOK(16);
			if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 0L))) {
				RTHOOK(17);
				Result++;
				RTHOOK(18);
				loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
			}
		}
	}
	RTHOOK(19);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (((EIF_INTEGER_32) 0L) < loc2) && (EIF_BOOLEAN) (loc2 < *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_)))) {
		RTHOOK(20);
		Result++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(21);
		RTCT("positive_index", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
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
	return Result;
}

/* {HASH_TABLE_ITERATION_CURSOR}.after */
EIF_BOOLEAN F324_3277 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("after", 323, Current, 1, 0, 3637);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_);
	RTHOOK(2);
	Result = '\01';
	tb1 = '\01';
	if (!(EIF_BOOLEAN) !(nstcall = 0, F310_3260(Current))) {
		tb1 = (EIF_BOOLEAN) (loc1 < ((EIF_INTEGER_32) 0L));
	}
	if (!tb1) {
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_1_);
		ti4_1 = (nstcall = 1, F765_4171(tr2));
		Result = (EIF_BOOLEAN) (loc1 >= ti4_1);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {HASH_TABLE_ITERATION_CURSOR}.forth */
void F324_3278 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,tr4);
	RTLIU(5);
	
	RTEAA("forth", 323, Current, 3, 0, 3638);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F324_3277(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_1 = (nstcall = 0, F324_3276(Current));
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		RTE_OT
		ti4_2 = (nstcall = 0, F324_3276(Current));
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(2);
	loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_);
	RTHOOK(3);
	loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
	RTHOOK(4);
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_)) {
		RTHOOK(5);
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(6);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 > loc2) || (EIF_BOOLEAN) (loc3 < ((EIF_INTEGER_32) 0L)))) break;
			RTHOOK(7);
			tr3 = *(EIF_REFERENCE *)(Current);
			ti4_3 = (nstcall = 1, F846_4506(RTCW(tr3), loc3));
			loc3 = (EIF_INTEGER_32) ti4_3;
			RTHOOK(8);
			loc1++;
		}
	} else {
		RTHOOK(9);
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(10);
			tb1 = '\01';
			if (!(EIF_BOOLEAN) (loc1 > loc2)) {
				tr3 = *(EIF_REFERENCE *)(Current);
				tr4 = *(EIF_REFERENCE *)(RTCW(tr3) + _REFACS_1_);
				ti4_3 = (nstcall = 1, F765_4171(tr4));
				tb1 = (EIF_BOOLEAN) (loc3 >= ti4_3);
			}
			if (tb1) break;
			RTHOOK(11);
			tr3 = *(EIF_REFERENCE *)(Current);
			ti4_3 = (nstcall = 1, F846_4505(RTCW(tr3), loc3));
			loc3 = (EIF_INTEGER_32) ti4_3;
			RTHOOK(12);
			loc1++;
		}
	}
	RTHOOK(13);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_3_) = (EIF_INTEGER_32) loc3;
	if (RTAL & CK_ENSURE) {
		RTHOOK(14);
		RTCT("cursor_index_advanced", EX_POST);
		RTCO(tr1);
		if ((EIF_BOOLEAN)((nstcall = 0, F324_3276(Current)) == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(15);
		RTCT("cursor_index_advanced", EX_POST);
		RTCO(tr2);
		if ((EIF_BOOLEAN)((nstcall = 0, F324_3276(Current)) == (EIF_INTEGER_32) (ti4_2 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(16);
	RTLE;
	RTEE;
}

/* {HASH_TABLE_ITERATION_CURSOR}.target */
EIF_REFERENCE F324_3279 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


void EIF_Minit591 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
