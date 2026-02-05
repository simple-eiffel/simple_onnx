/*
 * Code for class ACTIVE [BOOLEAN]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ac931.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ACTIVE}.replaceable */
EIF_BOOLEAN F531_3412 (EIF_REFERENCE Current)
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
	
	RTEAA("replaceable", 530, Current, 0, 0, 4725);
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

/* {ACTIVE}._invariant */
void F531_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTEAINV(l_feature_name, 930, Current, 0, 0);
	RTIT("writable_constraint", Current);
	tb1 = '\01';
	if ((nstcall = 0, F628_3476(Current))) {
		tb1 = (nstcall = 0, F628_3475(Current));
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("empty_constraint", Current);
	tb1 = '\01';
	if ((nstcall = 0, F580_3452(Current))) {
		tb2 = '\0';
		if ((EIF_BOOLEAN) !(nstcall = 0, F628_3475(Current))) {
			tb2 = (EIF_BOOLEAN) !(nstcall = 0, F628_3476(Current));
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

void EIF_Minit931 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
