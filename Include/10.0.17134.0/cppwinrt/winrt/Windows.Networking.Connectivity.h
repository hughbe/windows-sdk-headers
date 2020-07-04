// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Networking.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.Networking.Connectivity.2.h"
#include "winrt/Windows.Networking.h"

namespace winrt::impl {

template <typename D> uint64_t consume_Windows_Networking_Connectivity_IAttributedNetworkUsage<D>::BytesSent() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IAttributedNetworkUsage)->get_BytesSent(&value));
    return value;
}

template <typename D> uint64_t consume_Windows_Networking_Connectivity_IAttributedNetworkUsage<D>::BytesReceived() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IAttributedNetworkUsage)->get_BytesReceived(&value));
    return value;
}

template <typename D> hstring consume_Windows_Networking_Connectivity_IAttributedNetworkUsage<D>::AttributionId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IAttributedNetworkUsage)->get_AttributionId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Networking_Connectivity_IAttributedNetworkUsage<D>::AttributionName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IAttributedNetworkUsage)->get_AttributionName(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IRandomAccessStreamReference consume_Windows_Networking_Connectivity_IAttributedNetworkUsage<D>::AttributionThumbnail() const
{
    Windows::Storage::Streams::IRandomAccessStreamReference value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IAttributedNetworkUsage)->get_AttributionThumbnail(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Networking_Connectivity_ICellularApnContext<D>::ProviderId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::ICellularApnContext)->get_ProviderId(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_Connectivity_ICellularApnContext<D>::ProviderId(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::ICellularApnContext)->put_ProviderId(get_abi(value)));
}

template <typename D> hstring consume_Windows_Networking_Connectivity_ICellularApnContext<D>::AccessPointName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::ICellularApnContext)->get_AccessPointName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_Connectivity_ICellularApnContext<D>::AccessPointName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::ICellularApnContext)->put_AccessPointName(get_abi(value)));
}

template <typename D> hstring consume_Windows_Networking_Connectivity_ICellularApnContext<D>::UserName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::ICellularApnContext)->get_UserName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_Connectivity_ICellularApnContext<D>::UserName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::ICellularApnContext)->put_UserName(get_abi(value)));
}

template <typename D> hstring consume_Windows_Networking_Connectivity_ICellularApnContext<D>::Password() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::ICellularApnContext)->get_Password(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_Connectivity_ICellularApnContext<D>::Password(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::ICellularApnContext)->put_Password(get_abi(value)));
}

template <typename D> bool consume_Windows_Networking_Connectivity_ICellularApnContext<D>::IsCompressionEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::ICellularApnContext)->get_IsCompressionEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_Networking_Connectivity_ICellularApnContext<D>::IsCompressionEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::ICellularApnContext)->put_IsCompressionEnabled(value));
}

template <typename D> Windows::Networking::Connectivity::CellularApnAuthenticationType consume_Windows_Networking_Connectivity_ICellularApnContext<D>::AuthenticationType() const
{
    Windows::Networking::Connectivity::CellularApnAuthenticationType value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::ICellularApnContext)->get_AuthenticationType(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_Connectivity_ICellularApnContext<D>::AuthenticationType(Windows::Networking::Connectivity::CellularApnAuthenticationType const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::ICellularApnContext)->put_AuthenticationType(get_abi(value)));
}

template <typename D> hstring consume_Windows_Networking_Connectivity_ICellularApnContext2<D>::ProfileName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::ICellularApnContext2)->get_ProfileName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_Connectivity_ICellularApnContext2<D>::ProfileName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::ICellularApnContext2)->put_ProfileName(get_abi(value)));
}

template <typename D> Windows::Networking::Connectivity::NetworkCostType consume_Windows_Networking_Connectivity_IConnectionCost<D>::NetworkCostType() const
{
    Windows::Networking::Connectivity::NetworkCostType value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IConnectionCost)->get_NetworkCostType(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Networking_Connectivity_IConnectionCost<D>::Roaming() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IConnectionCost)->get_Roaming(&value));
    return value;
}

template <typename D> bool consume_Windows_Networking_Connectivity_IConnectionCost<D>::OverDataLimit() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IConnectionCost)->get_OverDataLimit(&value));
    return value;
}

template <typename D> bool consume_Windows_Networking_Connectivity_IConnectionCost<D>::ApproachingDataLimit() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IConnectionCost)->get_ApproachingDataLimit(&value));
    return value;
}

template <typename D> bool consume_Windows_Networking_Connectivity_IConnectionCost2<D>::BackgroundDataUsageRestricted() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IConnectionCost2)->get_BackgroundDataUsageRestricted(&value));
    return value;
}

template <typename D> hstring consume_Windows_Networking_Connectivity_IConnectionProfile<D>::ProfileName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IConnectionProfile)->get_ProfileName(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::Connectivity::NetworkConnectivityLevel consume_Windows_Networking_Connectivity_IConnectionProfile<D>::GetNetworkConnectivityLevel() const
{
    Windows::Networking::Connectivity::NetworkConnectivityLevel value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IConnectionProfile)->GetNetworkConnectivityLevel(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> consume_Windows_Networking_Connectivity_IConnectionProfile<D>::GetNetworkNames() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IConnectionProfile)->GetNetworkNames(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::Connectivity::ConnectionCost consume_Windows_Networking_Connectivity_IConnectionProfile<D>::GetConnectionCost() const
{
    Windows::Networking::Connectivity::ConnectionCost value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IConnectionProfile)->GetConnectionCost(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::Connectivity::DataPlanStatus consume_Windows_Networking_Connectivity_IConnectionProfile<D>::GetDataPlanStatus() const
{
    Windows::Networking::Connectivity::DataPlanStatus value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IConnectionProfile)->GetDataPlanStatus(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::Connectivity::NetworkAdapter consume_Windows_Networking_Connectivity_IConnectionProfile<D>::NetworkAdapter() const
{
    Windows::Networking::Connectivity::NetworkAdapter value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IConnectionProfile)->get_NetworkAdapter(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::Connectivity::DataUsage consume_Windows_Networking_Connectivity_IConnectionProfile<D>::GetLocalUsage(Windows::Foundation::DateTime const& StartTime, Windows::Foundation::DateTime const& EndTime) const
{
    Windows::Networking::Connectivity::DataUsage value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IConnectionProfile)->GetLocalUsage(get_abi(StartTime), get_abi(EndTime), put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::Connectivity::DataUsage consume_Windows_Networking_Connectivity_IConnectionProfile<D>::GetLocalUsage(Windows::Foundation::DateTime const& StartTime, Windows::Foundation::DateTime const& EndTime, Windows::Networking::Connectivity::RoamingStates const& States) const
{
    Windows::Networking::Connectivity::DataUsage value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IConnectionProfile)->GetLocalUsagePerRoamingStates(get_abi(StartTime), get_abi(EndTime), get_abi(States), put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::Connectivity::NetworkSecuritySettings consume_Windows_Networking_Connectivity_IConnectionProfile<D>::NetworkSecuritySettings() const
{
    Windows::Networking::Connectivity::NetworkSecuritySettings value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IConnectionProfile)->get_NetworkSecuritySettings(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Networking_Connectivity_IConnectionProfile2<D>::IsWwanConnectionProfile() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IConnectionProfile2)->get_IsWwanConnectionProfile(&value));
    return value;
}

template <typename D> bool consume_Windows_Networking_Connectivity_IConnectionProfile2<D>::IsWlanConnectionProfile() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IConnectionProfile2)->get_IsWlanConnectionProfile(&value));
    return value;
}

template <typename D> Windows::Networking::Connectivity::WwanConnectionProfileDetails consume_Windows_Networking_Connectivity_IConnectionProfile2<D>::WwanConnectionProfileDetails() const
{
    Windows::Networking::Connectivity::WwanConnectionProfileDetails value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IConnectionProfile2)->get_WwanConnectionProfileDetails(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::Connectivity::WlanConnectionProfileDetails consume_Windows_Networking_Connectivity_IConnectionProfile2<D>::WlanConnectionProfileDetails() const
{
    Windows::Networking::Connectivity::WlanConnectionProfileDetails value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IConnectionProfile2)->get_WlanConnectionProfileDetails(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<GUID> consume_Windows_Networking_Connectivity_IConnectionProfile2<D>::ServiceProviderGuid() const
{
    Windows::Foundation::IReference<GUID> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IConnectionProfile2)->get_ServiceProviderGuid(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint8_t> consume_Windows_Networking_Connectivity_IConnectionProfile2<D>::GetSignalBars() const
{
    Windows::Foundation::IReference<uint8_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IConnectionProfile2)->GetSignalBars(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::Connectivity::DomainConnectivityLevel consume_Windows_Networking_Connectivity_IConnectionProfile2<D>::GetDomainConnectivityLevel() const
{
    Windows::Networking::Connectivity::DomainConnectivityLevel value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IConnectionProfile2)->GetDomainConnectivityLevel(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::Connectivity::NetworkUsage>> consume_Windows_Networking_Connectivity_IConnectionProfile2<D>::GetNetworkUsageAsync(Windows::Foundation::DateTime const& startTime, Windows::Foundation::DateTime const& endTime, Windows::Networking::Connectivity::DataUsageGranularity const& granularity, Windows::Networking::Connectivity::NetworkUsageStates const& states) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::Connectivity::NetworkUsage>> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IConnectionProfile2)->GetNetworkUsageAsync(get_abi(startTime), get_abi(endTime), get_abi(granularity), get_abi(states), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::Connectivity::ConnectivityInterval>> consume_Windows_Networking_Connectivity_IConnectionProfile2<D>::GetConnectivityIntervalsAsync(Windows::Foundation::DateTime const& startTime, Windows::Foundation::DateTime const& endTime, Windows::Networking::Connectivity::NetworkUsageStates const& states) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::Connectivity::ConnectivityInterval>> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IConnectionProfile2)->GetConnectivityIntervalsAsync(get_abi(startTime), get_abi(endTime), get_abi(states), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::Connectivity::AttributedNetworkUsage>> consume_Windows_Networking_Connectivity_IConnectionProfile3<D>::GetAttributedNetworkUsageAsync(Windows::Foundation::DateTime const& startTime, Windows::Foundation::DateTime const& endTime, Windows::Networking::Connectivity::NetworkUsageStates const& states) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::Connectivity::AttributedNetworkUsage>> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IConnectionProfile3)->GetAttributedNetworkUsageAsync(get_abi(startTime), get_abi(endTime), get_abi(states), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::Connectivity::ProviderNetworkUsage>> consume_Windows_Networking_Connectivity_IConnectionProfile4<D>::GetProviderNetworkUsageAsync(Windows::Foundation::DateTime const& startTime, Windows::Foundation::DateTime const& endTime, Windows::Networking::Connectivity::NetworkUsageStates const& states) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::Connectivity::ProviderNetworkUsage>> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IConnectionProfile4)->GetProviderNetworkUsageAsync(get_abi(startTime), get_abi(endTime), get_abi(states), put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_Connectivity_IConnectionProfileFilter<D>::IsConnected(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IConnectionProfileFilter)->put_IsConnected(value));
}

template <typename D> bool consume_Windows_Networking_Connectivity_IConnectionProfileFilter<D>::IsConnected() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IConnectionProfileFilter)->get_IsConnected(&value));
    return value;
}

template <typename D> void consume_Windows_Networking_Connectivity_IConnectionProfileFilter<D>::IsWwanConnectionProfile(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IConnectionProfileFilter)->put_IsWwanConnectionProfile(value));
}

template <typename D> bool consume_Windows_Networking_Connectivity_IConnectionProfileFilter<D>::IsWwanConnectionProfile() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IConnectionProfileFilter)->get_IsWwanConnectionProfile(&value));
    return value;
}

template <typename D> void consume_Windows_Networking_Connectivity_IConnectionProfileFilter<D>::IsWlanConnectionProfile(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IConnectionProfileFilter)->put_IsWlanConnectionProfile(value));
}

template <typename D> bool consume_Windows_Networking_Connectivity_IConnectionProfileFilter<D>::IsWlanConnectionProfile() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IConnectionProfileFilter)->get_IsWlanConnectionProfile(&value));
    return value;
}

template <typename D> void consume_Windows_Networking_Connectivity_IConnectionProfileFilter<D>::NetworkCostType(Windows::Networking::Connectivity::NetworkCostType const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IConnectionProfileFilter)->put_NetworkCostType(get_abi(value)));
}

template <typename D> Windows::Networking::Connectivity::NetworkCostType consume_Windows_Networking_Connectivity_IConnectionProfileFilter<D>::NetworkCostType() const
{
    Windows::Networking::Connectivity::NetworkCostType value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IConnectionProfileFilter)->get_NetworkCostType(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_Connectivity_IConnectionProfileFilter<D>::ServiceProviderGuid(optional<GUID> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IConnectionProfileFilter)->put_ServiceProviderGuid(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<GUID> consume_Windows_Networking_Connectivity_IConnectionProfileFilter<D>::ServiceProviderGuid() const
{
    Windows::Foundation::IReference<GUID> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IConnectionProfileFilter)->get_ServiceProviderGuid(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_Connectivity_IConnectionProfileFilter2<D>::IsRoaming(optional<bool> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IConnectionProfileFilter2)->put_IsRoaming(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<bool> consume_Windows_Networking_Connectivity_IConnectionProfileFilter2<D>::IsRoaming() const
{
    Windows::Foundation::IReference<bool> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IConnectionProfileFilter2)->get_IsRoaming(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_Connectivity_IConnectionProfileFilter2<D>::IsOverDataLimit(optional<bool> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IConnectionProfileFilter2)->put_IsOverDataLimit(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<bool> consume_Windows_Networking_Connectivity_IConnectionProfileFilter2<D>::IsOverDataLimit() const
{
    Windows::Foundation::IReference<bool> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IConnectionProfileFilter2)->get_IsOverDataLimit(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_Connectivity_IConnectionProfileFilter2<D>::IsBackgroundDataUsageRestricted(optional<bool> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IConnectionProfileFilter2)->put_IsBackgroundDataUsageRestricted(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<bool> consume_Windows_Networking_Connectivity_IConnectionProfileFilter2<D>::IsBackgroundDataUsageRestricted() const
{
    Windows::Foundation::IReference<bool> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IConnectionProfileFilter2)->get_IsBackgroundDataUsageRestricted(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Networking_Connectivity_IConnectionProfileFilter2<D>::RawData() const
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IConnectionProfileFilter2)->get_RawData(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Networking_Connectivity_IConnectionProfileFilter3<D>::PurposeGuid(optional<GUID> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IConnectionProfileFilter3)->put_PurposeGuid(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<GUID> consume_Windows_Networking_Connectivity_IConnectionProfileFilter3<D>::PurposeGuid() const
{
    Windows::Foundation::IReference<GUID> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IConnectionProfileFilter3)->get_PurposeGuid(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::Connectivity::ConnectionProfile consume_Windows_Networking_Connectivity_IConnectionSession<D>::ConnectionProfile() const
{
    Windows::Networking::Connectivity::ConnectionProfile value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IConnectionSession)->get_ConnectionProfile(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_Networking_Connectivity_IConnectivityInterval<D>::StartTime() const
{
    Windows::Foundation::DateTime startTime{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IConnectivityInterval)->get_StartTime(put_abi(startTime)));
    return startTime;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Networking_Connectivity_IConnectivityInterval<D>::ConnectionDuration() const
{
    Windows::Foundation::TimeSpan duration{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IConnectivityInterval)->get_ConnectionDuration(put_abi(duration)));
    return duration;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::Connectivity::ConnectionSession> consume_Windows_Networking_Connectivity_IConnectivityManagerStatics<D>::AcquireConnectionAsync(Windows::Networking::Connectivity::CellularApnContext const& cellularApnContext) const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::Connectivity::ConnectionSession> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IConnectivityManagerStatics)->AcquireConnectionAsync(get_abi(cellularApnContext), put_abi(operation)));
    return operation;
}

template <typename D> void consume_Windows_Networking_Connectivity_IConnectivityManagerStatics<D>::AddHttpRoutePolicy(Windows::Networking::Connectivity::RoutePolicy const& routePolicy) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IConnectivityManagerStatics)->AddHttpRoutePolicy(get_abi(routePolicy)));
}

template <typename D> void consume_Windows_Networking_Connectivity_IConnectivityManagerStatics<D>::RemoveHttpRoutePolicy(Windows::Networking::Connectivity::RoutePolicy const& routePolicy) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IConnectivityManagerStatics)->RemoveHttpRoutePolicy(get_abi(routePolicy)));
}

template <typename D> Windows::Networking::Connectivity::DataPlanUsage consume_Windows_Networking_Connectivity_IDataPlanStatus<D>::DataPlanUsage() const
{
    Windows::Networking::Connectivity::DataPlanUsage value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IDataPlanStatus)->get_DataPlanUsage(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint32_t> consume_Windows_Networking_Connectivity_IDataPlanStatus<D>::DataLimitInMegabytes() const
{
    Windows::Foundation::IReference<uint32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IDataPlanStatus)->get_DataLimitInMegabytes(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint64_t> consume_Windows_Networking_Connectivity_IDataPlanStatus<D>::InboundBitsPerSecond() const
{
    Windows::Foundation::IReference<uint64_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IDataPlanStatus)->get_InboundBitsPerSecond(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint64_t> consume_Windows_Networking_Connectivity_IDataPlanStatus<D>::OutboundBitsPerSecond() const
{
    Windows::Foundation::IReference<uint64_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IDataPlanStatus)->get_OutboundBitsPerSecond(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> consume_Windows_Networking_Connectivity_IDataPlanStatus<D>::NextBillingCycle() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IDataPlanStatus)->get_NextBillingCycle(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint32_t> consume_Windows_Networking_Connectivity_IDataPlanStatus<D>::MaxTransferSizeInMegabytes() const
{
    Windows::Foundation::IReference<uint32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IDataPlanStatus)->get_MaxTransferSizeInMegabytes(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Networking_Connectivity_IDataPlanUsage<D>::MegabytesUsed() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IDataPlanUsage)->get_MegabytesUsed(&value));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_Networking_Connectivity_IDataPlanUsage<D>::LastSyncTime() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IDataPlanUsage)->get_LastSyncTime(put_abi(value)));
    return value;
}

template <typename D> uint64_t consume_Windows_Networking_Connectivity_IDataUsage<D>::BytesSent() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IDataUsage)->get_BytesSent(&value));
    return value;
}

template <typename D> uint64_t consume_Windows_Networking_Connectivity_IDataUsage<D>::BytesReceived() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IDataUsage)->get_BytesReceived(&value));
    return value;
}

template <typename D> Windows::Networking::Connectivity::NetworkAdapter consume_Windows_Networking_Connectivity_IIPInformation<D>::NetworkAdapter() const
{
    Windows::Networking::Connectivity::NetworkAdapter value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IIPInformation)->get_NetworkAdapter(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint8_t> consume_Windows_Networking_Connectivity_IIPInformation<D>::PrefixLength() const
{
    Windows::Foundation::IReference<uint8_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IIPInformation)->get_PrefixLength(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::Connectivity::LanIdentifierData consume_Windows_Networking_Connectivity_ILanIdentifier<D>::InfrastructureId() const
{
    Windows::Networking::Connectivity::LanIdentifierData value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::ILanIdentifier)->get_InfrastructureId(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::Connectivity::LanIdentifierData consume_Windows_Networking_Connectivity_ILanIdentifier<D>::PortId() const
{
    Windows::Networking::Connectivity::LanIdentifierData value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::ILanIdentifier)->get_PortId(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Networking_Connectivity_ILanIdentifier<D>::NetworkAdapterId() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::ILanIdentifier)->get_NetworkAdapterId(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Networking_Connectivity_ILanIdentifierData<D>::Type() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::ILanIdentifierData)->get_Type(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<uint8_t> consume_Windows_Networking_Connectivity_ILanIdentifierData<D>::Value() const
{
    Windows::Foundation::Collections::IVectorView<uint8_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::ILanIdentifierData)->get_Value(put_abi(value)));
    return value;
}

template <typename D> uint64_t consume_Windows_Networking_Connectivity_INetworkAdapter<D>::OutboundMaxBitsPerSecond() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::INetworkAdapter)->get_OutboundMaxBitsPerSecond(&value));
    return value;
}

template <typename D> uint64_t consume_Windows_Networking_Connectivity_INetworkAdapter<D>::InboundMaxBitsPerSecond() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::INetworkAdapter)->get_InboundMaxBitsPerSecond(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Networking_Connectivity_INetworkAdapter<D>::IanaInterfaceType() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::INetworkAdapter)->get_IanaInterfaceType(&value));
    return value;
}

template <typename D> Windows::Networking::Connectivity::NetworkItem consume_Windows_Networking_Connectivity_INetworkAdapter<D>::NetworkItem() const
{
    Windows::Networking::Connectivity::NetworkItem value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::INetworkAdapter)->get_NetworkItem(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Networking_Connectivity_INetworkAdapter<D>::NetworkAdapterId() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::INetworkAdapter)->get_NetworkAdapterId(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::Connectivity::ConnectionProfile> consume_Windows_Networking_Connectivity_INetworkAdapter<D>::GetConnectedProfileAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::Connectivity::ConnectionProfile> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::INetworkAdapter)->GetConnectedProfileAsync(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Networking::Connectivity::ConnectionProfile> consume_Windows_Networking_Connectivity_INetworkInformationStatics<D>::GetConnectionProfiles() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Networking::Connectivity::ConnectionProfile> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::INetworkInformationStatics)->GetConnectionProfiles(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::Connectivity::ConnectionProfile consume_Windows_Networking_Connectivity_INetworkInformationStatics<D>::GetInternetConnectionProfile() const
{
    Windows::Networking::Connectivity::ConnectionProfile value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::INetworkInformationStatics)->GetInternetConnectionProfile(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Networking::Connectivity::LanIdentifier> consume_Windows_Networking_Connectivity_INetworkInformationStatics<D>::GetLanIdentifiers() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Networking::Connectivity::LanIdentifier> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::INetworkInformationStatics)->GetLanIdentifiers(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Networking::HostName> consume_Windows_Networking_Connectivity_INetworkInformationStatics<D>::GetHostNames() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Networking::HostName> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::INetworkInformationStatics)->GetHostNames(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Networking::Connectivity::ProxyConfiguration> consume_Windows_Networking_Connectivity_INetworkInformationStatics<D>::GetProxyConfigurationAsync(Windows::Foundation::Uri const& uri) const
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::Connectivity::ProxyConfiguration> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::INetworkInformationStatics)->GetProxyConfigurationAsync(get_abi(uri), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Networking::EndpointPair> consume_Windows_Networking_Connectivity_INetworkInformationStatics<D>::GetSortedEndpointPairs(param::iterable<Windows::Networking::EndpointPair> const& destinationList, Windows::Networking::HostNameSortOptions const& sortOptions) const
{
    Windows::Foundation::Collections::IVectorView<Windows::Networking::EndpointPair> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::INetworkInformationStatics)->GetSortedEndpointPairs(get_abi(destinationList), get_abi(sortOptions), put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Networking_Connectivity_INetworkInformationStatics<D>::NetworkStatusChanged(Windows::Networking::Connectivity::NetworkStatusChangedEventHandler const& networkStatusHandler) const
{
    event_token eventCookie{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::INetworkInformationStatics)->add_NetworkStatusChanged(get_abi(networkStatusHandler), put_abi(eventCookie)));
    return eventCookie;
}

template <typename D> event_revoker<Windows::Networking::Connectivity::INetworkInformationStatics> consume_Windows_Networking_Connectivity_INetworkInformationStatics<D>::NetworkStatusChanged(auto_revoke_t, Windows::Networking::Connectivity::NetworkStatusChangedEventHandler const& networkStatusHandler) const
{
    return impl::make_event_revoker<D, Windows::Networking::Connectivity::INetworkInformationStatics>(this, &abi_t<Windows::Networking::Connectivity::INetworkInformationStatics>::remove_NetworkStatusChanged, NetworkStatusChanged(networkStatusHandler));
}

template <typename D> void consume_Windows_Networking_Connectivity_INetworkInformationStatics<D>::NetworkStatusChanged(event_token const& eventCookie) const
{
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::INetworkInformationStatics)->remove_NetworkStatusChanged(get_abi(eventCookie)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::Connectivity::ConnectionProfile>> consume_Windows_Networking_Connectivity_INetworkInformationStatics2<D>::FindConnectionProfilesAsync(Windows::Networking::Connectivity::ConnectionProfileFilter const& pProfileFilter) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::Connectivity::ConnectionProfile>> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::INetworkInformationStatics2)->FindConnectionProfilesAsync(get_abi(pProfileFilter), put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Networking_Connectivity_INetworkItem<D>::NetworkId() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::INetworkItem)->get_NetworkId(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::Connectivity::NetworkTypes consume_Windows_Networking_Connectivity_INetworkItem<D>::GetNetworkTypes() const
{
    Windows::Networking::Connectivity::NetworkTypes value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::INetworkItem)->GetNetworkTypes(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::Connectivity::NetworkAuthenticationType consume_Windows_Networking_Connectivity_INetworkSecuritySettings<D>::NetworkAuthenticationType() const
{
    Windows::Networking::Connectivity::NetworkAuthenticationType value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::INetworkSecuritySettings)->get_NetworkAuthenticationType(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::Connectivity::NetworkEncryptionType consume_Windows_Networking_Connectivity_INetworkSecuritySettings<D>::NetworkEncryptionType() const
{
    Windows::Networking::Connectivity::NetworkEncryptionType value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::INetworkSecuritySettings)->get_NetworkEncryptionType(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Networking_Connectivity_INetworkStateChangeEventDetails<D>::HasNewInternetConnectionProfile() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::INetworkStateChangeEventDetails)->get_HasNewInternetConnectionProfile(&value));
    return value;
}

template <typename D> bool consume_Windows_Networking_Connectivity_INetworkStateChangeEventDetails<D>::HasNewConnectionCost() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::INetworkStateChangeEventDetails)->get_HasNewConnectionCost(&value));
    return value;
}

template <typename D> bool consume_Windows_Networking_Connectivity_INetworkStateChangeEventDetails<D>::HasNewNetworkConnectivityLevel() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::INetworkStateChangeEventDetails)->get_HasNewNetworkConnectivityLevel(&value));
    return value;
}

template <typename D> bool consume_Windows_Networking_Connectivity_INetworkStateChangeEventDetails<D>::HasNewDomainConnectivityLevel() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::INetworkStateChangeEventDetails)->get_HasNewDomainConnectivityLevel(&value));
    return value;
}

template <typename D> bool consume_Windows_Networking_Connectivity_INetworkStateChangeEventDetails<D>::HasNewHostNameList() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::INetworkStateChangeEventDetails)->get_HasNewHostNameList(&value));
    return value;
}

template <typename D> bool consume_Windows_Networking_Connectivity_INetworkStateChangeEventDetails<D>::HasNewWwanRegistrationState() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::INetworkStateChangeEventDetails)->get_HasNewWwanRegistrationState(&value));
    return value;
}

template <typename D> bool consume_Windows_Networking_Connectivity_INetworkStateChangeEventDetails2<D>::HasNewTetheringOperationalState() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::INetworkStateChangeEventDetails2)->get_HasNewTetheringOperationalState(&value));
    return value;
}

template <typename D> bool consume_Windows_Networking_Connectivity_INetworkStateChangeEventDetails2<D>::HasNewTetheringClientCount() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::INetworkStateChangeEventDetails2)->get_HasNewTetheringClientCount(&value));
    return value;
}

template <typename D> uint64_t consume_Windows_Networking_Connectivity_INetworkUsage<D>::BytesSent() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::INetworkUsage)->get_BytesSent(&value));
    return value;
}

template <typename D> uint64_t consume_Windows_Networking_Connectivity_INetworkUsage<D>::BytesReceived() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::INetworkUsage)->get_BytesReceived(&value));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Networking_Connectivity_INetworkUsage<D>::ConnectionDuration() const
{
    Windows::Foundation::TimeSpan duration{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::INetworkUsage)->get_ConnectionDuration(put_abi(duration)));
    return duration;
}

template <typename D> uint64_t consume_Windows_Networking_Connectivity_IProviderNetworkUsage<D>::BytesSent() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IProviderNetworkUsage)->get_BytesSent(&value));
    return value;
}

template <typename D> uint64_t consume_Windows_Networking_Connectivity_IProviderNetworkUsage<D>::BytesReceived() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IProviderNetworkUsage)->get_BytesReceived(&value));
    return value;
}

template <typename D> hstring consume_Windows_Networking_Connectivity_IProviderNetworkUsage<D>::ProviderId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IProviderNetworkUsage)->get_ProviderId(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Foundation::Uri> consume_Windows_Networking_Connectivity_IProxyConfiguration<D>::ProxyUris() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Foundation::Uri> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IProxyConfiguration)->get_ProxyUris(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Networking_Connectivity_IProxyConfiguration<D>::CanConnectDirectly() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IProxyConfiguration)->get_CanConnectDirectly(&value));
    return value;
}

template <typename D> Windows::Networking::Connectivity::ConnectionProfile consume_Windows_Networking_Connectivity_IRoutePolicy<D>::ConnectionProfile() const
{
    Windows::Networking::Connectivity::ConnectionProfile value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IRoutePolicy)->get_ConnectionProfile(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::HostName consume_Windows_Networking_Connectivity_IRoutePolicy<D>::HostName() const
{
    Windows::Networking::HostName value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IRoutePolicy)->get_HostName(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::DomainNameType consume_Windows_Networking_Connectivity_IRoutePolicy<D>::HostNameType() const
{
    Windows::Networking::DomainNameType value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IRoutePolicy)->get_HostNameType(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::Connectivity::RoutePolicy consume_Windows_Networking_Connectivity_IRoutePolicyFactory<D>::CreateRoutePolicy(Windows::Networking::Connectivity::ConnectionProfile const& connectionProfile, Windows::Networking::HostName const& hostName, Windows::Networking::DomainNameType const& type) const
{
    Windows::Networking::Connectivity::RoutePolicy routePolicy{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IRoutePolicyFactory)->CreateRoutePolicy(get_abi(connectionProfile), get_abi(hostName), get_abi(type), put_abi(routePolicy)));
    return routePolicy;
}

template <typename D> hstring consume_Windows_Networking_Connectivity_IWlanConnectionProfileDetails<D>::GetConnectedSsid() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IWlanConnectionProfileDetails)->GetConnectedSsid(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Networking_Connectivity_IWwanConnectionProfileDetails<D>::HomeProviderId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IWwanConnectionProfileDetails)->get_HomeProviderId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Networking_Connectivity_IWwanConnectionProfileDetails<D>::AccessPointName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IWwanConnectionProfileDetails)->get_AccessPointName(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::Connectivity::WwanNetworkRegistrationState consume_Windows_Networking_Connectivity_IWwanConnectionProfileDetails<D>::GetNetworkRegistrationState() const
{
    Windows::Networking::Connectivity::WwanNetworkRegistrationState value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IWwanConnectionProfileDetails)->GetNetworkRegistrationState(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::Connectivity::WwanDataClass consume_Windows_Networking_Connectivity_IWwanConnectionProfileDetails<D>::GetCurrentDataClass() const
{
    Windows::Networking::Connectivity::WwanDataClass value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IWwanConnectionProfileDetails)->GetCurrentDataClass(put_abi(value)));
    return value;
}

template <typename D> Windows::Networking::Connectivity::WwanNetworkIPKind consume_Windows_Networking_Connectivity_IWwanConnectionProfileDetails2<D>::IPKind() const
{
    Windows::Networking::Connectivity::WwanNetworkIPKind value{};
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IWwanConnectionProfileDetails2)->get_IPKind(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<GUID> consume_Windows_Networking_Connectivity_IWwanConnectionProfileDetails2<D>::PurposeGuids() const
{
    Windows::Foundation::Collections::IVectorView<GUID> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Networking::Connectivity::IWwanConnectionProfileDetails2)->get_PurposeGuids(put_abi(value)));
    return value;
}

template <> struct delegate<Windows::Networking::Connectivity::NetworkStatusChangedEventHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::Networking::Connectivity::NetworkStatusChangedEventHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::Networking::Connectivity::NetworkStatusChangedEventHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(void* sender) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&sender));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };
};

template <typename D>
struct produce<D, Windows::Networking::Connectivity::IAttributedNetworkUsage> : produce_base<D, Windows::Networking::Connectivity::IAttributedNetworkUsage>
{
    HRESULT __stdcall get_BytesSent(uint64_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint64_t>(this->shim().BytesSent());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_BytesReceived(uint64_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint64_t>(this->shim().BytesReceived());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AttributionId(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AttributionId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AttributionName(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AttributionName());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AttributionThumbnail(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::IRandomAccessStreamReference>(this->shim().AttributionThumbnail());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Connectivity::ICellularApnContext> : produce_base<D, Windows::Networking::Connectivity::ICellularApnContext>
{
    HRESULT __stdcall get_ProviderId(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ProviderId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ProviderId(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ProviderId(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AccessPointName(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AccessPointName());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_AccessPointName(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AccessPointName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_UserName(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().UserName());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_UserName(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UserName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Password(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Password());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Password(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Password(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsCompressionEnabled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsCompressionEnabled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsCompressionEnabled(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsCompressionEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AuthenticationType(Windows::Networking::Connectivity::CellularApnAuthenticationType* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Connectivity::CellularApnAuthenticationType>(this->shim().AuthenticationType());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_AuthenticationType(Windows::Networking::Connectivity::CellularApnAuthenticationType value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AuthenticationType(*reinterpret_cast<Windows::Networking::Connectivity::CellularApnAuthenticationType const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Connectivity::ICellularApnContext2> : produce_base<D, Windows::Networking::Connectivity::ICellularApnContext2>
{
    HRESULT __stdcall get_ProfileName(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ProfileName());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ProfileName(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ProfileName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Connectivity::IConnectionCost> : produce_base<D, Windows::Networking::Connectivity::IConnectionCost>
{
    HRESULT __stdcall get_NetworkCostType(Windows::Networking::Connectivity::NetworkCostType* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Connectivity::NetworkCostType>(this->shim().NetworkCostType());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Roaming(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Roaming());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_OverDataLimit(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().OverDataLimit());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ApproachingDataLimit(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().ApproachingDataLimit());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Connectivity::IConnectionCost2> : produce_base<D, Windows::Networking::Connectivity::IConnectionCost2>
{
    HRESULT __stdcall get_BackgroundDataUsageRestricted(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().BackgroundDataUsageRestricted());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Connectivity::IConnectionProfile> : produce_base<D, Windows::Networking::Connectivity::IConnectionProfile>
{
    HRESULT __stdcall get_ProfileName(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ProfileName());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetNetworkConnectivityLevel(Windows::Networking::Connectivity::NetworkConnectivityLevel* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Connectivity::NetworkConnectivityLevel>(this->shim().GetNetworkConnectivityLevel());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetNetworkNames(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<hstring>>(this->shim().GetNetworkNames());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetConnectionCost(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Connectivity::ConnectionCost>(this->shim().GetConnectionCost());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetDataPlanStatus(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Connectivity::DataPlanStatus>(this->shim().GetDataPlanStatus());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_NetworkAdapter(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Connectivity::NetworkAdapter>(this->shim().NetworkAdapter());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetLocalUsage(Windows::Foundation::DateTime StartTime, Windows::Foundation::DateTime EndTime, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Connectivity::DataUsage>(this->shim().GetLocalUsage(*reinterpret_cast<Windows::Foundation::DateTime const*>(&StartTime), *reinterpret_cast<Windows::Foundation::DateTime const*>(&EndTime)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetLocalUsagePerRoamingStates(Windows::Foundation::DateTime StartTime, Windows::Foundation::DateTime EndTime, Windows::Networking::Connectivity::RoamingStates States, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Connectivity::DataUsage>(this->shim().GetLocalUsage(*reinterpret_cast<Windows::Foundation::DateTime const*>(&StartTime), *reinterpret_cast<Windows::Foundation::DateTime const*>(&EndTime), *reinterpret_cast<Windows::Networking::Connectivity::RoamingStates const*>(&States)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_NetworkSecuritySettings(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Connectivity::NetworkSecuritySettings>(this->shim().NetworkSecuritySettings());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Connectivity::IConnectionProfile2> : produce_base<D, Windows::Networking::Connectivity::IConnectionProfile2>
{
    HRESULT __stdcall get_IsWwanConnectionProfile(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsWwanConnectionProfile());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsWlanConnectionProfile(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsWlanConnectionProfile());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_WwanConnectionProfileDetails(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Connectivity::WwanConnectionProfileDetails>(this->shim().WwanConnectionProfileDetails());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_WlanConnectionProfileDetails(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Connectivity::WlanConnectionProfileDetails>(this->shim().WlanConnectionProfileDetails());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ServiceProviderGuid(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<GUID>>(this->shim().ServiceProviderGuid());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetSignalBars(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<uint8_t>>(this->shim().GetSignalBars());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetDomainConnectivityLevel(Windows::Networking::Connectivity::DomainConnectivityLevel* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Connectivity::DomainConnectivityLevel>(this->shim().GetDomainConnectivityLevel());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetNetworkUsageAsync(Windows::Foundation::DateTime startTime, Windows::Foundation::DateTime endTime, Windows::Networking::Connectivity::DataUsageGranularity granularity, struct struct_Windows_Networking_Connectivity_NetworkUsageStates states, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::Connectivity::NetworkUsage>>>(this->shim().GetNetworkUsageAsync(*reinterpret_cast<Windows::Foundation::DateTime const*>(&startTime), *reinterpret_cast<Windows::Foundation::DateTime const*>(&endTime), *reinterpret_cast<Windows::Networking::Connectivity::DataUsageGranularity const*>(&granularity), *reinterpret_cast<Windows::Networking::Connectivity::NetworkUsageStates const*>(&states)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetConnectivityIntervalsAsync(Windows::Foundation::DateTime startTime, Windows::Foundation::DateTime endTime, struct struct_Windows_Networking_Connectivity_NetworkUsageStates states, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::Connectivity::ConnectivityInterval>>>(this->shim().GetConnectivityIntervalsAsync(*reinterpret_cast<Windows::Foundation::DateTime const*>(&startTime), *reinterpret_cast<Windows::Foundation::DateTime const*>(&endTime), *reinterpret_cast<Windows::Networking::Connectivity::NetworkUsageStates const*>(&states)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Connectivity::IConnectionProfile3> : produce_base<D, Windows::Networking::Connectivity::IConnectionProfile3>
{
    HRESULT __stdcall GetAttributedNetworkUsageAsync(Windows::Foundation::DateTime startTime, Windows::Foundation::DateTime endTime, struct struct_Windows_Networking_Connectivity_NetworkUsageStates states, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::Connectivity::AttributedNetworkUsage>>>(this->shim().GetAttributedNetworkUsageAsync(*reinterpret_cast<Windows::Foundation::DateTime const*>(&startTime), *reinterpret_cast<Windows::Foundation::DateTime const*>(&endTime), *reinterpret_cast<Windows::Networking::Connectivity::NetworkUsageStates const*>(&states)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Connectivity::IConnectionProfile4> : produce_base<D, Windows::Networking::Connectivity::IConnectionProfile4>
{
    HRESULT __stdcall GetProviderNetworkUsageAsync(Windows::Foundation::DateTime startTime, Windows::Foundation::DateTime endTime, struct struct_Windows_Networking_Connectivity_NetworkUsageStates states, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::Connectivity::ProviderNetworkUsage>>>(this->shim().GetProviderNetworkUsageAsync(*reinterpret_cast<Windows::Foundation::DateTime const*>(&startTime), *reinterpret_cast<Windows::Foundation::DateTime const*>(&endTime), *reinterpret_cast<Windows::Networking::Connectivity::NetworkUsageStates const*>(&states)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Connectivity::IConnectionProfileFilter> : produce_base<D, Windows::Networking::Connectivity::IConnectionProfileFilter>
{
    HRESULT __stdcall put_IsConnected(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsConnected(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsConnected(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsConnected());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsWwanConnectionProfile(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsWwanConnectionProfile(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsWwanConnectionProfile(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsWwanConnectionProfile());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsWlanConnectionProfile(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsWlanConnectionProfile(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsWlanConnectionProfile(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsWlanConnectionProfile());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_NetworkCostType(Windows::Networking::Connectivity::NetworkCostType value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NetworkCostType(*reinterpret_cast<Windows::Networking::Connectivity::NetworkCostType const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_NetworkCostType(Windows::Networking::Connectivity::NetworkCostType* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Connectivity::NetworkCostType>(this->shim().NetworkCostType());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ServiceProviderGuid(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ServiceProviderGuid(*reinterpret_cast<Windows::Foundation::IReference<GUID> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ServiceProviderGuid(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<GUID>>(this->shim().ServiceProviderGuid());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Connectivity::IConnectionProfileFilter2> : produce_base<D, Windows::Networking::Connectivity::IConnectionProfileFilter2>
{
    HRESULT __stdcall put_IsRoaming(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsRoaming(*reinterpret_cast<Windows::Foundation::IReference<bool> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsRoaming(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<bool>>(this->shim().IsRoaming());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsOverDataLimit(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsOverDataLimit(*reinterpret_cast<Windows::Foundation::IReference<bool> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsOverDataLimit(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<bool>>(this->shim().IsOverDataLimit());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsBackgroundDataUsageRestricted(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsBackgroundDataUsageRestricted(*reinterpret_cast<Windows::Foundation::IReference<bool> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsBackgroundDataUsageRestricted(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<bool>>(this->shim().IsBackgroundDataUsageRestricted());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RawData(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::IBuffer>(this->shim().RawData());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Connectivity::IConnectionProfileFilter3> : produce_base<D, Windows::Networking::Connectivity::IConnectionProfileFilter3>
{
    HRESULT __stdcall put_PurposeGuid(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PurposeGuid(*reinterpret_cast<Windows::Foundation::IReference<GUID> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PurposeGuid(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<GUID>>(this->shim().PurposeGuid());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Connectivity::IConnectionSession> : produce_base<D, Windows::Networking::Connectivity::IConnectionSession>
{
    HRESULT __stdcall get_ConnectionProfile(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Connectivity::ConnectionProfile>(this->shim().ConnectionProfile());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Connectivity::IConnectivityInterval> : produce_base<D, Windows::Networking::Connectivity::IConnectivityInterval>
{
    HRESULT __stdcall get_StartTime(Windows::Foundation::DateTime* startTime) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *startTime = detach_from<Windows::Foundation::DateTime>(this->shim().StartTime());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ConnectionDuration(Windows::Foundation::TimeSpan* duration) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *duration = detach_from<Windows::Foundation::TimeSpan>(this->shim().ConnectionDuration());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Connectivity::IConnectivityManagerStatics> : produce_base<D, Windows::Networking::Connectivity::IConnectivityManagerStatics>
{
    HRESULT __stdcall AcquireConnectionAsync(void* cellularApnContext, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Networking::Connectivity::ConnectionSession>>(this->shim().AcquireConnectionAsync(*reinterpret_cast<Windows::Networking::Connectivity::CellularApnContext const*>(&cellularApnContext)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall AddHttpRoutePolicy(void* routePolicy) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddHttpRoutePolicy(*reinterpret_cast<Windows::Networking::Connectivity::RoutePolicy const*>(&routePolicy));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RemoveHttpRoutePolicy(void* routePolicy) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RemoveHttpRoutePolicy(*reinterpret_cast<Windows::Networking::Connectivity::RoutePolicy const*>(&routePolicy));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Connectivity::IDataPlanStatus> : produce_base<D, Windows::Networking::Connectivity::IDataPlanStatus>
{
    HRESULT __stdcall get_DataPlanUsage(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Connectivity::DataPlanUsage>(this->shim().DataPlanUsage());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DataLimitInMegabytes(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<uint32_t>>(this->shim().DataLimitInMegabytes());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_InboundBitsPerSecond(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<uint64_t>>(this->shim().InboundBitsPerSecond());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_OutboundBitsPerSecond(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<uint64_t>>(this->shim().OutboundBitsPerSecond());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_NextBillingCycle(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<Windows::Foundation::DateTime>>(this->shim().NextBillingCycle());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MaxTransferSizeInMegabytes(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<uint32_t>>(this->shim().MaxTransferSizeInMegabytes());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Connectivity::IDataPlanUsage> : produce_base<D, Windows::Networking::Connectivity::IDataPlanUsage>
{
    HRESULT __stdcall get_MegabytesUsed(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().MegabytesUsed());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_LastSyncTime(Windows::Foundation::DateTime* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::DateTime>(this->shim().LastSyncTime());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Connectivity::IDataUsage> : produce_base<D, Windows::Networking::Connectivity::IDataUsage>
{
    HRESULT __stdcall get_BytesSent(uint64_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint64_t>(this->shim().BytesSent());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_BytesReceived(uint64_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint64_t>(this->shim().BytesReceived());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Connectivity::IIPInformation> : produce_base<D, Windows::Networking::Connectivity::IIPInformation>
{
    HRESULT __stdcall get_NetworkAdapter(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Connectivity::NetworkAdapter>(this->shim().NetworkAdapter());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PrefixLength(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<uint8_t>>(this->shim().PrefixLength());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Connectivity::ILanIdentifier> : produce_base<D, Windows::Networking::Connectivity::ILanIdentifier>
{
    HRESULT __stdcall get_InfrastructureId(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Connectivity::LanIdentifierData>(this->shim().InfrastructureId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PortId(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Connectivity::LanIdentifierData>(this->shim().PortId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_NetworkAdapterId(GUID* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<GUID>(this->shim().NetworkAdapterId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Connectivity::ILanIdentifierData> : produce_base<D, Windows::Networking::Connectivity::ILanIdentifierData>
{
    HRESULT __stdcall get_Type(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().Type());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Value(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<uint8_t>>(this->shim().Value());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Connectivity::INetworkAdapter> : produce_base<D, Windows::Networking::Connectivity::INetworkAdapter>
{
    HRESULT __stdcall get_OutboundMaxBitsPerSecond(uint64_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint64_t>(this->shim().OutboundMaxBitsPerSecond());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_InboundMaxBitsPerSecond(uint64_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint64_t>(this->shim().InboundMaxBitsPerSecond());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IanaInterfaceType(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().IanaInterfaceType());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_NetworkItem(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Connectivity::NetworkItem>(this->shim().NetworkItem());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_NetworkAdapterId(GUID* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<GUID>(this->shim().NetworkAdapterId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetConnectedProfileAsync(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncOperation<Windows::Networking::Connectivity::ConnectionProfile>>(this->shim().GetConnectedProfileAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Connectivity::INetworkInformationStatics> : produce_base<D, Windows::Networking::Connectivity::INetworkInformationStatics>
{
    HRESULT __stdcall GetConnectionProfiles(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Networking::Connectivity::ConnectionProfile>>(this->shim().GetConnectionProfiles());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetInternetConnectionProfile(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Connectivity::ConnectionProfile>(this->shim().GetInternetConnectionProfile());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetLanIdentifiers(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Networking::Connectivity::LanIdentifier>>(this->shim().GetLanIdentifiers());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetHostNames(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Networking::HostName>>(this->shim().GetHostNames());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetProxyConfigurationAsync(void* uri, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncOperation<Windows::Networking::Connectivity::ProxyConfiguration>>(this->shim().GetProxyConfigurationAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetSortedEndpointPairs(void* destinationList, Windows::Networking::HostNameSortOptions sortOptions, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Networking::EndpointPair>>(this->shim().GetSortedEndpointPairs(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Networking::EndpointPair> const*>(&destinationList), *reinterpret_cast<Windows::Networking::HostNameSortOptions const*>(&sortOptions)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_NetworkStatusChanged(void* networkStatusHandler, event_token* eventCookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *eventCookie = detach_from<event_token>(this->shim().NetworkStatusChanged(*reinterpret_cast<Windows::Networking::Connectivity::NetworkStatusChangedEventHandler const*>(&networkStatusHandler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_NetworkStatusChanged(event_token eventCookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NetworkStatusChanged(*reinterpret_cast<event_token const*>(&eventCookie));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Connectivity::INetworkInformationStatics2> : produce_base<D, Windows::Networking::Connectivity::INetworkInformationStatics2>
{
    HRESULT __stdcall FindConnectionProfilesAsync(void* pProfileFilter, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::Connectivity::ConnectionProfile>>>(this->shim().FindConnectionProfilesAsync(*reinterpret_cast<Windows::Networking::Connectivity::ConnectionProfileFilter const*>(&pProfileFilter)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Connectivity::INetworkItem> : produce_base<D, Windows::Networking::Connectivity::INetworkItem>
{
    HRESULT __stdcall get_NetworkId(GUID* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<GUID>(this->shim().NetworkId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetNetworkTypes(Windows::Networking::Connectivity::NetworkTypes* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Connectivity::NetworkTypes>(this->shim().GetNetworkTypes());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Connectivity::INetworkSecuritySettings> : produce_base<D, Windows::Networking::Connectivity::INetworkSecuritySettings>
{
    HRESULT __stdcall get_NetworkAuthenticationType(Windows::Networking::Connectivity::NetworkAuthenticationType* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Connectivity::NetworkAuthenticationType>(this->shim().NetworkAuthenticationType());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_NetworkEncryptionType(Windows::Networking::Connectivity::NetworkEncryptionType* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Connectivity::NetworkEncryptionType>(this->shim().NetworkEncryptionType());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Connectivity::INetworkStateChangeEventDetails> : produce_base<D, Windows::Networking::Connectivity::INetworkStateChangeEventDetails>
{
    HRESULT __stdcall get_HasNewInternetConnectionProfile(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().HasNewInternetConnectionProfile());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_HasNewConnectionCost(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().HasNewConnectionCost());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_HasNewNetworkConnectivityLevel(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().HasNewNetworkConnectivityLevel());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_HasNewDomainConnectivityLevel(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().HasNewDomainConnectivityLevel());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_HasNewHostNameList(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().HasNewHostNameList());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_HasNewWwanRegistrationState(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().HasNewWwanRegistrationState());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Connectivity::INetworkStateChangeEventDetails2> : produce_base<D, Windows::Networking::Connectivity::INetworkStateChangeEventDetails2>
{
    HRESULT __stdcall get_HasNewTetheringOperationalState(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().HasNewTetheringOperationalState());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_HasNewTetheringClientCount(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().HasNewTetheringClientCount());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Connectivity::INetworkUsage> : produce_base<D, Windows::Networking::Connectivity::INetworkUsage>
{
    HRESULT __stdcall get_BytesSent(uint64_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint64_t>(this->shim().BytesSent());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_BytesReceived(uint64_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint64_t>(this->shim().BytesReceived());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ConnectionDuration(Windows::Foundation::TimeSpan* duration) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *duration = detach_from<Windows::Foundation::TimeSpan>(this->shim().ConnectionDuration());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Connectivity::IProviderNetworkUsage> : produce_base<D, Windows::Networking::Connectivity::IProviderNetworkUsage>
{
    HRESULT __stdcall get_BytesSent(uint64_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint64_t>(this->shim().BytesSent());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_BytesReceived(uint64_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint64_t>(this->shim().BytesReceived());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ProviderId(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ProviderId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Connectivity::IProxyConfiguration> : produce_base<D, Windows::Networking::Connectivity::IProxyConfiguration>
{
    HRESULT __stdcall get_ProxyUris(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Foundation::Uri>>(this->shim().ProxyUris());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CanConnectDirectly(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().CanConnectDirectly());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Connectivity::IRoutePolicy> : produce_base<D, Windows::Networking::Connectivity::IRoutePolicy>
{
    HRESULT __stdcall get_ConnectionProfile(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Connectivity::ConnectionProfile>(this->shim().ConnectionProfile());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_HostName(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::HostName>(this->shim().HostName());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_HostNameType(Windows::Networking::DomainNameType* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::DomainNameType>(this->shim().HostNameType());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Connectivity::IRoutePolicyFactory> : produce_base<D, Windows::Networking::Connectivity::IRoutePolicyFactory>
{
    HRESULT __stdcall CreateRoutePolicy(void* connectionProfile, void* hostName, Windows::Networking::DomainNameType type, void** routePolicy) noexcept final
    {
        try
        {
            *routePolicy = nullptr;
            typename D::abi_guard guard(this->shim());
            *routePolicy = detach_from<Windows::Networking::Connectivity::RoutePolicy>(this->shim().CreateRoutePolicy(*reinterpret_cast<Windows::Networking::Connectivity::ConnectionProfile const*>(&connectionProfile), *reinterpret_cast<Windows::Networking::HostName const*>(&hostName), *reinterpret_cast<Windows::Networking::DomainNameType const*>(&type)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Connectivity::IWlanConnectionProfileDetails> : produce_base<D, Windows::Networking::Connectivity::IWlanConnectionProfileDetails>
{
    HRESULT __stdcall GetConnectedSsid(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().GetConnectedSsid());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Connectivity::IWwanConnectionProfileDetails> : produce_base<D, Windows::Networking::Connectivity::IWwanConnectionProfileDetails>
{
    HRESULT __stdcall get_HomeProviderId(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().HomeProviderId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AccessPointName(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AccessPointName());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetNetworkRegistrationState(Windows::Networking::Connectivity::WwanNetworkRegistrationState* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Connectivity::WwanNetworkRegistrationState>(this->shim().GetNetworkRegistrationState());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetCurrentDataClass(Windows::Networking::Connectivity::WwanDataClass* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Connectivity::WwanDataClass>(this->shim().GetCurrentDataClass());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Networking::Connectivity::IWwanConnectionProfileDetails2> : produce_base<D, Windows::Networking::Connectivity::IWwanConnectionProfileDetails2>
{
    HRESULT __stdcall get_IPKind(Windows::Networking::Connectivity::WwanNetworkIPKind* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Networking::Connectivity::WwanNetworkIPKind>(this->shim().IPKind());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PurposeGuids(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<GUID>>(this->shim().PurposeGuids());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Networking::Connectivity {

inline CellularApnContext::CellularApnContext() :
    CellularApnContext(get_activation_factory<CellularApnContext>().ActivateInstance<CellularApnContext>())
{}

inline ConnectionProfileFilter::ConnectionProfileFilter() :
    ConnectionProfileFilter(get_activation_factory<ConnectionProfileFilter>().ActivateInstance<ConnectionProfileFilter>())
{}

inline Windows::Foundation::IAsyncOperation<Windows::Networking::Connectivity::ConnectionSession> ConnectivityManager::AcquireConnectionAsync(Windows::Networking::Connectivity::CellularApnContext const& cellularApnContext)
{
    return get_activation_factory<ConnectivityManager, Windows::Networking::Connectivity::IConnectivityManagerStatics>().AcquireConnectionAsync(cellularApnContext);
}

inline void ConnectivityManager::AddHttpRoutePolicy(Windows::Networking::Connectivity::RoutePolicy const& routePolicy)
{
    get_activation_factory<ConnectivityManager, Windows::Networking::Connectivity::IConnectivityManagerStatics>().AddHttpRoutePolicy(routePolicy);
}

inline void ConnectivityManager::RemoveHttpRoutePolicy(Windows::Networking::Connectivity::RoutePolicy const& routePolicy)
{
    get_activation_factory<ConnectivityManager, Windows::Networking::Connectivity::IConnectivityManagerStatics>().RemoveHttpRoutePolicy(routePolicy);
}

inline Windows::Foundation::Collections::IVectorView<Windows::Networking::Connectivity::ConnectionProfile> NetworkInformation::GetConnectionProfiles()
{
    return get_activation_factory<NetworkInformation, Windows::Networking::Connectivity::INetworkInformationStatics>().GetConnectionProfiles();
}

inline Windows::Networking::Connectivity::ConnectionProfile NetworkInformation::GetInternetConnectionProfile()
{
    return get_activation_factory<NetworkInformation, Windows::Networking::Connectivity::INetworkInformationStatics>().GetInternetConnectionProfile();
}

inline Windows::Foundation::Collections::IVectorView<Windows::Networking::Connectivity::LanIdentifier> NetworkInformation::GetLanIdentifiers()
{
    return get_activation_factory<NetworkInformation, Windows::Networking::Connectivity::INetworkInformationStatics>().GetLanIdentifiers();
}

inline Windows::Foundation::Collections::IVectorView<Windows::Networking::HostName> NetworkInformation::GetHostNames()
{
    return get_activation_factory<NetworkInformation, Windows::Networking::Connectivity::INetworkInformationStatics>().GetHostNames();
}

inline Windows::Foundation::IAsyncOperation<Windows::Networking::Connectivity::ProxyConfiguration> NetworkInformation::GetProxyConfigurationAsync(Windows::Foundation::Uri const& uri)
{
    return get_activation_factory<NetworkInformation, Windows::Networking::Connectivity::INetworkInformationStatics>().GetProxyConfigurationAsync(uri);
}

inline Windows::Foundation::Collections::IVectorView<Windows::Networking::EndpointPair> NetworkInformation::GetSortedEndpointPairs(param::iterable<Windows::Networking::EndpointPair> const& destinationList, Windows::Networking::HostNameSortOptions const& sortOptions)
{
    return get_activation_factory<NetworkInformation, Windows::Networking::Connectivity::INetworkInformationStatics>().GetSortedEndpointPairs(destinationList, sortOptions);
}

inline event_token NetworkInformation::NetworkStatusChanged(Windows::Networking::Connectivity::NetworkStatusChangedEventHandler const& networkStatusHandler)
{
    return get_activation_factory<NetworkInformation, Windows::Networking::Connectivity::INetworkInformationStatics>().NetworkStatusChanged(networkStatusHandler);
}

inline factory_event_revoker<Windows::Networking::Connectivity::INetworkInformationStatics> NetworkInformation::NetworkStatusChanged(auto_revoke_t, Windows::Networking::Connectivity::NetworkStatusChangedEventHandler const& networkStatusHandler)
{
    auto factory = get_activation_factory<NetworkInformation, Windows::Networking::Connectivity::INetworkInformationStatics>();
    return { factory, &impl::abi_t<Windows::Networking::Connectivity::INetworkInformationStatics>::remove_NetworkStatusChanged, factory.NetworkStatusChanged(networkStatusHandler) };
}

inline void NetworkInformation::NetworkStatusChanged(event_token const& eventCookie)
{
    get_activation_factory<NetworkInformation, Windows::Networking::Connectivity::INetworkInformationStatics>().NetworkStatusChanged(eventCookie);
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::Connectivity::ConnectionProfile>> NetworkInformation::FindConnectionProfilesAsync(Windows::Networking::Connectivity::ConnectionProfileFilter const& pProfileFilter)
{
    return get_activation_factory<NetworkInformation, Windows::Networking::Connectivity::INetworkInformationStatics2>().FindConnectionProfilesAsync(pProfileFilter);
}

inline RoutePolicy::RoutePolicy(Windows::Networking::Connectivity::ConnectionProfile const& connectionProfile, Windows::Networking::HostName const& hostName, Windows::Networking::DomainNameType const& type) :
    RoutePolicy(get_activation_factory<RoutePolicy, Windows::Networking::Connectivity::IRoutePolicyFactory>().CreateRoutePolicy(connectionProfile, hostName, type))
{}

template <typename L> NetworkStatusChangedEventHandler::NetworkStatusChangedEventHandler(L handler) :
    NetworkStatusChangedEventHandler(impl::make_delegate<NetworkStatusChangedEventHandler>(std::forward<L>(handler)))
{}

template <typename F> NetworkStatusChangedEventHandler::NetworkStatusChangedEventHandler(F* handler) :
    NetworkStatusChangedEventHandler([=](auto&&... args) { handler(args...); })
{}

template <typename O, typename M> NetworkStatusChangedEventHandler::NetworkStatusChangedEventHandler(O* object, M method) :
    NetworkStatusChangedEventHandler([=](auto&&... args) { ((*object).*(method))(args...); })
{}

inline void NetworkStatusChangedEventHandler::operator()(Windows::Foundation::IInspectable const& sender) const
{
    check_hresult((*(impl::abi_t<NetworkStatusChangedEventHandler>**)this)->Invoke(get_abi(sender)));
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Networking::Connectivity::IAttributedNetworkUsage> : winrt::impl::hash_base<winrt::Windows::Networking::Connectivity::IAttributedNetworkUsage> {};
template<> struct hash<winrt::Windows::Networking::Connectivity::ICellularApnContext> : winrt::impl::hash_base<winrt::Windows::Networking::Connectivity::ICellularApnContext> {};
template<> struct hash<winrt::Windows::Networking::Connectivity::ICellularApnContext2> : winrt::impl::hash_base<winrt::Windows::Networking::Connectivity::ICellularApnContext2> {};
template<> struct hash<winrt::Windows::Networking::Connectivity::IConnectionCost> : winrt::impl::hash_base<winrt::Windows::Networking::Connectivity::IConnectionCost> {};
template<> struct hash<winrt::Windows::Networking::Connectivity::IConnectionCost2> : winrt::impl::hash_base<winrt::Windows::Networking::Connectivity::IConnectionCost2> {};
template<> struct hash<winrt::Windows::Networking::Connectivity::IConnectionProfile> : winrt::impl::hash_base<winrt::Windows::Networking::Connectivity::IConnectionProfile> {};
template<> struct hash<winrt::Windows::Networking::Connectivity::IConnectionProfile2> : winrt::impl::hash_base<winrt::Windows::Networking::Connectivity::IConnectionProfile2> {};
template<> struct hash<winrt::Windows::Networking::Connectivity::IConnectionProfile3> : winrt::impl::hash_base<winrt::Windows::Networking::Connectivity::IConnectionProfile3> {};
template<> struct hash<winrt::Windows::Networking::Connectivity::IConnectionProfile4> : winrt::impl::hash_base<winrt::Windows::Networking::Connectivity::IConnectionProfile4> {};
template<> struct hash<winrt::Windows::Networking::Connectivity::IConnectionProfileFilter> : winrt::impl::hash_base<winrt::Windows::Networking::Connectivity::IConnectionProfileFilter> {};
template<> struct hash<winrt::Windows::Networking::Connectivity::IConnectionProfileFilter2> : winrt::impl::hash_base<winrt::Windows::Networking::Connectivity::IConnectionProfileFilter2> {};
template<> struct hash<winrt::Windows::Networking::Connectivity::IConnectionProfileFilter3> : winrt::impl::hash_base<winrt::Windows::Networking::Connectivity::IConnectionProfileFilter3> {};
template<> struct hash<winrt::Windows::Networking::Connectivity::IConnectionSession> : winrt::impl::hash_base<winrt::Windows::Networking::Connectivity::IConnectionSession> {};
template<> struct hash<winrt::Windows::Networking::Connectivity::IConnectivityInterval> : winrt::impl::hash_base<winrt::Windows::Networking::Connectivity::IConnectivityInterval> {};
template<> struct hash<winrt::Windows::Networking::Connectivity::IConnectivityManagerStatics> : winrt::impl::hash_base<winrt::Windows::Networking::Connectivity::IConnectivityManagerStatics> {};
template<> struct hash<winrt::Windows::Networking::Connectivity::IDataPlanStatus> : winrt::impl::hash_base<winrt::Windows::Networking::Connectivity::IDataPlanStatus> {};
template<> struct hash<winrt::Windows::Networking::Connectivity::IDataPlanUsage> : winrt::impl::hash_base<winrt::Windows::Networking::Connectivity::IDataPlanUsage> {};
template<> struct hash<winrt::Windows::Networking::Connectivity::IDataUsage> : winrt::impl::hash_base<winrt::Windows::Networking::Connectivity::IDataUsage> {};
template<> struct hash<winrt::Windows::Networking::Connectivity::IIPInformation> : winrt::impl::hash_base<winrt::Windows::Networking::Connectivity::IIPInformation> {};
template<> struct hash<winrt::Windows::Networking::Connectivity::ILanIdentifier> : winrt::impl::hash_base<winrt::Windows::Networking::Connectivity::ILanIdentifier> {};
template<> struct hash<winrt::Windows::Networking::Connectivity::ILanIdentifierData> : winrt::impl::hash_base<winrt::Windows::Networking::Connectivity::ILanIdentifierData> {};
template<> struct hash<winrt::Windows::Networking::Connectivity::INetworkAdapter> : winrt::impl::hash_base<winrt::Windows::Networking::Connectivity::INetworkAdapter> {};
template<> struct hash<winrt::Windows::Networking::Connectivity::INetworkInformationStatics> : winrt::impl::hash_base<winrt::Windows::Networking::Connectivity::INetworkInformationStatics> {};
template<> struct hash<winrt::Windows::Networking::Connectivity::INetworkInformationStatics2> : winrt::impl::hash_base<winrt::Windows::Networking::Connectivity::INetworkInformationStatics2> {};
template<> struct hash<winrt::Windows::Networking::Connectivity::INetworkItem> : winrt::impl::hash_base<winrt::Windows::Networking::Connectivity::INetworkItem> {};
template<> struct hash<winrt::Windows::Networking::Connectivity::INetworkSecuritySettings> : winrt::impl::hash_base<winrt::Windows::Networking::Connectivity::INetworkSecuritySettings> {};
template<> struct hash<winrt::Windows::Networking::Connectivity::INetworkStateChangeEventDetails> : winrt::impl::hash_base<winrt::Windows::Networking::Connectivity::INetworkStateChangeEventDetails> {};
template<> struct hash<winrt::Windows::Networking::Connectivity::INetworkStateChangeEventDetails2> : winrt::impl::hash_base<winrt::Windows::Networking::Connectivity::INetworkStateChangeEventDetails2> {};
template<> struct hash<winrt::Windows::Networking::Connectivity::INetworkUsage> : winrt::impl::hash_base<winrt::Windows::Networking::Connectivity::INetworkUsage> {};
template<> struct hash<winrt::Windows::Networking::Connectivity::IProviderNetworkUsage> : winrt::impl::hash_base<winrt::Windows::Networking::Connectivity::IProviderNetworkUsage> {};
template<> struct hash<winrt::Windows::Networking::Connectivity::IProxyConfiguration> : winrt::impl::hash_base<winrt::Windows::Networking::Connectivity::IProxyConfiguration> {};
template<> struct hash<winrt::Windows::Networking::Connectivity::IRoutePolicy> : winrt::impl::hash_base<winrt::Windows::Networking::Connectivity::IRoutePolicy> {};
template<> struct hash<winrt::Windows::Networking::Connectivity::IRoutePolicyFactory> : winrt::impl::hash_base<winrt::Windows::Networking::Connectivity::IRoutePolicyFactory> {};
template<> struct hash<winrt::Windows::Networking::Connectivity::IWlanConnectionProfileDetails> : winrt::impl::hash_base<winrt::Windows::Networking::Connectivity::IWlanConnectionProfileDetails> {};
template<> struct hash<winrt::Windows::Networking::Connectivity::IWwanConnectionProfileDetails> : winrt::impl::hash_base<winrt::Windows::Networking::Connectivity::IWwanConnectionProfileDetails> {};
template<> struct hash<winrt::Windows::Networking::Connectivity::IWwanConnectionProfileDetails2> : winrt::impl::hash_base<winrt::Windows::Networking::Connectivity::IWwanConnectionProfileDetails2> {};
template<> struct hash<winrt::Windows::Networking::Connectivity::AttributedNetworkUsage> : winrt::impl::hash_base<winrt::Windows::Networking::Connectivity::AttributedNetworkUsage> {};
template<> struct hash<winrt::Windows::Networking::Connectivity::CellularApnContext> : winrt::impl::hash_base<winrt::Windows::Networking::Connectivity::CellularApnContext> {};
template<> struct hash<winrt::Windows::Networking::Connectivity::ConnectionCost> : winrt::impl::hash_base<winrt::Windows::Networking::Connectivity::ConnectionCost> {};
template<> struct hash<winrt::Windows::Networking::Connectivity::ConnectionProfile> : winrt::impl::hash_base<winrt::Windows::Networking::Connectivity::ConnectionProfile> {};
template<> struct hash<winrt::Windows::Networking::Connectivity::ConnectionProfileFilter> : winrt::impl::hash_base<winrt::Windows::Networking::Connectivity::ConnectionProfileFilter> {};
template<> struct hash<winrt::Windows::Networking::Connectivity::ConnectionSession> : winrt::impl::hash_base<winrt::Windows::Networking::Connectivity::ConnectionSession> {};
template<> struct hash<winrt::Windows::Networking::Connectivity::ConnectivityInterval> : winrt::impl::hash_base<winrt::Windows::Networking::Connectivity::ConnectivityInterval> {};
template<> struct hash<winrt::Windows::Networking::Connectivity::ConnectivityManager> : winrt::impl::hash_base<winrt::Windows::Networking::Connectivity::ConnectivityManager> {};
template<> struct hash<winrt::Windows::Networking::Connectivity::DataPlanStatus> : winrt::impl::hash_base<winrt::Windows::Networking::Connectivity::DataPlanStatus> {};
template<> struct hash<winrt::Windows::Networking::Connectivity::DataPlanUsage> : winrt::impl::hash_base<winrt::Windows::Networking::Connectivity::DataPlanUsage> {};
template<> struct hash<winrt::Windows::Networking::Connectivity::DataUsage> : winrt::impl::hash_base<winrt::Windows::Networking::Connectivity::DataUsage> {};
template<> struct hash<winrt::Windows::Networking::Connectivity::IPInformation> : winrt::impl::hash_base<winrt::Windows::Networking::Connectivity::IPInformation> {};
template<> struct hash<winrt::Windows::Networking::Connectivity::LanIdentifier> : winrt::impl::hash_base<winrt::Windows::Networking::Connectivity::LanIdentifier> {};
template<> struct hash<winrt::Windows::Networking::Connectivity::LanIdentifierData> : winrt::impl::hash_base<winrt::Windows::Networking::Connectivity::LanIdentifierData> {};
template<> struct hash<winrt::Windows::Networking::Connectivity::NetworkAdapter> : winrt::impl::hash_base<winrt::Windows::Networking::Connectivity::NetworkAdapter> {};
template<> struct hash<winrt::Windows::Networking::Connectivity::NetworkInformation> : winrt::impl::hash_base<winrt::Windows::Networking::Connectivity::NetworkInformation> {};
template<> struct hash<winrt::Windows::Networking::Connectivity::NetworkItem> : winrt::impl::hash_base<winrt::Windows::Networking::Connectivity::NetworkItem> {};
template<> struct hash<winrt::Windows::Networking::Connectivity::NetworkSecuritySettings> : winrt::impl::hash_base<winrt::Windows::Networking::Connectivity::NetworkSecuritySettings> {};
template<> struct hash<winrt::Windows::Networking::Connectivity::NetworkStateChangeEventDetails> : winrt::impl::hash_base<winrt::Windows::Networking::Connectivity::NetworkStateChangeEventDetails> {};
template<> struct hash<winrt::Windows::Networking::Connectivity::NetworkUsage> : winrt::impl::hash_base<winrt::Windows::Networking::Connectivity::NetworkUsage> {};
template<> struct hash<winrt::Windows::Networking::Connectivity::ProviderNetworkUsage> : winrt::impl::hash_base<winrt::Windows::Networking::Connectivity::ProviderNetworkUsage> {};
template<> struct hash<winrt::Windows::Networking::Connectivity::ProxyConfiguration> : winrt::impl::hash_base<winrt::Windows::Networking::Connectivity::ProxyConfiguration> {};
template<> struct hash<winrt::Windows::Networking::Connectivity::RoutePolicy> : winrt::impl::hash_base<winrt::Windows::Networking::Connectivity::RoutePolicy> {};
template<> struct hash<winrt::Windows::Networking::Connectivity::WlanConnectionProfileDetails> : winrt::impl::hash_base<winrt::Windows::Networking::Connectivity::WlanConnectionProfileDetails> {};
template<> struct hash<winrt::Windows::Networking::Connectivity::WwanConnectionProfileDetails> : winrt::impl::hash_base<winrt::Windows::Networking::Connectivity::WwanConnectionProfileDetails> {};

}

WINRT_WARNING_POP
