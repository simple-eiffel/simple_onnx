/*
 * Code for class SED_BASIC_DESERIALIZER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "se138.h"
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

/* {SED_BASIC_DESERIALIZER}.read_header */
void F159_1677 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc4);
	RTLR(1,Current);
	RTLR(2,loc3);
	RTLR(3,loc5);
	RTLR(4,loc8);
	RTLR(5,tr1);
	RTLR(6,tr2);
	RTLIU(7);
	
	RTEAA("read_header", 158, Current, 8, 1, 1700);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc4 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	RTHOOK(2);
	loc3 = *(EIF_REFERENCE *)(Current);
	RTHOOK(3);
	(nstcall = 0, F158_1649(Current));
	RTHOOK(4);
	tu4_1 = (nstcall = 1, F63_872(RTCW(loc3)));
	ti4_1 = (EIF_INTEGER_32) tu4_1;
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(5);
	{
		static EIF_TYPE_INDEX typarr0[] = {760,892,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		loc5 = RTLNSP2(typres0.id,0,loc2,sizeof(EIF_INTEGER_32), EIF_TRUE);
	}
	(nstcall = -1, F761_4159(RTCW(loc5), ((EIF_INTEGER_32) 0L), loc2));
	RTHOOK(6);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	for (;;) {
		RTHOOK(7);
		if ((EIF_BOOLEAN)(loc1 == loc2)) break;
		RTHOOK(8);
		tu4_1 = (nstcall = 1, F63_872(RTCW(loc3)));
		ti4_1 = (EIF_INTEGER_32) tu4_1;
		loc6 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(9);
		tr1 = (nstcall = 1, F63_855(RTCW(loc3)));
		loc8 = (EIF_REFERENCE) tr1;
		RTHOOK(10);
		ti4_1 = (nstcall = 1, F192_2323(RTCW(loc4), loc8));
		loc7 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(11);
		if ((EIF_BOOLEAN) (loc7 >= ((EIF_INTEGER_32) 0L))) {
			RTHOOK(12);
			tb1 = (nstcall = 1, F761_4175(RTCW(loc5), loc6));
			if ((EIF_BOOLEAN) !tb1) {
				RTHOOK(13);
				ti4_1 = (nstcall = 1, F761_4171(loc5));
				ti4_2 = eif_max_int32 ((EIF_INTEGER_32) (loc6 + ((EIF_INTEGER_32) 1L)),(EIF_INTEGER_32) (ti4_1 * ((EIF_INTEGER_32) 2L)));
				tr1 = (nstcall = 1, F761_4194(RTCW(loc5), ((EIF_INTEGER_32) 0L), ti4_2));
				loc5 = (EIF_REFERENCE) tr1;
			}
			RTHOOK(14);
			(nstcall = 1, F761_4176(RTCW(loc5), loc7, loc6));
		} else {
			RTHOOK(15);
			tr1 = RTOUCR(155,(nstcall = 0, F158_1639), (Current));
			tr2 = (nstcall = 1, F22_300(RTCW(tr1), loc8, loc8));
			(nstcall = 0, F158_1644(Current, tr2));
		}
		RTHOOK(16);
		loc1++;
	}
	RTHOOK(17);
	RTAR(Current, loc5);
	*(EIF_REFERENCE *)(Current + _REFACS_6_) = (EIF_REFERENCE) loc5;
	RTHOOK(18);
	(nstcall = 0, F158_1650(Current, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(19);
	RTLE;
	RTEE;
}

void EIF_Minit138 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
