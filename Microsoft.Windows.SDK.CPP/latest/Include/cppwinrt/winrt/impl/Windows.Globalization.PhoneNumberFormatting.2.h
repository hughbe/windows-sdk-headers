// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Globalization_PhoneNumberFormatting_2_H
#define WINRT_Windows_Globalization_PhoneNumberFormatting_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Globalization.PhoneNumberFormatting.1.h"
namespace winrt::Windows::Globalization::PhoneNumberFormatting
{
    struct __declspec(empty_bases) PhoneNumberFormatter : Windows::Globalization::PhoneNumberFormatting::IPhoneNumberFormatter
    {
        PhoneNumberFormatter(std::nullptr_t) noexcept {}
        PhoneNumberFormatter(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Globalization::PhoneNumberFormatting::IPhoneNumberFormatter(ptr, take_ownership_from_abi) {}
        PhoneNumberFormatter();
        static auto TryCreate(param::hstring const& regionCode, Windows::Globalization::PhoneNumberFormatting::PhoneNumberFormatter& phoneNumber);
        static auto GetCountryCodeForRegion(param::hstring const& regionCode);
        static auto GetNationalDirectDialingPrefixForRegion(param::hstring const& regionCode, bool stripNonDigit);
        static auto WrapWithLeftToRightMarkers(param::hstring const& number);
    };
    struct __declspec(empty_bases) PhoneNumberInfo : Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfo,
        impl::require<PhoneNumberInfo, Windows::Foundation::IStringable>
    {
        PhoneNumberInfo(std::nullptr_t) noexcept {}
        PhoneNumberInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Globalization::PhoneNumberFormatting::IPhoneNumberInfo(ptr, take_ownership_from_abi) {}
        PhoneNumberInfo(param::hstring const& number);
        static auto TryParse(param::hstring const& input, Windows::Globalization::PhoneNumberFormatting::PhoneNumberInfo& phoneNumber);
        static auto TryParse(param::hstring const& input, param::hstring const& regionCode, Windows::Globalization::PhoneNumberFormatting::PhoneNumberInfo& phoneNumber);
    };
}
#endif
