/*
 * Code for class RT_DBG_INTERNAL
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "rt170.h"
#include "eif_macros.h"
#include "eif_eiffel.h"
#include "eif_debug.h"
#include "eif_internal.h"
#include "eif_out.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F194_2427
static int inline_F194_2427 (EIF_POINTER arg1)
{
	return (int) (eif_is_expanded(HEADER(arg1)->ov_flags))
	;
}
#define INLINE_F194_2427
#endif
#ifndef INLINE_F194_2428
static EIF_INTEGER_32 inline_F194_2428 (EIF_NATURAL_32 arg1)
{
	return (EIF_INTEGER_32) (ei_eif_type((uint32) arg1))
	;
}
#define INLINE_F194_2428
#endif
#ifndef INLINE_F194_2429
static EIF_NATURAL_32 inline_F194_2429 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	return (EIF_NATURAL_32) (System(To_dtype(arg2)).cn_types[arg1])
	;
}
#define INLINE_F194_2429
#endif
#ifndef INLINE_F194_2432
static EIF_REFERENCE inline_F194_2432 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_NATURAL_32 arg4)
{
	#ifdef WORKBENCH
	return (EIF_REFERENCE) rt_dbg_stack_value((uint32)arg1, (uint32)arg2, (uint32)arg3, (uint32)arg4);
#else
	return NULL;
#endif
	;
}
#define INLINE_F194_2432
#endif
#ifndef INLINE_F194_2437
static EIF_INTEGER_32 inline_F194_2437 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_BOOLEAN arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; a_val.type = SK_BOOL; a_val.it_bool = (EIF_BOOLEAN) arg4;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F194_2437
#endif
#ifndef INLINE_F194_2438
static EIF_INTEGER_32 inline_F194_2438 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_CHARACTER_8 arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; a_val.type = SK_CHAR; a_val.it_c1 = (EIF_CHARACTER) arg4;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F194_2438
#endif
#ifndef INLINE_F194_2439
static EIF_INTEGER_32 inline_F194_2439 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_CHARACTER_32 arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; a_val.type = SK_WCHAR; a_val.it_c4 = (EIF_WIDE_CHAR) arg4;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F194_2439
#endif
#ifndef INLINE_F194_2440
static EIF_INTEGER_32 inline_F194_2440 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_NATURAL_8 arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; a_val.type = SK_UINT8; a_val.it_n1 = (EIF_NATURAL_8) arg4;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F194_2440
#endif
#ifndef INLINE_F194_2441
static EIF_INTEGER_32 inline_F194_2441 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_NATURAL_16 arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; a_val.type = SK_UINT16; a_val.it_n2 = (EIF_NATURAL_16) arg4;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F194_2441
#endif
#ifndef INLINE_F194_2442
static EIF_INTEGER_32 inline_F194_2442 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_NATURAL_32 arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; a_val.type = SK_UINT32; a_val.it_n4 = (EIF_NATURAL_32) arg4;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F194_2442
#endif
#ifndef INLINE_F194_2443
static EIF_INTEGER_32 inline_F194_2443 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_NATURAL_64 arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; a_val.type = SK_UINT64; a_val.it_n8 = (EIF_NATURAL_64) arg4;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F194_2443
#endif
#ifndef INLINE_F194_2444
static EIF_INTEGER_32 inline_F194_2444 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_8 arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; a_val.type = SK_INT8; a_val.it_i1 = (EIF_INTEGER_8) arg4;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F194_2444
#endif
#ifndef INLINE_F194_2445
static EIF_INTEGER_32 inline_F194_2445 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_16 arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; a_val.type = SK_INT16; a_val.it_i2 = (EIF_INTEGER_16) arg4;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F194_2445
#endif
#ifndef INLINE_F194_2446
static EIF_INTEGER_32 inline_F194_2446 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; a_val.type = SK_INT32; a_val.it_i4 = (EIF_INTEGER_32) arg4;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F194_2446
#endif
#ifndef INLINE_F194_2447
static EIF_INTEGER_32 inline_F194_2447 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_64 arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; a_val.type = SK_INT64; a_val.it_i8 = (EIF_INTEGER_64) arg4;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F194_2447
#endif
#ifndef INLINE_F194_2448
static EIF_INTEGER_32 inline_F194_2448 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_REAL_32 arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; a_val.type = SK_REAL32; a_val.it_r4 = (EIF_REAL_32) arg4;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F194_2448
#endif
#ifndef INLINE_F194_2449
static EIF_INTEGER_32 inline_F194_2449 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_REAL_64 arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; a_val.type = SK_REAL64; a_val.it_r8 = (EIF_REAL_64) arg4;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F194_2449
#endif
#ifndef INLINE_F194_2450
static EIF_INTEGER_32 inline_F194_2450 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_POINTER arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; a_val.type = SK_POINTER; a_val.it_p = (EIF_POINTER) arg4;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F194_2450
#endif
#ifndef INLINE_F194_2451
static EIF_INTEGER_32 inline_F194_2451 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_POINTER arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; 
	a_val.type = SK_REF; 
	a_val.it_ref = (EIF_REFERENCE) &(arg4);
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F194_2451
#endif
#ifndef INLINE_F194_2452
static EIF_INTEGER_32 inline_F194_2452 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; 
	a_val.type = SK_VOID; 
	a_val.it_ref = (char*) 0;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F194_2452
#endif
#ifndef INLINE_F194_2453
static void inline_F194_2453 (EIF_INTEGER_32 arg1)
{
	#ifdef WORKBENCH
	EIF_GET_CONTEXT; is_inside_rt_eiffel_code = arg1;
#endif
	;
}
#define INLINE_F194_2453
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {RT_DBG_INTERNAL}.object_field_count */
EIF_INTEGER_32 F194_2415 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("object_field_count", 193, Current, 0, 1, 2422);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("obj_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTOUCR(296,(nstcall = 0, F194_2456), (Current));
	tr2 = RTCCL(arg1);
	(nstcall = 1, F196_2477(RTCW(tr1), tr2));
	RTHOOK(3);
	tr1 = RTOUCR(296,(nstcall = 0, F194_2456), (Current));
	ti4_1 = (nstcall = 1, F191_2314(RTCW(tr1)));
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.object_records */
EIF_REFERENCE F194_2416 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,loc3);
	RTLR(4,loc4);
	RTLR(5,Result);
	RTLIU(6);
	
	RTEAA("object_records", 193, Current, 4, 1, 2423);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("obj_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTCCL(arg1);
	loc2 = (nstcall = 0, F194_2415(Current, tr1));
	RTHOOK(3);
	if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(4);
		{
			static EIF_TYPE_INDEX typarr0[] = {824,0xFF01,774,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			loc3 = RTLNSMART(typres0.id);
		}
		(nstcall = -1, F825_4344(RTCW(loc3), loc2));
		RTHOOK(5);
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(6);
			if ((EIF_BOOLEAN) (loc1 > loc2)) break;
			RTHOOK(7);
			tr1 = RTCCL(arg1);
			tr1 = (nstcall = 0, F194_2424(Current, loc1, tr1));
			loc4 = tr1;
			if (EIF_TEST(loc4)) {
				RTHOOK(8);
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2955[Dtype(RTCW(loc3))-564])(loc3, loc4));
			}
			RTHOOK(9);
			loc1++;
		}
		RTHOOK(10);
		Result = (EIF_REFERENCE) loc3;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.object_is_expanded */
EIF_BOOLEAN F194_2417 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("object_is_expanded", 193, Current, 0, 1, 2424);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = EIF_TEST ((nstcall = 0, F194_2427(Current, arg1)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.field_index_at */
EIF_INTEGER_32 F194_2418 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,loc2);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("field_index_at", 193, Current, 2, 2, 2425);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("obj /= Void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc2 = RTOUCR(296,(nstcall = 0, F194_2456), (Current));
	RTHOOK(3);
	tr1 = RTCCL(arg2);
	(nstcall = 1, F196_2477(RTCW(loc2), tr1));
	RTHOOK(4);
	ti4_1 = (nstcall = 1, F191_2314(RTCW(loc2)));
	loc1 = (EIF_INTEGER_32) ti4_1;
	for (;;) {
		RTHOOK(5);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN) (Result > ((EIF_INTEGER_32) 0L)))) break;
		RTHOOK(6);
		ti4_1 = (nstcall = 1, F191_2275(RTCW(loc2), loc1));
		if ((EIF_BOOLEAN)(arg1 == ti4_1)) {
			RTHOOK(7);
			Result = (EIF_INTEGER_32) loc1;
		}
		RTHOOK(8);
		loc1--;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.field_name_at */
EIF_REFERENCE F194_2419 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,Result);
	RTLIU(5);
	
	RTEAA("field_name_at", 193, Current, 1, 2, 2426);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("obj /= Void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTCCL(arg2);
	loc1 = (nstcall = 0, F194_2418(Current, arg1, tr1));
	RTHOOK(3);
	if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(4);
		tr1 = RTOUCR(296,(nstcall = 0, F194_2456), (Current));
		tr2 = RTCCL(arg2);
		(nstcall = 1, F196_2477(RTCW(tr1), tr2));
		RTHOOK(5);
		tr1 = RTOUCR(296,(nstcall = 0, F194_2456), (Current));
		tr2 = (nstcall = 1, F191_2274(RTCW(tr1), loc1));
		Result = (EIF_REFERENCE) tr2;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.field_at */
EIF_REFERENCE F194_2420 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_NATURAL_32 arg2, EIF_REFERENCE arg3)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg3);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("field_at", 193, Current, 1, 3, 2427);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg3 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc1 = (nstcall = 0, F194_2422(Current, arg2));
	RTHOOK(4);
	switch (loc1) {
		case 3L:
			RTHOOK(5);
			Result = RTLNS(eif_new_type(922, 0x00).id, 922, _OBJSIZ_0_1_0_0_0_0_0_0_);
			*(EIF_BOOLEAN *)Result = (nstcall = 0, F45_582(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			break;
		case 2L:
			RTHOOK(6);
			Result = RTLNS(eif_new_type(919, 0x00).id, 919, _OBJSIZ_0_1_0_0_0_0_0_0_);
			*(EIF_CHARACTER_8 *)Result = (nstcall = 0, F45_580(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			break;
		case 12L:
			RTHOOK(7);
			Result = RTLNS(eif_new_type(916, 0x00).id, 916, _OBJSIZ_0_0_0_1_0_0_0_0_);
			*(EIF_CHARACTER_32 *)Result = (nstcall = 0, F45_581(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			break;
		case 13L:
			RTHOOK(8);
			Result = RTLNS(eif_new_type(907, 0x00).id, 907, _OBJSIZ_0_1_0_0_0_0_0_0_);
			*(EIF_NATURAL_8 *)Result = (nstcall = 0, F45_583(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			break;
		case 14L:
			RTHOOK(9);
			Result = RTLNS(eif_new_type(925, 0x00).id, 925, _OBJSIZ_0_0_1_0_0_0_0_0_);
			*(EIF_NATURAL_16 *)Result = (nstcall = 0, F45_584(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			break;
		case 15L:
			RTHOOK(10);
			Result = RTLNS(eif_new_type(904, 0x00).id, 904, _OBJSIZ_0_0_0_1_0_0_0_0_);
			*(EIF_NATURAL_32 *)Result = (nstcall = 0, F45_585(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			break;
		case 16L:
			RTHOOK(11);
			Result = RTLNS(eif_new_type(901, 0x00).id, 901, _OBJSIZ_0_0_0_0_0_0_1_0_);
			*(EIF_NATURAL_64 *)Result = (nstcall = 0, F45_586(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			break;
		case 9L:
			RTHOOK(12);
			Result = RTLNS(eif_new_type(898, 0x00).id, 898, _OBJSIZ_0_1_0_0_0_0_0_0_);
			*(EIF_INTEGER_8 *)Result = (nstcall = 0, F45_587(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			break;
		case 10L:
			RTHOOK(13);
			Result = RTLNS(eif_new_type(895, 0x00).id, 895, _OBJSIZ_0_0_1_0_0_0_0_0_);
			*(EIF_INTEGER_16 *)Result = (nstcall = 0, F45_588(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			break;
		case 4L:
			RTHOOK(14);
			Result = RTLNS(eif_new_type(892, 0x00).id, 892, _OBJSIZ_0_0_0_1_0_0_0_0_);
			*(EIF_INTEGER_32 *)Result = (nstcall = 0, F45_589(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			break;
		case 11L:
			RTHOOK(15);
			Result = RTLNS(eif_new_type(889, 0x00).id, 889, _OBJSIZ_0_0_0_0_0_0_1_0_);
			*(EIF_INTEGER_64 *)Result = (nstcall = 0, F45_590(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			break;
		case 5L:
			RTHOOK(16);
			Result = RTLNS(eif_new_type(910, 0x00).id, 910, _OBJSIZ_0_0_0_0_1_0_0_0_);
			*(EIF_REAL_32 *)Result = (nstcall = 0, F45_591(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			break;
		case 6L:
			RTHOOK(17);
			Result = RTLNS(eif_new_type(913, 0x00).id, 913, _OBJSIZ_0_0_0_0_0_0_0_1_);
			*(EIF_REAL_64 *)Result = (nstcall = 0, F45_593(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			break;
		case 0L:
			RTHOOK(18);
			Result = RTLNS(eif_new_type(958, 0x00).id, 958, _OBJSIZ_0_0_0_0_0_1_0_0_);
			*(EIF_POINTER *)Result = (nstcall = 0, F45_592(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			break;
		case 1L:
			RTHOOK(19);
			Result = (nstcall = 0, F45_578(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(20);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.stack_value_at */
EIF_REFERENCE F194_2421 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_NATURAL_32 arg4)
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
	
	RTEAA("stack_value_at", 193, Current, 0, 4, 2428);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = (nstcall = 0, F194_2432(Current, arg1, arg2, arg3, arg4));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.eif_type */
EIF_INTEGER_32 F194_2422 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
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
	
	RTEAA("eif_type", 193, Current, 0, 1, 2429);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F194_2428(Current, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.rt_dynamic_type */
EIF_INTEGER_32 F194_2423 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("rt_dynamic_type", 193, Current, 0, 1, 2430);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = (nstcall = 0, F194_2430(Current, arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("rt_dynamic_type_nonnegative", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
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

/* {RT_DBG_INTERNAL}.object_record */
EIF_REFERENCE F194_2424 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
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
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,arg2);
	RTLR(1,loc2);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,Result);
	RTLR(5,tr2);
	RTLR(6,tr3);
	RTLIU(7);
	
	RTEAA("object_record", 193, Current, 2, 2, 2431);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("obj_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc2 = RTOUCR(296,(nstcall = 0, F194_2456), (Current));
	RTHOOK(3);
	tr1 = RTCCL(arg2);
	(nstcall = 1, F196_2477(RTCW(loc2), tr1));
	RTHOOK(4);
	ti4_1 = (nstcall = 1, F191_2276(RTCW(loc2), arg1));
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(5);
	ti4_1 = (nstcall = 1, F191_2275(RTCW(loc2), arg1));
	tu4_1 = (nstcall = 0, F194_2429(Current, arg1, loc1));
	tr1 = RTCCL(arg2);
	Result = (nstcall = 0, F194_2425(Current, ti4_1, tu4_1, tr1));
	RTHOOK(6);
	switch (loc1) {
		case 9L:
			RTHOOK(7);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,817,898,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 817, _OBJSIZ_2_1_0_2_0_0_0_0_);
			}
			tr1 = RTCCL(arg2);
			ti1_1 = (nstcall = 1, F191_2288(RTCW(loc2), arg1));
			(nstcall = -1, F818_4254(RTCW(Result), tr1, arg1, loc1, ti1_1));
			break;
		case 10L:
			RTHOOK(8);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,816,895,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 816, _OBJSIZ_2_0_1_2_0_0_0_0_);
			}
			tr1 = RTCCL(arg2);
			ti2_1 = (nstcall = 1, F191_2289(RTCW(loc2), arg1));
			(nstcall = -1, F817_4254(RTCW(Result), tr1, arg1, loc1, ti2_1));
			break;
		case 4L:
			RTHOOK(9);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,807,892,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 807, _OBJSIZ_2_0_0_3_0_0_0_0_);
			}
			tr1 = RTCCL(arg2);
			ti4_1 = (nstcall = 1, F191_2290(RTCW(loc2), arg1));
			(nstcall = -1, F808_4254(RTCW(Result), tr1, arg1, loc1, ti4_1));
			break;
		case 11L:
			RTHOOK(10);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,806,889,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 806, _OBJSIZ_2_0_0_2_0_0_1_0_);
			}
			tr1 = RTCCL(arg2);
			ti8_1 = (nstcall = 1, F191_2291(RTCW(loc2), arg1));
			(nstcall = -1, F807_4254(RTCW(Result), tr1, arg1, loc1, ti8_1));
			break;
		case 13L:
			RTHOOK(11);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,819,907,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 819, _OBJSIZ_2_1_0_2_0_0_0_0_);
			}
			tr1 = RTCCL(arg2);
			tu1_1 = (nstcall = 1, F191_2284(RTCW(loc2), arg1));
			(nstcall = -1, F820_4254(RTCW(Result), tr1, arg1, loc1, tu1_1));
			break;
		case 14L:
			RTHOOK(12);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,811,925,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 811, _OBJSIZ_2_0_1_2_0_0_0_0_);
			}
			tr1 = RTCCL(arg2);
			tu2_1 = (nstcall = 1, F191_2285(RTCW(loc2), arg1));
			(nstcall = -1, F812_4254(RTCW(Result), tr1, arg1, loc1, tu2_1));
			break;
		case 15L:
			RTHOOK(13);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,815,904,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 815, _OBJSIZ_2_0_0_3_0_0_0_0_);
			}
			tr1 = RTCCL(arg2);
			tu4_1 = (nstcall = 1, F191_2286(RTCW(loc2), arg1));
			(nstcall = -1, F816_4254(RTCW(Result), tr1, arg1, loc1, tu4_1));
			break;
		case 16L:
			RTHOOK(14);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,814,901,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 814, _OBJSIZ_2_0_0_2_0_0_1_0_);
			}
			tr1 = RTCCL(arg2);
			tu8_1 = (nstcall = 1, F191_2287(RTCW(loc2), arg1));
			(nstcall = -1, F815_4254(RTCW(Result), tr1, arg1, loc1, tu8_1));
			break;
		case 0L:
			RTHOOK(15);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,809,958,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 809, _OBJSIZ_2_0_0_2_0_1_0_0_);
			}
			tr1 = RTCCL(arg2);
			tp1 = (nstcall = 1, F191_2293(RTCW(loc2), arg1));
			(nstcall = -1, F810_4254(RTCW(Result), tr1, arg1, loc1, tp1));
			break;
		case 1L:
			RTHOOK(16);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,805,0,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 805, _OBJSIZ_3_0_0_2_0_0_0_0_);
			}
			tr1 = RTCCL(arg2);
			tr2 = (nstcall = 1, F191_2261(RTCW(loc2), arg1));
			tr3 = RTCCL(tr2);
			(nstcall = -1, F806_4254(RTCW(Result), tr1, arg1, loc1, tr3));
			break;
		case 7L:
			RTHOOK(17);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,805,0,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 805, _OBJSIZ_3_0_0_2_0_0_0_0_);
			}
			tr1 = RTCCL(arg2);
			tr2 = (nstcall = 1, F191_2260(RTCW(loc2), arg1));
			tr3 = RTCCL(tr2);
			(nstcall = -1, F806_4254(RTCW(Result), tr1, arg1, loc1, tr3));
			break;
		case 3L:
			RTHOOK(18);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,812,922,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 812, _OBJSIZ_2_1_0_2_0_0_0_0_);
			}
			tr1 = RTCCL(arg2);
			tb1 = (nstcall = 1, F191_2283(RTCW(loc2), arg1));
			(nstcall = -1, F813_4254(RTCW(Result), tr1, arg1, loc1, tb1));
			break;
		case 5L:
			RTHOOK(19);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,818,910,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 818, _OBJSIZ_2_0_0_2_1_0_0_0_);
			}
			tr1 = RTCCL(arg2);
			tr4_1 = (nstcall = 1, F191_2292(RTCW(loc2), arg1));
			(nstcall = -1, F819_4254(RTCW(Result), tr1, arg1, loc1, tr4_1));
			break;
		case 6L:
			RTHOOK(20);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,810,913,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 810, _OBJSIZ_2_0_0_2_0_0_0_1_);
			}
			tr1 = RTCCL(arg2);
			tr8_1 = (nstcall = 1, F191_2294(RTCW(loc2), arg1));
			(nstcall = -1, F811_4254(RTCW(Result), tr1, arg1, loc1, tr8_1));
			break;
		case 2L:
			RTHOOK(21);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,813,919,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 813, _OBJSIZ_2_1_0_2_0_0_0_0_);
			}
			tr1 = RTCCL(arg2);
			tc1 = (nstcall = 1, F191_2281(RTCW(loc2), arg1));
			(nstcall = -1, F814_4254(RTCW(Result), tr1, arg1, loc1, tc1));
			break;
		case 12L:
			RTHOOK(22);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,808,916,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 808, _OBJSIZ_2_0_0_3_0_0_0_0_);
			}
			tr1 = RTCCL(arg2);
			tw1 = (nstcall = 1, F191_2282(RTCW(loc2), arg1));
			(nstcall = -1, F809_4254(RTCW(Result), tr1, arg1, loc1, tw1));
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(23);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.object_attribute_record */
EIF_REFERENCE F194_2425 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_NATURAL_32 arg2, EIF_REFERENCE arg3)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
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
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,arg3);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLR(6,loc2);
	RTLIU(7);
	
	RTEAA("object_attribute_record", 193, Current, 2, 3, 2432);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("obj_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg3 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = (nstcall = 0, F194_2422(Current, arg2));
	RTHOOK(3);
	switch (loc1) {
		case 3L:
			RTHOOK(4);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,787,922,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 787, _OBJSIZ_2_1_0_3_0_0_0_0_);
			}
			tr1 = RTCCL(arg3);
			tb1 = (nstcall = 0, F45_582(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			(nstcall = -1, F788_4220(RTCW(Result), tr1, arg1, loc1, arg2, tb1));
			break;
		case 2L:
			RTHOOK(5);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,777,919,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 777, _OBJSIZ_2_1_0_3_0_0_0_0_);
			}
			tr1 = RTCCL(arg3);
			tc1 = (nstcall = 0, F45_580(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			(nstcall = -1, F778_4220(RTCW(Result), tr1, arg1, loc1, arg2, tc1));
			break;
		case 12L:
			RTHOOK(6);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,776,916,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 776, _OBJSIZ_2_0_0_4_0_0_0_0_);
			}
			tr1 = RTCCL(arg3);
			tw1 = (nstcall = 0, F45_581(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			(nstcall = -1, F777_4220(RTCW(Result), tr1, arg1, loc1, arg2, tw1));
			break;
		case 9L:
			RTHOOK(7);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,781,898,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 781, _OBJSIZ_2_1_0_3_0_0_0_0_);
			}
			tr1 = RTCCL(arg3);
			ti1_1 = (nstcall = 0, F45_587(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			(nstcall = -1, F782_4220(RTCW(Result), tr1, arg1, loc1, arg2, ti1_1));
			break;
		case 10L:
			RTHOOK(8);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,780,895,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 780, _OBJSIZ_2_0_1_3_0_0_0_0_);
			}
			tr1 = RTCCL(arg3);
			ti2_1 = (nstcall = 0, F45_588(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			(nstcall = -1, F781_4220(RTCW(Result), tr1, arg1, loc1, arg2, ti2_1));
			break;
		case 4L:
			RTHOOK(9);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,788,892,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 788, _OBJSIZ_2_0_0_4_0_0_0_0_);
			}
			tr1 = RTCCL(arg3);
			ti4_1 = (nstcall = 0, F45_589(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			(nstcall = -1, F789_4220(RTCW(Result), tr1, arg1, loc1, arg2, ti4_1));
			break;
		case 11L:
			RTHOOK(10);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,778,889,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 778, _OBJSIZ_2_0_0_3_0_0_1_0_);
			}
			tr1 = RTCCL(arg3);
			ti8_1 = (nstcall = 0, F45_590(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			(nstcall = -1, F779_4220(RTCW(Result), tr1, arg1, loc1, arg2, ti8_1));
			break;
		case 13L:
			RTHOOK(11);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,785,907,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 785, _OBJSIZ_2_1_0_3_0_0_0_0_);
			}
			tr1 = RTCCL(arg3);
			tu1_1 = (nstcall = 0, F45_583(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			(nstcall = -1, F786_4220(RTCW(Result), tr1, arg1, loc1, arg2, tu1_1));
			break;
		case 14L:
			RTHOOK(12);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,784,925,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 784, _OBJSIZ_2_0_1_3_0_0_0_0_);
			}
			tr1 = RTCCL(arg3);
			tu2_1 = (nstcall = 0, F45_584(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			(nstcall = -1, F785_4220(RTCW(Result), tr1, arg1, loc1, arg2, tu2_1));
			break;
		case 15L:
			RTHOOK(13);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,783,904,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 783, _OBJSIZ_2_0_0_4_0_0_0_0_);
			}
			tr1 = RTCCL(arg3);
			tu1_1 = (nstcall = 0, F45_583(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			tu4_1 = (EIF_NATURAL_32) tu1_1;
			(nstcall = -1, F784_4220(RTCW(Result), tr1, arg1, loc1, arg2, tu4_1));
			break;
		case 16L:
			RTHOOK(14);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,782,901,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 782, _OBJSIZ_2_0_0_3_0_0_1_0_);
			}
			tr1 = RTCCL(arg3);
			tu1_1 = (nstcall = 0, F45_583(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			tu8_1 = (EIF_NATURAL_64) tu1_1;
			(nstcall = -1, F783_4220(RTCW(Result), tr1, arg1, loc1, arg2, tu8_1));
			break;
		case 5L:
			RTHOOK(15);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,786,910,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 786, _OBJSIZ_2_0_0_3_1_0_0_0_);
			}
			tr1 = RTCCL(arg3);
			tr4_1 = (nstcall = 0, F45_591(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			(nstcall = -1, F787_4220(RTCW(Result), tr1, arg1, loc1, arg2, tr4_1));
			break;
		case 6L:
			RTHOOK(16);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,789,913,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 789, _OBJSIZ_2_0_0_3_0_0_0_1_);
			}
			tr1 = RTCCL(arg3);
			tr8_1 = (nstcall = 0, F45_593(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			(nstcall = -1, F790_4220(RTCW(Result), tr1, arg1, loc1, arg2, tr8_1));
			break;
		case 0L:
			RTHOOK(17);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,779,958,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 779, _OBJSIZ_2_0_0_3_0_1_0_0_);
			}
			tr1 = RTCCL(arg3);
			tp1 = (nstcall = 0, F45_592(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			(nstcall = -1, F780_4220(RTCW(Result), tr1, arg1, loc1, arg2, tp1));
			break;
		case 1L:
			RTHOOK(18);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,775,0xFF01,0,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 775, _OBJSIZ_3_0_0_3_0_0_0_0_);
			}
			tr1 = RTCCL(arg3);
			tr2 = (nstcall = 0, F45_578(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			tr3 = RTCCL(tr2);
			(nstcall = -1, F776_4220(RTCW(Result), tr1, arg1, loc1, arg2, tr3));
			break;
		case 7L:
			RTHOOK(19);
			loc2 = RTLNS(eif_new_type(195, 0x01).id, 195, _OBJSIZ_1_0_0_2_0_0_0_0_);
			tr1 = RTCCL(arg3);
			(nstcall = -1, F196_2470(RTCW(loc2), tr1, arg1));
			RTHOOK(20);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,775,0xFF01,0,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 775, _OBJSIZ_3_0_0_3_0_0_0_0_);
			}
			tr1 = RTCCL(arg3);
			tr2 = (nstcall = 1, F196_2471(RTCW(loc2)));
			tr3 = RTCCL(tr2);
			(nstcall = -1, F776_4220(RTCW(Result), tr1, arg1, loc1, arg2, tr3));
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(21);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.object_local_record */
EIF_REFERENCE F194_2426 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_NATURAL_32 arg3)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("object_local_record", 193, Current, 1, 3, 2433);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = (nstcall = 0, F194_2422(Current, arg3));
	RTHOOK(2);
	switch (loc1) {
		case 3L:
			RTHOOK(3);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,800,922,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 800, _OBJSIZ_1_1_0_4_0_0_0_0_);
			}
			(nstcall = -1, F801_4236(RTCW(Result), arg1, arg2, loc1, arg3));
			break;
		case 2L:
			RTHOOK(4);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,793,919,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 793, _OBJSIZ_1_1_0_4_0_0_0_0_);
			}
			(nstcall = -1, F794_4236(RTCW(Result), arg1, arg2, loc1, arg3));
			break;
		case 12L:
			RTHOOK(5);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,801,916,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 801, _OBJSIZ_1_0_0_5_0_0_0_0_);
			}
			(nstcall = -1, F802_4236(RTCW(Result), arg1, arg2, loc1, arg3));
			break;
		case 13L:
			RTHOOK(6);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,796,907,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 796, _OBJSIZ_1_1_0_4_0_0_0_0_);
			}
			(nstcall = -1, F797_4236(RTCW(Result), arg1, arg2, loc1, arg3));
			break;
		case 14L:
			RTHOOK(7);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,797,925,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 797, _OBJSIZ_1_0_1_4_0_0_0_0_);
			}
			(nstcall = -1, F798_4236(RTCW(Result), arg1, arg2, loc1, arg3));
			break;
		case 15L:
			RTHOOK(8);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,798,904,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 798, _OBJSIZ_1_0_0_5_0_0_0_0_);
			}
			(nstcall = -1, F799_4236(RTCW(Result), arg1, arg2, loc1, arg3));
			break;
		case 16L:
			RTHOOK(9);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,795,901,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 795, _OBJSIZ_1_0_0_4_0_0_1_0_);
			}
			(nstcall = -1, F796_4236(RTCW(Result), arg1, arg2, loc1, arg3));
			break;
		case 9L:
			RTHOOK(10);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,794,898,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 794, _OBJSIZ_1_1_0_4_0_0_0_0_);
			}
			(nstcall = -1, F795_4236(RTCW(Result), arg1, arg2, loc1, arg3));
			break;
		case 10L:
			RTHOOK(11);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,791,895,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 791, _OBJSIZ_1_0_1_4_0_0_0_0_);
			}
			(nstcall = -1, F792_4236(RTCW(Result), arg1, arg2, loc1, arg3));
			break;
		case 4L:
			RTHOOK(12);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,802,892,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 802, _OBJSIZ_1_0_0_5_0_0_0_0_);
			}
			(nstcall = -1, F803_4236(RTCW(Result), arg1, arg2, loc1, arg3));
			break;
		case 11L:
			RTHOOK(13);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,803,889,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 803, _OBJSIZ_1_0_0_4_0_0_1_0_);
			}
			(nstcall = -1, F804_4236(RTCW(Result), arg1, arg2, loc1, arg3));
			break;
		case 5L:
			RTHOOK(14);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,799,910,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 799, _OBJSIZ_1_0_0_4_1_0_0_0_);
			}
			(nstcall = -1, F800_4236(RTCW(Result), arg1, arg2, loc1, arg3));
			break;
		case 6L:
			RTHOOK(15);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,792,913,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 792, _OBJSIZ_1_0_0_4_0_0_0_1_);
			}
			(nstcall = -1, F793_4236(RTCW(Result), arg1, arg2, loc1, arg3));
			break;
		case 0L:
			RTHOOK(16);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,804,958,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 804, _OBJSIZ_1_0_0_4_0_1_0_0_);
			}
			(nstcall = -1, F805_4236(RTCW(Result), arg1, arg2, loc1, arg3));
			break;
		case 1L:
			RTHOOK(17);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,790,0xFF01,0,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 790, _OBJSIZ_2_0_0_4_0_0_0_0_);
			}
			(nstcall = -1, F791_4236(RTCW(Result), arg1, arg2, loc1, arg3));
			break;
		case 7L:
			RTHOOK(18);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,790,0xFF01,0,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 790, _OBJSIZ_2_0_0_4_0_0_0_0_);
			}
			(nstcall = -1, F791_4236(RTCW(Result), arg1, arg2, loc1, arg3));
			break;
		case -2L:
			break;
	}
	RTHOOK(19);
	if ((EIF_BOOLEAN)(Result != NULL)) {
		RTHOOK(20);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R3449[Dtype(RTCW(Result))-775])(Result));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(21);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_object_is_expanded */
EIF_BOOLEAN F194_2427 (EIF_REFERENCE Current, EIF_POINTER arg1)
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
	
	RTEAA("c_object_is_expanded", 193, Current, 0, 1, 2434);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = EIF_TEST(inline_F194_2427 ((EIF_POINTER) arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_eif_type */
EIF_INTEGER_32 F194_2428 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
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
	
	RTEAA("c_eif_type", 193, Current, 0, 1, 2435);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F194_2428 ((EIF_NATURAL_32) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_rt_field_type */
EIF_NATURAL_32 F194_2429 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
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
	
	RTEAA("c_rt_field_type", 193, Current, 0, 2, 2436);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F194_2429 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_rt_dynamic_type */
EIF_INTEGER_32 F194_2430 (EIF_REFERENCE Current, EIF_POINTER arg1)
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
	
	RTEAA("c_rt_dynamic_type", 193, Current, 0, 1, 2437);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) Dtype(((EIF_REFERENCE) arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.set_field_at */
void F194_2431 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_NATURAL_32 arg2, EIF_REFERENCE arg3, EIF_REFERENCE arg4)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc2 = (EIF_BOOLEAN) 0;
	EIF_CHARACTER_8 loc3 = (EIF_CHARACTER_8) 0;
	EIF_CHARACTER_32 loc4 = (EIF_CHARACTER_32) 0;
	EIF_NATURAL_8 loc5 = (EIF_NATURAL_8) 0;
	EIF_NATURAL_16 loc6 = (EIF_NATURAL_16) 0;
	EIF_NATURAL_32 loc7 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_64 loc8 = (EIF_NATURAL_64) 0;
	EIF_INTEGER_8 loc9 = (EIF_INTEGER_8) 0;
	EIF_INTEGER_16 loc10 = (EIF_INTEGER_16) 0;
	EIF_INTEGER_32 loc11 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_64 loc12 = (EIF_INTEGER_64) 0;
	EIF_REAL_32 loc13 = (EIF_REAL_32) 0;
	EIF_REAL_64 loc14 = (EIF_REAL_64) 0;
	EIF_POINTER loc15 = (EIF_POINTER) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg4);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,arg3);
	RTLIU(4);
	
	RTEAA("set_field_at", 193, Current, 15, 4, 2438);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg4 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = (nstcall = 0, F194_2422(Current, arg2));
	RTHOOK(3);
	switch (loc1) {
		case 3L:
			RTHOOK(4);
			tr1 = RTCCL(arg3);
			RTOB(*(EIF_BOOLEAN *), eif_new_type(922, 0x00), tr1, loc2, tb1);
			if (tb1) {
				RTHOOK(5);
				(nstcall = 0, F45_621(Current, arg1, arg4, ((EIF_INTEGER_32) 0L), loc2));
			}
			break;
		case 2L:
			RTHOOK(6);
			tr1 = RTCCL(arg3);
			RTOB(*(EIF_CHARACTER_8 *), eif_new_type(919, 0x00), tr1, loc3, tb1);
			if (tb1) {
				RTHOOK(7);
				(nstcall = 0, F45_619(Current, arg1, arg4, ((EIF_INTEGER_32) 0L), loc3));
			}
			break;
		case 12L:
			RTHOOK(8);
			tr1 = RTCCL(arg3);
			RTOB(*(EIF_CHARACTER_32 *), eif_new_type(916, 0x00), tr1, loc4, tb1);
			if (tb1) {
				RTHOOK(9);
				(nstcall = 0, F45_620(Current, arg1, arg4, ((EIF_INTEGER_32) 0L), loc4));
			}
			break;
		case 13L:
			RTHOOK(10);
			tr1 = RTCCL(arg3);
			RTOB(*(EIF_NATURAL_8 *), eif_new_type(907, 0x00), tr1, loc5, tb1);
			if (tb1) {
				RTHOOK(11);
				(nstcall = 0, F45_622(Current, arg1, arg4, ((EIF_INTEGER_32) 0L), loc5));
			}
			break;
		case 14L:
			RTHOOK(12);
			tr1 = RTCCL(arg3);
			RTOB(*(EIF_NATURAL_16 *), eif_new_type(925, 0x00), tr1, loc6, tb1);
			if (tb1) {
				RTHOOK(13);
				(nstcall = 0, F45_623(Current, arg1, arg4, ((EIF_INTEGER_32) 0L), loc6));
			}
			break;
		case 15L:
			RTHOOK(14);
			tr1 = RTCCL(arg3);
			RTOB(*(EIF_NATURAL_32 *), eif_new_type(904, 0x00), tr1, loc7, tb1);
			if (tb1) {
				RTHOOK(15);
				(nstcall = 0, F45_624(Current, arg1, arg4, ((EIF_INTEGER_32) 0L), loc7));
			}
			break;
		case 16L:
			RTHOOK(16);
			tr1 = RTCCL(arg3);
			RTOB(*(EIF_NATURAL_64 *), eif_new_type(901, 0x00), tr1, loc8, tb1);
			if (tb1) {
				RTHOOK(17);
				(nstcall = 0, F45_625(Current, arg1, arg4, ((EIF_INTEGER_32) 0L), loc8));
			}
			break;
		case 9L:
			RTHOOK(18);
			tr1 = RTCCL(arg3);
			RTOB(*(EIF_INTEGER_8 *), eif_new_type(898, 0x00), tr1, loc9, tb1);
			if (tb1) {
				RTHOOK(19);
				(nstcall = 0, F45_626(Current, arg1, arg4, ((EIF_INTEGER_32) 0L), loc9));
			}
			break;
		case 10L:
			RTHOOK(20);
			tr1 = RTCCL(arg3);
			RTOB(*(EIF_INTEGER_16 *), eif_new_type(895, 0x00), tr1, loc10, tb1);
			if (tb1) {
				RTHOOK(21);
				(nstcall = 0, F45_627(Current, arg1, arg4, ((EIF_INTEGER_32) 0L), loc10));
			}
			break;
		case 4L:
			RTHOOK(22);
			tr1 = RTCCL(arg3);
			RTOB(*(EIF_INTEGER_32 *), eif_new_type(892, 0x00), tr1, loc11, tb1);
			if (tb1) {
				RTHOOK(23);
				(nstcall = 0, F45_628(Current, arg1, arg4, ((EIF_INTEGER_32) 0L), loc11));
			}
			break;
		case 11L:
			RTHOOK(24);
			tr1 = RTCCL(arg3);
			RTOB(*(EIF_INTEGER_64 *), eif_new_type(889, 0x00), tr1, loc12, tb1);
			if (tb1) {
				RTHOOK(25);
				(nstcall = 0, F45_629(Current, arg1, arg4, ((EIF_INTEGER_32) 0L), loc12));
			}
			break;
		case 5L:
			RTHOOK(26);
			tr1 = RTCCL(arg3);
			RTOB(*(EIF_REAL_32 *), eif_new_type(910, 0x00), tr1, loc13, tb1);
			if (tb1) {
				RTHOOK(27);
				(nstcall = 0, F45_630(Current, arg1, arg4, ((EIF_INTEGER_32) 0L), loc13));
			}
			break;
		case 6L:
			RTHOOK(28);
			tr1 = RTCCL(arg3);
			RTOB(*(EIF_REAL_64 *), eif_new_type(913, 0x00), tr1, loc14, tb1);
			if (tb1) {
				RTHOOK(29);
				(nstcall = 0, F45_618(Current, arg1, arg4, ((EIF_INTEGER_32) 0L), loc14));
			}
			break;
		case 0L:
			RTHOOK(30);
			tr1 = RTCCL(arg3);
			RTOB(*(EIF_POINTER *), eif_new_type(958, 0x00), tr1, loc15, tb1);
			if (tb1) {
				RTHOOK(31);
				(nstcall = 0, F45_631(Current, arg1, arg4, ((EIF_INTEGER_32) 0L), loc15));
			}
			break;
		case 1L:
			RTHOOK(32);
			tr1 = RTCCL(arg3);
			(nstcall = 0, F45_617(Current, arg1, arg4, ((EIF_INTEGER_32) 0L), tr1));
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(33);
	RTLE;
	RTEE;
}

/* {RT_DBG_INTERNAL}.c_stack_value_at */
EIF_REFERENCE F194_2432 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_NATURAL_32 arg4)
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
	
	RTEAA("c_stack_value_at", 193, Current, 0, 4, 2439);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F194_2432 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_NATURAL_32) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.set_stack_value_at */
EIF_INTEGER_32 F194_2436 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_NATURAL_32 arg4, EIF_REFERENCE arg5)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc2 = (EIF_BOOLEAN) 0;
	EIF_CHARACTER_8 loc3 = (EIF_CHARACTER_8) 0;
	EIF_CHARACTER_32 loc4 = (EIF_CHARACTER_32) 0;
	EIF_NATURAL_8 loc5 = (EIF_NATURAL_8) 0;
	EIF_NATURAL_16 loc6 = (EIF_NATURAL_16) 0;
	EIF_NATURAL_32 loc7 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_64 loc8 = (EIF_NATURAL_64) 0;
	EIF_INTEGER_8 loc9 = (EIF_INTEGER_8) 0;
	EIF_INTEGER_16 loc10 = (EIF_INTEGER_16) 0;
	EIF_INTEGER_32 loc11 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_64 loc12 = (EIF_INTEGER_64) 0;
	EIF_REAL_32 loc13 = (EIF_REAL_32) 0;
	EIF_REAL_64 loc14 = (EIF_REAL_64) 0;
	EIF_POINTER loc15 = (EIF_POINTER) 0;
	EIF_REFERENCE loc16 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg5);
	RTLIU(3);
	
	RTEAA("set_stack_value_at", 193, Current, 16, 5, 2443);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_loc_type_valid", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg2 == ((EIF_INTEGER_32) 1L)) || (EIF_BOOLEAN)(arg2 == ((EIF_INTEGER_32) 0L))) || (EIF_BOOLEAN)(arg2 == ((EIF_INTEGER_32) 2L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = (nstcall = 0, F194_2422(Current, arg4));
	RTHOOK(3);
	switch (loc1) {
		case 3L:
			RTHOOK(4);
			tr1 = RTCCL(arg5);
			RTOB(*(EIF_BOOLEAN *), eif_new_type(922, 0x00), tr1, loc2, tb1);
			if (tb1) {
				RTHOOK(5);
				Result = (nstcall = 0, F194_2437(Current, arg1, arg2, arg3, loc2));
			}
			break;
		case 2L:
			RTHOOK(6);
			tr1 = RTCCL(arg5);
			RTOB(*(EIF_CHARACTER_8 *), eif_new_type(919, 0x00), tr1, loc3, tb1);
			if (tb1) {
				RTHOOK(7);
				Result = (nstcall = 0, F194_2438(Current, arg1, arg2, arg3, loc3));
			}
			break;
		case 12L:
			RTHOOK(8);
			tr1 = RTCCL(arg5);
			RTOB(*(EIF_CHARACTER_32 *), eif_new_type(916, 0x00), tr1, loc4, tb1);
			if (tb1) {
				RTHOOK(9);
				Result = (nstcall = 0, F194_2439(Current, arg1, arg2, arg3, loc4));
			}
			break;
		case 13L:
			RTHOOK(10);
			tr1 = RTCCL(arg5);
			RTOB(*(EIF_NATURAL_8 *), eif_new_type(907, 0x00), tr1, loc5, tb1);
			if (tb1) {
				RTHOOK(11);
				Result = (nstcall = 0, F194_2440(Current, arg1, arg2, arg3, loc5));
			}
			break;
		case 14L:
			RTHOOK(12);
			tr1 = RTCCL(arg5);
			RTOB(*(EIF_NATURAL_16 *), eif_new_type(925, 0x00), tr1, loc6, tb1);
			if (tb1) {
				RTHOOK(13);
				Result = (nstcall = 0, F194_2441(Current, arg1, arg2, arg3, loc6));
			}
			break;
		case 15L:
			RTHOOK(14);
			tr1 = RTCCL(arg5);
			RTOB(*(EIF_NATURAL_32 *), eif_new_type(904, 0x00), tr1, loc7, tb1);
			if (tb1) {
				RTHOOK(15);
				Result = (nstcall = 0, F194_2442(Current, arg1, arg2, arg3, loc7));
			}
			break;
		case 16L:
			RTHOOK(16);
			tr1 = RTCCL(arg5);
			RTOB(*(EIF_NATURAL_64 *), eif_new_type(901, 0x00), tr1, loc8, tb1);
			if (tb1) {
				RTHOOK(17);
				Result = (nstcall = 0, F194_2443(Current, arg1, arg2, arg3, loc8));
			}
			break;
		case 9L:
			RTHOOK(18);
			tr1 = RTCCL(arg5);
			RTOB(*(EIF_INTEGER_8 *), eif_new_type(898, 0x00), tr1, loc9, tb1);
			if (tb1) {
				RTHOOK(19);
				Result = (nstcall = 0, F194_2444(Current, arg1, arg2, arg3, loc9));
			}
			break;
		case 10L:
			RTHOOK(20);
			tr1 = RTCCL(arg5);
			RTOB(*(EIF_INTEGER_16 *), eif_new_type(895, 0x00), tr1, loc10, tb1);
			if (tb1) {
				RTHOOK(21);
				Result = (nstcall = 0, F194_2445(Current, arg1, arg2, arg3, loc10));
			}
			break;
		case 4L:
			RTHOOK(22);
			tr1 = RTCCL(arg5);
			RTOB(*(EIF_INTEGER_32 *), eif_new_type(892, 0x00), tr1, loc11, tb1);
			if (tb1) {
				RTHOOK(23);
				Result = (nstcall = 0, F194_2446(Current, arg1, arg2, arg3, loc11));
			}
			break;
		case 11L:
			RTHOOK(24);
			tr1 = RTCCL(arg5);
			RTOB(*(EIF_INTEGER_64 *), eif_new_type(889, 0x00), tr1, loc12, tb1);
			if (tb1) {
				RTHOOK(25);
				Result = (nstcall = 0, F194_2447(Current, arg1, arg2, arg3, loc12));
			}
			break;
		case 5L:
			RTHOOK(26);
			tr1 = RTCCL(arg5);
			RTOB(*(EIF_REAL_32 *), eif_new_type(910, 0x00), tr1, loc13, tb1);
			if (tb1) {
				RTHOOK(27);
				Result = (nstcall = 0, F194_2448(Current, arg1, arg2, arg3, loc13));
			}
			break;
		case 6L:
			RTHOOK(28);
			tr1 = RTCCL(arg5);
			RTOB(*(EIF_REAL_64 *), eif_new_type(913, 0x00), tr1, loc14, tb1);
			if (tb1) {
				RTHOOK(29);
				Result = (nstcall = 0, F194_2449(Current, arg1, arg2, arg3, loc14));
			}
			break;
		case 0L:
			RTHOOK(30);
			tr1 = RTCCL(arg5);
			RTOB(*(EIF_POINTER *), eif_new_type(958, 0x00), tr1, loc15, tb1);
			if (tb1) {
				RTHOOK(31);
				Result = (nstcall = 0, F194_2450(Current, arg1, arg2, arg3, loc15));
			}
			break;
		case 1L:
			RTHOOK(32);
			if ((EIF_BOOLEAN)(arg5 != NULL)) {
				RTHOOK(33);
				Result = (nstcall = 0, F194_2451(Current, arg1, arg2, arg3, arg5));
			} else {
				RTHOOK(34);
				Result = (nstcall = 0, F194_2452(Current, arg1, arg2, arg3));
			}
			break;
		default:
			RTHOOK(35);
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(36);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_set_boolean_stack_value */
EIF_INTEGER_32 F194_2437 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_BOOLEAN arg4)
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
	
	RTEAA("c_set_boolean_stack_value", 193, Current, 0, 4, 2444);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F194_2437 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_BOOLEAN) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_set_character_8_stack_value */
EIF_INTEGER_32 F194_2438 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_CHARACTER_8 arg4)
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
	
	RTEAA("c_set_character_8_stack_value", 193, Current, 0, 4, 2445);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F194_2438 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_CHARACTER_8) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_set_character_32_stack_value */
EIF_INTEGER_32 F194_2439 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_CHARACTER_32 arg4)
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
	
	RTEAA("c_set_character_32_stack_value", 193, Current, 0, 4, 2446);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F194_2439 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_CHARACTER_32) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_set_natural_8_stack_value */
EIF_INTEGER_32 F194_2440 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_NATURAL_8 arg4)
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
	
	RTEAA("c_set_natural_8_stack_value", 193, Current, 0, 4, 2447);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F194_2440 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_NATURAL_8) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_set_natural_16_stack_value */
EIF_INTEGER_32 F194_2441 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_NATURAL_16 arg4)
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
	
	RTEAA("c_set_natural_16_stack_value", 193, Current, 0, 4, 2448);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F194_2441 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_NATURAL_16) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_set_natural_32_stack_value */
EIF_INTEGER_32 F194_2442 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_NATURAL_32 arg4)
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
	
	RTEAA("c_set_natural_32_stack_value", 193, Current, 0, 4, 2449);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F194_2442 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_NATURAL_32) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_set_natural_64_stack_value */
EIF_INTEGER_32 F194_2443 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_NATURAL_64 arg4)
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
	
	RTEAA("c_set_natural_64_stack_value", 193, Current, 0, 4, 2450);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F194_2443 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_NATURAL_64) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_set_integer_8_stack_value */
EIF_INTEGER_32 F194_2444 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_8 arg4)
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
	
	RTEAA("c_set_integer_8_stack_value", 193, Current, 0, 4, 2451);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F194_2444 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_INTEGER_8) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_set_integer_16_stack_value */
EIF_INTEGER_32 F194_2445 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_16 arg4)
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
	
	RTEAA("c_set_integer_16_stack_value", 193, Current, 0, 4, 2452);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F194_2445 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_INTEGER_16) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_set_integer_32_stack_value */
EIF_INTEGER_32 F194_2446 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
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
	
	RTEAA("c_set_integer_32_stack_value", 193, Current, 0, 4, 2453);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F194_2446 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_INTEGER_32) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_set_integer_64_stack_value */
EIF_INTEGER_32 F194_2447 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_64 arg4)
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
	
	RTEAA("c_set_integer_64_stack_value", 193, Current, 0, 4, 2454);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F194_2447 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_INTEGER_64) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_set_real_32_stack_value */
EIF_INTEGER_32 F194_2448 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_REAL_32 arg4)
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
	
	RTEAA("c_set_real_32_stack_value", 193, Current, 0, 4, 2455);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F194_2448 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_REAL_32) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_set_real_64_stack_value */
EIF_INTEGER_32 F194_2449 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_REAL_64 arg4)
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
	
	RTEAA("c_set_real_64_stack_value", 193, Current, 0, 4, 2456);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F194_2449 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_REAL_64) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_set_pointer_stack_value */
EIF_INTEGER_32 F194_2450 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_POINTER arg4)
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
	
	RTEAA("c_set_pointer_stack_value", 193, Current, 0, 4, 2457);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F194_2450 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_POINTER) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_set_reference_stack_value */
EIF_INTEGER_32 F194_2451 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_POINTER arg4)
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
	
	RTEAA("c_set_reference_stack_value", 193, Current, 0, 4, 2458);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_ref_not_null", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg4 != (nstcall = 0, F1_33(Current))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	Result = inline_F194_2451 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_POINTER) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_set_void_stack_value */
EIF_INTEGER_32 F194_2452 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
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
	
	RTEAA("c_set_void_stack_value", 193, Current, 0, 3, 2459);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F194_2452 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_rt_set_is_inside_rt_eiffel_code */
void F194_2453 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("c_rt_set_is_inside_rt_eiffel_code", 193, Current, 0, 1, 2460);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	inline_F194_2453 ((EIF_INTEGER_32) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {RT_DBG_INTERNAL}.test_locals */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F194_2454 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_REFERENCE arg3, EIF_NATURAL_32 arg4)
{
	GTCX
	RTEX;
	RTED;
	EIF_REFERENCE EIF_VOLATILE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN EIF_VOLATILE loc2 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE EIF_VOLATILE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	RTS_SDX;
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr2 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr3 = NULL;
	RTSN;
	RTDA;
	RTLD;
	RTXD;
	
	RTLI(8);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,arg3);
	RTLR(6,loc3);
	RTLR(7,saved_except);
	RTLIU(8);
	RTXSLS;
	
	RTEAA("test_locals", 193, Current, 3, 4, 2461);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTE_T
	RTHOOK(1);
	if ((EIF_BOOLEAN) !loc2) {
		RTHOOK(2);
		(nstcall = 0, F194_2453(Current, ((EIF_INTEGER_32) 1L)));
		RTHOOK(3);
		tr1 = (nstcall = 1, F965_5989(RTMS_EX_H("----------------------------------\012",35,1470523914)));
		loc1 = (EIF_REFERENCE) tr1;
		RTHOOK(4);
		tr1 = RTMS32_EX_H("L\000\000\000o\000\000\000c\000\000\000 \000\000\000#\000\000\000",5,1869350947);
		tr2 = eif_out__i4_s1(arg2);
		tr3 = (nstcall = 1, F965_5989(RTCW(tr2)));
		tr2 = (nstcall = 1, F973_6360(tr1, tr3));
		tr1 = (nstcall = 1, F965_5989(RTMS_EX_H("(stack depth=",13,1888178493)));
		tr1 = (nstcall = 1, F973_6360(RTCW(tr2), tr1));
		tr2 = eif_out__i4_s1(arg1);
		tr3 = (nstcall = 1, F965_5989(RTCW(tr2)));
		tr2 = (nstcall = 1, F973_6360(RTCW(tr1), tr3));
		tr1 = (nstcall = 1, F965_5989(RTMS_EX_H(")",1,41)));
		tr1 = (nstcall = 1, F973_6360(RTCW(tr2), tr1));
		(nstcall = 1, F973_6341(RTCW(loc1), tr1));
		RTHOOK(5);
		if ((EIF_BOOLEAN)(arg3 != NULL)) {
			RTHOOK(6);
			tr1 = RTLNS(eif_new_type(971, 0x00).id, 971, _OBJSIZ_1_0_0_4_0_0_0_0_);
			tr2 = RTMS_EX_H(": should be ",12,282022432);
			(nstcall = -1, F972_6280(RTCW(tr1), tr2));
			tr2 = (nstcall = 1, F1_5(arg3));
			tr3 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3733[Dtype(RTCW(tr2))-855])(tr2));
			tr2 = (nstcall = 1, F972_6289(RTCW(tr1), tr3));
			(nstcall = 1, F973_6341(RTCW(loc1), tr2));
		}
		RTHOOK(7);
		tr1 = (nstcall = 1, F965_5989(RTMS_EX_H("\012",1,10)));
		(nstcall = 1, F973_6341(RTCW(loc1), tr1));
		RTHOOK(8);
		(nstcall = 0, F1_27(Current, loc1));
		RTHOOK(9);
		tr1 = (nstcall = 1, F965_5989(RTMS_EX_H(" -> ",4,539835936)));
		(nstcall = 1, F973_6341(RTCW(loc1), tr1));
		RTHOOK(10);
		tr1 = (nstcall = 0, F194_2421(Current, arg1, ((EIF_INTEGER_32) 1L), arg2, arg4));
		loc3 = RTCCL(tr1);
		if (EIF_TEST(loc3)) {
			RTHOOK(11);
			tr1 = (nstcall = 1, F1_5(loc3));
			tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3733[Dtype(RTCW(tr1))-855])(tr1));
			tr1 = (nstcall = 1, F965_5989(RTMS_EX_H("=",1,61)));
			tr1 = (nstcall = 1, F972_6289(RTCW(tr2), tr1));
			tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R28[Dtype(loc3)-0])(loc3));
			tr3 = (nstcall = 1, F965_5989(RTCW(tr2)));
			tr2 = (nstcall = 1, F972_6289(RTCW(tr1), tr3));
			(nstcall = 1, F973_6341(RTCW(loc1), tr2));
		} else {
			RTHOOK(12);
			tr1 = (nstcall = 1, F965_5989(RTMS_EX_H("Void object",11,160638836)));
			(nstcall = 1, F973_6341(RTCW(loc1), tr1));
		}
		RTHOOK(13);
		tr1 = (nstcall = 1, F965_5989(RTMS_EX_H("\012",1,10)));
		(nstcall = 1, F973_6341(RTCW(loc1), tr1));
		RTHOOK(14);
		(nstcall = 0, F1_27(Current, loc1));
		RTHOOK(15);
		(nstcall = 0, F194_2453(Current, ((EIF_INTEGER_32) 0L)));
	} else {
		RTHOOK(16);
		tr1 = RTMS_EX_H("Rescued\012",8,1510780426);
		(nstcall = 0, F1_27(Current, tr1));
		RTHOOK(17);
		(nstcall = 0, F194_2453(Current, ((EIF_INTEGER_32) 0L)));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTE_E
	RTXSC;
	RTS_SRR
	RTHOOK(18);
	loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(19);
	RTER;
	/* NOTREACHED */
	RTE_EE
	RTHOOK(20);
	RTEOK;
	RTLE;
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {RT_DBG_INTERNAL}.test_set_local */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F194_2455 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_REFERENCE arg3, EIF_NATURAL_32 arg4)
{
	GTCX
	RTEX;
	RTED;
	EIF_REFERENCE EIF_VOLATILE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 EIF_VOLATILE loc2 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN EIF_VOLATILE loc3 = (EIF_BOOLEAN) 0;
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
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,arg3);
	RTLR(6,saved_except);
	RTLIU(7);
	RTXSLS;
	
	RTEAA("test_set_local", 193, Current, 3, 4, 2462);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTE_T
	RTHOOK(1);
	if ((EIF_BOOLEAN) !loc3) {
		RTHOOK(2);
		(nstcall = 0, F194_2453(Current, ((EIF_INTEGER_32) 1L)));
		RTHOOK(3);
		tr1 = (nstcall = 1, F965_5989(RTMS_EX_H("----------------------------------\012",35,1470523914)));
		loc1 = (EIF_REFERENCE) tr1;
		RTHOOK(4);
		tr1 = RTMS32_EX_H("S\000\000\000e\000\000\000t\000\000\000L\000\000\000o\000\000\000c\000\000\000 \000\000\000#\000\000\000",8,1411988515);
		tr2 = eif_out__i4_s1(arg2);
		tr3 = (nstcall = 1, F965_5989(RTCW(tr2)));
		tr2 = (nstcall = 1, F973_6360(tr1, tr3));
		tr1 = (nstcall = 1, F965_5989(RTMS_EX_H("(stack depth=",13,1888178493)));
		tr1 = (nstcall = 1, F973_6360(RTCW(tr2), tr1));
		tr2 = eif_out__i4_s1(arg1);
		tr3 = (nstcall = 1, F965_5989(RTCW(tr2)));
		tr2 = (nstcall = 1, F973_6360(RTCW(tr1), tr3));
		tr1 = (nstcall = 1, F965_5989(RTMS_EX_H(")",1,41)));
		tr1 = (nstcall = 1, F973_6360(RTCW(tr2), tr1));
		(nstcall = 1, F973_6341(RTCW(loc1), tr1));
		RTHOOK(5);
		if ((EIF_BOOLEAN)(arg3 != NULL)) {
			RTHOOK(6);
			tr1 = RTLNS(eif_new_type(971, 0x00).id, 971, _OBJSIZ_1_0_0_4_0_0_0_0_);
			tr2 = RTMS_EX_H(": value ",8,992027424);
			(nstcall = -1, F972_6280(RTCW(tr1), tr2));
			tr2 = (nstcall = 1, F1_5(arg3));
			tr3 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3733[Dtype(RTCW(tr2))-855])(tr2));
			tr2 = (nstcall = 1, F972_6289(RTCW(tr1), tr3));
			(nstcall = 1, F973_6341(RTCW(loc1), tr2));
		} else {
			RTHOOK(7);
			tr1 = (nstcall = 1, F965_5989(RTMS_EX_H(": value Void",12,962399588)));
			(nstcall = 1, F973_6341(RTCW(loc1), tr1));
		}
		RTHOOK(8);
		tr1 = (nstcall = 1, F965_5989(RTMS_EX_H("\012",1,10)));
		(nstcall = 1, F973_6341(RTCW(loc1), tr1));
		RTHOOK(9);
		(nstcall = 0, F1_27(Current, loc1));
		RTHOOK(10);
		tr1 = RTCCL(arg3);
		loc2 = (nstcall = 0, F194_2436(Current, arg1, ((EIF_INTEGER_32) 1L), arg2, arg4, tr1));
		RTHOOK(11);
		tr1 = (nstcall = 1, F965_5989(RTMS_EX_H(" -> ",4,539835936)));
		(nstcall = 1, F973_6341(RTCW(loc1), tr1));
		RTHOOK(12);
		tr1 = RTMS32_EX_H("R\000\000\000e\000\000\000s\000\000\000u\000\000\000l\000\000\000t\000\000\000 \000\000\000=\000\000\000 \000\000\000",9,495958816);
		tr2 = eif_out__i4_s1(loc2);
		tr3 = (nstcall = 1, F965_5989(RTCW(tr2)));
		tr2 = (nstcall = 1, F973_6360(tr1, tr3));
		(nstcall = 1, F973_6341(RTCW(loc1), tr2));
		RTHOOK(13);
		tr1 = (nstcall = 1, F965_5989(RTMS_EX_H("\012",1,10)));
		(nstcall = 1, F973_6341(RTCW(loc1), tr1));
		RTHOOK(14);
		(nstcall = 0, F1_27(Current, loc1));
		RTHOOK(15);
		(nstcall = 0, F194_2453(Current, ((EIF_INTEGER_32) 0L)));
	} else {
		RTHOOK(16);
		tr1 = RTMS_EX_H("Rescued\012",8,1510780426);
		(nstcall = 0, F1_27(Current, tr1));
		RTHOOK(17);
		(nstcall = 0, F194_2453(Current, ((EIF_INTEGER_32) 0L)));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTE_E
	RTXSC;
	RTS_SRR
	RTHOOK(18);
	loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(19);
	RTER;
	/* NOTREACHED */
	RTE_EE
	RTHOOK(20);
	RTEOK;
	RTLE;
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {RT_DBG_INTERNAL}.reflected_object */
static EIF_REFERENCE F194_2456_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(296)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("reflected_object", 193, Current, 0, 0, 2463);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(195, 0x01).id, 195, _OBJSIZ_1_0_0_2_0_0_0_0_);
	(nstcall = -1, F196_2468(RTCW(tr1), Current));
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

EIF_REFERENCE F194_2456 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(296,F194_2456_body,(Current));
}

/* {RT_DBG_INTERNAL}.reflector */
static EIF_REFERENCE F194_2457_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(295)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("reflector", 193, Current, 0, 0, 2464);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(191, 0x01).id, 191, _OBJSIZ_0_0_0_0_0_0_0_0_);
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

EIF_REFERENCE F194_2457 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(295,F194_2457_body,(Current));
}

void EIF_Minit170 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
