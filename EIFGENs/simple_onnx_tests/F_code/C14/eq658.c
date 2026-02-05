/*
 * Code for class EQA_TEST_EVALUATOR [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "eq658.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EQA_TEST_EVALUATOR}.buffer */
static EIF_REFERENCE F229_3157_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(40)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("buffer", 228, Current, 0, 0, 3200);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(646, 0x01).id, 646, _OBJSIZ_6_7_2_6_1_1_2_1_);
	(nstcall = -1, F647_3828(RTCW(tr1), ((EIF_INTEGER_32) 2048L)));
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

EIF_REFERENCE F229_3157 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(40,F229_3157_body,(Current));
}

/* {EQA_TEST_EVALUATOR}.execute */
EIF_REFERENCE F229_3158 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(13);
	RTLR(0,loc7);
	RTLR(1,Current);
	RTLR(2,loc6);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,loc2);
	RTLR(6,loc1);
	RTLR(7,loc3);
	RTLR(8,loc8);
	RTLR(9,loc4);
	RTLR(10,arg1);
	RTLR(11,loc5);
	RTLR(12,Result);
	RTLIU(13);
	
	RTEAA("execute", 228, Current, 8, 1, 3201);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc7 = (nstcall = 0, F228_3122(Current));
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(RTCV(RTOUCR(0,(nstcall = 0, F1_24), (Current))));
	loc6 = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	tr1 = RTOUCR(0,(nstcall = 0, F1_24), (Current));
	tr2 = RTOUCR(40,(nstcall = 0, F229_3157), (Current));
	(nstcall = 1, F44_475(RTCW(tr1), tr2));
	RTHOOK(4);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,886,0xFF01,0,0xFFFF};
		EIF_TYPE typres0;
		typarr0[4] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = Current;
	RTAR(tr1,Current);
	
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,961,0xFF01,0xFFF9,0,886,0xFFF8,1,0xFFFF};
		EIF_TYPE typres0;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr2= RTLNRF(typres0.id, (EIF_POINTER) __A658_271, (EIF_POINTER) _A658_271, (EIF_POINTER)(0),tr1, 1, 0);
	}
	loc2 = (EIF_REFERENCE) tr2;
	RTHOOK(5);
	loc1 = RTLNS(eif_new_type(988, 0x01).id, 988, _OBJSIZ_2_0_0_2_0_0_0_1_);
	(nstcall = -1, F989_6751(RTCW(loc1)));
	RTHOOK(6);
	loc3 = (nstcall = 0, F229_3159(Current, loc2));
	RTHOOK(7);
	tb1 = '\0';
	tb2 = (nstcall = 1, F25_329(RTCW(loc3)));
	if ((EIF_BOOLEAN) !tb2) {
		tr1 = *(EIF_REFERENCE *)(RTCW(loc2) + _REFACS_4_);
		loc8 = tr1;
		tb1 = EIF_TEST(loc8);
	}
	if (tb1) {
		
		RTHOOK(8);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,886,0xFF01,960,0xFF01,0xFFF9,1,886,0xFF01,75,0xFF04,0xFFF9,1,886,0xFF01,75,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr1 = RTLNTS(typres0.id, 3, 0);
		}
		((EIF_TYPED_VALUE *)tr1+1)->it_r = arg1;
		RTAR(tr1,arg1);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,886,0xFF01,75,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr2 = RTLNTS(typres0.id, 2, 0);
		}
		((EIF_TYPED_VALUE *)tr2+1)->it_r = loc8;
		RTAR(tr2,loc8);
		((EIF_TYPED_VALUE *)tr1+2)->it_r = tr2;
		RTAR(tr1,tr2);
		
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,960,0xFF01,0xFFF9,0,886,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr2= RTLNRF(typres0.id, (EIF_POINTER) __A315_140, (EIF_POINTER) _A315_140, (EIF_POINTER)(F961_5917),tr1, 1, 0);
		}
		loc4 = (nstcall = 0, F229_3159(Current, tr2));
		RTHOOK(9);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,886,0xFF01,75,922,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr1 = RTLNTS(typres0.id, 3, 0);
		}
		((EIF_TYPED_VALUE *)tr1+1)->it_r = loc8;
		RTAR(tr1,loc8);
		tb1 = (nstcall = 1, F25_329(RTCW(loc4)));
		((EIF_TYPED_VALUE *)tr1+2)->it_b = tb1;
		
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,960,0xFF01,0xFFF9,0,886,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr2= RTLNRF(typres0.id, (EIF_POINTER) __A55_39, (EIF_POINTER) _A55_39, (EIF_POINTER)(F76_992),tr1, 1, 0);
		}
		loc5 = (nstcall = 0, F229_3159(Current, tr2));
		RTHOOK(10);
		Result = RTLNS(eif_new_type(841, 0x01).id, 841, _OBJSIZ_6_0_0_0_0_0_0_0_);
		tr1 = RTOUCR(40,(nstcall = 0, F229_3157), (Current));
		tr2 = (nstcall = 1, F647_3834(RTCW(tr1)));
		(nstcall = -1, F842_4435(RTCW(Result), loc1, loc3, loc4, loc5, tr2));
	} else {
		RTHOOK(11);
		Result = RTLNS(eif_new_type(840, 0x01).id, 840, _OBJSIZ_4_0_0_0_0_0_0_0_);
		tr1 = RTOUCR(40,(nstcall = 0, F229_3157), (Current));
		tr2 = (nstcall = 1, F647_3834(RTCW(tr1)));
		(nstcall = -1, F841_4422(RTCW(Result), loc1, loc3, tr2));
	}
	RTHOOK(12);
	if ((EIF_BOOLEAN)(loc6 == NULL)) {
		RTHOOK(13);
		tr1 = RTOUCR(0,(nstcall = 0, F1_24), (Current));
		(nstcall = 1, F44_476(RTCW(tr1)));
	} else {
		RTHOOK(14);
		tr1 = RTOUCR(0,(nstcall = 0, F1_24), (Current));
		(nstcall = 1, F44_475(RTCW(tr1), loc6));
	}
	RTHOOK(15);
	(nstcall = 0, F228_3138(Current, loc7));
	RTHOOK(16);
	tr1 = RTOUCR(40,(nstcall = 0, F229_3157), (Current));
	(nstcall = 1, F647_3841(RTCW(tr1)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(17);
		RTCT("result_attached", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(18);
	RTLE;
	RTEE;
	return Result;
}

/* {EQA_TEST_EVALUATOR}.execute_test_stage */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
EIF_REFERENCE F229_3159 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	RTED;
	EIF_REFERENCE EIF_VOLATILE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	RTS_SDX;
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr2 = NULL;
	EIF_INTEGER_32  EIF_VOLATILE ti4_1;
	EIF_BOOLEAN  EIF_VOLATILE tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	RTXD;
	
	RTLI(9);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Result);
	RTLR(3,loc3);
	RTLR(4,Current);
	RTLR(5,tr1);
	RTLR(6,tr2);
	RTLR(7,loc2);
	RTLR(8,saved_except);
	RTLIU(9);
	RTXSLS;
	
	RTEAA("execute_test_stage", 228, Current, 3, 1, 3202);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_procedure_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_procedure_expects_not_operands", EX_PRE);
		tb1 = (nstcall = 1, F960_5886(RTCW(arg1), NULL));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTE_T
	RTHOOK(3);
	if ((EIF_BOOLEAN)(loc1 == NULL)) {
		RTHOOK(4);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4510[Dtype(RTCW(arg1))-960])(arg1, NULL));
		RTHOOK(5);
		loc1 = RTLNSMART(eif_new_type(24, 1).id);
	}
	RTHOOK(6);
	Result = (EIF_REFERENCE) loc1;
	RTVI(Current, RTAL);
	RTRS;
	RTE_E
	RTXSC;
	RTS_SRR
	RTHOOK(7);
	RTCT0("attached exception_manager.last_exception as l_exception", EX_CHECK);
	tr1 = RTOUCR(29,(nstcall = 0, F116_1465), (Current));
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R1439[Dtype(RTCW(tr1))-155])(tr1));
	loc3 = tr2;
	if (EIF_TEST(loc3)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTHOOK(8);
	tr1 = RTLNS(eif_new_type(989, 0x01).id, 989, _OBJSIZ_6_2_0_3_0_0_0_0_);
	tr2 = RTLNTY2(eif_gen_param(Dftype(Current), 1), 0x00);
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3736[Dtype(tr2)-855])(tr2));
	tr2 = (nstcall = 0, F192_2336(Current, ti4_1));
	(nstcall = -1, F990_6783(RTCW(tr1), loc3, tr2, NULL));
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(9);
	tr1 = RTLNSMART(eif_new_type(24, 1).id);
	(nstcall = -1, F25_326(RTCW(tr1), loc2));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(10);
	RTER;
	/* NOTREACHED */
	RTE_EE
	RTHOOK(11);
	RTEOK;
	RTLE;
	return Result;
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {EQA_TEST_EVALUATOR}.inline-agent#1 of execute */
EIF_REFERENCE F229_6889 (EIF_REFERENCE Current)
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
	
	RTEAA("inline-agent#1 of execute", 228, Current, 0, 0, 3199);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNSMART(eif_gen_param(Dftype(Current), 1).id);
	(nstcall = -1, F76_984(RTCW(Result)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

void EIF_Minit658 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
