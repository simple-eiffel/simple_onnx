/*
 * Code for class TUPLE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "tu219.h"
#include "eif_built_in.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {TUPLE}.item */
EIF_REFERENCE F887_4697 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("item", 886, Current, 0, 1, 11392);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F887_4724(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	switch ((nstcall = 0, F887_4806(Current, arg1))) {
		case 1U:
			RTHOOK(3);
			Result = RTLNS(eif_new_type(922, 0x00).id, 922, _OBJSIZ_0_1_0_0_0_0_0_0_);
			*(EIF_BOOLEAN *)Result = (nstcall = 0, F887_4700(Current, arg1));
			break;
		case 2U:
			RTHOOK(4);
			Result = RTLNS(eif_new_type(919, 0x00).id, 919, _OBJSIZ_0_1_0_0_0_0_0_0_);
			*(EIF_CHARACTER_8 *)Result = (nstcall = 0, F887_4701(Current, arg1));
			break;
		case 14U:
			RTHOOK(5);
			Result = RTLNS(eif_new_type(916, 0x00).id, 916, _OBJSIZ_0_0_0_1_0_0_0_0_);
			*(EIF_CHARACTER_32 *)Result = (nstcall = 0, F887_4703(Current, arg1));
			break;
		case 3U:
			RTHOOK(6);
			Result = RTLNS(eif_new_type(913, 0x00).id, 913, _OBJSIZ_0_0_0_0_0_0_0_1_);
			*(EIF_REAL_64 *)Result = (nstcall = 0, F887_4705(Current, arg1));
			break;
		case 4U:
			RTHOOK(7);
			Result = RTLNS(eif_new_type(910, 0x00).id, 910, _OBJSIZ_0_0_0_0_1_0_0_0_);
			*(EIF_REAL_32 *)Result = (nstcall = 0, F887_4717(Current, arg1));
			break;
		case 5U:
			RTHOOK(8);
			Result = RTLNS(eif_new_type(958, 0x00).id, 958, _OBJSIZ_0_0_0_0_0_1_0_0_);
			*(EIF_POINTER *)Result = (nstcall = 0, F887_4716(Current, arg1));
			break;
		case 10U:
			RTHOOK(9);
			Result = RTLNS(eif_new_type(907, 0x00).id, 907, _OBJSIZ_0_1_0_0_0_0_0_0_);
			*(EIF_NATURAL_8 *)Result = (nstcall = 0, F887_4707(Current, arg1));
			break;
		case 11U:
			RTHOOK(10);
			Result = RTLNS(eif_new_type(925, 0x00).id, 925, _OBJSIZ_0_0_1_0_0_0_0_0_);
			*(EIF_NATURAL_16 *)Result = (nstcall = 0, F887_4708(Current, arg1));
			break;
		case 12U:
			RTHOOK(11);
			Result = RTLNS(eif_new_type(904, 0x00).id, 904, _OBJSIZ_0_0_0_1_0_0_0_0_);
			*(EIF_NATURAL_32 *)Result = (nstcall = 0, F887_4709(Current, arg1));
			break;
		case 13U:
			RTHOOK(12);
			Result = RTLNS(eif_new_type(901, 0x00).id, 901, _OBJSIZ_0_0_0_0_0_0_1_0_);
			*(EIF_NATURAL_64 *)Result = (nstcall = 0, F887_4710(Current, arg1));
			break;
		case 6U:
			RTHOOK(13);
			Result = RTLNS(eif_new_type(898, 0x00).id, 898, _OBJSIZ_0_1_0_0_0_0_0_0_);
			*(EIF_INTEGER_8 *)Result = (nstcall = 0, F887_4711(Current, arg1));
			break;
		case 7U:
			RTHOOK(14);
			Result = RTLNS(eif_new_type(895, 0x00).id, 895, _OBJSIZ_0_0_1_0_0_0_0_0_);
			*(EIF_INTEGER_16 *)Result = (nstcall = 0, F887_4712(Current, arg1));
			break;
		case 8U:
			RTHOOK(15);
			Result = RTLNS(eif_new_type(892, 0x00).id, 892, _OBJSIZ_0_0_0_1_0_0_0_0_);
			*(EIF_INTEGER_32 *)Result = (nstcall = 0, F887_4713(Current, arg1));
			break;
		case 9U:
			RTHOOK(16);
			Result = RTLNS(eif_new_type(889, 0x00).id, 889, _OBJSIZ_0_0_0_0_0_0_1_0_);
			*(EIF_INTEGER_64 *)Result = (nstcall = 0, F887_4715(Current, arg1));
			break;
		case 0U:
			RTHOOK(17);
			Result = (nstcall = 0, F887_4699(Current, arg1));
			break;
		default:
			RTEC(EN_WHEN);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(18);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.at */
EIF_REFERENCE F887_4698 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("at", 886, Current, 0, 1, 11393);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	switch ((nstcall = 0, F887_4806(Current, arg1))) {
		case 1U:
			RTHOOK(2);
			Result = RTLNS(eif_new_type(922, 0x00).id, 922, _OBJSIZ_0_1_0_0_0_0_0_0_);
			*(EIF_BOOLEAN *)Result = (nstcall = 0, F887_4700(Current, arg1));
			break;
		case 2U:
			RTHOOK(3);
			Result = RTLNS(eif_new_type(919, 0x00).id, 919, _OBJSIZ_0_1_0_0_0_0_0_0_);
			*(EIF_CHARACTER_8 *)Result = (nstcall = 0, F887_4701(Current, arg1));
			break;
		case 14U:
			RTHOOK(4);
			Result = RTLNS(eif_new_type(916, 0x00).id, 916, _OBJSIZ_0_0_0_1_0_0_0_0_);
			*(EIF_CHARACTER_32 *)Result = (nstcall = 0, F887_4703(Current, arg1));
			break;
		case 3U:
			RTHOOK(5);
			Result = RTLNS(eif_new_type(913, 0x00).id, 913, _OBJSIZ_0_0_0_0_0_0_0_1_);
			*(EIF_REAL_64 *)Result = (nstcall = 0, F887_4705(Current, arg1));
			break;
		case 4U:
			RTHOOK(6);
			Result = RTLNS(eif_new_type(910, 0x00).id, 910, _OBJSIZ_0_0_0_0_1_0_0_0_);
			*(EIF_REAL_32 *)Result = (nstcall = 0, F887_4717(Current, arg1));
			break;
		case 5U:
			RTHOOK(7);
			Result = RTLNS(eif_new_type(958, 0x00).id, 958, _OBJSIZ_0_0_0_0_0_1_0_0_);
			*(EIF_POINTER *)Result = (nstcall = 0, F887_4716(Current, arg1));
			break;
		case 10U:
			RTHOOK(8);
			Result = RTLNS(eif_new_type(907, 0x00).id, 907, _OBJSIZ_0_1_0_0_0_0_0_0_);
			*(EIF_NATURAL_8 *)Result = (nstcall = 0, F887_4707(Current, arg1));
			break;
		case 11U:
			RTHOOK(9);
			Result = RTLNS(eif_new_type(925, 0x00).id, 925, _OBJSIZ_0_0_1_0_0_0_0_0_);
			*(EIF_NATURAL_16 *)Result = (nstcall = 0, F887_4708(Current, arg1));
			break;
		case 12U:
			RTHOOK(10);
			Result = RTLNS(eif_new_type(904, 0x00).id, 904, _OBJSIZ_0_0_0_1_0_0_0_0_);
			*(EIF_NATURAL_32 *)Result = (nstcall = 0, F887_4709(Current, arg1));
			break;
		case 13U:
			RTHOOK(11);
			Result = RTLNS(eif_new_type(901, 0x00).id, 901, _OBJSIZ_0_0_0_0_0_0_1_0_);
			*(EIF_NATURAL_64 *)Result = (nstcall = 0, F887_4710(Current, arg1));
			break;
		case 6U:
			RTHOOK(12);
			Result = RTLNS(eif_new_type(898, 0x00).id, 898, _OBJSIZ_0_1_0_0_0_0_0_0_);
			*(EIF_INTEGER_8 *)Result = (nstcall = 0, F887_4711(Current, arg1));
			break;
		case 7U:
			RTHOOK(13);
			Result = RTLNS(eif_new_type(895, 0x00).id, 895, _OBJSIZ_0_0_1_0_0_0_0_0_);
			*(EIF_INTEGER_16 *)Result = (nstcall = 0, F887_4712(Current, arg1));
			break;
		case 8U:
			RTHOOK(14);
			Result = RTLNS(eif_new_type(892, 0x00).id, 892, _OBJSIZ_0_0_0_1_0_0_0_0_);
			*(EIF_INTEGER_32 *)Result = (nstcall = 0, F887_4713(Current, arg1));
			break;
		case 9U:
			RTHOOK(15);
			Result = RTLNS(eif_new_type(889, 0x00).id, 889, _OBJSIZ_0_0_0_0_0_0_1_0_);
			*(EIF_INTEGER_64 *)Result = (nstcall = 0, F887_4715(Current, arg1));
			break;
		case 0U:
			RTHOOK(16);
			Result = (nstcall = 0, F887_4699(Current, arg1));
			break;
		default:
			RTEC(EN_WHEN);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(17);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.reference_item */
EIF_REFERENCE F887_4699 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("reference_item", 886, Current, 0, 1, 11394);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F887_4724(Current, arg1)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_reference", EX_PRE);
		RTTE((nstcall = 0, F887_4770(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	Result = (EIF_REFERENCE) eif_builtin_TUPLE_reference_item__i4_o (Current, arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.boolean_item */
EIF_BOOLEAN F887_4700 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("boolean_item", 886, Current, 0, 1, 11395);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F887_4724(Current, arg1)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_boolean", EX_PRE);
		RTTE((nstcall = 0, F887_4751(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	Result = (EIF_BOOLEAN) eif_builtin_TUPLE_boolean_item__i4_b (Current, arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.character_8_item */
EIF_CHARACTER_8 F887_4701 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("character_8_item", 886, Current, 0, 1, 11396);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F887_4724(Current, arg1)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_character_8", EX_PRE);
		RTTE((nstcall = 0, F887_4752(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	Result = (EIF_CHARACTER_8) eif_builtin_TUPLE_character_8_item__i4_c1 (Current, arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.character_item */
EIF_CHARACTER_8 F887_4702 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("character_item", 886, Current, 0, 1, 11397);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F887_4724(Current, arg1)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_character_8", EX_PRE);
		RTTE((nstcall = 0, F887_4752(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	Result = (nstcall = 0, F887_4701(Current, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.character_32_item */
EIF_CHARACTER_32 F887_4703 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_CHARACTER_32 Result = ((EIF_CHARACTER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("character_32_item", 886, Current, 0, 1, 11398);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F887_4724(Current, arg1)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_character_32", EX_PRE);
		RTTE((nstcall = 0, F887_4754(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	Result = (EIF_CHARACTER_32) eif_builtin_TUPLE_character_32_item__i4_c4 (Current, arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.wide_character_item */
EIF_CHARACTER_32 F887_4704 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_CHARACTER_32 Result = ((EIF_CHARACTER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("wide_character_item", 886, Current, 0, 1, 11399);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F887_4724(Current, arg1)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_character_32", EX_PRE);
		RTTE((nstcall = 0, F887_4754(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	Result = (nstcall = 0, F887_4703(Current, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.real_64_item */
EIF_REAL_64 F887_4705 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("real_64_item", 886, Current, 0, 1, 11400);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F887_4724(Current, arg1)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_numeric", EX_PRE);
		RTTE((nstcall = 0, F887_4768(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	Result = (EIF_REAL_64) eif_builtin_TUPLE_real_64_item__i4_r8 (Current, arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.double_item */
EIF_REAL_64 F887_4706 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("double_item", 886, Current, 0, 1, 11401);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F887_4724(Current, arg1)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_numeric", EX_PRE);
		RTTE((nstcall = 0, F887_4769(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	Result = (nstcall = 0, F887_4705(Current, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.natural_8_item */
EIF_NATURAL_8 F887_4707 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("natural_8_item", 886, Current, 0, 1, 11402);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F887_4724(Current, arg1)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_integer", EX_PRE);
		RTTE((nstcall = 0, F887_4756(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	Result = (EIF_NATURAL_8) eif_builtin_TUPLE_natural_8_item__i4_u1 (Current, arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.natural_16_item */
EIF_NATURAL_16 F887_4708 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_16 Result = ((EIF_NATURAL_16) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("natural_16_item", 886, Current, 0, 1, 11403);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F887_4724(Current, arg1)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_integer", EX_PRE);
		RTTE((nstcall = 0, F887_4757(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	Result = (EIF_NATURAL_16) eif_builtin_TUPLE_natural_16_item__i4_u2 (Current, arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.natural_32_item */
EIF_NATURAL_32 F887_4709 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("natural_32_item", 886, Current, 0, 1, 11404);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F887_4724(Current, arg1)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_integer", EX_PRE);
		RTTE((nstcall = 0, F887_4758(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	Result = (EIF_NATURAL_32) eif_builtin_TUPLE_natural_32_item__i4_u4 (Current, arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.natural_64_item */
EIF_NATURAL_64 F887_4710 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_64 Result = ((EIF_NATURAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("natural_64_item", 886, Current, 0, 1, 11405);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F887_4724(Current, arg1)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_integer", EX_PRE);
		RTTE((nstcall = 0, F887_4759(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	Result = (EIF_NATURAL_64) eif_builtin_TUPLE_natural_64_item__i4_u8 (Current, arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.integer_8_item */
EIF_INTEGER_8 F887_4711 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_8 Result = ((EIF_INTEGER_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("integer_8_item", 886, Current, 0, 1, 11406);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F887_4724(Current, arg1)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_integer", EX_PRE);
		RTTE((nstcall = 0, F887_4760(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	Result = (EIF_INTEGER_8) eif_builtin_TUPLE_integer_8_item__i4_i1 (Current, arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.integer_16_item */
EIF_INTEGER_16 F887_4712 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_16 Result = ((EIF_INTEGER_16) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("integer_16_item", 886, Current, 0, 1, 11407);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F887_4724(Current, arg1)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_integer", EX_PRE);
		RTTE((nstcall = 0, F887_4761(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	Result = (EIF_INTEGER_16) eif_builtin_TUPLE_integer_16_item__i4_i2 (Current, arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.integer_32_item */
EIF_INTEGER_32 F887_4713 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("integer_32_item", 886, Current, 0, 1, 11408);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F887_4724(Current, arg1)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_integer", EX_PRE);
		RTTE((nstcall = 0, F887_4763(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	Result = (EIF_INTEGER_32) eif_builtin_TUPLE_integer_32_item__i4_i4 (Current, arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.integer_item */
EIF_INTEGER_32 F887_4714 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("integer_item", 886, Current, 0, 1, 11409);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F887_4724(Current, arg1)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_integer", EX_PRE);
		RTTE((nstcall = 0, F887_4763(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	Result = (nstcall = 0, F887_4713(Current, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.integer_64_item */
EIF_INTEGER_64 F887_4715 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_64 Result = ((EIF_INTEGER_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("integer_64_item", 886, Current, 0, 1, 11410);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F887_4724(Current, arg1)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_integer", EX_PRE);
		RTTE((nstcall = 0, F887_4764(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	Result = (EIF_INTEGER_64) eif_builtin_TUPLE_integer_64_item__i4_i8 (Current, arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.pointer_item */
EIF_POINTER F887_4716 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("pointer_item", 886, Current, 0, 1, 11411);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F887_4724(Current, arg1)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_pointer", EX_PRE);
		RTTE((nstcall = 0, F887_4765(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	Result = (EIF_POINTER) eif_builtin_TUPLE_pointer_item__i4_p (Current, arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.real_32_item */
EIF_REAL_32 F887_4717 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("real_32_item", 886, Current, 0, 1, 11412);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F887_4724(Current, arg1)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_real_or_integer", EX_PRE);
		RTTE((nstcall = 0, F887_4766(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	Result = (EIF_REAL_32) eif_builtin_TUPLE_real_32_item__i4_r4 (Current, arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.real_item */
EIF_REAL_32 F887_4718 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("real_item", 886, Current, 0, 1, 11413);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F887_4724(Current, arg1)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_real_or_integer", EX_PRE);
		RTTE((nstcall = 0, F887_4767(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	Result = (nstcall = 0, F887_4717(Current, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.object_comparison */
EIF_BOOLEAN F887_4719 (EIF_REFERENCE Current)
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
	
	RTEAA("object_comparison", 886, Current, 0, 0, 11414);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_BOOLEAN) eif_builtin_TUPLE_object_comparison__b (Current);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_equal */
EIF_BOOLEAN F887_4720 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc3 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("is_equal", 886, Current, 3, 1, 11415);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc3 = (nstcall = 0, F887_4719(Current));
	RTHOOK(3);
	tb1 = (nstcall = 1, F887_4719(arg1));
	if ((EIF_BOOLEAN)(loc3 == tb1)) {
		RTHOOK(4);
		if (loc3) {
			RTHOOK(5);
			loc2 = (nstcall = 0, F887_4726(Current));
			RTHOOK(6);
			ti4_1 = (nstcall = 1, F887_4726(arg1));
			if ((EIF_BOOLEAN)(loc2 == ti4_1)) {
				RTHOOK(7);
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				RTHOOK(8);
				loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				for (;;) {
					RTHOOK(9);
					if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 > loc2) || (EIF_BOOLEAN) !Result)) break;
					RTHOOK(10);
					tr1 = (nstcall = 0, F887_4697(Current, loc1));
					tr2 = (nstcall = 1, F887_4697(RTCW(arg1), loc1));
					Result = (EIF_BOOLEAN) RTEQ(tr1, tr2);
					RTHOOK(11);
					loc1++;
				}
			}
		} else {
			RTHOOK(12);
			Result = (nstcall = 0, F1_8(Current, arg1));
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(13);
		RTCT("symmetric", EX_POST);
		if ((!(Result) || (RTEQ(arg1, Current)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(14);
		RTCT("consistent", EX_POST);
		tb1 = '\01';
		if ((nstcall = 0, F1_9(Current, arg1))) {
			tb1 = Result;
		}
		if (tb1) {
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

/* {TUPLE}.compare_objects */
void F887_4721 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("compare_objects", 886, Current, 0, 0, 11416);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	(nstcall = 0, F887_4828(Current, (EIF_BOOLEAN) 1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("object_comparison", EX_POST);
		if ((nstcall = 0, F887_4719(Current))) {
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
}

/* {TUPLE}.compare_references */
void F887_4722 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("compare_references", 886, Current, 0, 0, 11417);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	(nstcall = 0, F887_4828(Current, (EIF_BOOLEAN) 0));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("reference_comparison", EX_POST);
		if ((EIF_BOOLEAN) !(nstcall = 0, F887_4719(Current))) {
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
}

/* {TUPLE}.hash_code */
EIF_INTEGER_32 F887_4723 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_64 ti8_1;
	EIF_NATURAL_64 tu8_1;
	EIF_REAL_32 tr4_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	EIF_CHARACTER_32 tw1;
	EIF_INTEGER_16 ti2_1;
	EIF_NATURAL_16 tu2_1;
	EIF_INTEGER_8 ti1_1;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc4);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("hash_code", 886, Current, 4, 0, 11418);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(2);
	loc2 = (nstcall = 0, F887_4726(Current));
	for (;;) {
		RTHOOK(3);
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		RTHOOK(4);
		switch ((nstcall = 0, F887_4806(Current, loc1))) {
			case 1U:
				RTHOOK(5);
				tb1 = (nstcall = 0, F887_4700(Current, loc1));
				ti4_1 = (tb1 ? 1L : 0L);
				loc3 = (EIF_INTEGER_32) ti4_1;
				break;
			case 2U:
				RTHOOK(6);
				tc1 = (nstcall = 0, F887_4701(Current, loc1));
				ti4_1 = (EIF_INTEGER_32) (tc1);
				loc3 = (EIF_INTEGER_32) ti4_1;
				break;
			case 14U:
				RTHOOK(7);
				tw1 = (nstcall = 0, F887_4703(Current, loc1));
				ti4_1 = (EIF_INTEGER_32) (tw1);
				loc3 = (EIF_INTEGER_32) ti4_1;
				break;
			case 3U:
				RTHOOK(8);
				tr8_1 = (nstcall = 0, F887_4705(Current, loc1));
				ti4_1 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (tr8_1)));
				loc3 = (EIF_INTEGER_32) ti4_1;
				break;
			case 4U:
				RTHOOK(9);
				tr4_1 = (nstcall = 0, F887_4717(Current, loc1));
				ti4_1 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (tr4_1)));
				loc3 = (EIF_INTEGER_32) ti4_1;
				break;
			case 5U:
				RTHOOK(10);
				tp1 = (nstcall = 0, F887_4716(Current, loc1));
				ti4_1 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (tp1)));
				loc3 = (EIF_INTEGER_32) ti4_1;
				break;
			case 10U:
				RTHOOK(11);
				tu1_1 = (nstcall = 0, F887_4707(Current, loc1));
				ti4_1 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (tu1_1)));
				loc3 = (EIF_INTEGER_32) ti4_1;
				break;
			case 11U:
				RTHOOK(12);
				tu2_1 = (nstcall = 0, F887_4708(Current, loc1));
				ti4_1 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (tu2_1)));
				loc3 = (EIF_INTEGER_32) ti4_1;
				break;
			case 12U:
				RTHOOK(13);
				tu4_1 = (nstcall = 0, F887_4709(Current, loc1));
				ti4_1 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (tu4_1)));
				loc3 = (EIF_INTEGER_32) ti4_1;
				break;
			case 13U:
				RTHOOK(14);
				tu8_1 = (nstcall = 0, F887_4710(Current, loc1));
				ti4_1 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (tu8_1)));
				loc3 = (EIF_INTEGER_32) ti4_1;
				break;
			case 6U:
				RTHOOK(15);
				ti1_1 = (nstcall = 0, F887_4711(Current, loc1));
				ti4_1 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (ti1_1)));
				loc3 = (EIF_INTEGER_32) ti4_1;
				break;
			case 7U:
				RTHOOK(16);
				ti2_1 = (nstcall = 0, F887_4712(Current, loc1));
				ti4_1 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (ti2_1)));
				loc3 = (EIF_INTEGER_32) ti4_1;
				break;
			case 8U:
				RTHOOK(17);
				ti4_1 = (nstcall = 0, F887_4713(Current, loc1));
				ti4_2 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (ti4_1)));
				loc3 = (EIF_INTEGER_32) ti4_2;
				break;
			case 9U:
				RTHOOK(18);
				ti8_1 = (nstcall = 0, F887_4715(Current, loc1));
				ti4_1 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (ti8_1)));
				loc3 = (EIF_INTEGER_32) ti4_1;
				break;
			case 0U:
				RTHOOK(19);
				tr1 = (nstcall = 0, F887_4699(Current, loc1));
				loc4 = RTCCL(tr1);
				loc4 = RTRV(eif_new_type(852, 0x01),loc4);
				if ((loc4) && RTS_OS (Current, loc4)) loc4 = (EIF_REFERENCE) 0;
				if (EIF_TEST(loc4)) {
					RTHOOK(20);
					ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3672[Dtype(loc4)-853])(loc4));
					loc3 = (EIF_INTEGER_32) ti4_1;
				} else {
					RTHOOK(21);
					loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
				}
				break;
			default:
				RTEC(EN_WHEN);
		}
		RTHOOK(22);
		tr1 = RTOUCR(11,(nstcall = 0, F887_4827), (Current));
		ti4_1 = (nstcall = 1, F565_3446(RTCW(tr1), loc1));
		Result += (EIF_INTEGER_32) (loc3 * ti4_1);
		RTHOOK(23);
		loc1++;
	}
	RTHOOK(24);
	ti4_1 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (Result)));
	Result = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(25);
		RTCT("good_hash_value", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(26);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.valid_index */
EIF_BOOLEAN F887_4724 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("valid_index", 886, Current, 0, 1, 11419);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = '\0';
	if ((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L))) {
		Result = (EIF_BOOLEAN) (arg1 <= (nstcall = 0, F887_4726(Current)));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("only_if_in_index_set", EX_POST);
		tb1 = '\01';
		if (Result) {
			tb2 = '\0';
			if ((EIF_BOOLEAN) ((nstcall = 0, F887_4727(Current)) <= arg1)) {
				tb2 = (EIF_BOOLEAN) (arg1 <= (nstcall = 0, F887_4726(Current)));
			}
			tb1 = tb2;
		}
		if (tb1) {
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

/* {TUPLE}.valid_type_for_index */
EIF_BOOLEAN F887_4725 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc14 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc15 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc16 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN uarg1;
	EIF_BOOLEAN uarg;
	RTS_SD;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(19);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc3);
	RTLR(5,loc4);
	RTLR(6,loc5);
	RTLR(7,loc6);
	RTLR(8,loc7);
	RTLR(9,loc8);
	RTLR(10,loc9);
	RTLR(11,loc10);
	RTLR(12,loc11);
	RTLR(13,loc12);
	RTLR(14,loc13);
	RTLR(15,loc14);
	RTLR(16,loc15);
	RTLR(17,loc16);
	RTLR(18,loc1);
	RTLIU(19);
	
	RTEAA("valid_type_for_index", 886, Current, 16, 2, 11420);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	uarg1 = (EIF_BOOLEAN) RTS_OU (arg1);
	uarg = uarg1;
	if (uarg) {
		RTS_RC;
		RTS_RS (arg1);
		RTS_RW;
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F887_4724(Current, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if ((EIF_BOOLEAN)(arg1 == NULL)) {
		RTHOOK(3);
		if ((EIF_BOOLEAN)((nstcall = 0, F887_4806(Current, arg2)) == ((EIF_NATURAL_8) 0U))) {
			RTHOOK(4);
			tr1 = (nstcall = 0, F1_5(Current));
			tr2 = (nstcall = 1, F856_4669(tr1, arg2));
			tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3741[Dtype(RTCW(tr2))-855])(tr2));
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) !tb1;
		}
	} else {
		RTHOOK(5);
		switch ((nstcall = 0, F887_4806(Current, arg2))) {
			case 1U:
				RTHOOK(6);
				loc3 = RTCCL(arg1);
				loc3 = RTRV(eif_new_type(920, 0x01),loc3);
				if ((loc3) && RTS_OS (Current, loc3)) loc3 = (EIF_REFERENCE) 0;
				Result = (EIF_BOOLEAN) EIF_TEST(loc3);
				break;
			case 2U:
				RTHOOK(7);
				loc4 = RTCCL(arg1);
				loc4 = RTRV(eif_new_type(917, 0x01),loc4);
				if ((loc4) && RTS_OS (Current, loc4)) loc4 = (EIF_REFERENCE) 0;
				Result = (EIF_BOOLEAN) EIF_TEST(loc4);
				break;
			case 14U:
				RTHOOK(8);
				loc5 = RTCCL(arg1);
				loc5 = RTRV(eif_new_type(914, 0x01),loc5);
				if ((loc5) && RTS_OS (Current, loc5)) loc5 = (EIF_REFERENCE) 0;
				Result = (EIF_BOOLEAN) EIF_TEST(loc5);
				break;
			case 3U:
				RTHOOK(9);
				loc6 = RTCCL(arg1);
				loc6 = RTRV(eif_new_type(911, 0x01),loc6);
				if ((loc6) && RTS_OS (Current, loc6)) loc6 = (EIF_REFERENCE) 0;
				Result = (EIF_BOOLEAN) EIF_TEST(loc6);
				break;
			case 4U:
				RTHOOK(10);
				loc7 = RTCCL(arg1);
				loc7 = RTRV(eif_new_type(908, 0x01),loc7);
				if ((loc7) && RTS_OS (Current, loc7)) loc7 = (EIF_REFERENCE) 0;
				Result = (EIF_BOOLEAN) EIF_TEST(loc7);
				break;
			case 5U:
				RTHOOK(11);
				loc8 = RTCCL(arg1);
				loc8 = RTRV(eif_new_type(926, 0x01),loc8);
				if ((loc8) && RTS_OS (Current, loc8)) loc8 = (EIF_REFERENCE) 0;
				Result = (EIF_BOOLEAN) EIF_TEST(loc8);
				break;
			case 10U:
				RTHOOK(12);
				loc9 = RTCCL(arg1);
				loc9 = RTRV(eif_new_type(905, 0x01),loc9);
				if ((loc9) && RTS_OS (Current, loc9)) loc9 = (EIF_REFERENCE) 0;
				Result = (EIF_BOOLEAN) EIF_TEST(loc9);
				break;
			case 11U:
				RTHOOK(13);
				loc10 = RTCCL(arg1);
				loc10 = RTRV(eif_new_type(923, 0x01),loc10);
				if ((loc10) && RTS_OS (Current, loc10)) loc10 = (EIF_REFERENCE) 0;
				Result = (EIF_BOOLEAN) EIF_TEST(loc10);
				break;
			case 12U:
				RTHOOK(14);
				loc11 = RTCCL(arg1);
				loc11 = RTRV(eif_new_type(902, 0x01),loc11);
				if ((loc11) && RTS_OS (Current, loc11)) loc11 = (EIF_REFERENCE) 0;
				Result = (EIF_BOOLEAN) EIF_TEST(loc11);
				break;
			case 13U:
				RTHOOK(15);
				loc12 = RTCCL(arg1);
				loc12 = RTRV(eif_new_type(899, 0x01),loc12);
				if ((loc12) && RTS_OS (Current, loc12)) loc12 = (EIF_REFERENCE) 0;
				Result = (EIF_BOOLEAN) EIF_TEST(loc12);
				break;
			case 6U:
				RTHOOK(16);
				loc13 = RTCCL(arg1);
				loc13 = RTRV(eif_new_type(896, 0x01),loc13);
				if ((loc13) && RTS_OS (Current, loc13)) loc13 = (EIF_REFERENCE) 0;
				Result = (EIF_BOOLEAN) EIF_TEST(loc13);
				break;
			case 7U:
				RTHOOK(17);
				loc14 = RTCCL(arg1);
				loc14 = RTRV(eif_new_type(893, 0x01),loc14);
				if ((loc14) && RTS_OS (Current, loc14)) loc14 = (EIF_REFERENCE) 0;
				Result = (EIF_BOOLEAN) EIF_TEST(loc14);
				break;
			case 8U:
				RTHOOK(18);
				loc15 = RTCCL(arg1);
				loc15 = RTRV(eif_new_type(890, 0x01),loc15);
				if ((loc15) && RTS_OS (Current, loc15)) loc15 = (EIF_REFERENCE) 0;
				Result = (EIF_BOOLEAN) EIF_TEST(loc15);
				break;
			case 9U:
				RTHOOK(19);
				loc16 = RTCCL(arg1);
				loc16 = RTRV(eif_new_type(887, 0x01),loc16);
				if ((loc16) && RTS_OS (Current, loc16)) loc16 = (EIF_REFERENCE) 0;
				Result = (EIF_BOOLEAN) EIF_TEST(loc16);
				break;
			case 0U:
				RTHOOK(20);
				loc1 = RTLNS(eif_new_type(191, 0x01).id, 191, _OBJSIZ_0_0_0_0_0_0_0_0_);
				RTHOOK(21);
				tr1 = RTCCL(arg1);
				loc2 = (nstcall = 0, F45_537(Current, tr1));
				RTHOOK(22);
				tr1 = (nstcall = 0, F1_5(Current));
				tr2 = (nstcall = 1, F856_4669(tr1, arg2));
				ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3736[Dtype(RTCW(tr2))-855])(tr2));
				tb1 = (nstcall = 1, F192_2322(RTCW(loc1), loc2, ti4_1));
				Result = (EIF_BOOLEAN) tb1;
				break;
			default:
				RTEC(EN_WHEN);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(23);
	if (uarg) {
		RTS_RD;
	}
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.count */
EIF_INTEGER_32 F887_4726 (EIF_REFERENCE Current)
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
	
	RTEAA("count", 886, Current, 0, 0, 11421);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) eif_builtin_TUPLE_count__i4 (Current);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.lower */
EIF_INTEGER_32 F887_4727 (EIF_REFERENCE Current)
{
	return (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
}

/* {TUPLE}.upper */
EIF_INTEGER_32 F887_4728 (EIF_REFERENCE Current)
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
	
	RTEAA("upper", 886, Current, 0, 0, 11423);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F887_4726(Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("definition", EX_POST);
		if ((EIF_BOOLEAN)(Result == (nstcall = 0, F887_4726(Current)))) {
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

/* {TUPLE}.is_empty */
EIF_BOOLEAN F887_4729 (EIF_REFERENCE Current)
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
	
	RTEAA("is_empty", 886, Current, 0, 0, 11424);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = (nstcall = 0, F887_4726(Current));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.put */
void F887_4730 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc14 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN uarg1;
	EIF_BOOLEAN uarg;
	RTS_SD;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_64 ti8_1;
	EIF_NATURAL_64 tu8_1;
	EIF_REAL_32 tr4_1;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_CHARACTER_32 tw1;
	EIF_INTEGER_16 ti2_1;
	EIF_NATURAL_16 tu2_1;
	EIF_INTEGER_8 ti1_1;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(17);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,loc2);
	RTLR(5,loc3);
	RTLR(6,loc4);
	RTLR(7,loc5);
	RTLR(8,loc6);
	RTLR(9,loc7);
	RTLR(10,loc8);
	RTLR(11,loc9);
	RTLR(12,loc10);
	RTLR(13,loc11);
	RTLR(14,loc12);
	RTLR(15,loc13);
	RTLR(16,loc14);
	RTLIU(17);
	
	RTEAA("put", 886, Current, 14, 2, 11425);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	uarg1 = (EIF_BOOLEAN) RTS_OU (arg1);
	uarg = uarg1;
	if (uarg) {
		RTS_RC;
		RTS_RS (arg1);
		RTS_RW;
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F887_4724(Current, arg2)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_type_for_index", EX_PRE);
		tr1 = RTCCL(arg1);
		RTTE((nstcall = 0, F887_4725(Current, tr1, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	switch ((nstcall = 0, F887_4806(Current, arg2))) {
		case 1U:
			RTHOOK(4);
			loc1 = RTCCL(arg1);
			loc1 = RTRV(eif_new_type(920, 0x01),loc1);
			if ((loc1) && RTS_OS (Current, loc1)) loc1 = (EIF_REFERENCE) 0;
			if (EIF_TEST(loc1)) {
				RTHOOK(5);
				tb1 = *(EIF_BOOLEAN *)(loc1+ _CHROFF_0_0_);
				(nstcall = 0, F887_4732(Current, tb1, arg2));
			}
			break;
		case 2U:
			RTHOOK(6);
			loc2 = RTCCL(arg1);
			loc2 = RTRV(eif_new_type(917, 0x01),loc2);
			if ((loc2) && RTS_OS (Current, loc2)) loc2 = (EIF_REFERENCE) 0;
			if (EIF_TEST(loc2)) {
				RTHOOK(7);
				tc1 = *(EIF_CHARACTER_8 *)(loc2+ _CHROFF_0_0_);
				(nstcall = 0, F887_4733(Current, tc1, arg2));
			}
			break;
		case 14U:
			RTHOOK(8);
			loc3 = RTCCL(arg1);
			loc3 = RTRV(eif_new_type(914, 0x01),loc3);
			if ((loc3) && RTS_OS (Current, loc3)) loc3 = (EIF_REFERENCE) 0;
			if (EIF_TEST(loc3)) {
				RTHOOK(9);
				tw1 = *(EIF_CHARACTER_32 *)(loc3+ _LNGOFF_0_0_0_0_);
				(nstcall = 0, F887_4735(Current, tw1, arg2));
			}
			break;
		case 3U:
			RTHOOK(10);
			loc4 = RTCCL(arg1);
			loc4 = RTRV(eif_new_type(911, 0x01),loc4);
			if ((loc4) && RTS_OS (Current, loc4)) loc4 = (EIF_REFERENCE) 0;
			if (EIF_TEST(loc4)) {
				RTHOOK(11);
				tr8_1 = *(EIF_REAL_64 *)(loc4+ _R64OFF_0_0_0_0_0_0_0_0_);
				(nstcall = 0, F887_4737(Current, tr8_1, arg2));
			}
			break;
		case 4U:
			RTHOOK(12);
			loc5 = RTCCL(arg1);
			loc5 = RTRV(eif_new_type(908, 0x01),loc5);
			if ((loc5) && RTS_OS (Current, loc5)) loc5 = (EIF_REFERENCE) 0;
			if (EIF_TEST(loc5)) {
				RTHOOK(13);
				tr4_1 = *(EIF_REAL_32 *)(loc5+ _R32OFF_0_0_0_0_0_);
				(nstcall = 0, F887_4739(Current, tr4_1, arg2));
			}
			break;
		case 5U:
			RTHOOK(14);
			loc6 = RTCCL(arg1);
			loc6 = RTRV(eif_new_type(926, 0x01),loc6);
			if ((loc6) && RTS_OS (Current, loc6)) loc6 = (EIF_REFERENCE) 0;
			if (EIF_TEST(loc6)) {
				RTHOOK(15);
				tp1 = *(EIF_POINTER *)(loc6+ _PTROFF_0_0_0_0_0_0_);
				(nstcall = 0, F887_4741(Current, tp1, arg2));
			}
			break;
		case 10U:
			RTHOOK(16);
			loc7 = RTCCL(arg1);
			loc7 = RTRV(eif_new_type(905, 0x01),loc7);
			if ((loc7) && RTS_OS (Current, loc7)) loc7 = (EIF_REFERENCE) 0;
			if (EIF_TEST(loc7)) {
				RTHOOK(17);
				tu1_1 = *(EIF_NATURAL_8 *)(loc7+ _CHROFF_0_0_);
				(nstcall = 0, F887_4742(Current, tu1_1, arg2));
			}
			break;
		case 11U:
			RTHOOK(18);
			loc8 = RTCCL(arg1);
			loc8 = RTRV(eif_new_type(923, 0x01),loc8);
			if ((loc8) && RTS_OS (Current, loc8)) loc8 = (EIF_REFERENCE) 0;
			if (EIF_TEST(loc8)) {
				RTHOOK(19);
				tu2_1 = *(EIF_NATURAL_16 *)(loc8+ _I16OFF_0_0_0_);
				(nstcall = 0, F887_4743(Current, tu2_1, arg2));
			}
			break;
		case 12U:
			RTHOOK(20);
			loc9 = RTCCL(arg1);
			loc9 = RTRV(eif_new_type(902, 0x01),loc9);
			if ((loc9) && RTS_OS (Current, loc9)) loc9 = (EIF_REFERENCE) 0;
			if (EIF_TEST(loc9)) {
				RTHOOK(21);
				tu4_1 = *(EIF_NATURAL_32 *)(loc9+ _LNGOFF_0_0_0_0_);
				(nstcall = 0, F887_4744(Current, tu4_1, arg2));
			}
			break;
		case 13U:
			RTHOOK(22);
			loc10 = RTCCL(arg1);
			loc10 = RTRV(eif_new_type(899, 0x01),loc10);
			if ((loc10) && RTS_OS (Current, loc10)) loc10 = (EIF_REFERENCE) 0;
			if (EIF_TEST(loc10)) {
				RTHOOK(23);
				tu8_1 = *(EIF_NATURAL_64 *)(loc10+ _I64OFF_0_0_0_0_0_0_0_);
				(nstcall = 0, F887_4745(Current, tu8_1, arg2));
			}
			break;
		case 6U:
			RTHOOK(24);
			loc11 = RTCCL(arg1);
			loc11 = RTRV(eif_new_type(896, 0x01),loc11);
			if ((loc11) && RTS_OS (Current, loc11)) loc11 = (EIF_REFERENCE) 0;
			if (EIF_TEST(loc11)) {
				RTHOOK(25);
				ti1_1 = *(EIF_INTEGER_8 *)(loc11+ _CHROFF_0_0_);
				(nstcall = 0, F887_4748(Current, ti1_1, arg2));
			}
			break;
		case 7U:
			RTHOOK(26);
			loc12 = RTCCL(arg1);
			loc12 = RTRV(eif_new_type(893, 0x01),loc12);
			if ((loc12) && RTS_OS (Current, loc12)) loc12 = (EIF_REFERENCE) 0;
			if (EIF_TEST(loc12)) {
				RTHOOK(27);
				ti2_1 = *(EIF_INTEGER_16 *)(loc12+ _I16OFF_0_0_0_);
				(nstcall = 0, F887_4749(Current, ti2_1, arg2));
			}
			break;
		case 8U:
			RTHOOK(28);
			loc13 = RTCCL(arg1);
			loc13 = RTRV(eif_new_type(890, 0x01),loc13);
			if ((loc13) && RTS_OS (Current, loc13)) loc13 = (EIF_REFERENCE) 0;
			if (EIF_TEST(loc13)) {
				RTHOOK(29);
				ti4_1 = *(EIF_INTEGER_32 *)(loc13+ _LNGOFF_0_0_0_0_);
				(nstcall = 0, F887_4746(Current, ti4_1, arg2));
			}
			break;
		case 9U:
			RTHOOK(30);
			loc14 = RTCCL(arg1);
			loc14 = RTRV(eif_new_type(887, 0x01),loc14);
			if ((loc14) && RTS_OS (Current, loc14)) loc14 = (EIF_REFERENCE) 0;
			if (EIF_TEST(loc14)) {
				RTHOOK(31);
				ti8_1 = *(EIF_INTEGER_64 *)(loc14+ _I64OFF_0_0_0_0_0_0_0_);
				(nstcall = 0, F887_4750(Current, ti8_1, arg2));
			}
			break;
		case 0U:
			RTHOOK(32);
			tr1 = RTCCL(arg1);
			(nstcall = 0, F887_4731(Current, tr1, arg2));
			break;
		default:
			RTEC(EN_WHEN);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(33);
	if (uarg) {
		RTS_RD;
	}
	RTLE;
	RTEE;
}

/* {TUPLE}.put_reference */
void F887_4731 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_BOOLEAN uarg1;
	EIF_BOOLEAN uarg;
	RTS_SD;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("put_reference", 886, Current, 0, 2, 11426);
	RTSA(Dtype(Current));
	RTSC;
	uarg1 = (EIF_BOOLEAN) RTS_OU (arg1);
	uarg = uarg1;
	if (uarg) {
		RTS_RC;
		RTS_RS (arg1);
		RTS_RW;
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F887_4724(Current, arg2)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_type_for_index", EX_PRE);
		tr1 = RTCCL(arg1);
		RTTE((nstcall = 0, F887_4725(Current, tr1, arg2)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("valid_type", EX_PRE);
		RTTE((nstcall = 0, F887_4770(Current, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	eif_builtin_TUPLE_put_reference__o_i4_ (Current, arg1, arg2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	if (uarg) {
		RTS_RD;
	}
	RTLE;
	RTEE;
}

/* {TUPLE}.put_boolean */
void F887_4732 (EIF_REFERENCE Current, EIF_BOOLEAN arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_boolean", 886, Current, 0, 2, 11427);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F887_4724(Current, arg2)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_type", EX_PRE);
		RTTE((nstcall = 0, F887_4751(Current, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	eif_builtin_TUPLE_put_boolean__b_i4_ (Current, arg1, arg2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {TUPLE}.put_character_8 */
void F887_4733 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_character_8", 886, Current, 0, 2, 11428);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F887_4724(Current, arg2)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_type", EX_PRE);
		RTTE((nstcall = 0, F887_4752(Current, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	eif_builtin_TUPLE_put_character_8__c1_i4_ (Current, arg1, arg2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {TUPLE}.put_character */
void F887_4734 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_character", 886, Current, 0, 2, 11429);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F887_4724(Current, arg2)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_type", EX_PRE);
		RTTE((nstcall = 0, F887_4752(Current, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	(nstcall = 0, F887_4733(Current, arg1, arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {TUPLE}.put_character_32 */
void F887_4735 (EIF_REFERENCE Current, EIF_CHARACTER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_character_32", 886, Current, 0, 2, 11430);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F887_4724(Current, arg2)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_type", EX_PRE);
		RTTE((nstcall = 0, F887_4754(Current, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	eif_builtin_TUPLE_put_character_32__c4_i4_ (Current, arg1, arg2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {TUPLE}.put_wide_character */
void F887_4736 (EIF_REFERENCE Current, EIF_CHARACTER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_wide_character", 886, Current, 0, 2, 11431);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F887_4724(Current, arg2)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_type", EX_PRE);
		RTTE((nstcall = 0, F887_4754(Current, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	(nstcall = 0, F887_4735(Current, arg1, arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {TUPLE}.put_real_64 */
void F887_4737 (EIF_REFERENCE Current, EIF_REAL_64 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_real_64", 886, Current, 0, 2, 11432);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F887_4724(Current, arg2)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_type", EX_PRE);
		RTTE((nstcall = 0, F887_4769(Current, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	eif_builtin_TUPLE_put_real_64__r8_i4_ (Current, arg1, arg2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {TUPLE}.put_double */
void F887_4738 (EIF_REFERENCE Current, EIF_REAL_64 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_double", 886, Current, 0, 2, 11433);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F887_4724(Current, arg2)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_type", EX_PRE);
		RTTE((nstcall = 0, F887_4769(Current, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	(nstcall = 0, F887_4737(Current, arg1, arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {TUPLE}.put_real_32 */
void F887_4739 (EIF_REFERENCE Current, EIF_REAL_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_real_32", 886, Current, 0, 2, 11434);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F887_4724(Current, arg2)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_type", EX_PRE);
		RTTE((nstcall = 0, F887_4767(Current, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	eif_builtin_TUPLE_put_real_32__r4_i4_ (Current, arg1, arg2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {TUPLE}.put_real */
void F887_4740 (EIF_REFERENCE Current, EIF_REAL_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_real", 886, Current, 0, 2, 11435);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F887_4724(Current, arg2)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_type", EX_PRE);
		RTTE((nstcall = 0, F887_4767(Current, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	(nstcall = 0, F887_4739(Current, arg1, arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {TUPLE}.put_pointer */
void F887_4741 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_pointer", 886, Current, 0, 2, 11436);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F887_4724(Current, arg2)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_type", EX_PRE);
		RTTE((nstcall = 0, F887_4765(Current, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	eif_builtin_TUPLE_put_pointer__p_i4_ (Current, arg1, arg2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {TUPLE}.put_natural_8 */
void F887_4742 (EIF_REFERENCE Current, EIF_NATURAL_8 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_natural_8", 886, Current, 0, 2, 11437);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F887_4724(Current, arg2)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_type", EX_PRE);
		RTTE((nstcall = 0, F887_4756(Current, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	eif_builtin_TUPLE_put_natural_8__u1_i4_ (Current, arg1, arg2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {TUPLE}.put_natural_16 */
void F887_4743 (EIF_REFERENCE Current, EIF_NATURAL_16 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_natural_16", 886, Current, 0, 2, 11438);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F887_4724(Current, arg2)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_type", EX_PRE);
		RTTE((nstcall = 0, F887_4757(Current, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	eif_builtin_TUPLE_put_natural_16__u2_i4_ (Current, arg1, arg2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {TUPLE}.put_natural_32 */
void F887_4744 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_natural_32", 886, Current, 0, 2, 11439);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F887_4724(Current, arg2)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_type", EX_PRE);
		RTTE((nstcall = 0, F887_4758(Current, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	eif_builtin_TUPLE_put_natural_32__u4_i4_ (Current, arg1, arg2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {TUPLE}.put_natural_64 */
void F887_4745 (EIF_REFERENCE Current, EIF_NATURAL_64 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_natural_64", 886, Current, 0, 2, 11440);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F887_4724(Current, arg2)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_type", EX_PRE);
		RTTE((nstcall = 0, F887_4759(Current, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	eif_builtin_TUPLE_put_natural_64__u8_i4_ (Current, arg1, arg2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {TUPLE}.put_integer_32 */
void F887_4746 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_integer_32", 886, Current, 0, 2, 11441);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F887_4724(Current, arg2)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_type", EX_PRE);
		RTTE((nstcall = 0, F887_4763(Current, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	eif_builtin_TUPLE_put_integer_32__i4_i4_ (Current, arg1, arg2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {TUPLE}.put_integer */
void F887_4747 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_integer", 886, Current, 0, 2, 11442);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F887_4724(Current, arg2)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_type", EX_PRE);
		RTTE((nstcall = 0, F887_4763(Current, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	(nstcall = 0, F887_4746(Current, arg1, arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {TUPLE}.put_integer_8 */
void F887_4748 (EIF_REFERENCE Current, EIF_INTEGER_8 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_integer_8", 886, Current, 0, 2, 11443);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F887_4724(Current, arg2)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_type", EX_PRE);
		RTTE((nstcall = 0, F887_4760(Current, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	eif_builtin_TUPLE_put_integer_8__i1_i4_ (Current, arg1, arg2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {TUPLE}.put_integer_16 */
void F887_4749 (EIF_REFERENCE Current, EIF_INTEGER_16 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_integer_16", 886, Current, 0, 2, 11444);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F887_4724(Current, arg2)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_type", EX_PRE);
		RTTE((nstcall = 0, F887_4761(Current, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	eif_builtin_TUPLE_put_integer_16__i2_i4_ (Current, arg1, arg2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {TUPLE}.put_integer_64 */
void F887_4750 (EIF_REFERENCE Current, EIF_INTEGER_64 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_integer_64", 886, Current, 0, 2, 11445);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F887_4724(Current, arg2)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_type", EX_PRE);
		RTTE((nstcall = 0, F887_4764(Current, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	eif_builtin_TUPLE_put_integer_64__i8_i4_ (Current, arg1, arg2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {TUPLE}.is_boolean_item */
EIF_BOOLEAN F887_4751 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_boolean_item", 886, Current, 0, 1, 11446);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F887_4724(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tu1_1 = (nstcall = 0, F887_4806(Current, arg1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu1_1 == ((EIF_NATURAL_8) 1U));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_character_8_item */
EIF_BOOLEAN F887_4752 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_character_8_item", 886, Current, 0, 1, 11447);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F887_4724(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tu1_1 = (nstcall = 0, F887_4806(Current, arg1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu1_1 == ((EIF_NATURAL_8) 2U));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_character_item */
EIF_BOOLEAN F887_4753 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_character_item", 886, Current, 0, 1, 11448);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F887_4724(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tu1_1 = (nstcall = 0, F887_4806(Current, arg1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu1_1 == ((EIF_NATURAL_8) 2U));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_character_32_item */
EIF_BOOLEAN F887_4754 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_character_32_item", 886, Current, 0, 1, 11449);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F887_4724(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tu1_1 = (nstcall = 0, F887_4806(Current, arg1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu1_1 == ((EIF_NATURAL_8) 14U));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_wide_character_item */
EIF_BOOLEAN F887_4755 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_wide_character_item", 886, Current, 0, 1, 11450);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F887_4724(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tu1_1 = (nstcall = 0, F887_4806(Current, arg1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu1_1 == ((EIF_NATURAL_8) 14U));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_natural_8_item */
EIF_BOOLEAN F887_4756 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_natural_8_item", 886, Current, 0, 1, 11451);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F887_4724(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tu1_1 = (nstcall = 0, F887_4806(Current, arg1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu1_1 == ((EIF_NATURAL_8) 10U));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_natural_16_item */
EIF_BOOLEAN F887_4757 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_natural_16_item", 886, Current, 0, 1, 11452);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F887_4724(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tu1_1 = (nstcall = 0, F887_4806(Current, arg1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu1_1 == ((EIF_NATURAL_8) 11U));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_natural_32_item */
EIF_BOOLEAN F887_4758 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_natural_32_item", 886, Current, 0, 1, 11453);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F887_4724(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tu1_1 = (nstcall = 0, F887_4806(Current, arg1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu1_1 == ((EIF_NATURAL_8) 12U));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_natural_64_item */
EIF_BOOLEAN F887_4759 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_natural_64_item", 886, Current, 0, 1, 11454);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F887_4724(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tu1_1 = (nstcall = 0, F887_4806(Current, arg1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu1_1 == ((EIF_NATURAL_8) 13U));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_integer_8_item */
EIF_BOOLEAN F887_4760 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_integer_8_item", 886, Current, 0, 1, 11455);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F887_4724(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tu1_1 = (nstcall = 0, F887_4806(Current, arg1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu1_1 == ((EIF_NATURAL_8) 6U));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_integer_16_item */
EIF_BOOLEAN F887_4761 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_integer_16_item", 886, Current, 0, 1, 11456);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F887_4724(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tu1_1 = (nstcall = 0, F887_4806(Current, arg1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu1_1 == ((EIF_NATURAL_8) 7U));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_integer_item */
EIF_BOOLEAN F887_4762 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_integer_item", 886, Current, 0, 1, 11457);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F887_4724(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tu1_1 = (nstcall = 0, F887_4806(Current, arg1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu1_1 == ((EIF_NATURAL_8) 8U));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_integer_32_item */
EIF_BOOLEAN F887_4763 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_integer_32_item", 886, Current, 0, 1, 11458);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F887_4724(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tu1_1 = (nstcall = 0, F887_4806(Current, arg1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu1_1 == ((EIF_NATURAL_8) 8U));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_integer_64_item */
EIF_BOOLEAN F887_4764 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_integer_64_item", 886, Current, 0, 1, 11459);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F887_4724(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tu1_1 = (nstcall = 0, F887_4806(Current, arg1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu1_1 == ((EIF_NATURAL_8) 9U));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_pointer_item */
EIF_BOOLEAN F887_4765 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_pointer_item", 886, Current, 0, 1, 11460);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F887_4724(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tu1_1 = (nstcall = 0, F887_4806(Current, arg1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu1_1 == ((EIF_NATURAL_8) 5U));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_real_32_item */
EIF_BOOLEAN F887_4766 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_real_32_item", 886, Current, 0, 1, 11461);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F887_4724(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tu1_1 = (nstcall = 0, F887_4806(Current, arg1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu1_1 == ((EIF_NATURAL_8) 4U));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_real_item */
EIF_BOOLEAN F887_4767 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("is_real_item", 886, Current, 0, 1, 11462);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F887_4724(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = (nstcall = 0, F887_4766(Current, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_real_64_item */
EIF_BOOLEAN F887_4768 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_real_64_item", 886, Current, 0, 1, 11463);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F887_4724(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tu1_1 = (nstcall = 0, F887_4806(Current, arg1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu1_1 == ((EIF_NATURAL_8) 3U));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_double_item */
EIF_BOOLEAN F887_4769 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("is_double_item", 886, Current, 0, 1, 11464);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F887_4724(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = (nstcall = 0, F887_4768(Current, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_reference_item */
EIF_BOOLEAN F887_4770 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_reference_item", 886, Current, 0, 1, 11465);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F887_4724(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tu1_1 = (nstcall = 0, F887_4806(Current, arg1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu1_1 == ((EIF_NATURAL_8) 0U));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_numeric_item */
EIF_BOOLEAN F887_4771 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_8 loc1 = (EIF_NATURAL_8) 0;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_numeric_item", 886, Current, 1, 1, 11334);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F887_4724(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = (nstcall = 0, F887_4806(Current, arg1));
	RTHOOK(3);
	switch (loc1) {
		case 3U:
		case 4U:
		case 6U:
		case 7U:
		case 8U:
		case 9U:
			RTHOOK(4);
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_uniform */
EIF_BOOLEAN F887_4772 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_uniform", 886, Current, 0, 0, 11335);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F887_4826(Current, ((EIF_NATURAL_8) 255U)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("yes_if_empty", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)((nstcall = 0, F887_4726(Current)) == ((EIF_INTEGER_32) 0L))) {
			tb1 = Result;
		}
		if (tb1) {
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

/* {TUPLE}.is_uniform_boolean */
EIF_BOOLEAN F887_4773 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_uniform_boolean", 886, Current, 0, 0, 11336);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F887_4826(Current, ((EIF_NATURAL_8) 1U)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("yes_if_empty", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)((nstcall = 0, F887_4726(Current)) == ((EIF_INTEGER_32) 0L))) {
			tb1 = Result;
		}
		if (tb1) {
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

/* {TUPLE}.is_uniform_character_8 */
EIF_BOOLEAN F887_4774 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_uniform_character_8", 886, Current, 0, 0, 11337);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F887_4826(Current, ((EIF_NATURAL_8) 2U)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("yes_if_empty", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)((nstcall = 0, F887_4726(Current)) == ((EIF_INTEGER_32) 0L))) {
			tb1 = Result;
		}
		if (tb1) {
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

/* {TUPLE}.is_uniform_character */
EIF_BOOLEAN F887_4775 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_uniform_character", 886, Current, 0, 0, 11338);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F887_4826(Current, ((EIF_NATURAL_8) 2U)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("yes_if_empty", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)((nstcall = 0, F887_4726(Current)) == ((EIF_INTEGER_32) 0L))) {
			tb1 = Result;
		}
		if (tb1) {
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

/* {TUPLE}.is_uniform_character_32 */
EIF_BOOLEAN F887_4776 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_uniform_character_32", 886, Current, 0, 0, 11339);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F887_4826(Current, ((EIF_NATURAL_8) 14U)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("yes_if_empty", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)((nstcall = 0, F887_4726(Current)) == ((EIF_INTEGER_32) 0L))) {
			tb1 = Result;
		}
		if (tb1) {
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

/* {TUPLE}.is_uniform_wide_character */
EIF_BOOLEAN F887_4777 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_uniform_wide_character", 886, Current, 0, 0, 11340);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F887_4826(Current, ((EIF_NATURAL_8) 14U)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("yes_if_empty", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)((nstcall = 0, F887_4726(Current)) == ((EIF_INTEGER_32) 0L))) {
			tb1 = Result;
		}
		if (tb1) {
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

/* {TUPLE}.is_uniform_natural_8 */
EIF_BOOLEAN F887_4778 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_uniform_natural_8", 886, Current, 0, 0, 11341);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F887_4826(Current, ((EIF_NATURAL_8) 10U)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("yes_if_empty", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)((nstcall = 0, F887_4726(Current)) == ((EIF_INTEGER_32) 0L))) {
			tb1 = Result;
		}
		if (tb1) {
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

/* {TUPLE}.is_uniform_natural_16 */
EIF_BOOLEAN F887_4779 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_uniform_natural_16", 886, Current, 0, 0, 11342);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F887_4826(Current, ((EIF_NATURAL_8) 11U)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("yes_if_empty", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)((nstcall = 0, F887_4726(Current)) == ((EIF_INTEGER_32) 0L))) {
			tb1 = Result;
		}
		if (tb1) {
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

/* {TUPLE}.is_uniform_natural_32 */
EIF_BOOLEAN F887_4780 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_uniform_natural_32", 886, Current, 0, 0, 11343);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F887_4826(Current, ((EIF_NATURAL_8) 12U)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("yes_if_empty", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)((nstcall = 0, F887_4726(Current)) == ((EIF_INTEGER_32) 0L))) {
			tb1 = Result;
		}
		if (tb1) {
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

/* {TUPLE}.is_uniform_natural_64 */
EIF_BOOLEAN F887_4781 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_uniform_natural_64", 886, Current, 0, 0, 11344);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F887_4826(Current, ((EIF_NATURAL_8) 13U)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("yes_if_empty", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)((nstcall = 0, F887_4726(Current)) == ((EIF_INTEGER_32) 0L))) {
			tb1 = Result;
		}
		if (tb1) {
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

/* {TUPLE}.is_uniform_integer_8 */
EIF_BOOLEAN F887_4782 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_uniform_integer_8", 886, Current, 0, 0, 11345);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F887_4826(Current, ((EIF_NATURAL_8) 6U)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("yes_if_empty", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)((nstcall = 0, F887_4726(Current)) == ((EIF_INTEGER_32) 0L))) {
			tb1 = Result;
		}
		if (tb1) {
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

/* {TUPLE}.is_uniform_integer_16 */
EIF_BOOLEAN F887_4783 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_uniform_integer_16", 886, Current, 0, 0, 11346);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F887_4826(Current, ((EIF_NATURAL_8) 7U)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("yes_if_empty", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)((nstcall = 0, F887_4726(Current)) == ((EIF_INTEGER_32) 0L))) {
			tb1 = Result;
		}
		if (tb1) {
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

/* {TUPLE}.is_uniform_integer */
EIF_BOOLEAN F887_4784 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_uniform_integer", 886, Current, 0, 0, 11347);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F887_4826(Current, ((EIF_NATURAL_8) 8U)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("yes_if_empty", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)((nstcall = 0, F887_4726(Current)) == ((EIF_INTEGER_32) 0L))) {
			tb1 = Result;
		}
		if (tb1) {
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

/* {TUPLE}.is_uniform_integer_32 */
EIF_BOOLEAN F887_4785 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_uniform_integer_32", 886, Current, 0, 0, 11348);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F887_4826(Current, ((EIF_NATURAL_8) 8U)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("yes_if_empty", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)((nstcall = 0, F887_4726(Current)) == ((EIF_INTEGER_32) 0L))) {
			tb1 = Result;
		}
		if (tb1) {
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

/* {TUPLE}.is_uniform_integer_64 */
EIF_BOOLEAN F887_4786 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_uniform_integer_64", 886, Current, 0, 0, 11349);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F887_4826(Current, ((EIF_NATURAL_8) 9U)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("yes_if_empty", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)((nstcall = 0, F887_4726(Current)) == ((EIF_INTEGER_32) 0L))) {
			tb1 = Result;
		}
		if (tb1) {
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

/* {TUPLE}.is_uniform_pointer */
EIF_BOOLEAN F887_4787 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_uniform_pointer", 886, Current, 0, 0, 11350);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F887_4826(Current, ((EIF_NATURAL_8) 5U)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("yes_if_empty", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)((nstcall = 0, F887_4726(Current)) == ((EIF_INTEGER_32) 0L))) {
			tb1 = Result;
		}
		if (tb1) {
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

/* {TUPLE}.is_uniform_real_32 */
EIF_BOOLEAN F887_4788 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_uniform_real_32", 886, Current, 0, 0, 11351);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F887_4826(Current, ((EIF_NATURAL_8) 4U)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("yes_if_empty", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)((nstcall = 0, F887_4726(Current)) == ((EIF_INTEGER_32) 0L))) {
			tb1 = Result;
		}
		if (tb1) {
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

/* {TUPLE}.is_uniform_real */
EIF_BOOLEAN F887_4789 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_uniform_real", 886, Current, 0, 0, 11352);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F887_4788(Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("yes_if_empty", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)((nstcall = 0, F887_4726(Current)) == ((EIF_INTEGER_32) 0L))) {
			tb1 = Result;
		}
		if (tb1) {
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

/* {TUPLE}.is_uniform_real_64 */
EIF_BOOLEAN F887_4790 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_uniform_real_64", 886, Current, 0, 0, 11353);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F887_4826(Current, ((EIF_NATURAL_8) 3U)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("yes_if_empty", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)((nstcall = 0, F887_4726(Current)) == ((EIF_INTEGER_32) 0L))) {
			tb1 = Result;
		}
		if (tb1) {
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

/* {TUPLE}.is_uniform_double */
EIF_BOOLEAN F887_4791 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_uniform_double", 886, Current, 0, 0, 11354);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F887_4790(Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("yes_if_empty", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)((nstcall = 0, F887_4726(Current)) == ((EIF_INTEGER_32) 0L))) {
			tb1 = Result;
		}
		if (tb1) {
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

/* {TUPLE}.is_uniform_reference */
EIF_BOOLEAN F887_4792 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_uniform_reference", 886, Current, 0, 0, 11355);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F887_4826(Current, ((EIF_NATURAL_8) 0U)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("yes_if_empty", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)((nstcall = 0, F887_4726(Current)) == ((EIF_INTEGER_32) 0L))) {
			tb1 = Result;
		}
		if (tb1) {
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

/* {TUPLE}.plus */
EIF_REFERENCE F887_4793 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(14);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,loc10);
	RTLR(3,tr1);
	RTLR(4,Result);
	RTLR(5,loc9);
	RTLR(6,loc8);
	RTLR(7,loc5);
	RTLR(8,tr2);
	RTLR(9,loc6);
	RTLR(10,loc1);
	RTLR(11,loc11);
	RTLR(12,loc12);
	RTLR(13,loc13);
	RTLIU(14);
	
	RTEAA("plus", 886, Current, 13, 1, 11356);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc3 = (nstcall = 0, F887_4726(Current));
	RTHOOK(2);
	ti4_1 = (nstcall = 1, F887_4726(arg1));
	loc4 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	if ((EIF_BOOLEAN)(loc3 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(4);
		tr1 = (nstcall = 1, F1_14(arg1));
		loc10 = tr1;
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFFF9,0,886,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			loc10 = RTRV(typres0,loc10);
		}
		if (EIF_TEST(loc10)) {
			RTHOOK(5);
			Result = (EIF_REFERENCE) loc10;
		} else {
			
		}
	} else {
		RTHOOK(6);
		if ((EIF_BOOLEAN)(loc4 == ((EIF_INTEGER_32) 0L))) {
			RTHOOK(7);
			Result = (nstcall = 0, F1_14(Current));
		} else {
			RTHOOK(8);
			loc9 = RTLNS(eif_new_type(969, 0x01).id, 969, _OBJSIZ_1_1_0_3_0_0_0_0_);
			tr1 = RTMS_EX_H("TUPLE [",7,776318043);
			(nstcall = -1, F968_6062(RTCW(loc9), tr1));
			RTHOOK(9);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,759,0xFF04,0,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				loc8 = RTLNSP2(typres0.id,EO_REF,(EIF_INTEGER_32) (loc3 + loc4),sizeof(EIF_REFERENCE), EIF_FALSE);
				RT_SPECIAL_COUNT(loc8) = 0;
			}
			RTHOOK(10);
			loc5 = (nstcall = 0, F1_5(Current));
			
			RTHOOK(11);
			loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			for (;;) {
				RTHOOK(12);
				if ((EIF_BOOLEAN) (loc2 > loc3)) break;
				RTHOOK(13);
				if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 1L))) {
					RTHOOK(14);
					(nstcall = 1, F970_6186(RTCW(loc9), (EIF_CHARACTER_8) ','));
					RTHOOK(15);
					(nstcall = 1, F970_6186(RTCW(loc9), (EIF_CHARACTER_8) ' '));
				}
				RTHOOK(16);
				tr1 = (nstcall = 1, F856_4669(loc5, loc2));
				tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R28[Dtype(RTCW(tr1))-0])(tr1));
				(nstcall = 1, F970_6173(RTCW(loc9), tr2));
				RTHOOK(17);
				tr1 = (nstcall = 0, F887_4697(Current, loc2));
				tr2 = RTCCL(tr1);
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R3411[Dtype(RTCW(loc8))-759])(loc8, tr2, (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 1L))));
				RTHOOK(18);
				loc2++;
			}
			RTHOOK(19);
			tr1 = (nstcall = 1, F1_5(arg1));
			loc6 = (EIF_REFERENCE) tr1;
			
			for (;;) {
				RTHOOK(20);
				if ((EIF_BOOLEAN) (loc2 > (EIF_INTEGER_32) (loc3 + loc4))) break;
				RTHOOK(21);
				(nstcall = 1, F970_6186(RTCW(loc9), (EIF_CHARACTER_8) ','));
				RTHOOK(22);
				(nstcall = 1, F970_6186(RTCW(loc9), (EIF_CHARACTER_8) ' '));
				RTHOOK(23);
				tr1 = (nstcall = 1, F856_4669(loc6, (EIF_INTEGER_32) (loc2 - loc3)));
				tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R28[Dtype(RTCW(tr1))-0])(tr1));
				(nstcall = 1, F970_6173(RTCW(loc9), tr2));
				RTHOOK(24);
				tr1 = (nstcall = 1, F887_4697(RTCW(arg1), (EIF_INTEGER_32) (loc2 - loc3)));
				tr2 = RTCCL(tr1);
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R3411[Dtype(RTCW(loc8))-759])(loc8, tr2, (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 1L))));
				RTHOOK(25);
				loc2++;
			}
			RTHOOK(26);
			(nstcall = 1, F970_6186(RTCW(loc9), (EIF_CHARACTER_8) ']'));
			RTHOOK(27);
			loc1 = RTLNS(eif_new_type(191, 0x01).id, 191, _OBJSIZ_0_0_0_0_0_0_0_0_);
			RTHOOK(28);
			ti4_1 = (nstcall = 1, F192_2323(RTCW(loc1), loc9));
			loc7 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(29);
			if ((EIF_BOOLEAN) (loc7 >= ((EIF_INTEGER_32) 0L))) {
				RTHOOK(30);
				tr1 = (nstcall = 1, F192_2326(RTCW(loc1), loc7, loc8));
				loc11 = tr1;
				{
					static EIF_TYPE_INDEX typarr0[] = {0xFFF9,0,886,0xFFFF};
					EIF_TYPE typres0;
					static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
					
					typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
					loc11 = RTRV(typres0,loc11);
				}
				if (EIF_TEST(loc11)) {
					RTHOOK(31);
					Result = (EIF_REFERENCE) loc11;
				}
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(32);
		RTCT("has_expected_count", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)(Result != NULL)) {
			ti4_1 = (nstcall = 1, F887_4726(Result));
			ti4_2 = (nstcall = 1, F887_4726(arg1));
			tb1 = (EIF_BOOLEAN)(ti4_1 == (EIF_INTEGER_32) ((nstcall = 0, F887_4726(Current)) + ti4_2));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(33);
		RTCT("has_expected_items", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)(Result != NULL)) {
			tb2 = '\0';
			ti4_1 = (nstcall = 0, F887_4726(Current));
			tr1 = RTLNS(eif_new_type(892, 0x00).id, 892, _OBJSIZ_0_0_0_1_0_0_0_0_);
			*(EIF_INTEGER_32 *)tr1 = ((EIF_INTEGER_32) 1L);
			tr2 = (nstcall = 1, F891_4954(RTCW(tr1), ti4_1));
			tr1 = (nstcall = 1, F650_3861(RTCW(tr2)));
			loc12 = (EIF_REFERENCE) tr1;
			tb3 = EIF_TRUE;
			for (;;) {
				if (!tb3) break;
				tb4 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2815[Dtype(loc12)-245])(loc12));
				if (tb4) break;
				RTHOOK(34);
				ti4_1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2814[Dtype(loc12)-245])(loc12));
				tr1 = (nstcall = 1, F887_4697(RTCW(Result), ti4_1));
				ti4_1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2814[Dtype(loc12)-245])(loc12));
				tr2 = (nstcall = 0, F887_4697(Current, ti4_1));
				tb3 = RTCEQ(tr1, tr2);
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2816[Dtype(loc12)-245])(loc12));
			}
			if (tb3) {
				ti4_1 = (nstcall = 1, F887_4726(arg1));
				tr1 = RTLNS(eif_new_type(892, 0x00).id, 892, _OBJSIZ_0_0_0_1_0_0_0_0_);
				*(EIF_INTEGER_32 *)tr1 = ((EIF_INTEGER_32) 1L);
				tr2 = (nstcall = 1, F891_4954(RTCW(tr1), ti4_1));
				tr1 = (nstcall = 1, F650_3861(RTCW(tr2)));
				loc13 = (EIF_REFERENCE) tr1;
				tb3 = EIF_TRUE;
				for (;;) {
					if (!tb3) break;
					tb4 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2815[Dtype(loc13)-245])(loc13));
					if (tb4) break;
					RTHOOK(35);
					ti4_1 = (nstcall = 0, F887_4726(Current));
					ti4_2 = (nstcall = 1, eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2814[Dtype(loc13)-245])(loc13));
					tr1 = (nstcall = 1, F887_4697(RTCW(Result), (EIF_INTEGER_32) (ti4_1 + ti4_2)));
					ti4_1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2814[Dtype(loc13)-245])(loc13));
					tr2 = (nstcall = 1, F887_4697(RTCW(arg1), ti4_1));
					tb3 = RTCEQ(tr1, tr2);
					(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2816[Dtype(loc13)-245])(loc13));
				}
				tb2 = tb3;
			}
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(36);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.convertible_to_double */
EIF_BOOLEAN F887_4794 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_8 loc3 = (EIF_NATURAL_8) 0;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("convertible_to_double", 886, Current, 3, 0, 11357);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(2);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(3);
	loc2 = (nstcall = 0, F887_4726(Current));
	for (;;) {
		RTHOOK(4);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 > loc2) || (EIF_BOOLEAN) !Result)) break;
		RTHOOK(5);
		loc3 = (nstcall = 0, F887_4806(Current, loc1));
		RTHOOK(6);
		switch (loc3) {
			case 3U:
			case 4U:
			case 6U:
			case 7U:
			case 8U:
			case 9U:
				RTHOOK(7);
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				break;
			default:
				RTHOOK(8);
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				break;
		}
		RTHOOK(9);
		loc1++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("yes_if_empty", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)((nstcall = 0, F887_4726(Current)) == ((EIF_INTEGER_32) 0L))) {
			tb1 = Result;
		}
		if (tb1) {
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

/* {TUPLE}.convertible_to_real */
EIF_BOOLEAN F887_4795 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_8 loc3 = (EIF_NATURAL_8) 0;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("convertible_to_real", 886, Current, 3, 0, 11358);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(2);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(3);
	loc2 = (nstcall = 0, F887_4726(Current));
	for (;;) {
		RTHOOK(4);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 > loc2) || (EIF_BOOLEAN) !Result)) break;
		RTHOOK(5);
		loc3 = (nstcall = 0, F887_4806(Current, loc1));
		RTHOOK(6);
		switch (loc3) {
			case 4U:
			case 6U:
			case 7U:
			case 8U:
			case 9U:
				RTHOOK(7);
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				break;
			default:
				RTHOOK(8);
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				break;
		}
		RTHOOK(9);
		loc1++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("yes_if_empty", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)((nstcall = 0, F887_4726(Current)) == ((EIF_INTEGER_32) 0L))) {
			tb1 = Result;
		}
		if (tb1) {
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

/* {TUPLE}.arrayed */
EIF_REFERENCE F887_4796 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
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
	
	RTEAA("arrayed", 886, Current, 2, 0, 11359);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(2);
	loc2 = (nstcall = 0, F887_4726(Current));
	RTHOOK(3);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,678,0xFF04,0,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		Result = RTLNS(typres0.id, 678, _OBJSIZ_1_1_0_2_0_0_0_0_);
	}
	(nstcall = -1, F679_3906(RTCW(Result), NULL, ((EIF_INTEGER_32) 1L), loc2));
	for (;;) {
		RTHOOK(4);
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		RTHOOK(5);
		tr1 = (nstcall = 0, F887_4697(Current, loc1));
		tr2 = RTCCL(tr1);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R2965[Dtype(RTCW(Result))-677])(Result, tr2, (EIF_REFERENCE) &loc1));
		RTHOOK(6);
		loc1++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("same_count", EX_POST);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2989[Dtype(RTCW(Result))-644])(Result));
		if ((EIF_BOOLEAN)(ti4_1 == (nstcall = 0, F887_4726(Current)))) {
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

/* {TUPLE}.boolean_arrayed */
EIF_REFERENCE F887_4797 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
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
	
	RTEAA("boolean_arrayed", 886, Current, 2, 0, 11360);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_uniform_boolean", EX_PRE);
		RTTE((nstcall = 0, F887_4773(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(3);
	loc2 = (nstcall = 0, F887_4726(Current));
	RTHOOK(4);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,692,922,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		Result = RTLNS(typres0.id, 692, _OBJSIZ_1_1_0_2_0_0_0_0_);
	}
	(nstcall = -1, F693_3906(RTCW(Result), (EIF_BOOLEAN) 0, ((EIF_INTEGER_32) 1L), loc2));
	for (;;) {
		RTHOOK(5);
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		RTHOOK(6);
		tb1 = (nstcall = 0, F887_4700(Current, loc1));
		(nstcall = 1, F693_3930(RTCW(Result), tb1, loc1));
		RTHOOK(7);
		loc1++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("same_count", EX_POST);
		ti4_1 = (nstcall = 1, F693_3918(RTCW(Result)));
		if ((EIF_BOOLEAN)(ti4_1 == (nstcall = 0, F887_4726(Current)))) {
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

/* {TUPLE}.character_8_arrayed */
EIF_REFERENCE F887_4798 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("character_8_arrayed", 886, Current, 2, 0, 11361);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_uniform_character", EX_PRE);
		RTTE((nstcall = 0, F887_4775(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(3);
	loc2 = (nstcall = 0, F887_4726(Current));
	RTHOOK(4);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,682,919,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		Result = RTLNS(typres0.id, 682, _OBJSIZ_1_1_0_2_0_0_0_0_);
	}
	(nstcall = -1, F683_3906(RTCW(Result), (EIF_CHARACTER_8) ' ', ((EIF_INTEGER_32) 1L), loc2));
	for (;;) {
		RTHOOK(5);
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		RTHOOK(6);
		tc1 = (nstcall = 0, F887_4701(Current, loc1));
		(nstcall = 1, F683_3930(RTCW(Result), tc1, loc1));
		RTHOOK(7);
		loc1++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("same_count", EX_POST);
		ti4_1 = (nstcall = 1, F683_3918(RTCW(Result)));
		if ((EIF_BOOLEAN)(ti4_1 == (nstcall = 0, F887_4726(Current)))) {
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

/* {TUPLE}.character_arrayed */
EIF_REFERENCE F887_4799 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("character_arrayed", 886, Current, 2, 0, 11362);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_uniform_character", EX_PRE);
		RTTE((nstcall = 0, F887_4775(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(3);
	loc2 = (nstcall = 0, F887_4726(Current));
	RTHOOK(4);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,682,919,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		Result = RTLNS(typres0.id, 682, _OBJSIZ_1_1_0_2_0_0_0_0_);
	}
	(nstcall = -1, F683_3906(RTCW(Result), (EIF_CHARACTER_8) ' ', ((EIF_INTEGER_32) 1L), loc2));
	for (;;) {
		RTHOOK(5);
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		RTHOOK(6);
		tc1 = (nstcall = 0, F887_4701(Current, loc1));
		(nstcall = 1, F683_3930(RTCW(Result), tc1, loc1));
		RTHOOK(7);
		loc1++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("same_count", EX_POST);
		ti4_1 = (nstcall = 1, F683_3918(RTCW(Result)));
		if ((EIF_BOOLEAN)(ti4_1 == (nstcall = 0, F887_4726(Current)))) {
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

/* {TUPLE}.double_arrayed */
EIF_REFERENCE F887_4800 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("double_arrayed", 886, Current, 2, 0, 11363);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("convertible", EX_PRE);
		RTTE((nstcall = 0, F887_4794(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(3);
	loc2 = (nstcall = 0, F887_4726(Current));
	RTHOOK(4);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,687,913,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		Result = RTLNS(typres0.id, 687, _OBJSIZ_1_1_0_2_0_0_0_0_);
	}
	(nstcall = -1, F688_3906(RTCW(Result), (EIF_REAL_64) 0.0, ((EIF_INTEGER_32) 1L), loc2));
	for (;;) {
		RTHOOK(5);
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		RTHOOK(6);
		tr8_1 = (nstcall = 0, F887_4706(Current, loc1));
		(nstcall = 1, F688_3930(RTCW(Result), tr8_1, loc1));
		RTHOOK(7);
		loc1++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("same_count", EX_POST);
		ti4_1 = (nstcall = 1, F688_3918(RTCW(Result)));
		if ((EIF_BOOLEAN)(ti4_1 == (nstcall = 0, F887_4726(Current)))) {
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

/* {TUPLE}.integer_arrayed */
EIF_REFERENCE F887_4801 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("integer_arrayed", 886, Current, 2, 0, 11364);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_uniform_integer", EX_PRE);
		RTTE((nstcall = 0, F887_4784(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(3);
	loc2 = (nstcall = 0, F887_4726(Current));
	RTHOOK(4);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,679,892,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		Result = RTLNS(typres0.id, 679, _OBJSIZ_1_1_0_2_0_0_0_0_);
	}
	(nstcall = -1, F680_3906(RTCW(Result), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 1L), loc2));
	for (;;) {
		RTHOOK(5);
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		RTHOOK(6);
		ti4_1 = (nstcall = 0, F887_4713(Current, loc1));
		(nstcall = 1, F680_3930(RTCW(Result), ti4_1, loc1));
		RTHOOK(7);
		loc1++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("same_count", EX_POST);
		ti4_1 = (nstcall = 1, F680_3918(RTCW(Result)));
		if ((EIF_BOOLEAN)(ti4_1 == (nstcall = 0, F887_4726(Current)))) {
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

/* {TUPLE}.pointer_arrayed */
EIF_REFERENCE F887_4802 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("pointer_arrayed", 886, Current, 2, 0, 11365);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_uniform_pointer", EX_PRE);
		RTTE((nstcall = 0, F887_4787(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(3);
	loc2 = (nstcall = 0, F887_4726(Current));
	RTHOOK(4);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,683,958,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		Result = RTLNS(typres0.id, 683, _OBJSIZ_1_1_0_2_0_0_0_0_);
	}
	tp1 = (nstcall = 0, F1_33(Current));
	(nstcall = -1, F684_3906(RTCW(Result), tp1, ((EIF_INTEGER_32) 1L), loc2));
	for (;;) {
		RTHOOK(5);
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		RTHOOK(6);
		tp1 = (nstcall = 0, F887_4716(Current, loc1));
		(nstcall = 1, F684_3930(RTCW(Result), tp1, loc1));
		RTHOOK(7);
		loc1++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("same_count", EX_POST);
		ti4_1 = (nstcall = 1, F684_3918(RTCW(Result)));
		if ((EIF_BOOLEAN)(ti4_1 == (nstcall = 0, F887_4726(Current)))) {
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

/* {TUPLE}.real_arrayed */
EIF_REFERENCE F887_4803 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REAL_32 tr4_1;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("real_arrayed", 886, Current, 2, 0, 11366);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("convertible", EX_PRE);
		RTTE((nstcall = 0, F887_4795(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(3);
	loc2 = (nstcall = 0, F887_4726(Current));
	RTHOOK(4);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,686,910,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		Result = RTLNS(typres0.id, 686, _OBJSIZ_1_1_0_2_0_0_0_0_);
	}
	(nstcall = -1, F687_3906(RTCW(Result), (EIF_REAL_32) 0.0, ((EIF_INTEGER_32) 1L), loc2));
	for (;;) {
		RTHOOK(5);
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		RTHOOK(6);
		tr4_1 = (nstcall = 0, F887_4718(Current, loc1));
		(nstcall = 1, F687_3930(RTCW(Result), tr4_1, loc1));
		RTHOOK(7);
		loc1++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("same_count", EX_POST);
		ti4_1 = (nstcall = 1, F687_3918(RTCW(Result)));
		if ((EIF_BOOLEAN)(ti4_1 == (nstcall = 0, F887_4726(Current)))) {
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

/* {TUPLE}.string_arrayed */
EIF_REFERENCE F887_4804 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,loc3);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("string_arrayed", 886, Current, 3, 0, 11367);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(2);
	loc2 = (nstcall = 0, F887_4726(Current));
	RTHOOK(3);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,678,969,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		Result = RTLNS(typres0.id, 678, _OBJSIZ_1_1_0_2_0_0_0_0_);
	}
	(nstcall = -1, F679_3906(RTCW(Result), NULL, ((EIF_INTEGER_32) 1L), loc2));
	for (;;) {
		RTHOOK(4);
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		RTHOOK(5);
		tr1 = (nstcall = 0, F887_4697(Current, loc1));
		loc3 = RTCCL(tr1);
		loc3 = RTRV(eif_new_type(969, 0x01),loc3);
		if ((loc3) && RTS_OS (Current, loc3)) loc3 = (EIF_REFERENCE) 0;
		if (EIF_TEST(loc3)) {
			RTHOOK(6);
			(nstcall = 1, F679_3930(RTCW(Result), loc3, loc1));
		}
		RTHOOK(7);
		loc1++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("same_count", EX_POST);
		ti4_1 = (nstcall = 1, F679_3918(RTCW(Result)));
		if ((EIF_BOOLEAN)(ti4_1 == (nstcall = 0, F887_4726(Current)))) {
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

/* {TUPLE}.correct_mismatch */
void F887_4805 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc4);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc3);
	RTLIU(5);
	
	RTEAA("correct_mismatch", 886, Current, 4, 0, 11368);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTOUCR(12,(nstcall = 0, F822_4279), (Current));
	tr2 = RTOUCR(13,(nstcall = 0, F887_4825), (Current));
	tr2 = (nstcall = 1, F844_4467(RTCW(tr1), tr2));
	loc4 = RTCCL(tr2);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,759,0xFF01,0,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		loc4 = RTRV(typres0,loc4);
	}
	if (EIF_TEST(loc4)) {
		RTHOOK(2);
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		RTHOOK(3);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3396[Dtype(loc4)-759])(loc4));
		loc2 = (EIF_INTEGER_32) ti4_1;
		for (;;) {
			RTHOOK(4);
			if ((EIF_BOOLEAN) (loc1 > loc2)) break;
			RTHOOK(5);
			tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R3211[Dtype(loc4)-677])(loc4, (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L))));
			loc3 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(6);
			tr1 = RTCCL(loc3);
			if ((nstcall = 0, F887_4725(Current, tr1, loc1))) {
				RTHOOK(7);
				tr1 = RTCCL(loc3);
				(nstcall = 0, F887_4730(Current, tr1, loc1));
			} else {
				RTHOOK(8);
				(nstcall = 0, F822_4278(Current));
			}
			RTHOOK(9);
			loc1++;
		}
	} else {
		RTHOOK(10);
		(nstcall = 0, F822_4278(Current));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTEE;
}

/* {TUPLE}.item_code */
EIF_NATURAL_8 F887_4806 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("item_code", 886, Current, 0, 1, 11369);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F887_4724(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	Result = (EIF_NATURAL_8) eif_builtin_TUPLE_item_code__i4_u1 (Current, arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.area_name */

EIF_REFERENCE F887_4825 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (13,RTMS_EX_H("area",4,1634887009));
}

/* {TUPLE}.is_tuple_uniform */
EIF_BOOLEAN F887_4826 (EIF_REFERENCE Current, EIF_NATURAL_8 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_8 loc3 = (EIF_NATURAL_8) 0;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_tuple_uniform", 886, Current, 3, 1, 11389);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(2);
	if ((EIF_BOOLEAN) ((nstcall = 0, F887_4726(Current)) > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(3);
		loc2 = (nstcall = 0, F887_4726(Current));
		RTHOOK(4);
		if ((EIF_BOOLEAN)(arg1 == ((EIF_NATURAL_8) 255U))) {
			RTHOOK(5);
			loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
			RTHOOK(6);
			loc3 = (nstcall = 0, F887_4806(Current, ((EIF_INTEGER_32) 1L)));
		} else {
			RTHOOK(7);
			loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			RTHOOK(8);
			loc3 = (EIF_NATURAL_8) arg1;
		}
		for (;;) {
			RTHOOK(9);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 > loc2) || (EIF_BOOLEAN) !Result)) break;
			RTHOOK(10);
			tu1_1 = (nstcall = 0, F887_4806(Current, loc1));
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc3 == tu1_1);
			RTHOOK(11);
			loc1++;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.internal_primes */
static EIF_REFERENCE F887_4827_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(11)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("internal_primes", 886, Current, 0, 0, 11390);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(564, 0x01).id, 564, _OBJSIZ_0_1_0_1_0_0_0_0_);
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

EIF_REFERENCE F887_4827 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(11,F887_4827_body,(Current));
}

/* {TUPLE}.set_object_comparison */
void F887_4828 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_object_comparison", 886, Current, 0, 1, 11391);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	eif_builtin_TUPLE_set_object_comparison__b_ (Current, arg1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(1);
		RTCT("object_comparison_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F887_4719(Current)) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

void EIF_Minit219 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
