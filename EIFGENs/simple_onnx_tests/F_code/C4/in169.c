/*
 * Code for class INTERNAL
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "in169.h"
#include "eif_helpers.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {INTERNAL}.is_instance_of */
EIF_BOOLEAN F193_2353 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("is_instance_of", 192, Current, 0, 2, 2360);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("type_id_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = RTCCL(arg1);
	ti4_1 = (nstcall = 0, F193_2362(Current, tr1));
	Result = (nstcall = 0, F192_2321(Current, ti4_1, arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.type_of */
EIF_REFERENCE F193_2354 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,Current);
	RTLIU(4);
	
	RTEAA("type_of", 192, Current, 0, 1, 2361);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		RTHOOK(2);
		tr1 = (nstcall = 1, F1_5(arg1));
		Result = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(3);
		tr1 = RTLNTY2(eif_new_type(65534, 0x00), 0x00);
		Result = (EIF_REFERENCE) tr1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("result_not_void", EX_POST);
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

/* {INTERNAL}.is_special */
EIF_BOOLEAN F193_2355 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("is_special", 192, Current, 0, 1, 2362);
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
	tr1 = RTCCL(arg1);
	ti4_1 = (nstcall = 0, F193_2362(Current, tr1));
	Result = (nstcall = 0, F192_2330(Current, ti4_1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.is_tuple */
EIF_BOOLEAN F193_2356 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("is_tuple", 192, Current, 1, 1, 2363);
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
	loc1 = RTCCL(arg1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,0,886,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		loc1 = RTRV(typres0,loc1);
	}
	Result = (EIF_BOOLEAN) EIF_TEST(loc1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.is_field_transient */
EIF_BOOLEAN F193_2357 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("is_field_transient", 192, Current, 0, 2, 2364);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F193_2408(Current, tr1))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tr1 = RTCCL(arg2);
	ti4_1 = (nstcall = 0, F193_2362(Current, tr1));
	Result = (nstcall = 0, F192_2333(Current, arg1, ti4_1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.is_field_expanded */
EIF_BOOLEAN F193_2358 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("is_field_expanded", 192, Current, 0, 2, 2365);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F193_2408(Current, tr1))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tr1 = RTCCL(arg2);
	ti4_1 = (nstcall = 0, F193_2362(Current, tr1));
	Result = (nstcall = 0, F192_2334(Current, arg1, ti4_1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.class_name */
EIF_REFERENCE F193_2359 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,Current);
	RTLIU(4);
	
	RTEAA("class_name", 192, Current, 0, 1, 2366);
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
	tr1 = (nstcall = 1, F1_4(arg1));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.type_name */
EIF_REFERENCE F193_2360 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Current);
	RTLR(4,Result);
	RTLIU(5);
	
	RTEAA("type_name", 192, Current, 0, 1, 2367);
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
	tr2 = RTCCL(arg1);
	tr2 = (nstcall = 0, F193_2361(Current, tr2));
	tr1 = RTLNS(eif_new_type(46, 0x00).id, 46, _OBJSIZ_0_0_0_0_0_0_0_0_);
	Result = (nstcall = 0, F47_648(RTCW(tr1), tr2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.type_name_32 */
EIF_REFERENCE F193_2361 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Result);
	RTLR(4,Current);
	RTLIU(5);
	
	RTEAA("type_name_32", 192, Current, 0, 1, 2368);
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
	tr1 = (nstcall = 1, F1_5(arg1));
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3733[Dtype(RTCW(tr1))-855])(tr1));
	Result = (EIF_REFERENCE) tr2;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.dynamic_type */
EIF_INTEGER_32 F193_2362 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN uarg1;
	EIF_BOOLEAN uarg;
	RTS_SD;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("dynamic_type", 192, Current, 0, 1, 2369);
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
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTOUCR(54,(nstcall = 0, F193_2414), (Current));
	tr2 = RTCCL(arg1);
	(nstcall = 1, F196_2477(RTCW(tr1), tr2));
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(RTOUCR(54,(nstcall = 0, F193_2414), (Current)))+ _LNGOFF_1_0_0_0_);
	Result = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("dynamic_type_nonnegative", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	if (uarg) {
		RTS_RD;
	}
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.generic_count */
EIF_INTEGER_32 F193_2363 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("generic_count", 192, Current, 0, 1, 2370);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("obj_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTOUCR(54,(nstcall = 0, F193_2414), (Current));
	tr2 = RTCCL(arg1);
	(nstcall = 1, F196_2477(RTCW(tr1), tr2));
	RTHOOK(3);
	tr1 = RTOUCR(54,(nstcall = 0, F193_2414), (Current));
	ti4_1 = (nstcall = 1, F191_2258(RTCW(tr1)));
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.generic_dynamic_type */
EIF_INTEGER_32 F193_2364 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("generic_dynamic_type", 192, Current, 0, 2, 2371);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("obj_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("obj_generic", EX_PRE);
		tr1 = RTCCL(arg1);
		RTTE((EIF_BOOLEAN) ((nstcall = 0, F193_2363(Current, tr1)) > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("i_valid", EX_PRE);
		tb1 = '\0';
		if ((EIF_BOOLEAN) (arg2 > ((EIF_INTEGER_32) 0L))) {
			tr1 = RTCCL(arg1);
			tb1 = (EIF_BOOLEAN) (arg2 <= (nstcall = 0, F193_2363(Current, tr1)));
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tr1 = RTOUCR(54,(nstcall = 0, F193_2414), (Current));
	tr2 = RTCCL(arg1);
	(nstcall = 1, F196_2477(RTCW(tr1), tr2));
	RTHOOK(5);
	tr1 = RTOUCR(54,(nstcall = 0, F193_2414), (Current));
	ti4_1 = (nstcall = 1, F191_2259(RTCW(tr1), arg2));
	Result = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("dynamic_type_nonnegative", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
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

/* {INTERNAL}.field */
EIF_REFERENCE F193_2365 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
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
	
	RTEAA("field", 192, Current, 0, 2, 2372);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F193_2408(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("not_special", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F193_2355(Current, tr1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(54,(nstcall = 0, F193_2414), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F196_2477(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(54,(nstcall = 0, F193_2414), (Current));
	tr2 = (nstcall = 1, F191_2260(RTCW(tr1), arg1));
	Result = (EIF_REFERENCE) RTCCL(tr2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.reference_field */
EIF_REFERENCE F193_2366 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
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
	
	RTEAA("reference_field", 192, Current, 0, 2, 2373);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F193_2408(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("not_special", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F193_2355(Current, tr1)), label_1);
		RTCK;
		RTHOOK(5);
		RTCT("valid_type", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F193_2369(Current, arg1, tr1)) == ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(6);
	tr1 = RTOUCR(54,(nstcall = 0, F193_2414), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F196_2477(RTCW(tr1), tr2));
	RTHOOK(7);
	tr1 = RTOUCR(54,(nstcall = 0, F193_2414), (Current));
	tr2 = (nstcall = 1, F191_2261(RTCW(tr1), arg1));
	Result = (EIF_REFERENCE) RTCCL(tr2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.field_name */
EIF_REFERENCE F193_2367 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("field_name", 192, Current, 0, 2, 2374);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F193_2408(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("not_special", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F193_2355(Current, tr1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTCCL(arg2);
	ti4_1 = (nstcall = 0, F193_2362(Current, tr1));
	Result = (nstcall = 0, F192_2344(Current, arg1, ti4_1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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

/* {INTERNAL}.field_offset */
EIF_INTEGER_32 F193_2368 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
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
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("field_offset", 192, Current, 0, 2, 2375);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F193_2408(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("not_special", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F193_2355(Current, tr1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(54,(nstcall = 0, F193_2414), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F196_2477(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(54,(nstcall = 0, F193_2414), (Current));
	ti4_1 = (nstcall = 1, F191_2275(RTCW(tr1), arg1));
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.field_type */
EIF_INTEGER_32 F193_2369 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("field_type", 192, Current, 0, 2, 2376);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F193_2408(Current, tr1))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tr1 = RTCCL(arg2);
	ti4_1 = (nstcall = 0, F193_2362(Current, tr1));
	Result = (nstcall = 0, F192_2346(Current, arg1, ti4_1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("field_type_nonnegative", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
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

/* {INTERNAL}.expanded_field_type */
EIF_REFERENCE F193_2370 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("expanded_field_type", 192, Current, 0, 2, 2377);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F193_2408(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("is_expanded", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F193_2369(Current, arg1, tr1)) == ((EIF_INTEGER_32) 7L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTCCL(arg2);
	ti4_1 = (nstcall = 0, F193_2362(Current, tr1));
	ti4_1 = (nstcall = 0, F192_2347(Current, arg1, ti4_1));
	Result = (nstcall = 0, F192_2335(Current, ti4_1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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

/* {INTERNAL}.character_8_field */
EIF_CHARACTER_8 F193_2371 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("character_8_field", 192, Current, 0, 2, 2378);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F193_2408(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("character_8_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F193_2369(Current, arg1, tr1)) == ((EIF_INTEGER_32) 2L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(54,(nstcall = 0, F193_2414), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F196_2477(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(54,(nstcall = 0, F193_2414), (Current));
	tc1 = (nstcall = 1, F191_2281(RTCW(tr1), arg1));
	Result = (EIF_CHARACTER_8) tc1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.character_field */
EIF_CHARACTER_8 F193_2372 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("character_field", 192, Current, 0, 2, 2379);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F193_2408(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("character_8_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F193_2369(Current, arg1, tr1)) == ((EIF_INTEGER_32) 2L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(54,(nstcall = 0, F193_2414), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F196_2477(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(54,(nstcall = 0, F193_2414), (Current));
	tc1 = (nstcall = 1, F191_2281(RTCW(tr1), arg1));
	Result = (EIF_CHARACTER_8) tc1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.character_32_field */
EIF_CHARACTER_32 F193_2373 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 Result = ((EIF_CHARACTER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("character_32_field", 192, Current, 0, 2, 2380);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F193_2408(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("character_32_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F193_2369(Current, arg1, tr1)) == ((EIF_INTEGER_32) 12L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(54,(nstcall = 0, F193_2414), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F196_2477(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(54,(nstcall = 0, F193_2414), (Current));
	tw1 = (nstcall = 1, F191_2282(RTCW(tr1), arg1));
	Result = (EIF_CHARACTER_32) tw1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.boolean_field */
EIF_BOOLEAN F193_2374 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("boolean_field", 192, Current, 0, 2, 2381);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F193_2408(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("boolean_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F193_2369(Current, arg1, tr1)) == ((EIF_INTEGER_32) 3L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(54,(nstcall = 0, F193_2414), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F196_2477(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(54,(nstcall = 0, F193_2414), (Current));
	tb1 = (nstcall = 1, F191_2283(RTCW(tr1), arg1));
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.natural_8_field */
EIF_NATURAL_8 F193_2375 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("natural_8_field", 192, Current, 0, 2, 2382);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F193_2408(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("natural_8_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F193_2369(Current, arg1, tr1)) == ((EIF_INTEGER_32) 13L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(54,(nstcall = 0, F193_2414), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F196_2477(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(54,(nstcall = 0, F193_2414), (Current));
	tu1_1 = (nstcall = 1, F191_2284(RTCW(tr1), arg1));
	Result = (EIF_NATURAL_8) tu1_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.natural_16_field */
EIF_NATURAL_16 F193_2376 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 Result = ((EIF_NATURAL_16) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("natural_16_field", 192, Current, 0, 2, 2383);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F193_2408(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("natural_16_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F193_2369(Current, arg1, tr1)) == ((EIF_INTEGER_32) 14L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(54,(nstcall = 0, F193_2414), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F196_2477(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(54,(nstcall = 0, F193_2414), (Current));
	tu2_1 = (nstcall = 1, F191_2285(RTCW(tr1), arg1));
	Result = (EIF_NATURAL_16) tu2_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.natural_32_field */
EIF_NATURAL_32 F193_2377 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
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
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("natural_32_field", 192, Current, 0, 2, 2384);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F193_2408(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("natural_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F193_2369(Current, arg1, tr1)) == ((EIF_INTEGER_32) 15L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(54,(nstcall = 0, F193_2414), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F196_2477(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(54,(nstcall = 0, F193_2414), (Current));
	tu4_1 = (nstcall = 1, F191_2286(RTCW(tr1), arg1));
	Result = (EIF_NATURAL_32) tu4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.natural_64_field */
EIF_NATURAL_64 F193_2378 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_64 Result = ((EIF_NATURAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("natural_64_field", 192, Current, 0, 2, 2385);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F193_2408(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("natural_64_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F193_2369(Current, arg1, tr1)) == ((EIF_INTEGER_32) 16L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(54,(nstcall = 0, F193_2414), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F196_2477(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(54,(nstcall = 0, F193_2414), (Current));
	tu8_1 = (nstcall = 1, F191_2287(RTCW(tr1), arg1));
	Result = (EIF_NATURAL_64) tu8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.integer_8_field */
EIF_INTEGER_8 F193_2379 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_8 ti1_1;
	EIF_INTEGER_8 Result = ((EIF_INTEGER_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("integer_8_field", 192, Current, 0, 2, 2386);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F193_2408(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("integer_8_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F193_2369(Current, arg1, tr1)) == ((EIF_INTEGER_32) 9L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(54,(nstcall = 0, F193_2414), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F196_2477(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(54,(nstcall = 0, F193_2414), (Current));
	ti1_1 = (nstcall = 1, F191_2288(RTCW(tr1), arg1));
	Result = (EIF_INTEGER_8) ti1_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.integer_16_field */
EIF_INTEGER_16 F193_2380 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_16 ti2_1;
	EIF_INTEGER_16 Result = ((EIF_INTEGER_16) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("integer_16_field", 192, Current, 0, 2, 2387);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F193_2408(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("integer_16_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F193_2369(Current, arg1, tr1)) == ((EIF_INTEGER_32) 10L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(54,(nstcall = 0, F193_2414), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F196_2477(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(54,(nstcall = 0, F193_2414), (Current));
	ti2_1 = (nstcall = 1, F191_2289(RTCW(tr1), arg1));
	Result = (EIF_INTEGER_16) ti2_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.integer_field */
EIF_INTEGER_32 F193_2381 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
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
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("integer_field", 192, Current, 0, 2, 2388);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F193_2408(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("integer_32_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F193_2369(Current, arg1, tr1)) == ((EIF_INTEGER_32) 4L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(54,(nstcall = 0, F193_2414), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F196_2477(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(54,(nstcall = 0, F193_2414), (Current));
	ti4_1 = (nstcall = 1, F191_2290(RTCW(tr1), arg1));
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.integer_32_field */
EIF_INTEGER_32 F193_2382 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
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
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("integer_32_field", 192, Current, 0, 2, 2389);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F193_2408(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("integer_32_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F193_2369(Current, arg1, tr1)) == ((EIF_INTEGER_32) 4L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(54,(nstcall = 0, F193_2414), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F196_2477(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(54,(nstcall = 0, F193_2414), (Current));
	ti4_1 = (nstcall = 1, F191_2290(RTCW(tr1), arg1));
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.integer_64_field */
EIF_INTEGER_64 F193_2383 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_64 Result = ((EIF_INTEGER_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("integer_64_field", 192, Current, 0, 2, 2390);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F193_2408(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("integer_64_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F193_2369(Current, arg1, tr1)) == ((EIF_INTEGER_32) 11L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(54,(nstcall = 0, F193_2414), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F196_2477(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(54,(nstcall = 0, F193_2414), (Current));
	ti8_1 = (nstcall = 1, F191_2291(RTCW(tr1), arg1));
	Result = (EIF_INTEGER_64) ti8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.real_32_field */
EIF_REAL_32 F193_2384 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("real_32_field", 192, Current, 0, 2, 2391);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F193_2408(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("real_32_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F193_2369(Current, arg1, tr1)) == ((EIF_INTEGER_32) 5L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(54,(nstcall = 0, F193_2414), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F196_2477(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(54,(nstcall = 0, F193_2414), (Current));
	tr4_1 = (nstcall = 1, F191_2292(RTCW(tr1), arg1));
	Result = (EIF_REAL_32) tr4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.real_field */
EIF_REAL_32 F193_2385 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("real_field", 192, Current, 0, 2, 2392);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F193_2408(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("real_32_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F193_2369(Current, arg1, tr1)) == ((EIF_INTEGER_32) 5L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(54,(nstcall = 0, F193_2414), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F196_2477(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(54,(nstcall = 0, F193_2414), (Current));
	tr4_1 = (nstcall = 1, F191_2292(RTCW(tr1), arg1));
	Result = (EIF_REAL_32) tr4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.pointer_field */
EIF_POINTER F193_2386 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
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
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("pointer_field", 192, Current, 0, 2, 2393);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F193_2408(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("pointer_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F193_2369(Current, arg1, tr1)) == ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(54,(nstcall = 0, F193_2414), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F196_2477(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(54,(nstcall = 0, F193_2414), (Current));
	tp1 = (nstcall = 1, F191_2293(RTCW(tr1), arg1));
	Result = (EIF_POINTER) tp1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.real_64_field */
EIF_REAL_64 F193_2387 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("real_64_field", 192, Current, 0, 2, 2394);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F193_2408(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("real_64_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F193_2369(Current, arg1, tr1)) == ((EIF_INTEGER_32) 6L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(54,(nstcall = 0, F193_2414), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F196_2477(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(54,(nstcall = 0, F193_2414), (Current));
	tr8_1 = (nstcall = 1, F191_2294(RTCW(tr1), arg1));
	Result = (EIF_REAL_64) tr8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.double_field */
EIF_REAL_64 F193_2388 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("double_field", 192, Current, 0, 2, 2395);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F193_2408(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("real_64_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F193_2369(Current, arg1, tr1)) == ((EIF_INTEGER_32) 6L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(54,(nstcall = 0, F193_2414), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F196_2477(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(54,(nstcall = 0, F193_2414), (Current));
	tr8_1 = (nstcall = 1, F191_2294(RTCW(tr1), arg1));
	Result = (EIF_REAL_64) tr8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.set_reference_field */
void F193_2389 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,arg3);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTEAA("set_reference_field", 192, Current, 0, 3, 2396);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F193_2408(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("reference_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F193_2369(Current, arg1, tr1)) == ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(5);
		RTCT("valid_value", EX_PRE);
		tb1 = '\01';
		tr1 = RTCCL(arg2);
		ti4_1 = (nstcall = 0, F193_2362(Current, tr1));
		ti4_1 = (nstcall = 0, F192_2347(Current, arg1, ti4_1));
		if ((nstcall = 0, F192_2332(Current, ti4_1))) {
			tb1 = (EIF_BOOLEAN)(arg3 != NULL);
		}
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(6);
		RTCT("value_conforms_to_field_static_type", EX_PRE);
		tb1 = '\01';
		if ((EIF_BOOLEAN)(arg3 != NULL)) {
			tr1 = RTCCL(arg3);
			ti4_1 = (nstcall = 0, F193_2362(Current, tr1));
			tr1 = RTCCL(arg2);
			ti4_2 = (nstcall = 0, F193_2362(Current, tr1));
			ti4_2 = (nstcall = 0, F192_2347(Current, arg1, ti4_2));
			tb1 = (nstcall = 0, F192_2322(Current, ti4_1, ti4_2));
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(7);
	tr1 = RTOUCR(54,(nstcall = 0, F193_2414), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F196_2477(RTCW(tr1), tr2));
	RTHOOK(8);
	tr1 = RTOUCR(54,(nstcall = 0, F193_2414), (Current));
	tr2 = RTCCL(arg3);
	(nstcall = 1, F191_2295(RTCW(tr1), arg1, tr2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
}

/* {INTERNAL}.set_real_64_field */
void F193_2390 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_REAL_64 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("set_real_64_field", 192, Current, 0, 3, 2397);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F193_2408(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("real_64_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F193_2369(Current, arg1, tr1)) == ((EIF_INTEGER_32) 6L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(54,(nstcall = 0, F193_2414), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F196_2477(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(54,(nstcall = 0, F193_2414), (Current));
	(nstcall = 1, F191_2296(RTCW(tr1), arg1, arg3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {INTERNAL}.set_double_field */
void F193_2391 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_REAL_64 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("set_double_field", 192, Current, 0, 3, 2398);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F193_2408(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("real_64_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F193_2369(Current, arg1, tr1)) == ((EIF_INTEGER_32) 6L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(54,(nstcall = 0, F193_2414), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F196_2477(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(54,(nstcall = 0, F193_2414), (Current));
	(nstcall = 1, F191_2296(RTCW(tr1), arg1, arg3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {INTERNAL}.set_character_8_field */
void F193_2392 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_CHARACTER_8 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("set_character_8_field", 192, Current, 0, 3, 2399);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F193_2408(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("character_8_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F193_2369(Current, arg1, tr1)) == ((EIF_INTEGER_32) 2L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(54,(nstcall = 0, F193_2414), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F196_2477(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(54,(nstcall = 0, F193_2414), (Current));
	(nstcall = 1, F191_2298(RTCW(tr1), arg1, arg3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {INTERNAL}.set_character_field */
void F193_2393 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_CHARACTER_8 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("set_character_field", 192, Current, 0, 3, 2400);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F193_2408(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("character_8_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F193_2369(Current, arg1, tr1)) == ((EIF_INTEGER_32) 2L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(54,(nstcall = 0, F193_2414), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F196_2477(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(54,(nstcall = 0, F193_2414), (Current));
	(nstcall = 1, F191_2298(RTCW(tr1), arg1, arg3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {INTERNAL}.set_character_32_field */
void F193_2394 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_CHARACTER_32 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("set_character_32_field", 192, Current, 0, 3, 2401);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F193_2408(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("character_32_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F193_2369(Current, arg1, tr1)) == ((EIF_INTEGER_32) 12L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(54,(nstcall = 0, F193_2414), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F196_2477(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(54,(nstcall = 0, F193_2414), (Current));
	(nstcall = 1, F191_2300(RTCW(tr1), arg1, arg3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {INTERNAL}.set_boolean_field */
void F193_2395 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_BOOLEAN arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("set_boolean_field", 192, Current, 0, 3, 2402);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F193_2408(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("boolean_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F193_2369(Current, arg1, tr1)) == ((EIF_INTEGER_32) 3L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(54,(nstcall = 0, F193_2414), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F196_2477(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(54,(nstcall = 0, F193_2414), (Current));
	(nstcall = 1, F191_2301(RTCW(tr1), arg1, arg3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {INTERNAL}.set_natural_8_field */
void F193_2396 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_NATURAL_8 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("set_natural_8_field", 192, Current, 0, 3, 2403);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F193_2408(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("natural_8_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F193_2369(Current, arg1, tr1)) == ((EIF_INTEGER_32) 13L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(54,(nstcall = 0, F193_2414), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F196_2477(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(54,(nstcall = 0, F193_2414), (Current));
	(nstcall = 1, F191_2302(RTCW(tr1), arg1, arg3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {INTERNAL}.set_natural_16_field */
void F193_2397 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_NATURAL_16 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("set_natural_16_field", 192, Current, 0, 3, 2404);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F193_2408(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("natural_16_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F193_2369(Current, arg1, tr1)) == ((EIF_INTEGER_32) 14L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(54,(nstcall = 0, F193_2414), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F196_2477(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(54,(nstcall = 0, F193_2414), (Current));
	(nstcall = 1, F191_2303(RTCW(tr1), arg1, arg3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {INTERNAL}.set_natural_32_field */
void F193_2398 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_NATURAL_32 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("set_natural_32_field", 192, Current, 0, 3, 2405);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F193_2408(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("natural_32_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F193_2369(Current, arg1, tr1)) == ((EIF_INTEGER_32) 15L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(54,(nstcall = 0, F193_2414), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F196_2477(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(54,(nstcall = 0, F193_2414), (Current));
	(nstcall = 1, F191_2304(RTCW(tr1), arg1, arg3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {INTERNAL}.set_natural_64_field */
void F193_2399 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_NATURAL_64 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("set_natural_64_field", 192, Current, 0, 3, 2406);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F193_2408(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("natural_64_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F193_2369(Current, arg1, tr1)) == ((EIF_INTEGER_32) 16L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(54,(nstcall = 0, F193_2414), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F196_2477(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(54,(nstcall = 0, F193_2414), (Current));
	(nstcall = 1, F191_2305(RTCW(tr1), arg1, arg3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {INTERNAL}.set_integer_8_field */
void F193_2400 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_INTEGER_8 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("set_integer_8_field", 192, Current, 0, 3, 2407);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F193_2408(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("integer_8_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F193_2369(Current, arg1, tr1)) == ((EIF_INTEGER_32) 9L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(54,(nstcall = 0, F193_2414), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F196_2477(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(54,(nstcall = 0, F193_2414), (Current));
	(nstcall = 1, F191_2306(RTCW(tr1), arg1, arg3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {INTERNAL}.set_integer_16_field */
void F193_2401 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_INTEGER_16 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("set_integer_16_field", 192, Current, 0, 3, 2408);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F193_2408(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("integer_16_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F193_2369(Current, arg1, tr1)) == ((EIF_INTEGER_32) 10L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(54,(nstcall = 0, F193_2414), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F196_2477(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(54,(nstcall = 0, F193_2414), (Current));
	(nstcall = 1, F191_2307(RTCW(tr1), arg1, arg3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {INTERNAL}.set_integer_field */
void F193_2402 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("set_integer_field", 192, Current, 0, 3, 2409);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F193_2408(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("integer_32_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F193_2369(Current, arg1, tr1)) == ((EIF_INTEGER_32) 4L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(54,(nstcall = 0, F193_2414), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F196_2477(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(54,(nstcall = 0, F193_2414), (Current));
	(nstcall = 1, F191_2309(RTCW(tr1), arg1, arg3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {INTERNAL}.set_integer_32_field */
void F193_2403 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("set_integer_32_field", 192, Current, 0, 3, 2410);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F193_2408(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("integer_32_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F193_2369(Current, arg1, tr1)) == ((EIF_INTEGER_32) 4L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(54,(nstcall = 0, F193_2414), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F196_2477(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(54,(nstcall = 0, F193_2414), (Current));
	(nstcall = 1, F191_2309(RTCW(tr1), arg1, arg3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {INTERNAL}.set_integer_64_field */
void F193_2404 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_INTEGER_64 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("set_integer_64_field", 192, Current, 0, 3, 2411);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F193_2408(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("integer_64_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F193_2369(Current, arg1, tr1)) == ((EIF_INTEGER_32) 11L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(54,(nstcall = 0, F193_2414), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F196_2477(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(54,(nstcall = 0, F193_2414), (Current));
	(nstcall = 1, F191_2310(RTCW(tr1), arg1, arg3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {INTERNAL}.set_real_32_field */
void F193_2405 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_REAL_32 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("set_real_32_field", 192, Current, 0, 3, 2412);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F193_2408(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("real_32_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F193_2369(Current, arg1, tr1)) == ((EIF_INTEGER_32) 5L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(54,(nstcall = 0, F193_2414), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F196_2477(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(54,(nstcall = 0, F193_2414), (Current));
	(nstcall = 1, F191_2311(RTCW(tr1), arg1, arg3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {INTERNAL}.set_real_field */
void F193_2406 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_REAL_32 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("set_real_field", 192, Current, 0, 3, 2413);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F193_2408(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("real_32_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F193_2369(Current, arg1, tr1)) == ((EIF_INTEGER_32) 5L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(54,(nstcall = 0, F193_2414), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F196_2477(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(54,(nstcall = 0, F193_2414), (Current));
	(nstcall = 1, F191_2311(RTCW(tr1), arg1, arg3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {INTERNAL}.set_pointer_field */
void F193_2407 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2, EIF_POINTER arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("set_pointer_field", 192, Current, 0, 3, 2414);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_small_enough", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F193_2408(Current, tr1))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("pointer_field", EX_PRE);
		tr1 = RTCCL(arg2);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F193_2369(Current, arg1, tr1)) == ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTOUCR(54,(nstcall = 0, F193_2414), (Current));
	tr2 = RTCCL(arg2);
	(nstcall = 1, F196_2477(RTCW(tr1), tr2));
	RTHOOK(6);
	tr1 = RTOUCR(54,(nstcall = 0, F193_2414), (Current));
	(nstcall = 1, F191_2313(RTCW(tr1), arg1, arg3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {INTERNAL}.field_count */
EIF_INTEGER_32 F193_2408 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("field_count", 192, Current, 0, 1, 2415);
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
	tr1 = RTOUCR(54,(nstcall = 0, F193_2414), (Current));
	tr2 = RTCCL(arg1);
	(nstcall = 1, F196_2477(RTCW(tr1), tr2));
	RTHOOK(3);
	tr1 = RTOUCR(54,(nstcall = 0, F193_2414), (Current));
	ti4_1 = (nstcall = 1, F191_2314(RTCW(tr1)));
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.persistent_field_count */
EIF_INTEGER_32 F193_2409 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("persistent_field_count", 192, Current, 0, 1, 2416);
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
	tr1 = RTCCL(arg1);
	ti4_1 = (nstcall = 0, F193_2362(Current, tr1));
	Result = (nstcall = 0, F192_2350(Current, ti4_1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("count_positive", EX_POST);
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

/* {INTERNAL}.physical_size */
EIF_INTEGER_32 F193_2410 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_64 loc1 = (EIF_NATURAL_64) 0;
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_64 tu8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("physical_size", 192, Current, 1, 1, 2417);
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
	loc1 = (nstcall = 0, F45_559(Current, arg1));
	RTHOOK(3);
	tu8_1 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 2147483647L);
	tu8_2 = eif_min_uint64 (loc1,tu8_1);
	ti4_1 = (EIF_INTEGER_32) tu8_2;
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.deep_physical_size */
EIF_INTEGER_32 F193_2411 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_64 loc1 = (EIF_NATURAL_64) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_64 tu8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("deep_physical_size", 192, Current, 1, 1, 2418);
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
	tr1 = RTCCL(arg1);
	loc1 = (nstcall = 0, F193_2413(Current, tr1));
	RTHOOK(3);
	tu8_1 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 2147483647L);
	tu8_2 = eif_min_uint64 (loc1,tu8_1);
	ti4_1 = (EIF_INTEGER_32) tu8_2;
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.physical_size_64 */
EIF_NATURAL_64 F193_2412 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN uarg1;
	EIF_BOOLEAN uarg;
	RTS_SD;
	EIF_NATURAL_64 Result = ((EIF_NATURAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTEAA("physical_size_64", 192, Current, 0, 1, 2419);
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
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = (nstcall = 0, F45_559(Current, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	if (uarg) {
		RTS_RD;
	}
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.deep_physical_size_64 */
EIF_NATURAL_64 F193_2413 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_NATURAL_64 Result = ((EIF_NATURAL_64) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,Current);
	RTLR(5,tr2);
	RTLIU(6);
	
	RTEAA("deep_physical_size_64", 192, Current, 2, 1, 2420);
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
	loc1 = RTLNS(eif_new_type(94, 0x01).id, 94, _OBJSIZ_6_6_0_0_0_0_0_0_);
	RTHOOK(3);
	tr1 = RTCCL(arg1);
	(nstcall = 1, F93_1238(RTCW(loc1), tr1));
	RTHOOK(4);
	(nstcall = 1, F93_1242(RTCW(loc1), (EIF_BOOLEAN) 0));
	RTHOOK(5);
	(nstcall = 1, F93_1246(RTCW(loc1)));
	RTHOOK(6);
	tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_4_);
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		RTHOOK(7);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2935[Dtype(loc2)-564])(loc2));
		for (;;) {
			RTHOOK(8);
			tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2946[Dtype(loc2)-564])(loc2));
			if (tb1) break;
			RTHOOK(9);
			tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2969[Dtype(loc2)-564])(loc2));
			tr2 = RTCCL(tr1);
			Result += (nstcall = 0, F193_2412(Current, tr2));
			RTHOOK(10);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2948[Dtype(loc2)-564])(loc2));
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTEE;
	return Result;
}

/* {INTERNAL}.reflected_object */
static EIF_REFERENCE F193_2414_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(54)

	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,tr2);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("reflected_object", 192, Current, 0, 0, 2421);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(195, 0x01).id, 195, _OBJSIZ_1_0_0_2_0_0_0_0_);
	tr2 = RTMS_EX_H("",0,0);
	(nstcall = -1, F196_2468(RTCW(tr1), tr2));
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

EIF_REFERENCE F193_2414 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(54,F193_2414_body,(Current));
}

void EIF_Minit169 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
