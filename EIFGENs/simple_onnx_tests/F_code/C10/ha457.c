/*
 * Code for class HASH_TABLE [G#1, INTEGER_32]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ha457.h"
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

/* {HASH_TABLE}.make */
void F845_4461 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLIU(4);
	
	RTEAA("make", 844, Current, 4, 1, 9860);
	RTSA(dtype);
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
	loc1 = RTLNS(eif_new_type(564, 0x01).id, 564, _OBJSIZ_0_1_0_1_0_0_0_0_);
	RTHOOK(3);
	ti4_1 = eif_max_int32 (arg1,((EIF_INTEGER_32) 2L));
	loc4 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc4 + (EIF_INTEGER_32) (loc4 / ((EIF_INTEGER_32) 2L))) + ((EIF_INTEGER_32) 1L));
	RTHOOK(5);
	ti4_1 = (nstcall = 1, F565_3442(RTCW(loc1), loc4));
	loc4 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(6);
	*(EIF_INTEGER_32 *)(Current + O3580[dtype-843]) = (EIF_INTEGER_32) loc4;
	RTHOOK(7);
	tr1 = RTLNSP2(eif_final_id(Y3607,Y3607_gen_type,dftype,843).id,EO_REF,(EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L)),sizeof(EIF_REFERENCE), EIF_FALSE);
	RT_SPECIAL_COUNT(tr1) = 0;
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O3607[dtype-843]) = (EIF_REFERENCE) tr1;
	RTHOOK(8);
	tr1 = RTLNSP2(eif_final_id(Y3608,Y3608_gen_type,dftype,843).id,0,(EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L)),sizeof(EIF_INTEGER_32), EIF_TRUE);
	RT_SPECIAL_COUNT(tr1) = 0;
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O3608[dtype-843]) = (EIF_REFERENCE) tr1;
	RTHOOK(9);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,773,922,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSP2(typres0.id,0,(EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L)),sizeof(EIF_BOOLEAN), EIF_TRUE);
	}
	(nstcall = -1, F774_4159(RTCW(tr1), (EIF_BOOLEAN) 0, (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L))));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O3610[dtype-843]) = (EIF_REFERENCE) tr1;
	RTHOOK(10);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,760,892,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSP2(typres0.id,0,(EIF_INTEGER_32) (loc4 + ((EIF_INTEGER_32) 1L)),sizeof(EIF_INTEGER_32), EIF_TRUE);
	}
	(nstcall = -1, F761_4159(RTCW(tr1), ((EIF_INTEGER_32) -1L), (EIF_INTEGER_32) (loc4 + ((EIF_INTEGER_32) 1L))));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O3609[dtype-843]) = (EIF_REFERENCE) tr1;
	RTHOOK(11);
	*(EIF_INTEGER_32 *)(Current + O3613[dtype-843]) = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L));
	RTHOOK(12);
	*(EIF_INTEGER_32 *)(Current + O3657[dtype-843]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(13);
	*(EIF_INTEGER_32 *)(Current + O3617[dtype-843]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
	RTHOOK(14);
	*(EIF_INTEGER_32 *)(Current + O3616[dtype-843]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(15);
	tr1 = RTCCL(loc2);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O3571[dtype-843]) = (EIF_REFERENCE) tr1;
	RTHOOK(16);
	*(EIF_BOOLEAN *)(Current + O3612[dtype-843]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(17);
	*(EIF_INTEGER_32 *)(Current + O3611[dtype-843]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(18);
	*(EIF_INTEGER_32 *)(Current + O3621[dtype-843]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2147483645L);
	RTHOOK(19);
	tr1 = RTCCL(loc2);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O3622[dtype-843]) = (EIF_REFERENCE) tr1;
	RTHOOK(20);
	*(EIF_INTEGER_32 *)(Current + O3623[dtype-843]) = (EIF_INTEGER_32) loc3;
	if (RTAL & CK_ENSURE) {
		RTHOOK(21);
		RTCT("breathing_space", EX_POST);
		if ((EIF_BOOLEAN) (arg1 < *(EIF_INTEGER_32 *)(Current + O3580[dtype-843]))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(22);
		RTCT("more_than_minimum", EX_POST);
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current + O3580[dtype-843]) > ((EIF_INTEGER_32) 2L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(23);
		RTCT("no_status", EX_POST);
		if ((EIF_BOOLEAN) !(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3654[dtype-843])(Current))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(24);
	RTLE;
	RTEE;
}

/* {HASH_TABLE}.make_equal */
void F845_4462 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("make_equal", 844, Current, 0, 1, 9861);
	RTSA(dtype);
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
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R3567[dtype-843])(Current, arg1));
	RTHOOK(3);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2929[dtype-564])(Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("breathing_space", EX_POST);
		if ((EIF_BOOLEAN) (arg1 < *(EIF_INTEGER_32 *)(Current + O3580[dtype-843]))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("more_than_minimum", EX_POST);
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current + O3580[dtype-843]) > ((EIF_INTEGER_32) 2L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("no_status", EX_POST);
		if ((EIF_BOOLEAN) !(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3654[dtype-843])(Current))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("compare_objects", EX_POST);
		if (*(EIF_BOOLEAN *)(Current + O2927[dtype-389])) {
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

/* {HASH_TABLE}.make_from_iterable_tuples */
void F845_4463 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,arg1);
	RTLR(3,loc3);
	RTLR(4,loc4);
	RTLR(5,tr1);
	RTLR(6,loc1);
	RTLR(7,tr2);
	RTLIU(8);
	
	RTEAA("make_from_iterable_tuples", 844, Current, 4, 1, 9862);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc2 = arg1;
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,565,0xFF01,0xFFF9,2,886,0,0,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = eif_final_id(Y2830,Y2830_gen_type,dftype,252);
			typarr0[6] = l_type.annotations | 0xFF00;
			typarr0[7] = l_type.id;
		}
		{
			EIF_TYPE l_type;
			l_type = eif_final_id(Y2967,Y2967_gen_type,dftype,480);
			typarr0[8] = l_type.annotations | 0xFF00;
			typarr0[9] = l_type.id;
		}
		
		typres0 = eif_compound_id(dftype, typarr0);
		loc2 = RTRV(typres0,loc2);
	}
	if (EIF_TEST(loc2)) {
		RTHOOK(2);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2989[Dtype(loc2)-644])(loc2));
	} else {
		RTHOOK(3);
		loc3 = arg1;
		{
			EIF_TYPE_INDEX typarr0[] = {0xFF01,647,0xFF01,0xFFF9,2,886,0,0,0,0,0xFFFF};
			EIF_TYPE typres0;
			{
				EIF_TYPE l_type;
				l_type = eif_final_id(Y2830,Y2830_gen_type,dftype,252);
				typarr0[6] = l_type.annotations | 0xFF00;
				typarr0[7] = l_type.id;
			}
			{
				EIF_TYPE l_type;
				l_type = eif_final_id(Y2967,Y2967_gen_type,dftype,480);
				typarr0[8] = l_type.annotations | 0xFF00;
				typarr0[9] = l_type.id;
			}
			
			typres0 = eif_compound_id(dftype, typarr0);
			loc3 = RTRV(typres0,loc3);
		}
		if (EIF_TEST(loc3)) {
			RTHOOK(4);
			ti4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3213[Dtype(loc3)-677])(loc3));
			ti4_3 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3212[Dtype(loc3)-677])(loc3));
			ti4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_2 - ti4_3) + ((EIF_INTEGER_32) 1L));
		} else {
			RTHOOK(5);
			ti4_1 = ((EIF_INTEGER_32) 0L);
		}
	}
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R3567[dtype-843])(Current, ti4_1));
	RTHOOK(6);
	tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2829[Dtype(RTCW(arg1))-267])(arg1));
	loc4 = (EIF_REFERENCE) tr1;
	for (;;) {
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2815[Dtype(loc4)-245])(loc4));
		if (tb1) break;
		RTHOOK(7);
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2814[Dtype(loc4)-245])(loc4));
		loc1 = (EIF_REFERENCE) tr1;
		RTHOOK(8);
		tr1 = eif_boxed_item(loc1,1);
		tr2 = RTCCL(tr1);
		ti4_1 = eif_integer_32_item(RTCW(loc1),2);
		(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R2966[dtype-677])(Current, tr2, (EIF_REFERENCE) &ti4_1));
		RTHOOK(9);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2816[Dtype(loc4)-245])(loc4));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
}

/* {HASH_TABLE}.accommodate */
void F845_4464 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,loc3);
	RTLR(2,tr1);
	RTLR(3,loc4);
	RTLR(4,loc5);
	RTLR(5,tr2);
	RTLR(6,tr3);
	RTLIU(7);
	
	RTEAA("accommodate", 844, Current, 5, 1, 9863);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("n >= 0", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current + O3657[dtype-843]);
		in_assertion = 0;
	}
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + O3608[dtype-843]);
	ti4_2 = (nstcall = 1, F761_4171(tr1));
	ti4_3 = eif_max_int32 (ti4_2,arg1);
	loc3 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R3605[dtype-843])(Current, ti4_3));
	RTHOOK(3);
	loc4 = *(EIF_REFERENCE *)(Current + O3607[dtype-843]);
	RTHOOK(4);
	loc5 = *(EIF_REFERENCE *)(Current + O3608[dtype-843]);
	RTHOOK(5);
	ti4_2 = (nstcall = 1, F761_4171(loc5));
	loc2 = (EIF_INTEGER_32) ti4_2;
	for (;;) {
		RTHOOK(6);
		if ((EIF_BOOLEAN)(loc1 == loc2)) break;
		RTHOOK(7);
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_INTEGER_32)) R3625[dtype-843])(Current, loc1))) {
			RTHOOK(8);
			tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R3211[Dtype(RTCW(loc4))-677])(loc4, loc1));
			tr2 = RTCCL(tr1);
			ti4_2 = (nstcall = 1, F761_4161(RTCW(loc5), loc1));
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R2965[Dtype(RTCW(loc3))-677])(loc3, tr2, (EIF_REFERENCE) &ti4_2));
		}
		RTHOOK(9);
		loc1++;
	}
	RTHOOK(10);
	if (*(EIF_BOOLEAN *)(Current + O3612[dtype-843])) {
		RTHOOK(11);
		tr1 = *(EIF_REFERENCE *)(Current + O3609[dtype-843]);
		ti4_2 = (nstcall = 1, F761_4161(RTCW(tr1), *(EIF_INTEGER_32 *)(Current + O3580[dtype-843])));
		loc1 = (EIF_INTEGER_32) ti4_2;
		RTHOOK(12);
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R3211[Dtype(RTCW(loc4))-677])(loc4, loc1));
		tr2 = RTCCL(tr1);
		tr3 = *(EIF_REFERENCE *)(Current + O3608[dtype-843]);
		ti4_2 = (nstcall = 1, F761_4161(RTCW(tr3), loc1));
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R2965[Dtype(RTCW(loc3))-677])(loc3, tr2, (EIF_REFERENCE) &ti4_2));
	}
	RTHOOK(13);
	tr1 = *(EIF_REFERENCE *)(RTCW(loc3) + O3607[Dtype(loc3)-843]);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3628[dtype-843])(Current, tr1));
	RTHOOK(14);
	tr1 = *(EIF_REFERENCE *)(RTCW(loc3) + O3608[Dtype(loc3)-843]);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3630[dtype-843])(Current, tr1));
	RTHOOK(15);
	tr1 = *(EIF_REFERENCE *)(RTCW(loc3) + O3610[Dtype(loc3)-843]);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3631[dtype-843])(Current, tr1));
	RTHOOK(16);
	tr1 = *(EIF_REFERENCE *)(RTCW(loc3) + O3609[Dtype(loc3)-843]);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3632[dtype-843])(Current, tr1));
	RTHOOK(17);
	ti4_2 = *(EIF_INTEGER_32 *)(RTCW(loc3) + O3580[Dtype(loc3)-843]);
	*(EIF_INTEGER_32 *)(Current + O3580[dtype-843]) = (EIF_INTEGER_32) ti4_2;
	RTHOOK(18);
	ti4_2 = *(EIF_INTEGER_32 *)(RTCW(loc3) + O3613[Dtype(loc3)-843]);
	*(EIF_INTEGER_32 *)(Current + O3613[dtype-843]) = (EIF_INTEGER_32) ti4_2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(19);
		RTCT("count_not_changed", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O3657[dtype-843]) == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(20);
		RTCT("breathing_space", EX_POST);
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current + O3657[dtype-843]) < *(EIF_INTEGER_32 *)(Current + O3580[dtype-843]))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(21);
	RTLE;
	RTEE;
}

/* {HASH_TABLE}.found_item */
EIF_REFERENCE F845_4465 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O3571[Dtype(Current)-843]);
}


/* {HASH_TABLE}.definite_item */
EIF_REFERENCE F845_4466 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("definite_item", 844, Current, 2, 1, 9865);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_key", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R2964[dtype-677])(Current, (EIF_REFERENCE) &arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCK;
		RTHOOK(2);
		RTCT("valid_key", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R2964[dtype-677])(Current, (EIF_REFERENCE) &arg1)), label_2);
		RTCK;
		RTJB;
label_2:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc1 = *(EIF_INTEGER_32 *)(Current + O3611[dtype-843]);
	RTHOOK(4);
	loc2 = *(EIF_INTEGER_32 *)(Current + O3616[dtype-843]);
	RTHOOK(5);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3636[dtype-843])(Current, (EIF_REFERENCE) &arg1));
	RTHOOK(6);
	tr1 = *(EIF_REFERENCE *)(Current + O3607[dtype-843]);
	ti4_1 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3614[dtype-843])(Current));
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R3211[Dtype(RTCW(tr1))-677])(tr1, ti4_1));
	Result = (EIF_REFERENCE) RTCCL(tr2);
	RTHOOK(7);
	*(EIF_INTEGER_32 *)(Current + O3616[dtype-843]) = (EIF_INTEGER_32) loc2;
	RTHOOK(8);
	*(EIF_INTEGER_32 *)(Current + O3611[dtype-843]) = (EIF_INTEGER_32) loc1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
	return Result;
}

/* {HASH_TABLE}.item */
EIF_REFERENCE F845_4467 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc12 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Result);
	RTLR(4,loc9);
	RTLR(5,loc10);
	RTLR(6,loc11);
	RTLIU(7);
	
	RTEAA("item", 844, Current, 12, 1, 9866);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
	RTHOOK(2);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg1 == loc1) || EIF_FALSE)) {
		RTHOOK(3);
		if (*(EIF_BOOLEAN *)(Current + O3612[dtype-843])) {
			RTHOOK(4);
			tr1 = *(EIF_REFERENCE *)(Current + O3607[dtype-843]);
			tr2 = *(EIF_REFERENCE *)(Current + O3609[dtype-843]);
			ti4_1 = (nstcall = 1, F761_4161(RTCW(tr2), *(EIF_INTEGER_32 *)(Current + O3580[dtype-843])));
			tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R3211[Dtype(RTCW(tr1))-677])(tr1, ti4_1));
			Result = (EIF_REFERENCE) RTCCL(tr2);
		}
	} else {
		RTHOOK(5);
		loc9 = *(EIF_REFERENCE *)(Current + O3608[dtype-843]);
		RTHOOK(6);
		loc10 = *(EIF_REFERENCE *)(Current + O3609[dtype-843]);
		RTHOOK(7);
		loc11 = *(EIF_REFERENCE *)(Current + O3610[dtype-843]);
		RTHOOK(8);
		loc6 = *(EIF_INTEGER_32 *)(Current + O3580[dtype-843]);
		RTHOOK(9);
		loc8 = (EIF_INTEGER_32) loc6;
		RTHOOK(10);
		loc2 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_REFERENCE)) R3579[dtype-843])(Current, (EIF_REFERENCE) &arg1));
		RTHOOK(11);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) 1L) + (EIF_INTEGER_32) (loc2 % (EIF_INTEGER_32) (loc6 - ((EIF_INTEGER_32) 1L))));
		RTHOOK(12);
		loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 % loc6) - loc3);
		for (;;) {
			RTHOOK(13);
			if ((EIF_BOOLEAN)(loc8 == ((EIF_INTEGER_32) 0L))) break;
			RTHOOK(14);
			loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc5 + loc3) % loc6);
			RTHOOK(15);
			ti4_1 = (nstcall = 1, F761_4161(RTCW(loc10), loc5));
			loc4 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(16);
			if ((EIF_BOOLEAN) (loc4 >= ((EIF_INTEGER_32) 0L))) {
				RTHOOK(17);
				ti4_1 = (nstcall = 1, F761_4161(RTCW(loc9), loc4));
				loc12 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(18);
				if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R3581[dtype-843])(Current, (EIF_REFERENCE) &loc12, (EIF_REFERENCE) &arg1))) {
					RTHOOK(19);
					loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
					RTHOOK(20);
					tr1 = *(EIF_REFERENCE *)(Current + O3607[dtype-843]);
					tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R3211[Dtype(RTCW(tr1))-677])(tr1, loc4));
					Result = (EIF_REFERENCE) RTCCL(tr2);
				}
			} else {
				RTHOOK(21);
				if ((EIF_BOOLEAN)(loc4 == ((EIF_INTEGER_32) -1L))) {
					RTHOOK(22);
					loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				} else {
					RTHOOK(23);
					if ((EIF_BOOLEAN)(loc7 == ((EIF_INTEGER_32) -1L))) {
						RTHOOK(24);
						loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) -loc4 + ((EIF_INTEGER_32) -2L));
						
						RTHOOK(25);
						tb1 = (nstcall = 1, F774_4161(RTCW(loc11), loc4));
						if ((EIF_BOOLEAN) !tb1) {
							RTHOOK(26);
							loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
						} else {
							RTHOOK(27);
							loc7 = (EIF_INTEGER_32) loc5;
						}
					}
				}
			}
			RTHOOK(28);
			loc8--;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(29);
		RTCT("default_value_if_not_present", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN) !(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R2964[dtype-677])(Current, (EIF_REFERENCE) &arg1))) {
			tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3635[dtype-843])(Current));
			tb1 = RTCEQ(Result, tr1);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(30);
	RTLE;
	RTEE;
	return Result;
}

/* {HASH_TABLE}.at */
EIF_REFERENCE F845_4468 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc12 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Result);
	RTLR(4,loc9);
	RTLR(5,loc10);
	RTLR(6,loc11);
	RTLIU(7);
	
	RTEAA("at", 844, Current, 12, 1, 9867);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
	RTHOOK(2);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg1 == loc1) || EIF_FALSE)) {
		RTHOOK(3);
		if (*(EIF_BOOLEAN *)(Current + O3612[dtype-843])) {
			RTHOOK(4);
			tr1 = *(EIF_REFERENCE *)(Current + O3607[dtype-843]);
			tr2 = *(EIF_REFERENCE *)(Current + O3609[dtype-843]);
			ti4_1 = (nstcall = 1, F761_4161(RTCW(tr2), *(EIF_INTEGER_32 *)(Current + O3580[dtype-843])));
			tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R3211[Dtype(RTCW(tr1))-677])(tr1, ti4_1));
			Result = (EIF_REFERENCE) RTCCL(tr2);
		}
	} else {
		RTHOOK(5);
		loc9 = *(EIF_REFERENCE *)(Current + O3608[dtype-843]);
		RTHOOK(6);
		loc10 = *(EIF_REFERENCE *)(Current + O3609[dtype-843]);
		RTHOOK(7);
		loc11 = *(EIF_REFERENCE *)(Current + O3610[dtype-843]);
		RTHOOK(8);
		loc6 = *(EIF_INTEGER_32 *)(Current + O3580[dtype-843]);
		RTHOOK(9);
		loc8 = (EIF_INTEGER_32) loc6;
		RTHOOK(10);
		loc2 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_REFERENCE)) R3579[dtype-843])(Current, (EIF_REFERENCE) &arg1));
		RTHOOK(11);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) 1L) + (EIF_INTEGER_32) (loc2 % (EIF_INTEGER_32) (loc6 - ((EIF_INTEGER_32) 1L))));
		RTHOOK(12);
		loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 % loc6) - loc3);
		for (;;) {
			RTHOOK(13);
			if ((EIF_BOOLEAN)(loc8 == ((EIF_INTEGER_32) 0L))) break;
			RTHOOK(14);
			loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc5 + loc3) % loc6);
			RTHOOK(15);
			ti4_1 = (nstcall = 1, F761_4161(RTCW(loc10), loc5));
			loc4 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(16);
			if ((EIF_BOOLEAN) (loc4 >= ((EIF_INTEGER_32) 0L))) {
				RTHOOK(17);
				ti4_1 = (nstcall = 1, F761_4161(RTCW(loc9), loc4));
				loc12 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(18);
				if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R3581[dtype-843])(Current, (EIF_REFERENCE) &loc12, (EIF_REFERENCE) &arg1))) {
					RTHOOK(19);
					loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
					RTHOOK(20);
					tr1 = *(EIF_REFERENCE *)(Current + O3607[dtype-843]);
					tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R3211[Dtype(RTCW(tr1))-677])(tr1, loc4));
					Result = (EIF_REFERENCE) RTCCL(tr2);
				}
			} else {
				RTHOOK(21);
				if ((EIF_BOOLEAN)(loc4 == ((EIF_INTEGER_32) -1L))) {
					RTHOOK(22);
					loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				} else {
					RTHOOK(23);
					if ((EIF_BOOLEAN)(loc7 == ((EIF_INTEGER_32) -1L))) {
						RTHOOK(24);
						loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) -loc4 + ((EIF_INTEGER_32) -2L));
						
						RTHOOK(25);
						tb1 = (nstcall = 1, F774_4161(RTCW(loc11), loc4));
						if ((EIF_BOOLEAN) !tb1) {
							RTHOOK(26);
							loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
						} else {
							RTHOOK(27);
							loc7 = (EIF_INTEGER_32) loc5;
						}
					}
				}
			}
			RTHOOK(28);
			loc8--;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(29);
		RTCT("default_value_if_not_present", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN) !(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R2964[dtype-677])(Current, (EIF_REFERENCE) &arg1))) {
			tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3635[dtype-843])(Current));
			tb1 = RTCEQ(Result, tr1);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(30);
	RTLE;
	RTEE;
	return Result;
}

/* {HASH_TABLE}.has */
EIF_BOOLEAN F845_4469 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc12 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc9);
	RTLR(2,loc10);
	RTLR(3,loc11);
	RTLIU(4);
	
	RTEAA("has", 844, Current, 12, 1, 9868);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
	RTHOOK(2);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg1 == loc1) || EIF_FALSE)) {
		RTHOOK(3);
		if (*(EIF_BOOLEAN *)(Current + O3612[dtype-843])) {
			RTHOOK(4);
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	} else {
		RTHOOK(5);
		loc9 = *(EIF_REFERENCE *)(Current + O3608[dtype-843]);
		RTHOOK(6);
		loc10 = *(EIF_REFERENCE *)(Current + O3609[dtype-843]);
		RTHOOK(7);
		loc11 = *(EIF_REFERENCE *)(Current + O3610[dtype-843]);
		RTHOOK(8);
		loc6 = *(EIF_INTEGER_32 *)(Current + O3580[dtype-843]);
		RTHOOK(9);
		loc8 = (EIF_INTEGER_32) loc6;
		RTHOOK(10);
		loc2 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_REFERENCE)) R3579[dtype-843])(Current, (EIF_REFERENCE) &arg1));
		RTHOOK(11);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) 1L) + (EIF_INTEGER_32) (loc2 % (EIF_INTEGER_32) (loc6 - ((EIF_INTEGER_32) 1L))));
		RTHOOK(12);
		loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 % loc6) - loc3);
		for (;;) {
			RTHOOK(13);
			if ((EIF_BOOLEAN)(loc8 == ((EIF_INTEGER_32) 0L))) break;
			RTHOOK(14);
			loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc5 + loc3) % loc6);
			RTHOOK(15);
			ti4_1 = (nstcall = 1, F761_4161(RTCW(loc10), loc5));
			loc4 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(16);
			if ((EIF_BOOLEAN) (loc4 >= ((EIF_INTEGER_32) 0L))) {
				RTHOOK(17);
				ti4_1 = (nstcall = 1, F761_4161(RTCW(loc9), loc4));
				loc12 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(18);
				if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R3581[dtype-843])(Current, (EIF_REFERENCE) &loc12, (EIF_REFERENCE) &arg1))) {
					RTHOOK(19);
					loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
					RTHOOK(20);
					Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				}
			} else {
				RTHOOK(21);
				if ((EIF_BOOLEAN)(loc4 == ((EIF_INTEGER_32) -1L))) {
					RTHOOK(22);
					loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				} else {
					RTHOOK(23);
					if ((EIF_BOOLEAN)(loc7 == ((EIF_INTEGER_32) -1L))) {
						RTHOOK(24);
						loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) -loc4 + ((EIF_INTEGER_32) -2L));
						
						RTHOOK(25);
						tb1 = (nstcall = 1, F774_4161(RTCW(loc11), loc4));
						if ((EIF_BOOLEAN) !tb1) {
							RTHOOK(26);
							loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
						} else {
							RTHOOK(27);
							loc7 = (EIF_INTEGER_32) loc5;
						}
					}
				}
			}
			RTHOOK(28);
			loc8--;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(29);
		RTCT("default_case", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)(arg1 == (nstcall = 0, eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3634[dtype-843])(Current)))) {
			tb1 = (EIF_BOOLEAN)(Result == *(EIF_BOOLEAN *)(Current + O3612[dtype-843]));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(30);
	RTLE;
	RTEE;
	return Result;
}

/* {HASH_TABLE}.has_key */
EIF_BOOLEAN F845_4470 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,loc2);
	RTLIU(4);
	
	RTEAA("has_key", 844, Current, 2, 1, 9869);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = *(EIF_INTEGER_32 *)(Current + O3611[dtype-843]);
	RTHOOK(2);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3636[dtype-843])(Current, (EIF_REFERENCE) &arg1));
	RTHOOK(3);
	Result = (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3587[dtype-843])(Current));
	RTHOOK(4);
	if (Result) {
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current + O3607[dtype-843]);
		ti4_1 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3614[dtype-843])(Current));
		tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R3211[Dtype(RTCW(tr1))-677])(tr1, ti4_1));
		tr1 = RTCCL(tr2);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + O3571[dtype-843]) = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(6);
		tr1 = RTCCL(loc2);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + O3571[dtype-843]) = (EIF_REFERENCE) tr1;
	}
	RTHOOK(7);
	*(EIF_INTEGER_32 *)(Current + O3611[dtype-843]) = (EIF_INTEGER_32) loc1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("default_case", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)(arg1 == (nstcall = 0, eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3634[dtype-843])(Current)))) {
			tb1 = (EIF_BOOLEAN)(Result == *(EIF_BOOLEAN *)(Current + O3612[dtype-843]));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("found", EX_POST);
		if ((EIF_BOOLEAN)(Result == (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3587[dtype-843])(Current)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("item_if_found", EX_POST);
		tb1 = '\01';
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3587[dtype-843])(Current))) {
			tr1 = *(EIF_REFERENCE *)(Current + O3571[dtype-843]);
			tr2 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R3572[dtype-843])(Current, (EIF_REFERENCE) &arg1));
			tb1 = RTCEQ(tr1, tr2);
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

/* {HASH_TABLE}.has_item */
EIF_BOOLEAN F845_4471 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc3);
	RTLIU(5);
	
	RTEAA("has_item", 844, Current, 3, 1, 9870);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if (*(EIF_BOOLEAN *)(Current + O3612[dtype-843])) {
		RTHOOK(2);
		tr1 = *(EIF_REFERENCE *)(Current + O3607[dtype-843]);
		tr2 = *(EIF_REFERENCE *)(Current + O3609[dtype-843]);
		ti4_1 = (nstcall = 1, F761_4161(RTCW(tr2), *(EIF_INTEGER_32 *)(Current + O3580[dtype-843])));
		tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R3211[Dtype(RTCW(tr1))-677])(tr1, ti4_1));
		tr1 = tr2;
		Result = (EIF_BOOLEAN) RTCEQ(arg1, tr1);
	}
	RTHOOK(3);
	if ((EIF_BOOLEAN) !Result) {
		RTHOOK(4);
		loc3 = *(EIF_REFERENCE *)(Current + O3607[dtype-843]);
		RTHOOK(5);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3396[Dtype(RTCW(loc3))-759])(loc3));
		loc2 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(6);
		if (*(EIF_BOOLEAN *)(Current + O2927[dtype-389])) {
			for (;;) {
				RTHOOK(7);
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc1 == loc2) || Result)) break;
				RTHOOK(8);
				Result = '\0';
				if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_INTEGER_32)) R3625[dtype-843])(Current, loc1))) {
					tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R3211[Dtype(RTCW(loc3))-677])(loc3, loc1));
					Result = RTEQ(arg1, tr1);
				}
				RTHOOK(9);
				loc1++;
			}
		} else {
			for (;;) {
				RTHOOK(10);
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc1 == loc2) || Result)) break;
				RTHOOK(11);
				Result = '\0';
				if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_INTEGER_32)) R3625[dtype-843])(Current, loc1))) {
					tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R3211[Dtype(RTCW(loc3))-677])(loc3, loc1));
					Result = RTCEQ(arg1, tr1);
				}
				RTHOOK(12);
				loc1++;
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(13);
		RTCT("not_found_in_empty", EX_POST);
		tb1 = '\01';
		if (Result) {
			tb1 = (EIF_BOOLEAN) !(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2925[dtype-564])(Current));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTLE;
	RTEE;
	return Result;
}

/* {HASH_TABLE}.current_keys */
EIF_REFERENCE F845_4472 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("current_keys", 844, Current, 2, 0, 9871);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2925[dtype-564])(Current))) {
		RTHOOK(2);
		{
			EIF_TYPE_INDEX typarr0[] = {0xFF01,679,0,0,0xFFFF};
			EIF_TYPE typres0;
			{
				EIF_TYPE l_type;
				l_type = eif_final_id(Y2967,Y2967_gen_type,dftype,480);
				typarr0[2] = l_type.annotations | 0xFF00;
				typarr0[3] = l_type.id;
			}
			
			typres0 = eif_compound_id(dftype, typarr0);
			Result = RTLNS(typres0.id, 679, _OBJSIZ_1_1_0_2_0_0_0_0_);
		}
		(nstcall = -1, F680_3905(RTCW(Result)));
	} else {
		RTHOOK(3);
		loc2 = *(EIF_INTEGER_32 *)(Current + O3613[dtype-843]);
		RTHOOK(4);
		(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R3593[dtype-843])(Current));
		RTHOOK(5);
		{
			EIF_TYPE_INDEX typarr0[] = {0xFF01,679,0,0,0xFFFF};
			EIF_TYPE typres0;
			{
				EIF_TYPE l_type;
				l_type = eif_final_id(Y2967,Y2967_gen_type,dftype,480);
				typarr0[2] = l_type.annotations | 0xFF00;
				typarr0[3] = l_type.id;
			}
			
			typres0 = eif_compound_id(dftype, typarr0);
			Result = RTLNS(typres0.id, 679, _OBJSIZ_1_1_0_2_0_0_0_0_);
		}
		ti4_1 = (nstcall = 0, eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3577[dtype-843])(Current));
		ti4_2 = *(EIF_INTEGER_32 *)(Current + O3657[dtype-843]);
		(nstcall = -1, F680_3906(RTCW(Result), ti4_1, ((EIF_INTEGER_32) 1L), ti4_2));
		RTHOOK(6);
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		RTHOOK(7);
		(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R3594[dtype-843])(Current));
		for (;;) {
			RTHOOK(8);
			if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3590[dtype-843])(Current))) break;
			RTHOOK(9);
			loc1++;
			RTHOOK(10);
			ti4_1 = (nstcall = 0, eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3577[dtype-843])(Current));
			(nstcall = 1, F680_3930(RTCW(Result), ti4_1, loc1));
			RTHOOK(11);
			(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R3594[dtype-843])(Current));
		}
		RTHOOK(12);
		*(EIF_INTEGER_32 *)(Current + O3613[dtype-843]) = (EIF_INTEGER_32) loc2;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(13);
		RTCT("good_count", EX_POST);
		ti4_1 = (nstcall = 1, F680_3918(RTCW(Result)));
		if ((EIF_BOOLEAN)(ti4_1 == *(EIF_INTEGER_32 *)(Current + O3657[dtype-843]))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTLE;
	RTEE;
	return Result;
}

/* {HASH_TABLE}.item_for_iteration */
EIF_REFERENCE F845_4473 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("item_for_iteration", 844, Current, 0, 0, 9872);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_off", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3590[dtype-843])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + O3607[dtype-843]);
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R3211[Dtype(RTCW(tr1))-677])(tr1, *(EIF_INTEGER_32 *)(Current + O3613[dtype-843])));
	Result = (EIF_REFERENCE) RTCCL(tr2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {HASH_TABLE}.key_for_iteration */
EIF_INTEGER_32 F845_4474 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("key_for_iteration", 844, Current, 0, 0, 9873);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_off", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3590[dtype-843])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + O3608[dtype-843]);
	ti4_1 = (nstcall = 1, F761_4161(RTCW(tr1), *(EIF_INTEGER_32 *)(Current + O3613[dtype-843])));
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {HASH_TABLE}.cursor */
EIF_REFERENCE F845_4475 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("cursor", 844, Current, 0, 0, 9874);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNS(eif_new_type(172, 0x01).id, 172, _OBJSIZ_0_0_0_1_0_0_0_0_);
	(nstcall = -1, F173_1844(RTCW(Result), *(EIF_INTEGER_32 *)(Current + O3613[dtype-843])));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("cursor_not_void", EX_POST);
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

/* {HASH_TABLE}.new_cursor */
EIF_REFERENCE F845_4476 (EIF_REFERENCE Current)
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
	
	RTEAA("new_cursor", 844, Current, 0, 0, 9875);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,322,0,0,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = eif_final_id(Y2830,Y2830_gen_type,Dftype(Current),252);
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		{
			EIF_TYPE l_type;
			l_type = eif_final_id(Y2967,Y2967_gen_type,Dftype(Current),480);
			typarr0[4] = l_type.annotations | 0xFF00;
			typarr0[5] = l_type.id;
		}
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		Result = RTLNS(typres0.id, 322, _OBJSIZ_1_1_0_4_0_0_0_0_);
	}
	(nstcall = -1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2878[Dtype(RTCW(Result))-304])(Result, Current));
	RTHOOK(2);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2875[Dtype(RTCW(Result))-304])(Result));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("result_attached", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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

/* {HASH_TABLE}.iteration_item */
EIF_REFERENCE F845_4477 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("iteration_item", 844, Current, 0, 1, 9876);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_INTEGER_32)) R3215[dtype-677])(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + O3607[dtype-843]);
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R3211[Dtype(RTCW(tr1))-677])(tr1, arg1));
	Result = (EIF_REFERENCE) RTCCL(tr2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {HASH_TABLE}.hash_code_of */
EIF_INTEGER_32 F845_4478 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("hash_code_of", 844, Current, 0, 1, 9877);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (arg1)));
	Result = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("non_negative", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
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

/* {HASH_TABLE}.count */
EIF_INTEGER_32 F845_4479 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current + O3657[Dtype(Current)-843]);
}


/* {HASH_TABLE}.capacity */
EIF_INTEGER_32 F845_4480 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current + O3580[Dtype(Current)-843]);
}


/* {HASH_TABLE}.occurrences */
EIF_INTEGER_32 F845_4481 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTEAA("occurrences", 844, Current, 1, 1, 9880);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = *(EIF_INTEGER_32 *)(Current + O3613[dtype-843]);
	RTHOOK(2);
	if (*(EIF_BOOLEAN *)(Current + O2927[dtype-389])) {
		RTHOOK(3);
		(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R3593[dtype-843])(Current));
		for (;;) {
			RTHOOK(4);
			if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3590[dtype-843])(Current))) break;
			RTHOOK(5);
			if (RTEQ((nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3576[dtype-843])(Current)), arg1)) {
				RTHOOK(6);
				Result++;
			}
			RTHOOK(7);
			(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R3594[dtype-843])(Current));
		}
	} else {
		RTHOOK(8);
		(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R3593[dtype-843])(Current));
		for (;;) {
			RTHOOK(9);
			if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3590[dtype-843])(Current))) break;
			RTHOOK(10);
			if (RTCEQ((nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3576[dtype-843])(Current)), arg1)) {
				RTHOOK(11);
				Result++;
			}
			RTHOOK(12);
			(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R3594[dtype-843])(Current));
		}
	}
	RTHOOK(13);
	*(EIF_INTEGER_32 *)(Current + O3613[dtype-843]) = (EIF_INTEGER_32) loc1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(14);
		RTCT("non_negative_occurrences", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
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

/* {HASH_TABLE}.iteration_lower */
EIF_INTEGER_32 F845_4482 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("iteration_lower", 844, Current, 0, 0, 9881);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R3598[dtype-843])(Current, ((EIF_INTEGER_32) -1L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {HASH_TABLE}.iteration_upper */
EIF_INTEGER_32 F845_4483 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("iteration_upper", 844, Current, 0, 0, 9882);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + O3608[dtype-843]);
	ti4_1 = (nstcall = 1, F761_4171(tr1));
	Result = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R3599[dtype-843])(Current, ti4_1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {HASH_TABLE}.is_equal */
EIF_BOOLEAN F845_4484 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTEAA("is_equal", 844, Current, 1, 1, 9883);
	RTSA(dtype);
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
	tb1 = '\0';
	tb2 = '\0';
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O3657[Dtype(arg1)-843]);
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O3657[dtype-843]) == ti4_1)) {
		tb3 = *(EIF_BOOLEAN *)(RTCW(arg1) + O2927[Dtype(arg1)-389]);
		tb2 = (EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current + O2927[dtype-389]) == tb3);
	}
	if (tb2) {
		tb2 = *(EIF_BOOLEAN *)(RTCW(arg1) + O3612[Dtype(arg1)-843]);
		tb1 = (EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current + O3612[dtype-843]) == tb2);
	}
	if (tb1) {
		RTHOOK(3);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(4);
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2829[dtype-267])(Current));
		loc1 = (EIF_REFERENCE) tr1;
		for (;;) {
			tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2815[Dtype(loc1)-245])(loc1));
			if (tb1) break;
			RTHOOK(5);
			if ((EIF_BOOLEAN) !Result) break;
			RTHOOK(6);
			ti4_1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2827[Dtype(loc1)-321])(loc1));
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3596[Dtype(RTCW(arg1))-843])(arg1, (EIF_REFERENCE) &ti4_1));
			RTHOOK(7);
			tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3587[Dtype(RTCW(arg1))-843])(arg1));
			if (tb2) {
				RTHOOK(8);
				if (*(EIF_BOOLEAN *)(Current + O2927[dtype-389])) {
					RTHOOK(9);
					tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2814[Dtype(loc1)-245])(loc1));
					tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3571[Dtype(RTCW(arg1))-843])(arg1));
					Result = (EIF_BOOLEAN) RTEQ(tr1, tr2);
				} else {
					RTHOOK(10);
					tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2814[Dtype(loc1)-245])(loc1));
					tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3571[Dtype(RTCW(arg1))-843])(arg1));
					Result = (EIF_BOOLEAN) RTCEQ(tr1, tr2);
				}
			} else {
				RTHOOK(11);
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			}
			RTHOOK(12);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2816[Dtype(loc1)-245])(loc1));
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
		tb2 = '\01';
		if ((nstcall = 0, F1_9(Current, arg1))) {
			tb2 = Result;
		}
		if (tb2) {
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

/* {HASH_TABLE}.same_keys */
EIF_BOOLEAN F845_4485 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
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
	
	RTEAA("same_keys", 844, Current, 0, 2, 9884);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_BOOLEAN) (arg1 == arg2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {HASH_TABLE}.disjoint */
EIF_BOOLEAN F845_4486 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("disjoint", 844, Current, 1, 1, 9885);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = '\01';
	tb1 = '\01';
	if (!(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2925[dtype-564])(Current))) {
		tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2925[Dtype(RTCW(arg1))-564])(arg1));
		tb1 = tb2;
	}
	if (!tb1) {
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2829[Dtype(RTCW(arg1))-267])(arg1));
		loc1 = (EIF_REFERENCE) tr1;
		tb1 = EIF_FALSE;
		for (;;) {
			if (tb1) break;
			tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2815[Dtype(loc1)-245])(loc1));
			if (tb2) break;
			RTHOOK(2);
			ti4_1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2827[Dtype(loc1)-321])(loc1));
			tb1 = (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R2964[dtype-677])(Current, (EIF_REFERENCE) &ti4_1));
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2816[Dtype(loc1)-245])(loc1));
		}
		Result = (EIF_BOOLEAN) !tb1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {HASH_TABLE}.full */
EIF_BOOLEAN F845_4487 (EIF_REFERENCE Current)
{
	return (EIF_BOOLEAN) EIF_FALSE;
}

/* {HASH_TABLE}.extendible */
EIF_BOOLEAN F845_4488 (EIF_REFERENCE Current)
{
	return (EIF_BOOLEAN) EIF_FALSE;
}

/* {HASH_TABLE}.conflict */
EIF_BOOLEAN F845_4489 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("conflict", 844, Current, 0, 0, 9888);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O3616[dtype-843]);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {HASH_TABLE}.inserted */
EIF_BOOLEAN F845_4490 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("inserted", 844, Current, 0, 0, 9889);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O3616[dtype-843]);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 4L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {HASH_TABLE}.replaced */
EIF_BOOLEAN F845_4491 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("replaced", 844, Current, 0, 0, 9890);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O3616[dtype-843]);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 32L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {HASH_TABLE}.removed */
EIF_BOOLEAN F845_4492 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("removed", 844, Current, 0, 0, 9891);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O3616[dtype-843]);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 16L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {HASH_TABLE}.found */
EIF_BOOLEAN F845_4493 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("found", 844, Current, 0, 0, 9892);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O3616[dtype-843]);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 2L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {HASH_TABLE}.not_found */
EIF_BOOLEAN F845_4494 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("not_found", 844, Current, 0, 0, 9893);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O3616[dtype-843]);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 8L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {HASH_TABLE}.after */
EIF_BOOLEAN F845_4495 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("after", 844, Current, 0, 0, 9894);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_INTEGER_32)) R3627[dtype-843])(Current, *(EIF_INTEGER_32 *)(Current + O3613[dtype-843])));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {HASH_TABLE}.off */
EIF_BOOLEAN F845_4496 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("off", 844, Current, 0, 0, 9895);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_INTEGER_32)) R3627[dtype-843])(Current, *(EIF_INTEGER_32 *)(Current + O3613[dtype-843])));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {HASH_TABLE}.valid_cursor */
EIF_BOOLEAN F845_4497 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,loc2);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("valid_cursor", 844, Current, 2, 1, 9896);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("c_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc2 = arg1;
	loc2 = RTRV(eif_new_type(172, 0x01),loc2);
	if (EIF_TEST(loc2)) {
		RTHOOK(3);
		ti4_1 = *(EIF_INTEGER_32 *)(loc2+ _LNGOFF_0_0_0_0_);
		loc1 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(4);
		Result = '\01';
		if (!(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_INTEGER_32)) R3627[dtype-843])(Current, loc1))) {
			Result = (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_INTEGER_32)) R3626[dtype-843])(Current, loc1));
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {HASH_TABLE}.valid_key */
EIF_BOOLEAN F845_4498 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("valid_key", 844, Current, 0, 1, 9897);
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

/* {HASH_TABLE}.valid_iteration_index */
EIF_BOOLEAN F845_4499 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("valid_iteration_index", 844, Current, 0, 1, 9898);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_INTEGER_32)) R3626[dtype-843])(Current, arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("only_if_in_index_set", EX_POST);
		tb1 = '\01';
		if (Result) {
			tb2 = '\0';
			if ((EIF_BOOLEAN) ((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3212[dtype-677])(Current)) <= arg1)) {
				tb2 = (EIF_BOOLEAN) (arg1 <= (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3213[dtype-677])(Current)));
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

/* {HASH_TABLE}.start */
void F845_4500 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("start", 844, Current, 0, 0, 9899);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R3598[dtype-843])(Current, ((EIF_INTEGER_32) -1L)));
	*(EIF_INTEGER_32 *)(Current + O3613[dtype-843]) = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {HASH_TABLE}.forth */
void F845_4501 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("forth", 844, Current, 0, 0, 9900);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_off", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3590[dtype-843])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R3598[dtype-843])(Current, *(EIF_INTEGER_32 *)(Current + O3613[dtype-843])));
	*(EIF_INTEGER_32 *)(Current + O3613[dtype-843]) = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {HASH_TABLE}.go_to */
void F845_4502 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLIU(3);
	
	RTEAA("go_to", 844, Current, 1, 1, 9901);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("c_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_cursor", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R3591[dtype-843])(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc1 = arg1;
	loc1 = RTRV(eif_new_type(172, 0x01),loc1);
	if (EIF_TEST(loc1)) {
		RTHOOK(4);
		ti4_1 = *(EIF_INTEGER_32 *)(loc1+ _LNGOFF_0_0_0_0_);
		*(EIF_INTEGER_32 *)(Current + O3613[dtype-843]) = (EIF_INTEGER_32) ti4_1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {HASH_TABLE}.search */
void F845_4503 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,loc2);
	RTLIU(4);
	
	RTEAA("search", 844, Current, 2, 1, 9902);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = *(EIF_INTEGER_32 *)(Current + O3611[dtype-843]);
	RTHOOK(2);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3636[dtype-843])(Current, (EIF_REFERENCE) &arg1));
	RTHOOK(3);
	if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3587[dtype-843])(Current))) {
		RTHOOK(4);
		tr1 = *(EIF_REFERENCE *)(Current + O3607[dtype-843]);
		ti4_1 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3614[dtype-843])(Current));
		tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R3211[Dtype(RTCW(tr1))-677])(tr1, ti4_1));
		tr1 = RTCCL(tr2);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + O3571[dtype-843]) = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(5);
		tr1 = RTCCL(loc2);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + O3571[dtype-843]) = (EIF_REFERENCE) tr1;
	}
	RTHOOK(6);
	*(EIF_INTEGER_32 *)(Current + O3611[dtype-843]) = (EIF_INTEGER_32) loc1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("found_or_not_found", EX_POST);
		tb1 = '\01';
		if (!(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3587[dtype-843])(Current))) {
			tb1 = (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3588[dtype-843])(Current));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("item_if_found", EX_POST);
		tb1 = '\01';
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3587[dtype-843])(Current))) {
			tr1 = *(EIF_REFERENCE *)(Current + O3571[dtype-843]);
			tr2 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R3572[dtype-843])(Current, (EIF_REFERENCE) &arg1));
			tb1 = RTCEQ(tr1, tr2);
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
}

/* {HASH_TABLE}.search_item */
EIF_REFERENCE F845_4504 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("search_item", 844, Current, 0, 0, 9903);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_REFERENCE *)(Current + O3571[dtype-843]);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {HASH_TABLE}.next_iteration_position */
EIF_INTEGER_32 F845_4505 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLIU(3);
	
	RTEAA("next_iteration_position", 844, Current, 2, 1, 9904);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_position_big_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) -1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_position_small_enough", EX_PRE);
		tr1 = *(EIF_REFERENCE *)(Current + O3608[dtype-843]);
		ti4_1 = (nstcall = 1, F761_4171(tr1));
		RTTE((EIF_BOOLEAN) (arg1 < ti4_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc1 = *(EIF_REFERENCE *)(Current + O3610[dtype-843]);
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current + O3607[dtype-843]);
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3396[Dtype(RTCW(tr1))-759])(tr1));
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(5);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L));
	for (;;) {
		RTHOOK(6);
		tb1 = '\01';
		if (!(EIF_BOOLEAN) (Result >= loc2)) {
			tb2 = (nstcall = 1, F774_4161(RTCW(loc1), Result));
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) break;
		RTHOOK(7);
		Result++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("is_increased", EX_POST);
		if ((EIF_BOOLEAN) (Result > arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("is_below_upper_bound", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + O3608[dtype-843]);
		ti4_1 = (nstcall = 1, F761_4171(tr1));
		if ((EIF_BOOLEAN) (Result <= ti4_1)) {
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

/* {HASH_TABLE}.previous_iteration_position */
EIF_INTEGER_32 F845_4506 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLIU(3);
	
	RTEAA("previous_iteration_position", 844, Current, 1, 1, 9905);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_position_big_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_position_small_enough", EX_PRE);
		tr1 = *(EIF_REFERENCE *)(Current + O3608[dtype-843]);
		ti4_1 = (nstcall = 1, F761_4171(tr1));
		RTTE((EIF_BOOLEAN) (arg1 <= ti4_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc1 = *(EIF_REFERENCE *)(Current + O3610[dtype-843]);
	RTHOOK(4);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 1L));
	for (;;) {
		RTHOOK(5);
		tb1 = '\01';
		if (!(EIF_BOOLEAN) (Result <= ((EIF_INTEGER_32) -1L))) {
			tb2 = (nstcall = 1, F774_4161(RTCW(loc1), Result));
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) break;
		RTHOOK(6);
		Result--;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("is_decreased", EX_POST);
		if ((EIF_BOOLEAN) (Result < arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("is_above_lower_bound", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) -1L))) {
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

/* {HASH_TABLE}.put */
void F845_4507 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_REFERENCE tr6 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,tr4);
	RTLR(5,tr5);
	RTLR(6,tr6);
	RTLR(7,arg1);
	RTLIU(8);
	
	RTEAA("put", 844, Current, 3, 2, 9906);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_key", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R2964[dtype-677])(Current, (EIF_REFERENCE) &arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCK;
		RTHOOK(2);
		RTJB;
label_2:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current + O3657[dtype-843]);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + O3657[dtype-843]);
		RTE_OT
		tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R3572[dtype-843])(Current, (EIF_REFERENCE) &arg2));
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		RTE_OT
		tr3 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R3572[dtype-843])(Current, (EIF_REFERENCE) &arg2));
		tr4 = NULL;
		RTE_O
		tr4 = RTLA;
		RTE_OE
		tb1 = *(EIF_BOOLEAN *)(Current + O3612[dtype-843]);
		in_assertion = 0;
	}
	RTHOOK(3);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3636[dtype-843])(Current, (EIF_REFERENCE) &arg2));
	RTHOOK(4);
	if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3587[dtype-843])(Current))) {
		RTHOOK(5);
		(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R3642[dtype-843])(Current));
		RTHOOK(6);
		tr5 = *(EIF_REFERENCE *)(Current + O3607[dtype-843]);
		ti4_3 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3614[dtype-843])(Current));
		tr6 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R3211[Dtype(RTCW(tr5))-677])(tr5, ti4_3));
		tr5 = RTCCL(tr6);
		RTAR(Current, tr5);
		*(EIF_REFERENCE *)(Current + O3571[dtype-843]) = (EIF_REFERENCE) tr5;
	} else {
		RTHOOK(7);
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3615[dtype-843])(Current))) {
			RTHOOK(8);
			(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R3655[dtype-843])(Current));
			RTHOOK(9);
			(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3636[dtype-843])(Current, (EIF_REFERENCE) &arg2));
			
		}
		RTHOOK(10);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O3617[dtype-843]) == ((EIF_INTEGER_32) -1L))) {
			RTHOOK(11);
			tr5 = *(EIF_REFERENCE *)(Current + O3608[dtype-843]);
			ti4_3 = (nstcall = 1, F761_4171(tr5));
			loc2 = (EIF_INTEGER_32) ti4_3;
			RTHOOK(12);
			loc3 = *(EIF_INTEGER_32 *)(Current + O3611[dtype-843]);
		} else {
			RTHOOK(13);
			loc2 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R3624[dtype-843])(Current, *(EIF_INTEGER_32 *)(Current + O3617[dtype-843])));
			RTHOOK(14);
			loc3 = *(EIF_INTEGER_32 *)(Current + O3617[dtype-843]);
			RTHOOK(15);
			tr5 = *(EIF_REFERENCE *)(Current + O3610[dtype-843]);
			(nstcall = 1, F774_4177(RTCW(tr5), (EIF_BOOLEAN) 0, loc2));
		}
		RTHOOK(16);
		tr5 = *(EIF_REFERENCE *)(Current + O3609[dtype-843]);
		(nstcall = 1, F761_4176(RTCW(tr5), loc2, loc3));
		RTHOOK(17);
		tr5 = *(EIF_REFERENCE *)(Current + O3607[dtype-843]);
		tr6 = RTCCL(arg1);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R3411[Dtype(RTCW(tr5))-759])(tr5, tr6, loc2));
		RTHOOK(18);
		tr5 = *(EIF_REFERENCE *)(Current + O3608[dtype-843]);
		(nstcall = 1, F761_4177(RTCW(tr5), arg2, loc2));
		RTHOOK(19);
		if ((EIF_BOOLEAN)(arg2 == loc1)) {
			RTHOOK(20);
			*(EIF_BOOLEAN *)(Current + O3612[dtype-843]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
		RTHOOK(21);
		(*(EIF_INTEGER_32 *)(Current + O3657[dtype-843]))++;
		RTHOOK(22);
		tr5 = RTCCL(arg1);
		RTAR(Current, tr5);
		*(EIF_REFERENCE *)(Current + O3571[dtype-843]) = (EIF_REFERENCE) tr5;
		RTHOOK(23);
		*(EIF_INTEGER_32 *)(Current + O3616[dtype-843]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(24);
		RTCT("conflict_or_inserted", EX_POST);
		tb2 = '\01';
		if (!(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3583[dtype-843])(Current))) {
			tb2 = (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3584[dtype-843])(Current));
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(25);
		RTCT("insertion_done", EX_POST);
		tb2 = '\01';
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3584[dtype-843])(Current))) {
			tb2 = RTCEQ((nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R3572[dtype-843])(Current, (EIF_REFERENCE) &arg2)), arg1);
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(26);
		RTCT("now_present", EX_POST);
		tb2 = '\01';
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3584[dtype-843])(Current))) {
			tb2 = (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R2964[dtype-677])(Current, (EIF_REFERENCE) &arg2));
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(27);
		RTCT("one_more_if_inserted", EX_POST);
		tb2 = '\01';
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3584[dtype-843])(Current))) {
			tb2 = (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O3657[dtype-843]) == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)));
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(28);
		RTCT("unchanged_if_conflict", EX_POST);
		tb2 = '\01';
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3583[dtype-843])(Current))) {
			tb2 = (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O3657[dtype-843]) == ti4_2);
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(29);
		RTCT("same_item_if_conflict", EX_POST);
		tb2 = '\01';
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3583[dtype-843])(Current))) {
			tr5 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R3572[dtype-843])(Current, (EIF_REFERENCE) &arg2));
			RTCO(tr2);
			tr6 = tr1;
			tb2 = RTCEQ(tr5, tr6);
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(30);
		RTCT("found_item_associated_with_key", EX_POST);
		tr5 = *(EIF_REFERENCE *)(Current + O3571[dtype-843]);
		tr6 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R3572[dtype-843])(Current, (EIF_REFERENCE) &arg2));
		if (RTCEQ(tr5, tr6)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(31);
		RTCT("new_item_if_inserted", EX_POST);
		tb2 = '\01';
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3584[dtype-843])(Current))) {
			tb2 = RTCEQ(*(EIF_REFERENCE *)(Current + O3571[dtype-843]), arg1);
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(32);
		RTCT("old_item_if_conflict", EX_POST);
		tb2 = '\01';
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3583[dtype-843])(Current))) {
			tr5 = *(EIF_REFERENCE *)(Current + O3571[dtype-843]);
			RTCO(tr4);
			tr6 = tr3;
			tb2 = RTCEQ(tr5, tr6);
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(33);
		RTCT("default_property", EX_POST);
		tb2 = '\01';
		tb3 = '\0';
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3584[dtype-843])(Current))) {
			tb3 = (EIF_BOOLEAN)(arg2 == (nstcall = 0, eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3634[dtype-843])(Current)));
		}
		if (!tb3) {
			tb3 = '\0';
			tb4 = '\01';
			if (!(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3583[dtype-843])(Current))) {
				tb4 = (EIF_BOOLEAN)(arg2 != (nstcall = 0, eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3634[dtype-843])(Current)));
			}
			if (tb4) {
				tb3 = tb1;
			}
			tb2 = tb3;
		}
		if ((EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current + O3612[dtype-843]) == tb2)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(34);
	RTLE;
	RTEE;
}

/* {HASH_TABLE}.force */
void F845_4508 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,tr4);
	RTLR(5,loc2);
	RTLR(6,tr5);
	RTLR(7,arg1);
	RTLIU(8);
	
	RTEAA("force", 844, Current, 4, 2, 9907);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_key", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R2964[dtype-677])(Current, (EIF_REFERENCE) &arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCK;
		RTHOOK(2);
		RTJB;
label_2:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		tb1 = (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R2964[dtype-677])(Current, (EIF_REFERENCE) &arg2));
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		ti4_1 = *(EIF_INTEGER_32 *)(Current + O3657[dtype-843]);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + O3657[dtype-843]);
		RTE_OT
		tr2 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R3572[dtype-843])(Current, (EIF_REFERENCE) &arg2));
		tr3 = NULL;
		RTE_O
		tr3 = RTLA;
		RTE_OE
		tb2 = *(EIF_BOOLEAN *)(Current + O3612[dtype-843]);
		in_assertion = 0;
	}
	RTHOOK(3);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3636[dtype-843])(Current, (EIF_REFERENCE) &arg2));
	RTHOOK(4);
	if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3588[dtype-843])(Current))) {
		RTHOOK(5);
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3615[dtype-843])(Current))) {
			RTHOOK(6);
			(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R3655[dtype-843])(Current));
			RTHOOK(7);
			(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3636[dtype-843])(Current, (EIF_REFERENCE) &arg2));
		}
		RTHOOK(8);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O3617[dtype-843]) == ((EIF_INTEGER_32) -1L))) {
			RTHOOK(9);
			tr4 = *(EIF_REFERENCE *)(Current + O3608[dtype-843]);
			ti4_3 = (nstcall = 1, F761_4171(tr4));
			loc3 = (EIF_INTEGER_32) ti4_3;
			RTHOOK(10);
			loc4 = *(EIF_INTEGER_32 *)(Current + O3611[dtype-843]);
		} else {
			RTHOOK(11);
			loc3 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R3624[dtype-843])(Current, *(EIF_INTEGER_32 *)(Current + O3617[dtype-843])));
			RTHOOK(12);
			loc4 = *(EIF_INTEGER_32 *)(Current + O3617[dtype-843]);
			RTHOOK(13);
			tr4 = *(EIF_REFERENCE *)(Current + O3610[dtype-843]);
			(nstcall = 1, F774_4177(RTCW(tr4), (EIF_BOOLEAN) 0, loc3));
		}
		RTHOOK(14);
		tr4 = *(EIF_REFERENCE *)(Current + O3609[dtype-843]);
		(nstcall = 1, F761_4176(RTCW(tr4), loc3, loc4));
		RTHOOK(15);
		tr4 = *(EIF_REFERENCE *)(Current + O3608[dtype-843]);
		(nstcall = 1, F761_4177(RTCW(tr4), arg2, loc3));
		RTHOOK(16);
		if ((EIF_BOOLEAN)(arg2 == loc1)) {
			RTHOOK(17);
			*(EIF_BOOLEAN *)(Current + O3612[dtype-843]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
		RTHOOK(18);
		(*(EIF_INTEGER_32 *)(Current + O3657[dtype-843]))++;
		RTHOOK(19);
		tr4 = RTCCL(loc2);
		RTAR(Current, tr4);
		*(EIF_REFERENCE *)(Current + O3571[dtype-843]) = (EIF_REFERENCE) tr4;
	} else {
		RTHOOK(20);
		loc3 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3614[dtype-843])(Current));
		RTHOOK(21);
		tr4 = *(EIF_REFERENCE *)(Current + O3607[dtype-843]);
		tr5 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R3211[Dtype(RTCW(tr4))-677])(tr4, loc3));
		tr4 = RTCCL(tr5);
		RTAR(Current, tr4);
		*(EIF_REFERENCE *)(Current + O3571[dtype-843]) = (EIF_REFERENCE) tr4;
	}
	RTHOOK(22);
	tr4 = *(EIF_REFERENCE *)(Current + O3607[dtype-843]);
	tr5 = RTCCL(arg1);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R3411[Dtype(RTCW(tr4))-759])(tr4, tr5, loc3));
	if (RTAL & CK_ENSURE) {
		RTHOOK(23);
		RTCT("inserted", EX_POST);
		if (RTCEQ((nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R2962[dtype-677])(Current, (EIF_REFERENCE) &arg2)), arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(24);
		RTCT("insertion_done", EX_POST);
		if (RTCEQ((nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R3572[dtype-843])(Current, (EIF_REFERENCE) &arg2)), arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(25);
		RTCT("now_present", EX_POST);
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R2964[dtype-677])(Current, (EIF_REFERENCE) &arg2))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(26);
		RTCT("found_or_not_found", EX_POST);
		tb3 = '\01';
		if (!(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3587[dtype-843])(Current))) {
			tb3 = (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3588[dtype-843])(Current));
		}
		if (tb3) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(27);
		RTCT("not_found_if_was_not_present", EX_POST);
		RTCO(tr1);
		if ((EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3588[dtype-843])(Current)) == (EIF_BOOLEAN) !tb1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(28);
		RTCT("same_count_or_one_more", EX_POST);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O3657[dtype-843]) == ti4_1) || (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O3657[dtype-843]) == (EIF_INTEGER_32) (ti4_2 + ((EIF_INTEGER_32) 1L))))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(29);
		RTCT("found_item_is_old_item", EX_POST);
		tb3 = '\01';
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3587[dtype-843])(Current))) {
			tr4 = *(EIF_REFERENCE *)(Current + O3571[dtype-843]);
			RTCO(tr3);
			tr5 = tr2;
			tb3 = RTCEQ(tr4, tr5);
		}
		if (tb3) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(30);
		RTCT("default_value_if_not_found", EX_POST);
		tb3 = '\01';
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3588[dtype-843])(Current))) {
			tr4 = *(EIF_REFERENCE *)(Current + O3571[dtype-843]);
			tr5 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3635[dtype-843])(Current));
			tb3 = RTCEQ(tr4, tr5);
		}
		if (tb3) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(31);
		RTCT("default_property", EX_POST);
		tb3 = '\01';
		if (!(EIF_BOOLEAN)(arg2 == (nstcall = 0, eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3634[dtype-843])(Current)))) {
			tb4 = '\0';
			if ((EIF_BOOLEAN)(arg2 != (nstcall = 0, eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3634[dtype-843])(Current)))) {
				tb4 = tb2;
			}
			tb3 = tb4;
		}
		if ((EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current + O3612[dtype-843]) == tb3)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(32);
	RTLE;
	RTEE;
}

/* {HASH_TABLE}.extend */
void F845_4509 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("extend", 844, Current, 3, 2, 9908);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_present", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R2964[dtype-677])(Current, (EIF_REFERENCE) &arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current + O3657[dtype-843]);
		tb1 = *(EIF_BOOLEAN *)(Current + O3612[dtype-843]);
		in_assertion = 0;
	}
	RTHOOK(2);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3637[dtype-843])(Current, (EIF_REFERENCE) &arg2));
	RTHOOK(3);
	if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3615[dtype-843])(Current))) {
		RTHOOK(4);
		(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R3655[dtype-843])(Current));
		RTHOOK(5);
		(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3637[dtype-843])(Current, (EIF_REFERENCE) &arg2));
	}
	RTHOOK(6);
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O3617[dtype-843]) == ((EIF_INTEGER_32) -1L))) {
		RTHOOK(7);
		tr1 = *(EIF_REFERENCE *)(Current + O3608[dtype-843]);
		ti4_2 = (nstcall = 1, F761_4171(tr1));
		loc2 = (EIF_INTEGER_32) ti4_2;
		RTHOOK(8);
		loc3 = *(EIF_INTEGER_32 *)(Current + O3611[dtype-843]);
	} else {
		RTHOOK(9);
		loc2 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R3624[dtype-843])(Current, *(EIF_INTEGER_32 *)(Current + O3617[dtype-843])));
		RTHOOK(10);
		loc3 = *(EIF_INTEGER_32 *)(Current + O3617[dtype-843]);
		RTHOOK(11);
		tr1 = *(EIF_REFERENCE *)(Current + O3610[dtype-843]);
		(nstcall = 1, F774_4177(RTCW(tr1), (EIF_BOOLEAN) 0, loc2));
	}
	RTHOOK(12);
	tr1 = *(EIF_REFERENCE *)(Current + O3609[dtype-843]);
	(nstcall = 1, F761_4176(RTCW(tr1), loc2, loc3));
	RTHOOK(13);
	tr1 = *(EIF_REFERENCE *)(Current + O3607[dtype-843]);
	tr2 = RTCCL(arg1);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R3411[Dtype(RTCW(tr1))-759])(tr1, tr2, loc2));
	RTHOOK(14);
	tr1 = *(EIF_REFERENCE *)(Current + O3608[dtype-843]);
	(nstcall = 1, F761_4177(RTCW(tr1), arg2, loc2));
	RTHOOK(15);
	if ((EIF_BOOLEAN)(arg2 == loc1)) {
		RTHOOK(16);
		*(EIF_BOOLEAN *)(Current + O3612[dtype-843]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	RTHOOK(17);
	(*(EIF_INTEGER_32 *)(Current + O3657[dtype-843]))++;
	RTHOOK(18);
	*(EIF_INTEGER_32 *)(Current + O3616[dtype-843]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(19);
		RTCT("inserted", EX_POST);
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3584[dtype-843])(Current))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(20);
		RTCT("insertion_done", EX_POST);
		if (RTCEQ((nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R3572[dtype-843])(Current, (EIF_REFERENCE) &arg2)), arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(21);
		RTCT("one_more", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O3657[dtype-843]) == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(22);
		RTCT("default_property", EX_POST);
		tb2 = '\01';
		if (!(EIF_BOOLEAN)(arg2 == (nstcall = 0, eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3634[dtype-843])(Current)))) {
			tb2 = tb1;
		}
		if ((EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current + O3612[dtype-843]) == tb2)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(23);
	RTLE;
	RTEE;
}

/* {HASH_TABLE}.replace */
void F845_4510 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_REFERENCE tr6 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(9);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,tr4);
	RTLR(5,tr5);
	RTLR(6,tr6);
	RTLR(7,arg1);
	RTLR(8,loc1);
	RTLIU(9);
	
	RTEAA("replace", 844, Current, 1, 2, 9909);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R3572[dtype-843])(Current, (EIF_REFERENCE) &arg2));
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		RTE_OT
		tr3 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R3572[dtype-843])(Current, (EIF_REFERENCE) &arg2));
		tr4 = NULL;
		RTE_O
		tr4 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(1);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3636[dtype-843])(Current, (EIF_REFERENCE) &arg2));
	RTHOOK(2);
	if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3587[dtype-843])(Current))) {
		RTHOOK(3);
		tr5 = *(EIF_REFERENCE *)(Current + O3607[dtype-843]);
		ti4_1 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3614[dtype-843])(Current));
		tr6 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R3211[Dtype(RTCW(tr5))-677])(tr5, ti4_1));
		tr5 = RTCCL(tr6);
		RTAR(Current, tr5);
		*(EIF_REFERENCE *)(Current + O3571[dtype-843]) = (EIF_REFERENCE) tr5;
		RTHOOK(4);
		tr5 = *(EIF_REFERENCE *)(Current + O3607[dtype-843]);
		tr6 = RTCCL(arg1);
		ti4_1 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3614[dtype-843])(Current));
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R3410[Dtype(RTCW(tr5))-759])(tr5, tr6, ti4_1));
		RTHOOK(5);
		*(EIF_INTEGER_32 *)(Current + O3616[dtype-843]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 32L);
	} else {
		RTHOOK(6);
		tr5 = RTCCL(loc1);
		RTAR(Current, tr5);
		*(EIF_REFERENCE *)(Current + O3571[dtype-843]) = (EIF_REFERENCE) tr5;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("replaced_or_not_found", EX_POST);
		tb1 = '\01';
		if (!(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3585[dtype-843])(Current))) {
			tb1 = (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3588[dtype-843])(Current));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("insertion_done", EX_POST);
		tb1 = '\01';
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3585[dtype-843])(Current))) {
			tb1 = RTCEQ((nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R3572[dtype-843])(Current, (EIF_REFERENCE) &arg2)), arg1);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("no_change_if_not_found", EX_POST);
		tb1 = '\01';
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3588[dtype-843])(Current))) {
			tr5 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R3572[dtype-843])(Current, (EIF_REFERENCE) &arg2));
			RTCO(tr2);
			tr6 = tr1;
			tb1 = RTCEQ(tr5, tr6);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("found_item_is_old_item", EX_POST);
		tr5 = *(EIF_REFERENCE *)(Current + O3571[dtype-843]);
		RTCO(tr4);
		tr6 = tr3;
		if (RTCEQ(tr5, tr6)) {
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

/* {HASH_TABLE}.replace_key */
void F845_4511 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_REFERENCE tr6 = NULL;
	EIF_REFERENCE tr7 = NULL;
	EIF_REFERENCE tr8 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(10);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,tr4);
	RTLR(5,tr5);
	RTLR(6,tr6);
	RTLR(7,loc1);
	RTLR(8,tr7);
	RTLR(9,tr8);
	RTLIU(10);
	
	RTEAA("replace_key", 844, Current, 1, 2, 9910);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current + O3657[dtype-843]);
		RTE_OT
		tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R3572[dtype-843])(Current, (EIF_REFERENCE) &arg2));
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		RTE_OT
		tb1 = (EIF_BOOLEAN) !(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R2964[dtype-677])(Current, (EIF_REFERENCE) &arg2));
		tr3 = NULL;
		RTE_O
		tr3 = RTLA;
		RTE_OE
		RTE_OT
		tb2 = (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R2964[dtype-677])(Current, (EIF_REFERENCE) &arg1));
		tr4 = NULL;
		RTE_O
		tr4 = RTLA;
		RTE_OE
		RTE_OT
		tr5 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R3572[dtype-843])(Current, (EIF_REFERENCE) &arg1));
		tr6 = NULL;
		RTE_O
		tr6 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(1);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3636[dtype-843])(Current, (EIF_REFERENCE) &arg1));
	RTHOOK(2);
	if ((EIF_BOOLEAN) !(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3587[dtype-843])(Current))) {
		RTHOOK(3);
		(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3636[dtype-843])(Current, (EIF_REFERENCE) &arg2));
		RTHOOK(4);
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3587[dtype-843])(Current))) {
			RTHOOK(5);
			tr7 = *(EIF_REFERENCE *)(Current + O3607[dtype-843]);
			ti4_2 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3614[dtype-843])(Current));
			tr8 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R3211[Dtype(RTCW(tr7))-677])(tr7, ti4_2));
			loc1 = (EIF_REFERENCE) RTCCL(tr8);
			RTHOOK(6);
			(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2968[dtype-753])(Current, (EIF_REFERENCE) &arg2));
			RTHOOK(7);
			tr7 = RTCCL(loc1);
			(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R2965[dtype-677])(Current, tr7, (EIF_REFERENCE) &arg1));
			RTHOOK(8);
			*(EIF_INTEGER_32 *)(Current + O3616[dtype-843]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 32L);
		}
	} else {
		RTHOOK(9);
		(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R3642[dtype-843])(Current));
		RTHOOK(10);
		tr7 = *(EIF_REFERENCE *)(Current + O3607[dtype-843]);
		ti4_2 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3614[dtype-843])(Current));
		tr8 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R3211[Dtype(RTCW(tr7))-677])(tr7, ti4_2));
		tr7 = RTCCL(tr8);
		RTAR(Current, tr7);
		*(EIF_REFERENCE *)(Current + O3571[dtype-843]) = (EIF_REFERENCE) tr7;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("same_count", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O3657[dtype-843]) == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTCT("replaced_or_conflict_or_not_found", EX_POST);
		tb3 = '\01';
		tb4 = '\01';
		if (!(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3585[dtype-843])(Current))) {
			tb4 = (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3583[dtype-843])(Current));
		}
		if (!tb4) {
			tb3 = (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3588[dtype-843])(Current));
		}
		if (tb3) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(13);
		RTCT("old_absent", EX_POST);
		tb3 = '\01';
		tb4 = '\0';
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3585[dtype-843])(Current))) {
			tb4 = (EIF_BOOLEAN) !(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R3581[dtype-843])(Current, (EIF_REFERENCE) &arg1, (EIF_REFERENCE) &arg2));
		}
		if (tb4) {
			tb3 = (EIF_BOOLEAN) !(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R2964[dtype-677])(Current, (EIF_REFERENCE) &arg2));
		}
		if (tb3) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(14);
		RTCT("new_present", EX_POST);
		tb3 = '\01';
		if (!(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3585[dtype-843])(Current))) {
			tb3 = (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3583[dtype-843])(Current));
		}
		if ((EIF_BOOLEAN)(tb3 == (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R2964[dtype-677])(Current, (EIF_REFERENCE) &arg1)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(15);
		RTCT("new_item", EX_POST);
		tb3 = '\01';
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3585[dtype-843])(Current))) {
			tr7 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R3572[dtype-843])(Current, (EIF_REFERENCE) &arg1));
			RTCO(tr2);
			tr8 = tr1;
			tb3 = RTCEQ(tr7, tr8);
		}
		if (tb3) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(16);
		RTCT("not_found_implies_no_old_key", EX_POST);
		tb3 = '\01';
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3588[dtype-843])(Current))) {
			RTCO(tr3);
			tb3 = tb1;
		}
		if (tb3) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(17);
		RTCT("conflict_iff_already_present", EX_POST);
		RTCO(tr4);
		if ((EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3583[dtype-843])(Current)) == tb2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(18);
		RTCT("not_inserted_if_conflict", EX_POST);
		tb3 = '\01';
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3583[dtype-843])(Current))) {
			tr7 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R3572[dtype-843])(Current, (EIF_REFERENCE) &arg1));
			RTCO(tr6);
			tr8 = tr5;
			tb3 = RTCEQ(tr7, tr8);
		}
		if (tb3) {
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

/* {HASH_TABLE}.merge */
void F845_4512 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,loc2);
	RTLIU(6);
	
	RTEAA("merge", 844, Current, 2, 1, 9911);
	RTSA(dtype);
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
	if ((EIF_BOOLEAN)(arg1 != Current)) {
		RTHOOK(3);
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2829[Dtype(RTCW(arg1))-267])(arg1));
		loc1 = (EIF_REFERENCE) tr1;
		for (;;) {
			tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2815[Dtype(loc1)-245])(loc1));
			if (tb1) break;
			RTHOOK(4);
			tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2814[Dtype(loc1)-245])(loc1));
			tr2 = RTCCL(tr1);
			ti4_1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2827[Dtype(loc1)-321])(loc1));
			(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R2966[dtype-677])(Current, tr2, (EIF_REFERENCE) &ti4_1));
			RTHOOK(5);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2816[Dtype(loc1)-245])(loc1));
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("inserted", EX_POST);
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2829[Dtype(RTCW(arg1))-267])(arg1));
		loc2 = (EIF_REFERENCE) tr1;
		tb2 = EIF_TRUE;
		for (;;) {
			if (!tb2) break;
			tb3 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2815[Dtype(loc2)-245])(loc2));
			if (tb3) break;
			RTHOOK(7);
			ti4_1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2827[Dtype(loc2)-321])(loc2));
			tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R3572[dtype-843])(Current, (EIF_REFERENCE) &ti4_1));
			tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2814[Dtype(loc2)-245])(loc2));
			tb2 = RTCEQ(tr1, tr2);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2816[Dtype(loc2)-245])(loc2));
		}
		if (tb2) {
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

/* {HASH_TABLE}.remove */
void F845_4513 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,loc2);
	RTLR(4,loc5);
	RTLIU(5);
	
	RTEAA("remove", 844, Current, 6, 1, 9912);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("prunable", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2952[dtype-564])(Current)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_key", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R2964[dtype-677])(Current, (EIF_REFERENCE) &arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCK;
		RTHOOK(3);
		RTCT("prunable", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2952[dtype-564])(Current)), label_2);
		RTCK;
		RTJB;
label_2:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current + O3657[dtype-843]);
		tb1 = *(EIF_BOOLEAN *)(Current + O3612[dtype-843]);
		in_assertion = 0;
	}
	RTHOOK(4);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3636[dtype-843])(Current, (EIF_REFERENCE) &arg1));
	RTHOOK(5);
	if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3587[dtype-843])(Current))) {
		RTHOOK(6);
		loc3 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3614[dtype-843])(Current));
		RTHOOK(7);
		if ((EIF_BOOLEAN)(arg1 == loc1)) {
			RTHOOK(8);
			*(EIF_BOOLEAN *)(Current + O3612[dtype-843]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		}
		RTHOOK(9);
		tr1 = *(EIF_REFERENCE *)(Current + O3610[dtype-843]);
		(nstcall = 1, F774_4176(RTCW(tr1), (EIF_BOOLEAN) 1, loc3));
		RTHOOK(10);
		tr1 = *(EIF_REFERENCE *)(Current + O3609[dtype-843]);
		(nstcall = 1, F761_4176(RTCW(tr1), (EIF_INTEGER_32) ((EIF_INTEGER_32) -loc3 + ((EIF_INTEGER_32) -2L)), *(EIF_INTEGER_32 *)(Current + O3611[dtype-843])));
		RTHOOK(11);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O3613[dtype-843]) == loc3)) {
			RTHOOK(12);
			(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R3594[dtype-843])(Current));
		}
		RTHOOK(13);
		(*(EIF_INTEGER_32 *)(Current + O3657[dtype-843]))--;
		RTHOOK(14);
		ti4_2 = eif_min_int32 (loc3,*(EIF_INTEGER_32 *)(Current + O3621[dtype-843]));
		*(EIF_INTEGER_32 *)(Current + O3621[dtype-843]) = (EIF_INTEGER_32) ti4_2;
		RTHOOK(15);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O3621[dtype-843]) == *(EIF_INTEGER_32 *)(Current + O3657[dtype-843]))) {
			RTHOOK(16);
			tr1 = *(EIF_REFERENCE *)(Current + O3607[dtype-843]);
			ti4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3396[Dtype(RTCW(tr1))-759])(tr1));
			loc4 = *(EIF_INTEGER_32 *)(Current + O3621[dtype-843]);
			loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_2 - loc4);
			RTHOOK(17);
			tr1 = *(EIF_REFERENCE *)(Current + O3607[dtype-843]);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R3424[Dtype(RTCW(tr1))-759])(tr1, loc4));
			RTHOOK(18);
			tr1 = *(EIF_REFERENCE *)(Current + O3608[dtype-843]);
			(nstcall = 1, F761_4190(RTCW(tr1), loc4));
			RTHOOK(19);
			tr1 = *(EIF_REFERENCE *)(Current + O3610[dtype-843]);
			ti4_2 = *(EIF_INTEGER_32 *)(Current + O3621[dtype-843]);
			tr2 = *(EIF_REFERENCE *)(Current + O3610[dtype-843]);
			ti4_3 = (nstcall = 1, F774_4171(tr2));
			(nstcall = 1, F774_4180(RTCW(tr1), (EIF_BOOLEAN) 0, ti4_2, (EIF_INTEGER_32) (ti4_3 - ((EIF_INTEGER_32) 1L))));
			RTHOOK(20);
			tr1 = RTCCL(loc2);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + O3622[dtype-843]) = (EIF_REFERENCE) tr1;
			RTHOOK(21);
			*(EIF_INTEGER_32 *)(Current + O3623[dtype-843]) = (EIF_INTEGER_32) loc1;
			RTHOOK(22);
			*(EIF_INTEGER_32 *)(Current + O3621[dtype-843]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2147483645L);
		} else {
			RTHOOK(23);
			tr1 = *(EIF_REFERENCE *)(Current + O3622[dtype-843]);
			loc5 = RTCCL(tr1);
			loc6 = *(EIF_INTEGER_32 *)(Current + O3623[dtype-843]);
			if ((EIF_BOOLEAN) (EIF_TEST(loc5) && (EIF_TRUE))) {
				RTHOOK(24);
				tr1 = *(EIF_REFERENCE *)(Current + O3607[dtype-843]);
				tr2 = RTCCL(loc5);
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R3410[Dtype(RTCW(tr1))-759])(tr1, tr2, loc3));
				RTHOOK(25);
				tr1 = *(EIF_REFERENCE *)(Current + O3608[dtype-843]);
				(nstcall = 1, F761_4176(RTCW(tr1), loc6, loc3));
			} else {
				RTHOOK(26);
				tr1 = *(EIF_REFERENCE *)(Current + O3607[dtype-843]);
				tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R3211[Dtype(RTCW(tr1))-677])(tr1, loc3));
				tr1 = RTCCL(tr2);
				RTAR(Current, tr1);
				*(EIF_REFERENCE *)(Current + O3622[dtype-843]) = (EIF_REFERENCE) tr1;
				RTHOOK(27);
				tr1 = *(EIF_REFERENCE *)(Current + O3608[dtype-843]);
				ti4_2 = (nstcall = 1, F761_4161(RTCW(tr1), loc3));
				*(EIF_INTEGER_32 *)(Current + O3623[dtype-843]) = (EIF_INTEGER_32) ti4_2;
			}
		}
		RTHOOK(28);
		*(EIF_INTEGER_32 *)(Current + O3616[dtype-843]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 16L);
		RTHOOK(29);
		tr1 = RTCCL(loc2);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + O3571[dtype-843]) = (EIF_REFERENCE) tr1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(30);
		RTCT("removed_or_not_found", EX_POST);
		tb2 = '\01';
		if (!(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3586[dtype-843])(Current))) {
			tb2 = (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3588[dtype-843])(Current));
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(31);
		RTCT("not_present", EX_POST);
		if ((EIF_BOOLEAN) !(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R2964[dtype-677])(Current, (EIF_REFERENCE) &arg1))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(32);
		RTCT("one_less", EX_POST);
		tb2 = '\01';
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3587[dtype-843])(Current))) {
			tb2 = (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O3657[dtype-843]) == (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L)));
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(33);
		RTCT("default_case", EX_POST);
		tb2 = '\01';
		if ((EIF_BOOLEAN)(arg1 == (nstcall = 0, eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3634[dtype-843])(Current)))) {
			tb2 = (EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current + O3612[dtype-843]);
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(34);
		RTCT("non_default_case", EX_POST);
		tb2 = '\01';
		if ((EIF_BOOLEAN)(arg1 != (nstcall = 0, eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3634[dtype-843])(Current)))) {
			tb2 = (EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current + O3612[dtype-843]) == tb1);
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(35);
	RTLE;
	RTEE;
}

/* {HASH_TABLE}.prune */
void F845_4514 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTEAA("prune", 844, Current, 0, 1, 9913);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("prunable", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2952[dtype-564])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if (*(EIF_BOOLEAN *)(Current + O2927[dtype-389])) {
		for (;;) {
			RTHOOK(3);
			tb1 = '\01';
			if (!(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3589[dtype-843])(Current))) {
				tb1 = RTEQ((nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3576[dtype-843])(Current)), arg1);
			}
			if (tb1) break;
			RTHOOK(4);
			(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R3594[dtype-843])(Current));
		}
	} else {
		for (;;) {
			RTHOOK(5);
			tb2 = '\01';
			if (!(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3589[dtype-843])(Current))) {
				tb2 = RTCEQ((nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3576[dtype-843])(Current)), arg1);
			}
			if (tb2) break;
			RTHOOK(6);
			(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R3594[dtype-843])(Current));
		}
	}
	RTHOOK(7);
	if ((EIF_BOOLEAN) !(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3589[dtype-843])(Current))) {
		RTHOOK(8);
		ti4_1 = (nstcall = 0, eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3577[dtype-843])(Current));
		(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2968[dtype-753])(Current, (EIF_REFERENCE) &ti4_1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
}

/* {HASH_TABLE}.wipe_out */
void F845_4515 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,loc1);
	RTLIU(4);
	
	RTEAA("wipe_out", 844, Current, 1, 0, 9914);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("prunable", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2952[dtype-564])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + O3607[dtype-843]);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R3430[Dtype(RTCW(tr1))-759])(tr1));
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + O3608[dtype-843]);
	(nstcall = 1, F761_4196(RTCW(tr1)));
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current + O3610[dtype-843]);
	tr2 = *(EIF_REFERENCE *)(Current + O3610[dtype-843]);
	ti4_1 = (nstcall = 1, F774_4170(RTCW(tr2)));
	(nstcall = 1, F774_4180(RTCW(tr1), (EIF_BOOLEAN) 0, ((EIF_INTEGER_32) 0L), ti4_1));
	RTHOOK(5);
	tr1 = *(EIF_REFERENCE *)(Current + O3609[dtype-843]);
	(nstcall = 1, F761_4180(RTCW(tr1), ((EIF_INTEGER_32) -1L), ((EIF_INTEGER_32) 0L), *(EIF_INTEGER_32 *)(Current + O3580[dtype-843])));
	RTHOOK(6);
	tr1 = RTCCL(loc1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O3571[dtype-843]) = (EIF_REFERENCE) tr1;
	RTHOOK(7);
	*(EIF_INTEGER_32 *)(Current + O3657[dtype-843]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(8);
	*(EIF_INTEGER_32 *)(Current + O3611[dtype-843]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(9);
	tr1 = *(EIF_REFERENCE *)(Current + O3608[dtype-843]);
	ti4_1 = (nstcall = 1, F761_4171(tr1));
	*(EIF_INTEGER_32 *)(Current + O3613[dtype-843]) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(10);
	*(EIF_INTEGER_32 *)(Current + O3616[dtype-843]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(11);
	*(EIF_BOOLEAN *)(Current + O3612[dtype-843]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(12);
		RTCT("wiped_out", EX_POST);
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2925[dtype-564])(Current))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(13);
		RTCT("position_equal_to_zero", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O3611[dtype-843]) == ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(14);
		RTCT("count_equal_to_zero", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O3657[dtype-843]) == ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(15);
		RTCT("has_default_set", EX_POST);
		if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current + O3612[dtype-843])) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(16);
		RTCT("no_status", EX_POST);
		if ((EIF_BOOLEAN) !(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3654[dtype-843])(Current))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(17);
	RTLE;
	RTEE;
}

/* {HASH_TABLE}.clear_all */
void F845_4516 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("clear_all", 844, Current, 0, 0, 9915);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2959[dtype-564])(Current));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {HASH_TABLE}.linear_representation */
EIF_REFERENCE F845_4517 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("linear_representation", 844, Current, 1, 0, 9916);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = *(EIF_INTEGER_32 *)(Current + O3613[dtype-843]);
	RTHOOK(2);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,824,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = eif_final_id(Y2830,Y2830_gen_type,Dftype(Current),252);
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		Result = RTLNS(typres0.id, 824, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	(nstcall = -1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R3523[Dtype(RTCW(Result))-824])(Result, *(EIF_INTEGER_32 *)(Current + O3657[dtype-843])));
	RTHOOK(3);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R3593[dtype-843])(Current));
	for (;;) {
		RTHOOK(4);
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3590[dtype-843])(Current))) break;
		RTHOOK(5);
		tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3576[dtype-843])(Current));
		tr2 = RTCCL(tr1);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2955[Dtype(RTCW(Result))-564])(Result, tr2));
		RTHOOK(6);
		(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R3594[dtype-843])(Current));
	}
	RTHOOK(7);
	*(EIF_INTEGER_32 *)(Current + O3613[dtype-843]) = (EIF_INTEGER_32) loc1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("good_count", EX_POST);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2989[Dtype(RTCW(Result))-644])(Result));
		if ((EIF_BOOLEAN)(ti4_1 == *(EIF_INTEGER_32 *)(Current + O3657[dtype-843]))) {
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

/* {HASH_TABLE}.copy */
void F845_4518 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("copy", 844, Current, 0, 1, 9917);
	RTSA(dtype);
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
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + O3607[Dtype(arg1)-843]);
		tr2 = (nstcall = 1, F1_14(tr1));
		(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3628[dtype-843])(Current, tr2));
		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + O3608[Dtype(arg1)-843]);
		tr2 = (nstcall = 1, F1_14(tr1));
		(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3630[dtype-843])(Current, tr2));
		RTHOOK(7);
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + O3610[Dtype(arg1)-843]);
		tr2 = (nstcall = 1, F1_14(tr1));
		(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3631[dtype-843])(Current, tr2));
		RTHOOK(8);
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + O3609[Dtype(arg1)-843]);
		tr2 = (nstcall = 1, F1_14(tr1));
		(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3632[dtype-843])(Current, tr2));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("is_equal", EX_POST);
		if (RTEQ(Current, arg1)) {
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
}

/* {HASH_TABLE}.empty_duplicate */
EIF_REFERENCE F845_4519 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("empty_duplicate", 844, Current, 0, 1, 9918);
	RTSA(dtype);
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
	Result = RTLNSMART(Dftype(Current));
	(nstcall = -1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R3567[Dtype(RTCW(Result))-843])(Result, arg1));
	RTHOOK(3);
	if (*(EIF_BOOLEAN *)(Current + O2927[dtype-389])) {
		RTHOOK(4);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2929[Dtype(RTCW(Result))-564])(Result));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("empty_duplicate_attached", EX_POST);
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

/* {HASH_TABLE}.correct_mismatch */
void F845_4520 (EIF_REFERENCE Current)
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
	EIF_INTEGER_32 loc11 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc12 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc13 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
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
	
	RTLI(10);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,loc8);
	RTLR(4,loc9);
	RTLR(5,loc10);
	RTLR(6,loc1);
	RTLR(7,tr3);
	RTLR(8,loc5);
	RTLR(9,loc6);
	RTLIU(10);
	
	RTEAA("correct_mismatch", 844, Current, 13, 0, 9919);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTOUCR(12,(nstcall = 0, F822_4279), (Current));
	tr2 = RTMS_EX_H("hash_table_version_64",21,855604276);
	tb1 = (nstcall = 1, F844_4469(RTCW(tr1), tr2));
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(2);
		tr1 = RTOUCR(12,(nstcall = 0, F822_4279), (Current));
		tr2 = RTMS_EX_H("content",7,460700276);
		tr2 = (nstcall = 1, F844_4467(RTCW(tr1), tr2));
		loc8 = RTCCL(tr2);
		{
			EIF_TYPE_INDEX typarr0[] = {0xFF01,678,0,0,0xFFFF};
			EIF_TYPE typres0;
			{
				EIF_TYPE l_type;
				l_type = eif_final_id(Y2830,Y2830_gen_type,dftype,252);
				typarr0[2] = l_type.annotations | 0xFF00;
				typarr0[3] = l_type.id;
			}
			
			typres0 = eif_compound_id(dftype, typarr0);
			loc8 = RTRV(typres0,loc8);
		}
		if (EIF_TEST(loc8)) {
			RTHOOK(3);
			tr1 = *(EIF_REFERENCE *)(loc8);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + O3607[dtype-843]) = (EIF_REFERENCE) tr1;
		}
		RTHOOK(4);
		tr1 = RTOUCR(12,(nstcall = 0, F822_4279), (Current));
		tr2 = RTMS_EX_H("keys",4,1801812339);
		tr2 = (nstcall = 1, F844_4467(RTCW(tr1), tr2));
		loc9 = RTCCL(tr2);
		{
			EIF_TYPE_INDEX typarr0[] = {0xFF01,679,0,0,0xFFFF};
			EIF_TYPE typres0;
			{
				EIF_TYPE l_type;
				l_type = eif_final_id(Y2967,Y2967_gen_type,dftype,480);
				typarr0[2] = l_type.annotations | 0xFF00;
				typarr0[3] = l_type.id;
			}
			
			typres0 = eif_compound_id(dftype, typarr0);
			loc9 = RTRV(typres0,loc9);
		}
		if (EIF_TEST(loc9)) {
			RTHOOK(5);
			tr1 = *(EIF_REFERENCE *)(loc9);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + O3608[dtype-843]) = (EIF_REFERENCE) tr1;
		}
		RTHOOK(6);
		tr1 = RTOUCR(12,(nstcall = 0, F822_4279), (Current));
		tr2 = RTMS_EX_H("deleted_marks",13,2142169971);
		tr2 = (nstcall = 1, F844_4467(RTCW(tr1), tr2));
		loc10 = RTCCL(tr2);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,692,922,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			loc10 = RTRV(typres0,loc10);
		}
		if (EIF_TEST(loc10)) {
			RTHOOK(7);
			tr1 = *(EIF_REFERENCE *)(loc10);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + O3610[dtype-843]) = (EIF_REFERENCE) tr1;
		}
		RTHOOK(8);
		tb1 = '\0';
		tb2 = '\0';
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O3610[dtype-843]) != NULL) && (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O3608[dtype-843]) != NULL))) {
			tr1 = RTOUCR(12,(nstcall = 0, F822_4279), (Current));
			tr2 = RTMS_EX_H("hash_table_version_57",21,855604023);
			tb3 = (nstcall = 1, F844_4469(RTCW(tr1), tr2));
			tb2 = (EIF_BOOLEAN) !tb3;
		}
		if (tb2) {
			tr1 = *(EIF_REFERENCE *)(Current + O3610[dtype-843]);
			ti4_1 = (nstcall = 1, F774_4171(tr1));
			tr1 = *(EIF_REFERENCE *)(Current + O3608[dtype-843]);
			ti4_2 = (nstcall = 1, F761_4171(tr1));
			tb1 = (EIF_BOOLEAN)(ti4_1 != ti4_2);
		}
		if (tb1) {
			RTHOOK(9);
			loc1 = *(EIF_REFERENCE *)(Current + O3610[dtype-843]);
			RTHOOK(10);
			tr2 = *(EIF_REFERENCE *)(Current + O3608[dtype-843]);
			ti4_1 = (nstcall = 1, F761_4171(tr2));
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,773,922,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLNSP2(typres0.id,0,ti4_1,sizeof(EIF_BOOLEAN), EIF_TRUE);
				RT_SPECIAL_COUNT(tr1) = 0;
			}
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + O3610[dtype-843]) = (EIF_REFERENCE) tr1;
			RTHOOK(11);
			tr1 = *(EIF_REFERENCE *)(Current + O3610[dtype-843]);
			ti4_2 = (nstcall = 1, F774_4171(loc1));
			(nstcall = 1, F774_4183(RTCW(tr1), loc1, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ti4_2));
		}
		RTHOOK(12);
		tr2 = RTOUCR(12,(nstcall = 0, F822_4279), (Current));
		tr3 = RTMS_EX_H("count",5,1870727284);
		tr3 = (nstcall = 1, F844_4467(RTCW(tr2), tr3));
		tr1 = RTCCL(tr3);
		RTOB(*(EIF_INTEGER_32 *), eif_new_type(892, 0x00), tr1, loc11, tb1);
		if (tb1) {
			RTHOOK(13);
			loc4 = (EIF_INTEGER_32) loc11;
		}
		RTHOOK(14);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O3607[dtype-843]) == NULL) || (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O3608[dtype-843]) == NULL)) || (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O3610[dtype-843]) == NULL))) {
			RTHOOK(15);
			(nstcall = 0, F822_4278(Current));
		} else {
			RTHOOK(16);
			tr1 = *(EIF_REFERENCE *)(Current + O3608[dtype-843]);
			ti4_2 = (nstcall = 1, F761_4171(tr1));
			loc3 = (EIF_INTEGER_32) ti4_2;
			RTHOOK(17);
			loc5 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R3605[dtype-843])(Current, loc4));
			for (;;) {
				RTHOOK(18);
				if ((EIF_BOOLEAN)(loc2 == loc3)) break;
				RTHOOK(19);
				tb1 = '\0';
				tr1 = *(EIF_REFERENCE *)(Current + O3608[dtype-843]);
				ti4_2 = (nstcall = 1, F761_4161(RTCW(tr1), loc2));
				loc12 = ti4_2;
				if ((EIF_TRUE)) {
					tb1 = (EIF_BOOLEAN)(loc12 != loc7);
				}
				if (tb1) {
					RTHOOK(20);
					tr1 = *(EIF_REFERENCE *)(Current + O3607[dtype-843]);
					tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R3211[Dtype(RTCW(tr1))-677])(tr1, loc2));
					tr1 = RTCCL(tr2);
					(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R2965[Dtype(RTCW(loc5))-677])(loc5, tr1, (EIF_REFERENCE) &loc12));
				}
				RTHOOK(21);
				loc2++;
			}
			RTHOOK(22);
			tb1 = '\0';
			tr2 = RTOUCR(12,(nstcall = 0, F822_4279), (Current));
			tr3 = RTMS_EX_H("has_default",11,1777575796);
			tr3 = (nstcall = 1, F844_4467(RTCW(tr2), tr3));
			tr1 = RTCCL(tr3);
			RTOB(*(EIF_BOOLEAN *), eif_new_type(922, 0x00), tr1, loc13, tb2);
			if (tb2) {
				tb1 = loc13;
			}
			if (tb1) {
				RTHOOK(23);
				tr1 = *(EIF_REFERENCE *)(Current + O3607[dtype-843]);
				tr2 = *(EIF_REFERENCE *)(Current + O3607[dtype-843]);
				ti4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3397[Dtype(RTCW(tr2))-759])(tr2));
				tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R3211[Dtype(RTCW(tr1))-677])(tr1, (EIF_INTEGER_32) (ti4_2 - ((EIF_INTEGER_32) 1L))));
				tr1 = RTCCL(tr2);
				tr3 = *(EIF_REFERENCE *)(Current + O3608[dtype-843]);
				ti4_2 = (nstcall = 1, F761_4161(RTCW(tr3), (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L))));
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R2965[Dtype(RTCW(loc5))-677])(loc5, tr1, (EIF_REFERENCE) &ti4_2));
			}
			RTHOOK(24);
			tr1 = *(EIF_REFERENCE *)(RTCW(loc5) + O3607[Dtype(loc5)-843]);
			(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3628[dtype-843])(Current, tr1));
			RTHOOK(25);
			tr1 = *(EIF_REFERENCE *)(RTCW(loc5) + O3608[Dtype(loc5)-843]);
			(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3630[dtype-843])(Current, tr1));
			RTHOOK(26);
			tr1 = *(EIF_REFERENCE *)(RTCW(loc5) + O3610[Dtype(loc5)-843]);
			(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3631[dtype-843])(Current, tr1));
			RTHOOK(27);
			tr1 = *(EIF_REFERENCE *)(RTCW(loc5) + O3609[Dtype(loc5)-843]);
			(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3632[dtype-843])(Current, tr1));
			RTHOOK(28);
			ti4_2 = *(EIF_INTEGER_32 *)(RTCW(loc5) + O3580[Dtype(loc5)-843]);
			*(EIF_INTEGER_32 *)(Current + O3580[dtype-843]) = (EIF_INTEGER_32) ti4_2;
			RTHOOK(29);
			ti4_2 = *(EIF_INTEGER_32 *)(RTCW(loc5) + O3613[Dtype(loc5)-843]);
			*(EIF_INTEGER_32 *)(Current + O3613[dtype-843]) = (EIF_INTEGER_32) ti4_2;
			RTHOOK(30);
			ti4_2 = *(EIF_INTEGER_32 *)(RTCW(loc5) + O3617[Dtype(loc5)-843]);
			*(EIF_INTEGER_32 *)(Current + O3617[dtype-843]) = (EIF_INTEGER_32) ti4_2;
			RTHOOK(31);
			ti4_2 = *(EIF_INTEGER_32 *)(RTCW(loc5) + O3611[Dtype(loc5)-843]);
			*(EIF_INTEGER_32 *)(Current + O3611[dtype-843]) = (EIF_INTEGER_32) ti4_2;
			RTHOOK(32);
			*(EIF_INTEGER_32 *)(Current + O3621[dtype-843]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2147483645L);
			RTHOOK(33);
			tr1 = RTCCL(loc6);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + O3622[dtype-843]) = (EIF_REFERENCE) tr1;
			RTHOOK(34);
			*(EIF_INTEGER_32 *)(Current + O3623[dtype-843]) = (EIF_INTEGER_32) loc7;
		}
		RTHOOK(35);
		*(EIF_INTEGER_32 *)(Current + O3616[dtype-843]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(36);
	RTLE;
	RTEE;
}

/* {HASH_TABLE}.hash_table_version_64 */
EIF_BOOLEAN F845_4521 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current + O3606[Dtype(Current)-843]);
}


/* {HASH_TABLE}.content */
EIF_REFERENCE F845_4522 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O3607[Dtype(Current)-843]);
}


/* {HASH_TABLE}.keys */
EIF_REFERENCE F845_4523 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O3608[Dtype(Current)-843]);
}


/* {HASH_TABLE}.indexes_map */
EIF_REFERENCE F845_4524 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O3609[Dtype(Current)-843]);
}


/* {HASH_TABLE}.deleted_marks */
EIF_REFERENCE F845_4525 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O3610[Dtype(Current)-843]);
}


/* {HASH_TABLE}.item_position */
EIF_INTEGER_32 F845_4526 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current + O3611[Dtype(Current)-843]);
}


/* {HASH_TABLE}.has_default */
EIF_BOOLEAN F845_4527 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current + O3612[Dtype(Current)-843]);
}


/* {HASH_TABLE}.iteration_position */
EIF_INTEGER_32 F845_4528 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current + O3613[Dtype(Current)-843]);
}


/* {HASH_TABLE}.position */
EIF_INTEGER_32 F845_4529 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("position", 844, Current, 0, 0, 9928);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + O3609[dtype-843]);
	ti4_1 = (nstcall = 1, F761_4161(RTCW(tr1), *(EIF_INTEGER_32 *)(Current + O3611[dtype-843])));
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {HASH_TABLE}.soon_full */
EIF_BOOLEAN F845_4530 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("soon_full", 844, Current, 0, 0, 9929);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + O3608[dtype-843]);
	ti4_1 = (nstcall = 1, F761_4171(tr1));
	tr1 = *(EIF_REFERENCE *)(Current + O3608[dtype-843]);
	ti4_2 = (nstcall = 1, F761_4172(tr1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("Result = (keys.count = keys.capacity)", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + O3608[dtype-843]);
		ti4_1 = (nstcall = 1, F761_4171(tr1));
		tr1 = *(EIF_REFERENCE *)(Current + O3608[dtype-843]);
		ti4_2 = (nstcall = 1, F761_4172(tr1));
		if ((EIF_BOOLEAN)(Result == (EIF_BOOLEAN)(ti4_1 == ti4_2))) {
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

/* {HASH_TABLE}.control */
EIF_INTEGER_32 F845_4531 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current + O3616[Dtype(Current)-843]);
}


/* {HASH_TABLE}.deleted_item_position */
EIF_INTEGER_32 F845_4532 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current + O3617[Dtype(Current)-843]);
}


/* {HASH_TABLE}.ht_lowest_deleted_position */
EIF_INTEGER_32 F845_4536 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current + O3621[Dtype(Current)-843]);
}


/* {HASH_TABLE}.ht_deleted_item */
EIF_REFERENCE F845_4537 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O3622[Dtype(Current)-843]);
}


/* {HASH_TABLE}.ht_deleted_key */
EIF_INTEGER_32 F845_4538 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current + O3623[Dtype(Current)-843]);
}


/* {HASH_TABLE}.deleted_position */
EIF_INTEGER_32 F845_4539 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("deleted_position", 844, Current, 0, 1, 9938);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("deleted", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_INTEGER_32)) R3629[dtype-843])(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + O3609[dtype-843]);
	ti4_1 = (nstcall = 1, F761_4161(RTCW(tr1), arg1));
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) -ti4_1 + ((EIF_INTEGER_32) -2L));
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + O3608[dtype-843]);
	ti4_1 = (nstcall = 1, F761_4171(tr1));
	ti4_2 = eif_min_int32 (Result,ti4_1);
	Result = (EIF_INTEGER_32) ti4_2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("deleted_position_non_negative", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("deleted_position_valid", EX_POST);
		tb1 = '\0';
		tr1 = *(EIF_REFERENCE *)(Current + O3608[dtype-843]);
		ti4_1 = (nstcall = 1, F761_4171(tr1));
		if ((EIF_BOOLEAN) (Result <= ti4_1)) {
			tr1 = *(EIF_REFERENCE *)(Current + O3607[dtype-843]);
			ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3396[Dtype(RTCW(tr1))-759])(tr1));
			tb1 = (EIF_BOOLEAN) (Result <= ti4_1);
		}
		if (tb1) {
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

/* {HASH_TABLE}.occupied */
EIF_BOOLEAN F845_4540 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("occupied", 844, Current, 0, 1, 9939);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("in_bounds", EX_PRE);
		tr1 = *(EIF_REFERENCE *)(Current + O3610[dtype-843]);
		tb1 = (nstcall = 1, F774_4175(RTCW(tr1), arg1));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if (*(EIF_BOOLEAN *)(Current + O3612[dtype-843])) {
		RTHOOK(3);
		Result = '\0';
		tr1 = *(EIF_REFERENCE *)(Current + O3609[dtype-843]);
		ti4_1 = (nstcall = 1, F761_4161(RTCW(tr1), *(EIF_INTEGER_32 *)(Current + O3580[dtype-843])));
		if ((EIF_BOOLEAN)(arg1 != ti4_1)) {
			tr1 = *(EIF_REFERENCE *)(Current + O3610[dtype-843]);
			tb1 = (nstcall = 1, F774_4161(RTCW(tr1), arg1));
			Result = (EIF_BOOLEAN) !tb1;
		}
	} else {
		RTHOOK(4);
		tr1 = *(EIF_REFERENCE *)(Current + O3610[dtype-843]);
		tb1 = (nstcall = 1, F774_4161(RTCW(tr1), arg1));
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) !tb1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {HASH_TABLE}.truly_occupied */
EIF_BOOLEAN F845_4541 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("truly_occupied", 844, Current, 0, 1, 9940);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = '\0';
	if ((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L))) {
		tr1 = *(EIF_REFERENCE *)(Current + O3608[dtype-843]);
		ti4_1 = (nstcall = 1, F761_4171(tr1));
		tb1 = (EIF_BOOLEAN) (arg1 < ti4_1);
	}
	if (tb1) {
		RTHOOK(2);
		Result = '\01';
		tb1 = '\0';
		if (*(EIF_BOOLEAN *)(Current + O3612[dtype-843])) {
			tr1 = *(EIF_REFERENCE *)(Current + O3609[dtype-843]);
			ti4_1 = (nstcall = 1, F761_4161(RTCW(tr1), *(EIF_INTEGER_32 *)(Current + O3580[dtype-843])));
			tb1 = (EIF_BOOLEAN)(arg1 == ti4_1);
		}
		if (!tb1) {
			Result = (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_INTEGER_32)) R3625[dtype-843])(Current, arg1));
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("normal_key", EX_POST);
		tb1 = '\01';
		tb2 = '\0';
		tb3 = '\0';
		if ((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L))) {
			tr1 = *(EIF_REFERENCE *)(Current + O3608[dtype-843]);
			ti4_1 = (nstcall = 1, F761_4171(tr1));
			tb3 = (EIF_BOOLEAN) (arg1 < ti4_1);
		}
		if (tb3) {
			tr1 = *(EIF_REFERENCE *)(Current + O3609[dtype-843]);
			ti4_1 = (nstcall = 1, F761_4161(RTCW(tr1), *(EIF_INTEGER_32 *)(Current + O3580[dtype-843])));
			tb2 = (EIF_BOOLEAN)(arg1 != ti4_1);
		}
		if (tb2) {
			tb2 = '\01';
			if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_INTEGER_32)) R3625[dtype-843])(Current, arg1))) {
				tb2 = Result;
			}
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("default_key", EX_POST);
		tb1 = '\01';
		tr1 = *(EIF_REFERENCE *)(Current + O3609[dtype-843]);
		ti4_1 = (nstcall = 1, F761_4161(RTCW(tr1), *(EIF_INTEGER_32 *)(Current + O3580[dtype-843])));
		if ((EIF_BOOLEAN)(arg1 == ti4_1)) {
			tb1 = (EIF_BOOLEAN)(Result == *(EIF_BOOLEAN *)(Current + O3612[dtype-843]));
		}
		if (tb1) {
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

/* {HASH_TABLE}.is_off_position */
EIF_BOOLEAN F845_4542 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("is_off_position", 844, Current, 0, 1, 9941);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = '\01';
	if (!(EIF_BOOLEAN) (arg1 < ((EIF_INTEGER_32) 0L))) {
		tr1 = *(EIF_REFERENCE *)(Current + O3608[dtype-843]);
		ti4_1 = (nstcall = 1, F761_4171(tr1));
		Result = (EIF_BOOLEAN) (arg1 >= ti4_1);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {HASH_TABLE}.set_content */
void F845_4543 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("set_content", 844, Current, 0, 1, 9942);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("c_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + O3607[dtype-843]) = (EIF_REFERENCE) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("content_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O3607[dtype-843]) == arg1)) {
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

/* {HASH_TABLE}.deleted */
EIF_BOOLEAN F845_4544 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("deleted", 844, Current, 0, 1, 9943);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("in_bounds", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (arg1 <= *(EIF_INTEGER_32 *)(Current + O3580[dtype-843]))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + O3609[dtype-843]);
	ti4_1 = (nstcall = 1, F761_4161(RTCW(tr1), arg1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (ti4_1 <= ((EIF_INTEGER_32) -2L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {HASH_TABLE}.set_keys */
void F845_4545 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("set_keys", 844, Current, 0, 1, 9944);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("c_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + O3608[dtype-843]) = (EIF_REFERENCE) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("keys_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O3608[dtype-843]) == arg1)) {
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

/* {HASH_TABLE}.set_deleted_marks */
void F845_4546 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("set_deleted_marks", 844, Current, 0, 1, 9945);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("d_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + O3610[dtype-843]) = (EIF_REFERENCE) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("deleted_marks_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O3610[dtype-843]) == arg1)) {
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

/* {HASH_TABLE}.set_indexes_map */
void F845_4547 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTEAA("set_indexes_map", 844, Current, 0, 1, 9946);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + O3609[dtype-843]) = (EIF_REFERENCE) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("indexes_map_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O3609[dtype-843]) == arg1)) {
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

/* {HASH_TABLE}.default_key_value */
EIF_REFERENCE F845_4548 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("default_key_value", 844, Current, 0, 0, 9947);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("has_default", EX_PRE);
		RTTE(*(EIF_BOOLEAN *)(Current + O3612[dtype-843]), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + O3607[dtype-843]);
	tr2 = *(EIF_REFERENCE *)(Current + O3609[dtype-843]);
	ti4_1 = (nstcall = 1, F761_4161(RTCW(tr2), *(EIF_INTEGER_32 *)(Current + O3580[dtype-843])));
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R3211[Dtype(RTCW(tr1))-677])(tr1, ti4_1));
	Result = (EIF_REFERENCE) RTCCL(tr2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {HASH_TABLE}.computed_default_key */
EIF_INTEGER_32 F845_4549 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("computed_default_key", 844, Current, 0, 0, 9948);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return (EIF_INTEGER_32) 0;
}

/* {HASH_TABLE}.computed_default_value */
EIF_REFERENCE F845_4550 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("computed_default_value", 844, Current, 0, 0, 9949);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return (EIF_REFERENCE) 0;
}

/* {HASH_TABLE}.internal_search */
void F845_4551 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc12 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc9);
	RTLR(2,loc10);
	RTLR(3,loc11);
	RTLIU(4);
	
	RTEAA("internal_search", 844, Current, 12, 1, 9950);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
	RTHOOK(2);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg1 == loc1) || EIF_FALSE)) {
		RTHOOK(3);
		*(EIF_INTEGER_32 *)(Current + O3611[dtype-843]) = (EIF_INTEGER_32) *(EIF_INTEGER_32 *)(Current + O3580[dtype-843]);
		RTHOOK(4);
		if (*(EIF_BOOLEAN *)(Current + O3612[dtype-843])) {
			RTHOOK(5);
			*(EIF_INTEGER_32 *)(Current + O3616[dtype-843]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
		} else {
			RTHOOK(6);
			*(EIF_INTEGER_32 *)(Current + O3616[dtype-843]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
		}
	} else {
		RTHOOK(7);
		loc9 = *(EIF_REFERENCE *)(Current + O3608[dtype-843]);
		RTHOOK(8);
		loc10 = *(EIF_REFERENCE *)(Current + O3609[dtype-843]);
		RTHOOK(9);
		loc11 = *(EIF_REFERENCE *)(Current + O3610[dtype-843]);
		RTHOOK(10);
		loc6 = *(EIF_INTEGER_32 *)(Current + O3580[dtype-843]);
		RTHOOK(11);
		loc8 = (EIF_INTEGER_32) loc6;
		RTHOOK(12);
		loc2 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_REFERENCE)) R3579[dtype-843])(Current, (EIF_REFERENCE) &arg1));
		RTHOOK(13);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) 1L) + (EIF_INTEGER_32) (loc2 % (EIF_INTEGER_32) (loc6 - ((EIF_INTEGER_32) 1L))));
		RTHOOK(14);
		loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 % loc6) - loc3);
		RTHOOK(15);
		*(EIF_INTEGER_32 *)(Current + O3616[dtype-843]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
		for (;;) {
			RTHOOK(16);
			if ((EIF_BOOLEAN)(loc8 == ((EIF_INTEGER_32) 0L))) break;
			RTHOOK(17);
			loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc5 + loc3) % loc6);
			RTHOOK(18);
			ti4_1 = (nstcall = 1, F761_4161(RTCW(loc10), loc5));
			loc4 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(19);
			if ((EIF_BOOLEAN) (loc4 >= ((EIF_INTEGER_32) 0L))) {
				RTHOOK(20);
				ti4_1 = (nstcall = 1, F761_4161(RTCW(loc9), loc4));
				loc12 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(21);
				if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R3581[dtype-843])(Current, (EIF_REFERENCE) &loc12, (EIF_REFERENCE) &arg1))) {
					RTHOOK(22);
					loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
					RTHOOK(23);
					*(EIF_INTEGER_32 *)(Current + O3616[dtype-843]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
				}
			} else {
				RTHOOK(24);
				if ((EIF_BOOLEAN)(loc4 == ((EIF_INTEGER_32) -1L))) {
					RTHOOK(25);
					loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				} else {
					RTHOOK(26);
					if ((EIF_BOOLEAN)(loc7 == ((EIF_INTEGER_32) -1L))) {
						RTHOOK(27);
						loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) -loc4 + ((EIF_INTEGER_32) -2L));
						
						RTHOOK(28);
						tb1 = (nstcall = 1, F774_4161(RTCW(loc11), loc4));
						if ((EIF_BOOLEAN) !tb1) {
							RTHOOK(29);
							loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
						} else {
							RTHOOK(30);
							loc7 = (EIF_INTEGER_32) loc5;
						}
					}
				}
			}
			RTHOOK(31);
			loc8--;
		}
		RTHOOK(32);
		*(EIF_INTEGER_32 *)(Current + O3611[dtype-843]) = (EIF_INTEGER_32) loc5;
	}
	RTHOOK(33);
	*(EIF_INTEGER_32 *)(Current + O3617[dtype-843]) = (EIF_INTEGER_32) loc7;
	if (RTAL & CK_ENSURE) {
		RTHOOK(34);
		RTCT("found_or_not_found", EX_POST);
		tb1 = '\01';
		if (!(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3587[dtype-843])(Current))) {
			tb1 = (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3588[dtype-843])(Current));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(35);
		RTCT("deleted_item_at_deleted_position", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O3617[dtype-843]) != ((EIF_INTEGER_32) -1L))) {
			tb1 = (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_INTEGER_32)) R3629[dtype-843])(Current, *(EIF_INTEGER_32 *)(Current + O3617[dtype-843])));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(36);
		RTCT("default_iff_at_capacity", EX_POST);
		if ((EIF_BOOLEAN)((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O3611[dtype-843]) == *(EIF_INTEGER_32 *)(Current + O3580[dtype-843])) == (EIF_BOOLEAN)(arg1 == (nstcall = 0, eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3634[dtype-843])(Current))))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(37);
	RTLE;
	RTEE;
}

/* {HASH_TABLE}.search_for_insertion */
void F845_4552 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc9);
	RTLR(2,loc10);
	RTLIU(3);
	
	RTEAA("search_for_insertion", 844, Current, 10, 1, 9951);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_present", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R2964[dtype-677])(Current, (EIF_REFERENCE) &arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
	RTHOOK(3);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg1 == loc1) || EIF_FALSE)) {
		
		RTHOOK(4);
		*(EIF_INTEGER_32 *)(Current + O3611[dtype-843]) = (EIF_INTEGER_32) *(EIF_INTEGER_32 *)(Current + O3580[dtype-843]);
	} else {
		RTHOOK(5);
		loc9 = *(EIF_REFERENCE *)(Current + O3609[dtype-843]);
		RTHOOK(6);
		loc10 = *(EIF_REFERENCE *)(Current + O3610[dtype-843]);
		RTHOOK(7);
		loc6 = *(EIF_INTEGER_32 *)(Current + O3580[dtype-843]);
		RTHOOK(8);
		loc8 = (EIF_INTEGER_32) loc6;
		RTHOOK(9);
		loc2 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_REFERENCE)) R3579[dtype-843])(Current, (EIF_REFERENCE) &arg1));
		RTHOOK(10);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) 1L) + (EIF_INTEGER_32) (loc2 % (EIF_INTEGER_32) (loc6 - ((EIF_INTEGER_32) 1L))));
		RTHOOK(11);
		loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 % loc6) - loc3);
		for (;;) {
			RTHOOK(12);
			if ((EIF_BOOLEAN)(loc8 == ((EIF_INTEGER_32) 0L))) break;
			RTHOOK(13);
			loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc5 + loc3) % loc6);
			RTHOOK(14);
			ti4_1 = (nstcall = 1, F761_4161(RTCW(loc9), loc5));
			loc4 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(15);
			if ((EIF_BOOLEAN) (loc4 >= ((EIF_INTEGER_32) 0L))) {
			} else {
				RTHOOK(16);
				if ((EIF_BOOLEAN)(loc4 == ((EIF_INTEGER_32) -1L))) {
					RTHOOK(17);
					loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				} else {
					RTHOOK(18);
					if ((EIF_BOOLEAN)(loc7 == ((EIF_INTEGER_32) -1L))) {
						RTHOOK(19);
						loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) -loc4 + ((EIF_INTEGER_32) -2L));
						
						RTHOOK(20);
						tb1 = (nstcall = 1, F774_4161(RTCW(loc10), loc4));
						if ((EIF_BOOLEAN) !tb1) {
							RTHOOK(21);
							loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
						} else {
							RTHOOK(22);
							loc7 = (EIF_INTEGER_32) loc5;
						}
					}
				}
			}
			RTHOOK(23);
			loc8--;
		}
		RTHOOK(24);
		*(EIF_INTEGER_32 *)(Current + O3611[dtype-843]) = (EIF_INTEGER_32) loc5;
	}
	RTHOOK(25);
	*(EIF_INTEGER_32 *)(Current + O3617[dtype-843]) = (EIF_INTEGER_32) loc7;
	if (RTAL & CK_ENSURE) {
		RTHOOK(26);
		RTCT("deleted_item_at_deleted_position", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O3617[dtype-843]) != ((EIF_INTEGER_32) -1L))) {
			tb1 = (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_INTEGER_32)) R3629[dtype-843])(Current, *(EIF_INTEGER_32 *)(Current + O3617[dtype-843])));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(27);
		RTCT("default_iff_at_capacity", EX_POST);
		if ((EIF_BOOLEAN)((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O3611[dtype-843]) == *(EIF_INTEGER_32 *)(Current + O3580[dtype-843])) == (EIF_BOOLEAN)(arg1 == (nstcall = 0, eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3634[dtype-843])(Current))))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(28);
	RTLE;
	RTEE;
}

/* {HASH_TABLE}.key_at */
EIF_INTEGER_32 F845_4553 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("key_at", 844, Current, 0, 1, 9952);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + O3608[dtype-843]);
	tb1 = (nstcall = 1, F761_4175(RTCW(tr1), arg1));
	if (tb1) {
		RTHOOK(2);
		tr1 = *(EIF_REFERENCE *)(Current + O3608[dtype-843]);
		ti4_1 = (nstcall = 1, F761_4161(RTCW(tr1), arg1));
		Result = (EIF_INTEGER_32) ti4_1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {HASH_TABLE}.initial_position */
EIF_INTEGER_32 F845_4554 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("initial_position", 844, Current, 0, 1, 9953);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_INTEGER_32 *)(Current + O3580[dtype-843]);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg1 % Result);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {HASH_TABLE}.position_increment */
EIF_INTEGER_32 F845_4555 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("position_increment", 844, Current, 0, 1, 9954);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_INTEGER_32 *)(Current + O3580[dtype-843]);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) 1L) + (EIF_INTEGER_32) (arg1 % (EIF_INTEGER_32) (Result - ((EIF_INTEGER_32) 1L))));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {HASH_TABLE}.set_conflict */
void F845_4557 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_conflict", 844, Current, 0, 0, 9956);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_INTEGER_32 *)(Current + O3616[dtype-843]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("conflict", EX_POST);
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3583[dtype-843])(Current))) {
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

/* {HASH_TABLE}.set_found */
void F845_4559 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_found", 844, Current, 0, 0, 9958);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_INTEGER_32 *)(Current + O3616[dtype-843]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("found", EX_POST);
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3587[dtype-843])(Current))) {
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

/* {HASH_TABLE}.set_inserted */
void F845_4561 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_inserted", 844, Current, 0, 0, 9960);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_INTEGER_32 *)(Current + O3616[dtype-843]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("inserted", EX_POST);
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3584[dtype-843])(Current))) {
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

/* {HASH_TABLE}.set_not_found */
void F845_4563 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_not_found", 844, Current, 0, 0, 9962);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_INTEGER_32 *)(Current + O3616[dtype-843]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("not_found", EX_POST);
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3588[dtype-843])(Current))) {
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

/* {HASH_TABLE}.set_no_status */
void F845_4564 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_no_status", 844, Current, 0, 0, 9850);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_INTEGER_32 *)(Current + O3616[dtype-843]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("default_status", EX_POST);
		if ((EIF_BOOLEAN) !(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3654[dtype-843])(Current))) {
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

/* {HASH_TABLE}.set_removed */
void F845_4566 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_removed", 844, Current, 0, 0, 9852);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_INTEGER_32 *)(Current + O3616[dtype-843]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 16L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("removed", EX_POST);
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3586[dtype-843])(Current))) {
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

/* {HASH_TABLE}.set_replaced */
void F845_4568 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_replaced", 844, Current, 0, 0, 9854);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_INTEGER_32 *)(Current + O3616[dtype-843]) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 32L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("replaced", EX_POST);
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3585[dtype-843])(Current))) {
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

/* {HASH_TABLE}.special_status */
EIF_BOOLEAN F845_4569 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("special_status", 844, Current, 0, 0, 9855);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O3616[dtype-843]);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("Result = (control > 0)", EX_POST);
		if ((EIF_BOOLEAN)(Result == (EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current + O3616[dtype-843]) > ((EIF_INTEGER_32) 0L)))) {
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

/* {HASH_TABLE}.add_space */
void F845_4570 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("add_space", 844, Current, 0, 0, 9856);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current + O3657[dtype-843]);
		in_assertion = 0;
	}
	RTHOOK(1);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R3570[dtype-843])(Current, (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current + O3657[dtype-843]) + (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current + O3657[dtype-843]) / ((EIF_INTEGER_32) 2L)))));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("count_not_changed", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O3657[dtype-843]) == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("breathing_space", EX_POST);
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current + O3657[dtype-843]) < *(EIF_INTEGER_32 *)(Current + O3580[dtype-843]))) {
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

/* {HASH_TABLE}.collection_extend */
void F845_4572 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("collection_extend", 844, Current, 0, 1, 9858);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2951[dtype-564])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("item_inserted", EX_POST);
		tr1 = RTCCL(arg1);
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R2953[dtype-564])(Current, tr1))) {
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

/* {HASH_TABLE}._invariant */
void F845_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	RTCDT;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTEAINV(l_feature_name, 456, Current, 0, 0);
	RTIT("keys_not_void", Current);
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O3608[dtype-843]) != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("content_not_void", Current);
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O3607[dtype-843]) != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("keys_enough_capacity", Current);
	tr1 = *(EIF_REFERENCE *)(Current + O3608[dtype-843]);
	ti4_1 = (nstcall = 1, F761_4171(tr1));
	if ((EIF_BOOLEAN) (ti4_1 <= (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current + O3580[dtype-843]) + ((EIF_INTEGER_32) 1L)))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("content_enough_capacity", Current);
	tr1 = *(EIF_REFERENCE *)(Current + O3607[dtype-843]);
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3396[Dtype(RTCW(tr1))-759])(tr1));
	if ((EIF_BOOLEAN) (ti4_1 <= (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current + O3580[dtype-843]) + ((EIF_INTEGER_32) 1L)))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("valid_iteration_position", Current);
	tb1 = '\01';
	if (!(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3590[dtype-843])(Current))) {
		tb1 = (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_INTEGER_32)) R3626[dtype-843])(Current, *(EIF_INTEGER_32 *)(Current + O3613[dtype-843])));
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("control_non_negative", Current);
	if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current + O3616[dtype-843]) >= ((EIF_INTEGER_32) 0L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("special_status", Current);
	tb1 = '\01';
	tb2 = '\01';
	tb3 = '\01';
	tb4 = '\01';
	tb5 = '\01';
	if (!(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3583[dtype-843])(Current))) {
		tb5 = (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3584[dtype-843])(Current));
	}
	if (!tb5) {
		tb4 = (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3585[dtype-843])(Current));
	}
	if (!tb4) {
		tb3 = (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3586[dtype-843])(Current));
	}
	if (!tb3) {
		tb2 = (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3587[dtype-843])(Current));
	}
	if (!tb2) {
		tb1 = (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3588[dtype-843])(Current));
	}
	if ((EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3654[dtype-843])(Current)) == tb1)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("count_big_enough", Current);
	if ((EIF_BOOLEAN) (((EIF_INTEGER_32) 0L) <= *(EIF_INTEGER_32 *)(Current + O3657[dtype-843]))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("count_small_enough", Current);
	if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current + O3657[dtype-843]) <= *(EIF_INTEGER_32 *)(Current + O3580[dtype-843]))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("slot_count_big_enough", Current);
	if ((EIF_BOOLEAN) (((EIF_INTEGER_32) 0L) <= *(EIF_INTEGER_32 *)(Current + O3657[dtype-843]))) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit457 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
