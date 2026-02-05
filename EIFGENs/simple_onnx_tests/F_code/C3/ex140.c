/*
 * Code for class EXCEPTIONS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ex140.h"
#include "eif_except.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EXCEPTIONS}.meaning */
EIF_REFERENCE F161_1711 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,Result);
	RTLIU(5);
	
	RTEAA("meaning", 160, Current, 1, 1, 1734);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTOUCR(29,(nstcall = 0, F116_1465), (Current));
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R1449[Dtype(RTCW(tr1))-155])(tr1, arg1));
	loc1 = tr2;
	if (EIF_TEST(loc1)) {
		RTHOOK(2);
		tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R1376[Dtype(loc1)-116])(loc1));
		tr1 = RTLNS(eif_new_type(46, 0x00).id, 46, _OBJSIZ_0_0_0_0_0_0_0_0_);
		Result = (nstcall = 0, F47_648(RTCW(tr1), tr2));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {EXCEPTIONS}.assertion_violation */
EIF_BOOLEAN F161_1712 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc2);
	RTLIU(5);
	
	RTEAA("assertion_violation", 160, Current, 2, 0, 1735);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = '\0';
	tr1 = RTOUCR(29,(nstcall = 0, F116_1465), (Current));
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R1439[Dtype(RTCW(tr1))-155])(tr1));
	loc1 = tr2;
	if (EIF_TEST(loc1)) {
		tr1 = (nstcall = 1, F117_1475(loc1));
		loc2 = tr1;
		loc2 = RTRV(eif_new_type(148, 0x01),loc2);
		Result = EIF_TEST(loc2);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {EXCEPTIONS}.is_developer_exception */
EIF_BOOLEAN F161_1713 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc2);
	RTLIU(5);
	
	RTEAA("is_developer_exception", 160, Current, 2, 0, 1736);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = '\0';
	tr1 = RTOUCR(29,(nstcall = 0, F116_1465), (Current));
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R1439[Dtype(RTCW(tr1))-155])(tr1));
	loc1 = tr2;
	if (EIF_TEST(loc1)) {
		tr1 = (nstcall = 1, F117_1475(loc1));
		loc2 = tr1;
		loc2 = RTRV(eif_new_type(117, 0x01),loc2);
		Result = EIF_TEST(loc2);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {EXCEPTIONS}.is_developer_exception_of_name */
EIF_BOOLEAN F161_1714 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTEAA("is_developer_exception_of_name", 160, Current, 0, 1, 1737);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((nstcall = 0, F161_1713(Current))) {
		RTHOOK(2);
		tr1 = (nstcall = 0, F161_1715(Current));
		Result = (EIF_BOOLEAN) RTEQ(tr1, arg1);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {EXCEPTIONS}.developer_exception_name */
EIF_REFERENCE F161_1715 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc2);
	RTLR(5,Result);
	RTLIU(6);
	
	RTEAA("developer_exception_name", 160, Current, 2, 0, 1738);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("applicable", EX_PRE);
		RTTE((nstcall = 0, F161_1713(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tb1 = '\0';
	tr1 = RTOUCR(29,(nstcall = 0, F116_1465), (Current));
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R1439[Dtype(RTCW(tr1))-155])(tr1));
	loc1 = tr2;
	if (EIF_TEST(loc1)) {
		tr1 = (nstcall = 1, F117_1475(loc1));
		tr2 = (nstcall = 1, F117_1471(RTCW(tr1)));
		loc2 = tr2;
		tb1 = EIF_TEST(loc2);
	}
	if (tb1) {
		RTHOOK(3);
		tr1 = RTLNS(eif_new_type(46, 0x00).id, 46, _OBJSIZ_0_0_0_0_0_0_0_0_);
		Result = (nstcall = 0, F47_654(RTCW(tr1), loc2));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {EXCEPTIONS}.is_signal */
EIF_BOOLEAN F161_1716 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc2);
	RTLIU(5);
	
	RTEAA("is_signal", 160, Current, 2, 0, 1739);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = '\0';
	tr1 = RTOUCR(29,(nstcall = 0, F116_1465), (Current));
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R1439[Dtype(RTCW(tr1))-155])(tr1));
	loc1 = tr2;
	if (EIF_TEST(loc1)) {
		tr1 = (nstcall = 1, F117_1475(loc1));
		loc2 = tr1;
		loc2 = RTRV(eif_new_type(122, 0x01),loc2);
		Result = EIF_TEST(loc2);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {EXCEPTIONS}.is_system_exception */
EIF_BOOLEAN F161_1717 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc2);
	RTLR(5,loc3);
	RTLIU(6);
	
	RTEAA("is_system_exception", 160, Current, 3, 0, 1740);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = '\0';
	tr1 = RTOUCR(29,(nstcall = 0, F116_1465), (Current));
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R1439[Dtype(RTCW(tr1))-155])(tr1));
	loc1 = tr2;
	if (EIF_TEST(loc1)) {
		tr1 = RTOUCR(29,(nstcall = 0, F116_1465), (Current));
		tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R1449[Dtype(RTCW(tr1))-155])(tr1, ((EIF_INTEGER_32) 18L)));
		loc2 = tr2;
		tb1 = EIF_TEST(loc2);
	}
	if (tb1) {
		RTHOOK(2);
		Result = '\01';
		tr1 = (nstcall = 1, F117_1475(loc1));
		tb1 = (nstcall = 1, F1_6(tr1, loc2));
		if (!tb1) {
			tr1 = (nstcall = 1, F117_1475(loc1));
			loc3 = tr1;
			loc3 = RTRV(eif_new_type(124, 0x01),loc3);
			Result = EIF_TEST(loc3);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {EXCEPTIONS}.tag_name */
EIF_REFERENCE F161_1718 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc2);
	RTLR(5,Result);
	RTLIU(6);
	
	RTEAA("tag_name", 160, Current, 2, 0, 1741);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = '\0';
	tr1 = RTOUCR(29,(nstcall = 0, F116_1465), (Current));
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R1439[Dtype(RTCW(tr1))-155])(tr1));
	loc1 = tr2;
	if (EIF_TEST(loc1)) {
		tr1 = (nstcall = 1, F117_1471(loc1));
		loc2 = tr1;
		tb1 = EIF_TEST(loc2);
	}
	if (tb1) {
		RTHOOK(2);
		tr1 = RTLNS(eif_new_type(46, 0x00).id, 46, _OBJSIZ_0_0_0_0_0_0_0_0_);
		Result = (nstcall = 0, F47_654(RTCW(tr1), loc2));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {EXCEPTIONS}.recipient_name */
EIF_REFERENCE F161_1719 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,Result);
	RTLIU(5);
	
	RTEAA("recipient_name", 160, Current, 1, 0, 1742);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTOUCR(29,(nstcall = 0, F116_1465), (Current));
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R1439[Dtype(RTCW(tr1))-155])(tr1));
	loc1 = tr2;
	if (EIF_TEST(loc1)) {
		RTHOOK(2);
		tr1 = *(EIF_REFERENCE *)(loc1);
		Result = (EIF_REFERENCE) tr1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {EXCEPTIONS}.class_name */
EIF_REFERENCE F161_1720 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,Result);
	RTLIU(5);
	
	RTEAA("class_name", 160, Current, 1, 0, 1743);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTOUCR(29,(nstcall = 0, F116_1465), (Current));
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R1439[Dtype(RTCW(tr1))-155])(tr1));
	loc1 = tr2;
	if (EIF_TEST(loc1)) {
		RTHOOK(2);
		tr1 = *(EIF_REFERENCE *)(loc1 + _REFACS_1_);
		Result = (EIF_REFERENCE) tr1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {EXCEPTIONS}.exception */
EIF_INTEGER_32 F161_1721 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("exception", 160, Current, 1, 0, 1744);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTOUCR(29,(nstcall = 0, F116_1465), (Current));
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R1439[Dtype(RTCW(tr1))-155])(tr1));
	loc1 = tr2;
	if (EIF_TEST(loc1)) {
		RTHOOK(2);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R1381[Dtype(loc1)-116])(loc1));
		Result = (EIF_INTEGER_32) ti4_1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {EXCEPTIONS}.exception_trace */
EIF_REFERENCE F161_1722 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc2);
	RTLR(5,Result);
	RTLIU(6);
	
	RTEAA("exception_trace", 160, Current, 2, 0, 1745);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = '\0';
	tr1 = RTOUCR(29,(nstcall = 0, F116_1465), (Current));
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R1439[Dtype(RTCW(tr1))-155])(tr1));
	loc1 = tr2;
	if (EIF_TEST(loc1)) {
		tr1 = (nstcall = 1, F117_1475(loc1));
		tr2 = (nstcall = 1, F117_1473(RTCW(tr1)));
		loc2 = tr2;
		tb1 = EIF_TEST(loc2);
	}
	if (tb1) {
		RTHOOK(2);
		tr1 = RTLNS(eif_new_type(46, 0x00).id, 46, _OBJSIZ_0_0_0_0_0_0_0_0_);
		Result = (nstcall = 0, F47_654(RTCW(tr1), loc2));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {EXCEPTIONS}.original_tag_name */
EIF_REFERENCE F161_1723 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc2);
	RTLR(5,Result);
	RTLIU(6);
	
	RTEAA("original_tag_name", 160, Current, 2, 0, 1746);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = '\0';
	tr1 = RTOUCR(29,(nstcall = 0, F116_1465), (Current));
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R1439[Dtype(RTCW(tr1))-155])(tr1));
	loc1 = tr2;
	if (EIF_TEST(loc1)) {
		tr1 = (nstcall = 1, F117_1476(loc1));
		tr2 = (nstcall = 1, F117_1475(RTCW(tr1)));
		tr1 = (nstcall = 1, F117_1471(RTCW(tr2)));
		loc2 = tr1;
		tb1 = EIF_TEST(loc2);
	}
	if (tb1) {
		RTHOOK(2);
		tr1 = RTLNS(eif_new_type(46, 0x00).id, 46, _OBJSIZ_0_0_0_0_0_0_0_0_);
		Result = (nstcall = 0, F47_654(RTCW(tr1), loc2));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {EXCEPTIONS}.original_exception */
EIF_INTEGER_32 F161_1724 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("original_exception", 160, Current, 1, 0, 1747);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTOUCR(29,(nstcall = 0, F116_1465), (Current));
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R1439[Dtype(RTCW(tr1))-155])(tr1));
	loc1 = tr2;
	if (EIF_TEST(loc1)) {
		RTHOOK(2);
		tr1 = (nstcall = 1, F117_1476(loc1));
		tr2 = (nstcall = 1, F117_1475(RTCW(tr1)));
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R1381[Dtype(RTCW(tr2))-116])(tr2));
		Result = (EIF_INTEGER_32) ti4_1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {EXCEPTIONS}.original_recipient_name */
EIF_REFERENCE F161_1725 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,Result);
	RTLIU(5);
	
	RTEAA("original_recipient_name", 160, Current, 1, 0, 1748);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTOUCR(29,(nstcall = 0, F116_1465), (Current));
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R1439[Dtype(RTCW(tr1))-155])(tr1));
	loc1 = tr2;
	if (EIF_TEST(loc1)) {
		RTHOOK(2);
		tr1 = (nstcall = 1, F117_1476(loc1));
		tr2 = (nstcall = 1, F117_1475(RTCW(tr1)));
		tr1 = *(EIF_REFERENCE *)(RTCW(tr2));
		Result = (EIF_REFERENCE) tr1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {EXCEPTIONS}.original_class_name */
EIF_REFERENCE F161_1726 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,Result);
	RTLIU(5);
	
	RTEAA("original_class_name", 160, Current, 1, 0, 1749);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTOUCR(29,(nstcall = 0, F116_1465), (Current));
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R1439[Dtype(RTCW(tr1))-155])(tr1));
	loc1 = tr2;
	if (EIF_TEST(loc1)) {
		RTHOOK(2);
		tr1 = (nstcall = 1, F117_1476(loc1));
		tr2 = (nstcall = 1, F117_1475(RTCW(tr1)));
		tr1 = *(EIF_REFERENCE *)(RTCW(tr2) + _REFACS_1_);
		Result = (EIF_REFERENCE) tr1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {EXCEPTIONS}.catch */
void F161_1727 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("catch", 160, Current, 1, 1, 1750);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTOUCR(29,(nstcall = 0, F116_1465), (Current));
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R1448[Dtype(RTCW(tr1))-155])(tr1, arg1));
	loc1 = tr2;
	if (EIF_TEST(loc1)) {
		RTHOOK(2);
		tr1 = RTOUCR(29,(nstcall = 0, F116_1465), (Current));
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1442[Dtype(RTCW(tr1))-155])(tr1, loc1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {EXCEPTIONS}.ignore */
void F161_1728 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("ignore", 160, Current, 1, 1, 1751);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTOUCR(29,(nstcall = 0, F116_1465), (Current));
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R1448[Dtype(RTCW(tr1))-155])(tr1, arg1));
	loc1 = tr2;
	if (EIF_TEST(loc1)) {
		RTHOOK(2);
		tr1 = RTOUCR(29,(nstcall = 0, F116_1465), (Current));
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R1441[Dtype(RTCW(tr1))-155])(tr1, loc1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {EXCEPTIONS}.raise */
void F161_1729 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("raise", 160, Current, 1, 1, 1752);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = RTLNS(eif_new_type(117, 0x01).id, 117, _OBJSIZ_5_1_0_1_0_0_0_0_);
	RTHOOK(2);
	(nstcall = 1, F117_1482(RTCW(loc1), arg1));
	RTHOOK(3);
	(nstcall = 1, F117_1467(RTCW(loc1)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {EXCEPTIONS}.raise_retrieval_exception */
void F161_1730 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,arg1);
	RTLIU(5);
	
	RTEAA("raise_retrieval_exception", 160, Current, 1, 1, 1753);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTOUCR(29,(nstcall = 0, F116_1465), (Current));
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R1449[Dtype(RTCW(tr1))-155])(tr1, ((EIF_INTEGER_32) 31L)));
	loc1 = tr2;
	if (EIF_TEST(loc1)) {
		RTHOOK(2);
		(nstcall = 1, F117_1482(loc1, arg1));
		RTHOOK(3);
		(nstcall = 1, F117_1467(loc1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {EXCEPTIONS}.die */
void F161_1731 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("die", 160, Current, 0, 1, 1754);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);esdie(arg1);
	
	if (RTAL & CK_ENSURE) {
		RTHOOK(1);
		RTCT("False", EX_POST);
			RTCF;
	}
	RTEC (EN_POST);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {EXCEPTIONS}.new_die */
void F161_1732 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("new_die", 160, Current, 0, 1, 1755);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);esdie(arg1);
	
	if (RTAL & CK_ENSURE) {
		RTHOOK(1);
		RTCT("False", EX_POST);
			RTCF;
	}
	RTEC (EN_POST);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {EXCEPTIONS}.message_on_failure */
void F161_1733 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("message_on_failure", 160, Current, 0, 0, 1756);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	(nstcall = 0, F161_1735(Current, (EIF_BOOLEAN) 1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {EXCEPTIONS}.no_message_on_failure */
void F161_1734 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("no_message_on_failure", 160, Current, 0, 0, 1757);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	(nstcall = 0, F161_1735(Current, (EIF_BOOLEAN) 0));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {EXCEPTIONS}.c_trace_exception */
void F161_1735 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("c_trace_exception", 160, Current, 0, 1, 1758);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);eetrace(arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

void EIF_Minit140 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
