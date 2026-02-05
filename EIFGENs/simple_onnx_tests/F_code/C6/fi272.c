/*
 * Code for class FIND_SEPARATOR_FACILITY
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "fi272.h"
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

/* {FIND_SEPARATOR_FACILITY}.separator_characters */

EIF_REFERENCE F975_6455 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (316,RTMS_EX_H(":/-, .",6,872260142));
}

/* {FIND_SEPARATOR_FACILITY}.find_separator */
EIF_INTEGER_32 F975_6456 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc3 = (EIF_CHARACTER_8) 0;
	EIF_BOOLEAN loc4 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_CHARACTER_8 tc1;
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
	
	RTEAA("find_separator", 974, Current, 4, 2, 13338);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("s_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("i_in_range", EX_PRE);
		tb1 = '\0';
		if ((EIF_BOOLEAN) (((EIF_INTEGER_32) 1L) <= arg2)) {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O4703[Dtype(arg1)-967]);
			tb1 = (EIF_BOOLEAN) (arg2 <= ti4_1);
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O4703[Dtype(arg1)-967]);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
	RTHOOK(4);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(5);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(RTOUCR(316,(nstcall = 0, F975_6455), (Current)))+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN) (loc1 > ti4_1)) break;
		RTHOOK(6);
		tr1 = RTOUCR(316,(nstcall = 0, F975_6455), (Current));
		tc1 = (nstcall = 1, F970_6139(RTCW(tr1), loc1));
		ti4_2 = (nstcall = 1, F968_6073(RTCW(arg1), tc1, ((EIF_INTEGER_32) 1L)));
		loc2 = (EIF_INTEGER_32) ti4_2;
		RTHOOK(7);
		if ((EIF_BOOLEAN)(loc2 != ((EIF_INTEGER_32) 0L))) {
			RTHOOK(8);
			loc4 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			RTHOOK(9);
			tr1 = RTOUCR(316,(nstcall = 0, F975_6455), (Current));
			tc1 = (nstcall = 1, F970_6139(RTCW(tr1), loc1));
			ti4_2 = (nstcall = 1, F968_6073(RTCW(arg1), tc1, arg2));
			loc2 = (EIF_INTEGER_32) ti4_2;
			RTHOOK(10);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc2 != ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (loc2 < Result))) {
				RTHOOK(11);
				Result = (EIF_INTEGER_32) loc2;
			}
		}
		RTHOOK(12);
		loc1++;
	}
	RTHOOK(13);
	if ((EIF_BOOLEAN) !loc4) {
		RTHOOK(14);
		loc1 = (EIF_INTEGER_32) arg2;
		RTHOOK(15);
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4621[Dtype(RTCW(arg1))-968])(arg1, loc1, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 2L))));
		tr2 = RTMS_EX_H("[0]",3,5976157);
		tb1 = (nstcall = 1, F968_6088(RTCW(tr1), tr2));
		if (tb1) {
			RTHOOK(16);
			loc1 += ((EIF_INTEGER_32) 3L);
		}
		RTHOOK(17);
		tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R3211[Dtype(RTCW(arg1))-677])(arg1, loc1));
		loc3 = (EIF_CHARACTER_8) tc1;
		for (;;) {
			RTHOOK(18);
			tb1 = '\01';
			ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O4703[Dtype(arg1)-967]);
			if (!(EIF_BOOLEAN) (loc1 > ti4_2)) {
				tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R3211[Dtype(RTCW(arg1))-677])(arg1, loc1));
				tb1 = (EIF_BOOLEAN)(tc1 != loc3);
			}
			if (tb1) break;
			RTHOOK(19);
			loc1++;
			RTHOOK(20);
			ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O4703[Dtype(arg1)-967]);
			if ((EIF_BOOLEAN) (loc1 <= ti4_2)) {
				RTHOOK(21);
				tb2 = '\0';
				if ((EIF_BOOLEAN)(loc3 == (EIF_CHARACTER_8) 'm')) {
					tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R3211[Dtype(RTCW(arg1))-677])(arg1, loc1));
					tb2 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) 'i');
				}
				if (tb2) {
					RTHOOK(22);
					tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R3211[Dtype(RTCW(arg1))-677])(arg1, loc1));
					loc3 = (EIF_CHARACTER_8) tc1;
				} else {
					RTHOOK(23);
					tb2 = '\0';
					tb3 = '\0';
					if ((EIF_BOOLEAN)(loc3 == (EIF_CHARACTER_8) 'h')) {
						tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R3211[Dtype(RTCW(arg1))-677])(arg1, loc1));
						tb3 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '1');
					}
					if (tb3) {
						tb3 = '\0';
						tb4 = (nstcall = 1, F965_5942(RTCW(arg1), (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L))));
						if (tb4) {
							tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R3211[Dtype(RTCW(arg1))-677])(arg1, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L))));
							tb3 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '2');
						}
						tb2 = tb3;
					}
					if (tb2) {
						RTHOOK(24);
						loc1++;
						RTHOOK(25);
						tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R3211[Dtype(RTCW(arg1))-677])(arg1, loc1));
						loc3 = (EIF_CHARACTER_8) tc1;
					}
				}
			}
		}
		RTHOOK(26);
		Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L)) * ((EIF_INTEGER_32) -1L));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(27);
		RTCT("not_zero", EX_POST);
		if ((EIF_BOOLEAN)(Result != ((EIF_INTEGER_32) 0L))) {
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
	return Result;
}

/* {FIND_SEPARATOR_FACILITY}.extracted_substrings */
EIF_REFERENCE F975_6457 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,Current);
	RTLR(5,Result);
	RTLIU(6);
	
	RTEAA("extracted_substrings", 974, Current, 2, 3, 13339);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("string_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("range_correct", EX_PRE);
		ti4_1 = eif_abs_int32 (arg3);
		RTTE((EIF_BOOLEAN) (arg2 <= ti4_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	if ((EIF_BOOLEAN) (arg3 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(4);
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4621[Dtype(RTCW(arg1))-968])(arg1, arg2, (EIF_INTEGER_32) (arg3 - ((EIF_INTEGER_32) 1L))));
		loc1 = (EIF_REFERENCE) tr1;
		RTHOOK(5);
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4621[Dtype(RTCW(arg1))-968])(arg1, arg3, arg3));
		loc2 = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(6);
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4621[Dtype(RTCW(arg1))-968])(arg1, arg2, (EIF_INTEGER_32) -arg3));
		loc1 = (EIF_REFERENCE) tr1;
		RTHOOK(7);
		loc2 = RTLNS(eif_new_type(968, 0x01).id, 968, _OBJSIZ_1_0_0_4_0_0_0_0_);
		(nstcall = -1, F968_6060(RTCW(loc2), ((EIF_INTEGER_32) 0L)));
	}
	RTHOOK(8);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,886,0xFF01,967,0xFF01,967,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNTS(typres0.id, 3, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = loc1;
	RTAR(tr1,loc1);
	((EIF_TYPED_VALUE *)tr1+2)->it_r = loc2;
	RTAR(tr1,loc2);
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("extracted_substrings_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("substrings_extracted", EX_POST);
		tb1 = '\0';
		tr1 = eif_boxed_item(Result,1);
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			tr1 = eif_boxed_item(Result,2);
			tb1 = (EIF_BOOLEAN)(tr1 != NULL);
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

/* {FIND_SEPARATOR_FACILITY}.has_separators */
EIF_BOOLEAN F975_6458 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("has_separators", 974, Current, 1, 1, 13340);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("string_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(3);
		tb1 = '\01';
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O4703[Dtype(arg1)-967]);
		if (!(EIF_BOOLEAN) (loc1 > ti4_1)) {
			tb1 = Result;
		}
		if (tb1) break;
		RTHOOK(4);
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4621[Dtype(RTCW(arg1))-968])(arg1, loc1, loc1));
		Result = (nstcall = 0, F88_1170(Current, tr1));
		RTHOOK(5);
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
	return Result;
}

void EIF_Minit272 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
