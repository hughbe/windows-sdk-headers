 
/********************************************************
*                                                       *
*   Copyright (C) 2010 Microsoft. All rights reserved.  *
*                                                       *
********************************************************/
//
// API Set Contract:
//
//    API-MS-Win-AppModel-Runtime-L1-1-0
//
// Abstract:
//
//    This header file provides API function signatures and
//    corollary type declarations for the Windows AppModel
//    Runtime component.
//
//    Windows-internals clients of the AppModel Runtime
//    should include this header from $(BASE_INC_PATH) and
//    link against the component's API set import library
//    API-MS-Win-AppModel-Runtime-L1-1-0.lib published in
//    $(BASE_LIB_PATH).
//
//


#if defined(_MSC_VER)

#if _MSC_VER > 1000
#pragma once
#endif
#endif // defined(_MSC_VER)


#if defined(_CONTRACT_GEN)
#include <nt.h>
#include <minwindef.h>
#endif // defined(_CONTRACT_GEN)

/* APISET_NAME: api-ms-win-appmodel-runtime-l1 */

#ifndef _APISET_VERSION_VER
#ifdef _APISET_CLIENTCORE_VERSION
#if _APISET_CLIENTCORE_VERSION >= 0x0100
#define _APISET_VERSION_VER 0x0100
#endif
#endif
#endif

#pragma region Desktop Family

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)


#if defined(_MSC_VER)

#if _MSC_VER >= 1200
#pragma warning(push)
#endif
#pragma warning(disable:4201) /* nonstandard extension used : nameless struct/union */
#endif // defined(_MSC_VER)

#include <minappmodel.h>


#if defined(__cplusplus)
extern "C" {
#endif

// Identity Types
#include <pshpack4.h>

typedef struct PACKAGE_VERSION {
    union {
        UINT64 Version;
        struct {
            USHORT Revision;
            USHORT Build;
            USHORT Minor;
            USHORT Major;
        } DUMMYSTRUCTNAME;
    } DUMMYUNIONNAME;
} PACKAGE_VERSION;

typedef struct PACKAGE_ID {
    UINT32          reserved;
    UINT32          processorArchitecture;
    PACKAGE_VERSION version;
    PWSTR           name;
    PWSTR           publisher;
    PWSTR           resourceId;
    PWSTR           publisherId;
} PACKAGE_ID;

#include <poppack.h>

// Identity Functions

WINBASEAPI
_Success_(return == ERROR_SUCCESS)
LONG
WINAPI
GetCurrentPackageId(
    _Inout_ UINT32 * bufferLength,
    _Out_writes_bytes_opt_(*bufferLength) BYTE * buffer
    );


WINBASEAPI
_Success_(return == ERROR_SUCCESS)
LONG
WINAPI
GetCurrentPackageFullName(
    _Inout_ UINT32 * packageFullNameLength,
    _Out_writes_opt_(*packageFullNameLength) PWSTR packageFullName
    );


WINBASEAPI
_Success_(return == ERROR_SUCCESS)
LONG
WINAPI
GetCurrentPackageFamilyName(
    _Inout_ UINT32 * packageFamilyNameLength,
    _Out_writes_opt_(*packageFamilyNameLength) PWSTR packageFamilyName
    );


WINBASEAPI
_Success_(return == ERROR_SUCCESS)
LONG
WINAPI
GetCurrentPackagePath(
    _Inout_ UINT32 * pathLength,
    _Out_writes_opt_(*pathLength) PWSTR path
    );


WINBASEAPI
_Success_(return == ERROR_SUCCESS)
LONG
WINAPI
GetPackageId(
    _In_ HANDLE hProcess,
    _Inout_ UINT32 * bufferLength,
    _Out_writes_bytes_opt_(*bufferLength) BYTE * buffer
    );


WINBASEAPI
_Success_(return == ERROR_SUCCESS)
LONG
WINAPI
GetPackageFullName(
    _In_ HANDLE hProcess,
    _Inout_ UINT32 * packageFullNameLength,
    _Out_writes_opt_(*packageFullNameLength) PWSTR packageFullName
    );


WINBASEAPI
_Success_(return == ERROR_SUCCESS)
LONG
WINAPI
GetPackageFamilyName(
    _In_ HANDLE hProcess,
    _Inout_ UINT32 * packageFamilyNameLength,
    _Out_writes_opt_(*packageFamilyNameLength) PWSTR packageFamilyName
    );


WINBASEAPI
_Success_(return == ERROR_SUCCESS)
LONG
WINAPI
GetPackagePath(
    _In_ const PACKAGE_ID * packageId,
    _Reserved_ const UINT32 reserved,
    _Inout_ UINT32 * pathLength,
    _Out_writes_opt_(*pathLength) PWSTR path
    );


/* ---------------------------------------------------------------- */

// Application Identity Functions

WINBASEAPI
_Success_(return == ERROR_SUCCESS)
LONG
WINAPI
GetCurrentApplicationUserModelId(
    _Inout_ UINT32 * applicationUserModelIdLength,
    _Out_writes_opt_(*applicationUserModelIdLength) PWSTR applicationUserModelId
    );


WINBASEAPI
_Success_(return == ERROR_SUCCESS)
LONG
WINAPI
GetApplicationUserModelId(
    _In_ HANDLE hProcess,
    _Inout_ UINT32 * applicationUserModelIdLength,
    _Out_writes_opt_(*applicationUserModelIdLength) PWSTR applicationUserModelId
    );


/* ---------------------------------------------------------------- */

// Conversion Functions

WINBASEAPI
_Check_return_ _Success_(return == ERROR_SUCCESS)
LONG
WINAPI
PackageIdFromFullName(
    _In_ PCWSTR packageFullName,
    _In_ const UINT32 flags,
    _Inout_ UINT32 * bufferLength,
    _Out_writes_bytes_opt_(*bufferLength) BYTE * buffer
    );


WINBASEAPI
_Check_return_ _Success_(return == ERROR_SUCCESS)
LONG
WINAPI
PackageFullNameFromId(
    _In_ const PACKAGE_ID * packageId,
    _Inout_ UINT32 * packageFullNameLength,
    _Out_writes_opt_(*packageFullNameLength) PWSTR packageFullName
    );


WINBASEAPI
_Check_return_ _Success_(return == ERROR_SUCCESS)
LONG
WINAPI
PackageFamilyNameFromId(
    _In_ const PACKAGE_ID * packageId,
    _Inout_ UINT32 * packageFamilyNameLength,
    _Out_writes_opt_(*packageFamilyNameLength) PWSTR packageFamilyName
    );


WINBASEAPI
_Check_return_ _Success_(return == ERROR_SUCCESS)
LONG
WINAPI
PackageFamilyNameFromFullName(
    _In_ PCWSTR packageFullName,
    _Inout_ UINT32 * packageFamilyNameLength,
    _Out_writes_opt_(*packageFamilyNameLength) PWSTR packageFamilyName
    );


WINBASEAPI
_Check_return_ _Success_(return == ERROR_SUCCESS)
LONG
WINAPI
PackageNameAndPublisherIdFromFamilyName(
    _In_ PCWSTR packageFamilyName,
    _Inout_ UINT32 * packageNameLength,
    _Out_writes_opt_(*packageNameLength) PWSTR packageName,
    _Inout_ UINT32 * packagePublisherIdLength,
    _Out_writes_opt_(*packagePublisherIdLength) PWSTR packagePublisherId
    );


/* ---------------------------------------------------------------- */

// Lookup Functions

WINBASEAPI
_Check_return_ _Success_(return == ERROR_SUCCESS)
LONG
WINAPI
GetPackagesByPackageFamily(
    _In_ PCWSTR packageFamilyName,
    _Inout_ UINT32 * count,
    _Out_writes_opt_(*count) PWSTR * packageMonikers,
    _Inout_ UINT32 * bufferLength,
    _Out_writes_opt_(*bufferLength) WCHAR * buffer
    );


/* ---------------------------------------------------------------- */

// Package Constants

#define PACKAGE_PROPERTY_FRAMEWORK     0x00000001
#define PACKAGE_FILTER_ALL_LOADED      0x00000000
#define PACKAGE_FILTER_HEAD            0x00000010
#define PACKAGE_FILTER_DIRECT          0x00000020
#define PACKAGE_INFORMATION_BASIC      0x00000000
#define PACKAGE_INFORMATION_FULL       0x00000100

// Dependency Types

typedef struct _PACKAGE_INFO_REFERENCE {
    void * reserved;
} * PACKAGE_INFO_REFERENCE;

#include <pshpack4.h>

typedef struct PACKAGE_INFO {
    UINT32     reserved;
    UINT32     flags;
    PWSTR      path;
    PWSTR      packageFullName;
    PWSTR      packageFamilyName;
    PACKAGE_ID packageId;
} PACKAGE_INFO;

#include <poppack.h>

// Dependency Functions

WINBASEAPI
_Success_(return == ERROR_SUCCESS)
LONG
WINAPI
GetCurrentPackageInfo(
    _In_ const UINT32 flags,
    _Inout_ UINT32 * bufferLength,
    _Out_writes_bytes_opt_(*bufferLength) BYTE * buffer,
    _Out_opt_ UINT32 * count
    );


WINBASEAPI
_Success_(return == ERROR_SUCCESS)
LONG
WINAPI
OpenPackageInfoByFullName(
    _In_ PCWSTR packageFullName,
    _Reserved_ const UINT32 reserved,
    _Out_ PACKAGE_INFO_REFERENCE * packageInfoReference
    );


WINBASEAPI
_Success_(return == ERROR_SUCCESS)
LONG
WINAPI
ClosePackageInfo(
    _In_ PACKAGE_INFO_REFERENCE packageInfoReference
    );


WINBASEAPI
_Success_(return == ERROR_SUCCESS)
LONG
WINAPI
GetPackageInfo(
    _In_ PACKAGE_INFO_REFERENCE packageInfoReference,
    _In_ const UINT32 flags,
    _Inout_ UINT32 * bufferLength,
    _Out_writes_bytes_opt_(*bufferLength) BYTE * buffer,
    _Out_opt_ UINT32 * count
    );



#if defined(__cplusplus)
} // end extern "C"
#endif // defined(__cplusplus)


#if defined(_MSC_VER)

#if _MSC_VER >= 1200
#pragma warning(pop)
#endif
#endif // defined(_MSC_VER)

#endif // WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#pragma endregion
