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

typedef enum GAME_MONITORING_PERMISSION_STATE
{
    GAME_MONITORING_ALLOWED          = 0,
    GAME_MONITORING_DENIED_BY_USER   = 1,
    GAME_MONITORING_DENIED_BY_SYSTEM = 2,
    GAME_MONITORING_NOT_SUPPORTED    = 3
} GAME_MONITORING_PERMISSION_STATE;

#pragma region Application Family
#if WINAPI_FAMILY == WINAPI_FAMILY_APP

STDAPI
GetGameMonitoringPermissionState(
    _Out_ GAME_MONITORING_PERMISSION_STATE* permissionState
    );


#endif // WINAPI_FAMILY == WINAPI_FAMILY_APP
#pragma endregion

#if defined(__cplusplus)
} // end extern "C"
#endif // defined(__cplusplus)

#endif // _APISET_GAMEMONITOR_

