/*
 * Code for class RT_DBG_VALUE_RECORD
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "rt207.h"
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

/* {RT_DBG_VALUE_RECORD}.position */
EIF_INTEGER_32 F775_4207 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current + O3440[Dtype(Current)-774]);
}


/* {RT_DBG_VALUE_RECORD}.type */
EIF_INTEGER_32 F775_4208 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current + O3441[Dtype(Current)-774]);
}


/* {RT_DBG_VALUE_RECORD}.breakable_info */
EIF_REFERENCE F775_4209 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {RT_DBG_VALUE_RECORD}.debug_output */
EIF_REFERENCE F775_4211 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,Result);
	RTLIU(5);
	
	RTEAA("debug_output", 774, Current, 0, 0, 7883);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = (nstcall = 0, F1_5(Current));
	tr2 = (nstcall = 1, F856_4667(RTCW(tr1)));
	tr1 = (nstcall = 1, F965_5989(RTMS_EX_H(": #",3,3809315)));
	tr1 = (nstcall = 1, F972_6289(RTCW(tr2), tr1));
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O3440[dtype-774]);
	tr2 = eif_out__i4_s1(ti4_1);
	tr3 = (nstcall = 1, F965_5989(RTCW(tr2)));
	tr2 = (nstcall = 1, F972_6289(RTCW(tr1), tr3));
	tr1 = (nstcall = 1, F965_5989(RTMS_EX_H(" = ",3,2112800)));
	tr1 = (nstcall = 1, F972_6289(RTCW(tr2), tr1));
	tr2 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3447[dtype-775])(Current));
	tr3 = (nstcall = 1, F965_5989(RTCW(tr2)));
	tr2 = (nstcall = 1, F972_6289(RTCW(tr1), tr3));
	tr1 = (nstcall = 1, F965_5989(RTCW(tr2)));
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
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_VALUE_RECORD}.set_breakable_info */
void F775_4216 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("set_breakable_info", 774, Current, 0, 1, 7879);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

void EIF_Minit207 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
