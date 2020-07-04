// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Management::Deployment {

struct PackageVolume;

}

WINRT_EXPORT namespace winrt::Windows::System {

struct User;

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Store::Preview::InstallControl {

enum class AppInstallState : int32_t
{
    Pending = 0,
    Starting = 1,
    AcquiringLicense = 2,
    Downloading = 3,
    RestoringData = 4,
    Installing = 5,
    Completed = 6,
    Canceled = 7,
    Paused = 8,
    Error = 9,
    PausedLowBattery = 10,
    PausedWiFiRecommended = 11,
    PausedWiFiRequired = 12,
    ReadyToDownload = 13,
};

enum class AppInstallType : int32_t
{
    Install = 0,
    Update = 1,
    Repair = 2,
};

enum class AutoUpdateSetting : int32_t
{
    Disabled = 0,
    Enabled = 1,
    DisabledByPolicy = 2,
    EnabledByPolicy = 3,
};

enum class GetEntitlementStatus : int32_t
{
    Succeeded = 0,
    NoStoreAccount = 1,
    NetworkError = 2,
    ServerError = 3,
};

struct IAppInstallItem;
struct IAppInstallItem2;
struct IAppInstallItem3;
struct IAppInstallItem4;
struct IAppInstallManager;
struct IAppInstallManager2;
struct IAppInstallManager3;
struct IAppInstallManager4;
struct IAppInstallManager5;
struct IAppInstallManager6;
struct IAppInstallManagerItemEventArgs;
struct IAppInstallOptions;
struct IAppInstallStatus;
struct IAppInstallStatus2;
struct IAppInstallStatus3;
struct IAppUpdateOptions;
struct IGetEntitlementResult;
struct AppInstallItem;
struct AppInstallManager;
struct AppInstallManagerItemEventArgs;
struct AppInstallOptions;
struct AppInstallStatus;
struct AppUpdateOptions;
struct GetEntitlementResult;

}

namespace winrt::impl {

template <> struct category<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem2>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem3>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem4>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager2>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager3>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager4>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager5>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager6>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManagerItemEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallOptions>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallStatus>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallStatus2>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallStatus3>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Store::Preview::InstallControl::IAppUpdateOptions>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Store::Preview::InstallControl::IGetEntitlementResult>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManager>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManagerItemEventArgs>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallOptions>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallStatus>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Store::Preview::InstallControl::AppUpdateOptions>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Store::Preview::InstallControl::GetEntitlementResult>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallState>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallType>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Store::Preview::InstallControl::AutoUpdateSetting>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Store::Preview::InstallControl::GetEntitlementStatus>{ using type = enum_category; };
template <> struct name<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallItem" }; };
template <> struct name<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem2>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallItem2" }; };
template <> struct name<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem3>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallItem3" }; };
template <> struct name<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem4>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallItem4" }; };
template <> struct name<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallManager" }; };
template <> struct name<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager2>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallManager2" }; };
template <> struct name<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager3>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallManager3" }; };
template <> struct name<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager4>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallManager4" }; };
template <> struct name<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager5>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallManager5" }; };
template <> struct name<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager6>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallManager6" }; };
template <> struct name<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManagerItemEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallManagerItemEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallOptions>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallOptions" }; };
template <> struct name<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallStatus>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallStatus" }; };
template <> struct name<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallStatus2>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallStatus2" }; };
template <> struct name<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallStatus3>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppInstallStatus3" }; };
template <> struct name<Windows::ApplicationModel::Store::Preview::InstallControl::IAppUpdateOptions>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.InstallControl.IAppUpdateOptions" }; };
template <> struct name<Windows::ApplicationModel::Store::Preview::InstallControl::IGetEntitlementResult>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.InstallControl.IGetEntitlementResult" }; };
template <> struct name<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallItem" }; };
template <> struct name<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManager>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallManager" }; };
template <> struct name<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManagerItemEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallManagerItemEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallOptions>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallOptions" }; };
template <> struct name<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallStatus>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallStatus" }; };
template <> struct name<Windows::ApplicationModel::Store::Preview::InstallControl::AppUpdateOptions>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.InstallControl.AppUpdateOptions" }; };
template <> struct name<Windows::ApplicationModel::Store::Preview::InstallControl::GetEntitlementResult>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.InstallControl.GetEntitlementResult" }; };
template <> struct name<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallState>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallState" }; };
template <> struct name<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallType>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallType" }; };
template <> struct name<Windows::ApplicationModel::Store::Preview::InstallControl::AutoUpdateSetting>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.InstallControl.AutoUpdateSetting" }; };
template <> struct name<Windows::ApplicationModel::Store::Preview::InstallControl::GetEntitlementStatus>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.Preview.InstallControl.GetEntitlementStatus" }; };
template <> struct guid<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem>{ static constexpr GUID value{ 0x49D3DFAB,0x168A,0x4CBF,{ 0xA9,0x3A,0x9E,0x44,0x8C,0x82,0x73,0x7D } }; };
template <> struct guid<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem2>{ static constexpr GUID value{ 0xD3972AF8,0x40C0,0x4FD7,{ 0xAA,0x6C,0x0A,0xA1,0x3C,0xA6,0x18,0x8C } }; };
template <> struct guid<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem3>{ static constexpr GUID value{ 0x6F3DC998,0xDD47,0x433C,{ 0x92,0x34,0x56,0x01,0x72,0xD6,0x7A,0x45 } }; };
template <> struct guid<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem4>{ static constexpr GUID value{ 0xC2D1CE12,0x71FF,0x4FC8,{ 0xB5,0x40,0x45,0x3D,0x4B,0x37,0xE1,0xD1 } }; };
template <> struct guid<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager>{ static constexpr GUID value{ 0x9353E170,0x8441,0x4B45,{ 0xBD,0x72,0x7C,0x2F,0xA9,0x25,0xBE,0xEE } }; };
template <> struct guid<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager2>{ static constexpr GUID value{ 0x16937851,0xED37,0x480D,{ 0x83,0x14,0x52,0xE2,0x7C,0x03,0xF0,0x4A } }; };
template <> struct guid<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager3>{ static constexpr GUID value{ 0x95B24B17,0xE96A,0x4D0E,{ 0x84,0xE1,0xC8,0xCB,0x41,0x7A,0x01,0x78 } }; };
template <> struct guid<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager4>{ static constexpr GUID value{ 0x260A2A16,0x5A9E,0x4EBD,{ 0xB9,0x44,0xF2,0xBA,0x75,0xC3,0x11,0x59 } }; };
template <> struct guid<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager5>{ static constexpr GUID value{ 0x3CD7BE4C,0x1BE9,0x4F7F,{ 0xB6,0x75,0xAA,0x1D,0x64,0xA5,0x29,0xB2 } }; };
template <> struct guid<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager6>{ static constexpr GUID value{ 0xC9E7D408,0xF27A,0x4471,{ 0xB2,0xF4,0xE7,0x6E,0xFC,0xBE,0xBC,0xCA } }; };
template <> struct guid<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManagerItemEventArgs>{ static constexpr GUID value{ 0xBC505743,0x4674,0x4DD1,{ 0x95,0x7E,0xC2,0x56,0x82,0x08,0x6A,0x14 } }; };
template <> struct guid<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallOptions>{ static constexpr GUID value{ 0xC9808300,0x1CB8,0x4EB6,{ 0x8C,0x9F,0x6A,0x30,0xC6,0x4A,0x5B,0x51 } }; };
template <> struct guid<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallStatus>{ static constexpr GUID value{ 0x936DCCFA,0x2450,0x4126,{ 0x88,0xB1,0x61,0x27,0xA6,0x44,0xDD,0x5C } }; };
template <> struct guid<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallStatus2>{ static constexpr GUID value{ 0x96E7818A,0x5E92,0x4AA9,{ 0x8E,0xDC,0x58,0xFE,0xD4,0xB8,0x7E,0x00 } }; };
template <> struct guid<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallStatus3>{ static constexpr GUID value{ 0xCB880C56,0x837B,0x4B4C,{ 0x9E,0xBB,0x6D,0x44,0xA0,0xA9,0x63,0x07 } }; };
template <> struct guid<Windows::ApplicationModel::Store::Preview::InstallControl::IAppUpdateOptions>{ static constexpr GUID value{ 0x26F0B02F,0xC2F3,0x4AEA,{ 0xAF,0x8C,0x63,0x08,0xDD,0x9D,0xB8,0x5F } }; };
template <> struct guid<Windows::ApplicationModel::Store::Preview::InstallControl::IGetEntitlementResult>{ static constexpr GUID value{ 0x74FC843F,0x1A9E,0x4609,{ 0x8E,0x4D,0x81,0x90,0x86,0xD0,0x8A,0x3D } }; };
template <> struct default_interface<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>{ using type = Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem; };
template <> struct default_interface<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManager>{ using type = Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager; };
template <> struct default_interface<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManagerItemEventArgs>{ using type = Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManagerItemEventArgs; };
template <> struct default_interface<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallOptions>{ using type = Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallOptions; };
template <> struct default_interface<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallStatus>{ using type = Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallStatus; };
template <> struct default_interface<Windows::ApplicationModel::Store::Preview::InstallControl::AppUpdateOptions>{ using type = Windows::ApplicationModel::Store::Preview::InstallControl::IAppUpdateOptions; };
template <> struct default_interface<Windows::ApplicationModel::Store::Preview::InstallControl::GetEntitlementResult>{ using type = Windows::ApplicationModel::Store::Preview::InstallControl::IGetEntitlementResult; };

template <typename D>
struct consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem
{
    hstring ProductId() const;
    hstring PackageFamilyName() const;
    Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallType InstallType() const;
    bool IsUserInitiated() const;
    Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallStatus GetCurrentStatus() const;
    void Cancel() const;
    void Pause() const;
    void Restart() const;
    event_token Completed(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem, Windows::Foundation::IInspectable> const& handler) const;
    using Completed_revoker = event_revoker<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem>;
    Completed_revoker Completed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem, Windows::Foundation::IInspectable> const& handler) const;
    void Completed(event_token const& token) const;
    event_token StatusChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem, Windows::Foundation::IInspectable> const& handler) const;
    using StatusChanged_revoker = event_revoker<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem>;
    StatusChanged_revoker StatusChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem, Windows::Foundation::IInspectable> const& handler) const;
    void StatusChanged(event_token const& token) const;
};
template <> struct consume<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem> { template <typename D> using type = consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem2
{
    void Cancel(param::hstring const& correlationVector) const;
    void Pause(param::hstring const& correlationVector) const;
    void Restart(param::hstring const& correlationVector) const;
};
template <> struct consume<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem2> { template <typename D> using type = consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem2<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem3
{
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem> Children() const;
    bool ItemOperationsMightAffectOtherItems() const;
};
template <> struct consume<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem3> { template <typename D> using type = consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem3<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem4
{
    bool LaunchAfterInstall() const;
    void LaunchAfterInstall(bool value) const;
};
template <> struct consume<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem4> { template <typename D> using type = consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallItem4<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager
{
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem> AppInstallItems() const;
    void Cancel(param::hstring const& productId) const;
    void Pause(param::hstring const& productId) const;
    void Restart(param::hstring const& productId) const;
    event_token ItemCompleted(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManager, Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManagerItemEventArgs> const& handler) const;
    using ItemCompleted_revoker = event_revoker<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager>;
    ItemCompleted_revoker ItemCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManager, Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManagerItemEventArgs> const& handler) const;
    void ItemCompleted(event_token const& token) const;
    event_token ItemStatusChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManager, Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManagerItemEventArgs> const& handler) const;
    using ItemStatusChanged_revoker = event_revoker<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager>;
    ItemStatusChanged_revoker ItemStatusChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManager, Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallManagerItemEventArgs> const& handler) const;
    void ItemStatusChanged(event_token const& token) const;
    Windows::ApplicationModel::Store::Preview::InstallControl::AutoUpdateSetting AutoUpdateSetting() const;
    void AutoUpdateSetting(Windows::ApplicationModel::Store::Preview::InstallControl::AutoUpdateSetting const& value) const;
    hstring AcquisitionIdentity() const;
    void AcquisitionIdentity(param::hstring const& value) const;
    Windows::Foundation::IAsyncOperation<bool> GetIsApplicableAsync(param::hstring const& productId, param::hstring const& skuId) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem> StartAppInstallAsync(param::hstring const& productId, param::hstring const& skuId, bool repair, bool forceUseOfNonRemovableStorage) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem> UpdateAppByPackageFamilyNameAsync(param::hstring const& packageFamilyName) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem> SearchForUpdatesAsync(param::hstring const& productId, param::hstring const& skuId) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>> SearchForAllUpdatesAsync() const;
    Windows::Foundation::IAsyncOperation<bool> IsStoreBlockedByPolicyAsync(param::hstring const& storeClientName, param::hstring const& storeClientPublisher) const;
    Windows::Foundation::IAsyncOperation<bool> GetIsAppAllowedToInstallAsync(param::hstring const& productId) const;
};
template <> struct consume<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager> { template <typename D> using type = consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager2
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem> StartAppInstallAsync(param::hstring const& productId, param::hstring const& skuId, bool repair, bool forceUseOfNonRemovableStorage, param::hstring const& catalogId, param::hstring const& bundleId, param::hstring const& correlationVector) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem> UpdateAppByPackageFamilyNameAsync(param::hstring const& packageFamilyName, param::hstring const& correlationVector) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem> SearchForUpdatesAsync(param::hstring const& productId, param::hstring const& skuId, param::hstring const& catalogId, param::hstring const& correlationVector) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>> SearchForAllUpdatesAsync(param::hstring const& correlationVector) const;
    Windows::Foundation::IAsyncOperation<bool> GetIsAppAllowedToInstallAsync(param::hstring const& productId, param::hstring const& skuId, param::hstring const& catalogId, param::hstring const& correlationVector) const;
    void Cancel(param::hstring const& productId, param::hstring const& correlationVector) const;
    void Pause(param::hstring const& productId, param::hstring const& correlationVector) const;
    void Restart(param::hstring const& productId, param::hstring const& correlationVector) const;
};
template <> struct consume<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager2> { template <typename D> using type = consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager2<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager3
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>> StartProductInstallAsync(param::hstring const& productId, param::hstring const& catalogId, param::hstring const& flightId, param::hstring const& clientId, bool repair, bool forceUseOfNonRemovableStorage, param::hstring const& correlationVector, Windows::Management::Deployment::PackageVolume const& targetVolume) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>> StartProductInstallForUserAsync(Windows::System::User const& user, param::hstring const& productId, param::hstring const& catalogId, param::hstring const& flightId, param::hstring const& clientId, bool repair, bool forceUseOfNonRemovableStorage, param::hstring const& correlationVector, Windows::Management::Deployment::PackageVolume const& targetVolume) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem> UpdateAppByPackageFamilyNameForUserAsync(Windows::System::User const& user, param::hstring const& packageFamilyName, param::hstring const& correlationVector) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem> SearchForUpdatesForUserAsync(Windows::System::User const& user, param::hstring const& productId, param::hstring const& skuId, param::hstring const& catalogId, param::hstring const& correlationVector) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>> SearchForAllUpdatesForUserAsync(Windows::System::User const& user, param::hstring const& correlationVector) const;
    Windows::Foundation::IAsyncOperation<bool> GetIsAppAllowedToInstallForUserAsync(Windows::System::User const& user, param::hstring const& productId, param::hstring const& skuId, param::hstring const& catalogId, param::hstring const& correlationVector) const;
    Windows::Foundation::IAsyncOperation<bool> GetIsApplicableForUserAsync(Windows::System::User const& user, param::hstring const& productId, param::hstring const& skuId) const;
    void MoveToFrontOfDownloadQueue(param::hstring const& productId, param::hstring const& correlationVector) const;
};
template <> struct consume<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager3> { template <typename D> using type = consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager3<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager4
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::GetEntitlementResult> GetFreeUserEntitlementAsync(param::hstring const& storeId, param::hstring const& campaignId, param::hstring const& correlationVector) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::GetEntitlementResult> GetFreeUserEntitlementForUserAsync(Windows::System::User const& user, param::hstring const& storeId, param::hstring const& campaignId, param::hstring const& correlationVector) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::GetEntitlementResult> GetFreeDeviceEntitlementAsync(param::hstring const& storeId, param::hstring const& campaignId, param::hstring const& correlationVector) const;
};
template <> struct consume<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager4> { template <typename D> using type = consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager4<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager5
{
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem> AppInstallItemsWithGroupSupport() const;
};
template <> struct consume<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager5> { template <typename D> using type = consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager5<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager6
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>> SearchForAllUpdatesAsync(param::hstring const& correlationVector, param::hstring const& clientId, Windows::ApplicationModel::Store::Preview::InstallControl::AppUpdateOptions const& updateOptions) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>> SearchForAllUpdatesForUserAsync(Windows::System::User const& user, param::hstring const& correlationVector, param::hstring const& clientId, Windows::ApplicationModel::Store::Preview::InstallControl::AppUpdateOptions const& updateOptions) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem> SearchForUpdatesAsync(param::hstring const& productId, param::hstring const& skuId, param::hstring const& correlationVector, param::hstring const& clientId, Windows::ApplicationModel::Store::Preview::InstallControl::AppUpdateOptions const& updateOptions) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem> SearchForUpdatesForUserAsync(Windows::System::User const& user, param::hstring const& productId, param::hstring const& skuId, param::hstring const& correlationVector, param::hstring const& clientId, Windows::ApplicationModel::Store::Preview::InstallControl::AppUpdateOptions const& updateOptions) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>> StartProductInstallAsync(param::hstring const& productId, param::hstring const& flightId, param::hstring const& clientId, param::hstring const& correlationVector, Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallOptions const& installOptions) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem>> StartProductInstallForUserAsync(Windows::System::User const& user, param::hstring const& productId, param::hstring const& flightId, param::hstring const& clientId, param::hstring const& correlationVector, Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallOptions const& installOptions) const;
    Windows::Foundation::IAsyncOperation<bool> GetIsPackageIdentityAllowedToInstallAsync(param::hstring const& correlationVector, param::hstring const& packageIdentityName, param::hstring const& publisherCertificateName) const;
    Windows::Foundation::IAsyncOperation<bool> GetIsPackageIdentityAllowedToInstallForUserAsync(Windows::System::User const& user, param::hstring const& correlationVector, param::hstring const& packageIdentityName, param::hstring const& publisherCertificateName) const;
};
template <> struct consume<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager6> { template <typename D> using type = consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManager6<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManagerItemEventArgs
{
    Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem Item() const;
};
template <> struct consume<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManagerItemEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallManagerItemEventArgs<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallOptions
{
    hstring CatalogId() const;
    void CatalogId(param::hstring const& value) const;
    bool ForceUseOfNonRemovableStorage() const;
    void ForceUseOfNonRemovableStorage(bool value) const;
    bool AllowForcedAppRestart() const;
    void AllowForcedAppRestart(bool value) const;
    bool Repair() const;
    void Repair(bool value) const;
    Windows::Management::Deployment::PackageVolume TargetVolume() const;
    void TargetVolume(Windows::Management::Deployment::PackageVolume const& value) const;
    bool LaunchAfterInstall() const;
    void LaunchAfterInstall(bool value) const;
};
template <> struct consume<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallOptions> { template <typename D> using type = consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallOptions<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallStatus
{
    Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallState InstallState() const;
    uint64_t DownloadSizeInBytes() const;
    uint64_t BytesDownloaded() const;
    double PercentComplete() const;
    HRESULT ErrorCode() const;
};
template <> struct consume<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallStatus> { template <typename D> using type = consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallStatus<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallStatus2
{
    Windows::System::User User() const;
    bool ReadyForLaunch() const;
};
template <> struct consume<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallStatus2> { template <typename D> using type = consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallStatus2<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallStatus3
{
    bool IsStaged() const;
};
template <> struct consume<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallStatus3> { template <typename D> using type = consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppInstallStatus3<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppUpdateOptions
{
    hstring CatalogId() const;
    void CatalogId(param::hstring const& value) const;
    bool AllowForcedAppRestart() const;
    void AllowForcedAppRestart(bool value) const;
};
template <> struct consume<Windows::ApplicationModel::Store::Preview::InstallControl::IAppUpdateOptions> { template <typename D> using type = consume_Windows_ApplicationModel_Store_Preview_InstallControl_IAppUpdateOptions<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Store_Preview_InstallControl_IGetEntitlementResult
{
    Windows::ApplicationModel::Store::Preview::InstallControl::GetEntitlementStatus Status() const;
};
template <> struct consume<Windows::ApplicationModel::Store::Preview::InstallControl::IGetEntitlementResult> { template <typename D> using type = consume_Windows_ApplicationModel_Store_Preview_InstallControl_IGetEntitlementResult<D>; };

template <> struct abi<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_ProductId(HSTRING* value) noexcept = 0;
    virtual HRESULT __stdcall get_PackageFamilyName(HSTRING* value) noexcept = 0;
    virtual HRESULT __stdcall get_InstallType(Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallType* value) noexcept = 0;
    virtual HRESULT __stdcall get_IsUserInitiated(bool* value) noexcept = 0;
    virtual HRESULT __stdcall GetCurrentStatus(void** result) noexcept = 0;
    virtual HRESULT __stdcall Cancel() noexcept = 0;
    virtual HRESULT __stdcall Pause() noexcept = 0;
    virtual HRESULT __stdcall Restart() noexcept = 0;
    virtual HRESULT __stdcall add_Completed(void* handler, event_token* token) noexcept = 0;
    virtual HRESULT __stdcall remove_Completed(event_token token) noexcept = 0;
    virtual HRESULT __stdcall add_StatusChanged(void* handler, event_token* token) noexcept = 0;
    virtual HRESULT __stdcall remove_StatusChanged(event_token token) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem2>{ struct type : IInspectable
{
    virtual HRESULT __stdcall CancelWithTelemetry(HSTRING correlationVector) noexcept = 0;
    virtual HRESULT __stdcall PauseWithTelemetry(HSTRING correlationVector) noexcept = 0;
    virtual HRESULT __stdcall RestartWithTelemetry(HSTRING correlationVector) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem3>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_Children(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_ItemOperationsMightAffectOtherItems(bool* value) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallItem4>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_LaunchAfterInstall(bool* value) noexcept = 0;
    virtual HRESULT __stdcall put_LaunchAfterInstall(bool value) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_AppInstallItems(void** value) noexcept = 0;
    virtual HRESULT __stdcall Cancel(HSTRING productId) noexcept = 0;
    virtual HRESULT __stdcall Pause(HSTRING productId) noexcept = 0;
    virtual HRESULT __stdcall Restart(HSTRING productId) noexcept = 0;
    virtual HRESULT __stdcall add_ItemCompleted(void* handler, event_token* token) noexcept = 0;
    virtual HRESULT __stdcall remove_ItemCompleted(event_token token) noexcept = 0;
    virtual HRESULT __stdcall add_ItemStatusChanged(void* handler, event_token* token) noexcept = 0;
    virtual HRESULT __stdcall remove_ItemStatusChanged(event_token token) noexcept = 0;
    virtual HRESULT __stdcall get_AutoUpdateSetting(Windows::ApplicationModel::Store::Preview::InstallControl::AutoUpdateSetting* value) noexcept = 0;
    virtual HRESULT __stdcall put_AutoUpdateSetting(Windows::ApplicationModel::Store::Preview::InstallControl::AutoUpdateSetting value) noexcept = 0;
    virtual HRESULT __stdcall get_AcquisitionIdentity(HSTRING* value) noexcept = 0;
    virtual HRESULT __stdcall put_AcquisitionIdentity(HSTRING value) noexcept = 0;
    virtual HRESULT __stdcall GetIsApplicableAsync(HSTRING productId, HSTRING skuId, void** operation) noexcept = 0;
    virtual HRESULT __stdcall StartAppInstallAsync(HSTRING productId, HSTRING skuId, bool repair, bool forceUseOfNonRemovableStorage, void** operation) noexcept = 0;
    virtual HRESULT __stdcall UpdateAppByPackageFamilyNameAsync(HSTRING packageFamilyName, void** operation) noexcept = 0;
    virtual HRESULT __stdcall SearchForUpdatesAsync(HSTRING productId, HSTRING skuId, void** operation) noexcept = 0;
    virtual HRESULT __stdcall SearchForAllUpdatesAsync(void** operation) noexcept = 0;
    virtual HRESULT __stdcall IsStoreBlockedByPolicyAsync(HSTRING storeClientName, HSTRING storeClientPublisher, void** operation) noexcept = 0;
    virtual HRESULT __stdcall GetIsAppAllowedToInstallAsync(HSTRING productId, void** operation) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager2>{ struct type : IInspectable
{
    virtual HRESULT __stdcall StartAppInstallWithTelemetryAsync(HSTRING productId, HSTRING skuId, bool repair, bool forceUseOfNonRemovableStorage, HSTRING catalogId, HSTRING bundleId, HSTRING correlationVector, void** operation) noexcept = 0;
    virtual HRESULT __stdcall UpdateAppByPackageFamilyNameWithTelemetryAsync(HSTRING packageFamilyName, HSTRING correlationVector, void** operation) noexcept = 0;
    virtual HRESULT __stdcall SearchForUpdatesWithTelemetryAsync(HSTRING productId, HSTRING skuId, HSTRING catalogId, HSTRING correlationVector, void** operation) noexcept = 0;
    virtual HRESULT __stdcall SearchForAllUpdatesWithTelemetryAsync(HSTRING correlationVector, void** operation) noexcept = 0;
    virtual HRESULT __stdcall GetIsAppAllowedToInstallWithTelemetryAsync(HSTRING productId, HSTRING skuId, HSTRING catalogId, HSTRING correlationVector, void** operation) noexcept = 0;
    virtual HRESULT __stdcall CancelWithTelemetry(HSTRING productId, HSTRING correlationVector) noexcept = 0;
    virtual HRESULT __stdcall PauseWithTelemetry(HSTRING productId, HSTRING correlationVector) noexcept = 0;
    virtual HRESULT __stdcall RestartWithTelemetry(HSTRING productId, HSTRING correlationVector) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager3>{ struct type : IInspectable
{
    virtual HRESULT __stdcall StartProductInstallAsync(HSTRING productId, HSTRING catalogId, HSTRING flightId, HSTRING clientId, bool repair, bool forceUseOfNonRemovableStorage, HSTRING correlationVector, void* targetVolume, void** operation) noexcept = 0;
    virtual HRESULT __stdcall StartProductInstallForUserAsync(void* user, HSTRING productId, HSTRING catalogId, HSTRING flightId, HSTRING clientId, bool repair, bool forceUseOfNonRemovableStorage, HSTRING correlationVector, void* targetVolume, void** operation) noexcept = 0;
    virtual HRESULT __stdcall UpdateAppByPackageFamilyNameForUserAsync(void* user, HSTRING packageFamilyName, HSTRING correlationVector, void** operation) noexcept = 0;
    virtual HRESULT __stdcall SearchForUpdatesForUserAsync(void* user, HSTRING productId, HSTRING skuId, HSTRING catalogId, HSTRING correlationVector, void** operation) noexcept = 0;
    virtual HRESULT __stdcall SearchForAllUpdatesForUserAsync(void* user, HSTRING correlationVector, void** operation) noexcept = 0;
    virtual HRESULT __stdcall GetIsAppAllowedToInstallForUserAsync(void* user, HSTRING productId, HSTRING skuId, HSTRING catalogId, HSTRING correlationVector, void** operation) noexcept = 0;
    virtual HRESULT __stdcall GetIsApplicableForUserAsync(void* user, HSTRING productId, HSTRING skuId, void** operation) noexcept = 0;
    virtual HRESULT __stdcall MoveToFrontOfDownloadQueue(HSTRING productId, HSTRING correlationVector) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager4>{ struct type : IInspectable
{
    virtual HRESULT __stdcall GetFreeUserEntitlementAsync(HSTRING storeId, HSTRING campaignId, HSTRING correlationVector, void** ppAsyncOperation) noexcept = 0;
    virtual HRESULT __stdcall GetFreeUserEntitlementForUserAsync(void* user, HSTRING storeId, HSTRING campaignId, HSTRING correlationVector, void** ppAsyncOperation) noexcept = 0;
    virtual HRESULT __stdcall GetFreeDeviceEntitlementAsync(HSTRING storeId, HSTRING campaignId, HSTRING correlationVector, void** ppAsyncOperation) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager5>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_AppInstallItemsWithGroupSupport(void** value) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager6>{ struct type : IInspectable
{
    virtual HRESULT __stdcall SearchForAllUpdatesWithUpdateOptionsAsync(HSTRING correlationVector, HSTRING clientId, void* updateOptions, void** operation) noexcept = 0;
    virtual HRESULT __stdcall SearchForAllUpdatesWithUpdateOptionsForUserAsync(void* user, HSTRING correlationVector, HSTRING clientId, void* updateOptions, void** operation) noexcept = 0;
    virtual HRESULT __stdcall SearchForUpdatesWithUpdateOptionsAsync(HSTRING productId, HSTRING skuId, HSTRING correlationVector, HSTRING clientId, void* updateOptions, void** operation) noexcept = 0;
    virtual HRESULT __stdcall SearchForUpdatesWithUpdateOptionsForUserAsync(void* user, HSTRING productId, HSTRING skuId, HSTRING correlationVector, HSTRING clientId, void* updateOptions, void** operation) noexcept = 0;
    virtual HRESULT __stdcall StartProductInstallWithOptionsAsync(HSTRING productId, HSTRING flightId, HSTRING clientId, HSTRING correlationVector, void* installOptions, void** operation) noexcept = 0;
    virtual HRESULT __stdcall StartProductInstallWithOptionsForUserAsync(void* user, HSTRING productId, HSTRING flightId, HSTRING clientId, HSTRING correlationVector, void* installOptions, void** operation) noexcept = 0;
    virtual HRESULT __stdcall GetIsPackageIdentityAllowedToInstallAsync(HSTRING correlationVector, HSTRING packageIdentityName, HSTRING publisherCertificateName, void** operation) noexcept = 0;
    virtual HRESULT __stdcall GetIsPackageIdentityAllowedToInstallForUserAsync(void* user, HSTRING correlationVector, HSTRING packageIdentityName, HSTRING publisherCertificateName, void** operation) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManagerItemEventArgs>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_Item(void** value) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallOptions>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_CatalogId(HSTRING* value) noexcept = 0;
    virtual HRESULT __stdcall put_CatalogId(HSTRING value) noexcept = 0;
    virtual HRESULT __stdcall get_ForceUseOfNonRemovableStorage(bool* value) noexcept = 0;
    virtual HRESULT __stdcall put_ForceUseOfNonRemovableStorage(bool value) noexcept = 0;
    virtual HRESULT __stdcall get_AllowForcedAppRestart(bool* value) noexcept = 0;
    virtual HRESULT __stdcall put_AllowForcedAppRestart(bool value) noexcept = 0;
    virtual HRESULT __stdcall get_Repair(bool* value) noexcept = 0;
    virtual HRESULT __stdcall put_Repair(bool value) noexcept = 0;
    virtual HRESULT __stdcall get_TargetVolume(void** value) noexcept = 0;
    virtual HRESULT __stdcall put_TargetVolume(void* value) noexcept = 0;
    virtual HRESULT __stdcall get_LaunchAfterInstall(bool* value) noexcept = 0;
    virtual HRESULT __stdcall put_LaunchAfterInstall(bool value) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallStatus>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_InstallState(Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallState* value) noexcept = 0;
    virtual HRESULT __stdcall get_DownloadSizeInBytes(uint64_t* value) noexcept = 0;
    virtual HRESULT __stdcall get_BytesDownloaded(uint64_t* value) noexcept = 0;
    virtual HRESULT __stdcall get_PercentComplete(double* value) noexcept = 0;
    virtual HRESULT __stdcall get_ErrorCode(HRESULT* value) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallStatus2>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_User(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_ReadyForLaunch(bool* value) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallStatus3>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_IsStaged(bool* value) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Store::Preview::InstallControl::IAppUpdateOptions>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_CatalogId(HSTRING* value) noexcept = 0;
    virtual HRESULT __stdcall put_CatalogId(HSTRING value) noexcept = 0;
    virtual HRESULT __stdcall get_AllowForcedAppRestart(bool* value) noexcept = 0;
    virtual HRESULT __stdcall put_AllowForcedAppRestart(bool value) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Store::Preview::InstallControl::IGetEntitlementResult>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_Status(Windows::ApplicationModel::Store::Preview::InstallControl::GetEntitlementStatus* value) noexcept = 0;
};};

}
