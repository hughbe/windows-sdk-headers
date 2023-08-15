// C++/WinRT v2.0.220110.5

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_System_RemoteSystems_Availability_0_H
#define WINRT_Windows_System_RemoteSystems_Availability_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct __declspec(empty_bases) IVectorView;
}
WINRT_EXPORT namespace winrt::Windows::System::RemoteSystems::Availability
{
    struct IRemoteSystemAvailabilityStatics;
    struct RemoteSystemAvailability;
}
namespace winrt::impl
{
    template <> struct category<winrt::Windows::System::RemoteSystems::Availability::IRemoteSystemAvailabilityStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::System::RemoteSystems::Availability::RemoteSystemAvailability>{ using type = class_category; };
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::Availability::RemoteSystemAvailability> = L"Windows.System.RemoteSystems.Availability.RemoteSystemAvailability";
    template <> inline constexpr auto& name_v<winrt::Windows::System::RemoteSystems::Availability::IRemoteSystemAvailabilityStatics> = L"Windows.System.RemoteSystems.Availability.IRemoteSystemAvailabilityStatics";
    template <> inline constexpr guid guid_v<winrt::Windows::System::RemoteSystems::Availability::IRemoteSystemAvailabilityStatics>{ 0xC00D31B3,0xF989,0x501D,{ 0x8C,0xE1,0x5F,0x76,0x72,0x15,0x82,0x1E } }; // C00D31B3-F989-501D-8CE1-5F767215821E
    template <> struct abi<winrt::Windows::System::RemoteSystems::Availability::IRemoteSystemAvailabilityStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall EnableCloudPC(void*, void*) noexcept = 0;
            virtual int32_t __stdcall DisableCloudPC(void*) noexcept = 0;
            virtual int32_t __stdcall IsCloudPCEnabled(void*, bool*) noexcept = 0;
            virtual int32_t __stdcall IsIntegratedCloudPCSwitchEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall GetAllEnabledCloudPCIds(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_System_RemoteSystems_Availability_IRemoteSystemAvailabilityStatics
    {
        WINRT_IMPL_AUTO(void) EnableCloudPC(param::hstring const& displayName, param::hstring const& cloudPCId) const;
        WINRT_IMPL_AUTO(void) DisableCloudPC(param::hstring const& cloudPCId) const;
        WINRT_IMPL_AUTO(bool) IsCloudPCEnabled(param::hstring const& cloudPCId) const;
        WINRT_IMPL_AUTO(bool) IsIntegratedCloudPCSwitchEnabled() const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVectorView<hstring>) GetAllEnabledCloudPCIds() const;
    };
    template <> struct consume<winrt::Windows::System::RemoteSystems::Availability::IRemoteSystemAvailabilityStatics>
    {
        template <typename D> using type = consume_Windows_System_RemoteSystems_Availability_IRemoteSystemAvailabilityStatics<D>;
    };
}
#endif
