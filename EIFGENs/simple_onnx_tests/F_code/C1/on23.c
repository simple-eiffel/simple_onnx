/*
 * Code for class ONNX_PROVIDER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "on23.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ONNX_PROVIDER}.make */
void F8_385 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("make", 7, Current, 0, 1, 383);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("name_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("name_not_empty", EX_PRE);
		tb1 = (nstcall = 1, F567_3452(RTCW(arg1)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("valid_provider", EX_PRE);
		tb1 = (nstcall = 0, F8_396(Current, arg1));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tr1 = (nstcall = 1, F1_14(arg1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("name_set", EX_POST);
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
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {ONNX_PROVIDER}.name */
EIF_REFERENCE F8_386 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {ONNX_PROVIDER}.requires_gpu */
EIF_BOOLEAN F8_387 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("requires_gpu", 7, Current, 0, 0, 385);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = '\01';
	tb2 = '\01';
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = RTMS_EX_H("CUDA",4,1129661505);
	tb3 = (nstcall = 1, F968_6096(RTCW(tr1), tr2));
	if (!tb3) {
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = RTMS_EX_H("TensorRT",8,1401717844);
		tb3 = (nstcall = 1, F968_6096(RTCW(tr1), tr2));
		tb2 = tb3;
	}
	if (!tb2) {
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = RTMS_EX_H("MIGRAPHX",8,1488688984);
		tb2 = (nstcall = 1, F968_6096(RTCW(tr1), tr2));
		tb1 = tb2;
	}
	Result = (EIF_BOOLEAN) tb1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("definition", EX_POST);
		tb1 = '\01';
		tb2 = '\01';
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = RTMS_EX_H("CUDA",4,1129661505);
		tb3 = (nstcall = 1, F968_6096(RTCW(tr1), tr2));
		if (!tb3) {
			tr1 = *(EIF_REFERENCE *)(Current);
			tr2 = RTMS_EX_H("TensorRT",8,1401717844);
			tb3 = (nstcall = 1, F968_6096(RTCW(tr1), tr2));
			tb2 = tb3;
		}
		if (!tb2) {
			tr1 = *(EIF_REFERENCE *)(Current);
			tr2 = RTMS_EX_H("MIGRAPHX",8,1488688984);
			tb2 = (nstcall = 1, F968_6096(RTCW(tr1), tr2));
			tb1 = tb2;
		}
		if ((EIF_BOOLEAN)(Result == tb1)) {
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

/* {ONNX_PROVIDER}.is_cpu */
EIF_BOOLEAN F8_388 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("is_cpu", 7, Current, 0, 0, 386);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = RTMS_EX_H("CPU",3,4411477);
	tb1 = (nstcall = 1, F968_6096(RTCW(tr1), tr2));
	Result = (EIF_BOOLEAN) tb1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("definition", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = RTMS_EX_H("CPU",3,4411477);
		tb1 = (nstcall = 1, F968_6096(RTCW(tr1), tr2));
		if ((EIF_BOOLEAN)(Result == tb1)) {
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

/* {ONNX_PROVIDER}.cpu_provider */

EIF_REFERENCE F8_389 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (124,RTMS_EX_H("CPUExecutionProvider",20,248855666));
}

/* {ONNX_PROVIDER}.cuda_provider */

EIF_REFERENCE F8_390 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (125,RTMS_EX_H("CUDAExecutionProvider",21,1017017458));
}

/* {ONNX_PROVIDER}.tensorrt_provider */

EIF_REFERENCE F8_391 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (126,RTMS_EX_H("TensorrtExecutionProvider",25,2013146738));
}

/* {ONNX_PROVIDER}.directml_provider */

EIF_REFERENCE F8_392 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (127,RTMS_EX_H("DmlExecutionProvider",20,1973718898));
}

/* {ONNX_PROVIDER}.opencl_provider */

EIF_REFERENCE F8_393 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (128,RTMS_EX_H("OpenCLExecutionProvider",23,1782505074));
}

/* {ONNX_PROVIDER}.migraphx_provider */

EIF_REFERENCE F8_394 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (129,RTMS_EX_H("MIGraphXExecutionProvider",25,1782777202));
}

/* {ONNX_PROVIDER}.coreml_provider */

EIF_REFERENCE F8_395 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (130,RTMS_EX_H("CoreMLExecutionProvider",23,365716338));
}

/* {ONNX_PROVIDER}.is_valid_provider */
EIF_BOOLEAN F8_396 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	EIF_BOOLEAN tb6;
	EIF_BOOLEAN tb7;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("is_valid_provider", 7, Current, 0, 1, 394);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = '\01';
	tb2 = '\01';
	tb3 = '\01';
	tb4 = '\01';
	tb5 = '\01';
	tb6 = '\01';
	tr1 = (nstcall = 0, F8_389(Current));
	tb7 = (nstcall = 1, F968_6088(RTCW(arg1), tr1));
	if (!tb7) {
		tr1 = (nstcall = 0, F8_390(Current));
		tb7 = (nstcall = 1, F968_6088(RTCW(arg1), tr1));
		tb6 = tb7;
	}
	if (!tb6) {
		tr1 = (nstcall = 0, F8_391(Current));
		tb6 = (nstcall = 1, F968_6088(RTCW(arg1), tr1));
		tb5 = tb6;
	}
	if (!tb5) {
		tr1 = (nstcall = 0, F8_392(Current));
		tb5 = (nstcall = 1, F968_6088(RTCW(arg1), tr1));
		tb4 = tb5;
	}
	if (!tb4) {
		tr1 = (nstcall = 0, F8_393(Current));
		tb4 = (nstcall = 1, F968_6088(RTCW(arg1), tr1));
		tb3 = tb4;
	}
	if (!tb3) {
		tr1 = (nstcall = 0, F8_394(Current));
		tb3 = (nstcall = 1, F968_6088(RTCW(arg1), tr1));
		tb2 = tb3;
	}
	if (!tb2) {
		tr1 = (nstcall = 0, F8_395(Current));
		tb2 = (nstcall = 1, F968_6088(RTCW(arg1), tr1));
		tb1 = tb2;
	}
	Result = (EIF_BOOLEAN) tb1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("definition", EX_POST);
		tb1 = '\01';
		tb2 = '\01';
		tb3 = '\01';
		tb4 = '\01';
		tb5 = '\01';
		tb6 = '\01';
		tr1 = (nstcall = 0, F8_389(Current));
		tb7 = (nstcall = 1, F968_6088(RTCW(arg1), tr1));
		if (!tb7) {
			tr1 = (nstcall = 0, F8_390(Current));
			tb7 = (nstcall = 1, F968_6088(RTCW(arg1), tr1));
			tb6 = tb7;
		}
		if (!tb6) {
			tr1 = (nstcall = 0, F8_391(Current));
			tb6 = (nstcall = 1, F968_6088(RTCW(arg1), tr1));
			tb5 = tb6;
		}
		if (!tb5) {
			tr1 = (nstcall = 0, F8_392(Current));
			tb5 = (nstcall = 1, F968_6088(RTCW(arg1), tr1));
			tb4 = tb5;
		}
		if (!tb4) {
			tr1 = (nstcall = 0, F8_393(Current));
			tb4 = (nstcall = 1, F968_6088(RTCW(arg1), tr1));
			tb3 = tb4;
		}
		if (!tb3) {
			tr1 = (nstcall = 0, F8_394(Current));
			tb3 = (nstcall = 1, F968_6088(RTCW(arg1), tr1));
			tb2 = tb3;
		}
		if (!tb2) {
			tr1 = (nstcall = 0, F8_395(Current));
			tb2 = (nstcall = 1, F968_6088(RTCW(arg1), tr1));
			tb1 = tb2;
		}
		if ((EIF_BOOLEAN)(Result == tb1)) {
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

/* {ONNX_PROVIDER}._invariant */
void F8_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTEAINV(l_feature_name, 22, Current, 0, 0);
	RTIT("name_not_void", Current);
	tr1 = *(EIF_REFERENCE *)(Current);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("name_not_empty", Current);
	tr1 = *(EIF_REFERENCE *)(Current);
	tb1 = (nstcall = 1, F567_3452(RTCW(tr1)));
	if ((EIF_BOOLEAN) !tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit23 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
