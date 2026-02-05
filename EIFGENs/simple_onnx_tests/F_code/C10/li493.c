/*
 * Code for class LIST [NATURAL_64]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "li493.h"

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
EIF_BOOLEAN F726_4002 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_64 tu8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,tr2);
	RTLR(5,loc2);
	RTLIU(6);
	
	RTEAA("is_equal", 725, Current, 2, 1, 6826);
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
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
		RTE_OT
		ti4_3 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_0_);
		ti4_2 = ti4_3;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
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
		tb2 = (nstcall = 1, F570_3452(RTCW(arg1)));
		if ((EIF_BOOLEAN)((nstcall = 0, F570_3452(Current)) == tb2)) {
			tb2 = *(EIF_BOOLEAN *)(RTCW(arg1) + O2927[Dtype(arg1)-389]);
			tb1 = (EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current + O2927[dtype-389]) == tb2);
		}
		if (tb1) {
			ti4_3 = (nstcall = 1, F827_4365(RTCW(arg1)));
			Result = (EIF_BOOLEAN)((nstcall = 0, F827_4365(Current)) == ti4_3);
		}
		RTHOOK(5);
		tb1 = '\0';
		if (Result) {
			tb1 = (EIF_BOOLEAN) !(nstcall = 0, F570_3452(Current));
		}
		if (tb1) {
			RTHOOK(6);
			tb1 = '\0';
			tr2 = (nstcall = 0, F827_4355(Current));
			loc1 = tr2;
			if (EIF_TEST(loc1)) {
				tr2 = (nstcall = 1, F827_4355(RTCW(arg1)));
				loc2 = tr2;
				tb1 = EIF_TEST(loc2);
			}
			if (tb1) {
				RTHOOK(7);
				(nstcall = 0, F827_4375(Current));
				RTHOOK(8);
				(nstcall = 1, F827_4375(RTCW(arg1)));
				for (;;) {
					RTHOOK(9);
					tb1 = '\01';
					if (!(nstcall = 0, F726_4003(Current))) {
						tb1 = (EIF_BOOLEAN) !Result;
					}
					if (tb1) break;
					RTHOOK(10);
					if (*(EIF_BOOLEAN *)(Current + O2927[dtype-389])) {
						RTHOOK(11);
						tu8_1 = (nstcall = 0, F827_4349(Current));
						tu8_2 = (nstcall = 1, F827_4349(RTCW(arg1)));
						Result = (EIF_BOOLEAN) (tu8_1 == tu8_2);
					} else {
						RTHOOK(12);
						tu8_1 = (nstcall = 0, F827_4349(Current));
						tu8_2 = (nstcall = 1, F827_4349(RTCW(arg1)));
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu8_1 == tu8_2);
					}
					RTHOOK(13);
					(nstcall = 0, F827_4377(Current));
					RTHOOK(14);
					(nstcall = 1, F827_4377(RTCW(arg1)));
				}
				RTHOOK(15);
				(nstcall = 0, F827_4380(Current, loc1));
				RTHOOK(16);
				(nstcall = 1, F827_4380(RTCW(arg1), loc2));
			} else {
				
			}
		} else {
			RTHOOK(17);
			tb2 = '\0';
			tb3 = '\0';
			if ((nstcall = 0, F570_3452(Current))) {
				tb4 = (nstcall = 1, F570_3452(RTCW(arg1)));
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
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) == ti4_1)) {
			ti4_3 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_0_);
			RTCO(tr1);
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
			ti4_3 = (nstcall = 1, F827_4365(RTCW(arg1)));
			tb2 = (EIF_BOOLEAN)((nstcall = 0, F827_4365(Current)) == ti4_3);
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
EIF_BOOLEAN F726_4003 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("after", 725, Current, 0, 0, 6827);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
	ti4_2 = (nstcall = 0, F827_4365(Current));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == (EIF_INTEGER_32) (ti4_2 + ((EIF_INTEGER_32) 1L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {LIST}.before */
EIF_BOOLEAN F726_4004 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("before", 725, Current, 0, 0, 6828);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {LIST}._invariant */
void F726_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTEAINV(l_feature_name, 492, Current, 0, 0);
	RTIT("before_definition", Current);
	if ((EIF_BOOLEAN)((nstcall = 0, F726_4004(Current)) == (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) == ((EIF_INTEGER_32) 0L)))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("after_definition", Current);
	if ((EIF_BOOLEAN)((nstcall = 0, F726_4003(Current)) == (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) == (EIF_INTEGER_32) ((nstcall = 0, F827_4365(Current)) + ((EIF_INTEGER_32) 1L))))) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit493 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
