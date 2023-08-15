// C++/WinRT v2.0.220418.1

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_System_RemoteDesktop_Provider_0_H
#define WINRT_Windows_System_RemoteDesktop_Provider_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    template <typename T> struct __declspec(empty_bases) EventHandler;
    struct EventRegistrationToken;
    struct Uri;
}
WINRT_EXPORT namespace winrt::Windows::UI
{
    struct WindowId;
}
WINRT_EXPORT namespace winrt::Windows::System::RemoteDesktop::Provider
{
    enum class RemoteDesktopConnectionStatus : int32_t
    {
        Connecting = 0,
        Connected = 1,
        UserInputNeeded = 2,
        Disconnected = 3,
    };
    struct ICloudPCDisplayInfo;
    struct ICloudPCDisplayInfoFactory;
    struct ICloudPCHostService;
    struct ICloudPCHostServiceStatics;
    struct IRemoteDesktopConnectionInfo;
    struct IRemoteDesktopConnectionInfo2;
    struct IRemoteDesktopConnectionInfoStatics;
    struct CloudPCDisplayInfo;
    struct CloudPCHostService;
    struct RemoteDesktopConnectionInfo;
}
namespace winrt::impl
{
    template <> struct category<winrt::Windows::System::RemoteDesktop::Provider::ICloudPCDisplayInfo>{ using type = interface_category; };
    template <> struct category<winrt::Windows::System::RemoteDesktop::Provider::ICloudPCDisplayInfoFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::System::RemoteDesktop::Provider::ICloudPCHostService>{ using type = interface_category; };
    template <> struct category<winrt::Windows::System::RemoteDesktop::Provider::ICloudPCHostServiceStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::System::RemoteDesktop::Provider::IRemoteDesktopConnectionInfo>{ using type = interface_category; };
    template <> struct category<winrt::Windows::System::RemoteDesktop::Provider::IRemoteDesktopConnectionInfo2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::System::RemoteDesktop::Provider::IRemoteDesktopConnectionInfoStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::System::RemoteDesktop::Provider::CloudPCDisplayInfo>{ using type = class_category; };
    template <> struct category<winrt::Windows::System::RemoteDesktop::Provider::CloudPCHostService>{ using type = class_category; };
    template <> struct category<winrt::Windows::System::RemoteDesktop::Provider::RemoteDesktopConnectionInfo>{ using type = class_category; };
    template <> struct category<winrt::Windows::System::RemoteDesktop::Provider::RemoteDesktopConnectionStatus>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteDesktop::Provider::CloudPCDisplayInfo> = L"Windows.System.RemoteDesktop.Provider.CloudPCDisplayInfo";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteDesktop::Provider::CloudPCHostService> = L"Windows.System.RemoteDesktop.Provider.CloudPCHostService";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteDesktop::Provider::RemoteDesktopConnectionInfo> = L"Windows.System.RemoteDesktop.Provider.RemoteDesktopConnectionInfo";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteDesktop::Provider::RemoteDesktopConnectionStatus> = L"Windows.System.RemoteDesktop.Provider.RemoteDesktopConnectionStatus";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteDesktop::Provider::ICloudPCDisplayInfo> = L"Windows.System.RemoteDesktop.Provider.ICloudPCDisplayInfo";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteDesktop::Provider::ICloudPCDisplayInfoFactory> = L"Windows.System.RemoteDesktop.Provider.ICloudPCDisplayInfoFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteDesktop::Provider::ICloudPCHostService> = L"Windows.System.RemoteDesktop.Provider.ICloudPCHostService";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteDesktop::Provider::ICloudPCHostServiceStatics> = L"Windows.System.RemoteDesktop.Provider.ICloudPCHostServiceStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteDesktop::Provider::IRemoteDesktopConnectionInfo> = L"Windows.System.RemoteDesktop.Provider.IRemoteDesktopConnectionInfo";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteDesktop::Provider::IRemoteDesktopConnectionInfo2> = L"Windows.System.RemoteDesktop.Provider.IRemoteDesktopConnectionInfo2";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteDesktop::Provider::IRemoteDesktopConnectionInfoStatics> = L"Windows.System.RemoteDesktop.Provider.IRemoteDesktopConnectionInfoStatics";
    template <> inline constexpr guid guid_v<winrt::Windows::System::RemoteDesktop::Provider::ICloudPCDisplayInfo>{ 0x6C858DE8,0x1095,0x5C6E,{ 0x91,0x3F,0x2E,0x80,0x0C,0x29,0xFC,0x53 } }; // 6C858DE8-1095-5C6E-913F-2E800C29FC53
    template <> inline constexpr guid guid_v<winrt::Windows::System::RemoteDesktop::Provider::ICloudPCDisplayInfoFactory>{ 0x97DB7D7D,0x90D7,0x5A31,{ 0x81,0x4D,0x1E,0x9A,0xED,0x65,0x86,0xAE } }; // 97DB7D7D-90D7-5A31-814D-1E9AED6586AE
    template <> inline constexpr guid guid_v<winrt::Windows::System::RemoteDesktop::Provider::ICloudPCHostService>{ 0x593AA68B,0x29E0,0x5C1B,{ 0xA9,0xDB,0xF6,0xD5,0x8E,0xAA,0xC3,0x3F } }; // 593AA68B-29E0-5C1B-A9DB-F6D58EAAC33F
    template <> inline constexpr guid guid_v<winrt::Windows::System::RemoteDesktop::Provider::ICloudPCHostServiceStatics>{ 0xB756145E,0x85C0,0x5D54,{ 0x8A,0x68,0x4D,0x92,0xBB,0xA9,0x33,0x65 } }; // B756145E-85C0-5D54-8A68-4D92BBA93365
    template <> inline constexpr guid guid_v<winrt::Windows::System::RemoteDesktop::Provider::IRemoteDesktopConnectionInfo>{ 0x886BDE2A,0x46AD,0x5A25,{ 0x93,0x48,0x03,0xE8,0x01,0xC7,0x85,0x75 } }; // 886BDE2A-46AD-5A25-9348-03E801C78575
    template <> inline constexpr guid guid_v<winrt::Windows::System::RemoteDesktop::Provider::IRemoteDesktopConnectionInfo2>{ 0x8A260CF2,0x195D,0x5CD8,{ 0x97,0xFB,0xA2,0xB1,0xC5,0xE5,0x12,0x61 } }; // 8A260CF2-195D-5CD8-97FB-A2B1C5E51261
    template <> inline constexpr guid guid_v<winrt::Windows::System::RemoteDesktop::Provider::IRemoteDesktopConnectionInfoStatics>{ 0x4A7DC5A1,0x3368,0x5A75,{ 0xBB,0x78,0x80,0x7D,0xF7,0xEB,0xC4,0x39 } }; // 4A7DC5A1-3368-5A75-BB78-807DF7EBC439
    template <> struct default_interface<winrt::Windows::System::RemoteDesktop::Provider::CloudPCDisplayInfo>{ using type = winrt::Windows::System::RemoteDesktop::Provider::ICloudPCDisplayInfo; };
    template <> struct default_interface<winrt::Windows::System::RemoteDesktop::Provider::CloudPCHostService>{ using type = winrt::Windows::System::RemoteDesktop::Provider::ICloudPCHostService; };
    template <> struct default_interface<winrt::Windows::System::RemoteDesktop::Provider::RemoteDesktopConnectionInfo>{ using type = winrt::Windows::System::RemoteDesktop::Provider::IRemoteDesktopConnectionInfo; };
    template <> struct abi<winrt::Windows::System::RemoteDesktop::Provider::ICloudPCDisplayInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
            virtual int32_t __stdcall put_Name(void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::System::RemoteDesktop::Provider::ICloudPCDisplayInfoFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::System::RemoteDesktop::Provider::ICloudPCHostService>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DisplayInfo(void**) noexcept = 0;
            virtual int32_t __stdcall put_DisplayInfo(void*) noexcept = 0;
            virtual int32_t __stdcall SwitchToCloudPC() noexcept = 0;
            virtual int32_t __stdcall add_SwitchToLocalPC(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SwitchToLocalPC(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::System::RemoteDesktop::Provider::ICloudPCHostServiceStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetForWindow(struct struct_Windows_UI_WindowId, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::System::RemoteDesktop::Provider::IRemoteDesktopConnectionInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SetConnectionStatus(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::System::RemoteDesktop::Provider::IRemoteDesktopConnectionInfo2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DisplayInfo(void**) noexcept = 0;
            virtual int32_t __stdcall put_DisplayInfo(void*) noexcept = 0;
            virtual int32_t __stdcall add_SwitchToCloudPC(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SwitchToCloudPC(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall SwitchToLocalPC() noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::System::RemoteDesktop::Provider::IRemoteDesktopConnectionInfoStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetForLaunchUri(void*, struct struct_Windows_UI_WindowId, void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_System_RemoteDesktop_Provider_ICloudPCDisplayInfo
    {
        [[nodiscard]] auto Name() const;
        auto Name(param::hstring const& value) const;
    };
    template <> struct consume<winrt::Windows::System::RemoteDesktop::Provider::ICloudPCDisplayInfo>
    {
        template <typename D> using type = consume_Windows_System_RemoteDesktop_Provider_ICloudPCDisplayInfo<D>;
    };
    template <typename D>
    struct consume_Windows_System_RemoteDesktop_Provider_ICloudPCDisplayInfoFactory
    {
        auto CreateInstance(param::hstring const& name) const;
    };
    template <> struct consume<winrt::Windows::System::RemoteDesktop::Provider::ICloudPCDisplayInfoFactory>
    {
        template <typename D> using type = consume_Windows_System_RemoteDesktop_Provider_ICloudPCDisplayInfoFactory<D>;
    };
    template <typename D>
    struct consume_Windows_System_RemoteDesktop_Provider_ICloudPCHostService
    {
        [[nodiscard]] auto DisplayInfo() const;
        auto DisplayInfo(winrt::Windows::System::RemoteDesktop::Provider::CloudPCDisplayInfo const& value) const;
        auto SwitchToCloudPC() const;
        auto SwitchToLocalPC(winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler) const;
        using SwitchToLocalPC_revoker = impl::event_revoker<winrt::Windows::System::RemoteDesktop::Provider::ICloudPCHostService, &impl::abi_t<winrt::Windows::System::RemoteDesktop::Provider::ICloudPCHostService>::remove_SwitchToLocalPC>;
        [[nodiscard]] SwitchToLocalPC_revoker SwitchToLocalPC(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler) const;
        auto SwitchToLocalPC(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<winrt::Windows::System::RemoteDesktop::Provider::ICloudPCHostService>
    {
        template <typename D> using type = consume_Windows_System_RemoteDesktop_Provider_ICloudPCHostService<D>;
    };
    template <typename D>
    struct consume_Windows_System_RemoteDesktop_Provider_ICloudPCHostServiceStatics
    {
        auto GetForWindow(winrt::Windows::UI::WindowId const& windowId) const;
    };
    template <> struct consume<winrt::Windows::System::RemoteDesktop::Provider::ICloudPCHostServiceStatics>
    {
        template <typename D> using type = consume_Windows_System_RemoteDesktop_Provider_ICloudPCHostServiceStatics<D>;
    };
    template <typename D>
    struct consume_Windows_System_RemoteDesktop_Provider_IRemoteDesktopConnectionInfo
    {
        auto SetConnectionStatus(winrt::Windows::System::RemoteDesktop::Provider::RemoteDesktopConnectionStatus const& value) const;
    };
    template <> struct consume<winrt::Windows::System::RemoteDesktop::Provider::IRemoteDesktopConnectionInfo>
    {
        template <typename D> using type = consume_Windows_System_RemoteDesktop_Provider_IRemoteDesktopConnectionInfo<D>;
    };
    template <typename D>
    struct consume_Windows_System_RemoteDesktop_Provider_IRemoteDesktopConnectionInfo2
    {
        [[nodiscard]] auto DisplayInfo() const;
        auto DisplayInfo(winrt::Windows::System::RemoteDesktop::Provider::CloudPCDisplayInfo const& value) const;
        auto SwitchToCloudPC(winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler) const;
        using SwitchToCloudPC_revoker = impl::event_revoker<winrt::Windows::System::RemoteDesktop::Provider::IRemoteDesktopConnectionInfo2, &impl::abi_t<winrt::Windows::System::RemoteDesktop::Provider::IRemoteDesktopConnectionInfo2>::remove_SwitchToCloudPC>;
        [[nodiscard]] SwitchToCloudPC_revoker SwitchToCloudPC(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler) const;
        auto SwitchToCloudPC(winrt::event_token const& token) const noexcept;
        auto SwitchToLocalPC() const;
    };
    template <> struct consume<winrt::Windows::System::RemoteDesktop::Provider::IRemoteDesktopConnectionInfo2>
    {
        template <typename D> using type = consume_Windows_System_RemoteDesktop_Provider_IRemoteDesktopConnectionInfo2<D>;
    };
    template <typename D>
    struct consume_Windows_System_RemoteDesktop_Provider_IRemoteDesktopConnectionInfoStatics
    {
        auto GetForLaunchUri(winrt::Windows::Foundation::Uri const& launchUri, winrt::Windows::UI::WindowId const& windowId) const;
    };
    template <> struct consume<winrt::Windows::System::RemoteDesktop::Provider::IRemoteDesktopConnectionInfoStatics>
    {
        template <typename D> using type = consume_Windows_System_RemoteDesktop_Provider_IRemoteDesktopConnectionInfoStatics<D>;
    };
}
#endif
