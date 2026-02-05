/*
 * Code for class LIB_TESTS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "li57.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {LIB_TESTS}.test_simple_onnx_make */
void F78_1047 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Current);
	RTLIU(4);
	
	RTEAA("test_simple_onnx_make", 77, Current, 1, 0, 1110);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = RTLNS(eif_new_type(6, 0x01).id, 6, _OBJSIZ_1_0_0_0_0_0_0_0_);
	(nstcall = -1, F7_374(RTCW(loc1)));
	RTHOOK(2);
	tr1 = RTMS_EX_H("environment created",19,1120582244);
	tr2 = *(EIF_REFERENCE *)(RTCW(loc1));
	(nstcall = 0, F67_943(Current, tr1, (EIF_BOOLEAN)(tr2 != NULL)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {LIB_TESTS}.test_available_providers */
void F78_1048 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Current);
	RTLIU(4);
	
	RTEAA("test_available_providers", 77, Current, 1, 0, 1111);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = RTLNS(eif_new_type(6, 0x01).id, 6, _OBJSIZ_1_0_0_0_0_0_0_0_);
	(nstcall = -1, F7_374(RTCW(loc1)));
	RTHOOK(2);
	tr1 = RTMS_EX_H("cpu provider available",22,1730954085);
	tr2 = RTMS_EX_H("CPUExecutionProvider",20,248855666);
	tb1 = (nstcall = 1, F7_379(RTCW(loc1), tr2));
	(nstcall = 0, F67_943(Current, tr1, tb1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {LIB_TESTS}.test_version_info */
void F78_1049 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,loc2);
	RTLR(2,tr1);
	RTLR(3,Current);
	RTLIU(4);
	
	RTEAA("test_version_info", 77, Current, 2, 0, 1112);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = RTLNS(eif_new_type(6, 0x01).id, 6, _OBJSIZ_1_0_0_0_0_0_0_0_);
	(nstcall = -1, F7_374(RTCW(loc1)));
	RTHOOK(2);
	tr1 = (nstcall = 1, F7_380(RTCW(loc1)));
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	tr1 = RTMS_EX_H("version not empty",17,193342841);
	tb1 = (nstcall = 1, F567_3452(RTCW(loc2)));
	(nstcall = 0, F67_943(Current, tr1, (EIF_BOOLEAN) !tb1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {LIB_TESTS}.test_create_float32_tensor */
void F78_1050 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,loc2);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,loc3);
	RTLIU(6);
	
	RTEAA("test_create_float32_tensor", 77, Current, 3, 0, 1113);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = RTLNS(eif_new_type(6, 0x01).id, 6, _OBJSIZ_1_0_0_0_0_0_0_0_);
	(nstcall = -1, F7_374(RTCW(loc1)));
	RTHOOK(2);
	{
		static EIF_TYPE_INDEX typarr0[] = {760,892,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr2 = RTLNSP2(typres0.id,0,((EIF_INTEGER_32) 2L),sizeof(EIF_INTEGER_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr2) = 2L;
	}
	*((EIF_INTEGER_32 *)tr2+0) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+1) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 10L);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) F761_4167)(tr2);
	tr1 = (nstcall = 1, F7_384(RTCW(loc1), tr1));
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	tr1 = (nstcall = 1, F7_381(RTCW(loc1), loc2));
	loc3 = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	tr1 = RTMS_EX_H("tensor created",14,1305640292);
	(nstcall = 0, F67_943(Current, tr1, (EIF_BOOLEAN)(loc3 != NULL)));
	RTHOOK(5);
	tr1 = RTMS_EX_H("shape correct",13,728879476);
	tr2 = *(EIF_REFERENCE *)(RTCW(loc3));
	ti4_1 = (nstcall = 1, F4_346(RTCW(tr2)));
	(nstcall = 0, F67_943(Current, tr1, (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 2L))));
	RTHOOK(6);
	tr1 = RTMS_EX_H("type is float32",15,1500707890);
	tr2 = *(EIF_REFERENCE *)(RTCW(loc3) + _REFACS_1_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr2)+ _LNGOFF_0_0_0_0_);
	(nstcall = 0, F67_943(Current, tr1, (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {LIB_TESTS}.test_create_int32_tensor */
void F78_1051 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,loc2);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,loc3);
	RTLIU(6);
	
	RTEAA("test_create_int32_tensor", 77, Current, 3, 0, 1114);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = RTLNS(eif_new_type(6, 0x01).id, 6, _OBJSIZ_1_0_0_0_0_0_0_0_);
	(nstcall = -1, F7_374(RTCW(loc1)));
	RTHOOK(2);
	{
		static EIF_TYPE_INDEX typarr0[] = {760,892,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr2 = RTLNSP2(typres0.id,0,((EIF_INTEGER_32) 1L),sizeof(EIF_INTEGER_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr2) = 1L;
	}
	*((EIF_INTEGER_32 *)tr2+0) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5L);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) F761_4167)(tr2);
	tr1 = (nstcall = 1, F7_384(RTCW(loc1), tr1));
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	tr1 = (nstcall = 1, F7_382(RTCW(loc1), loc2));
	loc3 = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	tr1 = RTMS_EX_H("tensor created",14,1305640292);
	(nstcall = 0, F67_943(Current, tr1, (EIF_BOOLEAN)(loc3 != NULL)));
	RTHOOK(5);
	tr1 = RTMS_EX_H("type is int32",13,1608055346);
	tr2 = *(EIF_REFERENCE *)(RTCW(loc3) + _REFACS_1_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr2)+ _LNGOFF_0_0_0_0_);
	(nstcall = 0, F67_943(Current, tr1, (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 6L))));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {LIB_TESTS}.test_create_int64_tensor */
void F78_1052 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,loc2);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,loc3);
	RTLIU(6);
	
	RTEAA("test_create_int64_tensor", 77, Current, 3, 0, 1115);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = RTLNS(eif_new_type(6, 0x01).id, 6, _OBJSIZ_1_0_0_0_0_0_0_0_);
	(nstcall = -1, F7_374(RTCW(loc1)));
	RTHOOK(2);
	{
		static EIF_TYPE_INDEX typarr0[] = {760,892,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr2 = RTLNSP2(typres0.id,0,((EIF_INTEGER_32) 2L),sizeof(EIF_INTEGER_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr2) = 2L;
	}
	*((EIF_INTEGER_32 *)tr2+0) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	*((EIF_INTEGER_32 *)tr2+1) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) F761_4167)(tr2);
	tr1 = (nstcall = 1, F7_384(RTCW(loc1), tr1));
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	tr1 = (nstcall = 1, F7_383(RTCW(loc1), loc2));
	loc3 = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	tr1 = RTMS_EX_H("tensor created",14,1305640292);
	(nstcall = 0, F67_943(Current, tr1, (EIF_BOOLEAN)(loc3 != NULL)));
	RTHOOK(5);
	tr1 = RTMS_EX_H("type is int64",13,1608056116);
	tr2 = *(EIF_REFERENCE *)(RTCW(loc3) + _REFACS_1_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr2)+ _LNGOFF_0_0_0_0_);
	(nstcall = 0, F67_943(Current, tr1, (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 7L))));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {LIB_TESTS}.test_shape_creation */
void F78_1053 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc2);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTEAA("test_shape_creation", 77, Current, 2, 0, 1116);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc2 = RTLNS(eif_new_type(6, 0x01).id, 6, _OBJSIZ_1_0_0_0_0_0_0_0_);
	(nstcall = -1, F7_374(RTCW(loc2)));
	RTHOOK(2);
	{
		static EIF_TYPE_INDEX typarr0[] = {760,892,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr2 = RTLNSP2(typres0.id,0,((EIF_INTEGER_32) 3L),sizeof(EIF_INTEGER_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr2) = 3L;
	}
	*((EIF_INTEGER_32 *)tr2+0) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	*((EIF_INTEGER_32 *)tr2+1) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	*((EIF_INTEGER_32 *)tr2+2) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) F761_4167)(tr2);
	tr1 = (nstcall = 1, F7_384(RTCW(loc2), tr1));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	tr1 = RTMS_EX_H("rank correct",12,1772886388);
	ti4_1 = (nstcall = 1, F4_346(RTCW(loc1)));
	(nstcall = 0, F67_943(Current, tr1, (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 3L))));
	RTHOOK(4);
	tr1 = RTMS_EX_H("element count",13,690510196);
	ti4_1 = (nstcall = 1, F4_347(RTCW(loc1)));
	(nstcall = 0, F67_943(Current, tr1, (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 24L))));
	RTHOOK(5);
	tr1 = RTMS_EX_H("get dimension",13,1065133934);
	ti4_1 = (nstcall = 1, F4_348(RTCW(loc1), ((EIF_INTEGER_32) 1L)));
	(nstcall = 0, F67_943(Current, tr1, (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 2L))));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {LIB_TESTS}.test_shape_matching */
void F78_1054 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc3);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,loc2);
	RTLIU(6);
	
	RTEAA("test_shape_matching", 77, Current, 3, 0, 1097);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc3 = RTLNS(eif_new_type(6, 0x01).id, 6, _OBJSIZ_1_0_0_0_0_0_0_0_);
	(nstcall = -1, F7_374(RTCW(loc3)));
	RTHOOK(2);
	{
		static EIF_TYPE_INDEX typarr0[] = {760,892,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNSP2(typres0.id,0,((EIF_INTEGER_32) 2L),sizeof(EIF_INTEGER_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr2) = 2L;
	}
	*((EIF_INTEGER_32 *)tr2+0) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+1) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 77L);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) F761_4167)(tr2);
	tr1 = (nstcall = 1, F7_384(RTCW(loc3), tr1));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	{
		static EIF_TYPE_INDEX typarr0[] = {760,892,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNSP2(typres0.id,0,((EIF_INTEGER_32) 2L),sizeof(EIF_INTEGER_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr2) = 2L;
	}
	*((EIF_INTEGER_32 *)tr2+0) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+1) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 77L);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) F761_4167)(tr2);
	tr1 = (nstcall = 1, F7_384(RTCW(loc3), tr1));
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	tr1 = RTMS_EX_H("shapes match",12,2052343400);
	tb1 = (nstcall = 1, F4_349(RTCW(loc1), loc2));
	(nstcall = 0, F67_943(Current, tr1, tb1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {LIB_TESTS}.test_data_type_float32 */
void F78_1055 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("test_data_type_float32", 77, Current, 1, 0, 1098);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = RTLNS(eif_new_type(8, 0x01).id, 8, _OBJSIZ_0_0_0_1_0_0_0_0_);
	(nstcall = -1, F9_397(RTCW(loc1), ((EIF_INTEGER_32) 1L)));
	RTHOOK(2);
	tr1 = RTMS_EX_H("is floating point",17,714482036);
	tb1 = (nstcall = 1, F9_401(RTCW(loc1)));
	(nstcall = 0, F67_943(Current, tr1, tb1));
	RTHOOK(3);
	tr1 = RTMS_EX_H("not integer",11,1109030002);
	tb1 = (nstcall = 1, F9_402(RTCW(loc1)));
	(nstcall = 0, F67_943(Current, tr1, (EIF_BOOLEAN) !tb1));
	RTHOOK(4);
	tr1 = RTMS_EX_H("element size 4",14,791951924);
	ti4_1 = (nstcall = 1, F9_400(RTCW(loc1)));
	(nstcall = 0, F67_943(Current, tr1, (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 4L))));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {LIB_TESTS}.test_data_type_int64 */
void F78_1056 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("test_data_type_int64", 77, Current, 1, 0, 1099);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = RTLNS(eif_new_type(8, 0x01).id, 8, _OBJSIZ_0_0_0_1_0_0_0_0_);
	(nstcall = -1, F9_397(RTCW(loc1), ((EIF_INTEGER_32) 7L)));
	RTHOOK(2);
	tr1 = RTMS_EX_H("is integer",10,2034392946);
	tb1 = (nstcall = 1, F9_402(RTCW(loc1)));
	(nstcall = 0, F67_943(Current, tr1, tb1));
	RTHOOK(3);
	tr1 = RTMS_EX_H("not floating",12,1793005415);
	tb1 = (nstcall = 1, F9_401(RTCW(loc1)));
	(nstcall = 0, F67_943(Current, tr1, (EIF_BOOLEAN) !tb1));
	RTHOOK(4);
	tr1 = RTMS_EX_H("element size 8",14,791951928);
	ti4_1 = (nstcall = 1, F9_400(RTCW(loc1)));
	(nstcall = 0, F67_943(Current, tr1, (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 8L))));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {LIB_TESTS}.test_provider_cpu */
void F78_1057 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("test_provider_cpu", 77, Current, 1, 0, 1100);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = RTLNS(eif_new_type(7, 0x01).id, 7, _OBJSIZ_1_0_0_0_0_0_0_0_);
	tr1 = RTMS_EX_H("CPUExecutionProvider",20,248855666);
	(nstcall = -1, F8_385(RTCW(loc1), tr1));
	RTHOOK(2);
	tr1 = RTMS_EX_H("is cpu",6,750709365);
	tb1 = (nstcall = 1, F8_388(RTCW(loc1)));
	(nstcall = 0, F67_943(Current, tr1, tb1));
	RTHOOK(3);
	tr1 = RTMS_EX_H("no gpu required",15,493385316);
	tb1 = (nstcall = 1, F8_387(RTCW(loc1)));
	(nstcall = 0, F67_943(Current, tr1, (EIF_BOOLEAN) !tb1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {LIB_TESTS}.test_provider_cuda */
void F78_1058 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("test_provider_cuda", 77, Current, 1, 0, 1101);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = RTLNS(eif_new_type(7, 0x01).id, 7, _OBJSIZ_1_0_0_0_0_0_0_0_);
	tr1 = RTMS_EX_H("CUDAExecutionProvider",21,1017017458);
	(nstcall = -1, F8_385(RTCW(loc1), tr1));
	RTHOOK(2);
	tr1 = RTMS_EX_H("not cpu",7,292851317);
	tb1 = (nstcall = 1, F8_388(RTCW(loc1)));
	(nstcall = 0, F67_943(Current, tr1, (EIF_BOOLEAN) !tb1));
	RTHOOK(3);
	tr1 = RTMS_EX_H("gpu required",12,812781156);
	tb1 = (nstcall = 1, F8_387(RTCW(loc1)));
	(nstcall = 0, F67_943(Current, tr1, tb1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {LIB_TESTS}.test_result_success */
void F78_1059 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc4);
	RTLR(1,loc3);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,loc2);
	RTLR(6,loc1);
	RTLIU(7);
	
	RTEAA("test_result_success", 77, Current, 4, 0, 1102);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc4 = RTLNS(eif_new_type(6, 0x01).id, 6, _OBJSIZ_1_0_0_0_0_0_0_0_);
	(nstcall = -1, F7_374(RTCW(loc4)));
	RTHOOK(2);
	{
		static EIF_TYPE_INDEX typarr0[] = {760,892,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr2 = RTLNSP2(typres0.id,0,((EIF_INTEGER_32) 2L),sizeof(EIF_INTEGER_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr2) = 2L;
	}
	*((EIF_INTEGER_32 *)tr2+0) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+1) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 10L);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) F761_4167)(tr2);
	tr1 = (nstcall = 1, F7_384(RTCW(loc4), tr1));
	loc3 = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	tr1 = (nstcall = 1, F7_381(RTCW(loc4), loc3));
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	loc1 = RTLNS(eif_new_type(4, 0x01).id, 4, _OBJSIZ_2_1_0_1_0_0_0_0_);
	(nstcall = -1, F5_352(RTCW(loc1), loc2));
	RTHOOK(5);
	tr1 = RTMS_EX_H("is success",10,605068403);
	tb1 = *(EIF_BOOLEAN *)(RTCW(loc1)+ _CHROFF_2_0_);
	(nstcall = 0, F67_943(Current, tr1, tb1));
	RTHOOK(6);
	tr1 = RTMS_EX_H("output exists",13,58072691);
	tr2 = *(EIF_REFERENCE *)(RTCW(loc1));
	(nstcall = 0, F67_943(Current, tr1, (EIF_BOOLEAN)(tr2 != NULL)));
	RTHOOK(7);
	tr1 = RTMS_EX_H("no error code",13,1994336869);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_2_1_0_0_);
	(nstcall = 0, F67_943(Current, tr1, (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
}

/* {LIB_TESTS}.test_result_failure */
void F78_1060 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLIU(5);
	
	RTEAA("test_result_failure", 77, Current, 1, 0, 1103);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = RTLNS(eif_new_type(4, 0x01).id, 4, _OBJSIZ_2_1_0_1_0_0_0_0_);
	tr1 = RTMS_EX_H("Test error message",18,1164806501);
	(nstcall = -1, F5_353(RTCW(loc1), ((EIF_INTEGER_32) 1L), tr1));
	RTHOOK(2);
	tr1 = RTMS_EX_H("is failure",10,617161317);
	tb1 = *(EIF_BOOLEAN *)(RTCW(loc1)+ _CHROFF_2_0_);
	(nstcall = 0, F67_943(Current, tr1, (EIF_BOOLEAN) !tb1));
	RTHOOK(3);
	tr1 = RTMS_EX_H("error code set",14,1665678452);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_2_1_0_0_);
	(nstcall = 0, F67_943(Current, tr1, (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))));
	RTHOOK(4);
	tr1 = RTMS_EX_H("error message set",17,1888253300);
	tr2 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_1_);
	tr3 = RTMS_EX_H("Test error message",18,1164806501);
	tb1 = (nstcall = 1, F968_6088(RTCW(tr2), tr3));
	(nstcall = 0, F67_943(Current, tr1, tb1));
	RTHOOK(5);
	tr1 = RTMS_EX_H("no output",9,1170148468);
	tr2 = *(EIF_REFERENCE *)(RTCW(loc1));
	(nstcall = 0, F67_943(Current, tr1, (EIF_BOOLEAN)(tr2 == NULL)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {LIB_TESTS}.test_float32_tensor_data_set */
void F78_1061 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc4);
	RTLR(1,loc2);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,loc1);
	RTLR(6,loc3);
	RTLIU(7);
	
	RTEAA("test_float32_tensor_data_set", 77, Current, 4, 0, 1104);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc4 = RTLNS(eif_new_type(6, 0x01).id, 6, _OBJSIZ_1_0_0_0_0_0_0_0_);
	(nstcall = -1, F7_374(RTCW(loc4)));
	RTHOOK(2);
	{
		static EIF_TYPE_INDEX typarr0[] = {760,892,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNSP2(typres0.id,0,((EIF_INTEGER_32) 1L),sizeof(EIF_INTEGER_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr2) = 1L;
	}
	*((EIF_INTEGER_32 *)tr2+0) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) F761_4167)(tr2);
	tr1 = (nstcall = 1, F7_384(RTCW(loc4), tr1));
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	tr1 = (nstcall = 1, F7_381(RTCW(loc4), loc2));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,686,910,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		loc3 = RTLNS(typres0.id, 686, _OBJSIZ_1_1_0_2_0_0_0_0_);
	}
	(nstcall = -1, F687_3906(RTCW(loc3), (EIF_REAL_32) (EIF_REAL_64) 0.0, ((EIF_INTEGER_32) 1L), ((EIF_INTEGER_32) 3L)));
	RTHOOK(5);
	(nstcall = 1, F687_3930(RTCW(loc3), (EIF_REAL_32) (EIF_REAL_64) 1.5, ((EIF_INTEGER_32) 1L)));
	RTHOOK(6);
	(nstcall = 1, F687_3930(RTCW(loc3), (EIF_REAL_32) (EIF_REAL_64) 2.5, ((EIF_INTEGER_32) 2L)));
	RTHOOK(7);
	(nstcall = 1, F687_3930(RTCW(loc3), (EIF_REAL_32) (EIF_REAL_64) 3.5, ((EIF_INTEGER_32) 3L)));
	RTHOOK(8);
	(nstcall = 1, F10_419(RTCW(loc1), loc3));
	RTHOOK(9);
	tr1 = RTMS_EX_H("data set correctly",18,626774649);
	(nstcall = 0, F67_943(Current, tr1, (EIF_BOOLEAN) 1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
}

/* {LIB_TESTS}.test_int64_tensor_data_set */
void F78_1062 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc4);
	RTLR(1,loc2);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,loc1);
	RTLR(6,loc3);
	RTLIU(7);
	
	RTEAA("test_int64_tensor_data_set", 77, Current, 4, 0, 1105);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc4 = RTLNS(eif_new_type(6, 0x01).id, 6, _OBJSIZ_1_0_0_0_0_0_0_0_);
	(nstcall = -1, F7_374(RTCW(loc4)));
	RTHOOK(2);
	{
		static EIF_TYPE_INDEX typarr0[] = {760,892,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNSP2(typres0.id,0,((EIF_INTEGER_32) 1L),sizeof(EIF_INTEGER_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr2) = 1L;
	}
	*((EIF_INTEGER_32 *)tr2+0) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) F761_4167)(tr2);
	tr1 = (nstcall = 1, F7_384(RTCW(loc4), tr1));
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	tr1 = (nstcall = 1, F7_383(RTCW(loc4), loc2));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,690,889,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		loc3 = RTLNS(typres0.id, 690, _OBJSIZ_1_1_0_2_0_0_0_0_);
	}
	(nstcall = -1, F691_3906(RTCW(loc3), (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 1L), ((EIF_INTEGER_32) 2L)));
	RTHOOK(5);
	(nstcall = 1, F691_3930(RTCW(loc3), (EIF_INTEGER_64) ((EIF_INTEGER_32) 100L), ((EIF_INTEGER_32) 1L)));
	RTHOOK(6);
	(nstcall = 1, F691_3930(RTCW(loc3), (EIF_INTEGER_64) ((EIF_INTEGER_32) 200L), ((EIF_INTEGER_32) 2L)));
	RTHOOK(7);
	(nstcall = 1, F10_421(RTCW(loc1), loc3));
	RTHOOK(8);
	tr1 = RTMS_EX_H("data set correctly",18,626774649);
	(nstcall = 0, F67_943(Current, tr1, (EIF_BOOLEAN) 1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
}

/* {LIB_TESTS}.test_model_creation */
void F78_1063 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,Current);
	RTLIU(5);
	
	RTEAA("test_model_creation", 77, Current, 1, 0, 1106);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = RTLNS(eif_new_type(5, 0x01).id, 5, _OBJSIZ_1_0_0_3_0_0_0_0_);
	tr1 = RTMS_EX_H("test-model.onnx",15,1889391224);
	(nstcall = -1, F6_360(RTCW(loc1), tr1));
	RTHOOK(2);
	tr1 = RTMS_EX_H("model path set",14,1533000564);
	tr2 = *(EIF_REFERENCE *)(RTCW(loc1));
	tr3 = RTMS_EX_H("test-model.onnx",15,1889391224);
	tb1 = (nstcall = 1, F968_6088(RTCW(tr2), tr3));
	(nstcall = 0, F67_943(Current, tr1, tb1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {LIB_TESTS}.test_model_metadata_setup */
void F78_1064 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("test_model_metadata_setup", 77, Current, 1, 0, 1107);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = RTLNS(eif_new_type(5, 0x01).id, 5, _OBJSIZ_1_0_0_3_0_0_0_0_);
	tr1 = RTMS_EX_H("model.onnx",10,233171064);
	(nstcall = -1, F6_360(RTCW(loc1), tr1));
	RTHOOK(2);
	(nstcall = 1, F6_371(RTCW(loc1), ((EIF_INTEGER_32) 1L)));
	RTHOOK(3);
	(nstcall = 1, F6_372(RTCW(loc1), ((EIF_INTEGER_32) 1L)));
	RTHOOK(4);
	(nstcall = 1, F6_373(RTCW(loc1), ((EIF_INTEGER_32) 14L)));
	RTHOOK(5);
	tr1 = RTMS_EX_H("input count set",15,1020138100);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_1_0_0_0_);
	(nstcall = 0, F67_943(Current, tr1, (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))));
	RTHOOK(6);
	tr1 = RTMS_EX_H("output count set",16,1754100340);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_1_0_0_1_);
	(nstcall = 0, F67_943(Current, tr1, (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))));
	RTHOOK(7);
	tr1 = RTMS_EX_H("opset version set",17,188694132);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_1_0_0_2_);
	(nstcall = 0, F67_943(Current, tr1, (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 14L))));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
}

/* {LIB_TESTS}.test_session_creation */
void F78_1065 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,Current);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTEAA("test_session_creation", 77, Current, 2, 0, 1108);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = RTLNS(eif_new_type(5, 0x01).id, 5, _OBJSIZ_1_0_0_3_0_0_0_0_);
	tr1 = RTMS_EX_H("test.onnx",9,272676728);
	(nstcall = -1, F6_360(RTCW(loc1), tr1));
	RTHOOK(2);
	(nstcall = 1, F6_371(RTCW(loc1), ((EIF_INTEGER_32) 1L)));
	RTHOOK(3);
	(nstcall = 1, F6_372(RTCW(loc1), ((EIF_INTEGER_32) 1L)));
	RTHOOK(4);
	loc2 = RTLNS(eif_new_type(2, 0x01).id, 2, _OBJSIZ_2_1_0_2_0_0_0_0_);
	(nstcall = -1, F3_330(RTCW(loc2), loc1));
	RTHOOK(5);
	tr1 = RTMS_EX_H("session created",15,2115671908);
	(nstcall = 0, F67_943(Current, tr1, (EIF_BOOLEAN)(loc2 != NULL)));
	RTHOOK(6);
	tr1 = RTMS_EX_H("model set",9,1695666036);
	tr2 = *(EIF_REFERENCE *)(RTCW(loc2));
	(nstcall = 0, F67_943(Current, tr1, (EIF_BOOLEAN)(tr2 == loc1)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {LIB_TESTS}.test_session_provider_configuration */
void F78_1066 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,Current);
	RTLIU(6);
	
	RTEAA("test_session_provider_configuration", 77, Current, 2, 0, 1109);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = RTLNS(eif_new_type(5, 0x01).id, 5, _OBJSIZ_1_0_0_3_0_0_0_0_);
	tr1 = RTMS_EX_H("test.onnx",9,272676728);
	(nstcall = -1, F6_360(RTCW(loc1), tr1));
	RTHOOK(2);
	(nstcall = 1, F6_371(RTCW(loc1), ((EIF_INTEGER_32) 1L)));
	RTHOOK(3);
	(nstcall = 1, F6_372(RTCW(loc1), ((EIF_INTEGER_32) 1L)));
	RTHOOK(4);
	loc2 = RTLNS(eif_new_type(2, 0x01).id, 2, _OBJSIZ_2_1_0_2_0_0_0_0_);
	(nstcall = -1, F3_330(RTCW(loc2), loc1));
	RTHOOK(5);
	tr1 = RTMS_EX_H("CPUExecutionProvider",20,248855666);
	(nstcall = 1, F3_336(RTCW(loc2), tr1));
	RTHOOK(6);
	tr1 = RTMS_EX_H("provider set",12,340529524);
	tr2 = *(EIF_REFERENCE *)(RTCW(loc2) + _REFACS_1_);
	tr3 = *(EIF_REFERENCE *)(RTCW(tr2));
	tr2 = RTMS_EX_H("CPUExecutionProvider",20,248855666);
	tb1 = (nstcall = 1, F968_6088(RTCW(tr3), tr2));
	(nstcall = 0, F67_943(Current, tr1, tb1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

void EIF_Minit57 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
