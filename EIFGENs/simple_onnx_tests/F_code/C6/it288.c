/*
 * Code for class ITP_INTERPRETER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "it288.h"
#include "eif_plug.h"
#include "eif_out.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ITP_INTERPRETER}.execute */
void F991_6804 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLIU(6);
	
	RTEAA("execute", 990, Current, 3, 0, 13720);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN)((nstcall = 0, F389_3342(Current)) != ((EIF_INTEGER_32) 5L))) {
		
	}
	RTHOOK(2);
	loc2 = (nstcall = 0, F389_3328(Current, ((EIF_INTEGER_32) 1L)));
	RTHOOK(3);
	tr1 = (nstcall = 0, F389_3328(Current, ((EIF_INTEGER_32) 2L)));
	ti4_1 = (nstcall = 1, F965_5995(RTCW(tr1)));
	loc3 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	tr1 = (nstcall = 0, F389_3328(Current, ((EIF_INTEGER_32) 3L)));
	ti4_1 = (nstcall = 1, F965_5995(RTCW(tr1)));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_8_4_0_3_) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(5);
	tr1 = (nstcall = 0, F389_3328(Current, ((EIF_INTEGER_32) 4L)));
	ti4_1 = (nstcall = 1, F965_5995(RTCW(tr1)));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_8_4_0_4_) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(6);
	loc1 = (nstcall = 0, F389_3328(Current, ((EIF_INTEGER_32) 5L)));
	RTHOOK(7);
	tr1 = RTLNSMART(eif_new_type(969, 1).id);
	(nstcall = -1, F968_6060(RTCW(tr1), ((EIF_INTEGER_32) 4096L)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	RTHOOK(8);
	tr1 = RTLNSMART(eif_new_type(969, 1).id);
	(nstcall = -1, F968_6060(RTCW(tr1), ((EIF_INTEGER_32) 4096L)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	RTHOOK(9);
	tr1 = RTLNSMART(eif_new_type(103, 1).id);
	(nstcall = -1, F104_1317(RTCW(tr1)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_7_) = (EIF_REFERENCE) tr1;
	RTHOOK(10);
	tr1 = RTLNSMART(eif_new_type(645, 1).id);
	(nstcall = -1, F646_3764(RTCW(tr1), loc1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	RTHOOK(11);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	(nstcall = 1, F644_3555(RTCW(tr1)));
	RTHOOK(12);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tb1 = (nstcall = 1, F644_3544(RTCW(tr1)));
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(13);
		tr1 = RTMS_EX_H("could not open log file \'",25,1960246567);
		tr2 = RTLNS(eif_new_type(46, 0x00).id, 46, _OBJSIZ_0_0_0_0_0_0_0_0_);
		tr3 = (nstcall = 0, F47_648(RTCW(tr2), loc1));
		tr2 = (nstcall = 1, F970_6192(tr1, tr3));
		tr1 = RTMS_EX_H("\'.",2,10030);
		tr1 = (nstcall = 1, F970_6192(RTCW(tr2), tr1));
		(nstcall = 0, F991_6815(Current, tr1));
		RTHOOK(14);
		(nstcall = 0, F161_1731(Current, ((EIF_INTEGER_32) 1L)));
	}
	RTHOOK(15);
	tr1 = RTLNS(eif_new_type(177, 0x01).id, 177, _OBJSIZ_0_0_0_0_0_0_0_0_);
	tr2 = (nstcall = 1, F178_1977(RTCW(tr1)));
	(nstcall = 0, F991_6805(Current, loc3, tr2));
	RTHOOK(16);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	(nstcall = 1, F644_3570(RTCW(tr1)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(17);
	RTLE;
	RTEE;
}

/* {ITP_INTERPRETER}.start */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F991_6805 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	RTED;
	EIF_REFERENCE EIF_VOLATILE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	RTS_SDX;
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	RTXD;
	
	RTLI(7);
	RTLR(0,arg2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,loc1);
	RTLR(5,tr2);
	RTLR(6,saved_except);
	RTLIU(7);
	RTXSLS;
	
	RTEAA("start", 990, Current, 2, 2, 13721);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_server_url_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_port_valid", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTE_T
	RTHOOK(3);
	tr1 = RTLNSMART(eif_new_type(221, 1).id);
	(nstcall = -1, F222_2943(RTCW(tr1), arg2, arg1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_4_) = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	(nstcall = 1, F221_2888(RTCW(tr1)));
	RTHOOK(5);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	(nstcall = 1, F221_2919(RTCW(tr1)));
	RTHOOK(6);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	(nstcall = 1, F222_2960(RTCW(tr1)));
	RTHOOK(7);
	tr1 = RTMS_EX_H("<session>\012",10,2092833802);
	(nstcall = 0, F991_6819(Current, tr1));
	RTHOOK(8);
	(nstcall = 0, F991_6841(Current));
	RTHOOK(9);
	tr1 = RTMS_EX_H("</session>\012",11,1634789130);
	(nstcall = 0, F991_6819(Current, tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTE_E
	RTXSC;
	RTS_SRR
	RTHOOK(10);
	tr1 = (nstcall = 0, F161_1722(Current));
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		RTHOOK(11);
		tr1 = (nstcall = 1, F1_14(loc2));
		loc1 = (EIF_REFERENCE) tr1;
		RTHOOK(12);
		tr1 = RTMS_EX_H("\012",1,10);
		tr2 = RTMS_EX_H(" ",1,32);
		(nstcall = 1, F970_6150(RTCW(loc1), tr1, tr2));
		RTHOOK(13);
		(nstcall = 0, F991_6816(Current, loc2));
	} else {
		RTHOOK(14);
		loc1 = RTMS_EX_H("Unknown error",13,1947251314);
		RTHOOK(15);
		(nstcall = 0, F991_6816(Current, loc1));
	}
	RTHOOK(16);
	tr1 = RTMS_EX_H("</session>\012",11,1634789130);
	(nstcall = 0, F991_6819(Current, tr1));
	RTHOOK(17);
	tr1 = RTMS_EX_H("internal. ",10,1834071328);
	tr2 = (nstcall = 1, F970_6192(tr1, loc1));
	(nstcall = 0, F991_6815(Current, tr2));
	RTHOOK(18);
	(nstcall = 0, F161_1731(Current, ((EIF_INTEGER_32) 1L)));
	/* NOTREACHED */
	RTE_EE
	RTHOOK(19);
	RTEOK;
	RTLE;
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {ITP_INTERPRETER}.has_error */
EIF_BOOLEAN F991_6806 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_8_0_);
}


/* {ITP_INTERPRETER}.is_last_protected_execution_successfull */
EIF_BOOLEAN F991_6807 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_8_1_);
}


/* {ITP_INTERPRETER}.should_quit */
EIF_BOOLEAN F991_6808 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_8_2_);
}


/* {ITP_INTERPRETER}.is_request_type_valid */
EIF_BOOLEAN F991_6809 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_request_type_valid", 990, Current, 0, 1, 13725);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = '\01';
	tb1 = '\01';
	tb2 = '\01';
	tu4_1 = (EIF_NATURAL_32) ((EIF_NATURAL_8) 1U);
	if (!(EIF_BOOLEAN)(arg1 == tu4_1)) {
		tu4_1 = (EIF_NATURAL_32) ((EIF_NATURAL_8) 2U);
		tb2 = (EIF_BOOLEAN)(arg1 == tu4_1);
	}
	if (!tb2) {
		tu4_1 = (EIF_NATURAL_32) ((EIF_NATURAL_8) 3U);
		tb1 = (EIF_BOOLEAN)(arg1 == tu4_1);
	}
	if (!tb1) {
		tu4_1 = (EIF_NATURAL_32) ((EIF_NATURAL_8) 4U);
		Result = (EIF_BOOLEAN)(arg1 == tu4_1);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {ITP_INTERPRETER}.report_type_request */
void F991_6810 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,loc6);
	RTLR(2,tr1);
	RTLR(3,loc4);
	RTLR(4,loc3);
	RTLR(5,loc5);
	RTLR(6,tr2);
	RTLIU(7);
	
	RTEAA("report_type_request", 990, Current, 6, 0, 13726);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("last_request_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_5_) != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("last_request_is_type_request", EX_PRE);
		tu4_1 = (EIF_NATURAL_32) ((EIF_NATURAL_8) 4U);
		RTTE((EIF_BOOLEAN)(*(EIF_NATURAL_32 *)(Current+ _LNGOFF_8_4_0_0_) == tu4_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
	loc6 = RTCCL(tr1);
	loc6 = RTRV(eif_new_type(969, 0x01),loc6);
	if (EIF_TEST(loc6)) {
		RTHOOK(4);
		tr1 = RTMS_EX_H("report_type_request start\012",26,957565962);
		(nstcall = 0, F991_6819(Current, tr1));
		RTHOOK(5);
		ti4_1 = (nstcall = 1, F965_5995(loc6));
		loc2 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(6);
		loc4 = *(EIF_REFERENCE *)(Current + _REFACS_7_);
		RTHOOK(7);
		tb1 = (nstcall = 1, F104_1318(RTCW(loc4), loc2));
		if (tb1) {
			RTHOOK(8);
			tr1 = (nstcall = 1, F104_1320(RTCW(loc4), loc2));
			loc3 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(9);
			if ((EIF_BOOLEAN)(loc3 == NULL)) {
				RTHOOK(10);
				loc5 = RTLNS(eif_new_type(969, 0x01).id, 969, _OBJSIZ_1_1_0_3_0_0_0_0_);
				(nstcall = -1, F968_6060(RTCW(loc5), ((EIF_INTEGER_32) 4L)));
				RTHOOK(11);
				tr1 = RTOUCR(5,(nstcall = 0, F162_1736), (Current));
				(nstcall = 1, F970_6173(RTCW(loc5), tr1));
			} else {
				RTHOOK(12);
				loc5 = RTLNS(eif_new_type(969, 0x01).id, 969, _OBJSIZ_1_1_0_3_0_0_0_0_);
				(nstcall = -1, F968_6060(RTCW(loc5), ((EIF_INTEGER_32) 64L)));
				RTHOOK(13);
				loc1 = (nstcall = 0, F45_530(Current, (EIF_BOOLEAN) 0));
				RTHOOK(14);
				tr1 = (nstcall = 1, F1_5(loc3));
				tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3734[Dtype(RTCW(tr1))-855])(tr1));
				(nstcall = 1, F970_6173(RTCW(loc5), tr2));
				RTHOOK(15);
				tb1 = (nstcall = 0, F45_530(Current, loc1));
				loc1 = (EIF_BOOLEAN) tb1;
			}
			RTHOOK(16);
			(nstcall = 0, F991_6832(Current, loc5));
		} else {
			RTHOOK(17);
			tr1 = RTMS_EX_H("Variable `v_",12,2047370847);
			tr2 = eif_out__i4_s1(loc2);
			tr2 = (nstcall = 1, F970_6192(tr1, tr2));
			tr1 = RTMS_EX_H("\' not defined.",14,1968768302);
			tr1 = (nstcall = 1, F970_6192(RTCW(tr2), tr1));
			(nstcall = 0, F991_6815(Current, tr1));
		}
		RTHOOK(18);
		tr1 = RTMS_EX_H("report_type_request end\012",24,1859005706);
		(nstcall = 0, F991_6819(Current, tr1));
	} else {
		RTHOOK(19);
		tr1 = RTOUCR(6,(nstcall = 0, F991_6842), (Current));
		(nstcall = 0, F991_6815(Current, tr1));
	}
	RTHOOK(20);
	(nstcall = 0, F991_6814(Current));
	RTHOOK(21);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,886,0xFF01,969,0xFF01,969,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNTS(typres0.id, 3, 0);
	}
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	((EIF_TYPED_VALUE *)tr1+1)->it_r = tr2;
	RTAR(tr1,tr2);
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	((EIF_TYPED_VALUE *)tr1+2)->it_r = tr2;
	RTAR(tr1,tr2);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_6_) = (EIF_REFERENCE) tr1;
	RTHOOK(22);
	(nstcall = 0, F991_6831(Current));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(23);
	RTLE;
	RTEE;
}

/* {ITP_INTERPRETER}.report_quit_request */
void F991_6811 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("report_quit_request", 990, Current, 0, 0, 13727);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_8_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {ITP_INTERPRETER}.report_start_request */
void F991_6812 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("report_start_request", 990, Current, 0, 0, 13728);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {ITP_INTERPRETER}.report_execute_request */
void F991_6813 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_NATURAL_32 tu4_1;
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,loc3);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,loc2);
	RTLR(5,tr2);
	RTLIU(6);
	
	RTEAA("report_execute_request", 990, Current, 3, 0, 13729);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("last_request_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_5_) != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("last_request_is_execute_request", EX_PRE);
		tu4_1 = (EIF_NATURAL_32) ((EIF_NATURAL_8) 3U);
		RTTE((EIF_BOOLEAN)(*(EIF_NATURAL_32 *)(Current+ _LNGOFF_8_4_0_0_) == tu4_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
	loc3 = RTCCL(tr1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,886,969,0,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		loc3 = RTRV(typres0,loc3);
	}
	if (EIF_TEST(loc3)) {
		RTHOOK(4);
		tr1 = eif_boxed_item(loc3,1);
		loc1 = (EIF_REFERENCE) tr1;
		RTHOOK(5);
		if ((EIF_BOOLEAN)(loc1 == NULL)) {
			RTHOOK(6);
			tr1 = RTOUCR(7,(nstcall = 0, F991_6843), (Current));
			(nstcall = 0, F991_6815(Current, tr1));
		} else {
			RTHOOK(7);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_1_1_0_2_);
			if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
				RTHOOK(8);
				tr1 = RTOUCR(8,(nstcall = 0, F991_6844), (Current));
				(nstcall = 0, F991_6815(Current, tr1));
			} else {
				RTHOOK(9);
				tr1 = RTMS_EX_H("report_execute_request start\012",29,2074241802);
				(nstcall = 0, F991_6819(Current, tr1));
				RTHOOK(10);
				loc2 = RTLNS(eif_new_type(175, 0x01).id, 175, _OBJSIZ_1_0_0_1_0_0_0_0_);
				(nstcall = -1, F176_1848(RTCW(loc2), loc1));
				RTHOOK(11);
				ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_8_4_0_3_);
				ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_8_4_0_4_);
				tp1 = (nstcall = 1, F176_1870(RTCW(loc2)));
				ti4_3 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_1_1_0_2_);
				(nstcall = 0, F168_1834(Current, ti4_1, ti4_2, tp1, ti4_3));
				RTHOOK(12);
				(nstcall = 0, F991_6837(Current));
				RTHOOK(13);
				tr1 = RTMS_EX_H("report_execute_request end\012",27,650573834);
				(nstcall = 0, F991_6819(Current, tr1));
			}
		}
	} else {
		RTHOOK(14);
		tr1 = RTOUCR(6,(nstcall = 0, F991_6842), (Current));
		(nstcall = 0, F991_6815(Current, tr1));
	}
	RTHOOK(15);
	(nstcall = 0, F991_6814(Current));
	RTHOOK(16);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,886,0xFF01,969,0xFF01,969,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTS(typres0.id, 3, 0);
	}
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	((EIF_TYPED_VALUE *)tr1+1)->it_r = tr2;
	RTAR(tr1,tr2);
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	((EIF_TYPED_VALUE *)tr1+2)->it_r = tr2;
	RTAR(tr1,tr2);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_6_) = (EIF_REFERENCE) tr1;
	RTHOOK(17);
	(nstcall = 0, F991_6831(Current));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(18);
	RTLE;
	RTEE;
}

/* {ITP_INTERPRETER}.refresh_last_response_flag */
void F991_6814 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_NATURAL_32 tu4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("refresh_last_response_flag", 990, Current, 0, 0, 13730);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_8_0_)) {
		RTHOOK(2);
		tu4_1 = (EIF_NATURAL_32) ((EIF_NATURAL_8) 3U);
		*(EIF_NATURAL_32 *)(Current+ _LNGOFF_8_4_0_1_) = (EIF_NATURAL_32) tu4_1;
	} else {
		RTHOOK(3);
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_8_3_)) {
			RTHOOK(4);
			tu4_1 = (EIF_NATURAL_32) ((EIF_NATURAL_8) 2U);
			*(EIF_NATURAL_32 *)(Current+ _LNGOFF_8_4_0_1_) = (EIF_NATURAL_32) tu4_1;
		} else {
			RTHOOK(5);
			tu4_1 = (EIF_NATURAL_32) ((EIF_NATURAL_8) 1U);
			*(EIF_NATURAL_32 *)(Current+ _LNGOFF_8_4_0_1_) = (EIF_NATURAL_32) tu4_1;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {ITP_INTERPRETER}.report_error */
void F991_6815 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLIU(5);
	
	RTEAA("report_error", 990, Current, 0, 1, 13731);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_reason_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_reason_not_empty", EX_PRE);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4558[Dtype(RTCW(arg1))-968])(arg1));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	tr2 = RTMS_EX_H("error: ",7,1390214688);
	tr3 = (nstcall = 1, F970_6192(tr2, arg1));
	tr2 = RTMS_EX_H("\012",1,10);
	tr2 = (nstcall = 1, F970_6192(RTCW(tr3), tr2));
	(nstcall = 1, F970_6173(RTCW(tr1), tr2));
	RTHOOK(4);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_8_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("has_error", EX_POST);
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_8_0_)) {
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

/* {ITP_INTERPRETER}.log_internal_error */
void F991_6816 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("log_internal_error", 990, Current, 0, 1, 13687);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_reason_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("not_a_reason_is_empty", EX_PRE);
		tb1 = (nstcall = 1, F567_3452(RTCW(arg1)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr2 = RTMS_EX_H("<error type=\'internal\'>\012",24,259872266);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2416[Dtype(RTCW(tr1))-221])(tr1, tr2));
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr2 = RTMS_EX_H("\011<reason>\012<![CDATA[\012",20,392513802);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2416[Dtype(RTCW(tr1))-221])(tr1, tr2));
	RTHOOK(5);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	(nstcall = 1, F646_3788(RTCW(tr1), arg1));
	RTHOOK(6);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr2 = RTMS_EX_H("]]>\012</reason>\012",14,283259658);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2416[Dtype(RTCW(tr1))-221])(tr1, tr2));
	RTHOOK(7);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr2 = RTMS_EX_H("</error>\012",9,645028874);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2416[Dtype(RTCW(tr1))-221])(tr1, tr2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
}

/* {ITP_INTERPRETER}.log_file */
EIF_REFERENCE F991_6817 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {ITP_INTERPRETER}.log_instance */
void F991_6818 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTEAA("log_instance", 990, Current, 0, 1, 13689);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTMS_EX_H("<instance<![CDATA[\012",19,1106423562);
	(nstcall = 0, F991_6819(Current, tr1));
	RTHOOK(2);
	if ((EIF_BOOLEAN)(arg1 == NULL)) {
		RTHOOK(3);
		tr1 = RTMS_EX_H("Void\012",5,1869838346);
		(nstcall = 0, F991_6819(Current, tr1));
	} else {
		RTHOOK(4);
		tr1 = (nstcall = 1, F1_26(arg1));
		(nstcall = 0, F991_6819(Current, tr1));
	}
	RTHOOK(5);
	tr1 = RTMS_EX_H("]]>\012</instance>\012",16,1922781450);
	(nstcall = 0, F991_6819(Current, tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {ITP_INTERPRETER}.log_message */
void F991_6819 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("log_message", 990, Current, 0, 1, 13690);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_message_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	(nstcall = 1, F646_3788(RTCW(tr1), arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {ITP_INTERPRETER}.report_trace */
void F991_6820 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(11);
	RTLR(0,Current);
	RTLR(1,loc7);
	RTLR(2,loc5);
	RTLR(3,loc3);
	RTLR(4,loc8);
	RTLR(5,tr1);
	RTLR(6,loc4);
	RTLR(7,loc9);
	RTLR(8,loc6);
	RTLR(9,loc1);
	RTLR(10,tr2);
	RTLIU(11);
	
	RTEAA("report_trace", 990, Current, 9, 0, 13691);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc2 = (nstcall = 0, F161_1721(Current));
	RTHOOK(2);
	loc7 = (nstcall = 0, F161_1711(Current, loc2));
	RTHOOK(3);
	loc5 = (nstcall = 0, F161_1718(Current));
	RTHOOK(4);
	loc3 = (nstcall = 0, F161_1719(Current));
	RTHOOK(5);
	tr1 = (nstcall = 0, F161_1720(Current));
	loc8 = tr1;
	if (EIF_TEST(loc8)) {
		RTHOOK(6);
		loc4 = (EIF_REFERENCE) loc8;
	} else {
		RTHOOK(7);
		loc4 = RTMS_EX_H("UNKNOWN_CLASS",13,1745804883);
	}
	RTHOOK(8);
	tr1 = (nstcall = 0, F161_1722(Current));
	loc9 = tr1;
	if (EIF_TEST(loc9)) {
		RTHOOK(9);
		loc6 = (EIF_REFERENCE) loc9;
	} else {
		RTHOOK(10);
		loc6 = RTMS_EX_H("Unknown exception trace",23,1575223653);
	}
	RTHOOK(11);
	if ((EIF_BOOLEAN)(loc7 == NULL)) {
		RTHOOK(12);
		loc7 = RTMS_EX_H("",0,0);
	}
	RTHOOK(13);
	if ((EIF_BOOLEAN)(loc3 == NULL)) {
		RTHOOK(14);
		loc3 = RTMS_EX_H("",0,0);
	}
	
	RTHOOK(15);
	if ((EIF_BOOLEAN)(loc5 == NULL)) {
		RTHOOK(16);
		loc5 = RTMS_EX_H("",0,0);
	}
	RTHOOK(17);
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	RTHOOK(18);
	tr1 = eif_out__i4_s1(loc2);
	(nstcall = 1, F970_6173(RTCW(loc1), tr1));
	RTHOOK(19);
	(nstcall = 1, F970_6186(RTCW(loc1), (EIF_CHARACTER_8) '\012'));
	RTHOOK(20);
	(nstcall = 1, F970_6173(RTCW(loc1), loc3));
	RTHOOK(21);
	(nstcall = 1, F970_6186(RTCW(loc1), (EIF_CHARACTER_8) '\012'));
	RTHOOK(22);
	(nstcall = 1, F970_6173(RTCW(loc1), loc4));
	RTHOOK(23);
	(nstcall = 1, F970_6186(RTCW(loc1), (EIF_CHARACTER_8) '\012'));
	RTHOOK(24);
	(nstcall = 1, F970_6173(RTCW(loc1), loc5));
	RTHOOK(25);
	(nstcall = 1, F970_6186(RTCW(loc1), (EIF_CHARACTER_8) '\012'));
	RTHOOK(26);
	tb1 = *(EIF_BOOLEAN *)(Current+ _CHROFF_8_3_);
	tr1 = (tb1 ? makestr ("True", 4) : makestr ("False", 5));
	(nstcall = 1, F970_6173(RTCW(loc1), tr1));
	RTHOOK(27);
	(nstcall = 1, F970_6186(RTCW(loc1), (EIF_CHARACTER_8) '\012'));
	RTHOOK(28);
	(nstcall = 1, F970_6173(RTCW(loc1), loc6));
	RTHOOK(29);
	tr1 = RTMS_EX_H("<call_result type=\'exception\'>\012",31,1794991882);
	(nstcall = 0, F991_6819(Current, tr1));
	RTHOOK(30);
	tr1 = RTMS32_EX_H("\011\000\000\000<\000\000\000m\000\000\000e\000\000\000a\000\000\000n\000\000\000i\000\000\000n\000\000\000g\000\000\000 \000\000\000v\000\000\000a\000\000\000l\000\000\000u\000\000\000e\000\000\000=\000\000\000\'\000\000\000",17,617905703);
	tr2 = (nstcall = 1, F965_5989(RTCW(loc7)));
	tr2 = (nstcall = 1, F973_6360(tr1, tr2));
	tr1 = (nstcall = 1, F965_5989(RTMS_EX_H("\'/>\012",4,657407498)));
	tr1 = (nstcall = 1, F973_6360(RTCW(tr2), tr1));
	(nstcall = 0, F991_6819(Current, tr1));
	RTHOOK(31);
	tr1 = RTMS32_EX_H("\011\000\000\000<\000\000\000t\000\000\000a\000\000\000g\000\000\000 \000\000\000v\000\000\000a\000\000\000l\000\000\000u\000\000\000e\000\000\000=\000\000\000\'\000\000\000",13,1675800615);
	tr2 = (nstcall = 1, F965_5989(RTCW(loc5)));
	tr2 = (nstcall = 1, F973_6360(tr1, tr2));
	tr1 = (nstcall = 1, F965_5989(RTMS_EX_H("\'/>\012",4,657407498)));
	tr1 = (nstcall = 1, F973_6360(RTCW(tr2), tr1));
	(nstcall = 0, F991_6819(Current, tr1));
	RTHOOK(32);
	tr1 = RTMS_EX_H("\011<recipient value=\'",19,84335399);
	tr2 = (nstcall = 1, F970_6192(tr1, loc3));
	tr1 = RTMS_EX_H("\'/>\012",4,657407498);
	tr1 = (nstcall = 1, F970_6192(RTCW(tr2), tr1));
	(nstcall = 0, F991_6819(Current, tr1));
	RTHOOK(33);
	tr1 = RTMS_EX_H("\011<class value=\'",15,1800537383);
	tr2 = (nstcall = 1, F970_6192(tr1, loc4));
	tr1 = RTMS_EX_H("\'>\012",3,2571786);
	tr1 = (nstcall = 1, F970_6192(RTCW(tr2), tr1));
	(nstcall = 0, F991_6819(Current, tr1));
	RTHOOK(34);
	tr1 = RTMS_EX_H("\011<invariant violation on entry=\'",32,1710399015);
	tb1 = *(EIF_BOOLEAN *)(Current+ _CHROFF_8_3_);
	tr2 = (tb1 ? makestr ("True", 4) : makestr ("False", 5));
	tr2 = (nstcall = 1, F970_6192(tr1, tr2));
	tr1 = RTMS_EX_H("\'>\012",3,2571786);
	tr1 = (nstcall = 1, F970_6192(RTCW(tr2), tr1));
	(nstcall = 0, F991_6819(Current, tr1));
	RTHOOK(35);
	tr1 = RTMS_EX_H("\011<exception_trace>\012<![CDATA[\012",29,2032831754);
	(nstcall = 0, F991_6819(Current, tr1));
	RTHOOK(36);
	(nstcall = 0, F991_6819(Current, loc6));
	RTHOOK(37);
	tr1 = RTMS_EX_H("]]>\012</exception_trace>\012",23,2142623498);
	(nstcall = 0, F991_6819(Current, tr1));
	RTHOOK(38);
	tr1 = RTMS_EX_H("</call_result>\012",15,947377930);
	(nstcall = 0, F991_6819(Current, tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(39);
	RTLE;
	RTEE;
}

/* {ITP_INTERPRETER}.output_buffer */
EIF_REFERENCE F991_6821 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {ITP_INTERPRETER}.error_buffer */
EIF_REFERENCE F991_6822 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_3_);
}


/* {ITP_INTERPRETER}.wipe_out_buffer */
void F991_6823 (EIF_REFERENCE Current)
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
	
	RTEAA("wipe_out_buffer", 990, Current, 0, 0, 13694);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	(nstcall = 1, F970_6202(RTCW(tr1)));
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	(nstcall = 1, F970_6202(RTCW(tr1)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("output_buffer_cleared", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		tb1 = (nstcall = 1, F567_3452(RTCW(tr1)));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("error_buffer_cleared", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		tb1 = (nstcall = 1, F567_3452(RTCW(tr1)));
		if (tb1) {
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

/* {ITP_INTERPRETER}.socket */
EIF_REFERENCE F991_6825 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_4_);
}


/* {ITP_INTERPRETER}.last_request_type */
EIF_NATURAL_32 F991_6826 (EIF_REFERENCE Current)
{
	return *(EIF_NATURAL_32 *)(Current+ _LNGOFF_8_4_0_0_);
}


/* {ITP_INTERPRETER}.last_request */
EIF_REFERENCE F991_6827 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_5_);
}


/* {ITP_INTERPRETER}.last_response_flag */
EIF_NATURAL_32 F991_6828 (EIF_REFERENCE Current)
{
	return *(EIF_NATURAL_32 *)(Current+ _LNGOFF_8_4_0_1_);
}


/* {ITP_INTERPRETER}.last_response */
EIF_REFERENCE F991_6829 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_6_);
}


/* {ITP_INTERPRETER}.retrieve_request */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F991_6830 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTED;
	EIF_BOOLEAN EIF_VOLATILE loc1 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE EIF_VOLATILE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	RTS_SDX;
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_NATURAL_32  EIF_VOLATILE tu4_1;
	EIF_BOOLEAN  EIF_VOLATILE tb1;
	RTSN;
	RTDA;
	RTLD;
	RTXD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,saved_except);
	RTLIU(4);
	RTXSLS;
	
	RTEAA("retrieve_request", 990, Current, 2, 0, 13701);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("socket_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_4_) != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("socket_open", EX_PRE);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
		tb1 = *(EIF_BOOLEAN *)(RTCW(tr1)+ _CHROFF_7_3_);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTE_T
	RTHOOK(3);
	*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) NULL;
	RTHOOK(4);
	*(EIF_REFERENCE *)(Current + _REFACS_6_) = (EIF_REFERENCE) NULL;
	RTHOOK(5);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_8_3_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(6);
	if ((EIF_BOOLEAN) !loc1) {
		RTHOOK(7);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
		(nstcall = 1, F219_2822(RTCW(tr1)));
		RTHOOK(8);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
		tu4_1 = (nstcall = 1, F218_2661(RTCW(tr1)));
		*(EIF_NATURAL_32 *)(Current+ _LNGOFF_8_4_0_0_) = (EIF_NATURAL_32) tu4_1;
		RTHOOK(9);
		tr1 = (nstcall = 0, F167_1814(Current, *(EIF_REFERENCE *)(Current + _REFACS_4_)));
		loc2 = RTCCL(tr1);
		loc2 = RTRV(eif_new_type(0, 0),loc2);
		if (EIF_TEST(loc2)) {
			RTHOOK(10);
			tr1 = RTCCL(loc2);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) tr1;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTE_E
	RTXSC;
	RTS_SRR
	RTHOOK(11);
	loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(12);
	*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) NULL;
	RTHOOK(13);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	tb1 = *(EIF_BOOLEAN *)(RTCW(tr1)+ _CHROFF_7_9_);
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(14);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
		(nstcall = 1, F219_2752(RTCW(tr1)));
	}
	RTHOOK(15);
	RTER;
	/* NOTREACHED */
	RTE_EE
	RTHOOK(16);
	RTEOK;
	RTLE;
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {ITP_INTERPRETER}.send_response_to_socket */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F991_6831 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTED;
	EIF_BOOLEAN EIF_VOLATILE loc1 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE EIF_VOLATILE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	RTS_SDX;
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	RTXD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,tr2);
	RTLR(4,saved_except);
	RTLIU(5);
	RTXSLS;
	
	RTEAA("send_response_to_socket", 990, Current, 2, 0, 13702);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTE_T
	RTHOOK(1);
	if ((EIF_BOOLEAN) !loc1) {
		RTHOOK(2);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
		(nstcall = 1, F219_2788(RTCW(tr1), *(EIF_NATURAL_32 *)(Current+ _LNGOFF_8_4_0_1_)));
		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
		loc2 = RTCCL(tr1);
		if (EIF_TEST(loc2)) {
			RTHOOK(4);
			tr1 = RTCCL(loc2);
			tr2 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
			(nstcall = 0, F167_1812(Current, tr1, tr2));
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTE_E
	RTXSC;
	RTS_SRR
	RTHOOK(5);
	loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(6);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_8_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(7);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	(nstcall = 1, F219_2752(RTCW(tr1)));
	RTHOOK(8);
	RTER;
	/* NOTREACHED */
	RTE_EE
	RTHOOK(9);
	RTEOK;
	RTLE;
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {ITP_INTERPRETER}.print_line_and_flush */
void F991_6832 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("print_line_and_flush", 990, Current, 0, 1, 13703);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_text_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	(nstcall = 1, F970_6173(RTCW(tr1), arg1));
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	(nstcall = 1, F970_6186(RTCW(tr1), (EIF_CHARACTER_8) '\012'));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {ITP_INTERPRETER}.parse */
void F991_6833 (EIF_REFERENCE Current)
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
	
	RTEAA("parse", 990, Current, 0, 0, 13704);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_has_error", EX_PRE);
		RTTE((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_8_0_), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if ((nstcall = 0, F991_6809(Current, *(EIF_NATURAL_32 *)(Current+ _LNGOFF_8_4_0_0_)))) {
		RTHOOK(3);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_5_) == NULL)) {
			RTHOOK(4);
			tr1 = RTMS_EX_H("Received data is not recognized as a request.",45,1885901102);
			(nstcall = 0, F991_6815(Current, tr1));
		} else {
			RTHOOK(5);
			switch (*(EIF_NATURAL_32 *)(Current+ _LNGOFF_8_4_0_0_)) {
				case 3U:
					RTHOOK(6);
					(nstcall = 0, F991_6813(Current));
					break;
				case 4U:
					RTHOOK(7);
					(nstcall = 0, F991_6810(Current));
					break;
				case 1U:
					RTHOOK(8);
					(nstcall = 0, F991_6812(Current));
					break;
				case 2U:
					RTHOOK(9);
					(nstcall = 0, F991_6811(Current));
					break;
				default:
					RTEC(EN_WHEN);
			}
		}
	} else {
		RTHOOK(10);
		tr1 = RTOUCR(9,(nstcall = 0, F991_6845), (Current));
		(nstcall = 0, F991_6815(Current, tr1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTEE;
}

/* {ITP_INTERPRETER}.object_store */
EIF_REFERENCE F991_6834 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_7_);
}


/* {ITP_INTERPRETER}.byte_code_feature_body_id */
EIF_INTEGER_32 F991_6835 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_8_4_0_3_);
}


/* {ITP_INTERPRETER}.byte_code_feature_pattern_id */
EIF_INTEGER_32 F991_6836 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_8_4_0_4_);
}


/* {ITP_INTERPRETER}.execute_protected */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F991_6837 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTED;
	EIF_BOOLEAN EIF_VOLATILE loc1 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	RTS_SDX;
	RTSN;
	RTDA;
	RTLD;
	RTXD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,saved_except);
	RTLIU(2);
	RTXSLS;
	
	RTEAA("execute_protected", 990, Current, 1, 0, 13708);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTE_T
	RTHOOK(1);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_8_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(2);
	if ((EIF_BOOLEAN) !loc1) {
		RTHOOK(3);
		(nstcall = 0, F991_6838(Current));
		RTHOOK(4);
		*(EIF_BOOLEAN *)(Current+ _CHROFF_8_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTE_E
	RTXSC;
	RTS_SRR
	RTHOOK(5);
	loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(6);
	(nstcall = 0, F991_6820(Current));
	RTHOOK(7);
	if ((EIF_BOOLEAN)((nstcall = 0, F161_1721(Current)) == ((EIF_INTEGER_32) 6L))) {
		RTHOOK(8);
		*(EIF_BOOLEAN *)(Current+ _CHROFF_8_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	RTHOOK(9);
	RTER;
	/* NOTREACHED */
	RTE_EE
	RTHOOK(10);
	RTEOK;
	RTLE;
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {ITP_INTERPRETER}.execute_byte_code */
void F991_6838 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("execute_byte_code", 990, Current, 1, 0, 13709);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = (EIF_REFERENCE) NULL;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {ITP_INTERPRETER}.store_variable_at_index */
void F991_6839 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("store_variable_at_index", 990, Current, 0, 2, 13710);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_7_);
	tr2 = RTCCL(arg1);
	(nstcall = 1, F104_1322(RTCW(tr1), tr2, arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {ITP_INTERPRETER}.variable_at_index */
EIF_REFERENCE F991_6840 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("variable_at_index", 990, Current, 0, 1, 13711);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_7_);
	tr2 = (nstcall = 1, F104_1320(RTCW(tr1), arg1));
	Result = (EIF_REFERENCE) RTCCL(tr2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {ITP_INTERPRETER}.main_loop */
void F991_6841 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("main_loop", 990, Current, 0, 0, 13712);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	for (;;) {
		RTHOOK(1);
		tb1 = '\01';
		if (!*(EIF_BOOLEAN *)(Current+ _CHROFF_8_2_)) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
			tb2 = *(EIF_BOOLEAN *)(RTCW(tr1)+ _CHROFF_7_9_);
			tb1 = tb2;
		}
		if (tb1) break;
		RTHOOK(2);
		(nstcall = 0, F991_6823(Current));
		RTHOOK(3);
		(nstcall = 0, F991_6830(Current));
		RTHOOK(4);
		if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_8_0_)) {
			RTHOOK(5);
			(nstcall = 0, F991_6833(Current));
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {ITP_INTERPRETER}.invalid_request_format_error */

EIF_REFERENCE F991_6842 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (6,RTMS_EX_H("Invalid request format.",23,901876270));
}

/* {ITP_INTERPRETER}.byte_code_not_found_error */

EIF_REFERENCE F991_6843 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (7,RTMS_EX_H("No byte-code is found in request.",33,877192750));
}

/* {ITP_INTERPRETER}.byte_code_length_error */

EIF_REFERENCE F991_6844 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (8,RTMS_EX_H("Length of retrieved byte-code is not the same as specified in request.",70,371612718));
}

/* {ITP_INTERPRETER}.invalid_request_type_error */

EIF_REFERENCE F991_6845 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (9,RTMS_EX_H("Request type is invalid.",24,281084974));
}

/* {ITP_INTERPRETER}.is_last_invariant_violated */
EIF_BOOLEAN F991_6846 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_8_3_);
}


/* {ITP_INTERPRETER}.check_invariant */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F991_6847 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	RTED;
	EIF_REFERENCE EIF_VOLATILE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	RTS_SDX;
	RTSN;
	RTDA;
	RTLD;
	RTXD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,saved_except);
	RTLIU(4);
	RTXSLS;
	
	RTEAA("check_invariant", 990, Current, 1, 1, 13718);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTE_T
	RTHOOK(1);
	loc1 = RTCCL(arg1);
	if (EIF_TEST(loc1)) {
		RTHOOK(2);
		(nstcall = 1, F1_31(loc1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTE_E
	RTXSC;
	RTS_SRR
	RTHOOK(3);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_8_3_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	/* NOTREACHED */
	RTE_EE
	RTHOOK(4);
	RTEOK;
	RTLE;
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {ITP_INTERPRETER}._invariant */
void F991_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTEAINV(l_feature_name, 287, Current, 0, 0);
	RTIT("log_file_open_write", Current);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tb1 = (nstcall = 1, F644_3544(RTCW(tr1)));
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("store_not_void", Current);
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_7_) != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("output_buffer_attached", Current);
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_2_) != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("error_buffer_attached", Current);
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_3_) != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("socket_attached", Current);
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_4_) != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit288 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
