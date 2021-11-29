 
/********************************************************************************
*                                                                               *
* srpapi.h -- ApiSet Contract for ext-ms-win-security-srp-l1                    *
*                                                                               *
* Copyright (c) Microsoft Corporation. All rights reserved.                     *
*                                                                               *
********************************************************************************/
#ifndef _APISETSRPEXT_
#define _APISETSRPEXT_

#include <apiset.h>
#include <apisetcconv.h>

#ifdef _CONTRACT_GEN                                   // Header(s) needed for contract generation only.
#include <nt.h>
#include <ntrtl.h>
#include <nturtl.h>
#include <apiquery.h>
#include <Windows.h>
#include <nlsp.h>
#include <nls.h>
#include <setupapi.h>
#include <cfgmgr32.h>
#include <winsafer.h>
#endif

#include <minwindef.h>
#include <minwinbase.h>

/* APISET_NAME: ext-ms-win-security-srp-l1 */

#if !defined(RC_INVOKED)

#ifndef _APISET_MS_WIN_SECURITY_SRP_L1_VER
#ifdef _APISET_TARGET_VERSION
#if _APISET_TARGET_VERSION >= _APISET_TARGET_VERSION_WINTHRESHOLD
#define _APISET_MS_WIN_SECURITY_SRP_L1_VER 0x0100
#endif
#endif
#endif

#endif // !defined(RC_INVOKED)



#if _MSC_VER > 1000
#pragma once
#endif

#define HR_PROC_NOT_FOUND HRESULT_FROM_WIN32(ERROR_PROC_NOT_FOUND)

#pragma region Desktop Family

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)


#if (_WIN32_WINNT >= _WIN32_WINNT_WINTHRESHOLD)

typedef struct HTHREAD_NETWORK_CONTEXT
{
    DWORD ThreadId;
    HANDLE ThreadContext;
} HTHREAD_NETWORK_CONTEXT;

#ifdef __cplusplus
extern "C" {
#endif

STDAPI
SrpCreateThreadNetworkContext(
    _In_ PCWSTR enterpriseId,
    _Out_ HTHREAD_NETWORK_CONTEXT * threadNetworkContext
    );


STDAPI
SrpCloseThreadNetworkContext(
    _Inout_ HTHREAD_NETWORK_CONTEXT * threadNetworkContext
    );


STDAPI
SrpSetTokenEnterpriseId(
    _In_ HANDLE tokenHandle,
    _In_opt_ PCWSTR enterpriseId
    );

    
STDAPI
SrpGetEnterpriseIds(
    _In_ HANDLE tokenHandle,
    _Inout_opt_ PULONG numberOfBytes,
    _Out_writes_bytes_opt_(*numberOfBytes) PCWSTR * enterpriseIds,
    _Out_ PULONG enterpriseIdCount
    );


STDAPI
SrpEnablePermissiveModeFileEncryption(
    _In_opt_ PCWSTR enterpriseId
    );


STDAPI
SrpDisablePermissiveModeFileEncryption(
    VOID
    );


#ifdef __cplusplus
}
#endif

#endif /* _WIN32_WINNT >= _WIN32_WINNT_WINTHRESHOLD */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion

#pragma region Application Family

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)


#if (_WIN32_WINNT >= _WIN32_WINNT_WINTHRESHOLD)

#include <appmodel.h>

#ifdef __cplusplus
extern "C" {
#endif

STDAPI
SrpDoesPolicyAllowAppExecution(
    _In_ const PACKAGE_ID * packageId,
    _Out_ BOOL * isAllowed
    );

    
#ifdef __cplusplus
}
#endif

#endif /* _WIN32_WINNT >= _WIN32_WINNT_WINTHRESHOLD */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP) */
#pragma endregion

#endif // APISETSRPEXT

#ifndef ext_ms_win_security_srp_l1_1_0_query_routines
#define ext_ms_win_security_srp_l1_1_0_query_routines



//
//Private Extension API Query Routines
//

#ifdef __cplusplus
extern "C" {
#endif

#if (_WIN32_WINNT >= _WIN32_WINNT_WINTHRESHOLD)


BOOLEAN
__stdcall
IsSrpCreateThreadNetworkContextPresent(
    VOID
    );

BOOLEAN
__stdcall
IsSrpCloseThreadNetworkContextPresent(
    VOID
    );

BOOLEAN
__stdcall
IsSrpSetTokenEnterpriseIdPresent(
    VOID
    );

BOOLEAN
__stdcall
IsSrpGetEnterpriseIdsPresent(
    VOID
    );

BOOLEAN
__stdcall
IsSrpEnablePermissiveModeFileEncryptionPresent(
    VOID
    );

BOOLEAN
__stdcall
IsSrpDisablePermissiveModeFileEncryptionPresent(
    VOID
    );

#endif

#if (_WIN32_WINNT >= _WIN32_WINNT_WINTHRESHOLD)


BOOLEAN
__stdcall
IsSrpDoesPolicyAllowAppExecutionPresent(
    VOID
    );

#endif

#ifdef __cplusplus
}
#endif

#endif // endof guard

