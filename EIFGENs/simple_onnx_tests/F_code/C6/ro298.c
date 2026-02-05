/*
 * Code for class ROUTINE [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ro298.h"
#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ROUTINE}.adapt */
void F960_5877 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("adapt", 959, Current, 0, 1, 12827);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("conforming", EX_PRE);
		RTTE((nstcall = 0, F1_6(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(RTCW(arg1) + O4515[Dtype(arg1)-959]);
	*(EIF_POINTER *)(Current + O4515[dtype-959]) = (EIF_POINTER) tp1;
	RTHOOK(4);
	tp1 = *(EIF_POINTER *)(RTCW(arg1) + O4518[Dtype(arg1)-959]);
	*(EIF_POINTER *)(Current + O4518[dtype-959]) = (EIF_POINTER) tp1;
	RTHOOK(5);
	tp1 = *(EIF_POINTER *)(RTCW(arg1) + O4516[Dtype(arg1)-959]);
	*(EIF_POINTER *)(Current + O4516[dtype-959]) = (EIF_POINTER) tp1;
	RTHOOK(6);
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	RTHOOK(7);
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTHOOK(8);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O4519[Dtype(arg1)-959]);
	*(EIF_INTEGER_32 *)(Current + O4519[dtype-959]) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(9);
	tb1 = *(EIF_BOOLEAN *)(RTCW(arg1) + O4520[Dtype(arg1)-959]);
	*(EIF_BOOLEAN *)(Current + O4520[dtype-959]) = (EIF_BOOLEAN) tb1;
	RTHOOK(10);
	tb1 = *(EIF_BOOLEAN *)(RTCW(arg1) + O4506[Dtype(arg1)-959]);
	*(EIF_BOOLEAN *)(Current + O4506[dtype-959]) = (EIF_BOOLEAN) tb1;
	RTHOOK(11);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O4521[Dtype(arg1)-959]);
	*(EIF_INTEGER_32 *)(Current + O4521[dtype-959]) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(12);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O4507[Dtype(arg1)-959]);
	*(EIF_INTEGER_32 *)(Current + O4507[dtype-959]) = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTLE;
	RTEE;
}

/* {ROUTINE}.operands */
EIF_REFERENCE F960_5878 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {ROUTINE}.target */
EIF_REFERENCE F960_5879 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,loc2);
	RTLR(3,tr1);
	RTLR(4,Result);
	RTLR(5,loc3);
	RTLR(6,loc4);
	RTLIU(7);
	
	RTEAA("target", 959, Current, 4, 0, 12829);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if (*(EIF_BOOLEAN *)(Current + O4506[dtype-959])) {
		RTHOOK(2);
		loc1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		RTHOOK(3);
		tb1 = '\0';
		tb2 = '\0';
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			ti4_1 = (nstcall = 1, F887_4726(loc1));
			tb2 = (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L));
		}
		if (tb2) {
			tr1 = (nstcall = 1, F887_4697(RTCW(loc1), ((EIF_INTEGER_32) 1L)));
			loc2 = RTCCL(tr1);
			loc2 = RTRV(eif_new_type(0, 0x01),loc2);
			if ((loc2) && RTS_OS (Current, loc2)) loc2 = (EIF_REFERENCE) 0;
			tb1 = EIF_TEST(loc2);
		}
		if (tb1) {
			RTHOOK(4);
			Result = (EIF_REFERENCE) RTCCL(loc2);
		}
	} else {
		RTHOOK(5);
		tb1 = '\0';
		tb2 = '\0';
		tr1 = *(EIF_REFERENCE *)(Current);
		loc3 = tr1;
		if (EIF_TEST(loc3)) {
			ti4_1 = (nstcall = 1, F887_4726(loc3));
			tb2 = (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L));
		}
		if (tb2) {
			tr1 = (nstcall = 1, F887_4697(loc3, ((EIF_INTEGER_32) 1L)));
			loc4 = RTCCL(tr1);
			loc4 = RTRV(eif_new_type(0, 0x01),loc4);
			if ((loc4) && RTS_OS (Current, loc4)) loc4 = (EIF_REFERENCE) 0;
			tb1 = EIF_TEST(loc4);
		}
		if (tb1) {
			RTHOOK(6);
			Result = (EIF_REFERENCE) RTCCL(loc4);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {ROUTINE}.hash_code */
EIF_INTEGER_32 F960_5880 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("hash_code", 959, Current, 0, 0, 12830);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tp1 = *(EIF_POINTER *)(Current + O4515[dtype-959]);
	ti4_1 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (tp1)));
	ti4_2 = *(EIF_INTEGER_32 *)(Current + O4519[dtype-959]);
	ti4_3 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (ti4_2)));
	ti4_2 = eif_bit_xor(ti4_1,ti4_3);
	Result = (EIF_INTEGER_32) ti4_2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("good_hash_value", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
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
	return Result;
}

/* {ROUTINE}.precondition */
EIF_BOOLEAN F960_5881 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("precondition", 959, Current, 0, 1, 12831);
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

/* {ROUTINE}.postcondition */
EIF_BOOLEAN F960_5882 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("postcondition", 959, Current, 0, 1, 12832);
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

/* {ROUTINE}.empty_operands */
EIF_REFERENCE F960_5883 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Result);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("empty_operands", 959, Current, 0, 0, 12833);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNSMART(eif_gen_param(Dftype(Current), 1).id);
	(nstcall = -1, F1_29(RTCW(Result)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("empty_operands_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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
	return Result;
}

/* {ROUTINE}.is_equal */
EIF_BOOLEAN F960_5885 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	EIF_BOOLEAN tb6;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("is_equal", 959, Current, 0, 1, 12835);
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
	RTHOOK(2);
	Result = '\0';
	tb1 = '\0';
	tb2 = '\0';
	tb3 = '\0';
	tb4 = '\0';
	tb5 = '\0';
	tb6 = '\0';
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr2 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_);
	if (RTEQ(tr1, tr2)) {
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = *(EIF_REFERENCE *)(RTCW(arg1));
		tb6 = RTEQ(tr1, tr2);
	}
	if (tb6) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		tr2 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_2_);
		tb5 = RTEQ(tr1, tr2);
	}
	if (tb5) {
		tp1 = *(EIF_POINTER *)(RTCW(arg1) + O4515[Dtype(arg1)-959]);
		tb4 = (EIF_BOOLEAN)(*(EIF_POINTER *)(Current + O4515[dtype-959]) == tp1);
	}
	if (tb4) {
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O4519[Dtype(arg1)-959]);
		tb3 = (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O4519[dtype-959]) == ti4_1);
	}
	if (tb3) {
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O4521[Dtype(arg1)-959]);
		tb2 = (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O4521[dtype-959]) == ti4_1);
	}
	if (tb2) {
		tp1 = *(EIF_POINTER *)(RTCW(arg1) + O4518[Dtype(arg1)-959]);
		tb1 = (EIF_BOOLEAN)(*(EIF_POINTER *)(Current + O4518[dtype-959]) == tp1);
	}
	if (tb1) {
		tp1 = *(EIF_POINTER *)(RTCW(arg1) + O4516[Dtype(arg1)-959]);
		Result = (EIF_BOOLEAN)(*(EIF_POINTER *)(Current + O4516[dtype-959]) == tp1);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("symmetric", EX_POST);
		if ((!(Result) || (RTEQ(arg1, Current)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("consistent", EX_POST);
		tb1 = '\01';
		if ((nstcall = 0, F1_9(Current, arg1))) {
			tb1 = Result;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {ROUTINE}.valid_operands */
EIF_BOOLEAN F960_5886 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN uarg1;
	EIF_BOOLEAN uarg;
	RTS_SD;
	RTS_SDC;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,loc3);
	RTLIU(4);
	
	RTEAA("valid_operands", 959, Current, 4, 1, 12836);
	RTSA(dtype);
	RTSC;
	RTGC;
	uarg1 = (EIF_BOOLEAN) RTS_OU (arg1);
	uarg = uarg1;
	if (uarg) {
		RTS_RC;
		RTS_RS (arg1);
		RTS_RW;
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN)(arg1 == NULL)) {
		RTHOOK(2);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + O4507[dtype-959]);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L));
	} else {
		RTHOOK(3);
		if (RTS_CI (EIF_TRUE, arg1)) {
			RTS_BI (arg1);
			ti4_1 = (nstcall = 1, F887_4726(arg1));
			RTS_EI;
		} else {
			RTS_AC (0, arg1);
			RTS_CALL (F887_4726, eif_scr1, 0, &(ti4_1));
		}
		if ((EIF_BOOLEAN) (ti4_1 >= *(EIF_INTEGER_32 *)(Current + O4507[dtype-959]))) {
			RTHOOK(4);
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			RTHOOK(5);
			loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			for (;;) {
				RTHOOK(6);
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 > *(EIF_INTEGER_32 *)(Current + O4507[dtype-959])) || (EIF_BOOLEAN) !Result)) break;
				RTHOOK(7);
				if (RTS_CI (EIF_TRUE, arg1)) {
					RTS_BI (arg1);
					tu1_1 = (nstcall = 1, F887_4806(arg1, loc1));
					RTS_EI;
				} else {
					RTS_AC (1, arg1);
					RTS_AA (loc1, it_i4, SK_INT32, 1);
					RTS_CALL (F887_4806, eif_scr2, 0, &(tu1_1));
				}
				ti4_1 = (EIF_INTEGER_32) tu1_1;
				loc2 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(8);
				loc4 = (nstcall = 0, F960_5910(Current, loc1));
				RTHOOK(9);
				switch (loc2) {
					case 1L:
						RTHOOK(10);
						tr1 = RTLNTY2(eif_new_type(922, 0x00), 0x00);
						ti4_1 = (nstcall = 1, F873_4670(tr1));
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc4 == ti4_1);
						break;
					case 2L:
						RTHOOK(11);
						tr1 = RTLNTY2(eif_new_type(919, 0x00), 0x00);
						ti4_1 = (nstcall = 1, F871_4670(tr1));
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc4 == ti4_1);
						break;
					case 14L:
						RTHOOK(12);
						tr1 = RTLNTY2(eif_new_type(916, 0x00), 0x00);
						ti4_1 = (nstcall = 1, F872_4670(tr1));
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc4 == ti4_1);
						break;
					case 6L:
						RTHOOK(13);
						tr1 = RTLNTY2(eif_new_type(898, 0x00), 0x00);
						ti4_1 = (nstcall = 1, F867_4670(tr1));
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc4 == ti4_1);
						break;
					case 7L:
						RTHOOK(14);
						tr1 = RTLNTY2(eif_new_type(895, 0x00), 0x00);
						ti4_1 = (nstcall = 1, F868_4670(tr1));
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc4 == ti4_1);
						break;
					case 8L:
						RTHOOK(15);
						tr1 = RTLNTY2(eif_new_type(892, 0x00), 0x00);
						ti4_1 = (nstcall = 1, F869_4670(tr1));
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc4 == ti4_1);
						break;
					case 9L:
						RTHOOK(16);
						tr1 = RTLNTY2(eif_new_type(889, 0x00), 0x00);
						ti4_1 = (nstcall = 1, F870_4670(tr1));
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc4 == ti4_1);
						break;
					case 10L:
						RTHOOK(17);
						tr1 = RTLNTY2(eif_new_type(907, 0x00), 0x00);
						ti4_1 = (nstcall = 1, F863_4670(tr1));
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc4 == ti4_1);
						break;
					case 11L:
						RTHOOK(18);
						tr1 = RTLNTY2(eif_new_type(925, 0x00), 0x00);
						ti4_1 = (nstcall = 1, F864_4670(tr1));
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc4 == ti4_1);
						break;
					case 12L:
						RTHOOK(19);
						tr1 = RTLNTY2(eif_new_type(904, 0x00), 0x00);
						ti4_1 = (nstcall = 1, F865_4670(tr1));
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc4 == ti4_1);
						break;
					case 13L:
						RTHOOK(20);
						tr1 = RTLNTY2(eif_new_type(901, 0x00), 0x00);
						ti4_1 = (nstcall = 1, F866_4670(tr1));
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc4 == ti4_1);
						break;
					case 5L:
						RTHOOK(21);
						tr1 = RTLNTY2(eif_new_type(958, 0x00), 0x00);
						ti4_1 = (nstcall = 1, F858_4670(tr1));
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc4 == ti4_1);
						break;
					case 4L:
						RTHOOK(22);
						tr1 = RTLNTY2(eif_new_type(910, 0x00), 0x00);
						ti4_1 = (nstcall = 1, F862_4670(tr1));
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc4 == ti4_1);
						break;
					case 3L:
						RTHOOK(23);
						tr1 = RTLNTY2(eif_new_type(913, 0x00), 0x00);
						ti4_1 = (nstcall = 1, F861_4670(tr1));
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc4 == ti4_1);
						break;
					case 0L:
						RTHOOK(24);
						if (RTS_CI (EIF_TRUE, arg1)) {
							RTS_BI (arg1);
							tr1 = (nstcall = 1, F887_4697(RTCW(arg1), loc1));
							RTS_EI;
						} else {
							RTS_AC (1, arg1);
							RTS_AA (loc1, it_i4, SK_INT32, 1);
							RTS_CALL (F887_4697, eif_scr3, 0, &(tr1));
						}
						loc3 = (EIF_REFERENCE) RTCCL(tr1);
						RTHOOK(25);
						if ((nstcall = 0, F192_2332(Current, loc4))) {
							RTHOOK(26);
							Result = '\0';
							if ((EIF_BOOLEAN)(loc3 != NULL)) {
								tr1 = RTCCL(loc3);
								ti4_1 = (nstcall = 0, F45_537(Current, tr1));
								Result = (nstcall = 0, F192_2322(Current, ti4_1, loc4));
							}
						} else {
							RTHOOK(27);
							Result = '\01';
							if (!(EIF_BOOLEAN)(loc3 == NULL)) {
								tr1 = RTCCL(loc3);
								ti4_1 = (nstcall = 0, F45_537(Current, tr1));
								Result = (nstcall = 0, F192_2322(Current, ti4_1, loc4));
							}
						}
						break;
					default:
						RTHOOK(28);
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
						break;
				}
				RTHOOK(29);
				loc1++;
			}
		}
	}
	RTHOOK(30);
	if ((EIF_BOOLEAN) (Result && (EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current + O4506[dtype-959]))) {
		RTHOOK(31);
		Result = '\0';
		tb1 = '\0';
		if ((EIF_BOOLEAN)(arg1 != NULL)) {
			if (RTS_CI (EIF_TRUE, arg1)) {
				RTS_BI (arg1);
				tb2 = (nstcall = 1, F887_4729(RTCW(arg1)));
				RTS_EI;
			} else {
				RTS_AC (0, arg1);
				RTS_CALL (F887_4729, eif_scr4, 0, &(tb2));
			}
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) {
			if (RTS_CI (EIF_TRUE, arg1)) {
				RTS_BI (arg1);
				tr1 = (nstcall = 1, F887_4697(RTCW(arg1), ((EIF_INTEGER_32) 1L)));
				RTS_EI;
			} else {
				RTS_AC (1, arg1);
				RTS_AA (((EIF_INTEGER_32) 1L), it_i4, SK_INT32, 1);
				RTS_CALL (F887_4697, eif_scr3, 0, &(tr1));
			}
			Result = (EIF_BOOLEAN)(tr1 != NULL);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(32);
	if (uarg) {
		RTS_RD;
	}
	RTLE;
	RTEE;
	return Result;
}

/* {ROUTINE}.valid_target */
EIF_BOOLEAN F960_5887 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("valid_target", 959, Current, 0, 1, 12837);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = '\0';
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		ti4_1 = (nstcall = 1, F887_4726(arg1));
		tb1 = (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L));
	}
	if (tb1) {
		RTHOOK(2);
		tb1 = (nstcall = 1, F887_4770(RTCW(arg1), ((EIF_INTEGER_32) 1L)));
		if (tb1) {
			RTHOOK(3);
			tr1 = (nstcall = 1, F887_4699(arg1, ((EIF_INTEGER_32) 1L)));
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tr1 != NULL);
		} else {
			RTHOOK(4);
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {ROUTINE}.is_target_closed */
EIF_BOOLEAN F960_5888 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current + O4506[Dtype(Current)-959]);
}


/* {ROUTINE}.open_count */
EIF_INTEGER_32 F960_5889 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current + O4507[Dtype(Current)-959]);
}


/* {ROUTINE}.set_operands */
void F960_5890 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("set_operands", 959, Current, 0, 1, 12840);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_operands", EX_PRE);
		RTTE((nstcall = 0, F960_5886(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("operands_set", EX_POST);
		tb1 = '\01';
		if (!(!((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) != NULL)) || (RTEQ(*(EIF_REFERENCE *)(Current), arg1)))) {
			tb2 = '\01';
			if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) == NULL)) {
				tb3 = '\01';
				if (!(EIF_BOOLEAN)(arg1 == NULL)) {
					tb4 = (nstcall = 1, F887_4729(RTCW(arg1)));
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
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {ROUTINE}.set_target */
void F960_5891 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLR(3,tr1);
	RTLR(4,loc1);
	RTLIU(5);
	
	RTEAA("set_target", 959, Current, 2, 1, 12841);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_target_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_target_closed", EX_PRE);
		RTTE(*(EIF_BOOLEAN *)(Current + O4506[dtype-959]), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("target_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F960_5879(Current)) != NULL), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("same_target_type", EX_PRE);
		tb1 = '\0';
		tr1 = (nstcall = 0, F960_5879(Current));
		loc2 = RTCCL(tr1);
		if (EIF_TEST(loc2)) {
			tr1 = RTCCL(arg1);
			tb2 = (nstcall = 1, F1_7(loc2, tr1));
			tb1 = tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	RTHOOK(6);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTHOOK(7);
		tr1 = RTCCL(arg1);
		(nstcall = 1, F887_4730(RTCW(loc1), tr1, ((EIF_INTEGER_32) 1L)));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("target_set", EX_POST);
		if (RTCEQ((nstcall = 0, F960_5879(Current)), arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
}

/* {ROUTINE}.copy */
void F960_5892 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("copy", 959, Current, 1, 1, 12842);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("type_identity", EX_PRE);
		RTTE((nstcall = 0, F1_7(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	if ((EIF_BOOLEAN)(arg1 != Current)) {
		RTHOOK(4);
		(nstcall = 0, F1_16(Current, arg1));
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current);
		loc1 = tr1;
		if (EIF_TEST(loc1)) {
			RTHOOK(6);
			tr1 = (nstcall = 1, F1_14(loc1));
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("is_equal", EX_POST);
		if (RTEQ(Current, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("same_call_status", EX_POST);
		tb1 = '\01';
		tb2 = EIF_TRUE;
		if (tb2) {
			tb1 = EIF_TRUE;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
}

/* {ROUTINE}.flexible_call */
void F960_5895 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN uarg1;
	EIF_BOOLEAN uarg;
	RTS_SD;
	RTS_SDC;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,loc1);
	RTLR(3,loc3);
	RTLR(4,loc4);
	RTLR(5,tr1);
	RTLR(6,tr2);
	RTLIU(7);
	
	RTEAA("flexible_call", 959, Current, 4, 1, 12806);
	RTSA(dtype);
	RTSC;
	RTGC;
	uarg1 = (EIF_BOOLEAN) RTS_OU (arg1);
	uarg = uarg1;
	if (uarg) {
		RTS_RC;
		RTS_RS (arg1);
		RTS_RW;
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_operands", EX_PRE);
		RTTE((nstcall = 0, F960_5886(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if ((EIF_BOOLEAN) !(EIF_BOOLEAN)(arg1 != NULL)) {
		RTHOOK(3);
		(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4510[dtype-960])(Current, loc1));
	} else {
		RTHOOK(4);
		loc3 = arg1;
		loc3 = RTRV(eif_gen_param(dftype, 1),loc3);
		if ((loc3) && RTS_OS (Current, loc3)) loc3 = (EIF_REFERENCE) 0;
		if (EIF_TEST(loc3)) {
			RTHOOK(5);
			(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4510[dtype-960])(Current, loc3));
		} else {
			RTHOOK(6);
			RTCT0("from_precondition", EX_CHECK);
			tr1 = RTLNTY2(eif_gen_param(dftype, 1), 0x00);
			ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3736[Dtype(tr1)-855])(tr1));
			tr1 = (nstcall = 0, F45_542(Current, ti4_1));
			loc4 = tr1;
			loc4 = RTRV(eif_gen_param(dftype, 1),loc4);
			if (EIF_TEST(loc4)) {
				RTCK0;
			} else {
				RTCF0;
			}
			RTHOOK(7);
			if (RTS_CI (EIF_TRUE, arg1)) {
				RTS_BI (arg1);
				tb1 = (nstcall = 1, F887_4719(arg1));
				RTS_EI;
			} else {
				RTS_AC (0, arg1);
				RTS_CALL (F887_4719, eif_scr4, 0, &(tb1));
			}
			if (tb1) {
				RTHOOK(8);
				(nstcall = 1, F887_4721(loc4));
			}
			RTHOOK(9);
			ti4_1 = (nstcall = 1, F887_4726(loc4));
			loc2 = (EIF_INTEGER_32) ti4_1;
			for (;;) {
				RTHOOK(10);
				if ((EIF_BOOLEAN) (loc2 <= ((EIF_INTEGER_32) 0L))) break;
				RTHOOK(11);
				if (RTS_CI (EIF_TRUE, arg1)) {
					RTS_BI (arg1);
					tr1 = (nstcall = 1, F887_4697(RTCW(arg1), loc2));
					RTS_EI;
				} else {
					RTS_AC (1, arg1);
					RTS_AA (loc2, it_i4, SK_INT32, 1);
					RTS_CALL (F887_4697, eif_scr3, 0, &(tr1));
				}
				tr2 = RTCCL(tr1);
				(nstcall = 1, F887_4730(loc4, tr2, loc2));
				RTHOOK(12);
				loc2--;
			}
			RTHOOK(13);
			(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4510[dtype-960])(Current, loc4));
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(14);
	if (uarg) {
		RTS_RD;
	}
	RTLE;
	RTEE;
}

/* {ROUTINE}.correct_mismatch */
void F960_5896 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("correct_mismatch", 959, Current, 0, 0, 12807);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {ROUTINE}.closed_operands */
EIF_REFERENCE F960_5897 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {ROUTINE}.closed_count */
EIF_INTEGER_32 F960_5898 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("closed_count", 959, Current, 1, 0, 12809);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	RTHOOK(2);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTHOOK(3);
		ti4_1 = (nstcall = 1, F887_4726(loc1));
		Result = (EIF_INTEGER_32) ti4_1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {ROUTINE}.rout_disp */
EIF_POINTER F960_5899 (EIF_REFERENCE Current)
{
	return *(EIF_POINTER *)(Current + O4515[Dtype(Current)-959]);
}


/* {ROUTINE}.calc_rout_addr */
EIF_POINTER F960_5900 (EIF_REFERENCE Current)
{
	return *(EIF_POINTER *)(Current + O4516[Dtype(Current)-959]);
}


/* {ROUTINE}.open_map */
EIF_REFERENCE F960_5901 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {ROUTINE}.encaps_rout_disp */
EIF_POINTER F960_5902 (EIF_REFERENCE Current)
{
	return *(EIF_POINTER *)(Current + O4518[Dtype(Current)-959]);
}


/* {ROUTINE}.routine_id */
EIF_INTEGER_32 F960_5903 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current + O4519[Dtype(Current)-959]);
}


/* {ROUTINE}.is_basic */
EIF_BOOLEAN F960_5904 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current + O4520[Dtype(Current)-959]);
}


/* {ROUTINE}.written_type_id_inline_agent */
EIF_INTEGER_32 F960_5905 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current + O4521[Dtype(Current)-959]);
}


/* {ROUTINE}.set_rout_disp */
void F960_5906 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_INTEGER_32 arg4, EIF_REFERENCE arg5, EIF_BOOLEAN arg6, EIF_BOOLEAN arg7, EIF_INTEGER_32 arg8, EIF_REFERENCE arg9, EIF_INTEGER_32 arg10)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg9);
	RTLR(1,Current);
	RTLR(2,arg5);
	RTLIU(3);
	
	RTEAA("set_rout_disp", 959, Current, 0, 10, 12817);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_routine_id_valid", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg4 > ((EIF_INTEGER_32) -1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("target_valid", EX_PRE);
		tb1 = '\01';
		if (arg7) {
			tb1 = (nstcall = 0, F960_5887(Current, arg9));
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	(nstcall = 0, F960_5908(Current, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {ROUTINE}.set_rout_disp_final */
void F960_5907 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_REFERENCE arg4, EIF_BOOLEAN arg5, EIF_INTEGER_32 arg6)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg4);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("set_rout_disp_final", 959, Current, 0, 6, 12818);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("target_valid", EX_PRE);
		tb1 = '\01';
		if (arg5) {
			tb1 = (nstcall = 0, F960_5887(Current, arg4));
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	*(EIF_POINTER *)(Current + O4515[dtype-959]) = (EIF_POINTER) arg1;
	RTHOOK(3);
	*(EIF_POINTER *)(Current + O4518[dtype-959]) = (EIF_POINTER) arg2;
	RTHOOK(4);
	*(EIF_POINTER *)(Current + O4516[dtype-959]) = (EIF_POINTER) arg3;
	RTHOOK(5);
	RTAR(Current, arg4);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg4;
	RTHOOK(6);
	*(EIF_BOOLEAN *)(Current + O4506[dtype-959]) = (EIF_BOOLEAN) arg5;
	RTHOOK(7);
	*(EIF_INTEGER_32 *)(Current + O4507[dtype-959]) = (EIF_INTEGER_32) arg6;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
}

/* {ROUTINE}.set_rout_disp_int */
void F960_5908 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_INTEGER_32 arg4, EIF_REFERENCE arg5, EIF_BOOLEAN arg6, EIF_BOOLEAN arg7, EIF_INTEGER_32 arg8, EIF_REFERENCE arg9, EIF_INTEGER_32 arg10)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg9);
	RTLR(1,Current);
	RTLR(2,arg5);
	RTLIU(3);
	
	RTEAA("set_rout_disp_int", 959, Current, 0, 10, 12819);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_routine_id_valid", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg4 > ((EIF_INTEGER_32) -1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("target_valid", EX_PRE);
		tb1 = '\01';
		if (arg7) {
			tb1 = (nstcall = 0, F960_5887(Current, arg9));
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	*(EIF_POINTER *)(Current + O4515[dtype-959]) = (EIF_POINTER) arg1;
	RTHOOK(4);
	*(EIF_POINTER *)(Current + O4518[dtype-959]) = (EIF_POINTER) arg2;
	RTHOOK(5);
	*(EIF_POINTER *)(Current + O4516[dtype-959]) = (EIF_POINTER) arg3;
	RTHOOK(6);
	*(EIF_INTEGER_32 *)(Current + O4519[dtype-959]) = (EIF_INTEGER_32) arg4;
	RTHOOK(7);
	RTAR(Current, arg5);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) arg5;
	RTHOOK(8);
	*(EIF_BOOLEAN *)(Current + O4520[dtype-959]) = (EIF_BOOLEAN) arg6;
	RTHOOK(9);
	*(EIF_BOOLEAN *)(Current + O4506[dtype-959]) = (EIF_BOOLEAN) arg7;
	RTHOOK(10);
	*(EIF_INTEGER_32 *)(Current + O4521[dtype-959]) = (EIF_INTEGER_32) arg8;
	RTHOOK(11);
	RTAR(Current, arg9);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg9;
	RTHOOK(12);
	*(EIF_INTEGER_32 *)(Current + O4507[dtype-959]) = (EIF_INTEGER_32) arg10;
	if (RTAL & CK_ENSURE) {
		RTHOOK(13);
		RTCT("rout_disp_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current + O4515[dtype-959]) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(14);
		RTCT("encaps_rout_disp_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current + O4518[dtype-959]) == arg2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(15);
		RTCT("calc_rout_addr_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current + O4516[dtype-959]) == arg3)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(16);
		RTCT("routine_id_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O4519[dtype-959]) == arg4)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(17);
		RTCT("open_map_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_2_) == arg5)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(18);
		RTCT("is_target_closed_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current + O4506[dtype-959]) == arg7)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(19);
		RTCT("is_basic_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current + O4520[dtype-959]) == arg6)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(20);
		RTCT("written_type_id_inline_agent_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O4521[dtype-959]) == arg8)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(21);
		RTCT("closed_operands_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) == arg9)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(22);
		RTCT("open_count_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O4507[dtype-959]) == arg10)) {
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
}

/* {ROUTINE}.open_types */
EIF_REFERENCE F960_5909 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_3_);
}


/* {ROUTINE}.open_operand_type */
EIF_INTEGER_32 F960_5910 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("open_operand_type", 959, Current, 1, 1, 12821);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("positive", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("within_bounds", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= *(EIF_INTEGER_32 *)(Current + O4507[dtype-959])), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	RTHOOK(4);
	if ((EIF_BOOLEAN)(loc1 == NULL)) {
		RTHOOK(5);
		{
			static EIF_TYPE_INDEX typarr0[] = {679,892,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			loc1 = RTLNSMART(typres0.id);
		}
		(nstcall = -1, F680_3906(RTCW(loc1), ((EIF_INTEGER_32) -1L), ((EIF_INTEGER_32) 1L), *(EIF_INTEGER_32 *)(Current + O4507[dtype-959])));
		RTHOOK(6);
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) loc1;
	}
	RTHOOK(7);
	ti4_1 = (nstcall = 1, F680_3911(RTCW(loc1), arg1));
	Result = (EIF_INTEGER_32) ti4_1;
	RTHOOK(8);
	if ((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) -1L))) {
		RTHOOK(9);
		tr1 = RTLNTY2(eif_gen_param(dftype, 1), 0x00);
		tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R3735[Dtype(tr1)-855])(tr1, arg1));
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3736[Dtype(RTCW(tr2))-855])(tr2));
		Result = (EIF_INTEGER_32) ti4_1;
		RTHOOK(10);
		(nstcall = 1, F680_3930(RTCW(loc1), Result, arg1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTEE;
	return Result;
}

/* {ROUTINE}.type_id_of */
EIF_INTEGER_32 F960_5911 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN uarg1;
	EIF_BOOLEAN uarg;
	RTS_SD;
	RTS_SDC;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("type_id_of", 959, Current, 0, 1, 12822);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	uarg1 = (EIF_BOOLEAN) RTS_OU (arg1);
	uarg = uarg1;
	if (uarg) {
		RTS_RC;
		RTS_RS (arg1);
		RTS_RW;
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("False", EX_PRE);
		RTTE((EIF_BOOLEAN) 0, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if (RTS_CI (EIF_TRUE, arg1)) {
		RTS_BI (arg1);
		tr1 = (nstcall = 1, F1_5(arg1));
		RTS_EI;
	} else {
		RTS_AC (0, arg1);
		RTS_CALL (F1_5, eif_scr5, 0, &(tr1));
	}
	if (RTS_CI (EIF_TRUE, tr1)) {
		RTS_BI (tr1);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3736[Dtype(RTCW(tr1))-855])(tr1));
		RTS_EI;
	} else {
		RTS_AC (0, tr1);
		RTS_CALL (R3736[Dtype(tr1)-855], eif_scr1, 0, &(ti4_1));
	}
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	if (uarg) {
		RTS_RD;
	}
	RTLE;
	RTEE;
	return Result;
}

/* {ROUTINE}.adapt_from */
void F960_5912 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("adapt_from", 959, Current, 0, 1, 12823);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("conforming", EX_PRE);
		RTTE((nstcall = 0, F1_6(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	(nstcall = 0, F960_5877(Current, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {ROUTINE}.arguments */
EIF_REFERENCE F960_5913 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("arguments", 959, Current, 0, 0, 12824);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_REFERENCE *)(Current);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {ROUTINE}.set_arguments */
void F960_5914 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("set_arguments", 959, Current, 0, 1, 12825);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	(nstcall = 0, F960_5890(Current, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {ROUTINE}.valid_arguments */
EIF_BOOLEAN F960_5915 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("valid_arguments", 959, Current, 0, 1, 12826);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F960_5886(Current, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

void EIF_Minit298 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
