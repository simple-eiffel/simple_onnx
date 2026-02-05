/*
 * Code for class LINKED_LIST_CURSOR [INTEGER_32]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "li700.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {LINKED_LIST_CURSOR}.make */
void F172_1840 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_BOOLEAN arg2, EIF_BOOLEAN arg3)
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
	
	RTEAA("make", 171, Current, 0, 3, 1856);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	RTHOOK(2);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_) = (EIF_BOOLEAN) arg2;
	RTHOOK(3);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_1_1_) = (EIF_BOOLEAN) arg3;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {LINKED_LIST_CURSOR}.active */
EIF_REFERENCE F172_1841 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {LINKED_LIST_CURSOR}.after */
EIF_BOOLEAN F172_1842 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_);
}


/* {LINKED_LIST_CURSOR}.before */
EIF_BOOLEAN F172_1843 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_1_1_);
}


/* {LINKED_LIST_CURSOR}._invariant */
void F172_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTEAINV(l_feature_name, 699, Current, 0, 0);
	RTIT("not_both", Current);
	if ((EIF_BOOLEAN) !(EIF_BOOLEAN) (*(EIF_BOOLEAN *)(Current+ _CHROFF_1_1_) && *(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("no_active_not_on", Current);
	if ((!((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) == NULL)) || ((EIF_BOOLEAN) (*(EIF_BOOLEAN *)(Current+ _CHROFF_1_1_) || *(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_))))) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit700 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
