// C++/WinRT v2.0.200609.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_H
#define WINRT_Windows_ApplicationModel_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.200609.3"), "Mismatched C++/WinRT headers.");
#include "winrt/impl/Windows.ApplicationModel.Activation.2.h"
#include "winrt/impl/Windows.ApplicationModel.Core.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Storage.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.System.2.h"
#include "winrt/impl/Windows.ApplicationModel.2.h"
namespace winrt::impl
{
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_IAppDisplayInfo<D>::DisplayName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IAppDisplayInfo)->get_DisplayName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_IAppDisplayInfo<D>::Description() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IAppDisplayInfo)->get_Description(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Storage::Streams::RandomAccessStreamReference) consume_Windows_ApplicationModel_IAppDisplayInfo<D>::GetLogo(Windows::Foundation::Size const& size) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IAppDisplayInfo)->GetLogo(impl::bind_in(size), &value));
        return Windows::Storage::Streams::RandomAccessStreamReference{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_IAppInfo<D>::Id() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IAppInfo)->get_Id(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_IAppInfo<D>::AppUserModelId() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IAppInfo)->get_AppUserModelId(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::AppDisplayInfo) consume_Windows_ApplicationModel_IAppInfo<D>::DisplayInfo() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IAppInfo)->get_DisplayInfo(&value));
        return Windows::ApplicationModel::AppDisplayInfo{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_IAppInfo<D>::PackageFamilyName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IAppInfo)->get_PackageFamilyName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::Package) consume_Windows_ApplicationModel_IAppInfo2<D>::Package() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IAppInfo2)->get_Package(&value));
        return Windows::ApplicationModel::Package{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::AppExecutionContext) consume_Windows_ApplicationModel_IAppInfo3<D>::ExecutionContext() const
    {
        Windows::ApplicationModel::AppExecutionContext value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IAppInfo3)->get_ExecutionContext(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(com_array<hstring>) consume_Windows_ApplicationModel_IAppInfo4<D>::SupportedFileExtensions() const
    {
        uint32_t value_impl_size{};
        void** value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IAppInfo4)->get_SupportedFileExtensions(&value_impl_size, &value));
        return com_array<hstring>{ value, value_impl_size, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::AppInfo) consume_Windows_ApplicationModel_IAppInfoStatics<D>::Current() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IAppInfoStatics)->get_Current(&value));
        return Windows::ApplicationModel::AppInfo{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::AppInfo) consume_Windows_ApplicationModel_IAppInfoStatics<D>::GetFromAppUserModelId(param::hstring const& appUserModelId) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IAppInfoStatics)->GetFromAppUserModelId(*(void**)(&appUserModelId), &result));
        return Windows::ApplicationModel::AppInfo{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::AppInfo) consume_Windows_ApplicationModel_IAppInfoStatics<D>::GetFromAppUserModelIdForUser(Windows::System::User const& user, param::hstring const& appUserModelId) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IAppInfoStatics)->GetFromAppUserModelIdForUser(*(void**)(&user), *(void**)(&appUserModelId), &result));
        return Windows::ApplicationModel::AppInfo{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Uri) consume_Windows_ApplicationModel_IAppInstallerInfo<D>::Uri() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IAppInstallerInfo)->get_Uri(&value));
        return Windows::Foundation::Uri{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_IAppInstance<D>::Key() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IAppInstance)->get_Key(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_ApplicationModel_IAppInstance<D>::IsCurrentInstance() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IAppInstance)->get_IsCurrentInstance(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_IAppInstance<D>::RedirectActivationTo() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IAppInstance)->RedirectActivationTo());
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::AppInstance) consume_Windows_ApplicationModel_IAppInstanceStatics<D>::RecommendedInstance() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IAppInstanceStatics)->get_RecommendedInstance(&value));
        return Windows::ApplicationModel::AppInstance{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::Activation::IActivatedEventArgs) consume_Windows_ApplicationModel_IAppInstanceStatics<D>::GetActivatedEventArgs() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IAppInstanceStatics)->GetActivatedEventArgs(&result));
        return Windows::ApplicationModel::Activation::IActivatedEventArgs{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::AppInstance) consume_Windows_ApplicationModel_IAppInstanceStatics<D>::FindOrRegisterInstanceForKey(param::hstring const& key) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IAppInstanceStatics)->FindOrRegisterInstanceForKey(*(void**)(&key), &result));
        return Windows::ApplicationModel::AppInstance{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_IAppInstanceStatics<D>::Unregister() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IAppInstanceStatics)->Unregister());
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::ApplicationModel::AppInstance>) consume_Windows_ApplicationModel_IAppInstanceStatics<D>::GetInstances() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IAppInstanceStatics)->GetInstances(&result));
        return Windows::Foundation::Collections::IVector<Windows::ApplicationModel::AppInstance>{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_ApplicationModel_IDesignModeStatics<D>::DesignModeEnabled() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IDesignModeStatics)->get_DesignModeEnabled(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_ApplicationModel_IDesignModeStatics2<D>::DesignMode2Enabled() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IDesignModeStatics2)->get_DesignMode2Enabled(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Deferral) consume_Windows_ApplicationModel_IEnteredBackgroundEventArgs<D>::GetDeferral() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IEnteredBackgroundEventArgs)->GetDeferral(&value));
        return Windows::Foundation::Deferral{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) consume_Windows_ApplicationModel_IFullTrustProcessLauncherStatics<D>::LaunchFullTrustProcessForCurrentAppAsync() const
    {
        void* asyncAction{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IFullTrustProcessLauncherStatics)->LaunchFullTrustProcessForCurrentAppAsync(&asyncAction));
        return Windows::Foundation::IAsyncAction{ asyncAction, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) consume_Windows_ApplicationModel_IFullTrustProcessLauncherStatics<D>::LaunchFullTrustProcessForCurrentAppAsync(param::hstring const& parameterGroupId) const
    {
        void* asyncAction{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IFullTrustProcessLauncherStatics)->LaunchFullTrustProcessForCurrentAppWithParametersAsync(*(void**)(&parameterGroupId), &asyncAction));
        return Windows::Foundation::IAsyncAction{ asyncAction, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) consume_Windows_ApplicationModel_IFullTrustProcessLauncherStatics<D>::LaunchFullTrustProcessForAppAsync(param::hstring const& fullTrustPackageRelativeAppId) const
    {
        void* asyncAction{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IFullTrustProcessLauncherStatics)->LaunchFullTrustProcessForAppAsync(*(void**)(&fullTrustPackageRelativeAppId), &asyncAction));
        return Windows::Foundation::IAsyncAction{ asyncAction, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) consume_Windows_ApplicationModel_IFullTrustProcessLauncherStatics<D>::LaunchFullTrustProcessForAppAsync(param::hstring const& fullTrustPackageRelativeAppId, param::hstring const& parameterGroupId) const
    {
        void* asyncAction{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IFullTrustProcessLauncherStatics)->LaunchFullTrustProcessForAppWithParametersAsync(*(void**)(&fullTrustPackageRelativeAppId), *(void**)(&parameterGroupId), &asyncAction));
        return Windows::Foundation::IAsyncAction{ asyncAction, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Deferral) consume_Windows_ApplicationModel_ILeavingBackgroundEventArgs<D>::GetDeferral() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::ILeavingBackgroundEventArgs)->GetDeferral(&value));
        return Windows::Foundation::Deferral{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_ILimitedAccessFeatureRequestResult<D>::FeatureId() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::ILimitedAccessFeatureRequestResult)->get_FeatureId(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::LimitedAccessFeatureStatus) consume_Windows_ApplicationModel_ILimitedAccessFeatureRequestResult<D>::Status() const
    {
        Windows::ApplicationModel::LimitedAccessFeatureStatus value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::ILimitedAccessFeatureRequestResult)->get_Status(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IReference<Windows::Foundation::DateTime>) consume_Windows_ApplicationModel_ILimitedAccessFeatureRequestResult<D>::EstimatedRemovalDate() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::ILimitedAccessFeatureRequestResult)->get_EstimatedRemovalDate(&value));
        return Windows::Foundation::IReference<Windows::Foundation::DateTime>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::LimitedAccessFeatureRequestResult) consume_Windows_ApplicationModel_ILimitedAccessFeaturesStatics<D>::TryUnlockFeature(param::hstring const& featureId, param::hstring const& token, param::hstring const& attestation) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::ILimitedAccessFeaturesStatics)->TryUnlockFeature(*(void**)(&featureId), *(void**)(&token), *(void**)(&attestation), &result));
        return Windows::ApplicationModel::LimitedAccessFeatureRequestResult{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::PackageId) consume_Windows_ApplicationModel_IPackage<D>::Id() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackage)->get_Id(&value));
        return Windows::ApplicationModel::PackageId{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Storage::StorageFolder) consume_Windows_ApplicationModel_IPackage<D>::InstalledLocation() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackage)->get_InstalledLocation(&value));
        return Windows::Storage::StorageFolder{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_ApplicationModel_IPackage<D>::IsFramework() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackage)->get_IsFramework(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Package>) consume_Windows_ApplicationModel_IPackage<D>::Dependencies() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackage)->get_Dependencies(&value));
        return Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Package>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_IPackage2<D>::DisplayName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackage2)->get_DisplayName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_IPackage2<D>::PublisherDisplayName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackage2)->get_PublisherDisplayName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_IPackage2<D>::Description() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackage2)->get_Description(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Uri) consume_Windows_ApplicationModel_IPackage2<D>::Logo() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackage2)->get_Logo(&value));
        return Windows::Foundation::Uri{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_ApplicationModel_IPackage2<D>::IsResourcePackage() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackage2)->get_IsResourcePackage(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_ApplicationModel_IPackage2<D>::IsBundle() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackage2)->get_IsBundle(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_ApplicationModel_IPackage2<D>::IsDevelopmentMode() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackage2)->get_IsDevelopmentMode(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::PackageStatus) consume_Windows_ApplicationModel_IPackage3<D>::Status() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackage3)->get_Status(&value));
        return Windows::ApplicationModel::PackageStatus{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::DateTime) consume_Windows_ApplicationModel_IPackage3<D>::InstalledDate() const
    {
        Windows::Foundation::DateTime value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackage3)->get_InstalledDate(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Core::AppListEntry>>) consume_Windows_ApplicationModel_IPackage3<D>::GetAppListEntriesAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackage3)->GetAppListEntriesAsync(&operation));
        return Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Core::AppListEntry>>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::PackageSignatureKind) consume_Windows_ApplicationModel_IPackage4<D>::SignatureKind() const
    {
        Windows::ApplicationModel::PackageSignatureKind value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackage4)->get_SignatureKind(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_ApplicationModel_IPackage4<D>::IsOptional() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackage4)->get_IsOptional(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<bool>) consume_Windows_ApplicationModel_IPackage4<D>::VerifyContentIntegrityAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackage4)->VerifyContentIntegrityAsync(&operation));
        return Windows::Foundation::IAsyncOperation<bool>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::PackageContentGroup>>) consume_Windows_ApplicationModel_IPackage5<D>::GetContentGroupsAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackage5)->GetContentGroupsAsync(&operation));
        return Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::PackageContentGroup>>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::PackageContentGroup>) consume_Windows_ApplicationModel_IPackage5<D>::GetContentGroupAsync(param::hstring const& name) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackage5)->GetContentGroupAsync(*(void**)(&name), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::PackageContentGroup>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::PackageContentGroup>>) consume_Windows_ApplicationModel_IPackage5<D>::StageContentGroupsAsync(param::async_iterable<hstring> const& names) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackage5)->StageContentGroupsAsync(*(void**)(&names), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::PackageContentGroup>>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::PackageContentGroup>>) consume_Windows_ApplicationModel_IPackage5<D>::StageContentGroupsAsync(param::async_iterable<hstring> const& names, bool moveToHeadOfQueue) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackage5)->StageContentGroupsWithPriorityAsync(*(void**)(&names), moveToHeadOfQueue, &operation));
        return Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::PackageContentGroup>>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<bool>) consume_Windows_ApplicationModel_IPackage5<D>::SetInUseAsync(bool inUse) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackage5)->SetInUseAsync(inUse, &operation));
        return Windows::Foundation::IAsyncOperation<bool>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::AppInstallerInfo) consume_Windows_ApplicationModel_IPackage6<D>::GetAppInstallerInfo() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackage6)->GetAppInstallerInfo(&value));
        return Windows::ApplicationModel::AppInstallerInfo{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::PackageUpdateAvailabilityResult>) consume_Windows_ApplicationModel_IPackage6<D>::CheckUpdateAvailabilityAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackage6)->CheckUpdateAvailabilityAsync(&operation));
        return Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::PackageUpdateAvailabilityResult>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Storage::StorageFolder) consume_Windows_ApplicationModel_IPackage7<D>::MutableLocation() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackage7)->get_MutableLocation(&value));
        return Windows::Storage::StorageFolder{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Storage::StorageFolder) consume_Windows_ApplicationModel_IPackage7<D>::EffectiveLocation() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackage7)->get_EffectiveLocation(&value));
        return Windows::Storage::StorageFolder{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Storage::StorageFolder) consume_Windows_ApplicationModel_IPackage8<D>::EffectiveExternalLocation() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackage8)->get_EffectiveExternalLocation(&value));
        return Windows::Storage::StorageFolder{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Storage::StorageFolder) consume_Windows_ApplicationModel_IPackage8<D>::MachineExternalLocation() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackage8)->get_MachineExternalLocation(&value));
        return Windows::Storage::StorageFolder{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Storage::StorageFolder) consume_Windows_ApplicationModel_IPackage8<D>::UserExternalLocation() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackage8)->get_UserExternalLocation(&value));
        return Windows::Storage::StorageFolder{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_IPackage8<D>::InstalledPath() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackage8)->get_InstalledPath(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_IPackage8<D>::MutablePath() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackage8)->get_MutablePath(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_IPackage8<D>::EffectivePath() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackage8)->get_EffectivePath(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_IPackage8<D>::EffectiveExternalPath() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackage8)->get_EffectiveExternalPath(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_IPackage8<D>::MachineExternalPath() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackage8)->get_MachineExternalPath(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_IPackage8<D>::UserExternalPath() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackage8)->get_UserExternalPath(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Storage::Streams::RandomAccessStreamReference) consume_Windows_ApplicationModel_IPackage8<D>::GetLogoAsRandomAccessStreamReference(Windows::Foundation::Size const& size) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackage8)->GetLogoAsRandomAccessStreamReference(impl::bind_in(size), &result));
        return Windows::Storage::Streams::RandomAccessStreamReference{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Core::AppListEntry>) consume_Windows_ApplicationModel_IPackage8<D>::GetAppListEntries() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackage8)->GetAppListEntries(&result));
        return Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Core::AppListEntry>{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_ApplicationModel_IPackage8<D>::IsStub() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackage8)->get_IsStub(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_ApplicationModel_IPackageCatalog<D>::PackageStaging(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageStagingEventArgs> const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackageCatalog)->add_PackageStaging(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_ApplicationModel_IPackageCatalog<D>::PackageStaging_revoker consume_Windows_ApplicationModel_IPackageCatalog<D>::PackageStaging(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageStagingEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, PackageStaging_revoker>(this, PackageStaging(handler));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_IPackageCatalog<D>::PackageStaging(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackageCatalog)->remove_PackageStaging(impl::bind_in(token)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_ApplicationModel_IPackageCatalog<D>::PackageInstalling(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageInstallingEventArgs> const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackageCatalog)->add_PackageInstalling(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_ApplicationModel_IPackageCatalog<D>::PackageInstalling_revoker consume_Windows_ApplicationModel_IPackageCatalog<D>::PackageInstalling(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageInstallingEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, PackageInstalling_revoker>(this, PackageInstalling(handler));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_IPackageCatalog<D>::PackageInstalling(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackageCatalog)->remove_PackageInstalling(impl::bind_in(token)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_ApplicationModel_IPackageCatalog<D>::PackageUpdating(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageUpdatingEventArgs> const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackageCatalog)->add_PackageUpdating(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_ApplicationModel_IPackageCatalog<D>::PackageUpdating_revoker consume_Windows_ApplicationModel_IPackageCatalog<D>::PackageUpdating(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageUpdatingEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, PackageUpdating_revoker>(this, PackageUpdating(handler));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_IPackageCatalog<D>::PackageUpdating(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackageCatalog)->remove_PackageUpdating(impl::bind_in(token)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_ApplicationModel_IPackageCatalog<D>::PackageUninstalling(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageUninstallingEventArgs> const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackageCatalog)->add_PackageUninstalling(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_ApplicationModel_IPackageCatalog<D>::PackageUninstalling_revoker consume_Windows_ApplicationModel_IPackageCatalog<D>::PackageUninstalling(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageUninstallingEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, PackageUninstalling_revoker>(this, PackageUninstalling(handler));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_IPackageCatalog<D>::PackageUninstalling(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackageCatalog)->remove_PackageUninstalling(impl::bind_in(token)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_ApplicationModel_IPackageCatalog<D>::PackageStatusChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageStatusChangedEventArgs> const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackageCatalog)->add_PackageStatusChanged(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_ApplicationModel_IPackageCatalog<D>::PackageStatusChanged_revoker consume_Windows_ApplicationModel_IPackageCatalog<D>::PackageStatusChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageStatusChangedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, PackageStatusChanged_revoker>(this, PackageStatusChanged(handler));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_IPackageCatalog<D>::PackageStatusChanged(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackageCatalog)->remove_PackageStatusChanged(impl::bind_in(token)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_ApplicationModel_IPackageCatalog2<D>::PackageContentGroupStaging(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageContentGroupStagingEventArgs> const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackageCatalog2)->add_PackageContentGroupStaging(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_ApplicationModel_IPackageCatalog2<D>::PackageContentGroupStaging_revoker consume_Windows_ApplicationModel_IPackageCatalog2<D>::PackageContentGroupStaging(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageContentGroupStagingEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, PackageContentGroupStaging_revoker>(this, PackageContentGroupStaging(handler));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_IPackageCatalog2<D>::PackageContentGroupStaging(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackageCatalog2)->remove_PackageContentGroupStaging(impl::bind_in(token)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::PackageCatalogAddOptionalPackageResult>) consume_Windows_ApplicationModel_IPackageCatalog2<D>::AddOptionalPackageAsync(param::hstring const& optionalPackageFamilyName) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackageCatalog2)->AddOptionalPackageAsync(*(void**)(&optionalPackageFamilyName), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::PackageCatalogAddOptionalPackageResult>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::PackageCatalogRemoveOptionalPackagesResult>) consume_Windows_ApplicationModel_IPackageCatalog3<D>::RemoveOptionalPackagesAsync(param::async_iterable<hstring> const& optionalPackageFamilyNames) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackageCatalog3)->RemoveOptionalPackagesAsync(*(void**)(&optionalPackageFamilyNames), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::PackageCatalogRemoveOptionalPackagesResult>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperationWithProgress<Windows::ApplicationModel::PackageCatalogAddResourcePackageResult, Windows::ApplicationModel::PackageInstallProgress>) consume_Windows_ApplicationModel_IPackageCatalog4<D>::AddResourcePackageAsync(param::hstring const& resourcePackageFamilyName, param::hstring const& resourceID, Windows::ApplicationModel::AddResourcePackageOptions const& options) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackageCatalog4)->AddResourcePackageAsync(*(void**)(&resourcePackageFamilyName), *(void**)(&resourceID), static_cast<uint32_t>(options), &operation));
        return Windows::Foundation::IAsyncOperationWithProgress<Windows::ApplicationModel::PackageCatalogAddResourcePackageResult, Windows::ApplicationModel::PackageInstallProgress>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::PackageCatalogRemoveResourcePackagesResult>) consume_Windows_ApplicationModel_IPackageCatalog4<D>::RemoveResourcePackagesAsync(param::async_iterable<Windows::ApplicationModel::Package> const& resourcePackages) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackageCatalog4)->RemoveResourcePackagesAsync(*(void**)(&resourcePackages), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::PackageCatalogRemoveResourcePackagesResult>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::Package) consume_Windows_ApplicationModel_IPackageCatalogAddOptionalPackageResult<D>::Package() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackageCatalogAddOptionalPackageResult)->get_Package(&value));
        return Windows::ApplicationModel::Package{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::hresult) consume_Windows_ApplicationModel_IPackageCatalogAddOptionalPackageResult<D>::ExtendedError() const
    {
        winrt::hresult value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackageCatalogAddOptionalPackageResult)->get_ExtendedError(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::Package) consume_Windows_ApplicationModel_IPackageCatalogAddResourcePackageResult<D>::Package() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackageCatalogAddResourcePackageResult)->get_Package(&value));
        return Windows::ApplicationModel::Package{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_ApplicationModel_IPackageCatalogAddResourcePackageResult<D>::IsComplete() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackageCatalogAddResourcePackageResult)->get_IsComplete(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::hresult) consume_Windows_ApplicationModel_IPackageCatalogAddResourcePackageResult<D>::ExtendedError() const
    {
        winrt::hresult value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackageCatalogAddResourcePackageResult)->get_ExtendedError(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Package>) consume_Windows_ApplicationModel_IPackageCatalogRemoveOptionalPackagesResult<D>::PackagesRemoved() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackageCatalogRemoveOptionalPackagesResult)->get_PackagesRemoved(&value));
        return Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Package>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::hresult) consume_Windows_ApplicationModel_IPackageCatalogRemoveOptionalPackagesResult<D>::ExtendedError() const
    {
        winrt::hresult value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackageCatalogRemoveOptionalPackagesResult)->get_ExtendedError(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Package>) consume_Windows_ApplicationModel_IPackageCatalogRemoveResourcePackagesResult<D>::PackagesRemoved() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackageCatalogRemoveResourcePackagesResult)->get_PackagesRemoved(&value));
        return Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Package>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::hresult) consume_Windows_ApplicationModel_IPackageCatalogRemoveResourcePackagesResult<D>::ExtendedError() const
    {
        winrt::hresult value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackageCatalogRemoveResourcePackagesResult)->get_ExtendedError(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::PackageCatalog) consume_Windows_ApplicationModel_IPackageCatalogStatics<D>::OpenForCurrentPackage() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackageCatalogStatics)->OpenForCurrentPackage(&value));
        return Windows::ApplicationModel::PackageCatalog{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::PackageCatalog) consume_Windows_ApplicationModel_IPackageCatalogStatics<D>::OpenForCurrentUser() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackageCatalogStatics)->OpenForCurrentUser(&value));
        return Windows::ApplicationModel::PackageCatalog{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::Package) consume_Windows_ApplicationModel_IPackageContentGroup<D>::Package() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackageContentGroup)->get_Package(&value));
        return Windows::ApplicationModel::Package{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_IPackageContentGroup<D>::Name() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackageContentGroup)->get_Name(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::PackageContentGroupState) consume_Windows_ApplicationModel_IPackageContentGroup<D>::State() const
    {
        Windows::ApplicationModel::PackageContentGroupState value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackageContentGroup)->get_State(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_ApplicationModel_IPackageContentGroup<D>::IsRequired() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackageContentGroup)->get_IsRequired(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_ApplicationModel_IPackageContentGroupStagingEventArgs<D>::ActivityId() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackageContentGroupStagingEventArgs)->get_ActivityId(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::Package) consume_Windows_ApplicationModel_IPackageContentGroupStagingEventArgs<D>::Package() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackageContentGroupStagingEventArgs)->get_Package(&value));
        return Windows::ApplicationModel::Package{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(double) consume_Windows_ApplicationModel_IPackageContentGroupStagingEventArgs<D>::Progress() const
    {
        double value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackageContentGroupStagingEventArgs)->get_Progress(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_ApplicationModel_IPackageContentGroupStagingEventArgs<D>::IsComplete() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackageContentGroupStagingEventArgs)->get_IsComplete(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::hresult) consume_Windows_ApplicationModel_IPackageContentGroupStagingEventArgs<D>::ErrorCode() const
    {
        winrt::hresult value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackageContentGroupStagingEventArgs)->get_ErrorCode(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_IPackageContentGroupStagingEventArgs<D>::ContentGroupName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackageContentGroupStagingEventArgs)->get_ContentGroupName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_ApplicationModel_IPackageContentGroupStagingEventArgs<D>::IsContentGroupRequired() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackageContentGroupStagingEventArgs)->get_IsContentGroupRequired(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_IPackageContentGroupStatics<D>::RequiredGroupName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackageContentGroupStatics)->get_RequiredGroupName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_IPackageId<D>::Name() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackageId)->get_Name(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::PackageVersion) consume_Windows_ApplicationModel_IPackageId<D>::Version() const
    {
        Windows::ApplicationModel::PackageVersion value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackageId)->get_Version(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::System::ProcessorArchitecture) consume_Windows_ApplicationModel_IPackageId<D>::Architecture() const
    {
        Windows::System::ProcessorArchitecture value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackageId)->get_Architecture(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_IPackageId<D>::ResourceId() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackageId)->get_ResourceId(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_IPackageId<D>::Publisher() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackageId)->get_Publisher(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_IPackageId<D>::PublisherId() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackageId)->get_PublisherId(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_IPackageId<D>::FullName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackageId)->get_FullName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_IPackageId<D>::FamilyName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackageId)->get_FamilyName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_IPackageIdWithMetadata<D>::ProductId() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackageIdWithMetadata)->get_ProductId(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_IPackageIdWithMetadata<D>::Author() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackageIdWithMetadata)->get_Author(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_ApplicationModel_IPackageInstallingEventArgs<D>::ActivityId() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackageInstallingEventArgs)->get_ActivityId(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::Package) consume_Windows_ApplicationModel_IPackageInstallingEventArgs<D>::Package() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackageInstallingEventArgs)->get_Package(&value));
        return Windows::ApplicationModel::Package{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(double) consume_Windows_ApplicationModel_IPackageInstallingEventArgs<D>::Progress() const
    {
        double value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackageInstallingEventArgs)->get_Progress(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_ApplicationModel_IPackageInstallingEventArgs<D>::IsComplete() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackageInstallingEventArgs)->get_IsComplete(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::hresult) consume_Windows_ApplicationModel_IPackageInstallingEventArgs<D>::ErrorCode() const
    {
        winrt::hresult value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackageInstallingEventArgs)->get_ErrorCode(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_ApplicationModel_IPackageStagingEventArgs<D>::ActivityId() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackageStagingEventArgs)->get_ActivityId(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::Package) consume_Windows_ApplicationModel_IPackageStagingEventArgs<D>::Package() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackageStagingEventArgs)->get_Package(&value));
        return Windows::ApplicationModel::Package{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(double) consume_Windows_ApplicationModel_IPackageStagingEventArgs<D>::Progress() const
    {
        double value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackageStagingEventArgs)->get_Progress(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_ApplicationModel_IPackageStagingEventArgs<D>::IsComplete() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackageStagingEventArgs)->get_IsComplete(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::hresult) consume_Windows_ApplicationModel_IPackageStagingEventArgs<D>::ErrorCode() const
    {
        winrt::hresult value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackageStagingEventArgs)->get_ErrorCode(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::Package) consume_Windows_ApplicationModel_IPackageStatics<D>::Current() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackageStatics)->get_Current(&value));
        return Windows::ApplicationModel::Package{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_ApplicationModel_IPackageStatus<D>::VerifyIsOK() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackageStatus)->VerifyIsOK(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_ApplicationModel_IPackageStatus<D>::NotAvailable() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackageStatus)->get_NotAvailable(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_ApplicationModel_IPackageStatus<D>::PackageOffline() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackageStatus)->get_PackageOffline(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_ApplicationModel_IPackageStatus<D>::DataOffline() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackageStatus)->get_DataOffline(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_ApplicationModel_IPackageStatus<D>::Disabled() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackageStatus)->get_Disabled(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_ApplicationModel_IPackageStatus<D>::NeedsRemediation() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackageStatus)->get_NeedsRemediation(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_ApplicationModel_IPackageStatus<D>::LicenseIssue() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackageStatus)->get_LicenseIssue(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_ApplicationModel_IPackageStatus<D>::Modified() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackageStatus)->get_Modified(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_ApplicationModel_IPackageStatus<D>::Tampered() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackageStatus)->get_Tampered(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_ApplicationModel_IPackageStatus<D>::DependencyIssue() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackageStatus)->get_DependencyIssue(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_ApplicationModel_IPackageStatus<D>::Servicing() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackageStatus)->get_Servicing(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_ApplicationModel_IPackageStatus<D>::DeploymentInProgress() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackageStatus)->get_DeploymentInProgress(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_ApplicationModel_IPackageStatus2<D>::IsPartiallyStaged() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackageStatus2)->get_IsPartiallyStaged(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::Package) consume_Windows_ApplicationModel_IPackageStatusChangedEventArgs<D>::Package() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackageStatusChangedEventArgs)->get_Package(&value));
        return Windows::ApplicationModel::Package{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_ApplicationModel_IPackageUninstallingEventArgs<D>::ActivityId() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackageUninstallingEventArgs)->get_ActivityId(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::Package) consume_Windows_ApplicationModel_IPackageUninstallingEventArgs<D>::Package() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackageUninstallingEventArgs)->get_Package(&value));
        return Windows::ApplicationModel::Package{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(double) consume_Windows_ApplicationModel_IPackageUninstallingEventArgs<D>::Progress() const
    {
        double value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackageUninstallingEventArgs)->get_Progress(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_ApplicationModel_IPackageUninstallingEventArgs<D>::IsComplete() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackageUninstallingEventArgs)->get_IsComplete(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::hresult) consume_Windows_ApplicationModel_IPackageUninstallingEventArgs<D>::ErrorCode() const
    {
        winrt::hresult value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackageUninstallingEventArgs)->get_ErrorCode(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::PackageUpdateAvailability) consume_Windows_ApplicationModel_IPackageUpdateAvailabilityResult<D>::Availability() const
    {
        Windows::ApplicationModel::PackageUpdateAvailability value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackageUpdateAvailabilityResult)->get_Availability(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::hresult) consume_Windows_ApplicationModel_IPackageUpdateAvailabilityResult<D>::ExtendedError() const
    {
        winrt::hresult value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackageUpdateAvailabilityResult)->get_ExtendedError(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_ApplicationModel_IPackageUpdatingEventArgs<D>::ActivityId() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackageUpdatingEventArgs)->get_ActivityId(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::Package) consume_Windows_ApplicationModel_IPackageUpdatingEventArgs<D>::SourcePackage() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackageUpdatingEventArgs)->get_SourcePackage(&value));
        return Windows::ApplicationModel::Package{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::Package) consume_Windows_ApplicationModel_IPackageUpdatingEventArgs<D>::TargetPackage() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackageUpdatingEventArgs)->get_TargetPackage(&value));
        return Windows::ApplicationModel::Package{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(double) consume_Windows_ApplicationModel_IPackageUpdatingEventArgs<D>::Progress() const
    {
        double value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackageUpdatingEventArgs)->get_Progress(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_ApplicationModel_IPackageUpdatingEventArgs<D>::IsComplete() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackageUpdatingEventArgs)->get_IsComplete(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::hresult) consume_Windows_ApplicationModel_IPackageUpdatingEventArgs<D>::ErrorCode() const
    {
        winrt::hresult value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackageUpdatingEventArgs)->get_ErrorCode(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::DateTime) consume_Windows_ApplicationModel_IPackageWithMetadata<D>::InstallDate() const
    {
        Windows::Foundation::DateTime value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackageWithMetadata)->get_InstallDate(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_IPackageWithMetadata<D>::GetThumbnailToken() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackageWithMetadata)->GetThumbnailToken(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_IPackageWithMetadata<D>::Launch(param::hstring const& parameters) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IPackageWithMetadata)->Launch(*(void**)(&parameters)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::StartupTaskState>) consume_Windows_ApplicationModel_IStartupTask<D>::RequestEnableAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IStartupTask)->RequestEnableAsync(&operation));
        return Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::StartupTaskState>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_IStartupTask<D>::Disable() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IStartupTask)->Disable());
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::StartupTaskState) consume_Windows_ApplicationModel_IStartupTask<D>::State() const
    {
        Windows::ApplicationModel::StartupTaskState value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IStartupTask)->get_State(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_IStartupTask<D>::TaskId() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IStartupTask)->get_TaskId(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::StartupTask>>) consume_Windows_ApplicationModel_IStartupTaskStatics<D>::GetForCurrentPackageAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IStartupTaskStatics)->GetForCurrentPackageAsync(&operation));
        return Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::StartupTask>>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::StartupTask>) consume_Windows_ApplicationModel_IStartupTaskStatics<D>::GetAsync(param::hstring const& taskId) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::IStartupTaskStatics)->GetAsync(*(void**)(&taskId), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::StartupTask>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_ISuspendingDeferral<D>::Complete() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::ISuspendingDeferral)->Complete());
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::SuspendingOperation) consume_Windows_ApplicationModel_ISuspendingEventArgs<D>::SuspendingOperation() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::ISuspendingEventArgs)->get_SuspendingOperation(&value));
        return Windows::ApplicationModel::SuspendingOperation{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::SuspendingDeferral) consume_Windows_ApplicationModel_ISuspendingOperation<D>::GetDeferral() const
    {
        void* deferral{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::ISuspendingOperation)->GetDeferral(&deferral));
        return Windows::ApplicationModel::SuspendingDeferral{ deferral, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::DateTime) consume_Windows_ApplicationModel_ISuspendingOperation<D>::Deadline() const
    {
        Windows::Foundation::DateTime value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::ISuspendingOperation)->get_Deadline(put_abi(value)));
        return value;
    }
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::IAppDisplayInfo> : produce_base<D, Windows::ApplicationModel::IAppDisplayInfo>
    {
        int32_t __stdcall get_DisplayName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DisplayName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Description(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Description());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetLogo(Windows::Foundation::Size size, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::RandomAccessStreamReference>(this->shim().GetLogo(*reinterpret_cast<Windows::Foundation::Size const*>(&size)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::IAppInfo> : produce_base<D, Windows::ApplicationModel::IAppInfo>
    {
        int32_t __stdcall get_Id(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Id());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AppUserModelId(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AppUserModelId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DisplayInfo(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::AppDisplayInfo>(this->shim().DisplayInfo());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PackageFamilyName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().PackageFamilyName());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::IAppInfo2> : produce_base<D, Windows::ApplicationModel::IAppInfo2>
    {
        int32_t __stdcall get_Package(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Package>(this->shim().Package());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::IAppInfo3> : produce_base<D, Windows::ApplicationModel::IAppInfo3>
    {
        int32_t __stdcall get_ExecutionContext(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::AppExecutionContext>(this->shim().ExecutionContext());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::IAppInfo4> : produce_base<D, Windows::ApplicationModel::IAppInfo4>
    {
        int32_t __stdcall get_SupportedFileExtensions(uint32_t* __valueSize, void*** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            std::tie(*__valueSize, *value) = detach_abi(this->shim().SupportedFileExtensions());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::IAppInfoStatics> : produce_base<D, Windows::ApplicationModel::IAppInfoStatics>
    {
        int32_t __stdcall get_Current(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::AppInfo>(this->shim().Current());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetFromAppUserModelId(void* appUserModelId, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::ApplicationModel::AppInfo>(this->shim().GetFromAppUserModelId(*reinterpret_cast<hstring const*>(&appUserModelId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetFromAppUserModelIdForUser(void* user, void* appUserModelId, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::ApplicationModel::AppInfo>(this->shim().GetFromAppUserModelIdForUser(*reinterpret_cast<Windows::System::User const*>(&user), *reinterpret_cast<hstring const*>(&appUserModelId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::IAppInstallerInfo> : produce_base<D, Windows::ApplicationModel::IAppInstallerInfo>
    {
        int32_t __stdcall get_Uri(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().Uri());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::IAppInstance> : produce_base<D, Windows::ApplicationModel::IAppInstance>
    {
        int32_t __stdcall get_Key(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Key());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsCurrentInstance(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsCurrentInstance());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RedirectActivationTo() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RedirectActivationTo();
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::IAppInstanceStatics> : produce_base<D, Windows::ApplicationModel::IAppInstanceStatics>
    {
        int32_t __stdcall get_RecommendedInstance(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::AppInstance>(this->shim().RecommendedInstance());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetActivatedEventArgs(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::ApplicationModel::Activation::IActivatedEventArgs>(this->shim().GetActivatedEventArgs());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall FindOrRegisterInstanceForKey(void* key, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::ApplicationModel::AppInstance>(this->shim().FindOrRegisterInstanceForKey(*reinterpret_cast<hstring const*>(&key)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Unregister() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Unregister();
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetInstances(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::AppInstance>>(this->shim().GetInstances());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::IDesignModeStatics> : produce_base<D, Windows::ApplicationModel::IDesignModeStatics>
    {
        int32_t __stdcall get_DesignModeEnabled(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().DesignModeEnabled());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::IDesignModeStatics2> : produce_base<D, Windows::ApplicationModel::IDesignModeStatics2>
    {
        int32_t __stdcall get_DesignMode2Enabled(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().DesignMode2Enabled());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
    template <typename D>
    struct produce<D, Windows::ApplicationModel::IEnteredBackgroundEventArgs> : produce_base<D, Windows::ApplicationModel::IEnteredBackgroundEventArgs>
    {
        int32_t __stdcall GetDeferral(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Deferral>(this->shim().GetDeferral());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::IFullTrustProcessLauncherStatics> : produce_base<D, Windows::ApplicationModel::IFullTrustProcessLauncherStatics>
    {
        int32_t __stdcall LaunchFullTrustProcessForCurrentAppAsync(void** asyncAction) noexcept final try
        {
            clear_abi(asyncAction);
            typename D::abi_guard guard(this->shim());
            *asyncAction = detach_from<Windows::Foundation::IAsyncAction>(this->shim().LaunchFullTrustProcessForCurrentAppAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall LaunchFullTrustProcessForCurrentAppWithParametersAsync(void* parameterGroupId, void** asyncAction) noexcept final try
        {
            clear_abi(asyncAction);
            typename D::abi_guard guard(this->shim());
            *asyncAction = detach_from<Windows::Foundation::IAsyncAction>(this->shim().LaunchFullTrustProcessForCurrentAppAsync(*reinterpret_cast<hstring const*>(&parameterGroupId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall LaunchFullTrustProcessForAppAsync(void* fullTrustPackageRelativeAppId, void** asyncAction) noexcept final try
        {
            clear_abi(asyncAction);
            typename D::abi_guard guard(this->shim());
            *asyncAction = detach_from<Windows::Foundation::IAsyncAction>(this->shim().LaunchFullTrustProcessForAppAsync(*reinterpret_cast<hstring const*>(&fullTrustPackageRelativeAppId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall LaunchFullTrustProcessForAppWithParametersAsync(void* fullTrustPackageRelativeAppId, void* parameterGroupId, void** asyncAction) noexcept final try
        {
            clear_abi(asyncAction);
            typename D::abi_guard guard(this->shim());
            *asyncAction = detach_from<Windows::Foundation::IAsyncAction>(this->shim().LaunchFullTrustProcessForAppAsync(*reinterpret_cast<hstring const*>(&fullTrustPackageRelativeAppId), *reinterpret_cast<hstring const*>(&parameterGroupId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
    template <typename D>
    struct produce<D, Windows::ApplicationModel::ILeavingBackgroundEventArgs> : produce_base<D, Windows::ApplicationModel::ILeavingBackgroundEventArgs>
    {
        int32_t __stdcall GetDeferral(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Deferral>(this->shim().GetDeferral());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::ILimitedAccessFeatureRequestResult> : produce_base<D, Windows::ApplicationModel::ILimitedAccessFeatureRequestResult>
    {
        int32_t __stdcall get_FeatureId(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().FeatureId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Status(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::LimitedAccessFeatureStatus>(this->shim().Status());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_EstimatedRemovalDate(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<Windows::Foundation::DateTime>>(this->shim().EstimatedRemovalDate());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::ILimitedAccessFeaturesStatics> : produce_base<D, Windows::ApplicationModel::ILimitedAccessFeaturesStatics>
    {
        int32_t __stdcall TryUnlockFeature(void* featureId, void* token, void* attestation, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::ApplicationModel::LimitedAccessFeatureRequestResult>(this->shim().TryUnlockFeature(*reinterpret_cast<hstring const*>(&featureId), *reinterpret_cast<hstring const*>(&token), *reinterpret_cast<hstring const*>(&attestation)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::IPackage> : produce_base<D, Windows::ApplicationModel::IPackage>
    {
        int32_t __stdcall get_Id(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::PackageId>(this->shim().Id());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_InstalledLocation(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::StorageFolder>(this->shim().InstalledLocation());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsFramework(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsFramework());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Dependencies(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Package>>(this->shim().Dependencies());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::IPackage2> : produce_base<D, Windows::ApplicationModel::IPackage2>
    {
        int32_t __stdcall get_DisplayName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DisplayName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PublisherDisplayName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().PublisherDisplayName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Description(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Description());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Logo(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().Logo());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsResourcePackage(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsResourcePackage());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsBundle(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsBundle());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsDevelopmentMode(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsDevelopmentMode());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::IPackage3> : produce_base<D, Windows::ApplicationModel::IPackage3>
    {
        int32_t __stdcall get_Status(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::PackageStatus>(this->shim().Status());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_InstalledDate(int64_t* value) noexcept final try
        {
            zero_abi<Windows::Foundation::DateTime>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::DateTime>(this->shim().InstalledDate());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetAppListEntriesAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Core::AppListEntry>>>(this->shim().GetAppListEntriesAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::IPackage4> : produce_base<D, Windows::ApplicationModel::IPackage4>
    {
        int32_t __stdcall get_SignatureKind(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::PackageSignatureKind>(this->shim().SignatureKind());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsOptional(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsOptional());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall VerifyContentIntegrityAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().VerifyContentIntegrityAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::IPackage5> : produce_base<D, Windows::ApplicationModel::IPackage5>
    {
        int32_t __stdcall GetContentGroupsAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::PackageContentGroup>>>(this->shim().GetContentGroupsAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetContentGroupAsync(void* name, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::PackageContentGroup>>(this->shim().GetContentGroupAsync(*reinterpret_cast<hstring const*>(&name)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall StageContentGroupsAsync(void* names, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::PackageContentGroup>>>(this->shim().StageContentGroupsAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&names)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall StageContentGroupsWithPriorityAsync(void* names, bool moveToHeadOfQueue, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::PackageContentGroup>>>(this->shim().StageContentGroupsAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&names), moveToHeadOfQueue));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetInUseAsync(bool inUse, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().SetInUseAsync(inUse));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::IPackage6> : produce_base<D, Windows::ApplicationModel::IPackage6>
    {
        int32_t __stdcall GetAppInstallerInfo(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::AppInstallerInfo>(this->shim().GetAppInstallerInfo());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CheckUpdateAvailabilityAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::PackageUpdateAvailabilityResult>>(this->shim().CheckUpdateAvailabilityAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::IPackage7> : produce_base<D, Windows::ApplicationModel::IPackage7>
    {
        int32_t __stdcall get_MutableLocation(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::StorageFolder>(this->shim().MutableLocation());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_EffectiveLocation(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::StorageFolder>(this->shim().EffectiveLocation());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::IPackage8> : produce_base<D, Windows::ApplicationModel::IPackage8>
    {
        int32_t __stdcall get_EffectiveExternalLocation(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::StorageFolder>(this->shim().EffectiveExternalLocation());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MachineExternalLocation(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::StorageFolder>(this->shim().MachineExternalLocation());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_UserExternalLocation(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::StorageFolder>(this->shim().UserExternalLocation());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_InstalledPath(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().InstalledPath());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MutablePath(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().MutablePath());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_EffectivePath(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().EffectivePath());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_EffectiveExternalPath(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().EffectiveExternalPath());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MachineExternalPath(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().MachineExternalPath());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_UserExternalPath(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().UserExternalPath());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetLogoAsRandomAccessStreamReference(Windows::Foundation::Size size, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Storage::Streams::RandomAccessStreamReference>(this->shim().GetLogoAsRandomAccessStreamReference(*reinterpret_cast<Windows::Foundation::Size const*>(&size)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetAppListEntries(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Core::AppListEntry>>(this->shim().GetAppListEntries());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsStub(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsStub());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::IPackageCatalog> : produce_base<D, Windows::ApplicationModel::IPackageCatalog>
    {
        int32_t __stdcall add_PackageStaging(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().PackageStaging(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageStagingEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_PackageStaging(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PackageStaging(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_PackageInstalling(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().PackageInstalling(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageInstallingEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_PackageInstalling(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PackageInstalling(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_PackageUpdating(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().PackageUpdating(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageUpdatingEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_PackageUpdating(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PackageUpdating(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_PackageUninstalling(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().PackageUninstalling(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageUninstallingEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_PackageUninstalling(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PackageUninstalling(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_PackageStatusChanged(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().PackageStatusChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageStatusChangedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_PackageStatusChanged(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PackageStatusChanged(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::IPackageCatalog2> : produce_base<D, Windows::ApplicationModel::IPackageCatalog2>
    {
        int32_t __stdcall add_PackageContentGroupStaging(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().PackageContentGroupStaging(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::PackageCatalog, Windows::ApplicationModel::PackageContentGroupStagingEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_PackageContentGroupStaging(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PackageContentGroupStaging(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall AddOptionalPackageAsync(void* optionalPackageFamilyName, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::PackageCatalogAddOptionalPackageResult>>(this->shim().AddOptionalPackageAsync(*reinterpret_cast<hstring const*>(&optionalPackageFamilyName)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::IPackageCatalog3> : produce_base<D, Windows::ApplicationModel::IPackageCatalog3>
    {
        int32_t __stdcall RemoveOptionalPackagesAsync(void* optionalPackageFamilyNames, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::PackageCatalogRemoveOptionalPackagesResult>>(this->shim().RemoveOptionalPackagesAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&optionalPackageFamilyNames)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::IPackageCatalog4> : produce_base<D, Windows::ApplicationModel::IPackageCatalog4>
    {
        int32_t __stdcall AddResourcePackageAsync(void* resourcePackageFamilyName, void* resourceID, uint32_t options, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperationWithProgress<Windows::ApplicationModel::PackageCatalogAddResourcePackageResult, Windows::ApplicationModel::PackageInstallProgress>>(this->shim().AddResourcePackageAsync(*reinterpret_cast<hstring const*>(&resourcePackageFamilyName), *reinterpret_cast<hstring const*>(&resourceID), *reinterpret_cast<Windows::ApplicationModel::AddResourcePackageOptions const*>(&options)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RemoveResourcePackagesAsync(void* resourcePackages, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::PackageCatalogRemoveResourcePackagesResult>>(this->shim().RemoveResourcePackagesAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> const*>(&resourcePackages)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::IPackageCatalogAddOptionalPackageResult> : produce_base<D, Windows::ApplicationModel::IPackageCatalogAddOptionalPackageResult>
    {
        int32_t __stdcall get_Package(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Package>(this->shim().Package());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ExtendedError(winrt::hresult* value) noexcept final try
        {
            zero_abi<winrt::hresult>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::hresult>(this->shim().ExtendedError());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::IPackageCatalogAddResourcePackageResult> : produce_base<D, Windows::ApplicationModel::IPackageCatalogAddResourcePackageResult>
    {
        int32_t __stdcall get_Package(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Package>(this->shim().Package());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsComplete(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsComplete());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ExtendedError(winrt::hresult* value) noexcept final try
        {
            zero_abi<winrt::hresult>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::hresult>(this->shim().ExtendedError());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::IPackageCatalogRemoveOptionalPackagesResult> : produce_base<D, Windows::ApplicationModel::IPackageCatalogRemoveOptionalPackagesResult>
    {
        int32_t __stdcall get_PackagesRemoved(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Package>>(this->shim().PackagesRemoved());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ExtendedError(winrt::hresult* value) noexcept final try
        {
            zero_abi<winrt::hresult>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::hresult>(this->shim().ExtendedError());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::IPackageCatalogRemoveResourcePackagesResult> : produce_base<D, Windows::ApplicationModel::IPackageCatalogRemoveResourcePackagesResult>
    {
        int32_t __stdcall get_PackagesRemoved(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Package>>(this->shim().PackagesRemoved());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ExtendedError(winrt::hresult* value) noexcept final try
        {
            zero_abi<winrt::hresult>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::hresult>(this->shim().ExtendedError());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::IPackageCatalogStatics> : produce_base<D, Windows::ApplicationModel::IPackageCatalogStatics>
    {
        int32_t __stdcall OpenForCurrentPackage(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::PackageCatalog>(this->shim().OpenForCurrentPackage());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall OpenForCurrentUser(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::PackageCatalog>(this->shim().OpenForCurrentUser());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::IPackageContentGroup> : produce_base<D, Windows::ApplicationModel::IPackageContentGroup>
    {
        int32_t __stdcall get_Package(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Package>(this->shim().Package());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Name(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Name());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_State(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::PackageContentGroupState>(this->shim().State());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsRequired(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsRequired());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::IPackageContentGroupStagingEventArgs> : produce_base<D, Windows::ApplicationModel::IPackageContentGroupStagingEventArgs>
    {
        int32_t __stdcall get_ActivityId(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().ActivityId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Package(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Package>(this->shim().Package());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Progress(double* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().Progress());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsComplete(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsComplete());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ErrorCode(winrt::hresult* value) noexcept final try
        {
            zero_abi<winrt::hresult>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::hresult>(this->shim().ErrorCode());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ContentGroupName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ContentGroupName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsContentGroupRequired(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsContentGroupRequired());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::IPackageContentGroupStatics> : produce_base<D, Windows::ApplicationModel::IPackageContentGroupStatics>
    {
        int32_t __stdcall get_RequiredGroupName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().RequiredGroupName());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::IPackageId> : produce_base<D, Windows::ApplicationModel::IPackageId>
    {
        int32_t __stdcall get_Name(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Name());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Version(struct struct_Windows_ApplicationModel_PackageVersion* value) noexcept final try
        {
            zero_abi<Windows::ApplicationModel::PackageVersion>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::PackageVersion>(this->shim().Version());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Architecture(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::System::ProcessorArchitecture>(this->shim().Architecture());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ResourceId(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ResourceId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Publisher(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Publisher());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PublisherId(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().PublisherId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_FullName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().FullName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_FamilyName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().FamilyName());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::IPackageIdWithMetadata> : produce_base<D, Windows::ApplicationModel::IPackageIdWithMetadata>
    {
        int32_t __stdcall get_ProductId(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ProductId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Author(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Author());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::IPackageInstallingEventArgs> : produce_base<D, Windows::ApplicationModel::IPackageInstallingEventArgs>
    {
        int32_t __stdcall get_ActivityId(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().ActivityId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Package(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Package>(this->shim().Package());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Progress(double* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().Progress());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsComplete(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsComplete());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ErrorCode(winrt::hresult* value) noexcept final try
        {
            zero_abi<winrt::hresult>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::hresult>(this->shim().ErrorCode());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::IPackageStagingEventArgs> : produce_base<D, Windows::ApplicationModel::IPackageStagingEventArgs>
    {
        int32_t __stdcall get_ActivityId(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().ActivityId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Package(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Package>(this->shim().Package());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Progress(double* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().Progress());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsComplete(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsComplete());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ErrorCode(winrt::hresult* value) noexcept final try
        {
            zero_abi<winrt::hresult>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::hresult>(this->shim().ErrorCode());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::IPackageStatics> : produce_base<D, Windows::ApplicationModel::IPackageStatics>
    {
        int32_t __stdcall get_Current(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Package>(this->shim().Current());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::IPackageStatus> : produce_base<D, Windows::ApplicationModel::IPackageStatus>
    {
        int32_t __stdcall VerifyIsOK(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().VerifyIsOK());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_NotAvailable(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().NotAvailable());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PackageOffline(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().PackageOffline());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DataOffline(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().DataOffline());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Disabled(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Disabled());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_NeedsRemediation(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().NeedsRemediation());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_LicenseIssue(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().LicenseIssue());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Modified(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Modified());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Tampered(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Tampered());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DependencyIssue(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().DependencyIssue());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Servicing(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Servicing());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DeploymentInProgress(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().DeploymentInProgress());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::IPackageStatus2> : produce_base<D, Windows::ApplicationModel::IPackageStatus2>
    {
        int32_t __stdcall get_IsPartiallyStaged(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsPartiallyStaged());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::IPackageStatusChangedEventArgs> : produce_base<D, Windows::ApplicationModel::IPackageStatusChangedEventArgs>
    {
        int32_t __stdcall get_Package(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Package>(this->shim().Package());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::IPackageUninstallingEventArgs> : produce_base<D, Windows::ApplicationModel::IPackageUninstallingEventArgs>
    {
        int32_t __stdcall get_ActivityId(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().ActivityId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Package(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Package>(this->shim().Package());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Progress(double* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().Progress());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsComplete(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsComplete());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ErrorCode(winrt::hresult* value) noexcept final try
        {
            zero_abi<winrt::hresult>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::hresult>(this->shim().ErrorCode());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::IPackageUpdateAvailabilityResult> : produce_base<D, Windows::ApplicationModel::IPackageUpdateAvailabilityResult>
    {
        int32_t __stdcall get_Availability(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::PackageUpdateAvailability>(this->shim().Availability());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ExtendedError(winrt::hresult* value) noexcept final try
        {
            zero_abi<winrt::hresult>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::hresult>(this->shim().ExtendedError());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::IPackageUpdatingEventArgs> : produce_base<D, Windows::ApplicationModel::IPackageUpdatingEventArgs>
    {
        int32_t __stdcall get_ActivityId(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().ActivityId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SourcePackage(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Package>(this->shim().SourcePackage());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TargetPackage(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Package>(this->shim().TargetPackage());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Progress(double* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().Progress());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsComplete(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsComplete());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ErrorCode(winrt::hresult* value) noexcept final try
        {
            zero_abi<winrt::hresult>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::hresult>(this->shim().ErrorCode());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::IPackageWithMetadata> : produce_base<D, Windows::ApplicationModel::IPackageWithMetadata>
    {
        int32_t __stdcall get_InstallDate(int64_t* value) noexcept final try
        {
            zero_abi<Windows::Foundation::DateTime>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::DateTime>(this->shim().InstallDate());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetThumbnailToken(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().GetThumbnailToken());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Launch(void* parameters) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Launch(*reinterpret_cast<hstring const*>(&parameters));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::IStartupTask> : produce_base<D, Windows::ApplicationModel::IStartupTask>
    {
        int32_t __stdcall RequestEnableAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::StartupTaskState>>(this->shim().RequestEnableAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Disable() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Disable();
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_State(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::StartupTaskState>(this->shim().State());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TaskId(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().TaskId());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::IStartupTaskStatics> : produce_base<D, Windows::ApplicationModel::IStartupTaskStatics>
    {
        int32_t __stdcall GetForCurrentPackageAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::StartupTask>>>(this->shim().GetForCurrentPackageAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetAsync(void* taskId, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::StartupTask>>(this->shim().GetAsync(*reinterpret_cast<hstring const*>(&taskId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
    template <typename D>
    struct produce<D, Windows::ApplicationModel::ISuspendingDeferral> : produce_base<D, Windows::ApplicationModel::ISuspendingDeferral>
    {
        int32_t __stdcall Complete() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Complete();
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::ApplicationModel::ISuspendingEventArgs> : produce_base<D, Windows::ApplicationModel::ISuspendingEventArgs>
    {
        int32_t __stdcall get_SuspendingOperation(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::SuspendingOperation>(this->shim().SuspendingOperation());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::ApplicationModel::ISuspendingOperation> : produce_base<D, Windows::ApplicationModel::ISuspendingOperation>
    {
        int32_t __stdcall GetDeferral(void** deferral) noexcept final try
        {
            clear_abi(deferral);
            typename D::abi_guard guard(this->shim());
            *deferral = detach_from<Windows::ApplicationModel::SuspendingDeferral>(this->shim().GetDeferral());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Deadline(int64_t* value) noexcept final try
        {
            zero_abi<Windows::Foundation::DateTime>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::DateTime>(this->shim().Deadline());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
}
WINRT_EXPORT namespace winrt::Windows::ApplicationModel
{
    constexpr auto operator|(AddResourcePackageOptions const left, AddResourcePackageOptions const right) noexcept
    {
        return static_cast<AddResourcePackageOptions>(impl::to_underlying_type(left) | impl::to_underlying_type(right));
    }
    constexpr auto operator|=(AddResourcePackageOptions& left, AddResourcePackageOptions const right) noexcept
    {
        left = left | right;
        return left;
    }
    constexpr auto operator&(AddResourcePackageOptions const left, AddResourcePackageOptions const right) noexcept
    {
        return static_cast<AddResourcePackageOptions>(impl::to_underlying_type(left) & impl::to_underlying_type(right));
    }
    constexpr auto operator&=(AddResourcePackageOptions& left, AddResourcePackageOptions const right) noexcept
    {
        left = left & right;
        return left;
    }
    constexpr auto operator~(AddResourcePackageOptions const value) noexcept
    {
        return static_cast<AddResourcePackageOptions>(~impl::to_underlying_type(value));
    }
    constexpr auto operator^(AddResourcePackageOptions const left, AddResourcePackageOptions const right) noexcept
    {
        return static_cast<AddResourcePackageOptions>(impl::to_underlying_type(left) ^ impl::to_underlying_type(right));
    }
    constexpr auto operator^=(AddResourcePackageOptions& left, AddResourcePackageOptions const right) noexcept
    {
        left = left ^ right;
        return left;
    }
    inline auto AppInfo::Current()
    {
        return impl::call_factory_cast<Windows::ApplicationModel::AppInfo(*)(IAppInfoStatics const&), AppInfo, IAppInfoStatics>([](IAppInfoStatics const& f) { return f.Current(); });
    }
    inline auto AppInfo::GetFromAppUserModelId(param::hstring const& appUserModelId)
    {
        return impl::call_factory<AppInfo, IAppInfoStatics>([&](IAppInfoStatics const& f) { return f.GetFromAppUserModelId(appUserModelId); });
    }
    inline auto AppInfo::GetFromAppUserModelIdForUser(Windows::System::User const& user, param::hstring const& appUserModelId)
    {
        return impl::call_factory<AppInfo, IAppInfoStatics>([&](IAppInfoStatics const& f) { return f.GetFromAppUserModelIdForUser(user, appUserModelId); });
    }
    inline auto AppInstance::RecommendedInstance()
    {
        return impl::call_factory_cast<Windows::ApplicationModel::AppInstance(*)(IAppInstanceStatics const&), AppInstance, IAppInstanceStatics>([](IAppInstanceStatics const& f) { return f.RecommendedInstance(); });
    }
    inline auto AppInstance::GetActivatedEventArgs()
    {
        return impl::call_factory_cast<Windows::ApplicationModel::Activation::IActivatedEventArgs(*)(IAppInstanceStatics const&), AppInstance, IAppInstanceStatics>([](IAppInstanceStatics const& f) { return f.GetActivatedEventArgs(); });
    }
    inline auto AppInstance::FindOrRegisterInstanceForKey(param::hstring const& key)
    {
        return impl::call_factory<AppInstance, IAppInstanceStatics>([&](IAppInstanceStatics const& f) { return f.FindOrRegisterInstanceForKey(key); });
    }
    inline auto AppInstance::Unregister()
    {
        impl::call_factory_cast<void(*)(IAppInstanceStatics const&), AppInstance, IAppInstanceStatics>([](IAppInstanceStatics const& f) { return f.Unregister(); });
    }
    inline auto AppInstance::GetInstances()
    {
        return impl::call_factory_cast<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::AppInstance>(*)(IAppInstanceStatics const&), AppInstance, IAppInstanceStatics>([](IAppInstanceStatics const& f) { return f.GetInstances(); });
    }
    inline auto DesignMode::DesignModeEnabled()
    {
        return impl::call_factory_cast<bool(*)(IDesignModeStatics const&), DesignMode, IDesignModeStatics>([](IDesignModeStatics const& f) { return f.DesignModeEnabled(); });
    }
    inline auto DesignMode::DesignMode2Enabled()
    {
        return impl::call_factory_cast<bool(*)(IDesignModeStatics2 const&), DesignMode, IDesignModeStatics2>([](IDesignModeStatics2 const& f) { return f.DesignMode2Enabled(); });
    }
    inline auto FullTrustProcessLauncher::LaunchFullTrustProcessForCurrentAppAsync()
    {
        return impl::call_factory_cast<Windows::Foundation::IAsyncAction(*)(IFullTrustProcessLauncherStatics const&), FullTrustProcessLauncher, IFullTrustProcessLauncherStatics>([](IFullTrustProcessLauncherStatics const& f) { return f.LaunchFullTrustProcessForCurrentAppAsync(); });
    }
    inline auto FullTrustProcessLauncher::LaunchFullTrustProcessForCurrentAppAsync(param::hstring const& parameterGroupId)
    {
        return impl::call_factory<FullTrustProcessLauncher, IFullTrustProcessLauncherStatics>([&](IFullTrustProcessLauncherStatics const& f) { return f.LaunchFullTrustProcessForCurrentAppAsync(parameterGroupId); });
    }
    inline auto FullTrustProcessLauncher::LaunchFullTrustProcessForAppAsync(param::hstring const& fullTrustPackageRelativeAppId)
    {
        return impl::call_factory<FullTrustProcessLauncher, IFullTrustProcessLauncherStatics>([&](IFullTrustProcessLauncherStatics const& f) { return f.LaunchFullTrustProcessForAppAsync(fullTrustPackageRelativeAppId); });
    }
    inline auto FullTrustProcessLauncher::LaunchFullTrustProcessForAppAsync(param::hstring const& fullTrustPackageRelativeAppId, param::hstring const& parameterGroupId)
    {
        return impl::call_factory<FullTrustProcessLauncher, IFullTrustProcessLauncherStatics>([&](IFullTrustProcessLauncherStatics const& f) { return f.LaunchFullTrustProcessForAppAsync(fullTrustPackageRelativeAppId, parameterGroupId); });
    }
    inline auto LimitedAccessFeatures::TryUnlockFeature(param::hstring const& featureId, param::hstring const& token, param::hstring const& attestation)
    {
        return impl::call_factory<LimitedAccessFeatures, ILimitedAccessFeaturesStatics>([&](ILimitedAccessFeaturesStatics const& f) { return f.TryUnlockFeature(featureId, token, attestation); });
    }
    inline auto Package::Current()
    {
        return impl::call_factory_cast<Windows::ApplicationModel::Package(*)(IPackageStatics const&), Package, IPackageStatics>([](IPackageStatics const& f) { return f.Current(); });
    }
    inline auto PackageCatalog::OpenForCurrentPackage()
    {
        return impl::call_factory_cast<Windows::ApplicationModel::PackageCatalog(*)(IPackageCatalogStatics const&), PackageCatalog, IPackageCatalogStatics>([](IPackageCatalogStatics const& f) { return f.OpenForCurrentPackage(); });
    }
    inline auto PackageCatalog::OpenForCurrentUser()
    {
        return impl::call_factory_cast<Windows::ApplicationModel::PackageCatalog(*)(IPackageCatalogStatics const&), PackageCatalog, IPackageCatalogStatics>([](IPackageCatalogStatics const& f) { return f.OpenForCurrentUser(); });
    }
    inline auto PackageContentGroup::RequiredGroupName()
    {
        return impl::call_factory_cast<hstring(*)(IPackageContentGroupStatics const&), PackageContentGroup, IPackageContentGroupStatics>([](IPackageContentGroupStatics const& f) { return f.RequiredGroupName(); });
    }
    inline auto StartupTask::GetForCurrentPackageAsync()
    {
        return impl::call_factory_cast<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::StartupTask>>(*)(IStartupTaskStatics const&), StartupTask, IStartupTaskStatics>([](IStartupTaskStatics const& f) { return f.GetForCurrentPackageAsync(); });
    }
    inline auto StartupTask::GetAsync(param::hstring const& taskId)
    {
        return impl::call_factory<StartupTask, IStartupTaskStatics>([&](IStartupTaskStatics const& f) { return f.GetAsync(taskId); });
    }
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Windows::ApplicationModel::IAppDisplayInfo> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::IAppInfo> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::IAppInfo2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::IAppInfo3> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::IAppInfo4> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::IAppInfoStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::IAppInstallerInfo> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::IAppInstance> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::IAppInstanceStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::IDesignModeStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::IDesignModeStatics2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::IEnteredBackgroundEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::IFullTrustProcessLauncherStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::ILeavingBackgroundEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::ILimitedAccessFeatureRequestResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::ILimitedAccessFeaturesStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::IPackage> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::IPackage2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::IPackage3> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::IPackage4> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::IPackage5> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::IPackage6> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::IPackage7> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::IPackage8> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::IPackageCatalog> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::IPackageCatalog2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::IPackageCatalog3> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::IPackageCatalog4> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::IPackageCatalogAddOptionalPackageResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::IPackageCatalogAddResourcePackageResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::IPackageCatalogRemoveOptionalPackagesResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::IPackageCatalogRemoveResourcePackagesResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::IPackageCatalogStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::IPackageContentGroup> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::IPackageContentGroupStagingEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::IPackageContentGroupStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::IPackageId> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::IPackageIdWithMetadata> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::IPackageInstallingEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::IPackageStagingEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::IPackageStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::IPackageStatus> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::IPackageStatus2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::IPackageStatusChangedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::IPackageUninstallingEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::IPackageUpdateAvailabilityResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::IPackageUpdatingEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::IPackageWithMetadata> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::IStartupTask> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::IStartupTaskStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::ISuspendingDeferral> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::ISuspendingEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::ISuspendingOperation> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::AppDisplayInfo> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::AppInfo> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::AppInstallerInfo> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::AppInstance> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::DesignMode> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::EnteredBackgroundEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::FullTrustProcessLauncher> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::LeavingBackgroundEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::LimitedAccessFeatureRequestResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::LimitedAccessFeatures> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Package> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::PackageCatalog> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::PackageCatalogAddOptionalPackageResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::PackageCatalogAddResourcePackageResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::PackageCatalogRemoveOptionalPackagesResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::PackageCatalogRemoveResourcePackagesResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::PackageContentGroup> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::PackageContentGroupStagingEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::PackageId> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::PackageInstallingEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::PackageStagingEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::PackageStatus> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::PackageStatusChangedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::PackageUninstallingEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::PackageUpdateAvailabilityResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::PackageUpdatingEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::StartupTask> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::SuspendingDeferral> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::SuspendingEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::SuspendingOperation> : winrt::impl::hash_base {};
#endif
}
#endif
