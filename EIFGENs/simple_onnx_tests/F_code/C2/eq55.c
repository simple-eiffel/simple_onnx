/*
 * Code for class EQA_TEST_SET
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "eq55.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EQA_TEST_SET}.default_create */
void F76_984 (EIF_REFERENCE Current)
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
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(11);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,loc5);
	RTLR(4,tr2);
	RTLR(5,loc4);
	RTLR(6,loc6);
	RTLR(7,loc7);
	RTLR(8,loc2);
	RTLR(9,tr3);
	RTLR(10,loc3);
	RTLIU(11);
	
	RTEAA("default_create", 75, Current, 7, 0, 1046);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNSMART(eif_new_type(47, 1).id);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = (nstcall = 0, F76_999(Current));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	loc1 = RTLNS(eif_new_type(227, 0x01).id, 227, _OBJSIZ_0_0_0_1_0_0_0_0_);
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr2 = RTOUCR(42,(nstcall = 0, F76_1002), (Current));
	tr2 = (nstcall = 1, F48_710(RTCW(tr1), tr2));
	loc5 = tr2;
	if (EIF_TEST(loc5)) {
		RTHOOK(5);
		loc4 = RTLNS(eif_new_type(854, 0x01).id, 854, _OBJSIZ_2_1_0_0_0_0_0_0_);
		(nstcall = -1, F855_4607(RTCW(loc4), loc5));
	} else {
		RTHOOK(6);
		tb1 = '\0';
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tr2 = RTOUCR(4,(nstcall = 0, F76_1001), (Current));
		tr2 = (nstcall = 1, F48_710(RTCW(tr1), tr2));
		loc6 = tr2;
		if (EIF_TEST(loc6)) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			tr2 = RTOUCR(3,(nstcall = 0, F76_1000), (Current));
			tr2 = (nstcall = 1, F48_710(RTCW(tr1), tr2));
			loc7 = tr2;
			tb1 = EIF_TEST(loc7);
		}
		if (tb1) {
			RTHOOK(7);
			loc2 = RTLNS(eif_new_type(854, 0x01).id, 854, _OBJSIZ_2_1_0_0_0_0_0_0_);
			(nstcall = -1, F855_4607(RTCW(loc2), loc6));
			RTHOOK(8);
			tr1 = (nstcall = 1, F855_4634(RTCW(loc2), loc7));
			loc4 = (EIF_REFERENCE) tr1;
			RTHOOK(9);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			tr2 = (nstcall = 1, F855_4646(RTCW(loc4)));
			tr3 = RTOUCR(42,(nstcall = 0, F76_1002), (Current));
			(nstcall = 1, F48_717(RTCW(tr1), tr2, tr3));
		}
	}
	RTHOOK(10);
	if ((EIF_BOOLEAN)(loc4 != NULL)) {
		RTHOOK(11);
		loc3 = RTLNS(eif_new_type(223, 0x01).id, 223, _OBJSIZ_3_0_0_1_0_2_0_0_);
		(nstcall = -1, F224_2983(RTCW(loc3), loc4));
		RTHOOK(12);
		tb1 = (nstcall = 1, F224_3006(RTCW(loc3)));
		if ((EIF_BOOLEAN) !tb1) {
			RTHOOK(13);
			(nstcall = 1, F224_2986(RTCW(loc3)));
		} else {
			RTHOOK(14);
			(nstcall = 1, F224_3011(RTCW(loc3)));
		}
		RTHOOK(15);
		tr1 = RTMS32_EX_H("t\000\000\000e\000\000\000s\000\000\000t\000\000\000i\000\000\000n\000\000\000g\000\000\000_\000\000\000d\000\000\000i\000\000\000r\000\000\000e\000\000\000c\000\000\000t\000\000\000o\000\000\000r\000\000\000y\000\000\000_\000\000\000e\000\000\000x\000\000\000i\000\000\000s\000\000\000t\000\000\000s\000\000\000 \000\000\000",25,1829787168);
		tr2 = (nstcall = 1, F855_4646(RTCW(loc4)));
		tr2 = (nstcall = 1, F973_6360(tr1, tr2));
		tb1 = (nstcall = 1, F224_3006(RTCW(loc3)));
		(nstcall = 0, F76_993(Current, tr2, tb1));
	}
	RTHOOK(16);
	(nstcall = 0, F76_995(Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(17);
		RTCT("prepared", EX_POST);
		if ((nstcall = 0, F76_989(Current))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(18);
		RTCT("not_failed", EX_POST);
		if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_3_1_)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(19);
	RTLE;
	RTEE;
}

/* {EQA_TEST_SET}.asserter */
EIF_REFERENCE F76_985 (EIF_REFERENCE Current)
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
	
	RTEAA("asserter", 75, Current, 1, 0, 1047);
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
		Result = (nstcall = 0, F76_998(Current));
		RTHOOK(4);
		RTAR(Current, Result);
		*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) Result;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("asserter_attached", EX_POST);
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

/* {EQA_TEST_SET}.file_system */
EIF_REFERENCE F76_986 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {EQA_TEST_SET}.environment */
EIF_REFERENCE F76_987 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {EQA_TEST_SET}.current_test_name */
EIF_REFERENCE F76_988 (EIF_REFERENCE Current)
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
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,Result);
	RTLIU(5);
	
	RTEAA("current_test_name", 75, Current, 1, 0, 1050);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr2 = RTOUCR(3,(nstcall = 0, F76_1000), (Current));
	tr2 = (nstcall = 1, F48_710(RTCW(tr1), tr2));
	loc1 = tr2;
	if (EIF_TEST(loc1)) {
		RTHOOK(2);
		Result = (EIF_REFERENCE) loc1;
	} else {
		RTHOOK(3);
		Result = RTLNS(eif_new_type(971, 0x01).id, 971, _OBJSIZ_1_0_0_4_0_0_0_0_);
		(nstcall = -1, F965_5930(RTCW(Result)));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {EQA_TEST_SET}.is_prepared */
EIF_BOOLEAN F76_989 (EIF_REFERENCE Current)
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
	
	RTEAA("is_prepared", 75, Current, 0, 0, 1051);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {EQA_TEST_SET}.has_failed */
EIF_BOOLEAN F76_990 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_3_1_);
}


/* {EQA_TEST_SET}.set_asserter */
void F76_991 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("set_asserter", 75, Current, 0, 1, 1053);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("asserter_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F76_985(Current)) == arg1)) {
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

/* {EQA_TEST_SET}.clean */
void F76_992 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("clean", 75, Current, 0, 1, 1033);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_3_1_) = (EIF_BOOLEAN) arg1;
	RTHOOK(2);
	(nstcall = 0, F76_996(Current));
	RTHOOK(3);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_3_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("not_failed", EX_POST);
		if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_3_1_)) {
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

/* {EQA_TEST_SET}.assert_32 */
void F76_993 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_BOOLEAN arg2)
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
	
	RTEAA("assert_32", 75, Current, 0, 2, 1034);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_tag_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 0, F76_985(Current));
	(nstcall = 1, F67_943(RTCW(tr1), arg1, arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {EQA_TEST_SET}.assert */
void F76_994 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_BOOLEAN arg2)
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
	
	RTEAA("assert", 75, Current, 0, 2, 1035);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_tag_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 0, F76_985(Current));
	(nstcall = 1, F67_943(RTCW(tr1), arg1, arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {EQA_TEST_SET}.on_prepare */
void F76_995 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("on_prepare", 75, Current, 0, 0, 1036);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		RTHOOK(1);
		RTCT("prepared", EX_POST);
		if ((nstcall = 0, F76_989(Current))) {
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

/* {EQA_TEST_SET}.on_clean */
void F76_996 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("on_clean", 75, Current, 0, 0, 1037);
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

/* {EQA_TEST_SET}.internal_asserter */
EIF_REFERENCE F76_997 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {EQA_TEST_SET}.new_asserter */
EIF_REFERENCE F76_998 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Result);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("new_asserter", 75, Current, 0, 0, 1039);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNS(eif_new_type(66, 0x01).id, 66, _OBJSIZ_0_1_0_0_0_0_0_0_);
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

/* {EQA_TEST_SET}.new_file_system */
EIF_REFERENCE F76_999 (EIF_REFERENCE Current)
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
	RTLR(2,Result);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("new_file_system", 75, Current, 0, 0, 1040);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNS(eif_new_type(23, 0x01).id, 23, _OBJSIZ_1_0_0_0_0_0_0_0_);
	tr1 = (nstcall = 0, F76_985(Current));
	(nstcall = -1, F24_310(RTCW(Result), tr1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_attached", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("result_valid", EX_POST);
		tr1 = *(EIF_REFERENCE *)(RTCW(Result));
		tr2 = (nstcall = 0, F76_985(Current));
		if ((EIF_BOOLEAN)(tr1 == tr2)) {
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

/* {EQA_TEST_SET}.test_name_key */

EIF_REFERENCE F76_1000 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (3,RTMS_EX_H("TEST_NAME",9,979914053));
}

/* {EQA_TEST_SET}.testing_directory_key */

EIF_REFERENCE F76_1001 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (4,RTMS_EX_H("TESTING_DIRECTORY",17,639283033));
}

/* {EQA_TEST_SET}.target_path_key */

EIF_REFERENCE F76_1002 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (42,RTMS_EX_H("TARGET_PATH",11,941446728));
}

/* {EQA_TEST_SET}.source_path_key */

EIF_REFERENCE F76_1003 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (43,RTMS_EX_H("SOURCE_PATH",11,1017792584));
}

/* {EQA_TEST_SET}._invariant */
void F76_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	RTEAINV(l_feature_name, 54, Current, 0, 0);
	RTIT("internal_file_system_valid", Current);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = *(EIF_REFERENCE *)(RTCW(tr1));
	tr1 = (nstcall = 0, F76_985(Current));
	if ((EIF_BOOLEAN)(tr2 == tr1)) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit55 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
