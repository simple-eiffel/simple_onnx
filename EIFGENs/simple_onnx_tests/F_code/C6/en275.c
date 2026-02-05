/*
 * Code for class ENCODING_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "en275.h"
#include <windows.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F978_6506
static EIF_INTEGER_32 inline_F978_6506 (EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	return WideCharToMultiByte (arg1, 0, arg2, arg3, NULL, 0, NULL, NULL);
	;
}
#define INLINE_F978_6506
#endif
#ifndef INLINE_F978_6507
static EIF_INTEGER_32 inline_F978_6507 (EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	return MultiByteToWideChar (arg1, 0, arg2, arg3, NULL, 0);
	;
}
#define INLINE_F978_6507
#endif
#ifndef INLINE_F978_6508
static void inline_F978_6508 (EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_POINTER arg4, EIF_INTEGER_32 arg5, EIF_BOOLEAN* arg6, EIF_BOOLEAN* arg7)
{
	DWORD dw;
				BOOL l_lost = EIF_FALSE;
				LPBOOL lpUsedDefaultChar = NULL;
				DWORD dwFlags = WC_NO_BEST_FIT_CHARS;

				if (arg1 == CP_UTF7 || arg1 == CP_UTF8) {
					lpUsedDefaultChar = NULL;
				} else {
					lpUsedDefaultChar = &l_lost;
				}
				
				/* For following values, dwFlags = 0 is required by MSDN
				 * See http://msdn.microsoft.com/en-us/library/windows/desktop/dd374130(v=vs.85).aspx
				 */
				if (arg1 == 50220 || arg1 == 50221 || arg1 == 50222 || arg1 == 50225 || arg1 == 50227 || arg1 == 50229 || arg1 == 65000 || arg1 == 42) {
					dwFlags = 0;
				} else if (arg1 == 65001 || arg1 == 54936) {
					dwFlags = 0;
				} else if (arg1 >= 57002 && arg1 <= 57011) {
					dwFlags = 0;
				}
				
				WideCharToMultiByte ((UINT) arg1, dwFlags, (LPCWSTR) arg2,
					(int) arg3, (LPSTR) arg4, (int) arg5, (LPCCH) NULL, lpUsedDefaultChar);
					
				dw = GetLastError();
				if (dw == ERROR_INSUFFICIENT_BUFFER || dw == ERROR_INVALID_FLAGS || dw == ERROR_INVALID_PARAMETER) {
					*arg6 = 0;
				}
				*arg7 = (l_lost ? EIF_TRUE : EIF_FALSE);
	;
}
#define INLINE_F978_6508
#endif
#ifndef INLINE_F978_6509
static void inline_F978_6509 (EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_POINTER arg4, EIF_INTEGER_32 arg5, EIF_BOOLEAN* arg6)
{
	DWORD dw;
    
	MultiByteToWideChar ((UINT) arg1, (DWORD) 0, (LPCCH) arg2,
		(int) arg3, (LPWSTR) arg4, (int) arg5);
	dw = GetLastError();
	if (dw == ERROR_INSUFFICIENT_BUFFER || dw == ERROR_INVALID_FLAGS || dw == ERROR_INVALID_PARAMETER || dw == ERROR_NO_UNICODE_TRANSLATION) {
		*arg6 = 0;
	}
	;
}
#define INLINE_F978_6509
#endif
#ifndef INLINE_F978_6510
static EIF_INTEGER_32 inline_F978_6510 (void)
{
	return sizeof(WCHAR);
	;
}
#define INLINE_F978_6510
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ENCODING_IMP}.convert_to */
void F978_6495 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc4 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc5 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(11);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,arg3);
	RTLR(3,arg2);
	RTLR(4,tr1);
	RTLR(5,loc1);
	RTLR(6,loc2);
	RTLR(7,loc3);
	RTLR(8,tr2);
	RTLR(9,loc6);
	RTLR(10,loc7);
	RTLIU(11);
	
	RTEAA("convert_to", 977, Current, 7, 3, 13374);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_from_code_page_valid", EX_PRE);
		RTTE((nstcall = 0, F978_6498(Current, arg1)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_to_code_page_valid", EX_PRE);
		RTTE((nstcall = 0, F978_6498(Current, arg3)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("code_page_convertible", EX_PRE);
		RTTE((nstcall = 0, F978_6499(Current, arg1, arg3)), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("a_from_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_1_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(6);
	tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4558[Dtype(RTCW(arg2))-968])(arg2));
	if (tb1) {
		RTHOOK(7);
		*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(8);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4555[Dtype(RTCW(arg2))-968])(arg2));
		if (tb1) {
			RTHOOK(9);
			tr1 = RTMS_EX_H("",0,0);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
		} else {
			RTHOOK(10);
			tr1 = RTMS32_EX_H("",0,0);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
		}
		RTHOOK(11);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4556[Dtype(RTCW(arg2))-968])(arg2));
		*(EIF_BOOLEAN *)(Current+ _CHROFF_1_1_) = (EIF_BOOLEAN) tb1;
	} else {
		RTHOOK(12);
		loc1 = (nstcall = 0, F978_6501(Current, arg1));
		RTHOOK(13);
		loc2 = (nstcall = 0, F978_6501(Current, arg3));
		RTHOOK(14);
		loc4 = (nstcall = 0, F978_6505(Current, arg1));
		RTHOOK(15);
		loc5 = (nstcall = 0, F978_6505(Current, arg3));
		RTHOOK(16);
		*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(17);
		if ((nstcall = 0, F978_6503(Current, arg1))) {
			RTHOOK(18);
			tr1 = (nstcall = 1, F965_5989(RTCW(arg2)));
			loc3 = (EIF_REFERENCE) tr1;
			RTHOOK(19);
			if ((EIF_BOOLEAN)(loc4 == RTOUCB(EIF_BOOLEAN,303,(nstcall = 0, F52_757), (Current)))) {
				RTHOOK(20);
				tr1 = (nstcall = 0, F52_756(Current, loc3));
				loc3 = (EIF_REFERENCE) tr1;
			}
			RTHOOK(21);
			if ((nstcall = 0, F978_6504(Current, arg3))) {
				RTHOOK(22);
				tr1 = RTLNS(eif_new_type(978, 0x01).id, 978, _OBJSIZ_1_2_0_0_0_0_0_0_);
				tr2 = (nstcall = 0, F979_6520(RTCW(tr1), loc3));
				loc3 = (EIF_REFERENCE) tr2;
				RTHOOK(23);
				if ((EIF_BOOLEAN)(loc5 == RTOUCB(EIF_BOOLEAN,303,(nstcall = 0, F52_757), (Current)))) {
					RTHOOK(24);
					loc6 = (nstcall = 0, F52_755(Current, loc3));
				} else {
					RTHOOK(25);
					loc6 = (EIF_REFERENCE) loc3;
				}
				RTHOOK(26);
				RTAR(Current, loc6);
				*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) loc6;
			} else {
				RTHOOK(27);
				if ((nstcall = 0, F978_6503(Current, arg3))) {
					RTHOOK(28);
					if ((EIF_BOOLEAN)(loc5 == RTOUCB(EIF_BOOLEAN,303,(nstcall = 0, F52_757), (Current)))) {
						RTHOOK(29);
						loc6 = (nstcall = 0, F52_756(Current, loc3));
					} else {
						RTHOOK(30);
						loc6 = (EIF_REFERENCE) loc3;
					}
					RTHOOK(31);
					RTAR(Current, loc6);
					*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) loc6;
					RTHOOK(32);
					*(EIF_BOOLEAN *)(Current+ _CHROFF_1_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				} else {
					RTHOOK(33);
					loc7 = (nstcall = 0, F978_6496(Current, loc2, loc3));
					RTHOOK(34);
					RTAR(Current, loc7);
					*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) loc7;
				}
			}
		} else {
			RTHOOK(35);
			if ((nstcall = 0, F978_6504(Current, arg1))) {
				RTHOOK(36);
				tr1 = (nstcall = 1, F965_5989(RTCW(arg2)));
				loc3 = (EIF_REFERENCE) tr1;
				RTHOOK(37);
				if ((EIF_BOOLEAN)(loc4 == RTOUCB(EIF_BOOLEAN,303,(nstcall = 0, F52_757), (Current)))) {
					RTHOOK(38);
					tr1 = (nstcall = 0, F52_755(Current, loc3));
					loc3 = (EIF_REFERENCE) tr1;
				}
				RTHOOK(39);
				if ((nstcall = 0, F978_6503(Current, arg3))) {
					RTHOOK(40);
					tr1 = RTLNS(eif_new_type(978, 0x01).id, 978, _OBJSIZ_1_2_0_0_0_0_0_0_);
					tr2 = (nstcall = 0, F979_6519(RTCW(tr1), loc3));
					loc3 = (EIF_REFERENCE) tr2;
					RTHOOK(41);
					if ((EIF_BOOLEAN)(loc5 == RTOUCB(EIF_BOOLEAN,303,(nstcall = 0, F52_757), (Current)))) {
						RTHOOK(42);
						loc6 = (nstcall = 0, F52_756(Current, loc3));
					} else {
						RTHOOK(43);
						loc6 = (EIF_REFERENCE) loc3;
					}
					RTHOOK(44);
					RTAR(Current, loc6);
					*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) loc6;
					RTHOOK(45);
					*(EIF_BOOLEAN *)(Current+ _CHROFF_1_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				} else {
					RTHOOK(46);
					if ((nstcall = 0, F978_6504(Current, arg3))) {
						RTHOOK(47);
						if ((EIF_BOOLEAN)(loc5 == RTOUCB(EIF_BOOLEAN,303,(nstcall = 0, F52_757), (Current)))) {
							RTHOOK(48);
							loc6 = (nstcall = 0, F52_755(Current, loc3));
						} else {
							RTHOOK(49);
							tr1 = (nstcall = 1, F1_14(loc3));
							loc6 = (EIF_REFERENCE) tr1;
						}
						RTHOOK(50);
						RTAR(Current, loc6);
						*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) loc6;
					} else {
						RTHOOK(51);
						tr1 = RTLNS(eif_new_type(978, 0x01).id, 978, _OBJSIZ_1_2_0_0_0_0_0_0_);
						loc6 = (nstcall = 0, F979_6519(RTCW(tr1), loc3));
						RTHOOK(52);
						loc7 = (nstcall = 0, F978_6496(Current, loc2, loc6));
						RTHOOK(53);
						RTAR(Current, loc7);
						*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) loc7;
					}
				}
			} else {
				RTHOOK(54);
				tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4557[Dtype(RTCW(arg2))-968])(arg2));
				if (tb1) {
					RTHOOK(55);
					tr1 = (nstcall = 1, F965_5983(RTCW(arg2)));
				} else {
					RTHOOK(56);
					tr2 = RTLNS(eif_new_type(46, 0x00).id, 46, _OBJSIZ_0_0_0_0_0_0_0_0_);
					tr1 = (nstcall = 0, F47_650(RTCW(tr2), arg2));
				}
				loc3 = (nstcall = 0, F978_6497(Current, loc1, tr1));
				RTHOOK(57);
				if ((nstcall = 0, F978_6503(Current, arg3))) {
					RTHOOK(58);
					if ((EIF_BOOLEAN)(loc5 == RTOUCB(EIF_BOOLEAN,303,(nstcall = 0, F52_757), (Current)))) {
						RTHOOK(59);
						loc6 = (nstcall = 0, F52_756(Current, loc3));
					} else {
						RTHOOK(60);
						loc6 = (EIF_REFERENCE) loc3;
					}
					RTHOOK(61);
					RTAR(Current, loc6);
					*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) loc6;
					RTHOOK(62);
					*(EIF_BOOLEAN *)(Current+ _CHROFF_1_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				} else {
					RTHOOK(63);
					if ((nstcall = 0, F978_6504(Current, arg3))) {
						RTHOOK(64);
						tr1 = RTLNS(eif_new_type(978, 0x01).id, 978, _OBJSIZ_1_2_0_0_0_0_0_0_);
						tr2 = (nstcall = 0, F979_6520(RTCW(tr1), loc3));
						loc3 = (EIF_REFERENCE) tr2;
						RTHOOK(65);
						if ((EIF_BOOLEAN)(loc5 == RTOUCB(EIF_BOOLEAN,303,(nstcall = 0, F52_757), (Current)))) {
							RTHOOK(66);
							loc6 = (nstcall = 0, F52_755(Current, loc3));
						} else {
							RTHOOK(67);
							loc6 = (EIF_REFERENCE) loc3;
						}
						RTHOOK(68);
						RTAR(Current, loc6);
						*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) loc6;
					} else {
						RTHOOK(69);
						loc7 = (nstcall = 0, F978_6496(Current, loc2, loc3));
						RTHOOK(70);
						RTAR(Current, loc7);
						*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) loc7;
					}
				}
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(71);
		RTCT("success_implies_not_void", EX_POST);
		tb1 = '\01';
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_)) {
			tb1 = (EIF_BOOLEAN)((nstcall = 0, F977_6486(Current)) != NULL);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(72);
		RTCT("success_implies_not_void", EX_POST);
		if ((!(*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_)) || ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) != NULL)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(73);
	RTLE;
	RTEE;
}

/* {ENCODING_IMP}.wide_char_to_multi_byte */
EIF_REFERENCE F978_6496 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc2);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,arg1);
	RTLR(4,loc3);
	RTLR(5,Result);
	RTLIU(6);
	
	RTEAA("wide_char_to_multi_byte", 977, Current, 3, 2, 13375);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc2 = (nstcall = 0, F52_747(Current, arg2));
	RTHOOK(2);
	ti4_1 = (nstcall = 1, F965_5995(RTCW(arg1)));
	tp1 = *(EIF_POINTER *)(RTCW(loc2)+ _PTROFF_0_1_0_1_0_0_);
	ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_1_1_0_2_);
	loc1 = (nstcall = 0, F978_6506(Current, ti4_1, tp1, ti4_2));
	RTHOOK(3);
	loc3 = RTLNS(eif_new_type(213, 0x01).id, 213, _OBJSIZ_0_1_0_1_0_1_1_0_);
	(nstcall = -1, F214_2527(RTCW(loc3), loc1));
	RTHOOK(4);
	ti4_1 = (nstcall = 1, F965_5995(RTCW(arg1)));
	tp1 = *(EIF_POINTER *)(RTCW(loc2)+ _PTROFF_0_1_0_1_0_0_);
	ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_1_1_0_2_);
	tp2 = *(EIF_POINTER *)(RTCW(loc3)+ _PTROFF_0_1_0_1_0_0_);
	(nstcall = 0, F978_6508(Current, ti4_1, tp1, ti4_2, tp2, loc1, (EIF_BOOLEAN *) &(*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_)), (EIF_BOOLEAN *) &(*(EIF_BOOLEAN *)(Current+ _CHROFF_1_2_))));
	RTHOOK(5);
	tp1 = *(EIF_POINTER *)(RTCW(loc3)+ _PTROFF_0_1_0_1_0_0_);
	Result = (nstcall = 0, F52_748(Current, tp1, loc1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
	return Result;
}

/* {ENCODING_IMP}.multi_byte_to_wide_char */
EIF_REFERENCE F978_6497 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc2);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,arg1);
	RTLR(4,loc3);
	RTLR(5,Result);
	RTLIU(6);
	
	RTEAA("multi_byte_to_wide_char", 977, Current, 3, 2, 13376);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc2 = (nstcall = 0, F52_746(Current, arg2));
	RTHOOK(2);
	ti4_1 = (nstcall = 1, F965_5995(RTCW(arg1)));
	tp1 = *(EIF_POINTER *)(RTCW(loc2)+ _PTROFF_0_1_0_1_0_0_);
	ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_1_1_0_2_);
	loc1 = (nstcall = 0, F978_6507(Current, ti4_1, tp1, ti4_2));
	RTHOOK(3);
	loc3 = RTLNS(eif_new_type(213, 0x01).id, 213, _OBJSIZ_0_1_0_1_0_1_1_0_);
	ti4_1 = (nstcall = 0, F978_6510(Current));
	(nstcall = -1, F214_2527(RTCW(loc3), (EIF_INTEGER_32) (loc1 * ti4_1)));
	RTHOOK(4);
	ti4_1 = (nstcall = 1, F965_5995(RTCW(arg1)));
	tp1 = *(EIF_POINTER *)(RTCW(loc2)+ _PTROFF_0_1_0_1_0_0_);
	ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_1_1_0_2_);
	tp2 = *(EIF_POINTER *)(RTCW(loc3)+ _PTROFF_0_1_0_1_0_0_);
	(nstcall = 0, F978_6509(Current, ti4_1, tp1, ti4_2, tp2, loc1, (EIF_BOOLEAN *) &(*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_))));
	RTHOOK(5);
	tp1 = *(EIF_POINTER *)(RTCW(loc3)+ _PTROFF_0_1_0_1_0_0_);
	ti4_1 = (nstcall = 0, F978_6510(Current));
	Result = (nstcall = 0, F52_749(Current, tp1, (EIF_INTEGER_32) (loc1 * ti4_1)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
	return Result;
}

/* {ENCODING_IMP}.is_code_page_valid */
EIF_BOOLEAN F978_6498 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("is_code_page_valid", 977, Current, 0, 1, 13377);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = '\0';
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4558[Dtype(RTCW(arg1))-968])(arg1));
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
		RTHOOK(2);
		Result = (nstcall = 0, F978_6502(Current, arg1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {ENCODING_IMP}.is_code_page_convertible */
EIF_BOOLEAN F978_6499 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
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
	
	RTEAA("is_code_page_convertible", 977, Current, 0, 2, 13378);
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

/* {ENCODING_IMP}.last_conversion_lost_data */
EIF_BOOLEAN F978_6500 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_1_2_);
}


/* {ENCODING_IMP}.platform_code_page_from_name */
EIF_REFERENCE F978_6501 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,Result);
	RTLIU(6);
	
	RTEAA("platform_code_page_from_name", 977, Current, 1, 1, 13380);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_code_page_name_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_code_page_name_not_empty", EX_PRE);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4558[Dtype(RTCW(arg1))-968])(arg1));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_code_page_valid", EX_PRE);
		RTTE((nstcall = 0, F978_6498(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	RTCT0("from_precondition", EX_CHECK);
	tr1 = RTOUCR(304,(nstcall = 0, F53_758), (Current));
	tr2 = (nstcall = 1, F844_4467(RTCW(tr1), arg1));
	loc1 = tr2;
	if (EIF_TEST(loc1)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTHOOK(5);
	Result = (EIF_REFERENCE) loc1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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
	return Result;
}

/* {ENCODING_IMP}.is_known_code_page */
EIF_BOOLEAN F978_6502 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("is_known_code_page", 977, Current, 0, 1, 13381);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_code_page_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_code_page_not_empty", EX_PRE);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4558[Dtype(RTCW(arg1))-968])(arg1));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = RTOUCR(304,(nstcall = 0, F53_758), (Current));
	tb1 = (nstcall = 1, F844_4469(RTCW(tr1), arg1));
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {ENCODING_IMP}.is_two_byte_code_page */
EIF_BOOLEAN F978_6503 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("is_two_byte_code_page", 977, Current, 0, 1, 13382);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_code_page_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_code_page_not_empty", EX_PRE);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4558[Dtype(RTCW(arg1))-968])(arg1));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = RTOUCR(305,(nstcall = 0, F53_759), (Current));
	tb1 = (nstcall = 1, F844_4469(RTCW(tr1), arg1));
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {ENCODING_IMP}.is_four_bype_code_page */
EIF_BOOLEAN F978_6504 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("is_four_bype_code_page", 977, Current, 0, 1, 13383);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_code_page_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_code_page_not_empty", EX_PRE);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4558[Dtype(RTCW(arg1))-968])(arg1));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = RTOUCR(306,(nstcall = 0, F53_760), (Current));
	tb1 = (nstcall = 1, F844_4469(RTCW(tr1), arg1));
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {ENCODING_IMP}.is_big_endian_code_page */
EIF_BOOLEAN F978_6505 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("is_big_endian_code_page", 977, Current, 0, 1, 13384);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_code_page_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_code_page_not_empty", EX_PRE);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4558[Dtype(RTCW(arg1))-968])(arg1));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = RTOUCR(307,(nstcall = 0, F53_761), (Current));
	tb1 = (nstcall = 1, F844_4469(RTCW(tr1), arg1));
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {ENCODING_IMP}.cwin_widechartomultibyte_buffer_length */
EIF_INTEGER_32 F978_6506 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
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
	
	RTEAA("cwin_widechartomultibyte_buffer_length", 977, Current, 0, 3, 13385);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F978_6506 ((EIF_INTEGER_32) arg1, (EIF_POINTER) arg2, (EIF_INTEGER_32) arg3);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {ENCODING_IMP}.cwin_multibytetowidechar_buffer_length */
EIF_INTEGER_32 F978_6507 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
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
	
	RTEAA("cwin_multibytetowidechar_buffer_length", 977, Current, 0, 3, 13386);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F978_6507 ((EIF_INTEGER_32) arg1, (EIF_POINTER) arg2, (EIF_INTEGER_32) arg3);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {ENCODING_IMP}.cwin_wide_char_to_multi_byte */
void F978_6508 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_POINTER arg4, EIF_INTEGER_32 arg5, EIF_BOOLEAN* arg6, EIF_BOOLEAN* arg7)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("cwin_wide_char_to_multi_byte", 977, Current, 0, 7, 13387);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	inline_F978_6508 ((EIF_INTEGER_32) arg1, (EIF_POINTER) arg2, (EIF_INTEGER_32) arg3, (EIF_POINTER) arg4, (EIF_INTEGER_32) arg5, (EIF_BOOLEAN*) arg6, (EIF_BOOLEAN*) arg7);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {ENCODING_IMP}.cwin_multi_byte_to_wide_char */
void F978_6509 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_POINTER arg4, EIF_INTEGER_32 arg5, EIF_BOOLEAN* arg6)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("cwin_multi_byte_to_wide_char", 977, Current, 0, 6, 13388);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	inline_F978_6509 ((EIF_INTEGER_32) arg1, (EIF_POINTER) arg2, (EIF_INTEGER_32) arg3, (EIF_POINTER) arg4, (EIF_INTEGER_32) arg5, (EIF_BOOLEAN*) arg6);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {ENCODING_IMP}.wchar_length */
EIF_INTEGER_32 F978_6510 (EIF_REFERENCE Current)
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
	
	RTEAA("wchar_length", 977, Current, 0, 0, 13373);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F978_6510 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

void EIF_Minit275 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
