/*
 * Code for class INET4_ADDRESS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "in145.h"
#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {INET4_ADDRESS}.make_from_host_and_address */
void F166_1789 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg2);
	RTLR(1,Current);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTEAA("make_from_host_and_address", 165, Current, 0, 2, 1810);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("an_address_count_valid", EX_PRE);
		tb1 = '\01';
		if ((EIF_BOOLEAN)(arg2 != NULL)) {
			ti4_1 = (nstcall = 1, F686_3918(RTCW(arg2)));
			tb1 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 4L));
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	RTHOOK(3);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(4);
	tb1 = '\0';
	if ((EIF_BOOLEAN)(arg2 != NULL)) {
		ti4_1 = (nstcall = 1, F686_3918(RTCW(arg2)));
		tb1 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 4L));
	}
	if (tb1) {
		RTHOOK(5);
		tu1_1 = (nstcall = 1, F686_3911(RTCW(arg2), ((EIF_INTEGER_32) 4L)));
		ti4_1 = (EIF_INTEGER_32) tu1_1;
		ti4_2 = eif_bit_and(ti4_1,((EIF_INTEGER_32) 255L));
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_) = (EIF_INTEGER_32) ti4_2;
		RTHOOK(6);
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
		tu1_1 = (nstcall = 1, F686_3911(RTCW(arg2), ((EIF_INTEGER_32) 3L)));
		ti4_2 = (EIF_INTEGER_32) tu1_1;
		ti4_3 = eif_bit_shift_left(ti4_2,((EIF_INTEGER_32) 8L));
		ti4_2 = eif_bit_and(ti4_3,((EIF_INTEGER_32) 65280L));
		ti4_3 = eif_bit_or(ti4_1,ti4_2);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_) = (EIF_INTEGER_32) ti4_3;
		RTHOOK(7);
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
		tu1_1 = (nstcall = 1, F686_3911(RTCW(arg2), ((EIF_INTEGER_32) 2L)));
		ti4_2 = (EIF_INTEGER_32) tu1_1;
		ti4_3 = eif_bit_shift_left(ti4_2,((EIF_INTEGER_32) 16L));
		ti4_2 = eif_bit_and(ti4_3,((EIF_INTEGER_32) 16711680L));
		ti4_3 = eif_bit_or(ti4_1,ti4_2);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_) = (EIF_INTEGER_32) ti4_3;
		RTHOOK(8);
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
		tu1_1 = (nstcall = 1, F686_3911(RTCW(arg2), ((EIF_INTEGER_32) 1L)));
		ti4_2 = (EIF_INTEGER_32) tu1_1;
		ti4_3 = eif_bit_shift_left(ti4_2,((EIF_INTEGER_32) 24L));
		ti4_2 = eif_bit_and(ti4_3,(EIF_INTEGER_32) ((EIF_INTEGER_64) RTI64C(4278190080)));
		ti4_3 = eif_bit_or(ti4_1,ti4_2);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_) = (EIF_INTEGER_32) ti4_3;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
}

/* {INET4_ADDRESS}.make_from_host_and_pointer */
void F166_1790 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_POINTER arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTEAA("make_from_host_and_pointer", 165, Current, 0, 2, 1811);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	RTHOOK(2);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(3);
	if ((EIF_BOOLEAN)(arg2 != (nstcall = 0, F1_33(Current)))) {
		RTHOOK(4);
		ti4_1 = (nstcall = 0, F166_1807(Current, arg2));
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_) = (EIF_INTEGER_32) ti4_1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {INET4_ADDRESS}.host_address */
EIF_REFERENCE F166_1791 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("host_address", 165, Current, 0, 0, 1812);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = (nstcall = 0, F166_1802(Current));
	Result = (nstcall = 0, F166_1805(Current, tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {INET4_ADDRESS}.is_multicast_address */
EIF_BOOLEAN F166_1792 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_multicast_address", 165, Current, 0, 0, 1813);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
	ti4_2 = eif_bit_and(ti4_1,(EIF_INTEGER_32) ((EIF_INTEGER_64) RTI64C(4026531840)));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32) ((EIF_INTEGER_64) RTI64C(3758096384)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {INET4_ADDRESS}.is_any_local_address */
EIF_BOOLEAN F166_1793 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_any_local_address", 165, Current, 0, 0, 1814);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {INET4_ADDRESS}.is_loopback_address */
EIF_BOOLEAN F166_1794 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_loopback_address", 165, Current, 0, 0, 1815);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
	ti4_2 = eif_bit_shift_right(ti4_1,((EIF_INTEGER_32) 24L));
	ti4_1 = eif_bit_and(ti4_2,((EIF_INTEGER_32) 255L));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 127L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {INET4_ADDRESS}.is_link_local_address */
EIF_BOOLEAN F166_1795 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_link_local_address", 165, Current, 0, 0, 1816);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = '\0';
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
	ti4_2 = eif_bit_shift_right(ti4_1,((EIF_INTEGER_32) 24L));
	ti4_1 = eif_bit_and(ti4_2,((EIF_INTEGER_32) 255L));
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 169L))) {
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
		ti4_2 = eif_bit_shift_right(ti4_1,((EIF_INTEGER_32) 16L));
		ti4_1 = eif_bit_and(ti4_2,((EIF_INTEGER_32) 255L));
		Result = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 254L));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {INET4_ADDRESS}.is_site_local_address */
EIF_BOOLEAN F166_1796 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_site_local_address", 165, Current, 0, 0, 1817);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = '\01';
	tb1 = '\01';
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
	ti4_2 = eif_bit_shift_right(ti4_1,((EIF_INTEGER_32) 24L));
	ti4_1 = eif_bit_and(ti4_2,((EIF_INTEGER_32) 255L));
	if (!(EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 10L))) {
		tb2 = '\0';
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
		ti4_2 = eif_bit_shift_right(ti4_1,((EIF_INTEGER_32) 24L));
		ti4_1 = eif_bit_and(ti4_2,((EIF_INTEGER_32) 255L));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 172L))) {
			ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
			ti4_2 = eif_bit_shift_right(ti4_1,((EIF_INTEGER_32) 16L));
			ti4_1 = eif_bit_and(ti4_2,((EIF_INTEGER_32) 240L));
			tb2 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 16L));
		}
		tb1 = tb2;
	}
	if (!tb1) {
		tb1 = '\0';
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
		ti4_2 = eif_bit_shift_right(ti4_1,((EIF_INTEGER_32) 24L));
		ti4_1 = eif_bit_and(ti4_2,((EIF_INTEGER_32) 255L));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 192L))) {
			ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
			ti4_2 = eif_bit_shift_right(ti4_1,((EIF_INTEGER_32) 16L));
			ti4_1 = eif_bit_and(ti4_2,((EIF_INTEGER_32) 255L));
			tb1 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 168L));
		}
		Result = tb1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {INET4_ADDRESS}.is_mc_global */
EIF_BOOLEAN F166_1797 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_mc_global", 165, Current, 3, 0, 1818);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
	ti4_2 = eif_bit_shift_right(ti4_1,((EIF_INTEGER_32) 24L));
	ti4_1 = eif_bit_and(ti4_2,((EIF_INTEGER_32) 255L));
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(2);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
	ti4_2 = eif_bit_shift_right(ti4_1,((EIF_INTEGER_32) 16L));
	ti4_1 = eif_bit_and(ti4_2,((EIF_INTEGER_32) 255L));
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
	ti4_2 = eif_bit_shift_right(ti4_1,((EIF_INTEGER_32) 8L));
	ti4_1 = eif_bit_and(ti4_2,((EIF_INTEGER_32) 255L));
	loc3 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 >= ((EIF_INTEGER_32) 224L)) && (EIF_BOOLEAN) (loc1 <= ((EIF_INTEGER_32) 238L))) && (EIF_BOOLEAN) !(EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 224L)) && (EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 0L))) && (EIF_BOOLEAN)(loc3 == ((EIF_INTEGER_32) 0L))));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {INET4_ADDRESS}.is_mc_node_local */
EIF_BOOLEAN F166_1798 (EIF_REFERENCE Current)
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
	
	RTEAA("is_mc_node_local", 165, Current, 0, 0, 1799);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {INET4_ADDRESS}.is_mc_link_local */
EIF_BOOLEAN F166_1799 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_mc_link_local", 165, Current, 0, 0, 1800);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = '\0';
	tb1 = '\0';
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
	ti4_2 = eif_bit_shift_right(ti4_1,((EIF_INTEGER_32) 24L));
	ti4_1 = eif_bit_and(ti4_2,((EIF_INTEGER_32) 255L));
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 224L))) {
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
		ti4_2 = eif_bit_shift_right(ti4_1,((EIF_INTEGER_32) 16L));
		ti4_1 = eif_bit_and(ti4_2,((EIF_INTEGER_32) 255L));
		tb1 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L));
	}
	if (tb1) {
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
		ti4_2 = eif_bit_shift_right(ti4_1,((EIF_INTEGER_32) 8L));
		ti4_1 = eif_bit_and(ti4_2,((EIF_INTEGER_32) 255L));
		Result = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {INET4_ADDRESS}.is_mc_site_local */
EIF_BOOLEAN F166_1800 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_mc_site_local", 165, Current, 0, 0, 1801);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = '\0';
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
	ti4_2 = eif_bit_shift_right(ti4_1,((EIF_INTEGER_32) 24L));
	ti4_1 = eif_bit_and(ti4_2,((EIF_INTEGER_32) 255L));
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 239L))) {
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
		ti4_2 = eif_bit_shift_right(ti4_1,((EIF_INTEGER_32) 16L));
		ti4_1 = eif_bit_and(ti4_2,((EIF_INTEGER_32) 255L));
		Result = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 255L));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {INET4_ADDRESS}.is_mc_org_local */
EIF_BOOLEAN F166_1801 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_mc_org_local", 165, Current, 0, 0, 1802);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = '\0';
	tb1 = '\0';
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
	ti4_2 = eif_bit_shift_right(ti4_1,((EIF_INTEGER_32) 24L));
	ti4_1 = eif_bit_and(ti4_2,((EIF_INTEGER_32) 255L));
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 239L))) {
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
		ti4_2 = eif_bit_shift_right(ti4_1,((EIF_INTEGER_32) 16L));
		ti4_1 = eif_bit_and(ti4_2,((EIF_INTEGER_32) 255L));
		tb1 = (EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 192L));
	}
	if (tb1) {
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
		ti4_2 = eif_bit_shift_right(ti4_1,((EIF_INTEGER_32) 16L));
		ti4_1 = eif_bit_and(ti4_2,((EIF_INTEGER_32) 255L));
		Result = (EIF_BOOLEAN) (ti4_1 <= ((EIF_INTEGER_32) 195L));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {INET4_ADDRESS}.raw_address */
EIF_REFERENCE F166_1802 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_8 tu1_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("raw_address", 165, Current, 0, 0, 1803);
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
		Result = RTLNS(typres0.id, 685, _OBJSIZ_1_1_0_2_0_0_0_0_);
	}
	(nstcall = -1, F686_3906(RTCW(Result), ((EIF_NATURAL_8) 0U), ((EIF_INTEGER_32) 1L), ((EIF_INTEGER_32) 4L)));
	RTHOOK(2);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
	ti4_2 = eif_bit_shift_right(ti4_1,((EIF_INTEGER_32) 24L));
	ti4_1 = eif_bit_and(ti4_2,((EIF_INTEGER_32) 255L));
	tu1_1 = (EIF_NATURAL_8) ti4_1;
	(nstcall = 1, F686_3930(RTCW(Result), tu1_1, ((EIF_INTEGER_32) 1L)));
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
	ti4_2 = eif_bit_shift_right(ti4_1,((EIF_INTEGER_32) 16L));
	ti4_1 = eif_bit_and(ti4_2,((EIF_INTEGER_32) 255L));
	tu1_1 = (EIF_NATURAL_8) ti4_1;
	(nstcall = 1, F686_3930(RTCW(Result), tu1_1, ((EIF_INTEGER_32) 2L)));
	RTHOOK(4);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
	ti4_2 = eif_bit_shift_right(ti4_1,((EIF_INTEGER_32) 8L));
	ti4_1 = eif_bit_and(ti4_2,((EIF_INTEGER_32) 255L));
	tu1_1 = (EIF_NATURAL_8) ti4_1;
	(nstcall = 1, F686_3930(RTCW(Result), tu1_1, ((EIF_INTEGER_32) 3L)));
	RTHOOK(5);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
	ti4_2 = eif_bit_and(ti4_1,((EIF_INTEGER_32) 255L));
	tu1_1 = (EIF_NATURAL_8) ti4_2;
	(nstcall = 1, F686_3930(RTCW(Result), tu1_1, ((EIF_INTEGER_32) 4L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
	return Result;
}

/* {INET4_ADDRESS}.sockaddr */
EIF_REFERENCE F166_1803 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("sockaddr", 165, Current, 0, 1, 1804);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNS(eif_new_type(213, 0x01).id, 213, _OBJSIZ_0_1_0_1_0_1_1_0_);
	ti4_1 = (nstcall = 0, F164_1759(Current));
	(nstcall = -1, F214_2527(RTCW(Result), ti4_1));
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(RTCW(Result)+ _PTROFF_0_1_0_1_0_0_);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
	(nstcall = 0, F166_1806(Current, tp1, ti4_1, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {INET4_ADDRESS}.the_address */
EIF_INTEGER_32 F166_1804 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
}


/* {INET4_ADDRESS}.numeric_to_text */
EIF_REFERENCE F166_1805 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("numeric_to_text", 165, Current, 0, 1, 1806);
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
			tb1 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 4L));
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
	tu1_1 = (nstcall = 1, F686_3911(RTCW(arg1), ((EIF_INTEGER_32) 1L)));
	ti4_1 = (EIF_INTEGER_32) tu1_1;
	(nstcall = 1, F970_6176(RTCW(Result), ti4_1));
	RTHOOK(4);
	(nstcall = 1, F970_6186(RTCW(Result), (EIF_CHARACTER_8) '.'));
	RTHOOK(5);
	tu1_1 = (nstcall = 1, F686_3911(RTCW(arg1), ((EIF_INTEGER_32) 2L)));
	ti4_1 = (EIF_INTEGER_32) tu1_1;
	(nstcall = 1, F970_6176(RTCW(Result), ti4_1));
	RTHOOK(6);
	(nstcall = 1, F970_6186(RTCW(Result), (EIF_CHARACTER_8) '.'));
	RTHOOK(7);
	tu1_1 = (nstcall = 1, F686_3911(RTCW(arg1), ((EIF_INTEGER_32) 3L)));
	ti4_1 = (EIF_INTEGER_32) tu1_1;
	(nstcall = 1, F970_6176(RTCW(Result), ti4_1));
	RTHOOK(8);
	(nstcall = 1, F970_6186(RTCW(Result), (EIF_CHARACTER_8) '.'));
	RTHOOK(9);
	tu1_1 = (nstcall = 1, F686_3911(RTCW(arg1), ((EIF_INTEGER_32) 4L)));
	ti4_1 = (EIF_INTEGER_32) tu1_1;
	(nstcall = 1, F970_6176(RTCW(Result), ti4_1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
	return Result;
}

/* {INET4_ADDRESS}.fill_ipv4 */
void F166_1806 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("fill_ipv4", 165, Current, 0, 3, 1807);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);en_socket_address_fill_ipv4(arg1, arg2, arg3);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {INET4_ADDRESS}.c_sockaddr_get_ipv4_address */
EIF_INTEGER_32 F166_1807 (EIF_REFERENCE Current, EIF_POINTER arg1)
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
	
	RTEAA("c_sockaddr_get_ipv4_address", 165, Current, 0, 1, 1808);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) en_sockaddr_get_ipv4_address(arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

void EIF_Minit145 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
