 
/********************************************************************************
*                                                                               *
* consoleapi.h -- ApiSet Contract for api-ms-win-core-systemtopology-l1         *
*                                                                               *
* Copyright (c) Microsoft Corporation. All rights reserved.                     *
*                                                                               *
********************************************************************************/

#ifdef _MSC_VER
#pragma once
#endif // _MSC_VER

#ifndef _SYSTEMTOPOLOGY_H_
#define _SYSTEMTOPOLOGY_H_

#include <apiset.h>
#include <apisetcconv.h>
#include <minwindef.h>
#include <minwinbase.h>

/* APISET_NAME: api-ms-win-core-systemtopology-l1 */

#ifndef _APISET_SYSTEMTOPOLOGY_VER
#ifdef _APISET_MINCORE_VERSION
#if _APISET_MINCORE_VERSION >= 0x0100
#define _APISET_SYSTEMTOPOLOGY_VER 0x0100
#endif
#endif
#endif

#ifdef __cplusplus
extern "C" {
#endif

#pragma region Desktop Family

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

WINBASEAPI
BOOL
WINAPI
GetNumaHighestNodeNumber(
    _Out_ PULONG HighestNodeNumber
    );



#if _WIN32_WINNT >= 0x0601

WINBASEAPI
BOOL
WINAPI
GetNumaNodeProcessorMaskEx(
    _In_ USHORT Node,
    _Out_ PGROUP_AFFINITY ProcessorMask
    );


#endif // (_WIN32_WINNT >=0x0601)

#endif // WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#pragma endregion

#ifdef __cplusplus
}
#endif

#endif // _SYSTEMTOPOLOGY_H_
