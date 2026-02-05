/*
 * Code for class IO_MEDIUM
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "io179.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {IO_MEDIUM}.is_plain_text */
EIF_BOOLEAN F218_2651 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_plain_text", 217, Current, 0, 0, 2762);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return (EIF_BOOLEAN) 0;
}

/* {IO_MEDIUM}.last_character */
EIF_CHARACTER_8 F218_2652 (EIF_REFERENCE Current)
{
	return *(EIF_CHARACTER_8 *)(Current + O2386[Dtype(Current)-217]);
}


/* {IO_MEDIUM}.last_string */
EIF_REFERENCE F218_2653 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {IO_MEDIUM}.last_integer */
EIF_INTEGER_32 F218_2654 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current + O2388[Dtype(Current)-217]);
}


/* {IO_MEDIUM}.last_integer_32 */
EIF_INTEGER_32 F218_2655 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("last_integer_32", 217, Current, 0, 0, 2767);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_INTEGER_32 *)(Current + O2388[dtype-217]);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {IO_MEDIUM}.last_integer_64 */
EIF_INTEGER_64 F218_2656 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_64 *)(Current + O2390[Dtype(Current)-217]);
}


/* {IO_MEDIUM}.last_integer_16 */
EIF_INTEGER_16 F218_2657 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_16 *)(Current + O2391[Dtype(Current)-217]);
}


/* {IO_MEDIUM}.last_integer_8 */
EIF_INTEGER_8 F218_2658 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_8 *)(Current + O2392[Dtype(Current)-217]);
}


/* {IO_MEDIUM}.last_natural_64 */
EIF_NATURAL_64 F218_2659 (EIF_REFERENCE Current)
{
	return *(EIF_NATURAL_64 *)(Current + O2393[Dtype(Current)-217]);
}


/* {IO_MEDIUM}.last_natural */
EIF_NATURAL_32 F218_2660 (EIF_REFERENCE Current)
{
	return *(EIF_NATURAL_32 *)(Current + O2394[Dtype(Current)-217]);
}


/* {IO_MEDIUM}.last_natural_32 */
EIF_NATURAL_32 F218_2661 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("last_natural_32", 217, Current, 0, 0, 2781);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_NATURAL_32 *)(Current + O2394[dtype-217]);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {IO_MEDIUM}.last_natural_16 */
EIF_NATURAL_16 F218_2662 (EIF_REFERENCE Current)
{
	return *(EIF_NATURAL_16 *)(Current + O2396[Dtype(Current)-217]);
}


/* {IO_MEDIUM}.last_natural_8 */
EIF_NATURAL_8 F218_2663 (EIF_REFERENCE Current)
{
	return *(EIF_NATURAL_8 *)(Current + O2397[Dtype(Current)-217]);
}


/* {IO_MEDIUM}.last_real */
EIF_REAL_32 F218_2664 (EIF_REFERENCE Current)
{
	return *(EIF_REAL_32 *)(Current + O2398[Dtype(Current)-217]);
}


/* {IO_MEDIUM}.last_real_32 */
EIF_REAL_32 F218_2665 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("last_real_32", 217, Current, 0, 0, 2786);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_REAL_32 *)(Current + O2398[dtype-217]);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {IO_MEDIUM}.last_double */
EIF_REAL_64 F218_2666 (EIF_REFERENCE Current)
{
	return *(EIF_REAL_64 *)(Current + O2400[Dtype(Current)-217]);
}


/* {IO_MEDIUM}.last_real_64 */
EIF_REAL_64 F218_2667 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("last_real_64", 217, Current, 0, 0, 2779);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_REAL_64 *)(Current + O2400[dtype-217]);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {IO_MEDIUM}.bytes_read */
EIF_INTEGER_32 F218_2668 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current + O2402[Dtype(Current)-217]);
}


/* {IO_MEDIUM}.dispose */
void F218_2680 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("dispose", 217, Current, 0, 0, 2787);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN) !(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2411[dtype-221])(Current))) {
		RTHOOK(2);
		(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2413[dtype-221])(Current));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {IO_MEDIUM}.read_stream_thread_aware */
void F218_2728 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_stream_thread_aware", 217, Current, 0, 1, 2769);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2409[dtype-221])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R2459[dtype-221])(Current, arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("last_string_not_void", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) != NULL)) {
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

/* {IO_MEDIUM}.read_line_thread_aware */
void F218_2731 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_line_thread_aware", 217, Current, 0, 0, 2772);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2409[dtype-221])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2462[dtype-221])(Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("last_string_not_void", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) != NULL)) {
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

/* {IO_MEDIUM}.lastchar */
EIF_CHARACTER_8 F218_2733 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("lastchar", 217, Current, 0, 0, 2774);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_CHARACTER_8 *)(Current + O2386[dtype-217]);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {IO_MEDIUM}.laststring */
EIF_REFERENCE F218_2734 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("laststring", 217, Current, 0, 0, 2775);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_REFERENCE *)(Current);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {IO_MEDIUM}.lastint */
EIF_INTEGER_32 F218_2735 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("lastint", 217, Current, 0, 0, 2776);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_INTEGER_32 *)(Current + O2388[dtype-217]);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {IO_MEDIUM}.lastreal */
EIF_REAL_32 F218_2736 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("lastreal", 217, Current, 0, 0, 2777);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_REAL_32 *)(Current + O2398[dtype-217]);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {IO_MEDIUM}.lastdouble */
EIF_REAL_64 F218_2737 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("lastdouble", 217, Current, 0, 0, 2778);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_REAL_64 *)(Current + O2400[dtype-217]);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

void EIF_Minit179 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
