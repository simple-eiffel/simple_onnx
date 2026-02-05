#include "epoly1.h"
#include "../E1/eoffsets.h"


#ifdef __cplusplus
extern "C" {
#endif

char *(*R11[991])();
void R11_init () {
	{long i; for (i = 0; i < 10; i++) R11[i] = (char *(*)()) F1_8;}
	R11[10] = (char *(*)()) F11_49;
	{long i; for (i = 12; i < 14; i++) R11[i] = (char *(*)()) F1_8;}
	R11[14] = (char *(*)()) F15_85;
	{long i; for (i = 15; i < 49; i++) R11[i] = (char *(*)()) F1_8;}
	{long i; for (i = 50; i < 53; i++) R11[i] = (char *(*)()) F1_8;}
	R11[55] = (char *(*)()) F56_776;
	{long i; for (i = 56; i < 58; i++) R11[i] = (char *(*)()) F1_8;}
	{long i; for (i = 59; i < 62; i++) R11[i] = (char *(*)()) F1_8;}
	R11[64] = (char *(*)()) F1_8;
	{long i; for (i = 66; i < 75; i++) R11[i] = (char *(*)()) F1_8;}
	R11[77] = (char *(*)()) F1_8;
	{long i; for (i = 79; i < 81; i++) R11[i] = (char *(*)()) F1_8;}
	{long i; for (i = 82; i < 84; i++) R11[i] = (char *(*)()) F1_8;}
	{long i; for (i = 87; i < 92; i++) R11[i] = (char *(*)()) F1_8;}
	{long i; for (i = 93; i < 95; i++) R11[i] = (char *(*)()) F1_8;}
	R11[97] = (char *(*)()) F1_8;
	{long i; for (i = 100; i < 104; i++) R11[i] = (char *(*)()) F1_8;}
	{long i; for (i = 105; i < 107; i++) R11[i] = (char *(*)()) F1_8;}
	{long i; for (i = 108; i < 112; i++) R11[i] = (char *(*)()) F1_8;}
	{long i; for (i = 113; i < 118; i++) R11[i] = (char *(*)()) F1_8;}
	R11[120] = (char *(*)()) F1_8;
	{long i; for (i = 122; i < 125; i++) R11[i] = (char *(*)()) F1_8;}
	{long i; for (i = 126; i < 128; i++) R11[i] = (char *(*)()) F1_8;}
	{long i; for (i = 130; i < 132; i++) R11[i] = (char *(*)()) F1_8;}
	{long i; for (i = 133; i < 136; i++) R11[i] = (char *(*)()) F1_8;}
	{long i; for (i = 137; i < 141; i++) R11[i] = (char *(*)()) F1_8;}
	{long i; for (i = 142; i < 144; i++) R11[i] = (char *(*)()) F1_8;}
	{long i; for (i = 145; i < 148; i++) R11[i] = (char *(*)()) F1_8;}
	{long i; for (i = 149; i < 163; i++) R11[i] = (char *(*)()) F1_8;}
	{long i; for (i = 164; i < 178; i++) R11[i] = (char *(*)()) F1_8;}
	R11[178] = (char *(*)()) F56_776;
	{long i; for (i = 179; i < 181; i++) R11[i] = (char *(*)()) F1_8;}
	R11[182] = (char *(*)()) F183_2094;
	R11[184] = (char *(*)()) F185_2142;
	R11[185] = (char *(*)()) F186_2173;
	R11[186] = (char *(*)()) F187_2203;
	R11[189] = (char *(*)()) F1_8;
	{long i; for (i = 191; i < 193; i++) R11[i] = (char *(*)()) F1_8;}
	{long i; for (i = 194; i < 211; i++) R11[i] = (char *(*)()) F1_8;}
	R11[212] = (char *(*)()) F1_8;
	R11[213] = (char *(*)()) F214_2536;
	{long i; for (i = 215; i < 217; i++) R11[i] = (char *(*)()) F1_8;}
	{long i; for (i = 221; i < 224; i++) R11[i] = (char *(*)()) F1_8;}
	R11[224] = (char *(*)()) F225_3054;
	{long i; for (i = 225; i < 227; i++) R11[i] = (char *(*)()) F226_3103;}
	{long i; for (i = 227; i < 230; i++) R11[i] = (char *(*)()) F1_8;}
	{long i; for (i = 245; i < 247; i++) R11[i] = (char *(*)()) F1_8;}
	{long i; for (i = 267; i < 269; i++) R11[i] = (char *(*)()) F1_8;}
	{long i; for (i = 304; i < 326; i++) R11[i] = (char *(*)()) F1_8;}
	{long i; for (i = 341; i < 389; i++) R11[i] = (char *(*)()) F1_8;}
	R11[564] = (char *(*)()) F1_8;
	{long i; for (i = 644; i < 647; i++) R11[i] = (char *(*)()) F1_8;}
	R11[677] = (char *(*)()) F678_3880;
	R11[678] = (char *(*)()) F679_3921;
	R11[679] = (char *(*)()) F680_3921;
	R11[680] = (char *(*)()) F681_3921;
	R11[681] = (char *(*)()) F682_3921;
	R11[682] = (char *(*)()) F683_3921;
	R11[683] = (char *(*)()) F684_3921;
	R11[684] = (char *(*)()) F685_3921;
	R11[685] = (char *(*)()) F686_3921;
	R11[686] = (char *(*)()) F687_3921;
	R11[687] = (char *(*)()) F688_3921;
	R11[688] = (char *(*)()) F689_3921;
	R11[689] = (char *(*)()) F690_3921;
	R11[690] = (char *(*)()) F691_3921;
	R11[691] = (char *(*)()) F692_3921;
	R11[692] = (char *(*)()) F693_3921;
	R11[753] = (char *(*)()) F724_4002;
	R11[754] = (char *(*)()) F725_4002;
	{long i; for (i = 756; i < 758; i++) R11[i] = (char *(*)()) F1_8;}
	{long i; for (i = 759; i < 774; i++) R11[i] = (char *(*)()) F1_8;}
	{long i; for (i = 775; i < 820; i++) R11[i] = (char *(*)()) F1_8;}
	R11[821] = (char *(*)()) F1_8;
	R11[822] = (char *(*)()) F823_4284;
	R11[823] = (char *(*)()) F1_8;
	R11[824] = (char *(*)()) F825_4368;
	R11[825] = (char *(*)()) F826_4368;
	R11[826] = (char *(*)()) F827_4368;
	R11[827] = (char *(*)()) F828_4368;
	R11[828] = (char *(*)()) F829_4368;
	R11[829] = (char *(*)()) F830_4368;
	R11[830] = (char *(*)()) F831_4368;
	R11[831] = (char *(*)()) F832_4368;
	R11[832] = (char *(*)()) F833_4368;
	R11[833] = (char *(*)()) F834_4368;
	R11[834] = (char *(*)()) F835_4368;
	R11[835] = (char *(*)()) F836_4368;
	R11[836] = (char *(*)()) F837_4368;
	R11[837] = (char *(*)()) F838_4368;
	R11[838] = (char *(*)()) F839_4368;
	R11[839] = (char *(*)()) F825_4368;
	{long i; for (i = 840; i < 843; i++) R11[i] = (char *(*)()) F1_8;}
	R11[843] = (char *(*)()) F844_4484;
	R11[844] = (char *(*)()) F845_4484;
	R11[845] = (char *(*)()) F846_4484;
	R11[846] = (char *(*)()) F847_4484;
	R11[847] = (char *(*)()) F848_4484;
	R11[848] = (char *(*)()) F846_4484;
	R11[849] = (char *(*)()) F844_4484;
	R11[850] = (char *(*)()) F851_4595;
	R11[851] = (char *(*)()) F852_4595;
	R11[853] = (char *(*)()) F854_4602;
	R11[854] = (char *(*)()) F855_4640;
	R11[855] = (char *(*)()) F856_4677;
	R11[856] = (char *(*)()) F857_4677;
	R11[857] = (char *(*)()) F858_4677;
	R11[858] = (char *(*)()) F859_4677;
	R11[859] = (char *(*)()) F860_4677;
	R11[860] = (char *(*)()) F861_4677;
	R11[861] = (char *(*)()) F862_4677;
	R11[862] = (char *(*)()) F863_4677;
	R11[863] = (char *(*)()) F864_4677;
	R11[864] = (char *(*)()) F865_4677;
	R11[865] = (char *(*)()) F866_4677;
	R11[866] = (char *(*)()) F867_4677;
	R11[867] = (char *(*)()) F868_4677;
	R11[868] = (char *(*)()) F869_4677;
	R11[869] = (char *(*)()) F870_4677;
	R11[870] = (char *(*)()) F871_4677;
	R11[871] = (char *(*)()) F872_4677;
	R11[872] = (char *(*)()) F873_4677;
	R11[873] = (char *(*)()) F874_4677;
	R11[874] = (char *(*)()) F875_4677;
	R11[875] = (char *(*)()) F876_4677;
	R11[876] = (char *(*)()) F877_4677;
	R11[877] = (char *(*)()) F878_4677;
	R11[878] = (char *(*)()) F879_4677;
	R11[879] = (char *(*)()) F880_4677;
	R11[880] = (char *(*)()) F881_4677;
	R11[881] = (char *(*)()) F882_4677;
	R11[882] = (char *(*)()) F883_4677;
	R11[883] = (char *(*)()) F884_4677;
	R11[884] = (char *(*)()) F885_4677;
	R11[885] = (char *(*)()) F886_4677;
	R11[886] = (char *(*)()) F887_4720;
	{long i; for (i = 887; i < 890; i++) R11[i] = (char *(*)()) F888_4838;}
	{long i; for (i = 890; i < 893; i++) R11[i] = (char *(*)()) F891_4936;}
	{long i; for (i = 893; i < 896; i++) R11[i] = (char *(*)()) F894_5035;}
	{long i; for (i = 896; i < 899; i++) R11[i] = (char *(*)()) F897_5134;}
	{long i; for (i = 899; i < 902; i++) R11[i] = (char *(*)()) F900_5233;}
	{long i; for (i = 902; i < 905; i++) R11[i] = (char *(*)()) F903_5327;}
	{long i; for (i = 905; i < 908; i++) R11[i] = (char *(*)()) F906_5421;}
	{long i; for (i = 908; i < 911; i++) R11[i] = (char *(*)()) F909_5520;}
	{long i; for (i = 911; i < 914; i++) R11[i] = (char *(*)()) F912_5586;}
	{long i; for (i = 914; i < 917; i++) R11[i] = (char *(*)()) F915_5647;}
	{long i; for (i = 917; i < 920; i++) R11[i] = (char *(*)()) F918_5687;}
	{long i; for (i = 920; i < 923; i++) R11[i] = (char *(*)()) F1_8;}
	{long i; for (i = 923; i < 926; i++) R11[i] = (char *(*)()) F924_5759;}
	{long i; for (i = 926; i < 959; i++) R11[i] = (char *(*)()) F927_5848;}
	R11[960] = (char *(*)()) F960_5885;
	R11[961] = (char *(*)()) F962_5923;
	{long i; for (i = 962; i < 964; i++) R11[i] = (char *(*)()) F963_5923;}
	{long i; for (i = 968; i < 970; i++) R11[i] = (char *(*)()) F968_6085;}
	{long i; for (i = 971; i < 973; i++) R11[i] = (char *(*)()) F971_6250;}
	{long i; for (i = 973; i < 976; i++) R11[i] = (char *(*)()) F1_8;}
	{long i; for (i = 977; i < 983; i++) R11[i] = (char *(*)()) F1_8;}
	R11[983] = (char *(*)()) F188_2220;
	R11[984] = (char *(*)()) F1_8;
	R11[985] = (char *(*)()) F188_2220;
	{long i; for (i = 986; i < 988; i++) R11[i] = (char *(*)()) F1_8;}
	R11[988] = (char *(*)()) F989_6766;
	{long i; for (i = 989; i < 991; i++) R11[i] = (char *(*)()) F1_8;}
}

char *(*R18[991])();
void R18_init () {
	{long i; for (i = 0; i < 10; i++) R18[i] = (char *(*)()) F1_15;}
	R18[10] = (char *(*)()) F11_50;
	{long i; for (i = 12; i < 49; i++) R18[i] = (char *(*)()) F1_15;}
	{long i; for (i = 50; i < 53; i++) R18[i] = (char *(*)()) F1_15;}
	R18[55] = (char *(*)()) F56_779;
	{long i; for (i = 56; i < 58; i++) R18[i] = (char *(*)()) F1_15;}
	{long i; for (i = 59; i < 62; i++) R18[i] = (char *(*)()) F1_15;}
	R18[64] = (char *(*)()) F1_15;
	{long i; for (i = 66; i < 75; i++) R18[i] = (char *(*)()) F1_15;}
	R18[77] = (char *(*)()) F1_15;
	{long i; for (i = 79; i < 81; i++) R18[i] = (char *(*)()) F1_15;}
	{long i; for (i = 82; i < 84; i++) R18[i] = (char *(*)()) F1_15;}
	{long i; for (i = 87; i < 92; i++) R18[i] = (char *(*)()) F1_15;}
	{long i; for (i = 93; i < 95; i++) R18[i] = (char *(*)()) F1_15;}
	R18[97] = (char *(*)()) F1_15;
	{long i; for (i = 100; i < 104; i++) R18[i] = (char *(*)()) F1_15;}
	{long i; for (i = 105; i < 107; i++) R18[i] = (char *(*)()) F1_15;}
	{long i; for (i = 108; i < 112; i++) R18[i] = (char *(*)()) F1_15;}
	{long i; for (i = 113; i < 118; i++) R18[i] = (char *(*)()) F1_15;}
	R18[120] = (char *(*)()) F1_15;
	{long i; for (i = 122; i < 125; i++) R18[i] = (char *(*)()) F1_15;}
	{long i; for (i = 126; i < 128; i++) R18[i] = (char *(*)()) F1_15;}
	{long i; for (i = 130; i < 132; i++) R18[i] = (char *(*)()) F1_15;}
	{long i; for (i = 133; i < 136; i++) R18[i] = (char *(*)()) F1_15;}
	{long i; for (i = 137; i < 141; i++) R18[i] = (char *(*)()) F1_15;}
	{long i; for (i = 142; i < 144; i++) R18[i] = (char *(*)()) F1_15;}
	{long i; for (i = 145; i < 148; i++) R18[i] = (char *(*)()) F1_15;}
	{long i; for (i = 149; i < 163; i++) R18[i] = (char *(*)()) F1_15;}
	{long i; for (i = 164; i < 178; i++) R18[i] = (char *(*)()) F1_15;}
	R18[178] = (char *(*)()) F56_779;
	{long i; for (i = 179; i < 181; i++) R18[i] = (char *(*)()) F1_15;}
	R18[182] = (char *(*)()) F1_15;
	{long i; for (i = 184; i < 187; i++) R18[i] = (char *(*)()) F1_15;}
	R18[189] = (char *(*)()) F1_15;
	{long i; for (i = 191; i < 193; i++) R18[i] = (char *(*)()) F1_15;}
	{long i; for (i = 194; i < 211; i++) R18[i] = (char *(*)()) F1_15;}
	R18[212] = (char *(*)()) F1_15;
	R18[213] = (char *(*)()) F214_2537;
	{long i; for (i = 215; i < 217; i++) R18[i] = (char *(*)()) F1_15;}
	{long i; for (i = 221; i < 225; i++) R18[i] = (char *(*)()) F1_15;}
	{long i; for (i = 225; i < 227; i++) R18[i] = (char *(*)()) F226_3104;}
	{long i; for (i = 227; i < 230; i++) R18[i] = (char *(*)()) F1_15;}
	{long i; for (i = 245; i < 247; i++) R18[i] = (char *(*)()) F1_15;}
	{long i; for (i = 267; i < 269; i++) R18[i] = (char *(*)()) F1_15;}
	{long i; for (i = 304; i < 326; i++) R18[i] = (char *(*)()) F1_15;}
	{long i; for (i = 341; i < 389; i++) R18[i] = (char *(*)()) F1_15;}
	R18[564] = (char *(*)()) F1_15;
	{long i; for (i = 644; i < 647; i++) R18[i] = (char *(*)()) F1_15;}
	R18[677] = (char *(*)()) F678_3894;
	R18[678] = (char *(*)()) F679_3959;
	R18[679] = (char *(*)()) F680_3959;
	R18[680] = (char *(*)()) F681_3959;
	R18[681] = (char *(*)()) F682_3959;
	R18[682] = (char *(*)()) F683_3959;
	R18[683] = (char *(*)()) F684_3959;
	R18[684] = (char *(*)()) F685_3959;
	R18[685] = (char *(*)()) F686_3959;
	R18[686] = (char *(*)()) F687_3959;
	R18[687] = (char *(*)()) F688_3959;
	R18[688] = (char *(*)()) F689_3959;
	R18[689] = (char *(*)()) F690_3959;
	R18[690] = (char *(*)()) F691_3959;
	R18[691] = (char *(*)()) F692_3959;
	R18[692] = (char *(*)()) F693_3959;
	R18[753] = (char *(*)()) F754_4051;
	R18[754] = (char *(*)()) F755_4051;
	{long i; for (i = 756; i < 758; i++) R18[i] = (char *(*)()) F1_15;}
	{long i; for (i = 759; i < 774; i++) R18[i] = (char *(*)()) F1_15;}
	{long i; for (i = 775; i < 820; i++) R18[i] = (char *(*)()) F1_15;}
	R18[821] = (char *(*)()) F1_15;
	R18[822] = (char *(*)()) F823_4297;
	R18[823] = (char *(*)()) F1_15;
	R18[824] = (char *(*)()) F825_4395;
	R18[825] = (char *(*)()) F826_4395;
	R18[826] = (char *(*)()) F827_4395;
	R18[827] = (char *(*)()) F828_4395;
	R18[828] = (char *(*)()) F829_4395;
	R18[829] = (char *(*)()) F830_4395;
	R18[830] = (char *(*)()) F831_4395;
	R18[831] = (char *(*)()) F832_4395;
	R18[832] = (char *(*)()) F833_4395;
	R18[833] = (char *(*)()) F834_4395;
	R18[834] = (char *(*)()) F835_4395;
	R18[835] = (char *(*)()) F836_4395;
	R18[836] = (char *(*)()) F837_4395;
	R18[837] = (char *(*)()) F838_4395;
	R18[838] = (char *(*)()) F839_4395;
	R18[839] = (char *(*)()) F825_4395;
	{long i; for (i = 840; i < 843; i++) R18[i] = (char *(*)()) F1_15;}
	R18[843] = (char *(*)()) F844_4518;
	R18[844] = (char *(*)()) F845_4518;
	R18[845] = (char *(*)()) F846_4518;
	R18[846] = (char *(*)()) F847_4518;
	R18[847] = (char *(*)()) F848_4518;
	R18[848] = (char *(*)()) F846_4518;
	{long i; for (i = 849; i < 851; i++) R18[i] = (char *(*)()) F844_4518;}
	R18[851] = (char *(*)()) F847_4518;
	R18[853] = (char *(*)()) F1_15;
	R18[854] = (char *(*)()) F855_4643;
	{long i; for (i = 855; i < 959; i++) R18[i] = (char *(*)()) F1_15;}
	R18[960] = (char *(*)()) F960_5892;
	R18[961] = (char *(*)()) F962_5924;
	{long i; for (i = 962; i < 964; i++) R18[i] = (char *(*)()) F963_5924;}
	R18[968] = (char *(*)()) F969_6116;
	R18[969] = (char *(*)()) F968_6100;
	R18[971] = (char *(*)()) F972_6284;
	R18[972] = (char *(*)()) F971_6265;
	{long i; for (i = 973; i < 976; i++) R18[i] = (char *(*)()) F1_15;}
	{long i; for (i = 977; i < 988; i++) R18[i] = (char *(*)()) F1_15;}
	R18[988] = (char *(*)()) F989_6770;
	{long i; for (i = 989; i < 991; i++) R18[i] = (char *(*)()) F1_15;}
}

char *(*R28[991])();
void R28_init () {
	{long i; for (i = 0; i < 11; i++) R28[i] = (char *(*)()) F1_25;}
	{long i; for (i = 12; i < 49; i++) R28[i] = (char *(*)()) F1_25;}
	{long i; for (i = 50; i < 53; i++) R28[i] = (char *(*)()) F1_25;}
	{long i; for (i = 55; i < 58; i++) R28[i] = (char *(*)()) F1_25;}
	{long i; for (i = 59; i < 62; i++) R28[i] = (char *(*)()) F1_25;}
	R28[64] = (char *(*)()) F1_25;
	{long i; for (i = 66; i < 75; i++) R28[i] = (char *(*)()) F1_25;}
	R28[77] = (char *(*)()) F1_25;
	{long i; for (i = 79; i < 81; i++) R28[i] = (char *(*)()) F1_25;}
	{long i; for (i = 82; i < 84; i++) R28[i] = (char *(*)()) F1_25;}
	{long i; for (i = 87; i < 92; i++) R28[i] = (char *(*)()) F1_25;}
	{long i; for (i = 93; i < 95; i++) R28[i] = (char *(*)()) F1_25;}
	R28[97] = (char *(*)()) F1_25;
	{long i; for (i = 100; i < 104; i++) R28[i] = (char *(*)()) F1_25;}
	{long i; for (i = 105; i < 107; i++) R28[i] = (char *(*)()) F1_25;}
	{long i; for (i = 108; i < 112; i++) R28[i] = (char *(*)()) F1_25;}
	{long i; for (i = 113; i < 116; i++) R28[i] = (char *(*)()) F1_25;}
	{long i; for (i = 116; i < 118; i++) R28[i] = (char *(*)()) F117_1487;}
	R28[120] = (char *(*)()) F117_1487;
	{long i; for (i = 122; i < 125; i++) R28[i] = (char *(*)()) F117_1487;}
	{long i; for (i = 126; i < 128; i++) R28[i] = (char *(*)()) F117_1487;}
	{long i; for (i = 130; i < 132; i++) R28[i] = (char *(*)()) F117_1487;}
	{long i; for (i = 133; i < 136; i++) R28[i] = (char *(*)()) F117_1487;}
	{long i; for (i = 137; i < 141; i++) R28[i] = (char *(*)()) F117_1487;}
	{long i; for (i = 142; i < 144; i++) R28[i] = (char *(*)()) F117_1487;}
	{long i; for (i = 145; i < 148; i++) R28[i] = (char *(*)()) F117_1487;}
	{long i; for (i = 149; i < 155; i++) R28[i] = (char *(*)()) F117_1487;}
	{long i; for (i = 155; i < 163; i++) R28[i] = (char *(*)()) F1_25;}
	{long i; for (i = 164; i < 181; i++) R28[i] = (char *(*)()) F1_25;}
	R28[182] = (char *(*)()) F183_2119;
	{long i; for (i = 184; i < 187; i++) R28[i] = (char *(*)()) F1_25;}
	R28[189] = (char *(*)()) F1_25;
	{long i; for (i = 191; i < 193; i++) R28[i] = (char *(*)()) F1_25;}
	{long i; for (i = 194; i < 211; i++) R28[i] = (char *(*)()) F1_25;}
	{long i; for (i = 212; i < 214; i++) R28[i] = (char *(*)()) F1_25;}
	{long i; for (i = 215; i < 217; i++) R28[i] = (char *(*)()) F1_25;}
	{long i; for (i = 221; i < 230; i++) R28[i] = (char *(*)()) F1_25;}
	{long i; for (i = 245; i < 247; i++) R28[i] = (char *(*)()) F1_25;}
	{long i; for (i = 267; i < 269; i++) R28[i] = (char *(*)()) F1_25;}
	{long i; for (i = 304; i < 326; i++) R28[i] = (char *(*)()) F1_25;}
	{long i; for (i = 341; i < 389; i++) R28[i] = (char *(*)()) F1_25;}
	R28[564] = (char *(*)()) F1_25;
	{long i; for (i = 644; i < 647; i++) R28[i] = (char *(*)()) F1_25;}
	{long i; for (i = 677; i < 693; i++) R28[i] = (char *(*)()) F1_25;}
	{long i; for (i = 753; i < 755; i++) R28[i] = (char *(*)()) F1_25;}
	{long i; for (i = 756; i < 758; i++) R28[i] = (char *(*)()) F1_25;}
	{long i; for (i = 759; i < 774; i++) R28[i] = (char *(*)()) F1_25;}
	{long i; for (i = 775; i < 820; i++) R28[i] = (char *(*)()) F1_25;}
	{long i; for (i = 821; i < 849; i++) R28[i] = (char *(*)()) F1_25;}
	R28[849] = (char *(*)()) F850_4585;
	{long i; for (i = 850; i < 852; i++) R28[i] = (char *(*)()) F1_25;}
	R28[853] = (char *(*)()) F1_25;
	R28[854] = (char *(*)()) F855_4644;
	R28[855] = (char *(*)()) F856_4685;
	R28[856] = (char *(*)()) F857_4685;
	R28[857] = (char *(*)()) F858_4685;
	R28[858] = (char *(*)()) F859_4685;
	R28[859] = (char *(*)()) F860_4685;
	R28[860] = (char *(*)()) F861_4685;
	R28[861] = (char *(*)()) F862_4685;
	R28[862] = (char *(*)()) F863_4685;
	R28[863] = (char *(*)()) F864_4685;
	R28[864] = (char *(*)()) F865_4685;
	R28[865] = (char *(*)()) F866_4685;
	R28[866] = (char *(*)()) F867_4685;
	R28[867] = (char *(*)()) F868_4685;
	R28[868] = (char *(*)()) F869_4685;
	R28[869] = (char *(*)()) F870_4685;
	R28[870] = (char *(*)()) F871_4685;
	R28[871] = (char *(*)()) F872_4685;
	R28[872] = (char *(*)()) F873_4685;
	R28[873] = (char *(*)()) F874_4685;
	R28[874] = (char *(*)()) F875_4685;
	R28[875] = (char *(*)()) F876_4685;
	R28[876] = (char *(*)()) F877_4685;
	R28[877] = (char *(*)()) F878_4685;
	R28[878] = (char *(*)()) F879_4685;
	R28[879] = (char *(*)()) F880_4685;
	R28[880] = (char *(*)()) F881_4685;
	R28[881] = (char *(*)()) F882_4685;
	R28[882] = (char *(*)()) F883_4685;
	R28[883] = (char *(*)()) F884_4685;
	R28[884] = (char *(*)()) F885_4685;
	R28[885] = (char *(*)()) F886_4685;
	R28[886] = (char *(*)()) F1_25;
	{long i; for (i = 887; i < 890; i++) R28[i] = (char *(*)()) F888_4897;}
	{long i; for (i = 890; i < 893; i++) R28[i] = (char *(*)()) F891_4996;}
	{long i; for (i = 893; i < 896; i++) R28[i] = (char *(*)()) F894_5095;}
	{long i; for (i = 896; i < 899; i++) R28[i] = (char *(*)()) F897_5194;}
	{long i; for (i = 899; i < 902; i++) R28[i] = (char *(*)()) F900_5290;}
	{long i; for (i = 902; i < 905; i++) R28[i] = (char *(*)()) F903_5384;}
	{long i; for (i = 905; i < 908; i++) R28[i] = (char *(*)()) F906_5479;}
	R28[908] = (char *(*)()) F909_5547;
	R28[909] = (char *(*)()) F910_5572;
	R28[910] = (char *(*)()) F911_5572;
	R28[911] = (char *(*)()) F912_5613;
	R28[912] = (char *(*)()) F913_5638;
	R28[913] = (char *(*)()) F914_5638;
	{long i; for (i = 914; i < 917; i++) R28[i] = (char *(*)()) F915_5654;}
	{long i; for (i = 917; i < 920; i++) R28[i] = (char *(*)()) F918_5694;}
	{long i; for (i = 920; i < 923; i++) R28[i] = (char *(*)()) F921_5742;}
	{long i; for (i = 923; i < 926; i++) R28[i] = (char *(*)()) F924_5817;}
	{long i; for (i = 926; i < 957; i++) R28[i] = (char *(*)()) F927_5863;}
	R28[957] = (char *(*)()) F958_5876;
	R28[958] = (char *(*)()) F959_5876;
	{long i; for (i = 960; i < 964; i++) R28[i] = (char *(*)()) F1_25;}
	{long i; for (i = 968; i < 970; i++) R28[i] = (char *(*)()) F968_6105;}
	{long i; for (i = 971; i < 973; i++) R28[i] = (char *(*)()) F971_6270;}
	{long i; for (i = 973; i < 976; i++) R28[i] = (char *(*)()) F1_25;}
	{long i; for (i = 977; i < 983; i++) R28[i] = (char *(*)()) F1_25;}
	R28[983] = (char *(*)()) F984_6663;
	R28[984] = (char *(*)()) F1_25;
	R28[985] = (char *(*)()) F986_6710;
	{long i; for (i = 986; i < 988; i++) R28[i] = (char *(*)()) F1_25;}
	R28[988] = (char *(*)()) F989_6781;
	{long i; for (i = 989; i < 991; i++) R28[i] = (char *(*)()) F1_25;}
}

char *(*R759[3])();
void R759_init () {
	R759[0] = (char *(*)()) F185_2135;
	R759[1] = (char *(*)()) F186_2166;
	R759[2] = (char *(*)()) F187_2199;
}

char *(*R760[3])();
void R760_init () {
	R760[0] = (char *(*)()) F185_2155;
	R760[1] = (char *(*)()) F186_2185;
	R760[2] = (char *(*)()) F187_2211;
}

char *(*R763[3])();
void R763_init () {
	R763[0] = (char *(*)()) F185_2156;
	R763[1] = (char *(*)()) F186_2186;
	R763[2] = (char *(*)()) F187_2212;
}

char *(*R770[124])();
void R770_init () {
	R770[0] = (char *(*)()) F56_780;
	R770[123] = (char *(*)()) F179_2008;
}

char *(*R771[124])();
void R771_init () {
	R771[0] = (char *(*)()) F56_781;
	R771[123] = (char *(*)()) F179_2009;
}

char *(*R772[124])();
void R772_init () {
	R772[0] = (char *(*)()) F56_782;
	R772[123] = (char *(*)()) F179_2010;
}

char *(*R934[6])();
void R934_init () {
	R934[0] = (char *(*)()) F69_971;
	R934[1] = (char *(*)()) F70_971_934_1;
	R934[2] = (char *(*)()) F71_971_934_1;
	R934[3] = (char *(*)()) F72_971_934_1;
	R934[4] = (char *(*)()) F69_971;
	R934[5] = (char *(*)()) F70_971_934_1;
}
static EIF_REFERENCE F70_971_934_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_INTEGER_32 r = F70_971(Current);
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
static EIF_REFERENCE F71_971_934_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_NATURAL_64 r = F71_971(Current);
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
static EIF_REFERENCE F72_971_934_1 (EIF_REFERENCE Current)
{
	GTCX
	EIF_REFERENCE Result;
	int l_eif_optimize_return = eif_optimize_return;
	EIF_CHARACTER_32 r = F72_971(Current);
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

char *(*R935[6])();
void R935_init () {
	R935[0] = (char *(*)()) F69_972;
	R935[1] = (char *(*)()) F70_972_935_4;
	R935[2] = (char *(*)()) F71_972_935_4;
	R935[3] = (char *(*)()) F72_972_935_4;
	R935[4] = (char *(*)()) F69_972;
	R935[5] = (char *(*)()) F70_972_935_4;
}
static void F70_972_935_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F70_972(Current, *(EIF_INTEGER_32 *)arg1);
}
static void F71_972_935_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F71_972(Current, *(EIF_NATURAL_64 *)arg1);
}
static void F72_972_935_4 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	F72_972(Current, *(EIF_CHARACTER_32 *)arg1);
}

char *(*R939[2])();
void R939_init () {
	R939[0] = (char *(*)()) F73_975;
	R939[1] = (char *(*)()) F74_975;
}

char *(*R940[2])();
void R940_init () {
	R940[0] = (char *(*)()) F73_976;
	R940[1] = (char *(*)()) F74_976;
}

char *(*R1030[2])();
void R1030_init () {
	R1030[0] = (char *(*)()) F980_6546;
	R1030[1] = (char *(*)()) F981_6579;
}

char *(*R1043[907])();
void R1043_init () {
	R1043[0] = (char *(*)()) F83_1094;
	R1043[103] = (char *(*)()) F186_2167;
	{long i; for (i = 900; i < 902; i++) R1043[i] = (char *(*)()) F83_1094;}
	{long i; for (i = 904; i < 906; i++) R1043[i] = (char *(*)()) F83_1094;}
	R1043[906] = (char *(*)()) F86_1139;
}

char *(*R1044[907])();
void R1044_init () {
	R1044[0] = (char *(*)()) F83_1095;
	R1044[103] = (char *(*)()) F186_2168;
	{long i; for (i = 900; i < 902; i++) R1044[i] = (char *(*)()) F83_1095;}
	{long i; for (i = 904; i < 906; i++) R1044[i] = (char *(*)()) F83_1095;}
	R1044[906] = (char *(*)()) F86_1140;
}

char *(*R1045[907])();
void R1045_init () {
	R1045[0] = (char *(*)()) F83_1096;
	R1045[103] = (char *(*)()) F186_2169;
	{long i; for (i = 900; i < 902; i++) R1045[i] = (char *(*)()) F83_1096;}
	{long i; for (i = 904; i < 906; i++) R1045[i] = (char *(*)()) F83_1096;}
	R1045[906] = (char *(*)()) F86_1141;
}

char *(*R1046[907])();
void R1046_init () {
	R1046[0] = (char *(*)()) F83_1099;
	R1046[103] = (char *(*)()) F186_2170;
	{long i; for (i = 900; i < 902; i++) R1046[i] = (char *(*)()) F83_1099;}
	{long i; for (i = 904; i < 906; i++) R1046[i] = (char *(*)()) F83_1099;}
	R1046[906] = (char *(*)()) F86_1142;
}

char *(*R1075[805])();
void R1075_init () {
	R1075[0] = (char *(*)()) F185_2136;
	R1075[658] = (char *(*)()) F843_4443;
	{long i; for (i = 800; i < 804; i++) R1075[i] = (char *(*)()) F843_4443;}
	R1075[804] = (char *(*)()) F86_1138;
}

char *(*R1076[805])();
void R1076_init () {
	R1076[0] = (char *(*)()) F185_2137;
	R1076[658] = (char *(*)()) F843_4444;
	{long i; for (i = 800; i < 804; i++) R1076[i] = (char *(*)()) F843_4444;}
	R1076[804] = (char *(*)()) F86_1137;
}

char *(*R1077[805])();
void R1077_init () {
	R1077[0] = (char *(*)()) F185_2138;
	R1077[658] = (char *(*)()) F843_4445;
	{long i; for (i = 800; i < 804; i++) R1077[i] = (char *(*)()) F843_4445;}
	R1077[804] = (char *(*)()) F86_1136;
}

char *(*R1083[803])();
void R1083_init () {
	R1083[0] = (char *(*)()) F187_2196;
	R1083[802] = (char *(*)()) F989_6758;
}


#ifdef __cplusplus
}
#endif
