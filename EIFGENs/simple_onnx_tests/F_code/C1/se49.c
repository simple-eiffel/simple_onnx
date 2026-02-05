/*
 * Code for class SED_BINARY_READER_WRITER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "se49.h"
#include <string.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {SED_BINARY_READER_WRITER}.is_ready_for_reading */
EIF_BOOLEAN F64_893 (EIF_REFERENCE Current)
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
	
	RTEAA("is_ready_for_reading", 63, Current, 0, 0, 943);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {SED_BINARY_READER_WRITER}.is_ready_for_writing */
EIF_BOOLEAN F64_894 (EIF_REFERENCE Current)
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
	
	RTEAA("is_ready_for_writing", 63, Current, 0, 0, 944);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) !Result;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {SED_BINARY_READER_WRITER}.is_for_reading */
EIF_BOOLEAN F64_895 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_);
}


/* {SED_BINARY_READER_WRITER}.set_for_reading */
void F64_896 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_for_reading", 63, Current, 0, 0, 946);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("is_for_reading", EX_POST);
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_)) {
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

/* {SED_BINARY_READER_WRITER}.set_for_writing */
void F64_897 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_for_writing", 63, Current, 0, 0, 947);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("is_for_writing", EX_POST);
		if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_)) {
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

/* {SED_BINARY_READER_WRITER}.read_natural_8 */
EIF_NATURAL_8 F64_898 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
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
	
	RTEAA("read_natural_8", 63, Current, 1, 0, 948);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_ready", EX_PRE);
		RTTE((nstcall = 0, F181_2073(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F181_2083(Current, ((EIF_INTEGER_32) 1L)));
	RTHOOK(3);
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_);
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current);
	tu1_1 = (nstcall = 1, F214_2538(RTCW(tr1), loc1));
	Result = (EIF_NATURAL_8) tu1_1;
	RTHOOK(5);
	loc1 += ((EIF_INTEGER_32) 1L);
	RTHOOK(6);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_) = (EIF_INTEGER_32) loc1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {SED_BINARY_READER_WRITER}.read_natural_16 */
EIF_NATURAL_16 F64_899 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 Result = ((EIF_NATURAL_16) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("read_natural_16", 63, Current, 1, 0, 949);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_ready", EX_PRE);
		RTTE((nstcall = 0, F181_2073(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F181_2083(Current, ((EIF_INTEGER_32) 2L)));
	RTHOOK(3);
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_);
	RTHOOK(4);
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_)) {
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current);
		tu2_1 = (nstcall = 1, F214_2577(RTCW(tr1), loc1));
		Result = (EIF_NATURAL_16) tu2_1;
	} else {
		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(Current);
		tu2_1 = (nstcall = 1, F214_2597(RTCW(tr1), loc1));
		Result = (EIF_NATURAL_16) tu2_1;
	}
	RTHOOK(7);
	loc1 += ((EIF_INTEGER_32) 2L);
	RTHOOK(8);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_) = (EIF_INTEGER_32) loc1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
	return Result;
}

/* {SED_BINARY_READER_WRITER}.read_natural_32 */
EIF_NATURAL_32 F64_900 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("read_natural_32", 63, Current, 1, 0, 950);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_ready", EX_PRE);
		RTTE((nstcall = 0, F181_2073(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F181_2083(Current, ((EIF_INTEGER_32) 4L)));
	RTHOOK(3);
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_);
	RTHOOK(4);
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_)) {
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current);
		tu4_1 = (nstcall = 1, F214_2578(RTCW(tr1), loc1));
		Result = (EIF_NATURAL_32) tu4_1;
	} else {
		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(Current);
		tu4_1 = (nstcall = 1, F214_2598(RTCW(tr1), loc1));
		Result = (EIF_NATURAL_32) tu4_1;
	}
	RTHOOK(7);
	loc1 += ((EIF_INTEGER_32) 4L);
	RTHOOK(8);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_) = (EIF_INTEGER_32) loc1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
	return Result;
}

/* {SED_BINARY_READER_WRITER}.read_natural_64 */
EIF_NATURAL_64 F64_901 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_64 Result = ((EIF_NATURAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("read_natural_64", 63, Current, 1, 0, 951);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_ready", EX_PRE);
		RTTE((nstcall = 0, F181_2073(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F181_2083(Current, ((EIF_INTEGER_32) 8L)));
	RTHOOK(3);
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_);
	RTHOOK(4);
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_)) {
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current);
		tu8_1 = (nstcall = 1, F214_2579(RTCW(tr1), loc1));
		Result = (EIF_NATURAL_64) tu8_1;
	} else {
		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(Current);
		tu8_1 = (nstcall = 1, F214_2599(RTCW(tr1), loc1));
		Result = (EIF_NATURAL_64) tu8_1;
	}
	RTHOOK(7);
	loc1 += ((EIF_INTEGER_32) 8L);
	RTHOOK(8);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_) = (EIF_INTEGER_32) loc1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
	return Result;
}

/* {SED_BINARY_READER_WRITER}.read_integer_8 */
EIF_INTEGER_8 F64_902 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_8 ti1_1;
	EIF_NATURAL_8 tu1_1;
	EIF_INTEGER_8 Result = ((EIF_INTEGER_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_integer_8", 63, Current, 0, 0, 952);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_ready", EX_PRE);
		RTTE((nstcall = 0, F181_2073(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	
	RTHOOK(2);
	tu1_1 = (nstcall = 0, F64_898(Current));
	ti1_1 = (EIF_INTEGER_8) tu1_1;
	Result = (EIF_INTEGER_8) ti1_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {SED_BINARY_READER_WRITER}.read_integer_16 */
EIF_INTEGER_16 F64_903 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_16 ti2_1;
	EIF_NATURAL_16 tu2_1;
	EIF_INTEGER_16 Result = ((EIF_INTEGER_16) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_integer_16", 63, Current, 0, 0, 953);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_ready", EX_PRE);
		RTTE((nstcall = 0, F181_2073(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	
	RTHOOK(2);
	tu2_1 = (nstcall = 0, F64_899(Current));
	ti2_1 = (EIF_INTEGER_16) tu2_1;
	Result = (EIF_INTEGER_16) ti2_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {SED_BINARY_READER_WRITER}.read_integer_32 */
EIF_INTEGER_32 F64_904 (EIF_REFERENCE Current)
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
	
	RTEAA("read_integer_32", 63, Current, 0, 0, 954);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_ready", EX_PRE);
		RTTE((nstcall = 0, F181_2073(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	
	RTHOOK(2);
	tu4_1 = (nstcall = 0, F64_900(Current));
	ti4_1 = (EIF_INTEGER_32) tu4_1;
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {SED_BINARY_READER_WRITER}.read_integer_64 */
EIF_INTEGER_64 F64_905 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_64 ti8_1;
	EIF_NATURAL_64 tu8_1;
	EIF_INTEGER_64 Result = ((EIF_INTEGER_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_integer_64", 63, Current, 0, 0, 955);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_ready", EX_PRE);
		RTTE((nstcall = 0, F181_2073(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	
	RTHOOK(2);
	tu8_1 = (nstcall = 0, F64_901(Current));
	ti8_1 = (EIF_INTEGER_64) tu8_1;
	Result = (EIF_INTEGER_64) ti8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {SED_BINARY_READER_WRITER}.read_real_32 */
EIF_REAL_32 F64_906 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("read_real_32", 63, Current, 1, 0, 956);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_ready", EX_PRE);
		RTTE((nstcall = 0, F181_2073(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F181_2083(Current, ((EIF_INTEGER_32) 4L)));
	RTHOOK(3);
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_);
	RTHOOK(4);
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_)) {
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current);
		tr4_1 = (nstcall = 1, F214_2584(RTCW(tr1), loc1));
		Result = (EIF_REAL_32) tr4_1;
	} else {
		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(Current);
		tr4_1 = (nstcall = 1, F214_2604(RTCW(tr1), loc1));
		Result = (EIF_REAL_32) tr4_1;
	}
	RTHOOK(7);
	loc1 += ((EIF_INTEGER_32) 4L);
	RTHOOK(8);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_) = (EIF_INTEGER_32) loc1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
	return Result;
}

/* {SED_BINARY_READER_WRITER}.read_real_64 */
EIF_REAL_64 F64_907 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("read_real_64", 63, Current, 1, 0, 957);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_ready", EX_PRE);
		RTTE((nstcall = 0, F181_2073(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F181_2083(Current, ((EIF_INTEGER_32) 8L)));
	RTHOOK(3);
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_);
	RTHOOK(4);
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_)) {
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current);
		tr8_1 = (nstcall = 1, F214_2585(RTCW(tr1), loc1));
		Result = (EIF_REAL_64) tr8_1;
	} else {
		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(Current);
		tr8_1 = (nstcall = 1, F214_2605(RTCW(tr1), loc1));
		Result = (EIF_REAL_64) tr8_1;
	}
	RTHOOK(7);
	loc1 += ((EIF_INTEGER_32) 8L);
	RTHOOK(8);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_) = (EIF_INTEGER_32) loc1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
	return Result;
}

/* {SED_BINARY_READER_WRITER}.read_pointer */
EIF_POINTER F64_908 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_64 loc2 = (EIF_NATURAL_64) 0;
	EIF_POINTER tp1;
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_32 tu4_1;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_pointer", 63, Current, 2, 0, 958);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_ready", EX_PRE);
		RTTE((nstcall = 0, F181_2073(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_)) {
		RTHOOK(3);
		(nstcall = 0, F181_2083(Current, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_2_)));
		RTHOOK(4);
		if ((EIF_BOOLEAN)((nstcall = 0, F180_2037(Current)) == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_2_))) {
			RTHOOK(5);
			if ((EIF_BOOLEAN)((nstcall = 0, F180_2037(Current)) == ((EIF_INTEGER_32) 4L))) {
				RTHOOK(6);
				loc1 = (nstcall = 0, F64_900(Current));
				RTHOOK(7);
				memcpy((void *)(EIF_POINTER *) &(Result), (const void *) (EIF_NATURAL_32 *) &(loc1), (size_t) ((EIF_INTEGER_32) 4L));
			} else {
				RTHOOK(8);
				if ((EIF_BOOLEAN)((nstcall = 0, F180_2037(Current)) == ((EIF_INTEGER_32) 8L))) {
					RTHOOK(9);
					loc2 = (nstcall = 0, F64_901(Current));
					RTHOOK(10);
					memcpy((void *)(EIF_POINTER *) &(Result), (const void *) (EIF_NATURAL_64 *) &(loc2), (size_t) ((EIF_INTEGER_32) 8L));
				} else {
					
				}
			}
		} else {
			RTHOOK(11);
			if ((EIF_BOOLEAN) ((nstcall = 0, F180_2037(Current)) > *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_2_))) {
				
				RTHOOK(12);
				loc1 = (nstcall = 0, F64_900(Current));
				RTHOOK(13);
				tp1 = RTPOF((EIF_POINTER *) &(Result),((EIF_INTEGER_32) 4L));
				memcpy((void *)tp1, (const void *) (EIF_NATURAL_32 *) &(loc1), (size_t) ((EIF_INTEGER_32) 4L));
			} else {
				
				RTHOOK(14);
				tu8_1 = (nstcall = 0, F64_901(Current));
				tu4_1 = (EIF_NATURAL_32) tu8_1;
				loc1 = (EIF_NATURAL_32) tu4_1;
				RTHOOK(15);
				memcpy((void *)(EIF_POINTER *) &(Result), (const void *) (EIF_NATURAL_32 *) &(loc1), (size_t) ((EIF_INTEGER_32) 4L));
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(16);
	RTLE;
	RTEE;
	return Result;
}

/* {SED_BINARY_READER_WRITER}.write_natural_8 */
void F64_909 (EIF_REFERENCE Current, EIF_NATURAL_8 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("write_natural_8", 63, Current, 1, 1, 959);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_ready", EX_PRE);
		RTTE((nstcall = 0, F181_2074(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F181_2083(Current, ((EIF_INTEGER_32) 1L)));
	RTHOOK(3);
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_);
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current);
	(nstcall = 1, F214_2558(RTCW(tr1), arg1, loc1));
	RTHOOK(5);
	loc1 += ((EIF_INTEGER_32) 1L);
	RTHOOK(6);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_) = (EIF_INTEGER_32) loc1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {SED_BINARY_READER_WRITER}.write_natural_16 */
void F64_910 (EIF_REFERENCE Current, EIF_NATURAL_16 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("write_natural_16", 63, Current, 1, 1, 960);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_ready", EX_PRE);
		RTTE((nstcall = 0, F181_2074(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F181_2083(Current, ((EIF_INTEGER_32) 2L)));
	RTHOOK(3);
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_);
	RTHOOK(4);
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_)) {
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current);
		(nstcall = 1, F214_2587(RTCW(tr1), arg1, loc1));
	} else {
		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(Current);
		(nstcall = 1, F214_2607(RTCW(tr1), arg1, loc1));
	}
	RTHOOK(7);
	loc1 += ((EIF_INTEGER_32) 2L);
	RTHOOK(8);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_) = (EIF_INTEGER_32) loc1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
}

/* {SED_BINARY_READER_WRITER}.write_natural_32 */
void F64_911 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("write_natural_32", 63, Current, 1, 1, 961);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_ready", EX_PRE);
		RTTE((nstcall = 0, F181_2074(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F181_2083(Current, ((EIF_INTEGER_32) 4L)));
	RTHOOK(3);
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_);
	RTHOOK(4);
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_)) {
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current);
		(nstcall = 1, F214_2588(RTCW(tr1), arg1, loc1));
	} else {
		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(Current);
		(nstcall = 1, F214_2608(RTCW(tr1), arg1, loc1));
	}
	RTHOOK(7);
	loc1 += ((EIF_INTEGER_32) 4L);
	RTHOOK(8);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_) = (EIF_INTEGER_32) loc1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
}

/* {SED_BINARY_READER_WRITER}.write_natural_64 */
void F64_912 (EIF_REFERENCE Current, EIF_NATURAL_64 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("write_natural_64", 63, Current, 1, 1, 962);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_ready", EX_PRE);
		RTTE((nstcall = 0, F181_2074(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F181_2083(Current, ((EIF_INTEGER_32) 8L)));
	RTHOOK(3);
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_);
	RTHOOK(4);
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_)) {
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current);
		(nstcall = 1, F214_2589(RTCW(tr1), arg1, loc1));
	} else {
		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(Current);
		(nstcall = 1, F214_2609(RTCW(tr1), arg1, loc1));
	}
	RTHOOK(7);
	loc1 += ((EIF_INTEGER_32) 8L);
	RTHOOK(8);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_) = (EIF_INTEGER_32) loc1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
}

/* {SED_BINARY_READER_WRITER}.write_integer_8 */
void F64_913 (EIF_REFERENCE Current, EIF_INTEGER_8 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_8 tu1_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("write_integer_8", 63, Current, 0, 1, 963);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_ready", EX_PRE);
		RTTE((nstcall = 0, F181_2074(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	
	RTHOOK(2);
	tu1_1 = (EIF_NATURAL_8) arg1;
	(nstcall = 0, F64_909(Current, tu1_1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {SED_BINARY_READER_WRITER}.write_integer_16 */
void F64_914 (EIF_REFERENCE Current, EIF_INTEGER_16 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_16 tu2_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("write_integer_16", 63, Current, 0, 1, 964);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_ready", EX_PRE);
		RTTE((nstcall = 0, F181_2074(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	
	RTHOOK(2);
	tu2_1 = (EIF_NATURAL_16) arg1;
	(nstcall = 0, F64_910(Current, tu2_1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {SED_BINARY_READER_WRITER}.write_integer_32 */
void F64_915 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("write_integer_32", 63, Current, 0, 1, 965);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_ready", EX_PRE);
		RTTE((nstcall = 0, F181_2074(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	
	RTHOOK(2);
	tu4_1 = (EIF_NATURAL_32) arg1;
	(nstcall = 0, F64_911(Current, tu4_1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {SED_BINARY_READER_WRITER}.write_integer_64 */
void F64_916 (EIF_REFERENCE Current, EIF_INTEGER_64 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_64 tu8_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("write_integer_64", 63, Current, 0, 1, 966);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_ready", EX_PRE);
		RTTE((nstcall = 0, F181_2074(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	
	RTHOOK(2);
	tu8_1 = (EIF_NATURAL_64) arg1;
	(nstcall = 0, F64_912(Current, tu8_1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {SED_BINARY_READER_WRITER}.write_real_32 */
void F64_917 (EIF_REFERENCE Current, EIF_REAL_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("write_real_32", 63, Current, 1, 1, 967);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_ready", EX_PRE);
		RTTE((nstcall = 0, F181_2074(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F181_2083(Current, ((EIF_INTEGER_32) 4L)));
	RTHOOK(3);
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_);
	RTHOOK(4);
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_)) {
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current);
		(nstcall = 1, F214_2594(RTCW(tr1), arg1, loc1));
	} else {
		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(Current);
		(nstcall = 1, F214_2614(RTCW(tr1), arg1, loc1));
	}
	RTHOOK(7);
	loc1 += ((EIF_INTEGER_32) 4L);
	RTHOOK(8);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_) = (EIF_INTEGER_32) loc1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
}

/* {SED_BINARY_READER_WRITER}.write_real_64 */
void F64_918 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("write_real_64", 63, Current, 1, 1, 968);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_ready", EX_PRE);
		RTTE((nstcall = 0, F181_2074(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F181_2083(Current, ((EIF_INTEGER_32) 8L)));
	RTHOOK(3);
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_);
	RTHOOK(4);
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_)) {
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current);
		(nstcall = 1, F214_2595(RTCW(tr1), arg1, loc1));
	} else {
		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(Current);
		(nstcall = 1, F214_2615(RTCW(tr1), arg1, loc1));
	}
	RTHOOK(7);
	loc1 += ((EIF_INTEGER_32) 8L);
	RTHOOK(8);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_) = (EIF_INTEGER_32) loc1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
}

/* {SED_BINARY_READER_WRITER}.write_pointer */
void F64_919 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_64 loc2 = (EIF_NATURAL_64) 0;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("write_pointer", 63, Current, 2, 1, 969);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_ready", EX_PRE);
		RTTE((nstcall = 0, F181_2074(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_)) {
		RTHOOK(3);
		if ((EIF_BOOLEAN)((nstcall = 0, F180_2037(Current)) == ((EIF_INTEGER_32) 4L))) {
			RTHOOK(4);
			memcpy((void *)(EIF_NATURAL_32 *) &(loc1), (const void *) (EIF_POINTER *) &(arg1), (size_t) ((EIF_INTEGER_32) 4L));
			RTHOOK(5);
			(nstcall = 0, F64_911(Current, loc1));
		} else {
			RTHOOK(6);
			if ((EIF_BOOLEAN)((nstcall = 0, F180_2037(Current)) == ((EIF_INTEGER_32) 8L))) {
				RTHOOK(7);
				memcpy((void *)(EIF_NATURAL_64 *) &(loc2), (const void *) (EIF_POINTER *) &(arg1), (size_t) ((EIF_INTEGER_32) 8L));
				RTHOOK(8);
				(nstcall = 0, F64_912(Current, loc2));
			} else {
				
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
}

/* {SED_BINARY_READER_WRITER}.buffer */
EIF_REFERENCE F64_920 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {SED_BINARY_READER_WRITER}.medium */
EIF_REFERENCE F64_921 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {SED_BINARY_READER_WRITER}.buffer_size */
EIF_INTEGER_32 F64_922 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_0_);
}


/* {SED_BINARY_READER_WRITER}.buffer_position */
EIF_INTEGER_32 F64_923 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_);
}


/* {SED_BINARY_READER_WRITER}.is_little_endian_storable */
EIF_BOOLEAN F64_925 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_);
}


/* {SED_BINARY_READER_WRITER}.stored_pointer_bytes */
EIF_INTEGER_32 F64_926 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_2_);
}


/* {SED_BINARY_READER_WRITER}._invariant */
void F64_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTEAINV(l_feature_name, 48, Current, 0, 0);
	RTIT("buffer_not_void", Current);
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("buffer_size_non_negative", Current);
	if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_0_) >= ((EIF_INTEGER_32) 0L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("buffer_position_non_negative", Current);
	if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_) >= ((EIF_INTEGER_32) 0L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("stored_pointer_bytes_non_negative", Current);
	if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_2_) >= ((EIF_INTEGER_32) 0L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit49 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
