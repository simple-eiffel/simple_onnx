/*
 * Code for class TEST_APP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "te34.h"
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

/* {TEST_APP}.make */
void F49_726 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLIU(5);
	
	RTEAA("make", 48, Current, 1, 0, 813);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = RTLNS(eif_new_type(77, 0x01).id, 77, _OBJSIZ_3_2_0_0_0_0_0_0_);
	(nstcall = -1, F76_984(RTCW(loc1)));
	RTHOOK(2);
	tr1 = RTOUCR(0,(nstcall = 0, F1_24), (Current));
	tr2 = RTMS_EX_H("simple_onnx test runner\012",24,679916042);
	(nstcall = 1, F44_479(RTCW(tr1), tr2));
	RTHOOK(3);
	tr1 = RTOUCR(0,(nstcall = 0, F1_24), (Current));
	tr2 = RTMS_EX_H("======================\012\012",24,326537994);
	(nstcall = 1, F44_479(RTCW(tr1), tr2));
	RTHOOK(4);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(5);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(6);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,886,0xFF01,77,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = loc1;
	RTAR(tr1,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,960,0xFF01,0xFFF9,0,886,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2= RTLNRF(typres0.id, (EIF_POINTER) __A57_116, (EIF_POINTER) _A57_116, (EIF_POINTER)(F78_1047),tr1, 1, 0);
	}
	tr3 = RTMS_EX_H("test_simple_onnx_make",21,1747701093);
	(nstcall = 0, F49_729(Current, tr2, tr3));
	RTHOOK(7);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,886,0xFF01,77,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = loc1;
	RTAR(tr1,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,960,0xFF01,0xFFF9,0,886,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2= RTLNRF(typres0.id, (EIF_POINTER) __A57_117, (EIF_POINTER) _A57_117, (EIF_POINTER)(F78_1048),tr1, 1, 0);
	}
	tr3 = RTMS_EX_H("test_available_providers",24,260663155);
	(nstcall = 0, F49_729(Current, tr2, tr3));
	RTHOOK(8);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,886,0xFF01,77,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = loc1;
	RTAR(tr1,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,960,0xFF01,0xFFF9,0,886,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2= RTLNRF(typres0.id, (EIF_POINTER) __A57_118, (EIF_POINTER) _A57_118, (EIF_POINTER)(F78_1049),tr1, 1, 0);
	}
	tr3 = RTMS_EX_H("test_version_info",17,87621743);
	(nstcall = 0, F49_729(Current, tr2, tr3));
	RTHOOK(9);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,886,0xFF01,77,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = loc1;
	RTAR(tr1,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,960,0xFF01,0xFFF9,0,886,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2= RTLNRF(typres0.id, (EIF_POINTER) __A57_119, (EIF_POINTER) _A57_119, (EIF_POINTER)(F78_1050),tr1, 1, 0);
	}
	tr3 = RTMS_EX_H("test_create_float32_tensor",26,807134578);
	(nstcall = 0, F49_729(Current, tr2, tr3));
	RTHOOK(10);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,886,0xFF01,77,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = loc1;
	RTAR(tr1,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,960,0xFF01,0xFFF9,0,886,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2= RTLNRF(typres0.id, (EIF_POINTER) __A57_122, (EIF_POINTER) _A57_122, (EIF_POINTER)(F78_1053),tr1, 1, 0);
	}
	tr3 = RTMS_EX_H("test_shape_creation",19,1090527598);
	(nstcall = 0, F49_729(Current, tr2, tr3));
	RTHOOK(11);
	tr1 = RTOUCR(0,(nstcall = 0, F1_24), (Current));
	tr2 = RTMS_EX_H("\012======================\012",24,372128266);
	(nstcall = 1, F44_479(RTCW(tr1), tr2));
	RTHOOK(12);
	tr1 = RTOUCR(0,(nstcall = 0, F1_24), (Current));
	tr2 = RTMS_EX_H("Results: ",9,501397536);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_);
	tr3 = eif_out__i4_s1(ti4_1);
	tr3 = (nstcall = 1, F970_6192(tr2, tr3));
	tr2 = RTMS_EX_H(" passed, ",9,1123470880);
	tr2 = (nstcall = 1, F970_6192(RTCW(tr3), tr2));
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_1_);
	tr3 = eif_out__i4_s1(ti4_1);
	tr3 = (nstcall = 1, F970_6192(RTCW(tr2), tr3));
	tr2 = RTMS_EX_H(" failed\012",8,1816238602);
	tr2 = (nstcall = 1, F970_6192(RTCW(tr3), tr2));
	(nstcall = 1, F44_479(RTCW(tr1), tr2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTLE;
	RTEE;
}

/* {TEST_APP}.passed */
EIF_INTEGER_32 F49_727 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_);
}


/* {TEST_APP}.failed */
EIF_INTEGER_32 F49_728 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_1_);
}


/* {TEST_APP}.run_test */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F49_729 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	RTED;
	EIF_BOOLEAN EIF_VOLATILE loc1 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	RTS_SDX;
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr2 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr3 = NULL;
	RTSN;
	RTDA;
	RTLD;
	RTXD;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,arg2);
	RTLR(5,tr3);
	RTLR(6,saved_except);
	RTLIU(7);
	RTXSLS;
	
	RTEAA("run_test", 48, Current, 1, 2, 816);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTE_T
	RTHOOK(1);
	if ((EIF_BOOLEAN) !loc1) {
		RTHOOK(2);
		(FUNCTION_CAST(void, (EIF_POINTER, EIF_REFERENCE)) *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_4_2_0_3_0_0_))(
			*(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_4_2_0_3_0_1_),
			*(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_));
		RTHOOK(3);
		tr1 = RTOUCR(0,(nstcall = 0, F1_24), (Current));
		tr2 = RTMS_EX_H("  PASS: ",8,489410592);
		tr3 = (nstcall = 1, F970_6192(tr2, arg2));
		tr2 = RTMS_EX_H("\012",1,10);
		tr2 = (nstcall = 1, F970_6192(RTCW(tr3), tr2));
		(nstcall = 1, F44_479(RTCW(tr1), tr2));
		RTHOOK(4);
		(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_))++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTE_E
	RTXSC;
	RTS_SRR
	RTHOOK(5);
	tr1 = RTOUCR(0,(nstcall = 0, F1_24), (Current));
	tr2 = RTMS_EX_H("  FAIL: ",8,301518880);
	tr3 = (nstcall = 1, F970_6192(tr2, arg2));
	tr2 = RTMS_EX_H("\012",1,10);
	tr2 = (nstcall = 1, F970_6192(RTCW(tr3), tr2));
	(nstcall = 1, F44_479(RTCW(tr1), tr2));
	RTHOOK(6);
	(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_1_))++;
	RTHOOK(7);
	loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(8);
	RTER;
	/* NOTREACHED */
	RTE_EE
	RTHOOK(9);
	RTEOK;
	RTLE;
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

void EIF_Minit34 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
