// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Foundation_Metadata_1_H
#define WINRT_Windows_Foundation_Metadata_1_H
#include "winrt/impl/Windows.Foundation.Metadata.0.h"
namespace winrt::Windows::Foundation::Metadata
{
    struct __declspec(empty_bases) IApiInformationStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IApiInformationStatics>
    {
        IApiInformationStatics(std::nullptr_t = nullptr) noexcept {}
        IApiInformationStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
