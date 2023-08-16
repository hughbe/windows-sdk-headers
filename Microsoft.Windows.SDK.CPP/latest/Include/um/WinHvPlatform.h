/*++

Copyright (c) Microsoft Corporation.  All rights reserved.

Module Name:

    WinHvPlatform.ext

Abstract:

    ApiSet contract for the Windows Hypervisor User-Mode Platform APIs.

--*/

#ifndef _WINHVAPI_H_
#define _WINHVAPI_H_

#if defined(_MSC_VER) && (_MSC_VER >= 1200)
#pragma once
#endif

#include <apiset.h>
#include <apisetcconv.h>
#include <minwindef.h>
#include <winapifamily.h>

#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

#include <WinHvPlatformDefs.h>

#if defined(_AMD64_) || defined(_ARM64_)

#ifdef __cplusplus
extern "C" {
#endif

//
// Platform capabilities
//

//
// Memory Management
//

//
// Virtual Processors
//

#if defined(_AMD64_)
#if defined(NTDDI_VERSION) && (NTDDI_VERSION >= NTDDI_WIN10_VB)
#pragma deprecated("WHvGetVirtualProcessorInterruptControllerState is deprecated; use WHvGetVirtualProcessorInterruptControllerState2")
#endif

#endif

#if defined(_AMD64_)
#if defined(NTDDI_VERSION) && (NTDDI_VERSION >= NTDDI_WIN10_VB)
#pragma deprecated("WHvSetVirtualProcessorInterruptControllerState is deprecated; use WHvSetVirtualProcessorInterruptControllerState2")
#endif

#endif

#if defined(_AMD64_)

#endif

#if defined(_AMD64_)
#if defined(NTDDI_VERSION) && (NTDDI_VERSION >= NTDDI_WIN10_FE)
#pragma deprecated("WHvGetVirtualProcessorXsaveState is deprecated; use WHvGetVirtualProcessorState")
#endif

#endif

#if defined(_AMD64_)
#if defined(NTDDI_VERSION) && (NTDDI_VERSION >= NTDDI_WIN10_FE)
#pragma deprecated("WHvSetVirtualProcessorXsaveState is deprecated; use WHvSetVirtualProcessorState")
#endif

#endif

#if defined(_AMD64_)
#if defined(NTDDI_VERSION) && (NTDDI_VERSION >= NTDDI_WIN10_FE)
#pragma deprecated("WHvGetVirtualProcessorInterruptControllerState2 is deprecated; use WHvGetVirtualProcessorState")
#endif

#endif

#if defined(_AMD64_)
#if defined(NTDDI_VERSION) && (NTDDI_VERSION >= NTDDI_WIN10_FE)
#pragma deprecated("WHvSetVirtualProcessorInterruptControllerState2 is deprecated; use WHvSetVirtualProcessorState")
#endif

#endif

#if defined(NTDDI_VERSION) && (NTDDI_VERSION >= NTDDI_WIN10_FE)
#pragma deprecated("WHvRegisterPartitionDoorbellEvent is deprecated; use WHvCreateNotificationPort")
#endif

#if defined(NTDDI_VERSION) && (NTDDI_VERSION >= NTDDI_WIN10_FE)
#pragma deprecated("WHvRegisterPartitionDoorbellEvent is deprecated; use WHvDeleteNotificationPort")
#endif

#if defined(_AMD64_)

#endif

#if defined(_AMD64_)

#endif

//
// Virtual PCI
//

//
// Trigger
//

//
// Notification ports
//

#if defined(_AMD64_)

#endif

#if defined(_AMD64_)

#endif

#ifdef __cplusplus
}
#endif

#endif // defined(_AMD64_) || defined(_ARM64_)

#endif // WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
#pragma endregion

#endif // _WINHVAPI_H_

#ifndef ext_ms_win_hyperv_hvplatform_l1_1_5_query_routines
#define ext_ms_win_hyperv_hvplatform_l1_1_5_query_routines

//
//Private Extension API Query Routines
//

#ifdef __cplusplus
extern "C" {
#endif

#if defined(_AMD64_) || defined(_ARM64_)

#if defined(_AMD64_)

#if defined(NTDDI_VERSION) && (NTDDI_VERSION >= NTDDI_WIN10_VB)

#endif

#endif

#if defined(_AMD64_)

#if defined(NTDDI_VERSION) && (NTDDI_VERSION >= NTDDI_WIN10_VB)

#endif

#endif

#if defined(_AMD64_)

#endif

#if defined(_AMD64_)

#if defined(NTDDI_VERSION) && (NTDDI_VERSION >= NTDDI_WIN10_FE)

#endif

#endif

#if defined(_AMD64_)

#if defined(NTDDI_VERSION) && (NTDDI_VERSION >= NTDDI_WIN10_FE)

#endif

#endif

#if defined(_AMD64_)

#if defined(NTDDI_VERSION) && (NTDDI_VERSION >= NTDDI_WIN10_FE)

#endif

#endif

#if defined(_AMD64_)

#if defined(NTDDI_VERSION) && (NTDDI_VERSION >= NTDDI_WIN10_FE)

#endif

#endif

#if defined(NTDDI_VERSION) && (NTDDI_VERSION >= NTDDI_WIN10_FE)

#endif

#if defined(NTDDI_VERSION) && (NTDDI_VERSION >= NTDDI_WIN10_FE)

#endif

#if defined(_AMD64_)

#endif

#if defined(_AMD64_)

#endif

#if defined(_AMD64_)

#endif

#if defined(_AMD64_)

#endif

#endif // defined(_AMD64_) || defined(_ARM64_)

#ifdef __cplusplus
}
#endif

#endif // endof guard

