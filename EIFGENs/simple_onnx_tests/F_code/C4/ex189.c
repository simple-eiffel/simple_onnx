/*
 * Code for class EXECUTION_ENVIRONMENT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ex189.h"
#include <string.h>
#include <stdlib.h>
#include "eif_path_name.h"
#include "eif_dir.h"
#include "eif_misc.h"
#include <eif_system.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F228_3135
static EIF_NATURAL_32 inline_F228_3135 (void)
{
	#ifdef EIF_WINDOWS
	SYSTEM_INFO SysInfo;
	ZeroMemory (&SysInfo, sizeof (SYSTEM_INFO));
	GetSystemInfo (&SysInfo);
	return (EIF_NATURAL_32) SysInfo.dwNumberOfProcessors;
#elif defined(EIF_MACOSX)
		/* MacOS X < 10.4 */
	int nm [2];
	size_t len = 4;
	uint32_t count;
	nm [0] = CTL_HW; nm [1] = HW_AVAILCPU;
	sysctl (nm, 2, &count, &len, NULL, 0);
	if(count < 1) {
		nm[1] = HW_NCPU;
		sysctl(nm, 2, &count, &len, NULL, 0);
		if (count < 1) {count = 1;}
	}
	return (EIF_NATURAL_32) count;
#else
		/* Linux, Solaris, AIX, Mac OS X >=10.4 (i.e. Tiger onwards), ... */
	return (EIF_NATURAL_32) sysconf(_SC_NPROCESSORS_ONLN);
#endif
	;
}
#define INLINE_F228_3135
#endif
#ifndef INLINE_F228_3144
static EIF_POINTER inline_F228_3144 (EIF_INTEGER_32 arg1)
{
	if (eif_environ) {
	#ifdef EIF_WINDOWS
		EIF_NATIVE_CHAR *vars = (EIF_NATIVE_CHAR *) eif_environ;
		int cnt = 0;
		for (; *vars; vars++) {
		   if (arg1==cnt) return vars;
		   while (*vars) { vars++; }
		   cnt++;
		}
		return NULL;
	#else
		return ((EIF_NATIVE_CHAR **)eif_environ)[arg1];
	#endif
} else {
	return NULL;
}
	;
}
#define INLINE_F228_3144
#endif
#ifndef INLINE_F228_3148
static EIF_POINTER inline_F228_3148 (EIF_POINTER arg1)
{
	#ifdef EIF_WINDOWS
	return _wgetenv ((EIF_NATIVE_CHAR *) arg1);
#else
	return getenv ((EIF_NATIVE_CHAR *) arg1);
#endif
	;
}
#define INLINE_F228_3148
#endif
#ifndef INLINE_F228_3149
static EIF_INTEGER_32 inline_F228_3149 (EIF_POINTER arg1)
{
	#ifdef EIF_WINDOWS
	return _wputenv ((EIF_NATIVE_CHAR *) arg1);
#else
	return putenv ((EIF_NATIVE_CHAR *) arg1);
#endif
	;
}
#define INLINE_F228_3149
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EXECUTION_ENVIRONMENT}.arguments */
static EIF_REFERENCE F228_3120_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(2)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("arguments", 227, Current, 0, 0, 3195);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(388, 0x01).id, 388, _OBJSIZ_0_0_0_0_0_0_0_0_);
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

EIF_REFERENCE F228_3120 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(2,F228_3120_body,(Current));
}

/* {EXECUTION_ENVIRONMENT}.command_line */
static EIF_REFERENCE F228_3121_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(44)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("command_line", 227, Current, 0, 0, 3196);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(268, 0x01).id, 268, _OBJSIZ_0_0_0_0_0_0_0_0_);
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

EIF_REFERENCE F228_3121 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(44,F228_3121_body,(Current));
}

/* {EXECUTION_ENVIRONMENT}.current_working_path */
EIF_REFERENCE F228_3122 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("current_working_path", 227, Current, 3, 0, 3197);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 50L);
	RTHOOK(2);
	loc3 = RTLNS(eif_new_type(213, 0x01).id, 213, _OBJSIZ_0_1_0_1_0_1_1_0_);
	(nstcall = -1, F214_2527(RTCW(loc3), loc1));
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(RTCW(loc3)+ _PTROFF_0_1_0_1_0_0_);
	loc2 = (nstcall = 0, F228_3147(Current, tp1, loc1));
	RTHOOK(4);
	if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) -1L))) {
		RTHOOK(5);
		Result = RTLNS(eif_new_type(854, 0x01).id, 854, _OBJSIZ_2_1_0_0_0_0_0_0_);
		tr1 = RTMS_EX_H(".",1,46);
		(nstcall = -1, F855_4607(RTCW(Result), tr1));
	} else {
		RTHOOK(6);
		if ((EIF_BOOLEAN) (loc2 > loc1)) {
			RTHOOK(7);
			loc1 = (EIF_INTEGER_32) loc2;
			RTHOOK(8);
			(nstcall = 1, F214_2617(RTCW(loc3), loc1));
			RTHOOK(9);
			tp1 = *(EIF_POINTER *)(RTCW(loc3)+ _PTROFF_0_1_0_1_0_0_);
			loc2 = (nstcall = 0, F228_3147(Current, tp1, loc1));
		}
		RTHOOK(10);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (loc2 <= loc1))) {
			RTHOOK(11);
			Result = RTLNS(eif_new_type(854, 0x01).id, 854, _OBJSIZ_2_1_0_0_0_0_0_0_);
			tp1 = *(EIF_POINTER *)(RTCW(loc3)+ _PTROFF_0_1_0_1_0_0_);
			(nstcall = -1, F855_4611(RTCW(Result), tp1));
		} else {
			RTHOOK(12);
			Result = RTLNS(eif_new_type(854, 0x01).id, 854, _OBJSIZ_2_1_0_0_0_0_0_0_);
			tr1 = RTMS_EX_H(".",1,46);
			(nstcall = -1, F855_4607(RTCW(Result), tr1));
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(13);
		RTCT("result_not_void", EX_POST);
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

/* {EXECUTION_ENVIRONMENT}.current_working_directory */
EIF_REFERENCE F228_3123 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTEAA("current_working_directory", 227, Current, 3, 0, 3198);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 50L);
	RTHOOK(2);
	loc3 = RTLNS(eif_new_type(213, 0x01).id, 213, _OBJSIZ_0_1_0_1_0_1_1_0_);
	(nstcall = -1, F214_2527(RTCW(loc3), loc1));
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(RTCW(loc3)+ _PTROFF_0_1_0_1_0_0_);
	loc2 = (nstcall = 0, F228_3147(Current, tp1, loc1));
	RTHOOK(4);
	if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) -1L))) {
		RTHOOK(5);
		Result = RTMS_EX_H(".",1,46);
	} else {
		RTHOOK(6);
		if ((EIF_BOOLEAN) (loc2 > loc1)) {
			RTHOOK(7);
			loc1 = (EIF_INTEGER_32) loc2;
			RTHOOK(8);
			(nstcall = 1, F214_2617(RTCW(loc3), loc1));
			RTHOOK(9);
			tp1 = *(EIF_POINTER *)(RTCW(loc3)+ _PTROFF_0_1_0_1_0_0_);
			loc2 = (nstcall = 0, F228_3147(Current, tp1, loc1));
		}
		RTHOOK(10);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (loc2 <= loc1))) {
			RTHOOK(11);
			tr1 = RTOUCR(45,(nstcall = 0, F228_3146), (Current));
			tp1 = *(EIF_POINTER *)(RTCW(loc3)+ _PTROFF_0_1_0_1_0_0_);
			tr2 = (nstcall = 1, F226_3080(RTCW(tr1), tp1));
			Result = (EIF_REFERENCE) tr2;
		} else {
			RTHOOK(12);
			Result = RTMS_EX_H(".",1,46);
			
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(13);
		RTCT("result_not_void", EX_POST);
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

/* {EXECUTION_ENVIRONMENT}.default_shell */
static EIF_REFERENCE F228_3124_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(46)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("default_shell", 227, Current, 0, 0, 3162);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTMS_EX_H("SHELL",5,1213138508);
	Result = (nstcall = 0, F228_3126(Current, tr1));
	RTHOOK(2);
	if ((EIF_BOOLEAN) !(EIF_BOOLEAN)(Result != NULL)) {
		RTHOOK(3);
		tr1 = RTLNS(eif_new_type(972, 0x01).id, 972, _OBJSIZ_1_1_0_3_0_0_0_0_);
		(nstcall = -1, F965_5930(RTCW(tr1)));
		Result = (EIF_REFERENCE) tr1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F228_3124 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(46,F228_3124_body,(Current));
}

/* {EXECUTION_ENVIRONMENT}.get */
EIF_REFERENCE F228_3125 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,Result);
	RTLIU(5);
	
	RTEAA("get", 227, Current, 1, 1, 3163);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("s_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("not_has_null_character", EX_PRE);
		tb1 = (nstcall = 1, F968_6095(RTCW(arg1), (EIF_CHARACTER_8) '\000'));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = (nstcall = 0, F228_3126(Current, arg1));
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTHOOK(4);
		tr1 = (nstcall = 1, F965_5986(loc1));
		Result = (EIF_REFERENCE) tr1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {EXECUTION_ENVIRONMENT}.item */
EIF_REFERENCE F228_3126 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,Result);
	RTLIU(6);
	
	RTEAA("item", 227, Current, 2, 1, 3164);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("s_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("not_has_null_character", EX_PRE);
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\000';
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_CHARACTER_32)) R4561[Dtype(RTCW(arg1))-968])(arg1, tw1));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc1 = RTLNS(eif_new_type(224, 0x01).id, 224, _OBJSIZ_1_0_0_1_0_0_0_0_);
	(nstcall = -1, F225_3040(RTCW(loc1), arg1));
	RTHOOK(4);
	tp1 = (nstcall = 1, F225_3047(RTCW(loc1)));
	loc2 = (nstcall = 0, F228_3148(Current, tp1));
	RTHOOK(5);
	tb1 = !loc2;
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(6);
		tr1 = RTLNS(eif_new_type(224, 0x01).id, 224, _OBJSIZ_1_0_0_1_0_0_0_0_);
		(nstcall = -1, F225_3042(RTCW(tr1), loc2));
		tr2 = (nstcall = 1, F225_3045(RTCW(tr1)));
		Result = (EIF_REFERENCE) tr2;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {EXECUTION_ENVIRONMENT}.home_directory_path */
static EIF_REFERENCE F228_3127_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(47)

	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc3);
	RTLIU(3);
	
	RTEAA("home_directory_path", 227, Current, 3, 0, 3165);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("home_directory_supported", EX_PRE);
		tr1 = RTOUCR(10,(nstcall = 0, F1_28), (Current));
		tb1 = (nstcall = 1, F43_443(tr1));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTOTP;
	RTHOOK(2);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 50L);
	RTHOOK(3);
	loc3 = RTLNS(eif_new_type(213, 0x01).id, 213, _OBJSIZ_0_1_0_1_0_1_1_0_);
	(nstcall = -1, F214_2527(RTCW(loc3), loc1));
	RTHOOK(4);
	tp1 = *(EIF_POINTER *)(RTCW(loc3)+ _PTROFF_0_1_0_1_0_0_);
	loc2 = (nstcall = 0, F228_3153(Current, tp1, loc1));
	RTHOOK(5);
	if ((EIF_BOOLEAN) (loc2 > loc1)) {
		RTHOOK(6);
		loc1 = (EIF_INTEGER_32) loc2;
		RTHOOK(7);
		(nstcall = 1, F214_2617(RTCW(loc3), loc1));
		RTHOOK(8);
		tp1 = *(EIF_POINTER *)(RTCW(loc3)+ _PTROFF_0_1_0_1_0_0_);
		loc2 = (nstcall = 0, F228_3153(Current, tp1, loc1));
	}
	RTHOOK(9);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (loc2 <= loc1))) {
		RTHOOK(10);
		tr1 = RTLNS(eif_new_type(854, 0x01).id, 854, _OBJSIZ_2_1_0_0_0_0_0_0_);
		tp1 = *(EIF_POINTER *)(RTCW(loc3)+ _PTROFF_0_1_0_1_0_0_);
		(nstcall = -1, F855_4611(RTCW(tr1), tp1));
		Result = (EIF_REFERENCE) tr1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(11);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F228_3127 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(47,F228_3127_body,(Current));
}

/* {EXECUTION_ENVIRONMENT}.user_directory_path */
static EIF_REFERENCE F228_3128_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(48)

	RTLI(4);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc4);
	RTLIU(4);
	
	RTEAA("user_directory_path", 227, Current, 4, 0, 3166);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 50L);
	RTHOOK(2);
	loc3 = RTLNS(eif_new_type(213, 0x01).id, 213, _OBJSIZ_0_1_0_1_0_1_1_0_);
	(nstcall = -1, F214_2527(RTCW(loc3), ((EIF_INTEGER_32) 50L)));
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(RTCW(loc3)+ _PTROFF_0_1_0_1_0_0_);
	loc2 = (nstcall = 0, F228_3154(Current, tp1, loc1));
	RTHOOK(4);
	if ((EIF_BOOLEAN) (loc2 > loc1)) {
		RTHOOK(5);
		loc1 = (EIF_INTEGER_32) loc2;
		RTHOOK(6);
		(nstcall = 1, F214_2617(RTCW(loc3), loc1));
		RTHOOK(7);
		tp1 = *(EIF_POINTER *)(RTCW(loc3)+ _PTROFF_0_1_0_1_0_0_);
		loc2 = (nstcall = 0, F228_3154(Current, tp1, loc1));
	}
	RTHOOK(8);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (loc2 <= loc1))) {
		RTHOOK(9);
		tr1 = RTLNS(eif_new_type(854, 0x01).id, 854, _OBJSIZ_2_1_0_0_0_0_0_0_);
		tp1 = *(EIF_POINTER *)(RTCW(loc3)+ _PTROFF_0_1_0_1_0_0_);
		(nstcall = -1, F855_4611(RTCW(tr1), tp1));
		Result = (EIF_REFERENCE) tr1;
	}
	RTHOOK(10);
	tb1 = '\0';
	if ((EIF_BOOLEAN)(Result != NULL)) {
		tb2 = (nstcall = 1, F855_4615(RTCW(Result)));
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
	} else {
		RTHOOK(11);
		tb1 = '\0';
		tr1 = RTOUCR(10,(nstcall = 0, F1_28), (Current));
		tb2 = (nstcall = 1, F43_443(tr1));
		if (tb2) {
			tr1 = RTOUCR(47,(nstcall = 0, F228_3127), (Current));
			loc4 = tr1;
			tb1 = EIF_TEST(loc4);
		}
		if (tb1) {
			RTHOOK(12);
			Result = (EIF_REFERENCE) loc4;
		} else {
			RTHOOK(13);
			Result = (EIF_REFERENCE) NULL;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(14);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F228_3128 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(48,F228_3128_body,(Current));
}

/* {EXECUTION_ENVIRONMENT}.temporary_directory_path */
static EIF_REFERENCE F228_3129_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(49)

	RTLI(4);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("temporary_directory_path", 227, Current, 3, 0, 3167);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 10L);
	RTHOOK(2);
	loc3 = RTLNS(eif_new_type(224, 0x01).id, 224, _OBJSIZ_1_0_0_1_0_0_0_0_);
	(nstcall = -1, F225_3041(RTCW(loc3), loc1));
	RTHOOK(3);
	tp1 = (nstcall = 1, F225_3047(RTCW(loc3)));
	loc2 = (nstcall = 0, F228_3155(Current, tp1, loc1));
	RTHOOK(4);
	if ((EIF_BOOLEAN) (loc2 > loc1)) {
		RTHOOK(5);
		loc1 = (EIF_INTEGER_32) loc2;
		RTHOOK(6);
		loc3 = RTLNS(eif_new_type(224, 0x01).id, 224, _OBJSIZ_1_0_0_1_0_0_0_0_);
		(nstcall = -1, F225_3041(RTCW(loc3), loc1));
		RTHOOK(7);
		tp1 = (nstcall = 1, F225_3047(RTCW(loc3)));
		loc2 = (nstcall = 0, F228_3155(Current, tp1, loc1));
	}
	RTHOOK(8);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (loc2 <= loc1))) {
		RTHOOK(9);
		tr1 = RTLNS(eif_new_type(854, 0x01).id, 854, _OBJSIZ_2_1_0_0_0_0_0_0_);
		tr2 = (nstcall = 1, F225_3045(RTCW(loc3)));
		(nstcall = -1, F855_4607(RTCW(tr1), tr2));
		Result = (EIF_REFERENCE) tr1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(10);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F228_3129 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(49,F228_3129_body,(Current));
}

/* {EXECUTION_ENVIRONMENT}.home_directory_name */
static EIF_REFERENCE F228_3130_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(50)

	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc3);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("home_directory_name", 227, Current, 3, 0, 3168);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("home_directory_supported", EX_PRE);
		tr1 = RTOUCR(10,(nstcall = 0, F1_28), (Current));
		tb1 = (nstcall = 1, F43_443(tr1));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTOTP;
	RTHOOK(2);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 50L);
	RTHOOK(3);
	loc3 = RTLNS(eif_new_type(213, 0x01).id, 213, _OBJSIZ_0_1_0_1_0_1_1_0_);
	(nstcall = -1, F214_2527(RTCW(loc3), loc1));
	RTHOOK(4);
	tp1 = *(EIF_POINTER *)(RTCW(loc3)+ _PTROFF_0_1_0_1_0_0_);
	loc2 = (nstcall = 0, F228_3153(Current, tp1, loc1));
	RTHOOK(5);
	if ((EIF_BOOLEAN) (loc2 > loc1)) {
		RTHOOK(6);
		loc1 = (EIF_INTEGER_32) loc2;
		RTHOOK(7);
		(nstcall = 1, F214_2617(RTCW(loc3), loc1));
		RTHOOK(8);
		tp1 = *(EIF_POINTER *)(RTCW(loc3)+ _PTROFF_0_1_0_1_0_0_);
		loc2 = (nstcall = 0, F228_3153(Current, tp1, loc1));
	}
	RTHOOK(9);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (loc2 <= loc1))) {
		RTHOOK(10);
		tr1 = RTOUCR(45,(nstcall = 0, F228_3146), (Current));
		tp1 = *(EIF_POINTER *)(RTCW(loc3)+ _PTROFF_0_1_0_1_0_0_);
		tr2 = (nstcall = 1, F226_3080(RTCW(tr1), tp1));
		Result = (EIF_REFERENCE) tr2;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(11);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F228_3130 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(50,F228_3130_body,(Current));
}

/* {EXECUTION_ENVIRONMENT}.user_directory_name */
static EIF_REFERENCE F228_3131_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(51)

	RTLI(5);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc4);
	RTLIU(5);
	
	RTEAA("user_directory_name", 227, Current, 4, 0, 3169);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 50L);
	RTHOOK(2);
	loc3 = RTLNS(eif_new_type(213, 0x01).id, 213, _OBJSIZ_0_1_0_1_0_1_1_0_);
	(nstcall = -1, F214_2527(RTCW(loc3), ((EIF_INTEGER_32) 50L)));
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(RTCW(loc3)+ _PTROFF_0_1_0_1_0_0_);
	loc2 = (nstcall = 0, F228_3154(Current, tp1, loc1));
	RTHOOK(4);
	if ((EIF_BOOLEAN) (loc2 > loc1)) {
		RTHOOK(5);
		loc1 = (EIF_INTEGER_32) loc2;
		RTHOOK(6);
		(nstcall = 1, F214_2617(RTCW(loc3), loc1));
		RTHOOK(7);
		tp1 = *(EIF_POINTER *)(RTCW(loc3)+ _PTROFF_0_1_0_1_0_0_);
		loc2 = (nstcall = 0, F228_3154(Current, tp1, loc1));
	}
	RTHOOK(8);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (loc2 <= loc1))) {
		RTHOOK(9);
		tr1 = RTOUCR(45,(nstcall = 0, F228_3146), (Current));
		tp1 = *(EIF_POINTER *)(RTCW(loc3)+ _PTROFF_0_1_0_1_0_0_);
		tr2 = (nstcall = 1, F226_3080(RTCW(tr1), tp1));
		Result = (EIF_REFERENCE) tr2;
	}
	RTHOOK(10);
	tb1 = '\0';
	if ((EIF_BOOLEAN)(Result != NULL)) {
		tb2 = (nstcall = 1, F567_3452(RTCW(Result)));
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
	} else {
		RTHOOK(11);
		tb1 = '\0';
		tr1 = RTOUCR(10,(nstcall = 0, F1_28), (Current));
		tb2 = (nstcall = 1, F43_443(tr1));
		if (tb2) {
			tr1 = RTOUCR(50,(nstcall = 0, F228_3130), (Current));
			loc4 = tr1;
			tb1 = EIF_TEST(loc4);
		}
		if (tb1) {
			RTHOOK(12);
			Result = (EIF_REFERENCE) loc4;
		} else {
			RTHOOK(13);
			Result = (EIF_REFERENCE) NULL;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(14);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F228_3131 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(51,F228_3131_body,(Current));
}

/* {EXECUTION_ENVIRONMENT}.root_directory_name */
static EIF_REFERENCE F228_3132_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(52)

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("root_directory_name", 227, Current, 0, 0, 3170);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("root_directory_supported", EX_PRE);
		tr1 = RTOUCR(10,(nstcall = 0, F1_28), (Current));
		tb1 = (nstcall = 1, F43_444(tr1));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTOTP;
	RTHOOK(2);
	if ((nstcall = 0, F180_2017(Current))) {
		RTHOOK(3);
		Result = RTMS_EX_H("\\",1,92);
	} else {
		RTHOOK(4);
		if ((nstcall = 0, F180_2019(Current))) {
			RTHOOK(5);
			Result = RTMS_EX_H("[000000]",8,1461084509);
		} else {
			RTHOOK(6);
			Result = RTMS_EX_H("/",1,47);
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(8);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F228_3132 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(52,F228_3132_body,(Current));
}

/* {EXECUTION_ENVIRONMENT}.starting_environment_variables */
EIF_REFERENCE F228_3133 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,loc3);
	RTLR(3,loc4);
	RTLR(4,tr1);
	RTLR(5,tr2);
	RTLR(6,tr3);
	RTLIU(7);
	
	RTEAA("starting_environment_variables", 227, Current, 4, 0, 3171);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,843,0xFF01,969,0xFF01,969,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		Result = RTLNS(typres0.id, 843, _OBJSIZ_7_3_0_7_0_0_0_0_);
	}
	(nstcall = -1, F844_4461(RTCW(Result), ((EIF_INTEGER_32) 40L)));
	RTHOOK(2);
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(3);
	loc1 = (nstcall = 0, F228_3144(Current, loc2));
	RTHOOK(4);
	loc3 = RTLNS(eif_new_type(224, 0x01).id, 224, _OBJSIZ_1_0_0_1_0_0_0_0_);
	(nstcall = -1, F225_3041(RTCW(loc3), ((EIF_INTEGER_32) 0L)));
	for (;;) {
		RTHOOK(5);
		tb1 = !loc1;
		if (tb1) break;
		RTHOOK(6);
		(nstcall = 1, F225_3057(RTCW(loc3), loc1));
		RTHOOK(7);
		tr1 = (nstcall = 1, F225_3045(RTCW(loc3)));
		tr1 = (nstcall = 0, F228_3145(Current, tr1));
		loc4 = tr1;
		if (EIF_TEST(loc4)) {
			RTHOOK(8);
			tr1 = eif_boxed_item(loc4,1);
			tr2 = (nstcall = 1, F965_5986(RTCW(tr1)));
			tr1 = eif_boxed_item(loc4,2);
			tr3 = (nstcall = 1, F965_5986(RTCW(tr1)));
			(nstcall = 1, F844_4508(RTCW(Result), tr2, tr3));
		}
		RTHOOK(9);
		loc2++;
		RTHOOK(10);
		loc1 = (nstcall = 0, F228_3144(Current, loc2));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("result_attached", EX_POST);
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

/* {EXECUTION_ENVIRONMENT}.starting_environment */
EIF_REFERENCE F228_3134 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,loc3);
	RTLR(3,loc4);
	RTLR(4,tr1);
	RTLR(5,tr2);
	RTLIU(6);
	
	RTEAA("starting_environment", 227, Current, 4, 0, 3172);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,843,0xFF01,972,0xFF01,972,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		Result = RTLNS(typres0.id, 843, _OBJSIZ_7_3_0_7_0_0_0_0_);
	}
	(nstcall = -1, F844_4461(RTCW(Result), ((EIF_INTEGER_32) 40L)));
	RTHOOK(2);
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(3);
	loc1 = (nstcall = 0, F228_3144(Current, loc2));
	RTHOOK(4);
	loc3 = RTLNS(eif_new_type(224, 0x01).id, 224, _OBJSIZ_1_0_0_1_0_0_0_0_);
	(nstcall = -1, F225_3041(RTCW(loc3), ((EIF_INTEGER_32) 0L)));
	for (;;) {
		RTHOOK(5);
		tb1 = !loc1;
		if (tb1) break;
		RTHOOK(6);
		(nstcall = 1, F225_3057(RTCW(loc3), loc1));
		RTHOOK(7);
		tr1 = (nstcall = 1, F225_3045(RTCW(loc3)));
		tr1 = (nstcall = 0, F228_3145(Current, tr1));
		loc4 = tr1;
		if (EIF_TEST(loc4)) {
			RTHOOK(8);
			tr1 = eif_boxed_item(loc4,1);
			tr2 = eif_boxed_item(loc4,2);
			(nstcall = 1, F844_4508(RTCW(Result), tr1, tr2));
		}
		RTHOOK(9);
		loc2++;
		RTHOOK(10);
		loc1 = (nstcall = 0, F228_3144(Current, loc2));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("result_attached", EX_POST);
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

/* {EXECUTION_ENVIRONMENT}.available_cpu_count */
EIF_NATURAL_32 F228_3135 (EIF_REFERENCE Current)
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
	
	RTEAA("available_cpu_count", 227, Current, 0, 0, 3173);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F228_3135 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {EXECUTION_ENVIRONMENT}.return_code */
EIF_INTEGER_32 F228_3136 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current + O2781[Dtype(Current)-227]);
}


/* {EXECUTION_ENVIRONMENT}.change_working_directory */
void F228_3137 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,arg1);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTEAA("change_working_directory", 227, Current, 1, 1, 3175);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTOUCR(45,(nstcall = 0, F228_3146), (Current));
	tr2 = (nstcall = 1, F226_3078(RTCW(tr1), arg1, NULL));
	loc1 = (EIF_REFERENCE) tr2;
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(RTCW(loc1)+ _PTROFF_0_1_0_1_0_0_);
	ti4_1 = (nstcall = 0, F228_3150(Current, tp1));
	*(EIF_INTEGER_32 *)(Current + O2781[dtype-227]) = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {EXECUTION_ENVIRONMENT}.change_working_path */
void F228_3138 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,Current);
	RTLIU(4);
	
	RTEAA("change_working_path", 227, Current, 1, 1, 3176);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = (nstcall = 1, F855_4648(RTCW(arg1)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(RTCW(loc1)+ _PTROFF_0_1_0_1_0_0_);
	ti4_1 = (nstcall = 0, F228_3150(Current, tp1));
	*(EIF_INTEGER_32 *)(Current + O2781[dtype-227]) = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {EXECUTION_ENVIRONMENT}.put */
void F228_3139 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,arg2);
	RTLR(1,arg1);
	RTLR(2,loc1);
	RTLR(3,loc2);
	RTLR(4,Current);
	RTLR(5,tr1);
	RTLR(6,tr2);
	RTLR(7,loc3);
	RTLIU(8);
	
	RTEAA("put", 227, Current, 3, 2, 3177);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("key_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("key_meaningful", EX_PRE);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4558[Dtype(RTCW(arg2))-968])(arg2));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("not_key_has_null_character", EX_PRE);
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\000';
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_CHARACTER_32)) R4561[Dtype(RTCW(arg2))-968])(arg2, tw1));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(4);
		RTCT("value_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(5);
		RTCT("not_value_has_null_character", EX_PRE);
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\000';
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_CHARACTER_32)) R4561[Dtype(RTCW(arg1))-968])(arg1, tw1));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(6);
	loc1 = RTLNS(eif_new_type(972, 0x01).id, 972, _OBJSIZ_1_1_0_3_0_0_0_0_);
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4580[Dtype(RTCW(arg1))-968])(arg1));
	ti4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4580[Dtype(RTCW(arg2))-968])(arg2));
	(nstcall = -1, F971_6226(RTCW(loc1), (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + ti4_2) + ((EIF_INTEGER_32) 1L))));
	RTHOOK(7);
	(nstcall = 1, F973_6340(RTCW(loc1), arg2));
	RTHOOK(8);
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '=';
	(nstcall = 1, F973_6354(RTCW(loc1), tw1));
	RTHOOK(9);
	(nstcall = 1, F973_6340(RTCW(loc1), arg1));
	RTHOOK(10);
	loc2 = RTLNS(eif_new_type(224, 0x01).id, 224, _OBJSIZ_1_0_0_1_0_0_0_0_);
	(nstcall = -1, F225_3040(RTCW(loc2), loc1));
	RTHOOK(11);
	tr1 = RTOUCR(53,(nstcall = 0, F228_3143), (Current));
	tr2 = RTLNS(eif_new_type(971, 0x01).id, 971, _OBJSIZ_1_0_0_4_0_0_0_0_);
	(nstcall = -1, F972_6279(RTCW(tr2), arg2));
	(nstcall = 1, F844_4508(RTCW(tr1), loc2, tr2));
	RTHOOK(12);
	tp1 = (nstcall = 1, F225_3047(RTCW(loc2)));
	ti4_1 = (nstcall = 0, F228_3149(Current, tp1));
	*(EIF_INTEGER_32 *)(Current + O2781[dtype-227]) = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(13);
		RTCT("variable_set", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O2781[dtype-227]) == ((EIF_INTEGER_32) 0L))) {
			tb2 = '\01';
			tb3 = '\0';
			tb4 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4558[Dtype(RTCW(arg1))-968])(arg1));
			if (tb4) {
				tb3 = (EIF_BOOLEAN)((nstcall = 0, F228_3126(Current, arg2)) == NULL);
			}
			if (!tb3) {
				tb3 = '\0';
				tb4 = '\0';
				tb5 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4558[Dtype(RTCW(arg1))-968])(arg1));
				if ((EIF_BOOLEAN) !tb5) {
					tr1 = (nstcall = 0, F228_3126(Current, arg2));
					loc3 = tr1;
					tb4 = EIF_TEST(loc3);
				}
				if (tb4) {
					tb4 = (nstcall = 1, F965_5975(loc3, arg1));
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
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTLE;
	RTEE;
}

/* {EXECUTION_ENVIRONMENT}.system */
void F228_3140 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("system", 227, Current, 1, 1, 3178);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("s_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4558[Dtype(RTCW(arg1))-968])(arg1));
	if (tb1) {
		RTHOOK(3);
		loc1 = RTLNS(eif_new_type(224, 0x01).id, 224, _OBJSIZ_1_0_0_1_0_0_0_0_);
		tr1 = RTOUCR(46,(nstcall = 0, F228_3124), (Current));
		(nstcall = -1, F225_3040(RTCW(loc1), tr1));
	} else {
		RTHOOK(4);
		loc1 = RTLNS(eif_new_type(224, 0x01).id, 224, _OBJSIZ_1_0_0_1_0_0_0_0_);
		(nstcall = -1, F225_3040(RTCW(loc1), arg1));
	}
	RTHOOK(5);
	tp1 = (nstcall = 1, F225_3047(RTCW(loc1)));
	ti4_1 = (nstcall = 0, F228_3151(Current, tp1));
	*(EIF_INTEGER_32 *)(Current + O2781[dtype-227]) = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {EXECUTION_ENVIRONMENT}.launch */
void F228_3141 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("launch", 227, Current, 1, 1, 3179);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("s_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4558[Dtype(RTCW(arg1))-968])(arg1));
	if (tb1) {
		RTHOOK(3);
		loc1 = RTLNS(eif_new_type(224, 0x01).id, 224, _OBJSIZ_1_0_0_1_0_0_0_0_);
		tr1 = RTOUCR(46,(nstcall = 0, F228_3124), (Current));
		(nstcall = -1, F225_3040(RTCW(loc1), tr1));
	} else {
		RTHOOK(4);
		loc1 = RTLNS(eif_new_type(224, 0x01).id, 224, _OBJSIZ_1_0_0_1_0_0_0_0_);
		(nstcall = -1, F225_3040(RTCW(loc1), arg1));
	}
	RTHOOK(5);
	tp1 = (nstcall = 1, F225_3047(RTCW(loc1)));
	(nstcall = 0, F228_3152(Current, tp1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {EXECUTION_ENVIRONMENT}.sleep */
void F228_3142 (EIF_REFERENCE Current, EIF_INTEGER_64 arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("sleep", 227, Current, 0, 1, 3180);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("non_negative_nanoseconds", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F228_3156(Current, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {EXECUTION_ENVIRONMENT}.environ */
static EIF_REFERENCE F228_3143_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(53)

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("environ", 227, Current, 0, 0, 3181);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,843,0xFF01,224,0xFF01,971,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 843, _OBJSIZ_7_3_0_7_0_0_0_0_);
	}
	(nstcall = -1, F844_4461(RTCW(tr1), ((EIF_INTEGER_32) 10L)));
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

EIF_REFERENCE F228_3143 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(53,F228_3143_body,(Current));
}

/* {EXECUTION_ENVIRONMENT}.i_th_environ */
EIF_POINTER F228_3144 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("i_th_environ", 227, Current, 0, 1, 3182);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("i_valid", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	Result = inline_F228_3144 ((EIF_INTEGER_32) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {EXECUTION_ENVIRONMENT}.separated_variables */
EIF_REFERENCE F228_3145 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc3 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,Result);
	RTLIU(5);
	
	RTEAA("separated_variables", 227, Current, 3, 1, 3183);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_var_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(4);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 > loc2) || loc3)) break;
		RTHOOK(5);
		tw1 = (nstcall = 1, F973_6308(RTCW(arg1), loc1));
		tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '=';
		if ((EIF_BOOLEAN)(tw1 == tw2)) {
			RTHOOK(6);
			loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		} else {
			RTHOOK(7);
			loc1++;
		}
	}
	RTHOOK(8);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 1L)) && (EIF_BOOLEAN) (loc1 < loc2))) {
		RTHOOK(9);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,886,0xFF01,972,0xFF01,972,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			tr1 = RTLNTS(typres0.id, 3, 0);
		}
		tr2 = (nstcall = 1, F973_6388(RTCW(arg1), (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)), loc2));
		((EIF_TYPED_VALUE *)tr1+1)->it_r = tr2;
		RTAR(tr1,tr2);
		tr2 = (nstcall = 1, F973_6388(RTCW(arg1), ((EIF_INTEGER_32) 1L), (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L))));
		((EIF_TYPED_VALUE *)tr1+2)->it_r = tr2;
		RTAR(tr1,tr2);
		Result = (EIF_REFERENCE) tr1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
	return Result;
}

/* {EXECUTION_ENVIRONMENT}.file_info */
static EIF_REFERENCE F228_3146_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(45)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("file_info", 227, Current, 0, 0, 3184);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(225, 0x01).id, 225, _OBJSIZ_3_2_0_0_0_0_0_0_);
	(nstcall = -1, F226_3061(RTCW(tr1)));
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

EIF_REFERENCE F228_3146 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(45,F228_3146_body,(Current));
}

/* {EXECUTION_ENVIRONMENT}.eif_dir_current */
EIF_INTEGER_32 F228_3147 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
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
	
	RTEAA("eif_dir_current", 227, Current, 0, 2, 3185);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) eif_dir_current((EIF_FILENAME) arg1, (EIF_INTEGER) arg2);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {EXECUTION_ENVIRONMENT}.eif_getenv */
EIF_POINTER F228_3148 (EIF_REFERENCE Current, EIF_POINTER arg1)
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
	
	RTEAA("eif_getenv", 227, Current, 0, 1, 3186);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F228_3148 ((EIF_POINTER) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {EXECUTION_ENVIRONMENT}.eif_putenv */
EIF_INTEGER_32 F228_3149 (EIF_REFERENCE Current, EIF_POINTER arg1)
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
	
	RTEAA("eif_putenv", 227, Current, 0, 1, 3187);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F228_3149 ((EIF_POINTER) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {EXECUTION_ENVIRONMENT}.eif_chdir */
EIF_INTEGER_32 F228_3150 (EIF_REFERENCE Current, EIF_POINTER arg1)
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
	
	RTEAA("eif_chdir", 227, Current, 0, 1, 3188);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) eif_chdir((EIF_FILENAME) arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {EXECUTION_ENVIRONMENT}.system_call */
EIF_INTEGER_32 F228_3151 (EIF_REFERENCE Current, EIF_POINTER arg1)
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
	
	RTEAA("system_call", 227, Current, 0, 1, 3189);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	EIF_ENTER_C;Result = (EIF_INTEGER_32) eif_system(arg1);
	
	EIF_EXIT_C;
	RTGC;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {EXECUTION_ENVIRONMENT}.asynchronous_system_call */
void F228_3152 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("asynchronous_system_call", 227, Current, 0, 1, 3190);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	EIF_ENTER_C;eif_system_asynchronous(arg1);
	
	EIF_EXIT_C;
	RTGC;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {EXECUTION_ENVIRONMENT}.eif_home_directory_name_ptr */
EIF_INTEGER_32 F228_3153 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
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
	
	RTEAA("eif_home_directory_name_ptr", 227, Current, 0, 2, 3191);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) eif_home_directory_name_ptr((EIF_FILENAME) arg1, (EIF_INTEGER) arg2);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {EXECUTION_ENVIRONMENT}.eif_user_directory_name_ptr */
EIF_INTEGER_32 F228_3154 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
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
	
	RTEAA("eif_user_directory_name_ptr", 227, Current, 0, 2, 3192);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) eif_user_directory_name_ptr((EIF_FILENAME) arg1, (EIF_INTEGER) arg2);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {EXECUTION_ENVIRONMENT}.eif_temporary_directory_name_ptr */
EIF_INTEGER_32 F228_3155 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
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
	
	RTEAA("eif_temporary_directory_name_ptr", 227, Current, 0, 2, 3193);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) eif_temporary_directory_name_ptr((EIF_FILENAME) arg1, (EIF_INTEGER) arg2);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {EXECUTION_ENVIRONMENT}.eif_sleep */
void F228_3156 (EIF_REFERENCE Current, EIF_INTEGER_64 arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("eif_sleep", 227, Current, 0, 1, 3194);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("non_negative_nanoseconds", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	EIF_ENTER_C;eif_sleep(arg1);
	
	EIF_EXIT_C;
	RTGC;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

void EIF_Minit189 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
