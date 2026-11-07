/*
 * onnx_path.h - what ONNX_SESSION needs to hand a model path to ONNX Runtime.
 * ORTCHAR_T is wchar_t on Windows, so the path is widened there, and char
 * elsewhere, so UTF-8 goes straight through.
 *
 * Copyright (c) 2026 Larry Rix - MIT License
 */

#ifndef ONNX_PATH_H
#define ONNX_PATH_H

#include <stdlib.h>
#include "onnxruntime_c_api.h"

#if defined(_WIN32) || defined(EIF_WINDOWS)

#include <windows.h>

static OrtStatus* onnx_create_session(const OrtApi* api, OrtEnv* env, const char* utf8_path, OrtSessionOptions* opts, OrtSession** session)
{
    OrtStatus* status;
    int wlen = MultiByteToWideChar(CP_UTF8, 0, utf8_path, -1, NULL, 0);
    wchar_t* wpath = (wchar_t*)malloc(wlen * sizeof(wchar_t));
    MultiByteToWideChar(CP_UTF8, 0, utf8_path, -1, wpath, wlen);
    status = api->CreateSession(env, wpath, opts, session);
    free(wpath);
    return status;
}

#else

static OrtStatus* onnx_create_session(const OrtApi* api, OrtEnv* env, const char* utf8_path, OrtSessionOptions* opts, OrtSession** session)
{
    return api->CreateSession(env, utf8_path, opts, session);
}

#endif

#endif /* ONNX_PATH_H */
