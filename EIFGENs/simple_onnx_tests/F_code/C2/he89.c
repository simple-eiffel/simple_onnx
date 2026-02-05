/*
 * Code for class HEXADECIMAL_STRING_TO_INTEGER_CONVERTER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "he89.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {HEXADECIMAL_STRING_TO_INTEGER_CONVERTER}.make */
void F110_1400 (EIF_REFERENCE Current)
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
	
	RTEAA("make", 109, Current, 0, 0, 1430);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	(nstcall = 0, F110_1405(Current, ((EIF_INTEGER_32) 0L)));
	RTHOOK(2);
	tr1 = RTLNSMART(eif_new_type(969, 1).id);
	tr2 = RTMS_EX_H(" ",1,32);
	(nstcall = -1, F968_6062(RTCW(tr1), tr2));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	tr1 = RTLNSMART(eif_new_type(969, 1).id);
	tr2 = RTMS_EX_H(" ",1,32);
	(nstcall = -1, F968_6062(RTCW(tr1), tr2));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("leading_separators_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = RTMS_EX_H(" ",1,32);
		if (RTEQ(tr1, tr2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("trailing_separators_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tr2 = RTMS_EX_H(" ",1,32);
		if (RTEQ(tr1, tr2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("leading_separators_not_acceptable", EX_POST);
		if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("trailing_separatorsnot_acceptable", EX_POST);
		if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_)) {
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

/* {HEXADECIMAL_STRING_TO_INTEGER_CONVERTER}.separators_valid */
EIF_BOOLEAN F110_1401 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_CHARACTER_8 loc1 = (EIF_CHARACTER_8) 0;
	EIF_BOOLEAN loc2 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
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
	
	RTEAA("separators_valid", 109, Current, 4, 1, 1431);
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
	loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
	loc4 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(5);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	for (;;) {
		RTHOOK(6);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc3 > loc4) || loc2)) break;
		RTHOOK(7);
		tc1 = (nstcall = 1, F970_6139(RTCW(arg1), loc3));
		loc1 = (EIF_CHARACTER_8) tc1;
		RTHOOK(8);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 >= (EIF_CHARACTER_8) '0') && (EIF_BOOLEAN) (loc1 <= (EIF_CHARACTER_8) '9')) || (EIF_BOOLEAN)(loc1 == (EIF_CHARACTER_8) '+')) || (EIF_BOOLEAN)(loc1 == (EIF_CHARACTER_8) '-')) || (EIF_BOOLEAN)(loc1 == (EIF_CHARACTER_8) 'X')) || (EIF_BOOLEAN)(loc1 == (EIF_CHARACTER_8) '&')) || (EIF_BOOLEAN)(loc1 == (EIF_CHARACTER_8) '#'))) {
			RTHOOK(9);
			loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			RTHOOK(10);
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		}
		RTHOOK(11);
		loc3++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTLE;
	RTEE;
	return Result;
}

/* {HEXADECIMAL_STRING_TO_INTEGER_CONVERTER}.overflowed */
EIF_BOOLEAN F110_1402 (EIF_REFERENCE Current)
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
	
	RTEAA("overflowed", 109, Current, 0, 0, 1432);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_BOOLEAN *)(Current+ _CHROFF_2_3_);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_2_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (Result && (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {HEXADECIMAL_STRING_TO_INTEGER_CONVERTER}.underflowed */
EIF_BOOLEAN F110_1403 (EIF_REFERENCE Current)
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
	
	RTEAA("underflowed", 109, Current, 0, 0, 1433);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_BOOLEAN *)(Current+ _CHROFF_2_3_);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_2_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (Result && (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {HEXADECIMAL_STRING_TO_INTEGER_CONVERTER}.parse_successful */
EIF_BOOLEAN F110_1404 (EIF_REFERENCE Current)
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
	
	RTEAA("parse_successful", 109, Current, 0, 0, 1434);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_);
	ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 5L)) && (EIF_BOOLEAN)(ti4_2 != ((EIF_INTEGER_32) 6L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {HEXADECIMAL_STRING_TO_INTEGER_CONVERTER}.reset */
void F110_1405 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("reset", 109, Current, 0, 1, 1435);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("type_valid", EX_PRE);
		RTTE((nstcall = 0, F110_1408(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(3);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(4);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_0_) = (EIF_INTEGER_32) arg1;
	RTHOOK(5);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_3_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("last_state_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_) == ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("sign_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_2_) == ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("conversion_type_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_0_) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("not_overflowed", EX_POST);
		if ((EIF_BOOLEAN) !(nstcall = 0, F110_1402(Current))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("not_underflowed", EX_POST);
		if ((EIF_BOOLEAN) !(nstcall = 0, F110_1403(Current))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("parse_successful", EX_POST);
		if ((nstcall = 0, F110_1404(Current))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTLE;
	RTEE;
}

/* {HEXADECIMAL_STRING_TO_INTEGER_CONVERTER}.parse_string_with_type */
void F110_1406 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc5 = (EIF_NATURAL_32) 0;
	EIF_CHARACTER_32 loc6 = (EIF_CHARACTER_32) 0;
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
	RTLR(3,loc2);
	RTLR(4,tr1);
	RTLR(5,loc8);
	RTLR(6,loc3);
	RTLIU(7);
	
	RTEAA("parse_string_with_type", 109, Current, 8, 2, 1436);
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
		RTTE((nstcall = 0, F110_1408(Current, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	(nstcall = 0, F110_1405(Current, arg2));
	RTHOOK(4);
	loc7 = arg1;
	loc7 = RTRV(eif_new_type(967, 0x01),loc7);
	if (EIF_TEST(loc7)) {
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(loc7);
		loc2 = (EIF_REFERENCE) tr1;
		RTHOOK(6);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4701[Dtype(loc7)-968])(loc7));
		loc1 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(7);
		ti4_1 = *(EIF_INTEGER_32 *)(loc7 + O4703[Dtype(loc7)-967]);
		loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ti4_1);
		for (;;) {
			RTHOOK(8);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc1 == loc4) || (EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_) >= ((EIF_INTEGER_32) 4L)))) break;
			RTHOOK(9);
			if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)) < loc4)) {
				RTHOOK(10);
				tc1 = (nstcall = 1, F764_4161(RTCW(loc2), (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L))));
				*(EIF_CHARACTER_8 *)(Current+ _CHROFF_2_0_) = (EIF_CHARACTER_8) tc1;
			} else {
				RTHOOK(11);
				*(EIF_CHARACTER_8 *)(Current+ _CHROFF_2_0_) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) ' ';
			}
			RTHOOK(12);
			tc1 = (nstcall = 1, F764_4161(RTCW(loc2), loc1));
			(nstcall = 0, F110_1407(Current, tc1));
			RTHOOK(13);
			loc1++;
		}
	} else {
		RTHOOK(14);
		loc8 = arg1;
		loc8 = RTRV(eif_new_type(970, 0x01),loc8);
		if (EIF_TEST(loc8)) {
			RTHOOK(15);
			tr1 = *(EIF_REFERENCE *)(loc8);
			loc3 = (EIF_REFERENCE) tr1;
			RTHOOK(16);
			ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4776[Dtype(loc8)-971])(loc8));
			loc1 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(17);
			ti4_1 = *(EIF_INTEGER_32 *)(loc8 + O4778[Dtype(loc8)-970]);
			loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ti4_1);
			for (;;) {
				RTHOOK(18);
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc1 == loc4) || (EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_) >= ((EIF_INTEGER_32) 4L)))) break;
				RTHOOK(19);
				if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)) < loc4)) {
					RTHOOK(20);
					tw1 = (nstcall = 1, F763_4161(RTCW(loc3), (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L))));
					tc1 = (EIF_CHARACTER_8) tw1;
					*(EIF_CHARACTER_8 *)(Current+ _CHROFF_2_0_) = (EIF_CHARACTER_8) tc1;
				} else {
					RTHOOK(21);
					*(EIF_CHARACTER_8 *)(Current+ _CHROFF_2_0_) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) ' ';
				}
				RTHOOK(22);
				tw1 = (nstcall = 1, F763_4161(RTCW(loc3), loc1));
				loc6 = (EIF_CHARACTER_32) tw1;
				RTHOOK(23);
				tb1 = (loc6 <= 0xFF);
				if (tb1) {
					RTHOOK(24);
					tc1 = (EIF_CHARACTER_8) loc6;
					(nstcall = 0, F110_1407(Current, tc1));
				} else {
					RTHOOK(25);
					*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
				}
				RTHOOK(26);
				loc1++;
			}
		} else {
			RTHOOK(27);
			loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			RTHOOK(28);
			ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4580[Dtype(RTCW(arg1))-968])(arg1));
			loc4 = (EIF_INTEGER_32) ti4_1;
			for (;;) {
				RTHOOK(29);
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 > loc4) || (EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_) >= ((EIF_INTEGER_32) 4L)))) break;
				RTHOOK(30);
				if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)) < loc4)) {
					RTHOOK(31);
					tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4543[Dtype(RTCW(arg1))-968])(arg1, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L))));
					tc1 = (EIF_CHARACTER_8) tu4_1;
					*(EIF_CHARACTER_8 *)(Current+ _CHROFF_2_0_) = (EIF_CHARACTER_8) tc1;
				} else {
					RTHOOK(32);
					*(EIF_CHARACTER_8 *)(Current+ _CHROFF_2_0_) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) ' ';
				}
				RTHOOK(33);
				tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4543[Dtype(RTCW(arg1))-968])(arg1, loc1));
				loc5 = (EIF_NATURAL_32) tu4_1;
				RTHOOK(34);
				tr1 = RTLNS(eif_new_type(904, 0x00).id, 904, _OBJSIZ_0_0_0_1_0_0_0_0_);
				*(EIF_NATURAL_32 *)tr1 = loc5;
				tb1 = (nstcall = 1, F903_5333(RTCW(tr1)));
				if (tb1) {
					RTHOOK(35);
					tc1 = (EIF_CHARACTER_8) loc5;
					(nstcall = 0, F110_1407(Current, tc1));
				} else {
					RTHOOK(36);
					*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
				}
				RTHOOK(37);
				loc1++;
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(38);
	RTLE;
	RTEE;
}

/* {HEXADECIMAL_STRING_TO_INTEGER_CONVERTER}.parse_character */
void F110_1407 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_64 loc1 = (EIF_NATURAL_64) 0;
	EIF_NATURAL_64 loc2 = (EIF_NATURAL_64) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("parse_character", 109, Current, 3, 1, 1437);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_);
	RTHOOK(2);
	if ((EIF_BOOLEAN) (loc3 <= ((EIF_INTEGER_32) 5L))) {
		RTHOOK(3);
		switch (loc3) {
			case 0L:
				RTHOOK(4);
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg1 == (EIF_CHARACTER_8) '0') && (EIF_BOOLEAN) ((EIF_BOOLEAN)(*(EIF_CHARACTER_8 *)(Current+ _CHROFF_2_0_) == (EIF_CHARACTER_8) 'x') || (EIF_BOOLEAN)(*(EIF_CHARACTER_8 *)(Current+ _CHROFF_2_0_) == (EIF_CHARACTER_8) 'X'))) || (EIF_BOOLEAN)(arg1 == (EIF_CHARACTER_8) '&'))) {
					RTHOOK(5);
					loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				} else {
					RTHOOK(6);
					if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg1 == (EIF_CHARACTER_8) '-') || (EIF_BOOLEAN)(arg1 == (EIF_CHARACTER_8) '+'))) {
						RTHOOK(7);
						loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
						RTHOOK(8);
						if ((EIF_BOOLEAN)(arg1 == (EIF_CHARACTER_8) '-')) {
							RTHOOK(9);
							*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
						} else {
							RTHOOK(10);
							*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
						}
					} else {
						RTHOOK(11);
						tr1 = RTLNS(eif_new_type(919, 0x00).id, 919, _OBJSIZ_0_1_0_0_0_0_0_0_);
						*(EIF_CHARACTER_8 *)tr1 = arg1;
						tb1 = (nstcall = 1, F918_5708(RTCW(tr1)));
						if (tb1) {
							RTHOOK(12);
							loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
							RTHOOK(13);
							*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_4_0_3_0_0_0_) = (EIF_NATURAL_64) (EIF_NATURAL_64) ((EIF_INTEGER_32) 0L);
							RTHOOK(14);
							tr1 = RTLNS(eif_new_type(919, 0x00).id, 919, _OBJSIZ_0_1_0_0_0_0_0_0_);
							*(EIF_CHARACTER_8 *)tr1 = arg1;
							tu1_1 = (nstcall = 1, F918_5703(RTCW(tr1)));
							tu8_1 = (EIF_NATURAL_64) tu1_1;
							*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_4_0_3_0_0_1_) = (EIF_NATURAL_64) tu8_1;
						} else {
							RTHOOK(15);
							tb1 = '\0';
							if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_)) {
								tr1 = *(EIF_REFERENCE *)(Current);
								tb2 = (nstcall = 1, F968_6095(RTCW(tr1), arg1));
								tb1 = tb2;
							}
							if (tb1) {
							} else {
								RTHOOK(16);
								loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
							}
						}
					}
				}
				break;
			case 1L:
				RTHOOK(17);
				tr1 = RTLNS(eif_new_type(919, 0x00).id, 919, _OBJSIZ_0_1_0_0_0_0_0_0_);
				*(EIF_CHARACTER_8 *)tr1 = arg1;
				tb1 = (nstcall = 1, F918_5708(RTCW(tr1)));
				if (tb1) {
					RTHOOK(18);
					*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_4_0_3_0_0_0_) = (EIF_NATURAL_64) (EIF_NATURAL_64) ((EIF_INTEGER_32) 0L);
					RTHOOK(19);
					tr1 = RTLNS(eif_new_type(919, 0x00).id, 919, _OBJSIZ_0_1_0_0_0_0_0_0_);
					*(EIF_CHARACTER_8 *)tr1 = arg1;
					tu1_1 = (nstcall = 1, F918_5703(RTCW(tr1)));
					tu8_1 = (EIF_NATURAL_64) tu1_1;
					*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_4_0_3_0_0_1_) = (EIF_NATURAL_64) tu8_1;
					RTHOOK(20);
					loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
					RTHOOK(21);
					tb1 = '\0';
					if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_0_) != ((EIF_INTEGER_32) 0L))) {
						tr1 = RTOUCR(175,(nstcall = 0, F110_1423), (Current));
						tb2 = (nstcall = 1, F107_1353(RTCW(tr1), *(EIF_NATURAL_64 *)(Current+ _I64OFF_2_4_0_3_0_0_0_), *(EIF_NATURAL_64 *)(Current+ _I64OFF_2_4_0_3_0_0_1_), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_0_), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_2_)));
						tb1 = tb2;
					}
					if (tb1) {
						RTHOOK(22);
						*(EIF_BOOLEAN *)(Current+ _CHROFF_2_3_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
						RTHOOK(23);
						*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_4_0_3_0_0_1_) = (EIF_NATURAL_64) (EIF_NATURAL_64) ((EIF_INTEGER_32) 0L);
						RTHOOK(24);
						loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 6L);
					}
				} else {
					RTHOOK(25);
					if ((EIF_BOOLEAN)(arg1 == (EIF_CHARACTER_8) '#')) {
						RTHOOK(26);
						loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
					} else {
						RTHOOK(27);
						if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg1 == (EIF_CHARACTER_8) 'x') || (EIF_BOOLEAN)(arg1 == (EIF_CHARACTER_8) 'X'))) {
							RTHOOK(28);
							loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
						}
					}
				}
				break;
			case 2L:
				RTHOOK(29);
				tr1 = RTLNS(eif_new_type(919, 0x00).id, 919, _OBJSIZ_0_1_0_0_0_0_0_0_);
				*(EIF_CHARACTER_8 *)tr1 = arg1;
				tb1 = (nstcall = 1, F918_5708(RTCW(tr1)));
				if (tb1) {
					RTHOOK(30);
					*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_4_0_3_0_0_0_) = (EIF_NATURAL_64) (EIF_NATURAL_64) ((EIF_INTEGER_32) 0L);
					RTHOOK(31);
					tr1 = RTLNS(eif_new_type(919, 0x00).id, 919, _OBJSIZ_0_1_0_0_0_0_0_0_);
					*(EIF_CHARACTER_8 *)tr1 = arg1;
					tu1_1 = (nstcall = 1, F918_5703(RTCW(tr1)));
					tu8_1 = (EIF_NATURAL_64) tu1_1;
					*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_4_0_3_0_0_1_) = (EIF_NATURAL_64) tu8_1;
					RTHOOK(32);
					loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
					RTHOOK(33);
					tb1 = '\0';
					if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_0_) != ((EIF_INTEGER_32) 0L))) {
						tr1 = RTOUCR(175,(nstcall = 0, F110_1423), (Current));
						tb2 = (nstcall = 1, F107_1353(RTCW(tr1), *(EIF_NATURAL_64 *)(Current+ _I64OFF_2_4_0_3_0_0_0_), *(EIF_NATURAL_64 *)(Current+ _I64OFF_2_4_0_3_0_0_1_), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_0_), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_2_)));
						tb1 = tb2;
					}
					if (tb1) {
						RTHOOK(34);
						*(EIF_BOOLEAN *)(Current+ _CHROFF_2_3_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
						RTHOOK(35);
						*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_4_0_3_0_0_1_) = (EIF_NATURAL_64) (EIF_NATURAL_64) ((EIF_INTEGER_32) 0L);
						RTHOOK(36);
						loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 6L);
					}
				}
				break;
			case 3L:
				RTHOOK(37);
				tr1 = RTLNS(eif_new_type(919, 0x00).id, 919, _OBJSIZ_0_1_0_0_0_0_0_0_);
				*(EIF_CHARACTER_8 *)tr1 = arg1;
				tb1 = (nstcall = 1, F918_5708(RTCW(tr1)));
				if (tb1) {
					RTHOOK(38);
					loc1 = *(EIF_NATURAL_64 *)(Current+ _I64OFF_2_4_0_3_0_0_0_);
					RTHOOK(39);
					loc2 = *(EIF_NATURAL_64 *)(Current+ _I64OFF_2_4_0_3_0_0_1_);
					RTHOOK(40);
					*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_4_0_3_0_0_0_) = (EIF_NATURAL_64) (EIF_NATURAL_64) ((EIF_NATURAL_64) (*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_4_0_3_0_0_0_) * (EIF_NATURAL_64) ((EIF_INTEGER_32) 16L)) + *(EIF_NATURAL_64 *)(Current+ _I64OFF_2_4_0_3_0_0_1_));
					RTHOOK(41);
					tr1 = RTLNS(eif_new_type(919, 0x00).id, 919, _OBJSIZ_0_1_0_0_0_0_0_0_);
					*(EIF_CHARACTER_8 *)tr1 = arg1;
					tu1_1 = (nstcall = 1, F918_5703(RTCW(tr1)));
					tu8_1 = (EIF_NATURAL_64) tu1_1;
					*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_4_0_3_0_0_1_) = (EIF_NATURAL_64) tu8_1;
					RTHOOK(42);
					if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_0_) != ((EIF_INTEGER_32) 0L))) {
						RTHOOK(43);
						tr1 = RTOUCR(175,(nstcall = 0, F110_1423), (Current));
						tb1 = (nstcall = 1, F107_1353(RTCW(tr1), *(EIF_NATURAL_64 *)(Current+ _I64OFF_2_4_0_3_0_0_0_), *(EIF_NATURAL_64 *)(Current+ _I64OFF_2_4_0_3_0_0_1_), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_0_), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_2_)));
						*(EIF_BOOLEAN *)(Current+ _CHROFF_2_3_) = (EIF_BOOLEAN) tb1;
						RTHOOK(44);
						if ((nstcall = 0, F110_1402(Current))) {
							RTHOOK(45);
							*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_4_0_3_0_0_0_) = (EIF_NATURAL_64) loc1;
							RTHOOK(46);
							*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_4_0_3_0_0_1_) = (EIF_NATURAL_64) loc2;
							RTHOOK(47);
							loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 6L);
						}
					}
				} else {
					RTHOOK(48);
					tb1 = '\0';
					if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_)) {
						tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
						tb2 = (nstcall = 1, F968_6095(RTCW(tr1), arg1));
						tb1 = tb2;
					}
					if (tb1) {
						RTHOOK(49);
						loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
					} else {
						RTHOOK(50);
						loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5L);
					}
				}
				break;
			case 4L:
				RTHOOK(51);
				tb1 = '\01';
				if (!(EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_)) {
					tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
					tb2 = (nstcall = 1, F968_6095(RTCW(tr1), arg1));
					tb1 = (EIF_BOOLEAN) !tb2;
				}
				if (tb1) {
					RTHOOK(52);
					loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5L);
				}
				break;
			default:
				RTEC(EN_WHEN);
		}
	}
	RTHOOK(53);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_) = (EIF_INTEGER_32) loc3;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(54);
	RTLE;
	RTEE;
}

/* {HEXADECIMAL_STRING_TO_INTEGER_CONVERTER}.conversion_type_valid */
EIF_BOOLEAN F110_1408 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("conversion_type_valid", 109, Current, 0, 1, 1438);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F106_1348(Current, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {HEXADECIMAL_STRING_TO_INTEGER_CONVERTER}.is_part_of_integer */
EIF_BOOLEAN F110_1409 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_part_of_integer", 109, Current, 0, 0, 1439);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_);
	ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_);
	ti4_3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_);
	ti4_4 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_);
	Result = *(EIF_BOOLEAN *)(Current+ _CHROFF_2_3_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN)(ti4_2 == ((EIF_INTEGER_32) 1L))) || (EIF_BOOLEAN)(ti4_3 == ((EIF_INTEGER_32) 2L))) || (EIF_BOOLEAN)(ti4_4 == ((EIF_INTEGER_32) 3L))) && (EIF_BOOLEAN) !Result);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {HEXADECIMAL_STRING_TO_INTEGER_CONVERTER}.is_integral_integer */
EIF_BOOLEAN F110_1410 (EIF_REFERENCE Current)
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
	
	RTEAA("is_integral_integer", 109, Current, 0, 0, 1440);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_);
	ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_);
	Result = *(EIF_BOOLEAN *)(Current+ _CHROFF_2_3_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 2L)) || (EIF_BOOLEAN)(ti4_2 == ((EIF_INTEGER_32) 3L))) && (EIF_BOOLEAN) !Result);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {HEXADECIMAL_STRING_TO_INTEGER_CONVERTER}.parsed_integer_8 */
EIF_INTEGER_8 F110_1411 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_8 ti1_1;
	EIF_INTEGER_8 Result = ((EIF_INTEGER_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("parsed_integer_8", 109, Current, 0, 0, 1441);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_2_) == ((EIF_INTEGER_32) 1L))) {
		RTHOOK(2);
		ti1_1 = (EIF_INTEGER_8) ((EIF_NATURAL_64) ((EIF_NATURAL_64) (*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_4_0_3_0_0_0_) * (EIF_NATURAL_64) ((EIF_INTEGER_32) 16L)) + *(EIF_NATURAL_64 *)(Current+ _I64OFF_2_4_0_3_0_0_1_)));
		Result = (EIF_INTEGER_8) (EIF_INTEGER_8) -ti1_1;
	} else {
		RTHOOK(3);
		ti1_1 = (EIF_INTEGER_8) ((EIF_NATURAL_64) ((EIF_NATURAL_64) (*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_4_0_3_0_0_0_) * (EIF_NATURAL_64) ((EIF_INTEGER_32) 16L)) + *(EIF_NATURAL_64 *)(Current+ _I64OFF_2_4_0_3_0_0_1_)));
		Result = (EIF_INTEGER_8) ti1_1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {HEXADECIMAL_STRING_TO_INTEGER_CONVERTER}.parsed_integer_16 */
EIF_INTEGER_16 F110_1412 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_16 ti2_1;
	EIF_INTEGER_16 Result = ((EIF_INTEGER_16) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("parsed_integer_16", 109, Current, 0, 0, 1442);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_2_) == ((EIF_INTEGER_32) 1L))) {
		RTHOOK(2);
		ti2_1 = (EIF_INTEGER_16) ((EIF_NATURAL_64) ((EIF_NATURAL_64) (*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_4_0_3_0_0_0_) * (EIF_NATURAL_64) ((EIF_INTEGER_32) 16L)) + *(EIF_NATURAL_64 *)(Current+ _I64OFF_2_4_0_3_0_0_1_)));
		Result = (EIF_INTEGER_16) (EIF_INTEGER_16) -ti2_1;
	} else {
		RTHOOK(3);
		ti2_1 = (EIF_INTEGER_16) ((EIF_NATURAL_64) ((EIF_NATURAL_64) (*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_4_0_3_0_0_0_) * (EIF_NATURAL_64) ((EIF_INTEGER_32) 16L)) + *(EIF_NATURAL_64 *)(Current+ _I64OFF_2_4_0_3_0_0_1_)));
		Result = (EIF_INTEGER_16) ti2_1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {HEXADECIMAL_STRING_TO_INTEGER_CONVERTER}.parsed_integer_32 */
EIF_INTEGER_32 F110_1413 (EIF_REFERENCE Current)
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
	
	RTEAA("parsed_integer_32", 109, Current, 0, 0, 1443);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_2_) == ((EIF_INTEGER_32) 1L))) {
		RTHOOK(2);
		ti4_1 = (EIF_INTEGER_32) ((EIF_NATURAL_64) ((EIF_NATURAL_64) (*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_4_0_3_0_0_0_) * (EIF_NATURAL_64) ((EIF_INTEGER_32) 16L)) + *(EIF_NATURAL_64 *)(Current+ _I64OFF_2_4_0_3_0_0_1_)));
		Result = (EIF_INTEGER_32) (EIF_INTEGER_32) -ti4_1;
	} else {
		RTHOOK(3);
		ti4_1 = (EIF_INTEGER_32) ((EIF_NATURAL_64) ((EIF_NATURAL_64) (*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_4_0_3_0_0_0_) * (EIF_NATURAL_64) ((EIF_INTEGER_32) 16L)) + *(EIF_NATURAL_64 *)(Current+ _I64OFF_2_4_0_3_0_0_1_)));
		Result = (EIF_INTEGER_32) ti4_1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {HEXADECIMAL_STRING_TO_INTEGER_CONVERTER}.parsed_integer */
EIF_INTEGER_32 F110_1414 (EIF_REFERENCE Current)
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
	
	RTEAA("parsed_integer", 109, Current, 0, 0, 1444);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_2_) == ((EIF_INTEGER_32) 1L))) {
		RTHOOK(2);
		ti4_1 = (EIF_INTEGER_32) ((EIF_NATURAL_64) ((EIF_NATURAL_64) (*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_4_0_3_0_0_0_) * (EIF_NATURAL_64) ((EIF_INTEGER_32) 16L)) + *(EIF_NATURAL_64 *)(Current+ _I64OFF_2_4_0_3_0_0_1_)));
		Result = (EIF_INTEGER_32) (EIF_INTEGER_32) -ti4_1;
	} else {
		RTHOOK(3);
		ti4_1 = (EIF_INTEGER_32) ((EIF_NATURAL_64) ((EIF_NATURAL_64) (*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_4_0_3_0_0_0_) * (EIF_NATURAL_64) ((EIF_INTEGER_32) 16L)) + *(EIF_NATURAL_64 *)(Current+ _I64OFF_2_4_0_3_0_0_1_)));
		Result = (EIF_INTEGER_32) ti4_1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {HEXADECIMAL_STRING_TO_INTEGER_CONVERTER}.parsed_integer_64 */
EIF_INTEGER_64 F110_1415 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_64 Result = ((EIF_INTEGER_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("parsed_integer_64", 109, Current, 0, 0, 1445);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_2_) == ((EIF_INTEGER_32) 1L))) {
		RTHOOK(2);
		ti8_1 = (EIF_INTEGER_64) ((EIF_NATURAL_64) ((EIF_NATURAL_64) (*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_4_0_3_0_0_0_) * (EIF_NATURAL_64) ((EIF_INTEGER_32) 16L)) + *(EIF_NATURAL_64 *)(Current+ _I64OFF_2_4_0_3_0_0_1_)));
		Result = (EIF_INTEGER_64) (EIF_INTEGER_64) -ti8_1;
	} else {
		RTHOOK(3);
		ti8_1 = (EIF_INTEGER_64) ((EIF_NATURAL_64) ((EIF_NATURAL_64) (*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_4_0_3_0_0_0_) * (EIF_NATURAL_64) ((EIF_INTEGER_32) 16L)) + *(EIF_NATURAL_64 *)(Current+ _I64OFF_2_4_0_3_0_0_1_)));
		Result = (EIF_INTEGER_64) ti8_1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {HEXADECIMAL_STRING_TO_INTEGER_CONVERTER}.parsed_natural_8 */
EIF_NATURAL_8 F110_1416 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("parsed_natural_8", 109, Current, 0, 0, 1446);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tu1_1 = (EIF_NATURAL_8) ((EIF_NATURAL_64) ((EIF_NATURAL_64) (*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_4_0_3_0_0_0_) * (EIF_NATURAL_64) ((EIF_INTEGER_32) 16L)) + *(EIF_NATURAL_64 *)(Current+ _I64OFF_2_4_0_3_0_0_1_)));
	Result = (EIF_NATURAL_8) tu1_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {HEXADECIMAL_STRING_TO_INTEGER_CONVERTER}.parsed_natural_16 */
EIF_NATURAL_16 F110_1417 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 Result = ((EIF_NATURAL_16) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("parsed_natural_16", 109, Current, 0, 0, 1447);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tu2_1 = (EIF_NATURAL_16) ((EIF_NATURAL_64) ((EIF_NATURAL_64) (*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_4_0_3_0_0_0_) * (EIF_NATURAL_64) ((EIF_INTEGER_32) 16L)) + *(EIF_NATURAL_64 *)(Current+ _I64OFF_2_4_0_3_0_0_1_)));
	Result = (EIF_NATURAL_16) tu2_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {HEXADECIMAL_STRING_TO_INTEGER_CONVERTER}.parsed_natural_32 */
EIF_NATURAL_32 F110_1418 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("parsed_natural_32", 109, Current, 0, 0, 1448);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tu4_1 = (EIF_NATURAL_32) ((EIF_NATURAL_64) ((EIF_NATURAL_64) (*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_4_0_3_0_0_0_) * (EIF_NATURAL_64) ((EIF_INTEGER_32) 16L)) + *(EIF_NATURAL_64 *)(Current+ _I64OFF_2_4_0_3_0_0_1_)));
	Result = (EIF_NATURAL_32) tu4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {HEXADECIMAL_STRING_TO_INTEGER_CONVERTER}.parsed_natural */
EIF_NATURAL_32 F110_1419 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("parsed_natural", 109, Current, 0, 0, 1449);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tu4_1 = (EIF_NATURAL_32) ((EIF_NATURAL_64) ((EIF_NATURAL_64) (*(EIF_NATURAL_64 *)(Current+ _I64OFF_2_4_0_3_0_0_0_) * (EIF_NATURAL_64) ((EIF_INTEGER_32) 16L)) + *(EIF_NATURAL_64 *)(Current+ _I64OFF_2_4_0_3_0_0_1_)));
	Result = (EIF_NATURAL_32) tu4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {HEXADECIMAL_STRING_TO_INTEGER_CONVERTER}.parsed_natural_64 */
EIF_NATURAL_64 F110_1420 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_64 Result = ((EIF_NATURAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("parsed_natural_64", 109, Current, 0, 0, 1424);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_NATURAL_64 *)(Current+ _I64OFF_2_4_0_3_0_0_0_);
	tu8_1 = *(EIF_NATURAL_64 *)(Current+ _I64OFF_2_4_0_3_0_0_1_);
	Result = (EIF_NATURAL_64) (EIF_NATURAL_64) ((EIF_NATURAL_64) (Result * (EIF_NATURAL_64) ((EIF_INTEGER_32) 16L)) + tu8_1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {HEXADECIMAL_STRING_TO_INTEGER_CONVERTER}.internal_lookahead */
EIF_CHARACTER_8 F110_1421 (EIF_REFERENCE Current)
{
	return *(EIF_CHARACTER_8 *)(Current+ _CHROFF_2_0_);
}


/* {HEXADECIMAL_STRING_TO_INTEGER_CONVERTER}.internal_overflowed */
EIF_BOOLEAN F110_1422 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_2_3_);
}


/* {HEXADECIMAL_STRING_TO_INTEGER_CONVERTER}.overflow_checker */
static EIF_REFERENCE F110_1423_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(175)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("overflow_checker", 109, Current, 0, 0, 1427);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(106, 0x01).id, 106, _OBJSIZ_4_0_0_0_0_0_0_0_);
	(nstcall = -1, F107_1352(RTCW(tr1)));
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("overflow_checker_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F110_1423 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(175,F110_1423_body,(Current));
}

/* {HEXADECIMAL_STRING_TO_INTEGER_CONVERTER}.part1 */
EIF_NATURAL_64 F110_1424 (EIF_REFERENCE Current)
{
	return *(EIF_NATURAL_64 *)(Current+ _I64OFF_2_4_0_3_0_0_0_);
}


/* {HEXADECIMAL_STRING_TO_INTEGER_CONVERTER}.part2 */
EIF_NATURAL_64 F110_1425 (EIF_REFERENCE Current)
{
	return *(EIF_NATURAL_64 *)(Current+ _I64OFF_2_4_0_3_0_0_1_);
}


void EIF_Minit89 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
