#pragma once

#include <stdbool.h>
#include <stdint.h>

#ifdef _WIN32

#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif

#ifndef NOMINMAX
#define NOMINMAX
#endif

#include <Windows.h>

typedef HRESULT result_t;

#else

typedef void* HANDLE;
typedef int32_t result_t;

#define CALLBACK
#define STDAPI STDAPI_(HRESULT)
#define STDAPI_(t) extern "C" t

#define S_OK (HRESULT)0

#endif
