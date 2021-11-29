 
//
// Copyright (c) Microsoft Corporation. All rights reserved.
//

//
// API Set Contract:
//
//    api-ms-win-gaming-expandedresources-l1-1-*
//
// Abstract:
//
//    This header file provides API function signatures for expanded resources / GameMode apps.
//

#ifdef MSC_VER
#pragma once
#endif

#ifndef _APISET_EXPANDEDRESOURCES_
#define _APISET_EXPANDEDRESOURCES_

#include <apiset.h>
#include <apisetcconv.h>
#ifdef _CONTRACT_GEN
#include <nt.h>
#include <ntrtl.h>
#include <nturtl.h>
#include <windows.h>
#endif

/* APISET_NAME: api-ms-win-gaming-expandedresources-l1 */
/* APISET_TAG: public */

#if !defined(RC_INVOKED)

#ifndef _APISET_GAMING_EXPANDEDRESOURCES_VER
#ifdef _APISET_TARGET_VERSION
#if _APISET_TARGET_VERSION >= _APISET_TARGET_VERSION_WIN10_RS2
#define _APISET_GAMING_EXPANDEDRESOURCES_VER 0x0100
#endif // #if _APISET_TARGET_VERSION
#endif // #ifdef _APISET_TARGET_VERSION
#endif

#endif // !defined(RC_INVOKED)
 // #ifndef _APISET_GAMING_EXPANDEDRESOURCES_VER


#if defined(__cplusplus)
extern "C" {
#endif

#pragma region Application Family

#if WINAPI_FAMILY == WINAPI_FAMILY_APP

HRESULT
WINAPI
HasExpandedResources(
    _Out_ BOOL * hasExpandedResources
    );


HRESULT
WINAPI
GetExpandedResourceExclusiveCpuCount(
    _Out_ ULONG * exclusiveCpuCount
    );


HRESULT
WINAPI
ReleaseExclusiveCpuSets(
    );


#endif // WINAPI_FAMILY == WINAPI_FAMILY_APP
#pragma endregion


#if defined(__cplusplus)
} // end extern "C"
#endif // defined(__cplusplus)

#endif // _APISET_EXPANDEDRESOURCES_

