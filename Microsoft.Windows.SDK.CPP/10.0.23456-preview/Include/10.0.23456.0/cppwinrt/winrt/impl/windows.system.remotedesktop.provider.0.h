// C++/WinRT v2.0.220110.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_System_RemoteDesktop_Provider_0_H
#define WINRT_Windows_System_RemoteDesktop_Provider_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    template <typename T> struct __declspec(empty_bases) EventHandler;
    struct EventRegistrationToken;
    template <typename TSender, typename TResult> struct __declspec(empty_bases) TypedEventHandler;
    struct Uri;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct __declspec(empty_bases) IVector;
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
    struct IRemoteDesktopConnectionRemoteInfo;
    struct IRemoteDesktopConnectionRemoteInfoStatics;
    struct IRemoteDesktopInfo;
    struct IRemoteDesktopInfoFactory;
    struct IRemoteDesktopRegistrarStatics;
    struct CloudPCDisplayInfo;
    struct CloudPCHostService;
    struct RemoteDesktopConnectionInfo;
    struct RemoteDesktopConnectionRemoteInfo;
    struct RemoteDesktopInfo;
    struct RemoteDesktopRegistrar;
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
    template <> struct category<winrt::Windows::System::RemoteDesktop::Provider::IRemoteDesktopConnectionRemoteInfo>{ using type = interface_category; };
    template <> struct category<winrt::Windows::System::RemoteDesktop::Provider::IRemoteDesktopConnectionRemoteInfoStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::System::RemoteDesktop::Provider::IRemoteDesktopInfo>{ using type = interface_category; };
    template <> struct category<winrt::Windows::System::RemoteDesktop::Provider::IRemoteDesktopInfoFactory>{ using type = interface_category; };
    template <> struct category<winrt::Windows::System::RemoteDesktop::Provider::IRemoteDesktopRegistrarStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::System::RemoteDesktop::Provider::CloudPCDisplayInfo>{ using type = class_category; };
    template <> struct category<winrt::Windows::System::RemoteDesktop::Provider::CloudPCHostService>{ using type = class_category; };
    template <> struct category<winrt::Windows::System::RemoteDesktop::Provider::RemoteDesktopConnectionInfo>{ using type = class_category; };
    template <> struct category<winrt::Windows::System::RemoteDesktop::Provider::RemoteDesktopConnectionRemoteInfo>{ using type = class_category; };
    template <> struct category<winrt::Windows::System::RemoteDesktop::Provider::RemoteDesktopInfo>{ using type = class_category; };
    template <> struct category<winrt::Windows::System::RemoteDesktop::Provider::RemoteDesktopRegistrar>{ using type = class_category; };
    template <> struct category<winrt::Windows::System::RemoteDesktop::Provider::RemoteDesktopConnectionStatus>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteDesktop::Provider::CloudPCDisplayInfo> = L"Windows.System.RemoteDesktop.Provider.CloudPCDisplayInfo";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteDesktop::Provider::CloudPCHostService> = L"Windows.System.RemoteDesktop.Provider.CloudPCHostService";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteDesktop::Provider::RemoteDesktopConnectionInfo> = L"Windows.System.RemoteDesktop.Provider.RemoteDesktopConnectionInfo";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteDesktop::Provider::RemoteDesktopConnectionRemoteInfo> = L"Windows.System.RemoteDesktop.Provider.RemoteDesktopConnectionRemoteInfo";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteDesktop::Provider::RemoteDesktopInfo> = L"Windows.System.RemoteDesktop.Provider.RemoteDesktopInfo";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteDesktop::Provider::RemoteDesktopRegistrar> = L"Windows.System.RemoteDesktop.Provider.RemoteDesktopRegistrar";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteDesktop::Provider::RemoteDesktopConnectionStatus> = L"Windows.System.RemoteDesktop.Provider.RemoteDesktopConnectionStatus";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteDesktop::Provider::ICloudPCDisplayInfo> = L"Windows.System.RemoteDesktop.Provider.ICloudPCDisplayInfo";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteDesktop::Provider::ICloudPCDisplayInfoFactory> = L"Windows.System.RemoteDesktop.Provider.ICloudPCDisplayInfoFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteDesktop::Provider::ICloudPCHostService> = L"Windows.System.RemoteDesktop.Provider.ICloudPCHostService";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteDesktop::Provider::ICloudPCHostServiceStatics> = L"Windows.System.RemoteDesktop.Provider.ICloudPCHostServiceStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteDesktop::Provider::IRemoteDesktopConnectionInfo> = L"Windows.System.RemoteDesktop.Provider.IRemoteDesktopConnectionInfo";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteDesktop::Provider::IRemoteDesktopConnectionInfo2> = L"Windows.System.RemoteDesktop.Provider.IRemoteDesktopConnectionInfo2";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteDesktop::Provider::IRemoteDesktopConnectionInfoStatics> = L"Windows.System.RemoteDesktop.Provider.IRemoteDesktopConnectionInfoStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteDesktop::Provider::IRemoteDesktopConnectionRemoteInfo> = L"Windows.System.RemoteDesktop.Provider.IRemoteDesktopConnectionRemoteInfo";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteDesktop::Provider::IRemoteDesktopConnectionRemoteInfoStatics> = L"Windows.System.RemoteDesktop.Provider.IRemoteDesktopConnectionRemoteInfoStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteDesktop::Provider::IRemoteDesktopInfo> = L"Windows.System.RemoteDesktop.Provider.IRemoteDesktopInfo";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteDesktop::Provider::IRemoteDesktopInfoFactory> = L"Windows.System.RemoteDesktop.Provider.IRemoteDesktopInfoFactory";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteDesktop::Provider::IRemoteDesktopRegistrarStatics> = L"Windows.System.RemoteDesktop.Provider.IRemoteDesktopRegistrarStatics";
    template <> inline constexpr guid guid_v<winrt::Windows::System::RemoteDesktop::Provider::ICloudPCDisplayInfo>{ 0x6C858DE8,0x1095,0x5C6E,{ 0x91,0x3F,0x2E,0x80,0x0C,0x29,0xFC,0x53 } }; // 6C858DE8-1095-5C6E-913F-2E800C29FC53
    template <> inline constexpr guid guid_v<winrt::Windows::System::RemoteDesktop::Provider::ICloudPCDisplayInfoFactory>{ 0x97DB7D7D,0x90D7,0x5A31,{ 0x81,0x4D,0x1E,0x9A,0xED,0x65,0x86,0xAE } }; // 97DB7D7D-90D7-5A31-814D-1E9AED6586AE
    template <> inline constexpr guid guid_v<winrt::Windows::System::RemoteDesktop::Provider::ICloudPCHostService>{ 0x593AA68B,0x29E0,0x5C1B,{ 0xA9,0xDB,0xF6,0xD5,0x8E,0xAA,0xC3,0x3F } }; // 593AA68B-29E0-5C1B-A9DB-F6D58EAAC33F
    template <> inline constexpr guid guid_v<winrt::Windows::System::RemoteDesktop::Provider::ICloudPCHostServiceStatics>{ 0xB756145E,0x85C0,0x5D54,{ 0x8A,0x68,0x4D,0x92,0xBB,0xA9,0x33,0x65 } }; // B756145E-85C0-5D54-8A68-4D92BBA93365
    template <> inline constexpr guid guid_v<winrt::Windows::System::RemoteDesktop::Provider::IRemoteDesktopConnectionInfo>{ 0x886BDE2A,0x46AD,0x5A25,{ 0x93,0x48,0x03,0xE8,0x01,0xC7,0x85,0x75 } }; // 886BDE2A-46AD-5A25-9348-03E801C78575
    template <> inline constexpr guid guid_v<winrt::Windows::System::RemoteDesktop::Provider::IRemoteDesktopConnectionInfo2>{ 0x8A260CF2,0x195D,0x5CD8,{ 0x97,0xFB,0xA2,0xB1,0xC5,0xE5,0x12,0x61 } }; // 8A260CF2-195D-5CD8-97FB-A2B1C5E51261
    template <> inline constexpr guid guid_v<winrt::Windows::System::RemoteDesktop::Provider::IRemoteDesktopConnectionInfoStatics>{ 0x4A7DC5A1,0x3368,0x5A75,{ 0xBB,0x78,0x80,0x7D,0xF7,0xEB,0xC4,0x39 } }; // 4A7DC5A1-3368-5A75-BB78-807DF7EBC439
    template <> inline constexpr guid guid_v<winrt::Windows::System::RemoteDesktop::Provider::IRemoteDesktopConnectionRemoteInfo>{ 0xE50E00E5,0x010D,0x5CAB,{ 0xB4,0x68,0xCF,0x87,0x1A,0x85,0x43,0xB5 } }; // E50E00E5-010D-5CAB-B468-CF871A8543B5
    template <> inline constexpr guid guid_v<winrt::Windows::System::RemoteDesktop::Provider::IRemoteDesktopConnectionRemoteInfoStatics>{ 0x9AD68472,0xCD92,0x537A,{ 0x83,0x09,0x63,0x9C,0xE2,0xCF,0x94,0x0F } }; // 9AD68472-CD92-537A-8309-639CE2CF940F
    template <> inline constexpr guid guid_v<winrt::Windows::System::RemoteDesktop::Provider::IRemoteDesktopInfo>{ 0xD185BB25,0x2F1E,0x5098,{ 0xB9,0xE0,0xF4,0x6D,0x63,0x58,0xC5,0xC4 } }; // D185BB25-2F1E-5098-B9E0-F46D6358C5C4
    template <> inline constexpr guid guid_v<winrt::Windows::System::RemoteDesktop::Provider::IRemoteDesktopInfoFactory>{ 0xAD0E8D58,0xB56F,0x5A8B,{ 0xB4,0x19,0x80,0x02,0xEE,0x0C,0x5E,0xE9 } }; // AD0E8D58-B56F-5A8B-B419-8002EE0C5EE9
    template <> inline constexpr guid guid_v<winrt::Windows::System::RemoteDesktop::Provider::IRemoteDesktopRegistrarStatics>{ 0x687C2750,0x46D9,0x5DE3,{ 0x8D,0xC3,0x84,0xA9,0x20,0x2C,0xEC,0xFB } }; // 687C2750-46D9-5DE3-8DC3-84A9202CECFB
    template <> struct default_interface<winrt::Windows::System::RemoteDesktop::Provider::CloudPCDisplayInfo>{ using type = winrt::Windows::System::RemoteDesktop::Provider::ICloudPCDisplayInfo; };
    template <> struct default_interface<winrt::Windows::System::RemoteDesktop::Provider::CloudPCHostService>{ using type = winrt::Windows::System::RemoteDesktop::Provider::ICloudPCHostService; };
    template <> struct default_interface<winrt::Windows::System::RemoteDesktop::Provider::RemoteDesktopConnectionInfo>{ using type = winrt::Windows::System::RemoteDesktop::Provider::IRemoteDesktopConnectionInfo; };
    template <> struct default_interface<winrt::Windows::System::RemoteDesktop::Provider::RemoteDesktopConnectionRemoteInfo>{ using type = winrt::Windows::System::RemoteDesktop::Provider::IRemoteDesktopConnectionRemoteInfo; };
    template <> struct default_interface<winrt::Windows::System::RemoteDesktop::Provider::RemoteDesktopInfo>{ using type = winrt::Windows::System::RemoteDesktop::Provider::IRemoteDesktopInfo; };
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
    template <> struct abi<winrt::Windows::System::RemoteDesktop::Provider::IRemoteDesktopConnectionRemoteInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ReportSwitched() noexcept = 0;
            virtual int32_t __stdcall add_SwitchToLocalSessionRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SwitchToLocalSessionRequested(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::System::RemoteDesktop::Provider::IRemoteDesktopConnectionRemoteInfoStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Current(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::System::RemoteDesktop::Provider::IRemoteDesktopInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DisplayName(void**) noexcept = 0;
            virtual int32_t __stdcall get_Id(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::System::RemoteDesktop::Provider::IRemoteDesktopInfoFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::System::RemoteDesktop::Provider::IRemoteDesktopRegistrarStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DesktopInfos(void**) noexcept = 0;
            virtual int32_t __stdcall IsSwitchToLocalSessionEnabled(bool*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_System_RemoteDesktop_Provider_ICloudPCDisplayInfo
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Name() const;
        WINRT_IMPL_AUTO(void) Name(param::hstring const& value) const;
    };
    template <> struct consume<winrt::Windows::System::RemoteDesktop::Provider::ICloudPCDisplayInfo>
    {
        template <typename D> using type = consume_Windows_System_RemoteDesktop_Provider_ICloudPCDisplayInfo<D>;
    };
    template <typename D>
    struct consume_Windows_System_RemoteDesktop_Provider_ICloudPCDisplayInfoFactory
    {
        WINRT_IMPL_AUTO(winrt::Windows::System::RemoteDesktop::Provider::CloudPCDisplayInfo) CreateInstance(param::hstring const& name) const;
    };
    template <> struct consume<winrt::Windows::System::RemoteDesktop::Provider::ICloudPCDisplayInfoFactory>
    {
        template <typename D> using type = consume_Windows_System_RemoteDesktop_Provider_ICloudPCDisplayInfoFactory<D>;
    };
    template <typename D>
    struct consume_Windows_System_RemoteDesktop_Provider_ICloudPCHostService
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::System::RemoteDesktop::Provider::CloudPCDisplayInfo) DisplayInfo() const;
        WINRT_IMPL_AUTO(void) DisplayInfo(winrt::Windows::System::RemoteDesktop::Provider::CloudPCDisplayInfo const& value) const;
        WINRT_IMPL_AUTO(void) SwitchToCloudPC() const;
        WINRT_IMPL_AUTO(winrt::event_token) SwitchToLocalPC(winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler) const;
        using SwitchToLocalPC_revoker = impl::event_revoker<winrt::Windows::System::RemoteDesktop::Provider::ICloudPCHostService, &impl::abi_t<winrt::Windows::System::RemoteDesktop::Provider::ICloudPCHostService>::remove_SwitchToLocalPC>;
        [[nodiscard]] SwitchToLocalPC_revoker SwitchToLocalPC(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) SwitchToLocalPC(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<winrt::Windows::System::RemoteDesktop::Provider::ICloudPCHostService>
    {
        template <typename D> using type = consume_Windows_System_RemoteDesktop_Provider_ICloudPCHostService<D>;
    };
    template <typename D>
    struct consume_Windows_System_RemoteDesktop_Provider_ICloudPCHostServiceStatics
    {
        WINRT_IMPL_AUTO(winrt::Windows::System::RemoteDesktop::Provider::CloudPCHostService) GetForWindow(winrt::Windows::UI::WindowId const& windowId) const;
    };
    template <> struct consume<winrt::Windows::System::RemoteDesktop::Provider::ICloudPCHostServiceStatics>
    {
        template <typename D> using type = consume_Windows_System_RemoteDesktop_Provider_ICloudPCHostServiceStatics<D>;
    };
    template <typename D>
    struct consume_Windows_System_RemoteDesktop_Provider_IRemoteDesktopConnectionInfo
    {
        WINRT_IMPL_AUTO(void) SetConnectionStatus(winrt::Windows::System::RemoteDesktop::Provider::RemoteDesktopConnectionStatus const& value) const;
    };
    template <> struct consume<winrt::Windows::System::RemoteDesktop::Provider::IRemoteDesktopConnectionInfo>
    {
        template <typename D> using type = consume_Windows_System_RemoteDesktop_Provider_IRemoteDesktopConnectionInfo<D>;
    };
    template <typename D>
    struct consume_Windows_System_RemoteDesktop_Provider_IRemoteDesktopConnectionInfo2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::System::RemoteDesktop::Provider::CloudPCDisplayInfo) DisplayInfo() const;
        WINRT_IMPL_AUTO(void) DisplayInfo(winrt::Windows::System::RemoteDesktop::Provider::CloudPCDisplayInfo const& value) const;
        WINRT_IMPL_AUTO(winrt::event_token) SwitchToCloudPC(winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler) const;
        using SwitchToCloudPC_revoker = impl::event_revoker<winrt::Windows::System::RemoteDesktop::Provider::IRemoteDesktopConnectionInfo2, &impl::abi_t<winrt::Windows::System::RemoteDesktop::Provider::IRemoteDesktopConnectionInfo2>::remove_SwitchToCloudPC>;
        [[nodiscard]] SwitchToCloudPC_revoker SwitchToCloudPC(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) SwitchToCloudPC(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(void) SwitchToLocalPC() const;
    };
    template <> struct consume<winrt::Windows::System::RemoteDesktop::Provider::IRemoteDesktopConnectionInfo2>
    {
        template <typename D> using type = consume_Windows_System_RemoteDesktop_Provider_IRemoteDesktopConnectionInfo2<D>;
    };
    template <typename D>
    struct consume_Windows_System_RemoteDesktop_Provider_IRemoteDesktopConnectionInfoStatics
    {
        WINRT_IMPL_AUTO(winrt::Windows::System::RemoteDesktop::Provider::RemoteDesktopConnectionInfo) GetForLaunchUri(winrt::Windows::Foundation::Uri const& launchUri, winrt::Windows::UI::WindowId const& windowId) const;
    };
    template <> struct consume<winrt::Windows::System::RemoteDesktop::Provider::IRemoteDesktopConnectionInfoStatics>
    {
        template <typename D> using type = consume_Windows_System_RemoteDesktop_Provider_IRemoteDesktopConnectionInfoStatics<D>;
    };
    template <typename D>
    struct consume_Windows_System_RemoteDesktop_Provider_IRemoteDesktopConnectionRemoteInfo
    {
        WINRT_IMPL_AUTO(void) ReportSwitched() const;
        WINRT_IMPL_AUTO(winrt::event_token) SwitchToLocalSessionRequested(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::System::RemoteDesktop::Provider::RemoteDesktopConnectionRemoteInfo, winrt::Windows::Foundation::IInspectable> const& handler) const;
        using SwitchToLocalSessionRequested_revoker = impl::event_revoker<winrt::Windows::System::RemoteDesktop::Provider::IRemoteDesktopConnectionRemoteInfo, &impl::abi_t<winrt::Windows::System::RemoteDesktop::Provider::IRemoteDesktopConnectionRemoteInfo>::remove_SwitchToLocalSessionRequested>;
        [[nodiscard]] SwitchToLocalSessionRequested_revoker SwitchToLocalSessionRequested(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::System::RemoteDesktop::Provider::RemoteDesktopConnectionRemoteInfo, winrt::Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) SwitchToLocalSessionRequested(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<winrt::Windows::System::RemoteDesktop::Provider::IRemoteDesktopConnectionRemoteInfo>
    {
        template <typename D> using type = consume_Windows_System_RemoteDesktop_Provider_IRemoteDesktopConnectionRemoteInfo<D>;
    };
    template <typename D>
    struct consume_Windows_System_RemoteDesktop_Provider_IRemoteDesktopConnectionRemoteInfoStatics
    {
        WINRT_IMPL_AUTO(winrt::Windows::System::RemoteDesktop::Provider::RemoteDesktopConnectionRemoteInfo) Current() const;
    };
    template <> struct consume<winrt::Windows::System::RemoteDesktop::Provider::IRemoteDesktopConnectionRemoteInfoStatics>
    {
        template <typename D> using type = consume_Windows_System_RemoteDesktop_Provider_IRemoteDesktopConnectionRemoteInfoStatics<D>;
    };
    template <typename D>
    struct consume_Windows_System_RemoteDesktop_Provider_IRemoteDesktopInfo
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) DisplayName() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Id() const;
    };
    template <> struct consume<winrt::Windows::System::RemoteDesktop::Provider::IRemoteDesktopInfo>
    {
        template <typename D> using type = consume_Windows_System_RemoteDesktop_Provider_IRemoteDesktopInfo<D>;
    };
    template <typename D>
    struct consume_Windows_System_RemoteDesktop_Provider_IRemoteDesktopInfoFactory
    {
        WINRT_IMPL_AUTO(winrt::Windows::System::RemoteDesktop::Provider::RemoteDesktopInfo) CreateInstance(param::hstring const& id, param::hstring const& displayName) const;
    };
    template <> struct consume<winrt::Windows::System::RemoteDesktop::Provider::IRemoteDesktopInfoFactory>
    {
        template <typename D> using type = consume_Windows_System_RemoteDesktop_Provider_IRemoteDesktopInfoFactory<D>;
    };
    template <typename D>
    struct consume_Windows_System_RemoteDesktop_Provider_IRemoteDesktopRegistrarStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVector<winrt::Windows::System::RemoteDesktop::Provider::RemoteDesktopInfo>) DesktopInfos() const;
        WINRT_IMPL_AUTO(bool) IsSwitchToLocalSessionEnabled() const;
    };
    template <> struct consume<winrt::Windows::System::RemoteDesktop::Provider::IRemoteDesktopRegistrarStatics>
    {
        template <typename D> using type = consume_Windows_System_RemoteDesktop_Provider_IRemoteDesktopRegistrarStatics<D>;
    };
}
#endif
