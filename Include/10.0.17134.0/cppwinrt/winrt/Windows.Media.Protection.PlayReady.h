﻿// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Media.Core.2.h"
#include "winrt/impl/Windows.Media.Protection.2.h"
#include "winrt/impl/Windows.Storage.2.h"
#include "winrt/impl/Windows.Media.Protection.PlayReady.2.h"
#include "winrt/Windows.Media.Protection.h"

namespace winrt::impl {

template <typename D> event_token consume_Windows_Media_Protection_PlayReady_INDClient<D>::RegistrationCompleted(Windows::Foundation::TypedEventHandler<Windows::Media::Protection::PlayReady::NDClient, Windows::Media::Protection::PlayReady::INDRegistrationCompletedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::INDClient)->add_RegistrationCompleted(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Protection::PlayReady::INDClient> consume_Windows_Media_Protection_PlayReady_INDClient<D>::RegistrationCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Protection::PlayReady::NDClient, Windows::Media::Protection::PlayReady::INDRegistrationCompletedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Protection::PlayReady::INDClient>(this, &abi_t<Windows::Media::Protection::PlayReady::INDClient>::remove_RegistrationCompleted, RegistrationCompleted(handler));
}

template <typename D> void consume_Windows_Media_Protection_PlayReady_INDClient<D>::RegistrationCompleted(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::INDClient)->remove_RegistrationCompleted(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_Protection_PlayReady_INDClient<D>::ProximityDetectionCompleted(Windows::Foundation::TypedEventHandler<Windows::Media::Protection::PlayReady::NDClient, Windows::Media::Protection::PlayReady::INDProximityDetectionCompletedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::INDClient)->add_ProximityDetectionCompleted(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Protection::PlayReady::INDClient> consume_Windows_Media_Protection_PlayReady_INDClient<D>::ProximityDetectionCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Protection::PlayReady::NDClient, Windows::Media::Protection::PlayReady::INDProximityDetectionCompletedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Protection::PlayReady::INDClient>(this, &abi_t<Windows::Media::Protection::PlayReady::INDClient>::remove_ProximityDetectionCompleted, ProximityDetectionCompleted(handler));
}

template <typename D> void consume_Windows_Media_Protection_PlayReady_INDClient<D>::ProximityDetectionCompleted(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::INDClient)->remove_ProximityDetectionCompleted(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_Protection_PlayReady_INDClient<D>::LicenseFetchCompleted(Windows::Foundation::TypedEventHandler<Windows::Media::Protection::PlayReady::NDClient, Windows::Media::Protection::PlayReady::INDLicenseFetchCompletedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::INDClient)->add_LicenseFetchCompleted(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Protection::PlayReady::INDClient> consume_Windows_Media_Protection_PlayReady_INDClient<D>::LicenseFetchCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Protection::PlayReady::NDClient, Windows::Media::Protection::PlayReady::INDLicenseFetchCompletedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Protection::PlayReady::INDClient>(this, &abi_t<Windows::Media::Protection::PlayReady::INDClient>::remove_LicenseFetchCompleted, LicenseFetchCompleted(handler));
}

template <typename D> void consume_Windows_Media_Protection_PlayReady_INDClient<D>::LicenseFetchCompleted(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::INDClient)->remove_LicenseFetchCompleted(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_Protection_PlayReady_INDClient<D>::ReRegistrationNeeded(Windows::Foundation::TypedEventHandler<Windows::Media::Protection::PlayReady::NDClient, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::INDClient)->add_ReRegistrationNeeded(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Protection::PlayReady::INDClient> consume_Windows_Media_Protection_PlayReady_INDClient<D>::ReRegistrationNeeded(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Protection::PlayReady::NDClient, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Protection::PlayReady::INDClient>(this, &abi_t<Windows::Media::Protection::PlayReady::INDClient>::remove_ReRegistrationNeeded, ReRegistrationNeeded(handler));
}

template <typename D> void consume_Windows_Media_Protection_PlayReady_INDClient<D>::ReRegistrationNeeded(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::INDClient)->remove_ReRegistrationNeeded(get_abi(token)));
}

template <typename D> event_token consume_Windows_Media_Protection_PlayReady_INDClient<D>::ClosedCaptionDataReceived(Windows::Foundation::TypedEventHandler<Windows::Media::Protection::PlayReady::NDClient, Windows::Media::Protection::PlayReady::INDClosedCaptionDataReceivedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::INDClient)->add_ClosedCaptionDataReceived(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Protection::PlayReady::INDClient> consume_Windows_Media_Protection_PlayReady_INDClient<D>::ClosedCaptionDataReceived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Protection::PlayReady::NDClient, Windows::Media::Protection::PlayReady::INDClosedCaptionDataReceivedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Protection::PlayReady::INDClient>(this, &abi_t<Windows::Media::Protection::PlayReady::INDClient>::remove_ClosedCaptionDataReceived, ClosedCaptionDataReceived(handler));
}

template <typename D> void consume_Windows_Media_Protection_PlayReady_INDClient<D>::ClosedCaptionDataReceived(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::INDClient)->remove_ClosedCaptionDataReceived(get_abi(token)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Protection::PlayReady::INDStartResult> consume_Windows_Media_Protection_PlayReady_INDClient<D>::StartAsync(Windows::Foundation::Uri const& contentUrl, uint32_t startAsyncOptions, Windows::Media::Protection::PlayReady::INDCustomData const& registrationCustomData, Windows::Media::Protection::PlayReady::INDLicenseFetchDescriptor const& licenseFetchDescriptor) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Protection::PlayReady::INDStartResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::INDClient)->StartAsync(get_abi(contentUrl), startAsyncOptions, get_abi(registrationCustomData), get_abi(licenseFetchDescriptor), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Protection::PlayReady::INDLicenseFetchResult> consume_Windows_Media_Protection_PlayReady_INDClient<D>::LicenseFetchAsync(Windows::Media::Protection::PlayReady::INDLicenseFetchDescriptor const& licenseFetchDescriptor) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Protection::PlayReady::INDLicenseFetchResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::INDClient)->LicenseFetchAsync(get_abi(licenseFetchDescriptor), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_Protection_PlayReady_INDClient<D>::ReRegistrationAsync(Windows::Media::Protection::PlayReady::INDCustomData const& registrationCustomData) const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::INDClient)->ReRegistrationAsync(get_abi(registrationCustomData), put_abi(result)));
    return result;
}

template <typename D> void consume_Windows_Media_Protection_PlayReady_INDClient<D>::Close() const
{
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::INDClient)->Close());
}

template <typename D> Windows::Media::Protection::PlayReady::NDClient consume_Windows_Media_Protection_PlayReady_INDClientFactory<D>::CreateInstance(Windows::Media::Protection::PlayReady::INDDownloadEngine const& downloadEngine, Windows::Media::Protection::PlayReady::INDStreamParser const& streamParser, Windows::Media::Protection::PlayReady::INDMessenger const& pMessenger) const
{
    Windows::Media::Protection::PlayReady::NDClient instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::INDClientFactory)->CreateInstance(get_abi(downloadEngine), get_abi(streamParser), get_abi(pMessenger), put_abi(instance)));
    return instance;
}

template <typename D> Windows::Media::Protection::PlayReady::NDClosedCaptionFormat consume_Windows_Media_Protection_PlayReady_INDClosedCaptionDataReceivedEventArgs<D>::ClosedCaptionDataFormat() const
{
    Windows::Media::Protection::PlayReady::NDClosedCaptionFormat ccForamt{};
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::INDClosedCaptionDataReceivedEventArgs)->get_ClosedCaptionDataFormat(put_abi(ccForamt)));
    return ccForamt;
}

template <typename D> int64_t consume_Windows_Media_Protection_PlayReady_INDClosedCaptionDataReceivedEventArgs<D>::PresentationTimestamp() const
{
    int64_t presentationTimestamp{};
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::INDClosedCaptionDataReceivedEventArgs)->get_PresentationTimestamp(&presentationTimestamp));
    return presentationTimestamp;
}

template <typename D> com_array<uint8_t> consume_Windows_Media_Protection_PlayReady_INDClosedCaptionDataReceivedEventArgs<D>::ClosedCaptionData() const
{
    com_array<uint8_t> ccDataBytes;
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::INDClosedCaptionDataReceivedEventArgs)->get_ClosedCaptionData(impl::put_size_abi(ccDataBytes), put_abi(ccDataBytes)));
    return ccDataBytes;
}

template <typename D> com_array<uint8_t> consume_Windows_Media_Protection_PlayReady_INDCustomData<D>::CustomDataTypeID() const
{
    com_array<uint8_t> customDataTypeIDBytes;
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::INDCustomData)->get_CustomDataTypeID(impl::put_size_abi(customDataTypeIDBytes), put_abi(customDataTypeIDBytes)));
    return customDataTypeIDBytes;
}

template <typename D> com_array<uint8_t> consume_Windows_Media_Protection_PlayReady_INDCustomData<D>::CustomData() const
{
    com_array<uint8_t> customDataBytes;
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::INDCustomData)->get_CustomData(impl::put_size_abi(customDataBytes), put_abi(customDataBytes)));
    return customDataBytes;
}

template <typename D> Windows::Media::Protection::PlayReady::NDCustomData consume_Windows_Media_Protection_PlayReady_INDCustomDataFactory<D>::CreateInstance(array_view<uint8_t const> customDataTypeIDBytes, array_view<uint8_t const> customDataBytes) const
{
    Windows::Media::Protection::PlayReady::NDCustomData instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::INDCustomDataFactory)->CreateInstance(customDataTypeIDBytes.size(), get_abi(customDataTypeIDBytes), customDataBytes.size(), get_abi(customDataBytes), put_abi(instance)));
    return instance;
}

template <typename D> void consume_Windows_Media_Protection_PlayReady_INDDownloadEngine<D>::Open(Windows::Foundation::Uri const& uri, array_view<uint8_t const> sessionIDBytes) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::INDDownloadEngine)->Open(get_abi(uri), sessionIDBytes.size(), get_abi(sessionIDBytes)));
}

template <typename D> void consume_Windows_Media_Protection_PlayReady_INDDownloadEngine<D>::Pause() const
{
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::INDDownloadEngine)->Pause());
}

template <typename D> void consume_Windows_Media_Protection_PlayReady_INDDownloadEngine<D>::Resume() const
{
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::INDDownloadEngine)->Resume());
}

template <typename D> void consume_Windows_Media_Protection_PlayReady_INDDownloadEngine<D>::Close() const
{
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::INDDownloadEngine)->Close());
}

template <typename D> void consume_Windows_Media_Protection_PlayReady_INDDownloadEngine<D>::Seek(Windows::Foundation::TimeSpan const& startPosition) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::INDDownloadEngine)->Seek(get_abi(startPosition)));
}

template <typename D> bool consume_Windows_Media_Protection_PlayReady_INDDownloadEngine<D>::CanSeek() const
{
    bool canSeek{};
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::INDDownloadEngine)->get_CanSeek(&canSeek));
    return canSeek;
}

template <typename D> uint32_t consume_Windows_Media_Protection_PlayReady_INDDownloadEngine<D>::BufferFullMinThresholdInSamples() const
{
    uint32_t bufferFullMinThreshold{};
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::INDDownloadEngine)->get_BufferFullMinThresholdInSamples(&bufferFullMinThreshold));
    return bufferFullMinThreshold;
}

template <typename D> uint32_t consume_Windows_Media_Protection_PlayReady_INDDownloadEngine<D>::BufferFullMaxThresholdInSamples() const
{
    uint32_t bufferFullMaxThreshold{};
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::INDDownloadEngine)->get_BufferFullMaxThresholdInSamples(&bufferFullMaxThreshold));
    return bufferFullMaxThreshold;
}

template <typename D> Windows::Media::Protection::PlayReady::NDDownloadEngineNotifier consume_Windows_Media_Protection_PlayReady_INDDownloadEngine<D>::Notifier() const
{
    Windows::Media::Protection::PlayReady::NDDownloadEngineNotifier instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::INDDownloadEngine)->get_Notifier(put_abi(instance)));
    return instance;
}

template <typename D> void consume_Windows_Media_Protection_PlayReady_INDDownloadEngineNotifier<D>::OnStreamOpened() const
{
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::INDDownloadEngineNotifier)->OnStreamOpened());
}

template <typename D> void consume_Windows_Media_Protection_PlayReady_INDDownloadEngineNotifier<D>::OnPlayReadyObjectReceived(array_view<uint8_t const> dataBytes) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::INDDownloadEngineNotifier)->OnPlayReadyObjectReceived(dataBytes.size(), get_abi(dataBytes)));
}

template <typename D> void consume_Windows_Media_Protection_PlayReady_INDDownloadEngineNotifier<D>::OnContentIDReceived(Windows::Media::Protection::PlayReady::INDLicenseFetchDescriptor const& licenseFetchDescriptor) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::INDDownloadEngineNotifier)->OnContentIDReceived(get_abi(licenseFetchDescriptor)));
}

template <typename D> void consume_Windows_Media_Protection_PlayReady_INDDownloadEngineNotifier<D>::OnDataReceived(array_view<uint8_t const> dataBytes, uint32_t bytesReceived) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::INDDownloadEngineNotifier)->OnDataReceived(dataBytes.size(), get_abi(dataBytes), bytesReceived));
}

template <typename D> void consume_Windows_Media_Protection_PlayReady_INDDownloadEngineNotifier<D>::OnEndOfStream() const
{
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::INDDownloadEngineNotifier)->OnEndOfStream());
}

template <typename D> void consume_Windows_Media_Protection_PlayReady_INDDownloadEngineNotifier<D>::OnNetworkError() const
{
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::INDDownloadEngineNotifier)->OnNetworkError());
}

template <typename D> Windows::Media::Protection::PlayReady::INDCustomData consume_Windows_Media_Protection_PlayReady_INDLicenseFetchCompletedEventArgs<D>::ResponseCustomData() const
{
    Windows::Media::Protection::PlayReady::INDCustomData customData{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::INDLicenseFetchCompletedEventArgs)->get_ResponseCustomData(put_abi(customData)));
    return customData;
}

template <typename D> Windows::Media::Protection::PlayReady::NDContentIDType consume_Windows_Media_Protection_PlayReady_INDLicenseFetchDescriptor<D>::ContentIDType() const
{
    Windows::Media::Protection::PlayReady::NDContentIDType contentIDType{};
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::INDLicenseFetchDescriptor)->get_ContentIDType(put_abi(contentIDType)));
    return contentIDType;
}

template <typename D> com_array<uint8_t> consume_Windows_Media_Protection_PlayReady_INDLicenseFetchDescriptor<D>::ContentID() const
{
    com_array<uint8_t> contentIDBytes;
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::INDLicenseFetchDescriptor)->get_ContentID(impl::put_size_abi(contentIDBytes), put_abi(contentIDBytes)));
    return contentIDBytes;
}

template <typename D> Windows::Media::Protection::PlayReady::INDCustomData consume_Windows_Media_Protection_PlayReady_INDLicenseFetchDescriptor<D>::LicenseFetchChallengeCustomData() const
{
    Windows::Media::Protection::PlayReady::INDCustomData licenseFetchChallengeCustomData{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::INDLicenseFetchDescriptor)->get_LicenseFetchChallengeCustomData(put_abi(licenseFetchChallengeCustomData)));
    return licenseFetchChallengeCustomData;
}

template <typename D> void consume_Windows_Media_Protection_PlayReady_INDLicenseFetchDescriptor<D>::LicenseFetchChallengeCustomData(Windows::Media::Protection::PlayReady::INDCustomData const& licenseFetchChallengeCustomData) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::INDLicenseFetchDescriptor)->put_LicenseFetchChallengeCustomData(get_abi(licenseFetchChallengeCustomData)));
}

template <typename D> Windows::Media::Protection::PlayReady::NDLicenseFetchDescriptor consume_Windows_Media_Protection_PlayReady_INDLicenseFetchDescriptorFactory<D>::CreateInstance(Windows::Media::Protection::PlayReady::NDContentIDType const& contentIDType, array_view<uint8_t const> contentIDBytes, Windows::Media::Protection::PlayReady::INDCustomData const& licenseFetchChallengeCustomData) const
{
    Windows::Media::Protection::PlayReady::NDLicenseFetchDescriptor instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::INDLicenseFetchDescriptorFactory)->CreateInstance(get_abi(contentIDType), contentIDBytes.size(), get_abi(contentIDBytes), get_abi(licenseFetchChallengeCustomData), put_abi(instance)));
    return instance;
}

template <typename D> Windows::Media::Protection::PlayReady::INDCustomData consume_Windows_Media_Protection_PlayReady_INDLicenseFetchResult<D>::ResponseCustomData() const
{
    Windows::Media::Protection::PlayReady::INDCustomData customData{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::INDLicenseFetchResult)->get_ResponseCustomData(put_abi(customData)));
    return customData;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Protection::PlayReady::INDSendResult> consume_Windows_Media_Protection_PlayReady_INDMessenger<D>::SendRegistrationRequestAsync(array_view<uint8_t const> sessionIDBytes, array_view<uint8_t const> challengeDataBytes) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Protection::PlayReady::INDSendResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::INDMessenger)->SendRegistrationRequestAsync(sessionIDBytes.size(), get_abi(sessionIDBytes), challengeDataBytes.size(), get_abi(challengeDataBytes), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Protection::PlayReady::INDSendResult> consume_Windows_Media_Protection_PlayReady_INDMessenger<D>::SendProximityDetectionStartAsync(Windows::Media::Protection::PlayReady::NDProximityDetectionType const& pdType, array_view<uint8_t const> transmitterChannelBytes, array_view<uint8_t const> sessionIDBytes, array_view<uint8_t const> challengeDataBytes) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Protection::PlayReady::INDSendResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::INDMessenger)->SendProximityDetectionStartAsync(get_abi(pdType), transmitterChannelBytes.size(), get_abi(transmitterChannelBytes), sessionIDBytes.size(), get_abi(sessionIDBytes), challengeDataBytes.size(), get_abi(challengeDataBytes), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Protection::PlayReady::INDSendResult> consume_Windows_Media_Protection_PlayReady_INDMessenger<D>::SendProximityDetectionResponseAsync(Windows::Media::Protection::PlayReady::NDProximityDetectionType const& pdType, array_view<uint8_t const> transmitterChannelBytes, array_view<uint8_t const> sessionIDBytes, array_view<uint8_t const> responseDataBytes) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Protection::PlayReady::INDSendResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::INDMessenger)->SendProximityDetectionResponseAsync(get_abi(pdType), transmitterChannelBytes.size(), get_abi(transmitterChannelBytes), sessionIDBytes.size(), get_abi(sessionIDBytes), responseDataBytes.size(), get_abi(responseDataBytes), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Protection::PlayReady::INDSendResult> consume_Windows_Media_Protection_PlayReady_INDMessenger<D>::SendLicenseFetchRequestAsync(array_view<uint8_t const> sessionIDBytes, array_view<uint8_t const> challengeDataBytes) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Protection::PlayReady::INDSendResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::INDMessenger)->SendLicenseFetchRequestAsync(sessionIDBytes.size(), get_abi(sessionIDBytes), challengeDataBytes.size(), get_abi(challengeDataBytes), put_abi(result)));
    return result;
}

template <typename D> uint32_t consume_Windows_Media_Protection_PlayReady_INDProximityDetectionCompletedEventArgs<D>::ProximityDetectionRetryCount() const
{
    uint32_t retryCount{};
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::INDProximityDetectionCompletedEventArgs)->get_ProximityDetectionRetryCount(&retryCount));
    return retryCount;
}

template <typename D> Windows::Media::Protection::PlayReady::INDCustomData consume_Windows_Media_Protection_PlayReady_INDRegistrationCompletedEventArgs<D>::ResponseCustomData() const
{
    Windows::Media::Protection::PlayReady::INDCustomData customData{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::INDRegistrationCompletedEventArgs)->get_ResponseCustomData(put_abi(customData)));
    return customData;
}

template <typename D> Windows::Media::Protection::PlayReady::INDTransmitterProperties consume_Windows_Media_Protection_PlayReady_INDRegistrationCompletedEventArgs<D>::TransmitterProperties() const
{
    Windows::Media::Protection::PlayReady::INDTransmitterProperties transmitterProperties{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::INDRegistrationCompletedEventArgs)->get_TransmitterProperties(put_abi(transmitterProperties)));
    return transmitterProperties;
}

template <typename D> bool consume_Windows_Media_Protection_PlayReady_INDRegistrationCompletedEventArgs<D>::TransmitterCertificateAccepted() const
{
    bool acceptpt{};
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::INDRegistrationCompletedEventArgs)->get_TransmitterCertificateAccepted(&acceptpt));
    return acceptpt;
}

template <typename D> void consume_Windows_Media_Protection_PlayReady_INDRegistrationCompletedEventArgs<D>::TransmitterCertificateAccepted(bool accept) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::INDRegistrationCompletedEventArgs)->put_TransmitterCertificateAccepted(accept));
}

template <typename D> com_array<uint8_t> consume_Windows_Media_Protection_PlayReady_INDSendResult<D>::Response() const
{
    com_array<uint8_t> responseDataBytes;
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::INDSendResult)->get_Response(impl::put_size_abi(responseDataBytes), put_abi(responseDataBytes)));
    return responseDataBytes;
}

template <typename D> Windows::Media::Core::MediaStreamSource consume_Windows_Media_Protection_PlayReady_INDStartResult<D>::MediaStreamSource() const
{
    Windows::Media::Core::MediaStreamSource mediaStreamSource{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::INDStartResult)->get_MediaStreamSource(put_abi(mediaStreamSource)));
    return mediaStreamSource;
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> consume_Windows_Media_Protection_PlayReady_INDStorageFileHelper<D>::GetFileURLs(Windows::Storage::IStorageFile const& file) const
{
    Windows::Foundation::Collections::IVector<hstring> fileURLs{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::INDStorageFileHelper)->GetFileURLs(get_abi(file), put_abi(fileURLs)));
    return fileURLs;
}

template <typename D> void consume_Windows_Media_Protection_PlayReady_INDStreamParser<D>::ParseData(array_view<uint8_t const> dataBytes) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::INDStreamParser)->ParseData(dataBytes.size(), get_abi(dataBytes)));
}

template <typename D> uint32_t consume_Windows_Media_Protection_PlayReady_INDStreamParser<D>::GetStreamInformation(Windows::Media::Core::IMediaStreamDescriptor const& descriptor, Windows::Media::Protection::PlayReady::NDMediaStreamType& streamType) const
{
    uint32_t streamID{};
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::INDStreamParser)->GetStreamInformation(get_abi(descriptor), put_abi(streamType), &streamID));
    return streamID;
}

template <typename D> void consume_Windows_Media_Protection_PlayReady_INDStreamParser<D>::BeginOfStream() const
{
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::INDStreamParser)->BeginOfStream());
}

template <typename D> void consume_Windows_Media_Protection_PlayReady_INDStreamParser<D>::EndOfStream() const
{
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::INDStreamParser)->EndOfStream());
}

template <typename D> Windows::Media::Protection::PlayReady::NDStreamParserNotifier consume_Windows_Media_Protection_PlayReady_INDStreamParser<D>::Notifier() const
{
    Windows::Media::Protection::PlayReady::NDStreamParserNotifier instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::INDStreamParser)->get_Notifier(put_abi(instance)));
    return instance;
}

template <typename D> void consume_Windows_Media_Protection_PlayReady_INDStreamParserNotifier<D>::OnContentIDReceived(Windows::Media::Protection::PlayReady::INDLicenseFetchDescriptor const& licenseFetchDescriptor) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::INDStreamParserNotifier)->OnContentIDReceived(get_abi(licenseFetchDescriptor)));
}

template <typename D> void consume_Windows_Media_Protection_PlayReady_INDStreamParserNotifier<D>::OnMediaStreamDescriptorCreated(param::vector<Windows::Media::Core::AudioStreamDescriptor> const& audioStreamDescriptors, param::vector<Windows::Media::Core::VideoStreamDescriptor> const& videoStreamDescriptors) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::INDStreamParserNotifier)->OnMediaStreamDescriptorCreated(get_abi(audioStreamDescriptors), get_abi(videoStreamDescriptors)));
}

template <typename D> void consume_Windows_Media_Protection_PlayReady_INDStreamParserNotifier<D>::OnSampleParsed(uint32_t streamID, Windows::Media::Protection::PlayReady::NDMediaStreamType const& streamType, Windows::Media::Core::MediaStreamSample const& streamSample, int64_t pts, Windows::Media::Protection::PlayReady::NDClosedCaptionFormat const& ccFormat, array_view<uint8_t const> ccDataBytes) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::INDStreamParserNotifier)->OnSampleParsed(streamID, get_abi(streamType), get_abi(streamSample), pts, get_abi(ccFormat), ccDataBytes.size(), get_abi(ccDataBytes)));
}

template <typename D> void consume_Windows_Media_Protection_PlayReady_INDStreamParserNotifier<D>::OnBeginSetupDecryptor(Windows::Media::Core::IMediaStreamDescriptor const& descriptor, GUID const& keyID, array_view<uint8_t const> proBytes) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::INDStreamParserNotifier)->OnBeginSetupDecryptor(get_abi(descriptor), get_abi(keyID), proBytes.size(), get_abi(proBytes)));
}

template <typename D> Windows::Media::Protection::PlayReady::NDTCPMessenger consume_Windows_Media_Protection_PlayReady_INDTCPMessengerFactory<D>::CreateInstance(param::hstring const& remoteHostName, uint32_t remoteHostPort) const
{
    Windows::Media::Protection::PlayReady::NDTCPMessenger instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::INDTCPMessengerFactory)->CreateInstance(get_abi(remoteHostName), remoteHostPort, put_abi(instance)));
    return instance;
}

template <typename D> Windows::Media::Protection::PlayReady::NDCertificateType consume_Windows_Media_Protection_PlayReady_INDTransmitterProperties<D>::CertificateType() const
{
    Windows::Media::Protection::PlayReady::NDCertificateType type{};
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::INDTransmitterProperties)->get_CertificateType(put_abi(type)));
    return type;
}

template <typename D> Windows::Media::Protection::PlayReady::NDCertificatePlatformID consume_Windows_Media_Protection_PlayReady_INDTransmitterProperties<D>::PlatformIdentifier() const
{
    Windows::Media::Protection::PlayReady::NDCertificatePlatformID identifier{};
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::INDTransmitterProperties)->get_PlatformIdentifier(put_abi(identifier)));
    return identifier;
}

template <typename D> com_array<Windows::Media::Protection::PlayReady::NDCertificateFeature> consume_Windows_Media_Protection_PlayReady_INDTransmitterProperties<D>::SupportedFeatures() const
{
    com_array<Windows::Media::Protection::PlayReady::NDCertificateFeature> featureSets;
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::INDTransmitterProperties)->get_SupportedFeatures(impl::put_size_abi(featureSets), put_abi(featureSets)));
    return featureSets;
}

template <typename D> uint32_t consume_Windows_Media_Protection_PlayReady_INDTransmitterProperties<D>::SecurityLevel() const
{
    uint32_t level{};
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::INDTransmitterProperties)->get_SecurityLevel(&level));
    return level;
}

template <typename D> uint32_t consume_Windows_Media_Protection_PlayReady_INDTransmitterProperties<D>::SecurityVersion() const
{
    uint32_t securityVersion{};
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::INDTransmitterProperties)->get_SecurityVersion(&securityVersion));
    return securityVersion;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_Media_Protection_PlayReady_INDTransmitterProperties<D>::ExpirationDate() const
{
    Windows::Foundation::DateTime expirationDate{};
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::INDTransmitterProperties)->get_ExpirationDate(put_abi(expirationDate)));
    return expirationDate;
}

template <typename D> com_array<uint8_t> consume_Windows_Media_Protection_PlayReady_INDTransmitterProperties<D>::ClientID() const
{
    com_array<uint8_t> clientIDBytes;
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::INDTransmitterProperties)->get_ClientID(impl::put_size_abi(clientIDBytes), put_abi(clientIDBytes)));
    return clientIDBytes;
}

template <typename D> com_array<uint8_t> consume_Windows_Media_Protection_PlayReady_INDTransmitterProperties<D>::ModelDigest() const
{
    com_array<uint8_t> modelDigestBytes;
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::INDTransmitterProperties)->get_ModelDigest(impl::put_size_abi(modelDigestBytes), put_abi(modelDigestBytes)));
    return modelDigestBytes;
}

template <typename D> hstring consume_Windows_Media_Protection_PlayReady_INDTransmitterProperties<D>::ModelManufacturerName() const
{
    hstring modelManufacturerName{};
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::INDTransmitterProperties)->get_ModelManufacturerName(put_abi(modelManufacturerName)));
    return modelManufacturerName;
}

template <typename D> hstring consume_Windows_Media_Protection_PlayReady_INDTransmitterProperties<D>::ModelName() const
{
    hstring modelName{};
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::INDTransmitterProperties)->get_ModelName(put_abi(modelName)));
    return modelName;
}

template <typename D> hstring consume_Windows_Media_Protection_PlayReady_INDTransmitterProperties<D>::ModelNumber() const
{
    hstring modelNumber{};
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::INDTransmitterProperties)->get_ModelNumber(put_abi(modelNumber)));
    return modelNumber;
}

template <typename D> GUID consume_Windows_Media_Protection_PlayReady_IPlayReadyContentHeader<D>::KeyId() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::IPlayReadyContentHeader)->get_KeyId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Protection_PlayReady_IPlayReadyContentHeader<D>::KeyIdString() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::IPlayReadyContentHeader)->get_KeyIdString(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri consume_Windows_Media_Protection_PlayReady_IPlayReadyContentHeader<D>::LicenseAcquisitionUrl() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::IPlayReadyContentHeader)->get_LicenseAcquisitionUrl(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri consume_Windows_Media_Protection_PlayReady_IPlayReadyContentHeader<D>::LicenseAcquisitionUserInterfaceUrl() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::IPlayReadyContentHeader)->get_LicenseAcquisitionUserInterfaceUrl(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Media_Protection_PlayReady_IPlayReadyContentHeader<D>::DomainServiceId() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::IPlayReadyContentHeader)->get_DomainServiceId(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Protection::PlayReady::PlayReadyEncryptionAlgorithm consume_Windows_Media_Protection_PlayReady_IPlayReadyContentHeader<D>::EncryptionType() const
{
    Windows::Media::Protection::PlayReady::PlayReadyEncryptionAlgorithm value{};
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::IPlayReadyContentHeader)->get_EncryptionType(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Protection_PlayReady_IPlayReadyContentHeader<D>::CustomAttributes() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::IPlayReadyContentHeader)->get_CustomAttributes(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Protection::PlayReady::PlayReadyDecryptorSetup consume_Windows_Media_Protection_PlayReady_IPlayReadyContentHeader<D>::DecryptorSetup() const
{
    Windows::Media::Protection::PlayReady::PlayReadyDecryptorSetup value{};
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::IPlayReadyContentHeader)->get_DecryptorSetup(put_abi(value)));
    return value;
}

template <typename D> com_array<uint8_t> consume_Windows_Media_Protection_PlayReady_IPlayReadyContentHeader<D>::GetSerializedHeader() const
{
    com_array<uint8_t> headerBytes;
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::IPlayReadyContentHeader)->GetSerializedHeader(impl::put_size_abi(headerBytes), put_abi(headerBytes)));
    return headerBytes;
}

template <typename D> Windows::Media::Protection::PlayReady::PlayReadyContentHeader consume_Windows_Media_Protection_PlayReady_IPlayReadyContentHeader<D>::HeaderWithEmbeddedUpdates() const
{
    Windows::Media::Protection::PlayReady::PlayReadyContentHeader value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::IPlayReadyContentHeader)->get_HeaderWithEmbeddedUpdates(put_abi(value)));
    return value;
}

template <typename D> com_array<GUID> consume_Windows_Media_Protection_PlayReady_IPlayReadyContentHeader2<D>::KeyIds() const
{
    com_array<GUID> contentKeyIds;
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::IPlayReadyContentHeader2)->get_KeyIds(impl::put_size_abi(contentKeyIds), put_abi(contentKeyIds)));
    return contentKeyIds;
}

template <typename D> com_array<hstring> consume_Windows_Media_Protection_PlayReady_IPlayReadyContentHeader2<D>::KeyIdStrings() const
{
    com_array<hstring> contentKeyIdStrings;
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::IPlayReadyContentHeader2)->get_KeyIdStrings(impl::put_size_abi(contentKeyIdStrings), put_abi(contentKeyIdStrings)));
    return contentKeyIdStrings;
}

template <typename D> Windows::Media::Protection::PlayReady::PlayReadyContentHeader consume_Windows_Media_Protection_PlayReady_IPlayReadyContentHeaderFactory<D>::CreateInstanceFromWindowsMediaDrmHeader(array_view<uint8_t const> headerBytes, Windows::Foundation::Uri const& licenseAcquisitionUrl, Windows::Foundation::Uri const& licenseAcquisitionUserInterfaceUrl, param::hstring const& customAttributes, GUID const& domainServiceId) const
{
    Windows::Media::Protection::PlayReady::PlayReadyContentHeader instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::IPlayReadyContentHeaderFactory)->CreateInstanceFromWindowsMediaDrmHeader(headerBytes.size(), get_abi(headerBytes), get_abi(licenseAcquisitionUrl), get_abi(licenseAcquisitionUserInterfaceUrl), get_abi(customAttributes), get_abi(domainServiceId), put_abi(instance)));
    return instance;
}

template <typename D> Windows::Media::Protection::PlayReady::PlayReadyContentHeader consume_Windows_Media_Protection_PlayReady_IPlayReadyContentHeaderFactory<D>::CreateInstanceFromComponents(GUID const& contentKeyId, param::hstring const& contentKeyIdString, Windows::Media::Protection::PlayReady::PlayReadyEncryptionAlgorithm const& contentEncryptionAlgorithm, Windows::Foundation::Uri const& licenseAcquisitionUrl, Windows::Foundation::Uri const& licenseAcquisitionUserInterfaceUrl, param::hstring const& customAttributes, GUID const& domainServiceId) const
{
    Windows::Media::Protection::PlayReady::PlayReadyContentHeader instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::IPlayReadyContentHeaderFactory)->CreateInstanceFromComponents(get_abi(contentKeyId), get_abi(contentKeyIdString), get_abi(contentEncryptionAlgorithm), get_abi(licenseAcquisitionUrl), get_abi(licenseAcquisitionUserInterfaceUrl), get_abi(customAttributes), get_abi(domainServiceId), put_abi(instance)));
    return instance;
}

template <typename D> Windows::Media::Protection::PlayReady::PlayReadyContentHeader consume_Windows_Media_Protection_PlayReady_IPlayReadyContentHeaderFactory<D>::CreateInstanceFromPlayReadyHeader(array_view<uint8_t const> headerBytes) const
{
    Windows::Media::Protection::PlayReady::PlayReadyContentHeader instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::IPlayReadyContentHeaderFactory)->CreateInstanceFromPlayReadyHeader(headerBytes.size(), get_abi(headerBytes), put_abi(instance)));
    return instance;
}

template <typename D> Windows::Media::Protection::PlayReady::PlayReadyContentHeader consume_Windows_Media_Protection_PlayReady_IPlayReadyContentHeaderFactory2<D>::CreateInstanceFromComponents2(uint32_t dwFlags, array_view<GUID const> contentKeyIds, array_view<hstring const> contentKeyIdStrings, Windows::Media::Protection::PlayReady::PlayReadyEncryptionAlgorithm const& contentEncryptionAlgorithm, Windows::Foundation::Uri const& licenseAcquisitionUrl, Windows::Foundation::Uri const& licenseAcquisitionUserInterfaceUrl, param::hstring const& customAttributes, GUID const& domainServiceId) const
{
    Windows::Media::Protection::PlayReady::PlayReadyContentHeader instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::IPlayReadyContentHeaderFactory2)->CreateInstanceFromComponents2(dwFlags, contentKeyIds.size(), get_abi(contentKeyIds), contentKeyIdStrings.size(), get_abi(contentKeyIdStrings), get_abi(contentEncryptionAlgorithm), get_abi(licenseAcquisitionUrl), get_abi(licenseAcquisitionUserInterfaceUrl), get_abi(customAttributes), get_abi(domainServiceId), put_abi(instance)));
    return instance;
}

template <typename D> Windows::Media::Protection::PlayReady::IPlayReadyServiceRequest consume_Windows_Media_Protection_PlayReady_IPlayReadyContentResolver<D>::ServiceRequest(Windows::Media::Protection::PlayReady::PlayReadyContentHeader const& contentHeader) const
{
    Windows::Media::Protection::PlayReady::IPlayReadyServiceRequest serviceRequest{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::IPlayReadyContentResolver)->ServiceRequest(get_abi(contentHeader), put_abi(serviceRequest)));
    return serviceRequest;
}

template <typename D> GUID consume_Windows_Media_Protection_PlayReady_IPlayReadyDomain<D>::AccountId() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::IPlayReadyDomain)->get_AccountId(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Media_Protection_PlayReady_IPlayReadyDomain<D>::ServiceId() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::IPlayReadyDomain)->get_ServiceId(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Media_Protection_PlayReady_IPlayReadyDomain<D>::Revision() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::IPlayReadyDomain)->get_Revision(&value));
    return value;
}

template <typename D> hstring consume_Windows_Media_Protection_PlayReady_IPlayReadyDomain<D>::FriendlyName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::IPlayReadyDomain)->get_FriendlyName(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri consume_Windows_Media_Protection_PlayReady_IPlayReadyDomain<D>::DomainJoinUrl() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::IPlayReadyDomain)->get_DomainJoinUrl(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Protection::PlayReady::PlayReadyDomainIterable consume_Windows_Media_Protection_PlayReady_IPlayReadyDomainIterableFactory<D>::CreateInstance(GUID const& domainAccountId) const
{
    Windows::Media::Protection::PlayReady::PlayReadyDomainIterable domainIterable{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::IPlayReadyDomainIterableFactory)->CreateInstance(get_abi(domainAccountId), put_abi(domainIterable)));
    return domainIterable;
}

template <typename D> GUID consume_Windows_Media_Protection_PlayReady_IPlayReadyDomainJoinServiceRequest<D>::DomainAccountId() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::IPlayReadyDomainJoinServiceRequest)->get_DomainAccountId(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Protection_PlayReady_IPlayReadyDomainJoinServiceRequest<D>::DomainAccountId(GUID const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::IPlayReadyDomainJoinServiceRequest)->put_DomainAccountId(get_abi(value)));
}

template <typename D> hstring consume_Windows_Media_Protection_PlayReady_IPlayReadyDomainJoinServiceRequest<D>::DomainFriendlyName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::IPlayReadyDomainJoinServiceRequest)->get_DomainFriendlyName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Protection_PlayReady_IPlayReadyDomainJoinServiceRequest<D>::DomainFriendlyName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::IPlayReadyDomainJoinServiceRequest)->put_DomainFriendlyName(get_abi(value)));
}

template <typename D> GUID consume_Windows_Media_Protection_PlayReady_IPlayReadyDomainJoinServiceRequest<D>::DomainServiceId() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::IPlayReadyDomainJoinServiceRequest)->get_DomainServiceId(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Protection_PlayReady_IPlayReadyDomainJoinServiceRequest<D>::DomainServiceId(GUID const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::IPlayReadyDomainJoinServiceRequest)->put_DomainServiceId(get_abi(value)));
}

template <typename D> GUID consume_Windows_Media_Protection_PlayReady_IPlayReadyDomainLeaveServiceRequest<D>::DomainAccountId() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::IPlayReadyDomainLeaveServiceRequest)->get_DomainAccountId(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Protection_PlayReady_IPlayReadyDomainLeaveServiceRequest<D>::DomainAccountId(GUID const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::IPlayReadyDomainLeaveServiceRequest)->put_DomainAccountId(get_abi(value)));
}

template <typename D> GUID consume_Windows_Media_Protection_PlayReady_IPlayReadyDomainLeaveServiceRequest<D>::DomainServiceId() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::IPlayReadyDomainLeaveServiceRequest)->get_DomainServiceId(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Protection_PlayReady_IPlayReadyDomainLeaveServiceRequest<D>::DomainServiceId(GUID const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::IPlayReadyDomainLeaveServiceRequest)->put_DomainServiceId(get_abi(value)));
}

template <typename D> com_array<uint8_t> consume_Windows_Media_Protection_PlayReady_IPlayReadyITADataGenerator<D>::GenerateData(GUID const& guidCPSystemId, uint32_t countOfStreams, Windows::Foundation::Collections::IPropertySet const& configuration, Windows::Media::Protection::PlayReady::PlayReadyITADataFormat const& format) const
{
    com_array<uint8_t> dataBytes;
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::IPlayReadyITADataGenerator)->GenerateData(get_abi(guidCPSystemId), countOfStreams, get_abi(configuration), get_abi(format), impl::put_size_abi(dataBytes), put_abi(dataBytes)));
    return dataBytes;
}

template <typename D> bool consume_Windows_Media_Protection_PlayReady_IPlayReadyLicense<D>::FullyEvaluated() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::IPlayReadyLicense)->get_FullyEvaluated(&value));
    return value;
}

template <typename D> bool consume_Windows_Media_Protection_PlayReady_IPlayReadyLicense<D>::UsableForPlay() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::IPlayReadyLicense)->get_UsableForPlay(&value));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> consume_Windows_Media_Protection_PlayReady_IPlayReadyLicense<D>::ExpirationDate() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::IPlayReadyLicense)->get_ExpirationDate(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Media_Protection_PlayReady_IPlayReadyLicense<D>::ExpireAfterFirstPlay() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::IPlayReadyLicense)->get_ExpireAfterFirstPlay(&value));
    return value;
}

template <typename D> GUID consume_Windows_Media_Protection_PlayReady_IPlayReadyLicense<D>::DomainAccountID() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::IPlayReadyLicense)->get_DomainAccountID(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Media_Protection_PlayReady_IPlayReadyLicense<D>::ChainDepth() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::IPlayReadyLicense)->get_ChainDepth(&value));
    return value;
}

template <typename D> GUID consume_Windows_Media_Protection_PlayReady_IPlayReadyLicense<D>::GetKIDAtChainDepth(uint32_t chainDepth) const
{
    GUID kid{};
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::IPlayReadyLicense)->GetKIDAtChainDepth(chainDepth, put_abi(kid)));
    return kid;
}

template <typename D> GUID consume_Windows_Media_Protection_PlayReady_IPlayReadyLicense2<D>::SecureStopId() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::IPlayReadyLicense2)->get_SecureStopId(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Media_Protection_PlayReady_IPlayReadyLicense2<D>::SecurityLevel() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::IPlayReadyLicense2)->get_SecurityLevel(&value));
    return value;
}

template <typename D> bool consume_Windows_Media_Protection_PlayReady_IPlayReadyLicense2<D>::InMemoryOnly() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::IPlayReadyLicense2)->get_InMemoryOnly(&value));
    return value;
}

template <typename D> bool consume_Windows_Media_Protection_PlayReady_IPlayReadyLicense2<D>::ExpiresInRealTime() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::IPlayReadyLicense2)->get_ExpiresInRealTime(&value));
    return value;
}

template <typename D> Windows::Media::Protection::PlayReady::PlayReadyContentHeader consume_Windows_Media_Protection_PlayReady_IPlayReadyLicenseAcquisitionServiceRequest<D>::ContentHeader() const
{
    Windows::Media::Protection::PlayReady::PlayReadyContentHeader value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::IPlayReadyLicenseAcquisitionServiceRequest)->get_ContentHeader(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Protection_PlayReady_IPlayReadyLicenseAcquisitionServiceRequest<D>::ContentHeader(Windows::Media::Protection::PlayReady::PlayReadyContentHeader const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::IPlayReadyLicenseAcquisitionServiceRequest)->put_ContentHeader(get_abi(value)));
}

template <typename D> GUID consume_Windows_Media_Protection_PlayReady_IPlayReadyLicenseAcquisitionServiceRequest<D>::DomainServiceId() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::IPlayReadyLicenseAcquisitionServiceRequest)->get_DomainServiceId(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Protection_PlayReady_IPlayReadyLicenseAcquisitionServiceRequest<D>::DomainServiceId(GUID const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::IPlayReadyLicenseAcquisitionServiceRequest)->put_DomainServiceId(get_abi(value)));
}

template <typename D> GUID consume_Windows_Media_Protection_PlayReady_IPlayReadyLicenseAcquisitionServiceRequest2<D>::SessionId() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::IPlayReadyLicenseAcquisitionServiceRequest2)->get_SessionId(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Protection::PlayReady::PlayReadyLicenseIterable consume_Windows_Media_Protection_PlayReady_IPlayReadyLicenseAcquisitionServiceRequest3<D>::CreateLicenseIterable(Windows::Media::Protection::PlayReady::PlayReadyContentHeader const& contentHeader, bool fullyEvaluated) const
{
    Windows::Media::Protection::PlayReady::PlayReadyLicenseIterable result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::IPlayReadyLicenseAcquisitionServiceRequest3)->CreateLicenseIterable(get_abi(contentHeader), fullyEvaluated, put_abi(result)));
    return result;
}

template <typename D> Windows::Media::Protection::PlayReady::PlayReadyLicenseIterable consume_Windows_Media_Protection_PlayReady_IPlayReadyLicenseIterableFactory<D>::CreateInstance(Windows::Media::Protection::PlayReady::PlayReadyContentHeader const& contentHeader, bool fullyEvaluated) const
{
    Windows::Media::Protection::PlayReady::PlayReadyLicenseIterable instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::IPlayReadyLicenseIterableFactory)->CreateInstance(get_abi(contentHeader), fullyEvaluated, put_abi(instance)));
    return instance;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_Protection_PlayReady_IPlayReadyLicenseManagement<D>::DeleteLicenses(Windows::Media::Protection::PlayReady::PlayReadyContentHeader const& contentHeader) const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::IPlayReadyLicenseManagement)->DeleteLicenses(get_abi(contentHeader), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Media::Protection::PlayReady::IPlayReadyLicenseAcquisitionServiceRequest consume_Windows_Media_Protection_PlayReady_IPlayReadyLicenseSession<D>::CreateLAServiceRequest() const
{
    Windows::Media::Protection::PlayReady::IPlayReadyLicenseAcquisitionServiceRequest serviceRequest{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::IPlayReadyLicenseSession)->CreateLAServiceRequest(put_abi(serviceRequest)));
    return serviceRequest;
}

template <typename D> void consume_Windows_Media_Protection_PlayReady_IPlayReadyLicenseSession<D>::ConfigureMediaProtectionManager(Windows::Media::Protection::MediaProtectionManager const& mpm) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::IPlayReadyLicenseSession)->ConfigureMediaProtectionManager(get_abi(mpm)));
}

template <typename D> Windows::Media::Protection::PlayReady::PlayReadyLicenseIterable consume_Windows_Media_Protection_PlayReady_IPlayReadyLicenseSession2<D>::CreateLicenseIterable(Windows::Media::Protection::PlayReady::PlayReadyContentHeader const& contentHeader, bool fullyEvaluated) const
{
    Windows::Media::Protection::PlayReady::PlayReadyLicenseIterable licenseIterable{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::IPlayReadyLicenseSession2)->CreateLicenseIterable(get_abi(contentHeader), fullyEvaluated, put_abi(licenseIterable)));
    return licenseIterable;
}

template <typename D> Windows::Media::Protection::PlayReady::PlayReadyLicenseSession consume_Windows_Media_Protection_PlayReady_IPlayReadyLicenseSessionFactory<D>::CreateInstance(Windows::Foundation::Collections::IPropertySet const& configuration) const
{
    Windows::Media::Protection::PlayReady::PlayReadyLicenseSession instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::IPlayReadyLicenseSessionFactory)->CreateInstance(get_abi(configuration), put_abi(instance)));
    return instance;
}

template <typename D> com_array<uint8_t> consume_Windows_Media_Protection_PlayReady_IPlayReadyMeteringReportServiceRequest<D>::MeteringCertificate() const
{
    com_array<uint8_t> meteringCertBytes;
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::IPlayReadyMeteringReportServiceRequest)->get_MeteringCertificate(impl::put_size_abi(meteringCertBytes), put_abi(meteringCertBytes)));
    return meteringCertBytes;
}

template <typename D> void consume_Windows_Media_Protection_PlayReady_IPlayReadyMeteringReportServiceRequest<D>::MeteringCertificate(array_view<uint8_t const> meteringCertBytes) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::IPlayReadyMeteringReportServiceRequest)->put_MeteringCertificate(meteringCertBytes.size(), get_abi(meteringCertBytes)));
}

template <typename D> Windows::Media::Protection::PlayReady::PlayReadySecureStopIterable consume_Windows_Media_Protection_PlayReady_IPlayReadySecureStopIterableFactory<D>::CreateInstance(array_view<uint8_t const> publisherCertBytes) const
{
    Windows::Media::Protection::PlayReady::PlayReadySecureStopIterable instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::IPlayReadySecureStopIterableFactory)->CreateInstance(publisherCertBytes.size(), get_abi(publisherCertBytes), put_abi(instance)));
    return instance;
}

template <typename D> GUID consume_Windows_Media_Protection_PlayReady_IPlayReadySecureStopServiceRequest<D>::SessionID() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::IPlayReadySecureStopServiceRequest)->get_SessionID(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_Media_Protection_PlayReady_IPlayReadySecureStopServiceRequest<D>::StartTime() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::IPlayReadySecureStopServiceRequest)->get_StartTime(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_Media_Protection_PlayReady_IPlayReadySecureStopServiceRequest<D>::UpdateTime() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::IPlayReadySecureStopServiceRequest)->get_UpdateTime(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Media_Protection_PlayReady_IPlayReadySecureStopServiceRequest<D>::Stopped() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::IPlayReadySecureStopServiceRequest)->get_Stopped(&value));
    return value;
}

template <typename D> com_array<uint8_t> consume_Windows_Media_Protection_PlayReady_IPlayReadySecureStopServiceRequest<D>::PublisherCertificate() const
{
    com_array<uint8_t> publisherCertBytes;
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::IPlayReadySecureStopServiceRequest)->get_PublisherCertificate(impl::put_size_abi(publisherCertBytes), put_abi(publisherCertBytes)));
    return publisherCertBytes;
}

template <typename D> Windows::Media::Protection::PlayReady::PlayReadySecureStopServiceRequest consume_Windows_Media_Protection_PlayReady_IPlayReadySecureStopServiceRequestFactory<D>::CreateInstance(array_view<uint8_t const> publisherCertBytes) const
{
    Windows::Media::Protection::PlayReady::PlayReadySecureStopServiceRequest instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::IPlayReadySecureStopServiceRequestFactory)->CreateInstance(publisherCertBytes.size(), get_abi(publisherCertBytes), put_abi(instance)));
    return instance;
}

template <typename D> Windows::Media::Protection::PlayReady::PlayReadySecureStopServiceRequest consume_Windows_Media_Protection_PlayReady_IPlayReadySecureStopServiceRequestFactory<D>::CreateInstanceFromSessionID(GUID const& sessionID, array_view<uint8_t const> publisherCertBytes) const
{
    Windows::Media::Protection::PlayReady::PlayReadySecureStopServiceRequest instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::IPlayReadySecureStopServiceRequestFactory)->CreateInstanceFromSessionID(get_abi(sessionID), publisherCertBytes.size(), get_abi(publisherCertBytes), put_abi(instance)));
    return instance;
}

template <typename D> Windows::Foundation::Uri consume_Windows_Media_Protection_PlayReady_IPlayReadyServiceRequest<D>::Uri() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::IPlayReadyServiceRequest)->get_Uri(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Protection_PlayReady_IPlayReadyServiceRequest<D>::Uri(Windows::Foundation::Uri const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::IPlayReadyServiceRequest)->put_Uri(get_abi(value)));
}

template <typename D> hstring consume_Windows_Media_Protection_PlayReady_IPlayReadyServiceRequest<D>::ResponseCustomData() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::IPlayReadyServiceRequest)->get_ResponseCustomData(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Protection_PlayReady_IPlayReadyServiceRequest<D>::ChallengeCustomData() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::IPlayReadyServiceRequest)->get_ChallengeCustomData(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Protection_PlayReady_IPlayReadyServiceRequest<D>::ChallengeCustomData(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::IPlayReadyServiceRequest)->put_ChallengeCustomData(get_abi(value)));
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_Protection_PlayReady_IPlayReadyServiceRequest<D>::BeginServiceRequest() const
{
    Windows::Foundation::IAsyncAction action{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::IPlayReadyServiceRequest)->BeginServiceRequest(put_abi(action)));
    return action;
}

template <typename D> Windows::Media::Protection::PlayReady::IPlayReadyServiceRequest consume_Windows_Media_Protection_PlayReady_IPlayReadyServiceRequest<D>::NextServiceRequest() const
{
    Windows::Media::Protection::PlayReady::IPlayReadyServiceRequest serviceRequest{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::IPlayReadyServiceRequest)->NextServiceRequest(put_abi(serviceRequest)));
    return serviceRequest;
}

template <typename D> Windows::Media::Protection::PlayReady::PlayReadySoapMessage consume_Windows_Media_Protection_PlayReady_IPlayReadyServiceRequest<D>::GenerateManualEnablingChallenge() const
{
    Windows::Media::Protection::PlayReady::PlayReadySoapMessage challengeMessage{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::IPlayReadyServiceRequest)->GenerateManualEnablingChallenge(put_abi(challengeMessage)));
    return challengeMessage;
}

template <typename D> HRESULT consume_Windows_Media_Protection_PlayReady_IPlayReadyServiceRequest<D>::ProcessManualEnablingResponse(array_view<uint8_t const> responseBytes) const
{
    HRESULT result{};
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::IPlayReadyServiceRequest)->ProcessManualEnablingResponse(responseBytes.size(), get_abi(responseBytes), put_abi(result)));
    return result;
}

template <typename D> com_array<uint8_t> consume_Windows_Media_Protection_PlayReady_IPlayReadySoapMessage<D>::GetMessageBody() const
{
    com_array<uint8_t> messageBodyBytes;
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::IPlayReadySoapMessage)->GetMessageBody(impl::put_size_abi(messageBodyBytes), put_abi(messageBodyBytes)));
    return messageBodyBytes;
}

template <typename D> Windows::Foundation::Collections::IPropertySet consume_Windows_Media_Protection_PlayReady_IPlayReadySoapMessage<D>::MessageHeaders() const
{
    Windows::Foundation::Collections::IPropertySet value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::IPlayReadySoapMessage)->get_MessageHeaders(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri consume_Windows_Media_Protection_PlayReady_IPlayReadySoapMessage<D>::Uri() const
{
    Windows::Foundation::Uri messageUri{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::IPlayReadySoapMessage)->get_Uri(put_abi(messageUri)));
    return messageUri;
}

template <typename D> GUID consume_Windows_Media_Protection_PlayReady_IPlayReadyStatics<D>::DomainJoinServiceRequestType() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::IPlayReadyStatics)->get_DomainJoinServiceRequestType(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Media_Protection_PlayReady_IPlayReadyStatics<D>::DomainLeaveServiceRequestType() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::IPlayReadyStatics)->get_DomainLeaveServiceRequestType(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Media_Protection_PlayReady_IPlayReadyStatics<D>::IndividualizationServiceRequestType() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::IPlayReadyStatics)->get_IndividualizationServiceRequestType(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Media_Protection_PlayReady_IPlayReadyStatics<D>::LicenseAcquirerServiceRequestType() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::IPlayReadyStatics)->get_LicenseAcquirerServiceRequestType(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Media_Protection_PlayReady_IPlayReadyStatics<D>::MeteringReportServiceRequestType() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::IPlayReadyStatics)->get_MeteringReportServiceRequestType(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Media_Protection_PlayReady_IPlayReadyStatics<D>::RevocationServiceRequestType() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::IPlayReadyStatics)->get_RevocationServiceRequestType(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Media_Protection_PlayReady_IPlayReadyStatics<D>::MediaProtectionSystemId() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::IPlayReadyStatics)->get_MediaProtectionSystemId(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Media_Protection_PlayReady_IPlayReadyStatics<D>::PlayReadySecurityVersion() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::IPlayReadyStatics)->get_PlayReadySecurityVersion(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Media_Protection_PlayReady_IPlayReadyStatics2<D>::PlayReadyCertificateSecurityLevel() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::IPlayReadyStatics2)->get_PlayReadyCertificateSecurityLevel(&value));
    return value;
}

template <typename D> GUID consume_Windows_Media_Protection_PlayReady_IPlayReadyStatics3<D>::SecureStopServiceRequestType() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::IPlayReadyStatics3)->get_SecureStopServiceRequestType(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Media_Protection_PlayReady_IPlayReadyStatics3<D>::CheckSupportedHardware(Windows::Media::Protection::PlayReady::PlayReadyHardwareDRMFeatures const& hwdrmFeature) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::IPlayReadyStatics3)->CheckSupportedHardware(get_abi(hwdrmFeature), &value));
    return value;
}

template <typename D> hstring consume_Windows_Media_Protection_PlayReady_IPlayReadyStatics4<D>::InputTrustAuthorityToCreate() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::IPlayReadyStatics4)->get_InputTrustAuthorityToCreate(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Media_Protection_PlayReady_IPlayReadyStatics4<D>::ProtectionSystemId() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Media::Protection::PlayReady::IPlayReadyStatics4)->get_ProtectionSystemId(put_abi(value)));
    return value;
}

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::INDClient> : produce_base<D, Windows::Media::Protection::PlayReady::INDClient>
{
    HRESULT __stdcall add_RegistrationCompleted(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().RegistrationCompleted(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Protection::PlayReady::NDClient, Windows::Media::Protection::PlayReady::INDRegistrationCompletedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_RegistrationCompleted(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RegistrationCompleted(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_ProximityDetectionCompleted(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().ProximityDetectionCompleted(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Protection::PlayReady::NDClient, Windows::Media::Protection::PlayReady::INDProximityDetectionCompletedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_ProximityDetectionCompleted(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ProximityDetectionCompleted(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_LicenseFetchCompleted(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().LicenseFetchCompleted(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Protection::PlayReady::NDClient, Windows::Media::Protection::PlayReady::INDLicenseFetchCompletedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_LicenseFetchCompleted(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LicenseFetchCompleted(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_ReRegistrationNeeded(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().ReRegistrationNeeded(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Protection::PlayReady::NDClient, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_ReRegistrationNeeded(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReRegistrationNeeded(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_ClosedCaptionDataReceived(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().ClosedCaptionDataReceived(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Protection::PlayReady::NDClient, Windows::Media::Protection::PlayReady::INDClosedCaptionDataReceivedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_ClosedCaptionDataReceived(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ClosedCaptionDataReceived(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall StartAsync(void* contentUrl, uint32_t startAsyncOptions, void* registrationCustomData, void* licenseFetchDescriptor, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::Media::Protection::PlayReady::INDStartResult>>(this->shim().StartAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&contentUrl), startAsyncOptions, *reinterpret_cast<Windows::Media::Protection::PlayReady::INDCustomData const*>(&registrationCustomData), *reinterpret_cast<Windows::Media::Protection::PlayReady::INDLicenseFetchDescriptor const*>(&licenseFetchDescriptor)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall LicenseFetchAsync(void* licenseFetchDescriptor, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::Media::Protection::PlayReady::INDLicenseFetchResult>>(this->shim().LicenseFetchAsync(*reinterpret_cast<Windows::Media::Protection::PlayReady::INDLicenseFetchDescriptor const*>(&licenseFetchDescriptor)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ReRegistrationAsync(void* registrationCustomData, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncAction>(this->shim().ReRegistrationAsync(*reinterpret_cast<Windows::Media::Protection::PlayReady::INDCustomData const*>(&registrationCustomData)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Close() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Close();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::INDClientFactory> : produce_base<D, Windows::Media::Protection::PlayReady::INDClientFactory>
{
    HRESULT __stdcall CreateInstance(void* downloadEngine, void* streamParser, void* pMessenger, void** instance) noexcept final
    {
        try
        {
            *instance = nullptr;
            typename D::abi_guard guard(this->shim());
            *instance = detach_from<Windows::Media::Protection::PlayReady::NDClient>(this->shim().CreateInstance(*reinterpret_cast<Windows::Media::Protection::PlayReady::INDDownloadEngine const*>(&downloadEngine), *reinterpret_cast<Windows::Media::Protection::PlayReady::INDStreamParser const*>(&streamParser), *reinterpret_cast<Windows::Media::Protection::PlayReady::INDMessenger const*>(&pMessenger)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::INDClosedCaptionDataReceivedEventArgs> : produce_base<D, Windows::Media::Protection::PlayReady::INDClosedCaptionDataReceivedEventArgs>
{
    HRESULT __stdcall get_ClosedCaptionDataFormat(Windows::Media::Protection::PlayReady::NDClosedCaptionFormat* ccForamt) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *ccForamt = detach_from<Windows::Media::Protection::PlayReady::NDClosedCaptionFormat>(this->shim().ClosedCaptionDataFormat());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PresentationTimestamp(int64_t* presentationTimestamp) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *presentationTimestamp = detach_from<int64_t>(this->shim().PresentationTimestamp());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ClosedCaptionData(uint32_t* __ccDataBytesSize, uint8_t** ccDataBytes) noexcept final
    {
        try
        {
            *__ccDataBytesSize = 0;
            *ccDataBytes = nullptr;
            typename D::abi_guard guard(this->shim());
            std::tie(*__ccDataBytesSize, *ccDataBytes) = detach_abi(this->shim().ClosedCaptionData());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::INDCustomData> : produce_base<D, Windows::Media::Protection::PlayReady::INDCustomData>
{
    HRESULT __stdcall get_CustomDataTypeID(uint32_t* __customDataTypeIDBytesSize, uint8_t** customDataTypeIDBytes) noexcept final
    {
        try
        {
            *__customDataTypeIDBytesSize = 0;
            *customDataTypeIDBytes = nullptr;
            typename D::abi_guard guard(this->shim());
            std::tie(*__customDataTypeIDBytesSize, *customDataTypeIDBytes) = detach_abi(this->shim().CustomDataTypeID());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CustomData(uint32_t* __customDataBytesSize, uint8_t** customDataBytes) noexcept final
    {
        try
        {
            *__customDataBytesSize = 0;
            *customDataBytes = nullptr;
            typename D::abi_guard guard(this->shim());
            std::tie(*__customDataBytesSize, *customDataBytes) = detach_abi(this->shim().CustomData());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::INDCustomDataFactory> : produce_base<D, Windows::Media::Protection::PlayReady::INDCustomDataFactory>
{
    HRESULT __stdcall CreateInstance(uint32_t __customDataTypeIDBytesSize, uint8_t* customDataTypeIDBytes, uint32_t __customDataBytesSize, uint8_t* customDataBytes, void** instance) noexcept final
    {
        try
        {
            *instance = nullptr;
            typename D::abi_guard guard(this->shim());
            *instance = detach_from<Windows::Media::Protection::PlayReady::NDCustomData>(this->shim().CreateInstance(array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(customDataTypeIDBytes), reinterpret_cast<uint8_t const *>(customDataTypeIDBytes) + __customDataTypeIDBytesSize), array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(customDataBytes), reinterpret_cast<uint8_t const *>(customDataBytes) + __customDataBytesSize)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::INDDownloadEngine> : produce_base<D, Windows::Media::Protection::PlayReady::INDDownloadEngine>
{
    HRESULT __stdcall Open(void* uri, uint32_t __sessionIDBytesSize, uint8_t* sessionIDBytes) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Open(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri), array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(sessionIDBytes), reinterpret_cast<uint8_t const *>(sessionIDBytes) + __sessionIDBytesSize));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Pause() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Pause();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Resume() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Resume();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Close() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Close();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Seek(Windows::Foundation::TimeSpan startPosition) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Seek(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&startPosition));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CanSeek(bool* canSeek) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *canSeek = detach_from<bool>(this->shim().CanSeek());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_BufferFullMinThresholdInSamples(uint32_t* bufferFullMinThreshold) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *bufferFullMinThreshold = detach_from<uint32_t>(this->shim().BufferFullMinThresholdInSamples());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_BufferFullMaxThresholdInSamples(uint32_t* bufferFullMaxThreshold) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *bufferFullMaxThreshold = detach_from<uint32_t>(this->shim().BufferFullMaxThresholdInSamples());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Notifier(void** instance) noexcept final
    {
        try
        {
            *instance = nullptr;
            typename D::abi_guard guard(this->shim());
            *instance = detach_from<Windows::Media::Protection::PlayReady::NDDownloadEngineNotifier>(this->shim().Notifier());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::INDDownloadEngineNotifier> : produce_base<D, Windows::Media::Protection::PlayReady::INDDownloadEngineNotifier>
{
    HRESULT __stdcall OnStreamOpened() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OnStreamOpened();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall OnPlayReadyObjectReceived(uint32_t __dataBytesSize, uint8_t* dataBytes) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OnPlayReadyObjectReceived(array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(dataBytes), reinterpret_cast<uint8_t const *>(dataBytes) + __dataBytesSize));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall OnContentIDReceived(void* licenseFetchDescriptor) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OnContentIDReceived(*reinterpret_cast<Windows::Media::Protection::PlayReady::INDLicenseFetchDescriptor const*>(&licenseFetchDescriptor));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall OnDataReceived(uint32_t __dataBytesSize, uint8_t* dataBytes, uint32_t bytesReceived) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OnDataReceived(array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(dataBytes), reinterpret_cast<uint8_t const *>(dataBytes) + __dataBytesSize), bytesReceived);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall OnEndOfStream() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OnEndOfStream();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall OnNetworkError() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OnNetworkError();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::INDLicenseFetchCompletedEventArgs> : produce_base<D, Windows::Media::Protection::PlayReady::INDLicenseFetchCompletedEventArgs>
{
    HRESULT __stdcall get_ResponseCustomData(void** customData) noexcept final
    {
        try
        {
            *customData = nullptr;
            typename D::abi_guard guard(this->shim());
            *customData = detach_from<Windows::Media::Protection::PlayReady::INDCustomData>(this->shim().ResponseCustomData());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::INDLicenseFetchDescriptor> : produce_base<D, Windows::Media::Protection::PlayReady::INDLicenseFetchDescriptor>
{
    HRESULT __stdcall get_ContentIDType(Windows::Media::Protection::PlayReady::NDContentIDType* contentIDType) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *contentIDType = detach_from<Windows::Media::Protection::PlayReady::NDContentIDType>(this->shim().ContentIDType());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ContentID(uint32_t* __contentIDBytesSize, uint8_t** contentIDBytes) noexcept final
    {
        try
        {
            *__contentIDBytesSize = 0;
            *contentIDBytes = nullptr;
            typename D::abi_guard guard(this->shim());
            std::tie(*__contentIDBytesSize, *contentIDBytes) = detach_abi(this->shim().ContentID());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_LicenseFetchChallengeCustomData(void** licenseFetchChallengeCustomData) noexcept final
    {
        try
        {
            *licenseFetchChallengeCustomData = nullptr;
            typename D::abi_guard guard(this->shim());
            *licenseFetchChallengeCustomData = detach_from<Windows::Media::Protection::PlayReady::INDCustomData>(this->shim().LicenseFetchChallengeCustomData());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_LicenseFetchChallengeCustomData(void* licenseFetchChallengeCustomData) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LicenseFetchChallengeCustomData(*reinterpret_cast<Windows::Media::Protection::PlayReady::INDCustomData const*>(&licenseFetchChallengeCustomData));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::INDLicenseFetchDescriptorFactory> : produce_base<D, Windows::Media::Protection::PlayReady::INDLicenseFetchDescriptorFactory>
{
    HRESULT __stdcall CreateInstance(Windows::Media::Protection::PlayReady::NDContentIDType contentIDType, uint32_t __contentIDBytesSize, uint8_t* contentIDBytes, void* licenseFetchChallengeCustomData, void** instance) noexcept final
    {
        try
        {
            *instance = nullptr;
            typename D::abi_guard guard(this->shim());
            *instance = detach_from<Windows::Media::Protection::PlayReady::NDLicenseFetchDescriptor>(this->shim().CreateInstance(*reinterpret_cast<Windows::Media::Protection::PlayReady::NDContentIDType const*>(&contentIDType), array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(contentIDBytes), reinterpret_cast<uint8_t const *>(contentIDBytes) + __contentIDBytesSize), *reinterpret_cast<Windows::Media::Protection::PlayReady::INDCustomData const*>(&licenseFetchChallengeCustomData)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::INDLicenseFetchResult> : produce_base<D, Windows::Media::Protection::PlayReady::INDLicenseFetchResult>
{
    HRESULT __stdcall get_ResponseCustomData(void** customData) noexcept final
    {
        try
        {
            *customData = nullptr;
            typename D::abi_guard guard(this->shim());
            *customData = detach_from<Windows::Media::Protection::PlayReady::INDCustomData>(this->shim().ResponseCustomData());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::INDMessenger> : produce_base<D, Windows::Media::Protection::PlayReady::INDMessenger>
{
    HRESULT __stdcall SendRegistrationRequestAsync(uint32_t __sessionIDBytesSize, uint8_t* sessionIDBytes, uint32_t __challengeDataBytesSize, uint8_t* challengeDataBytes, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::Media::Protection::PlayReady::INDSendResult>>(this->shim().SendRegistrationRequestAsync(array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(sessionIDBytes), reinterpret_cast<uint8_t const *>(sessionIDBytes) + __sessionIDBytesSize), array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(challengeDataBytes), reinterpret_cast<uint8_t const *>(challengeDataBytes) + __challengeDataBytesSize)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SendProximityDetectionStartAsync(Windows::Media::Protection::PlayReady::NDProximityDetectionType pdType, uint32_t __transmitterChannelBytesSize, uint8_t* transmitterChannelBytes, uint32_t __sessionIDBytesSize, uint8_t* sessionIDBytes, uint32_t __challengeDataBytesSize, uint8_t* challengeDataBytes, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::Media::Protection::PlayReady::INDSendResult>>(this->shim().SendProximityDetectionStartAsync(*reinterpret_cast<Windows::Media::Protection::PlayReady::NDProximityDetectionType const*>(&pdType), array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(transmitterChannelBytes), reinterpret_cast<uint8_t const *>(transmitterChannelBytes) + __transmitterChannelBytesSize), array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(sessionIDBytes), reinterpret_cast<uint8_t const *>(sessionIDBytes) + __sessionIDBytesSize), array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(challengeDataBytes), reinterpret_cast<uint8_t const *>(challengeDataBytes) + __challengeDataBytesSize)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SendProximityDetectionResponseAsync(Windows::Media::Protection::PlayReady::NDProximityDetectionType pdType, uint32_t __transmitterChannelBytesSize, uint8_t* transmitterChannelBytes, uint32_t __sessionIDBytesSize, uint8_t* sessionIDBytes, uint32_t __responseDataBytesSize, uint8_t* responseDataBytes, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::Media::Protection::PlayReady::INDSendResult>>(this->shim().SendProximityDetectionResponseAsync(*reinterpret_cast<Windows::Media::Protection::PlayReady::NDProximityDetectionType const*>(&pdType), array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(transmitterChannelBytes), reinterpret_cast<uint8_t const *>(transmitterChannelBytes) + __transmitterChannelBytesSize), array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(sessionIDBytes), reinterpret_cast<uint8_t const *>(sessionIDBytes) + __sessionIDBytesSize), array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(responseDataBytes), reinterpret_cast<uint8_t const *>(responseDataBytes) + __responseDataBytesSize)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SendLicenseFetchRequestAsync(uint32_t __sessionIDBytesSize, uint8_t* sessionIDBytes, uint32_t __challengeDataBytesSize, uint8_t* challengeDataBytes, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::Media::Protection::PlayReady::INDSendResult>>(this->shim().SendLicenseFetchRequestAsync(array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(sessionIDBytes), reinterpret_cast<uint8_t const *>(sessionIDBytes) + __sessionIDBytesSize), array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(challengeDataBytes), reinterpret_cast<uint8_t const *>(challengeDataBytes) + __challengeDataBytesSize)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::INDProximityDetectionCompletedEventArgs> : produce_base<D, Windows::Media::Protection::PlayReady::INDProximityDetectionCompletedEventArgs>
{
    HRESULT __stdcall get_ProximityDetectionRetryCount(uint32_t* retryCount) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *retryCount = detach_from<uint32_t>(this->shim().ProximityDetectionRetryCount());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::INDRegistrationCompletedEventArgs> : produce_base<D, Windows::Media::Protection::PlayReady::INDRegistrationCompletedEventArgs>
{
    HRESULT __stdcall get_ResponseCustomData(void** customData) noexcept final
    {
        try
        {
            *customData = nullptr;
            typename D::abi_guard guard(this->shim());
            *customData = detach_from<Windows::Media::Protection::PlayReady::INDCustomData>(this->shim().ResponseCustomData());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TransmitterProperties(void** transmitterProperties) noexcept final
    {
        try
        {
            *transmitterProperties = nullptr;
            typename D::abi_guard guard(this->shim());
            *transmitterProperties = detach_from<Windows::Media::Protection::PlayReady::INDTransmitterProperties>(this->shim().TransmitterProperties());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TransmitterCertificateAccepted(bool* acceptpt) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *acceptpt = detach_from<bool>(this->shim().TransmitterCertificateAccepted());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_TransmitterCertificateAccepted(bool accept) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TransmitterCertificateAccepted(accept);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::INDSendResult> : produce_base<D, Windows::Media::Protection::PlayReady::INDSendResult>
{
    HRESULT __stdcall get_Response(uint32_t* __responseDataBytesSize, uint8_t** responseDataBytes) noexcept final
    {
        try
        {
            *__responseDataBytesSize = 0;
            *responseDataBytes = nullptr;
            typename D::abi_guard guard(this->shim());
            std::tie(*__responseDataBytesSize, *responseDataBytes) = detach_abi(this->shim().Response());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::INDStartResult> : produce_base<D, Windows::Media::Protection::PlayReady::INDStartResult>
{
    HRESULT __stdcall get_MediaStreamSource(void** mediaStreamSource) noexcept final
    {
        try
        {
            *mediaStreamSource = nullptr;
            typename D::abi_guard guard(this->shim());
            *mediaStreamSource = detach_from<Windows::Media::Core::MediaStreamSource>(this->shim().MediaStreamSource());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::INDStorageFileHelper> : produce_base<D, Windows::Media::Protection::PlayReady::INDStorageFileHelper>
{
    HRESULT __stdcall GetFileURLs(void* file, void** fileURLs) noexcept final
    {
        try
        {
            *fileURLs = nullptr;
            typename D::abi_guard guard(this->shim());
            *fileURLs = detach_from<Windows::Foundation::Collections::IVector<hstring>>(this->shim().GetFileURLs(*reinterpret_cast<Windows::Storage::IStorageFile const*>(&file)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::INDStreamParser> : produce_base<D, Windows::Media::Protection::PlayReady::INDStreamParser>
{
    HRESULT __stdcall ParseData(uint32_t __dataBytesSize, uint8_t* dataBytes) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ParseData(array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(dataBytes), reinterpret_cast<uint8_t const *>(dataBytes) + __dataBytesSize));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetStreamInformation(void* descriptor, Windows::Media::Protection::PlayReady::NDMediaStreamType* streamType, uint32_t* streamID) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *streamID = detach_from<uint32_t>(this->shim().GetStreamInformation(*reinterpret_cast<Windows::Media::Core::IMediaStreamDescriptor const*>(&descriptor), *reinterpret_cast<Windows::Media::Protection::PlayReady::NDMediaStreamType*>(streamType)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall BeginOfStream() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BeginOfStream();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall EndOfStream() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EndOfStream();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Notifier(void** instance) noexcept final
    {
        try
        {
            *instance = nullptr;
            typename D::abi_guard guard(this->shim());
            *instance = detach_from<Windows::Media::Protection::PlayReady::NDStreamParserNotifier>(this->shim().Notifier());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::INDStreamParserNotifier> : produce_base<D, Windows::Media::Protection::PlayReady::INDStreamParserNotifier>
{
    HRESULT __stdcall OnContentIDReceived(void* licenseFetchDescriptor) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OnContentIDReceived(*reinterpret_cast<Windows::Media::Protection::PlayReady::INDLicenseFetchDescriptor const*>(&licenseFetchDescriptor));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall OnMediaStreamDescriptorCreated(void* audioStreamDescriptors, void* videoStreamDescriptors) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OnMediaStreamDescriptorCreated(*reinterpret_cast<Windows::Foundation::Collections::IVector<Windows::Media::Core::AudioStreamDescriptor> const*>(&audioStreamDescriptors), *reinterpret_cast<Windows::Foundation::Collections::IVector<Windows::Media::Core::VideoStreamDescriptor> const*>(&videoStreamDescriptors));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall OnSampleParsed(uint32_t streamID, Windows::Media::Protection::PlayReady::NDMediaStreamType streamType, void* streamSample, int64_t pts, Windows::Media::Protection::PlayReady::NDClosedCaptionFormat ccFormat, uint32_t __ccDataBytesSize, uint8_t* ccDataBytes) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OnSampleParsed(streamID, *reinterpret_cast<Windows::Media::Protection::PlayReady::NDMediaStreamType const*>(&streamType), *reinterpret_cast<Windows::Media::Core::MediaStreamSample const*>(&streamSample), pts, *reinterpret_cast<Windows::Media::Protection::PlayReady::NDClosedCaptionFormat const*>(&ccFormat), array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(ccDataBytes), reinterpret_cast<uint8_t const *>(ccDataBytes) + __ccDataBytesSize));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall OnBeginSetupDecryptor(void* descriptor, GUID keyID, uint32_t __proBytesSize, uint8_t* proBytes) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OnBeginSetupDecryptor(*reinterpret_cast<Windows::Media::Core::IMediaStreamDescriptor const*>(&descriptor), *reinterpret_cast<GUID const*>(&keyID), array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(proBytes), reinterpret_cast<uint8_t const *>(proBytes) + __proBytesSize));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::INDTCPMessengerFactory> : produce_base<D, Windows::Media::Protection::PlayReady::INDTCPMessengerFactory>
{
    HRESULT __stdcall CreateInstance(HSTRING remoteHostName, uint32_t remoteHostPort, void** instance) noexcept final
    {
        try
        {
            *instance = nullptr;
            typename D::abi_guard guard(this->shim());
            *instance = detach_from<Windows::Media::Protection::PlayReady::NDTCPMessenger>(this->shim().CreateInstance(*reinterpret_cast<hstring const*>(&remoteHostName), remoteHostPort));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::INDTransmitterProperties> : produce_base<D, Windows::Media::Protection::PlayReady::INDTransmitterProperties>
{
    HRESULT __stdcall get_CertificateType(Windows::Media::Protection::PlayReady::NDCertificateType* type) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *type = detach_from<Windows::Media::Protection::PlayReady::NDCertificateType>(this->shim().CertificateType());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PlatformIdentifier(Windows::Media::Protection::PlayReady::NDCertificatePlatformID* identifier) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *identifier = detach_from<Windows::Media::Protection::PlayReady::NDCertificatePlatformID>(this->shim().PlatformIdentifier());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedFeatures(uint32_t* __featureSetsSize, Windows::Media::Protection::PlayReady::NDCertificateFeature** featureSets) noexcept final
    {
        try
        {
            *__featureSetsSize = 0;
            *featureSets = nullptr;
            typename D::abi_guard guard(this->shim());
            std::tie(*__featureSetsSize, *featureSets) = detach_abi(this->shim().SupportedFeatures());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SecurityLevel(uint32_t* level) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *level = detach_from<uint32_t>(this->shim().SecurityLevel());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SecurityVersion(uint32_t* securityVersion) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *securityVersion = detach_from<uint32_t>(this->shim().SecurityVersion());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ExpirationDate(Windows::Foundation::DateTime* expirationDate) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *expirationDate = detach_from<Windows::Foundation::DateTime>(this->shim().ExpirationDate());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ClientID(uint32_t* __clientIDBytesSize, uint8_t** clientIDBytes) noexcept final
    {
        try
        {
            *__clientIDBytesSize = 0;
            *clientIDBytes = nullptr;
            typename D::abi_guard guard(this->shim());
            std::tie(*__clientIDBytesSize, *clientIDBytes) = detach_abi(this->shim().ClientID());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ModelDigest(uint32_t* __modelDigestBytesSize, uint8_t** modelDigestBytes) noexcept final
    {
        try
        {
            *__modelDigestBytesSize = 0;
            *modelDigestBytes = nullptr;
            typename D::abi_guard guard(this->shim());
            std::tie(*__modelDigestBytesSize, *modelDigestBytes) = detach_abi(this->shim().ModelDigest());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ModelManufacturerName(HSTRING* modelManufacturerName) noexcept final
    {
        try
        {
            *modelManufacturerName = nullptr;
            typename D::abi_guard guard(this->shim());
            *modelManufacturerName = detach_from<hstring>(this->shim().ModelManufacturerName());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ModelName(HSTRING* modelName) noexcept final
    {
        try
        {
            *modelName = nullptr;
            typename D::abi_guard guard(this->shim());
            *modelName = detach_from<hstring>(this->shim().ModelName());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ModelNumber(HSTRING* modelNumber) noexcept final
    {
        try
        {
            *modelNumber = nullptr;
            typename D::abi_guard guard(this->shim());
            *modelNumber = detach_from<hstring>(this->shim().ModelNumber());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::IPlayReadyContentHeader> : produce_base<D, Windows::Media::Protection::PlayReady::IPlayReadyContentHeader>
{
    HRESULT __stdcall get_KeyId(GUID* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<GUID>(this->shim().KeyId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_KeyIdString(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().KeyIdString());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_LicenseAcquisitionUrl(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().LicenseAcquisitionUrl());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_LicenseAcquisitionUserInterfaceUrl(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().LicenseAcquisitionUserInterfaceUrl());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DomainServiceId(GUID* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<GUID>(this->shim().DomainServiceId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_EncryptionType(Windows::Media::Protection::PlayReady::PlayReadyEncryptionAlgorithm* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Protection::PlayReady::PlayReadyEncryptionAlgorithm>(this->shim().EncryptionType());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CustomAttributes(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().CustomAttributes());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DecryptorSetup(Windows::Media::Protection::PlayReady::PlayReadyDecryptorSetup* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Protection::PlayReady::PlayReadyDecryptorSetup>(this->shim().DecryptorSetup());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetSerializedHeader(uint32_t* __headerBytesSize, uint8_t** headerBytes) noexcept final
    {
        try
        {
            *__headerBytesSize = 0;
            *headerBytes = nullptr;
            typename D::abi_guard guard(this->shim());
            std::tie(*__headerBytesSize, *headerBytes) = detach_abi(this->shim().GetSerializedHeader());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_HeaderWithEmbeddedUpdates(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Protection::PlayReady::PlayReadyContentHeader>(this->shim().HeaderWithEmbeddedUpdates());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::IPlayReadyContentHeader2> : produce_base<D, Windows::Media::Protection::PlayReady::IPlayReadyContentHeader2>
{
    HRESULT __stdcall get_KeyIds(uint32_t* __contentKeyIdsSize, GUID** contentKeyIds) noexcept final
    {
        try
        {
            *__contentKeyIdsSize = 0;
            *contentKeyIds = nullptr;
            typename D::abi_guard guard(this->shim());
            std::tie(*__contentKeyIdsSize, *contentKeyIds) = detach_abi(this->shim().KeyIds());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_KeyIdStrings(uint32_t* __contentKeyIdStringsSize, HSTRING** contentKeyIdStrings) noexcept final
    {
        try
        {
            *__contentKeyIdStringsSize = 0;
            *contentKeyIdStrings = nullptr;
            typename D::abi_guard guard(this->shim());
            std::tie(*__contentKeyIdStringsSize, *contentKeyIdStrings) = detach_abi(this->shim().KeyIdStrings());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::IPlayReadyContentHeaderFactory> : produce_base<D, Windows::Media::Protection::PlayReady::IPlayReadyContentHeaderFactory>
{
    HRESULT __stdcall CreateInstanceFromWindowsMediaDrmHeader(uint32_t __headerBytesSize, uint8_t* headerBytes, void* licenseAcquisitionUrl, void* licenseAcquisitionUserInterfaceUrl, HSTRING customAttributes, GUID domainServiceId, void** instance) noexcept final
    {
        try
        {
            *instance = nullptr;
            typename D::abi_guard guard(this->shim());
            *instance = detach_from<Windows::Media::Protection::PlayReady::PlayReadyContentHeader>(this->shim().CreateInstanceFromWindowsMediaDrmHeader(array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(headerBytes), reinterpret_cast<uint8_t const *>(headerBytes) + __headerBytesSize), *reinterpret_cast<Windows::Foundation::Uri const*>(&licenseAcquisitionUrl), *reinterpret_cast<Windows::Foundation::Uri const*>(&licenseAcquisitionUserInterfaceUrl), *reinterpret_cast<hstring const*>(&customAttributes), *reinterpret_cast<GUID const*>(&domainServiceId)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateInstanceFromComponents(GUID contentKeyId, HSTRING contentKeyIdString, Windows::Media::Protection::PlayReady::PlayReadyEncryptionAlgorithm contentEncryptionAlgorithm, void* licenseAcquisitionUrl, void* licenseAcquisitionUserInterfaceUrl, HSTRING customAttributes, GUID domainServiceId, void** instance) noexcept final
    {
        try
        {
            *instance = nullptr;
            typename D::abi_guard guard(this->shim());
            *instance = detach_from<Windows::Media::Protection::PlayReady::PlayReadyContentHeader>(this->shim().CreateInstanceFromComponents(*reinterpret_cast<GUID const*>(&contentKeyId), *reinterpret_cast<hstring const*>(&contentKeyIdString), *reinterpret_cast<Windows::Media::Protection::PlayReady::PlayReadyEncryptionAlgorithm const*>(&contentEncryptionAlgorithm), *reinterpret_cast<Windows::Foundation::Uri const*>(&licenseAcquisitionUrl), *reinterpret_cast<Windows::Foundation::Uri const*>(&licenseAcquisitionUserInterfaceUrl), *reinterpret_cast<hstring const*>(&customAttributes), *reinterpret_cast<GUID const*>(&domainServiceId)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateInstanceFromPlayReadyHeader(uint32_t __headerBytesSize, uint8_t* headerBytes, void** instance) noexcept final
    {
        try
        {
            *instance = nullptr;
            typename D::abi_guard guard(this->shim());
            *instance = detach_from<Windows::Media::Protection::PlayReady::PlayReadyContentHeader>(this->shim().CreateInstanceFromPlayReadyHeader(array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(headerBytes), reinterpret_cast<uint8_t const *>(headerBytes) + __headerBytesSize)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::IPlayReadyContentHeaderFactory2> : produce_base<D, Windows::Media::Protection::PlayReady::IPlayReadyContentHeaderFactory2>
{
    HRESULT __stdcall CreateInstanceFromComponents2(uint32_t dwFlags, uint32_t __contentKeyIdsSize, GUID* contentKeyIds, uint32_t __contentKeyIdStringsSize, HSTRING* contentKeyIdStrings, Windows::Media::Protection::PlayReady::PlayReadyEncryptionAlgorithm contentEncryptionAlgorithm, void* licenseAcquisitionUrl, void* licenseAcquisitionUserInterfaceUrl, HSTRING customAttributes, GUID domainServiceId, void** instance) noexcept final
    {
        try
        {
            *instance = nullptr;
            typename D::abi_guard guard(this->shim());
            *instance = detach_from<Windows::Media::Protection::PlayReady::PlayReadyContentHeader>(this->shim().CreateInstanceFromComponents2(dwFlags, array_view<GUID const>(reinterpret_cast<GUID const *>(contentKeyIds), reinterpret_cast<GUID const *>(contentKeyIds) + __contentKeyIdsSize), array_view<hstring const>(reinterpret_cast<hstring const *>(contentKeyIdStrings), reinterpret_cast<hstring const *>(contentKeyIdStrings) + __contentKeyIdStringsSize), *reinterpret_cast<Windows::Media::Protection::PlayReady::PlayReadyEncryptionAlgorithm const*>(&contentEncryptionAlgorithm), *reinterpret_cast<Windows::Foundation::Uri const*>(&licenseAcquisitionUrl), *reinterpret_cast<Windows::Foundation::Uri const*>(&licenseAcquisitionUserInterfaceUrl), *reinterpret_cast<hstring const*>(&customAttributes), *reinterpret_cast<GUID const*>(&domainServiceId)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::IPlayReadyContentResolver> : produce_base<D, Windows::Media::Protection::PlayReady::IPlayReadyContentResolver>
{
    HRESULT __stdcall ServiceRequest(void* contentHeader, void** serviceRequest) noexcept final
    {
        try
        {
            *serviceRequest = nullptr;
            typename D::abi_guard guard(this->shim());
            *serviceRequest = detach_from<Windows::Media::Protection::PlayReady::IPlayReadyServiceRequest>(this->shim().ServiceRequest(*reinterpret_cast<Windows::Media::Protection::PlayReady::PlayReadyContentHeader const*>(&contentHeader)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::IPlayReadyDomain> : produce_base<D, Windows::Media::Protection::PlayReady::IPlayReadyDomain>
{
    HRESULT __stdcall get_AccountId(GUID* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<GUID>(this->shim().AccountId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ServiceId(GUID* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<GUID>(this->shim().ServiceId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Revision(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().Revision());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_FriendlyName(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().FriendlyName());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DomainJoinUrl(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().DomainJoinUrl());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::IPlayReadyDomainIterableFactory> : produce_base<D, Windows::Media::Protection::PlayReady::IPlayReadyDomainIterableFactory>
{
    HRESULT __stdcall CreateInstance(GUID domainAccountId, void** domainIterable) noexcept final
    {
        try
        {
            *domainIterable = nullptr;
            typename D::abi_guard guard(this->shim());
            *domainIterable = detach_from<Windows::Media::Protection::PlayReady::PlayReadyDomainIterable>(this->shim().CreateInstance(*reinterpret_cast<GUID const*>(&domainAccountId)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::IPlayReadyDomainJoinServiceRequest> : produce_base<D, Windows::Media::Protection::PlayReady::IPlayReadyDomainJoinServiceRequest>
{
    HRESULT __stdcall get_DomainAccountId(GUID* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<GUID>(this->shim().DomainAccountId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_DomainAccountId(GUID value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DomainAccountId(*reinterpret_cast<GUID const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DomainFriendlyName(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DomainFriendlyName());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_DomainFriendlyName(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DomainFriendlyName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DomainServiceId(GUID* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<GUID>(this->shim().DomainServiceId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_DomainServiceId(GUID value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DomainServiceId(*reinterpret_cast<GUID const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::IPlayReadyDomainLeaveServiceRequest> : produce_base<D, Windows::Media::Protection::PlayReady::IPlayReadyDomainLeaveServiceRequest>
{
    HRESULT __stdcall get_DomainAccountId(GUID* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<GUID>(this->shim().DomainAccountId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_DomainAccountId(GUID value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DomainAccountId(*reinterpret_cast<GUID const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DomainServiceId(GUID* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<GUID>(this->shim().DomainServiceId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_DomainServiceId(GUID value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DomainServiceId(*reinterpret_cast<GUID const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::IPlayReadyITADataGenerator> : produce_base<D, Windows::Media::Protection::PlayReady::IPlayReadyITADataGenerator>
{
    HRESULT __stdcall GenerateData(GUID guidCPSystemId, uint32_t countOfStreams, void* configuration, Windows::Media::Protection::PlayReady::PlayReadyITADataFormat format, uint32_t* __dataBytesSize, uint8_t** dataBytes) noexcept final
    {
        try
        {
            *__dataBytesSize = 0;
            *dataBytes = nullptr;
            typename D::abi_guard guard(this->shim());
            std::tie(*__dataBytesSize, *dataBytes) = detach_abi(this->shim().GenerateData(*reinterpret_cast<GUID const*>(&guidCPSystemId), countOfStreams, *reinterpret_cast<Windows::Foundation::Collections::IPropertySet const*>(&configuration), *reinterpret_cast<Windows::Media::Protection::PlayReady::PlayReadyITADataFormat const*>(&format)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::IPlayReadyIndividualizationServiceRequest> : produce_base<D, Windows::Media::Protection::PlayReady::IPlayReadyIndividualizationServiceRequest>
{};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::IPlayReadyLicense> : produce_base<D, Windows::Media::Protection::PlayReady::IPlayReadyLicense>
{
    HRESULT __stdcall get_FullyEvaluated(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().FullyEvaluated());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_UsableForPlay(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().UsableForPlay());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ExpirationDate(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<Windows::Foundation::DateTime>>(this->shim().ExpirationDate());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ExpireAfterFirstPlay(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().ExpireAfterFirstPlay());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DomainAccountID(GUID* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<GUID>(this->shim().DomainAccountID());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ChainDepth(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().ChainDepth());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetKIDAtChainDepth(uint32_t chainDepth, GUID* kid) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *kid = detach_from<GUID>(this->shim().GetKIDAtChainDepth(chainDepth));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::IPlayReadyLicense2> : produce_base<D, Windows::Media::Protection::PlayReady::IPlayReadyLicense2>
{
    HRESULT __stdcall get_SecureStopId(GUID* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<GUID>(this->shim().SecureStopId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SecurityLevel(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().SecurityLevel());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_InMemoryOnly(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().InMemoryOnly());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ExpiresInRealTime(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().ExpiresInRealTime());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::IPlayReadyLicenseAcquisitionServiceRequest> : produce_base<D, Windows::Media::Protection::PlayReady::IPlayReadyLicenseAcquisitionServiceRequest>
{
    HRESULT __stdcall get_ContentHeader(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Protection::PlayReady::PlayReadyContentHeader>(this->shim().ContentHeader());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ContentHeader(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ContentHeader(*reinterpret_cast<Windows::Media::Protection::PlayReady::PlayReadyContentHeader const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DomainServiceId(GUID* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<GUID>(this->shim().DomainServiceId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_DomainServiceId(GUID value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DomainServiceId(*reinterpret_cast<GUID const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::IPlayReadyLicenseAcquisitionServiceRequest2> : produce_base<D, Windows::Media::Protection::PlayReady::IPlayReadyLicenseAcquisitionServiceRequest2>
{
    HRESULT __stdcall get_SessionId(GUID* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<GUID>(this->shim().SessionId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::IPlayReadyLicenseAcquisitionServiceRequest3> : produce_base<D, Windows::Media::Protection::PlayReady::IPlayReadyLicenseAcquisitionServiceRequest3>
{
    HRESULT __stdcall CreateLicenseIterable(void* contentHeader, bool fullyEvaluated, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Media::Protection::PlayReady::PlayReadyLicenseIterable>(this->shim().CreateLicenseIterable(*reinterpret_cast<Windows::Media::Protection::PlayReady::PlayReadyContentHeader const*>(&contentHeader), fullyEvaluated));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::IPlayReadyLicenseIterableFactory> : produce_base<D, Windows::Media::Protection::PlayReady::IPlayReadyLicenseIterableFactory>
{
    HRESULT __stdcall CreateInstance(void* contentHeader, bool fullyEvaluated, void** instance) noexcept final
    {
        try
        {
            *instance = nullptr;
            typename D::abi_guard guard(this->shim());
            *instance = detach_from<Windows::Media::Protection::PlayReady::PlayReadyLicenseIterable>(this->shim().CreateInstance(*reinterpret_cast<Windows::Media::Protection::PlayReady::PlayReadyContentHeader const*>(&contentHeader), fullyEvaluated));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::IPlayReadyLicenseManagement> : produce_base<D, Windows::Media::Protection::PlayReady::IPlayReadyLicenseManagement>
{
    HRESULT __stdcall DeleteLicenses(void* contentHeader, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncAction>(this->shim().DeleteLicenses(*reinterpret_cast<Windows::Media::Protection::PlayReady::PlayReadyContentHeader const*>(&contentHeader)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::IPlayReadyLicenseSession> : produce_base<D, Windows::Media::Protection::PlayReady::IPlayReadyLicenseSession>
{
    HRESULT __stdcall CreateLAServiceRequest(void** serviceRequest) noexcept final
    {
        try
        {
            *serviceRequest = nullptr;
            typename D::abi_guard guard(this->shim());
            *serviceRequest = detach_from<Windows::Media::Protection::PlayReady::IPlayReadyLicenseAcquisitionServiceRequest>(this->shim().CreateLAServiceRequest());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ConfigureMediaProtectionManager(void* mpm) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ConfigureMediaProtectionManager(*reinterpret_cast<Windows::Media::Protection::MediaProtectionManager const*>(&mpm));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::IPlayReadyLicenseSession2> : produce_base<D, Windows::Media::Protection::PlayReady::IPlayReadyLicenseSession2>
{
    HRESULT __stdcall CreateLicenseIterable(void* contentHeader, bool fullyEvaluated, void** licenseIterable) noexcept final
    {
        try
        {
            *licenseIterable = nullptr;
            typename D::abi_guard guard(this->shim());
            *licenseIterable = detach_from<Windows::Media::Protection::PlayReady::PlayReadyLicenseIterable>(this->shim().CreateLicenseIterable(*reinterpret_cast<Windows::Media::Protection::PlayReady::PlayReadyContentHeader const*>(&contentHeader), fullyEvaluated));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::IPlayReadyLicenseSessionFactory> : produce_base<D, Windows::Media::Protection::PlayReady::IPlayReadyLicenseSessionFactory>
{
    HRESULT __stdcall CreateInstance(void* configuration, void** instance) noexcept final
    {
        try
        {
            *instance = nullptr;
            typename D::abi_guard guard(this->shim());
            *instance = detach_from<Windows::Media::Protection::PlayReady::PlayReadyLicenseSession>(this->shim().CreateInstance(*reinterpret_cast<Windows::Foundation::Collections::IPropertySet const*>(&configuration)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::IPlayReadyMeteringReportServiceRequest> : produce_base<D, Windows::Media::Protection::PlayReady::IPlayReadyMeteringReportServiceRequest>
{
    HRESULT __stdcall get_MeteringCertificate(uint32_t* __meteringCertBytesSize, uint8_t** meteringCertBytes) noexcept final
    {
        try
        {
            *__meteringCertBytesSize = 0;
            *meteringCertBytes = nullptr;
            typename D::abi_guard guard(this->shim());
            std::tie(*__meteringCertBytesSize, *meteringCertBytes) = detach_abi(this->shim().MeteringCertificate());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_MeteringCertificate(uint32_t __meteringCertBytesSize, uint8_t* meteringCertBytes) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MeteringCertificate(array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(meteringCertBytes), reinterpret_cast<uint8_t const *>(meteringCertBytes) + __meteringCertBytesSize));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::IPlayReadyRevocationServiceRequest> : produce_base<D, Windows::Media::Protection::PlayReady::IPlayReadyRevocationServiceRequest>
{};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::IPlayReadySecureStopIterableFactory> : produce_base<D, Windows::Media::Protection::PlayReady::IPlayReadySecureStopIterableFactory>
{
    HRESULT __stdcall CreateInstance(uint32_t __publisherCertBytesSize, uint8_t* publisherCertBytes, void** instance) noexcept final
    {
        try
        {
            *instance = nullptr;
            typename D::abi_guard guard(this->shim());
            *instance = detach_from<Windows::Media::Protection::PlayReady::PlayReadySecureStopIterable>(this->shim().CreateInstance(array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(publisherCertBytes), reinterpret_cast<uint8_t const *>(publisherCertBytes) + __publisherCertBytesSize)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::IPlayReadySecureStopServiceRequest> : produce_base<D, Windows::Media::Protection::PlayReady::IPlayReadySecureStopServiceRequest>
{
    HRESULT __stdcall get_SessionID(GUID* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<GUID>(this->shim().SessionID());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_StartTime(Windows::Foundation::DateTime* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::DateTime>(this->shim().StartTime());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_UpdateTime(Windows::Foundation::DateTime* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::DateTime>(this->shim().UpdateTime());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Stopped(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Stopped());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PublisherCertificate(uint32_t* __publisherCertBytesSize, uint8_t** publisherCertBytes) noexcept final
    {
        try
        {
            *__publisherCertBytesSize = 0;
            *publisherCertBytes = nullptr;
            typename D::abi_guard guard(this->shim());
            std::tie(*__publisherCertBytesSize, *publisherCertBytes) = detach_abi(this->shim().PublisherCertificate());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::IPlayReadySecureStopServiceRequestFactory> : produce_base<D, Windows::Media::Protection::PlayReady::IPlayReadySecureStopServiceRequestFactory>
{
    HRESULT __stdcall CreateInstance(uint32_t __publisherCertBytesSize, uint8_t* publisherCertBytes, void** instance) noexcept final
    {
        try
        {
            *instance = nullptr;
            typename D::abi_guard guard(this->shim());
            *instance = detach_from<Windows::Media::Protection::PlayReady::PlayReadySecureStopServiceRequest>(this->shim().CreateInstance(array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(publisherCertBytes), reinterpret_cast<uint8_t const *>(publisherCertBytes) + __publisherCertBytesSize)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateInstanceFromSessionID(GUID sessionID, uint32_t __publisherCertBytesSize, uint8_t* publisherCertBytes, void** instance) noexcept final
    {
        try
        {
            *instance = nullptr;
            typename D::abi_guard guard(this->shim());
            *instance = detach_from<Windows::Media::Protection::PlayReady::PlayReadySecureStopServiceRequest>(this->shim().CreateInstanceFromSessionID(*reinterpret_cast<GUID const*>(&sessionID), array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(publisherCertBytes), reinterpret_cast<uint8_t const *>(publisherCertBytes) + __publisherCertBytesSize)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::IPlayReadyServiceRequest> : produce_base<D, Windows::Media::Protection::PlayReady::IPlayReadyServiceRequest>
{
    HRESULT __stdcall get_Uri(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().Uri());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Uri(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Uri(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ResponseCustomData(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ResponseCustomData());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ChallengeCustomData(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ChallengeCustomData());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ChallengeCustomData(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ChallengeCustomData(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall BeginServiceRequest(void** action) noexcept final
    {
        try
        {
            *action = nullptr;
            typename D::abi_guard guard(this->shim());
            *action = detach_from<Windows::Foundation::IAsyncAction>(this->shim().BeginServiceRequest());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall NextServiceRequest(void** serviceRequest) noexcept final
    {
        try
        {
            *serviceRequest = nullptr;
            typename D::abi_guard guard(this->shim());
            *serviceRequest = detach_from<Windows::Media::Protection::PlayReady::IPlayReadyServiceRequest>(this->shim().NextServiceRequest());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GenerateManualEnablingChallenge(void** challengeMessage) noexcept final
    {
        try
        {
            *challengeMessage = nullptr;
            typename D::abi_guard guard(this->shim());
            *challengeMessage = detach_from<Windows::Media::Protection::PlayReady::PlayReadySoapMessage>(this->shim().GenerateManualEnablingChallenge());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ProcessManualEnablingResponse(uint32_t __responseBytesSize, uint8_t* responseBytes, HRESULT* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<HRESULT>(this->shim().ProcessManualEnablingResponse(array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(responseBytes), reinterpret_cast<uint8_t const *>(responseBytes) + __responseBytesSize)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::IPlayReadySoapMessage> : produce_base<D, Windows::Media::Protection::PlayReady::IPlayReadySoapMessage>
{
    HRESULT __stdcall GetMessageBody(uint32_t* __messageBodyBytesSize, uint8_t** messageBodyBytes) noexcept final
    {
        try
        {
            *__messageBodyBytesSize = 0;
            *messageBodyBytes = nullptr;
            typename D::abi_guard guard(this->shim());
            std::tie(*__messageBodyBytesSize, *messageBodyBytes) = detach_abi(this->shim().GetMessageBody());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MessageHeaders(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IPropertySet>(this->shim().MessageHeaders());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Uri(void** messageUri) noexcept final
    {
        try
        {
            *messageUri = nullptr;
            typename D::abi_guard guard(this->shim());
            *messageUri = detach_from<Windows::Foundation::Uri>(this->shim().Uri());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::IPlayReadyStatics> : produce_base<D, Windows::Media::Protection::PlayReady::IPlayReadyStatics>
{
    HRESULT __stdcall get_DomainJoinServiceRequestType(GUID* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<GUID>(this->shim().DomainJoinServiceRequestType());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DomainLeaveServiceRequestType(GUID* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<GUID>(this->shim().DomainLeaveServiceRequestType());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IndividualizationServiceRequestType(GUID* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<GUID>(this->shim().IndividualizationServiceRequestType());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_LicenseAcquirerServiceRequestType(GUID* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<GUID>(this->shim().LicenseAcquirerServiceRequestType());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MeteringReportServiceRequestType(GUID* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<GUID>(this->shim().MeteringReportServiceRequestType());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RevocationServiceRequestType(GUID* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<GUID>(this->shim().RevocationServiceRequestType());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MediaProtectionSystemId(GUID* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<GUID>(this->shim().MediaProtectionSystemId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PlayReadySecurityVersion(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().PlayReadySecurityVersion());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::IPlayReadyStatics2> : produce_base<D, Windows::Media::Protection::PlayReady::IPlayReadyStatics2>
{
    HRESULT __stdcall get_PlayReadyCertificateSecurityLevel(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().PlayReadyCertificateSecurityLevel());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::IPlayReadyStatics3> : produce_base<D, Windows::Media::Protection::PlayReady::IPlayReadyStatics3>
{
    HRESULT __stdcall get_SecureStopServiceRequestType(GUID* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<GUID>(this->shim().SecureStopServiceRequestType());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CheckSupportedHardware(Windows::Media::Protection::PlayReady::PlayReadyHardwareDRMFeatures hwdrmFeature, bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().CheckSupportedHardware(*reinterpret_cast<Windows::Media::Protection::PlayReady::PlayReadyHardwareDRMFeatures const*>(&hwdrmFeature)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Protection::PlayReady::IPlayReadyStatics4> : produce_base<D, Windows::Media::Protection::PlayReady::IPlayReadyStatics4>
{
    HRESULT __stdcall get_InputTrustAuthorityToCreate(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().InputTrustAuthorityToCreate());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ProtectionSystemId(GUID* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<GUID>(this->shim().ProtectionSystemId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Media::Protection::PlayReady {

inline NDClient::NDClient(Windows::Media::Protection::PlayReady::INDDownloadEngine const& downloadEngine, Windows::Media::Protection::PlayReady::INDStreamParser const& streamParser, Windows::Media::Protection::PlayReady::INDMessenger const& pMessenger) :
    NDClient(get_activation_factory<NDClient, Windows::Media::Protection::PlayReady::INDClientFactory>().CreateInstance(downloadEngine, streamParser, pMessenger))
{}

inline NDCustomData::NDCustomData(array_view<uint8_t const> customDataTypeIDBytes, array_view<uint8_t const> customDataBytes) :
    NDCustomData(get_activation_factory<NDCustomData, Windows::Media::Protection::PlayReady::INDCustomDataFactory>().CreateInstance(customDataTypeIDBytes, customDataBytes))
{}

inline NDDownloadEngineNotifier::NDDownloadEngineNotifier() :
    NDDownloadEngineNotifier(get_activation_factory<NDDownloadEngineNotifier>().ActivateInstance<NDDownloadEngineNotifier>())
{}

inline NDLicenseFetchDescriptor::NDLicenseFetchDescriptor(Windows::Media::Protection::PlayReady::NDContentIDType const& contentIDType, array_view<uint8_t const> contentIDBytes, Windows::Media::Protection::PlayReady::INDCustomData const& licenseFetchChallengeCustomData) :
    NDLicenseFetchDescriptor(get_activation_factory<NDLicenseFetchDescriptor, Windows::Media::Protection::PlayReady::INDLicenseFetchDescriptorFactory>().CreateInstance(contentIDType, contentIDBytes, licenseFetchChallengeCustomData))
{}

inline NDStorageFileHelper::NDStorageFileHelper() :
    NDStorageFileHelper(get_activation_factory<NDStorageFileHelper>().ActivateInstance<NDStorageFileHelper>())
{}

inline NDStreamParserNotifier::NDStreamParserNotifier() :
    NDStreamParserNotifier(get_activation_factory<NDStreamParserNotifier>().ActivateInstance<NDStreamParserNotifier>())
{}

inline NDTCPMessenger::NDTCPMessenger(param::hstring const& remoteHostName, uint32_t remoteHostPort) :
    NDTCPMessenger(get_activation_factory<NDTCPMessenger, Windows::Media::Protection::PlayReady::INDTCPMessengerFactory>().CreateInstance(remoteHostName, remoteHostPort))
{}

inline PlayReadyContentHeader::PlayReadyContentHeader(array_view<uint8_t const> headerBytes, Windows::Foundation::Uri const& licenseAcquisitionUrl, Windows::Foundation::Uri const& licenseAcquisitionUserInterfaceUrl, param::hstring const& customAttributes, GUID const& domainServiceId) :
    PlayReadyContentHeader(get_activation_factory<PlayReadyContentHeader, Windows::Media::Protection::PlayReady::IPlayReadyContentHeaderFactory>().CreateInstanceFromWindowsMediaDrmHeader(headerBytes, licenseAcquisitionUrl, licenseAcquisitionUserInterfaceUrl, customAttributes, domainServiceId))
{}

inline PlayReadyContentHeader::PlayReadyContentHeader(GUID const& contentKeyId, param::hstring const& contentKeyIdString, Windows::Media::Protection::PlayReady::PlayReadyEncryptionAlgorithm const& contentEncryptionAlgorithm, Windows::Foundation::Uri const& licenseAcquisitionUrl, Windows::Foundation::Uri const& licenseAcquisitionUserInterfaceUrl, param::hstring const& customAttributes, GUID const& domainServiceId) :
    PlayReadyContentHeader(get_activation_factory<PlayReadyContentHeader, Windows::Media::Protection::PlayReady::IPlayReadyContentHeaderFactory>().CreateInstanceFromComponents(contentKeyId, contentKeyIdString, contentEncryptionAlgorithm, licenseAcquisitionUrl, licenseAcquisitionUserInterfaceUrl, customAttributes, domainServiceId))
{}

inline PlayReadyContentHeader::PlayReadyContentHeader(array_view<uint8_t const> headerBytes) :
    PlayReadyContentHeader(get_activation_factory<PlayReadyContentHeader, Windows::Media::Protection::PlayReady::IPlayReadyContentHeaderFactory>().CreateInstanceFromPlayReadyHeader(headerBytes))
{}

inline PlayReadyContentHeader::PlayReadyContentHeader(uint32_t dwFlags, array_view<GUID const> contentKeyIds, array_view<hstring const> contentKeyIdStrings, Windows::Media::Protection::PlayReady::PlayReadyEncryptionAlgorithm const& contentEncryptionAlgorithm, Windows::Foundation::Uri const& licenseAcquisitionUrl, Windows::Foundation::Uri const& licenseAcquisitionUserInterfaceUrl, param::hstring const& customAttributes, GUID const& domainServiceId) :
    PlayReadyContentHeader(get_activation_factory<PlayReadyContentHeader, Windows::Media::Protection::PlayReady::IPlayReadyContentHeaderFactory2>().CreateInstanceFromComponents2(dwFlags, contentKeyIds, contentKeyIdStrings, contentEncryptionAlgorithm, licenseAcquisitionUrl, licenseAcquisitionUserInterfaceUrl, customAttributes, domainServiceId))
{}

inline Windows::Media::Protection::PlayReady::IPlayReadyServiceRequest PlayReadyContentResolver::ServiceRequest(Windows::Media::Protection::PlayReady::PlayReadyContentHeader const& contentHeader)
{
    return get_activation_factory<PlayReadyContentResolver, Windows::Media::Protection::PlayReady::IPlayReadyContentResolver>().ServiceRequest(contentHeader);
}

inline PlayReadyDomainIterable::PlayReadyDomainIterable(GUID const& domainAccountId) :
    PlayReadyDomainIterable(get_activation_factory<PlayReadyDomainIterable, Windows::Media::Protection::PlayReady::IPlayReadyDomainIterableFactory>().CreateInstance(domainAccountId))
{}

inline PlayReadyDomainJoinServiceRequest::PlayReadyDomainJoinServiceRequest() :
    PlayReadyDomainJoinServiceRequest(get_activation_factory<PlayReadyDomainJoinServiceRequest>().ActivateInstance<PlayReadyDomainJoinServiceRequest>())
{}

inline PlayReadyDomainLeaveServiceRequest::PlayReadyDomainLeaveServiceRequest() :
    PlayReadyDomainLeaveServiceRequest(get_activation_factory<PlayReadyDomainLeaveServiceRequest>().ActivateInstance<PlayReadyDomainLeaveServiceRequest>())
{}

inline PlayReadyITADataGenerator::PlayReadyITADataGenerator() :
    PlayReadyITADataGenerator(get_activation_factory<PlayReadyITADataGenerator>().ActivateInstance<PlayReadyITADataGenerator>())
{}

inline PlayReadyIndividualizationServiceRequest::PlayReadyIndividualizationServiceRequest() :
    PlayReadyIndividualizationServiceRequest(get_activation_factory<PlayReadyIndividualizationServiceRequest>().ActivateInstance<PlayReadyIndividualizationServiceRequest>())
{}

inline PlayReadyLicenseAcquisitionServiceRequest::PlayReadyLicenseAcquisitionServiceRequest() :
    PlayReadyLicenseAcquisitionServiceRequest(get_activation_factory<PlayReadyLicenseAcquisitionServiceRequest>().ActivateInstance<PlayReadyLicenseAcquisitionServiceRequest>())
{}

inline PlayReadyLicenseIterable::PlayReadyLicenseIterable() :
    PlayReadyLicenseIterable(get_activation_factory<PlayReadyLicenseIterable>().ActivateInstance<PlayReadyLicenseIterable>())
{}

inline PlayReadyLicenseIterable::PlayReadyLicenseIterable(Windows::Media::Protection::PlayReady::PlayReadyContentHeader const& contentHeader, bool fullyEvaluated) :
    PlayReadyLicenseIterable(get_activation_factory<PlayReadyLicenseIterable, Windows::Media::Protection::PlayReady::IPlayReadyLicenseIterableFactory>().CreateInstance(contentHeader, fullyEvaluated))
{}

inline Windows::Foundation::IAsyncAction PlayReadyLicenseManagement::DeleteLicenses(Windows::Media::Protection::PlayReady::PlayReadyContentHeader const& contentHeader)
{
    return get_activation_factory<PlayReadyLicenseManagement, Windows::Media::Protection::PlayReady::IPlayReadyLicenseManagement>().DeleteLicenses(contentHeader);
}

inline PlayReadyLicenseSession::PlayReadyLicenseSession(Windows::Foundation::Collections::IPropertySet const& configuration) :
    PlayReadyLicenseSession(get_activation_factory<PlayReadyLicenseSession, Windows::Media::Protection::PlayReady::IPlayReadyLicenseSessionFactory>().CreateInstance(configuration))
{}

inline PlayReadyMeteringReportServiceRequest::PlayReadyMeteringReportServiceRequest() :
    PlayReadyMeteringReportServiceRequest(get_activation_factory<PlayReadyMeteringReportServiceRequest>().ActivateInstance<PlayReadyMeteringReportServiceRequest>())
{}

inline PlayReadyRevocationServiceRequest::PlayReadyRevocationServiceRequest() :
    PlayReadyRevocationServiceRequest(get_activation_factory<PlayReadyRevocationServiceRequest>().ActivateInstance<PlayReadyRevocationServiceRequest>())
{}

inline PlayReadySecureStopIterable::PlayReadySecureStopIterable(array_view<uint8_t const> publisherCertBytes) :
    PlayReadySecureStopIterable(get_activation_factory<PlayReadySecureStopIterable, Windows::Media::Protection::PlayReady::IPlayReadySecureStopIterableFactory>().CreateInstance(publisherCertBytes))
{}

inline PlayReadySecureStopServiceRequest::PlayReadySecureStopServiceRequest(array_view<uint8_t const> publisherCertBytes) :
    PlayReadySecureStopServiceRequest(get_activation_factory<PlayReadySecureStopServiceRequest, Windows::Media::Protection::PlayReady::IPlayReadySecureStopServiceRequestFactory>().CreateInstance(publisherCertBytes))
{}

inline PlayReadySecureStopServiceRequest::PlayReadySecureStopServiceRequest(GUID const& sessionID, array_view<uint8_t const> publisherCertBytes) :
    PlayReadySecureStopServiceRequest(get_activation_factory<PlayReadySecureStopServiceRequest, Windows::Media::Protection::PlayReady::IPlayReadySecureStopServiceRequestFactory>().CreateInstanceFromSessionID(sessionID, publisherCertBytes))
{}

inline GUID PlayReadyStatics::DomainJoinServiceRequestType()
{
    return get_activation_factory<PlayReadyStatics, Windows::Media::Protection::PlayReady::IPlayReadyStatics>().DomainJoinServiceRequestType();
}

inline GUID PlayReadyStatics::DomainLeaveServiceRequestType()
{
    return get_activation_factory<PlayReadyStatics, Windows::Media::Protection::PlayReady::IPlayReadyStatics>().DomainLeaveServiceRequestType();
}

inline GUID PlayReadyStatics::IndividualizationServiceRequestType()
{
    return get_activation_factory<PlayReadyStatics, Windows::Media::Protection::PlayReady::IPlayReadyStatics>().IndividualizationServiceRequestType();
}

inline GUID PlayReadyStatics::LicenseAcquirerServiceRequestType()
{
    return get_activation_factory<PlayReadyStatics, Windows::Media::Protection::PlayReady::IPlayReadyStatics>().LicenseAcquirerServiceRequestType();
}

inline GUID PlayReadyStatics::MeteringReportServiceRequestType()
{
    return get_activation_factory<PlayReadyStatics, Windows::Media::Protection::PlayReady::IPlayReadyStatics>().MeteringReportServiceRequestType();
}

inline GUID PlayReadyStatics::RevocationServiceRequestType()
{
    return get_activation_factory<PlayReadyStatics, Windows::Media::Protection::PlayReady::IPlayReadyStatics>().RevocationServiceRequestType();
}

inline GUID PlayReadyStatics::MediaProtectionSystemId()
{
    return get_activation_factory<PlayReadyStatics, Windows::Media::Protection::PlayReady::IPlayReadyStatics>().MediaProtectionSystemId();
}

inline uint32_t PlayReadyStatics::PlayReadySecurityVersion()
{
    return get_activation_factory<PlayReadyStatics, Windows::Media::Protection::PlayReady::IPlayReadyStatics>().PlayReadySecurityVersion();
}

inline uint32_t PlayReadyStatics::PlayReadyCertificateSecurityLevel()
{
    return get_activation_factory<PlayReadyStatics, Windows::Media::Protection::PlayReady::IPlayReadyStatics2>().PlayReadyCertificateSecurityLevel();
}

inline GUID PlayReadyStatics::SecureStopServiceRequestType()
{
    return get_activation_factory<PlayReadyStatics, Windows::Media::Protection::PlayReady::IPlayReadyStatics3>().SecureStopServiceRequestType();
}

inline bool PlayReadyStatics::CheckSupportedHardware(Windows::Media::Protection::PlayReady::PlayReadyHardwareDRMFeatures const& hwdrmFeature)
{
    return get_activation_factory<PlayReadyStatics, Windows::Media::Protection::PlayReady::IPlayReadyStatics3>().CheckSupportedHardware(hwdrmFeature);
}

inline hstring PlayReadyStatics::InputTrustAuthorityToCreate()
{
    return get_activation_factory<PlayReadyStatics, Windows::Media::Protection::PlayReady::IPlayReadyStatics4>().InputTrustAuthorityToCreate();
}

inline GUID PlayReadyStatics::ProtectionSystemId()
{
    return get_activation_factory<PlayReadyStatics, Windows::Media::Protection::PlayReady::IPlayReadyStatics4>().ProtectionSystemId();
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Media::Protection::PlayReady::INDClient> : winrt::impl::hash_base<winrt::Windows::Media::Protection::PlayReady::INDClient> {};
template<> struct hash<winrt::Windows::Media::Protection::PlayReady::INDClientFactory> : winrt::impl::hash_base<winrt::Windows::Media::Protection::PlayReady::INDClientFactory> {};
template<> struct hash<winrt::Windows::Media::Protection::PlayReady::INDClosedCaptionDataReceivedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Protection::PlayReady::INDClosedCaptionDataReceivedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Protection::PlayReady::INDCustomData> : winrt::impl::hash_base<winrt::Windows::Media::Protection::PlayReady::INDCustomData> {};
template<> struct hash<winrt::Windows::Media::Protection::PlayReady::INDCustomDataFactory> : winrt::impl::hash_base<winrt::Windows::Media::Protection::PlayReady::INDCustomDataFactory> {};
template<> struct hash<winrt::Windows::Media::Protection::PlayReady::INDDownloadEngine> : winrt::impl::hash_base<winrt::Windows::Media::Protection::PlayReady::INDDownloadEngine> {};
template<> struct hash<winrt::Windows::Media::Protection::PlayReady::INDDownloadEngineNotifier> : winrt::impl::hash_base<winrt::Windows::Media::Protection::PlayReady::INDDownloadEngineNotifier> {};
template<> struct hash<winrt::Windows::Media::Protection::PlayReady::INDLicenseFetchCompletedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Protection::PlayReady::INDLicenseFetchCompletedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Protection::PlayReady::INDLicenseFetchDescriptor> : winrt::impl::hash_base<winrt::Windows::Media::Protection::PlayReady::INDLicenseFetchDescriptor> {};
template<> struct hash<winrt::Windows::Media::Protection::PlayReady::INDLicenseFetchDescriptorFactory> : winrt::impl::hash_base<winrt::Windows::Media::Protection::PlayReady::INDLicenseFetchDescriptorFactory> {};
template<> struct hash<winrt::Windows::Media::Protection::PlayReady::INDLicenseFetchResult> : winrt::impl::hash_base<winrt::Windows::Media::Protection::PlayReady::INDLicenseFetchResult> {};
template<> struct hash<winrt::Windows::Media::Protection::PlayReady::INDMessenger> : winrt::impl::hash_base<winrt::Windows::Media::Protection::PlayReady::INDMessenger> {};
template<> struct hash<winrt::Windows::Media::Protection::PlayReady::INDProximityDetectionCompletedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Protection::PlayReady::INDProximityDetectionCompletedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Protection::PlayReady::INDRegistrationCompletedEventArgs> : winrt::impl::hash_base<winrt::Windows::Media::Protection::PlayReady::INDRegistrationCompletedEventArgs> {};
template<> struct hash<winrt::Windows::Media::Protection::PlayReady::INDSendResult> : winrt::impl::hash_base<winrt::Windows::Media::Protection::PlayReady::INDSendResult> {};
template<> struct hash<winrt::Windows::Media::Protection::PlayReady::INDStartResult> : winrt::impl::hash_base<winrt::Windows::Media::Protection::PlayReady::INDStartResult> {};
template<> struct hash<winrt::Windows::Media::Protection::PlayReady::INDStorageFileHelper> : winrt::impl::hash_base<winrt::Windows::Media::Protection::PlayReady::INDStorageFileHelper> {};
template<> struct hash<winrt::Windows::Media::Protection::PlayReady::INDStreamParser> : winrt::impl::hash_base<winrt::Windows::Media::Protection::PlayReady::INDStreamParser> {};
template<> struct hash<winrt::Windows::Media::Protection::PlayReady::INDStreamParserNotifier> : winrt::impl::hash_base<winrt::Windows::Media::Protection::PlayReady::INDStreamParserNotifier> {};
template<> struct hash<winrt::Windows::Media::Protection::PlayReady::INDTCPMessengerFactory> : winrt::impl::hash_base<winrt::Windows::Media::Protection::PlayReady::INDTCPMessengerFactory> {};
template<> struct hash<winrt::Windows::Media::Protection::PlayReady::INDTransmitterProperties> : winrt::impl::hash_base<winrt::Windows::Media::Protection::PlayReady::INDTransmitterProperties> {};
template<> struct hash<winrt::Windows::Media::Protection::PlayReady::IPlayReadyContentHeader> : winrt::impl::hash_base<winrt::Windows::Media::Protection::PlayReady::IPlayReadyContentHeader> {};
template<> struct hash<winrt::Windows::Media::Protection::PlayReady::IPlayReadyContentHeader2> : winrt::impl::hash_base<winrt::Windows::Media::Protection::PlayReady::IPlayReadyContentHeader2> {};
template<> struct hash<winrt::Windows::Media::Protection::PlayReady::IPlayReadyContentHeaderFactory> : winrt::impl::hash_base<winrt::Windows::Media::Protection::PlayReady::IPlayReadyContentHeaderFactory> {};
template<> struct hash<winrt::Windows::Media::Protection::PlayReady::IPlayReadyContentHeaderFactory2> : winrt::impl::hash_base<winrt::Windows::Media::Protection::PlayReady::IPlayReadyContentHeaderFactory2> {};
template<> struct hash<winrt::Windows::Media::Protection::PlayReady::IPlayReadyContentResolver> : winrt::impl::hash_base<winrt::Windows::Media::Protection::PlayReady::IPlayReadyContentResolver> {};
template<> struct hash<winrt::Windows::Media::Protection::PlayReady::IPlayReadyDomain> : winrt::impl::hash_base<winrt::Windows::Media::Protection::PlayReady::IPlayReadyDomain> {};
template<> struct hash<winrt::Windows::Media::Protection::PlayReady::IPlayReadyDomainIterableFactory> : winrt::impl::hash_base<winrt::Windows::Media::Protection::PlayReady::IPlayReadyDomainIterableFactory> {};
template<> struct hash<winrt::Windows::Media::Protection::PlayReady::IPlayReadyDomainJoinServiceRequest> : winrt::impl::hash_base<winrt::Windows::Media::Protection::PlayReady::IPlayReadyDomainJoinServiceRequest> {};
template<> struct hash<winrt::Windows::Media::Protection::PlayReady::IPlayReadyDomainLeaveServiceRequest> : winrt::impl::hash_base<winrt::Windows::Media::Protection::PlayReady::IPlayReadyDomainLeaveServiceRequest> {};
template<> struct hash<winrt::Windows::Media::Protection::PlayReady::IPlayReadyITADataGenerator> : winrt::impl::hash_base<winrt::Windows::Media::Protection::PlayReady::IPlayReadyITADataGenerator> {};
template<> struct hash<winrt::Windows::Media::Protection::PlayReady::IPlayReadyIndividualizationServiceRequest> : winrt::impl::hash_base<winrt::Windows::Media::Protection::PlayReady::IPlayReadyIndividualizationServiceRequest> {};
template<> struct hash<winrt::Windows::Media::Protection::PlayReady::IPlayReadyLicense> : winrt::impl::hash_base<winrt::Windows::Media::Protection::PlayReady::IPlayReadyLicense> {};
template<> struct hash<winrt::Windows::Media::Protection::PlayReady::IPlayReadyLicense2> : winrt::impl::hash_base<winrt::Windows::Media::Protection::PlayReady::IPlayReadyLicense2> {};
template<> struct hash<winrt::Windows::Media::Protection::PlayReady::IPlayReadyLicenseAcquisitionServiceRequest> : winrt::impl::hash_base<winrt::Windows::Media::Protection::PlayReady::IPlayReadyLicenseAcquisitionServiceRequest> {};
template<> struct hash<winrt::Windows::Media::Protection::PlayReady::IPlayReadyLicenseAcquisitionServiceRequest2> : winrt::impl::hash_base<winrt::Windows::Media::Protection::PlayReady::IPlayReadyLicenseAcquisitionServiceRequest2> {};
template<> struct hash<winrt::Windows::Media::Protection::PlayReady::IPlayReadyLicenseAcquisitionServiceRequest3> : winrt::impl::hash_base<winrt::Windows::Media::Protection::PlayReady::IPlayReadyLicenseAcquisitionServiceRequest3> {};
template<> struct hash<winrt::Windows::Media::Protection::PlayReady::IPlayReadyLicenseIterableFactory> : winrt::impl::hash_base<winrt::Windows::Media::Protection::PlayReady::IPlayReadyLicenseIterableFactory> {};
template<> struct hash<winrt::Windows::Media::Protection::PlayReady::IPlayReadyLicenseManagement> : winrt::impl::hash_base<winrt::Windows::Media::Protection::PlayReady::IPlayReadyLicenseManagement> {};
template<> struct hash<winrt::Windows::Media::Protection::PlayReady::IPlayReadyLicenseSession> : winrt::impl::hash_base<winrt::Windows::Media::Protection::PlayReady::IPlayReadyLicenseSession> {};
template<> struct hash<winrt::Windows::Media::Protection::PlayReady::IPlayReadyLicenseSession2> : winrt::impl::hash_base<winrt::Windows::Media::Protection::PlayReady::IPlayReadyLicenseSession2> {};
template<> struct hash<winrt::Windows::Media::Protection::PlayReady::IPlayReadyLicenseSessionFactory> : winrt::impl::hash_base<winrt::Windows::Media::Protection::PlayReady::IPlayReadyLicenseSessionFactory> {};
template<> struct hash<winrt::Windows::Media::Protection::PlayReady::IPlayReadyMeteringReportServiceRequest> : winrt::impl::hash_base<winrt::Windows::Media::Protection::PlayReady::IPlayReadyMeteringReportServiceRequest> {};
template<> struct hash<winrt::Windows::Media::Protection::PlayReady::IPlayReadyRevocationServiceRequest> : winrt::impl::hash_base<winrt::Windows::Media::Protection::PlayReady::IPlayReadyRevocationServiceRequest> {};
template<> struct hash<winrt::Windows::Media::Protection::PlayReady::IPlayReadySecureStopIterableFactory> : winrt::impl::hash_base<winrt::Windows::Media::Protection::PlayReady::IPlayReadySecureStopIterableFactory> {};
template<> struct hash<winrt::Windows::Media::Protection::PlayReady::IPlayReadySecureStopServiceRequest> : winrt::impl::hash_base<winrt::Windows::Media::Protection::PlayReady::IPlayReadySecureStopServiceRequest> {};
template<> struct hash<winrt::Windows::Media::Protection::PlayReady::IPlayReadySecureStopServiceRequestFactory> : winrt::impl::hash_base<winrt::Windows::Media::Protection::PlayReady::IPlayReadySecureStopServiceRequestFactory> {};
template<> struct hash<winrt::Windows::Media::Protection::PlayReady::IPlayReadyServiceRequest> : winrt::impl::hash_base<winrt::Windows::Media::Protection::PlayReady::IPlayReadyServiceRequest> {};
template<> struct hash<winrt::Windows::Media::Protection::PlayReady::IPlayReadySoapMessage> : winrt::impl::hash_base<winrt::Windows::Media::Protection::PlayReady::IPlayReadySoapMessage> {};
template<> struct hash<winrt::Windows::Media::Protection::PlayReady::IPlayReadyStatics> : winrt::impl::hash_base<winrt::Windows::Media::Protection::PlayReady::IPlayReadyStatics> {};
template<> struct hash<winrt::Windows::Media::Protection::PlayReady::IPlayReadyStatics2> : winrt::impl::hash_base<winrt::Windows::Media::Protection::PlayReady::IPlayReadyStatics2> {};
template<> struct hash<winrt::Windows::Media::Protection::PlayReady::IPlayReadyStatics3> : winrt::impl::hash_base<winrt::Windows::Media::Protection::PlayReady::IPlayReadyStatics3> {};
template<> struct hash<winrt::Windows::Media::Protection::PlayReady::IPlayReadyStatics4> : winrt::impl::hash_base<winrt::Windows::Media::Protection::PlayReady::IPlayReadyStatics4> {};
template<> struct hash<winrt::Windows::Media::Protection::PlayReady::NDClient> : winrt::impl::hash_base<winrt::Windows::Media::Protection::PlayReady::NDClient> {};
template<> struct hash<winrt::Windows::Media::Protection::PlayReady::NDCustomData> : winrt::impl::hash_base<winrt::Windows::Media::Protection::PlayReady::NDCustomData> {};
template<> struct hash<winrt::Windows::Media::Protection::PlayReady::NDDownloadEngineNotifier> : winrt::impl::hash_base<winrt::Windows::Media::Protection::PlayReady::NDDownloadEngineNotifier> {};
template<> struct hash<winrt::Windows::Media::Protection::PlayReady::NDLicenseFetchDescriptor> : winrt::impl::hash_base<winrt::Windows::Media::Protection::PlayReady::NDLicenseFetchDescriptor> {};
template<> struct hash<winrt::Windows::Media::Protection::PlayReady::NDStorageFileHelper> : winrt::impl::hash_base<winrt::Windows::Media::Protection::PlayReady::NDStorageFileHelper> {};
template<> struct hash<winrt::Windows::Media::Protection::PlayReady::NDStreamParserNotifier> : winrt::impl::hash_base<winrt::Windows::Media::Protection::PlayReady::NDStreamParserNotifier> {};
template<> struct hash<winrt::Windows::Media::Protection::PlayReady::NDTCPMessenger> : winrt::impl::hash_base<winrt::Windows::Media::Protection::PlayReady::NDTCPMessenger> {};
template<> struct hash<winrt::Windows::Media::Protection::PlayReady::PlayReadyContentHeader> : winrt::impl::hash_base<winrt::Windows::Media::Protection::PlayReady::PlayReadyContentHeader> {};
template<> struct hash<winrt::Windows::Media::Protection::PlayReady::PlayReadyContentResolver> : winrt::impl::hash_base<winrt::Windows::Media::Protection::PlayReady::PlayReadyContentResolver> {};
template<> struct hash<winrt::Windows::Media::Protection::PlayReady::PlayReadyDomain> : winrt::impl::hash_base<winrt::Windows::Media::Protection::PlayReady::PlayReadyDomain> {};
template<> struct hash<winrt::Windows::Media::Protection::PlayReady::PlayReadyDomainIterable> : winrt::impl::hash_base<winrt::Windows::Media::Protection::PlayReady::PlayReadyDomainIterable> {};
template<> struct hash<winrt::Windows::Media::Protection::PlayReady::PlayReadyDomainIterator> : winrt::impl::hash_base<winrt::Windows::Media::Protection::PlayReady::PlayReadyDomainIterator> {};
template<> struct hash<winrt::Windows::Media::Protection::PlayReady::PlayReadyDomainJoinServiceRequest> : winrt::impl::hash_base<winrt::Windows::Media::Protection::PlayReady::PlayReadyDomainJoinServiceRequest> {};
template<> struct hash<winrt::Windows::Media::Protection::PlayReady::PlayReadyDomainLeaveServiceRequest> : winrt::impl::hash_base<winrt::Windows::Media::Protection::PlayReady::PlayReadyDomainLeaveServiceRequest> {};
template<> struct hash<winrt::Windows::Media::Protection::PlayReady::PlayReadyITADataGenerator> : winrt::impl::hash_base<winrt::Windows::Media::Protection::PlayReady::PlayReadyITADataGenerator> {};
template<> struct hash<winrt::Windows::Media::Protection::PlayReady::PlayReadyIndividualizationServiceRequest> : winrt::impl::hash_base<winrt::Windows::Media::Protection::PlayReady::PlayReadyIndividualizationServiceRequest> {};
template<> struct hash<winrt::Windows::Media::Protection::PlayReady::PlayReadyLicense> : winrt::impl::hash_base<winrt::Windows::Media::Protection::PlayReady::PlayReadyLicense> {};
template<> struct hash<winrt::Windows::Media::Protection::PlayReady::PlayReadyLicenseAcquisitionServiceRequest> : winrt::impl::hash_base<winrt::Windows::Media::Protection::PlayReady::PlayReadyLicenseAcquisitionServiceRequest> {};
template<> struct hash<winrt::Windows::Media::Protection::PlayReady::PlayReadyLicenseIterable> : winrt::impl::hash_base<winrt::Windows::Media::Protection::PlayReady::PlayReadyLicenseIterable> {};
template<> struct hash<winrt::Windows::Media::Protection::PlayReady::PlayReadyLicenseIterator> : winrt::impl::hash_base<winrt::Windows::Media::Protection::PlayReady::PlayReadyLicenseIterator> {};
template<> struct hash<winrt::Windows::Media::Protection::PlayReady::PlayReadyLicenseManagement> : winrt::impl::hash_base<winrt::Windows::Media::Protection::PlayReady::PlayReadyLicenseManagement> {};
template<> struct hash<winrt::Windows::Media::Protection::PlayReady::PlayReadyLicenseSession> : winrt::impl::hash_base<winrt::Windows::Media::Protection::PlayReady::PlayReadyLicenseSession> {};
template<> struct hash<winrt::Windows::Media::Protection::PlayReady::PlayReadyMeteringReportServiceRequest> : winrt::impl::hash_base<winrt::Windows::Media::Protection::PlayReady::PlayReadyMeteringReportServiceRequest> {};
template<> struct hash<winrt::Windows::Media::Protection::PlayReady::PlayReadyRevocationServiceRequest> : winrt::impl::hash_base<winrt::Windows::Media::Protection::PlayReady::PlayReadyRevocationServiceRequest> {};
template<> struct hash<winrt::Windows::Media::Protection::PlayReady::PlayReadySecureStopIterable> : winrt::impl::hash_base<winrt::Windows::Media::Protection::PlayReady::PlayReadySecureStopIterable> {};
template<> struct hash<winrt::Windows::Media::Protection::PlayReady::PlayReadySecureStopIterator> : winrt::impl::hash_base<winrt::Windows::Media::Protection::PlayReady::PlayReadySecureStopIterator> {};
template<> struct hash<winrt::Windows::Media::Protection::PlayReady::PlayReadySecureStopServiceRequest> : winrt::impl::hash_base<winrt::Windows::Media::Protection::PlayReady::PlayReadySecureStopServiceRequest> {};
template<> struct hash<winrt::Windows::Media::Protection::PlayReady::PlayReadySoapMessage> : winrt::impl::hash_base<winrt::Windows::Media::Protection::PlayReady::PlayReadySoapMessage> {};
template<> struct hash<winrt::Windows::Media::Protection::PlayReady::PlayReadyStatics> : winrt::impl::hash_base<winrt::Windows::Media::Protection::PlayReady::PlayReadyStatics> {};

}

WINRT_WARNING_POP
