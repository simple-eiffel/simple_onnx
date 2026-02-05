/*
 * Code for class SYSTEM_ENCODINGS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "sy11.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {SYSTEM_ENCODINGS}.system_encoding */
static EIF_REFERENCE F19_262_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(167)

	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLIU(4);
	
	RTEAA("system_encoding", 18, Current, 0, 0, 253);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(20, 0x01).id, 20, _OBJSIZ_2_0_0_0_0_0_0_0_);
	tr2 = RTOUCR(168,(nstcall = 0, F19_268), (Current));
	tr3 = (nstcall = 1, F60_807(RTCW(tr2)));
	(nstcall = -1, F21_277(RTCW(tr1), tr3));
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("system_encoding_not_void", EX_POST);
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

EIF_REFERENCE F19_262 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(167,F19_262_body,(Current));
}

/* {SYSTEM_ENCODINGS}.console_encoding */
static EIF_REFERENCE F19_263_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(169)

	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLIU(4);
	
	RTEAA("console_encoding", 18, Current, 0, 0, 254);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(20, 0x01).id, 20, _OBJSIZ_2_0_0_0_0_0_0_0_);
	tr2 = RTOUCR(168,(nstcall = 0, F19_268), (Current));
	tr3 = (nstcall = 1, F60_808(RTCW(tr2)));
	(nstcall = -1, F21_277(RTCW(tr1), tr3));
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("console_encoding_not_void", EX_POST);
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

EIF_REFERENCE F19_263 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(169,F19_263_body,(Current));
}

/* {SYSTEM_ENCODINGS}.utf8 */
static EIF_REFERENCE F19_264_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(64)

	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("utf8", 18, Current, 0, 0, 255);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(20, 0x01).id, 20, _OBJSIZ_2_0_0_0_0_0_0_0_);
	tr2 = RTOUCR(70,(nstcall = 0, F20_270), (Current));
	(nstcall = -1, F21_277(RTCW(tr1), tr2));
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("utf8_not_void", EX_POST);
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

EIF_REFERENCE F19_264 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(64,F19_264_body,(Current));
}

/* {SYSTEM_ENCODINGS}.utf16 */
static EIF_REFERENCE F19_265_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(170)

	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("utf16", 18, Current, 0, 0, 256);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(20, 0x01).id, 20, _OBJSIZ_2_0_0_0_0_0_0_0_);
	tr2 = RTOUCR(165,(nstcall = 0, F20_271), (Current));
	(nstcall = -1, F21_277(RTCW(tr1), tr2));
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("utf16_not_void", EX_POST);
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

EIF_REFERENCE F19_265 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(170,F19_265_body,(Current));
}

/* {SYSTEM_ENCODINGS}.utf32 */
static EIF_REFERENCE F19_266_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(63)

	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("utf32", 18, Current, 0, 0, 257);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(20, 0x01).id, 20, _OBJSIZ_2_0_0_0_0_0_0_0_);
	tr2 = RTOUCR(166,(nstcall = 0, F20_272), (Current));
	(nstcall = -1, F21_277(RTCW(tr1), tr2));
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("utf32_not_void", EX_POST);
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

EIF_REFERENCE F19_266 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(63,F19_266_body,(Current));
}

/* {SYSTEM_ENCODINGS}.iso_8859_1 */
static EIF_REFERENCE F19_267_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(171)

	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLIU(4);
	
	RTEAA("iso_8859_1", 18, Current, 0, 0, 258);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(20, 0x01).id, 20, _OBJSIZ_2_0_0_0_0_0_0_0_);
	tr2 = RTOUCR(168,(nstcall = 0, F19_268), (Current));
	tr3 = RTOUCR(172,(nstcall = 1, F60_809), (RTCW(tr2)));
	(nstcall = -1, F21_277(RTCW(tr1), tr3));
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

EIF_REFERENCE F19_267 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(171,F19_267_body,(Current));
}

/* {SYSTEM_ENCODINGS}.system_encodings_i */
static EIF_REFERENCE F19_268_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(168)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("system_encodings_i", 18, Current, 0, 0, 259);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(59, 0x01).id, 59, _OBJSIZ_0_0_0_0_0_0_0_0_);
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

EIF_REFERENCE F19_268 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(168,F19_268_body,(Current));
}

void EIF_Minit11 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
