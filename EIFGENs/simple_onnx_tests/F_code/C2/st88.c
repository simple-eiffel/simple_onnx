/*
 * Code for class STRING_TO_REAL_CONVERTOR
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "st88.h"
#include <math.h>
#include "eif_built_in.h"
#include <ctype.h>
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

/* {STRING_TO_REAL_CONVERTOR}.make */
void F109_1377 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("make", 108, Current, 0, 0, 1406);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNSMART(eif_new_type(969, 1).id);
	tr2 = RTMS_EX_H(" ",1,32);
	(nstcall = -1, F968_6062(RTCW(tr1), tr2));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = RTLNSMART(eif_new_type(969, 1).id);
	tr2 = RTMS_EX_H(" ",1,32);
	(nstcall = -1, F968_6062(RTCW(tr1), tr2));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("leading_separators_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = RTMS_EX_H(" ",1,32);
		if (RTEQ(tr1, tr2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("trailing_separators_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tr2 = RTMS_EX_H(" ",1,32);
		if (RTEQ(tr1, tr2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("leading_separators_not_acceptable", EX_POST);
		if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("trailing_separatorsnot_acceptable", EX_POST);
		if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_)) {
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
}

/* {STRING_TO_REAL_CONVERTOR}.conversion_type_valid */
EIF_BOOLEAN F109_1378 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("conversion_type_valid", 108, Current, 0, 1, 1407);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F106_1349(Current, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {STRING_TO_REAL_CONVERTOR}.overflowed */
EIF_BOOLEAN F109_1379 (EIF_REFERENCE Current)
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
	
	RTEAA("overflowed", 108, Current, 0, 0, 1408);
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

/* {STRING_TO_REAL_CONVERTOR}.underflowed */
EIF_BOOLEAN F109_1380 (EIF_REFERENCE Current)
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
	
	RTEAA("underflowed", 108, Current, 0, 0, 1409);
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

/* {STRING_TO_REAL_CONVERTOR}.parse_successful */
EIF_BOOLEAN F109_1381 (EIF_REFERENCE Current)
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
	
	RTEAA("parse_successful", 108, Current, 0, 0, 1410);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_1_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 9L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {STRING_TO_REAL_CONVERTOR}.separators_valid */
EIF_BOOLEAN F109_1382 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc2 = (EIF_CHARACTER_8) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc4 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("separators_valid", 108, Current, 4, 1, 1411);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("separators_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
	loc3 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	loc4 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(5);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	for (;;) {
		RTHOOK(6);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 > loc3) || loc4)) break;
		RTHOOK(7);
		tc1 = (nstcall = 1, F970_6139(RTCW(arg1), loc1));
		loc2 = (EIF_CHARACTER_8) tc1;
		RTHOOK(8);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc2 >= (EIF_CHARACTER_8) '0') && (EIF_BOOLEAN) (loc2 <= (EIF_CHARACTER_8) '9')) || (EIF_BOOLEAN)(loc2 == (EIF_CHARACTER_8) '+')) || (EIF_BOOLEAN)(loc2 == (EIF_CHARACTER_8) '-')) || (EIF_BOOLEAN)(loc2 == (EIF_CHARACTER_8) 'E')) || (EIF_BOOLEAN)(loc2 == (EIF_CHARACTER_8) 'e'))) {
			RTHOOK(9);
			loc4 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			RTHOOK(10);
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		}
		RTHOOK(11);
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTLE;
	RTEE;
	return Result;
}

/* {STRING_TO_REAL_CONVERTOR}.is_integral_double */
EIF_BOOLEAN F109_1383 (EIF_REFERENCE Current)
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
	
	RTEAA("is_integral_double", 108, Current, 0, 0, 1412);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_1_);
	ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_1_);
	Result = *(EIF_BOOLEAN *)(Current+ _CHROFF_2_5_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 1L)) && (EIF_BOOLEAN) (ti4_2 < ((EIF_INTEGER_32) 9L))) && (EIF_BOOLEAN) !Result);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {STRING_TO_REAL_CONVERTOR}.is_integral_real */
EIF_BOOLEAN F109_1384 (EIF_REFERENCE Current)
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
	
	RTEAA("is_integral_real", 108, Current, 0, 0, 1413);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F109_1383(Current));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {STRING_TO_REAL_CONVERTOR}.is_part_of_double */
EIF_BOOLEAN F109_1385 (EIF_REFERENCE Current)
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
	
	RTEAA("is_part_of_double", 108, Current, 0, 0, 1414);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_1_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 9L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {STRING_TO_REAL_CONVERTOR}.is_part_of_real */
EIF_BOOLEAN F109_1386 (EIF_REFERENCE Current)
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
	
	RTEAA("is_part_of_real", 108, Current, 0, 0, 1415);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F109_1385(Current));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {STRING_TO_REAL_CONVERTOR}.parsed_double */
EIF_REAL_64 F109_1387 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("parsed_double", 108, Current, 0, 0, 1416);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_3_)) {
		RTHOOK(2);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_3_) = (EIF_INTEGER_32) (EIF_INTEGER_32) -*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_3_);
	}
	RTHOOK(3);
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_4_)) {
		RTHOOK(4);
		(*(EIF_REAL_64 *)(Current+ _R64OFF_2_6_0_4_0_0_0_0_)) += (EIF_REAL_64) ((EIF_REAL_64) (*(EIF_REAL_64 *)(Current+ _R64OFF_2_6_0_4_0_0_0_1_)) /  (EIF_REAL_64) (*(EIF_REAL_64 *)(Current+ _R64OFF_2_6_0_4_0_0_0_2_)));
	}
	RTHOOK(5);
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_)) {
		RTHOOK(6);
		Result = *(EIF_REAL_64 *)(Current+ _R64OFF_2_6_0_4_0_0_0_0_);
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_3_);
		tr8_1 = (EIF_REAL_64) (ti4_1);
		Result = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) -Result * (EIF_REAL_64) pow ((EIF_REAL_64) ((EIF_REAL_64) 10.0), (EIF_REAL_64) (tr8_1)));
	} else {
		RTHOOK(7);
		Result = *(EIF_REAL_64 *)(Current+ _R64OFF_2_6_0_4_0_0_0_0_);
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_3_);
		tr8_1 = (EIF_REAL_64) (ti4_1);
		Result = (EIF_REAL_64) (EIF_REAL_64) (Result * (EIF_REAL_64) pow ((EIF_REAL_64) ((EIF_REAL_64) 10.0), (EIF_REAL_64) (tr8_1)));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
	return Result;
}

/* {STRING_TO_REAL_CONVERTOR}.parsed_real */
EIF_REAL_32 F109_1388 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REAL_64 tr8_1;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("parsed_real", 108, Current, 0, 0, 1417);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr8_1 = (nstcall = 0, F109_1387(Current));
	tr4_1 = (EIF_REAL_32) (tr8_1);
	Result = (EIF_REAL_32) tr4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {STRING_TO_REAL_CONVERTOR}.reset */
void F109_1389 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REAL_64 tr8_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("reset", 108, Current, 0, 1, 1418);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("type_valid", EX_PRE);
		RTTE((nstcall = 0, F109_1378(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_0_) = (EIF_INTEGER_32) arg1;
	RTHOOK(3);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(4);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(5);
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	*(EIF_REAL_64 *)(Current+ _R64OFF_2_6_0_4_0_0_0_0_) = (EIF_REAL_64) tr8_1;
	RTHOOK(6);
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	*(EIF_REAL_64 *)(Current+ _R64OFF_2_6_0_4_0_0_0_1_) = (EIF_REAL_64) tr8_1;
	RTHOOK(7);
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	*(EIF_REAL_64 *)(Current+ _R64OFF_2_6_0_4_0_0_0_2_) = (EIF_REAL_64) tr8_1;
	RTHOOK(8);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_3_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(9);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(10);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_3_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(11);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_4_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(12);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_5_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(13);
		RTCT("last_state_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_1_) == ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(14);
		RTCT("sign_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_2_) == ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(15);
		RTCT("conversion_type_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_0_) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(16);
		RTCT("not_overflowed", EX_POST);
		if ((EIF_BOOLEAN) !(nstcall = 0, F109_1379(Current))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(17);
		RTCT("not_underflowed", EX_POST);
		if ((EIF_BOOLEAN) !(nstcall = 0, F109_1380(Current))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(18);
		RTCT("parse_successful", EX_POST);
		if ((nstcall = 0, F109_1381(Current))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(19);
		RTCT("natural_part_set", EX_POST);
		tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
		if ((EIF_BOOLEAN) eif_is_equal_real_64 (*(EIF_REAL_64 *)(Current+ _R64OFF_2_6_0_4_0_0_0_0_), tr8_1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(20);
		RTCT("fractional_part_set", EX_POST);
		tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
		if ((EIF_BOOLEAN) eif_is_equal_real_64 (*(EIF_REAL_64 *)(Current+ _R64OFF_2_6_0_4_0_0_0_1_), tr8_1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(21);
		RTCT("fractional_divider_set", EX_POST);
		tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
		if ((EIF_BOOLEAN) eif_is_equal_real_64 (*(EIF_REAL_64 *)(Current+ _R64OFF_2_6_0_4_0_0_0_2_), tr8_1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(22);
		RTCT("exponent_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_3_) == ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(23);
		RTCT("is_negative_set", EX_POST);
		if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(24);
		RTCT("has_negative_exponent_set", EX_POST);
		if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_2_3_)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(25);
		RTCT("has_fractional_part_set", EX_POST);
		if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_2_4_)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(26);
		RTCT("needs_digit_set", EX_POST);
		if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_2_5_)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(27);
	RTLE;
	RTEE;
}

/* {STRING_TO_REAL_CONVERTOR}.parse_string_with_type */
void F109_1390 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_CHARACTER_32 loc5 = (EIF_CHARACTER_32) 0;
	EIF_NATURAL_32 loc6 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc7);
	RTLR(3,loc3);
	RTLR(4,tr1);
	RTLR(5,loc8);
	RTLR(6,loc4);
	RTLIU(7);
	
	RTEAA("parse_string_with_type", 108, Current, 8, 2, 1419);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("s_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("type_valid", EX_PRE);
		RTTE((nstcall = 0, F109_1378(Current, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	(nstcall = 0, F109_1389(Current, arg2));
	RTHOOK(4);
	loc7 = arg1;
	loc7 = RTRV(eif_new_type(967, 0x01),loc7);
	if (EIF_TEST(loc7)) {
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(loc7);
		loc3 = (EIF_REFERENCE) tr1;
		RTHOOK(6);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4701[Dtype(loc7)-968])(loc7));
		loc1 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(7);
		ti4_1 = *(EIF_INTEGER_32 *)(loc7 + O4703[Dtype(loc7)-967]);
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ti4_1);
		for (;;) {
			RTHOOK(8);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc1 == loc2) || (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_1_) == ((EIF_INTEGER_32) 9L)))) break;
			RTHOOK(9);
			tc1 = (nstcall = 1, F764_4161(RTCW(loc3), loc1));
			(nstcall = 0, F109_1391(Current, tc1));
			RTHOOK(10);
			loc1++;
		}
	} else {
		RTHOOK(11);
		loc8 = arg1;
		loc8 = RTRV(eif_new_type(970, 0x01),loc8);
		if (EIF_TEST(loc8)) {
			RTHOOK(12);
			tr1 = *(EIF_REFERENCE *)(loc8);
			loc4 = (EIF_REFERENCE) tr1;
			RTHOOK(13);
			ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4776[Dtype(loc8)-971])(loc8));
			loc1 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(14);
			ti4_1 = *(EIF_INTEGER_32 *)(loc8 + O4778[Dtype(loc8)-970]);
			loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ti4_1);
			for (;;) {
				RTHOOK(15);
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc1 == loc2) || (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_1_) == ((EIF_INTEGER_32) 9L)))) break;
				RTHOOK(16);
				tw1 = (nstcall = 1, F763_4161(RTCW(loc4), loc1));
				loc5 = (EIF_CHARACTER_32) tw1;
				RTHOOK(17);
				tb1 = (loc5 <= 0xFF);
				if (tb1) {
					RTHOOK(18);
					tc1 = (EIF_CHARACTER_8) loc5;
					(nstcall = 0, F109_1391(Current, tc1));
				} else {
					RTHOOK(19);
					*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 9L);
				}
				RTHOOK(20);
				loc1++;
			}
		} else {
			RTHOOK(21);
			loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			RTHOOK(22);
			ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4580[Dtype(RTCW(arg1))-968])(arg1));
			loc2 = (EIF_INTEGER_32) ti4_1;
			for (;;) {
				RTHOOK(23);
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 > loc2) || (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_1_) == ((EIF_INTEGER_32) 9L)))) break;
				RTHOOK(24);
				tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4543[Dtype(RTCW(arg1))-968])(arg1, loc1));
				loc6 = (EIF_NATURAL_32) tu4_1;
				RTHOOK(25);
				tr1 = RTLNS(eif_new_type(904, 0x00).id, 904, _OBJSIZ_0_0_0_1_0_0_0_0_);
				*(EIF_NATURAL_32 *)tr1 = loc6;
				tb1 = (nstcall = 1, F903_5333(RTCW(tr1)));
				if (tb1) {
					RTHOOK(26);
					tc1 = (EIF_CHARACTER_8) loc6;
					(nstcall = 0, F109_1391(Current, tc1));
				} else {
					RTHOOK(27);
					*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 9L);
				}
				RTHOOK(28);
				loc1++;
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(29);
	RTLE;
	RTEE;
}

/* {STRING_TO_REAL_CONVERTOR}.parse_character */
void F109_1391 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("parse_character", 108, Current, 0, 1, 1420);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	switch (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_1_)) {
		case 0L:
			RTHOOK(2);
			tb1 = EIF_TEST(isdigit(arg1));
			if (tb1) {
				RTHOOK(3);
				*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
				RTHOOK(4);
				ti4_1 = (EIF_INTEGER_32) (arg1);
				tr8_1 = (EIF_REAL_64) ((EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 48L)));
				*(EIF_REAL_64 *)(Current+ _R64OFF_2_6_0_4_0_0_0_0_) = (EIF_REAL_64) tr8_1;
			} else {
				RTHOOK(5);
				if ((EIF_BOOLEAN)(arg1 == (EIF_CHARACTER_8) '+')) {
					RTHOOK(6);
					*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				} else {
					RTHOOK(7);
					if ((EIF_BOOLEAN)(arg1 == (EIF_CHARACTER_8) '-')) {
						RTHOOK(8);
						*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
						RTHOOK(9);
						*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					} else {
						RTHOOK(10);
						tb1 = '\0';
						if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_)) {
							tr1 = *(EIF_REFERENCE *)(Current);
							tb2 = (nstcall = 1, F968_6095(RTCW(tr1), arg1));
							tb1 = tb2;
						}
						if (tb1) {
						} else {
							RTHOOK(11);
							if ((EIF_BOOLEAN)(arg1 == (EIF_CHARACTER_8) '.')) {
								RTHOOK(12);
								*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
								RTHOOK(13);
								*(EIF_BOOLEAN *)(Current+ _CHROFF_2_5_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
							} else {
								RTHOOK(14);
								*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 9L);
							}
						}
					}
				}
			}
			break;
		case 1L:
			RTHOOK(15);
			tb1 = EIF_TEST(isdigit(arg1));
			if (tb1) {
				RTHOOK(16);
				*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
				RTHOOK(17);
				ti4_1 = (EIF_INTEGER_32) (arg1);
				tr8_1 = (EIF_REAL_64) ((EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 48L)));
				*(EIF_REAL_64 *)(Current+ _R64OFF_2_6_0_4_0_0_0_0_) = (EIF_REAL_64) tr8_1;
			} else {
				RTHOOK(18);
				if ((EIF_BOOLEAN)(arg1 == (EIF_CHARACTER_8) '.')) {
					RTHOOK(19);
					*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
					RTHOOK(20);
					*(EIF_BOOLEAN *)(Current+ _CHROFF_2_5_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				} else {
					RTHOOK(21);
					*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 9L);
				}
			}
			break;
		case 2L:
			RTHOOK(22);
			tb1 = EIF_TEST(isdigit(arg1));
			if (tb1) {
				RTHOOK(23);
				tr8_1 = *(EIF_REAL_64 *)(Current+ _R64OFF_2_6_0_4_0_0_0_0_);
				ti4_1 = (EIF_INTEGER_32) (arg1);
				tr8_2 = (EIF_REAL_64) (ti4_1);
				tr8_3 = (EIF_REAL_64) (((EIF_INTEGER_32) 48L));
				*(EIF_REAL_64 *)(Current+ _R64OFF_2_6_0_4_0_0_0_0_) = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) (tr8_1 * (EIF_REAL_64) 10.0) + tr8_2) - tr8_3);
			} else {
				RTHOOK(24);
				if ((EIF_BOOLEAN)(arg1 == (EIF_CHARACTER_8) '.')) {
					RTHOOK(25);
					*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
					RTHOOK(26);
					*(EIF_BOOLEAN *)(Current+ _CHROFF_2_5_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				} else {
					RTHOOK(27);
					tb1 = '\0';
					if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_)) {
						tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
						tb2 = (nstcall = 1, F968_6095(RTCW(tr1), arg1));
						tb1 = tb2;
					}
					if (tb1) {
						RTHOOK(28);
						*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
					} else {
						RTHOOK(29);
						tc1 = eif_builtin_CHARACTER_8_as_lower__c1_c1(arg1);
						if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) 'e')) {
							RTHOOK(30);
							*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5L);
						} else {
							RTHOOK(31);
							*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 9L);
						}
					}
				}
			}
			break;
		case 3L:
			RTHOOK(32);
			tb1 = EIF_TEST(isdigit(arg1));
			if (tb1) {
				RTHOOK(33);
				*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
				RTHOOK(34);
				*(EIF_BOOLEAN *)(Current+ _CHROFF_2_4_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				RTHOOK(35);
				ti4_1 = (EIF_INTEGER_32) (arg1);
				tr8_1 = (EIF_REAL_64) ((EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 48L)));
				*(EIF_REAL_64 *)(Current+ _R64OFF_2_6_0_4_0_0_0_1_) = (EIF_REAL_64) tr8_1;
				RTHOOK(36);
				*(EIF_REAL_64 *)(Current+ _R64OFF_2_6_0_4_0_0_0_2_) = (EIF_REAL_64) (EIF_REAL_64) 10.0;
				RTHOOK(37);
				*(EIF_BOOLEAN *)(Current+ _CHROFF_2_5_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			} else {
				RTHOOK(38);
				tb1 = '\0';
				tc1 = eif_builtin_CHARACTER_8_as_lower__c1_c1(arg1);
				if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) 'e')) {
					tb1 = (EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_2_5_);
				}
				if (tb1) {
					RTHOOK(39);
					*(EIF_BOOLEAN *)(Current+ _CHROFF_2_5_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					RTHOOK(40);
					*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5L);
				} else {
					RTHOOK(41);
					tb1 = '\0';
					if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_)) {
						tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
						tb2 = (nstcall = 1, F968_6095(RTCW(tr1), arg1));
						tb1 = tb2;
					}
					if (tb1) {
						RTHOOK(42);
						*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
					} else {
						RTHOOK(43);
						*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 9L);
					}
				}
			}
			break;
		case 4L:
			RTHOOK(44);
			tb1 = EIF_TEST(isdigit(arg1));
			if (tb1) {
				RTHOOK(45);
				tr8_1 = *(EIF_REAL_64 *)(Current+ _R64OFF_2_6_0_4_0_0_0_1_);
				ti4_1 = (EIF_INTEGER_32) (arg1);
				tr8_2 = (EIF_REAL_64) ((EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 48L)));
				*(EIF_REAL_64 *)(Current+ _R64OFF_2_6_0_4_0_0_0_1_) = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) (tr8_1 * (EIF_REAL_64) 10.0) + tr8_2);
				RTHOOK(46);
				(*(EIF_REAL_64 *)(Current+ _R64OFF_2_6_0_4_0_0_0_2_)) *= (EIF_REAL_64) 10.0;
			} else {
				RTHOOK(47);
				tc1 = eif_builtin_CHARACTER_8_as_lower__c1_c1(arg1);
				if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) 'e')) {
					RTHOOK(48);
					*(EIF_BOOLEAN *)(Current+ _CHROFF_2_5_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					RTHOOK(49);
					*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5L);
				} else {
					RTHOOK(50);
					tb1 = '\0';
					if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_)) {
						tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
						tb2 = (nstcall = 1, F968_6095(RTCW(tr1), arg1));
						tb1 = tb2;
					}
					if (tb1) {
						RTHOOK(51);
						*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
					} else {
						RTHOOK(52);
						*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 9L);
					}
				}
			}
			break;
		case 5L:
			RTHOOK(53);
			if ((EIF_BOOLEAN)(arg1 == (EIF_CHARACTER_8) '-')) {
				RTHOOK(54);
				*(EIF_BOOLEAN *)(Current+ _CHROFF_2_3_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				RTHOOK(55);
				*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 6L);
			} else {
				RTHOOK(56);
				if ((EIF_BOOLEAN)(arg1 == (EIF_CHARACTER_8) '+')) {
					RTHOOK(57);
					*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 6L);
				} else {
					RTHOOK(58);
					tb1 = EIF_TEST(isdigit(arg1));
					if (tb1) {
						RTHOOK(59);
						*(EIF_BOOLEAN *)(Current+ _CHROFF_2_5_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
						RTHOOK(60);
						*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 7L);
						RTHOOK(61);
						ti4_1 = (EIF_INTEGER_32) (arg1);
						*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_3_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 48L));
					} else {
						RTHOOK(62);
						*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 9L);
					}
				}
			}
			break;
		case 6L:
			RTHOOK(63);
			tb1 = EIF_TEST(isdigit(arg1));
			if (tb1) {
				RTHOOK(64);
				*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 7L);
				RTHOOK(65);
				ti4_1 = (EIF_INTEGER_32) (arg1);
				*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_3_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 48L));
				RTHOOK(66);
				*(EIF_BOOLEAN *)(Current+ _CHROFF_2_5_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			} else {
				RTHOOK(67);
				*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 9L);
			}
			break;
		case 7L:
			RTHOOK(68);
			tb1 = EIF_TEST(isdigit(arg1));
			if (tb1) {
				RTHOOK(69);
				ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_3_);
				ti4_2 = (EIF_INTEGER_32) (arg1);
				*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_3_) = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 * ((EIF_INTEGER_32) 10L)) + ti4_2) - ((EIF_INTEGER_32) 48L));
			} else {
				RTHOOK(70);
				tb1 = '\0';
				if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_)) {
					tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
					tb2 = (nstcall = 1, F968_6095(RTCW(tr1), arg1));
					tb1 = tb2;
				}
				if (tb1) {
					RTHOOK(71);
					*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
				} else {
					RTHOOK(72);
					*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 9L);
				}
			}
			break;
		case 8L:
			RTHOOK(73);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			tb1 = (nstcall = 1, F968_6095(RTCW(tr1), arg1));
			if ((EIF_BOOLEAN) !tb1) {
				RTHOOK(74);
				*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 9L);
			}
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(75);
	RTLE;
	RTEE;
}

/* {STRING_TO_REAL_CONVERTOR}.natural_part */
EIF_REAL_64 F109_1392 (EIF_REFERENCE Current)
{
	return *(EIF_REAL_64 *)(Current+ _R64OFF_2_6_0_4_0_0_0_0_);
}


/* {STRING_TO_REAL_CONVERTOR}.fractional_part */
EIF_REAL_64 F109_1393 (EIF_REFERENCE Current)
{
	return *(EIF_REAL_64 *)(Current+ _R64OFF_2_6_0_4_0_0_0_1_);
}


/* {STRING_TO_REAL_CONVERTOR}.fractional_divider */
EIF_REAL_64 F109_1394 (EIF_REFERENCE Current)
{
	return *(EIF_REAL_64 *)(Current+ _R64OFF_2_6_0_4_0_0_0_2_);
}


/* {STRING_TO_REAL_CONVERTOR}.exponent */
EIF_INTEGER_32 F109_1395 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_6_0_3_);
}


/* {STRING_TO_REAL_CONVERTOR}.is_negative */
EIF_BOOLEAN F109_1396 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_);
}


/* {STRING_TO_REAL_CONVERTOR}.has_negative_exponent */
EIF_BOOLEAN F109_1397 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_2_3_);
}


/* {STRING_TO_REAL_CONVERTOR}.has_fractional_part */
EIF_BOOLEAN F109_1398 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_2_4_);
}


/* {STRING_TO_REAL_CONVERTOR}.needs_digit */
EIF_BOOLEAN F109_1399 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_2_5_);
}


void EIF_Minit88 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
