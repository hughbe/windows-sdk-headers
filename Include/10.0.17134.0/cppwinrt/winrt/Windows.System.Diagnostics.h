﻿// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Data.Json.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.System.2.h"
#include "winrt/impl/Windows.System.Diagnostics.2.h"
#include "winrt/Windows.System.h"

namespace winrt::impl {

template <typename D> HRESULT consume_Windows_System_Diagnostics_IDiagnosticActionResult<D>::ExtendedError() const
{
    HRESULT value{};
    check_hresult(WINRT_SHIM(Windows::System::Diagnostics::IDiagnosticActionResult)->get_ExtendedError(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::ValueSet consume_Windows_System_Diagnostics_IDiagnosticActionResult<D>::Results() const
{
    Windows::Foundation::Collections::ValueSet value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::Diagnostics::IDiagnosticActionResult)->get_Results(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::System::Diagnostics::DiagnosticActionResult, Windows::System::Diagnostics::DiagnosticActionState> consume_Windows_System_Diagnostics_IDiagnosticInvoker<D>::RunDiagnosticActionAsync(Windows::Data::Json::JsonObject const& context) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::System::Diagnostics::DiagnosticActionResult, Windows::System::Diagnostics::DiagnosticActionState> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::Diagnostics::IDiagnosticInvoker)->RunDiagnosticActionAsync(get_abi(context), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::System::Diagnostics::DiagnosticActionResult, Windows::System::Diagnostics::DiagnosticActionState> consume_Windows_System_Diagnostics_IDiagnosticInvoker2<D>::RunDiagnosticActionFromStringAsync(param::hstring const& context) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::System::Diagnostics::DiagnosticActionResult, Windows::System::Diagnostics::DiagnosticActionState> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::Diagnostics::IDiagnosticInvoker2)->RunDiagnosticActionFromStringAsync(get_abi(context), put_abi(operation)));
    return operation;
}

template <typename D> Windows::System::Diagnostics::DiagnosticInvoker consume_Windows_System_Diagnostics_IDiagnosticInvokerStatics<D>::GetDefault() const
{
    Windows::System::Diagnostics::DiagnosticInvoker result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::Diagnostics::IDiagnosticInvokerStatics)->GetDefault(put_abi(result)));
    return result;
}

template <typename D> Windows::System::Diagnostics::DiagnosticInvoker consume_Windows_System_Diagnostics_IDiagnosticInvokerStatics<D>::GetForUser(Windows::System::User const& user) const
{
    Windows::System::Diagnostics::DiagnosticInvoker result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::Diagnostics::IDiagnosticInvokerStatics)->GetForUser(get_abi(user), put_abi(result)));
    return result;
}

template <typename D> bool consume_Windows_System_Diagnostics_IDiagnosticInvokerStatics<D>::IsSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::System::Diagnostics::IDiagnosticInvokerStatics)->get_IsSupported(&value));
    return value;
}

template <typename D> Windows::System::Diagnostics::ProcessCpuUsageReport consume_Windows_System_Diagnostics_IProcessCpuUsage<D>::GetReport() const
{
    Windows::System::Diagnostics::ProcessCpuUsageReport value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::Diagnostics::IProcessCpuUsage)->GetReport(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_System_Diagnostics_IProcessCpuUsageReport<D>::KernelTime() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::System::Diagnostics::IProcessCpuUsageReport)->get_KernelTime(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_System_Diagnostics_IProcessCpuUsageReport<D>::UserTime() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::System::Diagnostics::IProcessCpuUsageReport)->get_UserTime(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_System_Diagnostics_IProcessDiagnosticInfo<D>::ProcessId() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::System::Diagnostics::IProcessDiagnosticInfo)->get_ProcessId(&value));
    return value;
}

template <typename D> hstring consume_Windows_System_Diagnostics_IProcessDiagnosticInfo<D>::ExecutableFileName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::System::Diagnostics::IProcessDiagnosticInfo)->get_ExecutableFileName(put_abi(value)));
    return value;
}

template <typename D> Windows::System::Diagnostics::ProcessDiagnosticInfo consume_Windows_System_Diagnostics_IProcessDiagnosticInfo<D>::Parent() const
{
    Windows::System::Diagnostics::ProcessDiagnosticInfo value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::Diagnostics::IProcessDiagnosticInfo)->get_Parent(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_System_Diagnostics_IProcessDiagnosticInfo<D>::ProcessStartTime() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::System::Diagnostics::IProcessDiagnosticInfo)->get_ProcessStartTime(put_abi(value)));
    return value;
}

template <typename D> Windows::System::Diagnostics::ProcessDiskUsage consume_Windows_System_Diagnostics_IProcessDiagnosticInfo<D>::DiskUsage() const
{
    Windows::System::Diagnostics::ProcessDiskUsage value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::Diagnostics::IProcessDiagnosticInfo)->get_DiskUsage(put_abi(value)));
    return value;
}

template <typename D> Windows::System::Diagnostics::ProcessMemoryUsage consume_Windows_System_Diagnostics_IProcessDiagnosticInfo<D>::MemoryUsage() const
{
    Windows::System::Diagnostics::ProcessMemoryUsage value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::Diagnostics::IProcessDiagnosticInfo)->get_MemoryUsage(put_abi(value)));
    return value;
}

template <typename D> Windows::System::Diagnostics::ProcessCpuUsage consume_Windows_System_Diagnostics_IProcessDiagnosticInfo<D>::CpuUsage() const
{
    Windows::System::Diagnostics::ProcessCpuUsage value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::Diagnostics::IProcessDiagnosticInfo)->get_CpuUsage(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::System::AppDiagnosticInfo> consume_Windows_System_Diagnostics_IProcessDiagnosticInfo2<D>::GetAppDiagnosticInfos() const
{
    Windows::Foundation::Collections::IVector<Windows::System::AppDiagnosticInfo> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::Diagnostics::IProcessDiagnosticInfo2)->GetAppDiagnosticInfos(put_abi(result)));
    return result;
}

template <typename D> bool consume_Windows_System_Diagnostics_IProcessDiagnosticInfo2<D>::IsPackaged() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::System::Diagnostics::IProcessDiagnosticInfo2)->get_IsPackaged(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::System::Diagnostics::ProcessDiagnosticInfo> consume_Windows_System_Diagnostics_IProcessDiagnosticInfoStatics<D>::GetForProcesses() const
{
    Windows::Foundation::Collections::IVectorView<Windows::System::Diagnostics::ProcessDiagnosticInfo> processes{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::Diagnostics::IProcessDiagnosticInfoStatics)->GetForProcesses(put_abi(processes)));
    return processes;
}

template <typename D> Windows::System::Diagnostics::ProcessDiagnosticInfo consume_Windows_System_Diagnostics_IProcessDiagnosticInfoStatics<D>::GetForCurrentProcess() const
{
    Windows::System::Diagnostics::ProcessDiagnosticInfo processes{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::Diagnostics::IProcessDiagnosticInfoStatics)->GetForCurrentProcess(put_abi(processes)));
    return processes;
}

template <typename D> Windows::System::Diagnostics::ProcessDiagnosticInfo consume_Windows_System_Diagnostics_IProcessDiagnosticInfoStatics2<D>::TryGetForProcessId(uint32_t processId) const
{
    Windows::System::Diagnostics::ProcessDiagnosticInfo result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::Diagnostics::IProcessDiagnosticInfoStatics2)->TryGetForProcessId(processId, put_abi(result)));
    return result;
}

template <typename D> Windows::System::Diagnostics::ProcessDiskUsageReport consume_Windows_System_Diagnostics_IProcessDiskUsage<D>::GetReport() const
{
    Windows::System::Diagnostics::ProcessDiskUsageReport value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::Diagnostics::IProcessDiskUsage)->GetReport(put_abi(value)));
    return value;
}

template <typename D> int64_t consume_Windows_System_Diagnostics_IProcessDiskUsageReport<D>::ReadOperationCount() const
{
    int64_t value{};
    check_hresult(WINRT_SHIM(Windows::System::Diagnostics::IProcessDiskUsageReport)->get_ReadOperationCount(&value));
    return value;
}

template <typename D> int64_t consume_Windows_System_Diagnostics_IProcessDiskUsageReport<D>::WriteOperationCount() const
{
    int64_t value{};
    check_hresult(WINRT_SHIM(Windows::System::Diagnostics::IProcessDiskUsageReport)->get_WriteOperationCount(&value));
    return value;
}

template <typename D> int64_t consume_Windows_System_Diagnostics_IProcessDiskUsageReport<D>::OtherOperationCount() const
{
    int64_t value{};
    check_hresult(WINRT_SHIM(Windows::System::Diagnostics::IProcessDiskUsageReport)->get_OtherOperationCount(&value));
    return value;
}

template <typename D> int64_t consume_Windows_System_Diagnostics_IProcessDiskUsageReport<D>::BytesReadCount() const
{
    int64_t value{};
    check_hresult(WINRT_SHIM(Windows::System::Diagnostics::IProcessDiskUsageReport)->get_BytesReadCount(&value));
    return value;
}

template <typename D> int64_t consume_Windows_System_Diagnostics_IProcessDiskUsageReport<D>::BytesWrittenCount() const
{
    int64_t value{};
    check_hresult(WINRT_SHIM(Windows::System::Diagnostics::IProcessDiskUsageReport)->get_BytesWrittenCount(&value));
    return value;
}

template <typename D> int64_t consume_Windows_System_Diagnostics_IProcessDiskUsageReport<D>::OtherBytesCount() const
{
    int64_t value{};
    check_hresult(WINRT_SHIM(Windows::System::Diagnostics::IProcessDiskUsageReport)->get_OtherBytesCount(&value));
    return value;
}

template <typename D> Windows::System::Diagnostics::ProcessMemoryUsageReport consume_Windows_System_Diagnostics_IProcessMemoryUsage<D>::GetReport() const
{
    Windows::System::Diagnostics::ProcessMemoryUsageReport value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::Diagnostics::IProcessMemoryUsage)->GetReport(put_abi(value)));
    return value;
}

template <typename D> uint64_t consume_Windows_System_Diagnostics_IProcessMemoryUsageReport<D>::NonPagedPoolSizeInBytes() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::System::Diagnostics::IProcessMemoryUsageReport)->get_NonPagedPoolSizeInBytes(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_System_Diagnostics_IProcessMemoryUsageReport<D>::PageFaultCount() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::System::Diagnostics::IProcessMemoryUsageReport)->get_PageFaultCount(&value));
    return value;
}

template <typename D> uint64_t consume_Windows_System_Diagnostics_IProcessMemoryUsageReport<D>::PageFileSizeInBytes() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::System::Diagnostics::IProcessMemoryUsageReport)->get_PageFileSizeInBytes(&value));
    return value;
}

template <typename D> uint64_t consume_Windows_System_Diagnostics_IProcessMemoryUsageReport<D>::PagedPoolSizeInBytes() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::System::Diagnostics::IProcessMemoryUsageReport)->get_PagedPoolSizeInBytes(&value));
    return value;
}

template <typename D> uint64_t consume_Windows_System_Diagnostics_IProcessMemoryUsageReport<D>::PeakNonPagedPoolSizeInBytes() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::System::Diagnostics::IProcessMemoryUsageReport)->get_PeakNonPagedPoolSizeInBytes(&value));
    return value;
}

template <typename D> uint64_t consume_Windows_System_Diagnostics_IProcessMemoryUsageReport<D>::PeakPageFileSizeInBytes() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::System::Diagnostics::IProcessMemoryUsageReport)->get_PeakPageFileSizeInBytes(&value));
    return value;
}

template <typename D> uint64_t consume_Windows_System_Diagnostics_IProcessMemoryUsageReport<D>::PeakPagedPoolSizeInBytes() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::System::Diagnostics::IProcessMemoryUsageReport)->get_PeakPagedPoolSizeInBytes(&value));
    return value;
}

template <typename D> uint64_t consume_Windows_System_Diagnostics_IProcessMemoryUsageReport<D>::PeakVirtualMemorySizeInBytes() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::System::Diagnostics::IProcessMemoryUsageReport)->get_PeakVirtualMemorySizeInBytes(&value));
    return value;
}

template <typename D> uint64_t consume_Windows_System_Diagnostics_IProcessMemoryUsageReport<D>::PeakWorkingSetSizeInBytes() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::System::Diagnostics::IProcessMemoryUsageReport)->get_PeakWorkingSetSizeInBytes(&value));
    return value;
}

template <typename D> uint64_t consume_Windows_System_Diagnostics_IProcessMemoryUsageReport<D>::PrivatePageCount() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::System::Diagnostics::IProcessMemoryUsageReport)->get_PrivatePageCount(&value));
    return value;
}

template <typename D> uint64_t consume_Windows_System_Diagnostics_IProcessMemoryUsageReport<D>::VirtualMemorySizeInBytes() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::System::Diagnostics::IProcessMemoryUsageReport)->get_VirtualMemorySizeInBytes(&value));
    return value;
}

template <typename D> uint64_t consume_Windows_System_Diagnostics_IProcessMemoryUsageReport<D>::WorkingSetSizeInBytes() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::System::Diagnostics::IProcessMemoryUsageReport)->get_WorkingSetSizeInBytes(&value));
    return value;
}

template <typename D> Windows::System::Diagnostics::SystemCpuUsageReport consume_Windows_System_Diagnostics_ISystemCpuUsage<D>::GetReport() const
{
    Windows::System::Diagnostics::SystemCpuUsageReport value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::Diagnostics::ISystemCpuUsage)->GetReport(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_System_Diagnostics_ISystemCpuUsageReport<D>::KernelTime() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::System::Diagnostics::ISystemCpuUsageReport)->get_KernelTime(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_System_Diagnostics_ISystemCpuUsageReport<D>::UserTime() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::System::Diagnostics::ISystemCpuUsageReport)->get_UserTime(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_System_Diagnostics_ISystemCpuUsageReport<D>::IdleTime() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::System::Diagnostics::ISystemCpuUsageReport)->get_IdleTime(put_abi(value)));
    return value;
}

template <typename D> Windows::System::Diagnostics::SystemMemoryUsage consume_Windows_System_Diagnostics_ISystemDiagnosticInfo<D>::MemoryUsage() const
{
    Windows::System::Diagnostics::SystemMemoryUsage value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::Diagnostics::ISystemDiagnosticInfo)->get_MemoryUsage(put_abi(value)));
    return value;
}

template <typename D> Windows::System::Diagnostics::SystemCpuUsage consume_Windows_System_Diagnostics_ISystemDiagnosticInfo<D>::CpuUsage() const
{
    Windows::System::Diagnostics::SystemCpuUsage value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::Diagnostics::ISystemDiagnosticInfo)->get_CpuUsage(put_abi(value)));
    return value;
}

template <typename D> Windows::System::Diagnostics::SystemDiagnosticInfo consume_Windows_System_Diagnostics_ISystemDiagnosticInfoStatics<D>::GetForCurrentSystem() const
{
    Windows::System::Diagnostics::SystemDiagnosticInfo value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::Diagnostics::ISystemDiagnosticInfoStatics)->GetForCurrentSystem(put_abi(value)));
    return value;
}

template <typename D> Windows::System::Diagnostics::SystemMemoryUsageReport consume_Windows_System_Diagnostics_ISystemMemoryUsage<D>::GetReport() const
{
    Windows::System::Diagnostics::SystemMemoryUsageReport value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::Diagnostics::ISystemMemoryUsage)->GetReport(put_abi(value)));
    return value;
}

template <typename D> uint64_t consume_Windows_System_Diagnostics_ISystemMemoryUsageReport<D>::TotalPhysicalSizeInBytes() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::System::Diagnostics::ISystemMemoryUsageReport)->get_TotalPhysicalSizeInBytes(&value));
    return value;
}

template <typename D> uint64_t consume_Windows_System_Diagnostics_ISystemMemoryUsageReport<D>::AvailableSizeInBytes() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::System::Diagnostics::ISystemMemoryUsageReport)->get_AvailableSizeInBytes(&value));
    return value;
}

template <typename D> uint64_t consume_Windows_System_Diagnostics_ISystemMemoryUsageReport<D>::CommittedSizeInBytes() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::System::Diagnostics::ISystemMemoryUsageReport)->get_CommittedSizeInBytes(&value));
    return value;
}

template <typename D>
struct produce<D, Windows::System::Diagnostics::IDiagnosticActionResult> : produce_base<D, Windows::System::Diagnostics::IDiagnosticActionResult>
{
    HRESULT __stdcall get_ExtendedError(HRESULT* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<HRESULT>(this->shim().ExtendedError());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Results(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::ValueSet>(this->shim().Results());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::Diagnostics::IDiagnosticInvoker> : produce_base<D, Windows::System::Diagnostics::IDiagnosticInvoker>
{
    HRESULT __stdcall RunDiagnosticActionAsync(void* context, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperationWithProgress<Windows::System::Diagnostics::DiagnosticActionResult, Windows::System::Diagnostics::DiagnosticActionState>>(this->shim().RunDiagnosticActionAsync(*reinterpret_cast<Windows::Data::Json::JsonObject const*>(&context)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::Diagnostics::IDiagnosticInvoker2> : produce_base<D, Windows::System::Diagnostics::IDiagnosticInvoker2>
{
    HRESULT __stdcall RunDiagnosticActionFromStringAsync(HSTRING context, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperationWithProgress<Windows::System::Diagnostics::DiagnosticActionResult, Windows::System::Diagnostics::DiagnosticActionState>>(this->shim().RunDiagnosticActionFromStringAsync(*reinterpret_cast<hstring const*>(&context)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::Diagnostics::IDiagnosticInvokerStatics> : produce_base<D, Windows::System::Diagnostics::IDiagnosticInvokerStatics>
{
    HRESULT __stdcall GetDefault(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::System::Diagnostics::DiagnosticInvoker>(this->shim().GetDefault());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetForUser(void* user, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::System::Diagnostics::DiagnosticInvoker>(this->shim().GetForUser(*reinterpret_cast<Windows::System::User const*>(&user)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsSupported(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsSupported());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::Diagnostics::IProcessCpuUsage> : produce_base<D, Windows::System::Diagnostics::IProcessCpuUsage>
{
    HRESULT __stdcall GetReport(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::System::Diagnostics::ProcessCpuUsageReport>(this->shim().GetReport());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::Diagnostics::IProcessCpuUsageReport> : produce_base<D, Windows::System::Diagnostics::IProcessCpuUsageReport>
{
    HRESULT __stdcall get_KernelTime(Windows::Foundation::TimeSpan* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().KernelTime());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_UserTime(Windows::Foundation::TimeSpan* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().UserTime());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::Diagnostics::IProcessDiagnosticInfo> : produce_base<D, Windows::System::Diagnostics::IProcessDiagnosticInfo>
{
    HRESULT __stdcall get_ProcessId(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().ProcessId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ExecutableFileName(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ExecutableFileName());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Parent(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::System::Diagnostics::ProcessDiagnosticInfo>(this->shim().Parent());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ProcessStartTime(Windows::Foundation::DateTime* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::DateTime>(this->shim().ProcessStartTime());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DiskUsage(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::System::Diagnostics::ProcessDiskUsage>(this->shim().DiskUsage());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MemoryUsage(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::System::Diagnostics::ProcessMemoryUsage>(this->shim().MemoryUsage());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CpuUsage(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::System::Diagnostics::ProcessCpuUsage>(this->shim().CpuUsage());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::Diagnostics::IProcessDiagnosticInfo2> : produce_base<D, Windows::System::Diagnostics::IProcessDiagnosticInfo2>
{
    HRESULT __stdcall GetAppDiagnosticInfos(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::Collections::IVector<Windows::System::AppDiagnosticInfo>>(this->shim().GetAppDiagnosticInfos());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsPackaged(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsPackaged());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::Diagnostics::IProcessDiagnosticInfoStatics> : produce_base<D, Windows::System::Diagnostics::IProcessDiagnosticInfoStatics>
{
    HRESULT __stdcall GetForProcesses(void** processes) noexcept final
    {
        try
        {
            *processes = nullptr;
            typename D::abi_guard guard(this->shim());
            *processes = detach_from<Windows::Foundation::Collections::IVectorView<Windows::System::Diagnostics::ProcessDiagnosticInfo>>(this->shim().GetForProcesses());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetForCurrentProcess(void** processes) noexcept final
    {
        try
        {
            *processes = nullptr;
            typename D::abi_guard guard(this->shim());
            *processes = detach_from<Windows::System::Diagnostics::ProcessDiagnosticInfo>(this->shim().GetForCurrentProcess());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::Diagnostics::IProcessDiagnosticInfoStatics2> : produce_base<D, Windows::System::Diagnostics::IProcessDiagnosticInfoStatics2>
{
    HRESULT __stdcall TryGetForProcessId(uint32_t processId, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::System::Diagnostics::ProcessDiagnosticInfo>(this->shim().TryGetForProcessId(processId));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::Diagnostics::IProcessDiskUsage> : produce_base<D, Windows::System::Diagnostics::IProcessDiskUsage>
{
    HRESULT __stdcall GetReport(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::System::Diagnostics::ProcessDiskUsageReport>(this->shim().GetReport());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::Diagnostics::IProcessDiskUsageReport> : produce_base<D, Windows::System::Diagnostics::IProcessDiskUsageReport>
{
    HRESULT __stdcall get_ReadOperationCount(int64_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int64_t>(this->shim().ReadOperationCount());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_WriteOperationCount(int64_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int64_t>(this->shim().WriteOperationCount());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_OtherOperationCount(int64_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int64_t>(this->shim().OtherOperationCount());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_BytesReadCount(int64_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int64_t>(this->shim().BytesReadCount());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_BytesWrittenCount(int64_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int64_t>(this->shim().BytesWrittenCount());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_OtherBytesCount(int64_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int64_t>(this->shim().OtherBytesCount());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::Diagnostics::IProcessMemoryUsage> : produce_base<D, Windows::System::Diagnostics::IProcessMemoryUsage>
{
    HRESULT __stdcall GetReport(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::System::Diagnostics::ProcessMemoryUsageReport>(this->shim().GetReport());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::Diagnostics::IProcessMemoryUsageReport> : produce_base<D, Windows::System::Diagnostics::IProcessMemoryUsageReport>
{
    HRESULT __stdcall get_NonPagedPoolSizeInBytes(uint64_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint64_t>(this->shim().NonPagedPoolSizeInBytes());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PageFaultCount(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().PageFaultCount());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PageFileSizeInBytes(uint64_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint64_t>(this->shim().PageFileSizeInBytes());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PagedPoolSizeInBytes(uint64_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint64_t>(this->shim().PagedPoolSizeInBytes());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PeakNonPagedPoolSizeInBytes(uint64_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint64_t>(this->shim().PeakNonPagedPoolSizeInBytes());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PeakPageFileSizeInBytes(uint64_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint64_t>(this->shim().PeakPageFileSizeInBytes());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PeakPagedPoolSizeInBytes(uint64_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint64_t>(this->shim().PeakPagedPoolSizeInBytes());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PeakVirtualMemorySizeInBytes(uint64_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint64_t>(this->shim().PeakVirtualMemorySizeInBytes());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PeakWorkingSetSizeInBytes(uint64_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint64_t>(this->shim().PeakWorkingSetSizeInBytes());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PrivatePageCount(uint64_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint64_t>(this->shim().PrivatePageCount());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_VirtualMemorySizeInBytes(uint64_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint64_t>(this->shim().VirtualMemorySizeInBytes());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_WorkingSetSizeInBytes(uint64_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint64_t>(this->shim().WorkingSetSizeInBytes());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::Diagnostics::ISystemCpuUsage> : produce_base<D, Windows::System::Diagnostics::ISystemCpuUsage>
{
    HRESULT __stdcall GetReport(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::System::Diagnostics::SystemCpuUsageReport>(this->shim().GetReport());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::Diagnostics::ISystemCpuUsageReport> : produce_base<D, Windows::System::Diagnostics::ISystemCpuUsageReport>
{
    HRESULT __stdcall get_KernelTime(Windows::Foundation::TimeSpan* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().KernelTime());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_UserTime(Windows::Foundation::TimeSpan* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().UserTime());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IdleTime(Windows::Foundation::TimeSpan* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().IdleTime());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::Diagnostics::ISystemDiagnosticInfo> : produce_base<D, Windows::System::Diagnostics::ISystemDiagnosticInfo>
{
    HRESULT __stdcall get_MemoryUsage(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::System::Diagnostics::SystemMemoryUsage>(this->shim().MemoryUsage());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CpuUsage(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::System::Diagnostics::SystemCpuUsage>(this->shim().CpuUsage());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::Diagnostics::ISystemDiagnosticInfoStatics> : produce_base<D, Windows::System::Diagnostics::ISystemDiagnosticInfoStatics>
{
    HRESULT __stdcall GetForCurrentSystem(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::System::Diagnostics::SystemDiagnosticInfo>(this->shim().GetForCurrentSystem());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::Diagnostics::ISystemMemoryUsage> : produce_base<D, Windows::System::Diagnostics::ISystemMemoryUsage>
{
    HRESULT __stdcall GetReport(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::System::Diagnostics::SystemMemoryUsageReport>(this->shim().GetReport());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::Diagnostics::ISystemMemoryUsageReport> : produce_base<D, Windows::System::Diagnostics::ISystemMemoryUsageReport>
{
    HRESULT __stdcall get_TotalPhysicalSizeInBytes(uint64_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint64_t>(this->shim().TotalPhysicalSizeInBytes());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AvailableSizeInBytes(uint64_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint64_t>(this->shim().AvailableSizeInBytes());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CommittedSizeInBytes(uint64_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint64_t>(this->shim().CommittedSizeInBytes());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::System::Diagnostics {

inline Windows::System::Diagnostics::DiagnosticInvoker DiagnosticInvoker::GetDefault()
{
    return get_activation_factory<DiagnosticInvoker, Windows::System::Diagnostics::IDiagnosticInvokerStatics>().GetDefault();
}

inline Windows::System::Diagnostics::DiagnosticInvoker DiagnosticInvoker::GetForUser(Windows::System::User const& user)
{
    return get_activation_factory<DiagnosticInvoker, Windows::System::Diagnostics::IDiagnosticInvokerStatics>().GetForUser(user);
}

inline bool DiagnosticInvoker::IsSupported()
{
    return get_activation_factory<DiagnosticInvoker, Windows::System::Diagnostics::IDiagnosticInvokerStatics>().IsSupported();
}

inline Windows::Foundation::Collections::IVectorView<Windows::System::Diagnostics::ProcessDiagnosticInfo> ProcessDiagnosticInfo::GetForProcesses()
{
    return get_activation_factory<ProcessDiagnosticInfo, Windows::System::Diagnostics::IProcessDiagnosticInfoStatics>().GetForProcesses();
}

inline Windows::System::Diagnostics::ProcessDiagnosticInfo ProcessDiagnosticInfo::GetForCurrentProcess()
{
    return get_activation_factory<ProcessDiagnosticInfo, Windows::System::Diagnostics::IProcessDiagnosticInfoStatics>().GetForCurrentProcess();
}

inline Windows::System::Diagnostics::ProcessDiagnosticInfo ProcessDiagnosticInfo::TryGetForProcessId(uint32_t processId)
{
    return get_activation_factory<ProcessDiagnosticInfo, Windows::System::Diagnostics::IProcessDiagnosticInfoStatics2>().TryGetForProcessId(processId);
}

inline Windows::System::Diagnostics::SystemDiagnosticInfo SystemDiagnosticInfo::GetForCurrentSystem()
{
    return get_activation_factory<SystemDiagnosticInfo, Windows::System::Diagnostics::ISystemDiagnosticInfoStatics>().GetForCurrentSystem();
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::System::Diagnostics::IDiagnosticActionResult> : winrt::impl::hash_base<winrt::Windows::System::Diagnostics::IDiagnosticActionResult> {};
template<> struct hash<winrt::Windows::System::Diagnostics::IDiagnosticInvoker> : winrt::impl::hash_base<winrt::Windows::System::Diagnostics::IDiagnosticInvoker> {};
template<> struct hash<winrt::Windows::System::Diagnostics::IDiagnosticInvoker2> : winrt::impl::hash_base<winrt::Windows::System::Diagnostics::IDiagnosticInvoker2> {};
template<> struct hash<winrt::Windows::System::Diagnostics::IDiagnosticInvokerStatics> : winrt::impl::hash_base<winrt::Windows::System::Diagnostics::IDiagnosticInvokerStatics> {};
template<> struct hash<winrt::Windows::System::Diagnostics::IProcessCpuUsage> : winrt::impl::hash_base<winrt::Windows::System::Diagnostics::IProcessCpuUsage> {};
template<> struct hash<winrt::Windows::System::Diagnostics::IProcessCpuUsageReport> : winrt::impl::hash_base<winrt::Windows::System::Diagnostics::IProcessCpuUsageReport> {};
template<> struct hash<winrt::Windows::System::Diagnostics::IProcessDiagnosticInfo> : winrt::impl::hash_base<winrt::Windows::System::Diagnostics::IProcessDiagnosticInfo> {};
template<> struct hash<winrt::Windows::System::Diagnostics::IProcessDiagnosticInfo2> : winrt::impl::hash_base<winrt::Windows::System::Diagnostics::IProcessDiagnosticInfo2> {};
template<> struct hash<winrt::Windows::System::Diagnostics::IProcessDiagnosticInfoStatics> : winrt::impl::hash_base<winrt::Windows::System::Diagnostics::IProcessDiagnosticInfoStatics> {};
template<> struct hash<winrt::Windows::System::Diagnostics::IProcessDiagnosticInfoStatics2> : winrt::impl::hash_base<winrt::Windows::System::Diagnostics::IProcessDiagnosticInfoStatics2> {};
template<> struct hash<winrt::Windows::System::Diagnostics::IProcessDiskUsage> : winrt::impl::hash_base<winrt::Windows::System::Diagnostics::IProcessDiskUsage> {};
template<> struct hash<winrt::Windows::System::Diagnostics::IProcessDiskUsageReport> : winrt::impl::hash_base<winrt::Windows::System::Diagnostics::IProcessDiskUsageReport> {};
template<> struct hash<winrt::Windows::System::Diagnostics::IProcessMemoryUsage> : winrt::impl::hash_base<winrt::Windows::System::Diagnostics::IProcessMemoryUsage> {};
template<> struct hash<winrt::Windows::System::Diagnostics::IProcessMemoryUsageReport> : winrt::impl::hash_base<winrt::Windows::System::Diagnostics::IProcessMemoryUsageReport> {};
template<> struct hash<winrt::Windows::System::Diagnostics::ISystemCpuUsage> : winrt::impl::hash_base<winrt::Windows::System::Diagnostics::ISystemCpuUsage> {};
template<> struct hash<winrt::Windows::System::Diagnostics::ISystemCpuUsageReport> : winrt::impl::hash_base<winrt::Windows::System::Diagnostics::ISystemCpuUsageReport> {};
template<> struct hash<winrt::Windows::System::Diagnostics::ISystemDiagnosticInfo> : winrt::impl::hash_base<winrt::Windows::System::Diagnostics::ISystemDiagnosticInfo> {};
template<> struct hash<winrt::Windows::System::Diagnostics::ISystemDiagnosticInfoStatics> : winrt::impl::hash_base<winrt::Windows::System::Diagnostics::ISystemDiagnosticInfoStatics> {};
template<> struct hash<winrt::Windows::System::Diagnostics::ISystemMemoryUsage> : winrt::impl::hash_base<winrt::Windows::System::Diagnostics::ISystemMemoryUsage> {};
template<> struct hash<winrt::Windows::System::Diagnostics::ISystemMemoryUsageReport> : winrt::impl::hash_base<winrt::Windows::System::Diagnostics::ISystemMemoryUsageReport> {};
template<> struct hash<winrt::Windows::System::Diagnostics::DiagnosticActionResult> : winrt::impl::hash_base<winrt::Windows::System::Diagnostics::DiagnosticActionResult> {};
template<> struct hash<winrt::Windows::System::Diagnostics::DiagnosticInvoker> : winrt::impl::hash_base<winrt::Windows::System::Diagnostics::DiagnosticInvoker> {};
template<> struct hash<winrt::Windows::System::Diagnostics::ProcessCpuUsage> : winrt::impl::hash_base<winrt::Windows::System::Diagnostics::ProcessCpuUsage> {};
template<> struct hash<winrt::Windows::System::Diagnostics::ProcessCpuUsageReport> : winrt::impl::hash_base<winrt::Windows::System::Diagnostics::ProcessCpuUsageReport> {};
template<> struct hash<winrt::Windows::System::Diagnostics::ProcessDiagnosticInfo> : winrt::impl::hash_base<winrt::Windows::System::Diagnostics::ProcessDiagnosticInfo> {};
template<> struct hash<winrt::Windows::System::Diagnostics::ProcessDiskUsage> : winrt::impl::hash_base<winrt::Windows::System::Diagnostics::ProcessDiskUsage> {};
template<> struct hash<winrt::Windows::System::Diagnostics::ProcessDiskUsageReport> : winrt::impl::hash_base<winrt::Windows::System::Diagnostics::ProcessDiskUsageReport> {};
template<> struct hash<winrt::Windows::System::Diagnostics::ProcessMemoryUsage> : winrt::impl::hash_base<winrt::Windows::System::Diagnostics::ProcessMemoryUsage> {};
template<> struct hash<winrt::Windows::System::Diagnostics::ProcessMemoryUsageReport> : winrt::impl::hash_base<winrt::Windows::System::Diagnostics::ProcessMemoryUsageReport> {};
template<> struct hash<winrt::Windows::System::Diagnostics::SystemCpuUsage> : winrt::impl::hash_base<winrt::Windows::System::Diagnostics::SystemCpuUsage> {};
template<> struct hash<winrt::Windows::System::Diagnostics::SystemCpuUsageReport> : winrt::impl::hash_base<winrt::Windows::System::Diagnostics::SystemCpuUsageReport> {};
template<> struct hash<winrt::Windows::System::Diagnostics::SystemDiagnosticInfo> : winrt::impl::hash_base<winrt::Windows::System::Diagnostics::SystemDiagnosticInfo> {};
template<> struct hash<winrt::Windows::System::Diagnostics::SystemMemoryUsage> : winrt::impl::hash_base<winrt::Windows::System::Diagnostics::SystemMemoryUsage> {};
template<> struct hash<winrt::Windows::System::Diagnostics::SystemMemoryUsageReport> : winrt::impl::hash_base<winrt::Windows::System::Diagnostics::SystemMemoryUsageReport> {};

}

WINRT_WARNING_POP
