// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.ApplicationModel.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Management.Deployment.2.h"
#include "winrt/Windows.Management.h"

namespace winrt::impl {

template <typename D> hstring consume_Windows_Management_Deployment_IDeploymentResult<D>::ErrorText() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IDeploymentResult)->get_ErrorText(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Management_Deployment_IDeploymentResult<D>::ActivityId() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IDeploymentResult)->get_ActivityId(put_abi(value)));
    return value;
}

template <typename D> HRESULT consume_Windows_Management_Deployment_IDeploymentResult<D>::ExtendedErrorCode() const
{
    HRESULT value{};
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IDeploymentResult)->get_ExtendedErrorCode(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Management_Deployment_IDeploymentResult2<D>::IsRegistered() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IDeploymentResult2)->get_IsRegistered(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> consume_Windows_Management_Deployment_IPackageManager<D>::AddPackageAsync(Windows::Foundation::Uri const& packageUri, param::async_iterable<Windows::Foundation::Uri> const& dependencyPackageUris, Windows::Management::Deployment::DeploymentOptions const& deploymentOptions) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> deploymentOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManager)->AddPackageAsync(get_abi(packageUri), get_abi(dependencyPackageUris), get_abi(deploymentOptions), put_abi(deploymentOperation)));
    return deploymentOperation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> consume_Windows_Management_Deployment_IPackageManager<D>::UpdatePackageAsync(Windows::Foundation::Uri const& packageUri, param::async_iterable<Windows::Foundation::Uri> const& dependencyPackageUris, Windows::Management::Deployment::DeploymentOptions const& deploymentOptions) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> deploymentOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManager)->UpdatePackageAsync(get_abi(packageUri), get_abi(dependencyPackageUris), get_abi(deploymentOptions), put_abi(deploymentOperation)));
    return deploymentOperation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> consume_Windows_Management_Deployment_IPackageManager<D>::RemovePackageAsync(param::hstring const& packageFullName) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> deploymentOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManager)->RemovePackageAsync(get_abi(packageFullName), put_abi(deploymentOperation)));
    return deploymentOperation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> consume_Windows_Management_Deployment_IPackageManager<D>::StagePackageAsync(Windows::Foundation::Uri const& packageUri, param::async_iterable<Windows::Foundation::Uri> const& dependencyPackageUris) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> deploymentOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManager)->StagePackageAsync(get_abi(packageUri), get_abi(dependencyPackageUris), put_abi(deploymentOperation)));
    return deploymentOperation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> consume_Windows_Management_Deployment_IPackageManager<D>::RegisterPackageAsync(Windows::Foundation::Uri const& manifestUri, param::async_iterable<Windows::Foundation::Uri> const& dependencyPackageUris, Windows::Management::Deployment::DeploymentOptions const& deploymentOptions) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> deploymentOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManager)->RegisterPackageAsync(get_abi(manifestUri), get_abi(dependencyPackageUris), get_abi(deploymentOptions), put_abi(deploymentOperation)));
    return deploymentOperation;
}

template <typename D> Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> consume_Windows_Management_Deployment_IPackageManager<D>::FindPackages() const
{
    Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> packageCollection{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManager)->FindPackages(put_abi(packageCollection)));
    return packageCollection;
}

template <typename D> Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> consume_Windows_Management_Deployment_IPackageManager<D>::FindPackagesForUser(param::hstring const& userSecurityId) const
{
    Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> packageCollection{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManager)->FindPackagesByUserSecurityId(get_abi(userSecurityId), put_abi(packageCollection)));
    return packageCollection;
}

template <typename D> Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> consume_Windows_Management_Deployment_IPackageManager<D>::FindPackages(param::hstring const& packageName, param::hstring const& packagePublisher) const
{
    Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> packageCollection{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManager)->FindPackagesByNamePublisher(get_abi(packageName), get_abi(packagePublisher), put_abi(packageCollection)));
    return packageCollection;
}

template <typename D> Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> consume_Windows_Management_Deployment_IPackageManager<D>::FindPackagesForUser(param::hstring const& userSecurityId, param::hstring const& packageName, param::hstring const& packagePublisher) const
{
    Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> packageCollection{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManager)->FindPackagesByUserSecurityIdNamePublisher(get_abi(userSecurityId), get_abi(packageName), get_abi(packagePublisher), put_abi(packageCollection)));
    return packageCollection;
}

template <typename D> Windows::Foundation::Collections::IIterable<Windows::Management::Deployment::PackageUserInformation> consume_Windows_Management_Deployment_IPackageManager<D>::FindUsers(param::hstring const& packageFullName) const
{
    Windows::Foundation::Collections::IIterable<Windows::Management::Deployment::PackageUserInformation> users{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManager)->FindUsers(get_abi(packageFullName), put_abi(users)));
    return users;
}

template <typename D> void consume_Windows_Management_Deployment_IPackageManager<D>::SetPackageState(param::hstring const& packageFullName, Windows::Management::Deployment::PackageState const& packageState) const
{
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManager)->SetPackageState(get_abi(packageFullName), get_abi(packageState)));
}

template <typename D> Windows::ApplicationModel::Package consume_Windows_Management_Deployment_IPackageManager<D>::FindPackage(param::hstring const& packageFullName) const
{
    Windows::ApplicationModel::Package packageInformation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManager)->FindPackageByPackageFullName(get_abi(packageFullName), put_abi(packageInformation)));
    return packageInformation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> consume_Windows_Management_Deployment_IPackageManager<D>::CleanupPackageForUserAsync(param::hstring const& packageName, param::hstring const& userSecurityId) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> deploymentOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManager)->CleanupPackageForUserAsync(get_abi(packageName), get_abi(userSecurityId), put_abi(deploymentOperation)));
    return deploymentOperation;
}

template <typename D> Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> consume_Windows_Management_Deployment_IPackageManager<D>::FindPackages(param::hstring const& packageFamilyName) const
{
    Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> packageCollection{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManager)->FindPackagesByPackageFamilyName(get_abi(packageFamilyName), put_abi(packageCollection)));
    return packageCollection;
}

template <typename D> Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> consume_Windows_Management_Deployment_IPackageManager<D>::FindPackagesForUser(param::hstring const& userSecurityId, param::hstring const& packageFamilyName) const
{
    Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> packageCollection{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManager)->FindPackagesByUserSecurityIdPackageFamilyName(get_abi(userSecurityId), get_abi(packageFamilyName), put_abi(packageCollection)));
    return packageCollection;
}

template <typename D> Windows::ApplicationModel::Package consume_Windows_Management_Deployment_IPackageManager<D>::FindPackageForUser(param::hstring const& userSecurityId, param::hstring const& packageFullName) const
{
    Windows::ApplicationModel::Package packageInformation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManager)->FindPackageByUserSecurityIdPackageFullName(get_abi(userSecurityId), get_abi(packageFullName), put_abi(packageInformation)));
    return packageInformation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> consume_Windows_Management_Deployment_IPackageManager2<D>::RemovePackageAsync(param::hstring const& packageFullName, Windows::Management::Deployment::RemovalOptions const& removalOptions) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> deploymentOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManager2)->RemovePackageWithOptionsAsync(get_abi(packageFullName), get_abi(removalOptions), put_abi(deploymentOperation)));
    return deploymentOperation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> consume_Windows_Management_Deployment_IPackageManager2<D>::StagePackageAsync(Windows::Foundation::Uri const& packageUri, param::async_iterable<Windows::Foundation::Uri> const& dependencyPackageUris, Windows::Management::Deployment::DeploymentOptions const& deploymentOptions) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> deploymentOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManager2)->StagePackageWithOptionsAsync(get_abi(packageUri), get_abi(dependencyPackageUris), get_abi(deploymentOptions), put_abi(deploymentOperation)));
    return deploymentOperation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> consume_Windows_Management_Deployment_IPackageManager2<D>::RegisterPackageByFullNameAsync(param::hstring const& mainPackageFullName, param::async_iterable<hstring> const& dependencyPackageFullNames, Windows::Management::Deployment::DeploymentOptions const& deploymentOptions) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> deploymentOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManager2)->RegisterPackageByFullNameAsync(get_abi(mainPackageFullName), get_abi(dependencyPackageFullNames), get_abi(deploymentOptions), put_abi(deploymentOperation)));
    return deploymentOperation;
}

template <typename D> Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> consume_Windows_Management_Deployment_IPackageManager2<D>::FindPackagesWithPackageTypes(Windows::Management::Deployment::PackageTypes const& packageTypes) const
{
    Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> packageCollection{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManager2)->FindPackagesWithPackageTypes(get_abi(packageTypes), put_abi(packageCollection)));
    return packageCollection;
}

template <typename D> Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> consume_Windows_Management_Deployment_IPackageManager2<D>::FindPackagesForUserWithPackageTypes(param::hstring const& userSecurityId, Windows::Management::Deployment::PackageTypes const& packageTypes) const
{
    Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> packageCollection{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManager2)->FindPackagesByUserSecurityIdWithPackageTypes(get_abi(userSecurityId), get_abi(packageTypes), put_abi(packageCollection)));
    return packageCollection;
}

template <typename D> Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> consume_Windows_Management_Deployment_IPackageManager2<D>::FindPackagesWithPackageTypes(param::hstring const& packageName, param::hstring const& packagePublisher, Windows::Management::Deployment::PackageTypes const& packageTypes) const
{
    Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> packageCollection{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManager2)->FindPackagesByNamePublisherWithPackageTypes(get_abi(packageName), get_abi(packagePublisher), get_abi(packageTypes), put_abi(packageCollection)));
    return packageCollection;
}

template <typename D> Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> consume_Windows_Management_Deployment_IPackageManager2<D>::FindPackagesForUserWithPackageTypes(param::hstring const& userSecurityId, param::hstring const& packageName, param::hstring const& packagePublisher, Windows::Management::Deployment::PackageTypes const& packageTypes) const
{
    Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> packageCollection{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManager2)->FindPackagesByUserSecurityIdNamePublisherWithPackageTypes(get_abi(userSecurityId), get_abi(packageName), get_abi(packagePublisher), get_abi(packageTypes), put_abi(packageCollection)));
    return packageCollection;
}

template <typename D> Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> consume_Windows_Management_Deployment_IPackageManager2<D>::FindPackagesWithPackageTypes(param::hstring const& packageFamilyName, Windows::Management::Deployment::PackageTypes const& packageTypes) const
{
    Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> packageCollection{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManager2)->FindPackagesByPackageFamilyNameWithPackageTypes(get_abi(packageFamilyName), get_abi(packageTypes), put_abi(packageCollection)));
    return packageCollection;
}

template <typename D> Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> consume_Windows_Management_Deployment_IPackageManager2<D>::FindPackagesForUserWithPackageTypes(param::hstring const& userSecurityId, param::hstring const& packageFamilyName, Windows::Management::Deployment::PackageTypes const& packageTypes) const
{
    Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package> packageCollection{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManager2)->FindPackagesByUserSecurityIdPackageFamilyNameWithPackageTypes(get_abi(userSecurityId), get_abi(packageFamilyName), get_abi(packageTypes), put_abi(packageCollection)));
    return packageCollection;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> consume_Windows_Management_Deployment_IPackageManager2<D>::StageUserDataAsync(param::hstring const& packageFullName) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> deploymentOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManager2)->StageUserDataAsync(get_abi(packageFullName), put_abi(deploymentOperation)));
    return deploymentOperation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Management::Deployment::PackageVolume> consume_Windows_Management_Deployment_IPackageManager3<D>::AddPackageVolumeAsync(param::hstring const& packageStorePath) const
{
    Windows::Foundation::IAsyncOperation<Windows::Management::Deployment::PackageVolume> packageVolume{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManager3)->AddPackageVolumeAsync(get_abi(packageStorePath), put_abi(packageVolume)));
    return packageVolume;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> consume_Windows_Management_Deployment_IPackageManager3<D>::AddPackageAsync(Windows::Foundation::Uri const& packageUri, param::async_iterable<Windows::Foundation::Uri> const& dependencyPackageUris, Windows::Management::Deployment::DeploymentOptions const& deploymentOptions, Windows::Management::Deployment::PackageVolume const& targetVolume) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> deploymentOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManager3)->AddPackageToVolumeAsync(get_abi(packageUri), get_abi(dependencyPackageUris), get_abi(deploymentOptions), get_abi(targetVolume), put_abi(deploymentOperation)));
    return deploymentOperation;
}

template <typename D> void consume_Windows_Management_Deployment_IPackageManager3<D>::ClearPackageStatus(param::hstring const& packageFullName, Windows::Management::Deployment::PackageStatus const& status) const
{
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManager3)->ClearPackageStatus(get_abi(packageFullName), get_abi(status)));
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> consume_Windows_Management_Deployment_IPackageManager3<D>::RegisterPackageAsync(Windows::Foundation::Uri const& manifestUri, param::async_iterable<Windows::Foundation::Uri> const& dependencyPackageUris, Windows::Management::Deployment::DeploymentOptions const& deploymentOptions, Windows::Management::Deployment::PackageVolume const& appDataVolume) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> deploymentOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManager3)->RegisterPackageWithAppDataVolumeAsync(get_abi(manifestUri), get_abi(dependencyPackageUris), get_abi(deploymentOptions), get_abi(appDataVolume), put_abi(deploymentOperation)));
    return deploymentOperation;
}

template <typename D> Windows::Management::Deployment::PackageVolume consume_Windows_Management_Deployment_IPackageManager3<D>::FindPackageVolume(param::hstring const& volumeName) const
{
    Windows::Management::Deployment::PackageVolume volume{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManager3)->FindPackageVolumeByName(get_abi(volumeName), put_abi(volume)));
    return volume;
}

template <typename D> Windows::Foundation::Collections::IIterable<Windows::Management::Deployment::PackageVolume> consume_Windows_Management_Deployment_IPackageManager3<D>::FindPackageVolumes() const
{
    Windows::Foundation::Collections::IIterable<Windows::Management::Deployment::PackageVolume> volumeCollection{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManager3)->FindPackageVolumes(put_abi(volumeCollection)));
    return volumeCollection;
}

template <typename D> Windows::Management::Deployment::PackageVolume consume_Windows_Management_Deployment_IPackageManager3<D>::GetDefaultPackageVolume() const
{
    Windows::Management::Deployment::PackageVolume volume{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManager3)->GetDefaultPackageVolume(put_abi(volume)));
    return volume;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> consume_Windows_Management_Deployment_IPackageManager3<D>::MovePackageToVolumeAsync(param::hstring const& packageFullName, Windows::Management::Deployment::DeploymentOptions const& deploymentOptions, Windows::Management::Deployment::PackageVolume const& targetVolume) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> deploymentOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManager3)->MovePackageToVolumeAsync(get_abi(packageFullName), get_abi(deploymentOptions), get_abi(targetVolume), put_abi(deploymentOperation)));
    return deploymentOperation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> consume_Windows_Management_Deployment_IPackageManager3<D>::RemovePackageVolumeAsync(Windows::Management::Deployment::PackageVolume const& volume) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> deploymentOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManager3)->RemovePackageVolumeAsync(get_abi(volume), put_abi(deploymentOperation)));
    return deploymentOperation;
}

template <typename D> void consume_Windows_Management_Deployment_IPackageManager3<D>::SetDefaultPackageVolume(Windows::Management::Deployment::PackageVolume const& volume) const
{
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManager3)->SetDefaultPackageVolume(get_abi(volume)));
}

template <typename D> void consume_Windows_Management_Deployment_IPackageManager3<D>::SetPackageStatus(param::hstring const& packageFullName, Windows::Management::Deployment::PackageStatus const& status) const
{
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManager3)->SetPackageStatus(get_abi(packageFullName), get_abi(status)));
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> consume_Windows_Management_Deployment_IPackageManager3<D>::SetPackageVolumeOfflineAsync(Windows::Management::Deployment::PackageVolume const& packageVolume) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> deploymentOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManager3)->SetPackageVolumeOfflineAsync(get_abi(packageVolume), put_abi(deploymentOperation)));
    return deploymentOperation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> consume_Windows_Management_Deployment_IPackageManager3<D>::SetPackageVolumeOnlineAsync(Windows::Management::Deployment::PackageVolume const& packageVolume) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> deploymentOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManager3)->SetPackageVolumeOnlineAsync(get_abi(packageVolume), put_abi(deploymentOperation)));
    return deploymentOperation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> consume_Windows_Management_Deployment_IPackageManager3<D>::StagePackageAsync(Windows::Foundation::Uri const& packageUri, param::async_iterable<Windows::Foundation::Uri> const& dependencyPackageUris, Windows::Management::Deployment::DeploymentOptions const& deploymentOptions, Windows::Management::Deployment::PackageVolume const& targetVolume) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> deploymentOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManager3)->StagePackageToVolumeAsync(get_abi(packageUri), get_abi(dependencyPackageUris), get_abi(deploymentOptions), get_abi(targetVolume), put_abi(deploymentOperation)));
    return deploymentOperation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> consume_Windows_Management_Deployment_IPackageManager3<D>::StageUserDataAsync(param::hstring const& packageFullName, Windows::Management::Deployment::DeploymentOptions const& deploymentOptions) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> deploymentOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManager3)->StageUserDataWithOptionsAsync(get_abi(packageFullName), get_abi(deploymentOptions), put_abi(deploymentOperation)));
    return deploymentOperation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Management::Deployment::PackageVolume>> consume_Windows_Management_Deployment_IPackageManager4<D>::GetPackageVolumesAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Management::Deployment::PackageVolume>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManager4)->GetPackageVolumesAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> consume_Windows_Management_Deployment_IPackageManager5<D>::AddPackageAsync(Windows::Foundation::Uri const& packageUri, param::async_iterable<Windows::Foundation::Uri> const& dependencyPackageUris, Windows::Management::Deployment::DeploymentOptions const& deploymentOptions, Windows::Management::Deployment::PackageVolume const& targetVolume, param::async_iterable<hstring> const& optionalPackageFamilyNames, param::async_iterable<Windows::Foundation::Uri> const& externalPackageUris) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> deploymentOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManager5)->AddPackageToVolumeAndOptionalPackagesAsync(get_abi(packageUri), get_abi(dependencyPackageUris), get_abi(deploymentOptions), get_abi(targetVolume), get_abi(optionalPackageFamilyNames), get_abi(externalPackageUris), put_abi(deploymentOperation)));
    return deploymentOperation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> consume_Windows_Management_Deployment_IPackageManager5<D>::StagePackageAsync(Windows::Foundation::Uri const& packageUri, param::async_iterable<Windows::Foundation::Uri> const& dependencyPackageUris, Windows::Management::Deployment::DeploymentOptions const& deploymentOptions, Windows::Management::Deployment::PackageVolume const& targetVolume, param::async_iterable<hstring> const& optionalPackageFamilyNames, param::async_iterable<Windows::Foundation::Uri> const& externalPackageUris) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> deploymentOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManager5)->StagePackageToVolumeAndOptionalPackagesAsync(get_abi(packageUri), get_abi(dependencyPackageUris), get_abi(deploymentOptions), get_abi(targetVolume), get_abi(optionalPackageFamilyNames), get_abi(externalPackageUris), put_abi(deploymentOperation)));
    return deploymentOperation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> consume_Windows_Management_Deployment_IPackageManager5<D>::RegisterPackageByFamilyNameAsync(param::hstring const& mainPackageFamilyName, param::async_iterable<hstring> const& dependencyPackageFamilyNames, Windows::Management::Deployment::DeploymentOptions const& deploymentOptions, Windows::Management::Deployment::PackageVolume const& appDataVolume, param::async_iterable<hstring> const& optionalPackageFamilyNames) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> deploymentOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManager5)->RegisterPackageByFamilyNameAndOptionalPackagesAsync(get_abi(mainPackageFamilyName), get_abi(dependencyPackageFamilyNames), get_abi(deploymentOptions), get_abi(appDataVolume), get_abi(optionalPackageFamilyNames), put_abi(deploymentOperation)));
    return deploymentOperation;
}

template <typename D> Windows::Management::Deployment::PackageManagerDebugSettings consume_Windows_Management_Deployment_IPackageManager5<D>::DebugSettings() const
{
    Windows::Management::Deployment::PackageManagerDebugSettings value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManager5)->get_DebugSettings(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> consume_Windows_Management_Deployment_IPackageManager6<D>::ProvisionPackageForAllUsersAsync(param::hstring const& packageFamilyName) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManager6)->ProvisionPackageForAllUsersAsync(get_abi(packageFamilyName), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> consume_Windows_Management_Deployment_IPackageManager6<D>::AddPackageByAppInstallerFileAsync(Windows::Foundation::Uri const& appInstallerFileUri, Windows::Management::Deployment::AddPackageByAppInstallerOptions const& options, Windows::Management::Deployment::PackageVolume const& targetVolume) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManager6)->AddPackageByAppInstallerFileAsync(get_abi(appInstallerFileUri), get_abi(options), get_abi(targetVolume), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> consume_Windows_Management_Deployment_IPackageManager6<D>::RequestAddPackageByAppInstallerFileAsync(Windows::Foundation::Uri const& appInstallerFileUri, Windows::Management::Deployment::AddPackageByAppInstallerOptions const& options, Windows::Management::Deployment::PackageVolume const& targetVolume) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManager6)->RequestAddPackageByAppInstallerFileAsync(get_abi(appInstallerFileUri), get_abi(options), get_abi(targetVolume), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> consume_Windows_Management_Deployment_IPackageManager6<D>::AddPackageAsync(Windows::Foundation::Uri const& packageUri, param::async_iterable<Windows::Foundation::Uri> const& dependencyPackageUris, Windows::Management::Deployment::DeploymentOptions const& options, Windows::Management::Deployment::PackageVolume const& targetVolume, param::async_iterable<hstring> const& optionalPackageFamilyNames, param::async_iterable<Windows::Foundation::Uri> const& packageUrisToInstall, param::async_iterable<Windows::Foundation::Uri> const& relatedPackageUris) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManager6)->AddPackageToVolumeAndRelatedSetAsync(get_abi(packageUri), get_abi(dependencyPackageUris), get_abi(options), get_abi(targetVolume), get_abi(optionalPackageFamilyNames), get_abi(packageUrisToInstall), get_abi(relatedPackageUris), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> consume_Windows_Management_Deployment_IPackageManager6<D>::StagePackageAsync(Windows::Foundation::Uri const& packageUri, param::async_iterable<Windows::Foundation::Uri> const& dependencyPackageUris, Windows::Management::Deployment::DeploymentOptions const& options, Windows::Management::Deployment::PackageVolume const& targetVolume, param::async_iterable<hstring> const& optionalPackageFamilyNames, param::async_iterable<Windows::Foundation::Uri> const& packageUrisToInstall, param::async_iterable<Windows::Foundation::Uri> const& relatedPackageUris) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManager6)->StagePackageToVolumeAndRelatedSetAsync(get_abi(packageUri), get_abi(dependencyPackageUris), get_abi(options), get_abi(targetVolume), get_abi(optionalPackageFamilyNames), get_abi(packageUrisToInstall), get_abi(relatedPackageUris), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> consume_Windows_Management_Deployment_IPackageManager6<D>::RequestAddPackageAsync(Windows::Foundation::Uri const& packageUri, param::async_iterable<Windows::Foundation::Uri> const& dependencyPackageUris, Windows::Management::Deployment::DeploymentOptions const& deploymentOptions, Windows::Management::Deployment::PackageVolume const& targetVolume, param::async_iterable<hstring> const& optionalPackageFamilyNames, param::async_iterable<Windows::Foundation::Uri> const& relatedPackageUris) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManager6)->RequestAddPackageAsync(get_abi(packageUri), get_abi(dependencyPackageUris), get_abi(deploymentOptions), get_abi(targetVolume), get_abi(optionalPackageFamilyNames), get_abi(relatedPackageUris), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> consume_Windows_Management_Deployment_IPackageManager7<D>::RequestAddPackageAsync(Windows::Foundation::Uri const& packageUri, param::async_iterable<Windows::Foundation::Uri> const& dependencyPackageUris, Windows::Management::Deployment::DeploymentOptions const& deploymentOptions, Windows::Management::Deployment::PackageVolume const& targetVolume, param::async_iterable<hstring> const& optionalPackageFamilyNames, param::async_iterable<Windows::Foundation::Uri> const& relatedPackageUris, param::async_iterable<Windows::Foundation::Uri> const& packageUrisToInstall) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManager7)->RequestAddPackageAndRelatedSetAsync(get_abi(packageUri), get_abi(dependencyPackageUris), get_abi(deploymentOptions), get_abi(targetVolume), get_abi(optionalPackageFamilyNames), get_abi(relatedPackageUris), get_abi(packageUrisToInstall), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Management_Deployment_IPackageManagerDebugSettings<D>::SetContentGroupStateAsync(Windows::ApplicationModel::Package const& package, param::hstring const& contentGroupName, Windows::ApplicationModel::PackageContentGroupState const& state) const
{
    Windows::Foundation::IAsyncAction action{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManagerDebugSettings)->SetContentGroupStateAsync(get_abi(package), get_abi(contentGroupName), get_abi(state), put_abi(action)));
    return action;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Management_Deployment_IPackageManagerDebugSettings<D>::SetContentGroupStateAsync(Windows::ApplicationModel::Package const& package, param::hstring const& contentGroupName, Windows::ApplicationModel::PackageContentGroupState const& state, double completionPercentage) const
{
    Windows::Foundation::IAsyncAction action{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageManagerDebugSettings)->SetContentGroupStateWithPercentageAsync(get_abi(package), get_abi(contentGroupName), get_abi(state), completionPercentage, put_abi(action)));
    return action;
}

template <typename D> hstring consume_Windows_Management_Deployment_IPackageUserInformation<D>::UserSecurityId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageUserInformation)->get_UserSecurityId(put_abi(value)));
    return value;
}

template <typename D> Windows::Management::Deployment::PackageInstallState consume_Windows_Management_Deployment_IPackageUserInformation<D>::InstallState() const
{
    Windows::Management::Deployment::PackageInstallState value{};
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageUserInformation)->get_InstallState(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Management_Deployment_IPackageVolume<D>::IsOffline() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageVolume)->get_IsOffline(&value));
    return value;
}

template <typename D> bool consume_Windows_Management_Deployment_IPackageVolume<D>::IsSystemVolume() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageVolume)->get_IsSystemVolume(&value));
    return value;
}

template <typename D> hstring consume_Windows_Management_Deployment_IPackageVolume<D>::MountPoint() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageVolume)->get_MountPoint(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Management_Deployment_IPackageVolume<D>::Name() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageVolume)->get_Name(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Management_Deployment_IPackageVolume<D>::PackageStorePath() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageVolume)->get_PackageStorePath(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Management_Deployment_IPackageVolume<D>::SupportsHardLinks() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageVolume)->get_SupportsHardLinks(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package> consume_Windows_Management_Deployment_IPackageVolume<D>::FindPackages() const
{
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package> packageCollection{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageVolume)->FindPackages(put_abi(packageCollection)));
    return packageCollection;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package> consume_Windows_Management_Deployment_IPackageVolume<D>::FindPackages(param::hstring const& packageName, param::hstring const& packagePublisher) const
{
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package> packageCollection{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageVolume)->FindPackagesByNamePublisher(get_abi(packageName), get_abi(packagePublisher), put_abi(packageCollection)));
    return packageCollection;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package> consume_Windows_Management_Deployment_IPackageVolume<D>::FindPackages(param::hstring const& packageFamilyName) const
{
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package> packageCollection{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageVolume)->FindPackagesByPackageFamilyName(get_abi(packageFamilyName), put_abi(packageCollection)));
    return packageCollection;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package> consume_Windows_Management_Deployment_IPackageVolume<D>::FindPackagesWithPackageTypes(Windows::Management::Deployment::PackageTypes const& packageTypes) const
{
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package> packageCollection{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageVolume)->FindPackagesWithPackageTypes(get_abi(packageTypes), put_abi(packageCollection)));
    return packageCollection;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package> consume_Windows_Management_Deployment_IPackageVolume<D>::FindPackagesWithPackageTypes(Windows::Management::Deployment::PackageTypes const& packageTypes, param::hstring const& packageName, param::hstring const& packagePublisher) const
{
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package> packageCollection{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageVolume)->FindPackagesByNamePublisherWithPackagesTypes(get_abi(packageTypes), get_abi(packageName), get_abi(packagePublisher), put_abi(packageCollection)));
    return packageCollection;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package> consume_Windows_Management_Deployment_IPackageVolume<D>::FindPackagesWithPackageTypes(Windows::Management::Deployment::PackageTypes const& packageTypes, param::hstring const& packageFamilyName) const
{
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package> packageCollection{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageVolume)->FindPackagesByPackageFamilyNameWithPackageTypes(get_abi(packageTypes), get_abi(packageFamilyName), put_abi(packageCollection)));
    return packageCollection;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package> consume_Windows_Management_Deployment_IPackageVolume<D>::FindPackage(param::hstring const& packageFullName) const
{
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package> packageCollection{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageVolume)->FindPackageByPackageFullName(get_abi(packageFullName), put_abi(packageCollection)));
    return packageCollection;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package> consume_Windows_Management_Deployment_IPackageVolume<D>::FindPackagesForUser(param::hstring const& userSecurityId) const
{
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package> packageCollection{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageVolume)->FindPackagesByUserSecurityId(get_abi(userSecurityId), put_abi(packageCollection)));
    return packageCollection;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package> consume_Windows_Management_Deployment_IPackageVolume<D>::FindPackagesForUser(param::hstring const& userSecurityId, param::hstring const& packageName, param::hstring const& packagePublisher) const
{
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package> packageCollection{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageVolume)->FindPackagesByUserSecurityIdNamePublisher(get_abi(userSecurityId), get_abi(packageName), get_abi(packagePublisher), put_abi(packageCollection)));
    return packageCollection;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package> consume_Windows_Management_Deployment_IPackageVolume<D>::FindPackagesForUser(param::hstring const& userSecurityId, param::hstring const& packageFamilyName) const
{
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package> packageCollection{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageVolume)->FindPackagesByUserSecurityIdPackageFamilyName(get_abi(userSecurityId), get_abi(packageFamilyName), put_abi(packageCollection)));
    return packageCollection;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package> consume_Windows_Management_Deployment_IPackageVolume<D>::FindPackagesForUserWithPackageTypes(param::hstring const& userSecurityId, Windows::Management::Deployment::PackageTypes const& packageTypes) const
{
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package> packageCollection{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageVolume)->FindPackagesByUserSecurityIdWithPackageTypes(get_abi(userSecurityId), get_abi(packageTypes), put_abi(packageCollection)));
    return packageCollection;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package> consume_Windows_Management_Deployment_IPackageVolume<D>::FindPackagesForUserWithPackageTypes(param::hstring const& userSecurityId, Windows::Management::Deployment::PackageTypes const& packageTypes, param::hstring const& packageName, param::hstring const& packagePublisher) const
{
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package> packageCollection{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageVolume)->FindPackagesByUserSecurityIdNamePublisherWithPackageTypes(get_abi(userSecurityId), get_abi(packageTypes), get_abi(packageName), get_abi(packagePublisher), put_abi(packageCollection)));
    return packageCollection;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package> consume_Windows_Management_Deployment_IPackageVolume<D>::FindPackagesForUserWithPackageTypes(param::hstring const& userSecurityId, Windows::Management::Deployment::PackageTypes const& packageTypes, param::hstring const& packageFamilyName) const
{
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package> packageCollection{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageVolume)->FindPackagesByUserSecurityIdPackageFamilyNameWithPackagesTypes(get_abi(userSecurityId), get_abi(packageTypes), get_abi(packageFamilyName), put_abi(packageCollection)));
    return packageCollection;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package> consume_Windows_Management_Deployment_IPackageVolume<D>::FindPackageForUser(param::hstring const& userSecurityId, param::hstring const& packageFullName) const
{
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package> packageCollection{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageVolume)->FindPackageByUserSecurityIdPackageFullName(get_abi(userSecurityId), get_abi(packageFullName), put_abi(packageCollection)));
    return packageCollection;
}

template <typename D> bool consume_Windows_Management_Deployment_IPackageVolume2<D>::IsFullTrustPackageSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageVolume2)->get_IsFullTrustPackageSupported(&value));
    return value;
}

template <typename D> bool consume_Windows_Management_Deployment_IPackageVolume2<D>::IsAppxInstallSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageVolume2)->get_IsAppxInstallSupported(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<uint64_t> consume_Windows_Management_Deployment_IPackageVolume2<D>::GetAvailableSpaceAsync() const
{
    Windows::Foundation::IAsyncOperation<uint64_t> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::IPackageVolume2)->GetAvailableSpaceAsync(put_abi(operation)));
    return operation;
}

template <typename D>
struct produce<D, Windows::Management::Deployment::IDeploymentResult> : produce_base<D, Windows::Management::Deployment::IDeploymentResult>
{
    HRESULT __stdcall get_ErrorText(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ErrorText());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ActivityId(GUID* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<GUID>(this->shim().ActivityId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ExtendedErrorCode(HRESULT* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<HRESULT>(this->shim().ExtendedErrorCode());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Management::Deployment::IDeploymentResult2> : produce_base<D, Windows::Management::Deployment::IDeploymentResult2>
{
    HRESULT __stdcall get_IsRegistered(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsRegistered());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Management::Deployment::IPackageManager> : produce_base<D, Windows::Management::Deployment::IPackageManager>
{
    HRESULT __stdcall AddPackageAsync(void* packageUri, void* dependencyPackageUris, Windows::Management::Deployment::DeploymentOptions deploymentOptions, void** deploymentOperation) noexcept final
    {
        try
        {
            *deploymentOperation = nullptr;
            typename D::abi_guard guard(this->shim());
            *deploymentOperation = detach_from<Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress>>(this->shim().AddPackageAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&packageUri), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Foundation::Uri> const*>(&dependencyPackageUris), *reinterpret_cast<Windows::Management::Deployment::DeploymentOptions const*>(&deploymentOptions)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall UpdatePackageAsync(void* packageUri, void* dependencyPackageUris, Windows::Management::Deployment::DeploymentOptions deploymentOptions, void** deploymentOperation) noexcept final
    {
        try
        {
            *deploymentOperation = nullptr;
            typename D::abi_guard guard(this->shim());
            *deploymentOperation = detach_from<Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress>>(this->shim().UpdatePackageAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&packageUri), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Foundation::Uri> const*>(&dependencyPackageUris), *reinterpret_cast<Windows::Management::Deployment::DeploymentOptions const*>(&deploymentOptions)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RemovePackageAsync(HSTRING packageFullName, void** deploymentOperation) noexcept final
    {
        try
        {
            *deploymentOperation = nullptr;
            typename D::abi_guard guard(this->shim());
            *deploymentOperation = detach_from<Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress>>(this->shim().RemovePackageAsync(*reinterpret_cast<hstring const*>(&packageFullName)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall StagePackageAsync(void* packageUri, void* dependencyPackageUris, void** deploymentOperation) noexcept final
    {
        try
        {
            *deploymentOperation = nullptr;
            typename D::abi_guard guard(this->shim());
            *deploymentOperation = detach_from<Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress>>(this->shim().StagePackageAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&packageUri), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Foundation::Uri> const*>(&dependencyPackageUris)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RegisterPackageAsync(void* manifestUri, void* dependencyPackageUris, Windows::Management::Deployment::DeploymentOptions deploymentOptions, void** deploymentOperation) noexcept final
    {
        try
        {
            *deploymentOperation = nullptr;
            typename D::abi_guard guard(this->shim());
            *deploymentOperation = detach_from<Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress>>(this->shim().RegisterPackageAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&manifestUri), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Foundation::Uri> const*>(&dependencyPackageUris), *reinterpret_cast<Windows::Management::Deployment::DeploymentOptions const*>(&deploymentOptions)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FindPackages(void** packageCollection) noexcept final
    {
        try
        {
            *packageCollection = nullptr;
            typename D::abi_guard guard(this->shim());
            *packageCollection = detach_from<Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package>>(this->shim().FindPackages());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FindPackagesByUserSecurityId(HSTRING userSecurityId, void** packageCollection) noexcept final
    {
        try
        {
            *packageCollection = nullptr;
            typename D::abi_guard guard(this->shim());
            *packageCollection = detach_from<Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package>>(this->shim().FindPackagesForUser(*reinterpret_cast<hstring const*>(&userSecurityId)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FindPackagesByNamePublisher(HSTRING packageName, HSTRING packagePublisher, void** packageCollection) noexcept final
    {
        try
        {
            *packageCollection = nullptr;
            typename D::abi_guard guard(this->shim());
            *packageCollection = detach_from<Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package>>(this->shim().FindPackages(*reinterpret_cast<hstring const*>(&packageName), *reinterpret_cast<hstring const*>(&packagePublisher)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FindPackagesByUserSecurityIdNamePublisher(HSTRING userSecurityId, HSTRING packageName, HSTRING packagePublisher, void** packageCollection) noexcept final
    {
        try
        {
            *packageCollection = nullptr;
            typename D::abi_guard guard(this->shim());
            *packageCollection = detach_from<Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package>>(this->shim().FindPackagesForUser(*reinterpret_cast<hstring const*>(&userSecurityId), *reinterpret_cast<hstring const*>(&packageName), *reinterpret_cast<hstring const*>(&packagePublisher)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FindUsers(HSTRING packageFullName, void** users) noexcept final
    {
        try
        {
            *users = nullptr;
            typename D::abi_guard guard(this->shim());
            *users = detach_from<Windows::Foundation::Collections::IIterable<Windows::Management::Deployment::PackageUserInformation>>(this->shim().FindUsers(*reinterpret_cast<hstring const*>(&packageFullName)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetPackageState(HSTRING packageFullName, Windows::Management::Deployment::PackageState packageState) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetPackageState(*reinterpret_cast<hstring const*>(&packageFullName), *reinterpret_cast<Windows::Management::Deployment::PackageState const*>(&packageState));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FindPackageByPackageFullName(HSTRING packageFullName, void** packageInformation) noexcept final
    {
        try
        {
            *packageInformation = nullptr;
            typename D::abi_guard guard(this->shim());
            *packageInformation = detach_from<Windows::ApplicationModel::Package>(this->shim().FindPackage(*reinterpret_cast<hstring const*>(&packageFullName)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CleanupPackageForUserAsync(HSTRING packageName, HSTRING userSecurityId, void** deploymentOperation) noexcept final
    {
        try
        {
            *deploymentOperation = nullptr;
            typename D::abi_guard guard(this->shim());
            *deploymentOperation = detach_from<Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress>>(this->shim().CleanupPackageForUserAsync(*reinterpret_cast<hstring const*>(&packageName), *reinterpret_cast<hstring const*>(&userSecurityId)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FindPackagesByPackageFamilyName(HSTRING packageFamilyName, void** packageCollection) noexcept final
    {
        try
        {
            *packageCollection = nullptr;
            typename D::abi_guard guard(this->shim());
            *packageCollection = detach_from<Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package>>(this->shim().FindPackages(*reinterpret_cast<hstring const*>(&packageFamilyName)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FindPackagesByUserSecurityIdPackageFamilyName(HSTRING userSecurityId, HSTRING packageFamilyName, void** packageCollection) noexcept final
    {
        try
        {
            *packageCollection = nullptr;
            typename D::abi_guard guard(this->shim());
            *packageCollection = detach_from<Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package>>(this->shim().FindPackagesForUser(*reinterpret_cast<hstring const*>(&userSecurityId), *reinterpret_cast<hstring const*>(&packageFamilyName)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FindPackageByUserSecurityIdPackageFullName(HSTRING userSecurityId, HSTRING packageFullName, void** packageInformation) noexcept final
    {
        try
        {
            *packageInformation = nullptr;
            typename D::abi_guard guard(this->shim());
            *packageInformation = detach_from<Windows::ApplicationModel::Package>(this->shim().FindPackageForUser(*reinterpret_cast<hstring const*>(&userSecurityId), *reinterpret_cast<hstring const*>(&packageFullName)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Management::Deployment::IPackageManager2> : produce_base<D, Windows::Management::Deployment::IPackageManager2>
{
    HRESULT __stdcall RemovePackageWithOptionsAsync(HSTRING packageFullName, Windows::Management::Deployment::RemovalOptions removalOptions, void** deploymentOperation) noexcept final
    {
        try
        {
            *deploymentOperation = nullptr;
            typename D::abi_guard guard(this->shim());
            *deploymentOperation = detach_from<Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress>>(this->shim().RemovePackageAsync(*reinterpret_cast<hstring const*>(&packageFullName), *reinterpret_cast<Windows::Management::Deployment::RemovalOptions const*>(&removalOptions)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall StagePackageWithOptionsAsync(void* packageUri, void* dependencyPackageUris, Windows::Management::Deployment::DeploymentOptions deploymentOptions, void** deploymentOperation) noexcept final
    {
        try
        {
            *deploymentOperation = nullptr;
            typename D::abi_guard guard(this->shim());
            *deploymentOperation = detach_from<Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress>>(this->shim().StagePackageAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&packageUri), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Foundation::Uri> const*>(&dependencyPackageUris), *reinterpret_cast<Windows::Management::Deployment::DeploymentOptions const*>(&deploymentOptions)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RegisterPackageByFullNameAsync(HSTRING mainPackageFullName, void* dependencyPackageFullNames, Windows::Management::Deployment::DeploymentOptions deploymentOptions, void** deploymentOperation) noexcept final
    {
        try
        {
            *deploymentOperation = nullptr;
            typename D::abi_guard guard(this->shim());
            *deploymentOperation = detach_from<Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress>>(this->shim().RegisterPackageByFullNameAsync(*reinterpret_cast<hstring const*>(&mainPackageFullName), *reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&dependencyPackageFullNames), *reinterpret_cast<Windows::Management::Deployment::DeploymentOptions const*>(&deploymentOptions)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FindPackagesWithPackageTypes(Windows::Management::Deployment::PackageTypes packageTypes, void** packageCollection) noexcept final
    {
        try
        {
            *packageCollection = nullptr;
            typename D::abi_guard guard(this->shim());
            *packageCollection = detach_from<Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package>>(this->shim().FindPackagesWithPackageTypes(*reinterpret_cast<Windows::Management::Deployment::PackageTypes const*>(&packageTypes)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FindPackagesByUserSecurityIdWithPackageTypes(HSTRING userSecurityId, Windows::Management::Deployment::PackageTypes packageTypes, void** packageCollection) noexcept final
    {
        try
        {
            *packageCollection = nullptr;
            typename D::abi_guard guard(this->shim());
            *packageCollection = detach_from<Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package>>(this->shim().FindPackagesForUserWithPackageTypes(*reinterpret_cast<hstring const*>(&userSecurityId), *reinterpret_cast<Windows::Management::Deployment::PackageTypes const*>(&packageTypes)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FindPackagesByNamePublisherWithPackageTypes(HSTRING packageName, HSTRING packagePublisher, Windows::Management::Deployment::PackageTypes packageTypes, void** packageCollection) noexcept final
    {
        try
        {
            *packageCollection = nullptr;
            typename D::abi_guard guard(this->shim());
            *packageCollection = detach_from<Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package>>(this->shim().FindPackagesWithPackageTypes(*reinterpret_cast<hstring const*>(&packageName), *reinterpret_cast<hstring const*>(&packagePublisher), *reinterpret_cast<Windows::Management::Deployment::PackageTypes const*>(&packageTypes)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FindPackagesByUserSecurityIdNamePublisherWithPackageTypes(HSTRING userSecurityId, HSTRING packageName, HSTRING packagePublisher, Windows::Management::Deployment::PackageTypes packageTypes, void** packageCollection) noexcept final
    {
        try
        {
            *packageCollection = nullptr;
            typename D::abi_guard guard(this->shim());
            *packageCollection = detach_from<Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package>>(this->shim().FindPackagesForUserWithPackageTypes(*reinterpret_cast<hstring const*>(&userSecurityId), *reinterpret_cast<hstring const*>(&packageName), *reinterpret_cast<hstring const*>(&packagePublisher), *reinterpret_cast<Windows::Management::Deployment::PackageTypes const*>(&packageTypes)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FindPackagesByPackageFamilyNameWithPackageTypes(HSTRING packageFamilyName, Windows::Management::Deployment::PackageTypes packageTypes, void** packageCollection) noexcept final
    {
        try
        {
            *packageCollection = nullptr;
            typename D::abi_guard guard(this->shim());
            *packageCollection = detach_from<Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package>>(this->shim().FindPackagesWithPackageTypes(*reinterpret_cast<hstring const*>(&packageFamilyName), *reinterpret_cast<Windows::Management::Deployment::PackageTypes const*>(&packageTypes)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FindPackagesByUserSecurityIdPackageFamilyNameWithPackageTypes(HSTRING userSecurityId, HSTRING packageFamilyName, Windows::Management::Deployment::PackageTypes packageTypes, void** packageCollection) noexcept final
    {
        try
        {
            *packageCollection = nullptr;
            typename D::abi_guard guard(this->shim());
            *packageCollection = detach_from<Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Package>>(this->shim().FindPackagesForUserWithPackageTypes(*reinterpret_cast<hstring const*>(&userSecurityId), *reinterpret_cast<hstring const*>(&packageFamilyName), *reinterpret_cast<Windows::Management::Deployment::PackageTypes const*>(&packageTypes)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall StageUserDataAsync(HSTRING packageFullName, void** deploymentOperation) noexcept final
    {
        try
        {
            *deploymentOperation = nullptr;
            typename D::abi_guard guard(this->shim());
            *deploymentOperation = detach_from<Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress>>(this->shim().StageUserDataAsync(*reinterpret_cast<hstring const*>(&packageFullName)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Management::Deployment::IPackageManager3> : produce_base<D, Windows::Management::Deployment::IPackageManager3>
{
    HRESULT __stdcall AddPackageVolumeAsync(HSTRING packageStorePath, void** packageVolume) noexcept final
    {
        try
        {
            *packageVolume = nullptr;
            typename D::abi_guard guard(this->shim());
            *packageVolume = detach_from<Windows::Foundation::IAsyncOperation<Windows::Management::Deployment::PackageVolume>>(this->shim().AddPackageVolumeAsync(*reinterpret_cast<hstring const*>(&packageStorePath)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall AddPackageToVolumeAsync(void* packageUri, void* dependencyPackageUris, Windows::Management::Deployment::DeploymentOptions deploymentOptions, void* targetVolume, void** deploymentOperation) noexcept final
    {
        try
        {
            *deploymentOperation = nullptr;
            typename D::abi_guard guard(this->shim());
            *deploymentOperation = detach_from<Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress>>(this->shim().AddPackageAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&packageUri), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Foundation::Uri> const*>(&dependencyPackageUris), *reinterpret_cast<Windows::Management::Deployment::DeploymentOptions const*>(&deploymentOptions), *reinterpret_cast<Windows::Management::Deployment::PackageVolume const*>(&targetVolume)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ClearPackageStatus(HSTRING packageFullName, Windows::Management::Deployment::PackageStatus status) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ClearPackageStatus(*reinterpret_cast<hstring const*>(&packageFullName), *reinterpret_cast<Windows::Management::Deployment::PackageStatus const*>(&status));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RegisterPackageWithAppDataVolumeAsync(void* manifestUri, void* dependencyPackageUris, Windows::Management::Deployment::DeploymentOptions deploymentOptions, void* appDataVolume, void** deploymentOperation) noexcept final
    {
        try
        {
            *deploymentOperation = nullptr;
            typename D::abi_guard guard(this->shim());
            *deploymentOperation = detach_from<Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress>>(this->shim().RegisterPackageAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&manifestUri), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Foundation::Uri> const*>(&dependencyPackageUris), *reinterpret_cast<Windows::Management::Deployment::DeploymentOptions const*>(&deploymentOptions), *reinterpret_cast<Windows::Management::Deployment::PackageVolume const*>(&appDataVolume)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FindPackageVolumeByName(HSTRING volumeName, void** volume) noexcept final
    {
        try
        {
            *volume = nullptr;
            typename D::abi_guard guard(this->shim());
            *volume = detach_from<Windows::Management::Deployment::PackageVolume>(this->shim().FindPackageVolume(*reinterpret_cast<hstring const*>(&volumeName)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FindPackageVolumes(void** volumeCollection) noexcept final
    {
        try
        {
            *volumeCollection = nullptr;
            typename D::abi_guard guard(this->shim());
            *volumeCollection = detach_from<Windows::Foundation::Collections::IIterable<Windows::Management::Deployment::PackageVolume>>(this->shim().FindPackageVolumes());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetDefaultPackageVolume(void** volume) noexcept final
    {
        try
        {
            *volume = nullptr;
            typename D::abi_guard guard(this->shim());
            *volume = detach_from<Windows::Management::Deployment::PackageVolume>(this->shim().GetDefaultPackageVolume());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall MovePackageToVolumeAsync(HSTRING packageFullName, Windows::Management::Deployment::DeploymentOptions deploymentOptions, void* targetVolume, void** deploymentOperation) noexcept final
    {
        try
        {
            *deploymentOperation = nullptr;
            typename D::abi_guard guard(this->shim());
            *deploymentOperation = detach_from<Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress>>(this->shim().MovePackageToVolumeAsync(*reinterpret_cast<hstring const*>(&packageFullName), *reinterpret_cast<Windows::Management::Deployment::DeploymentOptions const*>(&deploymentOptions), *reinterpret_cast<Windows::Management::Deployment::PackageVolume const*>(&targetVolume)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RemovePackageVolumeAsync(void* volume, void** deploymentOperation) noexcept final
    {
        try
        {
            *deploymentOperation = nullptr;
            typename D::abi_guard guard(this->shim());
            *deploymentOperation = detach_from<Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress>>(this->shim().RemovePackageVolumeAsync(*reinterpret_cast<Windows::Management::Deployment::PackageVolume const*>(&volume)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetDefaultPackageVolume(void* volume) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetDefaultPackageVolume(*reinterpret_cast<Windows::Management::Deployment::PackageVolume const*>(&volume));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetPackageStatus(HSTRING packageFullName, Windows::Management::Deployment::PackageStatus status) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetPackageStatus(*reinterpret_cast<hstring const*>(&packageFullName), *reinterpret_cast<Windows::Management::Deployment::PackageStatus const*>(&status));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetPackageVolumeOfflineAsync(void* packageVolume, void** deploymentOperation) noexcept final
    {
        try
        {
            *deploymentOperation = nullptr;
            typename D::abi_guard guard(this->shim());
            *deploymentOperation = detach_from<Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress>>(this->shim().SetPackageVolumeOfflineAsync(*reinterpret_cast<Windows::Management::Deployment::PackageVolume const*>(&packageVolume)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetPackageVolumeOnlineAsync(void* packageVolume, void** deploymentOperation) noexcept final
    {
        try
        {
            *deploymentOperation = nullptr;
            typename D::abi_guard guard(this->shim());
            *deploymentOperation = detach_from<Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress>>(this->shim().SetPackageVolumeOnlineAsync(*reinterpret_cast<Windows::Management::Deployment::PackageVolume const*>(&packageVolume)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall StagePackageToVolumeAsync(void* packageUri, void* dependencyPackageUris, Windows::Management::Deployment::DeploymentOptions deploymentOptions, void* targetVolume, void** deploymentOperation) noexcept final
    {
        try
        {
            *deploymentOperation = nullptr;
            typename D::abi_guard guard(this->shim());
            *deploymentOperation = detach_from<Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress>>(this->shim().StagePackageAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&packageUri), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Foundation::Uri> const*>(&dependencyPackageUris), *reinterpret_cast<Windows::Management::Deployment::DeploymentOptions const*>(&deploymentOptions), *reinterpret_cast<Windows::Management::Deployment::PackageVolume const*>(&targetVolume)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall StageUserDataWithOptionsAsync(HSTRING packageFullName, Windows::Management::Deployment::DeploymentOptions deploymentOptions, void** deploymentOperation) noexcept final
    {
        try
        {
            *deploymentOperation = nullptr;
            typename D::abi_guard guard(this->shim());
            *deploymentOperation = detach_from<Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress>>(this->shim().StageUserDataAsync(*reinterpret_cast<hstring const*>(&packageFullName), *reinterpret_cast<Windows::Management::Deployment::DeploymentOptions const*>(&deploymentOptions)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Management::Deployment::IPackageManager4> : produce_base<D, Windows::Management::Deployment::IPackageManager4>
{
    HRESULT __stdcall GetPackageVolumesAsync(void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Management::Deployment::PackageVolume>>>(this->shim().GetPackageVolumesAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Management::Deployment::IPackageManager5> : produce_base<D, Windows::Management::Deployment::IPackageManager5>
{
    HRESULT __stdcall AddPackageToVolumeAndOptionalPackagesAsync(void* packageUri, void* dependencyPackageUris, Windows::Management::Deployment::DeploymentOptions deploymentOptions, void* targetVolume, void* optionalPackageFamilyNames, void* externalPackageUris, void** deploymentOperation) noexcept final
    {
        try
        {
            *deploymentOperation = nullptr;
            typename D::abi_guard guard(this->shim());
            *deploymentOperation = detach_from<Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress>>(this->shim().AddPackageAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&packageUri), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Foundation::Uri> const*>(&dependencyPackageUris), *reinterpret_cast<Windows::Management::Deployment::DeploymentOptions const*>(&deploymentOptions), *reinterpret_cast<Windows::Management::Deployment::PackageVolume const*>(&targetVolume), *reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&optionalPackageFamilyNames), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Foundation::Uri> const*>(&externalPackageUris)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall StagePackageToVolumeAndOptionalPackagesAsync(void* packageUri, void* dependencyPackageUris, Windows::Management::Deployment::DeploymentOptions deploymentOptions, void* targetVolume, void* optionalPackageFamilyNames, void* externalPackageUris, void** deploymentOperation) noexcept final
    {
        try
        {
            *deploymentOperation = nullptr;
            typename D::abi_guard guard(this->shim());
            *deploymentOperation = detach_from<Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress>>(this->shim().StagePackageAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&packageUri), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Foundation::Uri> const*>(&dependencyPackageUris), *reinterpret_cast<Windows::Management::Deployment::DeploymentOptions const*>(&deploymentOptions), *reinterpret_cast<Windows::Management::Deployment::PackageVolume const*>(&targetVolume), *reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&optionalPackageFamilyNames), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Foundation::Uri> const*>(&externalPackageUris)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RegisterPackageByFamilyNameAndOptionalPackagesAsync(HSTRING mainPackageFamilyName, void* dependencyPackageFamilyNames, Windows::Management::Deployment::DeploymentOptions deploymentOptions, void* appDataVolume, void* optionalPackageFamilyNames, void** deploymentOperation) noexcept final
    {
        try
        {
            *deploymentOperation = nullptr;
            typename D::abi_guard guard(this->shim());
            *deploymentOperation = detach_from<Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress>>(this->shim().RegisterPackageByFamilyNameAsync(*reinterpret_cast<hstring const*>(&mainPackageFamilyName), *reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&dependencyPackageFamilyNames), *reinterpret_cast<Windows::Management::Deployment::DeploymentOptions const*>(&deploymentOptions), *reinterpret_cast<Windows::Management::Deployment::PackageVolume const*>(&appDataVolume), *reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&optionalPackageFamilyNames)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DebugSettings(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Management::Deployment::PackageManagerDebugSettings>(this->shim().DebugSettings());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Management::Deployment::IPackageManager6> : produce_base<D, Windows::Management::Deployment::IPackageManager6>
{
    HRESULT __stdcall ProvisionPackageForAllUsersAsync(HSTRING packageFamilyName, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress>>(this->shim().ProvisionPackageForAllUsersAsync(*reinterpret_cast<hstring const*>(&packageFamilyName)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall AddPackageByAppInstallerFileAsync(void* appInstallerFileUri, Windows::Management::Deployment::AddPackageByAppInstallerOptions options, void* targetVolume, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress>>(this->shim().AddPackageByAppInstallerFileAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&appInstallerFileUri), *reinterpret_cast<Windows::Management::Deployment::AddPackageByAppInstallerOptions const*>(&options), *reinterpret_cast<Windows::Management::Deployment::PackageVolume const*>(&targetVolume)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RequestAddPackageByAppInstallerFileAsync(void* appInstallerFileUri, Windows::Management::Deployment::AddPackageByAppInstallerOptions options, void* targetVolume, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress>>(this->shim().RequestAddPackageByAppInstallerFileAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&appInstallerFileUri), *reinterpret_cast<Windows::Management::Deployment::AddPackageByAppInstallerOptions const*>(&options), *reinterpret_cast<Windows::Management::Deployment::PackageVolume const*>(&targetVolume)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall AddPackageToVolumeAndRelatedSetAsync(void* packageUri, void* dependencyPackageUris, Windows::Management::Deployment::DeploymentOptions options, void* targetVolume, void* optionalPackageFamilyNames, void* packageUrisToInstall, void* relatedPackageUris, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress>>(this->shim().AddPackageAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&packageUri), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Foundation::Uri> const*>(&dependencyPackageUris), *reinterpret_cast<Windows::Management::Deployment::DeploymentOptions const*>(&options), *reinterpret_cast<Windows::Management::Deployment::PackageVolume const*>(&targetVolume), *reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&optionalPackageFamilyNames), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Foundation::Uri> const*>(&packageUrisToInstall), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Foundation::Uri> const*>(&relatedPackageUris)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall StagePackageToVolumeAndRelatedSetAsync(void* packageUri, void* dependencyPackageUris, Windows::Management::Deployment::DeploymentOptions options, void* targetVolume, void* optionalPackageFamilyNames, void* packageUrisToInstall, void* relatedPackageUris, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress>>(this->shim().StagePackageAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&packageUri), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Foundation::Uri> const*>(&dependencyPackageUris), *reinterpret_cast<Windows::Management::Deployment::DeploymentOptions const*>(&options), *reinterpret_cast<Windows::Management::Deployment::PackageVolume const*>(&targetVolume), *reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&optionalPackageFamilyNames), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Foundation::Uri> const*>(&packageUrisToInstall), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Foundation::Uri> const*>(&relatedPackageUris)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RequestAddPackageAsync(void* packageUri, void* dependencyPackageUris, Windows::Management::Deployment::DeploymentOptions deploymentOptions, void* targetVolume, void* optionalPackageFamilyNames, void* relatedPackageUris, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress>>(this->shim().RequestAddPackageAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&packageUri), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Foundation::Uri> const*>(&dependencyPackageUris), *reinterpret_cast<Windows::Management::Deployment::DeploymentOptions const*>(&deploymentOptions), *reinterpret_cast<Windows::Management::Deployment::PackageVolume const*>(&targetVolume), *reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&optionalPackageFamilyNames), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Foundation::Uri> const*>(&relatedPackageUris)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Management::Deployment::IPackageManager7> : produce_base<D, Windows::Management::Deployment::IPackageManager7>
{
    HRESULT __stdcall RequestAddPackageAndRelatedSetAsync(void* packageUri, void* dependencyPackageUris, Windows::Management::Deployment::DeploymentOptions deploymentOptions, void* targetVolume, void* optionalPackageFamilyNames, void* relatedPackageUris, void* packageUrisToInstall, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult, Windows::Management::Deployment::DeploymentProgress>>(this->shim().RequestAddPackageAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&packageUri), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Foundation::Uri> const*>(&dependencyPackageUris), *reinterpret_cast<Windows::Management::Deployment::DeploymentOptions const*>(&deploymentOptions), *reinterpret_cast<Windows::Management::Deployment::PackageVolume const*>(&targetVolume), *reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&optionalPackageFamilyNames), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Foundation::Uri> const*>(&relatedPackageUris), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Foundation::Uri> const*>(&packageUrisToInstall)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Management::Deployment::IPackageManagerDebugSettings> : produce_base<D, Windows::Management::Deployment::IPackageManagerDebugSettings>
{
    HRESULT __stdcall SetContentGroupStateAsync(void* package, HSTRING contentGroupName, Windows::ApplicationModel::PackageContentGroupState state, void** action) noexcept final
    {
        try
        {
            *action = nullptr;
            typename D::abi_guard guard(this->shim());
            *action = detach_from<Windows::Foundation::IAsyncAction>(this->shim().SetContentGroupStateAsync(*reinterpret_cast<Windows::ApplicationModel::Package const*>(&package), *reinterpret_cast<hstring const*>(&contentGroupName), *reinterpret_cast<Windows::ApplicationModel::PackageContentGroupState const*>(&state)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetContentGroupStateWithPercentageAsync(void* package, HSTRING contentGroupName, Windows::ApplicationModel::PackageContentGroupState state, double completionPercentage, void** action) noexcept final
    {
        try
        {
            *action = nullptr;
            typename D::abi_guard guard(this->shim());
            *action = detach_from<Windows::Foundation::IAsyncAction>(this->shim().SetContentGroupStateAsync(*reinterpret_cast<Windows::ApplicationModel::Package const*>(&package), *reinterpret_cast<hstring const*>(&contentGroupName), *reinterpret_cast<Windows::ApplicationModel::PackageContentGroupState const*>(&state), completionPercentage));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Management::Deployment::IPackageUserInformation> : produce_base<D, Windows::Management::Deployment::IPackageUserInformation>
{
    HRESULT __stdcall get_UserSecurityId(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().UserSecurityId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_InstallState(Windows::Management::Deployment::PackageInstallState* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Management::Deployment::PackageInstallState>(this->shim().InstallState());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Management::Deployment::IPackageVolume> : produce_base<D, Windows::Management::Deployment::IPackageVolume>
{
    HRESULT __stdcall get_IsOffline(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsOffline());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsSystemVolume(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsSystemVolume());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MountPoint(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().MountPoint());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Name(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Name());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PackageStorePath(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().PackageStorePath());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SupportsHardLinks(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().SupportsHardLinks());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FindPackages(void** packageCollection) noexcept final
    {
        try
        {
            *packageCollection = nullptr;
            typename D::abi_guard guard(this->shim());
            *packageCollection = detach_from<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package>>(this->shim().FindPackages());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FindPackagesByNamePublisher(HSTRING packageName, HSTRING packagePublisher, void** packageCollection) noexcept final
    {
        try
        {
            *packageCollection = nullptr;
            typename D::abi_guard guard(this->shim());
            *packageCollection = detach_from<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package>>(this->shim().FindPackages(*reinterpret_cast<hstring const*>(&packageName), *reinterpret_cast<hstring const*>(&packagePublisher)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FindPackagesByPackageFamilyName(HSTRING packageFamilyName, void** packageCollection) noexcept final
    {
        try
        {
            *packageCollection = nullptr;
            typename D::abi_guard guard(this->shim());
            *packageCollection = detach_from<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package>>(this->shim().FindPackages(*reinterpret_cast<hstring const*>(&packageFamilyName)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FindPackagesWithPackageTypes(Windows::Management::Deployment::PackageTypes packageTypes, void** packageCollection) noexcept final
    {
        try
        {
            *packageCollection = nullptr;
            typename D::abi_guard guard(this->shim());
            *packageCollection = detach_from<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package>>(this->shim().FindPackagesWithPackageTypes(*reinterpret_cast<Windows::Management::Deployment::PackageTypes const*>(&packageTypes)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FindPackagesByNamePublisherWithPackagesTypes(Windows::Management::Deployment::PackageTypes packageTypes, HSTRING packageName, HSTRING packagePublisher, void** packageCollection) noexcept final
    {
        try
        {
            *packageCollection = nullptr;
            typename D::abi_guard guard(this->shim());
            *packageCollection = detach_from<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package>>(this->shim().FindPackagesWithPackageTypes(*reinterpret_cast<Windows::Management::Deployment::PackageTypes const*>(&packageTypes), *reinterpret_cast<hstring const*>(&packageName), *reinterpret_cast<hstring const*>(&packagePublisher)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FindPackagesByPackageFamilyNameWithPackageTypes(Windows::Management::Deployment::PackageTypes packageTypes, HSTRING packageFamilyName, void** packageCollection) noexcept final
    {
        try
        {
            *packageCollection = nullptr;
            typename D::abi_guard guard(this->shim());
            *packageCollection = detach_from<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package>>(this->shim().FindPackagesWithPackageTypes(*reinterpret_cast<Windows::Management::Deployment::PackageTypes const*>(&packageTypes), *reinterpret_cast<hstring const*>(&packageFamilyName)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FindPackageByPackageFullName(HSTRING packageFullName, void** packageCollection) noexcept final
    {
        try
        {
            *packageCollection = nullptr;
            typename D::abi_guard guard(this->shim());
            *packageCollection = detach_from<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package>>(this->shim().FindPackage(*reinterpret_cast<hstring const*>(&packageFullName)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FindPackagesByUserSecurityId(HSTRING userSecurityId, void** packageCollection) noexcept final
    {
        try
        {
            *packageCollection = nullptr;
            typename D::abi_guard guard(this->shim());
            *packageCollection = detach_from<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package>>(this->shim().FindPackagesForUser(*reinterpret_cast<hstring const*>(&userSecurityId)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FindPackagesByUserSecurityIdNamePublisher(HSTRING userSecurityId, HSTRING packageName, HSTRING packagePublisher, void** packageCollection) noexcept final
    {
        try
        {
            *packageCollection = nullptr;
            typename D::abi_guard guard(this->shim());
            *packageCollection = detach_from<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package>>(this->shim().FindPackagesForUser(*reinterpret_cast<hstring const*>(&userSecurityId), *reinterpret_cast<hstring const*>(&packageName), *reinterpret_cast<hstring const*>(&packagePublisher)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FindPackagesByUserSecurityIdPackageFamilyName(HSTRING userSecurityId, HSTRING packageFamilyName, void** packageCollection) noexcept final
    {
        try
        {
            *packageCollection = nullptr;
            typename D::abi_guard guard(this->shim());
            *packageCollection = detach_from<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package>>(this->shim().FindPackagesForUser(*reinterpret_cast<hstring const*>(&userSecurityId), *reinterpret_cast<hstring const*>(&packageFamilyName)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FindPackagesByUserSecurityIdWithPackageTypes(HSTRING userSecurityId, Windows::Management::Deployment::PackageTypes packageTypes, void** packageCollection) noexcept final
    {
        try
        {
            *packageCollection = nullptr;
            typename D::abi_guard guard(this->shim());
            *packageCollection = detach_from<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package>>(this->shim().FindPackagesForUserWithPackageTypes(*reinterpret_cast<hstring const*>(&userSecurityId), *reinterpret_cast<Windows::Management::Deployment::PackageTypes const*>(&packageTypes)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FindPackagesByUserSecurityIdNamePublisherWithPackageTypes(HSTRING userSecurityId, Windows::Management::Deployment::PackageTypes packageTypes, HSTRING packageName, HSTRING packagePublisher, void** packageCollection) noexcept final
    {
        try
        {
            *packageCollection = nullptr;
            typename D::abi_guard guard(this->shim());
            *packageCollection = detach_from<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package>>(this->shim().FindPackagesForUserWithPackageTypes(*reinterpret_cast<hstring const*>(&userSecurityId), *reinterpret_cast<Windows::Management::Deployment::PackageTypes const*>(&packageTypes), *reinterpret_cast<hstring const*>(&packageName), *reinterpret_cast<hstring const*>(&packagePublisher)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FindPackagesByUserSecurityIdPackageFamilyNameWithPackagesTypes(HSTRING userSecurityId, Windows::Management::Deployment::PackageTypes packageTypes, HSTRING packageFamilyName, void** packageCollection) noexcept final
    {
        try
        {
            *packageCollection = nullptr;
            typename D::abi_guard guard(this->shim());
            *packageCollection = detach_from<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package>>(this->shim().FindPackagesForUserWithPackageTypes(*reinterpret_cast<hstring const*>(&userSecurityId), *reinterpret_cast<Windows::Management::Deployment::PackageTypes const*>(&packageTypes), *reinterpret_cast<hstring const*>(&packageFamilyName)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FindPackageByUserSecurityIdPackageFullName(HSTRING userSecurityId, HSTRING packageFullName, void** packageCollection) noexcept final
    {
        try
        {
            *packageCollection = nullptr;
            typename D::abi_guard guard(this->shim());
            *packageCollection = detach_from<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package>>(this->shim().FindPackageForUser(*reinterpret_cast<hstring const*>(&userSecurityId), *reinterpret_cast<hstring const*>(&packageFullName)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Management::Deployment::IPackageVolume2> : produce_base<D, Windows::Management::Deployment::IPackageVolume2>
{
    HRESULT __stdcall get_IsFullTrustPackageSupported(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsFullTrustPackageSupported());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsAppxInstallSupported(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsAppxInstallSupported());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetAvailableSpaceAsync(void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<uint64_t>>(this->shim().GetAvailableSpaceAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Management::Deployment {

inline PackageManager::PackageManager() :
    PackageManager(get_activation_factory<PackageManager>().ActivateInstance<PackageManager>())
{}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Management::Deployment::IDeploymentResult> : winrt::impl::hash_base<winrt::Windows::Management::Deployment::IDeploymentResult> {};
template<> struct hash<winrt::Windows::Management::Deployment::IDeploymentResult2> : winrt::impl::hash_base<winrt::Windows::Management::Deployment::IDeploymentResult2> {};
template<> struct hash<winrt::Windows::Management::Deployment::IPackageManager> : winrt::impl::hash_base<winrt::Windows::Management::Deployment::IPackageManager> {};
template<> struct hash<winrt::Windows::Management::Deployment::IPackageManager2> : winrt::impl::hash_base<winrt::Windows::Management::Deployment::IPackageManager2> {};
template<> struct hash<winrt::Windows::Management::Deployment::IPackageManager3> : winrt::impl::hash_base<winrt::Windows::Management::Deployment::IPackageManager3> {};
template<> struct hash<winrt::Windows::Management::Deployment::IPackageManager4> : winrt::impl::hash_base<winrt::Windows::Management::Deployment::IPackageManager4> {};
template<> struct hash<winrt::Windows::Management::Deployment::IPackageManager5> : winrt::impl::hash_base<winrt::Windows::Management::Deployment::IPackageManager5> {};
template<> struct hash<winrt::Windows::Management::Deployment::IPackageManager6> : winrt::impl::hash_base<winrt::Windows::Management::Deployment::IPackageManager6> {};
template<> struct hash<winrt::Windows::Management::Deployment::IPackageManager7> : winrt::impl::hash_base<winrt::Windows::Management::Deployment::IPackageManager7> {};
template<> struct hash<winrt::Windows::Management::Deployment::IPackageManagerDebugSettings> : winrt::impl::hash_base<winrt::Windows::Management::Deployment::IPackageManagerDebugSettings> {};
template<> struct hash<winrt::Windows::Management::Deployment::IPackageUserInformation> : winrt::impl::hash_base<winrt::Windows::Management::Deployment::IPackageUserInformation> {};
template<> struct hash<winrt::Windows::Management::Deployment::IPackageVolume> : winrt::impl::hash_base<winrt::Windows::Management::Deployment::IPackageVolume> {};
template<> struct hash<winrt::Windows::Management::Deployment::IPackageVolume2> : winrt::impl::hash_base<winrt::Windows::Management::Deployment::IPackageVolume2> {};
template<> struct hash<winrt::Windows::Management::Deployment::DeploymentResult> : winrt::impl::hash_base<winrt::Windows::Management::Deployment::DeploymentResult> {};
template<> struct hash<winrt::Windows::Management::Deployment::PackageManager> : winrt::impl::hash_base<winrt::Windows::Management::Deployment::PackageManager> {};
template<> struct hash<winrt::Windows::Management::Deployment::PackageManagerDebugSettings> : winrt::impl::hash_base<winrt::Windows::Management::Deployment::PackageManagerDebugSettings> {};
template<> struct hash<winrt::Windows::Management::Deployment::PackageUserInformation> : winrt::impl::hash_base<winrt::Windows::Management::Deployment::PackageUserInformation> {};
template<> struct hash<winrt::Windows::Management::Deployment::PackageVolume> : winrt::impl::hash_base<winrt::Windows::Management::Deployment::PackageVolume> {};

}

WINRT_WARNING_POP
