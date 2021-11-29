 
//
// Copyright (c) Microsoft Corporation. All rights reserved.
//

//
// API Set Contract:
//
//    api-ms-win-gaming-gamemonitor-l1-1-*
//
// Abstract:
//
//    This header file provides API function signatures for game monitoring.
//

#ifdef MSC_VER
#pragma once
#endif

#ifndef _APISET_GAMEMONITOR_
#define _APISET_GAMEMONITOR_

#include <apiset.h>
#include <apisetcconv.h>
#ifdef _CONTRACT_GEN
#include <nt.h>
#include <ntrtl.h>
#include <nturtl.h>
#include <windows.h>
#endif

/* APISET_NAME: api-ms-win-gaming-gamemonitor-l1 */
/* APISET_TAG: public */

#if !defined(RC_INVOKED)

#ifndef _APISET_GAMING_GAMEMONITOR_VER
#ifdef _APISET_TARGET_VERSION
#if _APISET_TARGET_VERSION >= _APISET_TARGET_VERSION_WIN10_RS2
#define _APISET_GAMING_GAMEMONITOR_VER 0x0100
#endif // #if _APISET_TARGET_VERSION
#endif // #ifdef _APISET_TARGET_VERSION
#endif

#endif // !defined(RC_INVOKED)
 // #ifndef _APISET_GAMING_GAMEMONITOR_VER


#if defined(__cplusplus)
extern "C" {
#endif

#pragma region Application Family

#if WINAPI_FAMILY == WINAPI_FAMILY_APP

VOID
WINAPI
ReportGameActivity(
    );


VOID
WINAPI
EnableActiveGameMonitoring(
    BOOL activeMonitoring
    );


VOID
WINAPI
SetGameActivityCorrelationId(
    _In_z_ PCWSTR id
    );


#endif // WINAPI_FAMILY == WINAPI_FAMILY_APP
#pragma endregion


#if defined(__cplusplus)
} // end extern "C"
#endif // defined(__cplusplus)

#endif // _APISET_GAMEMONITOR_

