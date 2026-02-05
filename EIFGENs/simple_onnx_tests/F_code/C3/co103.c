/*
 * Code for class COM_FAILURE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "co103.h"
#include "eif_com_exception.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F124_1517
static EIF_INTEGER_32 inline_F124_1517 (EIF_POINTER arg1)
{
	#ifdef EIF_WINDOWS
			char *stopstring = NULL;
			long result = 0, high_bits = 0, low_bits = 0;
			char high_str [7];
			char *exception_code = (char *)(arg1);
			  
			if (NULL != exception_code)
			{
				strncpy (high_str, exception_code, 6);
				high_str [6] = '\0';

				high_bits = strtol (high_str, &stopstring, 16);
				low_bits = strtol (exception_code + 6, &stopstring, 16);
				result = (high_bits << 16) + low_bits;
			}
			return (EIF_INTEGER)result;
		#else
			return 0;
		#endif
	;
}
#define INLINE_F124_1517
#endif
#ifndef INLINE_F124_1518
static EIF_INTEGER_32 inline_F124_1518 (EIF_INTEGER_32 arg1)
{
	#ifdef EIF_WINDOWS
	return HRESULT_CODE(arg1);
#else
	return 0;
#endif
	;
}
#define INLINE_F124_1518
#endif
#ifndef INLINE_F124_1519
static EIF_INTEGER_32 inline_F124_1519 (EIF_INTEGER_32 arg1)
{
	#ifdef EIF_WINDOWS
	return HRESULT_FACILITY(arg1);
#else
	return 0;
#endif
	;
}
#define INLINE_F124_1519
#endif
#ifndef INLINE_F124_1520
static EIF_POINTER inline_F124_1520 (EIF_INTEGER_32 arg1)
{
	#ifdef EIF_WINDOWS
	LPVOID result;
	FormatMessage( 
		FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_FROM_SYSTEM | FORMAT_MESSAGE_IGNORE_INSERTS,
		NULL,
		arg1,
		MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT), // Default language
		(LPTSTR) &result,
		0,
		NULL 
		);
	return result;
#else
	return 0;
#endif
	;
}
#define INLINE_F124_1520
#endif
#ifndef INLINE_F124_1521
static EIF_INTEGER_32 inline_F124_1521 (EIF_POINTER arg1)
{
	#ifdef EIF_WINDOWS
	return (EIF_INTEGER_32) _tcslen ((wchar_t *) arg1);
#else
	return 0;
#endif
	;
}
#define INLINE_F124_1521
#endif
#ifndef INLINE_F124_1522
static EIF_INTEGER_32 inline_F124_1522 (void)
{
	#ifdef EIF_WINDOWS
	return sizeof(TCHAR);
#else
	return 0;
#endif
	;
}
#define INLINE_F124_1522
#endif
#ifndef INLINE_F124_1523
static void inline_F124_1523 (EIF_POINTER arg1)
{
	#ifdef EIF_WINDOWS
	LocalFree((HLOCAL) arg1);
#endif
	;
}
#define INLINE_F124_1523
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {COM_FAILURE}.hresult */
EIF_INTEGER_32 F124_1506 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_1_);
}


/* {COM_FAILURE}.hresult_code */
EIF_INTEGER_32 F124_1507 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_2_);
}


/* {COM_FAILURE}.code */
EIF_INTEGER_32 F124_1508 (EIF_REFERENCE Current)
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
	
	RTEAA("code", 123, Current, 0, 0, 1536);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 28L);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {COM_FAILURE}.tag */
static EIF_REFERENCE F124_1509_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(106)

	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,tr2);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("tag", 123, Current, 0, 0, 1537);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(971, 0x01).id, 971, _OBJSIZ_1_0_0_4_0_0_0_0_);
	tr2 = RTMS_EX_H("COM error.",10,1631170862);
	(nstcall = -1, F972_6280(RTCW(tr1), tr2));
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

EIF_REFERENCE F124_1509 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(106,F124_1509_body,(Current));
}

/* {COM_FAILURE}.set_hresult_code */
void F124_1510 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_hresult_code", 123, Current, 0, 1, 1538);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_2_) = (EIF_INTEGER_32) arg1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {COM_FAILURE}.hresult_facility */
EIF_INTEGER_32 F124_1511 (EIF_REFERENCE Current)
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
	
	RTEAA("hresult_facility", 123, Current, 0, 0, 1539);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_1_);
	Result = (nstcall = 0, F124_1519(Current, ti4_1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {COM_FAILURE}.hresult_message */
EIF_REFERENCE F124_1512 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,Result);
	RTLIU(5);
	
	RTEAA("hresult_message", 123, Current, 1, 0, 1540);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
	RTHOOK(2);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTHOOK(3);
		tr1 = (nstcall = 1, F1_14(loc1));
		loc1 = (EIF_REFERENCE) tr1;
		RTHOOK(4);
		(nstcall = 1, F970_6195(RTCW(loc1), ((EIF_INTEGER_32) 10L)));
		RTHOOK(5);
		(nstcall = 1, F967_6053(RTCW(loc1)));
	}
	RTHOOK(6);
	tb1 = '\01';
	if (!(EIF_BOOLEAN)(loc1 == NULL)) {
		tb2 = '\0';
		tb3 = (nstcall = 1, F567_3452(RTCW(loc1)));
		if (tb3) {
			tb2 = (EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_2_) > ((EIF_INTEGER_32) 0L));
		}
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(7);
		tr1 = (nstcall = 0, F124_1524(Current, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_2_)));
		tr2 = (nstcall = 1, F971_6270(RTCW(tr1)));
		loc1 = (EIF_REFERENCE) tr2;
	}
	RTHOOK(8);
	if ((EIF_BOOLEAN)(loc1 == NULL)) {
		RTHOOK(9);
		Result = RTLNS(eif_new_type(969, 0x01).id, 969, _OBJSIZ_1_1_0_3_0_0_0_0_);
		(nstcall = -1, F965_5930(RTCW(Result)));
	} else {
		RTHOOK(10);
		Result = (EIF_REFERENCE) loc1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("non_void_message", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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

/* {COM_FAILURE}.trigger */
void F124_1513 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLIU(2);
	
	RTEAA("trigger", 123, Current, 1, 1, 1541);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_2_) = (EIF_INTEGER_32) arg1;
	RTHOOK(2);
	loc1 = (nstcall = 0, F124_1516(Current, arg1));
	RTHOOK(3);
	(nstcall = 0, F117_1482(Current, loc1));
	RTHOOK(4);
	(nstcall = 0, F124_1515(Current, loc1));
	RTHOOK(5);
	(nstcall = 0, F117_1467(Current));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {COM_FAILURE}.exception_information */
EIF_REFERENCE F124_1514 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_5_);
}


/* {COM_FAILURE}.set_exception_information */
void F124_1515 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("set_exception_information", 123, Current, 1, 1, 1543);
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
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) arg1;
	RTHOOK(3);
	if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_2_) > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(4);
		loc1 = RTLNS(eif_new_type(175, 0x01).id, 175, _OBJSIZ_1_0_0_1_0_0_0_0_);
		tr1 = (nstcall = 0, F124_1516(Current, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_2_)));
		(nstcall = -1, F176_1848(RTCW(loc1), tr1));
		RTHOOK(5);
		tp1 = (nstcall = 1, F176_1870(RTCW(loc1)));
		ti4_1 = (nstcall = 0, F124_1517(Current, tp1));
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_1_) = (EIF_INTEGER_32) ti4_1;
	} else {
		RTHOOK(6);
		loc1 = RTLNS(eif_new_type(175, 0x01).id, 175, _OBJSIZ_1_0_0_1_0_0_0_0_);
		(nstcall = -1, F176_1848(RTCW(loc1), arg1));
		RTHOOK(7);
		tp1 = (nstcall = 1, F176_1870(RTCW(loc1)));
		ti4_1 = (nstcall = 0, F124_1517(Current, tp1));
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_1_) = (EIF_INTEGER_32) ti4_1;
		RTHOOK(8);
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_1_);
		ti4_1 = (nstcall = 0, F124_1518(Current, ti4_1));
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_1_0_2_) = (EIF_INTEGER_32) ti4_1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
}

/* {COM_FAILURE}.ccom_hresult_to_string */
EIF_REFERENCE F124_1516 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	RTLR(0,tr1);
	RTLR(1,tr2);
	RTLR(2,Result);
	RTLR(3,Current);
	RTLIU(4);
	
	RTEAA("ccom_hresult_to_string", 123, Current, 0, 1, 1544);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(892, 0x00).id, 892, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_INTEGER_32 *)tr1 = arg1;
	tr2 = (nstcall = 1, F891_4981(RTCW(tr1)));
	Result = (EIF_REFERENCE) tr2;
	RTHOOK(2);
	tr1 = RTMS_EX_H("0x",2,12408);
	tr2 = (nstcall = 1, F970_6192(tr1, Result));
	Result = (EIF_REFERENCE) tr2;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {COM_FAILURE}.ccom_hresult */
EIF_INTEGER_32 F124_1517 (EIF_REFERENCE Current, EIF_POINTER arg1)
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
	
	RTEAA("ccom_hresult", 123, Current, 0, 1, 1545);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F124_1517 ((EIF_POINTER) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {COM_FAILURE}.ccom_hresult_code */
EIF_INTEGER_32 F124_1518 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("ccom_hresult_code", 123, Current, 0, 1, 1546);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F124_1518 ((EIF_INTEGER_32) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {COM_FAILURE}.ccom_hresult_facility */
EIF_INTEGER_32 F124_1519 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("ccom_hresult_facility", 123, Current, 0, 1, 1528);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F124_1519 ((EIF_INTEGER_32) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {COM_FAILURE}.cwin_error_text */
EIF_POINTER F124_1520 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("cwin_error_text", 123, Current, 0, 1, 1529);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F124_1520 ((EIF_INTEGER_32) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {COM_FAILURE}.c_strlen */
EIF_INTEGER_32 F124_1521 (EIF_REFERENCE Current, EIF_POINTER arg1)
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
	
	RTEAA("c_strlen", 123, Current, 0, 1, 1530);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F124_1521 ((EIF_POINTER) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {COM_FAILURE}.character_size */
EIF_INTEGER_32 F124_1522 (EIF_REFERENCE Current)
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
	
	RTEAA("character_size", 123, Current, 0, 0, 1531);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F124_1522 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {COM_FAILURE}.cwin_local_free */
void F124_1523 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("cwin_local_free", 123, Current, 0, 1, 1532);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	inline_F124_1523 ((EIF_POINTER) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {COM_FAILURE}.error_message */
EIF_REFERENCE F124_1524 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_16 tu2_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,loc2);
	RTLIU(3);
	
	RTEAA("error_message", 123, Current, 4, 1, 1533);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_code_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = (nstcall = 0, F124_1520(Current, arg1));
	RTHOOK(3);
	if ((EIF_BOOLEAN)(loc1 == (nstcall = 0, F1_33(Current)))) {
		RTHOOK(4);
		Result = RTMS32_EX_H("",0,0);
	} else {
		RTHOOK(5);
		loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		RTHOOK(6);
		loc4 = (nstcall = 0, F124_1521(Current, loc1));
		RTHOOK(7);
		loc2 = RTLNS(eif_new_type(213, 0x01).id, 213, _OBJSIZ_0_1_0_1_0_1_1_0_);
		ti4_1 = (nstcall = 0, F124_1522(Current));
		(nstcall = -1, F214_2529(RTCW(loc2), loc1, (EIF_INTEGER_32) (loc4 * ti4_1)));
		RTHOOK(8);
		Result = RTLNS(eif_new_type(972, 0x01).id, 972, _OBJSIZ_1_1_0_3_0_0_0_0_);
		(nstcall = -1, F971_6226(RTCW(Result), loc4));
		for (;;) {
			RTHOOK(9);
			if ((EIF_BOOLEAN)(loc3 == loc4)) break;
			RTHOOK(10);
			ti4_1 = (nstcall = 0, F124_1522(Current));
			tu2_1 = (nstcall = 1, F214_2539(RTCW(loc2), (EIF_INTEGER_32) (loc3 * ti4_1)));
			tu4_1 = (EIF_NATURAL_32) tu2_1;
			(nstcall = 1, F967_6030(RTCW(Result), tu4_1));
			RTHOOK(11);
			loc3++;
		}
		RTHOOK(12);
		(nstcall = 0, F124_1523(Current, loc1));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(13);
		RTCT("error_message_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTLE;
	RTEE;
	return Result;
}

void EIF_Minit103 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
