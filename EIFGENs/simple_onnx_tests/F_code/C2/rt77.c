/*
 * Code for class RT_EXTENSION
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "rt77.h"
#include "eif_main.h"
#include "eif_debug.h"
#include "eif_scoop.h"
#include "eif_out.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F98_1290
static void inline_F98_1290 (void)
{
	#ifdef WORKBENCH
	EIF_GET_CONTEXT
	is_inside_rt_eiffel_code = 0;
	exec_recording_enabled = 1;
	set_debug_mode (1);
#endif
	;
}
#define INLINE_F98_1290
#endif
#ifndef INLINE_F98_1291
static EIF_INTEGER_32 inline_F98_1291 (void)
{
	#ifdef WORKBENCH
	EIF_GET_CONTEXT
	return is_inside_rt_eiffel_code;
#else
	return 0;
#endif
	;
}
#define INLINE_F98_1291
#endif
#ifndef INLINE_F98_1292
static EIF_INTEGER_32 inline_F98_1292 (EIF_OBJECT arg1)
{
	return (EIF_INTEGER_32) (RTS_PID(eif_access(arg1)))
	;
}
#define INLINE_F98_1292
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {RT_EXTENSION}.notify */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F98_1269 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	RTED;
	EIF_BOOLEAN EIF_VOLATILE loc1 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE EIF_VOLATILE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	RTS_SDX;
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr2 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr3 = NULL;
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	RTXD;
	
	RTLI(12);
	RTLR(0,arg2);
	RTLR(1,loc2);
	RTLR(2,Current);
	RTLR(3,loc3);
	RTLR(4,loc4);
	RTLR(5,loc5);
	RTLR(6,loc6);
	RTLR(7,loc7);
	RTLR(8,tr1);
	RTLR(9,tr2);
	RTLR(10,tr3);
	RTLR(11,saved_except);
	RTLIU(12);
	RTXSLS;
	
	RTEAA("notify", 97, Current, 7, 2, 1325);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_data_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTE_T
	RTHOOK(2);
	if ((EIF_BOOLEAN) !loc1) {
		RTHOOK(3);
		switch (arg1) {
			case 10L:
				RTHOOK(4);
				loc2 = arg2;
				{
					static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,4,886,0,892,892,892,0xFFFF};
					EIF_TYPE typres0;
					static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
					
					typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
					loc2 = RTRV(typres0,loc2);
				}
				if (EIF_TEST(loc2)) {
					RTHOOK(5);
					(nstcall = 0, F98_1276(Current, loc2));
				} else {
					
				}
				RTHOOK(6);
				(nstcall = 0, F98_1274(Current, arg2));
				break;
			case 11L:
				RTHOOK(7);
				loc3 = arg2;
				{
					static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,4,886,0,892,892,892,0xFFFF};
					EIF_TYPE typres0;
					static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
					
					typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
					loc3 = RTRV(typres0,loc3);
				}
				if (EIF_TEST(loc3)) {
					RTHOOK(8);
					(nstcall = 0, F98_1278(Current, loc3));
				} else {
					
				}
				RTHOOK(9);
				(nstcall = 0, F98_1274(Current, arg2));
				break;
			case 12L:
				RTHOOK(10);
				loc4 = arg2;
				{
					static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,4,886,0,892,892,892,0xFFFF};
					EIF_TYPE typres0;
					static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
					
					typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
					loc4 = RTRV(typres0,loc4);
				}
				if (EIF_TEST(loc4)) {
					RTHOOK(11);
					(nstcall = 0, F98_1277(Current, loc4));
				} else {
					
				}
				RTHOOK(12);
				(nstcall = 0, F98_1274(Current, arg2));
				break;
			case 13L:
				RTHOOK(13);
				loc5 = arg2;
				{
					static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,4,886,0,892,892,892,0xFFFF};
					EIF_TYPE typres0;
					static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
					
					typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
					loc5 = RTRV(typres0,loc5);
				}
				if (EIF_TEST(loc5)) {
					RTHOOK(14);
					(nstcall = 0, F98_1279(Current, loc5));
				} else {
					
				}
				RTHOOK(15);
				(nstcall = 0, F98_1274(Current, arg2));
				break;
			case 14L:
				RTHOOK(16);
				loc6 = arg2;
				{
					static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,5,886,0,892,892,892,892,0xFFFF};
					EIF_TYPE typres0;
					static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
					
					typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
					loc6 = RTRV(typres0,loc6);
				}
				if (EIF_TEST(loc6)) {
					RTHOOK(17);
					(nstcall = 0, F98_1280(Current, loc6));
				} else {
					
				}
				RTHOOK(18);
				(nstcall = 0, F98_1275(Current, arg2));
				break;
			case 15L:
				RTHOOK(19);
				loc7 = arg2;
				{
					static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,5,886,0,892,892,892,892,0xFFFF};
					EIF_TYPE typres0;
					static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
					
					typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
					loc7 = RTRV(typres0,loc7);
				}
				if (EIF_TEST(loc7)) {
					RTHOOK(20);
					(nstcall = 0, F98_1281(Current, loc7));
				} else {
					
				}
				RTHOOK(21);
				(nstcall = 0, F98_1275(Current, arg2));
				break;
			default:
				break;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTE_E
	RTXSC;
	RTS_SRR
	RTHOOK(22);
	tr1 = RTMS32_EX_H("E\000\000\000r\000\000\000r\000\000\000o\000\000\000r\000\000\000:\000\000\000 \000\000\000R\000\000\000e\000\000\000s\000\000\000c\000\000\000u\000\000\000e\000\000\000 \000\000\000-\000\000\000>\000\000\000 \000\000\000R\000\000\000T\000\000\000_\000\000\000E\000\000\000X\000\000\000T\000\000\000E\000\000\000N\000\000\000S\000\000\000I\000\000\000O\000\000\000N\000\000\000.\000\000\000n\000\000\000o\000\000\000t\000\000\000i\000\000\000f\000\000\000y\000\000\000 \000\000\000(\000\000\000",38,524915496);
	tr2 = eif_out__i4_s1(arg1);
	tr3 = (nstcall = 1, F965_5989(RTCW(tr2)));
	tr2 = (nstcall = 1, F973_6360(tr1, tr3));
	tr1 = (nstcall = 1, F965_5989(RTMS_EX_H(", a_data)\012",10,1141706250)));
	tr1 = (nstcall = 1, F973_6360(RTCW(tr2), tr1));
	(nstcall = 0, F96_1255(Current, tr1));
	RTHOOK(23);
	loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(24);
	RTER;
	/* NOTREACHED */
	RTE_EE
	RTHOOK(25);
	RTEOK;
	RTLE;
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {RT_EXTENSION}.notify_argument */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
EIF_REFERENCE F98_1270 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	RTED;
	EIF_BOOLEAN EIF_VOLATILE loc1 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	RTS_SDX;
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr2 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr3 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	RTXD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Result);
	RTLR(4,tr3);
	RTLR(5,saved_except);
	RTLIU(6);
	RTXSLS;
	
	RTEAA("notify_argument", 97, Current, 1, 1, 1326);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTE_T
	RTHOOK(1);
	if ((EIF_BOOLEAN) !loc1) {
		RTHOOK(2);
		tr1 = RTOUCR(14,(nstcall = 0, F98_1271), (Current));
		tr2 = (nstcall = 1, F679_3911(RTCW(tr1), arg1));
		Result = (EIF_REFERENCE) tr2;
		RTHOOK(3);
		if ((EIF_BOOLEAN)(Result == NULL)) {
			RTHOOK(4);
			switch (arg1) {
				case 10L:
				case 11L:
				case 12L:
				case 13L:
					RTHOOK(5);
					{
						static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,4,886,0,892,892,892,0xFFFF};
						EIF_TYPE typres0;
						static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
						
						typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
						Result = RTLNSMART(typres0.id);
					}
					break;
				case 14L:
				case 15L:
					RTHOOK(6);
					{
						static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,5,886,0,892,892,892,892,0xFFFF};
						EIF_TYPE typres0;
						static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
						
						typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
						Result = RTLNSMART(typres0.id);
					}
					break;
				default:
					break;
			}
			RTHOOK(7);
			tr1 = RTOUCR(14,(nstcall = 0, F98_1271), (Current));
			(nstcall = 1, F679_3930(RTCW(tr1), Result, arg1));
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTE_E
	RTXSC;
	RTS_SRR
	RTHOOK(8);
	tr1 = RTMS32_EX_H("E\000\000\000r\000\000\000r\000\000\000o\000\000\000r\000\000\000:\000\000\000 \000\000\000R\000\000\000e\000\000\000s\000\000\000c\000\000\000u\000\000\000e\000\000\000 \000\000\000-\000\000\000>\000\000\000 \000\000\000R\000\000\000T\000\000\000_\000\000\000E\000\000\000X\000\000\000T\000\000\000E\000\000\000N\000\000\000S\000\000\000I\000\000\000O\000\000\000N\000\000\000.\000\000\000n\000\000\000o\000\000\000t\000\000\000i\000\000\000f\000\000\000y\000\000\000_\000\000\000a\000\000\000r\000\000\000g\000\000\000u\000\000\000m\000\000\000e\000\000\000n\000\000\000t\000\000\000 \000\000\000(\000\000\000",47,987824424);
	tr2 = eif_out__i4_s1(arg1);
	tr3 = (nstcall = 1, F965_5989(RTCW(tr2)));
	tr2 = (nstcall = 1, F973_6360(tr1, tr3));
	tr1 = (nstcall = 1, F965_5989(RTMS_EX_H(")\012",2,10506)));
	tr1 = (nstcall = 1, F973_6360(RTCW(tr2), tr1));
	(nstcall = 0, F96_1255(Current, tr1));
	RTHOOK(9);
	loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(10);
	RTER;
	/* NOTREACHED */
	RTE_EE
	RTHOOK(11);
	RTEOK;
	RTLE;
	return Result;
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {RT_EXTENSION}.cached_arguments */
static EIF_REFERENCE F98_1271_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(14)

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("cached_arguments", 97, Current, 0, 0, 1302);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,678,0xFFF9,0,886,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 678, _OBJSIZ_1_1_0_2_0_0_0_0_);
	}
	(nstcall = -1, F679_3906(RTCW(tr1), NULL, ((EIF_INTEGER_32) 10L), ((EIF_INTEGER_32) 15L)));
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_attached", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F98_1271 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(14,F98_1271_body,(Current));
}

/* {RT_EXTENSION}.events_feature_argument */
EIF_REFERENCE F98_1272 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("events_feature_argument", 97, Current, 0, 0, 1303);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTCT0("False", EX_CHECK);
		RTCF0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("False", EX_POST);
			RTCF;
	}
	RTEC (EN_POST);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return (EIF_REFERENCE) 0;
}

/* {RT_EXTENSION}.events_assign_argument */
EIF_REFERENCE F98_1273 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("events_assign_argument", 97, Current, 0, 0, 1304);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTCT0("False", EX_CHECK);
		RTCF0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("False", EX_POST);
			RTCF;
	}
	RTEC (EN_POST);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return (EIF_REFERENCE) 0;
}

/* {RT_EXTENSION}.reset_events_feature_argument */
void F98_1274 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("reset_events_feature_argument", 97, Current, 1, 1, 1305);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("t_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = arg1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,4,886,0,892,892,892,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		loc1 = RTRV(typres0,loc1);
	}
	if (EIF_TEST(loc1)) {
		RTHOOK(3);
		
		eif_put_reference_item(loc1,1,NULL);
		RTHOOK(4);
		
		eif_put_integer_32_item(loc1,2,((EIF_INTEGER_32) 0L));
		RTHOOK(5);
		
		eif_put_integer_32_item(loc1,3,((EIF_INTEGER_32) 0L));
		RTHOOK(6);
		
		eif_put_integer_32_item(loc1,4,((EIF_INTEGER_32) 0L));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {RT_EXTENSION}.reset_events_assign_argument */
void F98_1275 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("reset_events_assign_argument", 97, Current, 1, 1, 1306);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("t_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = arg1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,5,886,0,892,892,892,892,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		loc1 = RTRV(typres0,loc1);
	}
	if (EIF_TEST(loc1)) {
		RTHOOK(3);
		
		eif_put_reference_item(loc1,1,NULL);
		RTHOOK(4);
		
		eif_put_integer_32_item(loc1,2,((EIF_INTEGER_32) 0L));
		RTHOOK(5);
		
		eif_put_integer_32_item(loc1,3,((EIF_INTEGER_32) 0L));
		RTHOOK(6);
		
		eif_put_integer_32_item(loc1,4,((EIF_INTEGER_32) 0L));
		RTHOOK(7);
		
		eif_put_integer_32_item(loc1,5,((EIF_INTEGER_32) 0L));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
}

/* {RT_EXTENSION}.process_enter_feature */
void F98_1276 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,loc2);
	RTLIU(5);
	
	RTEAA("process_enter_feature", 97, Current, 2, 1, 1307);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_data_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("execution_recording_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F98_1283(Current)) != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = (nstcall = 0, F98_1283(Current));
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTHOOK(4);
		tr1 = eif_boxed_item(arg1,1);
		loc2 = RTCCL(tr1);
		if (EIF_TEST(loc2)) {
			RTHOOK(5);
			tr1 = RTCCL(loc2);
			ti4_1 = eif_integer_32_item(RTCW(arg1),2);
			ti4_2 = eif_integer_32_item(RTCW(arg1),3);
			ti4_3 = eif_integer_32_item(RTCW(arg1),4);
			(nstcall = 1, F982_6603(loc1, tr1, ti4_1, ti4_2, ti4_3));
		} else {
			
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {RT_EXTENSION}.process_rescue_feature */
void F98_1277 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,loc2);
	RTLIU(5);
	
	RTEAA("process_rescue_feature", 97, Current, 2, 1, 1308);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_data_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("execution_recording_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F98_1283(Current)) != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = (nstcall = 0, F98_1283(Current));
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTHOOK(4);
		tr1 = eif_boxed_item(arg1,1);
		loc2 = RTCCL(tr1);
		if (EIF_TEST(loc2)) {
			RTHOOK(5);
			tr1 = RTCCL(loc2);
			ti4_1 = eif_integer_32_item(RTCW(arg1),2);
			ti4_2 = eif_integer_32_item(RTCW(arg1),3);
			ti4_3 = eif_integer_32_item(RTCW(arg1),4);
			(nstcall = 1, F982_6604(loc1, tr1, ti4_1, ti4_2, ti4_3));
		} else {
			
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {RT_EXTENSION}.process_leave_feature */
void F98_1278 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,loc2);
	RTLIU(5);
	
	RTEAA("process_leave_feature", 97, Current, 2, 1, 1309);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_data_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("execution_recording_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F98_1283(Current)) != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = (nstcall = 0, F98_1283(Current));
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTHOOK(4);
		tr1 = eif_boxed_item(arg1,1);
		loc2 = RTCCL(tr1);
		if (EIF_TEST(loc2)) {
			RTHOOK(5);
			tr1 = RTCCL(loc2);
			ti4_1 = eif_integer_32_item(RTCW(arg1),2);
			ti4_2 = eif_integer_32_item(RTCW(arg1),3);
			ti4_3 = eif_integer_32_item(RTCW(arg1),4);
			(nstcall = 1, F982_6605(loc1, tr1, ti4_1, ti4_2, ti4_3));
		} else {
			
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {RT_EXTENSION}.process_rt_hook */
void F98_1279 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("process_rt_hook", 97, Current, 1, 1, 1310);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_data_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("execution_recording_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F98_1283(Current)) != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = (nstcall = 0, F98_1283(Current));
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTHOOK(4);
		ti4_1 = eif_integer_32_item(RTCW(arg1),2);
		ti4_2 = eif_integer_32_item(RTCW(arg1),3);
		ti4_3 = eif_integer_32_item(RTCW(arg1),4);
		(nstcall = 1, F982_6606(loc1, ti4_1, ti4_2, ti4_3));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {RT_EXTENSION}.process_rt_assign_attrib */
void F98_1280 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,loc2);
	RTLIU(5);
	
	RTEAA("process_rt_assign_attrib", 97, Current, 2, 1, 1311);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_data_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("execution_recording_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F98_1283(Current)) != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tb1 = '\0';
	tb2 = '\0';
	tr1 = (nstcall = 0, F98_1283(Current));
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tb3 = *(EIF_BOOLEAN *)(loc1+ _CHROFF_4_2_);
		tb2 = tb3;
	}
	if (tb2) {
		tr1 = eif_boxed_item(arg1,1);
		loc2 = RTCCL(tr1);
		tb1 = EIF_TEST(loc2);
	}
	if (tb1) {
		RTHOOK(4);
		ti4_1 = eif_integer_32_item(RTCW(arg1),2);
		tr1 = RTCCL(loc2);
		ti4_2 = eif_integer_32_item(RTCW(arg1),3);
		ti4_3 = eif_integer_32_item(RTCW(arg1),4);
		tu4_1 = (EIF_NATURAL_32) ti4_3;
		ti4_3 = eif_integer_32_item(RTCW(arg1),5);
		(nstcall = 1, F982_6607(loc1, ti4_1, tr1, ti4_2, tu4_1, ti4_3));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {RT_EXTENSION}.process_rt_assign_local */
void F98_1281 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLIU(4);
	
	RTEAA("process_rt_assign_local", 97, Current, 1, 1, 1312);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_data_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("execution_recording_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F98_1283(Current)) != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("no_ref", EX_PRE);
		tr1 = eif_boxed_item(arg1,1);
		RTTE((EIF_BOOLEAN)(tr1 == NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tb1 = '\0';
	tr1 = (nstcall = 0, F98_1283(Current));
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tb2 = *(EIF_BOOLEAN *)(loc1+ _CHROFF_4_2_);
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(5);
		ti4_1 = eif_integer_32_item(RTCW(arg1),2);
		ti4_2 = eif_integer_32_item(RTCW(arg1),3);
		ti4_3 = eif_integer_32_item(RTCW(arg1),4);
		tu4_1 = (EIF_NATURAL_32) ti4_3;
		ti4_3 = eif_integer_32_item(RTCW(arg1),5);
		(nstcall = 1, F982_6608(loc1, ti4_1, ti4_2, tu4_1, ti4_3));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {RT_EXTENSION}.new_execution_recorder */
EIF_REFERENCE F98_1282 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("new_execution_recorder", 97, Current, 0, 0, 1313);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNS(eif_new_type(981, 0x01).id, 981, _OBJSIZ_4_5_0_2_0_0_0_0_);
	tr1 = RTOPCF(1284,(nstcall = 0, F98_1284), (Current));
	(nstcall = -1, F982_6585(RTCW(Result), tr1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_attached", EX_POST);
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

/* {RT_EXTENSION}.execution_recorder */
EIF_REFERENCE F98_1283 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("execution_recorder", 97, Current, 0, 0, 1314);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(RTCV(RTOUCR(15,(nstcall = 0, F98_1287), (Current))));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_EXTENSION}.execution_recorder_parameters */
static EIF_REFERENCE F98_1284_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTS_SD;
	RTS_SDC;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("execution_recorder_parameters", 97, Current, 0, 0, 1315);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOPP (1284);
#define Result RTOPR(1284)
	RTOC_GLOBAL(Result);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(26, 0x05).id, 26, _OBJSIZ_0_3_0_1_0_0_0_0_);
	RTS_PA (tr1);
	RTS_AC (0, tr1);
	RTS_CALL (F27_432, eif_scr6, 0, NULL);
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_attached", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOPE (1284);
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F98_1284 (EIF_REFERENCE Current)
{
	GTCX
	return RTOPCF(1284,F98_1284_body,(Current));
}

/* {RT_EXTENSION}.set_execution_recorder_parameters */
void F98_1285 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_BOOLEAN arg2, EIF_BOOLEAN arg3, EIF_BOOLEAN arg4)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("set_execution_recorder_parameters", 97, Current, 2, 4, 1316);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = RTOPCF(1284,(nstcall = 0, F98_1284), (Current));
	RTHOOK(2);
	(nstcall = 0, F98_1286(Current, arg1, arg2, arg3, arg4, loc1));
	RTHOOK(3);
	tr1 = (nstcall = 0, F98_1283(Current));
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		RTHOOK(4);
		(nstcall = 1, F982_6586(loc2, loc1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {RT_EXTENSION}.set_execution_recorder_parameters_to */
void F98_1286 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_BOOLEAN arg2, EIF_BOOLEAN arg3, EIF_BOOLEAN arg4, EIF_REFERENCE arg5)
{
	GTCX
	RTEX;
	EIF_BOOLEAN uarg5;
	EIF_BOOLEAN uarg;
	RTS_SD;
	RTS_SDC;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg5);
	RTLIU(2);
	
	RTEAA("set_execution_recorder_parameters_to", 97, Current, 0, 5, 1317);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	uarg5 = (EIF_BOOLEAN) RTS_OU (arg5);
	uarg = uarg5;
	if (uarg) {
		RTS_RC;
		RTS_RS (arg5);
		RTS_RW;
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	if (RTS_CI (EIF_FALSE, arg5)) {
		RTS_BI (arg5);
		(nstcall = 1, F27_437(RTCW(arg5), arg1));
		RTS_EI;
	} else {
		RTS_AC (1, arg5);
		RTS_AA (arg1, it_i4, SK_INT32, 1);
		RTS_CALL (F27_437, eif_scr7, 0, NULL);
	}
	RTHOOK(2);
	if (RTS_CI (EIF_FALSE, arg5)) {
		RTS_BI (arg5);
		(nstcall = 1, F27_438(RTCW(arg5), arg2));
		RTS_EI;
	} else {
		RTS_AC (1, arg5);
		RTS_AA (arg2, it_b, SK_BOOL, 1);
		RTS_CALL (F27_438, eif_scr8, 0, NULL);
	}
	RTHOOK(3);
	if (RTS_CI (EIF_FALSE, arg5)) {
		RTS_BI (arg5);
		(nstcall = 1, F27_439(RTCW(arg5), arg3));
		RTS_EI;
	} else {
		RTS_AC (1, arg5);
		RTS_AA (arg3, it_b, SK_BOOL, 1);
		RTS_CALL (F27_439, eif_scr8, 0, NULL);
	}
	RTHOOK(4);
	if (RTS_CI (EIF_FALSE, arg5)) {
		RTS_BI (arg5);
		(nstcall = 1, F27_440(RTCW(arg5), arg4));
		RTS_EI;
	} else {
		RTS_AC (1, arg5);
		RTS_AA (arg4, it_b, SK_BOOL, 1);
		RTS_CALL (F27_440, eif_scr8, 0, NULL);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	if (uarg) {
		RTS_RD;
	}
	RTLE;
	RTEE;
}

/* {RT_EXTENSION}.execution_recorder_cell */
static EIF_REFERENCE F98_1287_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(15)

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("execution_recorder_cell", 97, Current, 0, 0, 1318);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,68,981,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 68, _OBJSIZ_1_0_0_0_0_0_0_0_);
	}
	(nstcall = -1, F69_972(RTCW(tr1), NULL));
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_attached", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F98_1287 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(15,F98_1287_body,(Current));
}

/* {RT_EXTENSION}.activate_execution_replay_recording */
void F98_1288 (EIF_REFERENCE Current, EIF_BOOLEAN arg1, EIF_REFERENCE arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32 arg5, EIF_INTEGER_32 arg6)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("activate_execution_replay_recording", 97, Current, 1, 6, 1319);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("ref_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if (arg1) {
		
		RTHOOK(3);
		loc1 = (nstcall = 0, F98_1282(Current));
		RTHOOK(4);
		tr1 = RTOUCR(15,(nstcall = 0, F98_1287), (Current));
		(nstcall = 1, F69_973(RTCW(tr1), loc1));
		RTHOOK(5);
		tr1 = RTCCL(arg2);
		(nstcall = 1, F982_6587(RTCW(loc1), tr1, arg3, arg4, arg5, arg6));
	} else {
		RTHOOK(6);
		loc1 = (nstcall = 0, F98_1283(Current));
		RTHOOK(7);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			RTHOOK(8);
			(nstcall = 1, F982_6589(RTCW(loc1)));
		}
		RTHOOK(9);
		tr1 = RTOUCR(15,(nstcall = 0, F98_1287), (Current));
		(nstcall = 1, F69_973(RTCW(tr1), NULL));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("recorder_if_on", EX_POST);
		tb1 = '\01';
		if (arg1) {
			tb1 = (EIF_BOOLEAN)((nstcall = 0, F98_1283(Current)) != NULL);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("no_recorder_if_off", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN) !arg1) {
			tb1 = (EIF_BOOLEAN)((nstcall = 0, F98_1283(Current)) == NULL);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTLE;
	RTEE;
}

/* {RT_EXTENSION}.test_activate_recording */
void F98_1289 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Current);
	RTLIU(4);
	
	RTEAA("test_activate_recording", 97, Current, 0, 4, 1320);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("ref_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTCCL(arg1);
	tr2 = (nstcall = 1, F1_5(arg1));
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R3736[Dtype(RTCW(tr2))-855])(tr2));
	(nstcall = 0, F98_1288(Current, (EIF_BOOLEAN) 1, tr1, ti4_1, arg2, arg3, arg4));
	RTHOOK(3);
	(nstcall = 0, F98_1290(Current));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {RT_EXTENSION}.c_activate_recording */
void F98_1290 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("c_activate_recording", 97, Current, 0, 0, 1321);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	inline_F98_1290 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {RT_EXTENSION}.c_is_inside_rt_eiffel_code */
EIF_INTEGER_32 F98_1291 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("c_is_inside_rt_eiffel_code", 97, Current, 0, 0, 1322);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F98_1291 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_EXTENSION}.scoop_processor_id_from_object */
EIF_INTEGER_32 F98_1292 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTEAA("scoop_processor_id_from_object", 97, Current, 0, 1, 1323);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	{
		EIF_OBJECT larg1 = &arg1;
		Result = inline_F98_1292 ((EIF_OBJECT) larg1);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_EXTENSION}._invariant */
void F98_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	RTEAINV(l_feature_name, 76, Current, 0, 0);
	RTIT("no_attribute", Current);
	tr1 = RTLNS(eif_new_type(195, 0x01).id, 195, _OBJSIZ_1_0_0_2_0_0_0_0_);
	(nstcall = -1, F196_2468(RTCW(tr1), Current));
	ti4_1 = (nstcall = 1, F191_2314(RTCW(tr1)));
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit77 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
