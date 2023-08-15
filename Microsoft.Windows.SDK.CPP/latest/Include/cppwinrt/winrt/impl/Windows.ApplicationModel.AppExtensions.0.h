﻿// C++/WinRT v1.0.190111.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once

WINRT_EXPORT namespace winrt::Windows::ApplicationModel {

struct AppInfo;
struct Package;

}

WINRT_EXPORT namespace winrt::Windows::Foundation::Collections {

struct IPropertySet;

}

WINRT_EXPORT namespace winrt::Windows::Storage {

struct StorageFolder;

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::AppExtensions {

struct IAppExtension;
struct IAppExtensionCatalog;
struct IAppExtensionCatalogStatics;
struct IAppExtensionPackageInstalledEventArgs;
struct IAppExtensionPackageStatusChangedEventArgs;
struct IAppExtensionPackageUninstallingEventArgs;
struct IAppExtensionPackageUpdatedEventArgs;
struct IAppExtensionPackageUpdatingEventArgs;
struct AppExtension;
struct AppExtensionCatalog;
struct AppExtensionPackageInstalledEventArgs;
struct AppExtensionPackageStatusChangedEventArgs;
struct AppExtensionPackageUninstallingEventArgs;
struct AppExtensionPackageUpdatedEventArgs;
struct AppExtensionPackageUpdatingEventArgs;

}

namespace winrt::impl {

template <> struct category<Windows::ApplicationModel::AppExtensions::IAppExtension>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::AppExtensions::IAppExtensionCatalog>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::AppExtensions::IAppExtensionCatalogStatics>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::AppExtensions::IAppExtensionPackageInstalledEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::AppExtensions::IAppExtensionPackageStatusChangedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::AppExtensions::IAppExtensionPackageUninstallingEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::AppExtensions::IAppExtensionPackageUpdatedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::AppExtensions::IAppExtensionPackageUpdatingEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::AppExtensions::AppExtension>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::AppExtensions::AppExtensionCatalog>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::AppExtensions::AppExtensionPackageInstalledEventArgs>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::AppExtensions::AppExtensionPackageStatusChangedEventArgs>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::AppExtensions::AppExtensionPackageUninstallingEventArgs>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::AppExtensions::AppExtensionPackageUpdatedEventArgs>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::AppExtensions::AppExtensionPackageUpdatingEventArgs>{ using type = class_category; };
template <> struct name<Windows::ApplicationModel::AppExtensions::IAppExtension>{ static constexpr auto & value{ L"Windows.ApplicationModel.AppExtensions.IAppExtension" }; };
template <> struct name<Windows::ApplicationModel::AppExtensions::IAppExtensionCatalog>{ static constexpr auto & value{ L"Windows.ApplicationModel.AppExtensions.IAppExtensionCatalog" }; };
template <> struct name<Windows::ApplicationModel::AppExtensions::IAppExtensionCatalogStatics>{ static constexpr auto & value{ L"Windows.ApplicationModel.AppExtensions.IAppExtensionCatalogStatics" }; };
template <> struct name<Windows::ApplicationModel::AppExtensions::IAppExtensionPackageInstalledEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.AppExtensions.IAppExtensionPackageInstalledEventArgs" }; };
template <> struct name<Windows::ApplicationModel::AppExtensions::IAppExtensionPackageStatusChangedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.AppExtensions.IAppExtensionPackageStatusChangedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::AppExtensions::IAppExtensionPackageUninstallingEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.AppExtensions.IAppExtensionPackageUninstallingEventArgs" }; };
template <> struct name<Windows::ApplicationModel::AppExtensions::IAppExtensionPackageUpdatedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.AppExtensions.IAppExtensionPackageUpdatedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::AppExtensions::IAppExtensionPackageUpdatingEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.AppExtensions.IAppExtensionPackageUpdatingEventArgs" }; };
template <> struct name<Windows::ApplicationModel::AppExtensions::AppExtension>{ static constexpr auto & value{ L"Windows.ApplicationModel.AppExtensions.AppExtension" }; };
template <> struct name<Windows::ApplicationModel::AppExtensions::AppExtensionCatalog>{ static constexpr auto & value{ L"Windows.ApplicationModel.AppExtensions.AppExtensionCatalog" }; };
template <> struct name<Windows::ApplicationModel::AppExtensions::AppExtensionPackageInstalledEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.AppExtensions.AppExtensionPackageInstalledEventArgs" }; };
template <> struct name<Windows::ApplicationModel::AppExtensions::AppExtensionPackageStatusChangedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.AppExtensions.AppExtensionPackageStatusChangedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::AppExtensions::AppExtensionPackageUninstallingEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.AppExtensions.AppExtensionPackageUninstallingEventArgs" }; };
template <> struct name<Windows::ApplicationModel::AppExtensions::AppExtensionPackageUpdatedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.AppExtensions.AppExtensionPackageUpdatedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::AppExtensions::AppExtensionPackageUpdatingEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.AppExtensions.AppExtensionPackageUpdatingEventArgs" }; };
template <> struct guid_storage<Windows::ApplicationModel::AppExtensions::IAppExtension>{ static constexpr guid value{ 0x8450902C,0x15ED,0x4FAF,{ 0x93,0xEA,0x22,0x37,0xBB,0xF8,0xCB,0xD6 } }; };
template <> struct guid_storage<Windows::ApplicationModel::AppExtensions::IAppExtensionCatalog>{ static constexpr guid value{ 0x97872032,0x8426,0x4AD1,{ 0x90,0x84,0x92,0xE8,0x8C,0x2D,0xA2,0x00 } }; };
template <> struct guid_storage<Windows::ApplicationModel::AppExtensions::IAppExtensionCatalogStatics>{ static constexpr guid value{ 0x3C36668A,0x5F18,0x4F0B,{ 0x9C,0xE5,0xCA,0xB6,0x1D,0x19,0x6F,0x11 } }; };
template <> struct guid_storage<Windows::ApplicationModel::AppExtensions::IAppExtensionPackageInstalledEventArgs>{ static constexpr guid value{ 0x39E59234,0x3351,0x4A8D,{ 0x97,0x45,0xE7,0xD3,0xDD,0x45,0xBC,0x48 } }; };
template <> struct guid_storage<Windows::ApplicationModel::AppExtensions::IAppExtensionPackageStatusChangedEventArgs>{ static constexpr guid value{ 0x1CE17433,0x1153,0x44FD,{ 0x87,0xB1,0x8A,0xE1,0x05,0x03,0x03,0xDF } }; };
template <> struct guid_storage<Windows::ApplicationModel::AppExtensions::IAppExtensionPackageUninstallingEventArgs>{ static constexpr guid value{ 0x60F160C5,0x171E,0x40FF,{ 0xAE,0x98,0xAB,0x2C,0x20,0xDD,0x4D,0x75 } }; };
template <> struct guid_storage<Windows::ApplicationModel::AppExtensions::IAppExtensionPackageUpdatedEventArgs>{ static constexpr guid value{ 0x3A83C43F,0x797E,0x44B5,{ 0xBA,0x24,0xA4,0xC8,0xB5,0xA5,0x43,0xD7 } }; };
template <> struct guid_storage<Windows::ApplicationModel::AppExtensions::IAppExtensionPackageUpdatingEventArgs>{ static constexpr guid value{ 0x7ED59329,0x1A65,0x4800,{ 0xA7,0x00,0xB3,0x21,0x00,0x9E,0x30,0x6A } }; };
template <> struct default_interface<Windows::ApplicationModel::AppExtensions::AppExtension>{ using type = Windows::ApplicationModel::AppExtensions::IAppExtension; };
template <> struct default_interface<Windows::ApplicationModel::AppExtensions::AppExtensionCatalog>{ using type = Windows::ApplicationModel::AppExtensions::IAppExtensionCatalog; };
template <> struct default_interface<Windows::ApplicationModel::AppExtensions::AppExtensionPackageInstalledEventArgs>{ using type = Windows::ApplicationModel::AppExtensions::IAppExtensionPackageInstalledEventArgs; };
template <> struct default_interface<Windows::ApplicationModel::AppExtensions::AppExtensionPackageStatusChangedEventArgs>{ using type = Windows::ApplicationModel::AppExtensions::IAppExtensionPackageStatusChangedEventArgs; };
template <> struct default_interface<Windows::ApplicationModel::AppExtensions::AppExtensionPackageUninstallingEventArgs>{ using type = Windows::ApplicationModel::AppExtensions::IAppExtensionPackageUninstallingEventArgs; };
template <> struct default_interface<Windows::ApplicationModel::AppExtensions::AppExtensionPackageUpdatedEventArgs>{ using type = Windows::ApplicationModel::AppExtensions::IAppExtensionPackageUpdatedEventArgs; };
template <> struct default_interface<Windows::ApplicationModel::AppExtensions::AppExtensionPackageUpdatingEventArgs>{ using type = Windows::ApplicationModel::AppExtensions::IAppExtensionPackageUpdatingEventArgs; };

template <> struct abi<Windows::ApplicationModel::AppExtensions::IAppExtension>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_Id(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_DisplayName(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Description(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Package(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_AppInfo(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL GetExtensionPropertiesAsync(void** operation) noexcept = 0;
    virtual int32_t WINRT_CALL GetPublicFolderAsync(void** operation) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::AppExtensions::IAppExtensionCatalog>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL FindAllAsync(void** operation) noexcept = 0;
    virtual int32_t WINRT_CALL RequestRemovePackageAsync(void* packageFullName, void** operation) noexcept = 0;
    virtual int32_t WINRT_CALL add_PackageInstalled(void* handler, winrt::event_token* token) noexcept = 0;
    virtual int32_t WINRT_CALL remove_PackageInstalled(winrt::event_token token) noexcept = 0;
    virtual int32_t WINRT_CALL add_PackageUpdating(void* handler, winrt::event_token* token) noexcept = 0;
    virtual int32_t WINRT_CALL remove_PackageUpdating(winrt::event_token token) noexcept = 0;
    virtual int32_t WINRT_CALL add_PackageUpdated(void* handler, winrt::event_token* token) noexcept = 0;
    virtual int32_t WINRT_CALL remove_PackageUpdated(winrt::event_token token) noexcept = 0;
    virtual int32_t WINRT_CALL add_PackageUninstalling(void* handler, winrt::event_token* token) noexcept = 0;
    virtual int32_t WINRT_CALL remove_PackageUninstalling(winrt::event_token token) noexcept = 0;
    virtual int32_t WINRT_CALL add_PackageStatusChanged(void* handler, winrt::event_token* token) noexcept = 0;
    virtual int32_t WINRT_CALL remove_PackageStatusChanged(winrt::event_token token) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::AppExtensions::IAppExtensionCatalogStatics>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL Open(void* appExtensionName, void** value) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::AppExtensions::IAppExtensionPackageInstalledEventArgs>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_AppExtensionName(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Package(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Extensions(void** values) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::AppExtensions::IAppExtensionPackageStatusChangedEventArgs>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_AppExtensionName(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Package(void** value) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::AppExtensions::IAppExtensionPackageUninstallingEventArgs>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_AppExtensionName(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Package(void** value) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::AppExtensions::IAppExtensionPackageUpdatedEventArgs>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_AppExtensionName(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Package(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Extensions(void** values) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::AppExtensions::IAppExtensionPackageUpdatingEventArgs>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_AppExtensionName(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Package(void** value) noexcept = 0;
};};

template <typename D>
struct consume_Windows_ApplicationModel_AppExtensions_IAppExtension
{
    hstring Id() const;
    hstring DisplayName() const;
    hstring Description() const;
    Windows::ApplicationModel::Package Package() const;
    Windows::ApplicationModel::AppInfo AppInfo() const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IPropertySet> GetExtensionPropertiesAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> GetPublicFolderAsync() const;
};
template <> struct consume<Windows::ApplicationModel::AppExtensions::IAppExtension> { template <typename D> using type = consume_Windows_ApplicationModel_AppExtensions_IAppExtension<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_AppExtensions_IAppExtensionCatalog
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::AppExtensions::AppExtension>> FindAllAsync() const;
    Windows::Foundation::IAsyncOperation<bool> RequestRemovePackageAsync(param::hstring const& packageFullName) const;
    winrt::event_token PackageInstalled(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::AppExtensions::AppExtensionCatalog, Windows::ApplicationModel::AppExtensions::AppExtensionPackageInstalledEventArgs> const& handler) const;
    using PackageInstalled_revoker = impl::event_revoker<Windows::ApplicationModel::AppExtensions::IAppExtensionCatalog, &impl::abi_t<Windows::ApplicationModel::AppExtensions::IAppExtensionCatalog>::remove_PackageInstalled>;
    PackageInstalled_revoker PackageInstalled(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::AppExtensions::AppExtensionCatalog, Windows::ApplicationModel::AppExtensions::AppExtensionPackageInstalledEventArgs> const& handler) const;
    void PackageInstalled(winrt::event_token const& token) const noexcept;
    winrt::event_token PackageUpdating(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::AppExtensions::AppExtensionCatalog, Windows::ApplicationModel::AppExtensions::AppExtensionPackageUpdatingEventArgs> const& handler) const;
    using PackageUpdating_revoker = impl::event_revoker<Windows::ApplicationModel::AppExtensions::IAppExtensionCatalog, &impl::abi_t<Windows::ApplicationModel::AppExtensions::IAppExtensionCatalog>::remove_PackageUpdating>;
    PackageUpdating_revoker PackageUpdating(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::AppExtensions::AppExtensionCatalog, Windows::ApplicationModel::AppExtensions::AppExtensionPackageUpdatingEventArgs> const& handler) const;
    void PackageUpdating(winrt::event_token const& token) const noexcept;
    winrt::event_token PackageUpdated(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::AppExtensions::AppExtensionCatalog, Windows::ApplicationModel::AppExtensions::AppExtensionPackageUpdatedEventArgs> const& handler) const;
    using PackageUpdated_revoker = impl::event_revoker<Windows::ApplicationModel::AppExtensions::IAppExtensionCatalog, &impl::abi_t<Windows::ApplicationModel::AppExtensions::IAppExtensionCatalog>::remove_PackageUpdated>;
    PackageUpdated_revoker PackageUpdated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::AppExtensions::AppExtensionCatalog, Windows::ApplicationModel::AppExtensions::AppExtensionPackageUpdatedEventArgs> const& handler) const;
    void PackageUpdated(winrt::event_token const& token) const noexcept;
    winrt::event_token PackageUninstalling(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::AppExtensions::AppExtensionCatalog, Windows::ApplicationModel::AppExtensions::AppExtensionPackageUninstallingEventArgs> const& handler) const;
    using PackageUninstalling_revoker = impl::event_revoker<Windows::ApplicationModel::AppExtensions::IAppExtensionCatalog, &impl::abi_t<Windows::ApplicationModel::AppExtensions::IAppExtensionCatalog>::remove_PackageUninstalling>;
    PackageUninstalling_revoker PackageUninstalling(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::AppExtensions::AppExtensionCatalog, Windows::ApplicationModel::AppExtensions::AppExtensionPackageUninstallingEventArgs> const& handler) const;
    void PackageUninstalling(winrt::event_token const& token) const noexcept;
    winrt::event_token PackageStatusChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::AppExtensions::AppExtensionCatalog, Windows::ApplicationModel::AppExtensions::AppExtensionPackageStatusChangedEventArgs> const& handler) const;
    using PackageStatusChanged_revoker = impl::event_revoker<Windows::ApplicationModel::AppExtensions::IAppExtensionCatalog, &impl::abi_t<Windows::ApplicationModel::AppExtensions::IAppExtensionCatalog>::remove_PackageStatusChanged>;
    PackageStatusChanged_revoker PackageStatusChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::AppExtensions::AppExtensionCatalog, Windows::ApplicationModel::AppExtensions::AppExtensionPackageStatusChangedEventArgs> const& handler) const;
    void PackageStatusChanged(winrt::event_token const& token) const noexcept;
};
template <> struct consume<Windows::ApplicationModel::AppExtensions::IAppExtensionCatalog> { template <typename D> using type = consume_Windows_ApplicationModel_AppExtensions_IAppExtensionCatalog<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_AppExtensions_IAppExtensionCatalogStatics
{
    Windows::ApplicationModel::AppExtensions::AppExtensionCatalog Open(param::hstring const& appExtensionName) const;
};
template <> struct consume<Windows::ApplicationModel::AppExtensions::IAppExtensionCatalogStatics> { template <typename D> using type = consume_Windows_ApplicationModel_AppExtensions_IAppExtensionCatalogStatics<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_AppExtensions_IAppExtensionPackageInstalledEventArgs
{
    hstring AppExtensionName() const;
    Windows::ApplicationModel::Package Package() const;
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::AppExtensions::AppExtension> Extensions() const;
};
template <> struct consume<Windows::ApplicationModel::AppExtensions::IAppExtensionPackageInstalledEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_AppExtensions_IAppExtensionPackageInstalledEventArgs<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_AppExtensions_IAppExtensionPackageStatusChangedEventArgs
{
    hstring AppExtensionName() const;
    Windows::ApplicationModel::Package Package() const;
};
template <> struct consume<Windows::ApplicationModel::AppExtensions::IAppExtensionPackageStatusChangedEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_AppExtensions_IAppExtensionPackageStatusChangedEventArgs<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_AppExtensions_IAppExtensionPackageUninstallingEventArgs
{
    hstring AppExtensionName() const;
    Windows::ApplicationModel::Package Package() const;
};
template <> struct consume<Windows::ApplicationModel::AppExtensions::IAppExtensionPackageUninstallingEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_AppExtensions_IAppExtensionPackageUninstallingEventArgs<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_AppExtensions_IAppExtensionPackageUpdatedEventArgs
{
    hstring AppExtensionName() const;
    Windows::ApplicationModel::Package Package() const;
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::AppExtensions::AppExtension> Extensions() const;
};
template <> struct consume<Windows::ApplicationModel::AppExtensions::IAppExtensionPackageUpdatedEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_AppExtensions_IAppExtensionPackageUpdatedEventArgs<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_AppExtensions_IAppExtensionPackageUpdatingEventArgs
{
    hstring AppExtensionName() const;
    Windows::ApplicationModel::Package Package() const;
};
template <> struct consume<Windows::ApplicationModel::AppExtensions::IAppExtensionPackageUpdatingEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_AppExtensions_IAppExtensionPackageUpdatingEventArgs<D>; };

}
