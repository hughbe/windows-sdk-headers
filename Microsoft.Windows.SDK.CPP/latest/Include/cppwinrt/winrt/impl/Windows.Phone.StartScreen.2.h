// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Phone_StartScreen_2_H
#define WINRT_Windows_Phone_StartScreen_2_H
#include "winrt/impl/Windows.Phone.StartScreen.1.h"
namespace winrt::Windows::Phone::StartScreen
{
    struct __declspec(empty_bases) DualSimTile : Windows::Phone::StartScreen::IDualSimTile
    {
        DualSimTile(std::nullptr_t) noexcept {}
        DualSimTile(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Phone::StartScreen::IDualSimTile(ptr, take_ownership_from_abi) {}
        DualSimTile();
        static auto GetTileForSim2();
        static auto UpdateDisplayNameForSim1Async(param::hstring const& name);
        static auto CreateTileUpdaterForSim1();
        static auto CreateTileUpdaterForSim2();
        static auto CreateBadgeUpdaterForSim1();
        static auto CreateBadgeUpdaterForSim2();
        static auto CreateToastNotifierForSim1();
        static auto CreateToastNotifierForSim2();
    };
}
#endif
