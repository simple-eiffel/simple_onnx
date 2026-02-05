/*
 * Code for class EQA_ENVIRONMENT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "eq33.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EQA_ENVIRONMENT}.item */
EIF_REFERENCE F48_710 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("item", 47, Current, 0, 1, 810);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_key_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTOUCR(32,(nstcall = 0, F48_716), (Current));
	(nstcall = 1, F844_4503(RTCW(tr1), arg1));
	RTHOOK(3);
	tr1 = RTOUCR(32,(nstcall = 0, F48_716), (Current));
	tb1 = (nstcall = 1, F844_4493(RTCW(tr1)));
	if (tb1) {
		RTHOOK(4);
		tr1 = *(EIF_REFERENCE *)(RTCV(RTOUCR(32,(nstcall = 0, F48_716), (Current))));
		Result = (EIF_REFERENCE) tr1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {EQA_ENVIRONMENT}.item_attached */
EIF_REFERENCE F48_711 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc1);
	RTLR(3,Current);
	RTLR(4,tr1);
	RTLR(5,Result);
	RTLR(6,tr2);
	RTLIU(7);
	
	RTEAA("item_attached", 47, Current, 1, 2, 811);
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
		RTCT("an_asserter_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = (nstcall = 0, F48_710(Current, arg1));
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTHOOK(4);
		Result = (EIF_REFERENCE) loc1;
	} else {
		RTHOOK(5);
		tr1 = (nstcall = 1, F965_5989(RTCW(arg1)));
		tr2 = RTMS32_EX_H(" \000\000\000n\000\000\000o\000\000\000t\000\000\000 \000\000\000d\000\000\000e\000\000\000f\000\000\000i\000\000\000n\000\000\000e\000\000\000d\000\000\000",12,1578321764);
		tr2 = (nstcall = 1, F973_6360(RTCW(tr1), tr2));
		(nstcall = 1, F67_943(RTCW(arg2), tr2, (EIF_BOOLEAN) 0));
		RTHOOK(6);
		Result = RTLNS(eif_new_type(971, 0x01).id, 971, _OBJSIZ_1_0_0_4_0_0_0_0_);
		(nstcall = -1, F965_5930(RTCW(Result)));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("result_attached", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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
	return Result;
}

/* {EQA_ENVIRONMENT}.item_not_empty */
EIF_REFERENCE F48_712 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
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
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,Result);
	RTLR(4,tr1);
	RTLR(5,tr2);
	RTLIU(6);
	
	RTEAA("item_not_empty", 47, Current, 0, 2, 812);
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
		RTCT("an_asserter_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	Result = (nstcall = 0, F48_711(Current, arg1, arg2));
	RTHOOK(4);
	tr1 = (nstcall = 1, F965_5989(RTCW(arg1)));
	tr2 = RTMS32_EX_H(" \000\000\000i\000\000\000s\000\000\000 \000\000\000e\000\000\000m\000\000\000p\000\000\000t\000\000\000y\000\000\000",9,1563366009);
	tr2 = (nstcall = 1, F973_6360(RTCW(tr1), tr2));
	tb1 = (nstcall = 1, F972_6297(RTCW(Result)));
	(nstcall = 1, F67_943(RTCW(arg2), tr2, (EIF_BOOLEAN) !tb1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {EQA_ENVIRONMENT}.get */
EIF_REFERENCE F48_713 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,Result);
	RTLIU(5);
	
	RTEAA("get", 47, Current, 1, 1, 797);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_key_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 0, F48_710(Current, arg1));
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTHOOK(3);
		Result = RTLNS(eif_new_type(968, 0x01).id, 968, _OBJSIZ_1_0_0_4_0_0_0_0_);
		tr1 = (nstcall = 1, F965_5986(loc1));
		(nstcall = -1, F968_6062(RTCW(Result), tr1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {EQA_ENVIRONMENT}.get_attached */
EIF_REFERENCE F48_714 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,Result);
	RTLIU(6);
	
	RTEAA("get_attached", 47, Current, 0, 2, 798);
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
		RTCT("an_asserter_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	Result = RTLNS(eif_new_type(968, 0x01).id, 968, _OBJSIZ_1_0_0_4_0_0_0_0_);
	tr1 = (nstcall = 0, F48_711(Current, arg1, arg2));
	tr2 = (nstcall = 1, F965_5986(RTCW(tr1)));
	(nstcall = -1, F968_6062(RTCW(Result), tr2));
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

/* {EQA_ENVIRONMENT}.get_not_empty */
EIF_REFERENCE F48_715 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,Result);
	RTLIU(6);
	
	RTEAA("get_not_empty", 47, Current, 0, 2, 799);
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
		RTCT("an_asserter_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	Result = RTLNS(eif_new_type(968, 0x01).id, 968, _OBJSIZ_1_0_0_4_0_0_0_0_);
	tr1 = (nstcall = 0, F48_712(Current, arg1, arg2));
	tr2 = (nstcall = 1, F965_5986(RTCW(tr1)));
	(nstcall = -1, F968_6062(RTCW(Result), tr2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {EQA_ENVIRONMENT}.table */
static EIF_REFERENCE F48_716_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(32)

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("table", 47, Current, 0, 0, 800);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,850,0xFF01,971,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 850, _OBJSIZ_7_4_0_7_0_0_0_0_);
	}
	(nstcall = -1, F844_4461(RTCW(tr1), ((EIF_INTEGER_32) 10L)));
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

EIF_REFERENCE F48_716 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(32,F48_716_body,(Current));
}

/* {EQA_ENVIRONMENT}.put */
void F48_717 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc2);
	RTLR(3,loc1);
	RTLR(4,Current);
	RTLR(5,tr1);
	RTLR(6,loc3);
	RTLIU(7);
	
	RTEAA("put", 47, Current, 3, 2, 801);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_value_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_key_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc2 = arg1;
	loc2 = RTRV(eif_new_type(971, 0x01),loc2);
	if (EIF_TEST(loc2)) {
		RTHOOK(4);
		loc1 = (EIF_REFERENCE) loc2;
	} else {
		RTHOOK(5);
		loc1 = RTLNS(eif_new_type(971, 0x01).id, 971, _OBJSIZ_1_0_0_4_0_0_0_0_);
		(nstcall = -1, F972_6279(RTCW(loc1), arg1));
	}
	RTHOOK(6);
	tr1 = RTOUCR(32,(nstcall = 0, F48_716), (Current));
	(nstcall = 1, F844_4508(RTCW(tr1), loc1, arg2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("set", EX_POST);
		tb1 = '\0';
		tr1 = (nstcall = 0, F48_710(Current, arg2));
		loc3 = tr1;
		if (EIF_TEST(loc3)) {
			tb2 = (nstcall = 1, F965_5975(RTCW(arg1), loc3));
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
	RTHOOK(8);
	RTLE;
	RTEE;
}

/* {EQA_ENVIRONMENT}.reset */
void F48_718 (EIF_REFERENCE Current)
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
	
	RTEAA("reset", 47, Current, 0, 0, 802);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTOUCR(32,(nstcall = 0, F48_716), (Current));
	(nstcall = 1, F844_4515(RTCW(tr1)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {EQA_ENVIRONMENT}.is_identifier_char */
EIF_BOOLEAN F48_719 (EIF_REFERENCE Current, EIF_CHARACTER_32 arg1)
{
	GTCX
	RTEX;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_identifier_char", 47, Current, 0, 1, 803);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = '\01';
	tb1 = '\01';
	tb2 = '\01';
	tb3 = '\0';
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'A';
	if ((EIF_BOOLEAN) (arg1 >= tw1)) {
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'Z';
		tb3 = (EIF_BOOLEAN) (arg1 <= tw1);
	}
	if (!tb3) {
		tb3 = '\0';
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'a';
		if ((EIF_BOOLEAN) (arg1 >= tw1)) {
			tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'z';
			tb3 = (EIF_BOOLEAN) (arg1 <= tw1);
		}
		tb2 = tb3;
	}
	if (!tb2) {
		tb2 = '\0';
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '0';
		if ((EIF_BOOLEAN) (arg1 >= tw1)) {
			tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '9';
			tb2 = (EIF_BOOLEAN) (arg1 <= tw1);
		}
		tb1 = tb2;
	}
	if (!tb1) {
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '_';
		Result = (EIF_BOOLEAN)(arg1 == tw1);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {EQA_ENVIRONMENT}.substitute_recursive */
EIF_REFERENCE F48_720 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc2 = (EIF_BOOLEAN) 0;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Result);
	RTLR(2,loc1);
	RTLR(3,Current);
	RTLIU(4);
	
	RTEAA("substitute_recursive", 47, Current, 2, 1, 804);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = RTLNS(eif_new_type(972, 0x01).id, 972, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F973_6302(RTCW(Result), arg1));
	for (;;) {
		RTHOOK(3);
		tb1 = '\01';
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '$';
		tb2 = (nstcall = 1, F971_6260(RTCW(Result), tw1));
		if (!(EIF_BOOLEAN) !tb2) {
			tb1 = loc2;
		}
		if (tb1) break;
		RTHOOK(4);
		loc1 = (nstcall = 0, F48_721(Current, Result));
		RTHOOK(5);
		tb2 = (nstcall = 1, F971_6253(RTCW(loc1), Result));
		if (tb2) {
			RTHOOK(6);
			loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		} else {
			RTHOOK(7);
			loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			RTHOOK(8);
			Result = (EIF_REFERENCE) loc1;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("not_void", EX_POST);
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

/* {EQA_ENVIRONMENT}.substitute */
EIF_REFERENCE F48_721 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_32 loc4 = (EIF_CHARACTER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc6 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc7 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLR(3,loc5);
	RTLR(4,tr1);
	RTLR(5,loc8);
	RTLIU(6);
	
	RTEAA("substitute", 47, Current, 8, 1, 805);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("line_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = RTLNS(eif_new_type(972, 0x01).id, 972, _OBJSIZ_1_1_0_3_0_0_0_0_);
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4580[Dtype(RTCW(arg1))-968])(arg1));
	(nstcall = -1, F971_6226(RTCW(Result), ti4_1));
	RTHOOK(3);
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4580[Dtype(RTCW(arg1))-968])(arg1));
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(5);
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		RTHOOK(6);
		tw1 = (nstcall = 1, (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4544[Dtype(RTCW(arg1))-968])(arg1, loc1));
		loc4 = (EIF_CHARACTER_32) tw1;
		RTHOOK(7);
		if ((EIF_BOOLEAN)(loc4 == (EIF_CHARACTER_32) 36U)) {
			RTHOOK(8);
			if (loc6) {
				RTHOOK(9);
				loc6 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				RTHOOK(10);
				(nstcall = 1, F973_6355(RTCW(Result), loc4));
			} else {
				RTHOOK(11);
				loc6 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			}
		} else {
			RTHOOK(12);
			if (loc6) {
				RTHOOK(13);
				if ((EIF_BOOLEAN)(loc4 == (EIF_CHARACTER_32) 40U)) {
					RTHOOK(14);
					loc7 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				} else {
					RTHOOK(15);
					loc3 = (EIF_INTEGER_32) loc1;
					for (;;) {
						RTHOOK(16);
						tb1 = '\01';
						if (!(EIF_BOOLEAN) (loc1 > loc2)) {
							tw1 = (nstcall = 1, (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4544[Dtype(RTCW(arg1))-968])(arg1, loc1));
							tb1 = (EIF_BOOLEAN) !(nstcall = 0, F48_719(Current, tw1));
						}
						if (tb1) break;
						RTHOOK(17);
						loc1++;
					}
					RTHOOK(18);
					loc1--;
					RTHOOK(19);
					tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4621[Dtype(RTCW(arg1))-968])(arg1, loc3, loc1));
					loc5 = (EIF_REFERENCE) tr1;
					RTHOOK(20);
					tr1 = (nstcall = 0, F48_710(Current, loc5));
					loc8 = tr1;
					if (EIF_TEST(loc8)) {
						RTHOOK(21);
						(nstcall = 1, F973_6341(RTCW(Result), loc8));
					} else {
						RTHOOK(22);
						(nstcall = 1, F973_6355(RTCW(Result), (EIF_CHARACTER_32) 36U));
						RTHOOK(23);
						(nstcall = 1, F973_6340(RTCW(Result), loc5));
					}
					RTHOOK(24);
					if (loc7) {
						RTHOOK(25);
						loc7 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
						RTHOOK(26);
						loc1++;
					}
					RTHOOK(27);
					loc6 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				}
			} else {
				RTHOOK(28);
				(nstcall = 1, F973_6355(RTCW(Result), loc4));
			}
		}
		RTHOOK(29);
		loc1++;
	}
	RTHOOK(30);
	if (loc6) {
		RTHOOK(31);
		(nstcall = 1, F973_6355(RTCW(Result), loc4));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(32);
	RTLE;
	RTEE;
	return Result;
}

void EIF_Minit33 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
