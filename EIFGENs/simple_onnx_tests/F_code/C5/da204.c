/*
 * Code for class DATE_TIME_CODE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "da204.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {DATE_TIME_CODE}.make */
void F757_4061 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("make", 756, Current, 0, 1, 7032);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("v_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("v_is_code", EX_PRE);
		RTTE((nstcall = 0, F88_1146(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	(nstcall = 0, F757_4065(Current, arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("value_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current);
		tb1 = (nstcall = 1, F968_6088(RTCW(tr1), arg1));
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
}

/* {DATE_TIME_CODE}.is_separator_code */
EIF_BOOLEAN F757_4062 (EIF_REFERENCE Current)
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
	
	RTEAA("is_separator_code", 756, Current, 0, 0, 7033);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	switch (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_4_)) {
		case 18L:
		case 19L:
		case 20L:
		case 21L:
		case 22L:
		case 23L:
			RTHOOK(2);
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {DATE_TIME_CODE}.is_text */
EIF_BOOLEAN F757_4063 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_);
}


/* {DATE_TIME_CODE}.is_numeric */
EIF_BOOLEAN F757_4064 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_);
}


/* {DATE_TIME_CODE}.set_value */
void F757_4065 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTEAA("set_value", 756, Current, 1, 1, 7036);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("v_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("v_is_code", EX_PRE);
		RTTE((nstcall = 0, F88_1146(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = (nstcall = 1, F1_14(arg1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	if ((nstcall = 0, F88_1147(Current, *(EIF_REFERENCE *)(Current)))) {
		RTHOOK(5);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
		RTHOOK(6);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		RTHOOK(7);
		loc1 = RTMS_EX_H("day-numeric",11,781450083);
		RTHOOK(8);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 31L);
		RTHOOK(9);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_3_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		RTHOOK(10);
		*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		RTHOOK(11);
		*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(12);
		ti4_1 = (EIF_INTEGER_32) ((EIF_NATURAL_8) 1U);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_4_) = (EIF_INTEGER_32) ti4_1;
	} else {
		RTHOOK(13);
		if ((nstcall = 0, F88_1148(Current, *(EIF_REFERENCE *)(Current)))) {
			RTHOOK(14);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
			RTHOOK(15);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
			RTHOOK(16);
			loc1 = RTMS_EX_H("day-numeric-on-2-digits",23,1405532275);
			RTHOOK(17);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 31L);
			RTHOOK(18);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_3_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			RTHOOK(19);
			*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			RTHOOK(20);
			*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			RTHOOK(21);
			ti4_1 = (EIF_INTEGER_32) ((EIF_NATURAL_8) 2U);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_4_) = (EIF_INTEGER_32) ti4_1;
		} else {
			RTHOOK(22);
			if ((nstcall = 0, F88_1149(Current, *(EIF_REFERENCE *)(Current)))) {
				RTHOOK(23);
				*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
				RTHOOK(24);
				*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
				RTHOOK(25);
				loc1 = RTMS_EX_H("day-text",8,1643751284);
				RTHOOK(26);
				*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 7L);
				RTHOOK(27);
				*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_3_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				RTHOOK(28);
				*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				RTHOOK(29);
				*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				RTHOOK(30);
				ti4_1 = (EIF_INTEGER_32) ((EIF_NATURAL_8) 3U);
				*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_4_) = (EIF_INTEGER_32) ti4_1;
			} else {
				RTHOOK(31);
				if ((nstcall = 0, F88_1150(Current, *(EIF_REFERENCE *)(Current)))) {
					RTHOOK(32);
					*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
					RTHOOK(33);
					*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
					RTHOOK(34);
					loc1 = RTMS_EX_H("year-on-4-digits",16,2124624499);
					RTHOOK(35);
					*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
					RTHOOK(36);
					*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					RTHOOK(37);
					ti4_1 = (EIF_INTEGER_32) ((EIF_NATURAL_8) 4U);
					*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_4_) = (EIF_INTEGER_32) ti4_1;
					RTHOOK(38);
					*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
					RTHOOK(39);
					*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_3_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
				} else {
					RTHOOK(40);
					if ((nstcall = 0, F88_1151(Current, *(EIF_REFERENCE *)(Current)))) {
						RTHOOK(41);
						*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
						RTHOOK(42);
						*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
						RTHOOK(43);
						loc1 = RTMS_EX_H("year-on-2-digits",16,2124163699);
						RTHOOK(44);
						*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
						RTHOOK(45);
						*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
						RTHOOK(46);
						ti4_1 = (EIF_INTEGER_32) ((EIF_NATURAL_8) 5U);
						*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_4_) = (EIF_INTEGER_32) ti4_1;
						RTHOOK(47);
						*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
						RTHOOK(48);
						*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_3_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
					} else {
						RTHOOK(49);
						if ((nstcall = 0, F88_1152(Current, *(EIF_REFERENCE *)(Current)))) {
							RTHOOK(50);
							*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
							RTHOOK(51);
							*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
							RTHOOK(52);
							loc1 = RTMS_EX_H("month-numeric",13,457640547);
							RTHOOK(53);
							*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 12L);
							RTHOOK(54);
							*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_3_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
							RTHOOK(55);
							*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
							RTHOOK(56);
							*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
							RTHOOK(57);
							ti4_1 = (EIF_INTEGER_32) ((EIF_NATURAL_8) 6U);
							*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_4_) = (EIF_INTEGER_32) ti4_1;
						} else {
							RTHOOK(58);
							if ((nstcall = 0, F88_1153(Current, *(EIF_REFERENCE *)(Current)))) {
								RTHOOK(59);
								*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
								RTHOOK(60);
								*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
								RTHOOK(61);
								loc1 = RTMS_EX_H("month-numeric-on-2-digits",25,275202163);
								RTHOOK(62);
								*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 12L);
								RTHOOK(63);
								*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_3_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
								RTHOOK(64);
								*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
								RTHOOK(65);
								*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
								RTHOOK(66);
								ti4_1 = (EIF_INTEGER_32) ((EIF_NATURAL_8) 7U);
								*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_4_) = (EIF_INTEGER_32) ti4_1;
							} else {
								RTHOOK(67);
								if ((nstcall = 0, F88_1154(Current, *(EIF_REFERENCE *)(Current)))) {
									RTHOOK(68);
									*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
									RTHOOK(69);
									*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
									RTHOOK(70);
									loc1 = RTMS_EX_H("month-text",10,1418209652);
									RTHOOK(71);
									*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 12L);
									RTHOOK(72);
									*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_3_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
									RTHOOK(73);
									*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
									RTHOOK(74);
									*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
									RTHOOK(75);
									ti4_1 = (EIF_INTEGER_32) ((EIF_NATURAL_8) 8U);
									*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_4_) = (EIF_INTEGER_32) ti4_1;
								} else {
									RTHOOK(76);
									if ((nstcall = 0, F88_1155(Current, *(EIF_REFERENCE *)(Current)))) {
										RTHOOK(77);
										*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
										RTHOOK(78);
										*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
										RTHOOK(79);
										loc1 = RTMS_EX_H("hour-numeric",12,1129144675);
										RTHOOK(80);
										*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 24L);
										RTHOOK(81);
										*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_3_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
										RTHOOK(82);
										*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
										RTHOOK(83);
										*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
										RTHOOK(84);
										ti4_1 = (EIF_INTEGER_32) ((EIF_NATURAL_8) 9U);
										*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_4_) = (EIF_INTEGER_32) ti4_1;
									} else {
										RTHOOK(85);
										if ((nstcall = 0, F88_1156(Current, *(EIF_REFERENCE *)(Current)))) {
											RTHOOK(86);
											*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
											RTHOOK(87);
											*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
											RTHOOK(88);
											loc1 = RTMS_EX_H("hour-numeric-on-2-digits",24,638152307);
											RTHOOK(89);
											*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 24L);
											RTHOOK(90);
											*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_3_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
											RTHOOK(91);
											*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
											RTHOOK(92);
											*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
											RTHOOK(93);
											ti4_1 = (EIF_INTEGER_32) ((EIF_NATURAL_8) 10U);
											*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_4_) = (EIF_INTEGER_32) ti4_1;
										} else {
											RTHOOK(94);
											if ((nstcall = 0, F88_1157(Current, *(EIF_REFERENCE *)(Current)))) {
												RTHOOK(95);
												*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
												RTHOOK(96);
												*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
												RTHOOK(97);
												loc1 = RTMS_EX_H("hour-12-clock-scale",19,1508112997);
												RTHOOK(98);
												*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 12L);
												RTHOOK(99);
												*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_3_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
												RTHOOK(100);
												*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
												RTHOOK(101);
												*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
												RTHOOK(102);
												ti4_1 = (EIF_INTEGER_32) ((EIF_NATURAL_8) 11U);
												*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_4_) = (EIF_INTEGER_32) ti4_1;
											} else {
												RTHOOK(103);
												if ((nstcall = 0, F88_1159(Current, *(EIF_REFERENCE *)(Current)))) {
													RTHOOK(104);
													*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
													RTHOOK(105);
													*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
													RTHOOK(106);
													loc1 = RTMS_EX_H("minute-numeric",14,220677219);
													RTHOOK(107);
													*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 59L);
													RTHOOK(108);
													*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_3_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
													RTHOOK(109);
													*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
													RTHOOK(110);
													*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
													RTHOOK(111);
													ti4_1 = (EIF_INTEGER_32) ((EIF_NATURAL_8) 13U);
													*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_4_) = (EIF_INTEGER_32) ti4_1;
												} else {
													RTHOOK(112);
													if ((nstcall = 0, F88_1160(Current, *(EIF_REFERENCE *)(Current)))) {
														RTHOOK(113);
														*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
														RTHOOK(114);
														*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
														RTHOOK(115);
														loc1 = RTMS_EX_H("minute-numeric-on-2-digits",26,1724761203);
														RTHOOK(116);
														*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 59L);
														RTHOOK(117);
														*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_3_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
														RTHOOK(118);
														*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
														RTHOOK(119);
														*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
														RTHOOK(120);
														ti4_1 = (EIF_INTEGER_32) ((EIF_NATURAL_8) 14U);
														*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_4_) = (EIF_INTEGER_32) ti4_1;
													} else {
														RTHOOK(121);
														if ((nstcall = 0, F88_1161(Current, *(EIF_REFERENCE *)(Current)))) {
															RTHOOK(122);
															*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
															RTHOOK(123);
															*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
															RTHOOK(124);
															loc1 = RTMS_EX_H("second-numeric",14,1358324579);
															RTHOOK(125);
															*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 59L);
															RTHOOK(126);
															*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_3_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
															RTHOOK(127);
															*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
															RTHOOK(128);
															*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
															RTHOOK(129);
															ti4_1 = (EIF_INTEGER_32) ((EIF_NATURAL_8) 15U);
															*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_4_) = (EIF_INTEGER_32) ti4_1;
														} else {
															RTHOOK(130);
															if ((nstcall = 0, F88_1162(Current, *(EIF_REFERENCE *)(Current)))) {
																RTHOOK(131);
																*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
																RTHOOK(132);
																*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
																RTHOOK(133);
																loc1 = RTMS_EX_H("second-numeric-on-2-digits",26,1763349363);
																RTHOOK(134);
																*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 59L);
																RTHOOK(135);
																*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_3_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
																RTHOOK(136);
																*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
																RTHOOK(137);
																*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
																RTHOOK(138);
																ti4_1 = (EIF_INTEGER_32) ((EIF_NATURAL_8) 16U);
																*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_4_) = (EIF_INTEGER_32) ti4_1;
															} else {
																RTHOOK(139);
																if ((nstcall = 0, F88_1163(Current, *(EIF_REFERENCE *)(Current)))) {
																	RTHOOK(140);
																	tr1 = *(EIF_REFERENCE *)(Current);
																	tr2 = *(EIF_REFERENCE *)(Current);
																	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr2) + O4703[Dtype(tr2)-967]);
																	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R4621[Dtype(RTCW(tr1))-968])(tr1, ((EIF_INTEGER_32) 3L), ti4_1));
																	ti4_1 = (nstcall = 1, F965_5995(RTCW(tr2)));
																	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_0_) = (EIF_INTEGER_32) ti4_1;
																	RTHOOK(141);
																	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
																	RTHOOK(142);
																	loc1 = RTMS_EX_H("fractional-second-numeric",25,941051235);
																	RTHOOK(143);
																	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
																	RTHOOK(144);
																	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
																	RTHOOK(145);
																	ti4_1 = (EIF_INTEGER_32) ((EIF_NATURAL_8) 17U);
																	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_4_) = (EIF_INTEGER_32) ti4_1;
																	RTHOOK(146);
																	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
																	RTHOOK(147);
																	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_3_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
																} else {
																	RTHOOK(148);
																	if ((nstcall = 0, F88_1164(Current, *(EIF_REFERENCE *)(Current)))) {
																		RTHOOK(149);
																		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
																		RTHOOK(150);
																		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
																		RTHOOK(151);
																		loc1 = RTMS_EX_H("colon",5,1870137710);
																		RTHOOK(152);
																		*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
																		RTHOOK(153);
																		*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
																		RTHOOK(154);
																		ti4_1 = (EIF_INTEGER_32) ((EIF_NATURAL_8) 18U);
																		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_4_) = (EIF_INTEGER_32) ti4_1;
																	} else {
																		RTHOOK(155);
																		if ((nstcall = 0, F88_1165(Current, *(EIF_REFERENCE *)(Current)))) {
																			RTHOOK(156);
																			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
																			RTHOOK(157);
																			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
																			RTHOOK(158);
																			loc1 = RTMS_EX_H("slash",5,1819209064);
																			RTHOOK(159);
																			*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
																			RTHOOK(160);
																			*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
																			RTHOOK(161);
																			ti4_1 = (EIF_INTEGER_32) ((EIF_NATURAL_8) 19U);
																			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_4_) = (EIF_INTEGER_32) ti4_1;
																		} else {
																			RTHOOK(162);
																			if ((nstcall = 0, F88_1166(Current, *(EIF_REFERENCE *)(Current)))) {
																				RTHOOK(163);
																				*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
																				RTHOOK(164);
																				*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
																				RTHOOK(165);
																				loc1 = RTMS_EX_H("minus",5,1769683827);
																				RTHOOK(166);
																				*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
																				RTHOOK(167);
																				*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
																				RTHOOK(168);
																				ti4_1 = (EIF_INTEGER_32) ((EIF_NATURAL_8) 20U);
																				*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_4_) = (EIF_INTEGER_32) ti4_1;
																			} else {
																				RTHOOK(169);
																				if ((nstcall = 0, F88_1167(Current, *(EIF_REFERENCE *)(Current)))) {
																					RTHOOK(170);
																					*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
																					RTHOOK(171);
																					*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
																					RTHOOK(172);
																					loc1 = RTMS_EX_H("comma",5,1870202721);
																					RTHOOK(173);
																					*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
																					RTHOOK(174);
																					*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
																					RTHOOK(175);
																					ti4_1 = (EIF_INTEGER_32) ((EIF_NATURAL_8) 21U);
																					*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_4_) = (EIF_INTEGER_32) ti4_1;
																				} else {
																					RTHOOK(176);
																					if ((nstcall = 0, F88_1168(Current, *(EIF_REFERENCE *)(Current)))) {
																						RTHOOK(177);
																						*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
																						RTHOOK(178);
																						*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
																						RTHOOK(179);
																						loc1 = RTMS_EX_H("space",5,1886313829);
																						RTHOOK(180);
																						*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
																						RTHOOK(181);
																						*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
																						RTHOOK(182);
																						ti4_1 = (EIF_INTEGER_32) ((EIF_NATURAL_8) 22U);
																						*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_4_) = (EIF_INTEGER_32) ti4_1;
																					} else {
																						RTHOOK(183);
																						if ((nstcall = 0, F88_1169(Current, *(EIF_REFERENCE *)(Current)))) {
																							RTHOOK(184);
																							*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
																							RTHOOK(185);
																							*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
																							RTHOOK(186);
																							loc1 = RTMS_EX_H("dot",3,6582132);
																							RTHOOK(187);
																							*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
																							RTHOOK(188);
																							*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
																							RTHOOK(189);
																							ti4_1 = (EIF_INTEGER_32) ((EIF_NATURAL_8) 23U);
																							*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_4_) = (EIF_INTEGER_32) ti4_1;
																						} else {
																							RTHOOK(190);
																							if ((nstcall = 0, F88_1171(Current, *(EIF_REFERENCE *)(Current)))) {
																								RTHOOK(191);
																								*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
																								RTHOOK(192);
																								*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
																								RTHOOK(193);
																								loc1 = RTMS_EX_H("meridiem",8,1230131053);
																								RTHOOK(194);
																								*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
																								RTHOOK(195);
																								*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
																								RTHOOK(196);
																								ti4_1 = (EIF_INTEGER_32) ((EIF_NATURAL_8) 24U);
																								*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_4_) = (EIF_INTEGER_32) ti4_1;
																							} else {
																								
																								RTHOOK(197);
																								*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
																								RTHOOK(198);
																								*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
																								RTHOOK(199);
																								loc1 = RTMS_EX_H("hour-12-clock-scale-on-2-digits",31,1799302003);
																								RTHOOK(200);
																								*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 12L);
																								RTHOOK(201);
																								*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_3_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
																								RTHOOK(202);
																								*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
																								RTHOOK(203);
																								*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
																								RTHOOK(204);
																								ti4_1 = (EIF_INTEGER_32) ((EIF_NATURAL_8) 12U);
																								*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_4_) = (EIF_INTEGER_32) ti4_1;
																							}
																						}
																					}
																				}
																			}
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	RTHOOK(205);
	RTAR(Current, loc1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) loc1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(206);
		RTCT("value_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current);
		tb1 = (nstcall = 1, F968_6088(RTCW(tr1), arg1));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(207);
	RTLE;
	RTEE;
}

/* {DATE_TIME_CODE}.value */
EIF_REFERENCE F757_4066 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {DATE_TIME_CODE}.count_max */
EIF_INTEGER_32 F757_4067 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_0_);
}


/* {DATE_TIME_CODE}.count_min */
EIF_INTEGER_32 F757_4068 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_1_);
}


/* {DATE_TIME_CODE}.name */
EIF_REFERENCE F757_4069 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {DATE_TIME_CODE}.value_max */
EIF_INTEGER_32 F757_4070 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_2_);
}


/* {DATE_TIME_CODE}.value_min */
EIF_INTEGER_32 F757_4071 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_3_);
}


/* {DATE_TIME_CODE}.type */
EIF_INTEGER_32 F757_4072 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_4_);
}


/* {DATE_TIME_CODE}.debug_output */
EIF_REFERENCE F757_4073 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Result);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("debug_output", 756, Current, 0, 0, 7044);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNS(eif_new_type(969, 0x01).id, 969, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F965_5930(RTCW(Result)));
	RTHOOK(2);
	(nstcall = 1, F970_6176(RTCW(Result), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_4_)));
	RTHOOK(3);
	tr1 = RTMS_EX_H(" -> ",4,539835936);
	(nstcall = 1, F970_6173(RTCW(Result), tr1));
	RTHOOK(4);
	(nstcall = 1, F970_6173(RTCW(Result), *(EIF_REFERENCE *)(Current + _REFACS_1_)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
	return Result;
}

void EIF_Minit204 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
