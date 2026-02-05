#include "epoly10.h"
#include "../E1/eoffsets.h"


#ifdef __cplusplus
extern "C" {
#endif

char *(*R3187[329])();
void R3187_init () {
	{long i; for (i = 0; i < 2; i++) R3187[i] = (char *(*)()) F646_3816;}
	R3187[328] = (char *(*)()) F974_6434;
}

char *(*R3191[329])();
void R3191_init () {
	{long i; for (i = 0; i < 2; i++) R3191[i] = (char *(*)()) F646_3820;}
	R3191[328] = (char *(*)()) F974_6435;
}

char *(*R3211[296])();
void R3211_init () {
	R3211[0] = (char *(*)()) F678_3872_3211_19;
	R3211[1] = (char *(*)()) F679_3911;
	R3211[2] = (char *(*)()) F680_3911_3211_19;
	R3211[3] = (char *(*)()) F681_3911_3211_19;
	R3211[4] = (char *(*)()) F682_3911_3211_19;
	R3211[5] = (char *(*)()) F683_3911_3211_19;
	R3211[6] = (char *(*)()) F684_3911_3211_19;
	R3211[7] = (char *(*)()) F685_3911_3211_19;
	R3211[8] = (char *(*)()) F686_3911_3211_19;
	R3211[9] = (char *(*)()) F687_3911_3211_19;
	R3211[10] = (char *(*)()) F688_3911_3211_19;
	R3211[11] = (char *(*)()) F689_3911_3211_19;
	R3211[12] = (char *(*)()) F690_3911_3211_19;
	R3211[13] = (char *(*)()) F691_3911_3211_19;
	R3211[14] = (char *(*)()) F692_3911_3211_19;
	R3211[15] = (char *(*)()) F693_3911_3211_19;
	R3211[76] = (char *(*)()) F694_3968;
	R3211[77] = (char *(*)()) F695_3968_3211_19;
	R3211[82] = (char *(*)()) F760_4161;
	R3211[83] = (char *(*)()) F761_4161_3211_19;
	R3211[84] = (char *(*)()) F762_4161_3211_19;
	R3211[85] = (char *(*)()) F763_4161_3211_19;
	R3211[86] = (char *(*)()) F764_4161_3211_19;
	R3211[87] = (char *(*)()) F765_4161_3211_19;
	R3211[88] = (char *(*)()) F766_4161_3211_19;
	R3211[89] = (char *(*)()) F767_4161_3211_19;
	R3211[90] = (char *(*)()) F768_4161_3211_19;
	R3211[91] = (char *(*)()) F769_4161_3211_19;
	R3211[92] = (char *(*)()) F770_4161_3211_19;
	R3211[93] = (char *(*)()) F771_4161_3211_19;
	R3211[94] = (char *(*)()) F772_4161_3211_19;
	R3211[95] = (char *(*)()) F773_4161_3211_19;
	R3211[96] = (char *(*)()) F774_4161_3211_19;
	R3211[147] = (char *(*)()) F825_4350;
	R3211[148] = (char *(*)()) F826_4350_3211_19;
	R3211[149] = (char *(*)()) F827_4350_3211_19;
	R3211[150] = (char *(*)()) F828_4350_3211_19;
	R3211[151] = (char *(*)()) F829_4350_3211_19;
	R3211[152] = (char *(*)()) F830_4350_3211_19;
	R3211[153] = (char *(*)()) F831_4350_3211_19;
	R3211[154] = (char *(*)()) F832_4350_3211_19;
	R3211[155] = (char *(*)()) F833_4350_3211_19;
	R3211[156] = (char *(*)()) F834_4350_3211_19;
	R3211[157] = (char *(*)()) F835_4350_3211_19;
	R3211[158] = (char *(*)()) F836_4350_3211_19;
	R3211[159] = (char *(*)()) F837_4350_3211_19;
	R3211[160] = (char *(*)()) F838_4350_3211_19;
	R3211[161] = (char *(*)()) F839_4350_3211_19;
	R3211[162] = (char *(*)()) F825_4350;
	R3211[166] = (char *(*)()) F844_4477;
	R3211[167] = (char *(*)()) F845_4477;
	R3211[168] = (char *(*)()) F846_4477_3211_19;
	R3211[169] = (char *(*)()) F847_4477_3211_19;
	R3211[170] = (char *(*)()) F848_4477_3211_19;
	R3211[171] = (char *(*)()) F846_4477_3211_19;
	{long i; for (i = 172; i < 174; i++) R3211[i] = (char *(*)()) F844_4477;}
	R3211[174] = (char *(*)()) F847_4477_3211_19;
	R3211[209] = (char *(*)()) F887_4697;
	R3211[291] = (char *(*)()) F969_6117_3211_19;
	R3211[292] = (char *(*)()) F970_6139_3211_19;
	R3211[294] = (char *(*)()) F972_6285_3211_19;
	R3211[295] = (char *(*)()) F973_6308_3211_19;
}
static EIF_REFERENCE F678_3872_3211_19 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F678_3872(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(892, 0x00).id, 892, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F680_3911_3211_19 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F680_3911(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(892, 0x00).id, 892, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F681_3911_3211_19 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F681_3911(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n8;
	} else {
		Result = RTLNS(eif_new_type(901, 0x00).id, 901, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_NATURAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F682_3911_3211_19 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F682_3911(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c4;
	} else {
		Result = RTLNS(eif_new_type(916, 0x00).id, 916, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_CHARACTER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F683_3911_3211_19 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F683_3911(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c1;
	} else {
		Result = RTLNS(eif_new_type(919, 0x00).id, 919, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_CHARACTER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F684_3911_3211_19 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F684_3911(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		Result = RTLNS(eif_new_type(958, 0x00).id, 958, _OBJSIZ_0_0_0_0_0_1_0_0_);
		*(EIF_POINTER *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F685_3911_3211_19 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F685_3911(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(eif_new_type(904, 0x00).id, 904, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F686_3911_3211_19 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F686_3911(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n1;
	} else {
		Result = RTLNS(eif_new_type(907, 0x00).id, 907, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_NATURAL_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F687_3911_3211_19 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F687_3911(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r4;
	} else {
		Result = RTLNS(eif_new_type(910, 0x00).id, 910, _OBJSIZ_0_0_0_0_1_0_0_0_);
		*(EIF_REAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F688_3911_3211_19 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F688_3911(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r8;
	} else {
		Result = RTLNS(eif_new_type(913, 0x00).id, 913, _OBJSIZ_0_0_0_0_0_0_0_1_);
		*(EIF_REAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F689_3911_3211_19 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F689_3911(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i2;
	} else {
		Result = RTLNS(eif_new_type(895, 0x00).id, 895, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_INTEGER_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F690_3911_3211_19 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F690_3911(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i1;
	} else {
		Result = RTLNS(eif_new_type(898, 0x00).id, 898, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_INTEGER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F691_3911_3211_19 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F691_3911(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i8;
	} else {
		Result = RTLNS(eif_new_type(889, 0x00).id, 889, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_INTEGER_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F692_3911_3211_19 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F692_3911(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n2;
	} else {
		Result = RTLNS(eif_new_type(925, 0x00).id, 925, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_NATURAL_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F693_3911_3211_19 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F693_3911(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_b = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_b;
	} else {
		Result = RTLNS(eif_new_type(922, 0x00).id, 922, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_BOOLEAN *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F695_3968_3211_19 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F695_3968(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(892, 0x00).id, 892, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F761_4161_3211_19 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F761_4161(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(892, 0x00).id, 892, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F762_4161_3211_19 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F762_4161(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n8;
	} else {
		Result = RTLNS(eif_new_type(901, 0x00).id, 901, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_NATURAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F763_4161_3211_19 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F763_4161(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c4;
	} else {
		Result = RTLNS(eif_new_type(916, 0x00).id, 916, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_CHARACTER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F764_4161_3211_19 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F764_4161(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c1;
	} else {
		Result = RTLNS(eif_new_type(919, 0x00).id, 919, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_CHARACTER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F765_4161_3211_19 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F765_4161(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		Result = RTLNS(eif_new_type(958, 0x00).id, 958, _OBJSIZ_0_0_0_0_0_1_0_0_);
		*(EIF_POINTER *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F766_4161_3211_19 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F766_4161(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(eif_new_type(904, 0x00).id, 904, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F767_4161_3211_19 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F767_4161(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n1;
	} else {
		Result = RTLNS(eif_new_type(907, 0x00).id, 907, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_NATURAL_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F768_4161_3211_19 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F768_4161(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r4;
	} else {
		Result = RTLNS(eif_new_type(910, 0x00).id, 910, _OBJSIZ_0_0_0_0_1_0_0_0_);
		*(EIF_REAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F769_4161_3211_19 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F769_4161(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r8;
	} else {
		Result = RTLNS(eif_new_type(913, 0x00).id, 913, _OBJSIZ_0_0_0_0_0_0_0_1_);
		*(EIF_REAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F770_4161_3211_19 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F770_4161(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i2;
	} else {
		Result = RTLNS(eif_new_type(895, 0x00).id, 895, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_INTEGER_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F771_4161_3211_19 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F771_4161(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i1;
	} else {
		Result = RTLNS(eif_new_type(898, 0x00).id, 898, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_INTEGER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F772_4161_3211_19 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F772_4161(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i8;
	} else {
		Result = RTLNS(eif_new_type(889, 0x00).id, 889, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_INTEGER_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F773_4161_3211_19 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F773_4161(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n2;
	} else {
		Result = RTLNS(eif_new_type(925, 0x00).id, 925, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_NATURAL_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F774_4161_3211_19 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F774_4161(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_b = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_b;
	} else {
		Result = RTLNS(eif_new_type(922, 0x00).id, 922, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_BOOLEAN *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F826_4350_3211_19 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F826_4350(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(892, 0x00).id, 892, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F827_4350_3211_19 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F827_4350(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n8;
	} else {
		Result = RTLNS(eif_new_type(901, 0x00).id, 901, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_NATURAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F828_4350_3211_19 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F828_4350(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c4;
	} else {
		Result = RTLNS(eif_new_type(916, 0x00).id, 916, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_CHARACTER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F829_4350_3211_19 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F829_4350(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c1;
	} else {
		Result = RTLNS(eif_new_type(919, 0x00).id, 919, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_CHARACTER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F830_4350_3211_19 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F830_4350(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		Result = RTLNS(eif_new_type(958, 0x00).id, 958, _OBJSIZ_0_0_0_0_0_1_0_0_);
		*(EIF_POINTER *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F831_4350_3211_19 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F831_4350(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(eif_new_type(904, 0x00).id, 904, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F832_4350_3211_19 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F832_4350(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n1;
	} else {
		Result = RTLNS(eif_new_type(907, 0x00).id, 907, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_NATURAL_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F833_4350_3211_19 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F833_4350(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r4;
	} else {
		Result = RTLNS(eif_new_type(910, 0x00).id, 910, _OBJSIZ_0_0_0_0_1_0_0_0_);
		*(EIF_REAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F834_4350_3211_19 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F834_4350(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r8;
	} else {
		Result = RTLNS(eif_new_type(913, 0x00).id, 913, _OBJSIZ_0_0_0_0_0_0_0_1_);
		*(EIF_REAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F835_4350_3211_19 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F835_4350(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i2;
	} else {
		Result = RTLNS(eif_new_type(895, 0x00).id, 895, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_INTEGER_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F836_4350_3211_19 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F836_4350(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i1;
	} else {
		Result = RTLNS(eif_new_type(898, 0x00).id, 898, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_INTEGER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F837_4350_3211_19 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F837_4350(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i8;
	} else {
		Result = RTLNS(eif_new_type(889, 0x00).id, 889, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_INTEGER_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F838_4350_3211_19 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F838_4350(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n2;
	} else {
		Result = RTLNS(eif_new_type(925, 0x00).id, 925, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_NATURAL_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F839_4350_3211_19 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F839_4350(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_b = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_b;
	} else {
		Result = RTLNS(eif_new_type(922, 0x00).id, 922, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_BOOLEAN *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F846_4477_3211_19 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F846_4477(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(eif_new_type(904, 0x00).id, 904, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F847_4477_3211_19 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F847_4477(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(892, 0x00).id, 892, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F848_4477_3211_19 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F848_4477(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(892, 0x00).id, 892, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F969_6117_3211_19 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F969_6117(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c1;
	} else {
		Result = RTLNS(eif_new_type(919, 0x00).id, 919, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_CHARACTER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F970_6139_3211_19 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F970_6139(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c1;
	} else {
		Result = RTLNS(eif_new_type(919, 0x00).id, 919, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_CHARACTER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F972_6285_3211_19 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F972_6285(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c4;
	} else {
		Result = RTLNS(eif_new_type(916, 0x00).id, 916, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_CHARACTER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F973_6308_3211_19 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F973_6308(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c4;
	} else {
		Result = RTLNS(eif_new_type(916, 0x00).id, 916, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_CHARACTER_32 *)Result = r;
		return Result;
	}
}

char *(*R3212[296])();
void R3212_init () {
	R3212[0] = (char *(*)()) F678_3869;
	R3212[1] = (char *(*)()) F679_3916;
	R3212[2] = (char *(*)()) F680_3916;
	R3212[3] = (char *(*)()) F681_3916;
	R3212[4] = (char *(*)()) F682_3916;
	R3212[5] = (char *(*)()) F683_3916;
	R3212[6] = (char *(*)()) F684_3916;
	R3212[7] = (char *(*)()) F685_3916;
	R3212[8] = (char *(*)()) F686_3916;
	R3212[9] = (char *(*)()) F687_3916;
	R3212[10] = (char *(*)()) F688_3916;
	R3212[11] = (char *(*)()) F689_3916;
	R3212[12] = (char *(*)()) F690_3916;
	R3212[13] = (char *(*)()) F691_3916;
	R3212[14] = (char *(*)()) F692_3916;
	R3212[15] = (char *(*)()) F693_3916;
	R3212[76] = (char *(*)()) F694_3971;
	R3212[77] = (char *(*)()) F695_3971;
	R3212[82] = (char *(*)()) F760_4169;
	R3212[83] = (char *(*)()) F761_4169;
	R3212[84] = (char *(*)()) F762_4169;
	R3212[85] = (char *(*)()) F763_4169;
	R3212[86] = (char *(*)()) F764_4169;
	R3212[87] = (char *(*)()) F765_4169;
	R3212[88] = (char *(*)()) F766_4169;
	R3212[89] = (char *(*)()) F767_4169;
	R3212[90] = (char *(*)()) F768_4169;
	R3212[91] = (char *(*)()) F769_4169;
	R3212[92] = (char *(*)()) F770_4169;
	R3212[93] = (char *(*)()) F771_4169;
	R3212[94] = (char *(*)()) F772_4169;
	R3212[95] = (char *(*)()) F773_4169;
	R3212[96] = (char *(*)()) F774_4169;
	R3212[147] = (char *(*)()) F694_3971;
	R3212[148] = (char *(*)()) F695_3971;
	R3212[149] = (char *(*)()) F696_3971;
	R3212[150] = (char *(*)()) F697_3971;
	R3212[151] = (char *(*)()) F698_3971;
	R3212[152] = (char *(*)()) F699_3971;
	R3212[153] = (char *(*)()) F700_3971;
	R3212[154] = (char *(*)()) F701_3971;
	R3212[155] = (char *(*)()) F702_3971;
	R3212[156] = (char *(*)()) F703_3971;
	R3212[157] = (char *(*)()) F704_3971;
	R3212[158] = (char *(*)()) F705_3971;
	R3212[159] = (char *(*)()) F706_3971;
	R3212[160] = (char *(*)()) F707_3971;
	R3212[161] = (char *(*)()) F708_3971;
	R3212[162] = (char *(*)()) F694_3971;
	R3212[166] = (char *(*)()) F844_4482;
	R3212[167] = (char *(*)()) F845_4482;
	R3212[168] = (char *(*)()) F846_4482;
	R3212[169] = (char *(*)()) F847_4482;
	R3212[170] = (char *(*)()) F848_4482;
	R3212[171] = (char *(*)()) F846_4482;
	{long i; for (i = 172; i < 174; i++) R3212[i] = (char *(*)()) F844_4482;}
	R3212[174] = (char *(*)()) F847_4482;
	R3212[209] = (char *(*)()) F887_4727;
	{long i; for (i = 291; i < 293; i++) R3212[i] = (char *(*)()) F968_6084;}
	{long i; for (i = 294; i < 296; i++) R3212[i] = (char *(*)()) F971_6249;}
}

EIF_TYPE_INDEX *Y3212_gen_type [326];
EIF_TYPE_INDEX Y3212 [326];
void Y3212_init (void)
{
	egc_routines_types [3212] = Y3212;
	egc_routines_gen_types [3212] = Y3212_gen_type;
	egc_routines_offset [3212] = 647;
	{long i; for (i = 0; i < 108; i++) Y3212[i] = 892;};
	{long i; for (i = 112; i < 127; i++) Y3212[i] = 892;};
	{long i; for (i = 177; i < 193; i++) Y3212[i] = 892;};
	{long i; for (i = 196; i < 205; i++) Y3212[i] = 892;};
	Y3212[239] = 892;
	{long i; for (i = 320; i < 326; i++) Y3212[i] = 892;};
}

char *(*R3213[296])();
void R3213_init () {
	R3213[0] = (char *(*)()) F678_3871;
	R3213[1] = (char *(*)()) F679_3917;
	R3213[2] = (char *(*)()) F680_3917;
	R3213[3] = (char *(*)()) F681_3917;
	R3213[4] = (char *(*)()) F682_3917;
	R3213[5] = (char *(*)()) F683_3917;
	R3213[6] = (char *(*)()) F684_3917;
	R3213[7] = (char *(*)()) F685_3917;
	R3213[8] = (char *(*)()) F686_3917;
	R3213[9] = (char *(*)()) F687_3917;
	R3213[10] = (char *(*)()) F688_3917;
	R3213[11] = (char *(*)()) F689_3917;
	R3213[12] = (char *(*)()) F690_3917;
	R3213[13] = (char *(*)()) F691_3917;
	R3213[14] = (char *(*)()) F692_3917;
	R3213[15] = (char *(*)()) F693_3917;
	R3213[76] = (char *(*)()) F754_4023;
	R3213[77] = (char *(*)()) F755_4023;
	R3213[82] = (char *(*)()) F760_4170;
	R3213[83] = (char *(*)()) F761_4170;
	R3213[84] = (char *(*)()) F762_4170;
	R3213[85] = (char *(*)()) F763_4170;
	R3213[86] = (char *(*)()) F764_4170;
	R3213[87] = (char *(*)()) F765_4170;
	R3213[88] = (char *(*)()) F766_4170;
	R3213[89] = (char *(*)()) F767_4170;
	R3213[90] = (char *(*)()) F768_4170;
	R3213[91] = (char *(*)()) F769_4170;
	R3213[92] = (char *(*)()) F770_4170;
	R3213[93] = (char *(*)()) F771_4170;
	R3213[94] = (char *(*)()) F772_4170;
	R3213[95] = (char *(*)()) F773_4170;
	R3213[96] = (char *(*)()) F774_4170;
	R3213[147] = (char *(*)()) F825_4365;
	R3213[148] = (char *(*)()) F826_4365;
	R3213[149] = (char *(*)()) F827_4365;
	R3213[150] = (char *(*)()) F828_4365;
	R3213[151] = (char *(*)()) F829_4365;
	R3213[152] = (char *(*)()) F830_4365;
	R3213[153] = (char *(*)()) F831_4365;
	R3213[154] = (char *(*)()) F832_4365;
	R3213[155] = (char *(*)()) F833_4365;
	R3213[156] = (char *(*)()) F834_4365;
	R3213[157] = (char *(*)()) F835_4365;
	R3213[158] = (char *(*)()) F836_4365;
	R3213[159] = (char *(*)()) F837_4365;
	R3213[160] = (char *(*)()) F838_4365;
	R3213[161] = (char *(*)()) F839_4365;
	R3213[162] = (char *(*)()) F825_4365;
	R3213[166] = (char *(*)()) F844_4483;
	R3213[167] = (char *(*)()) F845_4483;
	R3213[168] = (char *(*)()) F846_4483;
	R3213[169] = (char *(*)()) F847_4483;
	R3213[170] = (char *(*)()) F848_4483;
	R3213[171] = (char *(*)()) F846_4483;
	{long i; for (i = 172; i < 174; i++) R3213[i] = (char *(*)()) F844_4483;}
	R3213[174] = (char *(*)()) F847_4483;
	R3213[209] = (char *(*)()) F887_4726;
	{long i; for (i = 291; i < 293; i++) R3213[i] = (char *(*)()) F968_6082;}
	{long i; for (i = 294; i < 296; i++) R3213[i] = (char *(*)()) F971_6247;}
}

char *(*R3215[296])();
void R3215_init () {
	R3215[0] = (char *(*)()) F678_3875;
	R3215[1] = (char *(*)()) F679_3926;
	R3215[2] = (char *(*)()) F680_3926;
	R3215[3] = (char *(*)()) F681_3926;
	R3215[4] = (char *(*)()) F682_3926;
	R3215[5] = (char *(*)()) F683_3926;
	R3215[6] = (char *(*)()) F684_3926;
	R3215[7] = (char *(*)()) F685_3926;
	R3215[8] = (char *(*)()) F686_3926;
	R3215[9] = (char *(*)()) F687_3926;
	R3215[10] = (char *(*)()) F688_3926;
	R3215[11] = (char *(*)()) F689_3926;
	R3215[12] = (char *(*)()) F690_3926;
	R3215[13] = (char *(*)()) F691_3926;
	R3215[14] = (char *(*)()) F692_3926;
	R3215[15] = (char *(*)()) F693_3926;
	R3215[76] = (char *(*)()) F694_3976;
	R3215[77] = (char *(*)()) F695_3976;
	R3215[82] = (char *(*)()) F760_4175;
	R3215[83] = (char *(*)()) F761_4175;
	R3215[84] = (char *(*)()) F762_4175;
	R3215[85] = (char *(*)()) F763_4175;
	R3215[86] = (char *(*)()) F764_4175;
	R3215[87] = (char *(*)()) F765_4175;
	R3215[88] = (char *(*)()) F766_4175;
	R3215[89] = (char *(*)()) F767_4175;
	R3215[90] = (char *(*)()) F768_4175;
	R3215[91] = (char *(*)()) F769_4175;
	R3215[92] = (char *(*)()) F770_4175;
	R3215[93] = (char *(*)()) F771_4175;
	R3215[94] = (char *(*)()) F772_4175;
	R3215[95] = (char *(*)()) F773_4175;
	R3215[96] = (char *(*)()) F774_4175;
	R3215[147] = (char *(*)()) F825_4371;
	R3215[148] = (char *(*)()) F826_4371;
	R3215[149] = (char *(*)()) F827_4371;
	R3215[150] = (char *(*)()) F828_4371;
	R3215[151] = (char *(*)()) F829_4371;
	R3215[152] = (char *(*)()) F830_4371;
	R3215[153] = (char *(*)()) F831_4371;
	R3215[154] = (char *(*)()) F832_4371;
	R3215[155] = (char *(*)()) F833_4371;
	R3215[156] = (char *(*)()) F834_4371;
	R3215[157] = (char *(*)()) F835_4371;
	R3215[158] = (char *(*)()) F836_4371;
	R3215[159] = (char *(*)()) F837_4371;
	R3215[160] = (char *(*)()) F838_4371;
	R3215[161] = (char *(*)()) F839_4371;
	R3215[162] = (char *(*)()) F825_4371;
	R3215[166] = (char *(*)()) F844_4499;
	R3215[167] = (char *(*)()) F845_4499;
	R3215[168] = (char *(*)()) F846_4499;
	R3215[169] = (char *(*)()) F847_4499;
	R3215[170] = (char *(*)()) F848_4499;
	R3215[171] = (char *(*)()) F846_4499;
	{long i; for (i = 172; i < 174; i++) R3215[i] = (char *(*)()) F844_4499;}
	R3215[174] = (char *(*)()) F847_4499;
	R3215[209] = (char *(*)()) F887_4724;
	{long i; for (i = 291; i < 293; i++) R3215[i] = (char *(*)()) F965_5942;}
	{long i; for (i = 294; i < 296; i++) R3215[i] = (char *(*)()) F965_5942;}
}

char *(*R3235[15])();
void R3235_init () {
	R3235[0] = (char *(*)()) F679_3905;
	R3235[1] = (char *(*)()) F680_3905;
	R3235[2] = (char *(*)()) F681_3905;
	R3235[3] = (char *(*)()) F682_3905;
	R3235[4] = (char *(*)()) F683_3905;
	R3235[5] = (char *(*)()) F684_3905;
	R3235[6] = (char *(*)()) F685_3905;
	R3235[7] = (char *(*)()) F686_3905;
	R3235[8] = (char *(*)()) F687_3905;
	R3235[9] = (char *(*)()) F688_3905;
	R3235[10] = (char *(*)()) F689_3905;
	R3235[11] = (char *(*)()) F690_3905;
	R3235[12] = (char *(*)()) F691_3905;
	R3235[13] = (char *(*)()) F692_3905;
	R3235[14] = (char *(*)()) F693_3905;
}

char *(*R3236[15])();
void R3236_init () {
	R3236[0] = (char *(*)()) F679_3906;
	R3236[1] = (char *(*)()) F680_3906_3236_118;
	R3236[2] = (char *(*)()) F681_3906_3236_118;
	R3236[3] = (char *(*)()) F682_3906_3236_118;
	R3236[4] = (char *(*)()) F683_3906_3236_118;
	R3236[5] = (char *(*)()) F684_3906_3236_118;
	R3236[6] = (char *(*)()) F685_3906_3236_118;
	R3236[7] = (char *(*)()) F686_3906_3236_118;
	R3236[8] = (char *(*)()) F687_3906_3236_118;
	R3236[9] = (char *(*)()) F688_3906_3236_118;
	R3236[10] = (char *(*)()) F689_3906_3236_118;
	R3236[11] = (char *(*)()) F690_3906_3236_118;
	R3236[12] = (char *(*)()) F691_3906_3236_118;
	R3236[13] = (char *(*)()) F692_3906_3236_118;
	R3236[14] = (char *(*)()) F693_3906_3236_118;
}
static void F680_3906_3236_118 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F680_3906(Current, *(EIF_INTEGER_32 *)arg1, arg2, arg3);
}
static void F681_3906_3236_118 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F681_3906(Current, *(EIF_NATURAL_64 *)arg1, arg2, arg3);
}
static void F682_3906_3236_118 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F682_3906(Current, *(EIF_CHARACTER_32 *)arg1, arg2, arg3);
}
static void F683_3906_3236_118 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F683_3906(Current, *(EIF_CHARACTER_8 *)arg1, arg2, arg3);
}
static void F684_3906_3236_118 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F684_3906(Current, *(EIF_POINTER *)arg1, arg2, arg3);
}
static void F685_3906_3236_118 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F685_3906(Current, *(EIF_NATURAL_32 *)arg1, arg2, arg3);
}
static void F686_3906_3236_118 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F686_3906(Current, *(EIF_NATURAL_8 *)arg1, arg2, arg3);
}
static void F687_3906_3236_118 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F687_3906(Current, *(EIF_REAL_32 *)arg1, arg2, arg3);
}
static void F688_3906_3236_118 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F688_3906(Current, *(EIF_REAL_64 *)arg1, arg2, arg3);
}
static void F689_3906_3236_118 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F689_3906(Current, *(EIF_INTEGER_16 *)arg1, arg2, arg3);
}
static void F690_3906_3236_118 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F690_3906(Current, *(EIF_INTEGER_8 *)arg1, arg2, arg3);
}
static void F691_3906_3236_118 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F691_3906(Current, *(EIF_INTEGER_64 *)arg1, arg2, arg3);
}
static void F692_3906_3236_118 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F692_3906(Current, *(EIF_NATURAL_16 *)arg1, arg2, arg3);
}
static void F693_3906_3236_118 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F693_3906(Current, *(EIF_BOOLEAN *)arg1, arg2, arg3);
}

char *(*R3239[15])();
void R3239_init () {
	R3239[0] = (char *(*)()) F679_3909;
	R3239[1] = (char *(*)()) F680_3909;
	R3239[2] = (char *(*)()) F681_3909;
	R3239[3] = (char *(*)()) F682_3909;
	R3239[4] = (char *(*)()) F683_3909;
	R3239[5] = (char *(*)()) F684_3909;
	R3239[6] = (char *(*)()) F685_3909;
	R3239[7] = (char *(*)()) F686_3909;
	R3239[8] = (char *(*)()) F687_3909;
	R3239[9] = (char *(*)()) F688_3909;
	R3239[10] = (char *(*)()) F689_3909;
	R3239[11] = (char *(*)()) F690_3909;
	R3239[12] = (char *(*)()) F691_3909;
	R3239[13] = (char *(*)()) F692_3909;
	R3239[14] = (char *(*)()) F693_3909;
}

char *(*R3242[15])();
void R3242_init () {
	R3242[0] = (char *(*)()) F679_3922;
	R3242[1] = (char *(*)()) F680_3922;
	R3242[2] = (char *(*)()) F681_3922;
	R3242[3] = (char *(*)()) F682_3922;
	R3242[4] = (char *(*)()) F683_3922;
	R3242[5] = (char *(*)()) F684_3922;
	R3242[6] = (char *(*)()) F685_3922;
	R3242[7] = (char *(*)()) F686_3922;
	R3242[8] = (char *(*)()) F687_3922;
	R3242[9] = (char *(*)()) F688_3922;
	R3242[10] = (char *(*)()) F689_3922;
	R3242[11] = (char *(*)()) F690_3922;
	R3242[12] = (char *(*)()) F691_3922;
	R3242[13] = (char *(*)()) F692_3922;
	R3242[14] = (char *(*)()) F693_3922;
}

char *(*R3243[15])();
void R3243_init () {
	R3243[0] = (char *(*)()) F679_3923;
	R3243[1] = (char *(*)()) F680_3923_3243_2;
	R3243[2] = (char *(*)()) F681_3923_3243_2;
	R3243[3] = (char *(*)()) F682_3923_3243_2;
	R3243[4] = (char *(*)()) F683_3923_3243_2;
	R3243[5] = (char *(*)()) F684_3923_3243_2;
	R3243[6] = (char *(*)()) F685_3923_3243_2;
	R3243[7] = (char *(*)()) F686_3923_3243_2;
	R3243[8] = (char *(*)()) F687_3923_3243_2;
	R3243[9] = (char *(*)()) F688_3923_3243_2;
	R3243[10] = (char *(*)()) F689_3923_3243_2;
	R3243[11] = (char *(*)()) F690_3923_3243_2;
	R3243[12] = (char *(*)()) F691_3923_3243_2;
	R3243[13] = (char *(*)()) F692_3923_3243_2;
	R3243[14] = (char *(*)()) F693_3923_3243_2;
}
static EIF_BOOLEAN F680_3923_3243_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F680_3923(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_BOOLEAN F681_3923_3243_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F681_3923(Current, *(EIF_NATURAL_64 *)arg1);
}
static EIF_BOOLEAN F682_3923_3243_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F682_3923(Current, *(EIF_CHARACTER_32 *)arg1);
}
static EIF_BOOLEAN F683_3923_3243_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F683_3923(Current, *(EIF_CHARACTER_8 *)arg1);
}
static EIF_BOOLEAN F684_3923_3243_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F684_3923(Current, *(EIF_POINTER *)arg1);
}
static EIF_BOOLEAN F685_3923_3243_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F685_3923(Current, *(EIF_NATURAL_32 *)arg1);
}
static EIF_BOOLEAN F686_3923_3243_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F686_3923(Current, *(EIF_NATURAL_8 *)arg1);
}
static EIF_BOOLEAN F687_3923_3243_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F687_3923(Current, *(EIF_REAL_32 *)arg1);
}
static EIF_BOOLEAN F688_3923_3243_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F688_3923(Current, *(EIF_REAL_64 *)arg1);
}
static EIF_BOOLEAN F689_3923_3243_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F689_3923(Current, *(EIF_INTEGER_16 *)arg1);
}
static EIF_BOOLEAN F690_3923_3243_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F690_3923(Current, *(EIF_INTEGER_8 *)arg1);
}
static EIF_BOOLEAN F691_3923_3243_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F691_3923(Current, *(EIF_INTEGER_64 *)arg1);
}
static EIF_BOOLEAN F692_3923_3243_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F692_3923(Current, *(EIF_NATURAL_16 *)arg1);
}
static EIF_BOOLEAN F693_3923_3243_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F693_3923(Current, *(EIF_BOOLEAN *)arg1);
}

char *(*R3244[15])();
void R3244_init () {
	R3244[0] = (char *(*)()) F679_3925;
	R3244[1] = (char *(*)()) F680_3925;
	R3244[2] = (char *(*)()) F681_3925;
	R3244[3] = (char *(*)()) F682_3925;
	R3244[4] = (char *(*)()) F683_3925;
	R3244[5] = (char *(*)()) F684_3925;
	R3244[6] = (char *(*)()) F685_3925;
	R3244[7] = (char *(*)()) F686_3925;
	R3244[8] = (char *(*)()) F687_3925;
	R3244[9] = (char *(*)()) F688_3925;
	R3244[10] = (char *(*)()) F689_3925;
	R3244[11] = (char *(*)()) F690_3925;
	R3244[12] = (char *(*)()) F691_3925;
	R3244[13] = (char *(*)()) F692_3925;
	R3244[14] = (char *(*)()) F693_3925;
}

char *(*R3246[15])();
void R3246_init () {
	R3246[0] = (char *(*)()) F679_3932;
	R3246[1] = (char *(*)()) F680_3932_3246_124;
	R3246[2] = (char *(*)()) F681_3932_3246_124;
	R3246[3] = (char *(*)()) F682_3932_3246_124;
	R3246[4] = (char *(*)()) F683_3932_3246_124;
	R3246[5] = (char *(*)()) F684_3932_3246_124;
	R3246[6] = (char *(*)()) F685_3932_3246_124;
	R3246[7] = (char *(*)()) F686_3932_3246_124;
	R3246[8] = (char *(*)()) F687_3932_3246_124;
	R3246[9] = (char *(*)()) F688_3932_3246_124;
	R3246[10] = (char *(*)()) F689_3932_3246_124;
	R3246[11] = (char *(*)()) F690_3932_3246_124;
	R3246[12] = (char *(*)()) F691_3932_3246_124;
	R3246[13] = (char *(*)()) F692_3932_3246_124;
	R3246[14] = (char *(*)()) F693_3932_3246_124;
}
static void F680_3932_3246_124 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F680_3932(Current, *(EIF_INTEGER_32 *)arg1, arg2);
}
static void F681_3932_3246_124 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F681_3932(Current, *(EIF_NATURAL_64 *)arg1, arg2);
}
static void F682_3932_3246_124 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F682_3932(Current, *(EIF_CHARACTER_32 *)arg1, arg2);
}
static void F683_3932_3246_124 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F683_3932(Current, *(EIF_CHARACTER_8 *)arg1, arg2);
}
static void F684_3932_3246_124 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F684_3932(Current, *(EIF_POINTER *)arg1, arg2);
}
static void F685_3932_3246_124 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F685_3932(Current, *(EIF_NATURAL_32 *)arg1, arg2);
}
static void F686_3932_3246_124 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F686_3932(Current, *(EIF_NATURAL_8 *)arg1, arg2);
}
static void F687_3932_3246_124 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F687_3932(Current, *(EIF_REAL_32 *)arg1, arg2);
}
static void F688_3932_3246_124 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F688_3932(Current, *(EIF_REAL_64 *)arg1, arg2);
}
static void F689_3932_3246_124 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F689_3932(Current, *(EIF_INTEGER_16 *)arg1, arg2);
}
static void F690_3932_3246_124 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F690_3932(Current, *(EIF_INTEGER_8 *)arg1, arg2);
}
static void F691_3932_3246_124 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F691_3932(Current, *(EIF_INTEGER_64 *)arg1, arg2);
}
static void F692_3932_3246_124 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F692_3932(Current, *(EIF_NATURAL_16 *)arg1, arg2);
}
static void F693_3932_3246_124 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F693_3932(Current, *(EIF_BOOLEAN *)arg1, arg2);
}

char *(*R3249[15])();
void R3249_init () {
	R3249[0] = (char *(*)()) F679_3935;
	R3249[1] = (char *(*)()) F680_3935;
	R3249[2] = (char *(*)()) F681_3935;
	R3249[3] = (char *(*)()) F682_3935;
	R3249[4] = (char *(*)()) F683_3935;
	R3249[5] = (char *(*)()) F684_3935;
	R3249[6] = (char *(*)()) F685_3935;
	R3249[7] = (char *(*)()) F686_3935;
	R3249[8] = (char *(*)()) F687_3935;
	R3249[9] = (char *(*)()) F688_3935;
	R3249[10] = (char *(*)()) F689_3935;
	R3249[11] = (char *(*)()) F690_3935;
	R3249[12] = (char *(*)()) F691_3935;
	R3249[13] = (char *(*)()) F692_3935;
	R3249[14] = (char *(*)()) F693_3935;
}

char *(*R3256[15])();
void R3256_init () {
	R3256[0] = (char *(*)()) F679_3943;
	R3256[1] = (char *(*)()) F680_3943;
	R3256[2] = (char *(*)()) F681_3943;
	R3256[3] = (char *(*)()) F682_3943;
	R3256[4] = (char *(*)()) F683_3943;
	R3256[5] = (char *(*)()) F684_3943;
	R3256[6] = (char *(*)()) F685_3943;
	R3256[7] = (char *(*)()) F686_3943;
	R3256[8] = (char *(*)()) F687_3943;
	R3256[9] = (char *(*)()) F688_3943;
	R3256[10] = (char *(*)()) F689_3943;
	R3256[11] = (char *(*)()) F690_3943;
	R3256[12] = (char *(*)()) F691_3943;
	R3256[13] = (char *(*)()) F692_3943;
	R3256[14] = (char *(*)()) F693_3943;
}

char *(*R3258[15])();
void R3258_init () {
	R3258[0] = (char *(*)()) F679_3945;
	R3258[1] = (char *(*)()) F680_3945;
	R3258[2] = (char *(*)()) F681_3945;
	R3258[3] = (char *(*)()) F682_3945;
	R3258[4] = (char *(*)()) F683_3945;
	R3258[5] = (char *(*)()) F684_3945;
	R3258[6] = (char *(*)()) F685_3945;
	R3258[7] = (char *(*)()) F686_3945;
	R3258[8] = (char *(*)()) F687_3945;
	R3258[9] = (char *(*)()) F688_3945;
	R3258[10] = (char *(*)()) F689_3945;
	R3258[11] = (char *(*)()) F690_3945;
	R3258[12] = (char *(*)()) F691_3945;
	R3258[13] = (char *(*)()) F692_3945;
	R3258[14] = (char *(*)()) F693_3945;
}

char *(*R3259[15])();
void R3259_init () {
	R3259[0] = (char *(*)()) F679_3946;
	R3259[1] = (char *(*)()) F680_3946;
	R3259[2] = (char *(*)()) F681_3946;
	R3259[3] = (char *(*)()) F682_3946;
	R3259[4] = (char *(*)()) F683_3946;
	R3259[5] = (char *(*)()) F684_3946;
	R3259[6] = (char *(*)()) F685_3946;
	R3259[7] = (char *(*)()) F686_3946;
	R3259[8] = (char *(*)()) F687_3946;
	R3259[9] = (char *(*)()) F688_3946;
	R3259[10] = (char *(*)()) F689_3946;
	R3259[11] = (char *(*)()) F690_3946;
	R3259[12] = (char *(*)()) F691_3946;
	R3259[13] = (char *(*)()) F692_3946;
	R3259[14] = (char *(*)()) F693_3946;
}

char *(*R3263[15])();
void R3263_init () {
	R3263[0] = (char *(*)()) F679_3951;
	R3263[1] = (char *(*)()) F680_3951_3263_118;
	R3263[2] = (char *(*)()) F681_3951_3263_118;
	R3263[3] = (char *(*)()) F682_3951_3263_118;
	R3263[4] = (char *(*)()) F683_3951_3263_118;
	R3263[5] = (char *(*)()) F684_3951_3263_118;
	R3263[6] = (char *(*)()) F685_3951_3263_118;
	R3263[7] = (char *(*)()) F686_3951_3263_118;
	R3263[8] = (char *(*)()) F687_3951_3263_118;
	R3263[9] = (char *(*)()) F688_3951_3263_118;
	R3263[10] = (char *(*)()) F689_3951_3263_118;
	R3263[11] = (char *(*)()) F690_3951_3263_118;
	R3263[12] = (char *(*)()) F691_3951_3263_118;
	R3263[13] = (char *(*)()) F692_3951_3263_118;
	R3263[14] = (char *(*)()) F693_3951_3263_118;
}
static void F680_3951_3263_118 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F680_3951(Current, *(EIF_INTEGER_32 *)arg1, arg2, arg3);
}
static void F681_3951_3263_118 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F681_3951(Current, *(EIF_NATURAL_64 *)arg1, arg2, arg3);
}
static void F682_3951_3263_118 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F682_3951(Current, *(EIF_CHARACTER_32 *)arg1, arg2, arg3);
}
static void F683_3951_3263_118 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F683_3951(Current, *(EIF_CHARACTER_8 *)arg1, arg2, arg3);
}
static void F684_3951_3263_118 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F684_3951(Current, *(EIF_POINTER *)arg1, arg2, arg3);
}
static void F685_3951_3263_118 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F685_3951(Current, *(EIF_NATURAL_32 *)arg1, arg2, arg3);
}
static void F686_3951_3263_118 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F686_3951(Current, *(EIF_NATURAL_8 *)arg1, arg2, arg3);
}
static void F687_3951_3263_118 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F687_3951(Current, *(EIF_REAL_32 *)arg1, arg2, arg3);
}
static void F688_3951_3263_118 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F688_3951(Current, *(EIF_REAL_64 *)arg1, arg2, arg3);
}
static void F689_3951_3263_118 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F689_3951(Current, *(EIF_INTEGER_16 *)arg1, arg2, arg3);
}
static void F690_3951_3263_118 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F690_3951(Current, *(EIF_INTEGER_8 *)arg1, arg2, arg3);
}
static void F691_3951_3263_118 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F691_3951(Current, *(EIF_INTEGER_64 *)arg1, arg2, arg3);
}
static void F692_3951_3263_118 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F692_3951(Current, *(EIF_NATURAL_16 *)arg1, arg2, arg3);
}
static void F693_3951_3263_118 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F693_3951(Current, *(EIF_BOOLEAN *)arg1, arg2, arg3);
}

char *(*R3265[15])();
void R3265_init () {
	R3265[0] = (char *(*)()) F679_3954;
	R3265[1] = (char *(*)()) F680_3954;
	R3265[2] = (char *(*)()) F681_3954;
	R3265[3] = (char *(*)()) F682_3954;
	R3265[4] = (char *(*)()) F683_3954;
	R3265[5] = (char *(*)()) F684_3954;
	R3265[6] = (char *(*)()) F685_3954;
	R3265[7] = (char *(*)()) F686_3954;
	R3265[8] = (char *(*)()) F687_3954;
	R3265[9] = (char *(*)()) F688_3954;
	R3265[10] = (char *(*)()) F689_3954;
	R3265[11] = (char *(*)()) F690_3954;
	R3265[12] = (char *(*)()) F691_3954;
	R3265[13] = (char *(*)()) F692_3954;
	R3265[14] = (char *(*)()) F693_3954;
}

char *(*R3269[15])();
void R3269_init () {
	R3269[0] = (char *(*)()) F679_3960;
	R3269[1] = (char *(*)()) F680_3960;
	R3269[2] = (char *(*)()) F681_3960;
	R3269[3] = (char *(*)()) F682_3960;
	R3269[4] = (char *(*)()) F683_3960;
	R3269[5] = (char *(*)()) F684_3960;
	R3269[6] = (char *(*)()) F685_3960;
	R3269[7] = (char *(*)()) F686_3960;
	R3269[8] = (char *(*)()) F687_3960;
	R3269[9] = (char *(*)()) F688_3960;
	R3269[10] = (char *(*)()) F689_3960;
	R3269[11] = (char *(*)()) F690_3960;
	R3269[12] = (char *(*)()) F691_3960;
	R3269[13] = (char *(*)()) F692_3960;
	R3269[14] = (char *(*)()) F693_3960;
}

char *(*R3270[15])();
void R3270_init () {
	R3270[0] = (char *(*)()) F679_3963;
	R3270[1] = (char *(*)()) F680_3963;
	R3270[2] = (char *(*)()) F681_3963;
	R3270[3] = (char *(*)()) F682_3963;
	R3270[4] = (char *(*)()) F683_3963;
	R3270[5] = (char *(*)()) F684_3963;
	R3270[6] = (char *(*)()) F685_3963;
	R3270[7] = (char *(*)()) F686_3963;
	R3270[8] = (char *(*)()) F687_3963;
	R3270[9] = (char *(*)()) F688_3963;
	R3270[10] = (char *(*)()) F689_3963;
	R3270[11] = (char *(*)()) F690_3963;
	R3270[12] = (char *(*)()) F691_3963;
	R3270[13] = (char *(*)()) F692_3963;
	R3270[14] = (char *(*)()) F693_3963;
}

char *(*R3273[87])();
void R3273_init () {
	R3273[0] = (char *(*)()) F754_4017;
	R3273[1] = (char *(*)()) F755_4017_3273_1;
	R3273[71] = (char *(*)()) F825_4352;
	R3273[72] = (char *(*)()) F826_4352_3273_1;
	R3273[73] = (char *(*)()) F827_4352_3273_1;
	R3273[74] = (char *(*)()) F828_4352_3273_1;
	R3273[75] = (char *(*)()) F829_4352_3273_1;
	R3273[76] = (char *(*)()) F830_4352_3273_1;
	R3273[77] = (char *(*)()) F831_4352_3273_1;
	R3273[78] = (char *(*)()) F832_4352_3273_1;
	R3273[79] = (char *(*)()) F833_4352_3273_1;
	R3273[80] = (char *(*)()) F834_4352_3273_1;
	R3273[81] = (char *(*)()) F835_4352_3273_1;
	R3273[82] = (char *(*)()) F836_4352_3273_1;
	R3273[83] = (char *(*)()) F837_4352_3273_1;
	R3273[84] = (char *(*)()) F838_4352_3273_1;
	R3273[85] = (char *(*)()) F839_4352_3273_1;
	R3273[86] = (char *(*)()) F825_4352;
}
static EIF_REFERENCE F755_4017_3273_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F755_4017(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(892, 0x00).id, 892, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F826_4352_3273_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F826_4352(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(892, 0x00).id, 892, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F827_4352_3273_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F827_4352(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n8;
	} else {
		Result = RTLNS(eif_new_type(901, 0x00).id, 901, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_NATURAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F828_4352_3273_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F828_4352(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c4;
	} else {
		Result = RTLNS(eif_new_type(916, 0x00).id, 916, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_CHARACTER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F829_4352_3273_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F829_4352(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c1;
	} else {
		Result = RTLNS(eif_new_type(919, 0x00).id, 919, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_CHARACTER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F830_4352_3273_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F830_4352(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		Result = RTLNS(eif_new_type(958, 0x00).id, 958, _OBJSIZ_0_0_0_0_0_1_0_0_);
		*(EIF_POINTER *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F831_4352_3273_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F831_4352(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(eif_new_type(904, 0x00).id, 904, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F832_4352_3273_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F832_4352(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n1;
	} else {
		Result = RTLNS(eif_new_type(907, 0x00).id, 907, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_NATURAL_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F833_4352_3273_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F833_4352(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r4;
	} else {
		Result = RTLNS(eif_new_type(910, 0x00).id, 910, _OBJSIZ_0_0_0_0_1_0_0_0_);
		*(EIF_REAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F834_4352_3273_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F834_4352(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r8;
	} else {
		Result = RTLNS(eif_new_type(913, 0x00).id, 913, _OBJSIZ_0_0_0_0_0_0_0_1_);
		*(EIF_REAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F835_4352_3273_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F835_4352(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i2;
	} else {
		Result = RTLNS(eif_new_type(895, 0x00).id, 895, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_INTEGER_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F836_4352_3273_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F836_4352(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i1;
	} else {
		Result = RTLNS(eif_new_type(898, 0x00).id, 898, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_INTEGER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F837_4352_3273_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F837_4352(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i8;
	} else {
		Result = RTLNS(eif_new_type(889, 0x00).id, 889, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_INTEGER_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F838_4352_3273_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F838_4352(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n2;
	} else {
		Result = RTLNS(eif_new_type(925, 0x00).id, 925, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_NATURAL_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F839_4352_3273_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F839_4352(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_b = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_b;
	} else {
		Result = RTLNS(eif_new_type(922, 0x00).id, 922, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_BOOLEAN *)Result = r;
		return Result;
	}
}

char *(*R3274[87])();
void R3274_init () {
	R3274[0] = (char *(*)()) F754_4018;
	R3274[1] = (char *(*)()) F755_4018_3274_1;
	R3274[71] = (char *(*)()) F825_4353;
	R3274[72] = (char *(*)()) F826_4353_3274_1;
	R3274[73] = (char *(*)()) F827_4353_3274_1;
	R3274[74] = (char *(*)()) F828_4353_3274_1;
	R3274[75] = (char *(*)()) F829_4353_3274_1;
	R3274[76] = (char *(*)()) F830_4353_3274_1;
	R3274[77] = (char *(*)()) F831_4353_3274_1;
	R3274[78] = (char *(*)()) F832_4353_3274_1;
	R3274[79] = (char *(*)()) F833_4353_3274_1;
	R3274[80] = (char *(*)()) F834_4353_3274_1;
	R3274[81] = (char *(*)()) F835_4353_3274_1;
	R3274[82] = (char *(*)()) F836_4353_3274_1;
	R3274[83] = (char *(*)()) F837_4353_3274_1;
	R3274[84] = (char *(*)()) F838_4353_3274_1;
	R3274[85] = (char *(*)()) F839_4353_3274_1;
	R3274[86] = (char *(*)()) F825_4353;
}
static EIF_REFERENCE F755_4018_3274_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F755_4018(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(892, 0x00).id, 892, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F826_4353_3274_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F826_4353(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(892, 0x00).id, 892, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F827_4353_3274_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F827_4353(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n8;
	} else {
		Result = RTLNS(eif_new_type(901, 0x00).id, 901, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_NATURAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F828_4353_3274_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F828_4353(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c4;
	} else {
		Result = RTLNS(eif_new_type(916, 0x00).id, 916, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_CHARACTER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F829_4353_3274_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F829_4353(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c1;
	} else {
		Result = RTLNS(eif_new_type(919, 0x00).id, 919, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_CHARACTER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F830_4353_3274_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F830_4353(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		Result = RTLNS(eif_new_type(958, 0x00).id, 958, _OBJSIZ_0_0_0_0_0_1_0_0_);
		*(EIF_POINTER *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F831_4353_3274_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F831_4353(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(eif_new_type(904, 0x00).id, 904, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F832_4353_3274_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F832_4353(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n1;
	} else {
		Result = RTLNS(eif_new_type(907, 0x00).id, 907, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_NATURAL_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F833_4353_3274_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F833_4353(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r4;
	} else {
		Result = RTLNS(eif_new_type(910, 0x00).id, 910, _OBJSIZ_0_0_0_0_1_0_0_0_);
		*(EIF_REAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F834_4353_3274_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F834_4353(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r8;
	} else {
		Result = RTLNS(eif_new_type(913, 0x00).id, 913, _OBJSIZ_0_0_0_0_0_0_0_1_);
		*(EIF_REAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F835_4353_3274_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F835_4353(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i2;
	} else {
		Result = RTLNS(eif_new_type(895, 0x00).id, 895, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_INTEGER_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F836_4353_3274_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F836_4353(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i1;
	} else {
		Result = RTLNS(eif_new_type(898, 0x00).id, 898, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_INTEGER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F837_4353_3274_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F837_4353(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i8;
	} else {
		Result = RTLNS(eif_new_type(889, 0x00).id, 889, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_INTEGER_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F838_4353_3274_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F838_4353(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n2;
	} else {
		Result = RTLNS(eif_new_type(925, 0x00).id, 925, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_NATURAL_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F839_4353_3274_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F839_4353(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_b = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_b;
	} else {
		Result = RTLNS(eif_new_type(922, 0x00).id, 922, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_BOOLEAN *)Result = r;
		return Result;
	}
}

char *(*R3275[87])();
void R3275_init () {
	R3275[0] = (char *(*)()) F754_4037;
	R3275[1] = (char *(*)()) F755_4037;
	R3275[71] = (char *(*)()) F825_4374;
	R3275[72] = (char *(*)()) F826_4374;
	R3275[73] = (char *(*)()) F827_4374;
	R3275[74] = (char *(*)()) F828_4374;
	R3275[75] = (char *(*)()) F829_4374;
	R3275[76] = (char *(*)()) F830_4374;
	R3275[77] = (char *(*)()) F831_4374;
	R3275[78] = (char *(*)()) F832_4374;
	R3275[79] = (char *(*)()) F833_4374;
	R3275[80] = (char *(*)()) F834_4374;
	R3275[81] = (char *(*)()) F835_4374;
	R3275[82] = (char *(*)()) F836_4374;
	R3275[83] = (char *(*)()) F837_4374;
	R3275[84] = (char *(*)()) F838_4374;
	R3275[85] = (char *(*)()) F839_4374;
	R3275[86] = (char *(*)()) F825_4374;
}

char *(*R3276[87])();
void R3276_init () {
	R3276[0] = (char *(*)()) F754_4038;
	R3276[1] = (char *(*)()) F755_4038;
	R3276[71] = (char *(*)()) F825_4379;
	R3276[72] = (char *(*)()) F826_4379;
	R3276[73] = (char *(*)()) F827_4379;
	R3276[74] = (char *(*)()) F828_4379;
	R3276[75] = (char *(*)()) F829_4379;
	R3276[76] = (char *(*)()) F830_4379;
	R3276[77] = (char *(*)()) F831_4379;
	R3276[78] = (char *(*)()) F832_4379;
	R3276[79] = (char *(*)()) F833_4379;
	R3276[80] = (char *(*)()) F834_4379;
	R3276[81] = (char *(*)()) F835_4379;
	R3276[82] = (char *(*)()) F836_4379;
	R3276[83] = (char *(*)()) F837_4379;
	R3276[84] = (char *(*)()) F838_4379;
	R3276[85] = (char *(*)()) F839_4379;
	R3276[86] = (char *(*)()) F825_4379;
}

char *(*R3277[87])();
void R3277_init () {
	R3277[0] = (char *(*)()) F754_4028;
	R3277[1] = (char *(*)()) F755_4028;
	R3277[71] = (char *(*)()) F694_3977;
	R3277[72] = (char *(*)()) F695_3977;
	R3277[73] = (char *(*)()) F696_3977;
	R3277[74] = (char *(*)()) F697_3977;
	R3277[75] = (char *(*)()) F698_3977;
	R3277[76] = (char *(*)()) F699_3977;
	R3277[77] = (char *(*)()) F700_3977;
	R3277[78] = (char *(*)()) F701_3977;
	R3277[79] = (char *(*)()) F702_3977;
	R3277[80] = (char *(*)()) F703_3977;
	R3277[81] = (char *(*)()) F704_3977;
	R3277[82] = (char *(*)()) F705_3977;
	R3277[83] = (char *(*)()) F706_3977;
	R3277[84] = (char *(*)()) F707_3977;
	R3277[85] = (char *(*)()) F708_3977;
	R3277[86] = (char *(*)()) F694_3977;
}

char *(*R3278[87])();
void R3278_init () {
	R3278[0] = (char *(*)()) F754_4029;
	R3278[1] = (char *(*)()) F755_4029;
	R3278[71] = (char *(*)()) F694_3978;
	R3278[72] = (char *(*)()) F695_3978;
	R3278[73] = (char *(*)()) F696_3978;
	R3278[74] = (char *(*)()) F697_3978;
	R3278[75] = (char *(*)()) F698_3978;
	R3278[76] = (char *(*)()) F699_3978;
	R3278[77] = (char *(*)()) F700_3978;
	R3278[78] = (char *(*)()) F701_3978;
	R3278[79] = (char *(*)()) F702_3978;
	R3278[80] = (char *(*)()) F703_3978;
	R3278[81] = (char *(*)()) F704_3978;
	R3278[82] = (char *(*)()) F705_3978;
	R3278[83] = (char *(*)()) F706_3978;
	R3278[84] = (char *(*)()) F707_3978;
	R3278[85] = (char *(*)()) F708_3978;
	R3278[86] = (char *(*)()) F694_3978;
}

char *(*R3279[87])();
void R3279_init () {
	R3279[0] = (char *(*)()) F694_3980;
	R3279[1] = (char *(*)()) F695_3980;
	R3279[71] = (char *(*)()) F694_3980;
	R3279[72] = (char *(*)()) F695_3980;
	R3279[73] = (char *(*)()) F696_3980;
	R3279[74] = (char *(*)()) F697_3980;
	R3279[75] = (char *(*)()) F698_3980;
	R3279[76] = (char *(*)()) F699_3980;
	R3279[77] = (char *(*)()) F700_3980;
	R3279[78] = (char *(*)()) F701_3980;
	R3279[79] = (char *(*)()) F702_3980;
	R3279[80] = (char *(*)()) F703_3980;
	R3279[81] = (char *(*)()) F704_3980;
	R3279[82] = (char *(*)()) F705_3980;
	R3279[83] = (char *(*)()) F706_3980;
	R3279[84] = (char *(*)()) F707_3980;
	R3279[85] = (char *(*)()) F708_3980;
	R3279[86] = (char *(*)()) F694_3980;
}

char *(*R3283[87])();
void R3283_init () {
	R3283[0] = (char *(*)()) F754_4040;
	R3283[1] = (char *(*)()) F755_4040_3283_4;
	R3283[71] = (char *(*)()) F825_4382;
	R3283[72] = (char *(*)()) F826_4382_3283_4;
	R3283[73] = (char *(*)()) F827_4382_3283_4;
	R3283[74] = (char *(*)()) F828_4382_3283_4;
	R3283[75] = (char *(*)()) F829_4382_3283_4;
	R3283[76] = (char *(*)()) F830_4382_3283_4;
	R3283[77] = (char *(*)()) F831_4382_3283_4;
	R3283[78] = (char *(*)()) F832_4382_3283_4;
	R3283[79] = (char *(*)()) F833_4382_3283_4;
	R3283[80] = (char *(*)()) F834_4382_3283_4;
	R3283[81] = (char *(*)()) F835_4382_3283_4;
	R3283[82] = (char *(*)()) F836_4382_3283_4;
	R3283[83] = (char *(*)()) F837_4382_3283_4;
	R3283[84] = (char *(*)()) F838_4382_3283_4;
	R3283[85] = (char *(*)()) F839_4382_3283_4;
	R3283[86] = (char *(*)()) F825_4382;
}
static void F755_4040_3283_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F755_4040(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F826_4382_3283_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F826_4382(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F827_4382_3283_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F827_4382(Current, *(EIF_NATURAL_64 *)arg1);
}
static void F828_4382_3283_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F828_4382(Current, *(EIF_CHARACTER_32 *)arg1);
}
static void F829_4382_3283_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F829_4382(Current, *(EIF_CHARACTER_8 *)arg1);
}
static void F830_4382_3283_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F830_4382(Current, *(EIF_POINTER *)arg1);
}
static void F831_4382_3283_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F831_4382(Current, *(EIF_NATURAL_32 *)arg1);
}
static void F832_4382_3283_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F832_4382(Current, *(EIF_NATURAL_8 *)arg1);
}
static void F833_4382_3283_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F833_4382(Current, *(EIF_REAL_32 *)arg1);
}
static void F834_4382_3283_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F834_4382(Current, *(EIF_REAL_64 *)arg1);
}
static void F835_4382_3283_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F835_4382(Current, *(EIF_INTEGER_16 *)arg1);
}
static void F836_4382_3283_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F836_4382(Current, *(EIF_INTEGER_8 *)arg1);
}
static void F837_4382_3283_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F837_4382(Current, *(EIF_INTEGER_64 *)arg1);
}
static void F838_4382_3283_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F838_4382(Current, *(EIF_NATURAL_16 *)arg1);
}
static void F839_4382_3283_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F839_4382(Current, *(EIF_BOOLEAN *)arg1);
}

char *(*R3284[87])();
void R3284_init () {
	R3284[0] = (char *(*)()) F754_4042;
	R3284[1] = (char *(*)()) F755_4042_3284_4;
	R3284[71] = (char *(*)()) F825_4386;
	R3284[72] = (char *(*)()) F826_4386_3284_4;
	R3284[73] = (char *(*)()) F827_4386_3284_4;
	R3284[74] = (char *(*)()) F828_4386_3284_4;
	R3284[75] = (char *(*)()) F829_4386_3284_4;
	R3284[76] = (char *(*)()) F830_4386_3284_4;
	R3284[77] = (char *(*)()) F831_4386_3284_4;
	R3284[78] = (char *(*)()) F832_4386_3284_4;
	R3284[79] = (char *(*)()) F833_4386_3284_4;
	R3284[80] = (char *(*)()) F834_4386_3284_4;
	R3284[81] = (char *(*)()) F835_4386_3284_4;
	R3284[82] = (char *(*)()) F836_4386_3284_4;
	R3284[83] = (char *(*)()) F837_4386_3284_4;
	R3284[84] = (char *(*)()) F838_4386_3284_4;
	R3284[85] = (char *(*)()) F839_4386_3284_4;
	R3284[86] = (char *(*)()) F825_4386;
}
static void F755_4042_3284_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F755_4042(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F826_4386_3284_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F826_4386(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F827_4386_3284_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F827_4386(Current, *(EIF_NATURAL_64 *)arg1);
}
static void F828_4386_3284_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F828_4386(Current, *(EIF_CHARACTER_32 *)arg1);
}
static void F829_4386_3284_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F829_4386(Current, *(EIF_CHARACTER_8 *)arg1);
}
static void F830_4386_3284_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F830_4386(Current, *(EIF_POINTER *)arg1);
}
static void F831_4386_3284_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F831_4386(Current, *(EIF_NATURAL_32 *)arg1);
}
static void F832_4386_3284_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F832_4386(Current, *(EIF_NATURAL_8 *)arg1);
}
static void F833_4386_3284_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F833_4386(Current, *(EIF_REAL_32 *)arg1);
}
static void F834_4386_3284_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F834_4386(Current, *(EIF_REAL_64 *)arg1);
}
static void F835_4386_3284_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F835_4386(Current, *(EIF_INTEGER_16 *)arg1);
}
static void F836_4386_3284_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F836_4386(Current, *(EIF_INTEGER_8 *)arg1);
}
static void F837_4386_3284_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F837_4386(Current, *(EIF_INTEGER_64 *)arg1);
}
static void F838_4386_3284_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F838_4386(Current, *(EIF_NATURAL_16 *)arg1);
}
static void F839_4386_3284_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F839_4386(Current, *(EIF_BOOLEAN *)arg1);
}

char *(*R3285[87])();
void R3285_init () {
	R3285[0] = (char *(*)()) F754_4043;
	R3285[1] = (char *(*)()) F755_4043_3285_4;
	R3285[71] = (char *(*)()) F825_4387;
	R3285[72] = (char *(*)()) F826_4387_3285_4;
	R3285[73] = (char *(*)()) F827_4387_3285_4;
	R3285[74] = (char *(*)()) F828_4387_3285_4;
	R3285[75] = (char *(*)()) F829_4387_3285_4;
	R3285[76] = (char *(*)()) F830_4387_3285_4;
	R3285[77] = (char *(*)()) F831_4387_3285_4;
	R3285[78] = (char *(*)()) F832_4387_3285_4;
	R3285[79] = (char *(*)()) F833_4387_3285_4;
	R3285[80] = (char *(*)()) F834_4387_3285_4;
	R3285[81] = (char *(*)()) F835_4387_3285_4;
	R3285[82] = (char *(*)()) F836_4387_3285_4;
	R3285[83] = (char *(*)()) F837_4387_3285_4;
	R3285[84] = (char *(*)()) F838_4387_3285_4;
	R3285[85] = (char *(*)()) F839_4387_3285_4;
	R3285[86] = (char *(*)()) F825_4387;
}
static void F755_4043_3285_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F755_4043(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F826_4387_3285_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F826_4387(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F827_4387_3285_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F827_4387(Current, *(EIF_NATURAL_64 *)arg1);
}
static void F828_4387_3285_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F828_4387(Current, *(EIF_CHARACTER_32 *)arg1);
}
static void F829_4387_3285_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F829_4387(Current, *(EIF_CHARACTER_8 *)arg1);
}
static void F830_4387_3285_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F830_4387(Current, *(EIF_POINTER *)arg1);
}
static void F831_4387_3285_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F831_4387(Current, *(EIF_NATURAL_32 *)arg1);
}
static void F832_4387_3285_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F832_4387(Current, *(EIF_NATURAL_8 *)arg1);
}
static void F833_4387_3285_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F833_4387(Current, *(EIF_REAL_32 *)arg1);
}
static void F834_4387_3285_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F834_4387(Current, *(EIF_REAL_64 *)arg1);
}
static void F835_4387_3285_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F835_4387(Current, *(EIF_INTEGER_16 *)arg1);
}
static void F836_4387_3285_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F836_4387(Current, *(EIF_INTEGER_8 *)arg1);
}
static void F837_4387_3285_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F837_4387(Current, *(EIF_INTEGER_64 *)arg1);
}
static void F838_4387_3285_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F838_4387(Current, *(EIF_NATURAL_16 *)arg1);
}
static void F839_4387_3285_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F839_4387(Current, *(EIF_BOOLEAN *)arg1);
}

char *(*R3287[87])();
void R3287_init () {
	R3287[0] = (char *(*)()) F754_4046;
	R3287[1] = (char *(*)()) F755_4046;
	R3287[71] = (char *(*)()) F825_4390;
	R3287[72] = (char *(*)()) F826_4390;
	R3287[73] = (char *(*)()) F827_4390;
	R3287[74] = (char *(*)()) F828_4390;
	R3287[75] = (char *(*)()) F829_4390;
	R3287[76] = (char *(*)()) F830_4390;
	R3287[77] = (char *(*)()) F831_4390;
	R3287[78] = (char *(*)()) F832_4390;
	R3287[79] = (char *(*)()) F833_4390;
	R3287[80] = (char *(*)()) F834_4390;
	R3287[81] = (char *(*)()) F835_4390;
	R3287[82] = (char *(*)()) F836_4390;
	R3287[83] = (char *(*)()) F837_4390;
	R3287[84] = (char *(*)()) F838_4390;
	R3287[85] = (char *(*)()) F839_4390;
	R3287[86] = (char *(*)()) F825_4390;
}

char *(*R3289[87])();
void R3289_init () {
	R3289[0] = (char *(*)()) F754_4049;
	R3289[1] = (char *(*)()) F755_4049;
	R3289[71] = (char *(*)()) F825_4402;
	R3289[72] = (char *(*)()) F826_4402;
	R3289[73] = (char *(*)()) F827_4402;
	R3289[74] = (char *(*)()) F828_4402;
	R3289[75] = (char *(*)()) F829_4402;
	R3289[76] = (char *(*)()) F830_4402;
	R3289[77] = (char *(*)()) F831_4402;
	R3289[78] = (char *(*)()) F832_4402;
	R3289[79] = (char *(*)()) F833_4402;
	R3289[80] = (char *(*)()) F834_4402;
	R3289[81] = (char *(*)()) F835_4402;
	R3289[82] = (char *(*)()) F836_4402;
	R3289[83] = (char *(*)()) F837_4402;
	R3289[84] = (char *(*)()) F838_4402;
	R3289[85] = (char *(*)()) F839_4402;
	R3289[86] = (char *(*)()) F825_4402;
}

char *(*R3290[87])();
void R3290_init () {
	R3290[0] = (char *(*)()) F754_4052;
	R3290[1] = (char *(*)()) F755_4052;
	R3290[71] = (char *(*)()) F825_4406;
	R3290[72] = (char *(*)()) F826_4406;
	R3290[73] = (char *(*)()) F827_4406;
	R3290[74] = (char *(*)()) F828_4406;
	R3290[75] = (char *(*)()) F829_4406;
	R3290[76] = (char *(*)()) F830_4406;
	R3290[77] = (char *(*)()) F831_4406;
	R3290[78] = (char *(*)()) F832_4406;
	R3290[79] = (char *(*)()) F833_4406;
	R3290[80] = (char *(*)()) F834_4406;
	R3290[81] = (char *(*)()) F835_4406;
	R3290[82] = (char *(*)()) F836_4406;
	R3290[83] = (char *(*)()) F837_4406;
	R3290[84] = (char *(*)()) F838_4406;
	R3290[85] = (char *(*)()) F839_4406;
	R3290[86] = (char *(*)()) F825_4406;
}

char *(*R3291[2])();
void R3291_init () {
	R3291[0] = (char *(*)()) F754_4014;
	R3291[1] = (char *(*)()) F755_4014;
}

char *(*R3294[2])();
void R3294_init () {
	R3294[0] = (char *(*)()) F754_4053;
	R3294[1] = (char *(*)()) F755_4053_3294_5;
}
static EIF_REFERENCE F755_4053_3294_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F755_4053(Current, *(EIF_INTEGER_32 *)arg1);
}

char *(*R3295[2])();
void R3295_init () {
	R3295[0] = (char *(*)()) F754_4054;
	R3295[1] = (char *(*)()) F755_4054;
}

char *(*R3296[2])();
void R3296_init () {
	R3296[0] = (char *(*)()) F754_4055;
	R3296[1] = (char *(*)()) F755_4055;
}

char *(*R3298[2])();
void R3298_init () {
	R3298[0] = (char *(*)()) F754_4057;
	R3298[1] = (char *(*)()) F755_4057;
}

char *(*R3299[2])();
void R3299_init () {
	R3299[0] = (char *(*)()) F754_4058;
	R3299[1] = (char *(*)()) F755_4058;
}

char *(*R3300[2])();
void R3300_init () {
	R3300[0] = (char *(*)()) F754_4059;
	R3300[1] = (char *(*)()) F755_4059;
}

char *(*R3396[15])();
void R3396_init () {
	R3396[0] = (char *(*)()) F760_4171;
	R3396[1] = (char *(*)()) F761_4171;
	R3396[2] = (char *(*)()) F762_4171;
	R3396[3] = (char *(*)()) F763_4171;
	R3396[4] = (char *(*)()) F764_4171;
	R3396[5] = (char *(*)()) F765_4171;
	R3396[6] = (char *(*)()) F766_4171;
	R3396[7] = (char *(*)()) F767_4171;
	R3396[8] = (char *(*)()) F768_4171;
	R3396[9] = (char *(*)()) F769_4171;
	R3396[10] = (char *(*)()) F770_4171;
	R3396[11] = (char *(*)()) F771_4171;
	R3396[12] = (char *(*)()) F772_4171;
	R3396[13] = (char *(*)()) F773_4171;
	R3396[14] = (char *(*)()) F774_4171;
}

char *(*R3397[15])();
void R3397_init () {
	R3397[0] = (char *(*)()) F760_4172;
	R3397[1] = (char *(*)()) F761_4172;
	R3397[2] = (char *(*)()) F762_4172;
	R3397[3] = (char *(*)()) F763_4172;
	R3397[4] = (char *(*)()) F764_4172;
	R3397[5] = (char *(*)()) F765_4172;
	R3397[6] = (char *(*)()) F766_4172;
	R3397[7] = (char *(*)()) F767_4172;
	R3397[8] = (char *(*)()) F768_4172;
	R3397[9] = (char *(*)()) F769_4172;
	R3397[10] = (char *(*)()) F770_4172;
	R3397[11] = (char *(*)()) F771_4172;
	R3397[12] = (char *(*)()) F772_4172;
	R3397[13] = (char *(*)()) F773_4172;
	R3397[14] = (char *(*)()) F774_4172;
}

char *(*R3398[15])();
void R3398_init () {
	R3398[0] = (char *(*)()) F760_4175;
	R3398[1] = (char *(*)()) F761_4175;
	R3398[2] = (char *(*)()) F762_4175;
	R3398[3] = (char *(*)()) F763_4175;
	R3398[4] = (char *(*)()) F764_4175;
	R3398[5] = (char *(*)()) F765_4175;
	R3398[6] = (char *(*)()) F766_4175;
	R3398[7] = (char *(*)()) F767_4175;
	R3398[8] = (char *(*)()) F768_4175;
	R3398[9] = (char *(*)()) F769_4175;
	R3398[10] = (char *(*)()) F770_4175;
	R3398[11] = (char *(*)()) F771_4175;
	R3398[12] = (char *(*)()) F772_4175;
	R3398[13] = (char *(*)()) F773_4175;
	R3398[14] = (char *(*)()) F774_4175;
}

char *(*R3399[15])();
void R3399_init () {
	R3399[0] = (char *(*)()) F760_4158;
	R3399[1] = (char *(*)()) F761_4158;
	R3399[2] = (char *(*)()) F762_4158;
	R3399[3] = (char *(*)()) F763_4158;
	R3399[4] = (char *(*)()) F764_4158;
	R3399[5] = (char *(*)()) F765_4158;
	R3399[6] = (char *(*)()) F766_4158;
	R3399[7] = (char *(*)()) F767_4158;
	R3399[8] = (char *(*)()) F768_4158;
	R3399[9] = (char *(*)()) F769_4158;
	R3399[10] = (char *(*)()) F770_4158;
	R3399[11] = (char *(*)()) F771_4158;
	R3399[12] = (char *(*)()) F772_4158;
	R3399[13] = (char *(*)()) F773_4158;
	R3399[14] = (char *(*)()) F774_4158;
}

char *(*R3400[15])();
void R3400_init () {
	R3400[0] = (char *(*)()) F760_4159;
	R3400[1] = (char *(*)()) F761_4159_3400_124;
	R3400[2] = (char *(*)()) F762_4159_3400_124;
	R3400[3] = (char *(*)()) F763_4159_3400_124;
	R3400[4] = (char *(*)()) F764_4159_3400_124;
	R3400[5] = (char *(*)()) F765_4159_3400_124;
	R3400[6] = (char *(*)()) F766_4159_3400_124;
	R3400[7] = (char *(*)()) F767_4159_3400_124;
	R3400[8] = (char *(*)()) F768_4159_3400_124;
	R3400[9] = (char *(*)()) F769_4159_3400_124;
	R3400[10] = (char *(*)()) F770_4159_3400_124;
	R3400[11] = (char *(*)()) F771_4159_3400_124;
	R3400[12] = (char *(*)()) F772_4159_3400_124;
	R3400[13] = (char *(*)()) F773_4159_3400_124;
	R3400[14] = (char *(*)()) F774_4159_3400_124;
}
static void F761_4159_3400_124 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F761_4159(Current, *(EIF_INTEGER_32 *)arg1, arg2);
}
static void F762_4159_3400_124 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F762_4159(Current, *(EIF_NATURAL_64 *)arg1, arg2);
}
static void F763_4159_3400_124 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F763_4159(Current, *(EIF_CHARACTER_32 *)arg1, arg2);
}
static void F764_4159_3400_124 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F764_4159(Current, *(EIF_CHARACTER_8 *)arg1, arg2);
}
static void F765_4159_3400_124 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F765_4159(Current, *(EIF_POINTER *)arg1, arg2);
}
static void F766_4159_3400_124 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F766_4159(Current, *(EIF_NATURAL_32 *)arg1, arg2);
}
static void F767_4159_3400_124 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F767_4159(Current, *(EIF_NATURAL_8 *)arg1, arg2);
}
static void F768_4159_3400_124 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F768_4159(Current, *(EIF_REAL_32 *)arg1, arg2);
}
static void F769_4159_3400_124 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F769_4159(Current, *(EIF_REAL_64 *)arg1, arg2);
}
static void F770_4159_3400_124 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F770_4159(Current, *(EIF_INTEGER_16 *)arg1, arg2);
}
static void F771_4159_3400_124 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F771_4159(Current, *(EIF_INTEGER_8 *)arg1, arg2);
}
static void F772_4159_3400_124 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F772_4159(Current, *(EIF_INTEGER_64 *)arg1, arg2);
}
static void F773_4159_3400_124 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F773_4159(Current, *(EIF_NATURAL_16 *)arg1, arg2);
}
static void F774_4159_3400_124 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F774_4159(Current, *(EIF_BOOLEAN *)arg1, arg2);
}

char *(*R3401[15])();
void R3401_init () {
	R3401[0] = (char *(*)()) F760_4160;
	R3401[1] = (char *(*)()) F761_4160;
	R3401[2] = (char *(*)()) F762_4160;
	R3401[3] = (char *(*)()) F763_4160;
	R3401[4] = (char *(*)()) F764_4160;
	R3401[5] = (char *(*)()) F765_4160;
	R3401[6] = (char *(*)()) F766_4160;
	R3401[7] = (char *(*)()) F767_4160;
	R3401[8] = (char *(*)()) F768_4160;
	R3401[9] = (char *(*)()) F769_4160;
	R3401[10] = (char *(*)()) F770_4160;
	R3401[11] = (char *(*)()) F771_4160;
	R3401[12] = (char *(*)()) F772_4160;
	R3401[13] = (char *(*)()) F773_4160;
	R3401[14] = (char *(*)()) F774_4160;
}

char *(*R3406[15])();
void R3406_init () {
	R3406[0] = (char *(*)()) F760_4166;
	R3406[1] = (char *(*)()) F761_4166;
	R3406[2] = (char *(*)()) F762_4166;
	R3406[3] = (char *(*)()) F763_4166;
	R3406[4] = (char *(*)()) F764_4166;
	R3406[5] = (char *(*)()) F765_4166;
	R3406[6] = (char *(*)()) F766_4166;
	R3406[7] = (char *(*)()) F767_4166;
	R3406[8] = (char *(*)()) F768_4166;
	R3406[9] = (char *(*)()) F769_4166;
	R3406[10] = (char *(*)()) F770_4166;
	R3406[11] = (char *(*)()) F771_4166;
	R3406[12] = (char *(*)()) F772_4166;
	R3406[13] = (char *(*)()) F773_4166;
	R3406[14] = (char *(*)()) F774_4166;
}

char *(*R3408[15])();
void R3408_init () {
	R3408[0] = (char *(*)()) F760_4173;
	R3408[1] = (char *(*)()) F761_4173_3408_322;
	R3408[2] = (char *(*)()) F762_4173_3408_322;
	R3408[3] = (char *(*)()) F763_4173_3408_322;
	R3408[4] = (char *(*)()) F764_4173_3408_322;
	R3408[5] = (char *(*)()) F765_4173_3408_322;
	R3408[6] = (char *(*)()) F766_4173_3408_322;
	R3408[7] = (char *(*)()) F767_4173_3408_322;
	R3408[8] = (char *(*)()) F768_4173_3408_322;
	R3408[9] = (char *(*)()) F769_4173_3408_322;
	R3408[10] = (char *(*)()) F770_4173_3408_322;
	R3408[11] = (char *(*)()) F771_4173_3408_322;
	R3408[12] = (char *(*)()) F772_4173_3408_322;
	R3408[13] = (char *(*)()) F773_4173_3408_322;
	R3408[14] = (char *(*)()) F774_4173_3408_322;
}
static EIF_BOOLEAN F761_4173_3408_322 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	return F761_4173(Current, *(EIF_INTEGER_32 *)arg1, arg2, arg3);
}
static EIF_BOOLEAN F762_4173_3408_322 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	return F762_4173(Current, *(EIF_NATURAL_64 *)arg1, arg2, arg3);
}
static EIF_BOOLEAN F763_4173_3408_322 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	return F763_4173(Current, *(EIF_CHARACTER_32 *)arg1, arg2, arg3);
}
static EIF_BOOLEAN F764_4173_3408_322 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	return F764_4173(Current, *(EIF_CHARACTER_8 *)arg1, arg2, arg3);
}
static EIF_BOOLEAN F765_4173_3408_322 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	return F765_4173(Current, *(EIF_POINTER *)arg1, arg2, arg3);
}
static EIF_BOOLEAN F766_4173_3408_322 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	return F766_4173(Current, *(EIF_NATURAL_32 *)arg1, arg2, arg3);
}
static EIF_BOOLEAN F767_4173_3408_322 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	return F767_4173(Current, *(EIF_NATURAL_8 *)arg1, arg2, arg3);
}
static EIF_BOOLEAN F768_4173_3408_322 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	return F768_4173(Current, *(EIF_REAL_32 *)arg1, arg2, arg3);
}
static EIF_BOOLEAN F769_4173_3408_322 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	return F769_4173(Current, *(EIF_REAL_64 *)arg1, arg2, arg3);
}
static EIF_BOOLEAN F770_4173_3408_322 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	return F770_4173(Current, *(EIF_INTEGER_16 *)arg1, arg2, arg3);
}
static EIF_BOOLEAN F771_4173_3408_322 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	return F771_4173(Current, *(EIF_INTEGER_8 *)arg1, arg2, arg3);
}
static EIF_BOOLEAN F772_4173_3408_322 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	return F772_4173(Current, *(EIF_INTEGER_64 *)arg1, arg2, arg3);
}
static EIF_BOOLEAN F773_4173_3408_322 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	return F773_4173(Current, *(EIF_NATURAL_16 *)arg1, arg2, arg3);
}
static EIF_BOOLEAN F774_4173_3408_322 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	return F774_4173(Current, *(EIF_BOOLEAN *)arg1, arg2, arg3);
}

char *(*R3409[15])();
void R3409_init () {
	R3409[0] = (char *(*)()) F760_4174;
	R3409[1] = (char *(*)()) F761_4174;
	R3409[2] = (char *(*)()) F762_4174;
	R3409[3] = (char *(*)()) F763_4174;
	R3409[4] = (char *(*)()) F764_4174;
	R3409[5] = (char *(*)()) F765_4174;
	R3409[6] = (char *(*)()) F766_4174;
	R3409[7] = (char *(*)()) F767_4174;
	R3409[8] = (char *(*)()) F768_4174;
	R3409[9] = (char *(*)()) F769_4174;
	R3409[10] = (char *(*)()) F770_4174;
	R3409[11] = (char *(*)()) F771_4174;
	R3409[12] = (char *(*)()) F772_4174;
	R3409[13] = (char *(*)()) F773_4174;
	R3409[14] = (char *(*)()) F774_4174;
}

char *(*R3410[15])();
void R3410_init () {
	R3410[0] = (char *(*)()) F760_4176;
	R3410[1] = (char *(*)()) F761_4176_3410_124;
	R3410[2] = (char *(*)()) F762_4176_3410_124;
	R3410[3] = (char *(*)()) F763_4176_3410_124;
	R3410[4] = (char *(*)()) F764_4176_3410_124;
	R3410[5] = (char *(*)()) F765_4176_3410_124;
	R3410[6] = (char *(*)()) F766_4176_3410_124;
	R3410[7] = (char *(*)()) F767_4176_3410_124;
	R3410[8] = (char *(*)()) F768_4176_3410_124;
	R3410[9] = (char *(*)()) F769_4176_3410_124;
	R3410[10] = (char *(*)()) F770_4176_3410_124;
	R3410[11] = (char *(*)()) F771_4176_3410_124;
	R3410[12] = (char *(*)()) F772_4176_3410_124;
	R3410[13] = (char *(*)()) F773_4176_3410_124;
	R3410[14] = (char *(*)()) F774_4176_3410_124;
}
static void F761_4176_3410_124 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F761_4176(Current, *(EIF_INTEGER_32 *)arg1, arg2);
}
static void F762_4176_3410_124 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F762_4176(Current, *(EIF_NATURAL_64 *)arg1, arg2);
}
static void F763_4176_3410_124 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F763_4176(Current, *(EIF_CHARACTER_32 *)arg1, arg2);
}
static void F764_4176_3410_124 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F764_4176(Current, *(EIF_CHARACTER_8 *)arg1, arg2);
}
static void F765_4176_3410_124 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F765_4176(Current, *(EIF_POINTER *)arg1, arg2);
}
static void F766_4176_3410_124 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F766_4176(Current, *(EIF_NATURAL_32 *)arg1, arg2);
}
static void F767_4176_3410_124 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F767_4176(Current, *(EIF_NATURAL_8 *)arg1, arg2);
}
static void F768_4176_3410_124 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F768_4176(Current, *(EIF_REAL_32 *)arg1, arg2);
}
static void F769_4176_3410_124 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F769_4176(Current, *(EIF_REAL_64 *)arg1, arg2);
}
static void F770_4176_3410_124 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F770_4176(Current, *(EIF_INTEGER_16 *)arg1, arg2);
}
static void F771_4176_3410_124 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F771_4176(Current, *(EIF_INTEGER_8 *)arg1, arg2);
}
static void F772_4176_3410_124 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F772_4176(Current, *(EIF_INTEGER_64 *)arg1, arg2);
}
static void F773_4176_3410_124 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F773_4176(Current, *(EIF_NATURAL_16 *)arg1, arg2);
}
static void F774_4176_3410_124 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F774_4176(Current, *(EIF_BOOLEAN *)arg1, arg2);
}

char *(*R3411[15])();
void R3411_init () {
	R3411[0] = (char *(*)()) F760_4177;
	R3411[1] = (char *(*)()) F761_4177_3411_124;
	R3411[2] = (char *(*)()) F762_4177_3411_124;
	R3411[3] = (char *(*)()) F763_4177_3411_124;
	R3411[4] = (char *(*)()) F764_4177_3411_124;
	R3411[5] = (char *(*)()) F765_4177_3411_124;
	R3411[6] = (char *(*)()) F766_4177_3411_124;
	R3411[7] = (char *(*)()) F767_4177_3411_124;
	R3411[8] = (char *(*)()) F768_4177_3411_124;
	R3411[9] = (char *(*)()) F769_4177_3411_124;
	R3411[10] = (char *(*)()) F770_4177_3411_124;
	R3411[11] = (char *(*)()) F771_4177_3411_124;
	R3411[12] = (char *(*)()) F772_4177_3411_124;
	R3411[13] = (char *(*)()) F773_4177_3411_124;
	R3411[14] = (char *(*)()) F774_4177_3411_124;
}
static void F761_4177_3411_124 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F761_4177(Current, *(EIF_INTEGER_32 *)arg1, arg2);
}
static void F762_4177_3411_124 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F762_4177(Current, *(EIF_NATURAL_64 *)arg1, arg2);
}
static void F763_4177_3411_124 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F763_4177(Current, *(EIF_CHARACTER_32 *)arg1, arg2);
}
static void F764_4177_3411_124 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F764_4177(Current, *(EIF_CHARACTER_8 *)arg1, arg2);
}
static void F765_4177_3411_124 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F765_4177(Current, *(EIF_POINTER *)arg1, arg2);
}
static void F766_4177_3411_124 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F766_4177(Current, *(EIF_NATURAL_32 *)arg1, arg2);
}
static void F767_4177_3411_124 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F767_4177(Current, *(EIF_NATURAL_8 *)arg1, arg2);
}
static void F768_4177_3411_124 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F768_4177(Current, *(EIF_REAL_32 *)arg1, arg2);
}
static void F769_4177_3411_124 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F769_4177(Current, *(EIF_REAL_64 *)arg1, arg2);
}
static void F770_4177_3411_124 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F770_4177(Current, *(EIF_INTEGER_16 *)arg1, arg2);
}
static void F771_4177_3411_124 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F771_4177(Current, *(EIF_INTEGER_8 *)arg1, arg2);
}
static void F772_4177_3411_124 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F772_4177(Current, *(EIF_INTEGER_64 *)arg1, arg2);
}
static void F773_4177_3411_124 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F773_4177(Current, *(EIF_NATURAL_16 *)arg1, arg2);
}
static void F774_4177_3411_124 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F774_4177(Current, *(EIF_BOOLEAN *)arg1, arg2);
}

char *(*R3412[15])();
void R3412_init () {
	R3412[0] = (char *(*)()) F760_4178;
	R3412[1] = (char *(*)()) F761_4178_3412_4;
	R3412[2] = (char *(*)()) F762_4178_3412_4;
	R3412[3] = (char *(*)()) F763_4178_3412_4;
	R3412[4] = (char *(*)()) F764_4178_3412_4;
	R3412[5] = (char *(*)()) F765_4178_3412_4;
	R3412[6] = (char *(*)()) F766_4178_3412_4;
	R3412[7] = (char *(*)()) F767_4178_3412_4;
	R3412[8] = (char *(*)()) F768_4178_3412_4;
	R3412[9] = (char *(*)()) F769_4178_3412_4;
	R3412[10] = (char *(*)()) F770_4178_3412_4;
	R3412[11] = (char *(*)()) F771_4178_3412_4;
	R3412[12] = (char *(*)()) F772_4178_3412_4;
	R3412[13] = (char *(*)()) F773_4178_3412_4;
	R3412[14] = (char *(*)()) F774_4178_3412_4;
}
static void F761_4178_3412_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F761_4178(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F762_4178_3412_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F762_4178(Current, *(EIF_NATURAL_64 *)arg1);
}
static void F763_4178_3412_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F763_4178(Current, *(EIF_CHARACTER_32 *)arg1);
}
static void F764_4178_3412_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F764_4178(Current, *(EIF_CHARACTER_8 *)arg1);
}
static void F765_4178_3412_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F765_4178(Current, *(EIF_POINTER *)arg1);
}
static void F766_4178_3412_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F766_4178(Current, *(EIF_NATURAL_32 *)arg1);
}
static void F767_4178_3412_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F767_4178(Current, *(EIF_NATURAL_8 *)arg1);
}
static void F768_4178_3412_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F768_4178(Current, *(EIF_REAL_32 *)arg1);
}
static void F769_4178_3412_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F769_4178(Current, *(EIF_REAL_64 *)arg1);
}
static void F770_4178_3412_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F770_4178(Current, *(EIF_INTEGER_16 *)arg1);
}
static void F771_4178_3412_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F771_4178(Current, *(EIF_INTEGER_8 *)arg1);
}
static void F772_4178_3412_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F772_4178(Current, *(EIF_INTEGER_64 *)arg1);
}
static void F773_4178_3412_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F773_4178(Current, *(EIF_NATURAL_16 *)arg1);
}
static void F774_4178_3412_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F774_4178(Current, *(EIF_BOOLEAN *)arg1);
}

char *(*R3414[15])();
void R3414_init () {
	R3414[0] = (char *(*)()) F760_4180;
	R3414[1] = (char *(*)()) F761_4180_3414_118;
	R3414[2] = (char *(*)()) F762_4180_3414_118;
	R3414[3] = (char *(*)()) F763_4180_3414_118;
	R3414[4] = (char *(*)()) F764_4180_3414_118;
	R3414[5] = (char *(*)()) F765_4180_3414_118;
	R3414[6] = (char *(*)()) F766_4180_3414_118;
	R3414[7] = (char *(*)()) F767_4180_3414_118;
	R3414[8] = (char *(*)()) F768_4180_3414_118;
	R3414[9] = (char *(*)()) F769_4180_3414_118;
	R3414[10] = (char *(*)()) F770_4180_3414_118;
	R3414[11] = (char *(*)()) F771_4180_3414_118;
	R3414[12] = (char *(*)()) F772_4180_3414_118;
	R3414[13] = (char *(*)()) F773_4180_3414_118;
	R3414[14] = (char *(*)()) F774_4180_3414_118;
}
static void F761_4180_3414_118 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F761_4180(Current, *(EIF_INTEGER_32 *)arg1, arg2, arg3);
}
static void F762_4180_3414_118 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F762_4180(Current, *(EIF_NATURAL_64 *)arg1, arg2, arg3);
}
static void F763_4180_3414_118 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F763_4180(Current, *(EIF_CHARACTER_32 *)arg1, arg2, arg3);
}
static void F764_4180_3414_118 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F764_4180(Current, *(EIF_CHARACTER_8 *)arg1, arg2, arg3);
}
static void F765_4180_3414_118 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F765_4180(Current, *(EIF_POINTER *)arg1, arg2, arg3);
}
static void F766_4180_3414_118 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F766_4180(Current, *(EIF_NATURAL_32 *)arg1, arg2, arg3);
}
static void F767_4180_3414_118 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F767_4180(Current, *(EIF_NATURAL_8 *)arg1, arg2, arg3);
}
static void F768_4180_3414_118 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F768_4180(Current, *(EIF_REAL_32 *)arg1, arg2, arg3);
}
static void F769_4180_3414_118 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F769_4180(Current, *(EIF_REAL_64 *)arg1, arg2, arg3);
}
static void F770_4180_3414_118 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F770_4180(Current, *(EIF_INTEGER_16 *)arg1, arg2, arg3);
}
static void F771_4180_3414_118 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F771_4180(Current, *(EIF_INTEGER_8 *)arg1, arg2, arg3);
}
static void F772_4180_3414_118 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F772_4180(Current, *(EIF_INTEGER_64 *)arg1, arg2, arg3);
}
static void F773_4180_3414_118 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F773_4180(Current, *(EIF_NATURAL_16 *)arg1, arg2, arg3);
}
static void F774_4180_3414_118 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	F774_4180(Current, *(EIF_BOOLEAN *)arg1, arg2, arg3);
}

char *(*R3416[15])();
void R3416_init () {
	R3416[0] = (char *(*)()) F760_4182;
	R3416[1] = (char *(*)()) F761_4182;
	R3416[2] = (char *(*)()) F762_4182;
	R3416[3] = (char *(*)()) F763_4182;
	R3416[4] = (char *(*)()) F764_4182;
	R3416[5] = (char *(*)()) F765_4182;
	R3416[6] = (char *(*)()) F766_4182;
	R3416[7] = (char *(*)()) F767_4182;
	R3416[8] = (char *(*)()) F768_4182;
	R3416[9] = (char *(*)()) F769_4182;
	R3416[10] = (char *(*)()) F770_4182;
	R3416[11] = (char *(*)()) F771_4182;
	R3416[12] = (char *(*)()) F772_4182;
	R3416[13] = (char *(*)()) F773_4182;
	R3416[14] = (char *(*)()) F774_4182;
}

char *(*R3417[15])();
void R3417_init () {
	R3417[0] = (char *(*)()) F760_4183;
	R3417[1] = (char *(*)()) F761_4183;
	R3417[2] = (char *(*)()) F762_4183;
	R3417[3] = (char *(*)()) F763_4183;
	R3417[4] = (char *(*)()) F764_4183;
	R3417[5] = (char *(*)()) F765_4183;
	R3417[6] = (char *(*)()) F766_4183;
	R3417[7] = (char *(*)()) F767_4183;
	R3417[8] = (char *(*)()) F768_4183;
	R3417[9] = (char *(*)()) F769_4183;
	R3417[10] = (char *(*)()) F770_4183;
	R3417[11] = (char *(*)()) F771_4183;
	R3417[12] = (char *(*)()) F772_4183;
	R3417[13] = (char *(*)()) F773_4183;
	R3417[14] = (char *(*)()) F774_4183;
}

char *(*R3418[15])();
void R3418_init () {
	R3418[0] = (char *(*)()) F760_4184;
	R3418[1] = (char *(*)()) F761_4184;
	R3418[2] = (char *(*)()) F762_4184;
	R3418[3] = (char *(*)()) F763_4184;
	R3418[4] = (char *(*)()) F764_4184;
	R3418[5] = (char *(*)()) F765_4184;
	R3418[6] = (char *(*)()) F766_4184;
	R3418[7] = (char *(*)()) F767_4184;
	R3418[8] = (char *(*)()) F768_4184;
	R3418[9] = (char *(*)()) F769_4184;
	R3418[10] = (char *(*)()) F770_4184;
	R3418[11] = (char *(*)()) F771_4184;
	R3418[12] = (char *(*)()) F772_4184;
	R3418[13] = (char *(*)()) F773_4184;
	R3418[14] = (char *(*)()) F774_4184;
}

char *(*R3419[15])();
void R3419_init () {
	R3419[0] = (char *(*)()) F760_4185;
	R3419[1] = (char *(*)()) F761_4185;
	R3419[2] = (char *(*)()) F762_4185;
	R3419[3] = (char *(*)()) F763_4185;
	R3419[4] = (char *(*)()) F764_4185;
	R3419[5] = (char *(*)()) F765_4185;
	R3419[6] = (char *(*)()) F766_4185;
	R3419[7] = (char *(*)()) F767_4185;
	R3419[8] = (char *(*)()) F768_4185;
	R3419[9] = (char *(*)()) F769_4185;
	R3419[10] = (char *(*)()) F770_4185;
	R3419[11] = (char *(*)()) F771_4185;
	R3419[12] = (char *(*)()) F772_4185;
	R3419[13] = (char *(*)()) F773_4185;
	R3419[14] = (char *(*)()) F774_4185;
}

char *(*R3420[15])();
void R3420_init () {
	R3420[0] = (char *(*)()) F760_4186;
	R3420[1] = (char *(*)()) F761_4186;
	R3420[2] = (char *(*)()) F762_4186;
	R3420[3] = (char *(*)()) F763_4186;
	R3420[4] = (char *(*)()) F764_4186;
	R3420[5] = (char *(*)()) F765_4186;
	R3420[6] = (char *(*)()) F766_4186;
	R3420[7] = (char *(*)()) F767_4186;
	R3420[8] = (char *(*)()) F768_4186;
	R3420[9] = (char *(*)()) F769_4186;
	R3420[10] = (char *(*)()) F770_4186;
	R3420[11] = (char *(*)()) F771_4186;
	R3420[12] = (char *(*)()) F772_4186;
	R3420[13] = (char *(*)()) F773_4186;
	R3420[14] = (char *(*)()) F774_4186;
}

char *(*R3421[15])();
void R3421_init () {
	R3421[0] = (char *(*)()) F760_4187;
	R3421[1] = (char *(*)()) F761_4187;
	R3421[2] = (char *(*)()) F762_4187;
	R3421[3] = (char *(*)()) F763_4187;
	R3421[4] = (char *(*)()) F764_4187;
	R3421[5] = (char *(*)()) F765_4187;
	R3421[6] = (char *(*)()) F766_4187;
	R3421[7] = (char *(*)()) F767_4187;
	R3421[8] = (char *(*)()) F768_4187;
	R3421[9] = (char *(*)()) F769_4187;
	R3421[10] = (char *(*)()) F770_4187;
	R3421[11] = (char *(*)()) F771_4187;
	R3421[12] = (char *(*)()) F772_4187;
	R3421[13] = (char *(*)()) F773_4187;
	R3421[14] = (char *(*)()) F774_4187;
}

char *(*R3422[15])();
void R3422_init () {
	R3422[0] = (char *(*)()) F760_4188;
	R3422[1] = (char *(*)()) F761_4188;
	R3422[2] = (char *(*)()) F762_4188;
	R3422[3] = (char *(*)()) F763_4188;
	R3422[4] = (char *(*)()) F764_4188;
	R3422[5] = (char *(*)()) F765_4188;
	R3422[6] = (char *(*)()) F766_4188;
	R3422[7] = (char *(*)()) F767_4188;
	R3422[8] = (char *(*)()) F768_4188;
	R3422[9] = (char *(*)()) F769_4188;
	R3422[10] = (char *(*)()) F770_4188;
	R3422[11] = (char *(*)()) F771_4188;
	R3422[12] = (char *(*)()) F772_4188;
	R3422[13] = (char *(*)()) F773_4188;
	R3422[14] = (char *(*)()) F774_4188;
}

char *(*R3424[15])();
void R3424_init () {
	R3424[0] = (char *(*)()) F760_4190;
	R3424[1] = (char *(*)()) F761_4190;
	R3424[2] = (char *(*)()) F762_4190;
	R3424[3] = (char *(*)()) F763_4190;
	R3424[4] = (char *(*)()) F764_4190;
	R3424[5] = (char *(*)()) F765_4190;
	R3424[6] = (char *(*)()) F766_4190;
	R3424[7] = (char *(*)()) F767_4190;
	R3424[8] = (char *(*)()) F768_4190;
	R3424[9] = (char *(*)()) F769_4190;
	R3424[10] = (char *(*)()) F770_4190;
	R3424[11] = (char *(*)()) F771_4190;
	R3424[12] = (char *(*)()) F772_4190;
	R3424[13] = (char *(*)()) F773_4190;
	R3424[14] = (char *(*)()) F774_4190;
}

char *(*R3427[15])();
void R3427_init () {
	R3427[0] = (char *(*)()) F760_4193;
	R3427[1] = (char *(*)()) F761_4193;
	R3427[2] = (char *(*)()) F762_4193;
	R3427[3] = (char *(*)()) F763_4193;
	R3427[4] = (char *(*)()) F764_4193;
	R3427[5] = (char *(*)()) F765_4193;
	R3427[6] = (char *(*)()) F766_4193;
	R3427[7] = (char *(*)()) F767_4193;
	R3427[8] = (char *(*)()) F768_4193;
	R3427[9] = (char *(*)()) F769_4193;
	R3427[10] = (char *(*)()) F770_4193;
	R3427[11] = (char *(*)()) F771_4193;
	R3427[12] = (char *(*)()) F772_4193;
	R3427[13] = (char *(*)()) F773_4193;
	R3427[14] = (char *(*)()) F774_4193;
}

char *(*R3428[15])();
void R3428_init () {
	R3428[0] = (char *(*)()) F760_4194;
	R3428[1] = (char *(*)()) F761_4194_3428_245;
	R3428[2] = (char *(*)()) F762_4194_3428_245;
	R3428[3] = (char *(*)()) F763_4194_3428_245;
	R3428[4] = (char *(*)()) F764_4194_3428_245;
	R3428[5] = (char *(*)()) F765_4194_3428_245;
	R3428[6] = (char *(*)()) F766_4194_3428_245;
	R3428[7] = (char *(*)()) F767_4194_3428_245;
	R3428[8] = (char *(*)()) F768_4194_3428_245;
	R3428[9] = (char *(*)()) F769_4194_3428_245;
	R3428[10] = (char *(*)()) F770_4194_3428_245;
	R3428[11] = (char *(*)()) F771_4194_3428_245;
	R3428[12] = (char *(*)()) F772_4194_3428_245;
	R3428[13] = (char *(*)()) F773_4194_3428_245;
	R3428[14] = (char *(*)()) F774_4194_3428_245;
}
static EIF_REFERENCE F761_4194_3428_245 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F761_4194(Current, *(EIF_INTEGER_32 *)arg1, arg2);
}
static EIF_REFERENCE F762_4194_3428_245 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F762_4194(Current, *(EIF_NATURAL_64 *)arg1, arg2);
}
static EIF_REFERENCE F763_4194_3428_245 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F763_4194(Current, *(EIF_CHARACTER_32 *)arg1, arg2);
}
static EIF_REFERENCE F764_4194_3428_245 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F764_4194(Current, *(EIF_CHARACTER_8 *)arg1, arg2);
}
static EIF_REFERENCE F765_4194_3428_245 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F765_4194(Current, *(EIF_POINTER *)arg1, arg2);
}
static EIF_REFERENCE F766_4194_3428_245 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F766_4194(Current, *(EIF_NATURAL_32 *)arg1, arg2);
}
static EIF_REFERENCE F767_4194_3428_245 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F767_4194(Current, *(EIF_NATURAL_8 *)arg1, arg2);
}
static EIF_REFERENCE F768_4194_3428_245 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F768_4194(Current, *(EIF_REAL_32 *)arg1, arg2);
}
static EIF_REFERENCE F769_4194_3428_245 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F769_4194(Current, *(EIF_REAL_64 *)arg1, arg2);
}
static EIF_REFERENCE F770_4194_3428_245 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F770_4194(Current, *(EIF_INTEGER_16 *)arg1, arg2);
}
static EIF_REFERENCE F771_4194_3428_245 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F771_4194(Current, *(EIF_INTEGER_8 *)arg1, arg2);
}
static EIF_REFERENCE F772_4194_3428_245 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F772_4194(Current, *(EIF_INTEGER_64 *)arg1, arg2);
}
static EIF_REFERENCE F773_4194_3428_245 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F773_4194(Current, *(EIF_NATURAL_16 *)arg1, arg2);
}
static EIF_REFERENCE F774_4194_3428_245 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	return F774_4194(Current, *(EIF_BOOLEAN *)arg1, arg2);
}

char *(*R3430[15])();
void R3430_init () {
	R3430[0] = (char *(*)()) F760_4196;
	R3430[1] = (char *(*)()) F761_4196;
	R3430[2] = (char *(*)()) F762_4196;
	R3430[3] = (char *(*)()) F763_4196;
	R3430[4] = (char *(*)()) F764_4196;
	R3430[5] = (char *(*)()) F765_4196;
	R3430[6] = (char *(*)()) F766_4196;
	R3430[7] = (char *(*)()) F767_4196;
	R3430[8] = (char *(*)()) F768_4196;
	R3430[9] = (char *(*)()) F769_4196;
	R3430[10] = (char *(*)()) F770_4196;
	R3430[11] = (char *(*)()) F771_4196;
	R3430[12] = (char *(*)()) F772_4196;
	R3430[13] = (char *(*)()) F773_4196;
	R3430[14] = (char *(*)()) F774_4196;
}

char *(*R3432[15])();
void R3432_init () {
	R3432[0] = (char *(*)()) F760_4198;
	R3432[1] = (char *(*)()) F761_4198;
	R3432[2] = (char *(*)()) F762_4198;
	R3432[3] = (char *(*)()) F763_4198;
	R3432[4] = (char *(*)()) F764_4198;
	R3432[5] = (char *(*)()) F765_4198;
	R3432[6] = (char *(*)()) F766_4198;
	R3432[7] = (char *(*)()) F767_4198;
	R3432[8] = (char *(*)()) F768_4198;
	R3432[9] = (char *(*)()) F769_4198;
	R3432[10] = (char *(*)()) F770_4198;
	R3432[11] = (char *(*)()) F771_4198;
	R3432[12] = (char *(*)()) F772_4198;
	R3432[13] = (char *(*)()) F773_4198;
	R3432[14] = (char *(*)()) F774_4198;
}

char *(*R3433[15])();
void R3433_init () {
	R3433[0] = (char *(*)()) F760_4199;
	R3433[1] = (char *(*)()) F761_4199;
	R3433[2] = (char *(*)()) F762_4199;
	R3433[3] = (char *(*)()) F763_4199;
	R3433[4] = (char *(*)()) F764_4199;
	R3433[5] = (char *(*)()) F765_4199;
	R3433[6] = (char *(*)()) F766_4199;
	R3433[7] = (char *(*)()) F767_4199;
	R3433[8] = (char *(*)()) F768_4199;
	R3433[9] = (char *(*)()) F769_4199;
	R3433[10] = (char *(*)()) F770_4199;
	R3433[11] = (char *(*)()) F771_4199;
	R3433[12] = (char *(*)()) F772_4199;
	R3433[13] = (char *(*)()) F773_4199;
	R3433[14] = (char *(*)()) F774_4199;
}

char *(*R3434[15])();
void R3434_init () {
	R3434[0] = (char *(*)()) F760_4200;
	R3434[1] = (char *(*)()) F761_4200;
	R3434[2] = (char *(*)()) F762_4200;
	R3434[3] = (char *(*)()) F763_4200;
	R3434[4] = (char *(*)()) F764_4200;
	R3434[5] = (char *(*)()) F765_4200;
	R3434[6] = (char *(*)()) F766_4200;
	R3434[7] = (char *(*)()) F767_4200;
	R3434[8] = (char *(*)()) F768_4200;
	R3434[9] = (char *(*)()) F769_4200;
	R3434[10] = (char *(*)()) F770_4200;
	R3434[11] = (char *(*)()) F771_4200;
	R3434[12] = (char *(*)()) F772_4200;
	R3434[13] = (char *(*)()) F773_4200;
	R3434[14] = (char *(*)()) F774_4200;
}

char *(*R3435[15])();
void R3435_init () {
	R3435[0] = (char *(*)()) F760_4201;
	R3435[1] = (char *(*)()) F761_4201;
	R3435[2] = (char *(*)()) F762_4201;
	R3435[3] = (char *(*)()) F763_4201;
	R3435[4] = (char *(*)()) F764_4201;
	R3435[5] = (char *(*)()) F765_4201;
	R3435[6] = (char *(*)()) F766_4201;
	R3435[7] = (char *(*)()) F767_4201;
	R3435[8] = (char *(*)()) F768_4201;
	R3435[9] = (char *(*)()) F769_4201;
	R3435[10] = (char *(*)()) F770_4201;
	R3435[11] = (char *(*)()) F771_4201;
	R3435[12] = (char *(*)()) F772_4201;
	R3435[13] = (char *(*)()) F773_4201;
	R3435[14] = (char *(*)()) F774_4201;
}

char *(*R3439[15])();
void R3439_init () {
	R3439[0] = (char *(*)()) F760_4206;
	R3439[1] = (char *(*)()) F761_4206;
	R3439[2] = (char *(*)()) F762_4206;
	R3439[3] = (char *(*)()) F763_4206;
	R3439[4] = (char *(*)()) F764_4206;
	R3439[5] = (char *(*)()) F765_4206;
	R3439[6] = (char *(*)()) F766_4206;
	R3439[7] = (char *(*)()) F767_4206;
	R3439[8] = (char *(*)()) F768_4206;
	R3439[9] = (char *(*)()) F769_4206;
	R3439[10] = (char *(*)()) F770_4206;
	R3439[11] = (char *(*)()) F771_4206;
	R3439[12] = (char *(*)()) F772_4206;
	R3439[13] = (char *(*)()) F773_4206;
	R3439[14] = (char *(*)()) F774_4206;
}

char *(*R3443[45])();
void R3443_init () {
	R3443[0] = (char *(*)()) F776_4224;
	R3443[1] = (char *(*)()) F777_4224;
	R3443[2] = (char *(*)()) F778_4224;
	R3443[3] = (char *(*)()) F779_4224;
	R3443[4] = (char *(*)()) F780_4224;
	R3443[5] = (char *(*)()) F781_4224;
	R3443[6] = (char *(*)()) F782_4224;
	R3443[7] = (char *(*)()) F783_4224;
	R3443[8] = (char *(*)()) F784_4224;
	R3443[9] = (char *(*)()) F785_4224;
	R3443[10] = (char *(*)()) F786_4224;
	R3443[11] = (char *(*)()) F787_4224;
	R3443[12] = (char *(*)()) F788_4224;
	R3443[13] = (char *(*)()) F789_4224;
	R3443[14] = (char *(*)()) F790_4224;
	R3443[15] = (char *(*)()) F791_4242;
	R3443[16] = (char *(*)()) F792_4242;
	R3443[17] = (char *(*)()) F793_4242;
	R3443[18] = (char *(*)()) F794_4242;
	R3443[19] = (char *(*)()) F795_4242;
	R3443[20] = (char *(*)()) F796_4242;
	R3443[21] = (char *(*)()) F797_4242;
	R3443[22] = (char *(*)()) F798_4242;
	R3443[23] = (char *(*)()) F799_4242;
	R3443[24] = (char *(*)()) F800_4242;
	R3443[25] = (char *(*)()) F801_4242;
	R3443[26] = (char *(*)()) F802_4242;
	R3443[27] = (char *(*)()) F803_4242;
	R3443[28] = (char *(*)()) F804_4242;
	R3443[29] = (char *(*)()) F805_4242;
	R3443[30] = (char *(*)()) F806_4257;
	R3443[31] = (char *(*)()) F807_4257;
	R3443[32] = (char *(*)()) F808_4257;
	R3443[33] = (char *(*)()) F809_4257;
	R3443[34] = (char *(*)()) F810_4257;
	R3443[35] = (char *(*)()) F811_4257;
	R3443[36] = (char *(*)()) F812_4257;
	R3443[37] = (char *(*)()) F813_4257;
	R3443[38] = (char *(*)()) F814_4257;
	R3443[39] = (char *(*)()) F815_4257;
	R3443[40] = (char *(*)()) F816_4257;
	R3443[41] = (char *(*)()) F817_4257;
	R3443[42] = (char *(*)()) F818_4257;
	R3443[43] = (char *(*)()) F819_4257;
	R3443[44] = (char *(*)()) F820_4257;
}

char *(*R3444[45])();
void R3444_init () {
	R3444[0] = (char *(*)()) F776_4225;
	R3444[1] = (char *(*)()) F777_4225;
	R3444[2] = (char *(*)()) F778_4225;
	R3444[3] = (char *(*)()) F779_4225;
	R3444[4] = (char *(*)()) F780_4225;
	R3444[5] = (char *(*)()) F781_4225;
	R3444[6] = (char *(*)()) F782_4225;
	R3444[7] = (char *(*)()) F783_4225;
	R3444[8] = (char *(*)()) F784_4225;
	R3444[9] = (char *(*)()) F785_4225;
	R3444[10] = (char *(*)()) F786_4225;
	R3444[11] = (char *(*)()) F787_4225;
	R3444[12] = (char *(*)()) F788_4225;
	R3444[13] = (char *(*)()) F789_4225;
	R3444[14] = (char *(*)()) F790_4225;
	R3444[15] = (char *(*)()) F791_4243;
	R3444[16] = (char *(*)()) F792_4243;
	R3444[17] = (char *(*)()) F793_4243;
	R3444[18] = (char *(*)()) F794_4243;
	R3444[19] = (char *(*)()) F795_4243;
	R3444[20] = (char *(*)()) F796_4243;
	R3444[21] = (char *(*)()) F797_4243;
	R3444[22] = (char *(*)()) F798_4243;
	R3444[23] = (char *(*)()) F799_4243;
	R3444[24] = (char *(*)()) F800_4243;
	R3444[25] = (char *(*)()) F801_4243;
	R3444[26] = (char *(*)()) F802_4243;
	R3444[27] = (char *(*)()) F803_4243;
	R3444[28] = (char *(*)()) F804_4243;
	R3444[29] = (char *(*)()) F805_4243;
	R3444[30] = (char *(*)()) F806_4258;
	R3444[31] = (char *(*)()) F807_4258;
	R3444[32] = (char *(*)()) F808_4258;
	R3444[33] = (char *(*)()) F809_4258;
	R3444[34] = (char *(*)()) F810_4258;
	R3444[35] = (char *(*)()) F811_4258;
	R3444[36] = (char *(*)()) F812_4258;
	R3444[37] = (char *(*)()) F813_4258;
	R3444[38] = (char *(*)()) F814_4258;
	R3444[39] = (char *(*)()) F815_4258;
	R3444[40] = (char *(*)()) F816_4258;
	R3444[41] = (char *(*)()) F817_4258;
	R3444[42] = (char *(*)()) F818_4258;
	R3444[43] = (char *(*)()) F819_4258;
	R3444[44] = (char *(*)()) F820_4258;
}

char *(*R3445[45])();
void R3445_init () {
	R3445[0] = (char *(*)()) F776_4226;
	R3445[1] = (char *(*)()) F777_4226;
	R3445[2] = (char *(*)()) F778_4226;
	R3445[3] = (char *(*)()) F779_4226;
	R3445[4] = (char *(*)()) F780_4226;
	R3445[5] = (char *(*)()) F781_4226;
	R3445[6] = (char *(*)()) F782_4226;
	R3445[7] = (char *(*)()) F783_4226;
	R3445[8] = (char *(*)()) F784_4226;
	R3445[9] = (char *(*)()) F785_4226;
	R3445[10] = (char *(*)()) F786_4226;
	R3445[11] = (char *(*)()) F787_4226;
	R3445[12] = (char *(*)()) F788_4226;
	R3445[13] = (char *(*)()) F789_4226;
	R3445[14] = (char *(*)()) F790_4226;
	R3445[15] = (char *(*)()) F791_4244;
	R3445[16] = (char *(*)()) F792_4244;
	R3445[17] = (char *(*)()) F793_4244;
	R3445[18] = (char *(*)()) F794_4244;
	R3445[19] = (char *(*)()) F795_4244;
	R3445[20] = (char *(*)()) F796_4244;
	R3445[21] = (char *(*)()) F797_4244;
	R3445[22] = (char *(*)()) F798_4244;
	R3445[23] = (char *(*)()) F799_4244;
	R3445[24] = (char *(*)()) F800_4244;
	R3445[25] = (char *(*)()) F801_4244;
	R3445[26] = (char *(*)()) F802_4244;
	R3445[27] = (char *(*)()) F803_4244;
	R3445[28] = (char *(*)()) F804_4244;
	R3445[29] = (char *(*)()) F805_4244;
	R3445[30] = (char *(*)()) F806_4259;
	R3445[31] = (char *(*)()) F807_4259;
	R3445[32] = (char *(*)()) F808_4259;
	R3445[33] = (char *(*)()) F809_4259;
	R3445[34] = (char *(*)()) F810_4259;
	R3445[35] = (char *(*)()) F811_4259;
	R3445[36] = (char *(*)()) F812_4259;
	R3445[37] = (char *(*)()) F813_4259;
	R3445[38] = (char *(*)()) F814_4259;
	R3445[39] = (char *(*)()) F815_4259;
	R3445[40] = (char *(*)()) F816_4259;
	R3445[41] = (char *(*)()) F817_4259;
	R3445[42] = (char *(*)()) F818_4259;
	R3445[43] = (char *(*)()) F819_4259;
	R3445[44] = (char *(*)()) F820_4259;
}

char *(*R3446[45])();
void R3446_init () {
	R3446[0] = (char *(*)()) F776_4227;
	R3446[1] = (char *(*)()) F777_4227;
	R3446[2] = (char *(*)()) F778_4227;
	R3446[3] = (char *(*)()) F779_4227;
	R3446[4] = (char *(*)()) F780_4227;
	R3446[5] = (char *(*)()) F781_4227;
	R3446[6] = (char *(*)()) F782_4227;
	R3446[7] = (char *(*)()) F783_4227;
	R3446[8] = (char *(*)()) F784_4227;
	R3446[9] = (char *(*)()) F785_4227;
	R3446[10] = (char *(*)()) F786_4227;
	R3446[11] = (char *(*)()) F787_4227;
	R3446[12] = (char *(*)()) F788_4227;
	R3446[13] = (char *(*)()) F789_4227;
	R3446[14] = (char *(*)()) F790_4227;
	R3446[15] = (char *(*)()) F791_4245;
	R3446[16] = (char *(*)()) F792_4245;
	R3446[17] = (char *(*)()) F793_4245;
	R3446[18] = (char *(*)()) F794_4245;
	R3446[19] = (char *(*)()) F795_4245;
	R3446[20] = (char *(*)()) F796_4245;
	R3446[21] = (char *(*)()) F797_4245;
	R3446[22] = (char *(*)()) F798_4245;
	R3446[23] = (char *(*)()) F799_4245;
	R3446[24] = (char *(*)()) F800_4245;
	R3446[25] = (char *(*)()) F801_4245;
	R3446[26] = (char *(*)()) F802_4245;
	R3446[27] = (char *(*)()) F803_4245;
	R3446[28] = (char *(*)()) F804_4245;
	R3446[29] = (char *(*)()) F805_4245;
	R3446[30] = (char *(*)()) F806_4260;
	R3446[31] = (char *(*)()) F807_4260;
	R3446[32] = (char *(*)()) F808_4260;
	R3446[33] = (char *(*)()) F809_4260;
	R3446[34] = (char *(*)()) F810_4260;
	R3446[35] = (char *(*)()) F811_4260;
	R3446[36] = (char *(*)()) F812_4260;
	R3446[37] = (char *(*)()) F813_4260;
	R3446[38] = (char *(*)()) F814_4260;
	R3446[39] = (char *(*)()) F815_4260;
	R3446[40] = (char *(*)()) F816_4260;
	R3446[41] = (char *(*)()) F817_4260;
	R3446[42] = (char *(*)()) F818_4260;
	R3446[43] = (char *(*)()) F819_4260;
	R3446[44] = (char *(*)()) F820_4260;
}

char *(*R3447[45])();
void R3447_init () {
	R3447[0] = (char *(*)()) F776_4229;
	R3447[1] = (char *(*)()) F777_4229;
	R3447[2] = (char *(*)()) F778_4229;
	R3447[3] = (char *(*)()) F779_4229;
	R3447[4] = (char *(*)()) F780_4229;
	R3447[5] = (char *(*)()) F781_4229;
	R3447[6] = (char *(*)()) F782_4229;
	R3447[7] = (char *(*)()) F783_4229;
	R3447[8] = (char *(*)()) F784_4229;
	R3447[9] = (char *(*)()) F785_4229;
	R3447[10] = (char *(*)()) F786_4229;
	R3447[11] = (char *(*)()) F787_4229;
	R3447[12] = (char *(*)()) F788_4229;
	R3447[13] = (char *(*)()) F789_4229;
	R3447[14] = (char *(*)()) F790_4229;
	R3447[15] = (char *(*)()) F791_4247;
	R3447[16] = (char *(*)()) F792_4247;
	R3447[17] = (char *(*)()) F793_4247;
	R3447[18] = (char *(*)()) F794_4247;
	R3447[19] = (char *(*)()) F795_4247;
	R3447[20] = (char *(*)()) F796_4247;
	R3447[21] = (char *(*)()) F797_4247;
	R3447[22] = (char *(*)()) F798_4247;
	R3447[23] = (char *(*)()) F799_4247;
	R3447[24] = (char *(*)()) F800_4247;
	R3447[25] = (char *(*)()) F801_4247;
	R3447[26] = (char *(*)()) F802_4247;
	R3447[27] = (char *(*)()) F803_4247;
	R3447[28] = (char *(*)()) F804_4247;
	R3447[29] = (char *(*)()) F805_4247;
	R3447[30] = (char *(*)()) F806_4261;
	R3447[31] = (char *(*)()) F807_4261;
	R3447[32] = (char *(*)()) F808_4261;
	R3447[33] = (char *(*)()) F809_4261;
	R3447[34] = (char *(*)()) F810_4261;
	R3447[35] = (char *(*)()) F811_4261;
	R3447[36] = (char *(*)()) F812_4261;
	R3447[37] = (char *(*)()) F813_4261;
	R3447[38] = (char *(*)()) F814_4261;
	R3447[39] = (char *(*)()) F815_4261;
	R3447[40] = (char *(*)()) F816_4261;
	R3447[41] = (char *(*)()) F817_4261;
	R3447[42] = (char *(*)()) F818_4261;
	R3447[43] = (char *(*)()) F819_4261;
	R3447[44] = (char *(*)()) F820_4261;
}

char *(*R3449[45])();
void R3449_init () {
	R3449[0] = (char *(*)()) F776_4230;
	R3449[1] = (char *(*)()) F777_4230;
	R3449[2] = (char *(*)()) F778_4230;
	R3449[3] = (char *(*)()) F779_4230;
	R3449[4] = (char *(*)()) F780_4230;
	R3449[5] = (char *(*)()) F781_4230;
	R3449[6] = (char *(*)()) F782_4230;
	R3449[7] = (char *(*)()) F783_4230;
	R3449[8] = (char *(*)()) F784_4230;
	R3449[9] = (char *(*)()) F785_4230;
	R3449[10] = (char *(*)()) F786_4230;
	R3449[11] = (char *(*)()) F787_4230;
	R3449[12] = (char *(*)()) F788_4230;
	R3449[13] = (char *(*)()) F789_4230;
	R3449[14] = (char *(*)()) F790_4230;
	R3449[15] = (char *(*)()) F791_4248;
	R3449[16] = (char *(*)()) F792_4248;
	R3449[17] = (char *(*)()) F793_4248;
	R3449[18] = (char *(*)()) F794_4248;
	R3449[19] = (char *(*)()) F795_4248;
	R3449[20] = (char *(*)()) F796_4248;
	R3449[21] = (char *(*)()) F797_4248;
	R3449[22] = (char *(*)()) F798_4248;
	R3449[23] = (char *(*)()) F799_4248;
	R3449[24] = (char *(*)()) F800_4248;
	R3449[25] = (char *(*)()) F801_4248;
	R3449[26] = (char *(*)()) F802_4248;
	R3449[27] = (char *(*)()) F803_4248;
	R3449[28] = (char *(*)()) F804_4248;
	R3449[29] = (char *(*)()) F805_4248;
	R3449[30] = (char *(*)()) F806_4262;
	R3449[31] = (char *(*)()) F807_4262;
	R3449[32] = (char *(*)()) F808_4262;
	R3449[33] = (char *(*)()) F809_4262;
	R3449[34] = (char *(*)()) F810_4262;
	R3449[35] = (char *(*)()) F811_4262;
	R3449[36] = (char *(*)()) F812_4262;
	R3449[37] = (char *(*)()) F813_4262;
	R3449[38] = (char *(*)()) F814_4262;
	R3449[39] = (char *(*)()) F815_4262;
	R3449[40] = (char *(*)()) F816_4262;
	R3449[41] = (char *(*)()) F817_4262;
	R3449[42] = (char *(*)()) F818_4262;
	R3449[43] = (char *(*)()) F819_4262;
	R3449[44] = (char *(*)()) F820_4262;
}

char *(*R3450[45])();
void R3450_init () {
	R3450[0] = (char *(*)()) F776_4231;
	R3450[1] = (char *(*)()) F777_4231;
	R3450[2] = (char *(*)()) F778_4231;
	R3450[3] = (char *(*)()) F779_4231;
	R3450[4] = (char *(*)()) F780_4231;
	R3450[5] = (char *(*)()) F781_4231;
	R3450[6] = (char *(*)()) F782_4231;
	R3450[7] = (char *(*)()) F783_4231;
	R3450[8] = (char *(*)()) F784_4231;
	R3450[9] = (char *(*)()) F785_4231;
	R3450[10] = (char *(*)()) F786_4231;
	R3450[11] = (char *(*)()) F787_4231;
	R3450[12] = (char *(*)()) F788_4231;
	R3450[13] = (char *(*)()) F789_4231;
	R3450[14] = (char *(*)()) F790_4231;
	R3450[15] = (char *(*)()) F791_4249;
	R3450[16] = (char *(*)()) F792_4249;
	R3450[17] = (char *(*)()) F793_4249;
	R3450[18] = (char *(*)()) F794_4249;
	R3450[19] = (char *(*)()) F795_4249;
	R3450[20] = (char *(*)()) F796_4249;
	R3450[21] = (char *(*)()) F797_4249;
	R3450[22] = (char *(*)()) F798_4249;
	R3450[23] = (char *(*)()) F799_4249;
	R3450[24] = (char *(*)()) F800_4249;
	R3450[25] = (char *(*)()) F801_4249;
	R3450[26] = (char *(*)()) F802_4249;
	R3450[27] = (char *(*)()) F803_4249;
	R3450[28] = (char *(*)()) F804_4249;
	R3450[29] = (char *(*)()) F805_4249;
	R3450[30] = (char *(*)()) F806_4263;
	R3450[31] = (char *(*)()) F807_4263;
	R3450[32] = (char *(*)()) F808_4263;
	R3450[33] = (char *(*)()) F809_4263;
	R3450[34] = (char *(*)()) F810_4263;
	R3450[35] = (char *(*)()) F811_4263;
	R3450[36] = (char *(*)()) F812_4263;
	R3450[37] = (char *(*)()) F813_4263;
	R3450[38] = (char *(*)()) F814_4263;
	R3450[39] = (char *(*)()) F815_4263;
	R3450[40] = (char *(*)()) F816_4263;
	R3450[41] = (char *(*)()) F817_4263;
	R3450[42] = (char *(*)()) F818_4263;
	R3450[43] = (char *(*)()) F819_4263;
	R3450[44] = (char *(*)()) F820_4263;
}

char *(*R3451[45])();
void R3451_init () {
	R3451[0] = (char *(*)()) F776_4232;
	R3451[1] = (char *(*)()) F777_4232;
	R3451[2] = (char *(*)()) F778_4232;
	R3451[3] = (char *(*)()) F779_4232;
	R3451[4] = (char *(*)()) F780_4232;
	R3451[5] = (char *(*)()) F781_4232;
	R3451[6] = (char *(*)()) F782_4232;
	R3451[7] = (char *(*)()) F783_4232;
	R3451[8] = (char *(*)()) F784_4232;
	R3451[9] = (char *(*)()) F785_4232;
	R3451[10] = (char *(*)()) F786_4232;
	R3451[11] = (char *(*)()) F787_4232;
	R3451[12] = (char *(*)()) F788_4232;
	R3451[13] = (char *(*)()) F789_4232;
	R3451[14] = (char *(*)()) F790_4232;
	R3451[15] = (char *(*)()) F791_4250;
	R3451[16] = (char *(*)()) F792_4250;
	R3451[17] = (char *(*)()) F793_4250;
	R3451[18] = (char *(*)()) F794_4250;
	R3451[19] = (char *(*)()) F795_4250;
	R3451[20] = (char *(*)()) F796_4250;
	R3451[21] = (char *(*)()) F797_4250;
	R3451[22] = (char *(*)()) F798_4250;
	R3451[23] = (char *(*)()) F799_4250;
	R3451[24] = (char *(*)()) F800_4250;
	R3451[25] = (char *(*)()) F801_4250;
	R3451[26] = (char *(*)()) F802_4250;
	R3451[27] = (char *(*)()) F803_4250;
	R3451[28] = (char *(*)()) F804_4250;
	R3451[29] = (char *(*)()) F805_4250;
	R3451[30] = (char *(*)()) F806_4264;
	R3451[31] = (char *(*)()) F807_4264;
	R3451[32] = (char *(*)()) F808_4264;
	R3451[33] = (char *(*)()) F809_4264;
	R3451[34] = (char *(*)()) F810_4264;
	R3451[35] = (char *(*)()) F811_4264;
	R3451[36] = (char *(*)()) F812_4264;
	R3451[37] = (char *(*)()) F813_4264;
	R3451[38] = (char *(*)()) F814_4264;
	R3451[39] = (char *(*)()) F815_4264;
	R3451[40] = (char *(*)()) F816_4264;
	R3451[41] = (char *(*)()) F817_4264;
	R3451[42] = (char *(*)()) F818_4264;
	R3451[43] = (char *(*)()) F819_4264;
	R3451[44] = (char *(*)()) F820_4264;
}

char *(*R3454[15])();
void R3454_init () {
	R3454[0] = (char *(*)()) F776_4222;
	R3454[1] = (char *(*)()) F777_4222_3454_1;
	R3454[2] = (char *(*)()) F778_4222_3454_1;
	R3454[3] = (char *(*)()) F779_4222_3454_1;
	R3454[4] = (char *(*)()) F780_4222_3454_1;
	R3454[5] = (char *(*)()) F781_4222_3454_1;
	R3454[6] = (char *(*)()) F782_4222_3454_1;
	R3454[7] = (char *(*)()) F783_4222_3454_1;
	R3454[8] = (char *(*)()) F784_4222_3454_1;
	R3454[9] = (char *(*)()) F785_4222_3454_1;
	R3454[10] = (char *(*)()) F786_4222_3454_1;
	R3454[11] = (char *(*)()) F787_4222_3454_1;
	R3454[12] = (char *(*)()) F788_4222_3454_1;
	R3454[13] = (char *(*)()) F789_4222_3454_1;
	R3454[14] = (char *(*)()) F790_4222_3454_1;
}
static EIF_REFERENCE F777_4222_3454_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F777_4222(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c4;
	} else {
		Result = RTLNS(eif_new_type(916, 0x00).id, 916, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_CHARACTER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F778_4222_3454_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F778_4222(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c1;
	} else {
		Result = RTLNS(eif_new_type(919, 0x00).id, 919, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_CHARACTER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F779_4222_3454_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F779_4222(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i8;
	} else {
		Result = RTLNS(eif_new_type(889, 0x00).id, 889, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_INTEGER_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F780_4222_3454_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F780_4222(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		Result = RTLNS(eif_new_type(958, 0x00).id, 958, _OBJSIZ_0_0_0_0_0_1_0_0_);
		*(EIF_POINTER *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F781_4222_3454_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F781_4222(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i2;
	} else {
		Result = RTLNS(eif_new_type(895, 0x00).id, 895, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_INTEGER_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F782_4222_3454_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F782_4222(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i1;
	} else {
		Result = RTLNS(eif_new_type(898, 0x00).id, 898, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_INTEGER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F783_4222_3454_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F783_4222(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n8;
	} else {
		Result = RTLNS(eif_new_type(901, 0x00).id, 901, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_NATURAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F784_4222_3454_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F784_4222(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(eif_new_type(904, 0x00).id, 904, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F785_4222_3454_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F785_4222(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n2;
	} else {
		Result = RTLNS(eif_new_type(925, 0x00).id, 925, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_NATURAL_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F786_4222_3454_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F786_4222(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n1;
	} else {
		Result = RTLNS(eif_new_type(907, 0x00).id, 907, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_NATURAL_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F787_4222_3454_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F787_4222(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r4;
	} else {
		Result = RTLNS(eif_new_type(910, 0x00).id, 910, _OBJSIZ_0_0_0_0_1_0_0_0_);
		*(EIF_REAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F788_4222_3454_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F788_4222(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_b = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_b;
	} else {
		Result = RTLNS(eif_new_type(922, 0x00).id, 922, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_BOOLEAN *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F789_4222_3454_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F789_4222(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(892, 0x00).id, 892, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F790_4222_3454_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F790_4222(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r8;
	} else {
		Result = RTLNS(eif_new_type(913, 0x00).id, 913, _OBJSIZ_0_0_0_0_0_0_0_1_);
		*(EIF_REAL_64 *)Result = r;
		return Result;
	}
}

char *(*R3456[15])();
void R3456_init () {
	R3456[0] = (char *(*)()) F776_4233;
	R3456[1] = (char *(*)()) F777_4233;
	R3456[2] = (char *(*)()) F778_4233;
	R3456[3] = (char *(*)()) F779_4233;
	R3456[4] = (char *(*)()) F780_4233;
	R3456[5] = (char *(*)()) F781_4233;
	R3456[6] = (char *(*)()) F782_4233;
	R3456[7] = (char *(*)()) F783_4233;
	R3456[8] = (char *(*)()) F784_4233;
	R3456[9] = (char *(*)()) F785_4233;
	R3456[10] = (char *(*)()) F786_4233;
	R3456[11] = (char *(*)()) F787_4233;
	R3456[12] = (char *(*)()) F788_4233;
	R3456[13] = (char *(*)()) F789_4233;
	R3456[14] = (char *(*)()) F790_4233;
}

char *(*R3457[15])();
void R3457_init () {
	R3457[0] = (char *(*)()) F776_4234;
	R3457[1] = (char *(*)()) F777_4234_3457_5;
	R3457[2] = (char *(*)()) F778_4234_3457_5;
	R3457[3] = (char *(*)()) F779_4234_3457_5;
	R3457[4] = (char *(*)()) F780_4234_3457_5;
	R3457[5] = (char *(*)()) F781_4234_3457_5;
	R3457[6] = (char *(*)()) F782_4234_3457_5;
	R3457[7] = (char *(*)()) F783_4234_3457_5;
	R3457[8] = (char *(*)()) F784_4234_3457_5;
	R3457[9] = (char *(*)()) F785_4234_3457_5;
	R3457[10] = (char *(*)()) F786_4234_3457_5;
	R3457[11] = (char *(*)()) F787_4234_3457_5;
	R3457[12] = (char *(*)()) F788_4234_3457_5;
	R3457[13] = (char *(*)()) F789_4234_3457_5;
	R3457[14] = (char *(*)()) F790_4234_3457_5;
}
static EIF_REFERENCE F777_4234_3457_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F777_4234(Current, *(EIF_CHARACTER_32 *)arg1);
}
static EIF_REFERENCE F778_4234_3457_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F778_4234(Current, *(EIF_CHARACTER_8 *)arg1);
}
static EIF_REFERENCE F779_4234_3457_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F779_4234(Current, *(EIF_INTEGER_64 *)arg1);
}
static EIF_REFERENCE F780_4234_3457_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F780_4234(Current, *(EIF_POINTER *)arg1);
}
static EIF_REFERENCE F781_4234_3457_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F781_4234(Current, *(EIF_INTEGER_16 *)arg1);
}
static EIF_REFERENCE F782_4234_3457_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F782_4234(Current, *(EIF_INTEGER_8 *)arg1);
}
static EIF_REFERENCE F783_4234_3457_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F783_4234(Current, *(EIF_NATURAL_64 *)arg1);
}
static EIF_REFERENCE F784_4234_3457_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F784_4234(Current, *(EIF_NATURAL_32 *)arg1);
}
static EIF_REFERENCE F785_4234_3457_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F785_4234(Current, *(EIF_NATURAL_16 *)arg1);
}
static EIF_REFERENCE F786_4234_3457_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F786_4234(Current, *(EIF_NATURAL_8 *)arg1);
}
static EIF_REFERENCE F787_4234_3457_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F787_4234(Current, *(EIF_REAL_32 *)arg1);
}
static EIF_REFERENCE F788_4234_3457_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F788_4234(Current, *(EIF_BOOLEAN *)arg1);
}
static EIF_REFERENCE F789_4234_3457_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F789_4234(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_REFERENCE F790_4234_3457_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F790_4234(Current, *(EIF_REAL_64 *)arg1);
}

char *(*R3458[15])();
void R3458_init () {
	R3458[0] = (char *(*)()) F776_4235;
	R3458[1] = (char *(*)()) F777_4235_3458_1;
	R3458[2] = (char *(*)()) F778_4235_3458_1;
	R3458[3] = (char *(*)()) F779_4235_3458_1;
	R3458[4] = (char *(*)()) F780_4235_3458_1;
	R3458[5] = (char *(*)()) F781_4235_3458_1;
	R3458[6] = (char *(*)()) F782_4235_3458_1;
	R3458[7] = (char *(*)()) F783_4235_3458_1;
	R3458[8] = (char *(*)()) F784_4235_3458_1;
	R3458[9] = (char *(*)()) F785_4235_3458_1;
	R3458[10] = (char *(*)()) F786_4235_3458_1;
	R3458[11] = (char *(*)()) F787_4235_3458_1;
	R3458[12] = (char *(*)()) F788_4235_3458_1;
	R3458[13] = (char *(*)()) F789_4235_3458_1;
	R3458[14] = (char *(*)()) F790_4235_3458_1;
}
static EIF_REFERENCE F777_4235_3458_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F777_4235(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c4;
	} else {
		Result = RTLNS(eif_new_type(916, 0x00).id, 916, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_CHARACTER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F778_4235_3458_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F778_4235(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c1;
	} else {
		Result = RTLNS(eif_new_type(919, 0x00).id, 919, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_CHARACTER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F779_4235_3458_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F779_4235(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i8;
	} else {
		Result = RTLNS(eif_new_type(889, 0x00).id, 889, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_INTEGER_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F780_4235_3458_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F780_4235(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		Result = RTLNS(eif_new_type(958, 0x00).id, 958, _OBJSIZ_0_0_0_0_0_1_0_0_);
		*(EIF_POINTER *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F781_4235_3458_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F781_4235(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i2;
	} else {
		Result = RTLNS(eif_new_type(895, 0x00).id, 895, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_INTEGER_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F782_4235_3458_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F782_4235(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i1;
	} else {
		Result = RTLNS(eif_new_type(898, 0x00).id, 898, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_INTEGER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F783_4235_3458_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F783_4235(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n8;
	} else {
		Result = RTLNS(eif_new_type(901, 0x00).id, 901, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_NATURAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F784_4235_3458_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F784_4235(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(eif_new_type(904, 0x00).id, 904, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F785_4235_3458_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F785_4235(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n2;
	} else {
		Result = RTLNS(eif_new_type(925, 0x00).id, 925, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_NATURAL_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F786_4235_3458_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F786_4235(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n1;
	} else {
		Result = RTLNS(eif_new_type(907, 0x00).id, 907, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_NATURAL_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F787_4235_3458_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F787_4235(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r4;
	} else {
		Result = RTLNS(eif_new_type(910, 0x00).id, 910, _OBJSIZ_0_0_0_0_1_0_0_0_);
		*(EIF_REAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F788_4235_3458_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F788_4235(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_b = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_b;
	} else {
		Result = RTLNS(eif_new_type(922, 0x00).id, 922, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_BOOLEAN *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F789_4235_3458_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F789_4235(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(892, 0x00).id, 892, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F790_4235_3458_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F790_4235(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r8;
	} else {
		Result = RTLNS(eif_new_type(913, 0x00).id, 913, _OBJSIZ_0_0_0_0_0_0_0_1_);
		*(EIF_REAL_64 *)Result = r;
		return Result;
	}
}

char *(*R3461[15])();
void R3461_init () {
	R3461[0] = (char *(*)()) F791_4237;
	R3461[1] = (char *(*)()) F792_4237;
	R3461[2] = (char *(*)()) F793_4237;
	R3461[3] = (char *(*)()) F794_4237;
	R3461[4] = (char *(*)()) F795_4237;
	R3461[5] = (char *(*)()) F796_4237;
	R3461[6] = (char *(*)()) F797_4237;
	R3461[7] = (char *(*)()) F798_4237;
	R3461[8] = (char *(*)()) F799_4237;
	R3461[9] = (char *(*)()) F800_4237;
	R3461[10] = (char *(*)()) F801_4237;
	R3461[11] = (char *(*)()) F802_4237;
	R3461[12] = (char *(*)()) F803_4237;
	R3461[13] = (char *(*)()) F804_4237;
	R3461[14] = (char *(*)()) F805_4237;
}

char *(*R3462[15])();
void R3462_init () {
	R3462[0] = (char *(*)()) F791_4238;
	R3462[1] = (char *(*)()) F792_4238_3462_380;
	R3462[2] = (char *(*)()) F793_4238_3462_380;
	R3462[3] = (char *(*)()) F794_4238_3462_380;
	R3462[4] = (char *(*)()) F795_4238_3462_380;
	R3462[5] = (char *(*)()) F796_4238_3462_380;
	R3462[6] = (char *(*)()) F797_4238_3462_380;
	R3462[7] = (char *(*)()) F798_4238_3462_380;
	R3462[8] = (char *(*)()) F799_4238_3462_380;
	R3462[9] = (char *(*)()) F800_4238_3462_380;
	R3462[10] = (char *(*)()) F801_4238_3462_380;
	R3462[11] = (char *(*)()) F802_4238_3462_380;
	R3462[12] = (char *(*)()) F803_4238_3462_380;
	R3462[13] = (char *(*)()) F804_4238_3462_380;
	R3462[14] = (char *(*)()) F805_4238_3462_380;
}
static void F792_4238_3462_380 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_NATURAL_32 arg3, EIF_REFERENCE arg4)
{
	F792_4238(Current, arg1, arg2, arg3, *(EIF_INTEGER_16 *)arg4);
}
static void F793_4238_3462_380 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_NATURAL_32 arg3, EIF_REFERENCE arg4)
{
	F793_4238(Current, arg1, arg2, arg3, *(EIF_REAL_64 *)arg4);
}
static void F794_4238_3462_380 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_NATURAL_32 arg3, EIF_REFERENCE arg4)
{
	F794_4238(Current, arg1, arg2, arg3, *(EIF_CHARACTER_8 *)arg4);
}
static void F795_4238_3462_380 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_NATURAL_32 arg3, EIF_REFERENCE arg4)
{
	F795_4238(Current, arg1, arg2, arg3, *(EIF_INTEGER_8 *)arg4);
}
static void F796_4238_3462_380 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_NATURAL_32 arg3, EIF_REFERENCE arg4)
{
	F796_4238(Current, arg1, arg2, arg3, *(EIF_NATURAL_64 *)arg4);
}
static void F797_4238_3462_380 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_NATURAL_32 arg3, EIF_REFERENCE arg4)
{
	F797_4238(Current, arg1, arg2, arg3, *(EIF_NATURAL_8 *)arg4);
}
static void F798_4238_3462_380 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_NATURAL_32 arg3, EIF_REFERENCE arg4)
{
	F798_4238(Current, arg1, arg2, arg3, *(EIF_NATURAL_16 *)arg4);
}
static void F799_4238_3462_380 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_NATURAL_32 arg3, EIF_REFERENCE arg4)
{
	F799_4238(Current, arg1, arg2, arg3, *(EIF_NATURAL_32 *)arg4);
}
static void F800_4238_3462_380 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_NATURAL_32 arg3, EIF_REFERENCE arg4)
{
	F800_4238(Current, arg1, arg2, arg3, *(EIF_REAL_32 *)arg4);
}
static void F801_4238_3462_380 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_NATURAL_32 arg3, EIF_REFERENCE arg4)
{
	F801_4238(Current, arg1, arg2, arg3, *(EIF_BOOLEAN *)arg4);
}
static void F802_4238_3462_380 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_NATURAL_32 arg3, EIF_REFERENCE arg4)
{
	F802_4238(Current, arg1, arg2, arg3, *(EIF_CHARACTER_32 *)arg4);
}
static void F803_4238_3462_380 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_NATURAL_32 arg3, EIF_REFERENCE arg4)
{
	F803_4238(Current, arg1, arg2, arg3, *(EIF_INTEGER_32 *)arg4);
}
static void F804_4238_3462_380 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_NATURAL_32 arg3, EIF_REFERENCE arg4)
{
	F804_4238(Current, arg1, arg2, arg3, *(EIF_INTEGER_64 *)arg4);
}
static void F805_4238_3462_380 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_NATURAL_32 arg3, EIF_REFERENCE arg4)
{
	F805_4238(Current, arg1, arg2, arg3, *(EIF_POINTER *)arg4);
}

char *(*R3463[15])();
void R3463_init () {
	R3463[0] = (char *(*)()) F791_4239;
	R3463[1] = (char *(*)()) F792_4239_3463_1;
	R3463[2] = (char *(*)()) F793_4239_3463_1;
	R3463[3] = (char *(*)()) F794_4239_3463_1;
	R3463[4] = (char *(*)()) F795_4239_3463_1;
	R3463[5] = (char *(*)()) F796_4239_3463_1;
	R3463[6] = (char *(*)()) F797_4239_3463_1;
	R3463[7] = (char *(*)()) F798_4239_3463_1;
	R3463[8] = (char *(*)()) F799_4239_3463_1;
	R3463[9] = (char *(*)()) F800_4239_3463_1;
	R3463[10] = (char *(*)()) F801_4239_3463_1;
	R3463[11] = (char *(*)()) F802_4239_3463_1;
	R3463[12] = (char *(*)()) F803_4239_3463_1;
	R3463[13] = (char *(*)()) F804_4239_3463_1;
	R3463[14] = (char *(*)()) F805_4239_3463_1;
}
static EIF_REFERENCE F792_4239_3463_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F792_4239(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i2;
	} else {
		Result = RTLNS(eif_new_type(895, 0x00).id, 895, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_INTEGER_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F793_4239_3463_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F793_4239(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r8;
	} else {
		Result = RTLNS(eif_new_type(913, 0x00).id, 913, _OBJSIZ_0_0_0_0_0_0_0_1_);
		*(EIF_REAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F794_4239_3463_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F794_4239(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c1;
	} else {
		Result = RTLNS(eif_new_type(919, 0x00).id, 919, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_CHARACTER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F795_4239_3463_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F795_4239(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i1;
	} else {
		Result = RTLNS(eif_new_type(898, 0x00).id, 898, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_INTEGER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F796_4239_3463_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F796_4239(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n8;
	} else {
		Result = RTLNS(eif_new_type(901, 0x00).id, 901, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_NATURAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F797_4239_3463_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F797_4239(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n1;
	} else {
		Result = RTLNS(eif_new_type(907, 0x00).id, 907, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_NATURAL_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F798_4239_3463_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F798_4239(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n2;
	} else {
		Result = RTLNS(eif_new_type(925, 0x00).id, 925, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_NATURAL_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F799_4239_3463_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F799_4239(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(eif_new_type(904, 0x00).id, 904, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F800_4239_3463_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F800_4239(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r4;
	} else {
		Result = RTLNS(eif_new_type(910, 0x00).id, 910, _OBJSIZ_0_0_0_0_1_0_0_0_);
		*(EIF_REAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F801_4239_3463_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F801_4239(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_b = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_b;
	} else {
		Result = RTLNS(eif_new_type(922, 0x00).id, 922, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_BOOLEAN *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F802_4239_3463_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F802_4239(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c4;
	} else {
		Result = RTLNS(eif_new_type(916, 0x00).id, 916, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_CHARACTER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F803_4239_3463_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F803_4239(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(892, 0x00).id, 892, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F804_4239_3463_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F804_4239(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i8;
	} else {
		Result = RTLNS(eif_new_type(889, 0x00).id, 889, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_INTEGER_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F805_4239_3463_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F805_4239(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		Result = RTLNS(eif_new_type(958, 0x00).id, 958, _OBJSIZ_0_0_0_0_0_1_0_0_);
		*(EIF_POINTER *)Result = r;
		return Result;
	}
}

char *(*R3466[15])();
void R3466_init () {
	R3466[0] = (char *(*)()) F791_4251;
	R3466[1] = (char *(*)()) F792_4251;
	R3466[2] = (char *(*)()) F793_4251;
	R3466[3] = (char *(*)()) F794_4251;
	R3466[4] = (char *(*)()) F795_4251;
	R3466[5] = (char *(*)()) F796_4251;
	R3466[6] = (char *(*)()) F797_4251;
	R3466[7] = (char *(*)()) F798_4251;
	R3466[8] = (char *(*)()) F799_4251;
	R3466[9] = (char *(*)()) F800_4251;
	R3466[10] = (char *(*)()) F801_4251;
	R3466[11] = (char *(*)()) F802_4251;
	R3466[12] = (char *(*)()) F803_4251;
	R3466[13] = (char *(*)()) F804_4251;
	R3466[14] = (char *(*)()) F805_4251;
}

char *(*R3467[15])();
void R3467_init () {
	R3467[0] = (char *(*)()) F791_4252;
	R3467[1] = (char *(*)()) F792_4252_3467_5;
	R3467[2] = (char *(*)()) F793_4252_3467_5;
	R3467[3] = (char *(*)()) F794_4252_3467_5;
	R3467[4] = (char *(*)()) F795_4252_3467_5;
	R3467[5] = (char *(*)()) F796_4252_3467_5;
	R3467[6] = (char *(*)()) F797_4252_3467_5;
	R3467[7] = (char *(*)()) F798_4252_3467_5;
	R3467[8] = (char *(*)()) F799_4252_3467_5;
	R3467[9] = (char *(*)()) F800_4252_3467_5;
	R3467[10] = (char *(*)()) F801_4252_3467_5;
	R3467[11] = (char *(*)()) F802_4252_3467_5;
	R3467[12] = (char *(*)()) F803_4252_3467_5;
	R3467[13] = (char *(*)()) F804_4252_3467_5;
	R3467[14] = (char *(*)()) F805_4252_3467_5;
}
static EIF_REFERENCE F792_4252_3467_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F792_4252(Current, *(EIF_INTEGER_16 *)arg1);
}
static EIF_REFERENCE F793_4252_3467_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F793_4252(Current, *(EIF_REAL_64 *)arg1);
}
static EIF_REFERENCE F794_4252_3467_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F794_4252(Current, *(EIF_CHARACTER_8 *)arg1);
}
static EIF_REFERENCE F795_4252_3467_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F795_4252(Current, *(EIF_INTEGER_8 *)arg1);
}
static EIF_REFERENCE F796_4252_3467_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F796_4252(Current, *(EIF_NATURAL_64 *)arg1);
}
static EIF_REFERENCE F797_4252_3467_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F797_4252(Current, *(EIF_NATURAL_8 *)arg1);
}
static EIF_REFERENCE F798_4252_3467_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F798_4252(Current, *(EIF_NATURAL_16 *)arg1);
}
static EIF_REFERENCE F799_4252_3467_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F799_4252(Current, *(EIF_NATURAL_32 *)arg1);
}
static EIF_REFERENCE F800_4252_3467_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F800_4252(Current, *(EIF_REAL_32 *)arg1);
}
static EIF_REFERENCE F801_4252_3467_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F801_4252(Current, *(EIF_BOOLEAN *)arg1);
}
static EIF_REFERENCE F802_4252_3467_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F802_4252(Current, *(EIF_CHARACTER_32 *)arg1);
}
static EIF_REFERENCE F803_4252_3467_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F803_4252(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_REFERENCE F804_4252_3467_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F804_4252(Current, *(EIF_INTEGER_64 *)arg1);
}
static EIF_REFERENCE F805_4252_3467_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F805_4252(Current, *(EIF_POINTER *)arg1);
}

char *(*R3468[15])();
void R3468_init () {
	R3468[0] = (char *(*)()) F791_4253;
	R3468[1] = (char *(*)()) F792_4253_3468_1;
	R3468[2] = (char *(*)()) F793_4253_3468_1;
	R3468[3] = (char *(*)()) F794_4253_3468_1;
	R3468[4] = (char *(*)()) F795_4253_3468_1;
	R3468[5] = (char *(*)()) F796_4253_3468_1;
	R3468[6] = (char *(*)()) F797_4253_3468_1;
	R3468[7] = (char *(*)()) F798_4253_3468_1;
	R3468[8] = (char *(*)()) F799_4253_3468_1;
	R3468[9] = (char *(*)()) F800_4253_3468_1;
	R3468[10] = (char *(*)()) F801_4253_3468_1;
	R3468[11] = (char *(*)()) F802_4253_3468_1;
	R3468[12] = (char *(*)()) F803_4253_3468_1;
	R3468[13] = (char *(*)()) F804_4253_3468_1;
	R3468[14] = (char *(*)()) F805_4253_3468_1;
}
static EIF_REFERENCE F792_4253_3468_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F792_4253(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i2;
	} else {
		Result = RTLNS(eif_new_type(895, 0x00).id, 895, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_INTEGER_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F793_4253_3468_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F793_4253(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r8;
	} else {
		Result = RTLNS(eif_new_type(913, 0x00).id, 913, _OBJSIZ_0_0_0_0_0_0_0_1_);
		*(EIF_REAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F794_4253_3468_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F794_4253(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c1;
	} else {
		Result = RTLNS(eif_new_type(919, 0x00).id, 919, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_CHARACTER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F795_4253_3468_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F795_4253(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i1;
	} else {
		Result = RTLNS(eif_new_type(898, 0x00).id, 898, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_INTEGER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F796_4253_3468_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F796_4253(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n8;
	} else {
		Result = RTLNS(eif_new_type(901, 0x00).id, 901, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_NATURAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F797_4253_3468_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F797_4253(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n1;
	} else {
		Result = RTLNS(eif_new_type(907, 0x00).id, 907, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_NATURAL_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F798_4253_3468_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F798_4253(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n2;
	} else {
		Result = RTLNS(eif_new_type(925, 0x00).id, 925, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_NATURAL_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F799_4253_3468_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F799_4253(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(eif_new_type(904, 0x00).id, 904, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F800_4253_3468_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F800_4253(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r4;
	} else {
		Result = RTLNS(eif_new_type(910, 0x00).id, 910, _OBJSIZ_0_0_0_0_1_0_0_0_);
		*(EIF_REAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F801_4253_3468_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F801_4253(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_b = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_b;
	} else {
		Result = RTLNS(eif_new_type(922, 0x00).id, 922, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_BOOLEAN *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F802_4253_3468_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F802_4253(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c4;
	} else {
		Result = RTLNS(eif_new_type(916, 0x00).id, 916, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_CHARACTER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F803_4253_3468_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F803_4253(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(892, 0x00).id, 892, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F804_4253_3468_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F804_4253(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i8;
	} else {
		Result = RTLNS(eif_new_type(889, 0x00).id, 889, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_INTEGER_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F805_4253_3468_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F805_4253(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		Result = RTLNS(eif_new_type(958, 0x00).id, 958, _OBJSIZ_0_0_0_0_0_1_0_0_);
		*(EIF_POINTER *)Result = r;
		return Result;
	}
}

char *(*R3472[15])();
void R3472_init () {
	R3472[0] = (char *(*)()) F806_4256;
	R3472[1] = (char *(*)()) F807_4256_3472_1;
	R3472[2] = (char *(*)()) F808_4256_3472_1;
	R3472[3] = (char *(*)()) F809_4256_3472_1;
	R3472[4] = (char *(*)()) F810_4256_3472_1;
	R3472[5] = (char *(*)()) F811_4256_3472_1;
	R3472[6] = (char *(*)()) F812_4256_3472_1;
	R3472[7] = (char *(*)()) F813_4256_3472_1;
	R3472[8] = (char *(*)()) F814_4256_3472_1;
	R3472[9] = (char *(*)()) F815_4256_3472_1;
	R3472[10] = (char *(*)()) F816_4256_3472_1;
	R3472[11] = (char *(*)()) F817_4256_3472_1;
	R3472[12] = (char *(*)()) F818_4256_3472_1;
	R3472[13] = (char *(*)()) F819_4256_3472_1;
	R3472[14] = (char *(*)()) F820_4256_3472_1;
}
static EIF_REFERENCE F807_4256_3472_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F807_4256(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i8;
	} else {
		Result = RTLNS(eif_new_type(889, 0x00).id, 889, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_INTEGER_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F808_4256_3472_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F808_4256(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(892, 0x00).id, 892, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F809_4256_3472_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F809_4256(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c4;
	} else {
		Result = RTLNS(eif_new_type(916, 0x00).id, 916, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_CHARACTER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F810_4256_3472_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F810_4256(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		Result = RTLNS(eif_new_type(958, 0x00).id, 958, _OBJSIZ_0_0_0_0_0_1_0_0_);
		*(EIF_POINTER *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F811_4256_3472_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F811_4256(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r8;
	} else {
		Result = RTLNS(eif_new_type(913, 0x00).id, 913, _OBJSIZ_0_0_0_0_0_0_0_1_);
		*(EIF_REAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F812_4256_3472_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F812_4256(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n2;
	} else {
		Result = RTLNS(eif_new_type(925, 0x00).id, 925, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_NATURAL_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F813_4256_3472_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F813_4256(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_b = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_b;
	} else {
		Result = RTLNS(eif_new_type(922, 0x00).id, 922, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_BOOLEAN *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F814_4256_3472_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F814_4256(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c1;
	} else {
		Result = RTLNS(eif_new_type(919, 0x00).id, 919, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_CHARACTER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F815_4256_3472_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F815_4256(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n8;
	} else {
		Result = RTLNS(eif_new_type(901, 0x00).id, 901, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_NATURAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F816_4256_3472_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F816_4256(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(eif_new_type(904, 0x00).id, 904, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F817_4256_3472_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F817_4256(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i2;
	} else {
		Result = RTLNS(eif_new_type(895, 0x00).id, 895, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_INTEGER_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F818_4256_3472_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F818_4256(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i1;
	} else {
		Result = RTLNS(eif_new_type(898, 0x00).id, 898, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_INTEGER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F819_4256_3472_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F819_4256(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r4;
	} else {
		Result = RTLNS(eif_new_type(910, 0x00).id, 910, _OBJSIZ_0_0_0_0_1_0_0_0_);
		*(EIF_REAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F820_4256_3472_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F820_4256(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n1;
	} else {
		Result = RTLNS(eif_new_type(907, 0x00).id, 907, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_NATURAL_8 *)Result = r;
		return Result;
	}
}

char *(*R3473[15])();
void R3473_init () {
	R3473[0] = (char *(*)()) F806_4265;
	R3473[1] = (char *(*)()) F807_4265;
	R3473[2] = (char *(*)()) F808_4265;
	R3473[3] = (char *(*)()) F809_4265;
	R3473[4] = (char *(*)()) F810_4265;
	R3473[5] = (char *(*)()) F811_4265;
	R3473[6] = (char *(*)()) F812_4265;
	R3473[7] = (char *(*)()) F813_4265;
	R3473[8] = (char *(*)()) F814_4265;
	R3473[9] = (char *(*)()) F815_4265;
	R3473[10] = (char *(*)()) F816_4265;
	R3473[11] = (char *(*)()) F817_4265;
	R3473[12] = (char *(*)()) F818_4265;
	R3473[13] = (char *(*)()) F819_4265;
	R3473[14] = (char *(*)()) F820_4265;
}

char *(*R3474[15])();
void R3474_init () {
	R3474[0] = (char *(*)()) F806_4266;
	R3474[1] = (char *(*)()) F807_4266_3474_5;
	R3474[2] = (char *(*)()) F808_4266_3474_5;
	R3474[3] = (char *(*)()) F809_4266_3474_5;
	R3474[4] = (char *(*)()) F810_4266_3474_5;
	R3474[5] = (char *(*)()) F811_4266_3474_5;
	R3474[6] = (char *(*)()) F812_4266_3474_5;
	R3474[7] = (char *(*)()) F813_4266_3474_5;
	R3474[8] = (char *(*)()) F814_4266_3474_5;
	R3474[9] = (char *(*)()) F815_4266_3474_5;
	R3474[10] = (char *(*)()) F816_4266_3474_5;
	R3474[11] = (char *(*)()) F817_4266_3474_5;
	R3474[12] = (char *(*)()) F818_4266_3474_5;
	R3474[13] = (char *(*)()) F819_4266_3474_5;
	R3474[14] = (char *(*)()) F820_4266_3474_5;
}
static EIF_REFERENCE F807_4266_3474_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F807_4266(Current, *(EIF_INTEGER_64 *)arg1);
}
static EIF_REFERENCE F808_4266_3474_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F808_4266(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_REFERENCE F809_4266_3474_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F809_4266(Current, *(EIF_CHARACTER_32 *)arg1);
}
static EIF_REFERENCE F810_4266_3474_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F810_4266(Current, *(EIF_POINTER *)arg1);
}
static EIF_REFERENCE F811_4266_3474_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F811_4266(Current, *(EIF_REAL_64 *)arg1);
}
static EIF_REFERENCE F812_4266_3474_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F812_4266(Current, *(EIF_NATURAL_16 *)arg1);
}
static EIF_REFERENCE F813_4266_3474_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F813_4266(Current, *(EIF_BOOLEAN *)arg1);
}
static EIF_REFERENCE F814_4266_3474_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F814_4266(Current, *(EIF_CHARACTER_8 *)arg1);
}
static EIF_REFERENCE F815_4266_3474_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F815_4266(Current, *(EIF_NATURAL_64 *)arg1);
}
static EIF_REFERENCE F816_4266_3474_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F816_4266(Current, *(EIF_NATURAL_32 *)arg1);
}
static EIF_REFERENCE F817_4266_3474_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F817_4266(Current, *(EIF_INTEGER_16 *)arg1);
}
static EIF_REFERENCE F818_4266_3474_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F818_4266(Current, *(EIF_INTEGER_8 *)arg1);
}
static EIF_REFERENCE F819_4266_3474_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F819_4266(Current, *(EIF_REAL_32 *)arg1);
}
static EIF_REFERENCE F820_4266_3474_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F820_4266(Current, *(EIF_NATURAL_8 *)arg1);
}

char *(*R3475[15])();
void R3475_init () {
	R3475[0] = (char *(*)()) F806_4267;
	R3475[1] = (char *(*)()) F807_4267_3475_1;
	R3475[2] = (char *(*)()) F808_4267_3475_1;
	R3475[3] = (char *(*)()) F809_4267_3475_1;
	R3475[4] = (char *(*)()) F810_4267_3475_1;
	R3475[5] = (char *(*)()) F811_4267_3475_1;
	R3475[6] = (char *(*)()) F812_4267_3475_1;
	R3475[7] = (char *(*)()) F813_4267_3475_1;
	R3475[8] = (char *(*)()) F814_4267_3475_1;
	R3475[9] = (char *(*)()) F815_4267_3475_1;
	R3475[10] = (char *(*)()) F816_4267_3475_1;
	R3475[11] = (char *(*)()) F817_4267_3475_1;
	R3475[12] = (char *(*)()) F818_4267_3475_1;
	R3475[13] = (char *(*)()) F819_4267_3475_1;
	R3475[14] = (char *(*)()) F820_4267_3475_1;
}
static EIF_REFERENCE F807_4267_3475_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F807_4267(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i8;
	} else {
		Result = RTLNS(eif_new_type(889, 0x00).id, 889, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_INTEGER_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F808_4267_3475_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F808_4267(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(892, 0x00).id, 892, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F809_4267_3475_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F809_4267(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c4;
	} else {
		Result = RTLNS(eif_new_type(916, 0x00).id, 916, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_CHARACTER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F810_4267_3475_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F810_4267(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		Result = RTLNS(eif_new_type(958, 0x00).id, 958, _OBJSIZ_0_0_0_0_0_1_0_0_);
		*(EIF_POINTER *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F811_4267_3475_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F811_4267(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r8;
	} else {
		Result = RTLNS(eif_new_type(913, 0x00).id, 913, _OBJSIZ_0_0_0_0_0_0_0_1_);
		*(EIF_REAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F812_4267_3475_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F812_4267(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n2;
	} else {
		Result = RTLNS(eif_new_type(925, 0x00).id, 925, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_NATURAL_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F813_4267_3475_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F813_4267(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_b = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_b;
	} else {
		Result = RTLNS(eif_new_type(922, 0x00).id, 922, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_BOOLEAN *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F814_4267_3475_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F814_4267(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c1;
	} else {
		Result = RTLNS(eif_new_type(919, 0x00).id, 919, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_CHARACTER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F815_4267_3475_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F815_4267(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n8;
	} else {
		Result = RTLNS(eif_new_type(901, 0x00).id, 901, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_NATURAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F816_4267_3475_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F816_4267(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(eif_new_type(904, 0x00).id, 904, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F817_4267_3475_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F817_4267(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i2;
	} else {
		Result = RTLNS(eif_new_type(895, 0x00).id, 895, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_INTEGER_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F818_4267_3475_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F818_4267(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i1;
	} else {
		Result = RTLNS(eif_new_type(898, 0x00).id, 898, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_INTEGER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F819_4267_3475_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F819_4267(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r4;
	} else {
		Result = RTLNS(eif_new_type(910, 0x00).id, 910, _OBJSIZ_0_0_0_0_1_0_0_0_);
		*(EIF_REAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F820_4267_3475_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F820_4267(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n1;
	} else {
		Result = RTLNS(eif_new_type(907, 0x00).id, 907, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_NATURAL_8 *)Result = r;
		return Result;
	}
}

char *(*R3481[39])();
void R3481_init () {
	R3481[0] = (char *(*)()) F888_4847;
	R3481[1] = (char *(*)()) F889_4900_3481_5;
	R3481[2] = (char *(*)()) F890_4900_3481_5;
	R3481[3] = (char *(*)()) F891_4945;
	R3481[4] = (char *(*)()) F892_4999_3481_5;
	R3481[5] = (char *(*)()) F893_4999_3481_5;
	R3481[6] = (char *(*)()) F894_5044;
	R3481[7] = (char *(*)()) F895_5098_3481_5;
	R3481[8] = (char *(*)()) F896_5098_3481_5;
	R3481[9] = (char *(*)()) F897_5143;
	R3481[10] = (char *(*)()) F898_5197_3481_5;
	R3481[11] = (char *(*)()) F899_5197_3481_5;
	R3481[12] = (char *(*)()) F900_5241;
	R3481[13] = (char *(*)()) F901_5292_3481_5;
	R3481[14] = (char *(*)()) F902_5292_3481_5;
	R3481[15] = (char *(*)()) F903_5335;
	R3481[16] = (char *(*)()) F904_5386_3481_5;
	R3481[17] = (char *(*)()) F905_5386_3481_5;
	R3481[18] = (char *(*)()) F906_5429;
	R3481[19] = (char *(*)()) F907_5481_3481_5;
	R3481[20] = (char *(*)()) F908_5481_3481_5;
	R3481[21] = (char *(*)()) F909_5540;
	R3481[22] = (char *(*)()) F910_5558_3481_5;
	R3481[23] = (char *(*)()) F911_5558_3481_5;
	R3481[24] = (char *(*)()) F912_5606;
	R3481[25] = (char *(*)()) F913_5624_3481_5;
	R3481[26] = (char *(*)()) F914_5624_3481_5;
	R3481[36] = (char *(*)()) F924_5767;
	R3481[37] = (char *(*)()) F925_5819_3481_5;
	R3481[38] = (char *(*)()) F926_5819_3481_5;
}
static EIF_REFERENCE F889_4900_3481_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F889_4900(Current, *(EIF_INTEGER_64 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i8;
	} else {
		Result = RTLNS(eif_new_type(889, 0x00).id, 889, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_INTEGER_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F890_4900_3481_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F890_4900(Current, *(EIF_INTEGER_64 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i8;
	} else {
		Result = RTLNS(eif_new_type(889, 0x00).id, 889, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_INTEGER_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F892_4999_3481_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F892_4999(Current, *(EIF_INTEGER_32 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(892, 0x00).id, 892, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F893_4999_3481_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F893_4999(Current, *(EIF_INTEGER_32 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(892, 0x00).id, 892, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F895_5098_3481_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F895_5098(Current, *(EIF_INTEGER_16 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i2;
	} else {
		Result = RTLNS(eif_new_type(895, 0x00).id, 895, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_INTEGER_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F896_5098_3481_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F896_5098(Current, *(EIF_INTEGER_16 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i2;
	} else {
		Result = RTLNS(eif_new_type(895, 0x00).id, 895, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_INTEGER_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F898_5197_3481_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F898_5197(Current, *(EIF_INTEGER_8 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i1;
	} else {
		Result = RTLNS(eif_new_type(898, 0x00).id, 898, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_INTEGER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F899_5197_3481_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F899_5197(Current, *(EIF_INTEGER_8 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i1;
	} else {
		Result = RTLNS(eif_new_type(898, 0x00).id, 898, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_INTEGER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F901_5292_3481_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F901_5292(Current, *(EIF_NATURAL_64 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n8;
	} else {
		Result = RTLNS(eif_new_type(901, 0x00).id, 901, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_NATURAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F902_5292_3481_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F902_5292(Current, *(EIF_NATURAL_64 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n8;
	} else {
		Result = RTLNS(eif_new_type(901, 0x00).id, 901, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_NATURAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F904_5386_3481_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F904_5386(Current, *(EIF_NATURAL_32 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(eif_new_type(904, 0x00).id, 904, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F905_5386_3481_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F905_5386(Current, *(EIF_NATURAL_32 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(eif_new_type(904, 0x00).id, 904, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F907_5481_3481_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F907_5481(Current, *(EIF_NATURAL_8 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n1;
	} else {
		Result = RTLNS(eif_new_type(907, 0x00).id, 907, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_NATURAL_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F908_5481_3481_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F908_5481(Current, *(EIF_NATURAL_8 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n1;
	} else {
		Result = RTLNS(eif_new_type(907, 0x00).id, 907, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_NATURAL_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F910_5558_3481_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F910_5558(Current, *(EIF_REAL_32 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r4;
	} else {
		Result = RTLNS(eif_new_type(910, 0x00).id, 910, _OBJSIZ_0_0_0_0_1_0_0_0_);
		*(EIF_REAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F911_5558_3481_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F911_5558(Current, *(EIF_REAL_32 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r4;
	} else {
		Result = RTLNS(eif_new_type(910, 0x00).id, 910, _OBJSIZ_0_0_0_0_1_0_0_0_);
		*(EIF_REAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F913_5624_3481_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F913_5624(Current, *(EIF_REAL_64 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r8;
	} else {
		Result = RTLNS(eif_new_type(913, 0x00).id, 913, _OBJSIZ_0_0_0_0_0_0_0_1_);
		*(EIF_REAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F914_5624_3481_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F914_5624(Current, *(EIF_REAL_64 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r8;
	} else {
		Result = RTLNS(eif_new_type(913, 0x00).id, 913, _OBJSIZ_0_0_0_0_0_0_0_1_);
		*(EIF_REAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F925_5819_3481_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F925_5819(Current, *(EIF_NATURAL_16 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n2;
	} else {
		Result = RTLNS(eif_new_type(925, 0x00).id, 925, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_NATURAL_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F926_5819_3481_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F926_5819(Current, *(EIF_NATURAL_16 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n2;
	} else {
		Result = RTLNS(eif_new_type(925, 0x00).id, 925, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_NATURAL_16 *)Result = r;
		return Result;
	}
}

char *(*R3486[39])();
void R3486_init () {
	R3486[0] = (char *(*)()) F888_4852;
	R3486[1] = (char *(*)()) F889_4905_3486_1;
	R3486[2] = (char *(*)()) F890_4905_3486_1;
	R3486[3] = (char *(*)()) F891_4950;
	R3486[4] = (char *(*)()) F892_5004_3486_1;
	R3486[5] = (char *(*)()) F893_5004_3486_1;
	R3486[6] = (char *(*)()) F894_5049;
	R3486[7] = (char *(*)()) F895_5103_3486_1;
	R3486[8] = (char *(*)()) F896_5103_3486_1;
	R3486[9] = (char *(*)()) F897_5148;
	R3486[10] = (char *(*)()) F898_5202_3486_1;
	R3486[11] = (char *(*)()) F899_5202_3486_1;
	{long i; for (i = 12; i < 15; i++) R3486[i] = (char *(*)()) F900_5246;}
	{long i; for (i = 15; i < 18; i++) R3486[i] = (char *(*)()) F903_5340;}
	{long i; for (i = 18; i < 21; i++) R3486[i] = (char *(*)()) F906_5434;}
	R3486[21] = (char *(*)()) F909_5546;
	R3486[22] = (char *(*)()) F910_5564_3486_1;
	R3486[23] = (char *(*)()) F911_5564_3486_1;
	R3486[24] = (char *(*)()) F912_5612;
	R3486[25] = (char *(*)()) F913_5630_3486_1;
	R3486[26] = (char *(*)()) F914_5630_3486_1;
	{long i; for (i = 36; i < 39; i++) R3486[i] = (char *(*)()) F924_5772;}
}
static EIF_REFERENCE F889_4905_3486_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F889_4905(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i8;
	} else {
		Result = RTLNS(eif_new_type(889, 0x00).id, 889, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_INTEGER_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F890_4905_3486_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F890_4905(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i8;
	} else {
		Result = RTLNS(eif_new_type(889, 0x00).id, 889, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_INTEGER_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F892_5004_3486_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F892_5004(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(892, 0x00).id, 892, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F893_5004_3486_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F893_5004(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(892, 0x00).id, 892, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F895_5103_3486_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F895_5103(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i2;
	} else {
		Result = RTLNS(eif_new_type(895, 0x00).id, 895, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_INTEGER_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F896_5103_3486_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F896_5103(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i2;
	} else {
		Result = RTLNS(eif_new_type(895, 0x00).id, 895, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_INTEGER_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F898_5202_3486_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F898_5202(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i1;
	} else {
		Result = RTLNS(eif_new_type(898, 0x00).id, 898, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_INTEGER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F899_5202_3486_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F899_5202(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i1;
	} else {
		Result = RTLNS(eif_new_type(898, 0x00).id, 898, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_INTEGER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F910_5564_3486_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F910_5564(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r4;
	} else {
		Result = RTLNS(eif_new_type(910, 0x00).id, 910, _OBJSIZ_0_0_0_0_1_0_0_0_);
		*(EIF_REAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F911_5564_3486_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F911_5564(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r4;
	} else {
		Result = RTLNS(eif_new_type(910, 0x00).id, 910, _OBJSIZ_0_0_0_0_1_0_0_0_);
		*(EIF_REAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F913_5630_3486_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F913_5630(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r8;
	} else {
		Result = RTLNS(eif_new_type(913, 0x00).id, 913, _OBJSIZ_0_0_0_0_0_0_0_1_);
		*(EIF_REAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F914_5630_3486_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F914_5630(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r8;
	} else {
		Result = RTLNS(eif_new_type(913, 0x00).id, 913, _OBJSIZ_0_0_0_0_0_0_0_1_);
		*(EIF_REAL_64 *)Result = r;
		return Result;
	}
}

char *(*R3487[169])();
void R3487_init () {
	R3487[0] = (char *(*)()) F822_4278;
	R3487[1] = (char *(*)()) F823_4304;
	R3487[2] = (char *(*)()) F822_4278;
	R3487[3] = (char *(*)()) F825_4405;
	R3487[4] = (char *(*)()) F826_4405;
	R3487[5] = (char *(*)()) F827_4405;
	R3487[6] = (char *(*)()) F828_4405;
	R3487[7] = (char *(*)()) F829_4405;
	R3487[8] = (char *(*)()) F830_4405;
	R3487[9] = (char *(*)()) F831_4405;
	R3487[10] = (char *(*)()) F832_4405;
	R3487[11] = (char *(*)()) F833_4405;
	R3487[12] = (char *(*)()) F834_4405;
	R3487[13] = (char *(*)()) F835_4405;
	R3487[14] = (char *(*)()) F836_4405;
	R3487[15] = (char *(*)()) F837_4405;
	R3487[16] = (char *(*)()) F838_4405;
	R3487[17] = (char *(*)()) F839_4405;
	R3487[18] = (char *(*)()) F825_4405;
	{long i; for (i = 19; i < 21; i++) R3487[i] = (char *(*)()) F841_4433;}
	R3487[21] = (char *(*)()) F843_4452;
	R3487[22] = (char *(*)()) F844_4520;
	R3487[23] = (char *(*)()) F845_4520;
	R3487[24] = (char *(*)()) F846_4520;
	R3487[25] = (char *(*)()) F847_4520;
	R3487[26] = (char *(*)()) F848_4520;
	R3487[27] = (char *(*)()) F846_4520;
	{long i; for (i = 28; i < 30; i++) R3487[i] = (char *(*)()) F844_4520;}
	R3487[30] = (char *(*)()) F847_4520;
	R3487[65] = (char *(*)()) F887_4805;
	{long i; for (i = 139; i < 143; i++) R3487[i] = (char *(*)()) F960_5896;}
	R3487[148] = (char *(*)()) F970_6223;
	R3487[150] = (char *(*)()) F972_6301;
	R3487[151] = (char *(*)()) F973_6392;
	{long i; for (i = 163; i < 168; i++) R3487[i] = (char *(*)()) F843_4452;}
	R3487[168] = (char *(*)()) F990_6803;
}

char *(*R3523[16])();
void R3523_init () {
	R3523[0] = (char *(*)()) F825_4344;
	R3523[1] = (char *(*)()) F826_4344;
	R3523[2] = (char *(*)()) F827_4344;
	R3523[3] = (char *(*)()) F828_4344;
	R3523[4] = (char *(*)()) F829_4344;
	R3523[5] = (char *(*)()) F830_4344;
	R3523[6] = (char *(*)()) F831_4344;
	R3523[7] = (char *(*)()) F832_4344;
	R3523[8] = (char *(*)()) F833_4344;
	R3523[9] = (char *(*)()) F834_4344;
	R3523[10] = (char *(*)()) F835_4344;
	R3523[11] = (char *(*)()) F836_4344;
	R3523[12] = (char *(*)()) F837_4344;
	R3523[13] = (char *(*)()) F838_4344;
	R3523[14] = (char *(*)()) F839_4344;
	R3523[15] = (char *(*)()) F825_4344;
}

char *(*R3527[16])();
void R3527_init () {
	R3527[0] = (char *(*)()) F825_4348;
	R3527[1] = (char *(*)()) F826_4348;
	R3527[2] = (char *(*)()) F827_4348;
	R3527[3] = (char *(*)()) F828_4348;
	R3527[4] = (char *(*)()) F829_4348;
	R3527[5] = (char *(*)()) F830_4348;
	R3527[6] = (char *(*)()) F831_4348;
	R3527[7] = (char *(*)()) F832_4348;
	R3527[8] = (char *(*)()) F833_4348;
	R3527[9] = (char *(*)()) F834_4348;
	R3527[10] = (char *(*)()) F835_4348;
	R3527[11] = (char *(*)()) F836_4348;
	R3527[12] = (char *(*)()) F837_4348;
	R3527[13] = (char *(*)()) F838_4348;
	R3527[14] = (char *(*)()) F839_4348;
	R3527[15] = (char *(*)()) F825_4348;
}

char *(*R3528[16])();
void R3528_init () {
	R3528[0] = (char *(*)()) F825_4357;
	R3528[1] = (char *(*)()) F826_4357;
	R3528[2] = (char *(*)()) F827_4357;
	R3528[3] = (char *(*)()) F828_4357;
	R3528[4] = (char *(*)()) F829_4357;
	R3528[5] = (char *(*)()) F830_4357;
	R3528[6] = (char *(*)()) F831_4357;
	R3528[7] = (char *(*)()) F832_4357;
	R3528[8] = (char *(*)()) F833_4357;
	R3528[9] = (char *(*)()) F834_4357;
	R3528[10] = (char *(*)()) F835_4357;
	R3528[11] = (char *(*)()) F836_4357;
	R3528[12] = (char *(*)()) F837_4357;
	R3528[13] = (char *(*)()) F838_4357;
	R3528[14] = (char *(*)()) F839_4357;
	R3528[15] = (char *(*)()) F825_4357;
}

char *(*R3531[16])();
void R3531_init () {
	R3531[0] = (char *(*)()) F825_4367;
	R3531[1] = (char *(*)()) F826_4367;
	R3531[2] = (char *(*)()) F827_4367;
	R3531[3] = (char *(*)()) F828_4367;
	R3531[4] = (char *(*)()) F829_4367;
	R3531[5] = (char *(*)()) F830_4367;
	R3531[6] = (char *(*)()) F831_4367;
	R3531[7] = (char *(*)()) F832_4367;
	R3531[8] = (char *(*)()) F833_4367;
	R3531[9] = (char *(*)()) F834_4367;
	R3531[10] = (char *(*)()) F835_4367;
	R3531[11] = (char *(*)()) F836_4367;
	R3531[12] = (char *(*)()) F837_4367;
	R3531[13] = (char *(*)()) F838_4367;
	R3531[14] = (char *(*)()) F839_4367;
	R3531[15] = (char *(*)()) F825_4367;
}

char *(*R3535[16])();
void R3535_init () {
	R3535[0] = (char *(*)()) F825_4408;
	R3535[1] = (char *(*)()) F826_4408_3535_124;
	R3535[2] = (char *(*)()) F827_4408_3535_124;
	R3535[3] = (char *(*)()) F828_4408_3535_124;
	R3535[4] = (char *(*)()) F829_4408_3535_124;
	R3535[5] = (char *(*)()) F830_4408_3535_124;
	R3535[6] = (char *(*)()) F831_4408_3535_124;
	R3535[7] = (char *(*)()) F832_4408_3535_124;
	R3535[8] = (char *(*)()) F833_4408_3535_124;
	R3535[9] = (char *(*)()) F834_4408_3535_124;
	R3535[10] = (char *(*)()) F835_4408_3535_124;
	R3535[11] = (char *(*)()) F836_4408_3535_124;
	R3535[12] = (char *(*)()) F837_4408_3535_124;
	R3535[13] = (char *(*)()) F838_4408_3535_124;
	R3535[14] = (char *(*)()) F839_4408_3535_124;
	R3535[15] = (char *(*)()) F825_4408;
}
static void F826_4408_3535_124 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F826_4408(Current, *(EIF_INTEGER_32 *)arg1, arg2);
}
static void F827_4408_3535_124 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F827_4408(Current, *(EIF_NATURAL_64 *)arg1, arg2);
}
static void F828_4408_3535_124 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F828_4408(Current, *(EIF_CHARACTER_32 *)arg1, arg2);
}
static void F829_4408_3535_124 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F829_4408(Current, *(EIF_CHARACTER_8 *)arg1, arg2);
}
static void F830_4408_3535_124 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F830_4408(Current, *(EIF_POINTER *)arg1, arg2);
}
static void F831_4408_3535_124 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F831_4408(Current, *(EIF_NATURAL_32 *)arg1, arg2);
}
static void F832_4408_3535_124 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F832_4408(Current, *(EIF_NATURAL_8 *)arg1, arg2);
}
static void F833_4408_3535_124 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F833_4408(Current, *(EIF_REAL_32 *)arg1, arg2);
}
static void F834_4408_3535_124 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F834_4408(Current, *(EIF_REAL_64 *)arg1, arg2);
}
static void F835_4408_3535_124 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F835_4408(Current, *(EIF_INTEGER_16 *)arg1, arg2);
}
static void F836_4408_3535_124 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F836_4408(Current, *(EIF_INTEGER_8 *)arg1, arg2);
}
static void F837_4408_3535_124 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F837_4408(Current, *(EIF_INTEGER_64 *)arg1, arg2);
}
static void F838_4408_3535_124 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F838_4408(Current, *(EIF_NATURAL_16 *)arg1, arg2);
}
static void F839_4408_3535_124 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	F839_4408(Current, *(EIF_BOOLEAN *)arg1, arg2);
}

char *(*R3536[16])();
void R3536_init () {
	R3536[0] = (char *(*)()) F825_4409;
	R3536[1] = (char *(*)()) F826_4409;
	R3536[2] = (char *(*)()) F827_4409;
	R3536[3] = (char *(*)()) F828_4409;
	R3536[4] = (char *(*)()) F829_4409;
	R3536[5] = (char *(*)()) F830_4409;
	R3536[6] = (char *(*)()) F831_4409;
	R3536[7] = (char *(*)()) F832_4409;
	R3536[8] = (char *(*)()) F833_4409;
	R3536[9] = (char *(*)()) F834_4409;
	R3536[10] = (char *(*)()) F835_4409;
	R3536[11] = (char *(*)()) F836_4409;
	R3536[12] = (char *(*)()) F837_4409;
	R3536[13] = (char *(*)()) F838_4409;
	R3536[14] = (char *(*)()) F839_4409;
	R3536[15] = (char *(*)()) F825_4409;
}

char *(*R3548[2])();
void R3548_init () {
	R3548[0] = (char *(*)()) F841_4429;
	R3548[1] = (char *(*)()) F842_4439;
}

char *(*R3549[2])();
void R3549_init () {
	R3549[0] = (char *(*)()) F841_4430;
	R3549[1] = (char *(*)()) F842_4440;
}

char *(*R3567[9])();
void R3567_init () {
	R3567[0] = (char *(*)()) F844_4461;
	R3567[1] = (char *(*)()) F845_4461;
	R3567[2] = (char *(*)()) F846_4461;
	R3567[3] = (char *(*)()) F847_4461;
	R3567[4] = (char *(*)()) F848_4461;
	R3567[5] = (char *(*)()) F846_4461;
	{long i; for (i = 6; i < 8; i++) R3567[i] = (char *(*)()) F844_4461;}
	R3567[8] = (char *(*)()) F847_4461;
}

char *(*R3568[9])();
void R3568_init () {
	R3568[0] = (char *(*)()) F844_4462;
	R3568[1] = (char *(*)()) F845_4462;
	R3568[2] = (char *(*)()) F846_4462;
	R3568[3] = (char *(*)()) F847_4462;
	R3568[4] = (char *(*)()) F848_4462;
	R3568[5] = (char *(*)()) F846_4462;
	{long i; for (i = 6; i < 8; i++) R3568[i] = (char *(*)()) F844_4462;}
	R3568[8] = (char *(*)()) F847_4462;
}

char *(*R3570[9])();
void R3570_init () {
	R3570[0] = (char *(*)()) F844_4464;
	R3570[1] = (char *(*)()) F845_4464;
	R3570[2] = (char *(*)()) F846_4464;
	R3570[3] = (char *(*)()) F847_4464;
	R3570[4] = (char *(*)()) F848_4464;
	R3570[5] = (char *(*)()) F846_4464;
	{long i; for (i = 6; i < 8; i++) R3570[i] = (char *(*)()) F844_4464;}
	R3570[8] = (char *(*)()) F847_4464;
}

char *(*R3571[9])();
void R3571_init () {
	R3571[0] = (char *(*)()) F844_4465;
	R3571[1] = (char *(*)()) F845_4465;
	R3571[2] = (char *(*)()) F846_4465_3571_1;
	R3571[3] = (char *(*)()) F847_4465_3571_1;
	R3571[4] = (char *(*)()) F848_4465_3571_1;
	R3571[5] = (char *(*)()) F846_4465_3571_1;
	{long i; for (i = 6; i < 8; i++) R3571[i] = (char *(*)()) F844_4465;}
	R3571[8] = (char *(*)()) F847_4465_3571_1;
}
static EIF_REFERENCE F846_4465_3571_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F846_4465(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(eif_new_type(904, 0x00).id, 904, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F847_4465_3571_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F847_4465(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(892, 0x00).id, 892, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F848_4465_3571_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F848_4465(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(892, 0x00).id, 892, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}

char *(*R3572[9])();
void R3572_init () {
	R3572[0] = (char *(*)()) F844_4467;
	R3572[1] = (char *(*)()) F845_4467_3572_5;
	R3572[2] = (char *(*)()) F846_4467_3572_5;
	R3572[3] = (char *(*)()) F847_4467_3572_5;
	R3572[4] = (char *(*)()) F848_4467_3572_5;
	R3572[5] = (char *(*)()) F846_4467_3572_5;
	{long i; for (i = 6; i < 8; i++) R3572[i] = (char *(*)()) F844_4467;}
	R3572[8] = (char *(*)()) F847_4467_3572_5;
}
static EIF_REFERENCE F845_4467_3572_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F845_4467(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_REFERENCE F846_4467_3572_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F846_4467(Current, *(EIF_POINTER *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(eif_new_type(904, 0x00).id, 904, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F847_4467_3572_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F847_4467(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(892, 0x00).id, 892, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F848_4467_3572_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F848_4467(Current, *(EIF_INTEGER_32 *)arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(892, 0x00).id, 892, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}

char *(*R3576[9])();
void R3576_init () {
	R3576[0] = (char *(*)()) F844_4473;
	R3576[1] = (char *(*)()) F845_4473;
	R3576[2] = (char *(*)()) F846_4473_3576_1;
	R3576[3] = (char *(*)()) F847_4473_3576_1;
	R3576[4] = (char *(*)()) F848_4473_3576_1;
	R3576[5] = (char *(*)()) F846_4473_3576_1;
	{long i; for (i = 6; i < 8; i++) R3576[i] = (char *(*)()) F844_4473;}
	R3576[8] = (char *(*)()) F847_4473_3576_1;
}
static EIF_REFERENCE F846_4473_3576_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F846_4473(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(eif_new_type(904, 0x00).id, 904, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F847_4473_3576_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F847_4473(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(892, 0x00).id, 892, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F848_4473_3576_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F848_4473(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(892, 0x00).id, 892, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}

char *(*R3577[9])();
void R3577_init () {
	R3577[0] = (char *(*)()) F844_4474;
	R3577[1] = (char *(*)()) F845_4474_3577_1;
	R3577[2] = (char *(*)()) F846_4474_3577_1;
	R3577[3] = (char *(*)()) F847_4474;
	R3577[4] = (char *(*)()) F848_4474_3577_1;
	R3577[5] = (char *(*)()) F846_4474_3577_1;
	{long i; for (i = 6; i < 8; i++) R3577[i] = (char *(*)()) F844_4474;}
	R3577[8] = (char *(*)()) F847_4474;
}
static EIF_REFERENCE F845_4474_3577_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F845_4474(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(892, 0x00).id, 892, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F846_4474_3577_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F846_4474(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		Result = RTLNS(eif_new_type(958, 0x00).id, 958, _OBJSIZ_0_0_0_0_0_1_0_0_);
		*(EIF_POINTER *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F848_4474_3577_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F848_4474(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(892, 0x00).id, 892, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}

char *(*R3579[9])();
void R3579_init () {
	R3579[0] = (char *(*)()) F844_4478;
	R3579[1] = (char *(*)()) F845_4478_3579_24;
	R3579[2] = (char *(*)()) F846_4478_3579_24;
	R3579[3] = (char *(*)()) F847_4478;
	R3579[4] = (char *(*)()) F848_4478_3579_24;
	R3579[5] = (char *(*)()) F849_4576_3579_24;
	R3579[6] = (char *(*)()) F844_4478;
	R3579[7] = (char *(*)()) F851_4592;
	R3579[8] = (char *(*)()) F852_4592;
}
static EIF_INTEGER_32 F845_4478_3579_24 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F845_4478(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_INTEGER_32 F846_4478_3579_24 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F846_4478(Current, *(EIF_POINTER *)arg1);
}
static EIF_INTEGER_32 F848_4478_3579_24 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F848_4478(Current, *(EIF_INTEGER_32 *)arg1);
}
static EIF_INTEGER_32 F849_4576_3579_24 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F849_4576(Current, *(EIF_POINTER *)arg1);
}

char *(*R3581[9])();
void R3581_init () {
	R3581[0] = (char *(*)()) F844_4485;
	R3581[1] = (char *(*)()) F845_4485_3581_3;
	R3581[2] = (char *(*)()) F846_4485_3581_3;
	R3581[3] = (char *(*)()) F847_4485;
	R3581[4] = (char *(*)()) F848_4485_3581_3;
	R3581[5] = (char *(*)()) F846_4485_3581_3;
	R3581[6] = (char *(*)()) F844_4485;
	R3581[7] = (char *(*)()) F851_4594;
	R3581[8] = (char *(*)()) F852_4594;
}
static EIF_BOOLEAN F845_4485_3581_3 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	return F845_4485(Current, *(EIF_INTEGER_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}
static EIF_BOOLEAN F846_4485_3581_3 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	return F846_4485(Current, *(EIF_POINTER *)arg1, *(EIF_POINTER *)arg2);
}
static EIF_BOOLEAN F848_4485_3581_3 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	return F848_4485(Current, *(EIF_INTEGER_32 *)arg1, *(EIF_INTEGER_32 *)arg2);
}

char *(*R3583[9])();
void R3583_init () {
	R3583[0] = (char *(*)()) F844_4489;
	R3583[1] = (char *(*)()) F845_4489;
	R3583[2] = (char *(*)()) F846_4489;
	R3583[3] = (char *(*)()) F847_4489;
	R3583[4] = (char *(*)()) F848_4489;
	R3583[5] = (char *(*)()) F846_4489;
	{long i; for (i = 6; i < 8; i++) R3583[i] = (char *(*)()) F844_4489;}
	R3583[8] = (char *(*)()) F847_4489;
}

char *(*R3584[9])();
void R3584_init () {
	R3584[0] = (char *(*)()) F844_4490;
	R3584[1] = (char *(*)()) F845_4490;
	R3584[2] = (char *(*)()) F846_4490;
	R3584[3] = (char *(*)()) F847_4490;
	R3584[4] = (char *(*)()) F848_4490;
	R3584[5] = (char *(*)()) F846_4490;
	{long i; for (i = 6; i < 8; i++) R3584[i] = (char *(*)()) F844_4490;}
	R3584[8] = (char *(*)()) F847_4490;
}

char *(*R3585[9])();
void R3585_init () {
	R3585[0] = (char *(*)()) F844_4491;
	R3585[1] = (char *(*)()) F845_4491;
	R3585[2] = (char *(*)()) F846_4491;
	R3585[3] = (char *(*)()) F847_4491;
	R3585[4] = (char *(*)()) F848_4491;
	R3585[5] = (char *(*)()) F846_4491;
	{long i; for (i = 6; i < 8; i++) R3585[i] = (char *(*)()) F844_4491;}
	R3585[8] = (char *(*)()) F847_4491;
}

char *(*R3586[9])();
void R3586_init () {
	R3586[0] = (char *(*)()) F844_4492;
	R3586[1] = (char *(*)()) F845_4492;
	R3586[2] = (char *(*)()) F846_4492;
	R3586[3] = (char *(*)()) F847_4492;
	R3586[4] = (char *(*)()) F848_4492;
	R3586[5] = (char *(*)()) F846_4492;
	{long i; for (i = 6; i < 8; i++) R3586[i] = (char *(*)()) F844_4492;}
	R3586[8] = (char *(*)()) F847_4492;
}

char *(*R3587[9])();
void R3587_init () {
	R3587[0] = (char *(*)()) F844_4493;
	R3587[1] = (char *(*)()) F845_4493;
	R3587[2] = (char *(*)()) F846_4493;
	R3587[3] = (char *(*)()) F847_4493;
	R3587[4] = (char *(*)()) F848_4493;
	R3587[5] = (char *(*)()) F846_4493;
	{long i; for (i = 6; i < 8; i++) R3587[i] = (char *(*)()) F844_4493;}
	R3587[8] = (char *(*)()) F847_4493;
}

char *(*R3588[9])();
void R3588_init () {
	R3588[0] = (char *(*)()) F844_4494;
	R3588[1] = (char *(*)()) F845_4494;
	R3588[2] = (char *(*)()) F846_4494;
	R3588[3] = (char *(*)()) F847_4494;
	R3588[4] = (char *(*)()) F848_4494;
	R3588[5] = (char *(*)()) F846_4494;
	{long i; for (i = 6; i < 8; i++) R3588[i] = (char *(*)()) F844_4494;}
	R3588[8] = (char *(*)()) F847_4494;
}

char *(*R3589[9])();
void R3589_init () {
	R3589[0] = (char *(*)()) F844_4495;
	R3589[1] = (char *(*)()) F845_4495;
	R3589[2] = (char *(*)()) F846_4495;
	R3589[3] = (char *(*)()) F847_4495;
	R3589[4] = (char *(*)()) F848_4495;
	R3589[5] = (char *(*)()) F846_4495;
	{long i; for (i = 6; i < 8; i++) R3589[i] = (char *(*)()) F844_4495;}
	R3589[8] = (char *(*)()) F847_4495;
}

char *(*R3590[9])();
void R3590_init () {
	R3590[0] = (char *(*)()) F844_4496;
	R3590[1] = (char *(*)()) F845_4496;
	R3590[2] = (char *(*)()) F846_4496;
	R3590[3] = (char *(*)()) F847_4496;
	R3590[4] = (char *(*)()) F848_4496;
	R3590[5] = (char *(*)()) F846_4496;
	{long i; for (i = 6; i < 8; i++) R3590[i] = (char *(*)()) F844_4496;}
	R3590[8] = (char *(*)()) F847_4496;
}

char *(*R3591[9])();
void R3591_init () {
	R3591[0] = (char *(*)()) F844_4497;
	R3591[1] = (char *(*)()) F845_4497;
	R3591[2] = (char *(*)()) F846_4497;
	R3591[3] = (char *(*)()) F847_4497;
	R3591[4] = (char *(*)()) F848_4497;
	R3591[5] = (char *(*)()) F846_4497;
	{long i; for (i = 6; i < 8; i++) R3591[i] = (char *(*)()) F844_4497;}
	R3591[8] = (char *(*)()) F847_4497;
}

char *(*R3593[9])();
void R3593_init () {
	R3593[0] = (char *(*)()) F844_4500;
	R3593[1] = (char *(*)()) F845_4500;
	R3593[2] = (char *(*)()) F846_4500;
	R3593[3] = (char *(*)()) F847_4500;
	R3593[4] = (char *(*)()) F848_4500;
	R3593[5] = (char *(*)()) F846_4500;
	{long i; for (i = 6; i < 8; i++) R3593[i] = (char *(*)()) F844_4500;}
	R3593[8] = (char *(*)()) F847_4500;
}

char *(*R3594[9])();
void R3594_init () {
	R3594[0] = (char *(*)()) F844_4501;
	R3594[1] = (char *(*)()) F845_4501;
	R3594[2] = (char *(*)()) F846_4501;
	R3594[3] = (char *(*)()) F847_4501;
	R3594[4] = (char *(*)()) F848_4501;
	R3594[5] = (char *(*)()) F846_4501;
	{long i; for (i = 6; i < 8; i++) R3594[i] = (char *(*)()) F844_4501;}
	R3594[8] = (char *(*)()) F847_4501;
}

char *(*R3596[9])();
void R3596_init () {
	R3596[0] = (char *(*)()) F844_4503;
	R3596[1] = (char *(*)()) F845_4503_3596_4;
	R3596[2] = (char *(*)()) F846_4503_3596_4;
	R3596[3] = (char *(*)()) F847_4503;
	R3596[4] = (char *(*)()) F848_4503_3596_4;
	R3596[5] = (char *(*)()) F846_4503_3596_4;
	{long i; for (i = 6; i < 8; i++) R3596[i] = (char *(*)()) F844_4503;}
	R3596[8] = (char *(*)()) F847_4503;
}
static void F845_4503_3596_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F845_4503(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F846_4503_3596_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F846_4503(Current, *(EIF_POINTER *)arg1);
}
static void F848_4503_3596_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F848_4503(Current, *(EIF_INTEGER_32 *)arg1);
}

char *(*R3598[9])();
void R3598_init () {
	R3598[0] = (char *(*)()) F844_4505;
	R3598[1] = (char *(*)()) F845_4505;
	R3598[2] = (char *(*)()) F846_4505;
	R3598[3] = (char *(*)()) F847_4505;
	R3598[4] = (char *(*)()) F848_4505;
	R3598[5] = (char *(*)()) F846_4505;
	{long i; for (i = 6; i < 8; i++) R3598[i] = (char *(*)()) F844_4505;}
	R3598[8] = (char *(*)()) F847_4505;
}

char *(*R3599[9])();
void R3599_init () {
	R3599[0] = (char *(*)()) F844_4506;
	R3599[1] = (char *(*)()) F845_4506;
	R3599[2] = (char *(*)()) F846_4506;
	R3599[3] = (char *(*)()) F847_4506;
	R3599[4] = (char *(*)()) F848_4506;
	R3599[5] = (char *(*)()) F846_4506;
	{long i; for (i = 6; i < 8; i++) R3599[i] = (char *(*)()) F844_4506;}
	R3599[8] = (char *(*)()) F847_4506;
}

char *(*R3605[9])();
void R3605_init () {
	R3605[0] = (char *(*)()) F844_4519;
	R3605[1] = (char *(*)()) F845_4519;
	R3605[2] = (char *(*)()) F846_4519;
	R3605[3] = (char *(*)()) F847_4519;
	R3605[4] = (char *(*)()) F848_4519;
	R3605[5] = (char *(*)()) F846_4519;
	R3605[6] = (char *(*)()) F844_4519;
	R3605[7] = (char *(*)()) F851_4596;
	R3605[8] = (char *(*)()) F852_4596;
}

char *(*R3614[9])();
void R3614_init () {
	R3614[0] = (char *(*)()) F844_4529;
	R3614[1] = (char *(*)()) F845_4529;
	R3614[2] = (char *(*)()) F846_4529;
	R3614[3] = (char *(*)()) F847_4529;
	R3614[4] = (char *(*)()) F848_4529;
	R3614[5] = (char *(*)()) F846_4529;
	{long i; for (i = 6; i < 8; i++) R3614[i] = (char *(*)()) F844_4529;}
	R3614[8] = (char *(*)()) F847_4529;
}

char *(*R3615[9])();
void R3615_init () {
	R3615[0] = (char *(*)()) F844_4530;
	R3615[1] = (char *(*)()) F845_4530;
	R3615[2] = (char *(*)()) F846_4530;
	R3615[3] = (char *(*)()) F847_4530;
	R3615[4] = (char *(*)()) F848_4530;
	R3615[5] = (char *(*)()) F846_4530;
	{long i; for (i = 6; i < 8; i++) R3615[i] = (char *(*)()) F844_4530;}
	R3615[8] = (char *(*)()) F847_4530;
}

char *(*R3622[9])();
void R3622_init () {
	R3622[0] = (char *(*)()) F844_4537;
	R3622[1] = (char *(*)()) F845_4537;
	R3622[2] = (char *(*)()) F846_4537_3622_1;
	R3622[3] = (char *(*)()) F847_4537_3622_1;
	R3622[4] = (char *(*)()) F848_4537_3622_1;
	R3622[5] = (char *(*)()) F846_4537_3622_1;
	{long i; for (i = 6; i < 8; i++) R3622[i] = (char *(*)()) F844_4537;}
	R3622[8] = (char *(*)()) F847_4537_3622_1;
}
static EIF_REFERENCE F846_4537_3622_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F846_4537(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(eif_new_type(904, 0x00).id, 904, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F847_4537_3622_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F847_4537(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(892, 0x00).id, 892, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F848_4537_3622_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F848_4537(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(892, 0x00).id, 892, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}

char *(*R3623[9])();
void R3623_init () {
	R3623[0] = (char *(*)()) F844_4538;
	R3623[1] = (char *(*)()) F845_4538_3623_1;
	R3623[2] = (char *(*)()) F846_4538_3623_1;
	R3623[3] = (char *(*)()) F847_4538;
	R3623[4] = (char *(*)()) F848_4538_3623_1;
	R3623[5] = (char *(*)()) F846_4538_3623_1;
	{long i; for (i = 6; i < 8; i++) R3623[i] = (char *(*)()) F844_4538;}
	R3623[8] = (char *(*)()) F847_4538;
}
static EIF_REFERENCE F845_4538_3623_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F845_4538(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(892, 0x00).id, 892, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F846_4538_3623_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F846_4538(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		Result = RTLNS(eif_new_type(958, 0x00).id, 958, _OBJSIZ_0_0_0_0_0_1_0_0_);
		*(EIF_POINTER *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F848_4538_3623_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F848_4538(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(892, 0x00).id, 892, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}

char *(*R3624[9])();
void R3624_init () {
	R3624[0] = (char *(*)()) F844_4539;
	R3624[1] = (char *(*)()) F845_4539;
	R3624[2] = (char *(*)()) F846_4539;
	R3624[3] = (char *(*)()) F847_4539;
	R3624[4] = (char *(*)()) F848_4539;
	R3624[5] = (char *(*)()) F846_4539;
	{long i; for (i = 6; i < 8; i++) R3624[i] = (char *(*)()) F844_4539;}
	R3624[8] = (char *(*)()) F847_4539;
}

char *(*R3625[9])();
void R3625_init () {
	R3625[0] = (char *(*)()) F844_4540;
	R3625[1] = (char *(*)()) F845_4540;
	R3625[2] = (char *(*)()) F846_4540;
	R3625[3] = (char *(*)()) F847_4540;
	R3625[4] = (char *(*)()) F848_4540;
	R3625[5] = (char *(*)()) F846_4540;
	{long i; for (i = 6; i < 8; i++) R3625[i] = (char *(*)()) F844_4540;}
	R3625[8] = (char *(*)()) F847_4540;
}

char *(*R3626[9])();
void R3626_init () {
	R3626[0] = (char *(*)()) F844_4541;
	R3626[1] = (char *(*)()) F845_4541;
	R3626[2] = (char *(*)()) F846_4541;
	R3626[3] = (char *(*)()) F847_4541;
	R3626[4] = (char *(*)()) F848_4541;
	R3626[5] = (char *(*)()) F846_4541;
	{long i; for (i = 6; i < 8; i++) R3626[i] = (char *(*)()) F844_4541;}
	R3626[8] = (char *(*)()) F847_4541;
}

char *(*R3627[9])();
void R3627_init () {
	R3627[0] = (char *(*)()) F844_4542;
	R3627[1] = (char *(*)()) F845_4542;
	R3627[2] = (char *(*)()) F846_4542;
	R3627[3] = (char *(*)()) F847_4542;
	R3627[4] = (char *(*)()) F848_4542;
	R3627[5] = (char *(*)()) F846_4542;
	{long i; for (i = 6; i < 8; i++) R3627[i] = (char *(*)()) F844_4542;}
	R3627[8] = (char *(*)()) F847_4542;
}

char *(*R3628[9])();
void R3628_init () {
	R3628[0] = (char *(*)()) F844_4543;
	R3628[1] = (char *(*)()) F845_4543;
	R3628[2] = (char *(*)()) F846_4543;
	R3628[3] = (char *(*)()) F847_4543;
	R3628[4] = (char *(*)()) F848_4543;
	R3628[5] = (char *(*)()) F846_4543;
	{long i; for (i = 6; i < 8; i++) R3628[i] = (char *(*)()) F844_4543;}
	R3628[8] = (char *(*)()) F847_4543;
}

char *(*R3629[9])();
void R3629_init () {
	R3629[0] = (char *(*)()) F844_4544;
	R3629[1] = (char *(*)()) F845_4544;
	R3629[2] = (char *(*)()) F846_4544;
	R3629[3] = (char *(*)()) F847_4544;
	R3629[4] = (char *(*)()) F848_4544;
	R3629[5] = (char *(*)()) F846_4544;
	{long i; for (i = 6; i < 8; i++) R3629[i] = (char *(*)()) F844_4544;}
	R3629[8] = (char *(*)()) F847_4544;
}

char *(*R3630[9])();
void R3630_init () {
	R3630[0] = (char *(*)()) F844_4545;
	R3630[1] = (char *(*)()) F845_4545;
	R3630[2] = (char *(*)()) F846_4545;
	R3630[3] = (char *(*)()) F847_4545;
	R3630[4] = (char *(*)()) F848_4545;
	R3630[5] = (char *(*)()) F846_4545;
	{long i; for (i = 6; i < 8; i++) R3630[i] = (char *(*)()) F844_4545;}
	R3630[8] = (char *(*)()) F847_4545;
}

char *(*R3631[9])();
void R3631_init () {
	R3631[0] = (char *(*)()) F844_4546;
	R3631[1] = (char *(*)()) F845_4546;
	R3631[2] = (char *(*)()) F846_4546;
	R3631[3] = (char *(*)()) F847_4546;
	R3631[4] = (char *(*)()) F848_4546;
	R3631[5] = (char *(*)()) F846_4546;
	{long i; for (i = 6; i < 8; i++) R3631[i] = (char *(*)()) F844_4546;}
	R3631[8] = (char *(*)()) F847_4546;
}

char *(*R3632[9])();
void R3632_init () {
	R3632[0] = (char *(*)()) F844_4547;
	R3632[1] = (char *(*)()) F845_4547;
	R3632[2] = (char *(*)()) F846_4547;
	R3632[3] = (char *(*)()) F847_4547;
	R3632[4] = (char *(*)()) F848_4547;
	R3632[5] = (char *(*)()) F846_4547;
	{long i; for (i = 6; i < 8; i++) R3632[i] = (char *(*)()) F844_4547;}
	R3632[8] = (char *(*)()) F847_4547;
}

char *(*R3634[9])();
void R3634_init () {
	R3634[0] = (char *(*)()) F844_4549;
	R3634[1] = (char *(*)()) F845_4549_3634_1;
	R3634[2] = (char *(*)()) F846_4549_3634_1;
	R3634[3] = (char *(*)()) F847_4549;
	R3634[4] = (char *(*)()) F848_4549_3634_1;
	R3634[5] = (char *(*)()) F846_4549_3634_1;
	{long i; for (i = 6; i < 8; i++) R3634[i] = (char *(*)()) F844_4549;}
	R3634[8] = (char *(*)()) F847_4549;
}
static EIF_REFERENCE F845_4549_3634_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F845_4549(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(892, 0x00).id, 892, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F846_4549_3634_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F846_4549(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		Result = RTLNS(eif_new_type(958, 0x00).id, 958, _OBJSIZ_0_0_0_0_0_1_0_0_);
		*(EIF_POINTER *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F848_4549_3634_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F848_4549(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(892, 0x00).id, 892, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}

char *(*R3635[9])();
void R3635_init () {
	R3635[0] = (char *(*)()) F844_4550;
	R3635[1] = (char *(*)()) F845_4550;
	R3635[2] = (char *(*)()) F846_4550_3635_1;
	R3635[3] = (char *(*)()) F847_4550_3635_1;
	R3635[4] = (char *(*)()) F848_4550_3635_1;
	R3635[5] = (char *(*)()) F846_4550_3635_1;
	{long i; for (i = 6; i < 8; i++) R3635[i] = (char *(*)()) F844_4550;}
	R3635[8] = (char *(*)()) F847_4550_3635_1;
}
static EIF_REFERENCE F846_4550_3635_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F846_4550(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(eif_new_type(904, 0x00).id, 904, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F847_4550_3635_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F847_4550(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(892, 0x00).id, 892, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F848_4550_3635_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F848_4550(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(892, 0x00).id, 892, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}

char *(*R3636[9])();
void R3636_init () {
	R3636[0] = (char *(*)()) F844_4551;
	R3636[1] = (char *(*)()) F845_4551_3636_4;
	R3636[2] = (char *(*)()) F846_4551_3636_4;
	R3636[3] = (char *(*)()) F847_4551;
	R3636[4] = (char *(*)()) F848_4551_3636_4;
	R3636[5] = (char *(*)()) F846_4551_3636_4;
	{long i; for (i = 6; i < 8; i++) R3636[i] = (char *(*)()) F844_4551;}
	R3636[8] = (char *(*)()) F847_4551;
}
static void F845_4551_3636_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F845_4551(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F846_4551_3636_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F846_4551(Current, *(EIF_POINTER *)arg1);
}
static void F848_4551_3636_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F848_4551(Current, *(EIF_INTEGER_32 *)arg1);
}

char *(*R3637[9])();
void R3637_init () {
	R3637[0] = (char *(*)()) F844_4552;
	R3637[1] = (char *(*)()) F845_4552_3637_4;
	R3637[2] = (char *(*)()) F846_4552_3637_4;
	R3637[3] = (char *(*)()) F847_4552;
	R3637[4] = (char *(*)()) F848_4552_3637_4;
	R3637[5] = (char *(*)()) F846_4552_3637_4;
	{long i; for (i = 6; i < 8; i++) R3637[i] = (char *(*)()) F844_4552;}
	R3637[8] = (char *(*)()) F847_4552;
}
static void F845_4552_3637_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F845_4552(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F846_4552_3637_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F846_4552(Current, *(EIF_POINTER *)arg1);
}
static void F848_4552_3637_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F848_4552(Current, *(EIF_INTEGER_32 *)arg1);
}

char *(*R3642[9])();
void R3642_init () {
	R3642[0] = (char *(*)()) F844_4557;
	R3642[1] = (char *(*)()) F845_4557;
	R3642[2] = (char *(*)()) F846_4557;
	R3642[3] = (char *(*)()) F847_4557;
	R3642[4] = (char *(*)()) F848_4557;
	R3642[5] = (char *(*)()) F846_4557;
	{long i; for (i = 6; i < 8; i++) R3642[i] = (char *(*)()) F844_4557;}
	R3642[8] = (char *(*)()) F847_4557;
}

char *(*R3654[9])();
void R3654_init () {
	R3654[0] = (char *(*)()) F844_4569;
	R3654[1] = (char *(*)()) F845_4569;
	R3654[2] = (char *(*)()) F846_4569;
	R3654[3] = (char *(*)()) F847_4569;
	R3654[4] = (char *(*)()) F848_4569;
	R3654[5] = (char *(*)()) F846_4569;
	{long i; for (i = 6; i < 8; i++) R3654[i] = (char *(*)()) F844_4569;}
	R3654[8] = (char *(*)()) F847_4569;
}

char *(*R3655[9])();
void R3655_init () {
	R3655[0] = (char *(*)()) F844_4570;
	R3655[1] = (char *(*)()) F845_4570;
	R3655[2] = (char *(*)()) F846_4570;
	R3655[3] = (char *(*)()) F847_4570;
	R3655[4] = (char *(*)()) F848_4570;
	R3655[5] = (char *(*)()) F846_4570;
	{long i; for (i = 6; i < 8; i++) R3655[i] = (char *(*)()) F844_4570;}
	R3655[8] = (char *(*)()) F847_4570;
}

char *(*R3669[2])();
void R3669_init () {
	R3669[0] = (char *(*)()) F851_4590;
	R3669[1] = (char *(*)()) F852_4590;
}

char *(*R3672[120])();
void R3672_init () {
	R3672[0] = (char *(*)()) F854_4601;
	R3672[1] = (char *(*)()) F855_4629;
	R3672[2] = (char *(*)()) F856_4671;
	R3672[3] = (char *(*)()) F857_4671;
	R3672[4] = (char *(*)()) F858_4671;
	R3672[5] = (char *(*)()) F859_4671;
	R3672[6] = (char *(*)()) F860_4671;
	R3672[7] = (char *(*)()) F861_4671;
	R3672[8] = (char *(*)()) F862_4671;
	R3672[9] = (char *(*)()) F863_4671;
	R3672[10] = (char *(*)()) F864_4671;
	R3672[11] = (char *(*)()) F865_4671;
	R3672[12] = (char *(*)()) F866_4671;
	R3672[13] = (char *(*)()) F867_4671;
	R3672[14] = (char *(*)()) F868_4671;
	R3672[15] = (char *(*)()) F869_4671;
	R3672[16] = (char *(*)()) F870_4671;
	R3672[17] = (char *(*)()) F871_4671;
	R3672[18] = (char *(*)()) F872_4671;
	R3672[19] = (char *(*)()) F873_4671;
	R3672[20] = (char *(*)()) F874_4671;
	R3672[21] = (char *(*)()) F875_4671;
	R3672[22] = (char *(*)()) F876_4671;
	R3672[23] = (char *(*)()) F877_4671;
	R3672[24] = (char *(*)()) F878_4671;
	R3672[25] = (char *(*)()) F879_4671;
	R3672[26] = (char *(*)()) F880_4671;
	R3672[27] = (char *(*)()) F881_4671;
	R3672[28] = (char *(*)()) F882_4671;
	R3672[29] = (char *(*)()) F883_4671;
	R3672[30] = (char *(*)()) F884_4671;
	R3672[31] = (char *(*)()) F885_4671;
	R3672[32] = (char *(*)()) F886_4671;
	R3672[33] = (char *(*)()) F887_4723;
	{long i; for (i = 34; i < 37; i++) R3672[i] = (char *(*)()) F888_4830;}
	{long i; for (i = 37; i < 40; i++) R3672[i] = (char *(*)()) F891_4928;}
	{long i; for (i = 40; i < 43; i++) R3672[i] = (char *(*)()) F894_5027;}
	{long i; for (i = 43; i < 46; i++) R3672[i] = (char *(*)()) F897_5126;}
	{long i; for (i = 46; i < 49; i++) R3672[i] = (char *(*)()) F900_5225;}
	{long i; for (i = 49; i < 52; i++) R3672[i] = (char *(*)()) F903_5319;}
	{long i; for (i = 52; i < 55; i++) R3672[i] = (char *(*)()) F906_5413;}
	{long i; for (i = 55; i < 58; i++) R3672[i] = (char *(*)()) F909_5508;}
	{long i; for (i = 58; i < 61; i++) R3672[i] = (char *(*)()) F912_5574;}
	{long i; for (i = 61; i < 64; i++) R3672[i] = (char *(*)()) F915_5641;}
	{long i; for (i = 64; i < 67; i++) R3672[i] = (char *(*)()) F918_5682;}
	{long i; for (i = 67; i < 70; i++) R3672[i] = (char *(*)()) F921_5730;}
	{long i; for (i = 70; i < 73; i++) R3672[i] = (char *(*)()) F924_5751;}
	{long i; for (i = 73; i < 104; i++) R3672[i] = (char *(*)()) F927_5846;}
	R3672[104] = (char *(*)()) F958_5872;
	R3672[105] = (char *(*)()) F959_5872;
	{long i; for (i = 107; i < 111; i++) R3672[i] = (char *(*)()) F960_5880;}
	{long i; for (i = 115; i < 117; i++) R3672[i] = (char *(*)()) F965_5939;}
	{long i; for (i = 118; i < 120; i++) R3672[i] = (char *(*)()) F965_5939;}
}

char *(*R3733[31])();
void R3733_init () {
	R3733[0] = (char *(*)()) F856_4667;
	R3733[1] = (char *(*)()) F857_4667;
	R3733[2] = (char *(*)()) F858_4667;
	R3733[3] = (char *(*)()) F859_4667;
	R3733[4] = (char *(*)()) F860_4667;
	R3733[5] = (char *(*)()) F861_4667;
	R3733[6] = (char *(*)()) F862_4667;
	R3733[7] = (char *(*)()) F863_4667;
	R3733[8] = (char *(*)()) F864_4667;
	R3733[9] = (char *(*)()) F865_4667;
	R3733[10] = (char *(*)()) F866_4667;
	R3733[11] = (char *(*)()) F867_4667;
	R3733[12] = (char *(*)()) F868_4667;
	R3733[13] = (char *(*)()) F869_4667;
	R3733[14] = (char *(*)()) F870_4667;
	R3733[15] = (char *(*)()) F871_4667;
	R3733[16] = (char *(*)()) F872_4667;
	R3733[17] = (char *(*)()) F873_4667;
	R3733[18] = (char *(*)()) F874_4667;
	R3733[19] = (char *(*)()) F875_4667;
	R3733[20] = (char *(*)()) F876_4667;
	R3733[21] = (char *(*)()) F877_4667;
	R3733[22] = (char *(*)()) F878_4667;
	R3733[23] = (char *(*)()) F879_4667;
	R3733[24] = (char *(*)()) F880_4667;
	R3733[25] = (char *(*)()) F881_4667;
	R3733[26] = (char *(*)()) F882_4667;
	R3733[27] = (char *(*)()) F883_4667;
	R3733[28] = (char *(*)()) F884_4667;
	R3733[29] = (char *(*)()) F885_4667;
	R3733[30] = (char *(*)()) F886_4667;
}

char *(*R3734[31])();
void R3734_init () {
	R3734[0] = (char *(*)()) F856_4668;
	R3734[1] = (char *(*)()) F857_4668;
	R3734[2] = (char *(*)()) F858_4668;
	R3734[3] = (char *(*)()) F859_4668;
	R3734[4] = (char *(*)()) F860_4668;
	R3734[5] = (char *(*)()) F861_4668;
	R3734[6] = (char *(*)()) F862_4668;
	R3734[7] = (char *(*)()) F863_4668;
	R3734[8] = (char *(*)()) F864_4668;
	R3734[9] = (char *(*)()) F865_4668;
	R3734[10] = (char *(*)()) F866_4668;
	R3734[11] = (char *(*)()) F867_4668;
	R3734[12] = (char *(*)()) F868_4668;
	R3734[13] = (char *(*)()) F869_4668;
	R3734[14] = (char *(*)()) F870_4668;
	R3734[15] = (char *(*)()) F871_4668;
	R3734[16] = (char *(*)()) F872_4668;
	R3734[17] = (char *(*)()) F873_4668;
	R3734[18] = (char *(*)()) F874_4668;
	R3734[19] = (char *(*)()) F875_4668;
	R3734[20] = (char *(*)()) F876_4668;
	R3734[21] = (char *(*)()) F877_4668;
	R3734[22] = (char *(*)()) F878_4668;
	R3734[23] = (char *(*)()) F879_4668;
	R3734[24] = (char *(*)()) F880_4668;
	R3734[25] = (char *(*)()) F881_4668;
	R3734[26] = (char *(*)()) F882_4668;
	R3734[27] = (char *(*)()) F883_4668;
	R3734[28] = (char *(*)()) F884_4668;
	R3734[29] = (char *(*)()) F885_4668;
	R3734[30] = (char *(*)()) F886_4668;
}

char *(*R3735[31])();
void R3735_init () {
	R3735[0] = (char *(*)()) F856_4669;
	R3735[1] = (char *(*)()) F857_4669;
	R3735[2] = (char *(*)()) F858_4669;
	R3735[3] = (char *(*)()) F859_4669;
	R3735[4] = (char *(*)()) F860_4669;
	R3735[5] = (char *(*)()) F861_4669;
	R3735[6] = (char *(*)()) F862_4669;
	R3735[7] = (char *(*)()) F863_4669;
	R3735[8] = (char *(*)()) F864_4669;
	R3735[9] = (char *(*)()) F865_4669;
	R3735[10] = (char *(*)()) F866_4669;
	R3735[11] = (char *(*)()) F867_4669;
	R3735[12] = (char *(*)()) F868_4669;
	R3735[13] = (char *(*)()) F869_4669;
	R3735[14] = (char *(*)()) F870_4669;
	R3735[15] = (char *(*)()) F871_4669;
	R3735[16] = (char *(*)()) F872_4669;
	R3735[17] = (char *(*)()) F873_4669;
	R3735[18] = (char *(*)()) F874_4669;
	R3735[19] = (char *(*)()) F875_4669;
	R3735[20] = (char *(*)()) F876_4669;
	R3735[21] = (char *(*)()) F877_4669;
	R3735[22] = (char *(*)()) F878_4669;
	R3735[23] = (char *(*)()) F879_4669;
	R3735[24] = (char *(*)()) F880_4669;
	R3735[25] = (char *(*)()) F881_4669;
	R3735[26] = (char *(*)()) F882_4669;
	R3735[27] = (char *(*)()) F883_4669;
	R3735[28] = (char *(*)()) F884_4669;
	R3735[29] = (char *(*)()) F885_4669;
	R3735[30] = (char *(*)()) F886_4669;
}

char *(*R3736[31])();
void R3736_init () {
	R3736[0] = (char *(*)()) F856_4670;
	R3736[1] = (char *(*)()) F857_4670;
	R3736[2] = (char *(*)()) F858_4670;
	R3736[3] = (char *(*)()) F859_4670;
	R3736[4] = (char *(*)()) F860_4670;
	R3736[5] = (char *(*)()) F861_4670;
	R3736[6] = (char *(*)()) F862_4670;
	R3736[7] = (char *(*)()) F863_4670;
	R3736[8] = (char *(*)()) F864_4670;
	R3736[9] = (char *(*)()) F865_4670;
	R3736[10] = (char *(*)()) F866_4670;
	R3736[11] = (char *(*)()) F867_4670;
	R3736[12] = (char *(*)()) F868_4670;
	R3736[13] = (char *(*)()) F869_4670;
	R3736[14] = (char *(*)()) F870_4670;
	R3736[15] = (char *(*)()) F871_4670;
	R3736[16] = (char *(*)()) F872_4670;
	R3736[17] = (char *(*)()) F873_4670;
	R3736[18] = (char *(*)()) F874_4670;
	R3736[19] = (char *(*)()) F875_4670;
	R3736[20] = (char *(*)()) F876_4670;
	R3736[21] = (char *(*)()) F877_4670;
	R3736[22] = (char *(*)()) F878_4670;
	R3736[23] = (char *(*)()) F879_4670;
	R3736[24] = (char *(*)()) F880_4670;
	R3736[25] = (char *(*)()) F881_4670;
	R3736[26] = (char *(*)()) F882_4670;
	R3736[27] = (char *(*)()) F883_4670;
	R3736[28] = (char *(*)()) F884_4670;
	R3736[29] = (char *(*)()) F885_4670;
	R3736[30] = (char *(*)()) F886_4670;
}

char *(*R3737[31])();
void R3737_init () {
	R3737[0] = (char *(*)()) F856_4672;
	R3737[1] = (char *(*)()) F857_4672;
	R3737[2] = (char *(*)()) F858_4672;
	R3737[3] = (char *(*)()) F859_4672;
	R3737[4] = (char *(*)()) F860_4672;
	R3737[5] = (char *(*)()) F861_4672;
	R3737[6] = (char *(*)()) F862_4672;
	R3737[7] = (char *(*)()) F863_4672;
	R3737[8] = (char *(*)()) F864_4672;
	R3737[9] = (char *(*)()) F865_4672;
	R3737[10] = (char *(*)()) F866_4672;
	R3737[11] = (char *(*)()) F867_4672;
	R3737[12] = (char *(*)()) F868_4672;
	R3737[13] = (char *(*)()) F869_4672;
	R3737[14] = (char *(*)()) F870_4672;
	R3737[15] = (char *(*)()) F871_4672;
	R3737[16] = (char *(*)()) F872_4672;
	R3737[17] = (char *(*)()) F873_4672;
	R3737[18] = (char *(*)()) F874_4672;
	R3737[19] = (char *(*)()) F875_4672;
	R3737[20] = (char *(*)()) F876_4672;
	R3737[21] = (char *(*)()) F877_4672;
	R3737[22] = (char *(*)()) F878_4672;
	R3737[23] = (char *(*)()) F879_4672;
	R3737[24] = (char *(*)()) F880_4672;
	R3737[25] = (char *(*)()) F881_4672;
	R3737[26] = (char *(*)()) F882_4672;
	R3737[27] = (char *(*)()) F883_4672;
	R3737[28] = (char *(*)()) F884_4672;
	R3737[29] = (char *(*)()) F885_4672;
	R3737[30] = (char *(*)()) F886_4672;
}

char *(*R3738[31])();
void R3738_init () {
	R3738[0] = (char *(*)()) F856_4673;
	R3738[1] = (char *(*)()) F857_4673;
	R3738[2] = (char *(*)()) F858_4673;
	R3738[3] = (char *(*)()) F859_4673;
	R3738[4] = (char *(*)()) F860_4673;
	R3738[5] = (char *(*)()) F861_4673;
	R3738[6] = (char *(*)()) F862_4673;
	R3738[7] = (char *(*)()) F863_4673;
	R3738[8] = (char *(*)()) F864_4673;
	R3738[9] = (char *(*)()) F865_4673;
	R3738[10] = (char *(*)()) F866_4673;
	R3738[11] = (char *(*)()) F867_4673;
	R3738[12] = (char *(*)()) F868_4673;
	R3738[13] = (char *(*)()) F869_4673;
	R3738[14] = (char *(*)()) F870_4673;
	R3738[15] = (char *(*)()) F871_4673;
	R3738[16] = (char *(*)()) F872_4673;
	R3738[17] = (char *(*)()) F873_4673;
	R3738[18] = (char *(*)()) F874_4673;
	R3738[19] = (char *(*)()) F875_4673;
	R3738[20] = (char *(*)()) F876_4673;
	R3738[21] = (char *(*)()) F877_4673;
	R3738[22] = (char *(*)()) F878_4673;
	R3738[23] = (char *(*)()) F879_4673;
	R3738[24] = (char *(*)()) F880_4673;
	R3738[25] = (char *(*)()) F881_4673;
	R3738[26] = (char *(*)()) F882_4673;
	R3738[27] = (char *(*)()) F883_4673;
	R3738[28] = (char *(*)()) F884_4673;
	R3738[29] = (char *(*)()) F885_4673;
	R3738[30] = (char *(*)()) F886_4673;
}

char *(*R3739[31])();
void R3739_init () {
	R3739[0] = (char *(*)()) F856_4674;
	R3739[1] = (char *(*)()) F857_4674;
	R3739[2] = (char *(*)()) F858_4674;
	R3739[3] = (char *(*)()) F859_4674;
	R3739[4] = (char *(*)()) F860_4674;
	R3739[5] = (char *(*)()) F861_4674;
	R3739[6] = (char *(*)()) F862_4674;
	R3739[7] = (char *(*)()) F863_4674;
	R3739[8] = (char *(*)()) F864_4674;
	R3739[9] = (char *(*)()) F865_4674;
	R3739[10] = (char *(*)()) F866_4674;
	R3739[11] = (char *(*)()) F867_4674;
	R3739[12] = (char *(*)()) F868_4674;
	R3739[13] = (char *(*)()) F869_4674;
	R3739[14] = (char *(*)()) F870_4674;
	R3739[15] = (char *(*)()) F871_4674;
	R3739[16] = (char *(*)()) F872_4674;
	R3739[17] = (char *(*)()) F873_4674;
	R3739[18] = (char *(*)()) F874_4674;
	R3739[19] = (char *(*)()) F875_4674;
	R3739[20] = (char *(*)()) F876_4674;
	R3739[21] = (char *(*)()) F877_4674;
	R3739[22] = (char *(*)()) F878_4674;
	R3739[23] = (char *(*)()) F879_4674;
	R3739[24] = (char *(*)()) F880_4674;
	R3739[25] = (char *(*)()) F881_4674;
	R3739[26] = (char *(*)()) F882_4674;
	R3739[27] = (char *(*)()) F883_4674;
	R3739[28] = (char *(*)()) F884_4674;
	R3739[29] = (char *(*)()) F885_4674;
	R3739[30] = (char *(*)()) F886_4674;
}

char *(*R3741[31])();
void R3741_init () {
	R3741[0] = (char *(*)()) F856_4676;
	R3741[1] = (char *(*)()) F857_4676;
	R3741[2] = (char *(*)()) F858_4676;
	R3741[3] = (char *(*)()) F859_4676;
	R3741[4] = (char *(*)()) F860_4676;
	R3741[5] = (char *(*)()) F861_4676;
	R3741[6] = (char *(*)()) F862_4676;
	R3741[7] = (char *(*)()) F863_4676;
	R3741[8] = (char *(*)()) F864_4676;
	R3741[9] = (char *(*)()) F865_4676;
	R3741[10] = (char *(*)()) F866_4676;
	R3741[11] = (char *(*)()) F867_4676;
	R3741[12] = (char *(*)()) F868_4676;
	R3741[13] = (char *(*)()) F869_4676;
	R3741[14] = (char *(*)()) F870_4676;
	R3741[15] = (char *(*)()) F871_4676;
	R3741[16] = (char *(*)()) F872_4676;
	R3741[17] = (char *(*)()) F873_4676;
	R3741[18] = (char *(*)()) F874_4676;
	R3741[19] = (char *(*)()) F875_4676;
	R3741[20] = (char *(*)()) F876_4676;
	R3741[21] = (char *(*)()) F877_4676;
	R3741[22] = (char *(*)()) F878_4676;
	R3741[23] = (char *(*)()) F879_4676;
	R3741[24] = (char *(*)()) F880_4676;
	R3741[25] = (char *(*)()) F881_4676;
	R3741[26] = (char *(*)()) F882_4676;
	R3741[27] = (char *(*)()) F883_4676;
	R3741[28] = (char *(*)()) F884_4676;
	R3741[29] = (char *(*)()) F885_4676;
	R3741[30] = (char *(*)()) F886_4676;
}

char *(*R3743[31])();
void R3743_init () {
	R3743[0] = (char *(*)()) F856_4681;
	R3743[1] = (char *(*)()) F857_4681_3743_5;
	R3743[2] = (char *(*)()) F858_4681_3743_5;
	R3743[3] = (char *(*)()) F859_4681_3743_5;
	R3743[4] = (char *(*)()) F860_4681_3743_5;
	R3743[5] = (char *(*)()) F861_4681_3743_5;
	R3743[6] = (char *(*)()) F862_4681_3743_5;
	R3743[7] = (char *(*)()) F863_4681_3743_5;
	R3743[8] = (char *(*)()) F864_4681_3743_5;
	R3743[9] = (char *(*)()) F865_4681_3743_5;
	R3743[10] = (char *(*)()) F866_4681_3743_5;
	R3743[11] = (char *(*)()) F867_4681_3743_5;
	R3743[12] = (char *(*)()) F868_4681_3743_5;
	R3743[13] = (char *(*)()) F869_4681_3743_5;
	R3743[14] = (char *(*)()) F870_4681_3743_5;
	R3743[15] = (char *(*)()) F871_4681_3743_5;
	R3743[16] = (char *(*)()) F872_4681_3743_5;
	R3743[17] = (char *(*)()) F873_4681_3743_5;
	R3743[18] = (char *(*)()) F874_4681_3743_5;
	R3743[19] = (char *(*)()) F875_4681;
	R3743[20] = (char *(*)()) F876_4681_3743_5;
	R3743[21] = (char *(*)()) F877_4681_3743_5;
	R3743[22] = (char *(*)()) F878_4681_3743_5;
	R3743[23] = (char *(*)()) F879_4681_3743_5;
	R3743[24] = (char *(*)()) F880_4681_3743_5;
	R3743[25] = (char *(*)()) F881_4681_3743_5;
	R3743[26] = (char *(*)()) F882_4681_3743_5;
	R3743[27] = (char *(*)()) F883_4681_3743_5;
	R3743[28] = (char *(*)()) F884_4681_3743_5;
	R3743[29] = (char *(*)()) F885_4681_3743_5;
	R3743[30] = (char *(*)()) F886_4681_3743_5;
}
static EIF_REFERENCE F857_4681_3743_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16* r = F857_4681(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {929,895,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0.id, 929, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_INTEGER_16* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F858_4681_3743_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F858_4681(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		Result = RTLNS(eif_new_type(958, 0x00).id, 958, _OBJSIZ_0_0_0_0_0_1_0_0_);
		*(EIF_POINTER *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F859_4681_3743_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REFERENCE* r = F859_4681(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {930,0,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0.id, 930, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_REFERENCE* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F860_4681_3743_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64* r = F860_4681(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {932,913,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0.id, 932, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_REAL_64* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F861_4681_3743_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F861_4681(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r8;
	} else {
		Result = RTLNS(eif_new_type(913, 0x00).id, 913, _OBJSIZ_0_0_0_0_0_0_0_1_);
		*(EIF_REAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F862_4681_3743_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F862_4681(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r4;
	} else {
		Result = RTLNS(eif_new_type(910, 0x00).id, 910, _OBJSIZ_0_0_0_0_1_0_0_0_);
		*(EIF_REAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F863_4681_3743_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F863_4681(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n1;
	} else {
		Result = RTLNS(eif_new_type(907, 0x00).id, 907, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_NATURAL_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F864_4681_3743_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F864_4681(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n2;
	} else {
		Result = RTLNS(eif_new_type(925, 0x00).id, 925, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_NATURAL_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F865_4681_3743_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F865_4681(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(eif_new_type(904, 0x00).id, 904, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F866_4681_3743_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F866_4681(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n8;
	} else {
		Result = RTLNS(eif_new_type(901, 0x00).id, 901, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_NATURAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F867_4681_3743_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F867_4681(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i1;
	} else {
		Result = RTLNS(eif_new_type(898, 0x00).id, 898, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_INTEGER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F868_4681_3743_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F868_4681(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i2;
	} else {
		Result = RTLNS(eif_new_type(895, 0x00).id, 895, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_INTEGER_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F869_4681_3743_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F869_4681(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(892, 0x00).id, 892, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F870_4681_3743_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F870_4681(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i8;
	} else {
		Result = RTLNS(eif_new_type(889, 0x00).id, 889, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_INTEGER_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F871_4681_3743_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F871_4681(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c1;
	} else {
		Result = RTLNS(eif_new_type(919, 0x00).id, 919, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_CHARACTER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F872_4681_3743_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F872_4681(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c4;
	} else {
		Result = RTLNS(eif_new_type(916, 0x00).id, 916, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_CHARACTER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F873_4681_3743_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F873_4681(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_b = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_b;
	} else {
		Result = RTLNS(eif_new_type(922, 0x00).id, 922, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_BOOLEAN *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F874_4681_3743_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32* r = F874_4681(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {934,892,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0.id, 934, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_INTEGER_32* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F876_4681_3743_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64* r = F876_4681(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {936,889,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0.id, 936, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_INTEGER_64* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F877_4681_3743_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32* r = F877_4681(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {938,916,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0.id, 938, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_CHARACTER_32* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F878_4681_3743_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER* r = F878_4681(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {940,958,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0.id, 940, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_POINTER* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F879_4681_3743_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16* r = F879_4681(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {942,925,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0.id, 942, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_NATURAL_16* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F880_4681_3743_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8* r = F880_4681(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {944,919,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0.id, 944, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_CHARACTER_8* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F881_4681_3743_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8* r = F881_4681(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {946,898,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0.id, 946, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_INTEGER_8* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F882_4681_3743_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64* r = F882_4681(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {948,901,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0.id, 948, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_NATURAL_64* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F883_4681_3743_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8* r = F883_4681(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {950,907,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0.id, 950, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_NATURAL_8* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F884_4681_3743_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32* r = F884_4681(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {952,904,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0.id, 952, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_NATURAL_32* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F885_4681_3743_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32* r = F885_4681(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {954,910,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0.id, 954, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_REAL_32* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F886_4681_3743_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN* r = F886_4681(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {956,922,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0.id, 956, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_BOOLEAN* *)Result = r;
		return Result;
	}
}

char *(*R3745[31])();
void R3745_init () {
	R3745[0] = (char *(*)()) F856_4683;
	R3745[1] = (char *(*)()) F857_4683_3745_1;
	R3745[2] = (char *(*)()) F858_4683_3745_1;
	R3745[3] = (char *(*)()) F859_4683_3745_1;
	R3745[4] = (char *(*)()) F860_4683_3745_1;
	R3745[5] = (char *(*)()) F861_4683_3745_1;
	R3745[6] = (char *(*)()) F862_4683_3745_1;
	R3745[7] = (char *(*)()) F863_4683_3745_1;
	R3745[8] = (char *(*)()) F864_4683_3745_1;
	R3745[9] = (char *(*)()) F865_4683_3745_1;
	R3745[10] = (char *(*)()) F866_4683_3745_1;
	R3745[11] = (char *(*)()) F867_4683_3745_1;
	R3745[12] = (char *(*)()) F868_4683_3745_1;
	R3745[13] = (char *(*)()) F869_4683_3745_1;
	R3745[14] = (char *(*)()) F870_4683_3745_1;
	R3745[15] = (char *(*)()) F871_4683_3745_1;
	R3745[16] = (char *(*)()) F872_4683_3745_1;
	R3745[17] = (char *(*)()) F873_4683_3745_1;
	R3745[18] = (char *(*)()) F874_4683_3745_1;
	R3745[19] = (char *(*)()) F875_4683;
	R3745[20] = (char *(*)()) F876_4683_3745_1;
	R3745[21] = (char *(*)()) F877_4683_3745_1;
	R3745[22] = (char *(*)()) F878_4683_3745_1;
	R3745[23] = (char *(*)()) F879_4683_3745_1;
	R3745[24] = (char *(*)()) F880_4683_3745_1;
	R3745[25] = (char *(*)()) F881_4683_3745_1;
	R3745[26] = (char *(*)()) F882_4683_3745_1;
	R3745[27] = (char *(*)()) F883_4683_3745_1;
	R3745[28] = (char *(*)()) F884_4683_3745_1;
	R3745[29] = (char *(*)()) F885_4683_3745_1;
	R3745[30] = (char *(*)()) F886_4683_3745_1;
}
static EIF_REFERENCE F857_4683_3745_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16* r = F857_4683(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {929,895,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0.id, 929, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_INTEGER_16* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F858_4683_3745_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F858_4683(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		Result = RTLNS(eif_new_type(958, 0x00).id, 958, _OBJSIZ_0_0_0_0_0_1_0_0_);
		*(EIF_POINTER *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F859_4683_3745_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REFERENCE* r = F859_4683(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {930,0,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0.id, 930, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_REFERENCE* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F860_4683_3745_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64* r = F860_4683(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {932,913,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0.id, 932, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_REAL_64* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F861_4683_3745_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F861_4683(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r8;
	} else {
		Result = RTLNS(eif_new_type(913, 0x00).id, 913, _OBJSIZ_0_0_0_0_0_0_0_1_);
		*(EIF_REAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F862_4683_3745_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F862_4683(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r4;
	} else {
		Result = RTLNS(eif_new_type(910, 0x00).id, 910, _OBJSIZ_0_0_0_0_1_0_0_0_);
		*(EIF_REAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F863_4683_3745_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F863_4683(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n1;
	} else {
		Result = RTLNS(eif_new_type(907, 0x00).id, 907, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_NATURAL_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F864_4683_3745_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F864_4683(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n2;
	} else {
		Result = RTLNS(eif_new_type(925, 0x00).id, 925, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_NATURAL_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F865_4683_3745_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F865_4683(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(eif_new_type(904, 0x00).id, 904, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F866_4683_3745_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F866_4683(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n8;
	} else {
		Result = RTLNS(eif_new_type(901, 0x00).id, 901, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_NATURAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F867_4683_3745_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F867_4683(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i1;
	} else {
		Result = RTLNS(eif_new_type(898, 0x00).id, 898, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_INTEGER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F868_4683_3745_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F868_4683(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i2;
	} else {
		Result = RTLNS(eif_new_type(895, 0x00).id, 895, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_INTEGER_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F869_4683_3745_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F869_4683(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(892, 0x00).id, 892, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F870_4683_3745_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F870_4683(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i8;
	} else {
		Result = RTLNS(eif_new_type(889, 0x00).id, 889, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_INTEGER_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F871_4683_3745_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F871_4683(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c1;
	} else {
		Result = RTLNS(eif_new_type(919, 0x00).id, 919, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_CHARACTER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F872_4683_3745_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F872_4683(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c4;
	} else {
		Result = RTLNS(eif_new_type(916, 0x00).id, 916, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_CHARACTER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F873_4683_3745_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F873_4683(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_b = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_b;
	} else {
		Result = RTLNS(eif_new_type(922, 0x00).id, 922, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_BOOLEAN *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F874_4683_3745_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32* r = F874_4683(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {934,892,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0.id, 934, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_INTEGER_32* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F876_4683_3745_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64* r = F876_4683(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {936,889,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0.id, 936, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_INTEGER_64* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F877_4683_3745_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32* r = F877_4683(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {938,916,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0.id, 938, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_CHARACTER_32* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F878_4683_3745_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER* r = F878_4683(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {940,958,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0.id, 940, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_POINTER* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F879_4683_3745_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16* r = F879_4683(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {942,925,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0.id, 942, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_NATURAL_16* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F880_4683_3745_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8* r = F880_4683(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {944,919,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0.id, 944, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_CHARACTER_8* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F881_4683_3745_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8* r = F881_4683(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {946,898,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0.id, 946, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_INTEGER_8* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F882_4683_3745_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64* r = F882_4683(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {948,901,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0.id, 948, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_NATURAL_64* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F883_4683_3745_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8* r = F883_4683(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {950,907,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0.id, 950, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_NATURAL_8* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F884_4683_3745_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32* r = F884_4683(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {952,904,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0.id, 952, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_NATURAL_32* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F885_4683_3745_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32* r = F885_4683(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {954,910,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0.id, 954, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_REAL_32* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F886_4683_3745_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN* r = F886_4683(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {956,922,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0.id, 956, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_BOOLEAN* *)Result = r;
		return Result;
	}
}

char *(*R3746[31])();
void R3746_init () {
	R3746[0] = (char *(*)()) F856_4684;
	R3746[1] = (char *(*)()) F857_4684_3746_1;
	R3746[2] = (char *(*)()) F858_4684_3746_1;
	R3746[3] = (char *(*)()) F859_4684_3746_1;
	R3746[4] = (char *(*)()) F860_4684_3746_1;
	R3746[5] = (char *(*)()) F861_4684_3746_1;
	R3746[6] = (char *(*)()) F862_4684_3746_1;
	R3746[7] = (char *(*)()) F863_4684_3746_1;
	R3746[8] = (char *(*)()) F864_4684_3746_1;
	R3746[9] = (char *(*)()) F865_4684_3746_1;
	R3746[10] = (char *(*)()) F866_4684_3746_1;
	R3746[11] = (char *(*)()) F867_4684_3746_1;
	R3746[12] = (char *(*)()) F868_4684_3746_1;
	R3746[13] = (char *(*)()) F869_4684_3746_1;
	R3746[14] = (char *(*)()) F870_4684_3746_1;
	R3746[15] = (char *(*)()) F871_4684_3746_1;
	R3746[16] = (char *(*)()) F872_4684_3746_1;
	R3746[17] = (char *(*)()) F873_4684_3746_1;
	R3746[18] = (char *(*)()) F874_4684_3746_1;
	R3746[19] = (char *(*)()) F875_4684;
	R3746[20] = (char *(*)()) F876_4684_3746_1;
	R3746[21] = (char *(*)()) F877_4684_3746_1;
	R3746[22] = (char *(*)()) F878_4684_3746_1;
	R3746[23] = (char *(*)()) F879_4684_3746_1;
	R3746[24] = (char *(*)()) F880_4684_3746_1;
	R3746[25] = (char *(*)()) F881_4684_3746_1;
	R3746[26] = (char *(*)()) F882_4684_3746_1;
	R3746[27] = (char *(*)()) F883_4684_3746_1;
	R3746[28] = (char *(*)()) F884_4684_3746_1;
	R3746[29] = (char *(*)()) F885_4684_3746_1;
	R3746[30] = (char *(*)()) F886_4684_3746_1;
}
static EIF_REFERENCE F857_4684_3746_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16* r = F857_4684(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {929,895,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0.id, 929, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_INTEGER_16* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F858_4684_3746_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER r = F858_4684(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		Result = RTLNS(eif_new_type(958, 0x00).id, 958, _OBJSIZ_0_0_0_0_0_1_0_0_);
		*(EIF_POINTER *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F859_4684_3746_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REFERENCE* r = F859_4684(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {930,0,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0.id, 930, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_REFERENCE* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F860_4684_3746_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64* r = F860_4684(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {932,913,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0.id, 932, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_REAL_64* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F861_4684_3746_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_64 r = F861_4684(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r8;
	} else {
		Result = RTLNS(eif_new_type(913, 0x00).id, 913, _OBJSIZ_0_0_0_0_0_0_0_1_);
		*(EIF_REAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F862_4684_3746_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32 r = F862_4684(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_r4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_r4;
	} else {
		Result = RTLNS(eif_new_type(910, 0x00).id, 910, _OBJSIZ_0_0_0_0_1_0_0_0_);
		*(EIF_REAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F863_4684_3746_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F863_4684(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n1;
	} else {
		Result = RTLNS(eif_new_type(907, 0x00).id, 907, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_NATURAL_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F864_4684_3746_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F864_4684(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n2;
	} else {
		Result = RTLNS(eif_new_type(925, 0x00).id, 925, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_NATURAL_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F865_4684_3746_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F865_4684(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(eif_new_type(904, 0x00).id, 904, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F866_4684_3746_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F866_4684(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n8;
	} else {
		Result = RTLNS(eif_new_type(901, 0x00).id, 901, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_NATURAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F867_4684_3746_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F867_4684(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i1;
	} else {
		Result = RTLNS(eif_new_type(898, 0x00).id, 898, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_INTEGER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F868_4684_3746_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F868_4684(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i2;
	} else {
		Result = RTLNS(eif_new_type(895, 0x00).id, 895, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_INTEGER_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F869_4684_3746_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F869_4684(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(892, 0x00).id, 892, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F870_4684_3746_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F870_4684(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i8;
	} else {
		Result = RTLNS(eif_new_type(889, 0x00).id, 889, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_INTEGER_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F871_4684_3746_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8 r = F871_4684(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c1;
	} else {
		Result = RTLNS(eif_new_type(919, 0x00).id, 919, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_CHARACTER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F872_4684_3746_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F872_4684(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_c4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_c4;
	} else {
		Result = RTLNS(eif_new_type(916, 0x00).id, 916, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_CHARACTER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F873_4684_3746_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F873_4684(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_b = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_b;
	} else {
		Result = RTLNS(eif_new_type(922, 0x00).id, 922, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_BOOLEAN *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F874_4684_3746_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32* r = F874_4684(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {934,892,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0.id, 934, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_INTEGER_32* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F876_4684_3746_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64* r = F876_4684(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {936,889,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0.id, 936, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_INTEGER_64* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F877_4684_3746_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32* r = F877_4684(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {938,916,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0.id, 938, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_CHARACTER_32* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F878_4684_3746_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_POINTER* r = F878_4684(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {940,958,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0.id, 940, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_POINTER* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F879_4684_3746_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16* r = F879_4684(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {942,925,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0.id, 942, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_NATURAL_16* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F880_4684_3746_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_8* r = F880_4684(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {944,919,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0.id, 944, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_CHARACTER_8* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F881_4684_3746_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8* r = F881_4684(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {946,898,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0.id, 946, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_INTEGER_8* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F882_4684_3746_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64* r = F882_4684(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {948,901,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0.id, 948, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_NATURAL_64* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F883_4684_3746_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8* r = F883_4684(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {950,907,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0.id, 950, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_NATURAL_8* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F884_4684_3746_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32* r = F884_4684(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {952,904,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0.id, 952, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_NATURAL_32* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F885_4684_3746_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_REAL_32* r = F885_4684(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {954,910,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0.id, 954, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_REAL_32* *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F886_4684_3746_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN* r = F886_4684(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_p = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_p;
	} else {
		{
			static EIF_TYPE_INDEX typarr0[] = {956,922,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			Result = RTLNS(typres0.id, 956, _OBJSIZ_0_0_0_0_0_1_0_0_);
		}
		*(EIF_BOOLEAN* *)Result = r;
		return Result;
	}
}

char *(*R3756[31])();
void R3756_init () {
	R3756[0] = (char *(*)()) F856_4696;
	R3756[1] = (char *(*)()) F857_4696;
	R3756[2] = (char *(*)()) F858_4696;
	R3756[3] = (char *(*)()) F859_4696;
	R3756[4] = (char *(*)()) F860_4696;
	R3756[5] = (char *(*)()) F861_4696;
	R3756[6] = (char *(*)()) F862_4696;
	R3756[7] = (char *(*)()) F863_4696;
	R3756[8] = (char *(*)()) F864_4696;
	R3756[9] = (char *(*)()) F865_4696;
	R3756[10] = (char *(*)()) F866_4696;
	R3756[11] = (char *(*)()) F867_4696;
	R3756[12] = (char *(*)()) F868_4696;
	R3756[13] = (char *(*)()) F869_4696;
	R3756[14] = (char *(*)()) F870_4696;
	R3756[15] = (char *(*)()) F871_4696;
	R3756[16] = (char *(*)()) F872_4696;
	R3756[17] = (char *(*)()) F873_4696;
	R3756[18] = (char *(*)()) F874_4696;
	R3756[19] = (char *(*)()) F875_4696;
	R3756[20] = (char *(*)()) F876_4696;
	R3756[21] = (char *(*)()) F877_4696;
	R3756[22] = (char *(*)()) F878_4696;
	R3756[23] = (char *(*)()) F879_4696;
	R3756[24] = (char *(*)()) F880_4696;
	R3756[25] = (char *(*)()) F881_4696;
	R3756[26] = (char *(*)()) F882_4696;
	R3756[27] = (char *(*)()) F883_4696;
	R3756[28] = (char *(*)()) F884_4696;
	R3756[29] = (char *(*)()) F885_4696;
	R3756[30] = (char *(*)()) F886_4696;
}

char *(*R3899[3])();
void R3899_init () {
	R3899[0] = (char *(*)()) F888_4859;
	R3899[1] = (char *(*)()) F889_4909;
	R3899[2] = (char *(*)()) F890_4909;
}

char *(*R3900[3])();
void R3900_init () {
	R3900[0] = (char *(*)()) F888_4860;
	R3900[1] = (char *(*)()) F889_4910;
	R3900[2] = (char *(*)()) F890_4910;
}

char *(*R3901[3])();
void R3901_init () {
	R3901[0] = (char *(*)()) F888_4861;
	R3901[1] = (char *(*)()) F889_4911;
	R3901[2] = (char *(*)()) F890_4911;
}

char *(*R3902[3])();
void R3902_init () {
	R3902[0] = (char *(*)()) F888_4862;
	R3902[1] = (char *(*)()) F889_4912;
	R3902[2] = (char *(*)()) F890_4912;
}

char *(*R3903[3])();
void R3903_init () {
	R3903[0] = (char *(*)()) F888_4863;
	R3903[1] = (char *(*)()) F889_4913;
	R3903[2] = (char *(*)()) F890_4913;
}

char *(*R3904[3])();
void R3904_init () {
	R3904[0] = (char *(*)()) F888_4864;
	R3904[1] = (char *(*)()) F889_4914;
	R3904[2] = (char *(*)()) F890_4914;
}

char *(*R3905[3])();
void R3905_init () {
	R3905[0] = (char *(*)()) F888_4865;
	R3905[1] = (char *(*)()) F889_4915;
	R3905[2] = (char *(*)()) F890_4915;
}

char *(*R3932[3])();
void R3932_init () {
	R3932[0] = (char *(*)()) F888_4892;
	R3932[1] = (char *(*)()) F889_4925_3932_19;
	R3932[2] = (char *(*)()) F890_4925_3932_19;
}
static EIF_REFERENCE F889_4925_3932_19 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F889_4925(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i8;
	} else {
		Result = RTLNS(eif_new_type(889, 0x00).id, 889, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_INTEGER_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F890_4925_3932_19 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F890_4925(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i8;
	} else {
		Result = RTLNS(eif_new_type(889, 0x00).id, 889, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_INTEGER_64 *)Result = r;
		return Result;
	}
}

char *(*R3933[3])();
void R3933_init () {
	R3933[0] = (char *(*)()) F888_4893;
	R3933[1] = (char *(*)()) F889_4926_3933_19;
	R3933[2] = (char *(*)()) F890_4926_3933_19;
}
static EIF_REFERENCE F889_4926_3933_19 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F889_4926(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i8;
	} else {
		Result = RTLNS(eif_new_type(889, 0x00).id, 889, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_INTEGER_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F890_4926_3933_19 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_64 r = F890_4926(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i8;
	} else {
		Result = RTLNS(eif_new_type(889, 0x00).id, 889, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_INTEGER_64 *)Result = r;
		return Result;
	}
}

char *(*R3955[3])();
void R3955_init () {
	R3955[0] = (char *(*)()) F891_4958;
	R3955[1] = (char *(*)()) F892_5008;
	R3955[2] = (char *(*)()) F893_5008;
}

char *(*R3956[3])();
void R3956_init () {
	R3956[0] = (char *(*)()) F891_4959;
	R3956[1] = (char *(*)()) F892_5009;
	R3956[2] = (char *(*)()) F893_5009;
}

char *(*R3957[3])();
void R3957_init () {
	R3957[0] = (char *(*)()) F891_4960;
	R3957[1] = (char *(*)()) F892_5010;
	R3957[2] = (char *(*)()) F893_5010;
}

char *(*R3958[3])();
void R3958_init () {
	R3958[0] = (char *(*)()) F891_4961;
	R3958[1] = (char *(*)()) F892_5011;
	R3958[2] = (char *(*)()) F893_5011;
}

char *(*R3959[3])();
void R3959_init () {
	R3959[0] = (char *(*)()) F891_4962;
	R3959[1] = (char *(*)()) F892_5012;
	R3959[2] = (char *(*)()) F893_5012;
}

char *(*R3960[3])();
void R3960_init () {
	R3960[0] = (char *(*)()) F891_4963;
	R3960[1] = (char *(*)()) F892_5013;
	R3960[2] = (char *(*)()) F893_5013;
}

char *(*R3962[3])();
void R3962_init () {
	R3962[0] = (char *(*)()) F891_4965;
	R3962[1] = (char *(*)()) F892_5015;
	R3962[2] = (char *(*)()) F893_5015;
}

char *(*R3988[3])();
void R3988_init () {
	R3988[0] = (char *(*)()) F891_4991;
	R3988[1] = (char *(*)()) F892_5024_3988_19;
	R3988[2] = (char *(*)()) F893_5024_3988_19;
}
static EIF_REFERENCE F892_5024_3988_19 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F892_5024(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(892, 0x00).id, 892, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F893_5024_3988_19 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F893_5024(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(892, 0x00).id, 892, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}

char *(*R3989[3])();
void R3989_init () {
	R3989[0] = (char *(*)()) F891_4992;
	R3989[1] = (char *(*)()) F892_5025_3989_19;
	R3989[2] = (char *(*)()) F893_5025_3989_19;
}
static EIF_REFERENCE F892_5025_3989_19 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F892_5025(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(892, 0x00).id, 892, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F893_5025_3989_19 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F893_5025(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i4;
	} else {
		Result = RTLNS(eif_new_type(892, 0x00).id, 892, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)Result = r;
		return Result;
	}
}

char *(*R4011[3])();
void R4011_init () {
	R4011[0] = (char *(*)()) F894_5057;
	R4011[1] = (char *(*)()) F895_5107;
	R4011[2] = (char *(*)()) F896_5107;
}

char *(*R4012[3])();
void R4012_init () {
	R4012[0] = (char *(*)()) F894_5058;
	R4012[1] = (char *(*)()) F895_5108;
	R4012[2] = (char *(*)()) F896_5108;
}

char *(*R4013[3])();
void R4013_init () {
	R4013[0] = (char *(*)()) F894_5059;
	R4013[1] = (char *(*)()) F895_5109;
	R4013[2] = (char *(*)()) F896_5109;
}

char *(*R4014[3])();
void R4014_init () {
	R4014[0] = (char *(*)()) F894_5060;
	R4014[1] = (char *(*)()) F895_5110;
	R4014[2] = (char *(*)()) F896_5110;
}

char *(*R4015[3])();
void R4015_init () {
	R4015[0] = (char *(*)()) F894_5061;
	R4015[1] = (char *(*)()) F895_5111;
	R4015[2] = (char *(*)()) F896_5111;
}

char *(*R4017[3])();
void R4017_init () {
	R4017[0] = (char *(*)()) F894_5063;
	R4017[1] = (char *(*)()) F895_5113;
	R4017[2] = (char *(*)()) F896_5113;
}

char *(*R4018[3])();
void R4018_init () {
	R4018[0] = (char *(*)()) F894_5064;
	R4018[1] = (char *(*)()) F895_5114;
	R4018[2] = (char *(*)()) F896_5114;
}

char *(*R4044[3])();
void R4044_init () {
	R4044[0] = (char *(*)()) F894_5090;
	R4044[1] = (char *(*)()) F895_5123_4044_19;
	R4044[2] = (char *(*)()) F896_5123_4044_19;
}
static EIF_REFERENCE F895_5123_4044_19 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F895_5123(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i2;
	} else {
		Result = RTLNS(eif_new_type(895, 0x00).id, 895, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_INTEGER_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F896_5123_4044_19 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F896_5123(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i2;
	} else {
		Result = RTLNS(eif_new_type(895, 0x00).id, 895, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_INTEGER_16 *)Result = r;
		return Result;
	}
}

char *(*R4045[3])();
void R4045_init () {
	R4045[0] = (char *(*)()) F894_5091;
	R4045[1] = (char *(*)()) F895_5124_4045_19;
	R4045[2] = (char *(*)()) F896_5124_4045_19;
}
static EIF_REFERENCE F895_5124_4045_19 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F895_5124(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i2;
	} else {
		Result = RTLNS(eif_new_type(895, 0x00).id, 895, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_INTEGER_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F896_5124_4045_19 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_16 r = F896_5124(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i2;
	} else {
		Result = RTLNS(eif_new_type(895, 0x00).id, 895, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_INTEGER_16 *)Result = r;
		return Result;
	}
}

char *(*R4067[3])();
void R4067_init () {
	R4067[0] = (char *(*)()) F897_5156;
	R4067[1] = (char *(*)()) F898_5206;
	R4067[2] = (char *(*)()) F899_5206;
}

char *(*R4068[3])();
void R4068_init () {
	R4068[0] = (char *(*)()) F897_5157;
	R4068[1] = (char *(*)()) F898_5207;
	R4068[2] = (char *(*)()) F899_5207;
}

char *(*R4069[3])();
void R4069_init () {
	R4069[0] = (char *(*)()) F897_5158;
	R4069[1] = (char *(*)()) F898_5208;
	R4069[2] = (char *(*)()) F899_5208;
}

char *(*R4070[3])();
void R4070_init () {
	R4070[0] = (char *(*)()) F897_5159;
	R4070[1] = (char *(*)()) F898_5209;
	R4070[2] = (char *(*)()) F899_5209;
}

char *(*R4072[3])();
void R4072_init () {
	R4072[0] = (char *(*)()) F897_5161;
	R4072[1] = (char *(*)()) F898_5211;
	R4072[2] = (char *(*)()) F899_5211;
}

char *(*R4073[3])();
void R4073_init () {
	R4073[0] = (char *(*)()) F897_5162;
	R4073[1] = (char *(*)()) F898_5212;
	R4073[2] = (char *(*)()) F899_5212;
}

char *(*R4074[3])();
void R4074_init () {
	R4074[0] = (char *(*)()) F897_5163;
	R4074[1] = (char *(*)()) F898_5213;
	R4074[2] = (char *(*)()) F899_5213;
}

char *(*R4100[3])();
void R4100_init () {
	R4100[0] = (char *(*)()) F897_5189;
	R4100[1] = (char *(*)()) F898_5222_4100_19;
	R4100[2] = (char *(*)()) F899_5222_4100_19;
}
static EIF_REFERENCE F898_5222_4100_19 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F898_5222(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i1;
	} else {
		Result = RTLNS(eif_new_type(898, 0x00).id, 898, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_INTEGER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F899_5222_4100_19 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F899_5222(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i1;
	} else {
		Result = RTLNS(eif_new_type(898, 0x00).id, 898, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_INTEGER_8 *)Result = r;
		return Result;
	}
}

char *(*R4101[3])();
void R4101_init () {
	R4101[0] = (char *(*)()) F897_5190;
	R4101[1] = (char *(*)()) F898_5223_4101_19;
	R4101[2] = (char *(*)()) F899_5223_4101_19;
}
static EIF_REFERENCE F898_5223_4101_19 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F898_5223(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i1;
	} else {
		Result = RTLNS(eif_new_type(898, 0x00).id, 898, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_INTEGER_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F899_5223_4101_19 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_8 r = F899_5223(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_i1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_i1;
	} else {
		Result = RTLNS(eif_new_type(898, 0x00).id, 898, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_INTEGER_8 *)Result = r;
		return Result;
	}
}

char *(*R4121[3])();
void R4121_init () {
	R4121[0] = (char *(*)()) F900_5253;
	R4121[1] = (char *(*)()) F901_5300;
	R4121[2] = (char *(*)()) F902_5300;
}

char *(*R4122[3])();
void R4122_init () {
	R4122[0] = (char *(*)()) F900_5254;
	R4122[1] = (char *(*)()) F901_5301;
	R4122[2] = (char *(*)()) F902_5301;
}

char *(*R4123[3])();
void R4123_init () {
	R4123[0] = (char *(*)()) F900_5255;
	R4123[1] = (char *(*)()) F901_5302;
	R4123[2] = (char *(*)()) F902_5302;
}

char *(*R4125[3])();
void R4125_init () {
	R4125[0] = (char *(*)()) F900_5257;
	R4125[1] = (char *(*)()) F901_5304;
	R4125[2] = (char *(*)()) F902_5304;
}

char *(*R4126[3])();
void R4126_init () {
	R4126[0] = (char *(*)()) F900_5258;
	R4126[1] = (char *(*)()) F901_5305;
	R4126[2] = (char *(*)()) F902_5305;
}

char *(*R4127[3])();
void R4127_init () {
	R4127[0] = (char *(*)()) F900_5259;
	R4127[1] = (char *(*)()) F901_5306;
	R4127[2] = (char *(*)()) F902_5306;
}

char *(*R4128[3])();
void R4128_init () {
	R4128[0] = (char *(*)()) F900_5260;
	R4128[1] = (char *(*)()) F901_5307;
	R4128[2] = (char *(*)()) F902_5307;
}

char *(*R4153[3])();
void R4153_init () {
	R4153[0] = (char *(*)()) F900_5285;
	R4153[1] = (char *(*)()) F901_5316_4153_19;
	R4153[2] = (char *(*)()) F902_5316_4153_19;
}
static EIF_REFERENCE F901_5316_4153_19 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F901_5316(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n8;
	} else {
		Result = RTLNS(eif_new_type(901, 0x00).id, 901, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_NATURAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F902_5316_4153_19 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F902_5316(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n8;
	} else {
		Result = RTLNS(eif_new_type(901, 0x00).id, 901, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_NATURAL_64 *)Result = r;
		return Result;
	}
}

char *(*R4154[3])();
void R4154_init () {
	R4154[0] = (char *(*)()) F900_5286;
	R4154[1] = (char *(*)()) F901_5317_4154_19;
	R4154[2] = (char *(*)()) F902_5317_4154_19;
}
static EIF_REFERENCE F901_5317_4154_19 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F901_5317(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n8;
	} else {
		Result = RTLNS(eif_new_type(901, 0x00).id, 901, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_NATURAL_64 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F902_5317_4154_19 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F902_5317(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n8 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n8;
	} else {
		Result = RTLNS(eif_new_type(901, 0x00).id, 901, _OBJSIZ_0_0_0_0_0_0_1_0_);
		*(EIF_NATURAL_64 *)Result = r;
		return Result;
	}
}

char *(*R4173[3])();
void R4173_init () {
	R4173[0] = (char *(*)()) F903_5347;
	R4173[1] = (char *(*)()) F904_5394;
	R4173[2] = (char *(*)()) F905_5394;
}

char *(*R4174[3])();
void R4174_init () {
	R4174[0] = (char *(*)()) F903_5348;
	R4174[1] = (char *(*)()) F904_5395;
	R4174[2] = (char *(*)()) F905_5395;
}

char *(*R4176[3])();
void R4176_init () {
	R4176[0] = (char *(*)()) F903_5350;
	R4176[1] = (char *(*)()) F904_5397;
	R4176[2] = (char *(*)()) F905_5397;
}

char *(*R4177[3])();
void R4177_init () {
	R4177[0] = (char *(*)()) F903_5351;
	R4177[1] = (char *(*)()) F904_5398;
	R4177[2] = (char *(*)()) F905_5398;
}

char *(*R4178[3])();
void R4178_init () {
	R4178[0] = (char *(*)()) F903_5352;
	R4178[1] = (char *(*)()) F904_5399;
	R4178[2] = (char *(*)()) F905_5399;
}

char *(*R4179[3])();
void R4179_init () {
	R4179[0] = (char *(*)()) F903_5353;
	R4179[1] = (char *(*)()) F904_5400;
	R4179[2] = (char *(*)()) F905_5400;
}

char *(*R4180[3])();
void R4180_init () {
	R4180[0] = (char *(*)()) F903_5354;
	R4180[1] = (char *(*)()) F904_5401;
	R4180[2] = (char *(*)()) F905_5401;
}

char *(*R4205[3])();
void R4205_init () {
	R4205[0] = (char *(*)()) F903_5379;
	R4205[1] = (char *(*)()) F904_5410_4205_19;
	R4205[2] = (char *(*)()) F905_5410_4205_19;
}
static EIF_REFERENCE F904_5410_4205_19 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F904_5410(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(eif_new_type(904, 0x00).id, 904, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F905_5410_4205_19 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F905_5410(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(eif_new_type(904, 0x00).id, 904, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}

char *(*R4206[3])();
void R4206_init () {
	R4206[0] = (char *(*)()) F903_5380;
	R4206[1] = (char *(*)()) F904_5411_4206_19;
	R4206[2] = (char *(*)()) F905_5411_4206_19;
}
static EIF_REFERENCE F904_5411_4206_19 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F904_5411(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(eif_new_type(904, 0x00).id, 904, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F905_5411_4206_19 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_32 r = F905_5411(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n4 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n4;
	} else {
		Result = RTLNS(eif_new_type(904, 0x00).id, 904, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_NATURAL_32 *)Result = r;
		return Result;
	}
}

char *(*R4227[3])();
void R4227_init () {
	R4227[0] = (char *(*)()) F906_5443;
	R4227[1] = (char *(*)()) F907_5490;
	R4227[2] = (char *(*)()) F908_5490;
}

char *(*R4228[3])();
void R4228_init () {
	R4228[0] = (char *(*)()) F906_5444;
	R4228[1] = (char *(*)()) F907_5491;
	R4228[2] = (char *(*)()) F908_5491;
}

char *(*R4229[3])();
void R4229_init () {
	R4229[0] = (char *(*)()) F906_5445;
	R4229[1] = (char *(*)()) F907_5492;
	R4229[2] = (char *(*)()) F908_5492;
}

char *(*R4230[3])();
void R4230_init () {
	R4230[0] = (char *(*)()) F906_5446;
	R4230[1] = (char *(*)()) F907_5493;
	R4230[2] = (char *(*)()) F908_5493;
}

char *(*R4231[3])();
void R4231_init () {
	R4231[0] = (char *(*)()) F906_5447;
	R4231[1] = (char *(*)()) F907_5494;
	R4231[2] = (char *(*)()) F908_5494;
}

char *(*R4232[3])();
void R4232_init () {
	R4232[0] = (char *(*)()) F906_5448;
	R4232[1] = (char *(*)()) F907_5495;
	R4232[2] = (char *(*)()) F908_5495;
}

char *(*R4233[3])();
void R4233_init () {
	R4233[0] = (char *(*)()) F906_5449;
	R4233[1] = (char *(*)()) F907_5496;
	R4233[2] = (char *(*)()) F908_5496;
}

char *(*R4258[3])();
void R4258_init () {
	R4258[0] = (char *(*)()) F906_5474;
	R4258[1] = (char *(*)()) F907_5505_4258_19;
	R4258[2] = (char *(*)()) F908_5505_4258_19;
}
static EIF_REFERENCE F907_5505_4258_19 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F907_5505(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n1;
	} else {
		Result = RTLNS(eif_new_type(907, 0x00).id, 907, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_NATURAL_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F908_5505_4258_19 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F908_5505(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n1;
	} else {
		Result = RTLNS(eif_new_type(907, 0x00).id, 907, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_NATURAL_8 *)Result = r;
		return Result;
	}
}

char *(*R4259[3])();
void R4259_init () {
	R4259[0] = (char *(*)()) F906_5475;
	R4259[1] = (char *(*)()) F907_5506_4259_19;
	R4259[2] = (char *(*)()) F908_5506_4259_19;
}
static EIF_REFERENCE F907_5506_4259_19 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F907_5506(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n1;
	} else {
		Result = RTLNS(eif_new_type(907, 0x00).id, 907, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_NATURAL_8 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F908_5506_4259_19 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_8 r = F908_5506(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n1 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n1;
	} else {
		Result = RTLNS(eif_new_type(907, 0x00).id, 907, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_NATURAL_8 *)Result = r;
		return Result;
	}
}

char *(*R4278[3])();
void R4278_init () {
	R4278[0] = (char *(*)()) F909_5530;
	R4278[1] = (char *(*)()) F910_5553;
	R4278[2] = (char *(*)()) F911_5553;
}

char *(*R4284[3])();
void R4284_init () {
	R4284[0] = (char *(*)()) F909_5536;
	R4284[1] = (char *(*)()) F910_5556;
	R4284[2] = (char *(*)()) F911_5556;
}

char *(*R4285[3])();
void R4285_init () {
	R4285[0] = (char *(*)()) F909_5537;
	R4285[1] = (char *(*)()) F910_5557;
	R4285[2] = (char *(*)()) F911_5557;
}

char *(*R4312[3])();
void R4312_init () {
	R4312[0] = (char *(*)()) F912_5596;
	R4312[1] = (char *(*)()) F913_5619;
	R4312[2] = (char *(*)()) F914_5619;
}

char *(*R4318[3])();
void R4318_init () {
	R4318[0] = (char *(*)()) F912_5602;
	R4318[1] = (char *(*)()) F913_5622;
	R4318[2] = (char *(*)()) F914_5622;
}

char *(*R4319[3])();
void R4319_init () {
	R4319[0] = (char *(*)()) F912_5603;
	R4319[1] = (char *(*)()) F913_5623;
	R4319[2] = (char *(*)()) F914_5623;
}

char *(*R4333[3])();
void R4333_init () {
	R4333[0] = (char *(*)()) F915_5642;
	R4333[1] = (char *(*)()) F916_5677;
	R4333[2] = (char *(*)()) F917_5677;
}

char *(*R4413[3])();
void R4413_init () {
	R4413[0] = (char *(*)()) F921_5735;
	R4413[1] = (char *(*)()) F922_5743_4413_2;
	R4413[2] = (char *(*)()) F923_5743_4413_2;
}
static EIF_BOOLEAN F922_5743_4413_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F922_5743(Current, *(EIF_BOOLEAN *)arg1);
}
static EIF_BOOLEAN F923_5743_4413_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F923_5743(Current, *(EIF_BOOLEAN *)arg1);
}

char *(*R4414[3])();
void R4414_init () {
	R4414[0] = (char *(*)()) F921_5736;
	R4414[1] = (char *(*)()) F922_5744_4414_2;
	R4414[2] = (char *(*)()) F923_5744_4414_2;
}
static EIF_BOOLEAN F922_5744_4414_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F922_5744(Current, *(EIF_BOOLEAN *)arg1);
}
static EIF_BOOLEAN F923_5744_4414_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F923_5744(Current, *(EIF_BOOLEAN *)arg1);
}

char *(*R4416[3])();
void R4416_init () {
	R4416[0] = (char *(*)()) F921_5738;
	R4416[1] = (char *(*)()) F922_5746;
	R4416[2] = (char *(*)()) F923_5746;
}

char *(*R4417[3])();
void R4417_init () {
	R4417[0] = (char *(*)()) F921_5739;
	R4417[1] = (char *(*)()) F922_5747_4417_2;
	R4417[2] = (char *(*)()) F923_5747_4417_2;
}
static EIF_BOOLEAN F922_5747_4417_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F922_5747(Current, *(EIF_BOOLEAN *)arg1);
}
static EIF_BOOLEAN F923_5747_4417_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F923_5747(Current, *(EIF_BOOLEAN *)arg1);
}

char *(*R4418[3])();
void R4418_init () {
	R4418[0] = (char *(*)()) F921_5740;
	R4418[1] = (char *(*)()) F922_5748_4418_2;
	R4418[2] = (char *(*)()) F923_5748_4418_2;
}
static EIF_BOOLEAN F922_5748_4418_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F922_5748(Current, *(EIF_BOOLEAN *)arg1);
}
static EIF_BOOLEAN F923_5748_4418_2 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	return F923_5748(Current, *(EIF_BOOLEAN *)arg1);
}

char *(*R4436[3])();
void R4436_init () {
	R4436[0] = (char *(*)()) F924_5780;
	R4436[1] = (char *(*)()) F925_5827;
	R4436[2] = (char *(*)()) F926_5827;
}

char *(*R4438[3])();
void R4438_init () {
	R4438[0] = (char *(*)()) F924_5782;
	R4438[1] = (char *(*)()) F925_5829;
	R4438[2] = (char *(*)()) F926_5829;
}

char *(*R4439[3])();
void R4439_init () {
	R4439[0] = (char *(*)()) F924_5783;
	R4439[1] = (char *(*)()) F925_5830;
	R4439[2] = (char *(*)()) F926_5830;
}

char *(*R4440[3])();
void R4440_init () {
	R4440[0] = (char *(*)()) F924_5784;
	R4440[1] = (char *(*)()) F925_5831;
	R4440[2] = (char *(*)()) F926_5831;
}

char *(*R4441[3])();
void R4441_init () {
	R4441[0] = (char *(*)()) F924_5785;
	R4441[1] = (char *(*)()) F925_5832;
	R4441[2] = (char *(*)()) F926_5832;
}

char *(*R4442[3])();
void R4442_init () {
	R4442[0] = (char *(*)()) F924_5786;
	R4442[1] = (char *(*)()) F925_5833;
	R4442[2] = (char *(*)()) F926_5833;
}

char *(*R4443[3])();
void R4443_init () {
	R4443[0] = (char *(*)()) F924_5787;
	R4443[1] = (char *(*)()) F925_5834;
	R4443[2] = (char *(*)()) F926_5834;
}

char *(*R4468[3])();
void R4468_init () {
	R4468[0] = (char *(*)()) F924_5812;
	R4468[1] = (char *(*)()) F925_5843_4468_19;
	R4468[2] = (char *(*)()) F926_5843_4468_19;
}
static EIF_REFERENCE F925_5843_4468_19 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F925_5843(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n2;
	} else {
		Result = RTLNS(eif_new_type(925, 0x00).id, 925, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_NATURAL_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F926_5843_4468_19 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F926_5843(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n2;
	} else {
		Result = RTLNS(eif_new_type(925, 0x00).id, 925, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_NATURAL_16 *)Result = r;
		return Result;
	}
}

char *(*R4469[3])();
void R4469_init () {
	R4469[0] = (char *(*)()) F924_5813;
	R4469[1] = (char *(*)()) F925_5844_4469_19;
	R4469[2] = (char *(*)()) F926_5844_4469_19;
}
static EIF_REFERENCE F925_5844_4469_19 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F925_5844(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n2;
	} else {
		Result = RTLNS(eif_new_type(925, 0x00).id, 925, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_NATURAL_16 *)Result = r;
		return Result;
	}
}
static EIF_REFERENCE F926_5844_4469_19 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_16 r = F926_5844(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_n2 = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_n2;
	} else {
		Result = RTLNS(eif_new_type(925, 0x00).id, 925, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_NATURAL_16 *)Result = r;
		return Result;
	}
}

char *(*R4510[4])();
void R4510_init () {
	R4510[0] = (char *(*)()) F961_5917;
	R4510[1] = (char *(*)()) F962_5920;
	{long i; for (i = 2; i < 4; i++) R4510[i] = (char *(*)()) F963_5920;}
}

char *(*R4534[3])();
void R4534_init () {
	R4534[0] = (char *(*)()) F962_5919;
	{long i; for (i = 1; i < 3; i++) R4534[i] = (char *(*)()) F963_5919_4534_1;}
}
static EIF_REFERENCE F963_5919_4534_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F963_5919(Current);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_b = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_b;
	} else {
		Result = RTLNS(eif_new_type(922, 0x00).id, 922, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_BOOLEAN *)Result = r;
		return Result;
	}
}

char *(*R4535[3])();
void R4535_init () {
	R4535[0] = (char *(*)()) F962_5921;
	{long i; for (i = 1; i < 3; i++) R4535[i] = (char *(*)()) F963_5921_4535_5;}
}
static EIF_REFERENCE F963_5921_4535_5 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F963_5921(Current, arg1);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_b = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_b;
	} else {
		Result = RTLNS(eif_new_type(922, 0x00).id, 922, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_BOOLEAN *)Result = r;
		return Result;
	}
}

char *(*R4539[3])();
void R4539_init () {
	R4539[0] = (char *(*)()) F962_5928;
	{long i; for (i = 1; i < 3; i++) R4539[i] = (char *(*)()) F963_5928_4539_504;}
}
static EIF_REFERENCE F963_5928_4539_504 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_POINTER arg4, EIF_INTEGER_32 arg5, EIF_BOOLEAN arg6, EIF_INTEGER_32 arg7, EIF_INTEGER_32 arg8, EIF_INTEGER_32 arg9, EIF_POINTER arg10)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_BOOLEAN r = F963_5928(Current, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
	if (l_eif_optimize_return) {
		eif_optimize_return = 0;
		eif_optimized_return_value.it_b = r;
		return (EIF_REFERENCE) &eif_optimized_return_value.it_b;
	} else {
		Result = RTLNS(eif_new_type(922, 0x00).id, 922, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_BOOLEAN *)Result = r;
		return Result;
	}
}

static EIF_TYPE_INDEX Y4540_pgtype0[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y4540_pgtype1[] = {0xFFF8,2,0xFFFF};
static EIF_TYPE_INDEX Y4540_pgtype2[] = {922,0xFFFF};
EIF_TYPE_INDEX *Y4540_gen_type [3];
EIF_TYPE_INDEX Y4540 [3];
void Y4540_init (void)
{
	egc_routines_types [4540] = Y4540;
	egc_routines_gen_types [4540] = Y4540_gen_type;
	egc_routines_offset [4540] = 961;
	Y4540_gen_type [0] = Y4540_pgtype0;
	Y4540_gen_type [1] = Y4540_pgtype1;
	Y4540_gen_type [2] = Y4540_pgtype2;
	Y4540[2] = 922;
}

char *(*R4541[5])();
void R4541_init () {
	{long i; for (i = 0; i < 2; i++) R4541[i] = (char *(*)()) F968_6060;}
	{long i; for (i = 3; i < 5; i++) R4541[i] = (char *(*)()) F971_6226;}
}

char *(*R4543[5])();
void R4543_init () {
	R4543[0] = (char *(*)()) F969_6120;
	R4543[1] = (char *(*)()) F970_6142;
	R4543[3] = (char *(*)()) F972_6287;
	R4543[4] = (char *(*)()) F973_6310;
}

char *(*R4544[5])();
void R4544_init () {
	R4544[0] = (char *(*)()) F969_6119;
	R4544[1] = (char *(*)()) F970_6141;
	R4544[3] = (char *(*)()) F972_6285;
	R4544[4] = (char *(*)()) F973_6308;
}

char *(*R4545[5])();
void R4545_init () {
	{long i; for (i = 0; i < 2; i++) R4545[i] = (char *(*)()) F965_5933;}
	{long i; for (i = 3; i < 5; i++) R4545[i] = (char *(*)()) F971_6238;}
}

char *(*R4554[5])();
void R4554_init () {
	{long i; for (i = 0; i < 2; i++) R4554[i] = (char *(*)()) F968_6098;}
	{long i; for (i = 3; i < 5; i++) R4554[i] = (char *(*)()) F971_6263;}
}

char *(*R4555[5])();
void R4555_init () {
	{long i; for (i = 0; i < 2; i++) R4555[i] = (char *(*)()) F968_6091;}
	{long i; for (i = 3; i < 5; i++) R4555[i] = (char *(*)()) F971_6256;}
}

char *(*R4556[5])();
void R4556_init () {
	{long i; for (i = 0; i < 2; i++) R4556[i] = (char *(*)()) F968_6092;}
	{long i; for (i = 3; i < 5; i++) R4556[i] = (char *(*)()) F971_6257;}
}

char *(*R4557[5])();
void R4557_init () {
	{long i; for (i = 0; i < 2; i++) R4557[i] = (char *(*)()) F968_6093;}
	{long i; for (i = 3; i < 5; i++) R4557[i] = (char *(*)()) F971_6258;}
}

char *(*R4558[5])();
void R4558_init () {
	R4558[0] = (char *(*)()) F969_6129;
	R4558[1] = (char *(*)()) F567_3452;
	R4558[3] = (char *(*)()) F972_6297;
	R4558[4] = (char *(*)()) F569_3452;
}

char *(*R4560[5])();
void R4560_init () {
	{long i; for (i = 0; i < 2; i++) R4560[i] = (char *(*)()) F968_6094;}
	{long i; for (i = 3; i < 5; i++) R4560[i] = (char *(*)()) F971_6259;}
}

char *(*R4561[5])();
void R4561_init () {
	{long i; for (i = 0; i < 2; i++) R4561[i] = (char *(*)()) F965_5950;}
	{long i; for (i = 3; i < 5; i++) R4561[i] = (char *(*)()) F971_6260;}
}

char *(*R4569[5])();
void R4569_init () {
	{long i; for (i = 0; i < 2; i++) R4569[i] = (char *(*)()) F968_6099;}
	{long i; for (i = 3; i < 5; i++) R4569[i] = (char *(*)()) F971_6264;}
}

char *(*R4580[5])();
void R4580_init () {
	{long i; for (i = 0; i < 2; i++) R4580[i] = (char *(*)()) F968_6082;}
	{long i; for (i = 3; i < 5; i++) R4580[i] = (char *(*)()) F971_6247;}
}

char *(*R4581[5])();
void R4581_init () {
	{long i; for (i = 0; i < 2; i++) R4581[i] = (char *(*)()) F968_6081;}
	{long i; for (i = 3; i < 5; i++) R4581[i] = (char *(*)()) F971_6246;}
}

char *(*R4582[5])();
void R4582_init () {
	{long i; for (i = 0; i < 2; i++) R4582[i] = (char *(*)()) F965_5971;}
	{long i; for (i = 3; i < 5; i++) R4582[i] = (char *(*)()) F971_6248;}
}

char *(*R4591[5])();
void R4591_init () {
	{long i; for (i = 0; i < 2; i++) R4591[i] = (char *(*)()) F968_6078;}
	{long i; for (i = 3; i < 5; i++) R4591[i] = (char *(*)()) F971_6243;}
}

char *(*R4602[5])();
void R4602_init () {
	R4602[0] = (char *(*)()) F969_6125;
	R4602[1] = (char *(*)()) F970_6208;
	R4602[3] = (char *(*)()) F972_6292;
	R4602[4] = (char *(*)()) F973_6376;
}

char *(*R4603[5])();
void R4603_init () {
	R4603[0] = (char *(*)()) F969_6126;
	R4603[1] = (char *(*)()) F970_6209;
	R4603[3] = (char *(*)()) F972_6293;
	R4603[4] = (char *(*)()) F973_6377;
}

char *(*R4621[5])();
void R4621_init () {
	R4621[0] = (char *(*)()) F969_6127;
	R4621[1] = (char *(*)()) F970_6220;
	R4621[3] = (char *(*)()) F972_6294;
	R4621[4] = (char *(*)()) F973_6388;
}

char *(*R4625[5])();
void R4625_init () {
	R4625[0] = (char *(*)()) F969_6131;
	R4625[1] = (char *(*)()) F970_6224;
	R4625[3] = (char *(*)()) F972_6298;
	R4625[4] = (char *(*)()) F973_6391;
}

char *(*R4636[4])();
void R4636_init () {
	R4636[0] = (char *(*)()) F970_6222;
	R4636[3] = (char *(*)()) F973_6390;
}

char *(*R4639[4])();
void R4639_init () {
	R4639[0] = (char *(*)()) F970_6161;
	R4639[3] = (char *(*)()) F973_6329;
}

char *(*R4661[4])();
void R4661_init () {
	R4661[0] = (char *(*)()) F970_6157;
	R4661[3] = (char *(*)()) F973_6325;
}

char *(*R4662[4])();
void R4662_init () {
	R4662[0] = (char *(*)()) F970_6158;
	R4662[3] = (char *(*)()) F973_6326;
}

char *(*R4669[4])();
void R4669_init () {
	R4669[0] = (char *(*)()) F970_6205;
	R4669[3] = (char *(*)()) F973_6373;
}

char *(*R4693[2])();
void R4693_init () {
	R4693[0] = (char *(*)()) F969_6122;
	R4693[1] = (char *(*)()) F970_6192;
}

char *(*R4701[2])();
void R4701_init () {
	R4701[0] = (char *(*)()) F969_6133;
	R4701[1] = (char *(*)()) F968_6112;
}

char *(*R4776[2])();
void R4776_init () {
	R4776[0] = (char *(*)()) F972_6300;
	R4776[1] = (char *(*)()) F971_6277;
}

char *(*R4873[2])();
void R4873_init () {
	R4873[0] = (char *(*)()) F978_6495;
	R4873[1] = (char *(*)()) F979_6516;
}

char *(*R4878[2])();
void R4878_init () {
	R4878[0] = (char *(*)()) F978_6498;
	R4878[1] = (char *(*)()) F979_6511;
}

char *(*R4880[2])();
void R4880_init () {
	R4880[0] = (char *(*)()) F978_6499;
	R4880[1] = (char *(*)()) F979_6512;
}

char *(*R4881[2])();
void R4881_init () {
	R4881[0] = (char *(*)()) F978_6500;
	R4881[1] = (char *(*)()) F979_6513;
}
char *(*R2[991])();
void R2_init () {}
char *(*R6[991])();
void R6_init () {}

char *(*R3[991])();
void R3_init () {
	R3[212] = (char *(*)()) F213_2517;
	R3[213] = (char *(*)()) F214_2618;
	{long i; for (i = 215; i < 217; i++) R3[i] = (char *(*)()) F215_2623;}
	R3[221] = (char *(*)()) F218_2680;
	R3[223] = (char *(*)()) F224_3015;
	R3[246] = (char *(*)()) F247_3185;
	{long i; for (i = 644; i < 646; i++) R3[i] = (char *(*)()) F218_2680;}
	R3[646] = (char *(*)()) F647_3855;
	R3[973] = (char *(*)()) F974_6401;
}

char *(*R4[991])();
void R4_init () {
	{long i; for (i = 0; i < 10; i++) R4[i] = (char *(*)()) F1_15;}
	R4[10] = (char *(*)()) F11_50;
	{long i; for (i = 12; i < 49; i++) R4[i] = (char *(*)()) F1_15;}
	{long i; for (i = 50; i < 53; i++) R4[i] = (char *(*)()) F1_15;}
	R4[55] = (char *(*)()) F56_779;
	{long i; for (i = 56; i < 58; i++) R4[i] = (char *(*)()) F1_15;}
	{long i; for (i = 59; i < 62; i++) R4[i] = (char *(*)()) F1_15;}
	R4[64] = (char *(*)()) F1_15;
	{long i; for (i = 66; i < 75; i++) R4[i] = (char *(*)()) F1_15;}
	R4[77] = (char *(*)()) F1_15;
	{long i; for (i = 79; i < 81; i++) R4[i] = (char *(*)()) F1_15;}
	{long i; for (i = 82; i < 84; i++) R4[i] = (char *(*)()) F1_15;}
	{long i; for (i = 87; i < 92; i++) R4[i] = (char *(*)()) F1_15;}
	{long i; for (i = 93; i < 95; i++) R4[i] = (char *(*)()) F1_15;}
	R4[97] = (char *(*)()) F1_15;
	{long i; for (i = 100; i < 104; i++) R4[i] = (char *(*)()) F1_15;}
	{long i; for (i = 105; i < 107; i++) R4[i] = (char *(*)()) F1_15;}
	{long i; for (i = 108; i < 112; i++) R4[i] = (char *(*)()) F1_15;}
	{long i; for (i = 113; i < 118; i++) R4[i] = (char *(*)()) F1_15;}
	R4[120] = (char *(*)()) F1_15;
	{long i; for (i = 122; i < 125; i++) R4[i] = (char *(*)()) F1_15;}
	{long i; for (i = 126; i < 128; i++) R4[i] = (char *(*)()) F1_15;}
	{long i; for (i = 130; i < 132; i++) R4[i] = (char *(*)()) F1_15;}
	{long i; for (i = 133; i < 136; i++) R4[i] = (char *(*)()) F1_15;}
	{long i; for (i = 137; i < 141; i++) R4[i] = (char *(*)()) F1_15;}
	{long i; for (i = 142; i < 144; i++) R4[i] = (char *(*)()) F1_15;}
	{long i; for (i = 145; i < 148; i++) R4[i] = (char *(*)()) F1_15;}
	{long i; for (i = 149; i < 163; i++) R4[i] = (char *(*)()) F1_15;}
	{long i; for (i = 164; i < 178; i++) R4[i] = (char *(*)()) F1_15;}
	R4[178] = (char *(*)()) F56_779;
	{long i; for (i = 179; i < 181; i++) R4[i] = (char *(*)()) F1_15;}
	R4[182] = (char *(*)()) F1_15;
	{long i; for (i = 184; i < 187; i++) R4[i] = (char *(*)()) F1_15;}
	R4[189] = (char *(*)()) F1_15;
	{long i; for (i = 191; i < 193; i++) R4[i] = (char *(*)()) F1_15;}
	{long i; for (i = 194; i < 211; i++) R4[i] = (char *(*)()) F1_15;}
	R4[212] = (char *(*)()) F1_15;
	R4[213] = (char *(*)()) F214_2537;
	{long i; for (i = 215; i < 217; i++) R4[i] = (char *(*)()) F1_15;}
	{long i; for (i = 221; i < 225; i++) R4[i] = (char *(*)()) F1_15;}
	{long i; for (i = 225; i < 227; i++) R4[i] = (char *(*)()) F226_3104;}
	{long i; for (i = 227; i < 230; i++) R4[i] = (char *(*)()) F1_15;}
	{long i; for (i = 245; i < 247; i++) R4[i] = (char *(*)()) F1_15;}
	{long i; for (i = 267; i < 269; i++) R4[i] = (char *(*)()) F1_15;}
	{long i; for (i = 304; i < 326; i++) R4[i] = (char *(*)()) F1_15;}
	{long i; for (i = 341; i < 389; i++) R4[i] = (char *(*)()) F1_15;}
	R4[564] = (char *(*)()) F1_15;
	{long i; for (i = 644; i < 647; i++) R4[i] = (char *(*)()) F1_15;}
	R4[677] = (char *(*)()) F678_3894;
	R4[678] = (char *(*)()) F679_3959;
	R4[679] = (char *(*)()) F680_3959;
	R4[680] = (char *(*)()) F681_3959;
	R4[681] = (char *(*)()) F682_3959;
	R4[682] = (char *(*)()) F683_3959;
	R4[683] = (char *(*)()) F684_3959;
	R4[684] = (char *(*)()) F685_3959;
	R4[685] = (char *(*)()) F686_3959;
	R4[686] = (char *(*)()) F687_3959;
	R4[687] = (char *(*)()) F688_3959;
	R4[688] = (char *(*)()) F689_3959;
	R4[689] = (char *(*)()) F690_3959;
	R4[690] = (char *(*)()) F691_3959;
	R4[691] = (char *(*)()) F692_3959;
	R4[692] = (char *(*)()) F693_3959;
	R4[753] = (char *(*)()) F754_4051;
	R4[754] = (char *(*)()) F755_4051;
	{long i; for (i = 756; i < 758; i++) R4[i] = (char *(*)()) F1_15;}
	{long i; for (i = 759; i < 774; i++) R4[i] = (char *(*)()) F1_15;}
	{long i; for (i = 775; i < 820; i++) R4[i] = (char *(*)()) F1_15;}
	R4[821] = (char *(*)()) F1_15;
	R4[822] = (char *(*)()) F823_4297;
	R4[823] = (char *(*)()) F1_15;
	R4[824] = (char *(*)()) F825_4395;
	R4[825] = (char *(*)()) F826_4395;
	R4[826] = (char *(*)()) F827_4395;
	R4[827] = (char *(*)()) F828_4395;
	R4[828] = (char *(*)()) F829_4395;
	R4[829] = (char *(*)()) F830_4395;
	R4[830] = (char *(*)()) F831_4395;
	R4[831] = (char *(*)()) F832_4395;
	R4[832] = (char *(*)()) F833_4395;
	R4[833] = (char *(*)()) F834_4395;
	R4[834] = (char *(*)()) F835_4395;
	R4[835] = (char *(*)()) F836_4395;
	R4[836] = (char *(*)()) F837_4395;
	R4[837] = (char *(*)()) F838_4395;
	R4[838] = (char *(*)()) F839_4395;
	R4[839] = (char *(*)()) F825_4395;
	{long i; for (i = 840; i < 843; i++) R4[i] = (char *(*)()) F1_15;}
	R4[843] = (char *(*)()) F844_4518;
	R4[844] = (char *(*)()) F845_4518;
	R4[845] = (char *(*)()) F846_4518;
	R4[846] = (char *(*)()) F847_4518;
	R4[847] = (char *(*)()) F848_4518;
	R4[848] = (char *(*)()) F846_4518;
	{long i; for (i = 849; i < 851; i++) R4[i] = (char *(*)()) F844_4518;}
	R4[851] = (char *(*)()) F847_4518;
	R4[853] = (char *(*)()) F1_15;
	R4[854] = (char *(*)()) F855_4643;
	{long i; for (i = 855; i < 959; i++) R4[i] = (char *(*)()) F1_15;}
	R4[960] = (char *(*)()) F960_5892;
	R4[961] = (char *(*)()) F962_5924;
	{long i; for (i = 962; i < 964; i++) R4[i] = (char *(*)()) F963_5924;}
	R4[968] = (char *(*)()) F969_6116;
	R4[969] = (char *(*)()) F968_6100;
	R4[971] = (char *(*)()) F972_6284;
	R4[972] = (char *(*)()) F971_6265;
	{long i; for (i = 973; i < 976; i++) R4[i] = (char *(*)()) F1_15;}
	{long i; for (i = 977; i < 988; i++) R4[i] = (char *(*)()) F1_15;}
	R4[988] = (char *(*)()) F989_6770;
	{long i; for (i = 989; i < 991; i++) R4[i] = (char *(*)()) F1_15;}
}

char *(*R5[991])();
void R5_init () {
	{long i; for (i = 0; i < 10; i++) R5[i] = (char *(*)()) F1_8;}
	R5[10] = (char *(*)()) F11_49;
	{long i; for (i = 12; i < 14; i++) R5[i] = (char *(*)()) F1_8;}
	R5[14] = (char *(*)()) F15_85;
	{long i; for (i = 15; i < 49; i++) R5[i] = (char *(*)()) F1_8;}
	{long i; for (i = 50; i < 53; i++) R5[i] = (char *(*)()) F1_8;}
	R5[55] = (char *(*)()) F56_776;
	{long i; for (i = 56; i < 58; i++) R5[i] = (char *(*)()) F1_8;}
	{long i; for (i = 59; i < 62; i++) R5[i] = (char *(*)()) F1_8;}
	R5[64] = (char *(*)()) F1_8;
	{long i; for (i = 66; i < 75; i++) R5[i] = (char *(*)()) F1_8;}
	R5[77] = (char *(*)()) F1_8;
	{long i; for (i = 79; i < 81; i++) R5[i] = (char *(*)()) F1_8;}
	{long i; for (i = 82; i < 84; i++) R5[i] = (char *(*)()) F1_8;}
	{long i; for (i = 87; i < 92; i++) R5[i] = (char *(*)()) F1_8;}
	{long i; for (i = 93; i < 95; i++) R5[i] = (char *(*)()) F1_8;}
	R5[97] = (char *(*)()) F1_8;
	{long i; for (i = 100; i < 104; i++) R5[i] = (char *(*)()) F1_8;}
	{long i; for (i = 105; i < 107; i++) R5[i] = (char *(*)()) F1_8;}
	{long i; for (i = 108; i < 112; i++) R5[i] = (char *(*)()) F1_8;}
	{long i; for (i = 113; i < 118; i++) R5[i] = (char *(*)()) F1_8;}
	R5[120] = (char *(*)()) F1_8;
	{long i; for (i = 122; i < 125; i++) R5[i] = (char *(*)()) F1_8;}
	{long i; for (i = 126; i < 128; i++) R5[i] = (char *(*)()) F1_8;}
	{long i; for (i = 130; i < 132; i++) R5[i] = (char *(*)()) F1_8;}
	{long i; for (i = 133; i < 136; i++) R5[i] = (char *(*)()) F1_8;}
	{long i; for (i = 137; i < 141; i++) R5[i] = (char *(*)()) F1_8;}
	{long i; for (i = 142; i < 144; i++) R5[i] = (char *(*)()) F1_8;}
	{long i; for (i = 145; i < 148; i++) R5[i] = (char *(*)()) F1_8;}
	{long i; for (i = 149; i < 163; i++) R5[i] = (char *(*)()) F1_8;}
	{long i; for (i = 164; i < 178; i++) R5[i] = (char *(*)()) F1_8;}
	R5[178] = (char *(*)()) F56_776;
	{long i; for (i = 179; i < 181; i++) R5[i] = (char *(*)()) F1_8;}
	R5[182] = (char *(*)()) F183_2094;
	R5[184] = (char *(*)()) F185_2142;
	R5[185] = (char *(*)()) F186_2173;
	R5[186] = (char *(*)()) F187_2203;
	R5[189] = (char *(*)()) F1_8;
	{long i; for (i = 191; i < 193; i++) R5[i] = (char *(*)()) F1_8;}
	{long i; for (i = 194; i < 211; i++) R5[i] = (char *(*)()) F1_8;}
	R5[212] = (char *(*)()) F1_8;
	R5[213] = (char *(*)()) F214_2536;
	{long i; for (i = 215; i < 217; i++) R5[i] = (char *(*)()) F1_8;}
	{long i; for (i = 221; i < 224; i++) R5[i] = (char *(*)()) F1_8;}
	R5[224] = (char *(*)()) F225_3054;
	{long i; for (i = 225; i < 227; i++) R5[i] = (char *(*)()) F226_3103;}
	{long i; for (i = 227; i < 230; i++) R5[i] = (char *(*)()) F1_8;}
	{long i; for (i = 245; i < 247; i++) R5[i] = (char *(*)()) F1_8;}
	{long i; for (i = 267; i < 269; i++) R5[i] = (char *(*)()) F1_8;}
	{long i; for (i = 304; i < 326; i++) R5[i] = (char *(*)()) F1_8;}
	{long i; for (i = 341; i < 389; i++) R5[i] = (char *(*)()) F1_8;}
	R5[564] = (char *(*)()) F1_8;
	{long i; for (i = 644; i < 647; i++) R5[i] = (char *(*)()) F1_8;}
	R5[677] = (char *(*)()) F678_3880;
	R5[678] = (char *(*)()) F679_3921;
	R5[679] = (char *(*)()) F680_3921;
	R5[680] = (char *(*)()) F681_3921;
	R5[681] = (char *(*)()) F682_3921;
	R5[682] = (char *(*)()) F683_3921;
	R5[683] = (char *(*)()) F684_3921;
	R5[684] = (char *(*)()) F685_3921;
	R5[685] = (char *(*)()) F686_3921;
	R5[686] = (char *(*)()) F687_3921;
	R5[687] = (char *(*)()) F688_3921;
	R5[688] = (char *(*)()) F689_3921;
	R5[689] = (char *(*)()) F690_3921;
	R5[690] = (char *(*)()) F691_3921;
	R5[691] = (char *(*)()) F692_3921;
	R5[692] = (char *(*)()) F693_3921;
	R5[753] = (char *(*)()) F724_4002;
	R5[754] = (char *(*)()) F725_4002;
	{long i; for (i = 756; i < 758; i++) R5[i] = (char *(*)()) F1_8;}
	{long i; for (i = 759; i < 774; i++) R5[i] = (char *(*)()) F1_8;}
	{long i; for (i = 775; i < 820; i++) R5[i] = (char *(*)()) F1_8;}
	R5[821] = (char *(*)()) F1_8;
	R5[822] = (char *(*)()) F823_4284;
	R5[823] = (char *(*)()) F1_8;
	R5[824] = (char *(*)()) F825_4368;
	R5[825] = (char *(*)()) F826_4368;
	R5[826] = (char *(*)()) F827_4368;
	R5[827] = (char *(*)()) F828_4368;
	R5[828] = (char *(*)()) F829_4368;
	R5[829] = (char *(*)()) F830_4368;
	R5[830] = (char *(*)()) F831_4368;
	R5[831] = (char *(*)()) F832_4368;
	R5[832] = (char *(*)()) F833_4368;
	R5[833] = (char *(*)()) F834_4368;
	R5[834] = (char *(*)()) F835_4368;
	R5[835] = (char *(*)()) F836_4368;
	R5[836] = (char *(*)()) F837_4368;
	R5[837] = (char *(*)()) F838_4368;
	R5[838] = (char *(*)()) F839_4368;
	R5[839] = (char *(*)()) F825_4368;
	{long i; for (i = 840; i < 843; i++) R5[i] = (char *(*)()) F1_8;}
	R5[843] = (char *(*)()) F844_4484;
	R5[844] = (char *(*)()) F845_4484;
	R5[845] = (char *(*)()) F846_4484;
	R5[846] = (char *(*)()) F847_4484;
	R5[847] = (char *(*)()) F848_4484;
	R5[848] = (char *(*)()) F846_4484;
	R5[849] = (char *(*)()) F844_4484;
	R5[850] = (char *(*)()) F851_4595;
	R5[851] = (char *(*)()) F852_4595;
	R5[853] = (char *(*)()) F854_4602;
	R5[854] = (char *(*)()) F855_4640;
	R5[855] = (char *(*)()) F856_4677;
	R5[856] = (char *(*)()) F857_4677;
	R5[857] = (char *(*)()) F858_4677;
	R5[858] = (char *(*)()) F859_4677;
	R5[859] = (char *(*)()) F860_4677;
	R5[860] = (char *(*)()) F861_4677;
	R5[861] = (char *(*)()) F862_4677;
	R5[862] = (char *(*)()) F863_4677;
	R5[863] = (char *(*)()) F864_4677;
	R5[864] = (char *(*)()) F865_4677;
	R5[865] = (char *(*)()) F866_4677;
	R5[866] = (char *(*)()) F867_4677;
	R5[867] = (char *(*)()) F868_4677;
	R5[868] = (char *(*)()) F869_4677;
	R5[869] = (char *(*)()) F870_4677;
	R5[870] = (char *(*)()) F871_4677;
	R5[871] = (char *(*)()) F872_4677;
	R5[872] = (char *(*)()) F873_4677;
	R5[873] = (char *(*)()) F874_4677;
	R5[874] = (char *(*)()) F875_4677;
	R5[875] = (char *(*)()) F876_4677;
	R5[876] = (char *(*)()) F877_4677;
	R5[877] = (char *(*)()) F878_4677;
	R5[878] = (char *(*)()) F879_4677;
	R5[879] = (char *(*)()) F880_4677;
	R5[880] = (char *(*)()) F881_4677;
	R5[881] = (char *(*)()) F882_4677;
	R5[882] = (char *(*)()) F883_4677;
	R5[883] = (char *(*)()) F884_4677;
	R5[884] = (char *(*)()) F885_4677;
	R5[885] = (char *(*)()) F886_4677;
	R5[886] = (char *(*)()) F887_4720;
	{long i; for (i = 887; i < 890; i++) R5[i] = (char *(*)()) F888_4838;}
	{long i; for (i = 890; i < 893; i++) R5[i] = (char *(*)()) F891_4936;}
	{long i; for (i = 893; i < 896; i++) R5[i] = (char *(*)()) F894_5035;}
	{long i; for (i = 896; i < 899; i++) R5[i] = (char *(*)()) F897_5134;}
	{long i; for (i = 899; i < 902; i++) R5[i] = (char *(*)()) F900_5233;}
	{long i; for (i = 902; i < 905; i++) R5[i] = (char *(*)()) F903_5327;}
	{long i; for (i = 905; i < 908; i++) R5[i] = (char *(*)()) F906_5421;}
	{long i; for (i = 908; i < 911; i++) R5[i] = (char *(*)()) F909_5520;}
	{long i; for (i = 911; i < 914; i++) R5[i] = (char *(*)()) F912_5586;}
	{long i; for (i = 914; i < 917; i++) R5[i] = (char *(*)()) F915_5647;}
	{long i; for (i = 917; i < 920; i++) R5[i] = (char *(*)()) F918_5687;}
	{long i; for (i = 920; i < 923; i++) R5[i] = (char *(*)()) F1_8;}
	{long i; for (i = 923; i < 926; i++) R5[i] = (char *(*)()) F924_5759;}
	{long i; for (i = 926; i < 959; i++) R5[i] = (char *(*)()) F927_5848;}
	R5[960] = (char *(*)()) F960_5885;
	R5[961] = (char *(*)()) F962_5923;
	{long i; for (i = 962; i < 964; i++) R5[i] = (char *(*)()) F963_5923;}
	{long i; for (i = 968; i < 970; i++) R5[i] = (char *(*)()) F968_6085;}
	{long i; for (i = 971; i < 973; i++) R5[i] = (char *(*)()) F971_6250;}
	{long i; for (i = 973; i < 976; i++) R5[i] = (char *(*)()) F1_8;}
	{long i; for (i = 977; i < 983; i++) R5[i] = (char *(*)()) F1_8;}
	R5[983] = (char *(*)()) F188_2220;
	R5[984] = (char *(*)()) F1_8;
	R5[985] = (char *(*)()) F188_2220;
	{long i; for (i = 986; i < 988; i++) R5[i] = (char *(*)()) F1_8;}
	R5[988] = (char *(*)()) F989_6766;
	{long i; for (i = 989; i < 991; i++) R5[i] = (char *(*)()) F1_8;}
}


#ifdef __cplusplus
}
#endif
