#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif


void eif_scr7 (call_data * a)
{
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) (a -> address)) (a -> target, a -> argument [0].it_i4);
}

void eif_scr5 (call_data * a)
{
	*(EIF_REFERENCE *)(a -> result) = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) (a -> address)) (a -> target);
}

void eif_sca5 (call_data * a)
{
	*(EIF_REFERENCE *)(a -> result) = *(EIF_REFERENCE *) (a->target + a->offset);
}

void eif_scr4 (call_data * a)
{
	*(EIF_BOOLEAN *)(a -> result) = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) (a -> address)) (a -> target);
}

void eif_sca4 (call_data * a)
{
	*(EIF_BOOLEAN *)(a -> result) = *(EIF_BOOLEAN *) (a->target + a->offset);
}

void eif_scr1 (call_data * a)
{
	*(EIF_INTEGER_32 *)(a -> result) = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) (a -> address)) (a -> target);
}

void eif_sca1 (call_data * a)
{
	*(EIF_INTEGER_32 *)(a -> result) = *(EIF_INTEGER_32 *) (a->target + a->offset);
}

void eif_scr3 (call_data * a)
{
	*(EIF_REFERENCE *)(a -> result) = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) (a -> address)) (a -> target, a -> argument [0].it_i4);
}

void eif_scr11 (call_data * a)
{
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) (a -> address)) (a -> target, a -> argument [0].it_r);
}

void eif_scr10 (call_data * a)
{
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_REFERENCE)) (a -> address)) (a -> target, a -> argument [0].it_i4, a -> argument [1].it_r);
}

void eif_scr9 (call_data * a)
{
	*(EIF_CHARACTER_32 *)(a -> result) = (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) (a -> address)) (a -> target, a -> argument [0].it_i4);
}

void eif_scr13 (call_data * a)
{
	*(EIF_POINTER *)(a -> result) = (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) (a -> address)) (a -> target);
}

void eif_sca13 (call_data * a)
{
	*(EIF_POINTER *)(a -> result) = *(EIF_POINTER *) (a->target + a->offset);
}

void eif_scr2 (call_data * a)
{
	*(EIF_NATURAL_8 *)(a -> result) = (FUNCTION_CAST(EIF_NATURAL_8, (EIF_REFERENCE, EIF_INTEGER_32)) (a -> address)) (a -> target, a -> argument [0].it_i4);
}

void eif_scr6 (call_data * a)
{
	(FUNCTION_CAST(void, (EIF_REFERENCE)) (a -> address)) (a -> target);
}

void eif_scr8 (call_data * a)
{
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_BOOLEAN)) (a -> address)) (a -> target, a -> argument [0].it_b);
}

void eif_scr12 (call_data * a)
{
	*(EIF_CHARACTER_8 *)(a -> result) = (FUNCTION_CAST(EIF_CHARACTER_8, (EIF_REFERENCE, EIF_INTEGER_32)) (a -> address)) (a -> target, a -> argument [0].it_i4);
}

#ifdef __cplusplus
}
#endif
