/*
 * Code for class LIST [INTEGER_32]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "li412.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {LIST}.is_equal */
EIF_BOOLEAN F725_4002 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc1);
	RTLR(5,tr3);
	RTLR(6,loc2);
	RTLIU(7);
	
	RTEAA("is_equal", 724, Current, 2, 1, 6822);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_1 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2942[dtype-564])(Current));
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		RTE_OT
		ti4_3 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2942[Dtype(RTCW(arg1))-564])(arg1));
		ti4_2 = ti4_3;
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(2);
	if ((EIF_BOOLEAN)(Current == arg1)) {
		RTHOOK(3);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		RTHOOK(4);
		Result = '\0';
		tb1 = '\0';
		tb2 = (nstcall = 1, F568_3452(RTCW(arg1)));
		if ((EIF_BOOLEAN)((nstcall = 0, F568_3452(Current)) == tb2)) {
			tb2 = *(EIF_BOOLEAN *)(RTCW(arg1) + O2927[Dtype(arg1)-389]);
			tb1 = (EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current + O2927[dtype-389]) == tb2);
		}
		if (tb1) {
			ti4_3 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2989[Dtype(RTCW(arg1))-644])(arg1));
			Result = (EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2989[dtype-644])(Current)) == ti4_3);
		}
		RTHOOK(5);
		tb1 = '\0';
		if (Result) {
			tb1 = (EIF_BOOLEAN) !(nstcall = 0, F568_3452(Current));
		}
		if (tb1) {
			RTHOOK(6);
			tb1 = '\0';
			tr3 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2975[dtype-753])(Current));
			loc1 = tr3;
			if (EIF_TEST(loc1)) {
				tr3 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2975[Dtype(RTCW(arg1))-753])(arg1));
				loc2 = tr3;
				tb1 = EIF_TEST(loc2);
			}
			if (tb1) {
				RTHOOK(7);
				(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2935[dtype-564])(Current));
				RTHOOK(8);
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2935[Dtype(RTCW(arg1))-564])(arg1));
				for (;;) {
					RTHOOK(9);
					tb1 = '\01';
					if (!(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2946[dtype-564])(Current))) {
						tb1 = (EIF_BOOLEAN) !Result;
					}
					if (tb1) break;
					RTHOOK(10);
					if (*(EIF_BOOLEAN *)(Current + O2927[dtype-389])) {
						RTHOOK(11);
						ti4_3 = (nstcall = 0, eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2969[dtype-564])(Current));
						ti4_4 = (nstcall = 1, eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2969[Dtype(RTCW(arg1))-564])(arg1));
						Result = (EIF_BOOLEAN) (ti4_3 == ti4_4);
					} else {
						RTHOOK(12);
						ti4_3 = (nstcall = 0, eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2969[dtype-564])(Current));
						ti4_4 = (nstcall = 1, eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2969[Dtype(RTCW(arg1))-564])(arg1));
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_3 == ti4_4);
					}
					RTHOOK(13);
					(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2948[dtype-564])(Current));
					RTHOOK(14);
					(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2948[Dtype(RTCW(arg1))-564])(arg1));
				}
				RTHOOK(15);
				(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2977[dtype-753])(Current, loc1));
				RTHOOK(16);
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2977[Dtype(RTCW(arg1))-753])(arg1, loc2));
			} else {
				
			}
		} else {
			RTHOOK(17);
			tb2 = '\0';
			tb3 = '\0';
			if ((nstcall = 0, F568_3452(Current))) {
				tb4 = (nstcall = 1, F568_3452(RTCW(arg1)));
				tb3 = tb4;
			}
			if (tb3) {
				tb3 = *(EIF_BOOLEAN *)(RTCW(arg1) + O2927[Dtype(arg1)-389]);
				tb2 = (EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current + O2927[dtype-389]) == tb3);
			}
			if (tb2) {
				RTHOOK(18);
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(19);
		RTCT("symmetric", EX_POST);
		if ((!(Result) || (RTEQ(arg1, Current)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(20);
		RTCT("consistent", EX_POST);
		tb2 = '\01';
		if ((nstcall = 0, F1_9(Current, arg1))) {
			tb2 = Result;
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(21);
		RTCT("indices_unchanged", EX_POST);
		tb2 = '\0';
		RTCO(tr1);
		if ((EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2942[dtype-564])(Current)) == ti4_1)) {
			ti4_3 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2942[Dtype(RTCW(arg1))-564])(arg1));
			RTCO(tr2);
			tb2 = (EIF_BOOLEAN)(ti4_3 == ti4_2);
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(22);
		RTCT("true_implies_same_size", EX_POST);
		tb2 = '\01';
		if (Result) {
			ti4_3 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2989[Dtype(RTCW(arg1))-644])(arg1));
			tb2 = (EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2989[dtype-644])(Current)) == ti4_3);
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(23);
	RTLE;
	RTEE;
	return Result;
}

/* {LIST}.after */
EIF_BOOLEAN F725_4003 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("after", 724, Current, 0, 0, 6823);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2942[dtype-564])(Current));
	ti4_2 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2989[dtype-644])(Current));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == (EIF_INTEGER_32) (ti4_2 + ((EIF_INTEGER_32) 1L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {LIST}.before */
EIF_BOOLEAN F725_4004 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("before", 724, Current, 0, 0, 6824);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2942[dtype-564])(Current));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {LIST}._invariant */
void F725_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTEAINV(l_feature_name, 411, Current, 0, 0);
	RTIT("before_definition", Current);
	if ((EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2949[dtype-644])(Current)) == (EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2942[dtype-564])(Current)) == ((EIF_INTEGER_32) 0L)))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("after_definition", Current);
	if ((EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2946[dtype-564])(Current)) == (EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2942[dtype-564])(Current)) == (EIF_INTEGER_32) ((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2989[dtype-644])(Current)) + ((EIF_INTEGER_32) 1L))))) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit412 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
