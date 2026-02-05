/*
 * Code for class NETWORK_STREAM_SOCKET
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ne183.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {NETWORK_STREAM_SOCKET}.make_empty */
void F222_2937 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_64 tu8_1;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("make_empty", 221, Current, 0, 0, 2977);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_7_9_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(2);
	(nstcall = 0, F177_1942(Current));
	RTHOOK(3);
	ti4_1 = (nstcall = 0, F177_1967(Current));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_3_) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	ti4_1 = (nstcall = 0, F177_1965(Current));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_5_) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(5);
	tr1 = RTLNSMART(eif_new_type(969, 1).id);
	(nstcall = -1, F965_5930(RTCW(tr1)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTHOOK(6);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_10_);
	tu8_1 = (EIF_NATURAL_64) ti4_1;
	*(EIF_NATURAL_64 *)(Current+ _I64OFF_7_12_2_13_1_0_1_) = (EIF_NATURAL_64) (EIF_NATURAL_64) (((EIF_NATURAL_64) RTU64C(1000000000)) * tu8_1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("timeout_set_to_default", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_10_);
		tu8_1 = (EIF_NATURAL_64) ti4_1;
		if ((EIF_BOOLEAN)(*(EIF_NATURAL_64 *)(Current+ _I64OFF_7_12_2_13_1_0_1_) == (EIF_NATURAL_64) (((EIF_NATURAL_64) RTU64C(1000000000)) * tu8_1))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("no_socket_created", EX_POST);
		if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_7_6_)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
}

/* {NETWORK_STREAM_SOCKET}.make */
void F222_2938 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_NATURAL_64 tu8_1;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("make", 221, Current, 0, 0, 2978);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	(nstcall = 0, F222_2937(Current));
	RTHOOK(2);
	(nstcall = 0, F221_2920(Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("timeout_set_to_default", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_10_);
		tu8_1 = (EIF_NATURAL_64) ti4_1;
		if ((EIF_BOOLEAN)(*(EIF_NATURAL_64 *)(Current+ _I64OFF_7_12_2_13_1_0_1_) == (EIF_NATURAL_64) (((EIF_NATURAL_64) RTU64C(1000000000)) * tu8_1))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("socket_created", EX_POST);
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_7_6_)) {
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

/* {NETWORK_STREAM_SOCKET}.make_client_by_port */
void F222_2939 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("make_client_by_port", 221, Current, 1, 2, 2979);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_peer_host", EX_PRE);
		tb1 = '\0';
		if ((EIF_BOOLEAN)(arg2 != NULL)) {
			tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4558[Dtype(RTCW(arg2))-968])(arg2));
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_port", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTCT0("attached create_from_name (a_peer_host) as l_peer_address", EX_CHECK);
	tr1 = (nstcall = 0, F178_1979(Current, arg2));
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTHOOK(4);
	(nstcall = 0, F222_2943(Current, loc1, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {NETWORK_STREAM_SOCKET}.make_server_by_address_and_port */
void F222_2940 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTEAA("make_server_by_address_and_port", 221, Current, 0, 2, 2980);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_port", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F222_2938(Current));
	RTHOOK(3);
	tr1 = RTLNSMART(eif_final_id(Y2482,Y2482_gen_type,Dftype(Current),218).id);
	(nstcall = -1, F179_1997(RTCW(tr1), arg1, arg2));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	(nstcall = 0, F221_2889(Current));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {NETWORK_STREAM_SOCKET}.make_server_by_port */
void F222_2941 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("make_server_by_port", 221, Current, 0, 1, 2981);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_port", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 0, F178_1976(Current));
	(nstcall = 0, F222_2940(Current, tr1, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {NETWORK_STREAM_SOCKET}.make_loopback_server_by_port */
void F222_2942 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("make_loopback_server_by_port", 221, Current, 0, 1, 2982);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_port", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 0, F178_1977(Current));
	(nstcall = 0, F222_2940(Current, tr1, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {NETWORK_STREAM_SOCKET}.make_client_by_address_and_port */
void F222_2943 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("make_client_by_address_and_port", 221, Current, 0, 2, 2983);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_peer_address", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_port", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	(nstcall = 0, F222_2938(Current));
	RTHOOK(4);
	tr1 = RTLNSMART(eif_final_id(Y2482,Y2482_gen_type,dftype,218).id);
	(nstcall = -1, F179_2000(RTCW(tr1), ((EIF_INTEGER_32) 1L)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	RTHOOK(5);
	tr1 = RTLNSMART(eif_final_id(Y2483,Y2483_gen_type,dftype,218).id);
	(nstcall = -1, F179_1997(RTCW(tr1), arg1, arg2));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {NETWORK_STREAM_SOCKET}.make_from_descriptor_and_address */
void F222_2944 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN uarg2;
	EIF_BOOLEAN uarg;
	RTS_SD;
	RTS_SDC;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_64 tu8_1;
	EIF_INTEGER_32 ti4_1;
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,arg2);
	RTLR(2,loc2);
	RTLR(3,loc1);
	RTLR(4,tr1);
	RTLR(5,loc3);
	RTLIU(6);
	
	RTEAA("make_from_descriptor_and_address", 221, Current, 3, 2, 2984);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	uarg2 = (EIF_BOOLEAN) RTS_OU (arg2);
	uarg = uarg2;
	if (uarg) {
		RTS_RC;
		RTS_RS (arg2);
		RTS_RW;
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_fd_positive", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_address_positive", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc2 = arg2;
	loc2 = RTRV(eif_final_id(Y2482,Y2482_gen_type,dftype,218),loc2);
	if ((loc2) && RTS_OS (Current, loc2)) loc2 = (EIF_REFERENCE) 0;
	if (EIF_TEST(loc2)) {
		RTHOOK(4);
		loc1 = (EIF_REFERENCE) loc2;
	} else {
		RTHOOK(5);
		loc1 = RTLNSMART(eif_final_id(Y2482,Y2482_gen_type,dftype,218).id);
		(nstcall = -1, F56_773(RTCW(loc1), arg2));
	}
	RTHOOK(6);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_6_) = (EIF_INTEGER_32) arg1;
	RTHOOK(7);
	RTAR(Current, loc1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) loc1;
	RTHOOK(8);
	ti4_1 = (nstcall = 1, F56_777(RTCW(loc1)));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_3_) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(9);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_7_5_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(10);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_7_9_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(11);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_7_6_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(12);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_7_3_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(13);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_7_4_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(14);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_10_);
	tu8_1 = (EIF_NATURAL_64) ti4_1;
	*(EIF_NATURAL_64 *)(Current+ _I64OFF_7_12_2_13_1_0_1_) = (EIF_NATURAL_64) (EIF_NATURAL_64) (((EIF_NATURAL_64) RTU64C(1000000000)) * tu8_1);
	RTHOOK(15);
	tr1 = RTLNSMART(eif_new_type(969, 1).id);
	(nstcall = -1, F965_5930(RTCW(tr1)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(16);
		RTCT("address_set", EX_POST);
		if (RTEQ(*(EIF_REFERENCE *)(Current + _REFACS_1_), arg2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(17);
		RTCT("address_equal", EX_POST);
		loc3 = arg2;
		loc3 = RTRV(eif_final_id(Y2482,Y2482_gen_type,dftype,218),loc3);
		if ((loc3) && RTS_OS (Current, loc3)) loc3 = (EIF_REFERENCE) 0;
		if ((!(EIF_TEST(loc3)) || ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) == arg2)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(18);
		RTCT("family_valid", EX_POST);
		if (RTS_CI (EIF_TRUE, arg2)) {
			RTS_BI (arg2);
			ti4_1 = (nstcall = 1, F56_777(RTCW(arg2)));
			RTS_EI;
		} else {
			RTS_AC (0, arg2);
			RTS_CALL (F56_777, eif_scr1, 0, &(ti4_1));
		}
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_3_) == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(19);
		RTCT("opened_all", EX_POST);
		if ((EIF_BOOLEAN) (*(EIF_BOOLEAN *)(Current+ _CHROFF_7_4_) && *(EIF_BOOLEAN *)(Current+ _CHROFF_7_3_))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(20);
	if (uarg) {
		RTS_RD;
	}
	RTLE;
	RTEE;
}

/* {NETWORK_STREAM_SOCKET}.create_from_descriptor */
void F222_2945 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("create_from_descriptor", 221, Current, 1, 1, 2985);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_fd_positive", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = RTLNSMART(eif_final_id(Y2482,Y2482_gen_type,Dftype(Current),218).id);
	(nstcall = -1, F179_2000(RTCW(loc1), ((EIF_INTEGER_32) 0L)));
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(RTCW(loc1));
	tp1 = *(EIF_POINTER *)(RTCW(tr1)+ _PTROFF_0_1_0_1_0_0_);
	tr1 = *(EIF_REFERENCE *)(RTCW(loc1));
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_0_1_0_0_);
	(nstcall = 0, F222_2975(Current, arg1, tp1, ti4_1));
	RTHOOK(4);
	(nstcall = 0, F222_2944(Current, arg1, loc1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {NETWORK_STREAM_SOCKET}.connect_timeout */
EIF_INTEGER_32 F222_2946 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_11_);
}


/* {NETWORK_STREAM_SOCKET}.set_connect_timeout */
void F222_2947 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_connect_timeout", 221, Current, 0, 1, 2987);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_11_) = (EIF_INTEGER_32) arg1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {NETWORK_STREAM_SOCKET}.accept_timeout */
EIF_INTEGER_32 F222_2948 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_12_);
}


/* {NETWORK_STREAM_SOCKET}.set_accept_timeout */
void F222_2949 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_accept_timeout", 221, Current, 0, 1, 2989);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_12_) = (EIF_INTEGER_32) arg1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {NETWORK_STREAM_SOCKET}.listen */
void F222_2950 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc3);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("listen", 221, Current, 3, 1, 2990);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("socket_exists", EX_PRE);
		RTTE((nstcall = 0, F221_2885(Current)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("address_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTCT0("address_attached", EX_CHECK);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	loc3 = tr1;
	if (EIF_TEST(loc3)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTHOOK(4);
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_6_);
	RTHOOK(5);
	loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_7_);
	RTHOOK(6);
	tr1 = *(EIF_REFERENCE *)(loc3);
	tp1 = *(EIF_POINTER *)(RTCW(tr1)+ _PTROFF_0_1_0_1_0_0_);
	(nstcall = 0, F222_2973(Current, (EIF_INTEGER_32 *) &(loc1), (EIF_INTEGER_32 *) &(loc2), tp1, arg1));
	RTHOOK(7);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_6_) = (EIF_INTEGER_32) loc1;
	RTHOOK(8);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_7_) = (EIF_INTEGER_32) loc2;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
}

/* {NETWORK_STREAM_SOCKET}.accept_to */
void F222_2951 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN uarg1;
	EIF_BOOLEAN uarg;
	RTS_SD;
	RTS_SDC;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("accept_to", 221, Current, 1, 1, 2991);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	uarg1 = (EIF_BOOLEAN) RTS_OU (arg1);
	uarg = uarg1;
	if (uarg) {
		RTS_RC;
		RTS_RS (arg1);
		RTS_RW;
	}
	RTIV(Current, RTAL);
	if (uarg || (RTAL & CK_REQUIRE) || RTAC) {
		for (;;) {
			int has_wait_condition = 0;
			RTHOOK(1);
			RTCT("not_created", EX_PRE);
			if (RTS_CI (EIF_TRUE, arg1)) {
				RTS_BI (arg1);
				tb1 = *(EIF_BOOLEAN *)(RTCW(arg1)+ _CHROFF_7_6_);
				RTS_EI;
			} else {
				RTS_AC (0, arg1);
				RTS_CALL (NULL, eif_sca4, 0+ _CHROFF_7_6_, &(tb1));
			}
			has_wait_condition = uarg1;
			RTTE((EIF_BOOLEAN) !tb1, label_1);
			RTCK;
			has_wait_condition = 0;
			RTJB;
label_1:
			if (!has_wait_condition) break;
			RTCK;
			RTS_RF;
		}
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTHOOK(3);
		(nstcall = 0, F222_2969(Current, arg1, loc1));
	} else {
		
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	if (uarg) {
		RTS_RD;
	}
	RTLE;
	RTEE;
}

/* {NETWORK_STREAM_SOCKET}.accept */
void F222_2952 (EIF_REFERENCE Current)
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
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,loc3);
	RTLIU(5);
	
	RTEAA("accept", 221, Current, 3, 0, 2992);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("socket_exists", EX_PRE);
		RTTE((nstcall = 0, F221_2885(Current)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("address_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		RTHOOK(4);
		*(EIF_REFERENCE *)(Current + _REFACS_6_) = (EIF_REFERENCE) NULL;
		RTHOOK(5);
		loc1 = RTLNSMART(eif_final_id(Y2549,Y2549_gen_type,dftype,219).id);
		(nstcall = -1, F222_2937(RTCW(loc1)));
		RTHOOK(6);
		tr1 = (nstcall = 1, F1_14(loc2));
		(nstcall = 0, F222_2969(Current, loc1, tr1));
		RTHOOK(7);
		tb1 = *(EIF_BOOLEAN *)(RTCW(loc1)+ _CHROFF_7_6_);
		if (tb1) {
			RTHOOK(8);
			RTAR(Current, loc1);
			*(EIF_REFERENCE *)(Current + _REFACS_6_) = (EIF_REFERENCE) loc1;
		}
	} else {
		
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("same_blocking_status", EX_POST);
		tb1 = '\01';
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
		loc3 = tr1;
		if (EIF_TEST(loc3)) {
			tb2 = *(EIF_BOOLEAN *)(loc3+ _CHROFF_7_2_);
			tb1 = (EIF_BOOLEAN)(tb2 == *(EIF_BOOLEAN *)(Current+ _CHROFF_7_2_));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
}

/* {NETWORK_STREAM_SOCKET}.maximum_seg_size */
EIF_INTEGER_32 F222_2953 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("maximum_seg_size", 221, Current, 0, 0, 2993);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("socket_exists", EX_PRE);
		RTTE((nstcall = 0, F221_2885(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (nstcall = 0, F221_2887(Current));
	ti4_2 = (nstcall = 0, F177_1912(Current));
	ti4_3 = (nstcall = 0, F177_1915(Current));
	Result = (nstcall = 0, F219_2871(Current, ti4_1, ti4_2, ti4_3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {NETWORK_STREAM_SOCKET}.maxium_seg_size */
EIF_INTEGER_32 F222_2954 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("maxium_seg_size", 221, Current, 0, 0, 2994);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("socket_exists", EX_PRE);
		RTTE((nstcall = 0, F221_2885(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (nstcall = 0, F221_2887(Current));
	ti4_2 = (nstcall = 0, F177_1912(Current));
	ti4_3 = (nstcall = 0, F177_1915(Current));
	Result = (nstcall = 0, F219_2871(Current, ti4_1, ti4_2, ti4_3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {NETWORK_STREAM_SOCKET}.has_delay */
EIF_BOOLEAN F222_2955 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("has_delay", 221, Current, 1, 0, 2995);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("socket_exists", EX_PRE);
		RTTE((nstcall = 0, F221_2885(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (nstcall = 0, F221_2887(Current));
	ti4_2 = (nstcall = 0, F177_1912(Current));
	ti4_3 = (nstcall = 0, F177_1916(Current));
	loc1 = (nstcall = 0, F219_2871(Current, ti4_1, ti4_2, ti4_3));
	RTHOOK(3);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {NETWORK_STREAM_SOCKET}.is_linger_on */
EIF_BOOLEAN F222_2956 (EIF_REFERENCE Current)
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
	
	RTEAA("is_linger_on", 221, Current, 0, 0, 2996);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("socket_exists", EX_PRE);
		RTTE((nstcall = 0, F221_2885(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (nstcall = 0, F221_2887(Current));
	Result = (nstcall = 0, F222_2977(Current, ti4_1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {NETWORK_STREAM_SOCKET}.is_out_of_band_inline */
EIF_BOOLEAN F222_2957 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_out_of_band_inline", 221, Current, 1, 0, 2997);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("socket_exists", EX_PRE);
		RTTE((nstcall = 0, F221_2885(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (nstcall = 0, F221_2887(Current));
	ti4_2 = (nstcall = 0, F177_1908(Current));
	ti4_3 = (nstcall = 0, F177_1931(Current));
	loc1 = (nstcall = 0, F219_2871(Current, ti4_1, ti4_2, ti4_3));
	RTHOOK(3);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc1 != ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {NETWORK_STREAM_SOCKET}.linger_time */
EIF_INTEGER_32 F222_2958 (EIF_REFERENCE Current)
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
	
	RTEAA("linger_time", 221, Current, 0, 0, 2998);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("socket_exists", EX_PRE);
		RTTE((nstcall = 0, F221_2885(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (nstcall = 0, F221_2887(Current));
	Result = (nstcall = 0, F222_2978(Current, ti4_1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {NETWORK_STREAM_SOCKET}.set_delay */
void F222_2959 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_delay", 221, Current, 0, 0, 2999);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("socket_exists", EX_PRE);
		RTTE((nstcall = 0, F221_2885(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (nstcall = 0, F221_2887(Current));
	ti4_2 = (nstcall = 0, F177_1912(Current));
	ti4_3 = (nstcall = 0, F177_1916(Current));
	(nstcall = 0, F219_2870(Current, ti4_1, ti4_2, ti4_3, ((EIF_INTEGER_32) 0L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {NETWORK_STREAM_SOCKET}.set_nodelay */
void F222_2960 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_nodelay", 221, Current, 0, 0, 3000);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("socket_exists", EX_PRE);
		RTTE((nstcall = 0, F221_2885(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (nstcall = 0, F221_2887(Current));
	ti4_2 = (nstcall = 0, F177_1912(Current));
	ti4_3 = (nstcall = 0, F177_1916(Current));
	(nstcall = 0, F219_2870(Current, ti4_1, ti4_2, ti4_3, ((EIF_INTEGER_32) 1L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {NETWORK_STREAM_SOCKET}.set_linger */
void F222_2961 (EIF_REFERENCE Current, EIF_BOOLEAN arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_linger", 221, Current, 1, 2, 3001);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("socket_exists", EX_PRE);
		RTTE((nstcall = 0, F221_2885(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (nstcall = 0, F221_2887(Current));
	loc1 = (nstcall = 0, F222_2976(Current, ti4_1, arg1, arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {NETWORK_STREAM_SOCKET}.set_linger_on */
void F222_2962 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_linger_on", 221, Current, 1, 1, 3002);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("socket_exists", EX_PRE);
		RTTE((nstcall = 0, F221_2885(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (nstcall = 0, F221_2887(Current));
	loc1 = (nstcall = 0, F222_2976(Current, ti4_1, (EIF_BOOLEAN) 1, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {NETWORK_STREAM_SOCKET}.set_linger_off */
void F222_2963 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_linger_off", 221, Current, 1, 0, 3003);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("socket_exists", EX_PRE);
		RTTE((nstcall = 0, F221_2885(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (nstcall = 0, F221_2887(Current));
	loc1 = (nstcall = 0, F222_2976(Current, ti4_1, (EIF_BOOLEAN) 1, ((EIF_INTEGER_32) 0L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {NETWORK_STREAM_SOCKET}.set_out_of_band_inline */
void F222_2964 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_out_of_band_inline", 221, Current, 0, 0, 3004);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("socket_exists", EX_PRE);
		RTTE((nstcall = 0, F221_2885(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (nstcall = 0, F221_2887(Current));
	ti4_2 = (nstcall = 0, F177_1908(Current));
	ti4_3 = (nstcall = 0, F177_1931(Current));
	(nstcall = 0, F219_2870(Current, ti4_1, ti4_2, ti4_3, ((EIF_INTEGER_32) 1L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {NETWORK_STREAM_SOCKET}.set_out_of_band_not_inline */
void F222_2965 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_out_of_band_not_inline", 221, Current, 0, 0, 3005);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("socket_exists", EX_PRE);
		RTTE((nstcall = 0, F221_2885(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (nstcall = 0, F221_2887(Current));
	ti4_2 = (nstcall = 0, F177_1908(Current));
	ti4_3 = (nstcall = 0, F177_1931(Current));
	(nstcall = 0, F219_2870(Current, ti4_1, ti4_2, ti4_3, ((EIF_INTEGER_32) 0L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {NETWORK_STREAM_SOCKET}.do_connect */
void F222_2966 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("do_connect", 221, Current, 3, 1, 3006);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_peer_address_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		RTHOOK(3);
		loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_6_);
		RTHOOK(4);
		loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_7_);
		RTHOOK(5);
		loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_9_);
		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
		tp1 = *(EIF_POINTER *)(RTCW(tr1)+ _PTROFF_0_1_0_1_0_0_);
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_11_);
		tb1 = *(EIF_BOOLEAN *)(Current+ _CHROFF_7_2_);
		(nstcall = 0, F222_2971(Current, (EIF_INTEGER_32 *) &(loc1), (EIF_INTEGER_32 *) &(loc2), (EIF_INTEGER_32 *) &(loc3), tp1, ti4_1, tb1));
		RTHOOK(7);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_6_) = (EIF_INTEGER_32) loc1;
		RTHOOK(8);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_7_) = (EIF_INTEGER_32) loc2;
		RTHOOK(9);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_9_) = (EIF_INTEGER_32) loc3;
	} else {
		
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
}

/* {NETWORK_STREAM_SOCKET}.do_bind */
void F222_2967 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("do_bind", 221, Current, 3, 1, 3007);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_address_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		RTHOOK(3);
		loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_6_);
		RTHOOK(4);
		loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_7_);
		RTHOOK(5);
		loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_9_);
		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
		tp1 = *(EIF_POINTER *)(RTCW(tr1)+ _PTROFF_0_1_0_1_0_0_);
		(nstcall = 0, F222_2972(Current, (EIF_INTEGER_32 *) &(loc1), (EIF_INTEGER_32 *) &(loc2), (EIF_INTEGER_32 *) &(loc3), tp1));
		RTHOOK(7);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_6_) = (EIF_INTEGER_32) loc1;
		RTHOOK(8);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_7_) = (EIF_INTEGER_32) loc2;
		RTHOOK(9);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_9_) = (EIF_INTEGER_32) loc3;
	} else {
		
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
}

/* {NETWORK_STREAM_SOCKET}.do_create */
void F222_2968 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("do_create", 221, Current, 2, 0, 3008);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_6_);
	RTHOOK(2);
	loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_7_);
	RTHOOK(3);
	(nstcall = 0, F222_2970(Current, (EIF_INTEGER_32 *) &(loc1), (EIF_INTEGER_32 *) &(loc2)));
	RTHOOK(4);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_6_) = (EIF_INTEGER_32) loc1;
	RTHOOK(5);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_7_) = (EIF_INTEGER_32) loc2;
	RTHOOK(6);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_7_6_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {NETWORK_STREAM_SOCKET}.do_accept */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F222_2969 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	RTED;
	EIF_BOOLEAN EIF_VOLATILE loc1 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE EIF_VOLATILE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 EIF_VOLATILE loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 EIF_VOLATILE loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	EIF_BOOLEAN uarg1;
	EIF_BOOLEAN uarg;
	RTS_SDX;
	RTS_SDC;
	EIF_POINTER  EIF_VOLATILE tp1;
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_INTEGER_32  EIF_VOLATILE ti4_1;
	EIF_INTEGER_32  EIF_VOLATILE ti4_2;
	EIF_INTEGER_32  EIF_VOLATILE ti4_3;
	EIF_BOOLEAN  EIF_VOLATILE tb1;
	RTSN;
	RTDA;
	RTLD;
	RTXD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,arg2);
	RTLR(3,loc2);
	RTLR(4,tr1);
	RTLR(5,saved_except);
	RTLIU(6);
	RTXSLS;
	
	RTEAA("do_accept", 221, Current, 4, 2, 3009);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	uarg1 = (EIF_BOOLEAN) RTS_OU (arg1);
	uarg = uarg1;
	if (uarg) {
		RTS_RCX;
		RTS_RS (arg1);
		RTS_RW;
	}
	RTIV(Current, RTAL);
	if (uarg || (RTAL & CK_REQUIRE) || RTAC) {
		for (;;) {
			int has_wait_condition = 0;
			RTHOOK(1);
			RTCT("not_created", EX_PRE);
			if (RTS_CI (EIF_TRUE, arg1)) {
				RTS_BI (arg1);
				tb1 = *(EIF_BOOLEAN *)(RTCW(arg1)+ _CHROFF_7_6_);
				RTS_EI;
			} else {
				RTS_AC (0, arg1);
				RTS_CALL (NULL, eif_sca4, 0+ _CHROFF_7_6_, &(tb1));
			}
			has_wait_condition = uarg1;
			RTTE((EIF_BOOLEAN) !tb1, label_1);
			RTCK;
			has_wait_condition = 0;
			RTJB;
label_1:
			if (!has_wait_condition) break;
			RTCK;
			RTS_RF;
		}
		RTCF;
	}
body:;
	RTE_T
	RTHOOK(2);
	if ((EIF_BOOLEAN) !loc1) {
		RTHOOK(3);
		tr1 = (nstcall = 1, F1_14(arg2));
		loc2 = (EIF_REFERENCE) tr1;
		RTHOOK(4);
		loc4 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_8_);
		RTHOOK(5);
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_6_);
		ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_7_);
		tr1 = *(EIF_REFERENCE *)(RTCW(loc2));
		tp1 = *(EIF_POINTER *)(RTCW(tr1)+ _PTROFF_0_1_0_1_0_0_);
		ti4_3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_12_);
		loc3 = (nstcall = 0, F222_2974(Current, ti4_1, ti4_2, (EIF_INTEGER_32 *) &(loc4), tp1, ti4_3));
		RTHOOK(6);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_8_) = (EIF_INTEGER_32) loc4;
		RTHOOK(7);
		if ((EIF_BOOLEAN) (loc3 > ((EIF_INTEGER_32) 0L))) {
			RTHOOK(8);
			if (RTS_CI (EIF_FALSE, arg1)) {
				RTS_BI (arg1);
				(nstcall = 1, F222_2944(RTCW(arg1), loc3, arg2));
				RTS_EI;
			} else {
				RTS_AC (2, arg1);
				RTS_AA (arg2, it_r, SK_REF, 2);
				RTS_AA (loc3, it_i4, SK_INT32, 1);
				RTS_CALL (F222_2944, eif_scr10, 0, NULL);
			}
			RTHOOK(9);
			if (RTS_CI (EIF_FALSE, arg1)) {
				RTS_BI (arg1);
				(nstcall = 1, F219_2762(RTCW(arg1), loc2));
				RTS_EI;
			} else {
				RTS_AC (1, arg1);
				RTS_AA (loc2, it_r, SK_REF, 1);
				RTS_CALL (F219_2762, eif_scr11, 0, NULL);
			}
			RTHOOK(10);
			if (*(EIF_BOOLEAN *)(Current+ _CHROFF_7_2_)) {
				RTHOOK(11);
				if (RTS_CI (EIF_FALSE, arg1)) {
					RTS_BI (arg1);
					(nstcall = 1, F221_2919(RTCW(arg1)));
					RTS_EI;
				} else {
					RTS_AC (0, arg1);
					RTS_CALL (F221_2919, eif_scr6, 0, NULL);
				}
			} else {
				RTHOOK(12);
				if (RTS_CI (EIF_FALSE, arg1)) {
					RTS_BI (arg1);
					(nstcall = 1, F221_2918(RTCW(arg1)));
					RTS_EI;
				} else {
					RTS_AC (0, arg1);
					RTS_CALL (F221_2918, eif_scr6, 0, NULL);
				}
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTE_E
	RTXSC;
	RTS_SRR
	RTHOOK(13);
	if ((EIF_BOOLEAN) !(nstcall = 0, F161_1712(Current))) {
		RTHOOK(14);
		loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(15);
		RTER;
	}
	/* NOTREACHED */
	RTE_EE
	RTHOOK(16);
	if (uarg) {
		RTS_RD;
	}
	RTEOK;
	RTLE;
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {NETWORK_STREAM_SOCKET}.c_create */
void F222_2970 (EIF_REFERENCE Current, EIF_INTEGER_32* arg1, EIF_INTEGER_32* arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("c_create", 221, Current, 0, 2, 3010);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	EIF_ENTER_C;en_socket_stream_create(arg1, arg2);
	
	EIF_EXIT_C;
	RTGC;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {NETWORK_STREAM_SOCKET}.c_connect */
void F222_2971 (EIF_REFERENCE Current, EIF_INTEGER_32* arg1, EIF_INTEGER_32* arg2, EIF_INTEGER_32* arg3, EIF_POINTER arg4, EIF_INTEGER_32 arg5, EIF_BOOLEAN arg6)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("c_connect", 221, Current, 0, 6, 3011);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	EIF_ENTER_C;en_socket_stream_connect(arg1, arg2, arg3, arg4, arg5, arg6);
	
	EIF_EXIT_C;
	RTGC;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {NETWORK_STREAM_SOCKET}.c_bind */
void F222_2972 (EIF_REFERENCE Current, EIF_INTEGER_32* arg1, EIF_INTEGER_32* arg2, EIF_INTEGER_32* arg3, EIF_POINTER arg4)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("c_bind", 221, Current, 0, 4, 3012);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	EIF_ENTER_C;en_socket_stream_bind(arg1, arg2, arg3, arg4);
	
	EIF_EXIT_C;
	RTGC;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {NETWORK_STREAM_SOCKET}.c_listen */
void F222_2973 (EIF_REFERENCE Current, EIF_INTEGER_32* arg1, EIF_INTEGER_32* arg2, EIF_POINTER arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("c_listen", 221, Current, 0, 4, 3013);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	EIF_ENTER_C;en_socket_stream_listen(arg1, arg2, arg3, arg4);
	
	EIF_EXIT_C;
	RTGC;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {NETWORK_STREAM_SOCKET}.c_accept */
EIF_INTEGER_32 F222_2974 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32* arg3, EIF_POINTER arg4, EIF_INTEGER_32 arg5)
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
	
	RTEAA("c_accept", 221, Current, 0, 5, 3014);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	EIF_ENTER_C;Result = (EIF_INTEGER_32) en_socket_stream_accept(arg1, arg2, arg3, arg4, arg5);
	
	EIF_EXIT_C;
	RTGC;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {NETWORK_STREAM_SOCKET}.c_sock_name */
void F222_2975 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("c_sock_name", 221, Current, 0, 3, 3015);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);c_sock_name(arg1, arg2, arg3);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {NETWORK_STREAM_SOCKET}.c_set_sock_opt_linger */
EIF_INTEGER_32 F222_2976 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_BOOLEAN arg2, EIF_INTEGER_32 arg3)
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
	
	RTEAA("c_set_sock_opt_linger", 221, Current, 0, 3, 3016);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) c_set_sock_opt_linger(arg1, arg2, arg3);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {NETWORK_STREAM_SOCKET}.c_is_linger_on */
EIF_BOOLEAN F222_2977 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("c_is_linger_on", 221, Current, 0, 1, 3017);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_BOOLEAN) EIF_TEST(c_is_linger_on(arg1));
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {NETWORK_STREAM_SOCKET}.c_linger_time */
EIF_INTEGER_32 F222_2978 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("c_linger_time", 221, Current, 0, 1, 3018);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) c_linger_time(arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

void EIF_Minit183 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
