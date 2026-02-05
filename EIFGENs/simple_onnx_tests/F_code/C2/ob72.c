/*
 * Code for class OBJECT_GRAPH_TRAVERSABLE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ob72.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {OBJECT_GRAPH_TRAVERSABLE}.root_object */
EIF_REFERENCE F93_1224 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {OBJECT_GRAPH_TRAVERSABLE}.on_processing_object_action */
EIF_REFERENCE F93_1225 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {OBJECT_GRAPH_TRAVERSABLE}.on_processing_reference_action */
EIF_REFERENCE F93_1226 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {OBJECT_GRAPH_TRAVERSABLE}.object_action */
EIF_REFERENCE F93_1227 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_3_);
}


/* {OBJECT_GRAPH_TRAVERSABLE}.visited_objects */
EIF_REFERENCE F93_1228 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_4_);
}


/* {OBJECT_GRAPH_TRAVERSABLE}.visited_types */
EIF_REFERENCE F93_1229 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_5_);
}


/* {OBJECT_GRAPH_TRAVERSABLE}.has_failed */
EIF_BOOLEAN F93_1230 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_6_0_);
}


/* {OBJECT_GRAPH_TRAVERSABLE}.is_root_object_set */
EIF_BOOLEAN F93_1231 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("is_root_object_set", 92, Current, 0, 0, 1265);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tr1 != NULL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {OBJECT_GRAPH_TRAVERSABLE}.is_object_action_set */
EIF_BOOLEAN F93_1232 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("is_object_action_set", 92, Current, 0, 0, 1266);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tr1 != NULL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {OBJECT_GRAPH_TRAVERSABLE}.has_reference_with_copy_semantics */
EIF_BOOLEAN F93_1233 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_6_1_);
}


/* {OBJECT_GRAPH_TRAVERSABLE}.is_skip_transient */
EIF_BOOLEAN F93_1234 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_6_2_);
}


/* {OBJECT_GRAPH_TRAVERSABLE}.is_skip_copy_semantics_reference */
EIF_BOOLEAN F93_1235 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_6_3_);
}


/* {OBJECT_GRAPH_TRAVERSABLE}.is_exception_on_copy_suppressed */
EIF_BOOLEAN F93_1236 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_6_4_);
}


/* {OBJECT_GRAPH_TRAVERSABLE}.is_exception_propagated */
EIF_BOOLEAN F93_1237 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_6_5_);
}


/* {OBJECT_GRAPH_TRAVERSABLE}.set_root_object */
void F93_1238 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("set_root_object", 92, Current, 0, 1, 1272);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("an_object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTCCL(arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("root_object_set", EX_POST);
		tb1 = '\0';
		if (RTCEQ(*(EIF_REFERENCE *)(Current), arg1)) {
			tb1 = (nstcall = 0, F93_1231(Current));
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

/* {OBJECT_GRAPH_TRAVERSABLE}.set_on_processing_object_action */
void F93_1239 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("set_on_processing_object_action", 92, Current, 0, 1, 1273);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("an_action_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("on_processing_object_action_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) == arg1)) {
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

/* {OBJECT_GRAPH_TRAVERSABLE}.set_on_processing_reference_action */
void F93_1240 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("set_on_processing_reference_action", 92, Current, 0, 1, 1274);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("an_action_not_void", EX_PRE);
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
		RTCT("on_processing_reference_action_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_2_) == arg1)) {
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

/* {OBJECT_GRAPH_TRAVERSABLE}.set_object_action */
void F93_1241 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("set_object_action", 92, Current, 0, 1, 1275);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("an_object_action_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("an_object_action_set", EX_POST);
		tb1 = '\0';
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_3_) == arg1)) {
			tb1 = (nstcall = 0, F93_1232(Current));
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

/* {OBJECT_GRAPH_TRAVERSABLE}.set_is_skip_transient */
void F93_1242 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_is_skip_transient", 92, Current, 0, 1, 1276);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_6_2_) = (EIF_BOOLEAN) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("is_skip_transient_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current+ _CHROFF_6_2_) == arg1)) {
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

/* {OBJECT_GRAPH_TRAVERSABLE}.set_is_skip_copy_semantics_reference */
void F93_1243 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_is_skip_copy_semantics_reference", 92, Current, 0, 1, 1277);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_6_3_) = (EIF_BOOLEAN) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("is_skip_copy_semantics_reference_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current+ _CHROFF_6_3_) == arg1)) {
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

/* {OBJECT_GRAPH_TRAVERSABLE}.set_is_exception_on_copy_suppressed */
void F93_1244 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_is_exception_on_copy_suppressed", 92, Current, 0, 1, 1278);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_6_4_) = (EIF_BOOLEAN) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("is_exception_on_copy_suppressed_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current+ _CHROFF_6_4_) == arg1)) {
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

/* {OBJECT_GRAPH_TRAVERSABLE}.set_is_exception_propagated */
void F93_1245 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_is_exception_propagated", 92, Current, 0, 1, 1279);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_6_5_) = (EIF_BOOLEAN) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("is_exception_propagated_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current+ _CHROFF_6_5_) == arg1)) {
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

/* {OBJECT_GRAPH_TRAVERSABLE}.traverse */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F93_1246 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTED;
	EIF_REFERENCE EIF_VOLATILE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN EIF_VOLATILE loc2 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN EIF_VOLATILE loc3 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE EIF_VOLATILE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	RTS_SDX;
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	RTXD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,loc4);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,saved_except);
	RTLIU(5);
	RTXSLS;
	
	RTEAA("traverse", 92, Current, 4, 0, 1280);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("root_object_available", EX_PRE);
		RTTE((nstcall = 0, F93_1231(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTE_T
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current);
	loc4 = RTCCL(tr1);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) !loc3 && EIF_TEST(loc4))) {
		RTHOOK(3);
		loc1 = RTLNS(eif_new_type(64, 0x01).id, 64, _OBJSIZ_0_0_0_0_0_0_0_0_);
		RTHOOK(4);
		(nstcall = 1, F65_931(RTCW(loc1)));
		RTHOOK(5);
		loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(6);
		tr1 = RTCCL(loc4);
		(nstcall = 0, F93_1250(Current, tr1));
		RTHOOK(7);
		(nstcall = 1, F65_932(RTCW(loc1)));
		RTHOOK(8);
		*(EIF_BOOLEAN *)(Current+ _CHROFF_6_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTE_E
	RTXSC;
	RTS_SRR
	RTHOOK(9);
	loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(10);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_6_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(11);
	if ((EIF_BOOLEAN) (loc2 && (EIF_BOOLEAN)(loc1 != NULL))) {
		RTHOOK(12);
		(nstcall = 1, F65_932(RTCW(loc1)));
	}
	RTHOOK(13);
	if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_6_5_)) {
		RTHOOK(14);
		RTER;
	}
	/* NOTREACHED */
	RTE_EE
	RTHOOK(15);
	RTEOK;
	RTLE;
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {OBJECT_GRAPH_TRAVERSABLE}.wipe_out */
void F93_1247 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("wipe_out", 92, Current, 0, 0, 1281);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_REFERENCE *)(Current + _REFACS_4_) = (EIF_REFERENCE) NULL;
	RTHOOK(2);
	*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) NULL;
	RTHOOK(3);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) NULL;
	RTHOOK(4);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) NULL;
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("visited_objects_reset", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_4_) == NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("object_action_not_set", EX_POST);
		if ((EIF_BOOLEAN) !(nstcall = 0, F93_1232(Current))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("root_object_not_set", EX_POST);
		if ((EIF_BOOLEAN) !(nstcall = 0, F93_1231(Current))) {
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

/* {OBJECT_GRAPH_TRAVERSABLE}.internal_traverse */
void F93_1250 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc14 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc15 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc16 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc17 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc18 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc19 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc20 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc21 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc22 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc23 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc24 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(22);
	RTLR(0,loc6);
	RTLR(1,loc13);
	RTLR(2,arg1);
	RTLR(3,tr1);
	RTLR(4,loc8);
	RTLR(5,Current);
	RTLR(6,loc9);
	RTLR(7,loc7);
	RTLR(8,loc10);
	RTLR(9,loc11);
	RTLR(10,loc16);
	RTLR(11,loc17);
	RTLR(12,loc3);
	RTLR(13,loc19);
	RTLR(14,loc14);
	RTLR(15,tr2);
	RTLR(16,loc22);
	RTLR(17,loc18);
	RTLR(18,loc4);
	RTLR(19,loc23);
	RTLR(20,loc24);
	RTLR(21,loc12);
	RTLIU(22);
	
	RTEAA("internal_traverse", 92, Current, 24, 1, 1283);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc6 = RTLNS(eif_new_type(64, 0x01).id, 64, _OBJSIZ_0_0_0_0_0_0_0_0_);
	RTHOOK(2);
	loc13 = RTLNS(eif_new_type(195, 0x01).id, 195, _OBJSIZ_1_0_0_2_0_0_0_0_);
	tr1 = RTCCL(arg1);
	(nstcall = -1, F196_2468(RTCW(loc13), tr1));
	RTHOOK(3);
	tr1 = RTCCL(arg1);
	(nstcall = 1, F65_929(RTCW(loc6), tr1));
	RTHOOK(4);
	{
		static EIF_TYPE_INDEX typarr0[] = {824,0xFF05,0,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		loc8 = RTLNSMART(typres0.id);
	}
	(nstcall = -1, F825_4344(RTCW(loc8), ((EIF_INTEGER_32) 200L)));
	RTHOOK(5);
	{
		static EIF_TYPE_INDEX typarr0[] = {847,892,892,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		loc9 = RTLNSMART(typres0.id);
	}
	(nstcall = -1, F848_4461(RTCW(loc9), ((EIF_INTEGER_32) 200L)));
	RTHOOK(6);
	loc7 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R1195[dtype-93])(Current));
	RTHOOK(7);
	tr1 = RTCCL(arg1);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2954[Dtype(RTCW(loc7))-564])(loc7, tr1));
	RTHOOK(8);
	loc10 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	RTHOOK(9);
	loc11 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	RTHOOK(10);
	loc16 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	RTHOOK(11);
	loc17 = RTLNS(eif_new_type(195, 0x01).id, 195, _OBJSIZ_1_0_0_2_0_0_0_0_);
	tr1 = RTCCL(arg1);
	(nstcall = -1, F196_2468(RTCW(loc17), tr1));
	for (;;) {
		RTHOOK(12);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2925[Dtype(RTCW(loc7))-564])(loc7));
		if (tb1) break;
		RTHOOK(13);
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2969[Dtype(RTCW(loc7))-564])(loc7));
		loc3 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(14);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2974[Dtype(RTCW(loc7))-564])(loc7));
		RTHOOK(15);
		loc19 = RTCCL(loc3);
		loc19 = RTRV(eif_new_type(190, 0x01),loc19);
		if ((loc19) && RTS_OS (Current, loc19)) loc19 = (EIF_REFERENCE) 0;
		if (EIF_TEST(loc19)) {
			
			RTHOOK(16);
			loc15 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			RTHOOK(17);
			loc14 = (EIF_REFERENCE) loc19;
			RTHOOK(18);
			if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_6_3_)) {
				RTHOOK(19);
				tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2010[Dtype(loc19)-194])(loc19));
				tr2 = RTCCL(tr1);
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2955[Dtype(RTCW(loc8))-564])(loc8, tr2));
			}
		} else {
			RTHOOK(20);
			tr1 = RTCCL(loc3);
			(nstcall = 1, F196_2477(RTCW(loc13), tr1));
			RTHOOK(21);
			loc14 = (EIF_REFERENCE) loc13;
			RTHOOK(22);
			tb2 = (nstcall = 1, F191_2266(RTCW(loc13)));
			if (tb2) {
				RTHOOK(23);
				loc15 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				RTHOOK(24);
				if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_6_3_)) {
					RTHOOK(25);
					tr1 = RTCCL(loc3);
					(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2955[Dtype(RTCW(loc8))-564])(loc8, tr1));
				}
			} else {
				RTHOOK(26);
				tr1 = RTCCL(loc3);
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2955[Dtype(RTCW(loc8))-564])(loc8, tr1));
			}
		}
		RTHOOK(27);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc14)+ _LNGOFF_1_0_0_0_);
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(loc14)+ _LNGOFF_1_0_0_0_);
		(nstcall = 1, F848_4507(RTCW(loc9), ti4_1, ti4_2));
		RTHOOK(28);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc10 != NULL) || (EIF_BOOLEAN)(loc11 != NULL))) {
			RTHOOK(29);
			tb2 = '\0';
			if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_6_4_)) {
				tb3 = (nstcall = 1, F191_2266(RTCW(loc14)));
				tb2 = tb3;
			}
			if (tb2) {
				RTHOOK(30);
				(nstcall = 0, F93_1251(Current));
			} else {
				RTHOOK(31);
				if ((EIF_BOOLEAN)(loc10 != NULL)) {
					RTHOOK(32);
					tr1 = RTCCL(loc3);
					(FUNCTION_CAST(void, (EIF_POINTER, EIF_REFERENCE, EIF_REFERENCE)) *(EIF_POINTER *)(RTCW(loc10)+ _PTROFF_4_2_0_3_0_0_))(
						*(EIF_POINTER *)(RTCW(loc10)+ _PTROFF_4_2_0_3_0_1_),
						*(EIF_REFERENCE *)(RTCW(loc10) + _REFACS_1_), tr1);
				}
				RTHOOK(33);
				if ((EIF_BOOLEAN)(loc11 != NULL)) {
					RTHOOK(34);
					(FUNCTION_CAST(void, (EIF_POINTER, EIF_REFERENCE, EIF_REFERENCE)) *(EIF_POINTER *)(RTCW(loc11)+ _PTROFF_4_2_0_3_0_0_))(
						*(EIF_POINTER *)(RTCW(loc11)+ _PTROFF_4_2_0_3_0_1_),
						*(EIF_REFERENCE *)(RTCW(loc11) + _REFACS_1_), loc14);
				}
			}
		}
		RTHOOK(35);
		tb2 = (nstcall = 1, F191_2263(RTCW(loc14)));
		if (tb2) {
			RTHOOK(36);
			tb2 = (nstcall = 1, F191_2265(RTCW(loc14)));
			if (tb2) {
				RTHOOK(37);
				loc22 = RTCCL(loc3);
				{
					static EIF_TYPE_INDEX typarr0[] = {0xFF01,759,0,0xFFFF};
					EIF_TYPE typres0;
					static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
					
					typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
					loc22 = RTRV(typres0,loc22);
				}
				if ((loc22) && RTS_OS (Current, loc22)) loc22 = (EIF_REFERENCE) 0;
				if (EIF_TEST(loc22)) {
					RTHOOK(38);
					loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
					RTHOOK(39);
					ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3396[Dtype(loc22)-759])(loc22));
					loc2 = (EIF_INTEGER_32) ti4_1;
					for (;;) {
						RTHOOK(40);
						if ((EIF_BOOLEAN)(loc1 == loc2)) break;
						RTHOOK(41);
						tb2 = (nstcall = 1, F191_2271(RTCW(loc14), loc1));
						if (tb2) {
							RTHOOK(42);
							tr1 = (nstcall = 1, F191_2279(RTCW(loc14), loc1));
							loc18 = (EIF_REFERENCE) tr1;
							RTHOOK(43);
							loc4 = (EIF_REFERENCE) loc18;
							RTHOOK(44);
							tr1 = RTCCL(loc4);
							(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2954[Dtype(RTCW(loc7))-564])(loc7, tr1));
							RTHOOK(45);
							if ((EIF_BOOLEAN)(loc16 != NULL)) {
								RTHOOK(46);
								(FUNCTION_CAST(void, (EIF_POINTER, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) *(EIF_POINTER *)(RTCW(loc16)+ _PTROFF_4_2_0_3_0_0_))(
									*(EIF_POINTER *)(RTCW(loc16)+ _PTROFF_4_2_0_3_0_1_),
									*(EIF_REFERENCE *)(RTCW(loc16) + _REFACS_1_), loc14, loc18);
							}
						} else {
							RTHOOK(47);
							tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R3211[Dtype(loc22)-677])(loc22, loc1));
							loc4 = (EIF_REFERENCE) RTCCL(tr1);
							RTHOOK(48);
							tb2 = '\0';
							if ((EIF_BOOLEAN)(loc4 != NULL)) {
								tr1 = RTCCL(loc4);
								tb3 = (nstcall = 1, F65_928(RTCW(loc6), tr1));
								tb2 = (EIF_BOOLEAN) !tb3;
							}
							if (tb2) {
								RTHOOK(49);
								tr1 = RTCCL(loc4);
								(nstcall = 1, F65_929(RTCW(loc6), tr1));
								RTHOOK(50);
								tr1 = RTCCL(loc4);
								(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2954[Dtype(RTCW(loc7))-564])(loc7, tr1));
							}
							RTHOOK(51);
							if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc16 != NULL) && (EIF_BOOLEAN)(loc4 != NULL))) {
								RTHOOK(52);
								tr1 = RTCCL(loc4);
								(nstcall = 1, F196_2477(RTCW(loc17), tr1));
								RTHOOK(53);
								loc18 = (EIF_REFERENCE) loc17;
								RTHOOK(54);
								(FUNCTION_CAST(void, (EIF_POINTER, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) *(EIF_POINTER *)(RTCW(loc16)+ _PTROFF_4_2_0_3_0_0_))(
									*(EIF_POINTER *)(RTCW(loc16)+ _PTROFF_4_2_0_3_0_1_),
									*(EIF_REFERENCE *)(RTCW(loc16) + _REFACS_1_), loc14, loc18);
							}
						}
						RTHOOK(55);
						loc1++;
					}
				}
			} else {
				RTHOOK(56);
				tb2 = (nstcall = 1, F191_2264(RTCW(loc14)));
				if (tb2) {
					RTHOOK(57);
					loc23 = RTCCL(loc3);
					{
						static EIF_TYPE_INDEX typarr0[] = {0xFF01,759,0xFF01,0,0xFFFF};
						EIF_TYPE typres0;
						static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
						
						typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
						loc23 = RTRV(typres0,loc23);
					}
					if ((loc23) && RTS_OS (Current, loc23)) loc23 = (EIF_REFERENCE) 0;
					if (EIF_TEST(loc23)) {
						RTHOOK(58);
						loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
						RTHOOK(59);
						ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3396[Dtype(loc23)-759])(loc23));
						loc2 = (EIF_INTEGER_32) ti4_1;
						for (;;) {
							RTHOOK(60);
							if ((EIF_BOOLEAN)(loc1 == loc2)) break;
							RTHOOK(61);
							tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R3211[Dtype(loc23)-677])(loc23, loc1));
							loc4 = (EIF_REFERENCE) RTCCL(tr1);
							RTHOOK(62);
							tr1 = RTCCL(loc4);
							(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2954[Dtype(RTCW(loc7))-564])(loc7, tr1));
							RTHOOK(63);
							if ((EIF_BOOLEAN)(loc16 != NULL)) {
								RTHOOK(64);
								if (*(EIF_BOOLEAN *)(Current+ _CHROFF_6_4_)) {
									RTHOOK(65);
									tr1 = RTCCL(loc4);
									(nstcall = 1, F196_2477(RTCW(loc17), tr1));
									RTHOOK(66);
									loc18 = (EIF_REFERENCE) loc17;
									RTHOOK(67);
									(FUNCTION_CAST(void, (EIF_POINTER, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) *(EIF_POINTER *)(RTCW(loc16)+ _PTROFF_4_2_0_3_0_0_))(
										*(EIF_POINTER *)(RTCW(loc16)+ _PTROFF_4_2_0_3_0_1_),
										*(EIF_REFERENCE *)(RTCW(loc16) + _REFACS_1_), loc14, loc18);
								} else {
									RTHOOK(68);
									(nstcall = 0, F93_1251(Current));
								}
							}
							RTHOOK(69);
							loc1++;
						}
					}
				}
			}
		} else {
			RTHOOK(70);
			tb2 = (nstcall = 1, F191_2267(RTCW(loc14)));
			if (tb2) {
				RTHOOK(71);
				loc24 = RTCCL(loc3);
				{
					static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,0,886,0xFFFF};
					EIF_TYPE typres0;
					static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
					
					typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
					loc24 = RTRV(typres0,loc24);
				}
				if ((loc24) && RTS_OS (Current, loc24)) loc24 = (EIF_REFERENCE) 0;
				if (EIF_TEST(loc24)) {
					RTHOOK(72);
					loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
					RTHOOK(73);
					ti4_1 = (nstcall = 1, F887_4726(loc24));
					loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
					for (;;) {
						RTHOOK(74);
						if ((EIF_BOOLEAN)(loc1 == loc2)) break;
						RTHOOK(75);
						tb2 = (nstcall = 1, F887_4770(loc24, loc1));
						if (tb2) {
							RTHOOK(76);
							tr1 = (nstcall = 1, F887_4699(loc24, loc1));
							loc4 = (EIF_REFERENCE) RTCCL(tr1);
							RTHOOK(77);
							tb2 = '\0';
							if ((EIF_BOOLEAN)(loc4 != NULL)) {
								tr1 = RTCCL(loc4);
								tb3 = (nstcall = 1, F65_928(RTCW(loc6), tr1));
								tb2 = (EIF_BOOLEAN) !tb3;
							}
							if (tb2) {
								RTHOOK(78);
								tr1 = RTCCL(loc4);
								(nstcall = 1, F65_929(RTCW(loc6), tr1));
								RTHOOK(79);
								tr1 = RTCCL(loc4);
								(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2954[Dtype(RTCW(loc7))-564])(loc7, tr1));
							}
							RTHOOK(80);
							if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc16 != NULL) && (EIF_BOOLEAN)(loc4 != NULL))) {
								RTHOOK(81);
								if (*(EIF_BOOLEAN *)(Current+ _CHROFF_6_4_)) {
									RTHOOK(82);
									tr1 = RTCCL(loc4);
									(nstcall = 1, F196_2477(RTCW(loc17), tr1));
									RTHOOK(83);
									loc18 = (EIF_REFERENCE) loc17;
									RTHOOK(84);
									(FUNCTION_CAST(void, (EIF_POINTER, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) *(EIF_POINTER *)(RTCW(loc16)+ _PTROFF_4_2_0_3_0_0_))(
										*(EIF_POINTER *)(RTCW(loc16)+ _PTROFF_4_2_0_3_0_1_),
										*(EIF_REFERENCE *)(RTCW(loc16) + _REFACS_1_), loc14, loc18);
								} else {
									RTHOOK(85);
									(nstcall = 0, F93_1251(Current));
								}
							}
						}
						RTHOOK(86);
						loc1++;
					}
				}
			} else {
				RTHOOK(87);
				loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				RTHOOK(88);
				ti4_1 = (nstcall = 1, F191_2314(RTCW(loc14)));
				loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
				for (;;) {
					RTHOOK(89);
					if ((EIF_BOOLEAN)(loc1 == loc2)) break;
					RTHOOK(90);
					ti4_1 = (nstcall = 1, F191_2276(RTCW(loc14), loc1));
					loc5 = (EIF_INTEGER_32) ti4_1;
					RTHOOK(91);
					if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc5 == ((EIF_INTEGER_32) 1L)) || (EIF_BOOLEAN)(loc5 == ((EIF_INTEGER_32) 7L)))) {
						RTHOOK(92);
						tb2 = '\01';
						if (!(EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_6_2_)) {
							tb3 = (nstcall = 1, F191_2268(RTCW(loc14), loc1));
							tb2 = (EIF_BOOLEAN) !tb3;
						}
						if (tb2) {
							RTHOOK(93);
							if ((EIF_BOOLEAN)(loc5 == ((EIF_INTEGER_32) 7L))) {
								RTHOOK(94);
								tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2036[Dtype(RTCW(loc14))-194])(loc14, loc1));
								loc18 = (EIF_REFERENCE) tr1;
								RTHOOK(95);
								(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2954[Dtype(RTCW(loc7))-564])(loc7, loc18));
								RTHOOK(96);
								if ((EIF_BOOLEAN)(loc16 != NULL)) {
									RTHOOK(97);
									(FUNCTION_CAST(void, (EIF_POINTER, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) *(EIF_POINTER *)(RTCW(loc16)+ _PTROFF_4_2_0_3_0_0_))(
										*(EIF_POINTER *)(RTCW(loc16)+ _PTROFF_4_2_0_3_0_1_),
										*(EIF_REFERENCE *)(RTCW(loc16) + _REFACS_1_), loc14, loc18);
								}
							} else {
								RTHOOK(98);
								tb2 = (nstcall = 1, F191_2270(RTCW(loc14), loc1));
								if (tb2) {
									RTHOOK(99);
									tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2034[Dtype(RTCW(loc14))-194])(loc14, loc1));
									loc18 = (EIF_REFERENCE) tr1;
									RTHOOK(100);
									(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2954[Dtype(RTCW(loc7))-564])(loc7, loc18));
									RTHOOK(101);
									if ((EIF_BOOLEAN)(loc16 != NULL)) {
										RTHOOK(102);
										(FUNCTION_CAST(void, (EIF_POINTER, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) *(EIF_POINTER *)(RTCW(loc16)+ _PTROFF_4_2_0_3_0_0_))(
											*(EIF_POINTER *)(RTCW(loc16)+ _PTROFF_4_2_0_3_0_1_),
											*(EIF_REFERENCE *)(RTCW(loc16) + _REFACS_1_), loc14, loc18);
									}
								} else {
									RTHOOK(103);
									tr1 = (nstcall = 1, F191_2261(RTCW(loc14), loc1));
									loc4 = (EIF_REFERENCE) RTCCL(tr1);
									RTHOOK(104);
									if ((EIF_BOOLEAN)(loc4 != NULL)) {
										RTHOOK(105);
										tr1 = RTCCL(loc4);
										tb2 = (nstcall = 1, F65_928(RTCW(loc6), tr1));
										if ((EIF_BOOLEAN) !tb2) {
											RTHOOK(106);
											tr1 = RTCCL(loc4);
											(nstcall = 1, F65_929(RTCW(loc6), tr1));
											RTHOOK(107);
											tr1 = RTCCL(loc4);
											(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2954[Dtype(RTCW(loc7))-564])(loc7, tr1));
										}
										RTHOOK(108);
										if ((EIF_BOOLEAN)(loc16 != NULL)) {
											RTHOOK(109);
											tr1 = RTCCL(loc4);
											(nstcall = 1, F196_2477(RTCW(loc17), tr1));
											RTHOOK(110);
											loc18 = (EIF_REFERENCE) loc17;
											RTHOOK(111);
											(FUNCTION_CAST(void, (EIF_POINTER, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) *(EIF_POINTER *)(RTCW(loc16)+ _PTROFF_4_2_0_3_0_0_))(
												*(EIF_POINTER *)(RTCW(loc16)+ _PTROFF_4_2_0_3_0_1_),
												*(EIF_REFERENCE *)(RTCW(loc16) + _REFACS_1_), loc14, loc18);
										}
									}
								}
							}
						}
					}
					RTHOOK(112);
					loc1++;
				}
			}
		}
	}
	RTHOOK(113);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(114);
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2989[Dtype(RTCW(loc8))-644])(loc8));
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(115);
	tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3527[Dtype(RTCW(loc8))-824])(loc8));
	loc12 = (EIF_REFERENCE) tr1;
	for (;;) {
		RTHOOK(116);
		if ((EIF_BOOLEAN)(loc1 == loc2)) break;
		RTHOOK(117);
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R3211[Dtype(RTCW(loc12))-677])(loc12, loc1));
		tr2 = RTCCL(tr1);
		(nstcall = 1, F65_930(RTCW(loc6), tr2));
		RTHOOK(118);
		loc1++;
	}
	RTHOOK(119);
	RTAR(Current, loc8);
	*(EIF_REFERENCE *)(Current + _REFACS_4_) = (EIF_REFERENCE) loc8;
	RTHOOK(120);
	RTAR(Current, loc9);
	*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) loc9;
	RTHOOK(121);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_6_1_) = (EIF_BOOLEAN) loc15;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(122);
	RTLE;
	RTEE;
}

/* {OBJECT_GRAPH_TRAVERSABLE}.raise_unwanted_copy_exception */
void F93_1251 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("raise_unwanted_copy_exception", 92, Current, 1, 0, 1284);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = RTLNS(eif_new_type(117, 0x01).id, 117, _OBJSIZ_5_1_0_1_0_0_0_0_);
	RTHOOK(2);
	tr1 = RTMS_EX_H("An agent has been invoked on a copy of an object during object graph traversal.\012This happens in TUPLE containing objects with copy-semantics or in SPECIAL[XX],\012where XX is a user-defined expanded type.",201,185385518);
	(nstcall = 1, F117_1482(RTCW(loc1), tr1));
	RTHOOK(3);
	(nstcall = 1, F117_1467(RTCW(loc1)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

void EIF_Minit72 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
