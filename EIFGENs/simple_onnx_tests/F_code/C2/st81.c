/*
 * Code for class STRING_32_SEARCHER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "st81.h"
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

/* {STRING_32_SEARCHER}.string_type */
EIF_REFERENCE F102_1310 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Result);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("string_type", 101, Current, 0, 0, 1341);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTMS32_EX_H("",0,0);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("for_typing_only", EX_POST);
			RTCF;
	}
	RTEC (EN_POST);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {STRING_32_SEARCHER}.max_code_point_value */
EIF_INTEGER_32 F102_1311 (EIF_REFERENCE Current)
{
	return (EIF_INTEGER_32) ((EIF_INTEGER_32) 2000L);
}

/* {STRING_32_SEARCHER}.substring_index_with_deltas */
EIF_INTEGER_32 F102_1312 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc5 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc8);
	RTLR(3,tr1);
	RTLR(4,loc7);
	RTLR(5,Current);
	RTLIU(6);
	
	RTEAA("substring_index_with_deltas", 101, Current, 9, 4, 1343);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_pattern_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_pattern_not_empty", EX_PRE);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4558[Dtype(RTCW(arg2))-968])(arg2));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(4);
		RTCT("start_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(5);
		RTCT("end_pos_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 <= (EIF_INTEGER_32) (arg4 + ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTHOOK(6);
		RTCT("end_pos_small_enough", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O4778[Dtype(arg1)-970]);
		RTTE((EIF_BOOLEAN) (arg4 <= ti4_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(7);
	if ((EIF_BOOLEAN)(arg1 == arg2)) {
		RTHOOK(8);
		if ((EIF_BOOLEAN)(arg3 == ((EIF_INTEGER_32) 1L))) {
			RTHOOK(9);
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		}
	} else {
		RTHOOK(10);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4580[Dtype(RTCW(arg2))-968])(arg2));
		loc4 = (EIF_INTEGER_32) ti4_1;
		
		RTHOOK(11);
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
		loc8 = (EIF_REFERENCE) tr1;
		RTHOOK(12);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4776[Dtype(RTCW(arg1))-971])(arg1));
		loc9 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(13);
		loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg3 + loc9);
		RTHOOK(14);
		loc7 = *(EIF_REFERENCE *)(Current);
		RTHOOK(15);
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg4 + ((EIF_INTEGER_32) 1L)) + loc9);
		for (;;) {
			RTHOOK(16);
			if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc1 + loc4) > loc3)) break;
			RTHOOK(17);
			loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
			RTHOOK(18);
			loc5 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			for (;;) {
				RTHOOK(19);
				if ((EIF_BOOLEAN)(loc2 == loc4)) break;
				RTHOOK(20);
				tw1 = (nstcall = 1, F763_4161(RTCW(loc8), (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + loc2) - ((EIF_INTEGER_32) 1L))));
				tu4_1 = (EIF_NATURAL_32) tw1;
				tu4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4543[Dtype(RTCW(arg2))-968])(arg2, (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L))));
				if ((EIF_BOOLEAN)(tu4_1 != tu4_2)) {
					RTHOOK(21);
					loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 - ((EIF_INTEGER_32) 1L));
					RTHOOK(22);
					loc5 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				}
				RTHOOK(23);
				loc2++;
			}
			RTHOOK(24);
			if (loc5) {
				RTHOOK(25);
				Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 - loc9);
				RTHOOK(26);
				loc1 = (EIF_INTEGER_32) loc3;
			} else {
				RTHOOK(27);
				if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc1 + loc4) <= arg4)) {
					RTHOOK(28);
					tw1 = (nstcall = 1, F763_4161(RTCW(loc8), (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + loc4) - ((EIF_INTEGER_32) 1L))));
					ti4_1 = (EIF_INTEGER_32) (tw1);
					loc6 = (EIF_INTEGER_32) ti4_1;
					RTHOOK(29);
					if ((EIF_BOOLEAN) (loc6 > ((EIF_INTEGER_32) 2000L))) {
						RTHOOK(30);
						loc1++;
					} else {
						RTHOOK(31);
						ti4_1 = (nstcall = 1, F761_4161(RTCW(loc7), loc6));
						loc1 += ti4_1;
					}
				} else {
					RTHOOK(32);
					loc1++;
				}
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(33);
	RTLE;
	RTEE;
	return Result;
}

/* {STRING_32_SEARCHER}.fuzzy_index */
EIF_INTEGER_32 F102_1313 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32 arg5)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc7 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc11 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,loc9);
	RTLR(4,loc10);
	RTLR(5,tr1);
	RTLIU(6);
	
	RTEAA("fuzzy_index", 101, Current, 11, 5, 1344);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_pattern_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_pattern_not_empty", EX_PRE);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4558[Dtype(RTCW(arg2))-968])(arg2));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(4);
		RTCT("start_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(5);
		RTCT("end_pos_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 <= (EIF_INTEGER_32) (arg4 + ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTHOOK(6);
		RTCT("end_pos_small_enough", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O4778[Dtype(arg1)-970]);
		RTTE((EIF_BOOLEAN) (arg4 <= ti4_1), label_1);
		RTCK;
		RTHOOK(7);
		RTCT("fuzzy_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg5 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(8);
		RTCT("acceptable_fuzzy", EX_PRE);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4580[Dtype(RTCW(arg2))-968])(arg2));
		RTTE((EIF_BOOLEAN) (arg5 <= ti4_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(9);
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4580[Dtype(RTCW(arg2))-968])(arg2));
	if ((EIF_BOOLEAN)(arg5 == ti4_1)) {
		RTHOOK(10);
		Result = (EIF_INTEGER_32) arg3;
	} else {
		RTHOOK(11);
		if ((EIF_BOOLEAN)(arg5 == ((EIF_INTEGER_32) 0L))) {
			RTHOOK(12);
			Result = (nstcall = 0, F100_1298(Current, arg1, arg2, arg3, arg4));
		} else {
			RTHOOK(13);
			(nstcall = 0, F100_1305(Current, arg2, arg5));
			RTHOOK(14);
			loc9 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			RTHOOK(15);
			if ((EIF_BOOLEAN)(loc9 != NULL)) {
				RTHOOK(16);
				ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4580[Dtype(RTCW(arg2))-968])(arg2));
				loc5 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(17);
				tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
				loc10 = (EIF_REFERENCE) tr1;
				RTHOOK(18);
				ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4776[Dtype(RTCW(arg1))-971])(arg1));
				loc11 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(19);
				loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg3 + loc11);
				RTHOOK(20);
				loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg4 + ((EIF_INTEGER_32) 1L)) + loc11);
				for (;;) {
					RTHOOK(21);
					if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc1 + loc5) > loc4)) break;
					RTHOOK(22);
					loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
					RTHOOK(23);
					loc6 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
					RTHOOK(24);
					loc7 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					for (;;) {
						RTHOOK(25);
						if ((EIF_BOOLEAN)(loc2 == loc5)) break;
						RTHOOK(26);
						tw1 = (nstcall = 1, F763_4161(RTCW(loc10), (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + loc2) - ((EIF_INTEGER_32) 1L))));
						tu4_1 = (EIF_NATURAL_32) tw1;
						tu4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R4543[Dtype(RTCW(arg2))-968])(arg2, (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L))));
						if ((EIF_BOOLEAN)(tu4_1 != tu4_2)) {
							RTHOOK(27);
							loc6++;
							RTHOOK(28);
							if ((EIF_BOOLEAN) (loc6 > arg5)) {
								RTHOOK(29);
								loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc5 - ((EIF_INTEGER_32) 1L));
								RTHOOK(30);
								loc7 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
							}
						}
						RTHOOK(31);
						loc2++;
					}
					RTHOOK(32);
					if (loc7) {
						RTHOOK(33);
						Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 - loc11);
						RTHOOK(34);
						loc1 = (EIF_INTEGER_32) loc4;
					} else {
						RTHOOK(35);
						if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc1 + loc5) <= arg4)) {
							RTHOOK(36);
							loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
							RTHOOK(37);
							loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc5 + ((EIF_INTEGER_32) 1L));
							for (;;) {
								RTHOOK(38);
								if ((EIF_BOOLEAN) (loc2 > arg5)) break;
								RTHOOK(39);
								tw1 = (nstcall = 1, F763_4161(RTCW(loc10), (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + loc5) - loc2) - ((EIF_INTEGER_32) 1L))));
								ti4_1 = (EIF_INTEGER_32) (tw1);
								loc8 = (EIF_INTEGER_32) ti4_1;
								RTHOOK(40);
								if ((EIF_BOOLEAN) (loc8 > ((EIF_INTEGER_32) 2000L))) {
									RTHOOK(41);
									loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
									RTHOOK(42);
									loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg5 + ((EIF_INTEGER_32) 1L));
								} else {
									RTHOOK(43);
									tr1 = (nstcall = 1, F760_4161(RTCW(loc9), loc2));
									ti4_1 = (nstcall = 1, F761_4161(RTCW(tr1), loc8));
									ti4_2 = eif_min_int32 (loc3,ti4_1);
									loc3 = (EIF_INTEGER_32) ti4_2;
								}
								RTHOOK(44);
								loc2++;
							}
							RTHOOK(45);
							loc1 += loc3;
						} else {
							RTHOOK(46);
							loc1++;
						}
					}
				}
			}
			RTHOOK(47);
			*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) NULL;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(48);
	RTLE;
	RTEE;
	return Result;
}

void EIF_Minit81 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
