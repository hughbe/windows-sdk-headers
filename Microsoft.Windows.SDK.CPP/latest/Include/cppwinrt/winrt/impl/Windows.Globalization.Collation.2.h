// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Globalization_Collation_2_H
#define WINRT_Windows_Globalization_Collation_2_H
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Globalization.Collation.1.h"
namespace winrt::Windows::Globalization::Collation
{
    struct __declspec(empty_bases) CharacterGrouping : Windows::Globalization::Collation::ICharacterGrouping
    {
        CharacterGrouping(std::nullptr_t) noexcept {}
        CharacterGrouping(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Globalization::Collation::ICharacterGrouping(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) CharacterGroupings : Windows::Globalization::Collation::ICharacterGroupings
    {
        CharacterGroupings(std::nullptr_t) noexcept {}
        CharacterGroupings(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Globalization::Collation::ICharacterGroupings(ptr, take_ownership_from_abi) {}
        CharacterGroupings();
        CharacterGroupings(param::hstring const& language);
    };
}
#endif
