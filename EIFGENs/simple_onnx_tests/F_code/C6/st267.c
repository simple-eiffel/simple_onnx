/*
 * Code for class STRING_8
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "st267.h"
#include "eif_built_in.h"
#include "eif_helpers.h"
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

/* {STRING_8}.make_from_cil */
void F970_6134 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("make_from_cil", 969, Current, 1, 1, 13053);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_dotnet", EX_PRE);
		RTTE((nstcall = 0, F180_2016(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		RTHOOK(3);
		ti4_1 = (nstcall = 1, F26_431(RTCW(arg1)));
		tr1 = RTOUCR(16,(nstcall = 0, F965_6020), (Current));
		ti4_2 = (nstcall = 1, F17_126(RTCW(tr1), arg1));
		loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ti4_2);
	}
	RTHOOK(4);
	(nstcall = 0, F968_6060(Current, loc1));
	RTHOOK(5);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN)(arg1 != NULL))) {
		RTHOOK(6);
		(nstcall = 0, F970_6222(Current, loc1));
		RTHOOK(7);
		tr1 = RTOUCR(16,(nstcall = 0, F965_6020), (Current));
		(nstcall = 1, F17_123(RTCW(tr1), arg1, Current));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
}

/* {STRING_8}.from_c */
void F970_6135 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("from_c", 969, Current, 1, 1, 13054);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("c_string_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != (nstcall = 0, F1_33(Current))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTOUCR(17,(nstcall = 0, F965_6017), (Current));
	(nstcall = 1, F176_1856(RTCW(tr1), arg1));
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(RTOUCR(17,(nstcall = 0, F965_6017), (Current)))+ _LNGOFF_1_0_0_0_);
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	(nstcall = 0, F970_6206(Current, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L))));
	RTHOOK(5);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) loc1;
	RTHOOK(6);
	(nstcall = 0, F967_6028(Current));
	RTHOOK(7);
	tr1 = RTOUCR(17,(nstcall = 0, F965_6017), (Current));
	(nstcall = 1, F176_1866(RTCW(tr1), Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("no_zero_byte", EX_POST);
		if ((EIF_BOOLEAN) !(nstcall = 0, F968_6095(Current, (EIF_CHARACTER_8) '\000'))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
}

/* {STRING_8}.from_c_substring */
void F970_6136 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("from_c_substring", 969, Current, 1, 3, 13055);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("c_string_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != (nstcall = 0, F1_33(Current))), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("start_position_big_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("end_position_big_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 <= (EIF_INTEGER_32) (arg3 + ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg3 - arg2) + ((EIF_INTEGER_32) 1L));
	RTHOOK(5);
	tr1 = RTOUCR(17,(nstcall = 0, F965_6017), (Current));
	tp1 = RTPOF(arg1,(EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L)));
	(nstcall = 1, F176_1857(RTCW(tr1), tp1, loc1));
	RTHOOK(6);
	(nstcall = 0, F970_6206(Current, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L))));
	RTHOOK(7);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) loc1;
	RTHOOK(8);
	(nstcall = 0, F967_6028(Current));
	RTHOOK(9);
	tr1 = RTOUCR(17,(nstcall = 0, F965_6017), (Current));
	(nstcall = 1, F176_1865(RTCW(tr1), Current, ((EIF_INTEGER_32) 1L), loc1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("valid_count", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg3 - arg2) + ((EIF_INTEGER_32) 1L)))) {
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
}

/* {STRING_8}.adapt */
EIF_REFERENCE F970_6137 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTEAA("adapt", 969, Current, 0, 1, 13056);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F970_6224(Current, ((EIF_INTEGER_32) 0L)));
	RTHOOK(2);
	(nstcall = 1, F970_6159(RTCW(Result), arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("adapt_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("shared_implementation", EX_POST);
		tb1 = (nstcall = 1, F968_6072(RTCW(Result), arg1));
		if (tb1) {
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

/* {STRING_8}.remake */
void F970_6138 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("remake", 969, Current, 0, 1, 13057);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("non_negative_size", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F968_6060(Current, arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("empty_string", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("area_allocated", EX_POST);
		if ((EIF_BOOLEAN) ((nstcall = 0, F968_6081(Current)) >= arg1)) {
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

/* {STRING_8}.item */
EIF_CHARACTER_8 F970_6139 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("item", 969, Current, 0, 1, 13058);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F965_5942(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCK;
		RTHOOK(2);
		RTCT("valid_key", EX_PRE);
		RTTE((nstcall = 0, F965_5942(Current, arg1)), label_2);
		RTCK;
		RTJB;
label_2:
		RTCK;
		RTHOOK(3);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F965_5942(Current, arg1)), label_3);
		RTCK;
		RTJB;
label_3:
		RTCF;
	}
body:;
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current);
	tc1 = (nstcall = 1, F764_4161(RTCW(tr1), (EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 1L))));
	Result = (EIF_CHARACTER_8) tc1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {STRING_8}.at */
EIF_CHARACTER_8 F970_6140 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("at", 969, Current, 0, 1, 13059);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current);
	tc1 = (nstcall = 1, F764_4161(RTCW(tr1), (EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 1L))));
	Result = (EIF_CHARACTER_8) tc1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {STRING_8}.character_32_item */
EIF_CHARACTER_32 F970_6141 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_32 tu4_1;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 Result = ((EIF_CHARACTER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("character_32_item", 969, Current, 0, 1, 13060);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F965_5942(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tu4_1 = (nstcall = 0, F970_6142(Current, arg1));
	tw1 = (EIF_CHARACTER_32) tu4_1;
	Result = (EIF_CHARACTER_32) tw1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {STRING_8}.code */
EIF_NATURAL_32 F970_6142 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_CHARACTER_8 tc1;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("code", 969, Current, 0, 1, 13061);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F965_5942(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current);
	tc1 = (nstcall = 1, F764_4161(RTCW(tr1), (EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 1L))));
	ti4_1 = (EIF_INTEGER_32) (tc1);
	tu4_1 = (EIF_NATURAL_32) ti4_1;
	Result = (EIF_NATURAL_32) tu4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {STRING_8}.item_code */
EIF_INTEGER_32 F970_6143 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 tc1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("item_code", 969, Current, 0, 1, 13062);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current);
	tc1 = (nstcall = 1, F764_4161(RTCW(tr1), (EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 1L))));
	ti4_1 = (EIF_INTEGER_32) (tc1);
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {STRING_8}.area */
EIF_REFERENCE F970_6144 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {STRING_8}.extendible */
EIF_BOOLEAN F970_6145 (EIF_REFERENCE Current)
{
	return (EIF_BOOLEAN) EIF_TRUE;
}

/* {STRING_8}.changeable_comparison_criterion */
EIF_BOOLEAN F970_6146 (EIF_REFERENCE Current)
{
	return (EIF_BOOLEAN) EIF_FALSE;
}

/* {STRING_8}.set */
void F970_6147 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,Current);
	RTLIU(4);
	
	RTEAA("set", 969, Current, 1, 3, 13066);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("argument_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4621[Dtype(RTCW(arg1))-968])(arg1, arg2, arg3));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(RTCW(loc1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1) + O4703[Dtype(loc1)-967]);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(5);
	(nstcall = 0, F967_6028(Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("is_substring", EX_POST);
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4621[Dtype(RTCW(arg1))-968])(arg1, arg2, arg3));
		if ((nstcall = 0, F968_6088(Current, tr1))) {
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

/* {STRING_8}.subcopy */
void F970_6148 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,loc2);
	RTLIU(5);
	
	RTEAA("subcopy", 969, Current, 2, 4, 13067);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_start_pos", EX_PRE);
		tb1 = (nstcall = 1, F965_5942(RTCW(arg1), arg2));
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("valid_end_pos", EX_PRE);
		tb1 = (nstcall = 1, F965_5942(RTCW(arg1), arg3));
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(4);
		RTCT("valid_bounds", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg2 <= arg3) || (EIF_BOOLEAN)(arg2 == (EIF_INTEGER_32) (arg3 + ((EIF_INTEGER_32) 1L)))), label_1);
		RTCK;
		RTHOOK(5);
		RTCT("valid_index_pos", EX_PRE);
		RTTE((nstcall = 0, F965_5942(Current, arg4)), label_1);
		RTCK;
		RTHOOK(6);
		RTCT("enough_space", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) - arg4) >= (EIF_INTEGER_32) (arg3 - arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		in_assertion = 0;
	}
	RTHOOK(7);
	if ((EIF_BOOLEAN) (arg3 >= arg2)) {
		RTHOOK(8);
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
		loc1 = (EIF_REFERENCE) tr1;
		RTHOOK(9);
		loc2 = *(EIF_REFERENCE *)(Current);
		RTHOOK(10);
		if ((EIF_BOOLEAN)(loc2 == loc1)) {
			RTHOOK(11);
			(nstcall = 1, F764_4185(RTCW(loc2), (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L)), (EIF_INTEGER_32) (arg4 - ((EIF_INTEGER_32) 1L)), (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg3 - arg2) + ((EIF_INTEGER_32) 1L))));
		} else {
			RTHOOK(12);
			(nstcall = 1, F764_4183(RTCW(loc2), loc1, (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L)), (EIF_INTEGER_32) (arg4 - ((EIF_INTEGER_32) 1L)), (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg3 - arg2) + ((EIF_INTEGER_32) 1L))));
		}
		RTHOOK(13);
		(nstcall = 0, F967_6028(Current));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(14);
		RTCT("same_count", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(15);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(16);
	RTLE;
	RTEE;
}

/* {STRING_8}.replace_substring */
void F970_6149 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc3);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTEAA("replace_substring", 969, Current, 5, 3, 13068);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_start_index", EX_PRE);
		RTTE((EIF_BOOLEAN) (((EIF_INTEGER_32) 1L) <= arg2), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("valid_end_index", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_)), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("meaningfull_interval", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 <= (EIF_INTEGER_32) (arg3 + ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		RTE_OT
		ti4_3 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O4703[Dtype(arg1)-967]);
		ti4_2 = ti4_3;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(5);
	ti4_3 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O4703[Dtype(arg1)-967]);
	loc4 = (EIF_INTEGER_32) ti4_3;
	RTHOOK(6);
	loc5 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
	RTHOOK(7);
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 - (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg3 - arg2) + ((EIF_INTEGER_32) 1L)));
	RTHOOK(8);
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + loc5);
	RTHOOK(9);
	if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(10);
		(nstcall = 0, F970_6206(Current, loc1));
	}
	RTHOOK(11);
	loc3 = *(EIF_REFERENCE *)(Current);
	RTHOOK(12);
	if ((EIF_BOOLEAN)(loc2 != ((EIF_INTEGER_32) 0L))) {
		RTHOOK(13);
		(nstcall = 1, F764_4185(RTCW(loc3), arg3, (EIF_INTEGER_32) (arg3 + loc2), (EIF_INTEGER_32) (loc5 - arg3)));
	}
	RTHOOK(14);
	(nstcall = 0, F970_6222(Current, loc1));
	RTHOOK(15);
	tr2 = *(EIF_REFERENCE *)(RTCW(arg1));
	ti4_3 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4701[Dtype(RTCW(arg1))-968])(arg1));
	(nstcall = 1, F764_4183(RTCW(loc3), tr2, ti4_3, (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L)), loc4));
	if (RTAL & CK_ENSURE) {
		RTHOOK(16);
		RTCT("new_count", EX_POST);
		RTCO(tr1);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + ti4_2) - arg3) + arg2) - ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(17);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(18);
	RTLE;
	RTEE;
}

/* {STRING_8}.replace_substring_all */
void F970_6150 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc11 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc12 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc14 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc15 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc16 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc17 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc18 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(10);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,loc16);
	RTLR(4,loc13);
	RTLR(5,loc14);
	RTLR(6,tr1);
	RTLR(7,loc18);
	RTLR(8,loc17);
	RTLR(9,tr2);
	RTLIU(10);
	
	RTEAA("replace_substring_all", 969, Current, 18, 2, 13069);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("original_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("new_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("original_not_empty", EX_PRE);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4558[Dtype(RTCW(arg1))-968])(arg1));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	if ((EIF_BOOLEAN) !(nstcall = 0, F567_3452(Current))) {
		RTHOOK(5);
		loc6 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		RTHOOK(6);
		loc16 = RTOUCR(18,(nstcall = 0, F968_6106), (Current));
		RTHOOK(7);
		(nstcall = 1, F100_1295(RTCW(loc16), arg1));
		RTHOOK(8);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O4703[Dtype(arg1)-967]);
		loc3 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(9);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg2) + O4703[Dtype(arg2)-967]);
		loc4 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(10);
		if ((EIF_BOOLEAN) (loc3 >= loc4)) {
			RTHOOK(11);
			ti4_1 = (nstcall = 1, F101_1308(RTCW(loc16), Current, arg1, ((EIF_INTEGER_32) 1L), loc6));
			loc1 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(12);
			if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 0L))) {
				RTHOOK(13);
				if ((EIF_BOOLEAN)(loc3 == loc4)) {
					RTHOOK(14);
					loc13 = *(EIF_REFERENCE *)(Current);
					RTHOOK(15);
					tr1 = *(EIF_REFERENCE *)(RTCW(arg2));
					loc14 = (EIF_REFERENCE) tr1;
					RTHOOK(16);
					ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4701[Dtype(RTCW(arg2))-968])(arg2));
					loc5 = (EIF_INTEGER_32) ti4_1;
					for (;;) {
						RTHOOK(17);
						if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) break;
						RTHOOK(18);
						(nstcall = 1, F764_4183(RTCW(loc13), loc14, loc5, (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L)), loc4));
						RTHOOK(19);
						if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc1 + loc4) <= loc6)) {
							RTHOOK(20);
							ti4_1 = (nstcall = 1, F101_1308(RTCW(loc16), Current, arg1, (EIF_INTEGER_32) (loc1 + loc4), loc6));
							loc1 = (EIF_INTEGER_32) ti4_1;
						} else {
							RTHOOK(21);
							loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
						}
					}
				} else {
					RTHOOK(22);
					if ((EIF_BOOLEAN) (loc3 > loc4)) {
						RTHOOK(23);
						ti4_1 = (nstcall = 1, F101_1308(RTCW(loc16), Current, arg1, (EIF_INTEGER_32) (loc1 + loc3), loc6));
						loc2 = (EIF_INTEGER_32) ti4_1;
						RTHOOK(24);
						loc13 = *(EIF_REFERENCE *)(Current);
						RTHOOK(25);
						tr1 = *(EIF_REFERENCE *)(RTCW(arg2));
						loc14 = (EIF_REFERENCE) tr1;
						RTHOOK(26);
						ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4701[Dtype(RTCW(arg2))-968])(arg2));
						loc5 = (EIF_INTEGER_32) ti4_1;
						for (;;) {
							RTHOOK(27);
							if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 0L))) break;
							RTHOOK(28);
							(nstcall = 1, F764_4183(RTCW(loc13), loc14, loc5, (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L)) - loc15), loc4));
							RTHOOK(29);
							(nstcall = 1, F764_4185(RTCW(loc13), (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + loc3) - ((EIF_INTEGER_32) 1L)), (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + loc4) - ((EIF_INTEGER_32) 1L)) - loc15), (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 - loc1) - loc3)));
							RTHOOK(30);
							loc1 = (EIF_INTEGER_32) loc2;
							RTHOOK(31);
							loc15 += (EIF_INTEGER_32) (loc3 - loc4);
							RTHOOK(32);
							if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc1 + loc4) <= loc6)) {
								RTHOOK(33);
								ti4_1 = (nstcall = 1, F101_1308(RTCW(loc16), Current, arg1, (EIF_INTEGER_32) (loc1 + loc3), loc6));
								loc2 = (EIF_INTEGER_32) ti4_1;
							} else {
								RTHOOK(34);
								loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
							}
						}
						RTHOOK(35);
						(nstcall = 1, F764_4183(RTCW(loc13), loc14, loc5, (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L)) - loc15), loc4));
						RTHOOK(36);
						(nstcall = 1, F764_4185(RTCW(loc13), (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + loc3) - ((EIF_INTEGER_32) 1L)), (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + loc4) - ((EIF_INTEGER_32) 1L)) - loc15), (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc6 + ((EIF_INTEGER_32) 1L)) - loc1) - loc3)));
						RTHOOK(37);
						loc15 += (EIF_INTEGER_32) (loc3 - loc4);
						RTHOOK(38);
						(nstcall = 0, F970_6222(Current, (EIF_INTEGER_32) (loc6 - loc15)));
					}
				}
				RTHOOK(39);
				(nstcall = 0, F967_6028(Current));
			}
		} else {
			RTHOOK(40);
			tr1 = (nstcall = 1, F100_1300(RTCW(loc16), Current, arg1, ((EIF_INTEGER_32) 1L), loc6));
			loc18 = tr1;
			if (EIF_TEST(loc18)) {
				RTHOOK(41);
				tr1 = (nstcall = 1, F826_4348(loc18));
				loc17 = (EIF_REFERENCE) tr1;
				RTHOOK(42);
				ti4_1 = (nstcall = 1, F761_4171(loc17));
				loc8 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(43);
				loc11 = (EIF_INTEGER_32) loc6;
				RTHOOK(44);
				loc12 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 - loc3);
				RTHOOK(45);
				loc6 += (EIF_INTEGER_32) (loc8 * loc12);
				RTHOOK(46);
				tr1 = *(EIF_REFERENCE *)(Current);
				tr2 = (nstcall = 1, F764_4192(RTCW(tr1), (EIF_CHARACTER_8) '\000', (EIF_INTEGER_32) (loc6 + ((EIF_INTEGER_32) 1L))));
				loc13 = (EIF_REFERENCE) tr2;
				RTHOOK(47);
				RTAR(Current, loc13);
				*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) loc13;
				RTHOOK(48);
				loc7 = (EIF_INTEGER_32) loc8;
				RTHOOK(49);
				ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4701[Dtype(RTCW(arg2))-968])(arg2));
				loc5 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(50);
				tr1 = *(EIF_REFERENCE *)(RTCW(arg2));
				loc14 = (EIF_REFERENCE) tr1;
				for (;;) {
					RTHOOK(51);
					if ((EIF_BOOLEAN)(loc7 == ((EIF_INTEGER_32) 0L))) break;
					RTHOOK(52);
					loc7--;
					RTHOOK(53);
					ti4_1 = (nstcall = 1, F761_4161(RTCW(loc17), loc7));
					loc9 = (EIF_INTEGER_32) ti4_1;
					RTHOOK(54);
					loc10 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc9 + (EIF_INTEGER_32) (loc7 * loc12));
					RTHOOK(55);
					(nstcall = 1, F764_4185(RTCW(loc13), (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc9 + loc3) - ((EIF_INTEGER_32) 1L)), (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc10 + loc4) - ((EIF_INTEGER_32) 1L)), (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc11 - loc9) - loc3) + ((EIF_INTEGER_32) 1L))));
					RTHOOK(56);
					loc11 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc9 - ((EIF_INTEGER_32) 1L));
					RTHOOK(57);
					(nstcall = 1, F764_4183(RTCW(loc13), loc14, loc5, (EIF_INTEGER_32) (loc10 - ((EIF_INTEGER_32) 1L)), loc4));
				}
				RTHOOK(58);
				(nstcall = 0, F970_6222(Current, loc6));
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(59);
	RTLE;
	RTEE;
}

/* {STRING_8}.replace_blank */
void F970_6151 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("replace_blank", 969, Current, 0, 0, 13070);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		RTE_OT
		ti4_2 = (nstcall = 0, F968_6081(Current));
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(1);
	(nstcall = 0, F970_6153(Current, (EIF_CHARACTER_8) ' '));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("same_size", EX_POST);
		tb1 = '\0';
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == ti4_1)) {
			RTCO(tr1);
			tb1 = (EIF_BOOLEAN)((nstcall = 0, F968_6081(Current)) == ti4_2);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {STRING_8}.fill_blank */
void F970_6152 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("fill_blank", 969, Current, 0, 0, 13071);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_1 = (nstcall = 0, F968_6081(Current));
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(1);
	(nstcall = 0, F968_6102(Current, (EIF_CHARACTER_8) ' '));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("filled", EX_POST);
		if ((nstcall = 0, F585_3454(Current))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("same_size", EX_POST);
		tb1 = '\0';
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == (nstcall = 0, F968_6081(Current)))) {
			RTCO(tr1);
			tb1 = (EIF_BOOLEAN)((nstcall = 0, F968_6081(Current)) == ti4_1);
		}
		if (tb1) {
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

/* {STRING_8}.fill_with */
void F970_6153 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("fill_with", 969, Current, 1, 1, 13072);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		RTE_OT
		ti4_2 = (nstcall = 0, F968_6081(Current));
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(1);
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
	RTHOOK(2);
	if ((EIF_BOOLEAN)(loc1 != ((EIF_INTEGER_32) 0L))) {
		RTHOOK(3);
		tr2 = *(EIF_REFERENCE *)(Current);
		(nstcall = 1, F764_4180(RTCW(tr2), arg1, ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L))));
		RTHOOK(4);
		(nstcall = 0, F967_6028(Current));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("same_count", EX_POST);
		tb1 = '\0';
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == ti4_1)) {
			RTCO(tr1);
			tb1 = (EIF_BOOLEAN)((nstcall = 0, F968_6081(Current)) == ti4_2);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {STRING_8}.replace_character */
void F970_6154 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("replace_character", 969, Current, 0, 1, 13073);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		RTE_OT
		ti4_2 = (nstcall = 0, F968_6081(Current));
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(1);
	(nstcall = 0, F970_6153(Current, arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("same_count", EX_POST);
		tb1 = '\0';
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == ti4_1)) {
			RTCO(tr1);
			tb1 = (EIF_BOOLEAN)((nstcall = 0, F968_6081(Current)) == ti4_2);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {STRING_8}.keep_head */
void F970_6155 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("keep_head", 969, Current, 0, 1, 13074);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("non_negative_argument", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		in_assertion = 0;
	}
	RTHOOK(2);
	if ((EIF_BOOLEAN) (arg1 < *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_))) {
		RTHOOK(3);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) arg1;
		RTHOOK(4);
		(nstcall = 0, F967_6028(Current));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("new_count", EX_POST);
		ti4_2 = eif_min_int32 (arg1,ti4_1);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {STRING_8}.keep_tail */
void F970_6156 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("keep_tail", 969, Current, 1, 1, 13075);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("non_negative_argument", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		in_assertion = 0;
	}
	RTHOOK(2);
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
	RTHOOK(3);
	if ((EIF_BOOLEAN) (arg1 < loc1)) {
		RTHOOK(4);
		tr1 = *(EIF_REFERENCE *)(Current);
		(nstcall = 1, F764_4185(RTCW(tr1), (EIF_INTEGER_32) (loc1 - arg1), ((EIF_INTEGER_32) 0L), arg1));
		RTHOOK(5);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) arg1;
		RTHOOK(6);
		(nstcall = 0, F967_6028(Current));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("new_count", EX_POST);
		ti4_2 = eif_min_int32 (arg1,ti4_1);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
}

/* {STRING_8}.left_adjust */
void F970_6157 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_CHARACTER_8 tc1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc3);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("left_adjust", 969, Current, 3, 0, 13076);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		in_assertion = 0;
	}
	RTHOOK(1);
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L));
	RTHOOK(2);
	loc3 = *(EIF_REFERENCE *)(Current);
	for (;;) {
		RTHOOK(3);
		tb1 = '\01';
		if (!(EIF_BOOLEAN) (loc2 > loc1)) {
			tc1 = (nstcall = 1, F764_4161(RTCW(loc3), loc2));
			tb2 = eif_builtin_CHARACTER_8_is_space__c1_b(tc1);
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) break;
		RTHOOK(4);
		loc2++;
	}
	RTHOOK(5);
	if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(6);
		loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)) - loc2);
		RTHOOK(7);
		(nstcall = 1, F764_4185(RTCW(loc3), loc2, ((EIF_INTEGER_32) 0L), loc1));
		RTHOOK(8);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) loc1;
		RTHOOK(9);
		(nstcall = 0, F967_6028(Current));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("valid_count", EX_POST);
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) <= ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("new_count", EX_POST);
		tb2 = '\01';
		if ((EIF_BOOLEAN) !(nstcall = 0, F567_3452(Current))) {
			tw1 = (nstcall = 0, F970_6141(Current, ((EIF_INTEGER_32) 1L)));
			tr1 = RTLNS(eif_new_type(916, 0x00).id, 916, _OBJSIZ_0_0_0_1_0_0_0_0_);
			*(EIF_CHARACTER_32 *)tr1 = tw1;
			tb3 = (nstcall = 1, F915_5671(RTCW(tr1)));
			tb2 = (EIF_BOOLEAN) !tb3;
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTHOOK(13);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTLE;
	RTEE;
}

/* {STRING_8}.right_adjust */
void F970_6158 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_CHARACTER_8 tc1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc4);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("right_adjust", 969, Current, 4, 0, 13077);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		in_assertion = 0;
	}
	RTHOOK(1);
	loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 1L));
	RTHOOK(2);
	loc1 = (EIF_INTEGER_32) loc2;
	RTHOOK(3);
	loc4 = *(EIF_REFERENCE *)(Current);
	for (;;) {
		RTHOOK(4);
		tb1 = '\01';
		if (!(EIF_BOOLEAN) (loc1 < ((EIF_INTEGER_32) 0L))) {
			tc1 = (nstcall = 1, F764_4161(RTCW(loc4), loc1));
			tb2 = eif_builtin_CHARACTER_8_is_space__c1_b(tc1);
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) break;
		RTHOOK(5);
		loc3++;
		RTHOOK(6);
		loc1--;
	}
	RTHOOK(7);
	if ((EIF_BOOLEAN) (loc3 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(8);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L)) - loc3);
		RTHOOK(9);
		(nstcall = 0, F967_6028(Current));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("valid_count", EX_POST);
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) <= ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("new_count", EX_POST);
		tb2 = '\01';
		if ((EIF_BOOLEAN) !(nstcall = 0, F567_3452(Current))) {
			tw1 = (nstcall = 0, F970_6141(Current, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_)));
			tr1 = RTLNS(eif_new_type(916, 0x00).id, 916, _OBJSIZ_0_0_0_1_0_0_0_0_);
			*(EIF_CHARACTER_32 *)tr1 = tw1;
			tb3 = (nstcall = 1, F915_5671(RTCW(tr1)));
			tb2 = (EIF_BOOLEAN) !tb3;
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTHOOK(13);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTLE;
	RTEE;
}

/* {STRING_8}.share */
void F970_6159 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("share", 969, Current, 0, 1, 13078);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("argument_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	(nstcall = 0, F967_6028(Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("shared_count", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN)(ti4_1 == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("shared_area", EX_POST);
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
		if ((EIF_BOOLEAN)(tr1 == *(EIF_REFERENCE *)(Current))) {
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

/* {STRING_8}.put */
void F970_6160 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("put", 969, Current, 0, 2, 13079);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_key", EX_PRE);
		RTTE((nstcall = 0, F965_5942(Current, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCK;
		RTHOOK(2);
		RTCT("valid_key", EX_PRE);
		RTTE((nstcall = 0, F965_5942(Current, arg2)), label_2);
		RTCK;
		RTJB;
label_2:
		RTCK;
		RTHOOK(3);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F965_5942(Current, arg2)), label_3);
		RTCK;
		RTJB;
label_3:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		in_assertion = 0;
	}
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current);
	(nstcall = 1, F764_4176(RTCW(tr1), arg1, (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L))));
	RTHOOK(5);
	(nstcall = 0, F967_6028(Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("inserted", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F970_6139(Current, arg2)) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("inserted", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F970_6139(Current, arg2)) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("stable_count", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTHOOK(10);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTEE;
}

/* {STRING_8}.put_code */
void F970_6161 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 tc1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("put_code", 969, Current, 0, 2, 13080);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_code", EX_PRE);
		RTTE((nstcall = 0, F968_6098(Current, arg1)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F965_5942(Current, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		in_assertion = 0;
	}
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current);
	tc1 = (EIF_CHARACTER_8) arg1;
	(nstcall = 1, F764_4176(RTCW(tr1), tc1, (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L))));
	RTHOOK(4);
	(nstcall = 0, F967_6028(Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("inserted", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F970_6142(Current, arg2)) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("stable_count", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTHOOK(8);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
}

/* {STRING_8}.precede */
void F970_6162 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLIU(2);
	
	RTEAA("precede", 969, Current, 1, 1, 13081);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		in_assertion = 0;
	}
	RTHOOK(1);
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == (nstcall = 0, F968_6081(Current)))) {
		RTHOOK(2);
		ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		ti4_3 = (nstcall = 0, F600_3458(Current));
		(nstcall = 0, F970_6205(Current, (EIF_INTEGER_32) (ti4_2 + ti4_3)));
	}
	RTHOOK(3);
	loc1 = *(EIF_REFERENCE *)(Current);
	RTHOOK(4);
	(nstcall = 1, F764_4185(RTCW(loc1), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 1L), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_)));
	RTHOOK(5);
	(nstcall = 1, F764_4176(RTCW(loc1), arg1, ((EIF_INTEGER_32) 0L)));
	RTHOOK(6);
	(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_))++;
	RTHOOK(7);
	(nstcall = 0, F967_6028(Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("new_count", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
}

/* {STRING_8}.prepend_character */
void F970_6163 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLIU(2);
	
	RTEAA("prepend_character", 969, Current, 1, 1, 13082);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		in_assertion = 0;
	}
	RTHOOK(1);
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == (nstcall = 0, F968_6081(Current)))) {
		RTHOOK(2);
		ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		ti4_3 = (nstcall = 0, F600_3458(Current));
		(nstcall = 0, F970_6205(Current, (EIF_INTEGER_32) (ti4_2 + ti4_3)));
	}
	RTHOOK(3);
	loc1 = *(EIF_REFERENCE *)(Current);
	RTHOOK(4);
	(nstcall = 1, F764_4185(RTCW(loc1), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 1L), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_)));
	RTHOOK(5);
	(nstcall = 1, F764_4176(RTCW(loc1), arg1, ((EIF_INTEGER_32) 0L)));
	RTHOOK(6);
	(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_))++;
	RTHOOK(7);
	(nstcall = 0, F967_6028(Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("new_count", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
}

/* {STRING_8}.prepend_string_general */
void F970_6164 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLIU(4);
	
	RTEAA("prepend_string_general", 969, Current, 1, 1, 13083);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("argument_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("compatible_strings", EX_PRE);
		tb1 = '\01';
		if ((nstcall = 0, F968_6091(Current))) {
			tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4557[Dtype(RTCW(arg1))-968])(arg1));
			tb1 = tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4580[Dtype(RTCW(arg1))-968])(arg1));
		ti4_1 = (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) + ti4_2);
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(3);
	loc1 = arg1;
	loc1 = RTRV(eif_new_type(967, 0x01),loc1);
	if (EIF_TEST(loc1)) {
		RTHOOK(4);
		(nstcall = 0, F970_6165(Current, loc1));
	} else {
		RTHOOK(5);
		(nstcall = 0, F967_6043(Current, arg1));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("new_count", EX_POST);
		RTCO(tr1);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
}

/* {STRING_8}.prepend */
void F970_6165 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("prepend", 969, Current, 0, 1, 13084);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("argument_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O4703[Dtype(arg1)-967]);
		ti4_1 = (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) + ti4_2);
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(2);
	(nstcall = 0, F970_6190(Current, arg1, ((EIF_INTEGER_32) 1L)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("new_count", EX_POST);
		RTCO(tr1);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {STRING_8}.prepend_substring */
void F970_6166 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc3);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("prepend_substring", 969, Current, 3, 3, 13085);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("argument_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("start_index_valid", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("end_index_valid", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O4703[Dtype(arg1)-967]);
		RTTE((EIF_BOOLEAN) (arg3 <= ti4_1), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("valid_bounds", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 <= (EIF_INTEGER_32) (arg3 + ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		in_assertion = 0;
	}
	RTHOOK(5);
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg3 - arg2) + ((EIF_INTEGER_32) 1L));
	RTHOOK(6);
	if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(7);
		loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + loc1);
		RTHOOK(8);
		if ((EIF_BOOLEAN) (loc1 > (nstcall = 0, F968_6081(Current)))) {
			RTHOOK(9);
			ti4_2 = (nstcall = 0, F600_3458(Current));
			(nstcall = 0, F970_6205(Current, (EIF_INTEGER_32) (loc1 + ti4_2)));
		}
		RTHOOK(10);
		loc3 = *(EIF_REFERENCE *)(Current);
		RTHOOK(11);
		(nstcall = 1, F764_4185(RTCW(loc3), ((EIF_INTEGER_32) 0L), loc2, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_)));
		RTHOOK(12);
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
		ti4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4701[Dtype(RTCW(arg1))-968])(arg1));
		(nstcall = 1, F764_4183(RTCW(loc3), tr1, (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_2 + arg2) - ((EIF_INTEGER_32) 1L)), ((EIF_INTEGER_32) 0L), loc2));
		RTHOOK(13);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) loc1;
		RTHOOK(14);
		(nstcall = 0, F967_6028(Current));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(15);
		RTCT("new_count", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + arg3) - arg2) + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(16);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(17);
	RTLE;
	RTEE;
}

/* {STRING_8}.prepend_boolean */
void F970_6167 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
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
	
	RTEAA("prepend_boolean", 969, Current, 0, 1, 13086);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if (arg1) {
		RTHOOK(2);
		tr1 = RTMS_EX_H("True",4,1416787301);
	} else {
		RTHOOK(3);
		tr1 = RTMS_EX_H("False",5,1635034981);
	}
	(nstcall = 0, F970_6165(Current, tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {STRING_8}.prepend_double */
void F970_6168 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
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
	
	RTEAA("prepend_double", 969, Current, 0, 1, 13087);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = eif_out__r8_s1(arg1);
	(nstcall = 0, F970_6164(Current, tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {STRING_8}.prepend_integer */
void F970_6169 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("prepend_integer", 969, Current, 0, 1, 13088);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = eif_out__i4_s1(arg1);
	(nstcall = 0, F970_6164(Current, tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {STRING_8}.prepend_real */
void F970_6170 (EIF_REFERENCE Current, EIF_REAL_32 arg1)
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
	
	RTEAA("prepend_real", 969, Current, 0, 1, 13089);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = eif_out__r4_s1(arg1);
	(nstcall = 0, F970_6164(Current, tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {STRING_8}.prepend_string */
void F970_6171 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("prepend_string", 969, Current, 0, 1, 13090);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		RTHOOK(2);
		(nstcall = 0, F970_6165(Current, arg1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {STRING_8}.append_string_general */
void F970_6172 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLIU(4);
	
	RTEAA("append_string_general", 969, Current, 1, 1, 13091);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("argument_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("compatible_strings", EX_PRE);
		tb1 = '\01';
		if ((nstcall = 0, F968_6091(Current))) {
			tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4557[Dtype(RTCW(arg1))-968])(arg1));
			tb1 = tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		RTE_OT
		ti4_3 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4580[Dtype(RTCW(arg1))-968])(arg1));
		ti4_2 = ti4_3;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(3);
	loc1 = arg1;
	loc1 = RTRV(eif_new_type(967, 0x01),loc1);
	if (EIF_TEST(loc1)) {
		RTHOOK(4);
		(nstcall = 0, F970_6173(Current, loc1));
	} else {
		RTHOOK(5);
		(nstcall = 0, F967_6041(Current, arg1));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("new_count", EX_POST);
		RTCO(tr1);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == (EIF_INTEGER_32) (ti4_1 + ti4_2))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
}

/* {STRING_8}.append */
void F970_6173 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLIU(5);
	
	RTEAA("append", 969, Current, 3, 1, 13092);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("argument_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		RTE_OT
		ti4_3 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O4703[Dtype(arg1)-967]);
		ti4_2 = ti4_3;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(2);
	ti4_3 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O4703[Dtype(arg1)-967]);
	loc2 = (EIF_INTEGER_32) ti4_3;
	RTHOOK(3);
	if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(4);
		loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		RTHOOK(5);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + loc1);
		RTHOOK(6);
		if ((EIF_BOOLEAN) (loc3 > (nstcall = 0, F968_6081(Current)))) {
			RTHOOK(7);
			ti4_3 = (nstcall = 0, F600_3458(Current));
			(nstcall = 0, F970_6205(Current, (EIF_INTEGER_32) (loc3 + ti4_3)));
		}
		RTHOOK(8);
		tr2 = *(EIF_REFERENCE *)(Current);
		tr3 = *(EIF_REFERENCE *)(RTCW(arg1));
		ti4_3 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4701[Dtype(RTCW(arg1))-968])(arg1));
		(nstcall = 1, F764_4183(RTCW(tr2), tr3, ti4_3, loc1, loc2));
		RTHOOK(9);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) loc3;
		RTHOOK(10);
		(nstcall = 0, F967_6028(Current));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("new_count", EX_POST);
		RTCO(tr1);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == (EIF_INTEGER_32) (ti4_1 + ti4_2))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTLE;
	RTEE;
}

/* {STRING_8}.append_substring */
void F970_6174 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("append_substring", 969, Current, 3, 3, 13093);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("argument_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("start_index_valid", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("end_index_valid", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O4703[Dtype(arg1)-967]);
		RTTE((EIF_BOOLEAN) (arg3 <= ti4_1), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("valid_bounds", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 <= (EIF_INTEGER_32) (arg3 + ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		in_assertion = 0;
	}
	RTHOOK(5);
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg3 - arg2) + ((EIF_INTEGER_32) 1L));
	RTHOOK(6);
	if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(7);
		loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		RTHOOK(8);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + loc1);
		RTHOOK(9);
		if ((EIF_BOOLEAN) (loc3 > (nstcall = 0, F968_6081(Current)))) {
			RTHOOK(10);
			ti4_2 = (nstcall = 0, F600_3458(Current));
			(nstcall = 0, F970_6205(Current, (EIF_INTEGER_32) (loc3 + ti4_2)));
		}
		RTHOOK(11);
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = *(EIF_REFERENCE *)(RTCW(arg1));
		ti4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4701[Dtype(RTCW(arg1))-968])(arg1));
		(nstcall = 1, F764_4183(RTCW(tr1), tr2, (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_2 + arg2) - ((EIF_INTEGER_32) 1L)), loc1, loc2));
		RTHOOK(12);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) loc3;
		RTHOOK(13);
		(nstcall = 0, F967_6028(Current));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(14);
		RTCT("new_count", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == (EIF_INTEGER_32) (ti4_1 + (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg3 - arg2) + ((EIF_INTEGER_32) 1L))))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(15);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(16);
	RTLE;
	RTEE;
}

/* {STRING_8}.append_string */
void F970_6175 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("append_string", 969, Current, 0, 1, 13094);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		RTHOOK(2);
		(nstcall = 0, F970_6173(Current, arg1));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("appended", EX_POST);
		if ((!((EIF_BOOLEAN)(arg1 != NULL)) || ((EIF_BOOLEAN) 1))) {
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

/* {STRING_8}.append_integer */
void F970_6176 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc4 = (EIF_CHARACTER_8) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_CHARACTER_8 tc1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc5);
	RTLIU(2);
	
	RTEAA("append_integer", 969, Current, 5, 1, 13095);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(2);
		(nstcall = 0, F970_6186(Current, (EIF_CHARACTER_8) '0'));
	} else {
		RTHOOK(3);
		loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		RTHOOK(4);
		if ((EIF_BOOLEAN) (arg1 < ((EIF_INTEGER_32) 0L))) {
			RTHOOK(5);
			(nstcall = 0, F970_6186(Current, (EIF_CHARACTER_8) '-'));
			RTHOOK(6);
			loc2++;
			RTHOOK(7);
			if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 0x80000000L))) {
				RTHOOK(8);
				(nstcall = 0, F970_6186(Current, (EIF_CHARACTER_8) '8'));
				RTHOOK(9);
				loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) -(EIF_INTEGER_32) (arg1 / ((EIF_INTEGER_32) 10L));
			} else {
				RTHOOK(10);
				loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) -arg1;
			}
		} else {
			RTHOOK(11);
			loc1 = (EIF_INTEGER_32) arg1;
		}
		for (;;) {
			RTHOOK(12);
			if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) break;
			RTHOOK(13);
			tc1 = (EIF_CHARACTER_8) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 % ((EIF_INTEGER_32) 10L)) + ((EIF_INTEGER_32) 48L));
			(nstcall = 0, F970_6186(Current, tc1));
			RTHOOK(14);
			loc1 /= ((EIF_INTEGER_32) 10L);
		}
		RTHOOK(15);
		loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L));
		RTHOOK(16);
		loc5 = *(EIF_REFERENCE *)(Current);
		for (;;) {
			RTHOOK(17);
			if ((EIF_BOOLEAN) (loc2 >= loc3)) break;
			RTHOOK(18);
			tc1 = (nstcall = 1, F764_4161(RTCW(loc5), loc2));
			loc4 = (EIF_CHARACTER_8) tc1;
			RTHOOK(19);
			tc1 = (nstcall = 1, F764_4161(RTCW(loc5), loc3));
			(nstcall = 1, F764_4176(RTCW(loc5), tc1, loc2));
			RTHOOK(20);
			(nstcall = 1, F764_4176(RTCW(loc5), loc4, loc3));
			RTHOOK(21);
			loc3--;
			RTHOOK(22);
			loc2++;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(23);
	RTLE;
	RTEE;
}

/* {STRING_8}.append_integer_8 */
void F970_6177 (EIF_REFERENCE Current, EIF_INTEGER_8 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_8 loc1 = (EIF_INTEGER_8) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc4 = (EIF_CHARACTER_8) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_CHARACTER_8 tc1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc5);
	RTLIU(2);
	
	RTEAA("append_integer_8", 969, Current, 5, 1, 13096);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN)(arg1 == (EIF_INTEGER_8) ((EIF_INTEGER_32) 0L))) {
		RTHOOK(2);
		(nstcall = 0, F970_6186(Current, (EIF_CHARACTER_8) '0'));
	} else {
		RTHOOK(3);
		loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		RTHOOK(4);
		if ((EIF_BOOLEAN) (arg1 < (EIF_INTEGER_8) ((EIF_INTEGER_32) 0L))) {
			RTHOOK(5);
			(nstcall = 0, F970_6186(Current, (EIF_CHARACTER_8) '-'));
			RTHOOK(6);
			loc2++;
			RTHOOK(7);
			if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_8) -128L))) {
				RTHOOK(8);
				(nstcall = 0, F970_6186(Current, (EIF_CHARACTER_8) '8'));
				RTHOOK(9);
				loc1 = (EIF_INTEGER_8) (EIF_INTEGER_8) -(EIF_INTEGER_8) (arg1 / (EIF_INTEGER_8) ((EIF_INTEGER_32) 10L));
			} else {
				RTHOOK(10);
				loc1 = (EIF_INTEGER_8) (EIF_INTEGER_8) -arg1;
			}
		} else {
			RTHOOK(11);
			loc1 = (EIF_INTEGER_8) arg1;
		}
		for (;;) {
			RTHOOK(12);
			if ((EIF_BOOLEAN)(loc1 == (EIF_INTEGER_8) ((EIF_INTEGER_32) 0L))) break;
			RTHOOK(13);
			tc1 = (EIF_CHARACTER_8) ((EIF_INTEGER_8) ((EIF_INTEGER_8) (loc1 % (EIF_INTEGER_8) ((EIF_INTEGER_32) 10L)) + (EIF_INTEGER_8) ((EIF_INTEGER_32) 48L)));
			(nstcall = 0, F970_6186(Current, tc1));
			RTHOOK(14);
			loc1 /= (EIF_INTEGER_8) ((EIF_INTEGER_32) 10L);
		}
		RTHOOK(15);
		loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L));
		RTHOOK(16);
		loc5 = *(EIF_REFERENCE *)(Current);
		for (;;) {
			RTHOOK(17);
			if ((EIF_BOOLEAN) (loc2 >= loc3)) break;
			RTHOOK(18);
			tc1 = (nstcall = 1, F764_4161(RTCW(loc5), loc2));
			loc4 = (EIF_CHARACTER_8) tc1;
			RTHOOK(19);
			tc1 = (nstcall = 1, F764_4161(RTCW(loc5), loc3));
			(nstcall = 1, F764_4176(RTCW(loc5), tc1, loc2));
			RTHOOK(20);
			(nstcall = 1, F764_4176(RTCW(loc5), loc4, loc3));
			RTHOOK(21);
			loc3--;
			RTHOOK(22);
			loc2++;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(23);
	RTLE;
	RTEE;
}

/* {STRING_8}.append_integer_16 */
void F970_6178 (EIF_REFERENCE Current, EIF_INTEGER_16 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_16 loc1 = (EIF_INTEGER_16) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc4 = (EIF_CHARACTER_8) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_CHARACTER_8 tc1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc5);
	RTLIU(2);
	
	RTEAA("append_integer_16", 969, Current, 5, 1, 13097);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN)(arg1 == (EIF_INTEGER_16) ((EIF_INTEGER_32) 0L))) {
		RTHOOK(2);
		(nstcall = 0, F970_6186(Current, (EIF_CHARACTER_8) '0'));
	} else {
		RTHOOK(3);
		loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		RTHOOK(4);
		if ((EIF_BOOLEAN) (arg1 < (EIF_INTEGER_16) ((EIF_INTEGER_32) 0L))) {
			RTHOOK(5);
			(nstcall = 0, F970_6186(Current, (EIF_CHARACTER_8) '-'));
			RTHOOK(6);
			loc2++;
			RTHOOK(7);
			if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_16) -32768L))) {
				RTHOOK(8);
				(nstcall = 0, F970_6186(Current, (EIF_CHARACTER_8) '8'));
				RTHOOK(9);
				loc1 = (EIF_INTEGER_16) (EIF_INTEGER_16) -(EIF_INTEGER_16) (arg1 / (EIF_INTEGER_16) ((EIF_INTEGER_32) 10L));
			} else {
				RTHOOK(10);
				loc1 = (EIF_INTEGER_16) (EIF_INTEGER_16) -arg1;
			}
		} else {
			RTHOOK(11);
			loc1 = (EIF_INTEGER_16) arg1;
		}
		for (;;) {
			RTHOOK(12);
			if ((EIF_BOOLEAN)(loc1 == (EIF_INTEGER_16) ((EIF_INTEGER_32) 0L))) break;
			RTHOOK(13);
			tc1 = (EIF_CHARACTER_8) ((EIF_INTEGER_16) ((EIF_INTEGER_16) (loc1 % (EIF_INTEGER_16) ((EIF_INTEGER_32) 10L)) + (EIF_INTEGER_16) ((EIF_INTEGER_32) 48L)));
			(nstcall = 0, F970_6186(Current, tc1));
			RTHOOK(14);
			loc1 /= (EIF_INTEGER_16) ((EIF_INTEGER_32) 10L);
		}
		RTHOOK(15);
		loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L));
		RTHOOK(16);
		loc5 = *(EIF_REFERENCE *)(Current);
		for (;;) {
			RTHOOK(17);
			if ((EIF_BOOLEAN) (loc2 >= loc3)) break;
			RTHOOK(18);
			tc1 = (nstcall = 1, F764_4161(RTCW(loc5), loc2));
			loc4 = (EIF_CHARACTER_8) tc1;
			RTHOOK(19);
			tc1 = (nstcall = 1, F764_4161(RTCW(loc5), loc3));
			(nstcall = 1, F764_4176(RTCW(loc5), tc1, loc2));
			RTHOOK(20);
			(nstcall = 1, F764_4176(RTCW(loc5), loc4, loc3));
			RTHOOK(21);
			loc3--;
			RTHOOK(22);
			loc2++;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(23);
	RTLE;
	RTEE;
}

/* {STRING_8}.append_integer_64 */
void F970_6179 (EIF_REFERENCE Current, EIF_INTEGER_64 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_64 loc1 = (EIF_INTEGER_64) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc4 = (EIF_CHARACTER_8) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_CHARACTER_8 tc1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc5);
	RTLIU(2);
	
	RTEAA("append_integer_64", 969, Current, 5, 1, 13098);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN)(arg1 == (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L))) {
		RTHOOK(2);
		(nstcall = 0, F970_6186(Current, (EIF_CHARACTER_8) '0'));
	} else {
		RTHOOK(3);
		loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		RTHOOK(4);
		if ((EIF_BOOLEAN) (arg1 < (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L))) {
			RTHOOK(5);
			(nstcall = 0, F970_6186(Current, (EIF_CHARACTER_8) '-'));
			RTHOOK(6);
			loc2++;
			RTHOOK(7);
			if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_64) RTI64C(0x8000000000000000)))) {
				RTHOOK(8);
				(nstcall = 0, F970_6186(Current, (EIF_CHARACTER_8) '8'));
				RTHOOK(9);
				loc1 = (EIF_INTEGER_64) (EIF_INTEGER_64) -(EIF_INTEGER_64) (arg1 / (EIF_INTEGER_64) ((EIF_INTEGER_32) 10L));
			} else {
				RTHOOK(10);
				loc1 = (EIF_INTEGER_64) (EIF_INTEGER_64) -arg1;
			}
		} else {
			RTHOOK(11);
			loc1 = (EIF_INTEGER_64) arg1;
		}
		for (;;) {
			RTHOOK(12);
			if ((EIF_BOOLEAN)(loc1 == (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L))) break;
			RTHOOK(13);
			tc1 = (EIF_CHARACTER_8) ((EIF_INTEGER_64) ((EIF_INTEGER_64) (loc1 % (EIF_INTEGER_64) ((EIF_INTEGER_32) 10L)) + (EIF_INTEGER_64) ((EIF_INTEGER_32) 48L)));
			(nstcall = 0, F970_6186(Current, tc1));
			RTHOOK(14);
			loc1 /= (EIF_INTEGER_64) ((EIF_INTEGER_32) 10L);
		}
		RTHOOK(15);
		loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L));
		RTHOOK(16);
		loc5 = *(EIF_REFERENCE *)(Current);
		for (;;) {
			RTHOOK(17);
			if ((EIF_BOOLEAN) (loc2 >= loc3)) break;
			RTHOOK(18);
			tc1 = (nstcall = 1, F764_4161(RTCW(loc5), loc2));
			loc4 = (EIF_CHARACTER_8) tc1;
			RTHOOK(19);
			tc1 = (nstcall = 1, F764_4161(RTCW(loc5), loc3));
			(nstcall = 1, F764_4176(RTCW(loc5), tc1, loc2));
			RTHOOK(20);
			(nstcall = 1, F764_4176(RTCW(loc5), loc4, loc3));
			RTHOOK(21);
			loc3--;
			RTHOOK(22);
			loc2++;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(23);
	RTLE;
	RTEE;
}

/* {STRING_8}.append_natural_8 */
void F970_6180 (EIF_REFERENCE Current, EIF_NATURAL_8 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_8 loc1 = (EIF_NATURAL_8) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc4 = (EIF_CHARACTER_8) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_CHARACTER_8 tc1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc5);
	RTLIU(2);
	
	RTEAA("append_natural_8", 969, Current, 5, 1, 13099);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN)(arg1 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L))) {
		RTHOOK(2);
		(nstcall = 0, F970_6186(Current, (EIF_CHARACTER_8) '0'));
	} else {
		RTHOOK(3);
		loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		RTHOOK(4);
		loc1 = (EIF_NATURAL_8) arg1;
		for (;;) {
			RTHOOK(5);
			if ((EIF_BOOLEAN)(loc1 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L))) break;
			RTHOOK(6);
			tc1 = (EIF_CHARACTER_8) ((EIF_NATURAL_8) ((EIF_NATURAL_8) (loc1 % (EIF_NATURAL_8) ((EIF_INTEGER_32) 10L)) + (EIF_NATURAL_8) ((EIF_INTEGER_32) 48L)));
			(nstcall = 0, F970_6186(Current, tc1));
			RTHOOK(7);
			loc1 /= (EIF_NATURAL_8) ((EIF_INTEGER_32) 10L);
		}
		RTHOOK(8);
		loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L));
		RTHOOK(9);
		loc5 = *(EIF_REFERENCE *)(Current);
		for (;;) {
			RTHOOK(10);
			if ((EIF_BOOLEAN) (loc2 >= loc3)) break;
			RTHOOK(11);
			tc1 = (nstcall = 1, F764_4161(RTCW(loc5), loc2));
			loc4 = (EIF_CHARACTER_8) tc1;
			RTHOOK(12);
			tc1 = (nstcall = 1, F764_4161(RTCW(loc5), loc3));
			(nstcall = 1, F764_4176(RTCW(loc5), tc1, loc2));
			RTHOOK(13);
			(nstcall = 1, F764_4176(RTCW(loc5), loc4, loc3));
			RTHOOK(14);
			loc3--;
			RTHOOK(15);
			loc2++;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(16);
	RTLE;
	RTEE;
}

/* {STRING_8}.append_natural_16 */
void F970_6181 (EIF_REFERENCE Current, EIF_NATURAL_16 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_16 loc1 = (EIF_NATURAL_16) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc4 = (EIF_CHARACTER_8) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_CHARACTER_8 tc1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc5);
	RTLIU(2);
	
	RTEAA("append_natural_16", 969, Current, 5, 1, 13100);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN)(arg1 == (EIF_NATURAL_16) ((EIF_INTEGER_32) 0L))) {
		RTHOOK(2);
		(nstcall = 0, F970_6186(Current, (EIF_CHARACTER_8) '0'));
	} else {
		RTHOOK(3);
		loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		RTHOOK(4);
		loc1 = (EIF_NATURAL_16) arg1;
		for (;;) {
			RTHOOK(5);
			if ((EIF_BOOLEAN)(loc1 == (EIF_NATURAL_16) ((EIF_INTEGER_32) 0L))) break;
			RTHOOK(6);
			tc1 = (EIF_CHARACTER_8) ((EIF_NATURAL_16) ((EIF_NATURAL_16) (loc1 % (EIF_NATURAL_16) ((EIF_INTEGER_32) 10L)) + (EIF_NATURAL_16) ((EIF_INTEGER_32) 48L)));
			(nstcall = 0, F970_6186(Current, tc1));
			RTHOOK(7);
			loc1 /= (EIF_NATURAL_16) ((EIF_INTEGER_32) 10L);
		}
		RTHOOK(8);
		loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L));
		RTHOOK(9);
		loc5 = *(EIF_REFERENCE *)(Current);
		for (;;) {
			RTHOOK(10);
			if ((EIF_BOOLEAN) (loc2 >= loc3)) break;
			RTHOOK(11);
			tc1 = (nstcall = 1, F764_4161(RTCW(loc5), loc2));
			loc4 = (EIF_CHARACTER_8) tc1;
			RTHOOK(12);
			tc1 = (nstcall = 1, F764_4161(RTCW(loc5), loc3));
			(nstcall = 1, F764_4176(RTCW(loc5), tc1, loc2));
			RTHOOK(13);
			(nstcall = 1, F764_4176(RTCW(loc5), loc4, loc3));
			RTHOOK(14);
			loc3--;
			RTHOOK(15);
			loc2++;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(16);
	RTLE;
	RTEE;
}

/* {STRING_8}.append_natural_32 */
void F970_6182 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc4 = (EIF_CHARACTER_8) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_CHARACTER_8 tc1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc5);
	RTLIU(2);
	
	RTEAA("append_natural_32", 969, Current, 5, 1, 13101);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN)(arg1 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) {
		RTHOOK(2);
		(nstcall = 0, F970_6186(Current, (EIF_CHARACTER_8) '0'));
	} else {
		RTHOOK(3);
		loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		RTHOOK(4);
		loc1 = (EIF_NATURAL_32) arg1;
		for (;;) {
			RTHOOK(5);
			if ((EIF_BOOLEAN)(loc1 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) break;
			RTHOOK(6);
			tc1 = (EIF_CHARACTER_8) ((EIF_NATURAL_32) ((EIF_NATURAL_32) (loc1 % (EIF_NATURAL_32) ((EIF_INTEGER_32) 10L)) + (EIF_NATURAL_32) ((EIF_INTEGER_32) 48L)));
			(nstcall = 0, F970_6186(Current, tc1));
			RTHOOK(7);
			loc1 /= (EIF_NATURAL_32) ((EIF_INTEGER_32) 10L);
		}
		RTHOOK(8);
		loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L));
		RTHOOK(9);
		loc5 = *(EIF_REFERENCE *)(Current);
		for (;;) {
			RTHOOK(10);
			if ((EIF_BOOLEAN) (loc2 >= loc3)) break;
			RTHOOK(11);
			tc1 = (nstcall = 1, F764_4161(RTCW(loc5), loc2));
			loc4 = (EIF_CHARACTER_8) tc1;
			RTHOOK(12);
			tc1 = (nstcall = 1, F764_4161(RTCW(loc5), loc3));
			(nstcall = 1, F764_4176(RTCW(loc5), tc1, loc2));
			RTHOOK(13);
			(nstcall = 1, F764_4176(RTCW(loc5), loc4, loc3));
			RTHOOK(14);
			loc3--;
			RTHOOK(15);
			loc2++;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(16);
	RTLE;
	RTEE;
}

/* {STRING_8}.append_natural_64 */
void F970_6183 (EIF_REFERENCE Current, EIF_NATURAL_64 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_64 loc1 = (EIF_NATURAL_64) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc4 = (EIF_CHARACTER_8) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_CHARACTER_8 tc1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc5);
	RTLIU(2);
	
	RTEAA("append_natural_64", 969, Current, 5, 1, 13102);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN)(arg1 == (EIF_NATURAL_64) ((EIF_INTEGER_32) 0L))) {
		RTHOOK(2);
		(nstcall = 0, F970_6186(Current, (EIF_CHARACTER_8) '0'));
	} else {
		RTHOOK(3);
		loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		RTHOOK(4);
		loc1 = (EIF_NATURAL_64) arg1;
		for (;;) {
			RTHOOK(5);
			if ((EIF_BOOLEAN)(loc1 == (EIF_NATURAL_64) ((EIF_INTEGER_32) 0L))) break;
			RTHOOK(6);
			tc1 = (EIF_CHARACTER_8) ((EIF_NATURAL_64) ((EIF_NATURAL_64) (loc1 % (EIF_NATURAL_64) ((EIF_INTEGER_32) 10L)) + (EIF_NATURAL_64) ((EIF_INTEGER_32) 48L)));
			(nstcall = 0, F970_6186(Current, tc1));
			RTHOOK(7);
			loc1 /= (EIF_NATURAL_64) ((EIF_INTEGER_32) 10L);
		}
		RTHOOK(8);
		loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L));
		RTHOOK(9);
		loc5 = *(EIF_REFERENCE *)(Current);
		for (;;) {
			RTHOOK(10);
			if ((EIF_BOOLEAN) (loc2 >= loc3)) break;
			RTHOOK(11);
			tc1 = (nstcall = 1, F764_4161(RTCW(loc5), loc2));
			loc4 = (EIF_CHARACTER_8) tc1;
			RTHOOK(12);
			tc1 = (nstcall = 1, F764_4161(RTCW(loc5), loc3));
			(nstcall = 1, F764_4176(RTCW(loc5), tc1, loc2));
			RTHOOK(13);
			(nstcall = 1, F764_4176(RTCW(loc5), loc4, loc3));
			RTHOOK(14);
			loc3--;
			RTHOOK(15);
			loc2++;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(16);
	RTLE;
	RTEE;
}

/* {STRING_8}.append_real */
void F970_6184 (EIF_REFERENCE Current, EIF_REAL_32 arg1)
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
	
	RTEAA("append_real", 969, Current, 0, 1, 13103);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = eif_out__r4_s1(arg1);
	(nstcall = 0, F970_6172(Current, tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {STRING_8}.append_double */
void F970_6185 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
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
	
	RTEAA("append_double", 969, Current, 0, 1, 13104);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = eif_out__r8_s1(arg1);
	(nstcall = 0, F970_6172(Current, tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {STRING_8}.append_character */
void F970_6186 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("append_character", 969, Current, 1, 1, 13105);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		in_assertion = 0;
	}
	RTHOOK(1);
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
	RTHOOK(2);
	if ((EIF_BOOLEAN)(loc1 == (nstcall = 0, F968_6081(Current)))) {
		RTHOOK(3);
		ti4_2 = (nstcall = 0, F600_3458(Current));
		(nstcall = 0, F970_6205(Current, (EIF_INTEGER_32) (loc1 + ti4_2)));
	}
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current);
	(nstcall = 1, F764_4176(RTCW(tr1), arg1, loc1));
	RTHOOK(5);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
	RTHOOK(6);
	(nstcall = 0, F967_6028(Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("item_inserted", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F970_6139(Current, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_))) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("new_count", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
}

/* {STRING_8}.extend */
void F970_6187 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("extend", 969, Current, 1, 1, 13106);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F970_6145(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		in_assertion = 0;
	}
	RTHOOK(2);
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
	RTHOOK(3);
	if ((EIF_BOOLEAN)(loc1 == (nstcall = 0, F968_6081(Current)))) {
		RTHOOK(4);
		ti4_2 = (nstcall = 0, F600_3458(Current));
		(nstcall = 0, F970_6205(Current, (EIF_INTEGER_32) (loc1 + ti4_2)));
	}
	RTHOOK(5);
	tr1 = *(EIF_REFERENCE *)(Current);
	(nstcall = 1, F764_4176(RTCW(tr1), arg1, loc1));
	RTHOOK(6);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
	RTHOOK(7);
	(nstcall = 0, F967_6028(Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("item_inserted", EX_POST);
		if ((nstcall = 0, F451_3387(Current, arg1))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("item_inserted", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F970_6139(Current, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_))) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("new_count", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTLE;
	RTEE;
}

/* {STRING_8}.append_boolean */
void F970_6188 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
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
	
	RTEAA("append_boolean", 969, Current, 0, 1, 13107);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if (arg1) {
		RTHOOK(2);
		tr1 = RTMS_EX_H("True",4,1416787301);
	} else {
		RTHOOK(3);
		tr1 = RTMS_EX_H("False",5,1635034981);
	}
	(nstcall = 0, F970_6173(Current, tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {STRING_8}.insert */
void F970_6189 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
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
	
	RTEAA("insert", 969, Current, 0, 2, 13108);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("string_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 <= (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) + ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	(nstcall = 0, F970_6190(Current, arg1, arg2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {STRING_8}.insert_string */
void F970_6190 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc4);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("insert_string", 969, Current, 4, 2, 13109);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("string_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_insertion_index", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (((EIF_INTEGER_32) 1L) <= arg2) && (EIF_BOOLEAN) (arg2 <= (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) + ((EIF_INTEGER_32) 1L)))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O4703[Dtype(arg1)-967]);
	loc3 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	if ((EIF_BOOLEAN)(loc3 != ((EIF_INTEGER_32) 0L))) {
		RTHOOK(5);
		loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 + loc2);
		RTHOOK(6);
		if ((EIF_BOOLEAN) (loc2 > (nstcall = 0, F968_6081(Current)))) {
			RTHOOK(7);
			ti4_1 = (nstcall = 0, F600_3458(Current));
			(nstcall = 0, F970_6205(Current, (EIF_INTEGER_32) (loc2 + ti4_1)));
		}
		RTHOOK(8);
		loc4 = *(EIF_REFERENCE *)(Current);
		RTHOOK(9);
		loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L));
		RTHOOK(10);
		(nstcall = 1, F764_4185(RTCW(loc4), loc1, (EIF_INTEGER_32) (loc1 + loc3), (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) - loc1)));
		RTHOOK(11);
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4701[Dtype(RTCW(arg1))-968])(arg1));
		(nstcall = 1, F764_4183(RTCW(loc4), tr1, ti4_1, loc1, loc3));
		RTHOOK(12);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) loc2;
		RTHOOK(13);
		(nstcall = 0, F967_6028(Current));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(14);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(15);
	RTLE;
	RTEE;
}

/* {STRING_8}.insert_character */
void F970_6191 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc3);
	RTLIU(2);
	
	RTEAA("insert_character", 969, Current, 3, 2, 13110);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_insertion_index", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (((EIF_INTEGER_32) 1L) <= arg2) && (EIF_BOOLEAN) (arg2 <= (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) + ((EIF_INTEGER_32) 1L)))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		in_assertion = 0;
	}
	RTHOOK(2);
	loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) 1L) + loc2);
	RTHOOK(3);
	if ((EIF_BOOLEAN) (loc2 > (nstcall = 0, F968_6081(Current)))) {
		RTHOOK(4);
		ti4_2 = (nstcall = 0, F600_3458(Current));
		(nstcall = 0, F970_6205(Current, (EIF_INTEGER_32) (loc2 + ti4_2)));
	}
	RTHOOK(5);
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L));
	RTHOOK(6);
	loc3 = *(EIF_REFERENCE *)(Current);
	RTHOOK(7);
	(nstcall = 1, F764_4185(RTCW(loc3), loc1, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)), (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) - loc1)));
	RTHOOK(8);
	(nstcall = 1, F764_4176(RTCW(loc3), arg1, loc1));
	RTHOOK(9);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) loc2;
	RTHOOK(10);
	(nstcall = 0, F967_6028(Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("one_more_character", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTCT("inserted", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F970_6139(Current, arg2)) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(13);
		RTHOOK(14);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(15);
	RTLE;
	RTEE;
}

/* {STRING_8}.plus */
EIF_REFERENCE F970_6192 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("plus", 969, Current, 0, 1, 13111);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("argument_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
	ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O4703[Dtype(arg1)-967]);
	Result = (nstcall = 0, F970_6224(Current, (EIF_INTEGER_32) (ti4_1 + ti4_2)));
	RTHOOK(3);
	(nstcall = 1, F970_6173(RTCW(Result), Current));
	RTHOOK(4);
	(nstcall = 1, F970_6173(RTCW(Result), arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("plus_attached", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("new_count", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_1_0_2_);
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O4703[Dtype(arg1)-967]);
		if ((EIF_BOOLEAN)(ti4_1 == (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) + ti4_2))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTHOOK(8);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
	return Result;
}

/* {STRING_8}.plus_general */
EIF_REFERENCE F970_6193 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("plus_general", 969, Current, 0, 1, 13112);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("argument_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("compatible_strings", EX_PRE);
		tb1 = '\01';
		if ((nstcall = 0, F968_6091(Current))) {
			tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4557[Dtype(RTCW(arg1))-968])(arg1));
			tb1 = tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
	ti4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4580[Dtype(RTCW(arg1))-968])(arg1));
	Result = (nstcall = 0, F970_6224(Current, (EIF_INTEGER_32) (ti4_1 + ti4_2)));
	RTHOOK(4);
	(nstcall = 1, F970_6173(RTCW(Result), Current));
	RTHOOK(5);
	(nstcall = 1, F970_6172(RTCW(Result), arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("plus_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("new_count", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_1_0_2_);
		ti4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4580[Dtype(RTCW(arg1))-968])(arg1));
		if ((EIF_BOOLEAN)(ti4_1 == (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) + ti4_2))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTHOOK(9);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
	return Result;
}

/* {STRING_8}.remove */
void F970_6194 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("remove", 969, Current, 1, 1, 13020);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F965_5942(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCK;
		RTHOOK(2);
		RTCT("prunable", EX_PRE);
		RTTE((nstcall = 0, F505_3407(Current)), label_2);
		RTCK;
		RTHOOK(3);
		RTCT("valid_key", EX_PRE);
		RTTE((nstcall = 0, F965_5942(Current, arg1)), label_2);
		RTCK;
		RTJB;
label_2:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		in_assertion = 0;
	}
	RTHOOK(4);
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
	RTHOOK(5);
	tr1 = *(EIF_REFERENCE *)(Current);
	(nstcall = 1, F764_4185(RTCW(tr1), arg1, (EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 1L)), (EIF_INTEGER_32) (loc1 - arg1)));
	RTHOOK(6);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L));
	RTHOOK(7);
	(nstcall = 0, F967_6028(Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("new_count", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
}

/* {STRING_8}.remove_head */
void F970_6195 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("remove_head", 969, Current, 0, 1, 13021);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("n_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if ((EIF_BOOLEAN) (arg1 > *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_))) {
		RTHOOK(3);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		RTHOOK(4);
		(nstcall = 0, F967_6028(Current));
	} else {
		RTHOOK(5);
		(nstcall = 0, F970_6156(Current, (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) - arg1)));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {STRING_8}.remove_substring */
void F970_6196 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("remove_substring", 969, Current, 2, 2, 13022);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_start_index", EX_PRE);
		RTTE((EIF_BOOLEAN) (((EIF_INTEGER_32) 1L) <= arg1), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_end_index", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("meaningful_interval", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 - arg1) + ((EIF_INTEGER_32) 1L));
	RTHOOK(5);
	if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(6);
		loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		RTHOOK(7);
		tr1 = *(EIF_REFERENCE *)(Current);
		(nstcall = 1, F764_4185(RTCW(tr1), (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg1 + loc2) - ((EIF_INTEGER_32) 1L)), (EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 1L)), (EIF_INTEGER_32) (loc1 - arg2)));
		RTHOOK(8);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 - loc2);
		RTHOOK(9);
		(nstcall = 0, F967_6028(Current));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTEE;
}

/* {STRING_8}.remove_tail */
void F970_6197 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("remove_tail", 969, Current, 1, 1, 13023);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("n_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
	RTHOOK(3);
	if ((EIF_BOOLEAN) (arg1 > loc1)) {
		RTHOOK(4);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		RTHOOK(5);
		(nstcall = 0, F967_6028(Current));
	} else {
		RTHOOK(6);
		(nstcall = 0, F970_6155(Current, (EIF_INTEGER_32) (loc1 - arg1)));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
}

/* {STRING_8}.prune */
void F970_6198 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("prune", 969, Current, 1, 1, 13024);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("prunable", EX_PRE);
		RTTE((nstcall = 0, F505_3407(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCK;
		RTHOOK(2);
		RTJB;
label_2:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(4);
		tb1 = '\01';
		if (!(EIF_BOOLEAN) (loc1 > *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_))) {
			tb1 = (EIF_BOOLEAN)((nstcall = 0, F970_6139(Current, loc1)) == arg1);
		}
		if (tb1) break;
		RTHOOK(5);
		loc1++;
	}
	RTHOOK(6);
	if ((EIF_BOOLEAN) (loc1 <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_))) {
		RTHOOK(7);
		(nstcall = 0, F970_6194(Current, loc1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
}

/* {STRING_8}.prune_all */
void F970_6199 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_CHARACTER_8 loc5 = (EIF_CHARACTER_8) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER_8 tc1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc4);
	RTLIU(3);
	
	RTEAA("prune_all", 969, Current, 5, 1, 13025);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("prunable", EX_PRE);
		RTTE((nstcall = 0, F505_3407(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCK;
		RTHOOK(2);
		RTJB;
label_2:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		RTE_OT
		ti4_2 = (nstcall = 0, F968_6083(Current, arg1));
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(3);
	loc4 = *(EIF_REFERENCE *)(Current);
	RTHOOK(4);
	loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
	for (;;) {
		RTHOOK(5);
		if ((EIF_BOOLEAN)(loc1 == loc3)) break;
		RTHOOK(6);
		tc1 = (nstcall = 1, F764_4161(RTCW(loc4), loc1));
		loc5 = (EIF_CHARACTER_8) tc1;
		RTHOOK(7);
		if ((EIF_BOOLEAN)(loc5 != arg1)) {
			RTHOOK(8);
			(nstcall = 1, F764_4176(RTCW(loc4), loc5, loc2));
			RTHOOK(9);
			loc2++;
		}
		RTHOOK(10);
		loc1++;
	}
	RTHOOK(11);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) loc2;
	RTHOOK(12);
	(nstcall = 0, F967_6028(Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(13);
		RTCT("no_more_occurrences", EX_POST);
		if ((EIF_BOOLEAN) !(nstcall = 0, F968_6095(Current, arg1))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(14);
		RTCT("changed_count", EX_POST);
		RTCO(tr1);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == (EIF_INTEGER_32) (ti4_1 - ti4_2))) {
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
}

/* {STRING_8}.prune_all_leading */
void F970_6200 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("prune_all_leading", 969, Current, 0, 1, 13026);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	for (;;) {
		RTHOOK(1);
		tb1 = '\01';
		if (!(nstcall = 0, F567_3452(Current))) {
			tb1 = (EIF_BOOLEAN)((nstcall = 0, F970_6139(Current, ((EIF_INTEGER_32) 1L))) != arg1);
		}
		if (tb1) break;
		RTHOOK(2);
		(nstcall = 0, F970_6194(Current, ((EIF_INTEGER_32) 1L)));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {STRING_8}.prune_all_trailing */
void F970_6201 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("prune_all_trailing", 969, Current, 0, 1, 13027);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	for (;;) {
		RTHOOK(1);
		tb1 = '\01';
		if (!(nstcall = 0, F567_3452(Current))) {
			tb1 = (EIF_BOOLEAN)((nstcall = 0, F970_6139(Current, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_))) != arg1);
		}
		if (tb1) break;
		RTHOOK(2);
		(nstcall = 0, F970_6194(Current, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_)));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {STRING_8}.wipe_out */
void F970_6202 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("wipe_out", 969, Current, 0, 0, 13028);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_1 = (nstcall = 0, F968_6081(Current));
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(1);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(2);
	(nstcall = 0, F967_6028(Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("is_empty", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("same_capacity", EX_POST);
		RTCO(tr1);
		if ((EIF_BOOLEAN)((nstcall = 0, F968_6081(Current)) == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("wiped_out", EX_POST);
		if ((nstcall = 0, F567_3452(Current))) {
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
}

/* {STRING_8}.clear_all */
void F970_6203 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("clear_all", 969, Current, 0, 0, 13029);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_1 = (nstcall = 0, F968_6081(Current));
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(1);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(2);
	(nstcall = 0, F967_6028(Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("is_empty", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("same_capacity", EX_POST);
		RTCO(tr1);
		if ((EIF_BOOLEAN)((nstcall = 0, F968_6081(Current)) == ti4_1)) {
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

/* {STRING_8}.adapt_size */
void F970_6204 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("adapt_size", 969, Current, 0, 0, 13030);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	(nstcall = 0, F970_6205(Current, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {STRING_8}.resize */
void F970_6205 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("resize", 969, Current, 0, 1, 13031);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("new_size_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		in_assertion = 0;
	}
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = (nstcall = 1, F764_4194(RTCW(tr1), (EIF_CHARACTER_8) '\000', (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L))));
	RTAR(Current, tr2);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("same_count", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("capacity_large_enough", EX_POST);
		if ((EIF_BOOLEAN) ((nstcall = 0, F968_6081(Current)) >= arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {STRING_8}.grow */
void F970_6206 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("grow", 969, Current, 0, 1, 13032);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("resizable", EX_PRE);
		RTTE((nstcall = 0, F600_3459(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if ((EIF_BOOLEAN) (arg1 > (nstcall = 0, F968_6081(Current)))) {
		RTHOOK(3);
		(nstcall = 0, F970_6205(Current, arg1));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("new_capacity", EX_POST);
		if ((EIF_BOOLEAN) ((nstcall = 0, F968_6081(Current)) >= arg1)) {
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

/* {STRING_8}.trim */
void F970_6207 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,tr4);
	RTLIU(5);
	
	RTEAA("trim", 969, Current, 1, 0, 13033);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		tr1 = (nstcall = 0, F1_14(Current));
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		in_assertion = 0;
	}
	RTHOOK(1);
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
	RTHOOK(2);
	if ((EIF_BOOLEAN) (loc1 < (nstcall = 0, F968_6081(Current)))) {
		RTHOOK(3);
		tr3 = *(EIF_REFERENCE *)(Current);
		tr4 = (nstcall = 1, F764_4193(tr3, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L))));
		RTAR(Current, tr4);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr4;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("same_count", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("minimal_capacity", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F968_6081(Current)) == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("same_string", EX_POST);
		RTCO(tr2);
		if ((nstcall = 0, F968_6088(Current, tr1))) {
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

/* {STRING_8}.as_lower */
EIF_REFERENCE F970_6208 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_CHARACTER_32 tw3;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLIU(5);
	
	RTEAA("as_lower", 969, Current, 0, 0, 13034);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F1_14(Current));
	RTHOOK(2);
	(nstcall = 1, F970_6214(RTCW(Result)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("as_lower_attached", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("length", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN)(ti4_1 == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("anchor", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) > ((EIF_INTEGER_32) 0L))) {
			tw1 = (nstcall = 1, F970_6141(RTCW(Result), ((EIF_INTEGER_32) 1L)));
			tw2 = (nstcall = 0, F970_6141(Current, ((EIF_INTEGER_32) 1L)));
			tr1 = RTLNS(eif_new_type(916, 0x00).id, 916, _OBJSIZ_0_0_0_1_0_0_0_0_);
			*(EIF_CHARACTER_32 *)tr1 = tw2;
			tw3 = (nstcall = 1, F915_5661(RTCW(tr1)));
			tb1 = (EIF_BOOLEAN)(tw1 == tw3);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("recurse", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) > ((EIF_INTEGER_32) 1L))) {
			tr1 = (nstcall = 1, F970_6220(RTCW(Result), ((EIF_INTEGER_32) 2L), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_)));
			tr2 = (nstcall = 0, F970_6220(Current, ((EIF_INTEGER_32) 2L), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_)));
			tr3 = (nstcall = 1, F970_6208(RTCW(tr2)));
			tr2 = tr3;
			tb1 = RTEQ(tr1, tr2);
		}
		if (tb1) {
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
	return Result;
}

/* {STRING_8}.as_upper */
EIF_REFERENCE F970_6209 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_CHARACTER_32 tw3;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLIU(5);
	
	RTEAA("as_upper", 969, Current, 0, 0, 13035);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F1_14(Current));
	RTHOOK(2);
	(nstcall = 1, F970_6215(RTCW(Result)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("as_upper_attached", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("length", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN)(ti4_1 == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("anchor", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) > ((EIF_INTEGER_32) 0L))) {
			tw1 = (nstcall = 1, F970_6141(RTCW(Result), ((EIF_INTEGER_32) 1L)));
			tw2 = (nstcall = 0, F970_6141(Current, ((EIF_INTEGER_32) 1L)));
			tr1 = RTLNS(eif_new_type(916, 0x00).id, 916, _OBJSIZ_0_0_0_1_0_0_0_0_);
			*(EIF_CHARACTER_32 *)tr1 = tw2;
			tw3 = (nstcall = 1, F915_5659(RTCW(tr1)));
			tb1 = (EIF_BOOLEAN)(tw1 == tw3);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("recurse", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) > ((EIF_INTEGER_32) 1L))) {
			tr1 = (nstcall = 1, F970_6220(RTCW(Result), ((EIF_INTEGER_32) 2L), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_)));
			tr2 = (nstcall = 0, F970_6220(Current, ((EIF_INTEGER_32) 2L), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_)));
			tr3 = (nstcall = 1, F970_6209(RTCW(tr2)));
			tr2 = tr3;
			tb1 = RTEQ(tr1, tr2);
		}
		if (tb1) {
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
	return Result;
}

/* {STRING_8}.left_justify */
void F970_6210 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc3);
	RTLIU(2);
	
	RTEAA("left_justify", 969, Current, 3, 0, 13036);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
	RTHOOK(2);
	(nstcall = 0, F970_6157(Current));
	RTHOOK(3);
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
	RTHOOK(4);
	if ((EIF_BOOLEAN) (loc1 < loc2)) {
		RTHOOK(5);
		loc3 = *(EIF_REFERENCE *)(Current);
		for (;;) {
			RTHOOK(6);
			if ((EIF_BOOLEAN)(loc1 == loc2)) break;
			RTHOOK(7);
			(nstcall = 1, F764_4176(RTCW(loc3), (EIF_CHARACTER_8) ' ', loc1));
			RTHOOK(8);
			loc1++;
		}
		RTHOOK(9);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) loc2;
		RTHOOK(10);
		(nstcall = 0, F967_6028(Current));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTEE;
}

/* {STRING_8}.center_justify */
void F970_6211 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_CHARACTER_8 tc1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc6);
	RTLIU(2);
	
	RTEAA("center_justify", 969, Current, 6, 0, 13037);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
	RTHOOK(2);
	loc6 = *(EIF_REFERENCE *)(Current);
	for (;;) {
		RTHOOK(3);
		tb1 = '\01';
		if (!(EIF_BOOLEAN)(loc4 == loc2)) {
			tc1 = (nstcall = 1, F764_4161(RTCW(loc6), loc4));
			tb2 = eif_builtin_CHARACTER_8_is_space__c1_b(tc1);
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) break;
		RTHOOK(4);
		loc4++;
	}
	RTHOOK(5);
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 1L));
	RTHOOK(6);
	loc6 = *(EIF_REFERENCE *)(Current);
	for (;;) {
		RTHOOK(7);
		tb2 = '\01';
		if (!(EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) -1L))) {
			tc1 = (nstcall = 1, F764_4161(RTCW(loc6), loc1));
			tb3 = eif_builtin_CHARACTER_8_is_space__c1_b(tc1);
			tb2 = (EIF_BOOLEAN) !tb3;
		}
		if (tb2) break;
		RTHOOK(8);
		loc5++;
		RTHOOK(9);
		loc1--;
	}
	RTHOOK(10);
	loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 + loc5);
	RTHOOK(11);
	if ((EIF_BOOLEAN)((EIF_INTEGER_32) (loc3 % ((EIF_INTEGER_32) 2L)) == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(12);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 - (EIF_INTEGER_32) (loc3 / ((EIF_INTEGER_32) 2L)));
	} else {
		RTHOOK(13);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc4 - (EIF_INTEGER_32) (loc3 / ((EIF_INTEGER_32) 2L))) - ((EIF_INTEGER_32) 1L));
	}
	RTHOOK(14);
	if ((EIF_BOOLEAN)(loc3 != ((EIF_INTEGER_32) 0L))) {
		RTHOOK(15);
		(nstcall = 1, F764_4184(RTCW(loc6), loc4, (EIF_INTEGER_32) (loc4 - loc3), (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 - loc4) - loc5)));
		RTHOOK(16);
		if ((EIF_BOOLEAN) (loc3 < ((EIF_INTEGER_32) 0L))) {
			RTHOOK(17);
			(nstcall = 1, F764_4180(RTCW(loc6), (EIF_CHARACTER_8) ' ', loc4, (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc4 - loc3) - ((EIF_INTEGER_32) 1L))));
		} else {
			RTHOOK(18);
			(nstcall = 1, F764_4180(RTCW(loc6), (EIF_CHARACTER_8) ' ', (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 - loc5) - loc3), (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 1L))));
		}
		RTHOOK(19);
		(nstcall = 0, F967_6028(Current));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(20);
	RTLE;
	RTEE;
}

/* {STRING_8}.right_justify */
void F970_6212 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 tc1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc4);
	RTLIU(2);
	
	RTEAA("right_justify", 969, Current, 4, 0, 13038);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		in_assertion = 0;
	}
	RTHOOK(1);
	loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
	RTHOOK(2);
	(nstcall = 0, F970_6158(Current));
	RTHOOK(3);
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
	RTHOOK(4);
	loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 - loc1);
	RTHOOK(5);
	if ((EIF_BOOLEAN) (loc3 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(6);
		loc4 = *(EIF_REFERENCE *)(Current);
		for (;;) {
			RTHOOK(7);
			if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) break;
			RTHOOK(8);
			loc1--;
			RTHOOK(9);
			tc1 = (nstcall = 1, F764_4161(RTCW(loc4), loc1));
			(nstcall = 1, F764_4176(RTCW(loc4), tc1, (EIF_INTEGER_32) (loc1 + loc3)));
		}
		for (;;) {
			RTHOOK(10);
			if ((EIF_BOOLEAN)(loc3 == ((EIF_INTEGER_32) 0L))) break;
			RTHOOK(11);
			loc3--;
			RTHOOK(12);
			(nstcall = 1, F764_4176(RTCW(loc4), (EIF_CHARACTER_8) ' ', loc3));
		}
		RTHOOK(13);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) loc2;
		RTHOOK(14);
		(nstcall = 0, F967_6028(Current));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(15);
		RTCT("same_count", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == ti4_1)) {
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

/* {STRING_8}.character_justify */
void F970_6213 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc3);
	RTLIU(2);
	
	RTEAA("character_justify", 969, Current, 3, 2, 13039);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 <= (nstcall = 0, F968_6081(Current))), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("positive_position", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("pivot_not_space", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != (EIF_CHARACTER_8) ' '), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("not_empty", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F567_3452(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	loc1 = (nstcall = 0, F968_6073(Current, arg1, ((EIF_INTEGER_32) 1L)));
	RTHOOK(6);
	if ((EIF_BOOLEAN)(loc1 != ((EIF_INTEGER_32) 0L))) {
		RTHOOK(7);
		if ((EIF_BOOLEAN) (loc1 < arg2)) {
			RTHOOK(8);
			loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
			loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 + arg2) - loc1);
			RTHOOK(9);
			(nstcall = 0, F970_6206(Current, loc2));
			RTHOOK(10);
			loc3 = *(EIF_REFERENCE *)(Current);
			RTHOOK(11);
			(nstcall = 1, F764_4184(RTCW(loc3), ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) (arg2 - loc1), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_)));
			RTHOOK(12);
			(nstcall = 1, F764_4180(RTCW(loc3), (EIF_CHARACTER_8) ' ', ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 - loc1) - ((EIF_INTEGER_32) 1L))));
			RTHOOK(13);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) loc2;
		} else {
			RTHOOK(14);
			loc3 = *(EIF_REFERENCE *)(Current);
			RTHOOK(15);
			(nstcall = 1, F764_4184(RTCW(loc3), (EIF_INTEGER_32) (loc1 - arg2), ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) ((EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) - loc1) + arg2)));
			RTHOOK(16);
			(nstcall = 1, F764_4180(RTCW(loc3), (EIF_CHARACTER_8) ' ', (EIF_INTEGER_32) ((EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) - loc1) + arg2), (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) - ((EIF_INTEGER_32) 1L))));
		}
		RTHOOK(17);
		(nstcall = 0, F967_6028(Current));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(18);
	RTLE;
	RTEE;
}

/* {STRING_8}.to_lower */
void F970_6214 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("to_lower", 969, Current, 0, 0, 13040);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	(nstcall = 0, F968_6108(Current, *(EIF_REFERENCE *)(Current), ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) - ((EIF_INTEGER_32) 1L))));
	RTHOOK(2);
	(nstcall = 0, F967_6028(Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {STRING_8}.to_upper */
void F970_6215 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("to_upper", 969, Current, 0, 0, 13041);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	(nstcall = 0, F968_6109(Current, *(EIF_REFERENCE *)(Current), ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) - ((EIF_INTEGER_32) 1L))));
	RTHOOK(2);
	(nstcall = 0, F967_6028(Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {STRING_8}.linear_representation */
EIF_REFERENCE F970_6216 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("linear_representation", 969, Current, 2, 0, 13042);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,828,919,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		loc1 = RTLNS(typres0.id, 828, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	ti4_1 = (nstcall = 0, F968_6081(Current));
	(nstcall = -1, F829_4344(RTCW(loc1), ti4_1));
	RTHOOK(2);
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(3);
		if ((EIF_BOOLEAN) (loc2 > *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_))) break;
		RTHOOK(4);
		tc1 = (nstcall = 0, F970_6139(Current, loc2));
		(nstcall = 1, F829_4385(RTCW(loc1), tc1));
		RTHOOK(5);
		loc2++;
	}
	RTHOOK(6);
	Result = (EIF_REFERENCE) loc1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {STRING_8}.to_c */
EIF_REFERENCE F970_6217 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("to_c", 969, Current, 1, 0, 13043);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_is_dotnet", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F180_2016(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = *(EIF_REFERENCE *)(Current);
	RTHOOK(3);
	(nstcall = 1, F764_4176(RTCW(loc1), (EIF_CHARACTER_8) '\000', *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_)));
	RTHOOK(4);
	Result = (EIF_REFERENCE) loc1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {STRING_8}.mirrored */
EIF_REFERENCE F970_6218 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("mirrored", 969, Current, 0, 0, 13044);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F1_14(Current));
	RTHOOK(2);
	if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(3);
		(nstcall = 1, F970_6219(RTCW(Result)));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("same_count", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN)(ti4_1 == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_))) {
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

/* {STRING_8}.mirror */
void F970_6219 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_CHARACTER_8 loc2 = (EIF_CHARACTER_8) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 tc1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLIU(2);
	
	RTEAA("mirror", 969, Current, 4, 0, 13045);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		in_assertion = 0;
	}
	RTHOOK(1);
	if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(2);
		loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L));
		RTHOOK(3);
		loc1 = *(EIF_REFERENCE *)(Current);
		for (;;) {
			RTHOOK(4);
			if ((EIF_BOOLEAN) (loc3 <= loc4)) break;
			RTHOOK(5);
			tc1 = (nstcall = 1, F764_4161(RTCW(loc1), loc3));
			loc2 = (EIF_CHARACTER_8) tc1;
			RTHOOK(6);
			tc1 = (nstcall = 1, F764_4161(RTCW(loc1), loc4));
			(nstcall = 1, F764_4176(RTCW(loc1), tc1, loc3));
			RTHOOK(7);
			(nstcall = 1, F764_4176(RTCW(loc1), loc2, loc4));
			RTHOOK(8);
			loc3--;
			RTHOOK(9);
			loc4++;
		}
		RTHOOK(10);
		(nstcall = 0, F967_6028(Current));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("same_count", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == ti4_1)) {
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
}

/* {STRING_8}.substring */
EIF_REFERENCE F970_6220 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
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
	
	RTEAA("substring", 969, Current, 0, 2, 13046);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) (((EIF_INTEGER_32) 1L) <= arg1) && (EIF_BOOLEAN) (arg1 <= arg2)) && (EIF_BOOLEAN) (arg2 <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_)))) {
		RTHOOK(2);
		Result = (nstcall = 0, F970_6224(Current, (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 - arg1) + ((EIF_INTEGER_32) 1L))));
		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(RTCW(Result));
		(nstcall = 1, F764_4183(RTCW(tr1), *(EIF_REFERENCE *)(Current), (EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 1L)), ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 - arg1) + ((EIF_INTEGER_32) 1L))));
		RTHOOK(4);
		(nstcall = 1, F970_6222(RTCW(Result), (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 - arg1) + ((EIF_INTEGER_32) 1L))));
	} else {
		RTHOOK(5);
		Result = (nstcall = 0, F970_6224(Current, ((EIF_INTEGER_32) 0L)));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("substring_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("substring_count", EX_POST);
		tb1 = '\01';
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_1_0_2_);
		if (!(EIF_BOOLEAN)(ti4_1 == (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 - arg1) + ((EIF_INTEGER_32) 1L)))) {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_1_0_2_);
			tb1 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("first_code", EX_POST);
		tb1 = '\01';
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
			tw1 = (nstcall = 1, F970_6141(RTCW(Result), ((EIF_INTEGER_32) 1L)));
			tb1 = (EIF_BOOLEAN)(tw1 == (nstcall = 0, F970_6141(Current, arg1)));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("recurse", EX_POST);
		tb1 = '\01';
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_1_0_2_);
			tr1 = (nstcall = 1, F970_6220(RTCW(Result), ((EIF_INTEGER_32) 2L), ti4_1));
			tr2 = (nstcall = 0, F970_6220(Current, (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L)), arg2));
			tb1 = RTEQ(tr1, tr2);
		}
		if (tb1) {
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

/* {STRING_8}.multiply */
void F970_6221 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("multiply", 969, Current, 2, 1, 13047);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("meaningful_multiplier", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = (nstcall = 0, F1_14(Current));
	RTHOOK(3);
	(nstcall = 0, F970_6206(Current, (EIF_INTEGER_32) (arg1 * *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_))));
	RTHOOK(4);
	loc2 = (EIF_INTEGER_32) arg1;
	for (;;) {
		RTHOOK(5);
		if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 1L))) break;
		RTHOOK(6);
		(nstcall = 0, F970_6173(Current, loc1));
		RTHOOK(7);
		loc2--;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
}

/* {STRING_8}.set_count */
void F970_6222 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_count", 969, Current, 0, 1, 13048);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_count", EX_PRE);
		tb1 = '\0';
		if ((EIF_BOOLEAN) (((EIF_INTEGER_32) 0L) <= arg1)) {
			tb1 = (EIF_BOOLEAN) (arg1 <= (nstcall = 0, F968_6081(Current)));
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) = (EIF_INTEGER_32) arg1;
	RTHOOK(3);
	(nstcall = 0, F967_6028(Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("new_count", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_2_) == arg1)) {
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

/* {STRING_8}.correct_mismatch */
void F970_6223 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("correct_mismatch", 969, Current, 0, 0, 13049);
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

/* {STRING_8}.new_string */
EIF_REFERENCE F970_6224 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("new_string", 969, Current, 0, 1, 13050);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("n_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = RTLNSMART(Dftype(Current));
	(nstcall = -1, F968_6060(RTCW(Result), arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("new_string_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("new_string_empty", EX_POST);
		tb1 = (nstcall = 1, F567_3452(RTCW(Result)));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("new_string_area_big_enough", EX_POST);
		ti4_1 = (nstcall = 1, F968_6081(RTCW(Result)));
		if ((EIF_BOOLEAN) (ti4_1 >= arg1)) {
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

/* {STRING_8}.empty_area */
EIF_REFERENCE F970_6225 (EIF_REFERENCE Current)
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
	
	RTEAA("empty_area", 969, Current, 0, 0, 13051);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,763,919,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		Result = RTLNSP2(typres0.id,0,((EIF_INTEGER_32) 1L),sizeof(EIF_CHARACTER_8), EIF_TRUE);
		RT_SPECIAL_COUNT(Result) = 0;
	}
	RTHOOK(2);
	(nstcall = 1, F764_4178(RTCW(Result), (EIF_CHARACTER_8) '\000'));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("empty_area_not_void", EX_POST);
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

/* {STRING_8}._invariant */
void F970_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTEAINV(l_feature_name, 266, Current, 0, 0);
	RTIT("compare_character", Current);
	if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_)) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit267 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
