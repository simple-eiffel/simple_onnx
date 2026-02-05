/*
 * Code for class SED_SESSION_DESERIALIZER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "se137.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {SED_SESSION_DESERIALIZER}.make */
void F158_1625 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("make", 157, Current, 0, 1, 1692);
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
	tr1 = RTLNSMART(eif_new_type(191, 1).id);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	tr1 = RTLNSMART(eif_new_type(195, 1).id);
	(nstcall = -1, F196_2468(RTCW(tr1), *(EIF_REFERENCE *)(Current + _REFACS_3_)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_4_) = (EIF_REFERENCE) tr1;
	RTHOOK(5);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,759,0xFF01,0,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNSP2(typres0.id,EO_REF,((EIF_INTEGER_32) 0L),sizeof(EIF_REFERENCE), EIF_FALSE);
		RT_SPECIAL_COUNT(tr1) = 0;
	}
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) tr1;
	RTHOOK(6);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("deserializer_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) == arg1)) {
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

/* {SED_SESSION_DESERIALIZER}.deserializer */
EIF_REFERENCE F158_1626 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {SED_SESSION_DESERIALIZER}.last_decoded_object */
EIF_REFERENCE F158_1627 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {SED_SESSION_DESERIALIZER}.error */
EIF_REFERENCE F158_1628 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("error", 157, Current, 1, 0, 1695);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = '\0';
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tb2 = (nstcall = 1, F566_3452(loc1));
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
		RTHOOK(2);
		tr1 = (nstcall = 1, F825_4353(loc1));
		Result = (EIF_REFERENCE) tr1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {SED_SESSION_DESERIALIZER}.errors */
EIF_REFERENCE F158_1629 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {SED_SESSION_DESERIALIZER}.has_error */
EIF_BOOLEAN F158_1630 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("has_error", 157, Current, 1, 0, 1697);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = '\0';
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tb1 = (nstcall = 1, F566_3452(loc1));
		Result = (EIF_BOOLEAN) !tb1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {SED_SESSION_DESERIALIZER}.set_deserializer */
void F158_1631 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("set_deserializer", 157, Current, 0, 1, 1698);
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
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("deserializer_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) == arg1)) {
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
}

/* {SED_SESSION_DESERIALIZER}.decode */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F158_1632 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	RTEX;
	RTED;
	EIF_NATURAL_32 EIF_VOLATILE loc1 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE EIF_VOLATILE loc2 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN EIF_VOLATILE loc3 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN EIF_VOLATILE loc4 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE EIF_VOLATILE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	RTS_SDX;
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr2 = NULL;
	EIF_INTEGER_32  EIF_VOLATILE ti4_1;
	EIF_NATURAL_32  EIF_VOLATILE tu4_1;
	EIF_BOOLEAN  EIF_VOLATILE tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	RTXD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,tr1);
	RTLR(3,loc5);
	RTLR(4,tr2);
	RTLR(5,saved_except);
	RTLIU(6);
	RTXSLS;
	
	RTEAA("decode", 157, Current, 5, 1, 1699);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTE_T
	RTHOOK(1);
	if ((EIF_BOOLEAN) !loc4) {
		RTHOOK(2);
		(nstcall = 0, F158_1646(Current));
		RTHOOK(3);
		if ((EIF_BOOLEAN) !arg1) {
			RTHOOK(4);
			loc2 = RTOUCR(157,(nstcall = 0, F158_1676), (Current));
			RTHOOK(5);
			tb1 = (nstcall = 1, F213_2493(loc2));
			loc3 = (EIF_BOOLEAN) tb1;
			RTHOOK(6);
			(nstcall = 1, F213_2506(loc2));
		}
		RTHOOK(7);
		tr1 = *(EIF_REFERENCE *)(Current);
		tu4_1 = (nstcall = 1, F63_872(RTCW(tr1)));
		loc1 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(8);
		ti4_1 = (EIF_INTEGER_32) loc1;
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,759,0xFF01,0,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			tr1 = RTLNSP2(typres0.id,EO_REF,(EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)),sizeof(EIF_REFERENCE), EIF_FALSE);
			RT_SPECIAL_COUNT(tr1) = 0;
		}
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) tr1;
		RTHOOK(9);
		(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_NATURAL_32)) R1489[dtype-157])(Current, loc1));
		RTHOOK(10);
		if ((EIF_BOOLEAN) !(nstcall = 0, F158_1630(Current))) {
			RTHOOK(11);
			(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_NATURAL_32)) R1496[dtype-157])(Current, loc1));
		}
	} else {
		RTHOOK(12);
		tr1 = (nstcall = 0, F156_1587(Current));
		loc5 = tr1;
		if (EIF_TEST(loc5)) {
			RTHOOK(13);
			tr1 = RTOUCR(155,(nstcall = 0, F158_1639), (Current));
			tr2 = (nstcall = 1, F22_293(RTCW(tr1), loc5));
			(nstcall = 0, F158_1644(Current, tr2));
		} else {
			RTHOOK(14);
			tr1 = RTOUCR(155,(nstcall = 0, F158_1639), (Current));
			tr2 = RTMS_EX_H("An Unknown exception occurred in `decode\'.",42,984962350);
			tr2 = (nstcall = 1, F22_292(RTCW(tr1), tr2));
			(nstcall = 0, F158_1644(Current, tr2));
		}
		RTHOOK(15);
		*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) NULL;
	}
	RTHOOK(16);
	if ((EIF_BOOLEAN) (loc3 && (EIF_BOOLEAN)(loc2 != NULL))) {
		RTHOOK(17);
		(nstcall = 1, F213_2507(loc2));
	}
	RTHOOK(18);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R1488[dtype-157])(Current));
	RTVI(Current, RTAL);
	RTRS;
	RTE_E
	RTXSC;
	RTS_SRR
	RTHOOK(19);
	loc4 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(20);
	RTER;
	/* NOTREACHED */
	RTE_EE
	RTHOOK(21);
	RTEOK;
	RTLE;
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {SED_SESSION_DESERIALIZER}.reflector */
EIF_REFERENCE F158_1633 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_3_);
}


/* {SED_SESSION_DESERIALIZER}.reflected_object */
EIF_REFERENCE F158_1634 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_4_);
}


/* {SED_SESSION_DESERIALIZER}.object_references */
EIF_REFERENCE F158_1635 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_5_);
}


/* {SED_SESSION_DESERIALIZER}.is_transient_retrieval_required */
EIF_BOOLEAN F158_1636 (EIF_REFERENCE Current)
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
	
	RTEAA("is_transient_retrieval_required", 157, Current, 0, 0, 1650);
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

/* {SED_SESSION_DESERIALIZER}.is_store_settings_enabled */
EIF_BOOLEAN F158_1637 (EIF_REFERENCE Current)
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
	
	RTEAA("is_store_settings_enabled", 157, Current, 0, 0, 1651);
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

/* {SED_SESSION_DESERIALIZER}.has_reference_with_copy_semantics */
EIF_BOOLEAN F158_1638 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current + O1479[Dtype(Current)-157]);
}


/* {SED_SESSION_DESERIALIZER}.error_factory */
static EIF_REFERENCE F158_1639_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(155)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("error_factory", 157, Current, 0, 0, 1653);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(21, 0x01).id, 21, _OBJSIZ_0_0_0_0_0_0_0_0_);
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_not_void", EX_POST);
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

EIF_REFERENCE F158_1639 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(155,F158_1639_body,(Current));
}

/* {SED_SESSION_DESERIALIZER}.version */
EIF_NATURAL_32 F158_1640 (EIF_REFERENCE Current)
{
	return *(EIF_NATURAL_32 *)(Current + O1481[Dtype(Current)-157]);
}


/* {SED_SESSION_DESERIALIZER}.dynamic_type_table */
EIF_REFERENCE F158_1641 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_6_);
}


/* {SED_SESSION_DESERIALIZER}.new_dynamic_type_id */
EIF_INTEGER_32 F158_1642 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("new_dynamic_type_id", 157, Current, 1, 1, 1656);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_old_type_id_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTHOOK(3);
		ti4_1 = (nstcall = 1, F761_4171(loc1));
		if ((EIF_BOOLEAN) (arg1 < ti4_1)) {
			RTHOOK(4);
			ti4_1 = (nstcall = 1, F761_4161(loc1, arg1));
			Result = (EIF_INTEGER_32) ti4_1;
		} else {
			RTHOOK(5);
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
		}
	} else {
		RTHOOK(6);
		Result = (EIF_INTEGER_32) arg1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("minus_one_of_non_negative", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) -1L))) {
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
	return Result;
}

/* {SED_SESSION_DESERIALIZER}.set_error */
void F158_1643 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("set_error", 157, Current, 0, 1, 1657);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	(nstcall = 0, F158_1644(Current, arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("error_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F158_1628(Current)) == arg1)) {
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

/* {SED_SESSION_DESERIALIZER}.add_error */
void F158_1644 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,arg1);
	RTLR(4,loc1);
	RTLR(5,loc3);
	RTLIU(6);
	
	RTEAA("add_error", 157, Current, 3, 1, 1658);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		RTHOOK(2);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2955[Dtype(loc2)-564])(loc2, arg1));
	} else {
		RTHOOK(3);
		{
			static EIF_TYPE_INDEX typarr0[] = {824,0xFF01,22,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			loc1 = RTLNSMART(typres0.id);
		}
		(nstcall = -1, F825_4344(RTCW(loc1), ((EIF_INTEGER_32) 10L)));
		RTHOOK(4);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2955[Dtype(RTCW(loc1))-564])(loc1, arg1));
		RTHOOK(5);
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) loc1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("error_set", EX_POST);
		tb1 = '\0';
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		loc3 = tr1;
		if (EIF_TEST(loc3)) {
			tb2 = (nstcall = 1, F825_4356(loc3, arg1));
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
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {SED_SESSION_DESERIALIZER}.raise_fatal_error */
void F158_1645 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,loc2);
	RTLIU(5);
	
	RTEAA("raise_fatal_error", 157, Current, 2, 1, 1659);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	(nstcall = 0, F158_1644(Current, arg1));
	RTHOOK(2);
	loc1 = RTLNS(eif_new_type(133, 0x01).id, 133, _OBJSIZ_5_1_0_1_0_0_0_0_);
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
	(nstcall = 1, F117_1482(RTCW(loc1), tr1));
	RTHOOK(4);
	(nstcall = 1, F117_1467(RTCW(loc1)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("error_set", EX_POST);
		tb1 = '\0';
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		loc2 = tr1;
		if (EIF_TEST(loc2)) {
			tb2 = (nstcall = 1, F825_4356(loc2, arg1));
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
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {SED_SESSION_DESERIALIZER}.reset_errors */
void F158_1646 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("reset_errors", 157, Current, 0, 0, 1660);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) NULL;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("errors_reset", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_2_) == NULL)) {
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

/* {SED_SESSION_DESERIALIZER}.clear_internal_data */
void F158_1647 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("clear_internal_data", 157, Current, 0, 0, 1661);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,759,0xFF01,0,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNSP2(typres0.id,EO_REF,((EIF_INTEGER_32) 0L),sizeof(EIF_REFERENCE), EIF_FALSE);
		RT_SPECIAL_COUNT(tr1) = 0;
	}
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current);
	tb1 = (nstcall = 1, F181_2073(RTCW(tr1)));
	if (tb1) {
		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(Current);
		(nstcall = 1, F181_2076(RTCW(tr1)));
	}
	RTHOOK(4);
	*(EIF_REFERENCE *)(Current + _REFACS_6_) = (EIF_REFERENCE) NULL;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {SED_SESSION_DESERIALIZER}.read_header */
void F158_1648 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_header", 157, Current, 0, 1, 1662);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	(nstcall = 0, F158_1649(Current));
	RTHOOK(2);
	(nstcall = 0, F158_1650(Current, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {SED_SESSION_DESERIALIZER}.read_settings */
void F158_1649 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("read_settings", 157, Current, 0, 0, 1663);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((nstcall = 0, F158_1637(Current))) {
		RTHOOK(2);
		tr1 = *(EIF_REFERENCE *)(Current);
		tu4_1 = (nstcall = 1, F63_872(RTCW(tr1)));
		*(EIF_NATURAL_32 *)(Current + O1481[dtype-157]) = (EIF_NATURAL_32) tu4_1;
		RTHOOK(3);
		if ((EIF_BOOLEAN) (*(EIF_NATURAL_32 *)(Current + O1481[dtype-157]) >= ((EIF_NATURAL_32) 4U))) {
			RTHOOK(4);
			tr1 = *(EIF_REFERENCE *)(Current);
			tb1 = (nstcall = 1, F63_859(RTCW(tr1)));
			*(EIF_BOOLEAN *)(Current + O1479[dtype-157]) = (EIF_BOOLEAN) tb1;
		} else {
			RTHOOK(5);
			*(EIF_BOOLEAN *)(Current + O1479[dtype-157]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		}
	} else {
		RTHOOK(6);
		*(EIF_NATURAL_32 *)(Current + O1481[dtype-157]) = (EIF_NATURAL_32) ((EIF_NATURAL_32) 0U);
		RTHOOK(7);
		*(EIF_BOOLEAN *)(Current + O1479[dtype-157]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
}

/* {SED_SESSION_DESERIALIZER}.read_object_table */
void F158_1650 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc5 = (EIF_BOOLEAN) 0;
	EIF_NATURAL_32 loc6 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc4);
	RTLR(3,loc2);
	RTLR(4,loc3);
	RTLR(5,loc1);
	RTLR(6,loc11);
	RTLR(7,tr2);
	RTLIU(8);
	
	RTEAA("read_object_table", 157, Current, 11, 1, 1664);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current);
	tb1 = (nstcall = 1, F63_859(RTCW(tr1)));
	if (tb1) {
		RTHOOK(2);
		loc4 = RTOUCR(157,(nstcall = 0, F158_1676), (Current));
		RTHOOK(3);
		tb1 = (nstcall = 1, F213_2493(loc4));
		loc5 = (EIF_BOOLEAN) tb1;
		RTHOOK(4);
		loc2 = *(EIF_REFERENCE *)(Current);
		RTHOOK(5);
		loc3 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		RTHOOK(6);
		loc1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
		RTHOOK(7);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3412[Dtype(RTCW(loc1))-759])(loc1, Current));
		RTHOOK(8);
		loc9 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		RTHOOK(9);
		ti4_1 = (EIF_INTEGER_32) arg1;
		loc10 = (EIF_INTEGER_32) ti4_1;
		for (;;) {
			RTHOOK(10);
			if ((EIF_BOOLEAN)(loc9 == loc10)) break;
			RTHOOK(11);
			if ((EIF_BOOLEAN) (loc5 && (EIF_BOOLEAN)((EIF_INTEGER_32) (loc9 / ((EIF_INTEGER_32) 2000L)) == ((EIF_INTEGER_32) 0L)))) {
				RTHOOK(12);
				(nstcall = 1, F213_2506(loc4));
			}
			RTHOOK(13);
			tu4_1 = (nstcall = 1, F63_872(RTCW(loc2)));
			ti4_1 = (EIF_INTEGER_32) tu4_1;
			loc8 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(14);
			loc7 = (nstcall = 0, F158_1642(Current, loc8));
			RTHOOK(15);
			if ((EIF_BOOLEAN) (loc7 >= ((EIF_INTEGER_32) 0L))) {
				RTHOOK(16);
				tr1 = *(EIF_REFERENCE *)(Current);
				tu4_1 = (nstcall = 1, F63_872(RTCW(tr1)));
				loc6 = (EIF_NATURAL_32) tu4_1;
				
				
				RTHOOK(17);
				tu1_1 = (nstcall = 1, F64_898(RTCW(loc2)));
				if ((EIF_BOOLEAN)(tu1_1 == ((EIF_NATURAL_8) 1U))) {
					RTHOOK(18);
					ti4_1 = (nstcall = 1, F63_871(RTCW(loc2)));
					ti4_2 = (nstcall = 1, F63_871(RTCW(loc2)));
					loc11 = (nstcall = 0, F158_1659(Current, loc7, ti4_1, ti4_2));
				} else {
					RTHOOK(19);
					tr1 = (nstcall = 1, F192_2324(RTCW(loc3), loc7));
					loc11 = (EIF_REFERENCE) RTCCL(tr1);
				}
				RTHOOK(20);
				tr1 = RTCCL(loc11);
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3412[Dtype(RTCW(loc1))-759])(loc1, tr1));
			} else {
				RTHOOK(21);
				tr1 = RTOUCR(155,(nstcall = 0, F158_1639), (Current));
				tr2 = RTMS_EX_H("Cannot read object type. Corrupted data!",40,1055785505);
				tr2 = (nstcall = 1, F22_292(RTCW(tr1), tr2));
				(nstcall = 0, F158_1645(Current, tr2));
			}
			RTHOOK(22);
			loc9++;
		}
		RTHOOK(23);
		if (loc5) {
			RTHOOK(24);
			(nstcall = 1, F213_2507(loc4));
		}
	} else {
		RTHOOK(25);
		tr1 = RTOUCR(155,(nstcall = 0, F158_1639), (Current));
		tr2 = (nstcall = 1, F22_299(RTCW(tr1)));
		(nstcall = 0, F158_1645(Current, tr2));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(26);
	RTLE;
	RTEE;
}

/* {SED_SESSION_DESERIALIZER}.read_default_value */
void F158_1651 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
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
	EIF_CHARACTER_8 tc1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("read_default_value", 157, Current, 1, 1, 1665);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = *(EIF_REFERENCE *)(Current);
	RTHOOK(2);
	switch (arg1) {
		case 3L:
			RTHOOK(3);
			tb1 = (nstcall = 1, F63_859(RTCW(loc1)));
			eif_do_nothing_value.it_b = tb1;
			break;
		case 2L:
			RTHOOK(4);
			tc1 = (nstcall = 1, F63_853(RTCW(loc1)));
			eif_do_nothing_value.it_c1 = tc1;
			break;
		case 12L:
			RTHOOK(5);
			tw1 = (nstcall = 1, F63_854(RTCW(loc1)));
			eif_do_nothing_value.it_c4 = tw1;
			break;
		case 13L:
			RTHOOK(6);
			tu1_1 = (nstcall = 1, F64_898(RTCW(loc1)));
			eif_do_nothing_value.it_n1 = tu1_1;
			break;
		case 14L:
			RTHOOK(7);
			tu2_1 = (nstcall = 1, F64_899(RTCW(loc1)));
			eif_do_nothing_value.it_n2 = tu2_1;
			break;
		case 15L:
			RTHOOK(8);
			tu4_1 = (nstcall = 1, F64_900(RTCW(loc1)));
			eif_do_nothing_value.it_n4 = tu4_1;
			break;
		case 16L:
			RTHOOK(9);
			tu8_1 = (nstcall = 1, F64_901(RTCW(loc1)));
			eif_do_nothing_value.it_n8 = tu8_1;
			break;
		case 9L:
			RTHOOK(10);
			ti1_1 = (nstcall = 1, F64_902(RTCW(loc1)));
			eif_do_nothing_value.it_i1 = ti1_1;
			break;
		case 10L:
			RTHOOK(11);
			ti2_1 = (nstcall = 1, F64_903(RTCW(loc1)));
			eif_do_nothing_value.it_i2 = ti2_1;
			break;
		case 4L:
			RTHOOK(12);
			ti4_1 = (nstcall = 1, F64_904(RTCW(loc1)));
			eif_do_nothing_value.it_i4 = ti4_1;
			break;
		case 11L:
			RTHOOK(13);
			ti8_1 = (nstcall = 1, F64_905(RTCW(loc1)));
			eif_do_nothing_value.it_i8 = ti8_1;
			break;
		case 5L:
			RTHOOK(14);
			tr4_1 = (nstcall = 1, F64_906(RTCW(loc1)));
			eif_do_nothing_value.it_r4 = tr4_1;
			break;
		case 6L:
			RTHOOK(15);
			tr8_1 = (nstcall = 1, F64_907(RTCW(loc1)));
			eif_do_nothing_value.it_r8 = tr8_1;
			break;
		case 0L:
			RTHOOK(16);
			tp1 = (nstcall = 1, F64_908(RTCW(loc1)));
			eif_do_nothing_value.it_p = tp1;
			break;
		case 1L:
			RTHOOK(17);
			tu4_1 = (nstcall = 1, F63_872(RTCW(loc1)));
			eif_do_nothing_value.it_n4 = tu4_1;
			break;
		case 7L:
			RTHOOK(18);
			tu1_1 = (nstcall = 1, F64_898(RTCW(loc1)));
			eif_do_nothing_value.it_n1 = tu1_1;
			break;
		default:
			
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(19);
	RTLE;
	RTEE;
}

/* {SED_SESSION_DESERIALIZER}.read_reference */
EIF_REFERENCE F158_1652 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
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
	
	RTEAA("read_reference", 157, Current, 1, 0, 1666);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current);
	tu4_1 = (nstcall = 1, F63_872(RTCW(tr1)));
	loc1 = (EIF_NATURAL_32) tu4_1;
	RTHOOK(2);
	if ((EIF_BOOLEAN)(loc1 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) {
		
		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
		ti4_1 = (EIF_INTEGER_32) loc1;
		tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R3211[Dtype(RTCW(tr1))-677])(tr1, ti4_1));
		Result = (EIF_REFERENCE) RTCCL(tr2);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {SED_SESSION_DESERIALIZER}.read_persistent_field_count */
EIF_INTEGER_32 F158_1653 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("read_persistent_field_count", 157, Current, 0, 1, 1667);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = (nstcall = 1, F191_2314(RTCW(arg1)));
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {SED_SESSION_DESERIALIZER}.new_attribute_offset */
EIF_INTEGER_32 F158_1654 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
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
	
	RTEAA("new_attribute_offset", 157, Current, 0, 2, 1668);
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
	Result = (EIF_INTEGER_32) arg2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("new_attribute_offset_non_negative", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
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

/* {SED_SESSION_DESERIALIZER}.decode_objects */
void F158_1655 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("decode_objects", 157, Current, 1, 1, 1669);
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
	(nstcall = 0, F158_1656(Current, (EIF_BOOLEAN) 1));
	RTHOOK(3);
	loc1 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(4);
		if ((EIF_BOOLEAN)(loc1 == arg1)) break;
		RTHOOK(5);
		(nstcall = 0, F158_1656(Current, (EIF_BOOLEAN) 0));
		RTHOOK(6);
		loc1 += (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {SED_SESSION_DESERIALIZER}.decode_object */
void F158_1656 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_NATURAL_32 loc4 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLR(3,loc3);
	RTLR(4,tr1);
	RTLR(5,tr2);
	RTLIU(6);
	
	RTEAA("decode_object", 157, Current, 4, 1, 1670);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = *(EIF_REFERENCE *)(Current);
	RTHOOK(2);
	loc2 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	RTHOOK(3);
	tu4_1 = (nstcall = 1, F63_872(RTCW(loc1)));
	loc4 = (EIF_NATURAL_32) tu4_1;
	
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
	ti4_1 = (EIF_INTEGER_32) loc4;
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R3211[Dtype(RTCW(tr1))-677])(tr1, ti4_1));
	loc3 = (EIF_REFERENCE) RTCCL(tr2);
	RTHOOK(5);
	tr1 = RTCCL(loc3);
	(nstcall = 1, F196_2477(RTCW(loc2), tr1));
	RTHOOK(6);
	tb1 = (nstcall = 1, F191_2263(RTCW(loc2)));
	if (tb1) {
		RTHOOK(7);
		tr1 = RTCCL(loc3);
		ti4_1 = (nstcall = 1, F191_2259(RTCW(loc2), ((EIF_INTEGER_32) 1L)));
		ti4_1 = (nstcall = 0, F89_1175(Current, ti4_1));
		(nstcall = 0, F158_1660(Current, tr1, ti4_1));
	} else {
		RTHOOK(8);
		tb1 = (nstcall = 1, F191_2267(RTCW(loc2)));
		if (tb1) {
			RTHOOK(9);
			tr1 = RTCCL(loc3);
			(nstcall = 0, F158_1658(Current, tr1));
		} else {
			RTHOOK(10);
			(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1498[dtype-157])(Current, loc2));
		}
	}
	RTHOOK(11);
	if (arg1) {
		RTHOOK(12);
		tr1 = RTCCL(loc3);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTLE;
	RTEE;
}

/* {SED_SESSION_DESERIALIZER}.decode_normal_object */
void F158_1657 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
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
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,loc7);
	RTLIU(6);
	
	RTEAA("decode_normal_object", 157, Current, 7, 1, 1671);
	RTSA(dtype);
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
	loc1 = *(EIF_REFERENCE *)(Current);
	RTHOOK(3);
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(4);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_0_0_0_);
	loc4 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(5);
	loc3 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_REFERENCE)) R1494[dtype-157])(Current, arg1));
	loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
	for (;;) {
		RTHOOK(6);
		if ((EIF_BOOLEAN)(loc2 == loc3)) break;
		RTHOOK(7);
		loc6 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R1495[dtype-157])(Current, loc4, loc2));
		
		RTHOOK(8);
		tb1 = (nstcall = 1, F191_2268(RTCW(arg1), loc6));
		if ((EIF_BOOLEAN) !tb1) {
			RTHOOK(9);
			ti4_1 = (nstcall = 1, F191_2276(RTCW(arg1), loc6));
			switch (ti4_1) {
				case 3L:
					RTHOOK(10);
					tb1 = (nstcall = 1, F63_859(RTCW(loc1)));
					(nstcall = 1, F191_2301(RTCW(arg1), loc6, tb1));
					break;
				case 2L:
					RTHOOK(11);
					tc1 = (nstcall = 1, F63_853(RTCW(loc1)));
					(nstcall = 1, F191_2298(RTCW(arg1), loc6, tc1));
					break;
				case 12L:
					RTHOOK(12);
					tw1 = (nstcall = 1, F63_854(RTCW(loc1)));
					(nstcall = 1, F191_2300(RTCW(arg1), loc6, tw1));
					break;
				case 13L:
					RTHOOK(13);
					tu1_1 = (nstcall = 1, F64_898(RTCW(loc1)));
					(nstcall = 1, F191_2302(RTCW(arg1), loc6, tu1_1));
					break;
				case 14L:
					RTHOOK(14);
					tu2_1 = (nstcall = 1, F64_899(RTCW(loc1)));
					(nstcall = 1, F191_2303(RTCW(arg1), loc6, tu2_1));
					break;
				case 15L:
					RTHOOK(15);
					tu4_1 = (nstcall = 1, F64_900(RTCW(loc1)));
					(nstcall = 1, F191_2304(RTCW(arg1), loc6, tu4_1));
					break;
				case 16L:
					RTHOOK(16);
					tu8_1 = (nstcall = 1, F64_901(RTCW(loc1)));
					(nstcall = 1, F191_2305(RTCW(arg1), loc6, tu8_1));
					break;
				case 9L:
					RTHOOK(17);
					ti1_1 = (nstcall = 1, F64_902(RTCW(loc1)));
					(nstcall = 1, F191_2306(RTCW(arg1), loc6, ti1_1));
					break;
				case 10L:
					RTHOOK(18);
					ti2_1 = (nstcall = 1, F64_903(RTCW(loc1)));
					(nstcall = 1, F191_2307(RTCW(arg1), loc6, ti2_1));
					break;
				case 4L:
					RTHOOK(19);
					ti4_1 = (nstcall = 1, F64_904(RTCW(loc1)));
					(nstcall = 1, F191_2309(RTCW(arg1), loc6, ti4_1));
					break;
				case 11L:
					RTHOOK(20);
					ti8_1 = (nstcall = 1, F64_905(RTCW(loc1)));
					(nstcall = 1, F191_2310(RTCW(arg1), loc6, ti8_1));
					break;
				case 5L:
					RTHOOK(21);
					tr4_1 = (nstcall = 1, F64_906(RTCW(loc1)));
					(nstcall = 1, F191_2311(RTCW(arg1), loc6, tr4_1));
					break;
				case 6L:
					RTHOOK(22);
					tr8_1 = (nstcall = 1, F64_907(RTCW(loc1)));
					(nstcall = 1, F191_2296(RTCW(arg1), loc6, tr8_1));
					break;
				case 0L:
					RTHOOK(23);
					tp1 = (nstcall = 1, F64_908(RTCW(loc1)));
					(nstcall = 1, F191_2313(RTCW(arg1), loc6, tp1));
					break;
				case 1L:
					RTHOOK(24);
					if (*(EIF_BOOLEAN *)(Current + O1479[dtype-157])) {
						RTHOOK(25);
						tb1 = (nstcall = 1, F63_859(RTCW(loc1)));
						if (tb1) {
							RTHOOK(26);
							ti4_1 = (nstcall = 1, F63_871(RTCW(loc1)));
							loc5 = (nstcall = 0, F158_1642(Current, ti4_1));
							RTHOOK(27);
							if ((EIF_BOOLEAN) (loc5 < ((EIF_INTEGER_32) 0L))) {
								RTHOOK(28);
								tr1 = RTOUCR(155,(nstcall = 0, F158_1639), (Current));
								tr2 = RTMS_EX_H("Cannot read object type. Corrupted data!",40,1055785505);
								tr2 = (nstcall = 1, F22_292(RTCW(tr1), tr2));
								(nstcall = 0, F158_1645(Current, tr2));
							} else {
								RTHOOK(29);
								loc7 = RTLNS(eif_new_type(195, 0x01).id, 195, _OBJSIZ_1_0_0_2_0_0_0_0_);
								tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
								tr2 = (nstcall = 1, F192_2324(RTCW(tr1), loc5));
								tr1 = RTCCL(tr2);
								(nstcall = -1, F196_2468(RTCW(loc7), tr1));
								RTHOOK(30);
								(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1498[dtype-157])(Current, loc7));
								RTHOOK(31);
								tr1 = (nstcall = 1, F196_2471(RTCW(loc7)));
								tr2 = RTCCL(tr1);
								(nstcall = 1, F191_2295(RTCW(arg1), loc6, tr2));
							}
						} else {
							RTHOOK(32);
							tr1 = (nstcall = 0, F158_1652(Current));
							tr2 = RTCCL(tr1);
							(nstcall = 1, F191_2295(RTCW(arg1), loc6, tr2));
						}
					} else {
						RTHOOK(33);
						tr1 = (nstcall = 0, F158_1652(Current));
						tr2 = RTCCL(tr1);
						(nstcall = 1, F191_2295(RTCW(arg1), loc6, tr2));
					}
					break;
				case 7L:
					RTHOOK(34);
					ti4_1 = (nstcall = 1, F63_871(RTCW(loc1)));
					eif_do_nothing_value.it_i4 = ti4_1;
					RTHOOK(35);
					tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2036[Dtype(RTCW(arg1))-194])(arg1, loc6));
					(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1498[dtype-157])(Current, tr1));
					break;
				default:
					
					break;
			}
		}
		RTHOOK(36);
		loc2++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(37);
	RTLE;
	RTEE;
}

/* {SED_SESSION_DESERIALIZER}.decode_tuple */
void F158_1658 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
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
	EIF_CHARACTER_8 tc1;
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,loc4);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(4,loc5);
	RTLR(5,tr1);
	RTLR(6,tr2);
	RTLIU(7);
	
	RTEAA("decode_tuple", 157, Current, 5, 1, 1672);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("an_obj_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("an_obj_is_tuple", EX_PRE);
		loc4 = RTCCL(arg1);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,0,886,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			loc4 = RTRV(typres0,loc4);
		}
		RTTE(EIF_TEST(loc4), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc1 = *(EIF_REFERENCE *)(Current);
	RTHOOK(4);
	loc5 = RTCCL(arg1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,0,886,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		loc5 = RTRV(typres0,loc5);
	}
	if (EIF_TEST(loc5)) {
		RTHOOK(5);
		loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		RTHOOK(6);
		ti4_1 = (nstcall = 1, F887_4726(loc5));
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
		for (;;) {
			RTHOOK(7);
			if ((EIF_BOOLEAN)(loc2 == loc3)) break;
			RTHOOK(8);
			tu1_1 = (nstcall = 1, F64_898(RTCW(loc1)));
			switch (tu1_1) {
				case 1U:
					RTHOOK(9);
					tb1 = (nstcall = 1, F63_859(RTCW(loc1)));
					(nstcall = 1, F887_4732(loc5, tb1, loc2));
					break;
				case 2U:
					RTHOOK(10);
					tc1 = (nstcall = 1, F63_853(RTCW(loc1)));
					(nstcall = 1, F887_4733(loc5, tc1, loc2));
					break;
				case 14U:
					RTHOOK(11);
					tw1 = (nstcall = 1, F63_854(RTCW(loc1)));
					(nstcall = 1, F887_4735(loc5, tw1, loc2));
					break;
				case 10U:
					RTHOOK(12);
					tu1_1 = (nstcall = 1, F64_898(RTCW(loc1)));
					(nstcall = 1, F887_4742(loc5, tu1_1, loc2));
					break;
				case 11U:
					RTHOOK(13);
					tu2_1 = (nstcall = 1, F64_899(RTCW(loc1)));
					(nstcall = 1, F887_4743(loc5, tu2_1, loc2));
					break;
				case 12U:
					RTHOOK(14);
					tu4_1 = (nstcall = 1, F64_900(RTCW(loc1)));
					(nstcall = 1, F887_4744(loc5, tu4_1, loc2));
					break;
				case 13U:
					RTHOOK(15);
					tu8_1 = (nstcall = 1, F64_901(RTCW(loc1)));
					(nstcall = 1, F887_4745(loc5, tu8_1, loc2));
					break;
				case 6U:
					RTHOOK(16);
					ti1_1 = (nstcall = 1, F64_902(RTCW(loc1)));
					(nstcall = 1, F887_4748(loc5, ti1_1, loc2));
					break;
				case 7U:
					RTHOOK(17);
					ti2_1 = (nstcall = 1, F64_903(RTCW(loc1)));
					(nstcall = 1, F887_4749(loc5, ti2_1, loc2));
					break;
				case 8U:
					RTHOOK(18);
					ti4_1 = (nstcall = 1, F64_904(RTCW(loc1)));
					(nstcall = 1, F887_4746(loc5, ti4_1, loc2));
					break;
				case 9U:
					RTHOOK(19);
					ti8_1 = (nstcall = 1, F64_905(RTCW(loc1)));
					(nstcall = 1, F887_4750(loc5, ti8_1, loc2));
					break;
				case 4U:
					RTHOOK(20);
					tr4_1 = (nstcall = 1, F64_906(RTCW(loc1)));
					(nstcall = 1, F887_4739(loc5, tr4_1, loc2));
					break;
				case 3U:
					RTHOOK(21);
					tr8_1 = (nstcall = 1, F64_907(RTCW(loc1)));
					(nstcall = 1, F887_4737(loc5, tr8_1, loc2));
					break;
				case 5U:
					RTHOOK(22);
					tp1 = (nstcall = 1, F64_908(RTCW(loc1)));
					(nstcall = 1, F887_4741(loc5, tp1, loc2));
					break;
				case 0U:
					RTHOOK(23);
					tr1 = (nstcall = 0, F158_1652(Current));
					tr2 = RTCCL(tr1);
					(nstcall = 1, F887_4731(loc5, tr2, loc2));
					break;
				default:
					
					break;
			}
			RTHOOK(24);
			loc2++;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(25);
	RTLE;
	RTEE;
}

/* {SED_SESSION_DESERIALIZER}.new_special_instance */
EIF_REFERENCE F158_1659 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("new_special_instance", 157, Current, 0, 3, 1673);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_dtype_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_item_type_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_count_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	switch (arg2) {
		case 3L:
			RTHOOK(5);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,773,922,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNSP2(typres0.id,0,arg3,sizeof(EIF_BOOLEAN), EIF_TRUE);
				RT_SPECIAL_COUNT(Result) = 0;
			}
			break;
		case 2L:
			RTHOOK(6);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,763,919,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNSP2(typres0.id,0,arg3,sizeof(EIF_CHARACTER_8), EIF_TRUE);
				RT_SPECIAL_COUNT(Result) = 0;
			}
			break;
		case 12L:
			RTHOOK(7);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,762,916,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNSP2(typres0.id,0,arg3,sizeof(EIF_CHARACTER_32), EIF_TRUE);
				RT_SPECIAL_COUNT(Result) = 0;
			}
			break;
		case 13L:
			RTHOOK(8);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,766,907,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNSP2(typres0.id,0,arg3,sizeof(EIF_NATURAL_8), EIF_TRUE);
				RT_SPECIAL_COUNT(Result) = 0;
			}
			break;
		case 14L:
			RTHOOK(9);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,772,925,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNSP2(typres0.id,0,arg3,sizeof(EIF_NATURAL_16), EIF_TRUE);
				RT_SPECIAL_COUNT(Result) = 0;
			}
			break;
		case 15L:
			RTHOOK(10);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,765,904,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNSP2(typres0.id,0,arg3,sizeof(EIF_NATURAL_32), EIF_TRUE);
				RT_SPECIAL_COUNT(Result) = 0;
			}
			break;
		case 16L:
			RTHOOK(11);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,761,901,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNSP2(typres0.id,0,arg3,sizeof(EIF_NATURAL_64), EIF_TRUE);
				RT_SPECIAL_COUNT(Result) = 0;
			}
			break;
		case 9L:
			RTHOOK(12);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,770,898,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNSP2(typres0.id,0,arg3,sizeof(EIF_INTEGER_8), EIF_TRUE);
				RT_SPECIAL_COUNT(Result) = 0;
			}
			break;
		case 10L:
			RTHOOK(13);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,769,895,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNSP2(typres0.id,0,arg3,sizeof(EIF_INTEGER_16), EIF_TRUE);
				RT_SPECIAL_COUNT(Result) = 0;
			}
			break;
		case 4L:
			RTHOOK(14);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,760,892,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNSP2(typres0.id,0,arg3,sizeof(EIF_INTEGER_32), EIF_TRUE);
				RT_SPECIAL_COUNT(Result) = 0;
			}
			break;
		case 11L:
			RTHOOK(15);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,771,889,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNSP2(typres0.id,0,arg3,sizeof(EIF_INTEGER_64), EIF_TRUE);
				RT_SPECIAL_COUNT(Result) = 0;
			}
			break;
		case 5L:
			RTHOOK(16);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,767,910,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNSP2(typres0.id,0,arg3,sizeof(EIF_REAL_32), EIF_TRUE);
				RT_SPECIAL_COUNT(Result) = 0;
			}
			break;
		case 6L:
			RTHOOK(17);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,768,913,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNSP2(typres0.id,0,arg3,sizeof(EIF_REAL_64), EIF_TRUE);
				RT_SPECIAL_COUNT(Result) = 0;
			}
			break;
		case 0L:
			RTHOOK(18);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,764,958,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNSP2(typres0.id,0,arg3,sizeof(EIF_POINTER), EIF_TRUE);
				RT_SPECIAL_COUNT(Result) = 0;
			}
			break;
		default:
			RTHOOK(19);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
			tr2 = (nstcall = 1, F192_2325(RTCW(tr1), arg1, arg3));
			Result = (EIF_REFERENCE) tr2;
			break;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(20);
		RTCT("new_special_instance_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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
	return Result;
}

/* {SED_SESSION_DESERIALIZER}.decode_special */
void F158_1660 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc14 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc15 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc16 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc17 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(19);
	RTLR(0,arg1);
	RTLR(1,loc2);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,loc3);
	RTLR(5,loc4);
	RTLR(6,loc5);
	RTLR(7,loc6);
	RTLR(8,loc7);
	RTLR(9,loc8);
	RTLR(10,loc9);
	RTLR(11,loc10);
	RTLR(12,loc11);
	RTLR(13,loc12);
	RTLR(14,loc13);
	RTLR(15,loc14);
	RTLR(16,loc15);
	RTLR(17,loc16);
	RTLR(18,loc17);
	RTLIU(19);
	
	RTEAA("decode_special", 157, Current, 17, 2, 1674);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("an_obj_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("an_obj_is_special", EX_PRE);
		loc2 = RTCCL(arg1);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,759,0,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			loc2 = RTRV(typres0,loc2);
		}
		RTTE(EIF_TEST(loc2), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_1 = (nstcall = 1, F63_871(RTCW(tr1)));
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	switch (arg2) {
		case 3L:
			RTHOOK(5);
			loc3 = RTCCL(arg1);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,773,922,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				loc3 = RTRV(typres0,loc3);
			}
			if (EIF_TEST(loc3)) {
				RTHOOK(6);
				(nstcall = 0, F158_1661(Current, loc3, loc1));
			} else {
				
			}
			break;
		case 2L:
			RTHOOK(7);
			loc4 = RTCCL(arg1);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,763,919,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				loc4 = RTRV(typres0,loc4);
			}
			if (EIF_TEST(loc4)) {
				RTHOOK(8);
				(nstcall = 0, F158_1662(Current, loc4, loc1));
			} else {
				
			}
			break;
		case 12L:
			RTHOOK(9);
			loc5 = RTCCL(arg1);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,762,916,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				loc5 = RTRV(typres0,loc5);
			}
			if (EIF_TEST(loc5)) {
				RTHOOK(10);
				(nstcall = 0, F158_1663(Current, loc5, loc1));
			} else {
				
			}
			break;
		case 13L:
			RTHOOK(11);
			loc6 = RTCCL(arg1);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,766,907,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				loc6 = RTRV(typres0,loc6);
			}
			if (EIF_TEST(loc6)) {
				RTHOOK(12);
				(nstcall = 0, F158_1664(Current, loc6, loc1));
			} else {
				
			}
			break;
		case 14L:
			RTHOOK(13);
			loc7 = RTCCL(arg1);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,772,925,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				loc7 = RTRV(typres0,loc7);
			}
			if (EIF_TEST(loc7)) {
				RTHOOK(14);
				(nstcall = 0, F158_1665(Current, loc7, loc1));
			} else {
				
			}
			break;
		case 15L:
			RTHOOK(15);
			loc8 = RTCCL(arg1);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,765,904,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				loc8 = RTRV(typres0,loc8);
			}
			if (EIF_TEST(loc8)) {
				RTHOOK(16);
				(nstcall = 0, F158_1666(Current, loc8, loc1));
			} else {
				
			}
			break;
		case 16L:
			RTHOOK(17);
			loc9 = RTCCL(arg1);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,761,901,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				loc9 = RTRV(typres0,loc9);
			}
			if (EIF_TEST(loc9)) {
				RTHOOK(18);
				(nstcall = 0, F158_1667(Current, loc9, loc1));
			} else {
				
			}
			break;
		case 9L:
			RTHOOK(19);
			loc10 = RTCCL(arg1);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,770,898,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				loc10 = RTRV(typres0,loc10);
			}
			if (EIF_TEST(loc10)) {
				RTHOOK(20);
				(nstcall = 0, F158_1668(Current, loc10, loc1));
			} else {
				
			}
			break;
		case 10L:
			RTHOOK(21);
			loc11 = RTCCL(arg1);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,769,895,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				loc11 = RTRV(typres0,loc11);
			}
			if (EIF_TEST(loc11)) {
				RTHOOK(22);
				(nstcall = 0, F158_1669(Current, loc11, loc1));
			} else {
				
			}
			break;
		case 4L:
			RTHOOK(23);
			loc12 = RTCCL(arg1);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,760,892,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				loc12 = RTRV(typres0,loc12);
			}
			if (EIF_TEST(loc12)) {
				RTHOOK(24);
				(nstcall = 0, F158_1670(Current, loc12, loc1));
			} else {
				
			}
			break;
		case 11L:
			RTHOOK(25);
			loc13 = RTCCL(arg1);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,771,889,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				loc13 = RTRV(typres0,loc13);
			}
			if (EIF_TEST(loc13)) {
				RTHOOK(26);
				(nstcall = 0, F158_1671(Current, loc13, loc1));
			} else {
				
			}
			break;
		case 5L:
			RTHOOK(27);
			loc14 = RTCCL(arg1);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,767,910,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				loc14 = RTRV(typres0,loc14);
			}
			if (EIF_TEST(loc14)) {
				RTHOOK(28);
				(nstcall = 0, F158_1672(Current, loc14, loc1));
			} else {
				
			}
			break;
		case 6L:
			RTHOOK(29);
			loc15 = RTCCL(arg1);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,768,913,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				loc15 = RTRV(typres0,loc15);
			}
			if (EIF_TEST(loc15)) {
				RTHOOK(30);
				(nstcall = 0, F158_1673(Current, loc15, loc1));
			} else {
				
			}
			break;
		case 0L:
			RTHOOK(31);
			loc16 = RTCCL(arg1);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,764,958,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				loc16 = RTRV(typres0,loc16);
			}
			if (EIF_TEST(loc16)) {
				RTHOOK(32);
				(nstcall = 0, F158_1674(Current, loc16, loc1));
			} else {
				
			}
			break;
		default:
			
			RTHOOK(33);
			loc17 = RTCCL(arg1);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,759,0,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				loc17 = RTRV(typres0,loc17);
			}
			if (EIF_TEST(loc17)) {
				RTHOOK(34);
				(nstcall = 0, F158_1675(Current, loc17, loc1));
			} else {
				
			}
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(35);
	RTLE;
	RTEE;
}

/* {SED_SESSION_DESERIALIZER}.decode_special_boolean */
void F158_1661 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,loc2);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("decode_special_boolean", 157, Current, 2, 2, 1675);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_spec_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc2 = *(EIF_REFERENCE *)(Current);
	for (;;) {
		RTHOOK(3);
		if ((EIF_BOOLEAN)(loc1 == arg2)) break;
		RTHOOK(4);
		tb1 = (nstcall = 1, F63_859(RTCW(loc2)));
		(nstcall = 1, F774_4178(RTCW(arg1), tb1));
		RTHOOK(5);
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {SED_SESSION_DESERIALIZER}.decode_special_character_8 */
void F158_1662 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_CHARACTER_8 tc1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,loc2);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("decode_special_character_8", 157, Current, 2, 2, 1676);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_spec_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc2 = *(EIF_REFERENCE *)(Current);
	for (;;) {
		RTHOOK(3);
		if ((EIF_BOOLEAN)(loc1 == arg2)) break;
		RTHOOK(4);
		tc1 = (nstcall = 1, F63_853(RTCW(loc2)));
		(nstcall = 1, F764_4178(RTCW(arg1), tc1));
		RTHOOK(5);
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {SED_SESSION_DESERIALIZER}.decode_special_character_32 */
void F158_1663 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_CHARACTER_32 tw1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,loc2);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("decode_special_character_32", 157, Current, 2, 2, 1677);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_spec_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc2 = *(EIF_REFERENCE *)(Current);
	for (;;) {
		RTHOOK(3);
		if ((EIF_BOOLEAN)(loc1 == arg2)) break;
		RTHOOK(4);
		tw1 = (nstcall = 1, F63_854(RTCW(loc2)));
		(nstcall = 1, F763_4178(RTCW(arg1), tw1));
		RTHOOK(5);
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {SED_SESSION_DESERIALIZER}.decode_special_natural_8 */
void F158_1664 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_NATURAL_8 tu1_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,loc2);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("decode_special_natural_8", 157, Current, 2, 2, 1678);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_spec_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc2 = *(EIF_REFERENCE *)(Current);
	for (;;) {
		RTHOOK(3);
		if ((EIF_BOOLEAN)(loc1 == arg2)) break;
		RTHOOK(4);
		tu1_1 = (nstcall = 1, F64_898(RTCW(loc2)));
		(nstcall = 1, F767_4178(RTCW(arg1), tu1_1));
		RTHOOK(5);
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {SED_SESSION_DESERIALIZER}.decode_special_natural_16 */
void F158_1665 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_NATURAL_16 tu2_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,loc2);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("decode_special_natural_16", 157, Current, 2, 2, 1679);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_spec_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc2 = *(EIF_REFERENCE *)(Current);
	for (;;) {
		RTHOOK(3);
		if ((EIF_BOOLEAN)(loc1 == arg2)) break;
		RTHOOK(4);
		tu2_1 = (nstcall = 1, F64_899(RTCW(loc2)));
		(nstcall = 1, F773_4178(RTCW(arg1), tu2_1));
		RTHOOK(5);
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {SED_SESSION_DESERIALIZER}.decode_special_natural_32 */
void F158_1666 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_NATURAL_32 tu4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,loc2);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("decode_special_natural_32", 157, Current, 2, 2, 1680);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_spec_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc2 = *(EIF_REFERENCE *)(Current);
	for (;;) {
		RTHOOK(3);
		if ((EIF_BOOLEAN)(loc1 == arg2)) break;
		RTHOOK(4);
		tu4_1 = (nstcall = 1, F64_900(RTCW(loc2)));
		(nstcall = 1, F766_4178(RTCW(arg1), tu4_1));
		RTHOOK(5);
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {SED_SESSION_DESERIALIZER}.decode_special_natural_64 */
void F158_1667 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_NATURAL_64 tu8_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,loc2);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("decode_special_natural_64", 157, Current, 2, 2, 1681);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_spec_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc2 = *(EIF_REFERENCE *)(Current);
	for (;;) {
		RTHOOK(3);
		if ((EIF_BOOLEAN)(loc1 == arg2)) break;
		RTHOOK(4);
		tu8_1 = (nstcall = 1, F64_901(RTCW(loc2)));
		(nstcall = 1, F762_4178(RTCW(arg1), tu8_1));
		RTHOOK(5);
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {SED_SESSION_DESERIALIZER}.decode_special_integer_8 */
void F158_1668 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_8 ti1_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,loc2);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("decode_special_integer_8", 157, Current, 2, 2, 1682);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_spec_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc2 = *(EIF_REFERENCE *)(Current);
	for (;;) {
		RTHOOK(3);
		if ((EIF_BOOLEAN)(loc1 == arg2)) break;
		RTHOOK(4);
		ti1_1 = (nstcall = 1, F64_902(RTCW(loc2)));
		(nstcall = 1, F771_4178(RTCW(arg1), ti1_1));
		RTHOOK(5);
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {SED_SESSION_DESERIALIZER}.decode_special_integer_16 */
void F158_1669 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_16 ti2_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,loc2);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("decode_special_integer_16", 157, Current, 2, 2, 1683);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_spec_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc2 = *(EIF_REFERENCE *)(Current);
	for (;;) {
		RTHOOK(3);
		if ((EIF_BOOLEAN)(loc1 == arg2)) break;
		RTHOOK(4);
		ti2_1 = (nstcall = 1, F64_903(RTCW(loc2)));
		(nstcall = 1, F770_4178(RTCW(arg1), ti2_1));
		RTHOOK(5);
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {SED_SESSION_DESERIALIZER}.decode_special_integer_32 */
void F158_1670 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,loc2);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("decode_special_integer_32", 157, Current, 2, 2, 1684);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_spec_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc2 = *(EIF_REFERENCE *)(Current);
	for (;;) {
		RTHOOK(3);
		if ((EIF_BOOLEAN)(loc1 == arg2)) break;
		RTHOOK(4);
		ti4_1 = (nstcall = 1, F64_904(RTCW(loc2)));
		(nstcall = 1, F761_4178(RTCW(arg1), ti4_1));
		RTHOOK(5);
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {SED_SESSION_DESERIALIZER}.decode_special_integer_64 */
void F158_1671 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_64 ti8_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,loc2);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("decode_special_integer_64", 157, Current, 2, 2, 1685);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_spec_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc2 = *(EIF_REFERENCE *)(Current);
	for (;;) {
		RTHOOK(3);
		if ((EIF_BOOLEAN)(loc1 == arg2)) break;
		RTHOOK(4);
		ti8_1 = (nstcall = 1, F64_905(RTCW(loc2)));
		(nstcall = 1, F772_4178(RTCW(arg1), ti8_1));
		RTHOOK(5);
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {SED_SESSION_DESERIALIZER}.decode_special_real_32 */
void F158_1672 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REAL_32 tr4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,loc2);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("decode_special_real_32", 157, Current, 2, 2, 1686);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_spec_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc2 = *(EIF_REFERENCE *)(Current);
	for (;;) {
		RTHOOK(3);
		if ((EIF_BOOLEAN)(loc1 == arg2)) break;
		RTHOOK(4);
		tr4_1 = (nstcall = 1, F64_906(RTCW(loc2)));
		(nstcall = 1, F768_4178(RTCW(arg1), tr4_1));
		RTHOOK(5);
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {SED_SESSION_DESERIALIZER}.decode_special_real_64 */
void F158_1673 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REAL_64 tr8_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,loc2);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("decode_special_real_64", 157, Current, 2, 2, 1687);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_spec_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc2 = *(EIF_REFERENCE *)(Current);
	for (;;) {
		RTHOOK(3);
		if ((EIF_BOOLEAN)(loc1 == arg2)) break;
		RTHOOK(4);
		tr8_1 = (nstcall = 1, F64_907(RTCW(loc2)));
		(nstcall = 1, F769_4178(RTCW(arg1), tr8_1));
		RTHOOK(5);
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {SED_SESSION_DESERIALIZER}.decode_special_pointer */
void F158_1674 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,loc2);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("decode_special_pointer", 157, Current, 2, 2, 1688);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_spec_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc2 = *(EIF_REFERENCE *)(Current);
	for (;;) {
		RTHOOK(3);
		if ((EIF_BOOLEAN)(loc1 == arg2)) break;
		RTHOOK(4);
		tp1 = (nstcall = 1, F64_908(RTCW(loc2)));
		(nstcall = 1, F765_4178(RTCW(arg1), tp1));
		RTHOOK(5);
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {SED_SESSION_DESERIALIZER}.decode_special_reference */
void F158_1675 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc2 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,arg1);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,loc5);
	RTLIU(6);
	
	RTEAA("decode_special_reference", 157, Current, 5, 2, 1689);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc3 = *(EIF_REFERENCE *)(Current);
	RTHOOK(2);
	if ((EIF_BOOLEAN) (*(EIF_NATURAL_32 *)(Current + O1481[dtype-157]) >= ((EIF_NATURAL_32) 4U))) {
		RTHOOK(3);
		tb1 = (nstcall = 1, F63_859(RTCW(loc3)));
		loc2 = (EIF_BOOLEAN) tb1;
	}
	RTHOOK(4);
	if ((EIF_BOOLEAN) !loc2) {
		for (;;) {
			RTHOOK(5);
			if ((EIF_BOOLEAN)(loc1 == arg2)) break;
			RTHOOK(6);
			tr1 = (nstcall = 0, F158_1652(Current));
			tr2 = RTCCL(tr1);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R3411[Dtype(RTCW(arg1))-759])(arg1, tr2, loc1));
			RTHOOK(7);
			loc1++;
		}
	} else {
		for (;;) {
			RTHOOK(8);
			if ((EIF_BOOLEAN)(loc1 == arg2)) break;
			RTHOOK(9);
			tb1 = (nstcall = 1, F63_859(RTCW(loc3)));
			if (tb1) {
				RTHOOK(10);
				ti4_1 = (nstcall = 1, F63_871(RTCW(loc3)));
				loc4 = (nstcall = 0, F158_1642(Current, ti4_1));
				RTHOOK(11);
				if ((EIF_BOOLEAN) (loc4 < ((EIF_INTEGER_32) 0L))) {
					RTHOOK(12);
					tr1 = RTOUCR(155,(nstcall = 0, F158_1639), (Current));
					tr2 = RTMS_EX_H("Cannot read object type. Corrupted data!",40,1055785505);
					tr2 = (nstcall = 1, F22_292(RTCW(tr1), tr2));
					(nstcall = 0, F158_1645(Current, tr2));
				} else {
					RTHOOK(13);
					loc5 = RTLNS(eif_new_type(195, 0x01).id, 195, _OBJSIZ_1_0_0_2_0_0_0_0_);
					tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
					tr2 = (nstcall = 1, F192_2324(RTCW(tr1), loc4));
					tr1 = RTCCL(tr2);
					(nstcall = -1, F196_2468(RTCW(loc5), tr1));
					RTHOOK(14);
					(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1498[dtype-157])(Current, loc5));
					RTHOOK(15);
					tr1 = (nstcall = 1, F196_2471(RTCW(loc5)));
					tr2 = RTCCL(tr1);
					(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R3411[Dtype(RTCW(arg1))-759])(arg1, tr2, loc1));
				}
			} else {
				RTHOOK(16);
				tr1 = (nstcall = 0, F158_1652(Current));
				tr2 = RTCCL(tr1);
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R3411[Dtype(RTCW(arg1))-759])(arg1, tr2, loc1));
			}
			RTHOOK(17);
			loc1++;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(18);
	RTLE;
	RTEE;
}

/* {SED_SESSION_DESERIALIZER}.memory */
static EIF_REFERENCE F158_1676_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(157)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("memory", 157, Current, 0, 0, 1690);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(212, 0x01).id, 212, _OBJSIZ_0_0_0_0_0_0_0_0_);
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("memory_not_void", EX_POST);
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

EIF_REFERENCE F158_1676 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(157,F158_1676_body,(Current));
}

/* {SED_SESSION_DESERIALIZER}._invariant */
void F158_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTEAINV(l_feature_name, 136, Current, 0, 0);
	RTIT("reflector_not_void", Current);
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_3_) != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("reflected_object_not_void", Current);
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_4_) != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("deserializer_not_void", Current);
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("object_references_not_void", Current);
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_5_) != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit137 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
