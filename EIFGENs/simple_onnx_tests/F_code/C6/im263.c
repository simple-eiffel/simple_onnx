/*
 * Code for class IMMUTABLE_STRING_GENERAL
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "im263.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {IMMUTABLE_STRING_GENERAL}.is_immutable */
EIF_BOOLEAN F966_6025 (EIF_REFERENCE Current)
{
	return (EIF_BOOLEAN) EIF_TRUE;
}

/* {IMMUTABLE_STRING_GENERAL}._invariant */
void F966_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTEAINV(l_feature_name, 262, Current, 0, 0);
	RTLE;
	RTEE;
}

void EIF_Minit263 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
