/*
 * Code for class SED_STORABLE_FACILITIES
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "se146.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {SED_STORABLE_FACILITIES}.session_store */
void F167_1808 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_BOOLEAN arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc1);
	RTLR(3,Current);
	RTLR(4,tr1);
	RTLIU(5);
	
	RTEAA("session_store", 166, Current, 1, 3, 1823);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("an_object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_writer_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_writer_ready", EX_PRE);
		tb1 = (nstcall = 1, F181_2074(RTCW(arg2)));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	loc1 = (nstcall = 0, F167_1824(Current, arg2));
	RTHOOK(5);
	(nstcall = 1, F181_2070(RTCW(arg2)));
	RTHOOK(6);
	(nstcall = 1, F64_911(RTCW(arg2), ((EIF_NATURAL_32) 1U)));
	RTHOOK(7);
	tr1 = RTCCL(arg1);
	(nstcall = 1, F90_1184(RTCW(loc1), tr1));
	RTHOOK(8);
	(nstcall = 1, F90_1186(RTCW(loc1)));
	RTHOOK(9);
	(nstcall = 1, F181_2072(RTCW(arg2)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
}

/* {SED_STORABLE_FACILITIES}.basic_store */
void F167_1809 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_BOOLEAN arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc1);
	RTLR(3,Current);
	RTLR(4,tr1);
	RTLIU(5);
	
	RTEAA("basic_store", 166, Current, 1, 3, 1824);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("an_object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_writer_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_writer_ready", EX_PRE);
		tb1 = (nstcall = 1, F181_2074(RTCW(arg2)));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	loc1 = (nstcall = 0, F167_1825(Current, arg2));
	RTHOOK(5);
	(nstcall = 1, F181_2070(RTCW(arg2)));
	RTHOOK(6);
	(nstcall = 1, F64_911(RTCW(arg2), ((EIF_NATURAL_32) 2U)));
	RTHOOK(7);
	tr1 = RTCCL(arg1);
	(nstcall = 1, F90_1184(RTCW(loc1), tr1));
	RTHOOK(8);
	(nstcall = 1, F90_1186(RTCW(loc1)));
	RTHOOK(9);
	(nstcall = 1, F181_2072(RTCW(arg2)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
}

/* {SED_STORABLE_FACILITIES}.independent_store */
void F167_1810 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_BOOLEAN arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc1);
	RTLR(3,Current);
	RTLR(4,tr1);
	RTLIU(5);
	
	RTEAA("independent_store", 166, Current, 1, 3, 1825);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("an_object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_writer_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_writer_ready", EX_PRE);
		tb1 = (nstcall = 1, F181_2074(RTCW(arg2)));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	loc1 = (nstcall = 0, F167_1826(Current, arg2));
	RTHOOK(5);
	(nstcall = 1, F181_2070(RTCW(arg2)));
	RTHOOK(6);
	(nstcall = 1, F64_911(RTCW(arg2), ((EIF_NATURAL_32) 4U)));
	RTHOOK(7);
	tr1 = RTCCL(arg1);
	(nstcall = 1, F90_1184(RTCW(loc1), tr1));
	RTHOOK(8);
	(nstcall = 1, F90_1186(RTCW(loc1)));
	RTHOOK(9);
	(nstcall = 1, F181_2072(RTCW(arg2)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
}

/* {SED_STORABLE_FACILITIES}.store */
void F167_1811 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc1);
	RTLR(3,Current);
	RTLR(4,tr1);
	RTLIU(5);
	
	RTEAA("store", 166, Current, 1, 2, 1826);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("an_object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_writer_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_writer_ready", EX_PRE);
		tb1 = (nstcall = 1, F181_2074(RTCW(arg2)));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	loc1 = (nstcall = 0, F167_1826(Current, arg2));
	RTHOOK(5);
	(nstcall = 1, F181_2070(RTCW(arg2)));
	RTHOOK(6);
	(nstcall = 1, F64_911(RTCW(arg2), ((EIF_NATURAL_32) 4U)));
	RTHOOK(7);
	tr1 = RTCCL(arg1);
	(nstcall = 1, F90_1184(RTCW(loc1), tr1));
	RTHOOK(8);
	(nstcall = 1, F90_1186(RTCW(loc1)));
	RTHOOK(9);
	(nstcall = 1, F181_2072(RTCW(arg2)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
}

/* {SED_STORABLE_FACILITIES}.store_in_medium */
void F167_1812 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,Current);
	RTLIU(5);
	
	RTEAA("store_in_medium", 166, Current, 0, 2, 1827);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("an_object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_medium_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_medium_writable", EX_PRE);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2405[Dtype(RTCW(arg2))-221])(arg2));
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(4);
		RTCT("a_medium_support_storable", EX_PRE);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2412[Dtype(RTCW(arg2))-221])(arg2));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTCCL(arg1);
	tr2 = RTLNS(eif_new_type(180, 0x01).id, 180, _OBJSIZ_2_4_0_3_0_0_0_0_);
	(nstcall = -1, F181_2067(RTCW(tr2), arg2));
	(nstcall = 0, F167_1811(Current, tr1, tr2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {SED_STORABLE_FACILITIES}.retrieved */
EIF_REFERENCE F167_1813 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_BOOLEAN arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,loc2);
	RTLR(4,tr1);
	RTLR(5,tr2);
	RTLR(6,Result);
	RTLIU(7);
	
	RTEAA("retrieved", 166, Current, 2, 2, 1828);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_reader_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_reader_ready", EX_PRE);
		tb1 = (nstcall = 1, F181_2073(RTCW(arg1)));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	(nstcall = 1, F181_2069(RTCW(arg1)));
	RTHOOK(4);
	tu4_1 = (nstcall = 1, F64_900(RTCW(arg1)));
	switch (tu4_1) {
		case 1U:
			RTHOOK(5);
			loc1 = (nstcall = 0, F167_1821(Current, arg1));
			break;
		case 2U:
			RTHOOK(6);
			loc1 = (nstcall = 0, F167_1822(Current, arg1));
			break;
		case 4U:
			RTHOOK(7);
			loc1 = (nstcall = 0, F167_1823(Current, arg1));
			break;
		case 3U:
			RTHOOK(8);
			{
				static EIF_TYPE_INDEX typarr0[] = {824,0xFF01,22,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				loc2 = RTLNSMART(typres0.id);
			}
			(nstcall = -1, F825_4344(RTCW(loc2), ((EIF_INTEGER_32) 1L)));
			RTHOOK(9);
			tr1 = RTLNS(eif_new_type(21, 0x01).id, 21, _OBJSIZ_0_0_0_0_0_0_0_0_);
			tr2 = (nstcall = 1, F22_295(RTCW(tr1)));
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2955[Dtype(RTCW(loc2))-564])(loc2, tr2));
			RTHOOK(10);
			RTAR(Current, loc2);
			*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) loc2;
			break;
		default:
			RTHOOK(11);
			{
				static EIF_TYPE_INDEX typarr0[] = {824,0xFF01,22,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				loc2 = RTLNSMART(typres0.id);
			}
			(nstcall = -1, F825_4344(RTCW(loc2), ((EIF_INTEGER_32) 1L)));
			RTHOOK(12);
			tr1 = RTLNS(eif_new_type(21, 0x01).id, 21, _OBJSIZ_0_0_0_0_0_0_0_0_);
			tr2 = (nstcall = 1, F22_294(RTCW(tr1)));
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2955[Dtype(RTCW(loc2))-564])(loc2, tr2));
			RTHOOK(13);
			RTAR(Current, loc2);
			*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) loc2;
			break;
	}
	RTHOOK(14);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTHOOK(15);
		(nstcall = 1, F158_1632(RTCW(loc1), arg2));
		RTHOOK(16);
		tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_2_);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
		RTHOOK(17);
		tb1 = (nstcall = 1, F158_1630(RTCW(loc1)));
		if ((EIF_BOOLEAN) !tb1) {
			RTHOOK(18);
			tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_1_);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(19);
			(nstcall = 1, F63_847(RTCW(arg1)));
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(20);
	RTLE;
	RTEE;
	return Result;
}

/* {SED_STORABLE_FACILITIES}.retrieved_from_medium */
EIF_REFERENCE F167_1814 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("retrieved_from_medium", 166, Current, 0, 1, 1829);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_medium_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_medium_open_for_reading", EX_PRE);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2404[Dtype(RTCW(arg1))-221])(arg1));
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_medium_support_storable", EX_PRE);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2412[Dtype(RTCW(arg1))-221])(arg1));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tr1 = RTLNS(eif_new_type(180, 0x01).id, 180, _OBJSIZ_2_4_0_3_0_0_0_0_);
	(nstcall = -1, F181_2066(RTCW(tr1), arg1));
	Result = (nstcall = 0, F167_1813(Current, tr1, (EIF_BOOLEAN) 0));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {SED_STORABLE_FACILITIES}.retrieved_error */
EIF_REFERENCE F167_1815 (EIF_REFERENCE Current)
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
	
	RTEAA("retrieved_error", 166, Current, 1, 0, 1830);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = '\0';
	tr1 = *(EIF_REFERENCE *)(Current);
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

/* {SED_STORABLE_FACILITIES}.retrieved_errors */
EIF_REFERENCE F167_1816 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {SED_STORABLE_FACILITIES}.session_deserializer */
EIF_REFERENCE F167_1821 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("session_deserializer", 166, Current, 0, 1, 1836);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_reader_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_reader_ready", EX_PRE);
		tb1 = (nstcall = 1, F181_2073(RTCW(arg1)));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	Result = RTOUCR(55,(nstcall = 0, F167_1827), (Current, arg1));
	RTHOOK(4);
	(nstcall = 1, F158_1631(RTCW(Result), arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("session_deserializer_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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

/* {SED_STORABLE_FACILITIES}.basic_deserializer */
EIF_REFERENCE F167_1822 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("basic_deserializer", 166, Current, 0, 1, 1837);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_reader_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_reader_ready", EX_PRE);
		tb1 = (nstcall = 1, F181_2073(RTCW(arg1)));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	Result = RTOUCR(56,(nstcall = 0, F167_1828), (Current, arg1));
	RTHOOK(4);
	(nstcall = 1, F158_1631(RTCW(Result), arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("basic_deserializer_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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

/* {SED_STORABLE_FACILITIES}.recoverable_deserializer */
EIF_REFERENCE F167_1823 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("recoverable_deserializer", 166, Current, 0, 1, 1838);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_reader_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_reader_ready", EX_PRE);
		tb1 = (nstcall = 1, F181_2073(RTCW(arg1)));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	Result = RTOUCR(57,(nstcall = 0, F167_1829), (Current, arg1));
	RTHOOK(4);
	(nstcall = 1, F158_1631(RTCW(Result), arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("recoverable_deserializer_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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

/* {SED_STORABLE_FACILITIES}.session_serializer */
EIF_REFERENCE F167_1824 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("session_serializer", 166, Current, 0, 1, 1839);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_writer_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_writer_ready", EX_PRE);
		tb1 = (nstcall = 1, F181_2074(RTCW(arg1)));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	Result = RTOUCR(58,(nstcall = 0, F167_1830), (Current, arg1));
	RTHOOK(4);
	(nstcall = 1, F90_1185(RTCW(Result), arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("session_serializer_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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

/* {SED_STORABLE_FACILITIES}.basic_serializer */
EIF_REFERENCE F167_1825 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("basic_serializer", 166, Current, 0, 1, 1840);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_writer_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_writer_ready", EX_PRE);
		tb1 = (nstcall = 1, F181_2074(RTCW(arg1)));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	Result = RTOUCR(59,(nstcall = 0, F167_1831), (Current, arg1));
	RTHOOK(4);
	(nstcall = 1, F90_1185(RTCW(Result), arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("basic_serializer_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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

/* {SED_STORABLE_FACILITIES}.recoverable_serializer */
EIF_REFERENCE F167_1826 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("recoverable_serializer", 166, Current, 0, 1, 1841);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_writer_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_writer_ready", EX_PRE);
		tb1 = (nstcall = 1, F181_2074(RTCW(arg1)));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	Result = RTOUCR(60,(nstcall = 0, F167_1832), (Current, arg1));
	RTHOOK(4);
	(nstcall = 1, F90_1185(RTCW(Result), arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("independent_serializer_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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

/* {SED_STORABLE_FACILITIES}.internal_session_deserializer */
static EIF_REFERENCE F167_1827_body (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(55)

	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("internal_session_deserializer", 166, Current, 0, 1, 1842);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_reader_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_reader_ready", EX_PRE);
		tb1 = (nstcall = 1, F181_2073(RTCW(arg1)));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTOTP;
	RTHOOK(3);
	tr1 = RTLNS(eif_new_type(157, 0x01).id, 157, _OBJSIZ_7_1_0_1_0_0_0_0_);
	(nstcall = -1, F158_1625(RTCW(tr1), arg1));
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("session_deserializer_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F167_1827 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	return RTOUCR(55,F167_1827_body,(Current,arg1));
}

/* {SED_STORABLE_FACILITIES}.internal_basic_deserializer */
static EIF_REFERENCE F167_1828_body (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(56)

	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("internal_basic_deserializer", 166, Current, 0, 1, 1843);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_reader_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_reader_ready", EX_PRE);
		tb1 = (nstcall = 1, F181_2073(RTCW(arg1)));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTOTP;
	RTHOOK(3);
	tr1 = RTLNS(eif_new_type(158, 0x01).id, 158, _OBJSIZ_7_1_0_1_0_0_0_0_);
	(nstcall = -1, F158_1625(RTCW(tr1), arg1));
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("basic_deserializer_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F167_1828 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	return RTOUCR(56,F167_1828_body,(Current,arg1));
}

/* {SED_STORABLE_FACILITIES}.internal_recoverable_deserializer */
static EIF_REFERENCE F167_1829_body (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(57)

	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("internal_recoverable_deserializer", 166, Current, 0, 1, 1819);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_reader_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_reader_ready", EX_PRE);
		tb1 = (nstcall = 1, F181_2073(RTCW(arg1)));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTOTP;
	RTHOOK(3);
	tr1 = RTLNS(eif_new_type(823, 0x01).id, 823, _OBJSIZ_12_5_0_1_0_0_0_0_);
	(nstcall = -1, F824_4312(RTCW(tr1), arg1));
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("recoverable_deserializer_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F167_1829 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	return RTOUCR(57,F167_1829_body,(Current,arg1));
}

/* {SED_STORABLE_FACILITIES}.internal_session_serializer */
static EIF_REFERENCE F167_1830_body (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(58)

	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("internal_session_serializer", 166, Current, 0, 1, 1820);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_writer_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_writer_ready", EX_PRE);
		tb1 = (nstcall = 1, F181_2074(RTCW(arg1)));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTOTP;
	RTHOOK(3);
	tr1 = RTLNS(eif_new_type(89, 0x01).id, 89, _OBJSIZ_5_2_0_1_0_0_0_0_);
	(nstcall = -1, F90_1177(RTCW(tr1), arg1));
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("session_serializer_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F167_1830 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	return RTOUCR(58,F167_1830_body,(Current,arg1));
}

/* {SED_STORABLE_FACILITIES}.internal_basic_serializer */
static EIF_REFERENCE F167_1831_body (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(59)

	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("internal_basic_serializer", 166, Current, 0, 1, 1821);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_writer_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_writer_ready", EX_PRE);
		tb1 = (nstcall = 1, F181_2074(RTCW(arg1)));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTOTP;
	RTHOOK(3);
	tr1 = RTLNS(eif_new_type(90, 0x01).id, 90, _OBJSIZ_5_2_0_1_0_0_0_0_);
	(nstcall = -1, F90_1177(RTCW(tr1), arg1));
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("basic_serializer_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F167_1831 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	return RTOUCR(59,F167_1831_body,(Current,arg1));
}

/* {SED_STORABLE_FACILITIES}.internal_recoverable_serializer */
static EIF_REFERENCE F167_1832_body (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(60)

	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("internal_recoverable_serializer", 166, Current, 0, 1, 1822);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_writer_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_writer_ready", EX_PRE);
		tb1 = (nstcall = 1, F181_2074(RTCW(arg1)));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTOTP;
	RTHOOK(3);
	tr1 = RTLNS(eif_new_type(91, 0x01).id, 91, _OBJSIZ_5_2_0_1_0_0_0_0_);
	(nstcall = -1, F90_1177(RTCW(tr1), arg1));
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("internal_recoverable_serializer_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F167_1832 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	return RTOUCR(60,F167_1832_body,(Current,arg1));
}

void EIF_Minit146 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
