// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_System_Threading_1_H
#define WINRT_Windows_System_Threading_1_H
#include "winrt/impl/Windows.System.Threading.0.h"
namespace winrt::Windows::System::Threading
{
    struct __declspec(empty_bases) IThreadPoolStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IThreadPoolStatics>
    {
        IThreadPoolStatics(std::nullptr_t = nullptr) noexcept {}
        IThreadPoolStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IThreadPoolTimer :
        Windows::Foundation::IInspectable,
        impl::consume_t<IThreadPoolTimer>
    {
        IThreadPoolTimer(std::nullptr_t = nullptr) noexcept {}
        IThreadPoolTimer(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IThreadPoolTimerStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IThreadPoolTimerStatics>
    {
        IThreadPoolTimerStatics(std::nullptr_t = nullptr) noexcept {}
        IThreadPoolTimerStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
