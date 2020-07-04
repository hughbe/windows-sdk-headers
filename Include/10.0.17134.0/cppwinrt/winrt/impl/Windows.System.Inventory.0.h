// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once

WINRT_EXPORT namespace winrt::Windows::System::Inventory {

struct IInstalledDesktopApp;
struct IInstalledDesktopAppStatics;
struct InstalledDesktopApp;

}

namespace winrt::impl {

template <> struct category<Windows::System::Inventory::IInstalledDesktopApp>{ using type = interface_category; };
template <> struct category<Windows::System::Inventory::IInstalledDesktopAppStatics>{ using type = interface_category; };
template <> struct category<Windows::System::Inventory::InstalledDesktopApp>{ using type = class_category; };
template <> struct name<Windows::System::Inventory::IInstalledDesktopApp>{ static constexpr auto & value{ L"Windows.System.Inventory.IInstalledDesktopApp" }; };
template <> struct name<Windows::System::Inventory::IInstalledDesktopAppStatics>{ static constexpr auto & value{ L"Windows.System.Inventory.IInstalledDesktopAppStatics" }; };
template <> struct name<Windows::System::Inventory::InstalledDesktopApp>{ static constexpr auto & value{ L"Windows.System.Inventory.InstalledDesktopApp" }; };
template <> struct guid<Windows::System::Inventory::IInstalledDesktopApp>{ static constexpr GUID value{ 0x75EAB8ED,0xC0BC,0x5364,{ 0x4C,0x28,0x16,0x6E,0x05,0x45,0x16,0x7A } }; };
template <> struct guid<Windows::System::Inventory::IInstalledDesktopAppStatics>{ static constexpr GUID value{ 0x264CF74E,0x21CD,0x5F9B,{ 0x60,0x56,0x78,0x66,0xAD,0x72,0x48,0x9A } }; };
template <> struct default_interface<Windows::System::Inventory::InstalledDesktopApp>{ using type = Windows::System::Inventory::IInstalledDesktopApp; };

template <typename D>
struct consume_Windows_System_Inventory_IInstalledDesktopApp
{
    hstring Id() const;
    hstring DisplayName() const;
    hstring Publisher() const;
    hstring DisplayVersion() const;
};
template <> struct consume<Windows::System::Inventory::IInstalledDesktopApp> { template <typename D> using type = consume_Windows_System_Inventory_IInstalledDesktopApp<D>; };

template <typename D>
struct consume_Windows_System_Inventory_IInstalledDesktopAppStatics
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::System::Inventory::InstalledDesktopApp>> GetInventoryAsync() const;
};
template <> struct consume<Windows::System::Inventory::IInstalledDesktopAppStatics> { template <typename D> using type = consume_Windows_System_Inventory_IInstalledDesktopAppStatics<D>; };

template <> struct abi<Windows::System::Inventory::IInstalledDesktopApp>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_Id(HSTRING* value) noexcept = 0;
    virtual HRESULT __stdcall get_DisplayName(HSTRING* value) noexcept = 0;
    virtual HRESULT __stdcall get_Publisher(HSTRING* value) noexcept = 0;
    virtual HRESULT __stdcall get_DisplayVersion(HSTRING* value) noexcept = 0;
};};

template <> struct abi<Windows::System::Inventory::IInstalledDesktopAppStatics>{ struct type : IInspectable
{
    virtual HRESULT __stdcall GetInventoryAsync(void** operation) noexcept = 0;
};};

}
