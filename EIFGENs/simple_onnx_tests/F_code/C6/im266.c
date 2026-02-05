/*
 * Code for class IMMUTABLE_STRING_8
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "im266.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {IMMUTABLE_STRING_8}.make_from_area_and_bounds */
void F969_6114 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("make_from_area_and_bounds", 968, Current, 0, 3, 13000);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_valid_count", EX_PRE);
		ti4_1 = (nstcall = 1, F764_4171(arg1));
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (ti4_1 - arg2) >= (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_) + ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("low_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("n_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	RTHOOK(6);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_3_) = (EIF_INTEGER_32) arg2;
	RTHOOK(7);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_) = (EIF_INTEGER_32) arg3;
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("area_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("area_lower_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_3_) == arg2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("count_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_) == arg3)) {
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

/* {IMMUTABLE_STRING_8}.make_from_cil */
void F969_6115 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("make_from_cil", 968, Current, 1, 1, 13001);
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
	if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(6);
		tr1 = RTOUCR(16,(nstcall = 0, F965_6020), (Current));
		(nstcall = 1, F17_124(RTCW(tr1), arg1, *(EIF_REFERENCE *)(Current)));
		RTHOOK(7);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_) = (EIF_INTEGER_32) loc1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
}

/* {IMMUTABLE_STRING_8}.copy */
void F969_6116 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("copy", 968, Current, 0, 1, 13002);
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
		RTCT("type_identity", EX_PRE);
		RTTE((nstcall = 0, F1_7(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	if ((EIF_BOOLEAN)(arg1 != Current)) {
		RTHOOK(4);
		(nstcall = 0, F1_16(Current, arg1));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("is_equal", EX_POST);
		if (RTEQ(Current, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("new_result_count", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_0_0_2_);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_) == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("new_result_count", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_0_0_2_);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_) == ti4_1)) {
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

/* {IMMUTABLE_STRING_8}.item */
EIF_CHARACTER_8 F969_6117 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("item", 968, Current, 0, 1, 13003);
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
	tc1 = (nstcall = 1, F764_4161(RTCW(tr1), (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg1 + *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_3_)) - ((EIF_INTEGER_32) 1L))));
	Result = (EIF_CHARACTER_8) tc1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {IMMUTABLE_STRING_8}.at */
EIF_CHARACTER_8 F969_6118 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("at", 968, Current, 0, 1, 13004);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current);
	tc1 = (nstcall = 1, F764_4161(RTCW(tr1), (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg1 + *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_3_)) - ((EIF_INTEGER_32) 1L))));
	Result = (EIF_CHARACTER_8) tc1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {IMMUTABLE_STRING_8}.character_32_item */
EIF_CHARACTER_32 F969_6119 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_32 Result = ((EIF_CHARACTER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("character_32_item", 968, Current, 0, 1, 13005);
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
	tc1 = (nstcall = 1, F764_4161(RTCW(tr1), (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg1 + *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_3_)) - ((EIF_INTEGER_32) 1L))));
	tw1 = (EIF_CHARACTER_32) tc1;
	Result = (EIF_CHARACTER_32) tw1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {IMMUTABLE_STRING_8}.code */
EIF_NATURAL_32 F969_6120 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
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
	
	RTEAA("code", 968, Current, 0, 1, 13006);
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
	tc1 = (nstcall = 1, F764_4161(RTCW(tr1), (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg1 + *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_3_)) - ((EIF_INTEGER_32) 1L))));
	tu4_1 = (EIF_NATURAL_32) tc1;
	Result = (EIF_NATURAL_32) tu4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {IMMUTABLE_STRING_8}.item_code */
EIF_INTEGER_32 F969_6121 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("item_code", 968, Current, 0, 1, 13007);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_)), label_1);
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
	tc1 = (nstcall = 1, F764_4161(RTCW(tr1), (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg1 + *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_3_)) - ((EIF_INTEGER_32) 1L))));
	ti4_1 = (EIF_INTEGER_32) (tc1);
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {IMMUTABLE_STRING_8}.plus */
EIF_REFERENCE F969_6122 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,Result);
	RTLIU(5);
	
	RTEAA("plus", 968, Current, 2, 1, 13008);
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
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O4703[Dtype(arg1)-967]);
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,763,919,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		loc1 = RTLNSP2(typres0.id,0,(EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + loc2) + ((EIF_INTEGER_32) 1L)),sizeof(EIF_CHARACTER_8), EIF_TRUE);
		RT_SPECIAL_COUNT(loc1) = 0;
	}
	RTHOOK(4);
	(nstcall = 1, F764_4183(RTCW(loc1), *(EIF_REFERENCE *)(Current), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_3_), ((EIF_INTEGER_32) 0L), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_)));
	RTHOOK(5);
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
	ti4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4701[Dtype(RTCW(arg1))-968])(arg1));
	ti4_3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_);
	(nstcall = 1, F764_4183(RTCW(loc1), tr1, ti4_2, ti4_3, (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L))));
	RTHOOK(6);
	Result = RTLNSMART(dftype);
	(nstcall = -1, F969_6114(RTCW(Result), loc1, ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_) + loc2)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("plus_attached", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("new_count", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_0_0_2_);
		ti4_3 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O4703[Dtype(arg1)-967]);
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_) + ti4_3))) {
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
	return Result;
}

/* {IMMUTABLE_STRING_8}.plus_general */
EIF_REFERENCE F969_6123 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(9);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc7);
	RTLR(3,Result);
	RTLR(4,loc1);
	RTLR(5,loc8);
	RTLR(6,loc2);
	RTLR(7,loc6);
	RTLR(8,tr1);
	RTLIU(9);
	
	RTEAA("plus_general", 968, Current, 8, 1, 13009);
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
	loc7 = arg1;
	loc7 = RTRV(eif_new_type(967, 0x01),loc7);
	if (EIF_TEST(loc7)) {
		RTHOOK(4);
		Result = (nstcall = 0, F969_6122(Current, loc7));
	} else {
		RTHOOK(5);
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_);
		ti4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4580[Dtype(RTCW(arg1))-968])(arg1));
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,763,919,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			loc1 = RTLNSP2(typres0.id,0,(EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + ti4_2) + ((EIF_INTEGER_32) 1L)),sizeof(EIF_CHARACTER_8), EIF_TRUE);
			RT_SPECIAL_COUNT(loc1) = 0;
		}
		RTHOOK(6);
		(nstcall = 1, F764_4183(RTCW(loc1), *(EIF_REFERENCE *)(Current), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_3_), ((EIF_INTEGER_32) 0L), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_)));
		RTHOOK(7);
		loc8 = arg1;
		loc8 = RTRV(eif_new_type(970, 0x01),loc8);
		if (EIF_TEST(loc8)) {
			RTHOOK(8);
			ti4_3 = *(EIF_INTEGER_32 *)(loc8 + O4778[Dtype(loc8)-970]);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,763,919,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				loc2 = RTLNSP2(typres0.id,0,(EIF_INTEGER_32) (ti4_3 + ((EIF_INTEGER_32) 1L)),sizeof(EIF_CHARACTER_8), EIF_TRUE);
				RT_SPECIAL_COUNT(loc2) = 0;
			}
			RTHOOK(9);
			loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
			RTHOOK(10);
			ti4_4 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4776[Dtype(loc8)-971])(loc8));
			loc4 = (EIF_INTEGER_32) ti4_4;
			RTHOOK(11);
			tr1 = *(EIF_REFERENCE *)(loc8);
			loc6 = (EIF_REFERENCE) tr1;
			RTHOOK(12);
			ti4_4 = *(EIF_INTEGER_32 *)(loc8 + O4778[Dtype(loc8)-970]);
			loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_4 - ((EIF_INTEGER_32) 1L));
			for (;;) {
				RTHOOK(13);
				if ((EIF_BOOLEAN) (loc3 > loc5)) break;
				RTHOOK(14);
				tw1 = (nstcall = 1, F763_4161(RTCW(loc6), loc4));
				tc1 = (EIF_CHARACTER_8) tw1;
				(nstcall = 1, F764_4178(RTCW(loc2), tc1));
				RTHOOK(15);
				loc3++;
				RTHOOK(16);
				loc4++;
			}
			RTHOOK(17);
			(nstcall = 1, F764_4178(RTCW(loc2), (EIF_CHARACTER_8) '\000'));
			RTHOOK(18);
			(nstcall = 1, F764_4183(RTCW(loc1), loc2, ((EIF_INTEGER_32) 0L), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_), (EIF_INTEGER_32) (loc5 + ((EIF_INTEGER_32) 2L))));
		}
		RTHOOK(19);
		Result = RTLNSMART(dftype);
		ti4_4 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_);
		ti4_5 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4580[Dtype(RTCW(arg1))-968])(arg1));
		(nstcall = -1, F969_6114(RTCW(Result), loc1, ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) (ti4_4 + ti4_5)));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(20);
		RTCT("plus_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(21);
		RTCT("new_count", EX_POST);
		ti4_4 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_0_0_2_);
		ti4_5 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4580[Dtype(RTCW(arg1))-968])(arg1));
		if ((EIF_BOOLEAN)(ti4_4 == (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_) + ti4_5))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(22);
		RTHOOK(23);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(24);
	RTLE;
	RTEE;
	return Result;
}

/* {IMMUTABLE_STRING_8}.mirrored */
EIF_REFERENCE F969_6124 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("mirrored", 968, Current, 1, 0, 13010);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,763,919,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		loc1 = RTLNSP2(typres0.id,0,(EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)),sizeof(EIF_CHARACTER_8), EIF_TRUE);
		RT_SPECIAL_COUNT(loc1) = 0;
	}
	RTHOOK(2);
	(nstcall = 1, F764_4183(RTCW(loc1), *(EIF_REFERENCE *)(Current), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_3_), ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_) + ((EIF_INTEGER_32) 1L))));
	RTHOOK(3);
	(nstcall = 0, F968_6110(Current, loc1, ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_) - ((EIF_INTEGER_32) 1L))));
	RTHOOK(4);
	Result = RTLNSMART(dftype);
	(nstcall = -1, F969_6114(RTCW(Result), loc1, ((EIF_INTEGER_32) 0L), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("same_count", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_0_0_2_);
		if ((EIF_BOOLEAN)(ti4_2 == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_))) {
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

/* {IMMUTABLE_STRING_8}.as_lower */
EIF_REFERENCE F969_6125 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_CHARACTER_32 tw3;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLIU(6);
	
	RTEAA("as_lower", 968, Current, 1, 0, 13011);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,763,919,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		loc1 = RTLNSP2(typres0.id,0,(EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)),sizeof(EIF_CHARACTER_8), EIF_TRUE);
		RT_SPECIAL_COUNT(loc1) = 0;
	}
	RTHOOK(2);
	(nstcall = 1, F764_4183(RTCW(loc1), *(EIF_REFERENCE *)(Current), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_3_), ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_) + ((EIF_INTEGER_32) 1L))));
	RTHOOK(3);
	(nstcall = 0, F968_6108(Current, loc1, ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_) - ((EIF_INTEGER_32) 1L))));
	RTHOOK(4);
	Result = RTLNSMART(dftype);
	(nstcall = -1, F969_6114(RTCW(Result), loc1, ((EIF_INTEGER_32) 0L), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("as_lower_attached", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("length", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_0_0_2_);
		if ((EIF_BOOLEAN)(ti4_2 == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("anchor", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_) > ((EIF_INTEGER_32) 0L))) {
			tw1 = (nstcall = 1, F969_6119(RTCW(Result), ((EIF_INTEGER_32) 1L)));
			tw2 = (nstcall = 0, F969_6119(Current, ((EIF_INTEGER_32) 1L)));
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
		RTHOOK(8);
		RTCT("recurse", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_) > ((EIF_INTEGER_32) 1L))) {
			tr1 = (nstcall = 1, F969_6127(RTCW(Result), ((EIF_INTEGER_32) 2L), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_)));
			tr2 = (nstcall = 0, F969_6127(Current, ((EIF_INTEGER_32) 2L), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_)));
			tr3 = (nstcall = 1, F969_6125(RTCW(tr2)));
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
	RTHOOK(9);
	RTLE;
	RTEE;
	return Result;
}

/* {IMMUTABLE_STRING_8}.as_upper */
EIF_REFERENCE F969_6126 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_CHARACTER_32 tw3;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLIU(6);
	
	RTEAA("as_upper", 968, Current, 1, 0, 13012);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,763,919,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		loc1 = RTLNSP2(typres0.id,0,(EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)),sizeof(EIF_CHARACTER_8), EIF_TRUE);
		RT_SPECIAL_COUNT(loc1) = 0;
	}
	RTHOOK(2);
	(nstcall = 1, F764_4183(RTCW(loc1), *(EIF_REFERENCE *)(Current), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_3_), ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_) + ((EIF_INTEGER_32) 1L))));
	RTHOOK(3);
	(nstcall = 0, F968_6109(Current, loc1, ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_) - ((EIF_INTEGER_32) 1L))));
	RTHOOK(4);
	Result = RTLNSMART(dftype);
	(nstcall = -1, F969_6114(RTCW(Result), loc1, ((EIF_INTEGER_32) 0L), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("as_upper_attached", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("length", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_0_0_2_);
		if ((EIF_BOOLEAN)(ti4_2 == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("anchor", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_) > ((EIF_INTEGER_32) 0L))) {
			tw1 = (nstcall = 1, F969_6119(RTCW(Result), ((EIF_INTEGER_32) 1L)));
			tw2 = (nstcall = 0, F969_6119(Current, ((EIF_INTEGER_32) 1L)));
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
		RTHOOK(8);
		RTCT("recurse", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_) > ((EIF_INTEGER_32) 1L))) {
			tr1 = (nstcall = 1, F969_6127(RTCW(Result), ((EIF_INTEGER_32) 2L), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_)));
			tr2 = (nstcall = 0, F969_6127(Current, ((EIF_INTEGER_32) 2L), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_)));
			tr3 = (nstcall = 1, F969_6126(RTCW(tr2)));
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
	RTHOOK(9);
	RTLE;
	RTEE;
	return Result;
}

/* {IMMUTABLE_STRING_8}.substring */
EIF_REFERENCE F969_6127 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,Result);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTEAA("substring", 968, Current, 2, 2, 13013);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) (((EIF_INTEGER_32) 1L) <= arg1) && (EIF_BOOLEAN) (arg1 <= arg2)) && (EIF_BOOLEAN) (arg2 <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_)))) {
		RTHOOK(2);
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 - arg1) + ((EIF_INTEGER_32) 1L));
		RTHOOK(3);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,763,919,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			loc1 = RTLNSP2(typres0.id,0,(EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L)),sizeof(EIF_CHARACTER_8), EIF_TRUE);
			RT_SPECIAL_COUNT(loc1) = 0;
		}
		RTHOOK(4);
		(nstcall = 1, F764_4183(RTCW(loc1), *(EIF_REFERENCE *)(Current), (EIF_INTEGER_32) ((EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_3_) + arg1) - ((EIF_INTEGER_32) 1L)), ((EIF_INTEGER_32) 0L), loc2));
		RTHOOK(5);
		(nstcall = 1, F764_4178(RTCW(loc1), (EIF_CHARACTER_8) '\000'));
		RTHOOK(6);
		Result = RTLNSMART(dftype);
		(nstcall = -1, F969_6114(RTCW(Result), loc1, ((EIF_INTEGER_32) 0L), loc2));
	} else {
		RTHOOK(7);
		Result = RTOUCR(21,(nstcall = 0, F969_6132), (Current));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("substring_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("substring_count", EX_POST);
		tb1 = '\01';
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_0_0_2_);
		if (!(EIF_BOOLEAN)(ti4_1 == (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 - arg1) + ((EIF_INTEGER_32) 1L)))) {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_0_0_2_);
			tb1 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("first_code", EX_POST);
		tb1 = '\01';
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_0_0_2_);
		if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
			tw1 = (nstcall = 1, F969_6119(RTCW(Result), ((EIF_INTEGER_32) 1L)));
			tb1 = (EIF_BOOLEAN)(tw1 == (nstcall = 0, F969_6119(Current, arg1)));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("recurse", EX_POST);
		tb1 = '\01';
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_0_0_2_);
		if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_0_0_2_);
			tr1 = (nstcall = 1, F969_6127(RTCW(Result), ((EIF_INTEGER_32) 2L), ti4_1));
			tr2 = (nstcall = 0, F969_6127(Current, (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L)), arg2));
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
	RTHOOK(12);
	RTLE;
	RTEE;
	return Result;
}

/* {IMMUTABLE_STRING_8}.shared_substring */
EIF_REFERENCE F969_6128 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
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
	
	RTEAA("shared_substring", 968, Current, 0, 2, 13014);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) (((EIF_INTEGER_32) 1L) <= arg1) && (EIF_BOOLEAN) (arg1 <= arg2)) && (EIF_BOOLEAN) (arg2 <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_)))) {
		RTHOOK(2);
		Result = RTLNSMART(Dftype(Current));
		(nstcall = -1, F969_6114(RTCW(Result), *(EIF_REFERENCE *)(Current), (EIF_INTEGER_32) ((EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_3_) + arg1) - ((EIF_INTEGER_32) 1L)), (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 - arg1) + ((EIF_INTEGER_32) 1L))));
	} else {
		RTHOOK(3);
		Result = RTOUCR(21,(nstcall = 0, F969_6132), (Current));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {IMMUTABLE_STRING_8}.is_empty */
EIF_BOOLEAN F969_6129 (EIF_REFERENCE Current)
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
	
	RTEAA("is_empty", 968, Current, 0, 0, 13015);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {IMMUTABLE_STRING_8}.linear_representation */
EIF_REFERENCE F969_6130 (EIF_REFERENCE Current)
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
	
	RTEAA("linear_representation", 968, Current, 2, 0, 13016);
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
		if ((EIF_BOOLEAN) (loc2 > *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_))) break;
		RTHOOK(4);
		tc1 = (nstcall = 0, F969_6117(Current, loc2));
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

/* {IMMUTABLE_STRING_8}.new_string */
EIF_REFERENCE F969_6131 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	RTLR(0,Result);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("new_string", 968, Current, 0, 1, 13017);
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
	Result = RTLNS(eif_new_type(968, 0x01).id, 968, _OBJSIZ_1_0_0_4_0_0_0_0_);
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
		tb1 = (nstcall = 1, F969_6129(RTCW(Result)));
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

/* {IMMUTABLE_STRING_8}.empty_string */
static EIF_REFERENCE F969_6132_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(21)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("empty_string", 968, Current, 0, 0, 13018);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(968, 0x01).id, 968, _OBJSIZ_1_0_0_4_0_0_0_0_);
	(nstcall = -1, F968_6060(RTCW(tr1), ((EIF_INTEGER_32) 0L)));
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("empty_string_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("empty_string_empty", EX_POST);
		tb1 = (nstcall = 1, F969_6129(RTCW(Result)));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F969_6132 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(21,F969_6132_body,(Current));
}

/* {IMMUTABLE_STRING_8}.area_lower */
EIF_INTEGER_32 F969_6133 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_3_);
}


void EIF_Minit266 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
