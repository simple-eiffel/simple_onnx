/*
 * Code for class INET6_ADDRESS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "in144.h"
#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F165_1787
static EIF_NATURAL_8 inline_F165_1787 (EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	return (EIF_NATURAL_8) (((unsigned char*)arg1)[arg2])
	;
}
#define INLINE_F165_1787
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {INET6_ADDRESS}.make_from_host_and_address */
void F165_1761 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg2);
	RTLR(1,Current);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTEAA("make_from_host_and_address", 164, Current, 0, 2, 1785);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("an_address_count_valid", EX_PRE);
		ti4_1 = (nstcall = 1, F686_3918(RTCW(arg2)));
		RTTE((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 16L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_1_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	RTHOOK(3);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	RTHOOK(4);
	RTAR(Current, arg2);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg2;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {INET6_ADDRESS}.make_from_host_and_address_and_interface_name */
void F165_1762 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,Current);
	RTLR(2,arg3);
	RTLR(3,arg1);
	RTLIU(4);
	
	RTEAA("make_from_host_and_address_and_interface_name", 164, Current, 0, 3, 1786);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("an_address_count_valid", EX_PRE);
		ti4_1 = (nstcall = 1, F686_3918(RTCW(arg2)));
		RTTE((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 16L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTAR(Current, arg3);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) arg3;
	RTHOOK(3);
	(nstcall = 0, F165_1763(Current, arg1, arg2, ((EIF_INTEGER_32) 0L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {INET6_ADDRESS}.make_from_host_and_address_and_scope */
void F165_1763 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg2);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("make_from_host_and_address_and_scope", 164, Current, 0, 3, 1787);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("an_address_count_valid", EX_PRE);
		ti4_1 = (nstcall = 1, F686_3918(RTCW(arg2)));
		RTTE((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 16L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F165_1761(Current, arg1, arg2));
	RTHOOK(3);
	if ((EIF_BOOLEAN) (arg3 >= ((EIF_INTEGER_32) 0L))) {
		RTHOOK(4);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_1_0_1_) = (EIF_INTEGER_32) arg3;
		RTHOOK(5);
		*(EIF_BOOLEAN *)(Current+ _CHROFF_3_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {INET6_ADDRESS}.make_from_host_and_pointer */
void F165_1764 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_POINTER arg2)
{
	GTCX
	RTEX;
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_8 tu1_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTEAA("make_from_host_and_pointer", 164, Current, 4, 2, 1788);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,685,907,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		loc2 = RTLNS(typres0.id, 685, _OBJSIZ_1_1_0_2_0_0_0_0_);
	}
	(nstcall = -1, F686_3906(RTCW(loc2), ((EIF_NATURAL_8) 0U), ((EIF_INTEGER_32) 1L), ((EIF_INTEGER_32) 16L)));
	RTHOOK(2);
	if ((EIF_BOOLEAN)(arg2 != (nstcall = 0, F1_33(Current)))) {
		RTHOOK(3);
		loc1 = (nstcall = 0, F165_1785(Current, arg2));
		RTHOOK(4);
		loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(5);
			if ((EIF_BOOLEAN) (loc3 > ((EIF_INTEGER_32) 16L))) break;
			RTHOOK(6);
			tu1_1 = (nstcall = 0, F165_1787(Current, loc1, (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L))));
			(nstcall = 1, F686_3930(RTCW(loc2), tu1_1, loc3));
			RTHOOK(7);
			loc3++;
		}
		RTHOOK(8);
		loc4 = (nstcall = 0, F165_1786(Current, arg2));
	}
	RTHOOK(9);
	(nstcall = 0, F165_1763(Current, arg1, loc2, loc4));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
}

/* {INET6_ADDRESS}.host_address */
EIF_REFERENCE F165_1765 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,loc1);
	RTLIU(3);
	
	RTEAA("host_address", 164, Current, 1, 0, 1789);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F165_1783(Current, *(EIF_REFERENCE *)(Current + _REFACS_1_)));
	RTHOOK(2);
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	RTHOOK(3);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTHOOK(4);
		(nstcall = 1, F970_6186(RTCW(Result), (EIF_CHARACTER_8) '%'));
		RTHOOK(5);
		(nstcall = 1, F970_6175(RTCW(Result), loc1));
	} else {
		RTHOOK(6);
		if ((EIF_BOOLEAN) (*(EIF_BOOLEAN *)(Current+ _CHROFF_3_0_) && (EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_1_0_1_) > ((EIF_INTEGER_32) 0L)))) {
			RTHOOK(7);
			(nstcall = 1, F970_6186(RTCW(Result), (EIF_CHARACTER_8) '%'));
			RTHOOK(8);
			(nstcall = 1, F970_6176(RTCW(Result), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_1_0_1_)));
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
	return Result;
}

/* {INET6_ADDRESS}.is_multicast_address */
EIF_BOOLEAN F165_1766 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("is_multicast_address", 164, Current, 0, 0, 1790);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tu1_1 = (nstcall = 1, F686_3911(RTCW(tr1), ((EIF_INTEGER_32) 1L)));
	tu1_2 = eif_bit_and(tu1_1,(EIF_NATURAL_8) ((EIF_INTEGER_32) 255L));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu1_2 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 255L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {INET6_ADDRESS}.is_any_local_address */
EIF_BOOLEAN F165_1767 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_NATURAL_8 loc1 = (EIF_NATURAL_8) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("is_any_local_address", 164, Current, 2, 0, 1791);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	RTHOOK(2);
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(3);
		if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 16L))) break;
		RTHOOK(4);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tu1_1 = (nstcall = 1, F686_3911(RTCW(tr1), loc2));
		tu1_2 = eif_bit_or(loc1,tu1_1);
		loc1 = (EIF_NATURAL_8) tu1_2;
		RTHOOK(5);
		loc2++;
	}
	RTHOOK(6);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc1 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INET6_ADDRESS}.is_loopback_address */
EIF_BOOLEAN F165_1768 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_NATURAL_8 loc1 = (EIF_NATURAL_8) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("is_loopback_address", 164, Current, 2, 0, 1792);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	RTHOOK(2);
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(3);
		if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 15L))) break;
		RTHOOK(4);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tu1_1 = (nstcall = 1, F686_3911(RTCW(tr1), loc2));
		tu1_2 = eif_bit_or(loc1,tu1_1);
		loc1 = (EIF_NATURAL_8) tu1_2;
		RTHOOK(5);
		loc2++;
	}
	RTHOOK(6);
	Result = '\0';
	if ((EIF_BOOLEAN)(loc1 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L))) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tu1_1 = (nstcall = 1, F686_3911(RTCW(tr1), ((EIF_INTEGER_32) 16L)));
		Result = (EIF_BOOLEAN)(tu1_1 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 1L));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INET6_ADDRESS}.is_link_local_address */
EIF_BOOLEAN F165_1769 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("is_link_local_address", 164, Current, 0, 0, 1793);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = '\0';
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tu1_1 = (nstcall = 1, F686_3911(RTCW(tr1), ((EIF_INTEGER_32) 1L)));
	tu1_2 = eif_bit_and(tu1_1,(EIF_NATURAL_8) ((EIF_INTEGER_32) 255L));
	if ((EIF_BOOLEAN)(tu1_2 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 254L))) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tu1_1 = (nstcall = 1, F686_3911(RTCW(tr1), ((EIF_INTEGER_32) 2L)));
		tu1_2 = eif_bit_and(tu1_1,(EIF_NATURAL_8) ((EIF_INTEGER_32) 192L));
		Result = (EIF_BOOLEAN)(tu1_2 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 128L));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {INET6_ADDRESS}.is_site_local_address */
EIF_BOOLEAN F165_1770 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("is_site_local_address", 164, Current, 0, 0, 1794);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = '\0';
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tu1_1 = (nstcall = 1, F686_3911(RTCW(tr1), ((EIF_INTEGER_32) 1L)));
	tu1_2 = eif_bit_and(tu1_1,(EIF_NATURAL_8) ((EIF_INTEGER_32) 255L));
	if ((EIF_BOOLEAN)(tu1_2 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 254L))) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tu1_1 = (nstcall = 1, F686_3911(RTCW(tr1), ((EIF_INTEGER_32) 2L)));
		tu1_2 = eif_bit_and(tu1_1,(EIF_NATURAL_8) ((EIF_INTEGER_32) 192L));
		Result = (EIF_BOOLEAN)(tu1_2 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 192L));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {INET6_ADDRESS}.is_mc_global */
EIF_BOOLEAN F165_1771 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("is_mc_global", 164, Current, 0, 0, 1795);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = '\0';
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tu1_1 = (nstcall = 1, F686_3911(RTCW(tr1), ((EIF_INTEGER_32) 1L)));
	tu1_2 = eif_bit_and(tu1_1,(EIF_NATURAL_8) ((EIF_INTEGER_32) 255L));
	if ((EIF_BOOLEAN)(tu1_2 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 255L))) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tu1_1 = (nstcall = 1, F686_3911(RTCW(tr1), ((EIF_INTEGER_32) 2L)));
		tu1_2 = eif_bit_and(tu1_1,(EIF_NATURAL_8) ((EIF_INTEGER_32) 15L));
		Result = (EIF_BOOLEAN)(tu1_2 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 14L));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {INET6_ADDRESS}.is_mc_node_local */
EIF_BOOLEAN F165_1772 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("is_mc_node_local", 164, Current, 0, 0, 1796);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = '\0';
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tu1_1 = (nstcall = 1, F686_3911(RTCW(tr1), ((EIF_INTEGER_32) 1L)));
	tu1_2 = eif_bit_and(tu1_1,(EIF_NATURAL_8) ((EIF_INTEGER_32) 255L));
	if ((EIF_BOOLEAN)(tu1_2 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 255L))) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tu1_1 = (nstcall = 1, F686_3911(RTCW(tr1), ((EIF_INTEGER_32) 2L)));
		tu1_2 = eif_bit_and(tu1_1,(EIF_NATURAL_8) ((EIF_INTEGER_32) 15L));
		Result = (EIF_BOOLEAN)(tu1_2 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 1L));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {INET6_ADDRESS}.is_mc_link_local */
EIF_BOOLEAN F165_1773 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("is_mc_link_local", 164, Current, 0, 0, 1797);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = '\0';
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tu1_1 = (nstcall = 1, F686_3911(RTCW(tr1), ((EIF_INTEGER_32) 1L)));
	tu1_2 = eif_bit_and(tu1_1,(EIF_NATURAL_8) ((EIF_INTEGER_32) 255L));
	if ((EIF_BOOLEAN)(tu1_2 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 255L))) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tu1_1 = (nstcall = 1, F686_3911(RTCW(tr1), ((EIF_INTEGER_32) 2L)));
		tu1_2 = eif_bit_and(tu1_1,(EIF_NATURAL_8) ((EIF_INTEGER_32) 15L));
		Result = (EIF_BOOLEAN)(tu1_2 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 2L));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {INET6_ADDRESS}.is_mc_site_local */
EIF_BOOLEAN F165_1774 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("is_mc_site_local", 164, Current, 0, 0, 1798);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = '\0';
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tu1_1 = (nstcall = 1, F686_3911(RTCW(tr1), ((EIF_INTEGER_32) 1L)));
	tu1_2 = eif_bit_and(tu1_1,(EIF_NATURAL_8) ((EIF_INTEGER_32) 255L));
	if ((EIF_BOOLEAN)(tu1_2 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 255L))) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tu1_1 = (nstcall = 1, F686_3911(RTCW(tr1), ((EIF_INTEGER_32) 2L)));
		tu1_2 = eif_bit_and(tu1_1,(EIF_NATURAL_8) ((EIF_INTEGER_32) 15L));
		Result = (EIF_BOOLEAN)(tu1_2 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 5L));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {INET6_ADDRESS}.is_mc_org_local */
EIF_BOOLEAN F165_1775 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("is_mc_org_local", 164, Current, 0, 0, 1771);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = '\0';
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tu1_1 = (nstcall = 1, F686_3911(RTCW(tr1), ((EIF_INTEGER_32) 1L)));
	tu1_2 = eif_bit_and(tu1_1,(EIF_NATURAL_8) ((EIF_INTEGER_32) 255L));
	if ((EIF_BOOLEAN)(tu1_2 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 255L))) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tu1_1 = (nstcall = 1, F686_3911(RTCW(tr1), ((EIF_INTEGER_32) 2L)));
		tu1_2 = eif_bit_and(tu1_1,(EIF_NATURAL_8) ((EIF_INTEGER_32) 15L));
		Result = (EIF_BOOLEAN)(tu1_2 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 8L));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {INET6_ADDRESS}.raw_address */
EIF_REFERENCE F165_1776 (EIF_REFERENCE Current)
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
	RTLR(2,tr2);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("raw_address", 164, Current, 0, 0, 1772);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr2 = (nstcall = 1, F1_14(tr1));
	Result = (EIF_REFERENCE) tr2;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {INET6_ADDRESS}.sockaddr */
EIF_REFERENCE F165_1777 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,loc1);
	RTLIU(3);
	
	RTEAA("sockaddr", 164, Current, 1, 1, 1773);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNS(eif_new_type(213, 0x01).id, 213, _OBJSIZ_0_1_0_1_0_1_1_0_);
	ti4_1 = (nstcall = 0, F164_1759(Current));
	(nstcall = -1, F214_2527(RTCW(Result), ti4_1));
	RTHOOK(2);
	loc1 = RTLNS(eif_new_type(213, 0x01).id, 213, _OBJSIZ_0_1_0_1_0_1_1_0_);
	(nstcall = -1, F214_2528(RTCW(loc1), *(EIF_REFERENCE *)(Current + _REFACS_1_)));
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(RTCW(Result)+ _PTROFF_0_1_0_1_0_0_);
	tp2 = *(EIF_POINTER *)(RTCW(loc1)+ _PTROFF_0_1_0_1_0_0_);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_1_0_1_);
	(nstcall = 0, F165_1784(Current, tp1, tp2, arg1, ti4_1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {INET6_ADDRESS}.the_address */
EIF_REFERENCE F165_1778 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {INET6_ADDRESS}.the_scope_id */
EIF_INTEGER_32 F165_1779 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_1_0_1_);
}


/* {INET6_ADDRESS}.the_scope_ifname */
EIF_REFERENCE F165_1780 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {INET6_ADDRESS}.is_scope_ifname_set */
EIF_BOOLEAN F165_1781 (EIF_REFERENCE Current)
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
	
	RTEAA("is_scope_ifname_set", 164, Current, 0, 0, 1777);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tr1 != NULL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {INET6_ADDRESS}.is_scope_id_set */
EIF_BOOLEAN F165_1782 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_3_0_);
}


/* {INET6_ADDRESS}.numeric_to_text */
EIF_REFERENCE F165_1783 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_16 loc2 = (EIF_NATURAL_16) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 tu2_2;
	EIF_NATURAL_16 tu2_3;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Result);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,Current);
	RTLIU(5);
	
	RTEAA("numeric_to_text", 164, Current, 2, 1, 1779);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("addr /= Void and then addr.count = inaddrsz", EX_PRE);
		tb1 = '\0';
		if ((EIF_BOOLEAN)(arg1 != NULL)) {
			ti4_1 = (nstcall = 1, F686_3918(RTCW(arg1)));
			tb1 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 16L));
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = RTLNS(eif_new_type(969, 0x01).id, 969, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F965_5930(RTCW(Result)));
	RTHOOK(3);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(4);
		if ((EIF_BOOLEAN) (loc1 >= ((EIF_INTEGER_32) 16L))) break;
		RTHOOK(5);
		tu1_1 = (nstcall = 1, F686_3911(RTCW(arg1), loc1));
		tu2_1 = (EIF_NATURAL_16) tu1_1;
		tu2_2 = eif_bit_shift_left(tu2_1,((EIF_INTEGER_32) 8L));
		tu2_1 = eif_bit_and(tu2_2,(EIF_NATURAL_16) ((EIF_INTEGER_32) 65280L));
		tu1_1 = (nstcall = 1, F686_3911(RTCW(arg1), (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L))));
		tu2_2 = (EIF_NATURAL_16) tu1_1;
		tu2_3 = eif_bit_and(tu2_2,(EIF_NATURAL_16) ((EIF_INTEGER_32) 255L));
		tu2_2 = eif_bit_or(tu2_1,tu2_3);
		tu2_1 = (EIF_NATURAL_16) tu2_2;
		loc2 = (EIF_NATURAL_16) tu2_1;
		RTHOOK(6);
		tr1 = RTLNS(eif_new_type(925, 0x00).id, 925, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_NATURAL_16 *)tr1 = loc2;
		tr2 = (nstcall = 1, F924_5802(RTCW(tr1)));
		(nstcall = 1, F970_6172(RTCW(Result), tr2));
		RTHOOK(7);
		if ((EIF_BOOLEAN) (loc1 < (EIF_INTEGER_32) (((EIF_INTEGER_32) 16L) - ((EIF_INTEGER_32) 1L)))) {
			RTHOOK(8);
			(nstcall = 1, F970_6186(RTCW(Result), (EIF_CHARACTER_8) ':'));
		}
		RTHOOK(9);
		loc1 += ((EIF_INTEGER_32) 2L);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
	return Result;
}

/* {INET6_ADDRESS}.fill_ipv6 */
void F165_1784 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("fill_ipv6", 164, Current, 0, 4, 1780);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);en_socket_address_fill_ipv6(arg1, arg2, arg3, arg4);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {INET6_ADDRESS}.c_sockaddr_get_ipv6_address */
EIF_POINTER F165_1785 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	RTEX;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("c_sockaddr_get_ipv6_address", 164, Current, 0, 1, 1781);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_POINTER) en_sockaddr_get_ipv6_address(arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {INET6_ADDRESS}.c_sockaddr_get_ipv6_address_scope */
EIF_INTEGER_32 F165_1786 (EIF_REFERENCE Current, EIF_POINTER arg1)
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
	
	RTEAA("c_sockaddr_get_ipv6_address_scope", 164, Current, 0, 1, 1782);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) en_sockaddr_get_ipv6_address_scope(arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {INET6_ADDRESS}.c_get_addr_element */
EIF_NATURAL_8 F165_1787 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("c_get_addr_element", 164, Current, 0, 2, 1783);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F165_1787 ((EIF_POINTER) arg1, (EIF_INTEGER_32) arg2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

void EIF_Minit144 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
