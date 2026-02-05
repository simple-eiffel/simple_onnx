/*
 * Code for class SED_RECOVERABLE_SERIALIZER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "se71.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {SED_RECOVERABLE_SERIALIZER}.write_header */
void F92_1221 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc5 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,loc3);
	RTLR(2,Current);
	RTLR(3,loc4);
	RTLR(4,loc1);
	RTLR(5,arg2);
	RTLR(6,tr1);
	RTLR(7,loc6);
	RTLIU(8);
	
	RTEAA("write_header", 91, Current, 6, 2, 1255);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_list_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_list_not_empty", EX_PRE);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2925[Dtype(RTCW(arg1))-564])(arg1));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc3 = *(EIF_REFERENCE *)(Current);
	RTHOOK(4);
	loc4 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	RTHOOK(5);
	(nstcall = 0, F90_1198(Current));
	RTHOOK(6);
	loc5 = (nstcall = 0, F90_1195(Current));
	loc5 = (EIF_BOOLEAN) (EIF_BOOLEAN) !loc5;
	RTHOOK(7);
	loc1 = (nstcall = 0, F92_1222(Current, arg2));
	RTHOOK(8);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_4_3_0_9_);
	tu4_1 = (EIF_NATURAL_32) ti4_1;
	(nstcall = 1, F63_892(RTCW(loc3), tu4_1));
	RTHOOK(9);
	(nstcall = 1, F848_4500(RTCW(arg2)));
	for (;;) {
		RTHOOK(10);
		tb1 = (nstcall = 1, F848_4495(RTCW(arg2)));
		if (tb1) break;
		RTHOOK(11);
		ti4_1 = (nstcall = 1, F848_4473(RTCW(arg2)));
		loc2 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(12);
		tu4_1 = (EIF_NATURAL_32) loc2;
		(nstcall = 1, F63_892(RTCW(loc3), tu4_1));
		RTHOOK(13);
		tr1 = (nstcall = 1, F192_2338(RTCW(loc4), loc2));
		(nstcall = 1, F63_876(RTCW(loc3), tr1));
		RTHOOK(14);
		(nstcall = 1, F848_4501(RTCW(arg2)));
		RTHOOK(15);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) !loc5 && (EIF_BOOLEAN) (*(EIF_NATURAL_32 *)(Current+ _LNGOFF_5_2_0_0_) >= ((EIF_NATURAL_32) 3U)))) {
			RTHOOK(16);
			tb2 = '\0';
			tr1 = (nstcall = 1, F192_2343(RTCW(loc4), loc2));
			loc6 = tr1;
			if (EIF_TEST(loc6)) {
				tb3 = (nstcall = 1, F969_6129(loc6));
				tb2 = (EIF_BOOLEAN) !tb3;
			}
			if (tb2) {
				RTHOOK(17);
				(nstcall = 1, F63_879(RTCW(loc3), (EIF_BOOLEAN) 1));
				RTHOOK(18);
				(nstcall = 1, F63_876(RTCW(loc3), loc6));
			} else {
				RTHOOK(19);
				(nstcall = 1, F63_879(RTCW(loc3), (EIF_BOOLEAN) 0));
			}
		}
	}
	RTHOOK(20);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_4_3_0_9_);
	tu4_1 = (EIF_NATURAL_32) ti4_1;
	(nstcall = 1, F63_892(RTCW(loc3), tu4_1));
	RTHOOK(21);
	(nstcall = 1, F848_4500(RTCW(loc1)));
	for (;;) {
		RTHOOK(22);
		tb2 = (nstcall = 1, F848_4495(RTCW(loc1)));
		if (tb2) break;
		RTHOOK(23);
		ti4_1 = (nstcall = 1, F848_4473(RTCW(loc1)));
		loc2 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(24);
		tu4_1 = (EIF_NATURAL_32) loc2;
		(nstcall = 1, F63_892(RTCW(loc3), tu4_1));
		RTHOOK(25);
		tr1 = (nstcall = 1, F192_2338(RTCW(loc4), loc2));
		(nstcall = 1, F63_876(RTCW(loc3), tr1));
		RTHOOK(26);
		(nstcall = 1, F848_4501(RTCW(loc1)));
	}
	RTHOOK(27);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_4_3_0_9_);
	tu4_1 = (EIF_NATURAL_32) ti4_1;
	(nstcall = 1, F63_892(RTCW(loc3), tu4_1));
	RTHOOK(28);
	(nstcall = 1, F848_4500(RTCW(arg2)));
	for (;;) {
		RTHOOK(29);
		tb3 = (nstcall = 1, F848_4495(RTCW(arg2)));
		if (tb3) break;
		RTHOOK(30);
		ti4_1 = (nstcall = 1, F848_4473(RTCW(arg2)));
		loc2 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(31);
		tu4_1 = (EIF_NATURAL_32) loc2;
		(nstcall = 1, F63_892(RTCW(loc3), tu4_1));
		RTHOOK(32);
		(nstcall = 0, F92_1223(Current, loc2));
		RTHOOK(33);
		(nstcall = 1, F848_4501(RTCW(arg2)));
	}
	RTHOOK(34);
	(nstcall = 0, F90_1199(Current, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(35);
	RTLE;
	RTEE;
}

/* {SED_RECOVERABLE_SERIALIZER}.attributes_dynamic_types */
EIF_REFERENCE F92_1222 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("attributes_dynamic_types", 91, Current, 5, 1, 1256);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_type_table_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	RTHOOK(3);
	(nstcall = 1, F848_4500(RTCW(arg1)));
	RTHOOK(4);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,847,892,892,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		Result = RTLNS(typres0.id, 847, _OBJSIZ_4_3_0_10_0_0_0_0_);
	}
	(nstcall = -1, F848_4461(RTCW(Result), ((EIF_INTEGER_32) 500L)));
	for (;;) {
		RTHOOK(5);
		tb1 = (nstcall = 1, F848_4495(RTCW(arg1)));
		if (tb1) break;
		RTHOOK(6);
		loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		RTHOOK(7);
		ti4_1 = (nstcall = 1, F848_4473(RTCW(arg1)));
		loc5 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(8);
		ti4_1 = (nstcall = 1, F192_2349(RTCW(loc1), loc5));
		loc3 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(9);
		loc3++;
		for (;;) {
			RTHOOK(10);
			if ((EIF_BOOLEAN)(loc2 == loc3)) break;
			RTHOOK(11);
			tb2 = (nstcall = 1, F192_2333(RTCW(loc1), loc2, loc5));
			if ((EIF_BOOLEAN) !tb2) {
				RTHOOK(12);
				ti4_1 = (nstcall = 1, F192_2347(RTCW(loc1), loc2, loc5));
				loc4 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(13);
				tb2 = (nstcall = 1, F848_4469(RTCW(arg1), loc4));
				if ((EIF_BOOLEAN) !tb2) {
					RTHOOK(14);
					tb2 = (nstcall = 1, F192_2334(RTCW(loc1), loc2, loc5));
					if (tb2) {
						RTHOOK(15);
						(nstcall = 1, F848_4507(RTCW(arg1), loc4, loc4));
					} else {
						RTHOOK(16);
						(nstcall = 1, F848_4507(RTCW(Result), loc4, loc4));
					}
				}
			}
			RTHOOK(17);
			loc2++;
		}
		RTHOOK(18);
		(nstcall = 1, F848_4501(RTCW(arg1)));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(19);
		RTCT("attributes_dynamic_types_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(20);
	RTLE;
	RTEE;
	return Result;
}

/* {SED_RECOVERABLE_SERIALIZER}.write_attributes */
void F92_1223 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("write_attributes", 91, Current, 4, 1, 1257);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_dtype_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	RTHOOK(3);
	loc2 = *(EIF_REFERENCE *)(Current);
	RTHOOK(4);
	loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(5);
	ti4_1 = (nstcall = 1, F192_2350(RTCW(loc1), arg1));
	tu4_1 = (EIF_NATURAL_32) ti4_1;
	(nstcall = 1, F63_892(RTCW(loc2), tu4_1));
	RTHOOK(6);
	ti4_1 = (nstcall = 1, F192_2349(RTCW(loc1), arg1));
	loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
	for (;;) {
		RTHOOK(7);
		if ((EIF_BOOLEAN)(loc3 == loc4)) break;
		RTHOOK(8);
		tb1 = (nstcall = 1, F192_2333(RTCW(loc1), loc3, arg1));
		if ((EIF_BOOLEAN) !tb1) {
			RTHOOK(9);
			ti4_1 = (nstcall = 1, F192_2347(RTCW(loc1), loc3, arg1));
			tu4_1 = (EIF_NATURAL_32) ti4_1;
			(nstcall = 1, F63_892(RTCW(loc2), tu4_1));
			RTHOOK(10);
			tr1 = (nstcall = 1, F192_2345(RTCW(loc1), loc3, arg1));
			(nstcall = 1, F63_876(RTCW(loc2), tr1));
		}
		RTHOOK(11);
		loc3++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTLE;
	RTEE;
}

void EIF_Minit71 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
