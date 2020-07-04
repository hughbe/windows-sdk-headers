// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Globalization_Fonts_1_H
#define WINRT_Windows_Globalization_Fonts_1_H
#include "winrt/impl/Windows.Globalization.Fonts.0.h"
namespace winrt::Windows::Globalization::Fonts
{
    struct __declspec(empty_bases) ILanguageFont :
        Windows::Foundation::IInspectable,
        impl::consume_t<ILanguageFont>
    {
        ILanguageFont(std::nullptr_t = nullptr) noexcept {}
        ILanguageFont(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ILanguageFontGroup :
        Windows::Foundation::IInspectable,
        impl::consume_t<ILanguageFontGroup>
    {
        ILanguageFontGroup(std::nullptr_t = nullptr) noexcept {}
        ILanguageFontGroup(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ILanguageFontGroupFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<ILanguageFontGroupFactory>
    {
        ILanguageFontGroupFactory(std::nullptr_t = nullptr) noexcept {}
        ILanguageFontGroupFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
