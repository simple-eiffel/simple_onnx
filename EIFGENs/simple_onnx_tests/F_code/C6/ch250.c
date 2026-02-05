/*
 * Code for class CHARACTER_8_REF
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ch250.h"
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

/* {CHARACTER_8_REF}.item */
EIF_CHARACTER_8 F918_5679 (EIF_REFERENCE Current)
{
	return *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
}


/* {CHARACTER_8_REF}.code */
EIF_INTEGER_32 F918_5680 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 tc1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("code", 917, Current, 0, 0, 12566);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tc1 = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
	ti4_1 = (EIF_INTEGER_32) (tc1);
	Result = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("code_non_negatif", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("code_in_range", EX_POST);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (Result <= ((EIF_INTEGER_32) 255L)))) {
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

/* {CHARACTER_8_REF}.natural_32_code */
EIF_NATURAL_32 F918_5681 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_CHARACTER_8 tc1;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("natural_32_code", 917, Current, 0, 0, 12567);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tc1 = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
	ti4_1 = (EIF_INTEGER_32) (tc1);
	tu4_1 = (EIF_NATURAL_32) ti4_1;
	Result = (EIF_NATURAL_32) tu4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {CHARACTER_8_REF}.hash_code */
EIF_INTEGER_32 F918_5682 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("hash_code", 917, Current, 0, 0, 12568);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tu4_1 = (nstcall = 0, F918_5681(Current));
	ti4_1 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (tu4_1)));
	Result = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("good_hash_value", EX_POST);
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

/* {CHARACTER_8_REF}.is_less */
EIF_BOOLEAN F918_5686 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("is_less", 917, Current, 0, 1, 12572);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tu4_1 = (nstcall = 0, F918_5681(Current));
	tu4_2 = (nstcall = 1, F918_5681(RTCW(arg1)));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tu4_1 < tu4_2);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("asymmetric", EX_POST);
		tb1 = '\01';
		if (Result) {
			tr1 = RTCCL(Current);
			tb2 = (nstcall = 1, F918_5686(RTCW(arg1), tr1));
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("definition", EX_POST);
		tu4_1 = (nstcall = 1, F918_5681(RTCW(arg1)));
		if ((EIF_BOOLEAN)(Result == (EIF_BOOLEAN) ((nstcall = 0, F918_5681(Current)) < tu4_1))) {
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

/* {CHARACTER_8_REF}.is_equal */
EIF_BOOLEAN F918_5687 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("is_equal", 917, Current, 0, 1, 12573);
	RTSA(Dtype(Current));
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
	tc1 = *(EIF_CHARACTER_8 *)(RTCW(arg1)+ _CHROFF_0_0_);
	tc2 = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tc1 == tc2);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("symmetric", EX_POST);
		if ((!(Result) || (RTEQ(arg1, Current)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("consistent", EX_POST);
		tb1 = '\01';
		tr1 = RTCCL(arg1);
		if ((nstcall = 0, F1_9(Current, tr1))) {
			tb1 = Result;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("trichotomy", EX_POST);
		tb1 = '\0';
		tr1 = RTCCL(arg1);
		tb2 = (nstcall = 1, F918_5686(Current, tr1));
		if ((EIF_BOOLEAN) !tb2) {
			tr1 = RTCCL(Current);
			tb2 = (nstcall = 1, F918_5686(RTCW(arg1), tr1));
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if ((EIF_BOOLEAN)(Result == tb1)) {
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

/* {CHARACTER_8_REF}.plus */
EIF_CHARACTER_8 F918_5688 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("plus", 917, Current, 0, 1, 12574);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_increment", EX_PRE);
		tc1 = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
		ti4_1 = (EIF_INTEGER_32) (tc1);
		tr1 = RTLNS(eif_new_type(892, 0x00).id, 892, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)tr1 = (EIF_INTEGER_32) (ti4_1 + arg1);
		tb1 = (nstcall = 1, F891_4942(RTCW(tr1)));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tc1 = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
	ti4_1 = (EIF_INTEGER_32) (tc1);
	tc1 = (EIF_CHARACTER_8) (EIF_INTEGER_32) (ti4_1 + arg1);
	Result = (EIF_CHARACTER_8) tc1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("valid_result", EX_POST);
		tr1 = RTLNS(eif_new_type(919, 0x00).id, 919, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_CHARACTER_8 *)tr1 = Result;
		ti4_1 = (nstcall = 1, F918_5690(RTCW(tr1), *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_)));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
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

/* {CHARACTER_8_REF}.minus */
EIF_CHARACTER_8 F918_5689 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("minus", 917, Current, 0, 1, 12575);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_decrement", EX_PRE);
		tc1 = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
		ti4_1 = (EIF_INTEGER_32) (tc1);
		tr1 = RTLNS(eif_new_type(892, 0x00).id, 892, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)tr1 = (EIF_INTEGER_32) (ti4_1 - arg1);
		tb1 = (nstcall = 1, F891_4942(RTCW(tr1)));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tc1 = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
	ti4_1 = (EIF_INTEGER_32) (tc1);
	tc1 = (EIF_CHARACTER_8) (EIF_INTEGER_32) (ti4_1 - arg1);
	Result = (EIF_CHARACTER_8) tc1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("valid_result", EX_POST);
		tc1 = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
		tr1 = RTLNS(eif_new_type(919, 0x00).id, 919, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_CHARACTER_8 *)tr1 = tc1;
		ti4_1 = (nstcall = 1, F918_5690(RTCW(tr1), Result));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
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

/* {CHARACTER_8_REF}.difference */
EIF_INTEGER_32 F918_5690 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER_8 tc1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("difference", 917, Current, 0, 1, 12576);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tc1 = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
	ti4_1 = (EIF_INTEGER_32) (tc1);
	ti4_2 = (EIF_INTEGER_32) (arg1);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 - ti4_2);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("valid_result", EX_POST);
		tc1 = (EIF_CHARACTER_8) (((EIF_INTEGER_32) arg1) + Result);
		if ((EIF_BOOLEAN)(tc1 == *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_))) {
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

/* {CHARACTER_8_REF}.next */
EIF_CHARACTER_8 F918_5691 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("next", 917, Current, 0, 0, 12577);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_character", EX_PRE);
		tc1 = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
		ti4_1 = (EIF_INTEGER_32) (tc1);
		tr1 = RTLNS(eif_new_type(892, 0x00).id, 892, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)tr1 = (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
		tb1 = (nstcall = 1, F891_4942(RTCW(tr1)));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tc1 = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
	tc2 = (EIF_CHARACTER_8) (((EIF_INTEGER_32) tc1) + ((EIF_INTEGER_32) 1L));
	Result = (EIF_CHARACTER_8) tc2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("valid_result", EX_POST);
		tr1 = RTLNS(eif_new_type(919, 0x00).id, 919, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_CHARACTER_8 *)tr1 = Result;
		ti4_1 = (nstcall = 1, F918_5690(RTCW(tr1), *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_)));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))) {
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

/* {CHARACTER_8_REF}.previous */
EIF_CHARACTER_8 F918_5692 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("previous", 917, Current, 0, 0, 12578);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_character", EX_PRE);
		tc1 = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
		ti4_1 = (EIF_INTEGER_32) (tc1);
		tr1 = RTLNS(eif_new_type(892, 0x00).id, 892, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)tr1 = (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L));
		tb1 = (nstcall = 1, F891_4942(RTCW(tr1)));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tc1 = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
	tc2 = (EIF_CHARACTER_8) (((EIF_INTEGER_32) tc1) - ((EIF_INTEGER_32) 1L));
	Result = (EIF_CHARACTER_8) tc2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("valid_result", EX_POST);
		tr1 = RTLNS(eif_new_type(919, 0x00).id, 919, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_CHARACTER_8 *)tr1 = Result;
		ti4_1 = (nstcall = 1, F918_5690(RTCW(tr1), *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_)));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) -1L))) {
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

/* {CHARACTER_8_REF}.set_item */
void F918_5693 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_item", 917, Current, 0, 1, 12579);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_) = (EIF_CHARACTER_8) arg1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {CHARACTER_8_REF}.out */
EIF_REFERENCE F918_5694 (EIF_REFERENCE Current)
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
	
	RTEAA("out", 917, Current, 0, 0, 12580);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNS(eif_new_type(969, 0x01).id, 969, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F968_6060(RTCW(Result), ((EIF_INTEGER_32) 1L)));
	RTHOOK(2);
	(nstcall = 1, F970_6186(RTCW(Result), *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("out_not_void", EX_POST);
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

/* {CHARACTER_8_REF}.make_from_reference */
void F918_5695 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_CHARACTER_8 tc1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("make_from_reference", 917, Current, 0, 1, 12581);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("v_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tc1 = *(EIF_CHARACTER_8 *)(RTCW(arg1)+ _CHROFF_0_0_);
	(nstcall = 0, F918_5693(Current, tc1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("item_set", EX_POST);
		tc1 = *(EIF_CHARACTER_8 *)(RTCW(arg1)+ _CHROFF_0_0_);
		if ((EIF_BOOLEAN)(*(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_) == tc1)) {
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

/* {CHARACTER_8_REF}.to_reference */
EIF_REFERENCE F918_5696 (EIF_REFERENCE Current)
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
	
	RTEAA("to_reference", 917, Current, 0, 0, 12582);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNS(eif_new_type(917, 0x01).id, 917, _OBJSIZ_0_1_0_0_0_0_0_0_);
	RTHOOK(2);
	(nstcall = 1, F918_5693(RTCW(Result), *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("to_reference_not_void", EX_POST);
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

/* {CHARACTER_8_REF}.to_character_8 */
EIF_CHARACTER_8 F918_5697 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("to_character_8", 917, Current, 0, 0, 12583);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {CHARACTER_8_REF}.to_character_32 */
EIF_CHARACTER_32 F918_5698 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_32 Result = ((EIF_CHARACTER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("to_character_32", 917, Current, 0, 0, 12584);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tc1 = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
	tw1 = (EIF_CHARACTER_32) tc1;
	Result = (EIF_CHARACTER_32) tw1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {CHARACTER_8_REF}.as_upper */
EIF_CHARACTER_8 F918_5699 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("as_upper", 917, Current, 0, 0, 12585);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTOUCR(92,(nstcall = 0, F918_5718), (Current));
	tu4_1 = (nstcall = 0, F918_5681(Current));
	ti4_1 = (EIF_INTEGER_32) tu4_1;
	tc1 = (nstcall = 1, F764_4161(RTCW(tr1), ti4_1));
	Result = (EIF_CHARACTER_8) tc1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {CHARACTER_8_REF}.upper */
EIF_CHARACTER_8 F918_5700 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("upper", 917, Current, 0, 0, 12586);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTOUCR(92,(nstcall = 0, F918_5718), (Current));
	tu4_1 = (nstcall = 0, F918_5681(Current));
	ti4_1 = (EIF_INTEGER_32) tu4_1;
	tc1 = (nstcall = 1, F764_4161(RTCW(tr1), ti4_1));
	Result = (EIF_CHARACTER_8) tc1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {CHARACTER_8_REF}.as_lower */
EIF_CHARACTER_8 F918_5701 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("as_lower", 917, Current, 0, 0, 12587);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTOUCR(93,(nstcall = 0, F918_5717), (Current));
	tu4_1 = (nstcall = 0, F918_5681(Current));
	ti4_1 = (EIF_INTEGER_32) tu4_1;
	tc1 = (nstcall = 1, F764_4161(RTCW(tr1), ti4_1));
	Result = (EIF_CHARACTER_8) tc1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {CHARACTER_8_REF}.lower */
EIF_CHARACTER_8 F918_5702 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("lower", 917, Current, 0, 0, 12588);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTOUCR(93,(nstcall = 0, F918_5717), (Current));
	tu4_1 = (nstcall = 0, F918_5681(Current));
	ti4_1 = (EIF_INTEGER_32) tu4_1;
	tc1 = (nstcall = 1, F764_4161(RTCW(tr1), ti4_1));
	Result = (EIF_CHARACTER_8) tc1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {CHARACTER_8_REF}.to_hexa_digit */
EIF_NATURAL_8 F918_5703 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_NATURAL_8 loc1 = (EIF_NATURAL_8) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_INTEGER_8 ti1_1;
	EIF_INTEGER_8 ti1_2;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_NATURAL_8 tu1_3;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("to_hexa_digit", 917, Current, 1, 0, 12589);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_hexa_digit", EX_PRE);
		RTTE((nstcall = 0, F918_5708(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tu4_1 = (nstcall = 0, F918_5681(Current));
	tu1_1 = (EIF_NATURAL_8) tu4_1;
	tu1_2 = eif_bit_and(tu1_1,(EIF_NATURAL_8) ((EIF_INTEGER_32) 79L));
	Result = (EIF_NATURAL_8) tu1_2;
	RTHOOK(3);
	tu1_1 = eif_bit_shift_left(Result,((EIF_INTEGER_32) 1L));
	ti1_1 = (EIF_INTEGER_8) tu1_1;
	ti1_2 = eif_bit_shift_right(ti1_1,((EIF_INTEGER_32) 7L));
	tu1_1 = (EIF_NATURAL_8) ti1_2;
	loc1 = (EIF_NATURAL_8) tu1_1;
	RTHOOK(4);
	tu1_1 = eif_bit_not(loc1);
	tu1_2 = eif_bit_and(Result,tu1_1);
	tu1_1 = eif_bit_and(((EIF_NATURAL_8) (Result - (EIF_NATURAL_8) ((EIF_INTEGER_32) 55L))),loc1);
	tu1_3 = eif_bit_or(tu1_2,tu1_1);
	Result = (EIF_NATURAL_8) tu1_3;
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("range", EX_POST);
		tb1 = '\0';
		ti4_1 = (EIF_INTEGER_32) Result;
		if ((EIF_BOOLEAN) (((EIF_INTEGER_32) 0L) <= ti4_1)) {
			tb1 = (EIF_BOOLEAN) (Result < (EIF_NATURAL_8) ((EIF_INTEGER_32) 16L));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("value", EX_POST);
		tr1 = RTMS_EX_H("0123456789ABCDEF",16,1319696198);
		ti4_1 = (EIF_INTEGER_32) ((EIF_NATURAL_8) (Result + (EIF_NATURAL_8) ((EIF_INTEGER_32) 1L)));
		tc1 = (nstcall = 1, F970_6139(tr1, ti4_1));
		if ((EIF_BOOLEAN)(tc1 == (nstcall = 0, F918_5699(Current)))) {
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

/* {CHARACTER_8_REF}.is_alpha */
EIF_BOOLEAN F918_5704 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_NATURAL_8 tu1_3;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_alpha", 917, Current, 0, 0, 12590);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tc1 = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
	ti4_1 = (EIF_INTEGER_32) (tc1);
	tu1_1 = (nstcall = 0, F918_5715(Current, ti4_1));
	tu1_2 = eif_bit_or(((EIF_NATURAL_8) 1U),((EIF_NATURAL_8) 2U));
	tu1_3 = eif_bit_and(tu1_1,tu1_2);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tu1_3 > (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {CHARACTER_8_REF}.is_upper */
EIF_BOOLEAN F918_5705 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_upper", 917, Current, 0, 0, 12591);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tc1 = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
	ti4_1 = (EIF_INTEGER_32) (tc1);
	tu1_1 = (nstcall = 0, F918_5715(Current, ti4_1));
	tu1_2 = eif_bit_and(tu1_1,((EIF_NATURAL_8) 1U));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tu1_2 > (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {CHARACTER_8_REF}.is_lower */
EIF_BOOLEAN F918_5706 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_lower", 917, Current, 0, 0, 12592);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tc1 = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
	ti4_1 = (EIF_INTEGER_32) (tc1);
	tu1_1 = (nstcall = 0, F918_5715(Current, ti4_1));
	tu1_2 = eif_bit_and(tu1_1,((EIF_NATURAL_8) 2U));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tu1_2 > (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {CHARACTER_8_REF}.is_digit */
EIF_BOOLEAN F918_5707 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_digit", 917, Current, 0, 0, 12593);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tc1 = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
	ti4_1 = (EIF_INTEGER_32) (tc1);
	tu1_1 = (nstcall = 0, F918_5715(Current, ti4_1));
	tu1_2 = eif_bit_and(tu1_1,((EIF_NATURAL_8) 4U));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tu1_2 > (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {CHARACTER_8_REF}.is_hexa_digit */
EIF_BOOLEAN F918_5708 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_NATURAL_8 tu1_3;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_hexa_digit", 917, Current, 0, 0, 12594);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tc1 = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
	ti4_1 = (EIF_INTEGER_32) (tc1);
	tu1_1 = (nstcall = 0, F918_5715(Current, ti4_1));
	tu1_2 = eif_bit_or(((EIF_NATURAL_8) 64U),((EIF_NATURAL_8) 4U));
	tu1_3 = eif_bit_and(tu1_1,tu1_2);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tu1_3 > (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {CHARACTER_8_REF}.is_space */
EIF_BOOLEAN F918_5709 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_space", 917, Current, 0, 0, 12595);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tc1 = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
	ti4_1 = (EIF_INTEGER_32) (tc1);
	tu1_1 = (nstcall = 0, F918_5715(Current, ti4_1));
	tu1_2 = eif_bit_and(tu1_1,((EIF_NATURAL_8) 8U));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tu1_2 > (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {CHARACTER_8_REF}.is_punctuation */
EIF_BOOLEAN F918_5710 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_punctuation", 917, Current, 0, 0, 12596);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tc1 = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
	ti4_1 = (EIF_INTEGER_32) (tc1);
	tu1_1 = (nstcall = 0, F918_5715(Current, ti4_1));
	tu1_2 = eif_bit_and(tu1_1,((EIF_NATURAL_8) 16U));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tu1_2 > (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {CHARACTER_8_REF}.is_alpha_numeric */
EIF_BOOLEAN F918_5711 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_NATURAL_8 tu1_3;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_alpha_numeric", 917, Current, 0, 0, 12597);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tc1 = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
	ti4_1 = (EIF_INTEGER_32) (tc1);
	tu1_1 = (nstcall = 0, F918_5715(Current, ti4_1));
	tu1_2 = eif_bit_or(((EIF_NATURAL_8) 1U),((EIF_NATURAL_8) 2U));
	tu1_3 = eif_bit_or(tu1_2,((EIF_NATURAL_8) 4U));
	tu1_2 = eif_bit_and(tu1_1,tu1_3);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tu1_2 > (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {CHARACTER_8_REF}.is_printable */
EIF_BOOLEAN F918_5712 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_NATURAL_8 tu1_3;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_printable", 917, Current, 0, 0, 12598);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tc1 = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
	ti4_1 = (EIF_INTEGER_32) (tc1);
	tu1_1 = (nstcall = 0, F918_5715(Current, ti4_1));
	tu1_2 = eif_bit_or(((EIF_NATURAL_8) 1U),((EIF_NATURAL_8) 2U));
	tu1_3 = eif_bit_or(tu1_2,((EIF_NATURAL_8) 4U));
	tu1_2 = eif_bit_or(tu1_3,((EIF_NATURAL_8) 16U));
	tu1_3 = eif_bit_or(tu1_2,((EIF_NATURAL_8) 128U));
	tu1_2 = eif_bit_and(tu1_1,tu1_3);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tu1_2 > (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {CHARACTER_8_REF}.is_graph */
EIF_BOOLEAN F918_5713 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_NATURAL_8 tu1_3;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_graph", 917, Current, 0, 0, 12599);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tc1 = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
	ti4_1 = (EIF_INTEGER_32) (tc1);
	tu1_1 = (nstcall = 0, F918_5715(Current, ti4_1));
	tu1_2 = eif_bit_or(((EIF_NATURAL_8) 1U),((EIF_NATURAL_8) 2U));
	tu1_3 = eif_bit_or(tu1_2,((EIF_NATURAL_8) 4U));
	tu1_2 = eif_bit_or(tu1_3,((EIF_NATURAL_8) 16U));
	tu1_3 = eif_bit_and(tu1_1,tu1_2);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tu1_3 > (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {CHARACTER_8_REF}.is_control */
EIF_BOOLEAN F918_5714 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_control", 917, Current, 0, 0, 12600);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tc1 = *(EIF_CHARACTER_8 *)(Current+ _CHROFF_0_0_);
	ti4_1 = (EIF_INTEGER_32) (tc1);
	tu1_1 = (nstcall = 0, F918_5715(Current, ti4_1));
	tu1_2 = eif_bit_and(tu1_1,((EIF_NATURAL_8) 32U));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tu1_2 > (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {CHARACTER_8_REF}.character_types */
EIF_NATURAL_8 F918_5715 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("character_types", 917, Current, 0, 1, 12601);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN) (arg1 < ((EIF_INTEGER_32) 256L))) {
		RTHOOK(2);
		tr1 = RTOUCR(94,(nstcall = 0, F918_5716), (Current));
		tu1_1 = (nstcall = 1, F767_4161(RTCW(tr1), arg1));
		Result = (EIF_NATURAL_8) tu1_1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {CHARACTER_8_REF}.internal_character_types */
static EIF_REFERENCE F918_5716_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(94)

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("internal_character_types", 917, Current, 0, 0, 12602);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,766,907,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNSP2(typres0.id,0,((EIF_INTEGER_32) 256L),sizeof(EIF_NATURAL_8), EIF_TRUE);
		RT_SPECIAL_COUNT(tr1) = 0;
	}
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 32U)));
	RTHOOK(3);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 32U)));
	RTHOOK(4);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 32U)));
	RTHOOK(5);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 32U)));
	RTHOOK(6);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 32U)));
	RTHOOK(7);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 32U)));
	RTHOOK(8);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 32U)));
	RTHOOK(9);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 32U)));
	RTHOOK(10);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 32U)));
	RTHOOK(11);
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 32U),((EIF_NATURAL_8) 8U));
	(nstcall = 1, F767_4178(RTCW(Result), tu1_1));
	RTHOOK(12);
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 32U),((EIF_NATURAL_8) 8U));
	(nstcall = 1, F767_4178(RTCW(Result), tu1_1));
	RTHOOK(13);
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 32U),((EIF_NATURAL_8) 8U));
	(nstcall = 1, F767_4178(RTCW(Result), tu1_1));
	RTHOOK(14);
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 32U),((EIF_NATURAL_8) 8U));
	(nstcall = 1, F767_4178(RTCW(Result), tu1_1));
	RTHOOK(15);
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 32U),((EIF_NATURAL_8) 8U));
	(nstcall = 1, F767_4178(RTCW(Result), tu1_1));
	RTHOOK(16);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 32U)));
	RTHOOK(17);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 32U)));
	RTHOOK(18);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 32U)));
	RTHOOK(19);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 32U)));
	RTHOOK(20);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 32U)));
	RTHOOK(21);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 32U)));
	RTHOOK(22);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 32U)));
	RTHOOK(23);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 32U)));
	RTHOOK(24);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 32U)));
	RTHOOK(25);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 32U)));
	RTHOOK(26);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 32U)));
	RTHOOK(27);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 32U)));
	RTHOOK(28);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 32U)));
	RTHOOK(29);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 32U)));
	RTHOOK(30);
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 32U),((EIF_NATURAL_8) 8U));
	(nstcall = 1, F767_4178(RTCW(Result), tu1_1));
	RTHOOK(31);
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 32U),((EIF_NATURAL_8) 8U));
	(nstcall = 1, F767_4178(RTCW(Result), tu1_1));
	RTHOOK(32);
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 32U),((EIF_NATURAL_8) 8U));
	(nstcall = 1, F767_4178(RTCW(Result), tu1_1));
	RTHOOK(33);
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 32U),((EIF_NATURAL_8) 8U));
	(nstcall = 1, F767_4178(RTCW(Result), tu1_1));
	RTHOOK(34);
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 128U),((EIF_NATURAL_8) 8U));
	(nstcall = 1, F767_4178(RTCW(Result), tu1_1));
	RTHOOK(35);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 16U)));
	RTHOOK(36);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 16U)));
	RTHOOK(37);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 16U)));
	RTHOOK(38);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 16U)));
	RTHOOK(39);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 16U)));
	RTHOOK(40);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 16U)));
	RTHOOK(41);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 16U)));
	RTHOOK(42);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 16U)));
	RTHOOK(43);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 16U)));
	RTHOOK(44);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 16U)));
	RTHOOK(45);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 16U)));
	RTHOOK(46);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 16U)));
	RTHOOK(47);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 16U)));
	RTHOOK(48);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 16U)));
	RTHOOK(49);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 16U)));
	RTHOOK(50);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 4U)));
	RTHOOK(51);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 4U)));
	RTHOOK(52);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 4U)));
	RTHOOK(53);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 4U)));
	RTHOOK(54);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 4U)));
	RTHOOK(55);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 4U)));
	RTHOOK(56);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 4U)));
	RTHOOK(57);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 4U)));
	RTHOOK(58);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 4U)));
	RTHOOK(59);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 4U)));
	RTHOOK(60);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 16U)));
	RTHOOK(61);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 16U)));
	RTHOOK(62);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 16U)));
	RTHOOK(63);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 16U)));
	RTHOOK(64);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 16U)));
	RTHOOK(65);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 16U)));
	RTHOOK(66);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 16U)));
	RTHOOK(67);
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 1U),((EIF_NATURAL_8) 64U));
	(nstcall = 1, F767_4178(RTCW(Result), tu1_1));
	RTHOOK(68);
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 1U),((EIF_NATURAL_8) 64U));
	(nstcall = 1, F767_4178(RTCW(Result), tu1_1));
	RTHOOK(69);
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 1U),((EIF_NATURAL_8) 64U));
	(nstcall = 1, F767_4178(RTCW(Result), tu1_1));
	RTHOOK(70);
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 1U),((EIF_NATURAL_8) 64U));
	(nstcall = 1, F767_4178(RTCW(Result), tu1_1));
	RTHOOK(71);
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 1U),((EIF_NATURAL_8) 64U));
	(nstcall = 1, F767_4178(RTCW(Result), tu1_1));
	RTHOOK(72);
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 1U),((EIF_NATURAL_8) 64U));
	(nstcall = 1, F767_4178(RTCW(Result), tu1_1));
	RTHOOK(73);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 1U)));
	RTHOOK(74);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 1U)));
	RTHOOK(75);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 1U)));
	RTHOOK(76);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 1U)));
	RTHOOK(77);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 1U)));
	RTHOOK(78);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 1U)));
	RTHOOK(79);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 1U)));
	RTHOOK(80);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 1U)));
	RTHOOK(81);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 1U)));
	RTHOOK(82);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 1U)));
	RTHOOK(83);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 1U)));
	RTHOOK(84);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 1U)));
	RTHOOK(85);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 1U)));
	RTHOOK(86);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 1U)));
	RTHOOK(87);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 1U)));
	RTHOOK(88);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 1U)));
	RTHOOK(89);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 1U)));
	RTHOOK(90);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 1U)));
	RTHOOK(91);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 1U)));
	RTHOOK(92);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 1U)));
	RTHOOK(93);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 16U)));
	RTHOOK(94);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 16U)));
	RTHOOK(95);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 16U)));
	RTHOOK(96);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 16U)));
	RTHOOK(97);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 16U)));
	RTHOOK(98);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 16U)));
	RTHOOK(99);
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 2U),((EIF_NATURAL_8) 64U));
	(nstcall = 1, F767_4178(RTCW(Result), tu1_1));
	RTHOOK(100);
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 2U),((EIF_NATURAL_8) 64U));
	(nstcall = 1, F767_4178(RTCW(Result), tu1_1));
	RTHOOK(101);
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 2U),((EIF_NATURAL_8) 64U));
	(nstcall = 1, F767_4178(RTCW(Result), tu1_1));
	RTHOOK(102);
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 2U),((EIF_NATURAL_8) 64U));
	(nstcall = 1, F767_4178(RTCW(Result), tu1_1));
	RTHOOK(103);
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 2U),((EIF_NATURAL_8) 64U));
	(nstcall = 1, F767_4178(RTCW(Result), tu1_1));
	RTHOOK(104);
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 2U),((EIF_NATURAL_8) 64U));
	(nstcall = 1, F767_4178(RTCW(Result), tu1_1));
	RTHOOK(105);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 2U)));
	RTHOOK(106);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 2U)));
	RTHOOK(107);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 2U)));
	RTHOOK(108);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 2U)));
	RTHOOK(109);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 2U)));
	RTHOOK(110);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 2U)));
	RTHOOK(111);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 2U)));
	RTHOOK(112);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 2U)));
	RTHOOK(113);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 2U)));
	RTHOOK(114);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 2U)));
	RTHOOK(115);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 2U)));
	RTHOOK(116);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 2U)));
	RTHOOK(117);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 2U)));
	RTHOOK(118);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 2U)));
	RTHOOK(119);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 2U)));
	RTHOOK(120);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 2U)));
	RTHOOK(121);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 2U)));
	RTHOOK(122);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 2U)));
	RTHOOK(123);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 2U)));
	RTHOOK(124);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 2U)));
	RTHOOK(125);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 16U)));
	RTHOOK(126);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 16U)));
	RTHOOK(127);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 16U)));
	RTHOOK(128);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 16U)));
	RTHOOK(129);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 32U)));
	RTHOOK(130);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 32U)));
	RTHOOK(131);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 32U)));
	RTHOOK(132);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 32U)));
	RTHOOK(133);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 32U)));
	RTHOOK(134);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 32U)));
	RTHOOK(135);
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 32U),((EIF_NATURAL_8) 128U));
	tu1_2 = eif_bit_or(tu1_1,((EIF_NATURAL_8) 8U));
	(nstcall = 1, F767_4178(RTCW(Result), tu1_2));
	RTHOOK(136);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 32U)));
	RTHOOK(137);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 32U)));
	RTHOOK(138);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 32U)));
	RTHOOK(139);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 32U)));
	RTHOOK(140);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 32U)));
	RTHOOK(141);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 32U)));
	RTHOOK(142);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 32U)));
	RTHOOK(143);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 32U)));
	RTHOOK(144);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 32U)));
	RTHOOK(145);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 32U)));
	RTHOOK(146);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 32U)));
	RTHOOK(147);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 32U)));
	RTHOOK(148);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 32U)));
	RTHOOK(149);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 32U)));
	RTHOOK(150);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 32U)));
	RTHOOK(151);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 32U)));
	RTHOOK(152);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 32U)));
	RTHOOK(153);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 32U)));
	RTHOOK(154);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 32U)));
	RTHOOK(155);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 32U)));
	RTHOOK(156);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 32U)));
	RTHOOK(157);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 32U)));
	RTHOOK(158);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 32U)));
	RTHOOK(159);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 32U)));
	RTHOOK(160);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 32U)));
	RTHOOK(161);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 32U)));
	RTHOOK(162);
	tu1_1 = eif_bit_or(((EIF_NATURAL_8) 128U),((EIF_NATURAL_8) 8U));
	(nstcall = 1, F767_4178(RTCW(Result), tu1_1));
	RTHOOK(163);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 16U)));
	RTHOOK(164);
	(nstcall = 1, F767_4178(RTCW(Result), (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L)));
	RTHOOK(165);
	(nstcall = 1, F767_4178(RTCW(Result), (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L)));
	RTHOOK(166);
	(nstcall = 1, F767_4178(RTCW(Result), (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L)));
	RTHOOK(167);
	(nstcall = 1, F767_4178(RTCW(Result), (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L)));
	RTHOOK(168);
	(nstcall = 1, F767_4178(RTCW(Result), (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L)));
	RTHOOK(169);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 16U)));
	RTHOOK(170);
	(nstcall = 1, F767_4178(RTCW(Result), (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L)));
	RTHOOK(171);
	(nstcall = 1, F767_4178(RTCW(Result), (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L)));
	RTHOOK(172);
	(nstcall = 1, F767_4178(RTCW(Result), (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L)));
	RTHOOK(173);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 16U)));
	RTHOOK(174);
	(nstcall = 1, F767_4178(RTCW(Result), (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L)));
	RTHOOK(175);
	(nstcall = 1, F767_4178(RTCW(Result), (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L)));
	RTHOOK(176);
	(nstcall = 1, F767_4178(RTCW(Result), (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L)));
	RTHOOK(177);
	(nstcall = 1, F767_4178(RTCW(Result), (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L)));
	RTHOOK(178);
	(nstcall = 1, F767_4178(RTCW(Result), (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L)));
	RTHOOK(179);
	(nstcall = 1, F767_4178(RTCW(Result), (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L)));
	RTHOOK(180);
	(nstcall = 1, F767_4178(RTCW(Result), (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L)));
	RTHOOK(181);
	(nstcall = 1, F767_4178(RTCW(Result), (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L)));
	RTHOOK(182);
	(nstcall = 1, F767_4178(RTCW(Result), (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L)));
	RTHOOK(183);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 2U)));
	RTHOOK(184);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 16U)));
	RTHOOK(185);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 16U)));
	RTHOOK(186);
	(nstcall = 1, F767_4178(RTCW(Result), (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L)));
	RTHOOK(187);
	(nstcall = 1, F767_4178(RTCW(Result), (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L)));
	RTHOOK(188);
	(nstcall = 1, F767_4178(RTCW(Result), (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L)));
	RTHOOK(189);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 16U)));
	RTHOOK(190);
	(nstcall = 1, F767_4178(RTCW(Result), (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L)));
	RTHOOK(191);
	(nstcall = 1, F767_4178(RTCW(Result), (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L)));
	RTHOOK(192);
	(nstcall = 1, F767_4178(RTCW(Result), (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L)));
	RTHOOK(193);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 16U)));
	RTHOOK(194);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 1U)));
	RTHOOK(195);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 1U)));
	RTHOOK(196);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 1U)));
	RTHOOK(197);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 1U)));
	RTHOOK(198);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 1U)));
	RTHOOK(199);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 1U)));
	RTHOOK(200);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 1U)));
	RTHOOK(201);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 1U)));
	RTHOOK(202);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 1U)));
	RTHOOK(203);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 1U)));
	RTHOOK(204);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 1U)));
	RTHOOK(205);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 1U)));
	RTHOOK(206);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 1U)));
	RTHOOK(207);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 1U)));
	RTHOOK(208);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 1U)));
	RTHOOK(209);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 1U)));
	RTHOOK(210);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 1U)));
	RTHOOK(211);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 1U)));
	RTHOOK(212);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 1U)));
	RTHOOK(213);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 1U)));
	RTHOOK(214);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 1U)));
	RTHOOK(215);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 1U)));
	RTHOOK(216);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 1U)));
	RTHOOK(217);
	(nstcall = 1, F767_4178(RTCW(Result), (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L)));
	RTHOOK(218);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 1U)));
	RTHOOK(219);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 1U)));
	RTHOOK(220);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 1U)));
	RTHOOK(221);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 1U)));
	RTHOOK(222);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 1U)));
	RTHOOK(223);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 1U)));
	RTHOOK(224);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 1U)));
	RTHOOK(225);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 2U)));
	RTHOOK(226);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 2U)));
	RTHOOK(227);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 2U)));
	RTHOOK(228);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 2U)));
	RTHOOK(229);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 2U)));
	RTHOOK(230);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 2U)));
	RTHOOK(231);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 2U)));
	RTHOOK(232);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 2U)));
	RTHOOK(233);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 2U)));
	RTHOOK(234);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 2U)));
	RTHOOK(235);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 2U)));
	RTHOOK(236);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 2U)));
	RTHOOK(237);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 2U)));
	RTHOOK(238);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 2U)));
	RTHOOK(239);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 2U)));
	RTHOOK(240);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 2U)));
	RTHOOK(241);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 2U)));
	RTHOOK(242);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 2U)));
	RTHOOK(243);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 2U)));
	RTHOOK(244);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 2U)));
	RTHOOK(245);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 2U)));
	RTHOOK(246);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 2U)));
	RTHOOK(247);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 2U)));
	RTHOOK(248);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 2U)));
	RTHOOK(249);
	(nstcall = 1, F767_4178(RTCW(Result), (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L)));
	RTHOOK(250);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 2U)));
	RTHOOK(251);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 2U)));
	RTHOOK(252);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 2U)));
	RTHOOK(253);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 2U)));
	RTHOOK(254);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 2U)));
	RTHOOK(255);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 2U)));
	RTHOOK(256);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 2U)));
	RTHOOK(257);
	(nstcall = 1, F767_4178(RTCW(Result), ((EIF_NATURAL_8) 2U)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(258);
		RTCT("internal_character_types_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(259);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F918_5716 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(94,F918_5716_body,(Current));
}

/* {CHARACTER_8_REF}.lower_value */
static EIF_REFERENCE F918_5717_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(93)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("lower_value", 917, Current, 0, 0, 12603);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(RTMS_EX_H("\000\001\002\003\004\005\006\007\010\011\012\013\014\015\016\017\020\021\022\023\024\025\026\027\030\031\032\033\034\035\036\037 !\"#$%&\'()*+,-./0123456789:;<=>\?@abcdefghijklmnopqrstuvwxyz[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~\200\201\202\203\204\205\206\207\210\211\212\213\214\215\216\217\220\221\222\223\224\225\226\227\230\231\232\233\234\235\236\237\240\241\242\243\244\245\246\247\250\251\252\253\254\255\256\257\260\261\262\263\264\265\266\267\270\271\272\273\274\275\276\277\340\341\342\343\344\345\346\347\350\351\352\353\354\355\356\357\360\361\362\363\364\365\366\327\370\371\372\373\374\375\376\337\340\341\342\343\344\345\346\347\350\351\352\353\354\355\356\357\360\361\362\363\364\365\366\367\370\371\372\373\374\375\376\377",256,531798015));
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

EIF_REFERENCE F918_5717 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(93,F918_5717_body,(Current));
}

/* {CHARACTER_8_REF}.upper_value */
static EIF_REFERENCE F918_5718_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(92)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("upper_value", 917, Current, 0, 0, 12604);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(RTMS_EX_H("\000\001\002\003\004\005\006\007\010\011\012\013\014\015\016\017\020\021\022\023\024\025\026\027\030\031\032\033\034\035\036\037 !\"#$%&\'()*+,-./0123456789:;<=>\?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`ABCDEFGHIJKLMNOPQRSTUVWXYZ{|}~\200\201\202\203\204\205\206\207\210\211\212\213\214\215\216\217\220\221\222\223\224\225\226\227\230\231\232\233\234\235\236\237\240\241\242\243\244\245\246\247\250\251\252\253\254\255\256\257\260\261\262\263\264\265\266\267\270\271\272\273\274\275\276\277\300\301\302\303\304\305\306\307\310\311\312\313\314\315\316\317\320\321\322\323\324\325\326\327\330\331\332\333\334\335\336\337\300\301\302\303\304\305\306\307\310\311\312\313\314\315\316\317\320\321\322\323\324\325\326\367\330\331\332\333\334\335\336\377",256,1143811327));
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

EIF_REFERENCE F918_5718 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(92,F918_5718_body,(Current));
}

void EIF_Minit250 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
