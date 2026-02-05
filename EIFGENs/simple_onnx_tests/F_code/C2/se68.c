/*
 * Code for class SED_UTILITIES
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "se68.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {SED_UTILITIES}.is_void_safe */
static EIF_BOOLEAN F89_1172_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCFDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRB(EIF_BOOLEAN)
	RTOUDB(EIF_BOOLEAN, 300)
	dftype = Dftype(Current);

	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("is_void_safe", 88, Current, 0, 0, 1205);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,759,0xFF01,0,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTY2(typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,759,0,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTY2(typres0, 0x01);
	}
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tr1 != tr2);
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_BOOLEAN F89_1172 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_BOOLEAN,300,F89_1172_body,(Current));
}

/* {SED_UTILITIES}.abstract_type */
EIF_INTEGER_32 F89_1175 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("abstract_type", 88, Current, 1, 1, 1208);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_type_id_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = RTOUCR(301,(nstcall = 0, F89_1176), (Current));
	RTHOOK(3);
	(nstcall = 1, F848_4503(RTCW(loc1), arg1));
	RTHOOK(4);
	tb1 = (nstcall = 1, F848_4493(RTCW(loc1)));
	if (tb1) {
		RTHOOK(5);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_4_3_0_0_);
		Result = (EIF_INTEGER_32) ti4_1;
	} else {
		RTHOOK(6);
		Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {SED_UTILITIES}.special_type_mapping */
static EIF_REFERENCE F89_1176_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(301)

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("special_type_mapping", 88, Current, 0, 0, 1209);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,847,892,892,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 847, _OBJSIZ_4_3_0_10_0_0_0_0_);
	}
	(nstcall = -1, F848_4461(RTCW(tr1), ((EIF_INTEGER_32) 10L)));
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = RTLNTY2(eif_new_type(922, 0x00), 0x00);
	ti4_1 = (nstcall = 1, F873_4670(tr1));
	(nstcall = 1, F848_4507(RTCW(Result), ((EIF_INTEGER_32) 3L), ti4_1));
	RTHOOK(3);
	tr1 = RTLNTY2(eif_new_type(919, 0x00), 0x00);
	ti4_1 = (nstcall = 1, F871_4670(tr1));
	(nstcall = 1, F848_4507(RTCW(Result), ((EIF_INTEGER_32) 2L), ti4_1));
	RTHOOK(4);
	tr1 = RTLNTY2(eif_new_type(916, 0x00), 0x00);
	ti4_1 = (nstcall = 1, F872_4670(tr1));
	(nstcall = 1, F848_4507(RTCW(Result), ((EIF_INTEGER_32) 12L), ti4_1));
	RTHOOK(5);
	tr1 = RTLNTY2(eif_new_type(907, 0x00), 0x00);
	ti4_1 = (nstcall = 1, F863_4670(tr1));
	(nstcall = 1, F848_4507(RTCW(Result), ((EIF_INTEGER_32) 13L), ti4_1));
	RTHOOK(6);
	tr1 = RTLNTY2(eif_new_type(925, 0x00), 0x00);
	ti4_1 = (nstcall = 1, F864_4670(tr1));
	(nstcall = 1, F848_4507(RTCW(Result), ((EIF_INTEGER_32) 14L), ti4_1));
	RTHOOK(7);
	tr1 = RTLNTY2(eif_new_type(904, 0x00), 0x00);
	ti4_1 = (nstcall = 1, F865_4670(tr1));
	(nstcall = 1, F848_4507(RTCW(Result), ((EIF_INTEGER_32) 15L), ti4_1));
	RTHOOK(8);
	tr1 = RTLNTY2(eif_new_type(901, 0x00), 0x00);
	ti4_1 = (nstcall = 1, F866_4670(tr1));
	(nstcall = 1, F848_4507(RTCW(Result), ((EIF_INTEGER_32) 16L), ti4_1));
	RTHOOK(9);
	tr1 = RTLNTY2(eif_new_type(898, 0x00), 0x00);
	ti4_1 = (nstcall = 1, F867_4670(tr1));
	(nstcall = 1, F848_4507(RTCW(Result), ((EIF_INTEGER_32) 9L), ti4_1));
	RTHOOK(10);
	tr1 = RTLNTY2(eif_new_type(895, 0x00), 0x00);
	ti4_1 = (nstcall = 1, F868_4670(tr1));
	(nstcall = 1, F848_4507(RTCW(Result), ((EIF_INTEGER_32) 10L), ti4_1));
	RTHOOK(11);
	tr1 = RTLNTY2(eif_new_type(892, 0x00), 0x00);
	ti4_1 = (nstcall = 1, F869_4670(tr1));
	(nstcall = 1, F848_4507(RTCW(Result), ((EIF_INTEGER_32) 4L), ti4_1));
	RTHOOK(12);
	tr1 = RTLNTY2(eif_new_type(889, 0x00), 0x00);
	ti4_1 = (nstcall = 1, F870_4670(tr1));
	(nstcall = 1, F848_4507(RTCW(Result), ((EIF_INTEGER_32) 11L), ti4_1));
	RTHOOK(13);
	tr1 = RTLNTY2(eif_new_type(910, 0x00), 0x00);
	ti4_1 = (nstcall = 1, F862_4670(tr1));
	(nstcall = 1, F848_4507(RTCW(Result), ((EIF_INTEGER_32) 5L), ti4_1));
	RTHOOK(14);
	tr1 = RTLNTY2(eif_new_type(913, 0x00), 0x00);
	ti4_1 = (nstcall = 1, F861_4670(tr1));
	(nstcall = 1, F848_4507(RTCW(Result), ((EIF_INTEGER_32) 6L), ti4_1));
	RTHOOK(15);
	tr1 = RTLNTY2(eif_new_type(958, 0x00), 0x00);
	ti4_1 = (nstcall = 1, F858_4670(tr1));
	(nstcall = 1, F848_4507(RTCW(Result), ((EIF_INTEGER_32) 0L), ti4_1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(16);
		RTCT("special_type_mapping_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(17);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F89_1176 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(301,F89_1176_body,(Current));
}

void EIF_Minit68 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
