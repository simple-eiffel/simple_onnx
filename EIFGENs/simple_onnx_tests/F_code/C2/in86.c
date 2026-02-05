/*
 * Code for class INTEGER_OVERFLOW_CHECKER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "in86.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {INTEGER_OVERFLOW_CHECKER}.make */
void F107_1352 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_64 tu8_1;
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("make", 106, Current, 0, 0, 1383);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,761,901,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSP2(typres0.id,0,(EIF_INTEGER_32) ((EIF_INTEGER_32) (((EIF_INTEGER_32) 4L) * ((EIF_INTEGER_32) 2L)) + ((EIF_INTEGER_32) 1L)),sizeof(EIF_NATURAL_64), EIF_TRUE);
		RT_SPECIAL_COUNT(tr1) = 0;
	}
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current);
	(nstcall = 1, F762_4178(RTCW(tr1), (EIF_NATURAL_64) ((EIF_INTEGER_32) 0L)));
	RTHOOK(3);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,761,901,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSP2(typres0.id,0,(EIF_INTEGER_32) ((EIF_INTEGER_32) (((EIF_INTEGER_32) 4L) * ((EIF_INTEGER_32) 2L)) + ((EIF_INTEGER_32) 1L)),sizeof(EIF_NATURAL_64), EIF_TRUE);
		RT_SPECIAL_COUNT(tr1) = 0;
	}
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	(nstcall = 1, F762_4178(RTCW(tr1), (EIF_NATURAL_64) ((EIF_INTEGER_32) 0L)));
	RTHOOK(5);
	tr1 = *(EIF_REFERENCE *)(Current);
	tu8_1 = (EIF_NATURAL_64) ((EIF_INTEGER_8) (((EIF_INTEGER_8) 127L) / (EIF_INTEGER_8) ((EIF_INTEGER_32) 10L)));
	(nstcall = 1, F762_4178(RTCW(tr1), tu8_1));
	RTHOOK(6);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tu8_1 = (EIF_NATURAL_64) ((EIF_INTEGER_8) (((EIF_INTEGER_8) 127L) % (EIF_INTEGER_8) ((EIF_INTEGER_32) 10L)));
	(nstcall = 1, F762_4178(RTCW(tr1), tu8_1));
	RTHOOK(7);
	tr1 = *(EIF_REFERENCE *)(Current);
	tu8_1 = (EIF_NATURAL_64) ((EIF_INTEGER_16) (((EIF_INTEGER_16) 32767L) / (EIF_INTEGER_16) ((EIF_INTEGER_32) 10L)));
	(nstcall = 1, F762_4178(RTCW(tr1), tu8_1));
	RTHOOK(8);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tu8_1 = (EIF_NATURAL_64) ((EIF_INTEGER_16) (((EIF_INTEGER_16) 32767L) % (EIF_INTEGER_16) ((EIF_INTEGER_32) 10L)));
	(nstcall = 1, F762_4178(RTCW(tr1), tu8_1));
	RTHOOK(9);
	tr1 = *(EIF_REFERENCE *)(Current);
	tu8_1 = (EIF_NATURAL_64) (EIF_INTEGER_32) (((EIF_INTEGER_32) 2147483647L) / ((EIF_INTEGER_32) 10L));
	(nstcall = 1, F762_4178(RTCW(tr1), tu8_1));
	RTHOOK(10);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tu8_1 = (EIF_NATURAL_64) (EIF_INTEGER_32) (((EIF_INTEGER_32) 2147483647L) % ((EIF_INTEGER_32) 10L));
	(nstcall = 1, F762_4178(RTCW(tr1), tu8_1));
	RTHOOK(11);
	tr1 = *(EIF_REFERENCE *)(Current);
	tu8_1 = (EIF_NATURAL_64) ((EIF_INTEGER_64) (((EIF_INTEGER_64) RTI64C(9223372036854775807)) / (EIF_INTEGER_64) ((EIF_INTEGER_32) 10L)));
	(nstcall = 1, F762_4178(RTCW(tr1), tu8_1));
	RTHOOK(12);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tu8_1 = (EIF_NATURAL_64) ((EIF_INTEGER_64) (((EIF_INTEGER_64) RTI64C(9223372036854775807)) % (EIF_INTEGER_64) ((EIF_INTEGER_32) 10L)));
	(nstcall = 1, F762_4178(RTCW(tr1), tu8_1));
	RTHOOK(13);
	tr1 = *(EIF_REFERENCE *)(Current);
	tu8_1 = (EIF_NATURAL_64) ((EIF_INTEGER_8) -(EIF_INTEGER_8) (((EIF_INTEGER_8) -128L) / (EIF_INTEGER_8) ((EIF_INTEGER_32) 10L)));
	(nstcall = 1, F762_4178(RTCW(tr1), tu8_1));
	RTHOOK(14);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tu8_1 = (EIF_NATURAL_64) ((EIF_INTEGER_8) -(EIF_INTEGER_8) (((EIF_INTEGER_8) -128L) % (EIF_INTEGER_8) ((EIF_INTEGER_32) 10L)));
	(nstcall = 1, F762_4178(RTCW(tr1), tu8_1));
	RTHOOK(15);
	tr1 = *(EIF_REFERENCE *)(Current);
	tu8_1 = (EIF_NATURAL_64) ((EIF_INTEGER_16) -(EIF_INTEGER_16) (((EIF_INTEGER_16) -32768L) / (EIF_INTEGER_16) ((EIF_INTEGER_32) 10L)));
	(nstcall = 1, F762_4178(RTCW(tr1), tu8_1));
	RTHOOK(16);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tu8_1 = (EIF_NATURAL_64) ((EIF_INTEGER_16) -(EIF_INTEGER_16) (((EIF_INTEGER_16) -32768L) % (EIF_INTEGER_16) ((EIF_INTEGER_32) 10L)));
	(nstcall = 1, F762_4178(RTCW(tr1), tu8_1));
	RTHOOK(17);
	tr1 = *(EIF_REFERENCE *)(Current);
	tu8_1 = (EIF_NATURAL_64) (EIF_INTEGER_32) -(EIF_INTEGER_32) (((EIF_INTEGER_32) 0x80000000L) / ((EIF_INTEGER_32) 10L));
	(nstcall = 1, F762_4178(RTCW(tr1), tu8_1));
	RTHOOK(18);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tu8_1 = (EIF_NATURAL_64) (EIF_INTEGER_32) -(EIF_INTEGER_32) (((EIF_INTEGER_32) 0x80000000L) % ((EIF_INTEGER_32) 10L));
	(nstcall = 1, F762_4178(RTCW(tr1), tu8_1));
	RTHOOK(19);
	tr1 = *(EIF_REFERENCE *)(Current);
	tu8_1 = (EIF_NATURAL_64) ((EIF_INTEGER_64) -(EIF_INTEGER_64) (((EIF_INTEGER_64) RTI64C(0x8000000000000000)) / (EIF_INTEGER_64) ((EIF_INTEGER_32) 10L)));
	(nstcall = 1, F762_4178(RTCW(tr1), tu8_1));
	RTHOOK(20);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tu8_1 = (EIF_NATURAL_64) ((EIF_INTEGER_64) -(EIF_INTEGER_64) (((EIF_INTEGER_64) RTI64C(0x8000000000000000)) % (EIF_INTEGER_64) ((EIF_INTEGER_32) 10L)));
	(nstcall = 1, F762_4178(RTCW(tr1), tu8_1));
	RTHOOK(21);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,761,901,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSP2(typres0.id,0,(EIF_INTEGER_32) (((EIF_INTEGER_32) 4L) + ((EIF_INTEGER_32) 1L)),sizeof(EIF_NATURAL_64), EIF_TRUE);
		RT_SPECIAL_COUNT(tr1) = 0;
	}
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	RTHOOK(22);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	(nstcall = 1, F762_4178(RTCW(tr1), (EIF_NATURAL_64) ((EIF_INTEGER_32) 0L)));
	RTHOOK(23);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,761,901,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSP2(typres0.id,0,(EIF_INTEGER_32) (((EIF_INTEGER_32) 4L) + ((EIF_INTEGER_32) 1L)),sizeof(EIF_NATURAL_64), EIF_TRUE);
		RT_SPECIAL_COUNT(tr1) = 0;
	}
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	RTHOOK(24);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	(nstcall = 1, F762_4178(RTCW(tr1), (EIF_NATURAL_64) ((EIF_INTEGER_32) 0L)));
	RTHOOK(25);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	tu8_1 = (EIF_NATURAL_64) ((EIF_NATURAL_8) (((EIF_NATURAL_8) 255U) / (EIF_NATURAL_8) ((EIF_INTEGER_32) 10L)));
	(nstcall = 1, F762_4178(RTCW(tr1), tu8_1));
	RTHOOK(26);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	tu8_1 = (EIF_NATURAL_64) ((EIF_NATURAL_8) (((EIF_NATURAL_8) 255U) % (EIF_NATURAL_8) ((EIF_INTEGER_32) 10L)));
	(nstcall = 1, F762_4178(RTCW(tr1), tu8_1));
	RTHOOK(27);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	tu8_1 = (EIF_NATURAL_64) ((EIF_NATURAL_16) (((EIF_NATURAL_16) 65535U) / (EIF_NATURAL_16) ((EIF_INTEGER_32) 10L)));
	(nstcall = 1, F762_4178(RTCW(tr1), tu8_1));
	RTHOOK(28);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	tu8_1 = (EIF_NATURAL_64) ((EIF_NATURAL_16) (((EIF_NATURAL_16) 65535U) % (EIF_NATURAL_16) ((EIF_INTEGER_32) 10L)));
	(nstcall = 1, F762_4178(RTCW(tr1), tu8_1));
	RTHOOK(29);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	tu8_1 = (EIF_NATURAL_64) ((EIF_NATURAL_32) (((EIF_NATURAL_32) 4294967295U) / (EIF_NATURAL_32) ((EIF_INTEGER_32) 10L)));
	(nstcall = 1, F762_4178(RTCW(tr1), tu8_1));
	RTHOOK(30);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	tu8_1 = (EIF_NATURAL_64) ((EIF_NATURAL_32) (((EIF_NATURAL_32) 4294967295U) % (EIF_NATURAL_32) ((EIF_INTEGER_32) 10L)));
	(nstcall = 1, F762_4178(RTCW(tr1), tu8_1));
	RTHOOK(31);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	tu8_1 = (EIF_NATURAL_64) ((EIF_NATURAL_64) (((EIF_NATURAL_64) RTU64C(18446744073709551615)) / (EIF_NATURAL_64) ((EIF_INTEGER_32) 10L)));
	(nstcall = 1, F762_4178(RTCW(tr1), tu8_1));
	RTHOOK(32);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	tu8_1 = (EIF_NATURAL_64) ((EIF_NATURAL_64) (((EIF_NATURAL_64) RTU64C(18446744073709551615)) % (EIF_NATURAL_64) ((EIF_INTEGER_32) 10L)));
	(nstcall = 1, F762_4178(RTCW(tr1), tu8_1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(33);
	RTLE;
	RTEE;
}

/* {INTEGER_OVERFLOW_CHECKER}.will_overflow */
EIF_BOOLEAN F107_1353 (EIF_REFERENCE Current, EIF_NATURAL_64 arg1, EIF_NATURAL_64 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_64 tu8_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("will_overflow", 106, Current, 1, 4, 1384);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("type_valid", EX_PRE);
		RTTE((nstcall = 0, F106_1348(Current, arg3)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if ((EIF_BOOLEAN)(arg3 != ((EIF_INTEGER_32) 0L))) {
		RTHOOK(3);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg3 == ((EIF_INTEGER_32) 1L)) || (EIF_BOOLEAN)(arg3 == ((EIF_INTEGER_32) 2L))) || (EIF_BOOLEAN)(arg3 == ((EIF_INTEGER_32) 3L))) || (EIF_BOOLEAN)(arg3 == ((EIF_INTEGER_32) 4L)))) {
			RTHOOK(4);
			loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg4 * ((EIF_INTEGER_32) 4L)) + arg3);
			RTHOOK(5);
			Result = '\01';
			tr1 = *(EIF_REFERENCE *)(Current);
			tu8_1 = (nstcall = 1, F762_4161(RTCW(tr1), loc1));
			if (!(EIF_BOOLEAN) (arg1 > tu8_1)) {
				tb1 = '\0';
				tr1 = *(EIF_REFERENCE *)(Current);
				tu8_1 = (nstcall = 1, F762_4161(RTCW(tr1), loc1));
				if ((EIF_BOOLEAN)(arg1 == tu8_1)) {
					tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
					tu8_1 = (nstcall = 1, F762_4161(RTCW(tr1), loc1));
					tb1 = (EIF_BOOLEAN) (arg2 > tu8_1);
				}
				Result = tb1;
			}
		} else {
			RTHOOK(6);
			if ((EIF_BOOLEAN)(arg4 == ((EIF_INTEGER_32) 1L))) {
				RTHOOK(7);
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 > (EIF_NATURAL_64) ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN) (arg2 > (EIF_NATURAL_64) ((EIF_INTEGER_32) 0L)));
			} else {
				RTHOOK(8);
				loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg3 - ((EIF_INTEGER_32) 10L));
				RTHOOK(9);
				Result = '\01';
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
				tu8_1 = (nstcall = 1, F762_4161(RTCW(tr1), loc1));
				if (!(EIF_BOOLEAN) (arg1 > tu8_1)) {
					tb1 = '\0';
					tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
					tu8_1 = (nstcall = 1, F762_4161(RTCW(tr1), loc1));
					if ((EIF_BOOLEAN)(arg1 == tu8_1)) {
						tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
						tu8_1 = (nstcall = 1, F762_4161(RTCW(tr1), loc1));
						tb1 = (EIF_BOOLEAN) (arg2 > tu8_1);
					}
					Result = tb1;
				}
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
	return Result;
}

/* {INTEGER_OVERFLOW_CHECKER}.integer_overflow_state1 */
EIF_REFERENCE F107_1354 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {INTEGER_OVERFLOW_CHECKER}.integer_overflow_state2 */
EIF_REFERENCE F107_1355 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {INTEGER_OVERFLOW_CHECKER}.natural_overflow_state1 */
EIF_REFERENCE F107_1356 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {INTEGER_OVERFLOW_CHECKER}.natural_overflow_state2 */
EIF_REFERENCE F107_1357 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_3_);
}


void EIF_Minit86 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
