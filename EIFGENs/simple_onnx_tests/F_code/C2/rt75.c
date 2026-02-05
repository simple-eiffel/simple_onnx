/*
 * Code for class RT_EXTENSION_COMMON
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "rt75.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {RT_EXTENSION_COMMON}.dtrace_indent */
void F96_1254 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_CHARACTER_32 tw1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("dtrace_indent", 95, Current, 0, 1, 1287);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTOUCR(0,(nstcall = 0, F1_24), (Current));
	tr2 = RTOUCR(87,(nstcall = 1, F44_450), (RTCW(tr1)));
	tr1 = RTLNS(eif_new_type(972, 0x01).id, 972, _OBJSIZ_1_1_0_3_0_0_0_0_);
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) ' ';
	(nstcall = -1, F971_6227(RTCW(tr1), tw1, (EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * arg1)));
	(nstcall = 1, F646_3787(RTCW(tr2), tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {RT_EXTENSION_COMMON}.dtrace */
void F96_1255 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("dtrace", 95, Current, 0, 1, 1288);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("m_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTOUCR(0,(nstcall = 0, F1_24), (Current));
	tr2 = RTOUCR(87,(nstcall = 1, F44_450), (RTCW(tr1)));
	(nstcall = 1, F646_3787(RTCW(tr2), arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

void EIF_Minit75 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
