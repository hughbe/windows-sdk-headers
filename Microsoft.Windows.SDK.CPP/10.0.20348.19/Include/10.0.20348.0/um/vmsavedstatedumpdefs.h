/*++

Copyright (c) Microsoft Corporation. All rights reserved.

Module Name:

    VmSavedStateDumpDefs.h

Abstract:

    This module contains the VmSavedSate Dump Provider definitions used by the APIs.

--*/

#ifndef _VMSAVEDSTATEDUMPDEFS_H_
#define _VMSAVEDSTATEDUMPDEFS_H_

#if defined(_MSC_VER) && (_MSC_VER >= 1200)
#pragma once
#endif

#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

#include <winapifamily.h>

typedef VOID* VM_SAVED_STATE_DUMP_HANDLE;

typedef UINT64 GUEST_VIRTUAL_ADDRESS;
typedef UINT64 GUEST_PHYSICAL_ADDRESS;

//
// Define paging modes
//
typedef enum PAGING_MODE
{
    Paging_Invalid = 0,
    Paging_NonPaged,
    Paging_32Bit,
    Paging_Pae,
    Paging_Long,
} PAGING_MODE;


//
// Define guest physical memory chunks
//
typedef struct GPA_MEMORY_CHUNK
{
    UINT64  GuestPhysicalStartPageIndex;
    UINT64  PageCount;
} GPA_MEMORY_CHUNK;


//
// Define Virtual Processors dump information
//

typedef enum VIRTUAL_PROCESSOR_ARCH
{
    Arch_Unknown = 0,
    Arch_x86,
    Arch_x64,
} VIRTUAL_PROCESSOR_ARCH;


//
// Define Processor Vendor dump information.
//

typedef enum
{
    ProcessorVendor_Unknown,
    ProcessorVendor_Amd,
    ProcessorVendor_Intel,
    ProcessorVendor_Hygon,

} VIRTUAL_PROCESSOR_VENDOR;


typedef enum REGISTER_ID_X86
{
    //
    // General Purpose Registers
    //

    X86_RegisterEax = 0,
    X86_RegisterEcx,
    X86_RegisterEdx,
    X86_RegisterEbx,
    X86_RegisterEsp,
    X86_RegisterEbp,
    X86_RegisterEsi,
    X86_RegisterEdi,
    X86_RegisterEip,
    X86_RegisterEFlags,

    //
    // Floating Point Registers
    //

    X86_RegisterLowXmm0,
    X86_RegisterHighXmm0,
    X86_RegisterLowXmm1,
    X86_RegisterHighXmm1,
    X86_RegisterLowXmm2,
    X86_RegisterHighXmm2,
    X86_RegisterLowXmm3,
    X86_RegisterHighXmm3,
    X86_RegisterLowXmm4,
    X86_RegisterHighXmm4,
    X86_RegisterLowXmm5,
    X86_RegisterHighXmm5,
    X86_RegisterLowXmm6,
    X86_RegisterHighXmm6,
    X86_RegisterLowXmm7,
    X86_RegisterHighXmm7,
    X86_RegisterLowXmm8,
    X86_RegisterHighXmm8,
    X86_RegisterLowXmm9,
    X86_RegisterHighXmm9,
    X86_RegisterLowXmm10,
    X86_RegisterHighXmm10,
    X86_RegisterLowXmm11,
    X86_RegisterHighXmm11,
    X86_RegisterLowXmm12,
    X86_RegisterHighXmm12,
    X86_RegisterLowXmm13,
    X86_RegisterHighXmm13,
    X86_RegisterLowXmm14,
    X86_RegisterHighXmm14,
    X86_RegisterLowXmm15,
    X86_RegisterHighXmm15,
    X86_RegisterLowXmmControlStatus,
    X86_RegisterHighXmmControlStatus,
    X86_RegisterLowFpControlStatus,
    X86_RegisterHighFpControlStatus,

    //
    // Control Registers
    //

    X86_RegisterCr0,
    X86_RegisterCr2,
    X86_RegisterCr3,
    X86_RegisterCr4,
    X86_RegisterCr8,
    X86_RegisterEfer,

    //
    // Debug Registers
    //

    X86_RegisterDr0,
    X86_RegisterDr1,
    X86_RegisterDr2,
    X86_RegisterDr3,
    X86_RegisterDr6,
    X86_RegisterDr7,

    //
    // Segment Registers
    //

    X86_RegisterBaseGs,
    X86_RegisterBaseFs,
    X86_RegisterSegCs,
    X86_RegisterSegDs,
    X86_RegisterSegEs,
    X86_RegisterSegFs,
    X86_RegisterSegGs,
    X86_RegisterSegSs,
    X86_RegisterTr,
    X86_RegisterLdtr,

    //
    // Table Registers
    //

    X86_RegisterBaseIdtr,
    X86_RegisterLimitIdtr,
    X86_RegisterBaseGdtr,
    X86_RegisterLimitGdtr,

    //
    // Register Count
    //

    X86_RegisterCount,
} REGISTER_ID_X86;


typedef enum REGISTER_ID_X64
{
    //
    // General Purpose Registers
    //

    X64_RegisterRax = 0,
    X64_RegisterRcx,
    X64_RegisterRdx,
    X64_RegisterRbx,
    X64_RegisterRsp,
    X64_RegisterRbp,
    X64_RegisterRsi,
    X64_RegisterRdi,
    X64_RegisterR8,
    X64_RegisterR9,
    X64_RegisterR10,
    X64_RegisterR11,
    X64_RegisterR12,
    X64_RegisterR13,
    X64_RegisterR14,
    X64_RegisterR15,
    X64_RegisterRip,
    X64_RegisterRFlags,

    //
    // Floating Point Registers
    //

    X64_RegisterLowXmm0,
    X64_RegisterHighXmm0,
    X64_RegisterLowXmm1,
    X64_RegisterHighXmm1,
    X64_RegisterLowXmm2,
    X64_RegisterHighXmm2,
    X64_RegisterLowXmm3,
    X64_RegisterHighXmm3,
    X64_RegisterLowXmm4,
    X64_RegisterHighXmm4,
    X64_RegisterLowXmm5,
    X64_RegisterHighXmm5,
    X64_RegisterLowXmm6,
    X64_RegisterHighXmm6,
    X64_RegisterLowXmm7,
    X64_RegisterHighXmm7,
    X64_RegisterLowXmm8,
    X64_RegisterHighXmm8,
    X64_RegisterLowXmm9,
    X64_RegisterHighXmm9,
    X64_RegisterLowXmm10,
    X64_RegisterHighXmm10,
    X64_RegisterLowXmm11,
    X64_RegisterHighXmm11,
    X64_RegisterLowXmm12,
    X64_RegisterHighXmm12,
    X64_RegisterLowXmm13,
    X64_RegisterHighXmm13,
    X64_RegisterLowXmm14,
    X64_RegisterHighXmm14,
    X64_RegisterLowXmm15,
    X64_RegisterHighXmm15,
    X64_RegisterLowXmmControlStatus,
    X64_RegisterHighXmmControlStatus,
    X64_RegisterLowFpControlStatus,
    X64_RegisterHighFpControlStatus,

    //
    // Control Registers
    //

    X64_RegisterCr0,
    X64_RegisterCr2,
    X64_RegisterCr3,
    X64_RegisterCr4,
    X64_RegisterCr8,
    X64_RegisterEfer,

    //
    // Debug Registers
    //

    X64_RegisterDr0,
    X64_RegisterDr1,
    X64_RegisterDr2,
    X64_RegisterDr3,
    X64_RegisterDr6,
    X64_RegisterDr7,

    //
    // Segment Registers
    //

    X64_RegisterBaseGs,
    X64_RegisterBaseFs,
    X64_RegisterSegCs,
    X64_RegisterSegDs,
    X64_RegisterSegEs,
    X64_RegisterSegFs,
    X64_RegisterSegGs,
    X64_RegisterSegSs,
    X64_RegisterTr,
    X64_RegisterLdtr,

    //
    // Table Registers
    //

    X64_RegisterBaseIdtr,
    X64_RegisterLimitIdtr,
    X64_RegisterBaseGdtr,
    X64_RegisterLimitGdtr,

    //
    // Register Count
    //

    X64_RegisterCount,
} REGISTER_ID_X64;


/// This struct, when used in a call to GetRegisterValue, its Architecture and RegisterId fields
/// are inputs and the register value is an output.
typedef struct VIRTUAL_PROCESSOR_REGISTER
{
    VIRTUAL_PROCESSOR_ARCH  Architecture;
    UINT64                  RegisterValue;
    union{
        DWORD               RegisterId;
        REGISTER_ID_X86     RegisterId_x86;
        REGISTER_ID_X64     RegisterId_x64;
    };
} VIRTUAL_PROCESSOR_REGISTER;


typedef struct _DOS_IMAGE_INFO
{
    LPCSTR PdbName;
    GUEST_VIRTUAL_ADDRESS ImageBaseAddress;
    DWORD ImageSize;
} DOS_IMAGE_INFO, *PDOS_IMAGE_INFO;


/// Function type for the guest symbol provider debug info callback.
///
/// \param InfoMessage  Supplies a debug info message.
///
typedef void (CALLBACK *GUEST_SYMBOLS_PROVIDER_DEBUG_INFO_CALLBACK)(_In_ LPCSTR InfoMessage);


/// Function type for the dos image scan callback.
///
/// \param ImageInfo  Supplies a found valid DOS image in the virtual address space.
///                   Do not assume the PdbName string's pointer will be valid after the callback has returned.
///
/// \return FALSE if the caller wants the scan to continue.
///         TRUE if the caller has found an image it was looking for and wishes to stop the scan.
///
typedef BOOL (CALLBACK *FOUND_IMAGE_CALLBACK)(_In_ PVOID Context, _In_ PDOS_IMAGE_INFO ImageInfo);


typedef struct _MODULE_INFO
{
    LPCSTR ProcessImageName;
    DOS_IMAGE_INFO Image;
} MODULE_INFO, *PMODULE_INFO;

#endif // WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
#pragma endregion

#endif // _VMSAVEDSTATEDUMPDEFS_H_
