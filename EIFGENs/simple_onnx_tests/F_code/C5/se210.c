/*
 * Code for class SED_RECOVERABLE_DESERIALIZER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "se210.h"
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

/* {SED_RECOVERABLE_DESERIALIZER}.make */
void F824_4312 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("make", 823, Current, 0, 1, 8666);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_deserializer_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_deserializer_ready", EX_PRE);
		tb1 = (nstcall = 1, F181_2073(RTCW(arg1)));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	(nstcall = 0, F158_1625(Current, arg1));
	RTHOOK(4);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,844,0xFF01,12,892,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(typres0.id);
	}
	(nstcall = -1, F845_4461(RTCW(tr1), ((EIF_INTEGER_32) 0L)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_10_) = (EIF_REFERENCE) tr1;
	RTHOOK(5);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,824,0xFF01,0xFFF9,2,886,0xFF01,0,0xFF01,849,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(typres0.id);
	}
	(nstcall = -1, F825_4344(RTCW(tr1), ((EIF_INTEGER_32) 0L)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_11_) = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("deserializer_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) == arg1)) {
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

/* {SED_RECOVERABLE_DESERIALIZER}.set_class_type_translator */
void F824_4313 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTEAA("set_class_type_translator", 823, Current, 0, 1, 8667);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_8_) = (EIF_REFERENCE) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("class_type_translator_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_8_) == arg1)) {
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

/* {SED_RECOVERABLE_DESERIALIZER}.set_attribute_name_translator */
void F824_4314 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTEAA("set_attribute_name_translator", 823, Current, 0, 1, 8668);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_9_) = (EIF_REFERENCE) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("attribute_name_translator_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_9_) == arg1)) {
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

/* {SED_RECOVERABLE_DESERIALIZER}.allow_conforming_mismatches */
void F824_4315 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("allow_conforming_mismatches", 823, Current, 0, 0, 8669);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_12_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("is_conforming_mismatch_allowed_set", EX_POST);
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_12_1_)) {
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

/* {SED_RECOVERABLE_DESERIALIZER}.disallow_conforming_mismatches */
void F824_4316 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("disallow_conforming_mismatches", 823, Current, 0, 0, 8670);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_12_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("is_conforming_mismatch_allowed_set", EX_POST);
		if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_12_1_)) {
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

/* {SED_RECOVERABLE_DESERIALIZER}.allow_attribute_removal */
void F824_4317 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("allow_attribute_removal", 823, Current, 0, 0, 8671);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_12_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("is_attribute_removal_allowed_set", EX_POST);
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_12_2_)) {
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

/* {SED_RECOVERABLE_DESERIALIZER}.disallow_attribute_removal */
void F824_4318 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("disallow_attribute_removal", 823, Current, 0, 0, 8672);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_12_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("is_attribute_removal_allowed_set", EX_POST);
		if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_12_2_)) {
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

/* {SED_RECOVERABLE_DESERIALIZER}.stop_on_data_retrieval_error */
void F824_4319 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("stop_on_data_retrieval_error", 823, Current, 0, 0, 8673);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_12_3_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("is_stopping_on_data_retrieval_error_set", EX_POST);
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_12_3_)) {
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

/* {SED_RECOVERABLE_DESERIALIZER}.continue_on_data_retrieval_error */
void F824_4320 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("continue_on_data_retrieval_error", 823, Current, 0, 0, 8674);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_12_3_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("is_stopping_on_data_retrieval_error_set", EX_POST);
		if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_12_3_)) {
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

/* {SED_RECOVERABLE_DESERIALIZER}.set_is_checking_data_consistency */
void F824_4321 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_is_checking_data_consistency", 823, Current, 0, 1, 8675);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_12_4_) = (EIF_BOOLEAN) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("is_checking_data_consistency_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current+ _CHROFF_12_4_) == arg1)) {
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

/* {SED_RECOVERABLE_DESERIALIZER}.attributes_mapping */
EIF_REFERENCE F824_4322 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_7_);
}


/* {SED_RECOVERABLE_DESERIALIZER}.new_attribute_offset */
EIF_INTEGER_32 F824_4323 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLIU(4);
	
	RTEAA("new_attribute_offset", 823, Current, 2, 2, 8677);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_new_type_id_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_old_offset_positive", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tb1 = '\0';
	tb2 = '\0';
	tb3 = '\0';
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_7_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tb4 = (nstcall = 1, F760_4175(loc1, arg1));
		tb3 = tb4;
	}
	if (tb3) {
		tr1 = (nstcall = 1, F760_4161(loc1, arg1));
		loc2 = tr1;
		tb2 = EIF_TEST(loc2);
	}
	if (tb2) {
		tb2 = (nstcall = 1, F761_4175(loc2, arg2));
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(4);
		ti4_1 = (nstcall = 1, F761_4161(loc2, arg2));
		Result = (EIF_INTEGER_32) ti4_1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("new_attribute_offset_non_negative", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
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

/* {SED_RECOVERABLE_DESERIALIZER}.class_type_translator */
EIF_REFERENCE F824_4324 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_8_);
}


/* {SED_RECOVERABLE_DESERIALIZER}.attribute_name_translator */
EIF_REFERENCE F824_4325 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_9_);
}


/* {SED_RECOVERABLE_DESERIALIZER}.mismatches */
EIF_REFERENCE F824_4326 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_10_);
}


/* {SED_RECOVERABLE_DESERIALIZER}.mismatched_object */
EIF_REFERENCE F824_4327 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_11_);
}


/* {SED_RECOVERABLE_DESERIALIZER}.is_conforming_mismatch_allowed */
EIF_BOOLEAN F824_4328 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_12_1_);
}


/* {SED_RECOVERABLE_DESERIALIZER}.is_attribute_removal_allowed */
EIF_BOOLEAN F824_4329 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_12_2_);
}


/* {SED_RECOVERABLE_DESERIALIZER}.is_stopping_on_data_retrieval_error */
EIF_BOOLEAN F824_4330 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_12_3_);
}


/* {SED_RECOVERABLE_DESERIALIZER}.is_checking_data_consistency */
EIF_BOOLEAN F824_4331 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_12_4_);
}


/* {SED_RECOVERABLE_DESERIALIZER}.is_transient_retrieval_required */
EIF_BOOLEAN F824_4332 (EIF_REFERENCE Current)
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
	
	RTEAA("is_transient_retrieval_required", 823, Current, 0, 0, 8654);
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

/* {SED_RECOVERABLE_DESERIALIZER}.read_header */
void F824_4333 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
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
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(12);
	RTLR(0,loc4);
	RTLR(1,Current);
	RTLR(2,loc3);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,loc5);
	RTLR(6,loc8);
	RTLR(7,loc9);
	RTLR(8,loc12);
	RTLR(9,loc10);
	RTLR(10,loc11);
	RTLR(11,loc13);
	RTLIU(12);
	
	RTEAA("read_header", 823, Current, 13, 1, 8655);
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
	if ((EIF_BOOLEAN) (*(EIF_NATURAL_32 *)(Current+ _LNGOFF_12_5_0_0_) < ((EIF_NATURAL_32) 3U))) {
		RTHOOK(5);
		tr1 = RTOUCR(155,(nstcall = 0, F158_1639), (Current));
		tr2 = (nstcall = 1, F22_298(RTCW(tr1), *(EIF_NATURAL_32 *)(Current+ _LNGOFF_12_5_0_0_), ((EIF_NATURAL_32) 3U)));
		(nstcall = 0, F158_1645(Current, tr2));
	}
	RTHOOK(6);
	tu4_1 = (nstcall = 1, F63_872(RTCW(loc3)));
	ti4_1 = (EIF_INTEGER_32) tu4_1;
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(7);
	{
		static EIF_TYPE_INDEX typarr0[] = {760,892,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		loc5 = RTLNSP2(typres0.id,0,loc2,sizeof(EIF_INTEGER_32), EIF_TRUE);
	}
	(nstcall = -1, F761_4159(RTCW(loc5), ((EIF_INTEGER_32) 0L), loc2));
	RTHOOK(8);
	{
		static EIF_TYPE_INDEX typarr0[] = {759,760,892,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSP2(typres0.id,EO_REF,loc2,sizeof(EIF_REFERENCE), EIF_FALSE);
	}
	(nstcall = -1, F760_4159(RTCW(tr1), NULL, loc2));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_7_) = (EIF_REFERENCE) tr1;
	RTHOOK(9);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	for (;;) {
		RTHOOK(10);
		if ((EIF_BOOLEAN)(loc1 == loc2)) break;
		RTHOOK(11);
		tu4_1 = (nstcall = 1, F63_872(RTCW(loc3)));
		ti4_1 = (EIF_INTEGER_32) tu4_1;
		loc6 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(12);
		tr1 = (nstcall = 1, F63_855(RTCW(loc3)));
		loc8 = (EIF_REFERENCE) tr1;
		RTHOOK(13);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_8_);
		loc12 = tr1;
		if (EIF_TEST(loc12)) {
			RTHOOK(14);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,886,0xFF01,969,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLNTS(typres0.id, 2, 0);
			}
			((EIF_TYPED_VALUE *)tr1+1)->it_r = loc8;
			RTAR(tr1,loc8);
			tr1 = (nstcall = 1, F962_5921(loc12, tr1));
		} else {
			RTHOOK(15);
			tr1 = loc8;
		}
		loc9 = (EIF_REFERENCE) tr1;
		RTHOOK(16);
		ti4_1 = (nstcall = 1, F192_2323(RTCW(loc4), loc9));
		loc7 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(17);
		if ((EIF_BOOLEAN) (loc7 >= ((EIF_INTEGER_32) 0L))) {
			RTHOOK(18);
			tb1 = (nstcall = 1, F761_4175(RTCW(loc5), loc6));
			if ((EIF_BOOLEAN) !tb1) {
				RTHOOK(19);
				ti4_1 = (nstcall = 1, F761_4171(loc5));
				ti4_2 = eif_max_int32 ((EIF_INTEGER_32) (loc6 + ((EIF_INTEGER_32) 1L)),(EIF_INTEGER_32) (ti4_1 * ((EIF_INTEGER_32) 2L)));
				tr1 = (nstcall = 1, F761_4194(RTCW(loc5), ((EIF_INTEGER_32) 0L), ti4_2));
				loc5 = (EIF_REFERENCE) tr1;
			}
			RTHOOK(20);
			(nstcall = 1, F761_4176(RTCW(loc5), loc7, loc6));
		} else {
			RTHOOK(21);
			tr1 = RTOUCR(155,(nstcall = 0, F158_1639), (Current));
			tr2 = (nstcall = 1, F22_300(RTCW(tr1), loc8, loc9));
			(nstcall = 0, F158_1644(Current, tr2));
		}
		RTHOOK(22);
		tb1 = (nstcall = 1, F63_859(RTCW(loc3)));
		if (tb1) {
			RTHOOK(23);
			tr1 = (nstcall = 1, F63_856(RTCW(loc3)));
			loc10 = (EIF_REFERENCE) tr1;
		} else {
			RTHOOK(24);
			loc10 = (EIF_REFERENCE) NULL;
		}
		RTHOOK(25);
		if ((EIF_BOOLEAN)(loc7 != ((EIF_INTEGER_32) -1L))) {
			RTHOOK(26);
			tr1 = (nstcall = 1, F192_2343(RTCW(loc4), loc7));
			loc11 = (EIF_REFERENCE) tr1;
			RTHOOK(27);
			if (!RTEQ(loc10, loc11)) {
				RTHOOK(28);
				tr1 = (nstcall = 0, F824_4337(Current, loc7));
				(nstcall = 1, F13_57(RTCW(tr1), loc10, loc11));
			}
		}
		RTHOOK(29);
		loc1++;
	}
	RTHOOK(30);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(31);
	tu4_1 = (nstcall = 1, F63_872(RTCW(loc3)));
	ti4_1 = (EIF_INTEGER_32) tu4_1;
	loc2 = (EIF_INTEGER_32) ti4_1;
	for (;;) {
		RTHOOK(32);
		if ((EIF_BOOLEAN)(loc1 == loc2)) break;
		RTHOOK(33);
		tu4_1 = (nstcall = 1, F63_872(RTCW(loc3)));
		ti4_1 = (EIF_INTEGER_32) tu4_1;
		loc6 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(34);
		tr1 = (nstcall = 1, F63_855(RTCW(loc3)));
		loc8 = (EIF_REFERENCE) tr1;
		RTHOOK(35);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_8_);
		loc13 = tr1;
		if (EIF_TEST(loc13)) {
			RTHOOK(36);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,1,886,0xFF01,969,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLNTS(typres0.id, 2, 0);
			}
			((EIF_TYPED_VALUE *)tr1+1)->it_r = loc8;
			RTAR(tr1,loc8);
			tr1 = (nstcall = 1, F962_5921(loc13, tr1));
		} else {
			RTHOOK(37);
			tr1 = loc8;
		}
		loc9 = (EIF_REFERENCE) tr1;
		RTHOOK(38);
		ti4_1 = (nstcall = 1, F192_2323(RTCW(loc4), loc9));
		loc7 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(39);
		if ((EIF_BOOLEAN) (loc7 >= ((EIF_INTEGER_32) 0L))) {
			RTHOOK(40);
			tb1 = (nstcall = 1, F761_4175(RTCW(loc5), loc6));
			if ((EIF_BOOLEAN) !tb1) {
				RTHOOK(41);
				ti4_1 = (nstcall = 1, F761_4171(loc5));
				ti4_2 = eif_max_int32 ((EIF_INTEGER_32) (loc6 + ((EIF_INTEGER_32) 1L)),(EIF_INTEGER_32) (ti4_1 * ((EIF_INTEGER_32) 2L)));
				tr1 = (nstcall = 1, F761_4194(RTCW(loc5), ((EIF_INTEGER_32) 0L), ti4_2));
				loc5 = (EIF_REFERENCE) tr1;
			}
			RTHOOK(42);
			(nstcall = 1, F761_4176(RTCW(loc5), loc7, loc6));
		} else {
			RTHOOK(43);
			tr1 = RTOUCR(155,(nstcall = 0, F158_1639), (Current));
			tr2 = (nstcall = 1, F22_300(RTCW(tr1), loc8, loc9));
			(nstcall = 0, F158_1644(Current, tr2));
		}
		RTHOOK(44);
		loc1++;
	}
	RTHOOK(45);
	RTAR(Current, loc5);
	*(EIF_REFERENCE *)(Current + _REFACS_6_) = (EIF_REFERENCE) loc5;
	RTHOOK(46);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(47);
	tu4_1 = (nstcall = 1, F63_872(RTCW(loc3)));
	ti4_1 = (EIF_INTEGER_32) tu4_1;
	loc2 = (EIF_INTEGER_32) ti4_1;
	for (;;) {
		RTHOOK(48);
		if ((EIF_BOOLEAN)(loc1 == loc2)) break;
		RTHOOK(49);
		tu4_1 = (nstcall = 1, F63_872(RTCW(loc3)));
		ti4_1 = (EIF_INTEGER_32) tu4_1;
		loc6 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(50);
		tb1 = (nstcall = 1, F761_4175(RTCW(loc5), loc6));
		if (tb1) {
			RTHOOK(51);
			ti4_1 = (nstcall = 1, F761_4161(RTCW(loc5), loc6));
			(nstcall = 0, F824_4335(Current, ti4_1));
		} else {
			RTHOOK(52);
			tr1 = RTOUCR(155,(nstcall = 0, F158_1639), (Current));
			tr2 = RTMS_EX_H("Cannot read attributes data",27,474705505);
			tr2 = (nstcall = 1, F22_292(RTCW(tr1), tr2));
			(nstcall = 0, F158_1645(Current, tr2));
		}
		RTHOOK(53);
		loc1++;
	}
	RTHOOK(54);
	(nstcall = 0, F158_1650(Current, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(55);
	RTLE;
	RTEE;
}

/* {SED_RECOVERABLE_DESERIALIZER}.read_persistent_field_count */
EIF_INTEGER_32 F824_4334 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,loc2);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,loc3);
	RTLR(5,tr2);
	RTLIU(6);
	
	RTEAA("read_persistent_field_count", 823, Current, 3, 1, 8656);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_0_0_0_);
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(2);
	tb1 = '\0';
	tb2 = '\0';
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_7_);
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		tb3 = (nstcall = 1, F760_4175(loc2, loc1));
		tb2 = tb3;
	}
	if (tb2) {
		tr1 = (nstcall = 1, F760_4161(loc2, loc1));
		loc3 = tr1;
		tb1 = EIF_TEST(loc3);
	}
	if (tb1) {
		RTHOOK(3);
		ti4_1 = (nstcall = 1, F761_4171(loc3));
		Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L));
	} else {
		RTHOOK(4);
		tr1 = RTOUCR(155,(nstcall = 0, F158_1639), (Current));
		tr2 = RTMS_EX_H("Cannot retrieve stored count",28,283762292);
		tr2 = (nstcall = 1, F22_292(RTCW(tr1), tr2));
		(nstcall = 0, F158_1645(Current, tr2));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {SED_RECOVERABLE_DESERIALIZER}.read_attributes */
void F824_4335 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc11 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc12 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc13 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc14 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc15 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc16 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc17 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc18 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(13);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLR(3,tr1);
	RTLR(4,loc3);
	RTLR(5,loc4);
	RTLR(6,loc5);
	RTLR(7,loc6);
	RTLR(8,loc16);
	RTLR(9,loc17);
	RTLR(10,tr2);
	RTLR(11,loc18);
	RTLR(12,loc14);
	RTLIU(13);
	
	RTEAA("read_attributes", 823, Current, 18, 1, 8657);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = *(EIF_REFERENCE *)(Current);
	RTHOOK(2);
	loc2 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	RTHOOK(3);
	tu4_1 = (nstcall = 1, F63_872(RTCW(loc1)));
	ti4_1 = (EIF_INTEGER_32) tu4_1;
	loc12 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	ti4_1 = (nstcall = 1, F192_2350(RTCW(loc2), arg1));
	loc13 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(5);
	if ((EIF_BOOLEAN)(loc12 != loc13)) {
		RTHOOK(6);
		tr1 = (nstcall = 0, F824_4337(Current, arg1));
		(nstcall = 1, F13_56(RTCW(tr1), loc12, loc13));
	}
	RTHOOK(7);
	loc9 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(8);
	loc3 = (nstcall = 0, F824_4336(Current, arg1));
	RTHOOK(9);
	loc10 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc12 + ((EIF_INTEGER_32) 1L));
	RTHOOK(10);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,760,892,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		loc4 = RTLNSP2(typres0.id,0,loc10,sizeof(EIF_INTEGER_32), EIF_TRUE);
		RT_SPECIAL_COUNT(loc4) = 0;
	}
	RTHOOK(11);
	(nstcall = 1, F761_4178(RTCW(loc4), ((EIF_INTEGER_32) 0L)));
	for (;;) {
		RTHOOK(12);
		if ((EIF_BOOLEAN)(loc9 == loc10)) break;
		RTHOOK(13);
		tu4_1 = (nstcall = 1, F63_872(RTCW(loc1)));
		ti4_1 = (EIF_INTEGER_32) tu4_1;
		loc7 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(14);
		loc8 = (nstcall = 0, F158_1642(Current, loc7));
		RTHOOK(15);
		tr1 = (nstcall = 1, F63_855(RTCW(loc1)));
		loc5 = (EIF_REFERENCE) tr1;
		RTHOOK(16);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_9_);
		loc16 = tr1;
		if (EIF_TEST(loc16)) {
			RTHOOK(17);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,886,0xFF01,969,892,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLNTS(typres0.id, 3, 0);
			}
			((EIF_TYPED_VALUE *)tr1+1)->it_r = loc5;
			RTAR(tr1,loc5);
			((EIF_TYPED_VALUE *)tr1+2)->it_i4 = arg1;
			tr1 = (nstcall = 1, F962_5921(loc16, tr1));
		} else {
			RTHOOK(18);
			tr1 = loc5;
		}
		loc6 = (EIF_REFERENCE) tr1;
		RTHOOK(19);
		if ((EIF_BOOLEAN) (loc8 >= ((EIF_INTEGER_32) 0L))) {
			RTHOOK(20);
			tr1 = (nstcall = 1, F844_4467(RTCW(loc3), loc6));
			loc17 = tr1;
			if (EIF_TEST(loc17)) {
				RTHOOK(21);
				ti4_1 = eif_integer_32_item(loc17,2);
				loc15 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(22);
				if ((EIF_BOOLEAN)(loc15 != loc8)) {
					RTHOOK(23);
					if (*(EIF_BOOLEAN *)(Current+ _CHROFF_12_1_)) {
						RTHOOK(24);
						tb1 = (nstcall = 1, F192_2321(RTCW(loc2), loc8, loc15));
						if ((EIF_BOOLEAN) !tb1) {
							RTHOOK(25);
							tb1 = '\0';
							tb2 = (nstcall = 1, F192_2332(RTCW(loc2), loc15));
							if (tb2) {
								ti4_1 = (nstcall = 1, F192_2340(RTCW(loc2), loc15));
								tb2 = (nstcall = 1, F192_2321(RTCW(loc2), loc8, ti4_1));
								tb1 = tb2;
							}
							if (tb1) {
								RTHOOK(26);
								tr1 = (nstcall = 0, F824_4337(Current, arg1));
								ti4_1 = eif_integer_32_item(loc17,1);
								(nstcall = 1, F13_59(RTCW(tr1), loc8, loc15, loc5, loc6, loc9, ti4_1));
							} else {
								RTHOOK(27);
								tr1 = (nstcall = 0, F824_4337(Current, arg1));
								ti4_1 = eif_integer_32_item(loc17,1);
								(nstcall = 1, F13_58(RTCW(tr1), loc8, loc15, loc5, loc6, loc9, ti4_1));
							}
						}
					} else {
						RTHOOK(28);
						tb1 = (nstcall = 1, F192_2332(RTCW(loc2), loc15));
						if (tb1) {
							RTHOOK(29);
							ti4_1 = (nstcall = 1, F192_2340(RTCW(loc2), loc15));
							if ((EIF_BOOLEAN)(ti4_1 == loc8)) {
								RTHOOK(30);
								tr1 = (nstcall = 0, F824_4337(Current, arg1));
								ti4_1 = eif_integer_32_item(loc17,1);
								(nstcall = 1, F13_59(RTCW(tr1), loc8, loc15, loc5, loc6, loc9, ti4_1));
							} else {
								RTHOOK(31);
								tr1 = (nstcall = 0, F824_4337(Current, arg1));
								ti4_1 = eif_integer_32_item(loc17,1);
								(nstcall = 1, F13_58(RTCW(tr1), loc8, loc15, loc5, loc6, loc9, ti4_1));
							}
						} else {
							RTHOOK(32);
							tb1 = '\0';
							tb2 = (nstcall = 1, F192_2332(RTCW(loc2), loc8));
							if (tb2) {
								ti4_1 = (nstcall = 1, F192_2340(RTCW(loc2), loc8));
								tb1 = (EIF_BOOLEAN)(ti4_1 == loc15);
							}
							if (tb1) {
							} else {
								RTHOOK(33);
								tr1 = (nstcall = 0, F824_4337(Current, arg1));
								ti4_1 = eif_integer_32_item(loc17,1);
								(nstcall = 1, F13_58(RTCW(tr1), loc8, loc15, loc5, loc6, loc9, ti4_1));
							}
						}
					}
				}
				RTHOOK(34);
				ti4_1 = eif_integer_32_item(loc17,1);
				(nstcall = 1, F761_4178(RTCW(loc4), ti4_1));
			} else {
				RTHOOK(35);
				loc11++;
				RTHOOK(36);
				if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_12_2_)) {
					RTHOOK(37);
					tr1 = (nstcall = 0, F824_4337(Current, arg1));
					(nstcall = 1, F13_60(RTCW(tr1), loc8, loc5, loc6, loc9));
				}
				RTHOOK(38);
				(nstcall = 1, F761_4178(RTCW(loc4), ((EIF_INTEGER_32) -1L)));
			}
		} else {
			RTHOOK(39);
			tr1 = RTOUCR(155,(nstcall = 0, F158_1639), (Current));
			tr2 = (nstcall = 1, F22_302(RTCW(tr1), arg1, loc6));
			(nstcall = 0, F158_1644(Current, tr2));
		}
		RTHOOK(40);
		loc9++;
	}
	RTHOOK(41);
	if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc12 - loc11) < loc13)) {
		RTHOOK(42);
		tr1 = (nstcall = 0, F824_4337(Current, arg1));
		(nstcall = 1, F13_55(RTCW(tr1), (EIF_INTEGER_32) (loc13 - (EIF_INTEGER_32) (loc12 - loc11))));
	}
	RTHOOK(43);
	RTCT0("attached attributes_mapping as l_a", EX_CHECK);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_7_);
	loc18 = tr1;
	if (EIF_TEST(loc18)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTHOOK(44);
	tb1 = (nstcall = 1, F760_4175(loc18, arg1));
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(45);
		ti4_1 = (nstcall = 1, F760_4171(loc18));
		ti4_2 = eif_max_int32 ((EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L)),(EIF_INTEGER_32) (ti4_1 * ((EIF_INTEGER_32) 2L)));
		tr1 = (nstcall = 1, F760_4194(loc18, NULL, ti4_2));
		loc14 = (EIF_REFERENCE) tr1;
		RTHOOK(46);
		RTAR(Current, loc14);
		*(EIF_REFERENCE *)(Current + _REFACS_7_) = (EIF_REFERENCE) loc14;
	} else {
		RTHOOK(47);
		loc14 = (EIF_REFERENCE) loc18;
	}
	RTHOOK(48);
	(nstcall = 1, F760_4176(RTCW(loc14), loc4, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(49);
	RTLE;
	RTEE;
}

/* {SED_RECOVERABLE_DESERIALIZER}.attributes_map */
EIF_REFERENCE F824_4336 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTEAA("attributes_map", 823, Current, 3, 1, 8658);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_dtype_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	RTHOOK(3);
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(4);
	ti4_1 = (nstcall = 1, F192_2349(RTCW(loc1), arg1));
	loc3 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(5);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,843,0xFF01,0xFFF9,2,886,892,892,0xFF01,969,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		Result = RTLNS(typres0.id, 843, _OBJSIZ_7_3_0_7_0_0_0_0_);
	}
	(nstcall = -1, F844_4461(RTCW(Result), loc3));
	RTHOOK(6);
	loc3++;
	for (;;) {
		RTHOOK(7);
		if ((EIF_BOOLEAN)(loc2 == loc3)) break;
		RTHOOK(8);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,886,892,892,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr1 = RTLNTS(typres0.id, 3, 1);
		}
		((EIF_TYPED_VALUE *)tr1+1)->it_i4 = loc2;
		ti4_1 = (nstcall = 1, F192_2347(RTCW(loc1), loc2, arg1));
		((EIF_TYPED_VALUE *)tr1+2)->it_i4 = ti4_1;
		tr2 = (nstcall = 1, F192_2344(RTCW(loc1), loc2, arg1));
		(nstcall = 1, F844_4507(RTCW(Result), tr1, tr2));
		RTHOOK(9);
		loc2++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("attributes_map_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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

/* {SED_RECOVERABLE_DESERIALIZER}.associated_mismatch */
EIF_REFERENCE F824_4337 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,Result);
	RTLIU(5);
	
	RTEAA("associated_mismatch", 823, Current, 1, 1, 8659);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_dtype_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_10_);
	tr2 = (nstcall = 1, F845_4467(RTCW(tr1), arg1));
	loc1 = tr2;
	if (EIF_TEST(loc1)) {
		
		RTHOOK(3);
		Result = (EIF_REFERENCE) loc1;
	} else {
		RTHOOK(4);
		Result = RTLNS(eif_new_type(12, 0x01).id, 12, _OBJSIZ_4_3_0_3_0_0_0_0_);
		(nstcall = -1, F13_54(RTCW(Result), arg1));
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_10_);
		(nstcall = 1, F845_4507(RTCW(tr1), Result, arg1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
	return Result;
}

/* {SED_RECOVERABLE_DESERIALIZER}.has_mismatch */
EIF_BOOLEAN F824_4338 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("has_mismatch", 823, Current, 0, 1, 8660);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_dtype_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_10_);
	tb1 = (nstcall = 1, F845_4469(RTCW(tr1), arg1));
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {SED_RECOVERABLE_DESERIALIZER}.decode_objects */
void F824_4339 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,tr4);
	RTLR(5,loc3);
	RTLIU(6);
	
	RTEAA("decode_objects", 823, Current, 3, 1, 8661);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_count_positive", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 > (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F158_1655(Current, arg1));
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_11_);
	(nstcall = 1, F825_4375(RTCW(tr1)));
	for (;;) {
		RTHOOK(4);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_11_);
		tb1 = (nstcall = 1, F724_4003(RTCW(tr1)));
		if (tb1) break;
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_11_);
		tr2 = (nstcall = 1, F825_4349(RTCW(tr1)));
		tr1 = eif_boxed_item(tr2,1);
		tr2 = RTCCL(tr1);
		tr3 = *(EIF_REFERENCE *)(Current + _REFACS_11_);
		tr4 = (nstcall = 1, F825_4349(RTCW(tr3)));
		tr3 = eif_boxed_item(tr4,2);
		(nstcall = 0, F824_4340(Current, tr2, tr3));
		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_11_);
		(nstcall = 1, F825_4377(RTCW(tr1)));
	}
	RTHOOK(7);
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_12_4_)) {
		RTHOOK(8);
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		RTHOOK(9);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3213[Dtype(RTCW(tr1))-677])(tr1));
		loc2 = (EIF_INTEGER_32) ti4_1;
		for (;;) {
			RTHOOK(10);
			if ((EIF_BOOLEAN) (loc1 > loc2)) break;
			RTHOOK(11);
			tb2 = '\0';
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
			tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R3211[Dtype(RTCW(tr1))-677])(tr1, loc1));
			loc3 = RTCCL(tr2);
			if (EIF_TEST(loc3)) {
				tr1 = RTCCL(loc3);
				tb2 = (EIF_BOOLEAN) !(nstcall = 0, F824_4341(Current, tr1, (EIF_BOOLEAN) 1));
			}
			if (tb2) {
				RTHOOK(12);
				tr1 = RTOUCR(155,(nstcall = 0, F158_1639), (Current));
				tr2 = RTCCL(loc3);
				tr2 = (nstcall = 1, F22_296(RTCW(tr1), tr2));
				(nstcall = 0, F158_1644(Current, tr2));
			}
			RTHOOK(13);
			loc1++;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTLE;
	RTEE;
}

/* {SED_RECOVERABLE_DESERIALIZER}.safe_mismatch_correction */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F824_4340 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	RTED;
	EIF_BOOLEAN EIF_VOLATILE loc1 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN EIF_VOLATILE loc2 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN EIF_VOLATILE loc3 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE EIF_VOLATILE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	RTS_SDX;
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr2 = NULL;
	EIF_BOOLEAN  EIF_VOLATILE tb1;
	RTSN;
	RTDA;
	RTLD;
	RTXD;
	
	RTLI(7);
	RTLR(0,loc4);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,arg2);
	RTLR(4,tr1);
	RTLR(5,tr2);
	RTLR(6,saved_except);
	RTLIU(7);
	RTXSLS;
	
	RTEAA("safe_mismatch_correction", 823, Current, 4, 2, 8662);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTE_T
	RTHOOK(1);
	if ((EIF_BOOLEAN) !loc1) {
		RTHOOK(2);
		loc4 = RTCCL(arg1);
		loc4 = RTRV(eif_new_type(821, 0x01),loc4);
		if (EIF_TEST(loc4)) {
			RTHOOK(3);
			loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			RTHOOK(4);
			loc2 = (nstcall = 0, F45_530(Current, (EIF_BOOLEAN) 0));
			RTHOOK(5);
			tr1 = (nstcall = 1, F1_5(arg1));
			tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3734[Dtype(RTCW(tr1))-855])(tr1));
			tr1 = RTOUCR(156,(nstcall = 0, F850_4582), (Current));
			(nstcall = 1, F844_4507(RTCW(arg2), tr2, tr1));
			RTHOOK(6);
			tr1 = RTOUCR(12,(nstcall = 0, F822_4279), (Current));
			(nstcall = 1, F844_4518(RTCW(tr1), arg2));
			RTHOOK(7);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R3487[Dtype(loc4)-821])(loc4));
			RTHOOK(8);
			tb1 = (nstcall = 0, F45_530(Current, loc2));
			loc2 = (EIF_BOOLEAN) tb1;
			RTHOOK(9);
			tr1 = RTCCL(arg1);
			if ((EIF_BOOLEAN) !(nstcall = 0, F824_4341(Current, tr1, (EIF_BOOLEAN) 0))) {
				RTHOOK(10);
				tr1 = RTOUCR(155,(nstcall = 0, F158_1639), (Current));
				tr2 = RTCCL(arg1);
				tr2 = (nstcall = 1, F22_296(RTCW(tr1), tr2));
				(nstcall = 0, F158_1644(Current, tr2));
			}
		} else {
			RTHOOK(11);
			tr1 = RTOUCR(155,(nstcall = 0, F158_1639), (Current));
			tr2 = RTCCL(arg1);
			tr2 = (nstcall = 1, F22_297(RTCW(tr1), tr2));
			(nstcall = 0, F158_1644(Current, tr2));
		}
	} else {
		RTHOOK(12);
		if (loc3) {
			RTHOOK(13);
			tb1 = (nstcall = 0, F45_530(Current, loc2));
			loc2 = (EIF_BOOLEAN) tb1;
		}
		RTHOOK(14);
		tr1 = RTOUCR(155,(nstcall = 0, F158_1639), (Current));
		tr2 = RTCCL(arg1);
		tr2 = (nstcall = 1, F22_297(RTCW(tr1), tr2));
		(nstcall = 0, F158_1644(Current, tr2));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTE_E
	RTXSC;
	RTS_SRR
	RTHOOK(15);
	loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(16);
	RTER;
	/* NOTREACHED */
	RTE_EE
	RTHOOK(17);
	RTEOK;
	RTLE;
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {SED_RECOVERABLE_DESERIALIZER}.is_object_valid */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
EIF_BOOLEAN F824_4341 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_BOOLEAN arg2)
{
	GTCX
	RTEX;
	RTED;
	EIF_REFERENCE EIF_VOLATILE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 EIF_VOLATILE loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 EIF_VOLATILE loc4 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN EIF_VOLATILE loc5 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	RTS_SDX;
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_INTEGER_32  EIF_VOLATILE ti4_1;
	EIF_BOOLEAN  EIF_VOLATILE tb1;
	EIF_VOLATILE EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	RTXD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLR(3,arg1);
	RTLR(4,tr1);
	RTLR(5,saved_except);
	RTLIU(6);
	RTXSLS;
	
	RTEAA("is_object_valid", 823, Current, 5, 2, 8663);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTE_T
	RTHOOK(1);
	if ((EIF_BOOLEAN) !loc5) {
		RTHOOK(2);
		loc1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
		RTHOOK(3);
		loc2 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		RTHOOK(4);
		tr1 = RTCCL(arg1);
		(nstcall = 1, F196_2477(RTCW(loc1), tr1));
		RTHOOK(5);
		loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		RTHOOK(6);
		ti4_1 = (nstcall = 1, F191_2314(RTCW(loc1)));
		loc4 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(7);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		for (;;) {
			RTHOOK(8);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc3 > loc4) || (EIF_BOOLEAN) !Result)) break;
			RTHOOK(9);
			ti4_1 = (nstcall = 1, F191_2276(RTCW(loc1), loc3));
			if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))) {
				RTHOOK(10);
				Result = '\01';
				ti4_1 = (nstcall = 1, F191_2277(RTCW(loc1), loc3));
				tb1 = (nstcall = 1, F192_2332(RTCW(loc2), ti4_1));
				if (!(EIF_BOOLEAN) !tb1) {
					tr1 = (nstcall = 1, F191_2261(RTCW(loc1), loc3));
					Result = (EIF_BOOLEAN)(tr1 != NULL);
				}
			}
			RTHOOK(11);
			loc3++;
		}
		RTHOOK(12);
		if (arg2) {
			RTHOOK(13);
			(nstcall = 1, F1_31(RTCW(arg1)));
		}
	} else {
		RTHOOK(14);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTE_E
	RTXSC;
	RTS_SRR
	RTHOOK(15);
	loc5 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(16);
	RTER;
	/* NOTREACHED */
	RTE_EE
	RTHOOK(17);
	RTEOK;
	RTLE;
	return Result;
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {SED_RECOVERABLE_DESERIALIZER}.decode_normal_object */
void F824_4342 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc9 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc10 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_64 ti8_1;
	EIF_NATURAL_64 tu8_1;
	EIF_REAL_32 tr4_1;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_CHARACTER_32 tw1;
	EIF_INTEGER_16 ti2_1;
	EIF_NATURAL_16 tu2_1;
	EIF_INTEGER_8 ti1_1;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(10);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc7);
	RTLR(3,loc8);
	RTLR(4,tr1);
	RTLR(5,tr2);
	RTLR(6,loc1);
	RTLR(7,loc11);
	RTLR(8,loc12);
	RTLR(9,tr3);
	RTLIU(10);
	
	RTEAA("decode_normal_object", 823, Current, 12, 1, 8664);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("an_obj_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_0_0_0_);
	loc4 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	if ((EIF_BOOLEAN) !(nstcall = 0, F824_4338(Current, loc4))) {
		RTHOOK(4);
		(nstcall = 0, F158_1657(Current, arg1));
	} else {
		RTHOOK(5);
		loc7 = (nstcall = 0, F824_4337(Current, loc4));
		RTHOOK(6);
		tb1 = *(EIF_BOOLEAN *)(RTCW(loc7)+ _CHROFF_4_0_);
		if (tb1) {
			RTHOOK(7);
			loc8 = RTLNS(eif_new_type(849, 0x01).id, 849, _OBJSIZ_9_3_0_7_0_0_0_0_);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc7)+ _LNGOFF_4_3_0_1_);
			(nstcall = -1, F844_4461(RTCW(loc8), ti4_1));
			RTHOOK(8);
			tr1 = *(EIF_REFERENCE *)(RTCW(loc7));
			tr2 = *(EIF_REFERENCE *)(RTCW(loc7) + _REFACS_1_);
			(nstcall = 1, F850_4584(RTCW(loc8), tr1, tr2));
		}
		RTHOOK(9);
		loc1 = *(EIF_REFERENCE *)(Current);
		RTHOOK(10);
		loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		RTHOOK(11);
		loc3 = (nstcall = 0, F824_4334(Current, arg1));
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
		for (;;) {
			RTHOOK(12);
			if ((EIF_BOOLEAN)(loc2 == loc3)) break;
			RTHOOK(13);
			tr1 = *(EIF_REFERENCE *)(RTCW(loc7) + _REFACS_3_);
			tr2 = (nstcall = 1, F845_4467(RTCW(tr1), loc2));
			loc11 = (EIF_REFERENCE) tr2;
			RTHOOK(14);
			if ((EIF_BOOLEAN)(loc11 != NULL)) {
				RTHOOK(15);
				tb1 = eif_boolean_item(RTCW(loc11),9);
				loc9 = (EIF_BOOLEAN) tb1;
				RTHOOK(16);
				loc10 = '\01';
				tb1 = eif_boolean_item(RTCW(loc11),7);
				if (!tb1) {
					tb1 = '\0';
					if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_12_2_)) {
						tb2 = eif_boolean_item(RTCW(loc11),8);
						tb1 = tb2;
					}
					loc10 = tb1;
				}
				RTHOOK(17);
				if ((EIF_BOOLEAN) !loc10) {
					RTHOOK(18);
					loc11 = (EIF_REFERENCE) NULL;
				} else {
					RTHOOK(19);
					if ((EIF_BOOLEAN)(loc8 == NULL)) {
						RTHOOK(20);
						loc8 = RTLNS(eif_new_type(849, 0x01).id, 849, _OBJSIZ_9_3_0_7_0_0_0_0_);
						ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc7)+ _LNGOFF_4_3_0_1_);
						(nstcall = -1, F844_4461(RTCW(loc8), ti4_1));
					}
				}
			} else {
				RTHOOK(21);
				loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			}
			RTHOOK(22);
			if ((EIF_BOOLEAN)(loc11 == NULL)) {
				RTHOOK(23);
				loc6 = (nstcall = 0, F824_4323(Current, loc4, loc2));
				RTHOOK(24);
				ti4_1 = (nstcall = 1, F191_2276(RTCW(arg1), loc6));
				switch (ti4_1) {
					case 3L:
						RTHOOK(25);
						tb1 = (nstcall = 1, F63_859(RTCW(loc1)));
						(nstcall = 1, F191_2301(RTCW(arg1), loc6, tb1));
						break;
					case 2L:
						RTHOOK(26);
						tc1 = (nstcall = 1, F63_853(RTCW(loc1)));
						(nstcall = 1, F191_2298(RTCW(arg1), loc6, tc1));
						break;
					case 12L:
						RTHOOK(27);
						tw1 = (nstcall = 1, F63_854(RTCW(loc1)));
						(nstcall = 1, F191_2300(RTCW(arg1), loc6, tw1));
						break;
					case 13L:
						RTHOOK(28);
						tu1_1 = (nstcall = 1, F64_898(RTCW(loc1)));
						(nstcall = 1, F191_2302(RTCW(arg1), loc6, tu1_1));
						break;
					case 14L:
						RTHOOK(29);
						tu2_1 = (nstcall = 1, F64_899(RTCW(loc1)));
						(nstcall = 1, F191_2303(RTCW(arg1), loc6, tu2_1));
						break;
					case 15L:
						RTHOOK(30);
						tu4_1 = (nstcall = 1, F64_900(RTCW(loc1)));
						(nstcall = 1, F191_2304(RTCW(arg1), loc6, tu4_1));
						break;
					case 16L:
						RTHOOK(31);
						tu8_1 = (nstcall = 1, F64_901(RTCW(loc1)));
						(nstcall = 1, F191_2305(RTCW(arg1), loc6, tu8_1));
						break;
					case 9L:
						RTHOOK(32);
						ti1_1 = (nstcall = 1, F64_902(RTCW(loc1)));
						(nstcall = 1, F191_2306(RTCW(arg1), loc6, ti1_1));
						break;
					case 10L:
						RTHOOK(33);
						ti2_1 = (nstcall = 1, F64_903(RTCW(loc1)));
						(nstcall = 1, F191_2307(RTCW(arg1), loc6, ti2_1));
						break;
					case 4L:
						RTHOOK(34);
						ti4_1 = (nstcall = 1, F64_904(RTCW(loc1)));
						(nstcall = 1, F191_2309(RTCW(arg1), loc6, ti4_1));
						break;
					case 11L:
						RTHOOK(35);
						ti8_1 = (nstcall = 1, F64_905(RTCW(loc1)));
						(nstcall = 1, F191_2310(RTCW(arg1), loc6, ti8_1));
						break;
					case 5L:
						RTHOOK(36);
						tr4_1 = (nstcall = 1, F64_906(RTCW(loc1)));
						(nstcall = 1, F191_2311(RTCW(arg1), loc6, tr4_1));
						break;
					case 6L:
						RTHOOK(37);
						tr8_1 = (nstcall = 1, F64_907(RTCW(loc1)));
						(nstcall = 1, F191_2296(RTCW(arg1), loc6, tr8_1));
						break;
					case 0L:
						RTHOOK(38);
						tp1 = (nstcall = 1, F64_908(RTCW(loc1)));
						(nstcall = 1, F191_2313(RTCW(arg1), loc6, tp1));
						break;
					case 1L:
						RTHOOK(39);
						if (*(EIF_BOOLEAN *)(Current+ _CHROFF_12_0_)) {
							RTHOOK(40);
							tb1 = (nstcall = 1, F63_859(RTCW(loc1)));
							if (tb1) {
								RTHOOK(41);
								ti4_1 = (nstcall = 1, F63_871(RTCW(loc1)));
								loc5 = (nstcall = 0, F158_1642(Current, ti4_1));
								RTHOOK(42);
								if ((EIF_BOOLEAN) (loc5 < ((EIF_INTEGER_32) 0L))) {
									RTHOOK(43);
									tr1 = RTOUCR(155,(nstcall = 0, F158_1639), (Current));
									tr2 = RTMS_EX_H("Cannot read object type. Corrupted data!",40,1055785505);
									tr2 = (nstcall = 1, F22_292(RTCW(tr1), tr2));
									(nstcall = 0, F158_1645(Current, tr2));
								} else {
									RTHOOK(44);
									loc12 = RTLNS(eif_new_type(195, 0x01).id, 195, _OBJSIZ_1_0_0_2_0_0_0_0_);
									tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
									tr2 = (nstcall = 1, F192_2324(RTCW(tr1), loc5));
									tr1 = RTCCL(tr2);
									(nstcall = -1, F196_2468(RTCW(loc12), tr1));
									RTHOOK(45);
									(nstcall = 0, F824_4342(Current, loc12));
									RTHOOK(46);
									tr1 = (nstcall = 1, F196_2471(RTCW(loc12)));
									tr2 = RTCCL(tr1);
									(nstcall = 1, F191_2295(RTCW(arg1), loc6, tr2));
									RTHOOK(47);
									if (loc9) {
										RTHOOK(48);
										loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
									}
								}
							} else {
								RTHOOK(49);
								tr1 = (nstcall = 0, F158_1652(Current));
								tr2 = RTCCL(tr1);
								(nstcall = 1, F191_2295(RTCW(arg1), loc6, tr2));
							}
						} else {
							RTHOOK(50);
							tr1 = (nstcall = 0, F158_1652(Current));
							tr2 = RTCCL(tr1);
							(nstcall = 1, F191_2295(RTCW(arg1), loc6, tr2));
						}
						RTHOOK(51);
						tb1 = '\0';
						if (loc9) {
							tr1 = (nstcall = 1, F191_2261(RTCW(arg1), loc6));
							tb1 = (EIF_BOOLEAN)(tr1 == NULL);
						}
						if (tb1) {
							RTHOOK(52);
							if ((EIF_BOOLEAN)(loc8 == NULL)) {
								RTHOOK(53);
								loc8 = RTLNS(eif_new_type(849, 0x01).id, 849, _OBJSIZ_9_3_0_7_0_0_0_0_);
								ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc7)+ _LNGOFF_4_3_0_1_);
								(nstcall = -1, F844_4461(RTCW(loc8), ti4_1));
							}
							RTHOOK(54);
							tr1 = (nstcall = 1, F191_2274(RTCW(arg1), loc6));
							(nstcall = 1, F844_4507(RTCW(loc8), NULL, tr1));
						}
						break;
					case 7L:
						RTHOOK(55);
						ti4_1 = (nstcall = 1, F63_871(RTCW(loc1)));
						eif_do_nothing_value.it_i4 = ti4_1;
						RTHOOK(56);
						tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2036[Dtype(RTCW(arg1))-194])(arg1, loc6));
						(nstcall = 0, F824_4342(Current, tr1));
						break;
					default:
						
						break;
				}
			} else {
				RTHOOK(57);
				if ((EIF_BOOLEAN)(loc8 == NULL)) {
					RTHOOK(58);
					loc8 = RTLNS(eif_new_type(849, 0x01).id, 849, _OBJSIZ_9_3_0_7_0_0_0_0_);
					ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc7)+ _LNGOFF_4_3_0_1_);
					(nstcall = -1, F844_4461(RTCW(loc8), ti4_1));
				}
				RTHOOK(59);
				ti4_1 = eif_integer_32_item(RTCW(loc11),3);
				switch ((nstcall = 0, F89_1175(Current, ti4_1))) {
					case 3L:
						RTHOOK(60);
						tb1 = (nstcall = 1, F63_859(RTCW(loc1)));
						tr1 = RTLNS(eif_new_type(922, 0x00).id, 922, _OBJSIZ_0_1_0_0_0_0_0_0_);
						*(EIF_BOOLEAN *)tr1 = tb1;
						tr2 = eif_boxed_item(loc11,2);
						(nstcall = 1, F844_4507(RTCW(loc8), tr1, tr2));
						break;
					case 2L:
						RTHOOK(61);
						tc1 = (nstcall = 1, F63_853(RTCW(loc1)));
						tr1 = RTLNS(eif_new_type(919, 0x00).id, 919, _OBJSIZ_0_1_0_0_0_0_0_0_);
						*(EIF_CHARACTER_8 *)tr1 = tc1;
						tr2 = eif_boxed_item(loc11,2);
						(nstcall = 1, F844_4507(RTCW(loc8), tr1, tr2));
						break;
					case 12L:
						RTHOOK(62);
						tw1 = (nstcall = 1, F63_854(RTCW(loc1)));
						tr1 = RTLNS(eif_new_type(916, 0x00).id, 916, _OBJSIZ_0_0_0_1_0_0_0_0_);
						*(EIF_CHARACTER_32 *)tr1 = tw1;
						tr2 = eif_boxed_item(loc11,2);
						(nstcall = 1, F844_4507(RTCW(loc8), tr1, tr2));
						break;
					case 13L:
						RTHOOK(63);
						tu1_1 = (nstcall = 1, F64_898(RTCW(loc1)));
						tr1 = RTLNS(eif_new_type(907, 0x00).id, 907, _OBJSIZ_0_1_0_0_0_0_0_0_);
						*(EIF_NATURAL_8 *)tr1 = tu1_1;
						tr2 = eif_boxed_item(loc11,2);
						(nstcall = 1, F844_4507(RTCW(loc8), tr1, tr2));
						break;
					case 14L:
						RTHOOK(64);
						tu2_1 = (nstcall = 1, F64_899(RTCW(loc1)));
						tr1 = RTLNS(eif_new_type(925, 0x00).id, 925, _OBJSIZ_0_0_1_0_0_0_0_0_);
						*(EIF_NATURAL_16 *)tr1 = tu2_1;
						tr2 = eif_boxed_item(loc11,2);
						(nstcall = 1, F844_4507(RTCW(loc8), tr1, tr2));
						break;
					case 15L:
						RTHOOK(65);
						tu4_1 = (nstcall = 1, F64_900(RTCW(loc1)));
						tr1 = RTLNS(eif_new_type(904, 0x00).id, 904, _OBJSIZ_0_0_0_1_0_0_0_0_);
						*(EIF_NATURAL_32 *)tr1 = tu4_1;
						tr2 = eif_boxed_item(loc11,2);
						(nstcall = 1, F844_4507(RTCW(loc8), tr1, tr2));
						break;
					case 16L:
						RTHOOK(66);
						tu8_1 = (nstcall = 1, F64_901(RTCW(loc1)));
						tr1 = RTLNS(eif_new_type(901, 0x00).id, 901, _OBJSIZ_0_0_0_0_0_0_1_0_);
						*(EIF_NATURAL_64 *)tr1 = tu8_1;
						tr2 = eif_boxed_item(loc11,2);
						(nstcall = 1, F844_4507(RTCW(loc8), tr1, tr2));
						break;
					case 9L:
						RTHOOK(67);
						ti1_1 = (nstcall = 1, F64_902(RTCW(loc1)));
						tr1 = RTLNS(eif_new_type(898, 0x00).id, 898, _OBJSIZ_0_1_0_0_0_0_0_0_);
						*(EIF_INTEGER_8 *)tr1 = ti1_1;
						tr2 = eif_boxed_item(loc11,2);
						(nstcall = 1, F844_4507(RTCW(loc8), tr1, tr2));
						break;
					case 10L:
						RTHOOK(68);
						ti2_1 = (nstcall = 1, F64_903(RTCW(loc1)));
						tr1 = RTLNS(eif_new_type(895, 0x00).id, 895, _OBJSIZ_0_0_1_0_0_0_0_0_);
						*(EIF_INTEGER_16 *)tr1 = ti2_1;
						tr2 = eif_boxed_item(loc11,2);
						(nstcall = 1, F844_4507(RTCW(loc8), tr1, tr2));
						break;
					case 4L:
						RTHOOK(69);
						ti4_1 = (nstcall = 1, F64_904(RTCW(loc1)));
						tr1 = RTLNS(eif_new_type(892, 0x00).id, 892, _OBJSIZ_0_0_0_1_0_0_0_0_);
						*(EIF_INTEGER_32 *)tr1 = ti4_1;
						tr2 = eif_boxed_item(loc11,2);
						(nstcall = 1, F844_4507(RTCW(loc8), tr1, tr2));
						break;
					case 11L:
						RTHOOK(70);
						ti8_1 = (nstcall = 1, F64_905(RTCW(loc1)));
						tr1 = RTLNS(eif_new_type(889, 0x00).id, 889, _OBJSIZ_0_0_0_0_0_0_1_0_);
						*(EIF_INTEGER_64 *)tr1 = ti8_1;
						tr2 = eif_boxed_item(loc11,2);
						(nstcall = 1, F844_4507(RTCW(loc8), tr1, tr2));
						break;
					case 5L:
						RTHOOK(71);
						tr4_1 = (nstcall = 1, F64_906(RTCW(loc1)));
						tr1 = RTLNS(eif_new_type(910, 0x00).id, 910, _OBJSIZ_0_0_0_0_1_0_0_0_);
						*(EIF_REAL_32 *)tr1 = tr4_1;
						tr2 = eif_boxed_item(loc11,2);
						(nstcall = 1, F844_4507(RTCW(loc8), tr1, tr2));
						break;
					case 6L:
						RTHOOK(72);
						tr8_1 = (nstcall = 1, F64_907(RTCW(loc1)));
						tr1 = RTLNS(eif_new_type(913, 0x00).id, 913, _OBJSIZ_0_0_0_0_0_0_0_1_);
						*(EIF_REAL_64 *)tr1 = tr8_1;
						tr2 = eif_boxed_item(loc11,2);
						(nstcall = 1, F844_4507(RTCW(loc8), tr1, tr2));
						break;
					case 0L:
						RTHOOK(73);
						tp1 = (nstcall = 1, F64_908(RTCW(loc1)));
						tr1 = RTLNS(eif_new_type(958, 0x00).id, 958, _OBJSIZ_0_0_0_0_0_1_0_0_);
						*(EIF_POINTER *)tr1 = tp1;
						tr2 = eif_boxed_item(loc11,2);
						(nstcall = 1, F844_4507(RTCW(loc8), tr1, tr2));
						break;
					case 1L:
						RTHOOK(74);
						if (*(EIF_BOOLEAN *)(Current+ _CHROFF_12_0_)) {
							RTHOOK(75);
							tb1 = (nstcall = 1, F63_859(RTCW(loc1)));
							if (tb1) {
								RTHOOK(76);
								ti4_1 = (nstcall = 1, F63_871(RTCW(loc1)));
								loc5 = (nstcall = 0, F158_1642(Current, ti4_1));
								RTHOOK(77);
								if ((EIF_BOOLEAN) (loc5 < ((EIF_INTEGER_32) 0L))) {
									RTHOOK(78);
									tr1 = RTOUCR(155,(nstcall = 0, F158_1639), (Current));
									tr2 = RTMS_EX_H("Cannot read object type. Corrupted data!",40,1055785505);
									tr2 = (nstcall = 1, F22_292(RTCW(tr1), tr2));
									(nstcall = 0, F158_1645(Current, tr2));
								} else {
									RTHOOK(79);
									loc12 = RTLNS(eif_new_type(195, 0x01).id, 195, _OBJSIZ_1_0_0_2_0_0_0_0_);
									tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
									tr2 = (nstcall = 1, F192_2324(RTCW(tr1), loc5));
									tr1 = RTCCL(tr2);
									(nstcall = -1, F196_2468(RTCW(loc12), tr1));
									RTHOOK(80);
									(nstcall = 0, F824_4342(Current, loc12));
									RTHOOK(81);
									tr1 = (nstcall = 1, F196_2471(RTCW(loc12)));
									tr2 = RTCCL(tr1);
									tr3 = eif_boxed_item(loc11,2);
									(nstcall = 1, F844_4507(RTCW(loc8), tr2, tr3));
								}
							} else {
								RTHOOK(82);
								tr1 = (nstcall = 0, F158_1652(Current));
								tr2 = RTCCL(tr1);
								tr3 = eif_boxed_item(loc11,2);
								(nstcall = 1, F844_4507(RTCW(loc8), tr2, tr3));
							}
						} else {
							RTHOOK(83);
							tr1 = (nstcall = 0, F158_1652(Current));
							tr2 = RTCCL(tr1);
							tr3 = eif_boxed_item(loc11,2);
							(nstcall = 1, F844_4507(RTCW(loc8), tr2, tr3));
						}
						break;
					case 7L:
						RTHOOK(84);
						ti4_1 = (nstcall = 1, F63_871(RTCW(loc1)));
						loc5 = (nstcall = 0, F158_1642(Current, ti4_1));
						RTHOOK(85);
						if ((EIF_BOOLEAN) (loc5 < ((EIF_INTEGER_32) 0L))) {
							RTHOOK(86);
							tr1 = RTOUCR(155,(nstcall = 0, F158_1639), (Current));
							tr2 = RTMS_EX_H("Cannot read object type. Corrupted data!",40,1055785505);
							tr2 = (nstcall = 1, F22_292(RTCW(tr1), tr2));
							(nstcall = 0, F158_1645(Current, tr2));
						} else {
							RTHOOK(87);
							loc12 = RTLNS(eif_new_type(195, 0x01).id, 195, _OBJSIZ_1_0_0_2_0_0_0_0_);
							tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
							tr2 = (nstcall = 1, F192_2324(RTCW(tr1), loc5));
							tr1 = RTCCL(tr2);
							(nstcall = -1, F196_2468(RTCW(loc12), tr1));
							RTHOOK(88);
							(nstcall = 0, F824_4342(Current, loc12));
							RTHOOK(89);
							tr1 = (nstcall = 1, F196_2471(RTCW(loc12)));
							tr2 = RTCCL(tr1);
							tr3 = eif_boxed_item(loc11,2);
							(nstcall = 1, F844_4507(RTCW(loc8), tr2, tr3));
						}
						break;
					default:
						
						break;
				}
			}
			RTHOOK(90);
			loc2++;
		}
	}
	RTHOOK(91);
	if ((EIF_BOOLEAN)(loc8 != NULL)) {
		RTHOOK(92);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_11_);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,886,0xFF01,0,0xFF01,849,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			tr2 = RTLNTS(typres0.id, 3, 0);
		}
		tr3 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2010[Dtype(RTCW(arg1))-194])(arg1));
		((EIF_TYPED_VALUE *)tr2+1)->it_r = tr3;
		RTAR(tr2,tr3);
		((EIF_TYPED_VALUE *)tr2+2)->it_r = loc8;
		RTAR(tr2,loc8);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2955[Dtype(RTCW(tr1))-564])(tr1, tr2));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(93);
	RTLE;
	RTEE;
}

/* {SED_RECOVERABLE_DESERIALIZER}.clear_internal_data */
void F824_4343 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("clear_internal_data", 823, Current, 0, 0, 8665);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	(nstcall = 0, F158_1647(Current));
	RTHOOK(2);
	*(EIF_REFERENCE *)(Current + _REFACS_7_) = (EIF_REFERENCE) NULL;
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_10_);
	(nstcall = 1, F845_4515(RTCW(tr1)));
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_11_);
	(nstcall = 1, F825_4403(RTCW(tr1)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

void EIF_Minit210 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
