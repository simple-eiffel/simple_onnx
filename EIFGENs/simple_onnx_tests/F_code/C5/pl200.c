/*
 * Code for class PLAIN_TEXT_FILE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "pl200.h"
#include "eif_file.h"
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

/* {PLAIN_TEXT_FILE}.make_with_name */
void F646_3764 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("make_with_name", 645, Current, 0, 1, 5287);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("fn_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("fn_not_empty", EX_PRE);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4558[Dtype(RTCW(arg1))-968])(arg1));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	(nstcall = 0, F644_3483(Current, arg1));
	RTHOOK(4);
	tr1 = RTLNSMART(eif_new_type(972, 1).id);
	(nstcall = -1, F965_5930(RTCW(tr1)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("file_named", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("file_closed", EX_POST);
		if ((nstcall = 0, F644_3542(Current))) {
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

/* {PLAIN_TEXT_FILE}.make_with_path */
void F646_3765 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("make_with_path", 645, Current, 0, 1, 5288);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_path_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_path_not_empty", EX_PRE);
		tb1 = (nstcall = 1, F855_4615(RTCW(arg1)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	(nstcall = 0, F644_3484(Current, arg1));
	RTHOOK(4);
	tr1 = RTLNSMART(eif_new_type(972, 1).id);
	(nstcall = -1, F965_5930(RTCW(tr1)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("path_set", EX_POST);
		tr1 = (nstcall = 0, F644_3493(Current));
		tb1 = (nstcall = 1, F855_4638(RTCW(tr1), arg1));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("file_closed", EX_POST);
		if ((nstcall = 0, F644_3542(Current))) {
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

/* {PLAIN_TEXT_FILE}.is_plain_text */
EIF_BOOLEAN F646_3766 (EIF_REFERENCE Current)
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
	
	RTEAA("is_plain_text", 645, Current, 0, 0, 5289);
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

/* {PLAIN_TEXT_FILE}.support_storable */
EIF_BOOLEAN F646_3767 (EIF_REFERENCE Current)
{
	return (EIF_BOOLEAN) EIF_FALSE;
}

/* {PLAIN_TEXT_FILE}.put_integer */
void F646_3768 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("put_integer", 645, Current, 0, 1, 5291);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F644_3547(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = eif_out__i4_s1(arg1);
	(nstcall = 0, F646_3788(Current, tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.putint */
void F646_3769 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("putint", 645, Current, 0, 1, 5292);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F644_3547(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = eif_out__i4_s1(arg1);
	(nstcall = 0, F646_3788(Current, tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.put_integer_32 */
void F646_3770 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("put_integer_32", 645, Current, 0, 1, 5293);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F644_3547(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = eif_out__i4_s1(arg1);
	(nstcall = 0, F646_3788(Current, tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.put_integer_64 */
void F646_3771 (EIF_REFERENCE Current, EIF_INTEGER_64 arg1)
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
	
	RTEAA("put_integer_64", 645, Current, 0, 1, 5294);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F644_3547(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = eif_out__i8_s1(arg1);
	(nstcall = 0, F646_3788(Current, tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.put_integer_16 */
void F646_3772 (EIF_REFERENCE Current, EIF_INTEGER_16 arg1)
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
	
	RTEAA("put_integer_16", 645, Current, 0, 1, 5295);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F644_3547(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = eif_out__i2_s1(arg1);
	(nstcall = 0, F646_3788(Current, tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.put_integer_8 */
void F646_3773 (EIF_REFERENCE Current, EIF_INTEGER_8 arg1)
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
	
	RTEAA("put_integer_8", 645, Current, 0, 1, 5296);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F644_3547(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = eif_out__i1_s1(arg1);
	(nstcall = 0, F646_3788(Current, tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.put_natural_64 */
void F646_3774 (EIF_REFERENCE Current, EIF_NATURAL_64 arg1)
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
	
	RTEAA("put_natural_64", 645, Current, 0, 1, 5297);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F644_3547(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = eif_out__u8_s1(arg1);
	(nstcall = 0, F646_3788(Current, tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.put_natural */
void F646_3775 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
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
	
	RTEAA("put_natural", 645, Current, 0, 1, 5298);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F644_3547(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = eif_out__u4_s1(arg1);
	(nstcall = 0, F646_3788(Current, tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.put_natural_32 */
void F646_3776 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
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
	
	RTEAA("put_natural_32", 645, Current, 0, 1, 5299);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F644_3547(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = eif_out__u4_s1(arg1);
	(nstcall = 0, F646_3788(Current, tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.put_natural_16 */
void F646_3777 (EIF_REFERENCE Current, EIF_NATURAL_16 arg1)
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
	
	RTEAA("put_natural_16", 645, Current, 0, 1, 5300);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F644_3547(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = eif_out__u2_s1(arg1);
	(nstcall = 0, F646_3788(Current, tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.put_natural_8 */
void F646_3778 (EIF_REFERENCE Current, EIF_NATURAL_8 arg1)
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
	
	RTEAA("put_natural_8", 645, Current, 0, 1, 5301);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F644_3547(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = eif_out__u1_s1(arg1);
	(nstcall = 0, F646_3788(Current, tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.put_boolean */
void F646_3779 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
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
	
	RTEAA("put_boolean", 645, Current, 0, 1, 5302);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F644_3547(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if (arg1) {
		RTHOOK(3);
		tr1 = RTOUCR(61,(nstcall = 0, F644_3650), (Current));
	} else {
		RTHOOK(4);
		tr1 = RTOUCR(62,(nstcall = 0, F644_3651), (Current));
	}
	(nstcall = 0, F646_3788(Current, tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.putbool */
void F646_3780 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
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
	
	RTEAA("putbool", 645, Current, 0, 1, 5303);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F644_3547(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if (arg1) {
		RTHOOK(3);
		tr1 = RTOUCR(61,(nstcall = 0, F644_3650), (Current));
	} else {
		RTHOOK(4);
		tr1 = RTOUCR(62,(nstcall = 0, F644_3651), (Current));
	}
	(nstcall = 0, F646_3788(Current, tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.put_real */
void F646_3781 (EIF_REFERENCE Current, EIF_REAL_32 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_real", 645, Current, 0, 1, 5304);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F644_3547(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(Current + O3016[dtype-643]);
	(nstcall = 0, F646_3826(Current, tp1, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.putreal */
void F646_3782 (EIF_REFERENCE Current, EIF_REAL_32 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("putreal", 645, Current, 0, 1, 5305);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F644_3547(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(Current + O3016[dtype-643]);
	(nstcall = 0, F646_3826(Current, tp1, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.put_real_32 */
void F646_3783 (EIF_REFERENCE Current, EIF_REAL_32 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_real_32", 645, Current, 0, 1, 5306);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F644_3547(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(Current + O3016[dtype-643]);
	(nstcall = 0, F646_3826(Current, tp1, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.put_double */
void F646_3784 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_double", 645, Current, 0, 1, 5307);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F644_3547(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(Current + O3016[dtype-643]);
	(nstcall = 0, F646_3827(Current, tp1, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.putdouble */
void F646_3785 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("putdouble", 645, Current, 0, 1, 5308);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F644_3547(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(Current + O3016[dtype-643]);
	(nstcall = 0, F646_3827(Current, tp1, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.put_real_64 */
void F646_3786 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_real_64", 645, Current, 0, 1, 5309);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F644_3547(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(Current + O3016[dtype-643]);
	(nstcall = 0, F646_3827(Current, tp1, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.put_string_32 */
void F646_3787 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("put_string_32", 645, Current, 0, 1, 5310);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	(nstcall = 0, F646_3788(Current, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.put_string_general */
void F646_3788 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,loc4);
	RTLR(3,loc2);
	RTLR(4,tr1);
	RTLR(5,loc1);
	RTLR(6,loc3);
	RTLR(7,tr2);
	RTLIU(8);
	
	RTEAA("put_string_general", 645, Current, 4, 1, 5311);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F644_3547(Current)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("non_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc4 = (nstcall = 0, F646_3809(Current));
	RTHOOK(4);
	tr1 = RTLNS(eif_new_type(18, 0x01).id, 18, _OBJSIZ_0_0_0_0_0_0_0_0_);
	loc2 = RTOUCR(63,(nstcall = 0, F19_266), (RTCW(tr1)));
	RTHOOK(5);
	(nstcall = 1, F21_283(RTCW(loc2), loc4, arg1));
	RTHOOK(6);
	tb1 = (nstcall = 1, F21_284(RTCW(loc2)));
	if (tb1) {
		RTHOOK(7);
		tr1 = (nstcall = 1, F21_280(RTCW(loc2)));
		loc1 = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(8);
		tr1 = RTLNS(eif_new_type(18, 0x01).id, 18, _OBJSIZ_0_0_0_0_0_0_0_0_);
		loc3 = RTOUCR(64,(nstcall = 0, F19_264), (RTCW(tr1)));
		RTHOOK(9);
		(nstcall = 1, F21_283(RTCW(loc2), loc3, arg1));
		RTHOOK(10);
		tb1 = (nstcall = 1, F21_284(RTCW(loc2)));
		if (tb1) {
			RTHOOK(11);
			tr1 = (nstcall = 1, F21_280(RTCW(loc2)));
			loc1 = (EIF_REFERENCE) tr1;
			RTHOOK(12);
			tb1 = (nstcall = 1, F21_286(RTCW(loc3), loc4));
			if ((EIF_BOOLEAN) !tb1) {
				RTHOOK(13);
				(nstcall = 1, F21_283(RTCW(loc3), loc4, loc1));
				RTHOOK(14);
				tb1 = (nstcall = 1, F21_284(RTCW(loc3)));
				if (tb1) {
					RTHOOK(15);
					tr1 = (nstcall = 1, F21_280(RTCW(loc3)));
					loc1 = (EIF_REFERENCE) tr1;
				}
			}
		} else {
			RTHOOK(16);
			tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4557[Dtype(RTCW(arg1))-968])(arg1));
			if (tb1) {
				RTHOOK(17);
				tr1 = (nstcall = 1, F965_5983(RTCW(arg1)));
				loc1 = (EIF_REFERENCE) tr1;
			} else {
				RTHOOK(18);
				tr2 = (nstcall = 1, F965_5989(RTCW(arg1)));
				tr1 = RTLNS(eif_new_type(46, 0x00).id, 46, _OBJSIZ_0_0_0_0_0_0_0_0_);
				loc1 = (nstcall = 0, F47_648(RTCW(tr1), tr2));
			}
		}
	}
	RTHOOK(19);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2416[dtype-221])(Current, loc1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(20);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.read_integer_64 */
void F646_3789 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_64 ti8_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("read_integer_64", 645, Current, 0, 0, 5312);
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
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R3191[dtype-645])(Current));
	RTHOOK(3);
	tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3187[dtype-645])(Current));
	ti8_1 = (nstcall = 1, F111_1441(RTCW(tr1)));
	*(EIF_INTEGER_64 *)(Current + O2390[dtype-217]) = (EIF_INTEGER_64) ti8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.read_integer */
void F646_3790 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("read_integer", 645, Current, 0, 0, 5313);
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
		RTCK;
		RTHOOK(2);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, F644_3541(Current)), label_2);
		RTCK;
		RTJB;
label_2:
		RTCF;
	}
body:;
	RTHOOK(3);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R3191[dtype-645])(Current));
	RTHOOK(4);
	tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3187[dtype-645])(Current));
	ti4_1 = (nstcall = 1, F111_1439(RTCW(tr1)));
	*(EIF_INTEGER_32 *)(Current + O2388[dtype-217]) = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.readint */
void F646_3791 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("readint", 645, Current, 0, 0, 5314);
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
		RTCK;
		RTHOOK(2);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, F644_3541(Current)), label_2);
		RTCK;
		RTJB;
label_2:
		RTCF;
	}
body:;
	RTHOOK(3);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R3191[dtype-645])(Current));
	RTHOOK(4);
	tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3187[dtype-645])(Current));
	ti4_1 = (nstcall = 1, F111_1439(RTCW(tr1)));
	*(EIF_INTEGER_32 *)(Current + O2388[dtype-217]) = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.read_integer_32 */
void F646_3792 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("read_integer_32", 645, Current, 0, 0, 5315);
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
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R3191[dtype-645])(Current));
	RTHOOK(3);
	tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3187[dtype-645])(Current));
	ti4_1 = (nstcall = 1, F111_1439(RTCW(tr1)));
	*(EIF_INTEGER_32 *)(Current + O2388[dtype-217]) = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.read_integer_16 */
void F646_3793 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_16 ti2_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("read_integer_16", 645, Current, 0, 0, 5316);
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
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R3191[dtype-645])(Current));
	RTHOOK(3);
	tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3187[dtype-645])(Current));
	ti2_1 = (nstcall = 1, F111_1438(RTCW(tr1)));
	*(EIF_INTEGER_16 *)(Current + O2391[dtype-217]) = (EIF_INTEGER_16) ti2_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.read_integer_8 */
void F646_3794 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_8 ti1_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("read_integer_8", 645, Current, 0, 0, 5317);
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
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R3191[dtype-645])(Current));
	RTHOOK(3);
	tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3187[dtype-645])(Current));
	ti1_1 = (nstcall = 1, F111_1437(RTCW(tr1)));
	*(EIF_INTEGER_8 *)(Current + O2392[dtype-217]) = (EIF_INTEGER_8) ti1_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.read_natural_64 */
void F646_3795 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_64 tu8_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("read_natural_64", 645, Current, 0, 0, 5318);
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
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R3191[dtype-645])(Current));
	RTHOOK(3);
	tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3187[dtype-645])(Current));
	tu8_1 = (nstcall = 1, F111_1446(RTCW(tr1)));
	*(EIF_NATURAL_64 *)(Current + O2393[dtype-217]) = (EIF_NATURAL_64) tu8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.read_natural */
void F646_3796 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("read_natural", 645, Current, 0, 0, 5319);
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
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R3191[dtype-645])(Current));
	RTHOOK(3);
	tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3187[dtype-645])(Current));
	tu4_1 = (nstcall = 1, F111_1444(RTCW(tr1)));
	*(EIF_NATURAL_32 *)(Current + O2394[dtype-217]) = (EIF_NATURAL_32) tu4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.read_natural_32 */
void F646_3797 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("read_natural_32", 645, Current, 0, 0, 5320);
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
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R3191[dtype-645])(Current));
	RTHOOK(3);
	tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3187[dtype-645])(Current));
	tu4_1 = (nstcall = 1, F111_1444(RTCW(tr1)));
	*(EIF_NATURAL_32 *)(Current + O2394[dtype-217]) = (EIF_NATURAL_32) tu4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.read_natural_16 */
void F646_3798 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_16 tu2_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("read_natural_16", 645, Current, 0, 0, 5321);
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
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R3191[dtype-645])(Current));
	RTHOOK(3);
	tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3187[dtype-645])(Current));
	tu2_1 = (nstcall = 1, F111_1443(RTCW(tr1)));
	*(EIF_NATURAL_16 *)(Current + O2396[dtype-217]) = (EIF_NATURAL_16) tu2_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.read_natural_8 */
void F646_3799 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_8 tu1_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("read_natural_8", 645, Current, 0, 0, 5322);
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
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R3191[dtype-645])(Current));
	RTHOOK(3);
	tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3187[dtype-645])(Current));
	tu1_1 = (nstcall = 1, F111_1442(RTCW(tr1)));
	*(EIF_NATURAL_8 *)(Current + O2397[dtype-217]) = (EIF_NATURAL_8) tu1_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.read_real */
void F646_3800 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_REAL_32 tr4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_real", 645, Current, 0, 0, 5323);
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
		RTCK;
		RTHOOK(2);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, F644_3541(Current)), label_2);
		RTCK;
		RTJB;
label_2:
		RTCF;
	}
body:;
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(Current + O3016[dtype-643]);
	tr4_1 = (nstcall = 0, F646_3823(Current, tp1));
	*(EIF_REAL_32 *)(Current + O2398[dtype-217]) = (EIF_REAL_32) tr4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.readreal */
void F646_3801 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_REAL_32 tr4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("readreal", 645, Current, 0, 0, 5324);
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
		RTCK;
		RTHOOK(2);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, F644_3541(Current)), label_2);
		RTCK;
		RTJB;
label_2:
		RTCF;
	}
body:;
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(Current + O3016[dtype-643]);
	tr4_1 = (nstcall = 0, F646_3823(Current, tp1));
	*(EIF_REAL_32 *)(Current + O2398[dtype-217]) = (EIF_REAL_32) tr4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.read_real_32 */
void F646_3802 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_REAL_32 tr4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_real_32", 645, Current, 0, 0, 5325);
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
		RTCK;
		RTHOOK(2);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, F644_3541(Current)), label_2);
		RTCK;
		RTJB;
label_2:
		RTCF;
	}
body:;
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(Current + O3016[dtype-643]);
	tr4_1 = (nstcall = 0, F646_3823(Current, tp1));
	*(EIF_REAL_32 *)(Current + O2398[dtype-217]) = (EIF_REAL_32) tr4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.read_double */
void F646_3803 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_REAL_64 tr8_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_double", 645, Current, 0, 0, 5326);
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
		RTCK;
		RTHOOK(2);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, F644_3541(Current)), label_2);
		RTCK;
		RTJB;
label_2:
		RTCF;
	}
body:;
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(Current + O3016[dtype-643]);
	tr8_1 = (nstcall = 0, F646_3824(Current, tp1));
	*(EIF_REAL_64 *)(Current + O2400[dtype-217]) = (EIF_REAL_64) tr8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.readdouble */
void F646_3804 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_REAL_64 tr8_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("readdouble", 645, Current, 0, 0, 5327);
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
		RTCK;
		RTHOOK(2);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, F644_3541(Current)), label_2);
		RTCK;
		RTJB;
label_2:
		RTCF;
	}
body:;
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(Current + O3016[dtype-643]);
	tr8_1 = (nstcall = 0, F646_3824(Current, tp1));
	*(EIF_REAL_64 *)(Current + O2400[dtype-217]) = (EIF_REAL_64) tr8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.read_real_64 */
void F646_3805 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_REAL_64 tr8_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_real_64", 645, Current, 0, 0, 5328);
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
		RTCK;
		RTHOOK(2);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, F644_3541(Current)), label_2);
		RTCK;
		RTJB;
label_2:
		RTCF;
	}
body:;
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(Current + O3016[dtype-643]);
	tr8_1 = (nstcall = 0, F646_3824(Current, tp1));
	*(EIF_REAL_64 *)(Current + O2400[dtype-217]) = (EIF_REAL_64) tr8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.read_to_string */
EIF_INTEGER_32 F646_3806 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("read_to_string", 645, Current, 0, 3, 5329);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, F644_3541(Current)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("not_end_of_file", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3028[dtype-644])(Current)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("valid_position", EX_PRE);
		tb1 = (nstcall = 1, F965_5942(RTCW(arg1), arg2));
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(5);
		RTCT("nb_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(6);
		RTCT("nb_small_enough", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
		RTTE((EIF_BOOLEAN) (arg3 <= (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - arg2) + ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(7);
	tp1 = *(EIF_POINTER *)(Current + O3016[dtype-643]);
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
	tp2 = (nstcall = 1, F764_4164(RTCW(tr1), (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L))));
	Result = (nstcall = 0, F644_3663(Current, tp1, tp2, arg3));
	RTHOOK(8);
	(nstcall = 1, F967_6028(RTCW(arg1)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("nb_char_read_large_enough", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("nb_char_read_small_enough", EX_POST);
		if ((EIF_BOOLEAN) (Result <= arg3)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("character_read", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN) !(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3028[dtype-644])(Current))) {
			tb1 = (EIF_BOOLEAN) (Result > ((EIF_INTEGER_32) 0L));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTLE;
	RTEE;
	return Result;
}

/* {PLAIN_TEXT_FILE}.last_string_32 */
EIF_REFERENCE F646_3807 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_3_);
}


/* {PLAIN_TEXT_FILE}.read_unicode_line */
void F646_3808 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLIU(5);
	
	RTEAA("read_unicode_line", 645, Current, 1, 0, 5331);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2462[dtype-221])(Current));
	RTHOOK(2);
	tr1 = RTLNS(eif_new_type(18, 0x01).id, 18, _OBJSIZ_0_0_0_0_0_0_0_0_);
	loc1 = RTOUCR(63,(nstcall = 0, F19_266), (RTCW(tr1)));
	RTHOOK(3);
	tr1 = (nstcall = 0, F646_3809(Current));
	(nstcall = 1, F21_283(RTCW(tr1), loc1, *(EIF_REFERENCE *)(Current)));
	RTHOOK(4);
	tr1 = (nstcall = 0, F646_3809(Current));
	tb1 = (nstcall = 1, F21_284(RTCW(tr1)));
	if (tb1) {
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		(nstcall = 1, F973_6370(RTCW(tr1)));
		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		tr2 = (nstcall = 0, F646_3809(Current));
		tr3 = (nstcall = 1, F21_281(RTCW(tr2)));
		(nstcall = 1, F973_6341(RTCW(tr1), tr3));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.encoding */
EIF_REFERENCE F646_3809 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("encoding", 645, Current, 1, 0, 5332);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTHOOK(2);
		Result = (EIF_REFERENCE) loc1;
	} else {
		RTHOOK(3);
		Result = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3181[dtype-645])(Current));
		RTHOOK(4);
		RTAR(Current, Result);
		*(EIF_REFERENCE *)(Current + _REFACS_4_) = (EIF_REFERENCE) Result;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("encoding_not_void", EX_POST);
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

/* {PLAIN_TEXT_FILE}.default_encoding */
static EIF_REFERENCE F646_3810_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(65)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("default_encoding", 645, Current, 0, 0, 5333);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(18, 0x01).id, 18, _OBJSIZ_0_0_0_0_0_0_0_0_);
	Result = RTOUCR(64,(nstcall = 0, F19_264), (RTCW(tr1)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("default_encoding_not_void", EX_POST);
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

EIF_REFERENCE F646_3810 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(65,F646_3810_body,(Current));
}

/* {PLAIN_TEXT_FILE}.set_encoding */
void F646_3811 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("set_encoding", 645, Current, 0, 1, 5334);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("enc_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_4_) = (EIF_REFERENCE) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("encoding_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F646_3809(Current)) == arg1)) {
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

/* {PLAIN_TEXT_FILE}.set_utf8_encoding */
void F646_3812 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,tr2);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("set_utf8_encoding", 645, Current, 0, 0, 5335);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(18, 0x01).id, 18, _OBJSIZ_0_0_0_0_0_0_0_0_);
	tr2 = RTOUCR(64,(nstcall = 0, F19_264), (RTCW(tr1)));
	(nstcall = 0, F646_3811(Current, tr2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("encoding_set", EX_POST);
		tr1 = (nstcall = 0, F646_3809(Current));
		tr2 = RTLNS(eif_new_type(18, 0x01).id, 18, _OBJSIZ_0_0_0_0_0_0_0_0_);
		tr2 = RTOUCR(64,(nstcall = 0, F19_264), (RTCW(tr2)));
		if ((EIF_BOOLEAN)(tr1 == tr2)) {
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

/* {PLAIN_TEXT_FILE}.detect_encoding */
void F646_3813 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc2 = (EIF_CHARACTER_8) 0;
	EIF_CHARACTER_8 loc3 = (EIF_CHARACTER_8) 0;
	EIF_CHARACTER_8 loc4 = (EIF_CHARACTER_8) 0;
	EIF_CHARACTER_8 loc5 = (EIF_CHARACTER_8) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("detect_encoding", 645, Current, 5, 0, 5336);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_open_read", EX_PRE);
		RTTE((nstcall = 0, F644_3543(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = (nstcall = 0, F644_3496(Current));
	RTHOOK(3);
	(nstcall = 0, F644_3571(Current));
	RTHOOK(4);
	if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2409[dtype-221])(Current))) {
		RTHOOK(5);
		(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2446[dtype-221])(Current));
		RTHOOK(6);
		loc2 = *(EIF_CHARACTER_8 *)(Current + O2386[dtype-217]);
		RTHOOK(7);
		switch (loc2) {
			case (EIF_CHARACTER_8) '\357':
				RTHOOK(8);
				if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2409[dtype-221])(Current))) {
					RTHOOK(9);
					(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2446[dtype-221])(Current));
					RTHOOK(10);
					loc3 = *(EIF_CHARACTER_8 *)(Current + O2386[dtype-217]);
					RTHOOK(11);
					if ((EIF_BOOLEAN)(loc3 == (EIF_CHARACTER_8) '\273')) {
						RTHOOK(12);
						if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2409[dtype-221])(Current))) {
							RTHOOK(13);
							(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2446[dtype-221])(Current));
							RTHOOK(14);
							loc4 = *(EIF_CHARACTER_8 *)(Current + O2386[dtype-217]);
							RTHOOK(15);
							if ((EIF_BOOLEAN)(loc4 == (EIF_CHARACTER_8) '\277')) {
								RTHOOK(16);
								(nstcall = 0, F646_3812(Current));
							} else {
								RTHOOK(17);
								(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2950[dtype-644])(Current));
							}
						}
					} else {
						RTHOOK(18);
						(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2950[dtype-644])(Current));
					}
				}
				break;
			case (EIF_CHARACTER_8) '\377':
				RTHOOK(19);
				if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2409[dtype-221])(Current))) {
					RTHOOK(20);
					(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2446[dtype-221])(Current));
					RTHOOK(21);
					loc3 = *(EIF_CHARACTER_8 *)(Current + O2386[dtype-217]);
					RTHOOK(22);
					if ((EIF_BOOLEAN)(loc3 == (EIF_CHARACTER_8) '\376')) {
						RTHOOK(23);
						if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2409[dtype-221])(Current))) {
							RTHOOK(24);
							(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2446[dtype-221])(Current));
							RTHOOK(25);
							loc4 = *(EIF_CHARACTER_8 *)(Current + O2386[dtype-217]);
							RTHOOK(26);
							if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2409[dtype-221])(Current))) {
								RTHOOK(27);
								(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2446[dtype-221])(Current));
								RTHOOK(28);
								loc5 = *(EIF_CHARACTER_8 *)(Current + O2386[dtype-217]);
							}
							RTHOOK(29);
							if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc4 == (EIF_CHARACTER_8) '\000') && (EIF_BOOLEAN)(loc5 == (EIF_CHARACTER_8) '\000'))) {
								RTHOOK(30);
								tr1 = RTLNS(eif_new_type(20, 0x01).id, 20, _OBJSIZ_2_0_0_0_0_0_0_0_);
								tr2 = RTOUCR(66,(nstcall = 0, F20_274), (Current));
								(nstcall = -1, F21_277(RTCW(tr1), tr2));
								(nstcall = 0, F646_3811(Current, tr1));
							} else {
								RTHOOK(31);
								tr1 = RTLNS(eif_new_type(20, 0x01).id, 20, _OBJSIZ_2_0_0_0_0_0_0_0_);
								tr2 = RTOUCR(67,(nstcall = 0, F20_273), (Current));
								(nstcall = -1, F21_277(RTCW(tr1), tr2));
								(nstcall = 0, F646_3811(Current, tr1));
								RTHOOK(32);
								(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2950[dtype-644])(Current));
								RTHOOK(33);
								(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2950[dtype-644])(Current));
							}
						}
					} else {
						RTHOOK(34);
						(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2950[dtype-644])(Current));
					}
				}
				break;
			case (EIF_CHARACTER_8) '\376':
				RTHOOK(35);
				if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2409[dtype-221])(Current))) {
					RTHOOK(36);
					(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2446[dtype-221])(Current));
					RTHOOK(37);
					loc3 = *(EIF_CHARACTER_8 *)(Current + O2386[dtype-217]);
					RTHOOK(38);
					if ((EIF_BOOLEAN)(loc3 == (EIF_CHARACTER_8) '\377')) {
						RTHOOK(39);
						tr1 = RTLNS(eif_new_type(20, 0x01).id, 20, _OBJSIZ_2_0_0_0_0_0_0_0_);
						tr2 = RTOUCR(68,(nstcall = 0, F20_275), (Current));
						(nstcall = -1, F21_277(RTCW(tr1), tr2));
						(nstcall = 0, F646_3811(Current, tr1));
					} else {
						RTHOOK(40);
						(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2950[dtype-644])(Current));
					}
				}
				break;
			case (EIF_CHARACTER_8) '\000':
				RTHOOK(41);
				if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2409[dtype-221])(Current))) {
					RTHOOK(42);
					(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2446[dtype-221])(Current));
					RTHOOK(43);
					loc3 = *(EIF_CHARACTER_8 *)(Current + O2386[dtype-217]);
					RTHOOK(44);
					if ((EIF_BOOLEAN)(loc3 == (EIF_CHARACTER_8) '\000')) {
						RTHOOK(45);
						if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2409[dtype-221])(Current))) {
							RTHOOK(46);
							(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2446[dtype-221])(Current));
							RTHOOK(47);
							loc4 = *(EIF_CHARACTER_8 *)(Current + O2386[dtype-217]);
							RTHOOK(48);
							if ((EIF_BOOLEAN)(loc4 == (EIF_CHARACTER_8) '\376')) {
								RTHOOK(49);
								if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2409[dtype-221])(Current))) {
									RTHOOK(50);
									(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2446[dtype-221])(Current));
									RTHOOK(51);
									loc5 = *(EIF_CHARACTER_8 *)(Current + O2386[dtype-217]);
									RTHOOK(52);
									if ((EIF_BOOLEAN)(loc5 == (EIF_CHARACTER_8) '\377')) {
										RTHOOK(53);
										tr1 = RTLNS(eif_new_type(20, 0x01).id, 20, _OBJSIZ_2_0_0_0_0_0_0_0_);
										tr2 = RTOUCR(69,(nstcall = 0, F20_276), (Current));
										(nstcall = -1, F21_277(RTCW(tr1), tr2));
										(nstcall = 0, F646_3811(Current, tr1));
									} else {
										RTHOOK(54);
										(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2950[dtype-644])(Current));
									}
								}
							} else {
								RTHOOK(55);
								(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2950[dtype-644])(Current));
							}
						}
					} else {
						RTHOOK(56);
						(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2950[dtype-644])(Current));
					}
				}
				break;
			default:
				RTHOOK(57);
				(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2950[dtype-644])(Current));
				break;
		}
	}
	RTHOOK(58);
	if ((EIF_BOOLEAN)(loc1 != ((EIF_INTEGER_32) 0L))) {
		RTHOOK(59);
		(nstcall = 0, F644_3576(Current, loc1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(60);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.put_encoding_bom */
void F646_3814 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("put_encoding_bom", 645, Current, 1, 0, 5337);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_open_write", EX_PRE);
		RTTE((nstcall = 0, F644_3544(Current)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("at_beginning", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F644_3496(Current)) == ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(RTCV((nstcall = 0, F646_3809(Current))));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	tr1 = RTOUCR(70,(nstcall = 0, F20_270), (Current));
	tb1 = (nstcall = 1, F965_5972(RTCW(loc1), tr1));
	if (tb1) {
		RTHOOK(5);
		(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R2418[dtype-221])(Current, (EIF_CHARACTER_8) '\357'));
		RTHOOK(6);
		(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R2418[dtype-221])(Current, (EIF_CHARACTER_8) '\273'));
		RTHOOK(7);
		(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R2418[dtype-221])(Current, (EIF_CHARACTER_8) '\277'));
	} else {
		RTHOOK(8);
		tr1 = RTOUCR(67,(nstcall = 0, F20_273), (Current));
		tb1 = (nstcall = 1, F965_5972(RTCW(loc1), tr1));
		if (tb1) {
			RTHOOK(9);
			(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R2418[dtype-221])(Current, (EIF_CHARACTER_8) '\377'));
			RTHOOK(10);
			(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R2418[dtype-221])(Current, (EIF_CHARACTER_8) '\376'));
		} else {
			RTHOOK(11);
			tr1 = RTOUCR(68,(nstcall = 0, F20_275), (Current));
			tb1 = (nstcall = 1, F965_5972(RTCW(loc1), tr1));
			if (tb1) {
				RTHOOK(12);
				(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R2418[dtype-221])(Current, (EIF_CHARACTER_8) '\376'));
				RTHOOK(13);
				(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R2418[dtype-221])(Current, (EIF_CHARACTER_8) '\377'));
			} else {
				RTHOOK(14);
				tr1 = RTOUCR(66,(nstcall = 0, F20_274), (Current));
				tb1 = (nstcall = 1, F965_5972(RTCW(loc1), tr1));
				if (tb1) {
					RTHOOK(15);
					(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R2418[dtype-221])(Current, (EIF_CHARACTER_8) '\377'));
					RTHOOK(16);
					(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R2418[dtype-221])(Current, (EIF_CHARACTER_8) '\376'));
					RTHOOK(17);
					(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R2418[dtype-221])(Current, (EIF_CHARACTER_8) '\000'));
					RTHOOK(18);
					(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R2418[dtype-221])(Current, (EIF_CHARACTER_8) '\000'));
				} else {
					RTHOOK(19);
					tr1 = RTOUCR(69,(nstcall = 0, F20_276), (Current));
					tb1 = (nstcall = 1, F965_5972(RTCW(loc1), tr1));
					if (tb1) {
						RTHOOK(20);
						(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R2418[dtype-221])(Current, (EIF_CHARACTER_8) '\000'));
						RTHOOK(21);
						(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R2418[dtype-221])(Current, (EIF_CHARACTER_8) '\000'));
						RTHOOK(22);
						(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R2418[dtype-221])(Current, (EIF_CHARACTER_8) '\376'));
						RTHOOK(23);
						(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R2418[dtype-221])(Current, (EIF_CHARACTER_8) '\377'));
					}
				}
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(24);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.internal_encoding */
EIF_REFERENCE F646_3815 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_4_);
}


/* {PLAIN_TEXT_FILE}.ctoi_convertor */
static EIF_REFERENCE F646_3816_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(71)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("ctoi_convertor", 645, Current, 0, 0, 5339);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(110, 0x01).id, 110, _OBJSIZ_2_3_0_3_0_0_2_0_);
	(nstcall = -1, F111_1426(RTCW(tr1)));
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = RTOUCR(72,(nstcall = 0, F646_3817), (Current));
	(nstcall = 1, F108_1371(RTCW(Result), tr1));
	RTHOOK(3);
	(nstcall = 1, F108_1370(RTCW(Result), (EIF_BOOLEAN) 1));
	RTHOOK(4);
	(nstcall = 1, F108_1369(RTCW(Result), (EIF_BOOLEAN) 0));
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F646_3816 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(71,F646_3816_body,(Current));
}

/* {PLAIN_TEXT_FILE}.internal_leading_separators */

EIF_REFERENCE F646_3817 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (72,RTMS_EX_H(" \012\015\011",4,537529609));
}

/* {PLAIN_TEXT_FILE}.is_sequence_an_expected_numeric */
EIF_BOOLEAN F646_3818 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current + O3189[Dtype(Current)-645]);
}


/* {PLAIN_TEXT_FILE}.read_number_sequence */
void F646_3819 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("read_number_sequence", 645, Current, 0, 2, 5342);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R1305[Dtype(RTCW(arg1))-108])(arg1, arg2));
	RTHOOK(2);
	*(EIF_BOOLEAN *)(Current + O3189[dtype-645]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	for (;;) {
		RTHOOK(3);
		tb1 = '\01';
		if (!(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3028[dtype-644])(Current))) {
			tb1 = (EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current + O3189[dtype-645]);
		}
		if (tb1) break;
		RTHOOK(4);
		(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2446[dtype-221])(Current));
		RTHOOK(5);
		if ((EIF_BOOLEAN) !(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3028[dtype-644])(Current))) {
			RTHOOK(6);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R1311[Dtype(RTCW(arg1))-108])(arg1, *(EIF_CHARACTER_8 *)(Current + O2386[dtype-217])));
			RTHOOK(7);
			tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R1303[Dtype(RTCW(arg1))-108])(arg1));
			*(EIF_BOOLEAN *)(Current + O3189[dtype-645]) = (EIF_BOOLEAN) tb2;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.read_integer_with_no_type */
void F646_3820 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("read_integer_with_no_type", 645, Current, 0, 0, 5343);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3187[dtype-645])(Current));
	(nstcall = 0, F646_3819(Current, tr1, ((EIF_INTEGER_32) 0L)));
	RTHOOK(2);
	if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current + O3189[dtype-645])) {
		RTHOOK(3);
		(nstcall = 0, F646_3821(Current));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.return_characters */
void F646_3821 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("return_characters", 645, Current, 0, 0, 5344);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = '\0';
	if ((EIF_BOOLEAN)(*(EIF_CHARACTER_8 *)(Current + O2386[dtype-217]) == (EIF_CHARACTER_8) '\012')) {
		tb1 = (nstcall = 0, F180_2017(Current));
	}
	if (tb1) {
		RTHOOK(2);
		(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2950[dtype-644])(Current));
	}
	RTHOOK(3);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2950[dtype-644])(Current));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.file_gi */
EIF_INTEGER_32 F646_3822 (EIF_REFERENCE Current, EIF_POINTER arg1)
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
	
	RTEAA("file_gi", 645, Current, 0, 1, 5345);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) eif_file_gi((FILE*) arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {PLAIN_TEXT_FILE}.file_gr */
EIF_REAL_32 F646_3823 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	RTEX;
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("file_gr", 645, Current, 0, 1, 5346);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_REAL_32) eif_file_gr((FILE*) arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {PLAIN_TEXT_FILE}.file_gd */
EIF_REAL_64 F646_3824 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	RTEX;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("file_gd", 645, Current, 0, 1, 5347);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_REAL_64) eif_file_gd((FILE*) arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {PLAIN_TEXT_FILE}.file_pi */
void F646_3825 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("file_pi", 645, Current, 0, 2, 5348);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);eif_file_pi((FILE*) arg1, (EIF_INTEGER) arg2);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.file_pr */
void F646_3826 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_REAL_32 arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("file_pr", 645, Current, 0, 2, 5349);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);eif_file_pr((FILE*) arg1, (EIF_REAL_32) arg2);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.file_pd */
void F646_3827 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_REAL_64 arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("file_pd", 645, Current, 0, 2, 5350);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);eif_file_pd((FILE*) arg1, (EIF_REAL_64) arg2);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}._invariant */
void F646_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTEAINV(l_feature_name, 199, Current, 0, 0);
	RTIT("plain_text", Current);
	if ((nstcall = 0, F646_3766(Current))) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit200 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
