/*
 * Code for class SYSTEM_ENCODINGS_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "sy45.h"
#include <windows.h>
#include <Winnls.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F60_816
static EIF_NATURAL_32 inline_F60_816 (void)
{
	return (EIF_NATURAL_32) GetConsoleCP ();
	;
}
#define INLINE_F60_816
#endif
#ifndef INLINE_F60_817
static EIF_NATURAL_32 inline_F60_817 (void)
{
	return (EIF_NATURAL_32) GetConsoleOutputCP ();
	;
}
#define INLINE_F60_817
#endif
#ifndef INLINE_F60_818
static int inline_F60_818 (EIF_NATURAL_32 arg1)
{
	return EIF_TEST (SetConsoleCP ((UINT) arg1));
	;
}
#define INLINE_F60_818
#endif
#ifndef INLINE_F60_819
static int inline_F60_819 (EIF_NATURAL_32 arg1)
{
	return EIF_TEST (SetConsoleOutputCP ((UINT) arg1));
	;
}
#define INLINE_F60_819
#endif
#ifndef INLINE_F60_820
static EIF_NATURAL_32 inline_F60_820 (void)
{
	return (EIF_NATURAL_32) GetOEMCP ();
	;
}
#define INLINE_F60_820
#endif
#ifndef INLINE_F60_821
static EIF_NATURAL_32 inline_F60_821 (void)
{
	return (EIF_NATURAL_32) GetACP ();
	;
}
#define INLINE_F60_821
#endif
#ifndef INLINE_F60_823
static EIF_INTEGER_32 inline_F60_823 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3, EIF_INTEGER_32 arg4)
{
	return GetLocaleInfo((LCID) arg1, (LCTYPE) arg2, arg3, (int) arg4);
	;
}
#define INLINE_F60_823
#endif
#ifndef INLINE_F60_824
static EIF_INTEGER_32 inline_F60_824 (void)
{
	return sizeof(TCHAR);
	;
}
#define INLINE_F60_824
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {SYSTEM_ENCODINGS_IMP}.system_code_page */
EIF_REFERENCE F60_807 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("system_code_page", 59, Current, 1, 0, 875);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = (nstcall = 0, F60_825(Current));
	loc1 = (nstcall = 0, F60_822(Current, ti4_1, ((EIF_INTEGER_32) 4100L), ((EIF_INTEGER_32) 6L)));
	
	RTHOOK(2);
	Result = RTLNS(eif_new_type(969, 0x01).id, 969, _OBJSIZ_1_1_0_3_0_0_0_0_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_1_1_0_2_);
	(nstcall = -1, F968_6060(RTCW(Result), ti4_1));
	RTHOOK(3);
	(nstcall = 1, F970_6172(RTCW(Result), loc1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {SYSTEM_ENCODINGS_IMP}.console_code_page */
EIF_REFERENCE F60_808 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("console_code_page", 59, Current, 1, 0, 876);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = (nstcall = 0, F60_817(Current));
	RTHOOK(2);
	if ((EIF_BOOLEAN)(loc1 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) {
		RTHOOK(3);
		loc1 = (nstcall = 0, F60_816(Current));
		RTHOOK(4);
		if ((EIF_BOOLEAN)(loc1 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) {
			RTHOOK(5);
			loc1 = (nstcall = 0, F60_820(Current));
		}
	}
	RTHOOK(6);
	Result = RTLNS(eif_new_type(969, 0x01).id, 969, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F968_6060(RTCW(Result), ((EIF_INTEGER_32) 5L)));
	RTHOOK(7);
	(nstcall = 1, F970_6182(RTCW(Result), loc1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
	return Result;
}

/* {SYSTEM_ENCODINGS_IMP}.iso_8859_1_code_page */

EIF_REFERENCE F60_809 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (172,RTMS_EX_H("28591",5,943396145));
}

/* {SYSTEM_ENCODINGS_IMP}.console_input_code_page */
EIF_NATURAL_32 F60_816 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("console_input_code_page", 59, Current, 0, 0, 884);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F60_816 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {SYSTEM_ENCODINGS_IMP}.console_output_code_page */
EIF_NATURAL_32 F60_817 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("console_output_code_page", 59, Current, 0, 0, 885);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F60_817 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {SYSTEM_ENCODINGS_IMP}.set_console_input_code_page */
EIF_BOOLEAN F60_818 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
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
	
	RTEAA("set_console_input_code_page", 59, Current, 0, 1, 886);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = EIF_TEST(inline_F60_818 ((EIF_NATURAL_32) arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {SYSTEM_ENCODINGS_IMP}.set_console_output_code_page */
EIF_BOOLEAN F60_819 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
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
	
	RTEAA("set_console_output_code_page", 59, Current, 0, 1, 887);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = EIF_TEST(inline_F60_819 ((EIF_NATURAL_32) arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {SYSTEM_ENCODINGS_IMP}.oem_code_page */
EIF_NATURAL_32 F60_820 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("oem_code_page", 59, Current, 0, 0, 888);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F60_820 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {SYSTEM_ENCODINGS_IMP}.ansi_code_page */
EIF_NATURAL_32 F60_821 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("ansi_code_page", 59, Current, 0, 0, 889);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F60_821 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {SYSTEM_ENCODINGS_IMP}.extract_locale_string */
EIF_REFERENCE F60_822 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("extract_locale_string", 59, Current, 2, 3, 890);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = RTLNS(eif_new_type(213, 0x01).id, 213, _OBJSIZ_0_1_0_1_0_1_1_0_);
	ti4_1 = (nstcall = 0, F60_824(Current));
	(nstcall = -1, F214_2527(RTCW(loc1), (EIF_INTEGER_32) (ti4_1 * arg3)));
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(RTCW(loc1)+ _PTROFF_0_1_0_1_0_0_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_0_1_0_0_);
	loc2 = (nstcall = 0, F60_823(Current, arg1, arg2, tp1, ti4_1));
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(RTCW(loc1)+ _PTROFF_0_1_0_1_0_0_);
	ti4_1 = (nstcall = 0, F60_824(Current));
	tr1 = RTLNS(eif_new_type(51, 0x01).id, 51, _OBJSIZ_0_0_0_0_0_0_0_0_);
	Result = (nstcall = 0, F52_749(RTCW(tr1), tp1, (EIF_INTEGER_32) (loc2 * ti4_1)));
	RTHOOK(4);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_1_0_2_);
	tw1 = (nstcall = 1, F973_6308(RTCW(Result), ti4_1));
	ti4_1 = (EIF_INTEGER_32) (tw1);
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(5);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_1_0_2_);
		(nstcall = 1, F973_6362(RTCW(Result), ti4_1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
	return Result;
}

/* {SYSTEM_ENCODINGS_IMP}.c_extract_locale_string */
EIF_INTEGER_32 F60_823 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3, EIF_INTEGER_32 arg4)
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
	
	RTEAA("c_extract_locale_string", 59, Current, 0, 4, 891);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F60_823 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_POINTER) arg3, (EIF_INTEGER_32) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {SYSTEM_ENCODINGS_IMP}.c_tchar_length */
EIF_INTEGER_32 F60_824 (EIF_REFERENCE Current)
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
	
	RTEAA("c_tchar_length", 59, Current, 0, 0, 892);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F60_824 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {SYSTEM_ENCODINGS_IMP}.system_locale */
EIF_INTEGER_32 F60_825 (EIF_REFERENCE Current)
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
	
	RTEAA("system_locale", 59, Current, 0, 0, 893);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) GetSystemDefaultLCID();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {SYSTEM_ENCODINGS_IMP}.user_locale */
EIF_INTEGER_32 F60_826 (EIF_REFERENCE Current)
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
	
	RTEAA("user_locale", 59, Current, 0, 0, 894);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) GetUserDefaultLCID();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {SYSTEM_ENCODINGS_IMP}._invariant */
void F60_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTEAINV(l_feature_name, 44, Current, 0, 0);
	RTIT("correct_locale_idefaultcodepage_maxlen", Current);
	ti4_1 = (nstcall = 0, F60_825(Current));
	tp1 = (nstcall = 0, F1_33(Current));
	if ((EIF_BOOLEAN) ((nstcall = 0, F60_823(Current, ti4_1, ((EIF_INTEGER_32) 11L), tp1, ((EIF_INTEGER_32) 0L))) <= ((EIF_INTEGER_32) 6L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("correct_locale_idefaultansicodepage_maxlen", Current);
	ti4_1 = (nstcall = 0, F60_825(Current));
	tp1 = (nstcall = 0, F1_33(Current));
	if ((EIF_BOOLEAN) ((nstcall = 0, F60_823(Current, ti4_1, ((EIF_INTEGER_32) 4100L), tp1, ((EIF_INTEGER_32) 0L))) <= ((EIF_INTEGER_32) 6L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("correct_locale_idefaultmaccodepage_maxlen", Current);
	ti4_1 = (nstcall = 0, F60_825(Current));
	tp1 = (nstcall = 0, F1_33(Current));
	if ((EIF_BOOLEAN) ((nstcall = 0, F60_823(Current, ti4_1, ((EIF_INTEGER_32) 4113L), tp1, ((EIF_INTEGER_32) 0L))) <= ((EIF_INTEGER_32) 6L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit45 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
