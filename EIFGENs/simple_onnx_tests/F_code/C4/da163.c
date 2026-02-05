/*
 * Code for class DATE_TIME_DURATION
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "da163.h"
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

/* {DATE_TIME_DURATION}.make */
void F187_2191 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32 arg5, EIF_INTEGER_32 arg6)
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
	
	RTEAA("make", 186, Current, 0, 6, 2220);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNSMART(eif_new_type(184, 1).id);
	(nstcall = -1, F185_2133(RTCW(tr1), arg1, arg2, arg3));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = RTLNSMART(eif_new_type(185, 1).id);
	(nstcall = -1, F186_2160(RTCW(tr1), arg4, arg5, arg6));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("date_exists", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_2_) != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("time_exists", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("year_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F86_1136(Current)) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("month_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F86_1137(Current)) == arg2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("day_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F86_1138(Current)) == arg3)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("hour_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F86_1139(Current)) == arg4)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("minute_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F86_1140(Current)) == arg5)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("second_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F86_1141(Current)) == arg6)) {
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
}

/* {DATE_TIME_DURATION}.make_definite */
void F187_2192 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
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
	
	RTEAA("make_definite", 186, Current, 0, 4, 2221);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNSMART(eif_new_type(184, 1).id);
	(nstcall = -1, F185_2134(RTCW(tr1), arg1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = RTLNSMART(eif_new_type(185, 1).id);
	(nstcall = -1, F186_2160(RTCW(tr1), arg2, arg3, arg4));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("date_exists", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_2_) != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("time_exists", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("definite_result", EX_POST);
		if ((nstcall = 0, F187_2204(Current))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("day_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F86_1138(Current)) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("hour_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F86_1139(Current)) == arg2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("minute_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F86_1140(Current)) == arg3)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("second_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F86_1141(Current)) == arg4)) {
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

/* {DATE_TIME_DURATION}.make_fine */
void F187_2193 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32 arg5, EIF_REAL_64 arg6)
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
	
	RTEAA("make_fine", 186, Current, 0, 6, 2222);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNSMART(eif_new_type(184, 1).id);
	(nstcall = -1, F185_2133(RTCW(tr1), arg1, arg2, arg3));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = RTLNSMART(eif_new_type(185, 1).id);
	(nstcall = -1, F186_2161(RTCW(tr1), arg4, arg5, arg6));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("date_exists", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_2_) != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("time_exists", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("year_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F86_1136(Current)) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("month_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F86_1137(Current)) == arg2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("day_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F86_1138(Current)) == arg3)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("hour_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F86_1139(Current)) == arg4)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("minute_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F86_1140(Current)) == arg5)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("fine_second_set", EX_POST);
		if ((EIF_BOOLEAN) eif_is_equal_real_64 ((nstcall = 0, F86_1142(Current)), arg6)) {
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
}

/* {DATE_TIME_DURATION}.make_by_date_time */
void F187_2194 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("make_by_date_time", 186, Current, 0, 2, 2223);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("date_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("time_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) arg1;
	RTHOOK(4);
	RTAR(Current, arg2);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("date_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_2_) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("time_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) == arg2)) {
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

/* {DATE_TIME_DURATION}.make_by_date */
void F187_2195 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("make_by_date", 186, Current, 0, 1, 2224);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("d_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) arg1;
	RTHOOK(3);
	tr1 = RTLNSMART(eif_new_type(185, 1).id);
	(nstcall = -1, F186_2160(RTCW(tr1), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("date_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_2_) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("time_exists", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("time_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tr2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tr3 = (nstcall = 1, F186_2166(RTCW(tr2)));
		tb1 = (nstcall = 1, F186_2173(RTCW(tr1), tr3));
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

/* {DATE_TIME_DURATION}.date */
EIF_REFERENCE F187_2196 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {DATE_TIME_DURATION}.time */
EIF_REFERENCE F187_2197 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {DATE_TIME_DURATION}.origin_date_time */
EIF_REFERENCE F187_2198 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {DATE_TIME_DURATION}.zero */
EIF_REFERENCE F187_2199 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
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
	
	RTEAA("zero", 186, Current, 0, 0, 2228);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNSMART(Dftype(Current));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	tr2 = (nstcall = 1, F185_2135(RTCW(tr1)));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr3 = (nstcall = 1, F186_2166(RTCW(tr1)));
	(nstcall = -1, F187_2194(RTCW(Result), tr2, tr3));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_exists", EX_POST);
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

/* {DATE_TIME_DURATION}.seconds_count */
EIF_INTEGER_64 F187_2200 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_64 ti8_2;
	EIF_INTEGER_64 ti8_3;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_64 Result = ((EIF_INTEGER_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("seconds_count", 186, Current, 0, 0, 2229);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("has_origin", EX_PRE);
		RTTE((nstcall = 0, F187_2207(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	ti4_1 = (nstcall = 1, F185_2140(RTCW(tr1)));
	ti8_1 = (EIF_INTEGER_64) ti4_1;
	ti8_2 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 86400L);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	ti4_1 = (nstcall = 1, F186_2165(RTCW(tr1)));
	ti8_3 = (EIF_INTEGER_64) ti4_1;
	Result = (EIF_INTEGER_64) (EIF_INTEGER_64) ((EIF_INTEGER_64) (ti8_1 * ti8_2) + ti8_3);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {DATE_TIME_DURATION}.fine_seconds_count */
EIF_REAL_64 F187_2201 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_INTEGER_32 ti4_1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("fine_seconds_count", 186, Current, 0, 0, 2204);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("has_origin", EX_PRE);
		RTTE((nstcall = 0, F187_2207(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	ti4_1 = (nstcall = 1, F185_2140(RTCW(tr1)));
	tr8_1 = (EIF_REAL_64) (ti4_1);
	tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 86400L));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr8_3 = (nstcall = 1, F186_2164(RTCW(tr1)));
	Result = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) (tr8_1 * tr8_2) + tr8_3);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {DATE_TIME_DURATION}.is_less */
EIF_BOOLEAN F187_2202 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
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
	
	RTEAA("is_less", 186, Current, 0, 1, 2205);
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
	tb1 = '\0';
	if ((nstcall = 0, F187_2204(Current))) {
		tb2 = (nstcall = 1, F187_2204(RTCW(arg1)));
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(3);
		Result = '\01';
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		ti4_1 = (nstcall = 1, F186_2188(RTCW(tr1)));
		ti4_2 = (nstcall = 1, F86_1138(RTCW(arg1)));
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_);
		ti4_3 = (nstcall = 1, F186_2188(RTCW(tr1)));
		if (!(EIF_BOOLEAN) ((EIF_INTEGER_32) ((nstcall = 0, F86_1138(Current)) + ti4_1) < (EIF_INTEGER_32) (ti4_2 + ti4_3))) {
			tb1 = '\0';
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			ti4_1 = (nstcall = 1, F186_2188(RTCW(tr1)));
			ti4_2 = (nstcall = 1, F86_1138(RTCW(arg1)));
			tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_);
			ti4_3 = (nstcall = 1, F186_2188(RTCW(tr1)));
			if ((EIF_BOOLEAN)((EIF_INTEGER_32) ((nstcall = 0, F86_1138(Current)) + ti4_1) == (EIF_INTEGER_32) (ti4_2 + ti4_3))) {
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
				tr2 = (nstcall = 1, F186_2189(RTCW(tr1)));
				tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_);
				tr3 = (nstcall = 1, F186_2189(RTCW(tr1)));
				tb2 = (nstcall = 1, F186_2172(RTCW(tr2), tr3));
				tb1 = tb2;
			}
			Result = tb1;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("non_definite_result", EX_POST);
		tb1 = '\01';
		tb2 = '\0';
		if ((nstcall = 0, F187_2204(Current))) {
			tb3 = (nstcall = 1, F187_2204(RTCW(arg1)));
			tb2 = tb3;
		}
		if ((EIF_BOOLEAN) !tb2) {
			tb1 = (EIF_BOOLEAN) !Result;
		}
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
	return Result;
}

/* {DATE_TIME_DURATION}.is_equal */
EIF_BOOLEAN F187_2203 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
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
	
	RTEAA("is_equal", 186, Current, 0, 1, 2206);
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
	Result = '\0';
	tb1 = '\0';
	tb2 = '\0';
	ti4_1 = (nstcall = 1, F86_1136(RTCW(arg1)));
	if ((EIF_BOOLEAN)((nstcall = 0, F86_1136(Current)) == ti4_1)) {
		ti4_1 = (nstcall = 1, F86_1137(RTCW(arg1)));
		tb2 = (EIF_BOOLEAN)((nstcall = 0, F86_1137(Current)) == ti4_1);
	}
	if (tb2) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		ti4_1 = (nstcall = 1, F186_2188(RTCW(tr1)));
		ti4_2 = (nstcall = 1, F86_1138(RTCW(arg1)));
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_);
		ti4_3 = (nstcall = 1, F186_2188(RTCW(tr1)));
		tb1 = (EIF_BOOLEAN)((EIF_INTEGER_32) ((nstcall = 0, F86_1138(Current)) + ti4_1) == (EIF_INTEGER_32) (ti4_2 + ti4_3));
	}
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tr2 = (nstcall = 1, F186_2189(RTCW(tr1)));
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_);
		tr3 = (nstcall = 1, F186_2189(RTCW(tr1)));
		tb1 = (nstcall = 1, F186_2173(RTCW(tr2), tr3));
		Result = tb1;
	}
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
		if ((nstcall = 0, F1_9(Current, arg1))) {
			tb1 = Result;
		}
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
	return Result;
}

/* {DATE_TIME_DURATION}.definite */
EIF_BOOLEAN F187_2204 (EIF_REFERENCE Current)
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
	
	RTEAA("definite", 186, Current, 0, 0, 2207);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	tb1 = (nstcall = 1, F185_2143(RTCW(tr1)));
	Result = (EIF_BOOLEAN) tb1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_definition", EX_POST);
		tb1 = '\0';
		if ((EIF_BOOLEAN)((nstcall = 0, F86_1136(Current)) == ((EIF_INTEGER_32) 0L))) {
			tb1 = (EIF_BOOLEAN)((nstcall = 0, F86_1137(Current)) == ((EIF_INTEGER_32) 0L));
		}
		if ((EIF_BOOLEAN)(Result == tb1)) {
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

/* {DATE_TIME_DURATION}.canonical */
EIF_BOOLEAN F187_2205 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTEAA("canonical", 186, Current, 1, 1, 2208);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("start_date_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 1, F989_6771(RTCW(arg1), Current));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	tb1 = (nstcall = 1, F188_2219(RTCW(loc1), arg1));
	if (tb1) {
		RTHOOK(4);
		Result = '\0';
		tb1 = '\0';
		tb2 = '\0';
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		tr2 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_);
		tb3 = (nstcall = 1, F185_2144(RTCW(tr1), tr2));
		if (tb3) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			ti4_1 = (nstcall = 1, F186_2165(RTCW(tr1)));
			tb2 = (EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 0L));
		}
		if (tb2) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			tb2 = (nstcall = 1, F186_2174(RTCW(tr1)));
			tb1 = tb2;
		}
		if (tb1) {
			Result = (EIF_BOOLEAN) ((nstcall = 0, F86_1139(Current)) < ((EIF_INTEGER_32) 24L));
		}
	} else {
		RTHOOK(5);
		Result = '\0';
		tb1 = '\0';
		tb2 = '\0';
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		tr2 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_);
		tb3 = (nstcall = 1, F185_2144(RTCW(tr1), tr2));
		if (tb3) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			ti4_1 = (nstcall = 1, F186_2165(RTCW(tr1)));
			tb2 = (EIF_BOOLEAN) (ti4_1 <= ((EIF_INTEGER_32) 0L));
		}
		if (tb2) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			tb2 = (nstcall = 1, F186_2174(RTCW(tr1)));
			tb1 = tb2;
		}
		if (tb1) {
			Result = (EIF_BOOLEAN) ((nstcall = 0, F86_1139(Current)) > (EIF_INTEGER_32) -((EIF_INTEGER_32) 24L));
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
	return Result;
}

/* {DATE_TIME_DURATION}.is_positive */
EIF_BOOLEAN F187_2206 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("is_positive", 186, Current, 0, 0, 2209);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = '\0';
	tb1 = '\0';
	tb2 = '\01';
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	tb3 = (nstcall = 1, F185_2145(RTCW(tr1)));
	if (!tb3) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		tb3 = (nstcall = 1, F184_2130(RTCW(tr1)));
		tb2 = tb3;
	}
	if (tb2) {
		tb2 = '\01';
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tb3 = (nstcall = 1, F186_2175(RTCW(tr1)));
		if (!tb3) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			tb3 = (nstcall = 1, F184_2130(RTCW(tr1)));
			tb2 = tb3;
		}
		tb1 = tb2;
	}
	if (tb1) {
		tb1 = '\0';
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		tb2 = (nstcall = 1, F184_2130(RTCW(tr1)));
		if (tb2) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			tb2 = (nstcall = 1, F184_2130(RTCW(tr1)));
			tb1 = tb2;
		}
		Result = (EIF_BOOLEAN) !tb1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {DATE_TIME_DURATION}.has_origin_date_time */
EIF_BOOLEAN F187_2207 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("has_origin_date_time", 186, Current, 0, 0, 2210);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tr1 != NULL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {DATE_TIME_DURATION}.set_origin_date_time */
void F187_2208 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLIU(5);
	
	RTEAA("set_origin_date_time", 186, Current, 0, 1, 2211);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	RTHOOK(2);
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		tr2 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_);
		(nstcall = 1, F185_2147(RTCW(tr1), tr2));
	} else {
		RTHOOK(4);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		(nstcall = 1, F185_2147(RTCW(tr1), NULL));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("origin_date_time_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("origin_date_set", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)(arg1 != NULL)) {
			tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_);
			tr2 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
			tr3 = *(EIF_REFERENCE *)(RTCW(tr2));
			tr2 = tr3;
			tb1 = (EIF_BOOLEAN)(tr1 == tr2);
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

/* {DATE_TIME_DURATION}.set_date */
void F187_2209 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("set_date", 186, Current, 0, 1, 2212);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("d_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("date_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_2_) == arg1)) {
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

/* {DATE_TIME_DURATION}.set_time */
void F187_2210 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("set_time", 186, Current, 0, 1, 2213);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("t_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("time_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) == arg1)) {
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

/* {DATE_TIME_DURATION}.plus */
EIF_REFERENCE F187_2211 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,Result);
	RTLR(6,loc1);
	RTLIU(7);
	
	RTEAA("plus", 186, Current, 1, 1, 2214);
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
	Result = RTLNSMART(Dftype(Current));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	tr2 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_2_);
	tr2 = (nstcall = 1, F185_2155(RTCW(tr1), tr2));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr3 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_);
	tr3 = (nstcall = 1, F186_2185(RTCW(tr1), tr3));
	(nstcall = -1, F187_2194(RTCW(Result), tr2, tr3));
	RTHOOK(3);
	loc1 = *(EIF_REFERENCE *)(Current);
	RTHOOK(4);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTHOOK(5);
		tr1 = (nstcall = 1, F1_14(loc1));
		(nstcall = 1, F187_2208(RTCW(Result), tr1));
	} else {
		RTHOOK(6);
		(nstcall = 1, F187_2208(RTCW(Result), NULL));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("commutative", EX_POST);
		tr1 = (nstcall = 1, F187_2211(RTCW(arg1), Current));
		tb1 = (nstcall = 1, F187_2203(RTCW(Result), tr1));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("origin_date_time", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = *(EIF_REFERENCE *)(RTCW(Result));
		if ((nstcall = 0, F1_10(Current, tr1, tr2))) {
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
	return Result;
}

/* {DATE_TIME_DURATION}.opposite */
EIF_REFERENCE F187_2212 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,Result);
	RTLR(5,loc1);
	RTLIU(6);
	
	RTEAA("opposite", 186, Current, 1, 0, 2215);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNSMART(Dftype(Current));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	tr2 = (nstcall = 1, F185_2156(RTCW(tr1)));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr3 = (nstcall = 1, F186_2186(RTCW(tr1)));
	(nstcall = -1, F187_2194(RTCW(Result), tr2, tr3));
	RTHOOK(2);
	loc1 = *(EIF_REFERENCE *)(Current);
	RTHOOK(3);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTHOOK(4);
		tr1 = (nstcall = 1, F1_14(loc1));
		(nstcall = 1, F187_2208(RTCW(Result), tr1));
	} else {
		RTHOOK(5);
		(nstcall = 1, F187_2208(RTCW(Result), NULL));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("result_definition", EX_POST);
		tr1 = (nstcall = 1, F187_2211(RTCW(Result), Current));
		tr2 = (nstcall = 0, F187_2199(Current));
		tb1 = (nstcall = 1, F187_2203(RTCW(tr1), tr2));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("origin_date_time", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = *(EIF_REFERENCE *)(RTCW(Result));
		if ((nstcall = 0, F1_10(Current, tr1, tr2))) {
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
	return Result;
}

/* {DATE_TIME_DURATION}.day_add */
void F187_2213 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("day_add", 186, Current, 0, 1, 2216);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_1 = (nstcall = 0, F86_1138(Current));
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(1);
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	ti4_2 = (nstcall = 0, F86_1138(Current));
	(nstcall = 1, F185_2148(RTCW(tr2), (EIF_INTEGER_32) (ti4_2 + arg1)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_definition", EX_POST);
		RTCO(tr1);
		if ((EIF_BOOLEAN)((nstcall = 0, F86_1138(Current)) == (EIF_INTEGER_32) (ti4_1 + arg1))) {
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

/* {DATE_TIME_DURATION}.to_canonical */
EIF_REFERENCE F187_2214 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLR(3,loc1);
	RTLR(4,tr1);
	RTLR(5,loc3);
	RTLR(6,tr2);
	RTLR(7,loc2);
	RTLIU(8);
	
	RTEAA("to_canonical", 186, Current, 3, 1, 2217);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((nstcall = 0, F187_2205(Current, arg1))) {
		RTHOOK(2);
		Result = (nstcall = 0, F1_20(Current));
	} else {
		RTHOOK(3);
		tr1 = (nstcall = 1, F989_6771(RTCW(arg1), Current));
		loc1 = (EIF_REFERENCE) tr1;
		RTHOOK(4);
		loc3 = RTLNS(eif_new_type(185, 0x01).id, 185, _OBJSIZ_0_0_0_2_0_0_0_1_);
		ti4_1 = (nstcall = 1, F86_1139(RTCW(loc1)));
		ti4_2 = (nstcall = 1, F86_1139(RTCW(arg1)));
		ti4_3 = (nstcall = 1, F86_1140(RTCW(loc1)));
		ti4_4 = (nstcall = 1, F86_1140(RTCW(arg1)));
		tr8_1 = (nstcall = 1, F86_1142(RTCW(loc1)));
		tr8_2 = (nstcall = 1, F86_1142(RTCW(arg1)));
		(nstcall = -1, F186_2161(RTCW(loc3), (EIF_INTEGER_32) (ti4_1 - ti4_2), (EIF_INTEGER_32) (ti4_3 - ti4_4), (EIF_REAL_64) (tr8_1 - tr8_2)));
		RTHOOK(5);
		tb1 = '\0';
		tb2 = (nstcall = 1, F188_2219(RTCW(loc1), arg1));
		if (tb2) {
			tr1 = *(EIF_REFERENCE *)(RTCW(loc1));
			tr2 = *(EIF_REFERENCE *)(RTCW(arg1));
			tb2 = (nstcall = 1, F984_6646(RTCW(tr1), tr2));
			tb1 = tb2;
		}
		if (tb1) {
			RTHOOK(6);
			(nstcall = 1, F186_2184(RTCW(loc3), ((EIF_INTEGER_32) 24L)));
			RTHOOK(7);
			(nstcall = 1, F989_6775(RTCW(loc1), ((EIF_INTEGER_32) -1L)));
		} else {
			RTHOOK(8);
			tb1 = '\0';
			tb2 = (nstcall = 1, F989_6765(RTCW(loc1), arg1));
			if (tb2) {
				tr1 = *(EIF_REFERENCE *)(RTCW(loc1));
				tr2 = *(EIF_REFERENCE *)(RTCW(arg1));
				tb2 = (nstcall = 1, F188_2218(RTCW(tr1), tr2));
				tb1 = tb2;
			}
			if (tb1) {
				RTHOOK(9);
				(nstcall = 1, F186_2184(RTCW(loc3), ((EIF_INTEGER_32) -24L)));
				RTHOOK(10);
				(nstcall = 1, F989_6775(RTCW(loc1), ((EIF_INTEGER_32) 1L)));
			}
		}
		RTHOOK(11);
		loc2 = RTLNS(eif_new_type(184, 0x01).id, 184, _OBJSIZ_1_0_0_3_0_0_0_0_);
		ti4_1 = (nstcall = 1, F989_6762(RTCW(loc1)));
		ti4_2 = (nstcall = 1, F989_6762(RTCW(arg1)));
		(nstcall = -1, F185_2134(RTCW(loc2), (EIF_INTEGER_32) (ti4_1 - ti4_2)));
		RTHOOK(12);
		Result = RTLNSMART(Dftype(Current));
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_);
		tr1 = (nstcall = 1, F185_2157(RTCW(loc2), tr1));
		tr2 = (nstcall = 1, F186_2187(RTCW(loc3)));
		(nstcall = -1, F187_2194(RTCW(Result), tr1, tr2));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(13);
		RTCT("canonical_set", EX_POST);
		tb1 = (nstcall = 1, F187_2205(RTCW(Result), arg1));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(14);
		RTCT("duration_not_changed", EX_POST);
		tr1 = (nstcall = 1, F989_6771(RTCW(arg1), Current));
		tr2 = (nstcall = 1, F989_6771(RTCW(arg1), Result));
		if ((nstcall = 0, F1_10(Current, tr1, tr2))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(15);
	RTLE;
	RTEE;
	return Result;
}

/* {DATE_TIME_DURATION}.time_to_canonical */
EIF_REFERENCE F187_2215 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLIU(5);
	
	RTEAA("time_to_canonical", 186, Current, 0, 0, 2218);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("definite_duration", EX_PRE);
		RTTE((nstcall = 0, F187_2204(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = (nstcall = 0, F1_20(Current));
	RTHOOK(3);
	tr1 = (nstcall = 0, F187_2199(Current));
	tb1 = (nstcall = 1, F182_2089(Current, tr1));
	if (tb1) {
		RTHOOK(4);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tr2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tr3 = (nstcall = 1, F186_2166(RTCW(tr2)));
		tb1 = (nstcall = 1, F186_2172(RTCW(tr1), tr3));
		if (tb1) {
			RTHOOK(5);
			tr1 = *(EIF_REFERENCE *)(RTCW(Result) + _REFACS_1_);
			tr2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			ti4_1 = (nstcall = 1, F186_2188(RTCW(tr2)));
			(nstcall = 1, F186_2184(RTCW(tr1), (EIF_INTEGER_32) ((EIF_INTEGER_32) -ti4_1 * ((EIF_INTEGER_32) 24L))));
		}
		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		ti4_1 = (nstcall = 1, F186_2188(RTCW(tr1)));
		(nstcall = 1, F187_2213(RTCW(Result), ti4_1));
		RTHOOK(7);
		tr1 = *(EIF_REFERENCE *)(RTCW(Result) + _REFACS_1_);
		tr2 = (nstcall = 1, F186_2189(RTCW(tr1)));
		(nstcall = 1, F187_2210(RTCW(Result), tr2));
	} else {
		RTHOOK(8);
		tr1 = (nstcall = 1, F187_2212(RTCW(Result)));
		tr2 = (nstcall = 1, F187_2215(RTCW(tr1)));
		tr1 = (nstcall = 1, F187_2212(RTCW(tr2)));
		Result = (EIF_REFERENCE) tr1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("time_canonical", EX_POST);
		tr1 = *(EIF_REFERENCE *)(RTCW(Result) + _REFACS_1_);
		tb1 = (nstcall = 1, F186_2174(RTCW(tr1)));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("same_sign", EX_POST);
		tb1 = '\0';
		tb2 = '\01';
		tr1 = *(EIF_REFERENCE *)(RTCW(Result) + _REFACS_2_);
		tr2 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		tr3 = (nstcall = 1, F185_2135(RTCW(tr2)));
		tb3 = (nstcall = 1, F182_2088(RTCW(tr1), tr3));
		if (tb3) {
			tr1 = *(EIF_REFERENCE *)(RTCW(Result) + _REFACS_1_);
			tr2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			tr3 = (nstcall = 1, F186_2166(RTCW(tr2)));
			tb3 = (nstcall = 1, F182_2089(RTCW(tr1), tr3));
			tb2 = tb3;
		}
		if (tb2) {
			tb2 = '\01';
			tr1 = *(EIF_REFERENCE *)(RTCW(Result) + _REFACS_2_);
			tr2 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
			tr3 = (nstcall = 1, F185_2135(RTCW(tr2)));
			tb3 = (nstcall = 1, F185_2141(RTCW(tr1), tr3));
			if (tb3) {
				tr1 = *(EIF_REFERENCE *)(RTCW(Result) + _REFACS_1_);
				tr2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
				tr3 = (nstcall = 1, F186_2166(RTCW(tr2)));
				tb3 = (nstcall = 1, F182_2087(RTCW(tr1), tr3));
				tb2 = tb3;
			}
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
	RTHOOK(11);
	RTLE;
	RTEE;
	return Result;
}

/* {DATE_TIME_DURATION}._invariant */
void F187_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,loc1);
	RTLR(4,tr3);
	RTLR(5,loc2);
	RTLIU(6);
	RTEAINV(l_feature_name, 162, Current, 2, 0);
	RTIT("date_exists", Current);
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_2_) != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("time_exists", Current);
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("origin_constraint", Current);
	tb1 = '\01';
	tb2 = '\0';
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) == NULL)) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		tr2 = *(EIF_REFERENCE *)(RTCW(tr1));
		tb2 = (EIF_BOOLEAN)(tr2 == NULL);
	}
	if (!tb2) {
		tb2 = '\0';
		tr1 = *(EIF_REFERENCE *)(Current);
		loc1 = tr1;
		if (EIF_TEST(loc1)) {
			tr1 = *(EIF_REFERENCE *)(loc1 + _REFACS_1_);
			tr2 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
			tr3 = *(EIF_REFERENCE *)(RTCW(tr2));
			tr2 = tr3;
			tb2 = (EIF_BOOLEAN)(tr1 == tr2);
		}
		tb1 = tb2;
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("same_signs", Current);
	tb1 = '\01';
	tb2 = '\0';
	tb3 = '\0';
	if ((nstcall = 0, F187_2207(Current))) {
		tr1 = *(EIF_REFERENCE *)(Current);
		loc2 = tr1;
		tb3 = EIF_TEST(loc2);
	}
	if (tb3) {
		tb2 = (nstcall = 0, F187_2205(Current, loc2));
	}
	if (tb2) {
		tb2 = '\01';
		tb3 = '\0';
		tb4 = '\01';
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		tb5 = (nstcall = 1, F185_2145(RTCW(tr1)));
		if (!tb5) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
			tb5 = (nstcall = 1, F184_2130(RTCW(tr1)));
			tb4 = tb5;
		}
		if (tb4) {
			tb4 = '\01';
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			tb5 = (nstcall = 1, F186_2175(RTCW(tr1)));
			if (!tb5) {
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
				tb5 = (nstcall = 1, F184_2130(RTCW(tr1)));
				tb4 = tb5;
			}
			tb3 = tb4;
		}
		if (!tb3) {
			tb3 = '\0';
			tb4 = '\01';
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
			tb5 = (nstcall = 1, F184_2129(RTCW(tr1)));
			if (!tb5) {
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
				tb5 = (nstcall = 1, F184_2130(RTCW(tr1)));
				tb4 = tb5;
			}
			if (tb4) {
				tb4 = '\01';
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
				tb5 = (nstcall = 1, F184_2129(RTCW(tr1)));
				if (!tb5) {
					tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
					tb5 = (nstcall = 1, F184_2130(RTCW(tr1)));
					tb4 = tb5;
				}
				tb3 = tb4;
			}
			tb2 = tb3;
		}
		tb1 = tb2;
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit163 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
