// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Devices.Enumeration.2.h"
#include "winrt/impl/Windows.Graphics.Imaging.2.h"
#include "winrt/impl/Windows.Media.2.h"
#include "winrt/impl/Windows.Media.Devices.Core.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Devices.Perception.2.h"
#include "winrt/Windows.Devices.h"

namespace winrt::impl {

template <typename D> hstring consume_Windows_Devices_Perception_IKnownCameraIntrinsicsPropertiesStatics<D>::FocalLength() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IKnownCameraIntrinsicsPropertiesStatics)->get_FocalLength(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Perception_IKnownCameraIntrinsicsPropertiesStatics<D>::PrincipalPoint() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IKnownCameraIntrinsicsPropertiesStatics)->get_PrincipalPoint(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Perception_IKnownCameraIntrinsicsPropertiesStatics<D>::RadialDistortion() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IKnownCameraIntrinsicsPropertiesStatics)->get_RadialDistortion(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Perception_IKnownCameraIntrinsicsPropertiesStatics<D>::TangentialDistortion() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IKnownCameraIntrinsicsPropertiesStatics)->get_TangentialDistortion(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Perception_IKnownPerceptionColorFrameSourcePropertiesStatics<D>::Exposure() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IKnownPerceptionColorFrameSourcePropertiesStatics)->get_Exposure(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Perception_IKnownPerceptionColorFrameSourcePropertiesStatics<D>::AutoExposureEnabled() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IKnownPerceptionColorFrameSourcePropertiesStatics)->get_AutoExposureEnabled(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Perception_IKnownPerceptionColorFrameSourcePropertiesStatics<D>::ExposureCompensation() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IKnownPerceptionColorFrameSourcePropertiesStatics)->get_ExposureCompensation(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Perception_IKnownPerceptionDepthFrameSourcePropertiesStatics<D>::MinDepth() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IKnownPerceptionDepthFrameSourcePropertiesStatics)->get_MinDepth(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Perception_IKnownPerceptionDepthFrameSourcePropertiesStatics<D>::MaxDepth() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IKnownPerceptionDepthFrameSourcePropertiesStatics)->get_MaxDepth(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Perception_IKnownPerceptionFrameSourcePropertiesStatics<D>::Id() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IKnownPerceptionFrameSourcePropertiesStatics)->get_Id(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Perception_IKnownPerceptionFrameSourcePropertiesStatics<D>::PhysicalDeviceIds() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IKnownPerceptionFrameSourcePropertiesStatics)->get_PhysicalDeviceIds(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Perception_IKnownPerceptionFrameSourcePropertiesStatics<D>::FrameKind() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IKnownPerceptionFrameSourcePropertiesStatics)->get_FrameKind(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Perception_IKnownPerceptionFrameSourcePropertiesStatics<D>::DeviceModelVersion() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IKnownPerceptionFrameSourcePropertiesStatics)->get_DeviceModelVersion(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Perception_IKnownPerceptionFrameSourcePropertiesStatics<D>::EnclosureLocation() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IKnownPerceptionFrameSourcePropertiesStatics)->get_EnclosureLocation(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Perception_IKnownPerceptionFrameSourcePropertiesStatics2<D>::DeviceId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IKnownPerceptionFrameSourcePropertiesStatics2)->get_DeviceId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Perception_IKnownPerceptionInfraredFrameSourcePropertiesStatics<D>::Exposure() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IKnownPerceptionInfraredFrameSourcePropertiesStatics)->get_Exposure(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Perception_IKnownPerceptionInfraredFrameSourcePropertiesStatics<D>::AutoExposureEnabled() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IKnownPerceptionInfraredFrameSourcePropertiesStatics)->get_AutoExposureEnabled(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Perception_IKnownPerceptionInfraredFrameSourcePropertiesStatics<D>::ExposureCompensation() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IKnownPerceptionInfraredFrameSourcePropertiesStatics)->get_ExposureCompensation(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Perception_IKnownPerceptionInfraredFrameSourcePropertiesStatics<D>::ActiveIlluminationEnabled() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IKnownPerceptionInfraredFrameSourcePropertiesStatics)->get_ActiveIlluminationEnabled(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Perception_IKnownPerceptionInfraredFrameSourcePropertiesStatics<D>::AmbientSubtractionEnabled() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IKnownPerceptionInfraredFrameSourcePropertiesStatics)->get_AmbientSubtractionEnabled(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Perception_IKnownPerceptionInfraredFrameSourcePropertiesStatics<D>::StructureLightPatternEnabled() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IKnownPerceptionInfraredFrameSourcePropertiesStatics)->get_StructureLightPatternEnabled(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Perception_IKnownPerceptionInfraredFrameSourcePropertiesStatics<D>::InterleavedIlluminationEnabled() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IKnownPerceptionInfraredFrameSourcePropertiesStatics)->get_InterleavedIlluminationEnabled(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Perception_IKnownPerceptionVideoFrameSourcePropertiesStatics<D>::VideoProfile() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IKnownPerceptionVideoFrameSourcePropertiesStatics)->get_VideoProfile(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Perception_IKnownPerceptionVideoFrameSourcePropertiesStatics<D>::SupportedVideoProfiles() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IKnownPerceptionVideoFrameSourcePropertiesStatics)->get_SupportedVideoProfiles(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Perception_IKnownPerceptionVideoFrameSourcePropertiesStatics<D>::AvailableVideoProfiles() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IKnownPerceptionVideoFrameSourcePropertiesStatics)->get_AvailableVideoProfiles(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Perception_IKnownPerceptionVideoFrameSourcePropertiesStatics<D>::IsMirrored() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IKnownPerceptionVideoFrameSourcePropertiesStatics)->get_IsMirrored(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Perception_IKnownPerceptionVideoFrameSourcePropertiesStatics<D>::CameraIntrinsics() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IKnownPerceptionVideoFrameSourcePropertiesStatics)->get_CameraIntrinsics(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Perception_IKnownPerceptionVideoProfilePropertiesStatics<D>::BitmapPixelFormat() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IKnownPerceptionVideoProfilePropertiesStatics)->get_BitmapPixelFormat(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Perception_IKnownPerceptionVideoProfilePropertiesStatics<D>::BitmapAlphaMode() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IKnownPerceptionVideoProfilePropertiesStatics)->get_BitmapAlphaMode(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Perception_IKnownPerceptionVideoProfilePropertiesStatics<D>::Width() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IKnownPerceptionVideoProfilePropertiesStatics)->get_Width(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Perception_IKnownPerceptionVideoProfilePropertiesStatics<D>::Height() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IKnownPerceptionVideoProfilePropertiesStatics)->get_Height(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Perception_IKnownPerceptionVideoProfilePropertiesStatics<D>::FrameDuration() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IKnownPerceptionVideoProfilePropertiesStatics)->get_FrameDuration(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::VideoFrame consume_Windows_Devices_Perception_IPerceptionColorFrame<D>::VideoFrame() const
{
    Windows::Media::VideoFrame value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrame)->get_VideoFrame(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Devices_Perception_IPerceptionColorFrameArrivedEventArgs<D>::RelativeTime() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameArrivedEventArgs)->get_RelativeTime(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Perception::PerceptionColorFrame consume_Windows_Devices_Perception_IPerceptionColorFrameArrivedEventArgs<D>::TryOpenFrame() const
{
    Windows::Devices::Perception::PerceptionColorFrame result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameArrivedEventArgs)->TryOpenFrame(put_abi(result)));
    return result;
}

template <typename D> event_token consume_Windows_Devices_Perception_IPerceptionColorFrameReader<D>::FrameArrived(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameReader, Windows::Devices::Perception::PerceptionColorFrameArrivedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameReader)->add_FrameArrived(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Perception::IPerceptionColorFrameReader> consume_Windows_Devices_Perception_IPerceptionColorFrameReader<D>::FrameArrived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameReader, Windows::Devices::Perception::PerceptionColorFrameArrivedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Perception::IPerceptionColorFrameReader>(this, &abi_t<Windows::Devices::Perception::IPerceptionColorFrameReader>::remove_FrameArrived, FrameArrived(handler));
}

template <typename D> void consume_Windows_Devices_Perception_IPerceptionColorFrameReader<D>::FrameArrived(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameReader)->remove_FrameArrived(get_abi(token)));
}

template <typename D> Windows::Devices::Perception::PerceptionColorFrameSource consume_Windows_Devices_Perception_IPerceptionColorFrameReader<D>::Source() const
{
    Windows::Devices::Perception::PerceptionColorFrameSource value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameReader)->get_Source(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Devices_Perception_IPerceptionColorFrameReader<D>::IsPaused() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameReader)->get_IsPaused(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_Perception_IPerceptionColorFrameReader<D>::IsPaused(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameReader)->put_IsPaused(value));
}

template <typename D> Windows::Devices::Perception::PerceptionColorFrame consume_Windows_Devices_Perception_IPerceptionColorFrameReader<D>::TryReadLatestFrame() const
{
    Windows::Devices::Perception::PerceptionColorFrame result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameReader)->TryReadLatestFrame(put_abi(result)));
    return result;
}

template <typename D> event_token consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::AvailableChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSource, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSource)->add_AvailableChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Perception::IPerceptionColorFrameSource> consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::AvailableChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSource, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Perception::IPerceptionColorFrameSource>(this, &abi_t<Windows::Devices::Perception::IPerceptionColorFrameSource>::remove_AvailableChanged, AvailableChanged(handler));
}

template <typename D> void consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::AvailableChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSource)->remove_AvailableChanged(get_abi(token)));
}

template <typename D> event_token consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::ActiveChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSource, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSource)->add_ActiveChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Perception::IPerceptionColorFrameSource> consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::ActiveChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSource, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Perception::IPerceptionColorFrameSource>(this, &abi_t<Windows::Devices::Perception::IPerceptionColorFrameSource>::remove_ActiveChanged, ActiveChanged(handler));
}

template <typename D> void consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::ActiveChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSource)->remove_ActiveChanged(get_abi(token)));
}

template <typename D> event_token consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::PropertiesChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSource, Windows::Devices::Perception::PerceptionFrameSourcePropertiesChangedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSource)->add_PropertiesChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Perception::IPerceptionColorFrameSource> consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::PropertiesChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSource, Windows::Devices::Perception::PerceptionFrameSourcePropertiesChangedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Perception::IPerceptionColorFrameSource>(this, &abi_t<Windows::Devices::Perception::IPerceptionColorFrameSource>::remove_PropertiesChanged, PropertiesChanged(handler));
}

template <typename D> void consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::PropertiesChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSource)->remove_PropertiesChanged(get_abi(token)));
}

template <typename D> event_token consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::VideoProfileChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSource, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSource)->add_VideoProfileChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Perception::IPerceptionColorFrameSource> consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::VideoProfileChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSource, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Perception::IPerceptionColorFrameSource>(this, &abi_t<Windows::Devices::Perception::IPerceptionColorFrameSource>::remove_VideoProfileChanged, VideoProfileChanged(handler));
}

template <typename D> void consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::VideoProfileChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSource)->remove_VideoProfileChanged(get_abi(token)));
}

template <typename D> event_token consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::CameraIntrinsicsChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSource, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSource)->add_CameraIntrinsicsChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Perception::IPerceptionColorFrameSource> consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::CameraIntrinsicsChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSource, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Perception::IPerceptionColorFrameSource>(this, &abi_t<Windows::Devices::Perception::IPerceptionColorFrameSource>::remove_CameraIntrinsicsChanged, CameraIntrinsicsChanged(handler));
}

template <typename D> void consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::CameraIntrinsicsChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSource)->remove_CameraIntrinsicsChanged(get_abi(token)));
}

template <typename D> hstring consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::Id() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSource)->get_Id(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::DisplayName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSource)->get_DisplayName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::DeviceKind() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSource)->get_DeviceKind(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::Available() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSource)->get_Available(&value));
    return value;
}

template <typename D> bool consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::Active() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSource)->get_Active(&value));
    return value;
}

template <typename D> bool consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::IsControlled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSource)->get_IsControlled(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable> consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::Properties() const
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSource)->get_Properties(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionVideoProfile> consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::SupportedVideoProfiles() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionVideoProfile> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSource)->get_SupportedVideoProfiles(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionVideoProfile> consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::AvailableVideoProfiles() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionVideoProfile> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSource)->get_AvailableVideoProfiles(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Perception::PerceptionVideoProfile consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::VideoProfile() const
{
    Windows::Devices::Perception::PerceptionVideoProfile value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSource)->get_VideoProfile(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Devices::Core::CameraIntrinsics consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::CameraIntrinsics() const
{
    Windows::Media::Devices::Core::CameraIntrinsics value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSource)->get_CameraIntrinsics(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Perception::PerceptionControlSession consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::AcquireControlSession() const
{
    Windows::Devices::Perception::PerceptionControlSession value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSource)->AcquireControlSession(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::CanControlIndependentlyFrom(param::hstring const& targetId) const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSource)->CanControlIndependentlyFrom(get_abi(targetId), &result));
    return result;
}

template <typename D> bool consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::IsCorrelatedWith(param::hstring const& targetId) const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSource)->IsCorrelatedWith(get_abi(targetId), &result));
    return result;
}

template <typename D> bool consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::TryGetTransformTo(param::hstring const& targetId, Windows::Foundation::Numerics::float4x4& result) const
{
    bool hasResult{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSource)->TryGetTransformTo(get_abi(targetId), put_abi(result), &hasResult));
    return hasResult;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionDepthCorrelatedCameraIntrinsics> consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::TryGetDepthCorrelatedCameraIntrinsicsAsync(Windows::Devices::Perception::PerceptionDepthFrameSource const& correlatedDepthFrameSource) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionDepthCorrelatedCameraIntrinsics> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSource)->TryGetDepthCorrelatedCameraIntrinsicsAsync(get_abi(correlatedDepthFrameSource), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionDepthCorrelatedCoordinateMapper> consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::TryGetDepthCorrelatedCoordinateMapperAsync(param::hstring const& targetSourceId, Windows::Devices::Perception::PerceptionDepthFrameSource const& correlatedDepthFrameSource) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionDepthCorrelatedCoordinateMapper> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSource)->TryGetDepthCorrelatedCoordinateMapperAsync(get_abi(targetSourceId), get_abi(correlatedDepthFrameSource), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionFrameSourcePropertyChangeResult> consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::TrySetVideoProfileAsync(Windows::Devices::Perception::PerceptionControlSession const& controlSession, Windows::Devices::Perception::PerceptionVideoProfile const& profile) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionFrameSourcePropertyChangeResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSource)->TrySetVideoProfileAsync(get_abi(controlSession), get_abi(profile), put_abi(result)));
    return result;
}

template <typename D> Windows::Devices::Perception::PerceptionColorFrameReader consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::OpenReader() const
{
    Windows::Devices::Perception::PerceptionColorFrameReader result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSource)->OpenReader(put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_Devices_Perception_IPerceptionColorFrameSource2<D>::DeviceId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSource2)->get_DeviceId(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Perception::PerceptionColorFrameSource consume_Windows_Devices_Perception_IPerceptionColorFrameSourceAddedEventArgs<D>::FrameSource() const
{
    Windows::Devices::Perception::PerceptionColorFrameSource value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSourceAddedEventArgs)->get_FrameSource(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Perception::PerceptionColorFrameSource consume_Windows_Devices_Perception_IPerceptionColorFrameSourceRemovedEventArgs<D>::FrameSource() const
{
    Windows::Devices::Perception::PerceptionColorFrameSource value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSourceRemovedEventArgs)->get_FrameSource(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Perception::PerceptionColorFrameSourceWatcher consume_Windows_Devices_Perception_IPerceptionColorFrameSourceStatics<D>::CreateWatcher() const
{
    Windows::Devices::Perception::PerceptionColorFrameSourceWatcher watcher{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSourceStatics)->CreateWatcher(put_abi(watcher)));
    return watcher;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionColorFrameSource>> consume_Windows_Devices_Perception_IPerceptionColorFrameSourceStatics<D>::FindAllAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionColorFrameSource>> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSourceStatics)->FindAllAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionColorFrameSource> consume_Windows_Devices_Perception_IPerceptionColorFrameSourceStatics<D>::FromIdAsync(param::hstring const& id) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionColorFrameSource> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSourceStatics)->FromIdAsync(get_abi(id), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionFrameSourceAccessStatus> consume_Windows_Devices_Perception_IPerceptionColorFrameSourceStatics<D>::RequestAccessAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionFrameSourceAccessStatus> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSourceStatics)->RequestAccessAsync(put_abi(result)));
    return result;
}

template <typename D> event_token consume_Windows_Devices_Perception_IPerceptionColorFrameSourceWatcher<D>::SourceAdded(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSourceWatcher, Windows::Devices::Perception::PerceptionColorFrameSourceAddedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher)->add_SourceAdded(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher> consume_Windows_Devices_Perception_IPerceptionColorFrameSourceWatcher<D>::SourceAdded(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSourceWatcher, Windows::Devices::Perception::PerceptionColorFrameSourceAddedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher>(this, &abi_t<Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher>::remove_SourceAdded, SourceAdded(handler));
}

template <typename D> void consume_Windows_Devices_Perception_IPerceptionColorFrameSourceWatcher<D>::SourceAdded(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher)->remove_SourceAdded(get_abi(token)));
}

template <typename D> event_token consume_Windows_Devices_Perception_IPerceptionColorFrameSourceWatcher<D>::SourceRemoved(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSourceWatcher, Windows::Devices::Perception::PerceptionColorFrameSourceRemovedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher)->add_SourceRemoved(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher> consume_Windows_Devices_Perception_IPerceptionColorFrameSourceWatcher<D>::SourceRemoved(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSourceWatcher, Windows::Devices::Perception::PerceptionColorFrameSourceRemovedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher>(this, &abi_t<Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher>::remove_SourceRemoved, SourceRemoved(handler));
}

template <typename D> void consume_Windows_Devices_Perception_IPerceptionColorFrameSourceWatcher<D>::SourceRemoved(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher)->remove_SourceRemoved(get_abi(token)));
}

template <typename D> event_token consume_Windows_Devices_Perception_IPerceptionColorFrameSourceWatcher<D>::Stopped(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSourceWatcher, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher)->add_Stopped(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher> consume_Windows_Devices_Perception_IPerceptionColorFrameSourceWatcher<D>::Stopped(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSourceWatcher, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher>(this, &abi_t<Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher>::remove_Stopped, Stopped(handler));
}

template <typename D> void consume_Windows_Devices_Perception_IPerceptionColorFrameSourceWatcher<D>::Stopped(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher)->remove_Stopped(get_abi(token)));
}

template <typename D> event_token consume_Windows_Devices_Perception_IPerceptionColorFrameSourceWatcher<D>::EnumerationCompleted(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSourceWatcher, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher)->add_EnumerationCompleted(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher> consume_Windows_Devices_Perception_IPerceptionColorFrameSourceWatcher<D>::EnumerationCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSourceWatcher, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher>(this, &abi_t<Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher>::remove_EnumerationCompleted, EnumerationCompleted(handler));
}

template <typename D> void consume_Windows_Devices_Perception_IPerceptionColorFrameSourceWatcher<D>::EnumerationCompleted(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher)->remove_EnumerationCompleted(get_abi(token)));
}

template <typename D> Windows::Devices::Enumeration::DeviceWatcherStatus consume_Windows_Devices_Perception_IPerceptionColorFrameSourceWatcher<D>::Status() const
{
    Windows::Devices::Enumeration::DeviceWatcherStatus value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher)->get_Status(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Perception_IPerceptionColorFrameSourceWatcher<D>::Start() const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher)->Start());
}

template <typename D> void consume_Windows_Devices_Perception_IPerceptionColorFrameSourceWatcher<D>::Stop() const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher)->Stop());
}

template <typename D> event_token consume_Windows_Devices_Perception_IPerceptionControlSession<D>::ControlLost(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionControlSession, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionControlSession)->add_ControlLost(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Perception::IPerceptionControlSession> consume_Windows_Devices_Perception_IPerceptionControlSession<D>::ControlLost(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionControlSession, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Perception::IPerceptionControlSession>(this, &abi_t<Windows::Devices::Perception::IPerceptionControlSession>::remove_ControlLost, ControlLost(handler));
}

template <typename D> void consume_Windows_Devices_Perception_IPerceptionControlSession<D>::ControlLost(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionControlSession)->remove_ControlLost(get_abi(token)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionFrameSourcePropertyChangeResult> consume_Windows_Devices_Perception_IPerceptionControlSession<D>::TrySetPropertyAsync(param::hstring const& name, Windows::Foundation::IInspectable const& value) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionFrameSourcePropertyChangeResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionControlSession)->TrySetPropertyAsync(get_abi(name), get_abi(value), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::Numerics::float3 consume_Windows_Devices_Perception_IPerceptionDepthCorrelatedCameraIntrinsics<D>::UnprojectPixelAtCorrelatedDepth(Windows::Foundation::Point const& pixelCoordinate, Windows::Devices::Perception::PerceptionDepthFrame const& depthFrame) const
{
    Windows::Foundation::Numerics::float3 result{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthCorrelatedCameraIntrinsics)->UnprojectPixelAtCorrelatedDepth(get_abi(pixelCoordinate), get_abi(depthFrame), put_abi(result)));
    return result;
}

template <typename D> void consume_Windows_Devices_Perception_IPerceptionDepthCorrelatedCameraIntrinsics<D>::UnprojectPixelsAtCorrelatedDepth(array_view<Windows::Foundation::Point const> sourceCoordinates, Windows::Devices::Perception::PerceptionDepthFrame const& depthFrame, array_view<Windows::Foundation::Numerics::float3> results) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthCorrelatedCameraIntrinsics)->UnprojectPixelsAtCorrelatedDepth(sourceCoordinates.size(), get_abi(sourceCoordinates), get_abi(depthFrame), results.size(), get_abi(results)));
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Devices_Perception_IPerceptionDepthCorrelatedCameraIntrinsics<D>::UnprojectRegionPixelsAtCorrelatedDepthAsync(Windows::Foundation::Rect const& region, Windows::Devices::Perception::PerceptionDepthFrame const& depthFrame, array_view<Windows::Foundation::Numerics::float3> results) const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthCorrelatedCameraIntrinsics)->UnprojectRegionPixelsAtCorrelatedDepthAsync(get_abi(region), get_abi(depthFrame), results.size(), get_abi(results), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Devices_Perception_IPerceptionDepthCorrelatedCameraIntrinsics<D>::UnprojectAllPixelsAtCorrelatedDepthAsync(Windows::Devices::Perception::PerceptionDepthFrame const& depthFrame, array_view<Windows::Foundation::Numerics::float3> results) const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthCorrelatedCameraIntrinsics)->UnprojectAllPixelsAtCorrelatedDepthAsync(get_abi(depthFrame), results.size(), get_abi(results), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::Point consume_Windows_Devices_Perception_IPerceptionDepthCorrelatedCoordinateMapper<D>::MapPixelToTarget(Windows::Foundation::Point const& sourcePixelCoordinate, Windows::Devices::Perception::PerceptionDepthFrame const& depthFrame) const
{
    Windows::Foundation::Point result{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthCorrelatedCoordinateMapper)->MapPixelToTarget(get_abi(sourcePixelCoordinate), get_abi(depthFrame), put_abi(result)));
    return result;
}

template <typename D> void consume_Windows_Devices_Perception_IPerceptionDepthCorrelatedCoordinateMapper<D>::MapPixelsToTarget(array_view<Windows::Foundation::Point const> sourceCoordinates, Windows::Devices::Perception::PerceptionDepthFrame const& depthFrame, array_view<Windows::Foundation::Point> results) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthCorrelatedCoordinateMapper)->MapPixelsToTarget(sourceCoordinates.size(), get_abi(sourceCoordinates), get_abi(depthFrame), results.size(), get_abi(results)));
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Devices_Perception_IPerceptionDepthCorrelatedCoordinateMapper<D>::MapRegionOfPixelsToTargetAsync(Windows::Foundation::Rect const& region, Windows::Devices::Perception::PerceptionDepthFrame const& depthFrame, array_view<Windows::Foundation::Point> targetCoordinates) const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthCorrelatedCoordinateMapper)->MapRegionOfPixelsToTargetAsync(get_abi(region), get_abi(depthFrame), targetCoordinates.size(), get_abi(targetCoordinates), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Devices_Perception_IPerceptionDepthCorrelatedCoordinateMapper<D>::MapAllPixelsToTargetAsync(Windows::Devices::Perception::PerceptionDepthFrame const& depthFrame, array_view<Windows::Foundation::Point> targetCoordinates) const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthCorrelatedCoordinateMapper)->MapAllPixelsToTargetAsync(get_abi(depthFrame), targetCoordinates.size(), get_abi(targetCoordinates), put_abi(result)));
    return result;
}

template <typename D> Windows::Media::VideoFrame consume_Windows_Devices_Perception_IPerceptionDepthFrame<D>::VideoFrame() const
{
    Windows::Media::VideoFrame value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrame)->get_VideoFrame(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Devices_Perception_IPerceptionDepthFrameArrivedEventArgs<D>::RelativeTime() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameArrivedEventArgs)->get_RelativeTime(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Perception::PerceptionDepthFrame consume_Windows_Devices_Perception_IPerceptionDepthFrameArrivedEventArgs<D>::TryOpenFrame() const
{
    Windows::Devices::Perception::PerceptionDepthFrame result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameArrivedEventArgs)->TryOpenFrame(put_abi(result)));
    return result;
}

template <typename D> event_token consume_Windows_Devices_Perception_IPerceptionDepthFrameReader<D>::FrameArrived(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameReader, Windows::Devices::Perception::PerceptionDepthFrameArrivedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameReader)->add_FrameArrived(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Perception::IPerceptionDepthFrameReader> consume_Windows_Devices_Perception_IPerceptionDepthFrameReader<D>::FrameArrived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameReader, Windows::Devices::Perception::PerceptionDepthFrameArrivedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Perception::IPerceptionDepthFrameReader>(this, &abi_t<Windows::Devices::Perception::IPerceptionDepthFrameReader>::remove_FrameArrived, FrameArrived(handler));
}

template <typename D> void consume_Windows_Devices_Perception_IPerceptionDepthFrameReader<D>::FrameArrived(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameReader)->remove_FrameArrived(get_abi(token)));
}

template <typename D> Windows::Devices::Perception::PerceptionDepthFrameSource consume_Windows_Devices_Perception_IPerceptionDepthFrameReader<D>::Source() const
{
    Windows::Devices::Perception::PerceptionDepthFrameSource value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameReader)->get_Source(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Devices_Perception_IPerceptionDepthFrameReader<D>::IsPaused() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameReader)->get_IsPaused(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_Perception_IPerceptionDepthFrameReader<D>::IsPaused(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameReader)->put_IsPaused(value));
}

template <typename D> Windows::Devices::Perception::PerceptionDepthFrame consume_Windows_Devices_Perception_IPerceptionDepthFrameReader<D>::TryReadLatestFrame() const
{
    Windows::Devices::Perception::PerceptionDepthFrame result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameReader)->TryReadLatestFrame(put_abi(result)));
    return result;
}

template <typename D> event_token consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::AvailableChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSource, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSource)->add_AvailableChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Perception::IPerceptionDepthFrameSource> consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::AvailableChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSource, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Perception::IPerceptionDepthFrameSource>(this, &abi_t<Windows::Devices::Perception::IPerceptionDepthFrameSource>::remove_AvailableChanged, AvailableChanged(handler));
}

template <typename D> void consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::AvailableChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSource)->remove_AvailableChanged(get_abi(token)));
}

template <typename D> event_token consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::ActiveChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSource, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSource)->add_ActiveChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Perception::IPerceptionDepthFrameSource> consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::ActiveChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSource, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Perception::IPerceptionDepthFrameSource>(this, &abi_t<Windows::Devices::Perception::IPerceptionDepthFrameSource>::remove_ActiveChanged, ActiveChanged(handler));
}

template <typename D> void consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::ActiveChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSource)->remove_ActiveChanged(get_abi(token)));
}

template <typename D> event_token consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::PropertiesChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSource, Windows::Devices::Perception::PerceptionFrameSourcePropertiesChangedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSource)->add_PropertiesChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Perception::IPerceptionDepthFrameSource> consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::PropertiesChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSource, Windows::Devices::Perception::PerceptionFrameSourcePropertiesChangedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Perception::IPerceptionDepthFrameSource>(this, &abi_t<Windows::Devices::Perception::IPerceptionDepthFrameSource>::remove_PropertiesChanged, PropertiesChanged(handler));
}

template <typename D> void consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::PropertiesChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSource)->remove_PropertiesChanged(get_abi(token)));
}

template <typename D> event_token consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::VideoProfileChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSource, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSource)->add_VideoProfileChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Perception::IPerceptionDepthFrameSource> consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::VideoProfileChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSource, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Perception::IPerceptionDepthFrameSource>(this, &abi_t<Windows::Devices::Perception::IPerceptionDepthFrameSource>::remove_VideoProfileChanged, VideoProfileChanged(handler));
}

template <typename D> void consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::VideoProfileChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSource)->remove_VideoProfileChanged(get_abi(token)));
}

template <typename D> event_token consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::CameraIntrinsicsChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSource, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSource)->add_CameraIntrinsicsChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Perception::IPerceptionDepthFrameSource> consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::CameraIntrinsicsChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSource, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Perception::IPerceptionDepthFrameSource>(this, &abi_t<Windows::Devices::Perception::IPerceptionDepthFrameSource>::remove_CameraIntrinsicsChanged, CameraIntrinsicsChanged(handler));
}

template <typename D> void consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::CameraIntrinsicsChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSource)->remove_CameraIntrinsicsChanged(get_abi(token)));
}

template <typename D> hstring consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::Id() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSource)->get_Id(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::DisplayName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSource)->get_DisplayName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::DeviceKind() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSource)->get_DeviceKind(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::Available() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSource)->get_Available(&value));
    return value;
}

template <typename D> bool consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::Active() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSource)->get_Active(&value));
    return value;
}

template <typename D> bool consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::IsControlled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSource)->get_IsControlled(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable> consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::Properties() const
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSource)->get_Properties(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionVideoProfile> consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::SupportedVideoProfiles() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionVideoProfile> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSource)->get_SupportedVideoProfiles(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionVideoProfile> consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::AvailableVideoProfiles() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionVideoProfile> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSource)->get_AvailableVideoProfiles(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Perception::PerceptionVideoProfile consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::VideoProfile() const
{
    Windows::Devices::Perception::PerceptionVideoProfile value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSource)->get_VideoProfile(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Devices::Core::CameraIntrinsics consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::CameraIntrinsics() const
{
    Windows::Media::Devices::Core::CameraIntrinsics value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSource)->get_CameraIntrinsics(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Perception::PerceptionControlSession consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::AcquireControlSession() const
{
    Windows::Devices::Perception::PerceptionControlSession result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSource)->AcquireControlSession(put_abi(result)));
    return result;
}

template <typename D> bool consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::CanControlIndependentlyFrom(param::hstring const& targetId) const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSource)->CanControlIndependentlyFrom(get_abi(targetId), &result));
    return result;
}

template <typename D> bool consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::IsCorrelatedWith(param::hstring const& targetId) const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSource)->IsCorrelatedWith(get_abi(targetId), &result));
    return result;
}

template <typename D> bool consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::TryGetTransformTo(param::hstring const& targetId, Windows::Foundation::Numerics::float4x4& result) const
{
    bool hasResult{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSource)->TryGetTransformTo(get_abi(targetId), put_abi(result), &hasResult));
    return hasResult;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionDepthCorrelatedCameraIntrinsics> consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::TryGetDepthCorrelatedCameraIntrinsicsAsync(Windows::Devices::Perception::PerceptionDepthFrameSource const& target) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionDepthCorrelatedCameraIntrinsics> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSource)->TryGetDepthCorrelatedCameraIntrinsicsAsync(get_abi(target), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionDepthCorrelatedCoordinateMapper> consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::TryGetDepthCorrelatedCoordinateMapperAsync(param::hstring const& targetId, Windows::Devices::Perception::PerceptionDepthFrameSource const& depthFrameSourceToMapWith) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionDepthCorrelatedCoordinateMapper> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSource)->TryGetDepthCorrelatedCoordinateMapperAsync(get_abi(targetId), get_abi(depthFrameSourceToMapWith), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionFrameSourcePropertyChangeResult> consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::TrySetVideoProfileAsync(Windows::Devices::Perception::PerceptionControlSession const& controlSession, Windows::Devices::Perception::PerceptionVideoProfile const& profile) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionFrameSourcePropertyChangeResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSource)->TrySetVideoProfileAsync(get_abi(controlSession), get_abi(profile), put_abi(result)));
    return result;
}

template <typename D> Windows::Devices::Perception::PerceptionDepthFrameReader consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::OpenReader() const
{
    Windows::Devices::Perception::PerceptionDepthFrameReader result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSource)->OpenReader(put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_Devices_Perception_IPerceptionDepthFrameSource2<D>::DeviceId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSource2)->get_DeviceId(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Perception::PerceptionDepthFrameSource consume_Windows_Devices_Perception_IPerceptionDepthFrameSourceAddedEventArgs<D>::FrameSource() const
{
    Windows::Devices::Perception::PerceptionDepthFrameSource value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSourceAddedEventArgs)->get_FrameSource(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Perception::PerceptionDepthFrameSource consume_Windows_Devices_Perception_IPerceptionDepthFrameSourceRemovedEventArgs<D>::FrameSource() const
{
    Windows::Devices::Perception::PerceptionDepthFrameSource value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSourceRemovedEventArgs)->get_FrameSource(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Perception::PerceptionDepthFrameSourceWatcher consume_Windows_Devices_Perception_IPerceptionDepthFrameSourceStatics<D>::CreateWatcher() const
{
    Windows::Devices::Perception::PerceptionDepthFrameSourceWatcher watcher{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSourceStatics)->CreateWatcher(put_abi(watcher)));
    return watcher;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionDepthFrameSource>> consume_Windows_Devices_Perception_IPerceptionDepthFrameSourceStatics<D>::FindAllAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionDepthFrameSource>> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSourceStatics)->FindAllAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionDepthFrameSource> consume_Windows_Devices_Perception_IPerceptionDepthFrameSourceStatics<D>::FromIdAsync(param::hstring const& id) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionDepthFrameSource> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSourceStatics)->FromIdAsync(get_abi(id), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionFrameSourceAccessStatus> consume_Windows_Devices_Perception_IPerceptionDepthFrameSourceStatics<D>::RequestAccessAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionFrameSourceAccessStatus> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSourceStatics)->RequestAccessAsync(put_abi(result)));
    return result;
}

template <typename D> event_token consume_Windows_Devices_Perception_IPerceptionDepthFrameSourceWatcher<D>::SourceAdded(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSourceWatcher, Windows::Devices::Perception::PerceptionDepthFrameSourceAddedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher)->add_SourceAdded(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher> consume_Windows_Devices_Perception_IPerceptionDepthFrameSourceWatcher<D>::SourceAdded(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSourceWatcher, Windows::Devices::Perception::PerceptionDepthFrameSourceAddedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher>(this, &abi_t<Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher>::remove_SourceAdded, SourceAdded(handler));
}

template <typename D> void consume_Windows_Devices_Perception_IPerceptionDepthFrameSourceWatcher<D>::SourceAdded(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher)->remove_SourceAdded(get_abi(token)));
}

template <typename D> event_token consume_Windows_Devices_Perception_IPerceptionDepthFrameSourceWatcher<D>::SourceRemoved(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSourceWatcher, Windows::Devices::Perception::PerceptionDepthFrameSourceRemovedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher)->add_SourceRemoved(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher> consume_Windows_Devices_Perception_IPerceptionDepthFrameSourceWatcher<D>::SourceRemoved(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSourceWatcher, Windows::Devices::Perception::PerceptionDepthFrameSourceRemovedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher>(this, &abi_t<Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher>::remove_SourceRemoved, SourceRemoved(handler));
}

template <typename D> void consume_Windows_Devices_Perception_IPerceptionDepthFrameSourceWatcher<D>::SourceRemoved(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher)->remove_SourceRemoved(get_abi(token)));
}

template <typename D> event_token consume_Windows_Devices_Perception_IPerceptionDepthFrameSourceWatcher<D>::Stopped(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSourceWatcher, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher)->add_Stopped(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher> consume_Windows_Devices_Perception_IPerceptionDepthFrameSourceWatcher<D>::Stopped(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSourceWatcher, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher>(this, &abi_t<Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher>::remove_Stopped, Stopped(handler));
}

template <typename D> void consume_Windows_Devices_Perception_IPerceptionDepthFrameSourceWatcher<D>::Stopped(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher)->remove_Stopped(get_abi(token)));
}

template <typename D> event_token consume_Windows_Devices_Perception_IPerceptionDepthFrameSourceWatcher<D>::EnumerationCompleted(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSourceWatcher, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher)->add_EnumerationCompleted(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher> consume_Windows_Devices_Perception_IPerceptionDepthFrameSourceWatcher<D>::EnumerationCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSourceWatcher, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher>(this, &abi_t<Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher>::remove_EnumerationCompleted, EnumerationCompleted(handler));
}

template <typename D> void consume_Windows_Devices_Perception_IPerceptionDepthFrameSourceWatcher<D>::EnumerationCompleted(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher)->remove_EnumerationCompleted(get_abi(token)));
}

template <typename D> Windows::Devices::Enumeration::DeviceWatcherStatus consume_Windows_Devices_Perception_IPerceptionDepthFrameSourceWatcher<D>::Status() const
{
    Windows::Devices::Enumeration::DeviceWatcherStatus value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher)->get_Status(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Perception_IPerceptionDepthFrameSourceWatcher<D>::Start() const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher)->Start());
}

template <typename D> void consume_Windows_Devices_Perception_IPerceptionDepthFrameSourceWatcher<D>::Stop() const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher)->Stop());
}

template <typename D> Windows::Foundation::Collections::CollectionChange consume_Windows_Devices_Perception_IPerceptionFrameSourcePropertiesChangedEventArgs<D>::CollectionChange() const
{
    Windows::Foundation::Collections::CollectionChange value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionFrameSourcePropertiesChangedEventArgs)->get_CollectionChange(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Perception_IPerceptionFrameSourcePropertiesChangedEventArgs<D>::Key() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionFrameSourcePropertiesChangedEventArgs)->get_Key(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Perception::PerceptionFrameSourcePropertyChangeStatus consume_Windows_Devices_Perception_IPerceptionFrameSourcePropertyChangeResult<D>::Status() const
{
    Windows::Devices::Perception::PerceptionFrameSourcePropertyChangeStatus value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionFrameSourcePropertyChangeResult)->get_Status(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_Devices_Perception_IPerceptionFrameSourcePropertyChangeResult<D>::NewValue() const
{
    Windows::Foundation::IInspectable value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionFrameSourcePropertyChangeResult)->get_NewValue(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::VideoFrame consume_Windows_Devices_Perception_IPerceptionInfraredFrame<D>::VideoFrame() const
{
    Windows::Media::VideoFrame value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrame)->get_VideoFrame(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Devices_Perception_IPerceptionInfraredFrameArrivedEventArgs<D>::RelativeTime() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameArrivedEventArgs)->get_RelativeTime(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Perception::PerceptionInfraredFrame consume_Windows_Devices_Perception_IPerceptionInfraredFrameArrivedEventArgs<D>::TryOpenFrame() const
{
    Windows::Devices::Perception::PerceptionInfraredFrame result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameArrivedEventArgs)->TryOpenFrame(put_abi(result)));
    return result;
}

template <typename D> event_token consume_Windows_Devices_Perception_IPerceptionInfraredFrameReader<D>::FrameArrived(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameReader, Windows::Devices::Perception::PerceptionInfraredFrameArrivedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameReader)->add_FrameArrived(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Perception::IPerceptionInfraredFrameReader> consume_Windows_Devices_Perception_IPerceptionInfraredFrameReader<D>::FrameArrived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameReader, Windows::Devices::Perception::PerceptionInfraredFrameArrivedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Perception::IPerceptionInfraredFrameReader>(this, &abi_t<Windows::Devices::Perception::IPerceptionInfraredFrameReader>::remove_FrameArrived, FrameArrived(handler));
}

template <typename D> void consume_Windows_Devices_Perception_IPerceptionInfraredFrameReader<D>::FrameArrived(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameReader)->remove_FrameArrived(get_abi(token)));
}

template <typename D> Windows::Devices::Perception::PerceptionInfraredFrameSource consume_Windows_Devices_Perception_IPerceptionInfraredFrameReader<D>::Source() const
{
    Windows::Devices::Perception::PerceptionInfraredFrameSource value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameReader)->get_Source(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Devices_Perception_IPerceptionInfraredFrameReader<D>::IsPaused() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameReader)->get_IsPaused(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_Perception_IPerceptionInfraredFrameReader<D>::IsPaused(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameReader)->put_IsPaused(value));
}

template <typename D> Windows::Devices::Perception::PerceptionInfraredFrame consume_Windows_Devices_Perception_IPerceptionInfraredFrameReader<D>::TryReadLatestFrame() const
{
    Windows::Devices::Perception::PerceptionInfraredFrame result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameReader)->TryReadLatestFrame(put_abi(result)));
    return result;
}

template <typename D> event_token consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::AvailableChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSource, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSource)->add_AvailableChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Perception::IPerceptionInfraredFrameSource> consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::AvailableChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSource, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Perception::IPerceptionInfraredFrameSource>(this, &abi_t<Windows::Devices::Perception::IPerceptionInfraredFrameSource>::remove_AvailableChanged, AvailableChanged(handler));
}

template <typename D> void consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::AvailableChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSource)->remove_AvailableChanged(get_abi(token)));
}

template <typename D> event_token consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::ActiveChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSource, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSource)->add_ActiveChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Perception::IPerceptionInfraredFrameSource> consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::ActiveChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSource, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Perception::IPerceptionInfraredFrameSource>(this, &abi_t<Windows::Devices::Perception::IPerceptionInfraredFrameSource>::remove_ActiveChanged, ActiveChanged(handler));
}

template <typename D> void consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::ActiveChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSource)->remove_ActiveChanged(get_abi(token)));
}

template <typename D> event_token consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::PropertiesChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSource, Windows::Devices::Perception::PerceptionFrameSourcePropertiesChangedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSource)->add_PropertiesChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Perception::IPerceptionInfraredFrameSource> consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::PropertiesChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSource, Windows::Devices::Perception::PerceptionFrameSourcePropertiesChangedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Perception::IPerceptionInfraredFrameSource>(this, &abi_t<Windows::Devices::Perception::IPerceptionInfraredFrameSource>::remove_PropertiesChanged, PropertiesChanged(handler));
}

template <typename D> void consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::PropertiesChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSource)->remove_PropertiesChanged(get_abi(token)));
}

template <typename D> event_token consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::VideoProfileChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSource, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSource)->add_VideoProfileChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Perception::IPerceptionInfraredFrameSource> consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::VideoProfileChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSource, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Perception::IPerceptionInfraredFrameSource>(this, &abi_t<Windows::Devices::Perception::IPerceptionInfraredFrameSource>::remove_VideoProfileChanged, VideoProfileChanged(handler));
}

template <typename D> void consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::VideoProfileChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSource)->remove_VideoProfileChanged(get_abi(token)));
}

template <typename D> event_token consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::CameraIntrinsicsChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSource, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSource)->add_CameraIntrinsicsChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Perception::IPerceptionInfraredFrameSource> consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::CameraIntrinsicsChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSource, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Perception::IPerceptionInfraredFrameSource>(this, &abi_t<Windows::Devices::Perception::IPerceptionInfraredFrameSource>::remove_CameraIntrinsicsChanged, CameraIntrinsicsChanged(handler));
}

template <typename D> void consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::CameraIntrinsicsChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSource)->remove_CameraIntrinsicsChanged(get_abi(token)));
}

template <typename D> hstring consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::Id() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSource)->get_Id(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::DisplayName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSource)->get_DisplayName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::DeviceKind() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSource)->get_DeviceKind(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::Available() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSource)->get_Available(&value));
    return value;
}

template <typename D> bool consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::Active() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSource)->get_Active(&value));
    return value;
}

template <typename D> bool consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::IsControlled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSource)->get_IsControlled(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable> consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::Properties() const
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSource)->get_Properties(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionVideoProfile> consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::SupportedVideoProfiles() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionVideoProfile> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSource)->get_SupportedVideoProfiles(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionVideoProfile> consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::AvailableVideoProfiles() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionVideoProfile> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSource)->get_AvailableVideoProfiles(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Perception::PerceptionVideoProfile consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::VideoProfile() const
{
    Windows::Devices::Perception::PerceptionVideoProfile value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSource)->get_VideoProfile(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Devices::Core::CameraIntrinsics consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::CameraIntrinsics() const
{
    Windows::Media::Devices::Core::CameraIntrinsics value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSource)->get_CameraIntrinsics(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Perception::PerceptionControlSession consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::AcquireControlSession() const
{
    Windows::Devices::Perception::PerceptionControlSession result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSource)->AcquireControlSession(put_abi(result)));
    return result;
}

template <typename D> bool consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::CanControlIndependentlyFrom(param::hstring const& targetId) const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSource)->CanControlIndependentlyFrom(get_abi(targetId), &result));
    return result;
}

template <typename D> bool consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::IsCorrelatedWith(param::hstring const& targetId) const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSource)->IsCorrelatedWith(get_abi(targetId), &result));
    return result;
}

template <typename D> bool consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::TryGetTransformTo(param::hstring const& targetId, Windows::Foundation::Numerics::float4x4& result) const
{
    bool hasResult{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSource)->TryGetTransformTo(get_abi(targetId), put_abi(result), &hasResult));
    return hasResult;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionDepthCorrelatedCameraIntrinsics> consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::TryGetDepthCorrelatedCameraIntrinsicsAsync(Windows::Devices::Perception::PerceptionDepthFrameSource const& target) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionDepthCorrelatedCameraIntrinsics> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSource)->TryGetDepthCorrelatedCameraIntrinsicsAsync(get_abi(target), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionDepthCorrelatedCoordinateMapper> consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::TryGetDepthCorrelatedCoordinateMapperAsync(param::hstring const& targetId, Windows::Devices::Perception::PerceptionDepthFrameSource const& depthFrameSourceToMapWith) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionDepthCorrelatedCoordinateMapper> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSource)->TryGetDepthCorrelatedCoordinateMapperAsync(get_abi(targetId), get_abi(depthFrameSourceToMapWith), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionFrameSourcePropertyChangeResult> consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::TrySetVideoProfileAsync(Windows::Devices::Perception::PerceptionControlSession const& controlSession, Windows::Devices::Perception::PerceptionVideoProfile const& profile) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionFrameSourcePropertyChangeResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSource)->TrySetVideoProfileAsync(get_abi(controlSession), get_abi(profile), put_abi(result)));
    return result;
}

template <typename D> Windows::Devices::Perception::PerceptionInfraredFrameReader consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::OpenReader() const
{
    Windows::Devices::Perception::PerceptionInfraredFrameReader result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSource)->OpenReader(put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource2<D>::DeviceId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSource2)->get_DeviceId(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Perception::PerceptionInfraredFrameSource consume_Windows_Devices_Perception_IPerceptionInfraredFrameSourceAddedEventArgs<D>::FrameSource() const
{
    Windows::Devices::Perception::PerceptionInfraredFrameSource value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSourceAddedEventArgs)->get_FrameSource(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Perception::PerceptionInfraredFrameSource consume_Windows_Devices_Perception_IPerceptionInfraredFrameSourceRemovedEventArgs<D>::FrameSource() const
{
    Windows::Devices::Perception::PerceptionInfraredFrameSource value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSourceRemovedEventArgs)->get_FrameSource(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Perception::PerceptionInfraredFrameSourceWatcher consume_Windows_Devices_Perception_IPerceptionInfraredFrameSourceStatics<D>::CreateWatcher() const
{
    Windows::Devices::Perception::PerceptionInfraredFrameSourceWatcher watcher{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSourceStatics)->CreateWatcher(put_abi(watcher)));
    return watcher;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionInfraredFrameSource>> consume_Windows_Devices_Perception_IPerceptionInfraredFrameSourceStatics<D>::FindAllAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionInfraredFrameSource>> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSourceStatics)->FindAllAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionInfraredFrameSource> consume_Windows_Devices_Perception_IPerceptionInfraredFrameSourceStatics<D>::FromIdAsync(param::hstring const& id) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionInfraredFrameSource> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSourceStatics)->FromIdAsync(get_abi(id), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionFrameSourceAccessStatus> consume_Windows_Devices_Perception_IPerceptionInfraredFrameSourceStatics<D>::RequestAccessAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionFrameSourceAccessStatus> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSourceStatics)->RequestAccessAsync(put_abi(result)));
    return result;
}

template <typename D> event_token consume_Windows_Devices_Perception_IPerceptionInfraredFrameSourceWatcher<D>::SourceAdded(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSourceWatcher, Windows::Devices::Perception::PerceptionInfraredFrameSourceAddedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher)->add_SourceAdded(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher> consume_Windows_Devices_Perception_IPerceptionInfraredFrameSourceWatcher<D>::SourceAdded(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSourceWatcher, Windows::Devices::Perception::PerceptionInfraredFrameSourceAddedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher>(this, &abi_t<Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher>::remove_SourceAdded, SourceAdded(handler));
}

template <typename D> void consume_Windows_Devices_Perception_IPerceptionInfraredFrameSourceWatcher<D>::SourceAdded(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher)->remove_SourceAdded(get_abi(token)));
}

template <typename D> event_token consume_Windows_Devices_Perception_IPerceptionInfraredFrameSourceWatcher<D>::SourceRemoved(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSourceWatcher, Windows::Devices::Perception::PerceptionInfraredFrameSourceRemovedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher)->add_SourceRemoved(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher> consume_Windows_Devices_Perception_IPerceptionInfraredFrameSourceWatcher<D>::SourceRemoved(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSourceWatcher, Windows::Devices::Perception::PerceptionInfraredFrameSourceRemovedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher>(this, &abi_t<Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher>::remove_SourceRemoved, SourceRemoved(handler));
}

template <typename D> void consume_Windows_Devices_Perception_IPerceptionInfraredFrameSourceWatcher<D>::SourceRemoved(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher)->remove_SourceRemoved(get_abi(token)));
}

template <typename D> event_token consume_Windows_Devices_Perception_IPerceptionInfraredFrameSourceWatcher<D>::Stopped(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSourceWatcher, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher)->add_Stopped(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher> consume_Windows_Devices_Perception_IPerceptionInfraredFrameSourceWatcher<D>::Stopped(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSourceWatcher, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher>(this, &abi_t<Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher>::remove_Stopped, Stopped(handler));
}

template <typename D> void consume_Windows_Devices_Perception_IPerceptionInfraredFrameSourceWatcher<D>::Stopped(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher)->remove_Stopped(get_abi(token)));
}

template <typename D> event_token consume_Windows_Devices_Perception_IPerceptionInfraredFrameSourceWatcher<D>::EnumerationCompleted(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSourceWatcher, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher)->add_EnumerationCompleted(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher> consume_Windows_Devices_Perception_IPerceptionInfraredFrameSourceWatcher<D>::EnumerationCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSourceWatcher, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher>(this, &abi_t<Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher>::remove_EnumerationCompleted, EnumerationCompleted(handler));
}

template <typename D> void consume_Windows_Devices_Perception_IPerceptionInfraredFrameSourceWatcher<D>::EnumerationCompleted(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher)->remove_EnumerationCompleted(get_abi(token)));
}

template <typename D> Windows::Devices::Enumeration::DeviceWatcherStatus consume_Windows_Devices_Perception_IPerceptionInfraredFrameSourceWatcher<D>::Status() const
{
    Windows::Devices::Enumeration::DeviceWatcherStatus value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher)->get_Status(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Perception_IPerceptionInfraredFrameSourceWatcher<D>::Start() const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher)->Start());
}

template <typename D> void consume_Windows_Devices_Perception_IPerceptionInfraredFrameSourceWatcher<D>::Stop() const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher)->Stop());
}

template <typename D> Windows::Graphics::Imaging::BitmapPixelFormat consume_Windows_Devices_Perception_IPerceptionVideoProfile<D>::BitmapPixelFormat() const
{
    Windows::Graphics::Imaging::BitmapPixelFormat value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionVideoProfile)->get_BitmapPixelFormat(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Imaging::BitmapAlphaMode consume_Windows_Devices_Perception_IPerceptionVideoProfile<D>::BitmapAlphaMode() const
{
    Windows::Graphics::Imaging::BitmapAlphaMode value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionVideoProfile)->get_BitmapAlphaMode(put_abi(value)));
    return value;
}

template <typename D> int32_t consume_Windows_Devices_Perception_IPerceptionVideoProfile<D>::Width() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionVideoProfile)->get_Width(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Devices_Perception_IPerceptionVideoProfile<D>::Height() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionVideoProfile)->get_Height(&value));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Devices_Perception_IPerceptionVideoProfile<D>::FrameDuration() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionVideoProfile)->get_FrameDuration(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Devices_Perception_IPerceptionVideoProfile<D>::IsEqual(Windows::Devices::Perception::PerceptionVideoProfile const& other) const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionVideoProfile)->IsEqual(get_abi(other), &result));
    return result;
}

template <typename D>
struct produce<D, Windows::Devices::Perception::IKnownCameraIntrinsicsPropertiesStatics> : produce_base<D, Windows::Devices::Perception::IKnownCameraIntrinsicsPropertiesStatics>
{
    HRESULT __stdcall get_FocalLength(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().FocalLength());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PrincipalPoint(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().PrincipalPoint());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RadialDistortion(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().RadialDistortion());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TangentialDistortion(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().TangentialDistortion());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Perception::IKnownPerceptionColorFrameSourcePropertiesStatics> : produce_base<D, Windows::Devices::Perception::IKnownPerceptionColorFrameSourcePropertiesStatics>
{
    HRESULT __stdcall get_Exposure(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Exposure());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AutoExposureEnabled(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AutoExposureEnabled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ExposureCompensation(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ExposureCompensation());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Perception::IKnownPerceptionDepthFrameSourcePropertiesStatics> : produce_base<D, Windows::Devices::Perception::IKnownPerceptionDepthFrameSourcePropertiesStatics>
{
    HRESULT __stdcall get_MinDepth(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().MinDepth());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MaxDepth(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().MaxDepth());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Perception::IKnownPerceptionFrameSourcePropertiesStatics> : produce_base<D, Windows::Devices::Perception::IKnownPerceptionFrameSourcePropertiesStatics>
{
    HRESULT __stdcall get_Id(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PhysicalDeviceIds(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().PhysicalDeviceIds());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_FrameKind(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().FrameKind());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DeviceModelVersion(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DeviceModelVersion());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_EnclosureLocation(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().EnclosureLocation());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Perception::IKnownPerceptionFrameSourcePropertiesStatics2> : produce_base<D, Windows::Devices::Perception::IKnownPerceptionFrameSourcePropertiesStatics2>
{
    HRESULT __stdcall get_DeviceId(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DeviceId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Perception::IKnownPerceptionInfraredFrameSourcePropertiesStatics> : produce_base<D, Windows::Devices::Perception::IKnownPerceptionInfraredFrameSourcePropertiesStatics>
{
    HRESULT __stdcall get_Exposure(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Exposure());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AutoExposureEnabled(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AutoExposureEnabled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ExposureCompensation(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ExposureCompensation());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ActiveIlluminationEnabled(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ActiveIlluminationEnabled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AmbientSubtractionEnabled(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AmbientSubtractionEnabled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_StructureLightPatternEnabled(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().StructureLightPatternEnabled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_InterleavedIlluminationEnabled(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().InterleavedIlluminationEnabled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Perception::IKnownPerceptionVideoFrameSourcePropertiesStatics> : produce_base<D, Windows::Devices::Perception::IKnownPerceptionVideoFrameSourcePropertiesStatics>
{
    HRESULT __stdcall get_VideoProfile(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().VideoProfile());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedVideoProfiles(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().SupportedVideoProfiles());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AvailableVideoProfiles(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AvailableVideoProfiles());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsMirrored(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().IsMirrored());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CameraIntrinsics(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().CameraIntrinsics());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Perception::IKnownPerceptionVideoProfilePropertiesStatics> : produce_base<D, Windows::Devices::Perception::IKnownPerceptionVideoProfilePropertiesStatics>
{
    HRESULT __stdcall get_BitmapPixelFormat(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().BitmapPixelFormat());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_BitmapAlphaMode(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().BitmapAlphaMode());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Width(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Width());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Height(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Height());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_FrameDuration(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().FrameDuration());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Perception::IPerceptionColorFrame> : produce_base<D, Windows::Devices::Perception::IPerceptionColorFrame>
{
    HRESULT __stdcall get_VideoFrame(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::VideoFrame>(this->shim().VideoFrame());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Perception::IPerceptionColorFrameArrivedEventArgs> : produce_base<D, Windows::Devices::Perception::IPerceptionColorFrameArrivedEventArgs>
{
    HRESULT __stdcall get_RelativeTime(Windows::Foundation::TimeSpan* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().RelativeTime());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall TryOpenFrame(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Devices::Perception::PerceptionColorFrame>(this->shim().TryOpenFrame());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Perception::IPerceptionColorFrameReader> : produce_base<D, Windows::Devices::Perception::IPerceptionColorFrameReader>
{
    HRESULT __stdcall add_FrameArrived(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().FrameArrived(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameReader, Windows::Devices::Perception::PerceptionColorFrameArrivedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_FrameArrived(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FrameArrived(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Source(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Perception::PerceptionColorFrameSource>(this->shim().Source());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsPaused(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsPaused());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsPaused(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsPaused(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall TryReadLatestFrame(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Devices::Perception::PerceptionColorFrame>(this->shim().TryReadLatestFrame());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Perception::IPerceptionColorFrameSource> : produce_base<D, Windows::Devices::Perception::IPerceptionColorFrameSource>
{
    HRESULT __stdcall add_AvailableChanged(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().AvailableChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSource, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_AvailableChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AvailableChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_ActiveChanged(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().ActiveChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSource, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_ActiveChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ActiveChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_PropertiesChanged(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().PropertiesChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSource, Windows::Devices::Perception::PerceptionFrameSourcePropertiesChangedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_PropertiesChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PropertiesChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_VideoProfileChanged(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().VideoProfileChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSource, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_VideoProfileChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().VideoProfileChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_CameraIntrinsicsChanged(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().CameraIntrinsicsChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSource, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_CameraIntrinsicsChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CameraIntrinsicsChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Id(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DisplayName(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DisplayName());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DeviceKind(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DeviceKind());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Available(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Available());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Active(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Active());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsControlled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsControlled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Properties(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable>>(this->shim().Properties());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedVideoProfiles(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionVideoProfile>>(this->shim().SupportedVideoProfiles());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AvailableVideoProfiles(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionVideoProfile>>(this->shim().AvailableVideoProfiles());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_VideoProfile(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Perception::PerceptionVideoProfile>(this->shim().VideoProfile());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CameraIntrinsics(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Devices::Core::CameraIntrinsics>(this->shim().CameraIntrinsics());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall AcquireControlSession(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Perception::PerceptionControlSession>(this->shim().AcquireControlSession());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CanControlIndependentlyFrom(HSTRING targetId, bool* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().CanControlIndependentlyFrom(*reinterpret_cast<hstring const*>(&targetId)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall IsCorrelatedWith(HSTRING targetId, bool* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().IsCorrelatedWith(*reinterpret_cast<hstring const*>(&targetId)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall TryGetTransformTo(HSTRING targetId, Windows::Foundation::Numerics::float4x4* result, bool* hasResult) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *hasResult = detach_from<bool>(this->shim().TryGetTransformTo(*reinterpret_cast<hstring const*>(&targetId), *reinterpret_cast<Windows::Foundation::Numerics::float4x4*>(result)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall TryGetDepthCorrelatedCameraIntrinsicsAsync(void* correlatedDepthFrameSource, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionDepthCorrelatedCameraIntrinsics>>(this->shim().TryGetDepthCorrelatedCameraIntrinsicsAsync(*reinterpret_cast<Windows::Devices::Perception::PerceptionDepthFrameSource const*>(&correlatedDepthFrameSource)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall TryGetDepthCorrelatedCoordinateMapperAsync(HSTRING targetSourceId, void* correlatedDepthFrameSource, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionDepthCorrelatedCoordinateMapper>>(this->shim().TryGetDepthCorrelatedCoordinateMapperAsync(*reinterpret_cast<hstring const*>(&targetSourceId), *reinterpret_cast<Windows::Devices::Perception::PerceptionDepthFrameSource const*>(&correlatedDepthFrameSource)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall TrySetVideoProfileAsync(void* controlSession, void* profile, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionFrameSourcePropertyChangeResult>>(this->shim().TrySetVideoProfileAsync(*reinterpret_cast<Windows::Devices::Perception::PerceptionControlSession const*>(&controlSession), *reinterpret_cast<Windows::Devices::Perception::PerceptionVideoProfile const*>(&profile)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall OpenReader(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Devices::Perception::PerceptionColorFrameReader>(this->shim().OpenReader());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Perception::IPerceptionColorFrameSource2> : produce_base<D, Windows::Devices::Perception::IPerceptionColorFrameSource2>
{
    HRESULT __stdcall get_DeviceId(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DeviceId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Perception::IPerceptionColorFrameSourceAddedEventArgs> : produce_base<D, Windows::Devices::Perception::IPerceptionColorFrameSourceAddedEventArgs>
{
    HRESULT __stdcall get_FrameSource(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Perception::PerceptionColorFrameSource>(this->shim().FrameSource());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Perception::IPerceptionColorFrameSourceRemovedEventArgs> : produce_base<D, Windows::Devices::Perception::IPerceptionColorFrameSourceRemovedEventArgs>
{
    HRESULT __stdcall get_FrameSource(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Perception::PerceptionColorFrameSource>(this->shim().FrameSource());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Perception::IPerceptionColorFrameSourceStatics> : produce_base<D, Windows::Devices::Perception::IPerceptionColorFrameSourceStatics>
{
    HRESULT __stdcall CreateWatcher(void** watcher) noexcept final
    {
        try
        {
            *watcher = nullptr;
            typename D::abi_guard guard(this->shim());
            *watcher = detach_from<Windows::Devices::Perception::PerceptionColorFrameSourceWatcher>(this->shim().CreateWatcher());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FindAllAsync(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionColorFrameSource>>>(this->shim().FindAllAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FromIdAsync(HSTRING id, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionColorFrameSource>>(this->shim().FromIdAsync(*reinterpret_cast<hstring const*>(&id)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RequestAccessAsync(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionFrameSourceAccessStatus>>(this->shim().RequestAccessAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher> : produce_base<D, Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher>
{
    HRESULT __stdcall add_SourceAdded(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().SourceAdded(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSourceWatcher, Windows::Devices::Perception::PerceptionColorFrameSourceAddedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_SourceAdded(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SourceAdded(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_SourceRemoved(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().SourceRemoved(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSourceWatcher, Windows::Devices::Perception::PerceptionColorFrameSourceRemovedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_SourceRemoved(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SourceRemoved(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_Stopped(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().Stopped(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSourceWatcher, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_Stopped(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Stopped(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_EnumerationCompleted(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().EnumerationCompleted(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSourceWatcher, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_EnumerationCompleted(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EnumerationCompleted(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Status(Windows::Devices::Enumeration::DeviceWatcherStatus* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Enumeration::DeviceWatcherStatus>(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Start() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Start();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Stop() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Stop();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Perception::IPerceptionControlSession> : produce_base<D, Windows::Devices::Perception::IPerceptionControlSession>
{
    HRESULT __stdcall add_ControlLost(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().ControlLost(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionControlSession, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_ControlLost(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ControlLost(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall TrySetPropertyAsync(HSTRING name, void* value, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionFrameSourcePropertyChangeResult>>(this->shim().TrySetPropertyAsync(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Perception::IPerceptionDepthCorrelatedCameraIntrinsics> : produce_base<D, Windows::Devices::Perception::IPerceptionDepthCorrelatedCameraIntrinsics>
{
    HRESULT __stdcall UnprojectPixelAtCorrelatedDepth(Windows::Foundation::Point pixelCoordinate, void* depthFrame, Windows::Foundation::Numerics::float3* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::Numerics::float3>(this->shim().UnprojectPixelAtCorrelatedDepth(*reinterpret_cast<Windows::Foundation::Point const*>(&pixelCoordinate), *reinterpret_cast<Windows::Devices::Perception::PerceptionDepthFrame const*>(&depthFrame)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall UnprojectPixelsAtCorrelatedDepth(uint32_t __sourceCoordinatesSize, Windows::Foundation::Point* sourceCoordinates, void* depthFrame, uint32_t __resultsSize, Windows::Foundation::Numerics::float3* results) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UnprojectPixelsAtCorrelatedDepth(array_view<Windows::Foundation::Point const>(reinterpret_cast<Windows::Foundation::Point const *>(sourceCoordinates), reinterpret_cast<Windows::Foundation::Point const *>(sourceCoordinates) + __sourceCoordinatesSize), *reinterpret_cast<Windows::Devices::Perception::PerceptionDepthFrame const*>(&depthFrame), array_view<Windows::Foundation::Numerics::float3>(reinterpret_cast<Windows::Foundation::Numerics::float3*>(results), reinterpret_cast<Windows::Foundation::Numerics::float3*>(results) + __resultsSize));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall UnprojectRegionPixelsAtCorrelatedDepthAsync(Windows::Foundation::Rect region, void* depthFrame, uint32_t __resultsSize, Windows::Foundation::Numerics::float3* results, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncAction>(this->shim().UnprojectRegionPixelsAtCorrelatedDepthAsync(*reinterpret_cast<Windows::Foundation::Rect const*>(&region), *reinterpret_cast<Windows::Devices::Perception::PerceptionDepthFrame const*>(&depthFrame), array_view<Windows::Foundation::Numerics::float3>(reinterpret_cast<Windows::Foundation::Numerics::float3*>(results), reinterpret_cast<Windows::Foundation::Numerics::float3*>(results) + __resultsSize)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall UnprojectAllPixelsAtCorrelatedDepthAsync(void* depthFrame, uint32_t __resultsSize, Windows::Foundation::Numerics::float3* results, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncAction>(this->shim().UnprojectAllPixelsAtCorrelatedDepthAsync(*reinterpret_cast<Windows::Devices::Perception::PerceptionDepthFrame const*>(&depthFrame), array_view<Windows::Foundation::Numerics::float3>(reinterpret_cast<Windows::Foundation::Numerics::float3*>(results), reinterpret_cast<Windows::Foundation::Numerics::float3*>(results) + __resultsSize)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Perception::IPerceptionDepthCorrelatedCoordinateMapper> : produce_base<D, Windows::Devices::Perception::IPerceptionDepthCorrelatedCoordinateMapper>
{
    HRESULT __stdcall MapPixelToTarget(Windows::Foundation::Point sourcePixelCoordinate, void* depthFrame, Windows::Foundation::Point* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::Point>(this->shim().MapPixelToTarget(*reinterpret_cast<Windows::Foundation::Point const*>(&sourcePixelCoordinate), *reinterpret_cast<Windows::Devices::Perception::PerceptionDepthFrame const*>(&depthFrame)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall MapPixelsToTarget(uint32_t __sourceCoordinatesSize, Windows::Foundation::Point* sourceCoordinates, void* depthFrame, uint32_t __resultsSize, Windows::Foundation::Point* results) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MapPixelsToTarget(array_view<Windows::Foundation::Point const>(reinterpret_cast<Windows::Foundation::Point const *>(sourceCoordinates), reinterpret_cast<Windows::Foundation::Point const *>(sourceCoordinates) + __sourceCoordinatesSize), *reinterpret_cast<Windows::Devices::Perception::PerceptionDepthFrame const*>(&depthFrame), array_view<Windows::Foundation::Point>(reinterpret_cast<Windows::Foundation::Point*>(results), reinterpret_cast<Windows::Foundation::Point*>(results) + __resultsSize));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall MapRegionOfPixelsToTargetAsync(Windows::Foundation::Rect region, void* depthFrame, uint32_t __targetCoordinatesSize, Windows::Foundation::Point* targetCoordinates, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncAction>(this->shim().MapRegionOfPixelsToTargetAsync(*reinterpret_cast<Windows::Foundation::Rect const*>(&region), *reinterpret_cast<Windows::Devices::Perception::PerceptionDepthFrame const*>(&depthFrame), array_view<Windows::Foundation::Point>(reinterpret_cast<Windows::Foundation::Point*>(targetCoordinates), reinterpret_cast<Windows::Foundation::Point*>(targetCoordinates) + __targetCoordinatesSize)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall MapAllPixelsToTargetAsync(void* depthFrame, uint32_t __targetCoordinatesSize, Windows::Foundation::Point* targetCoordinates, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncAction>(this->shim().MapAllPixelsToTargetAsync(*reinterpret_cast<Windows::Devices::Perception::PerceptionDepthFrame const*>(&depthFrame), array_view<Windows::Foundation::Point>(reinterpret_cast<Windows::Foundation::Point*>(targetCoordinates), reinterpret_cast<Windows::Foundation::Point*>(targetCoordinates) + __targetCoordinatesSize)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Perception::IPerceptionDepthFrame> : produce_base<D, Windows::Devices::Perception::IPerceptionDepthFrame>
{
    HRESULT __stdcall get_VideoFrame(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::VideoFrame>(this->shim().VideoFrame());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Perception::IPerceptionDepthFrameArrivedEventArgs> : produce_base<D, Windows::Devices::Perception::IPerceptionDepthFrameArrivedEventArgs>
{
    HRESULT __stdcall get_RelativeTime(Windows::Foundation::TimeSpan* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().RelativeTime());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall TryOpenFrame(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Devices::Perception::PerceptionDepthFrame>(this->shim().TryOpenFrame());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Perception::IPerceptionDepthFrameReader> : produce_base<D, Windows::Devices::Perception::IPerceptionDepthFrameReader>
{
    HRESULT __stdcall add_FrameArrived(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().FrameArrived(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameReader, Windows::Devices::Perception::PerceptionDepthFrameArrivedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_FrameArrived(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FrameArrived(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Source(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Perception::PerceptionDepthFrameSource>(this->shim().Source());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsPaused(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsPaused());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsPaused(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsPaused(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall TryReadLatestFrame(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Devices::Perception::PerceptionDepthFrame>(this->shim().TryReadLatestFrame());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Perception::IPerceptionDepthFrameSource> : produce_base<D, Windows::Devices::Perception::IPerceptionDepthFrameSource>
{
    HRESULT __stdcall add_AvailableChanged(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().AvailableChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSource, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_AvailableChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AvailableChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_ActiveChanged(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().ActiveChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSource, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_ActiveChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ActiveChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_PropertiesChanged(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().PropertiesChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSource, Windows::Devices::Perception::PerceptionFrameSourcePropertiesChangedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_PropertiesChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PropertiesChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_VideoProfileChanged(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().VideoProfileChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSource, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_VideoProfileChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().VideoProfileChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_CameraIntrinsicsChanged(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().CameraIntrinsicsChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSource, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_CameraIntrinsicsChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CameraIntrinsicsChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Id(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DisplayName(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DisplayName());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DeviceKind(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DeviceKind());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Available(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Available());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Active(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Active());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsControlled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsControlled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Properties(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable>>(this->shim().Properties());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedVideoProfiles(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionVideoProfile>>(this->shim().SupportedVideoProfiles());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AvailableVideoProfiles(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionVideoProfile>>(this->shim().AvailableVideoProfiles());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_VideoProfile(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Perception::PerceptionVideoProfile>(this->shim().VideoProfile());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CameraIntrinsics(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Devices::Core::CameraIntrinsics>(this->shim().CameraIntrinsics());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall AcquireControlSession(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Devices::Perception::PerceptionControlSession>(this->shim().AcquireControlSession());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CanControlIndependentlyFrom(HSTRING targetId, bool* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().CanControlIndependentlyFrom(*reinterpret_cast<hstring const*>(&targetId)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall IsCorrelatedWith(HSTRING targetId, bool* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().IsCorrelatedWith(*reinterpret_cast<hstring const*>(&targetId)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall TryGetTransformTo(HSTRING targetId, Windows::Foundation::Numerics::float4x4* result, bool* hasResult) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *hasResult = detach_from<bool>(this->shim().TryGetTransformTo(*reinterpret_cast<hstring const*>(&targetId), *reinterpret_cast<Windows::Foundation::Numerics::float4x4*>(result)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall TryGetDepthCorrelatedCameraIntrinsicsAsync(void* target, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionDepthCorrelatedCameraIntrinsics>>(this->shim().TryGetDepthCorrelatedCameraIntrinsicsAsync(*reinterpret_cast<Windows::Devices::Perception::PerceptionDepthFrameSource const*>(&target)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall TryGetDepthCorrelatedCoordinateMapperAsync(HSTRING targetId, void* depthFrameSourceToMapWith, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionDepthCorrelatedCoordinateMapper>>(this->shim().TryGetDepthCorrelatedCoordinateMapperAsync(*reinterpret_cast<hstring const*>(&targetId), *reinterpret_cast<Windows::Devices::Perception::PerceptionDepthFrameSource const*>(&depthFrameSourceToMapWith)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall TrySetVideoProfileAsync(void* controlSession, void* profile, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionFrameSourcePropertyChangeResult>>(this->shim().TrySetVideoProfileAsync(*reinterpret_cast<Windows::Devices::Perception::PerceptionControlSession const*>(&controlSession), *reinterpret_cast<Windows::Devices::Perception::PerceptionVideoProfile const*>(&profile)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall OpenReader(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Devices::Perception::PerceptionDepthFrameReader>(this->shim().OpenReader());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Perception::IPerceptionDepthFrameSource2> : produce_base<D, Windows::Devices::Perception::IPerceptionDepthFrameSource2>
{
    HRESULT __stdcall get_DeviceId(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DeviceId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Perception::IPerceptionDepthFrameSourceAddedEventArgs> : produce_base<D, Windows::Devices::Perception::IPerceptionDepthFrameSourceAddedEventArgs>
{
    HRESULT __stdcall get_FrameSource(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Perception::PerceptionDepthFrameSource>(this->shim().FrameSource());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Perception::IPerceptionDepthFrameSourceRemovedEventArgs> : produce_base<D, Windows::Devices::Perception::IPerceptionDepthFrameSourceRemovedEventArgs>
{
    HRESULT __stdcall get_FrameSource(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Perception::PerceptionDepthFrameSource>(this->shim().FrameSource());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Perception::IPerceptionDepthFrameSourceStatics> : produce_base<D, Windows::Devices::Perception::IPerceptionDepthFrameSourceStatics>
{
    HRESULT __stdcall CreateWatcher(void** watcher) noexcept final
    {
        try
        {
            *watcher = nullptr;
            typename D::abi_guard guard(this->shim());
            *watcher = detach_from<Windows::Devices::Perception::PerceptionDepthFrameSourceWatcher>(this->shim().CreateWatcher());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FindAllAsync(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionDepthFrameSource>>>(this->shim().FindAllAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FromIdAsync(HSTRING id, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionDepthFrameSource>>(this->shim().FromIdAsync(*reinterpret_cast<hstring const*>(&id)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RequestAccessAsync(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionFrameSourceAccessStatus>>(this->shim().RequestAccessAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher> : produce_base<D, Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher>
{
    HRESULT __stdcall add_SourceAdded(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().SourceAdded(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSourceWatcher, Windows::Devices::Perception::PerceptionDepthFrameSourceAddedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_SourceAdded(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SourceAdded(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_SourceRemoved(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().SourceRemoved(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSourceWatcher, Windows::Devices::Perception::PerceptionDepthFrameSourceRemovedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_SourceRemoved(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SourceRemoved(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_Stopped(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().Stopped(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSourceWatcher, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_Stopped(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Stopped(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_EnumerationCompleted(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().EnumerationCompleted(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSourceWatcher, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_EnumerationCompleted(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EnumerationCompleted(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Status(Windows::Devices::Enumeration::DeviceWatcherStatus* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Enumeration::DeviceWatcherStatus>(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Start() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Start();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Stop() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Stop();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Perception::IPerceptionFrameSourcePropertiesChangedEventArgs> : produce_base<D, Windows::Devices::Perception::IPerceptionFrameSourcePropertiesChangedEventArgs>
{
    HRESULT __stdcall get_CollectionChange(Windows::Foundation::Collections::CollectionChange* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::CollectionChange>(this->shim().CollectionChange());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Key(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Key());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Perception::IPerceptionFrameSourcePropertyChangeResult> : produce_base<D, Windows::Devices::Perception::IPerceptionFrameSourcePropertyChangeResult>
{
    HRESULT __stdcall get_Status(Windows::Devices::Perception::PerceptionFrameSourcePropertyChangeStatus* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Perception::PerceptionFrameSourcePropertyChangeStatus>(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_NewValue(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IInspectable>(this->shim().NewValue());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Perception::IPerceptionInfraredFrame> : produce_base<D, Windows::Devices::Perception::IPerceptionInfraredFrame>
{
    HRESULT __stdcall get_VideoFrame(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::VideoFrame>(this->shim().VideoFrame());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Perception::IPerceptionInfraredFrameArrivedEventArgs> : produce_base<D, Windows::Devices::Perception::IPerceptionInfraredFrameArrivedEventArgs>
{
    HRESULT __stdcall get_RelativeTime(Windows::Foundation::TimeSpan* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().RelativeTime());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall TryOpenFrame(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Devices::Perception::PerceptionInfraredFrame>(this->shim().TryOpenFrame());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Perception::IPerceptionInfraredFrameReader> : produce_base<D, Windows::Devices::Perception::IPerceptionInfraredFrameReader>
{
    HRESULT __stdcall add_FrameArrived(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().FrameArrived(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameReader, Windows::Devices::Perception::PerceptionInfraredFrameArrivedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_FrameArrived(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FrameArrived(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Source(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Perception::PerceptionInfraredFrameSource>(this->shim().Source());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsPaused(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsPaused());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsPaused(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsPaused(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall TryReadLatestFrame(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Devices::Perception::PerceptionInfraredFrame>(this->shim().TryReadLatestFrame());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Perception::IPerceptionInfraredFrameSource> : produce_base<D, Windows::Devices::Perception::IPerceptionInfraredFrameSource>
{
    HRESULT __stdcall add_AvailableChanged(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().AvailableChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSource, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_AvailableChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AvailableChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_ActiveChanged(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().ActiveChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSource, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_ActiveChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ActiveChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_PropertiesChanged(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().PropertiesChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSource, Windows::Devices::Perception::PerceptionFrameSourcePropertiesChangedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_PropertiesChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PropertiesChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_VideoProfileChanged(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().VideoProfileChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSource, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_VideoProfileChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().VideoProfileChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_CameraIntrinsicsChanged(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().CameraIntrinsicsChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSource, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_CameraIntrinsicsChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CameraIntrinsicsChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Id(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DisplayName(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DisplayName());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DeviceKind(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DeviceKind());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Available(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Available());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Active(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Active());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsControlled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsControlled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Properties(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable>>(this->shim().Properties());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedVideoProfiles(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionVideoProfile>>(this->shim().SupportedVideoProfiles());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AvailableVideoProfiles(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionVideoProfile>>(this->shim().AvailableVideoProfiles());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_VideoProfile(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Perception::PerceptionVideoProfile>(this->shim().VideoProfile());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CameraIntrinsics(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Media::Devices::Core::CameraIntrinsics>(this->shim().CameraIntrinsics());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall AcquireControlSession(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Devices::Perception::PerceptionControlSession>(this->shim().AcquireControlSession());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CanControlIndependentlyFrom(HSTRING targetId, bool* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().CanControlIndependentlyFrom(*reinterpret_cast<hstring const*>(&targetId)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall IsCorrelatedWith(HSTRING targetId, bool* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().IsCorrelatedWith(*reinterpret_cast<hstring const*>(&targetId)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall TryGetTransformTo(HSTRING targetId, Windows::Foundation::Numerics::float4x4* result, bool* hasResult) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *hasResult = detach_from<bool>(this->shim().TryGetTransformTo(*reinterpret_cast<hstring const*>(&targetId), *reinterpret_cast<Windows::Foundation::Numerics::float4x4*>(result)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall TryGetDepthCorrelatedCameraIntrinsicsAsync(void* target, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionDepthCorrelatedCameraIntrinsics>>(this->shim().TryGetDepthCorrelatedCameraIntrinsicsAsync(*reinterpret_cast<Windows::Devices::Perception::PerceptionDepthFrameSource const*>(&target)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall TryGetDepthCorrelatedCoordinateMapperAsync(HSTRING targetId, void* depthFrameSourceToMapWith, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionDepthCorrelatedCoordinateMapper>>(this->shim().TryGetDepthCorrelatedCoordinateMapperAsync(*reinterpret_cast<hstring const*>(&targetId), *reinterpret_cast<Windows::Devices::Perception::PerceptionDepthFrameSource const*>(&depthFrameSourceToMapWith)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall TrySetVideoProfileAsync(void* controlSession, void* profile, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionFrameSourcePropertyChangeResult>>(this->shim().TrySetVideoProfileAsync(*reinterpret_cast<Windows::Devices::Perception::PerceptionControlSession const*>(&controlSession), *reinterpret_cast<Windows::Devices::Perception::PerceptionVideoProfile const*>(&profile)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall OpenReader(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Devices::Perception::PerceptionInfraredFrameReader>(this->shim().OpenReader());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Perception::IPerceptionInfraredFrameSource2> : produce_base<D, Windows::Devices::Perception::IPerceptionInfraredFrameSource2>
{
    HRESULT __stdcall get_DeviceId(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DeviceId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Perception::IPerceptionInfraredFrameSourceAddedEventArgs> : produce_base<D, Windows::Devices::Perception::IPerceptionInfraredFrameSourceAddedEventArgs>
{
    HRESULT __stdcall get_FrameSource(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Perception::PerceptionInfraredFrameSource>(this->shim().FrameSource());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Perception::IPerceptionInfraredFrameSourceRemovedEventArgs> : produce_base<D, Windows::Devices::Perception::IPerceptionInfraredFrameSourceRemovedEventArgs>
{
    HRESULT __stdcall get_FrameSource(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Perception::PerceptionInfraredFrameSource>(this->shim().FrameSource());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Perception::IPerceptionInfraredFrameSourceStatics> : produce_base<D, Windows::Devices::Perception::IPerceptionInfraredFrameSourceStatics>
{
    HRESULT __stdcall CreateWatcher(void** watcher) noexcept final
    {
        try
        {
            *watcher = nullptr;
            typename D::abi_guard guard(this->shim());
            *watcher = detach_from<Windows::Devices::Perception::PerceptionInfraredFrameSourceWatcher>(this->shim().CreateWatcher());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FindAllAsync(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionInfraredFrameSource>>>(this->shim().FindAllAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FromIdAsync(HSTRING id, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionInfraredFrameSource>>(this->shim().FromIdAsync(*reinterpret_cast<hstring const*>(&id)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RequestAccessAsync(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionFrameSourceAccessStatus>>(this->shim().RequestAccessAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher> : produce_base<D, Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher>
{
    HRESULT __stdcall add_SourceAdded(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().SourceAdded(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSourceWatcher, Windows::Devices::Perception::PerceptionInfraredFrameSourceAddedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_SourceAdded(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SourceAdded(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_SourceRemoved(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().SourceRemoved(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSourceWatcher, Windows::Devices::Perception::PerceptionInfraredFrameSourceRemovedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_SourceRemoved(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SourceRemoved(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_Stopped(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().Stopped(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSourceWatcher, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_Stopped(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Stopped(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_EnumerationCompleted(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().EnumerationCompleted(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSourceWatcher, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_EnumerationCompleted(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EnumerationCompleted(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Status(Windows::Devices::Enumeration::DeviceWatcherStatus* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Enumeration::DeviceWatcherStatus>(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Start() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Start();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Stop() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Stop();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Perception::IPerceptionVideoProfile> : produce_base<D, Windows::Devices::Perception::IPerceptionVideoProfile>
{
    HRESULT __stdcall get_BitmapPixelFormat(Windows::Graphics::Imaging::BitmapPixelFormat* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Imaging::BitmapPixelFormat>(this->shim().BitmapPixelFormat());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_BitmapAlphaMode(Windows::Graphics::Imaging::BitmapAlphaMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Imaging::BitmapAlphaMode>(this->shim().BitmapAlphaMode());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Width(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().Width());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Height(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().Height());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_FrameDuration(Windows::Foundation::TimeSpan* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().FrameDuration());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall IsEqual(void* other, bool* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().IsEqual(*reinterpret_cast<Windows::Devices::Perception::PerceptionVideoProfile const*>(&other)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Devices::Perception {

inline hstring KnownCameraIntrinsicsProperties::FocalLength()
{
    return get_activation_factory<KnownCameraIntrinsicsProperties, Windows::Devices::Perception::IKnownCameraIntrinsicsPropertiesStatics>().FocalLength();
}

inline hstring KnownCameraIntrinsicsProperties::PrincipalPoint()
{
    return get_activation_factory<KnownCameraIntrinsicsProperties, Windows::Devices::Perception::IKnownCameraIntrinsicsPropertiesStatics>().PrincipalPoint();
}

inline hstring KnownCameraIntrinsicsProperties::RadialDistortion()
{
    return get_activation_factory<KnownCameraIntrinsicsProperties, Windows::Devices::Perception::IKnownCameraIntrinsicsPropertiesStatics>().RadialDistortion();
}

inline hstring KnownCameraIntrinsicsProperties::TangentialDistortion()
{
    return get_activation_factory<KnownCameraIntrinsicsProperties, Windows::Devices::Perception::IKnownCameraIntrinsicsPropertiesStatics>().TangentialDistortion();
}

inline hstring KnownPerceptionColorFrameSourceProperties::Exposure()
{
    return get_activation_factory<KnownPerceptionColorFrameSourceProperties, Windows::Devices::Perception::IKnownPerceptionColorFrameSourcePropertiesStatics>().Exposure();
}

inline hstring KnownPerceptionColorFrameSourceProperties::AutoExposureEnabled()
{
    return get_activation_factory<KnownPerceptionColorFrameSourceProperties, Windows::Devices::Perception::IKnownPerceptionColorFrameSourcePropertiesStatics>().AutoExposureEnabled();
}

inline hstring KnownPerceptionColorFrameSourceProperties::ExposureCompensation()
{
    return get_activation_factory<KnownPerceptionColorFrameSourceProperties, Windows::Devices::Perception::IKnownPerceptionColorFrameSourcePropertiesStatics>().ExposureCompensation();
}

inline hstring KnownPerceptionDepthFrameSourceProperties::MinDepth()
{
    return get_activation_factory<KnownPerceptionDepthFrameSourceProperties, Windows::Devices::Perception::IKnownPerceptionDepthFrameSourcePropertiesStatics>().MinDepth();
}

inline hstring KnownPerceptionDepthFrameSourceProperties::MaxDepth()
{
    return get_activation_factory<KnownPerceptionDepthFrameSourceProperties, Windows::Devices::Perception::IKnownPerceptionDepthFrameSourcePropertiesStatics>().MaxDepth();
}

inline hstring KnownPerceptionFrameSourceProperties::Id()
{
    return get_activation_factory<KnownPerceptionFrameSourceProperties, Windows::Devices::Perception::IKnownPerceptionFrameSourcePropertiesStatics>().Id();
}

inline hstring KnownPerceptionFrameSourceProperties::PhysicalDeviceIds()
{
    return get_activation_factory<KnownPerceptionFrameSourceProperties, Windows::Devices::Perception::IKnownPerceptionFrameSourcePropertiesStatics>().PhysicalDeviceIds();
}

inline hstring KnownPerceptionFrameSourceProperties::FrameKind()
{
    return get_activation_factory<KnownPerceptionFrameSourceProperties, Windows::Devices::Perception::IKnownPerceptionFrameSourcePropertiesStatics>().FrameKind();
}

inline hstring KnownPerceptionFrameSourceProperties::DeviceModelVersion()
{
    return get_activation_factory<KnownPerceptionFrameSourceProperties, Windows::Devices::Perception::IKnownPerceptionFrameSourcePropertiesStatics>().DeviceModelVersion();
}

inline hstring KnownPerceptionFrameSourceProperties::EnclosureLocation()
{
    return get_activation_factory<KnownPerceptionFrameSourceProperties, Windows::Devices::Perception::IKnownPerceptionFrameSourcePropertiesStatics>().EnclosureLocation();
}

inline hstring KnownPerceptionFrameSourceProperties::DeviceId()
{
    return get_activation_factory<KnownPerceptionFrameSourceProperties, Windows::Devices::Perception::IKnownPerceptionFrameSourcePropertiesStatics2>().DeviceId();
}

inline hstring KnownPerceptionInfraredFrameSourceProperties::Exposure()
{
    return get_activation_factory<KnownPerceptionInfraredFrameSourceProperties, Windows::Devices::Perception::IKnownPerceptionInfraredFrameSourcePropertiesStatics>().Exposure();
}

inline hstring KnownPerceptionInfraredFrameSourceProperties::AutoExposureEnabled()
{
    return get_activation_factory<KnownPerceptionInfraredFrameSourceProperties, Windows::Devices::Perception::IKnownPerceptionInfraredFrameSourcePropertiesStatics>().AutoExposureEnabled();
}

inline hstring KnownPerceptionInfraredFrameSourceProperties::ExposureCompensation()
{
    return get_activation_factory<KnownPerceptionInfraredFrameSourceProperties, Windows::Devices::Perception::IKnownPerceptionInfraredFrameSourcePropertiesStatics>().ExposureCompensation();
}

inline hstring KnownPerceptionInfraredFrameSourceProperties::ActiveIlluminationEnabled()
{
    return get_activation_factory<KnownPerceptionInfraredFrameSourceProperties, Windows::Devices::Perception::IKnownPerceptionInfraredFrameSourcePropertiesStatics>().ActiveIlluminationEnabled();
}

inline hstring KnownPerceptionInfraredFrameSourceProperties::AmbientSubtractionEnabled()
{
    return get_activation_factory<KnownPerceptionInfraredFrameSourceProperties, Windows::Devices::Perception::IKnownPerceptionInfraredFrameSourcePropertiesStatics>().AmbientSubtractionEnabled();
}

inline hstring KnownPerceptionInfraredFrameSourceProperties::StructureLightPatternEnabled()
{
    return get_activation_factory<KnownPerceptionInfraredFrameSourceProperties, Windows::Devices::Perception::IKnownPerceptionInfraredFrameSourcePropertiesStatics>().StructureLightPatternEnabled();
}

inline hstring KnownPerceptionInfraredFrameSourceProperties::InterleavedIlluminationEnabled()
{
    return get_activation_factory<KnownPerceptionInfraredFrameSourceProperties, Windows::Devices::Perception::IKnownPerceptionInfraredFrameSourcePropertiesStatics>().InterleavedIlluminationEnabled();
}

inline hstring KnownPerceptionVideoFrameSourceProperties::VideoProfile()
{
    return get_activation_factory<KnownPerceptionVideoFrameSourceProperties, Windows::Devices::Perception::IKnownPerceptionVideoFrameSourcePropertiesStatics>().VideoProfile();
}

inline hstring KnownPerceptionVideoFrameSourceProperties::SupportedVideoProfiles()
{
    return get_activation_factory<KnownPerceptionVideoFrameSourceProperties, Windows::Devices::Perception::IKnownPerceptionVideoFrameSourcePropertiesStatics>().SupportedVideoProfiles();
}

inline hstring KnownPerceptionVideoFrameSourceProperties::AvailableVideoProfiles()
{
    return get_activation_factory<KnownPerceptionVideoFrameSourceProperties, Windows::Devices::Perception::IKnownPerceptionVideoFrameSourcePropertiesStatics>().AvailableVideoProfiles();
}

inline hstring KnownPerceptionVideoFrameSourceProperties::IsMirrored()
{
    return get_activation_factory<KnownPerceptionVideoFrameSourceProperties, Windows::Devices::Perception::IKnownPerceptionVideoFrameSourcePropertiesStatics>().IsMirrored();
}

inline hstring KnownPerceptionVideoFrameSourceProperties::CameraIntrinsics()
{
    return get_activation_factory<KnownPerceptionVideoFrameSourceProperties, Windows::Devices::Perception::IKnownPerceptionVideoFrameSourcePropertiesStatics>().CameraIntrinsics();
}

inline hstring KnownPerceptionVideoProfileProperties::BitmapPixelFormat()
{
    return get_activation_factory<KnownPerceptionVideoProfileProperties, Windows::Devices::Perception::IKnownPerceptionVideoProfilePropertiesStatics>().BitmapPixelFormat();
}

inline hstring KnownPerceptionVideoProfileProperties::BitmapAlphaMode()
{
    return get_activation_factory<KnownPerceptionVideoProfileProperties, Windows::Devices::Perception::IKnownPerceptionVideoProfilePropertiesStatics>().BitmapAlphaMode();
}

inline hstring KnownPerceptionVideoProfileProperties::Width()
{
    return get_activation_factory<KnownPerceptionVideoProfileProperties, Windows::Devices::Perception::IKnownPerceptionVideoProfilePropertiesStatics>().Width();
}

inline hstring KnownPerceptionVideoProfileProperties::Height()
{
    return get_activation_factory<KnownPerceptionVideoProfileProperties, Windows::Devices::Perception::IKnownPerceptionVideoProfilePropertiesStatics>().Height();
}

inline hstring KnownPerceptionVideoProfileProperties::FrameDuration()
{
    return get_activation_factory<KnownPerceptionVideoProfileProperties, Windows::Devices::Perception::IKnownPerceptionVideoProfilePropertiesStatics>().FrameDuration();
}

inline Windows::Devices::Perception::PerceptionColorFrameSourceWatcher PerceptionColorFrameSource::CreateWatcher()
{
    return get_activation_factory<PerceptionColorFrameSource, Windows::Devices::Perception::IPerceptionColorFrameSourceStatics>().CreateWatcher();
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionColorFrameSource>> PerceptionColorFrameSource::FindAllAsync()
{
    return get_activation_factory<PerceptionColorFrameSource, Windows::Devices::Perception::IPerceptionColorFrameSourceStatics>().FindAllAsync();
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionColorFrameSource> PerceptionColorFrameSource::FromIdAsync(param::hstring const& id)
{
    return get_activation_factory<PerceptionColorFrameSource, Windows::Devices::Perception::IPerceptionColorFrameSourceStatics>().FromIdAsync(id);
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionFrameSourceAccessStatus> PerceptionColorFrameSource::RequestAccessAsync()
{
    return get_activation_factory<PerceptionColorFrameSource, Windows::Devices::Perception::IPerceptionColorFrameSourceStatics>().RequestAccessAsync();
}

inline Windows::Devices::Perception::PerceptionDepthFrameSourceWatcher PerceptionDepthFrameSource::CreateWatcher()
{
    return get_activation_factory<PerceptionDepthFrameSource, Windows::Devices::Perception::IPerceptionDepthFrameSourceStatics>().CreateWatcher();
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionDepthFrameSource>> PerceptionDepthFrameSource::FindAllAsync()
{
    return get_activation_factory<PerceptionDepthFrameSource, Windows::Devices::Perception::IPerceptionDepthFrameSourceStatics>().FindAllAsync();
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionDepthFrameSource> PerceptionDepthFrameSource::FromIdAsync(param::hstring const& id)
{
    return get_activation_factory<PerceptionDepthFrameSource, Windows::Devices::Perception::IPerceptionDepthFrameSourceStatics>().FromIdAsync(id);
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionFrameSourceAccessStatus> PerceptionDepthFrameSource::RequestAccessAsync()
{
    return get_activation_factory<PerceptionDepthFrameSource, Windows::Devices::Perception::IPerceptionDepthFrameSourceStatics>().RequestAccessAsync();
}

inline Windows::Devices::Perception::PerceptionInfraredFrameSourceWatcher PerceptionInfraredFrameSource::CreateWatcher()
{
    return get_activation_factory<PerceptionInfraredFrameSource, Windows::Devices::Perception::IPerceptionInfraredFrameSourceStatics>().CreateWatcher();
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionInfraredFrameSource>> PerceptionInfraredFrameSource::FindAllAsync()
{
    return get_activation_factory<PerceptionInfraredFrameSource, Windows::Devices::Perception::IPerceptionInfraredFrameSourceStatics>().FindAllAsync();
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionInfraredFrameSource> PerceptionInfraredFrameSource::FromIdAsync(param::hstring const& id)
{
    return get_activation_factory<PerceptionInfraredFrameSource, Windows::Devices::Perception::IPerceptionInfraredFrameSourceStatics>().FromIdAsync(id);
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionFrameSourceAccessStatus> PerceptionInfraredFrameSource::RequestAccessAsync()
{
    return get_activation_factory<PerceptionInfraredFrameSource, Windows::Devices::Perception::IPerceptionInfraredFrameSourceStatics>().RequestAccessAsync();
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Devices::Perception::IKnownCameraIntrinsicsPropertiesStatics> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::IKnownCameraIntrinsicsPropertiesStatics> {};
template<> struct hash<winrt::Windows::Devices::Perception::IKnownPerceptionColorFrameSourcePropertiesStatics> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::IKnownPerceptionColorFrameSourcePropertiesStatics> {};
template<> struct hash<winrt::Windows::Devices::Perception::IKnownPerceptionDepthFrameSourcePropertiesStatics> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::IKnownPerceptionDepthFrameSourcePropertiesStatics> {};
template<> struct hash<winrt::Windows::Devices::Perception::IKnownPerceptionFrameSourcePropertiesStatics> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::IKnownPerceptionFrameSourcePropertiesStatics> {};
template<> struct hash<winrt::Windows::Devices::Perception::IKnownPerceptionFrameSourcePropertiesStatics2> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::IKnownPerceptionFrameSourcePropertiesStatics2> {};
template<> struct hash<winrt::Windows::Devices::Perception::IKnownPerceptionInfraredFrameSourcePropertiesStatics> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::IKnownPerceptionInfraredFrameSourcePropertiesStatics> {};
template<> struct hash<winrt::Windows::Devices::Perception::IKnownPerceptionVideoFrameSourcePropertiesStatics> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::IKnownPerceptionVideoFrameSourcePropertiesStatics> {};
template<> struct hash<winrt::Windows::Devices::Perception::IKnownPerceptionVideoProfilePropertiesStatics> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::IKnownPerceptionVideoProfilePropertiesStatics> {};
template<> struct hash<winrt::Windows::Devices::Perception::IPerceptionColorFrame> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::IPerceptionColorFrame> {};
template<> struct hash<winrt::Windows::Devices::Perception::IPerceptionColorFrameArrivedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::IPerceptionColorFrameArrivedEventArgs> {};
template<> struct hash<winrt::Windows::Devices::Perception::IPerceptionColorFrameReader> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::IPerceptionColorFrameReader> {};
template<> struct hash<winrt::Windows::Devices::Perception::IPerceptionColorFrameSource> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::IPerceptionColorFrameSource> {};
template<> struct hash<winrt::Windows::Devices::Perception::IPerceptionColorFrameSource2> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::IPerceptionColorFrameSource2> {};
template<> struct hash<winrt::Windows::Devices::Perception::IPerceptionColorFrameSourceAddedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::IPerceptionColorFrameSourceAddedEventArgs> {};
template<> struct hash<winrt::Windows::Devices::Perception::IPerceptionColorFrameSourceRemovedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::IPerceptionColorFrameSourceRemovedEventArgs> {};
template<> struct hash<winrt::Windows::Devices::Perception::IPerceptionColorFrameSourceStatics> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::IPerceptionColorFrameSourceStatics> {};
template<> struct hash<winrt::Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher> {};
template<> struct hash<winrt::Windows::Devices::Perception::IPerceptionControlSession> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::IPerceptionControlSession> {};
template<> struct hash<winrt::Windows::Devices::Perception::IPerceptionDepthCorrelatedCameraIntrinsics> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::IPerceptionDepthCorrelatedCameraIntrinsics> {};
template<> struct hash<winrt::Windows::Devices::Perception::IPerceptionDepthCorrelatedCoordinateMapper> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::IPerceptionDepthCorrelatedCoordinateMapper> {};
template<> struct hash<winrt::Windows::Devices::Perception::IPerceptionDepthFrame> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::IPerceptionDepthFrame> {};
template<> struct hash<winrt::Windows::Devices::Perception::IPerceptionDepthFrameArrivedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::IPerceptionDepthFrameArrivedEventArgs> {};
template<> struct hash<winrt::Windows::Devices::Perception::IPerceptionDepthFrameReader> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::IPerceptionDepthFrameReader> {};
template<> struct hash<winrt::Windows::Devices::Perception::IPerceptionDepthFrameSource> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::IPerceptionDepthFrameSource> {};
template<> struct hash<winrt::Windows::Devices::Perception::IPerceptionDepthFrameSource2> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::IPerceptionDepthFrameSource2> {};
template<> struct hash<winrt::Windows::Devices::Perception::IPerceptionDepthFrameSourceAddedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::IPerceptionDepthFrameSourceAddedEventArgs> {};
template<> struct hash<winrt::Windows::Devices::Perception::IPerceptionDepthFrameSourceRemovedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::IPerceptionDepthFrameSourceRemovedEventArgs> {};
template<> struct hash<winrt::Windows::Devices::Perception::IPerceptionDepthFrameSourceStatics> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::IPerceptionDepthFrameSourceStatics> {};
template<> struct hash<winrt::Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher> {};
template<> struct hash<winrt::Windows::Devices::Perception::IPerceptionFrameSourcePropertiesChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::IPerceptionFrameSourcePropertiesChangedEventArgs> {};
template<> struct hash<winrt::Windows::Devices::Perception::IPerceptionFrameSourcePropertyChangeResult> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::IPerceptionFrameSourcePropertyChangeResult> {};
template<> struct hash<winrt::Windows::Devices::Perception::IPerceptionInfraredFrame> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::IPerceptionInfraredFrame> {};
template<> struct hash<winrt::Windows::Devices::Perception::IPerceptionInfraredFrameArrivedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::IPerceptionInfraredFrameArrivedEventArgs> {};
template<> struct hash<winrt::Windows::Devices::Perception::IPerceptionInfraredFrameReader> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::IPerceptionInfraredFrameReader> {};
template<> struct hash<winrt::Windows::Devices::Perception::IPerceptionInfraredFrameSource> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::IPerceptionInfraredFrameSource> {};
template<> struct hash<winrt::Windows::Devices::Perception::IPerceptionInfraredFrameSource2> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::IPerceptionInfraredFrameSource2> {};
template<> struct hash<winrt::Windows::Devices::Perception::IPerceptionInfraredFrameSourceAddedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::IPerceptionInfraredFrameSourceAddedEventArgs> {};
template<> struct hash<winrt::Windows::Devices::Perception::IPerceptionInfraredFrameSourceRemovedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::IPerceptionInfraredFrameSourceRemovedEventArgs> {};
template<> struct hash<winrt::Windows::Devices::Perception::IPerceptionInfraredFrameSourceStatics> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::IPerceptionInfraredFrameSourceStatics> {};
template<> struct hash<winrt::Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher> {};
template<> struct hash<winrt::Windows::Devices::Perception::IPerceptionVideoProfile> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::IPerceptionVideoProfile> {};
template<> struct hash<winrt::Windows::Devices::Perception::KnownCameraIntrinsicsProperties> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::KnownCameraIntrinsicsProperties> {};
template<> struct hash<winrt::Windows::Devices::Perception::KnownPerceptionColorFrameSourceProperties> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::KnownPerceptionColorFrameSourceProperties> {};
template<> struct hash<winrt::Windows::Devices::Perception::KnownPerceptionDepthFrameSourceProperties> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::KnownPerceptionDepthFrameSourceProperties> {};
template<> struct hash<winrt::Windows::Devices::Perception::KnownPerceptionFrameSourceProperties> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::KnownPerceptionFrameSourceProperties> {};
template<> struct hash<winrt::Windows::Devices::Perception::KnownPerceptionInfraredFrameSourceProperties> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::KnownPerceptionInfraredFrameSourceProperties> {};
template<> struct hash<winrt::Windows::Devices::Perception::KnownPerceptionVideoFrameSourceProperties> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::KnownPerceptionVideoFrameSourceProperties> {};
template<> struct hash<winrt::Windows::Devices::Perception::KnownPerceptionVideoProfileProperties> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::KnownPerceptionVideoProfileProperties> {};
template<> struct hash<winrt::Windows::Devices::Perception::PerceptionColorFrame> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::PerceptionColorFrame> {};
template<> struct hash<winrt::Windows::Devices::Perception::PerceptionColorFrameArrivedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::PerceptionColorFrameArrivedEventArgs> {};
template<> struct hash<winrt::Windows::Devices::Perception::PerceptionColorFrameReader> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::PerceptionColorFrameReader> {};
template<> struct hash<winrt::Windows::Devices::Perception::PerceptionColorFrameSource> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::PerceptionColorFrameSource> {};
template<> struct hash<winrt::Windows::Devices::Perception::PerceptionColorFrameSourceAddedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::PerceptionColorFrameSourceAddedEventArgs> {};
template<> struct hash<winrt::Windows::Devices::Perception::PerceptionColorFrameSourceRemovedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::PerceptionColorFrameSourceRemovedEventArgs> {};
template<> struct hash<winrt::Windows::Devices::Perception::PerceptionColorFrameSourceWatcher> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::PerceptionColorFrameSourceWatcher> {};
template<> struct hash<winrt::Windows::Devices::Perception::PerceptionControlSession> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::PerceptionControlSession> {};
template<> struct hash<winrt::Windows::Devices::Perception::PerceptionDepthCorrelatedCameraIntrinsics> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::PerceptionDepthCorrelatedCameraIntrinsics> {};
template<> struct hash<winrt::Windows::Devices::Perception::PerceptionDepthCorrelatedCoordinateMapper> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::PerceptionDepthCorrelatedCoordinateMapper> {};
template<> struct hash<winrt::Windows::Devices::Perception::PerceptionDepthFrame> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::PerceptionDepthFrame> {};
template<> struct hash<winrt::Windows::Devices::Perception::PerceptionDepthFrameArrivedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::PerceptionDepthFrameArrivedEventArgs> {};
template<> struct hash<winrt::Windows::Devices::Perception::PerceptionDepthFrameReader> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::PerceptionDepthFrameReader> {};
template<> struct hash<winrt::Windows::Devices::Perception::PerceptionDepthFrameSource> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::PerceptionDepthFrameSource> {};
template<> struct hash<winrt::Windows::Devices::Perception::PerceptionDepthFrameSourceAddedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::PerceptionDepthFrameSourceAddedEventArgs> {};
template<> struct hash<winrt::Windows::Devices::Perception::PerceptionDepthFrameSourceRemovedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::PerceptionDepthFrameSourceRemovedEventArgs> {};
template<> struct hash<winrt::Windows::Devices::Perception::PerceptionDepthFrameSourceWatcher> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::PerceptionDepthFrameSourceWatcher> {};
template<> struct hash<winrt::Windows::Devices::Perception::PerceptionFrameSourcePropertiesChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::PerceptionFrameSourcePropertiesChangedEventArgs> {};
template<> struct hash<winrt::Windows::Devices::Perception::PerceptionFrameSourcePropertyChangeResult> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::PerceptionFrameSourcePropertyChangeResult> {};
template<> struct hash<winrt::Windows::Devices::Perception::PerceptionInfraredFrame> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::PerceptionInfraredFrame> {};
template<> struct hash<winrt::Windows::Devices::Perception::PerceptionInfraredFrameArrivedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::PerceptionInfraredFrameArrivedEventArgs> {};
template<> struct hash<winrt::Windows::Devices::Perception::PerceptionInfraredFrameReader> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::PerceptionInfraredFrameReader> {};
template<> struct hash<winrt::Windows::Devices::Perception::PerceptionInfraredFrameSource> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::PerceptionInfraredFrameSource> {};
template<> struct hash<winrt::Windows::Devices::Perception::PerceptionInfraredFrameSourceAddedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::PerceptionInfraredFrameSourceAddedEventArgs> {};
template<> struct hash<winrt::Windows::Devices::Perception::PerceptionInfraredFrameSourceRemovedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::PerceptionInfraredFrameSourceRemovedEventArgs> {};
template<> struct hash<winrt::Windows::Devices::Perception::PerceptionInfraredFrameSourceWatcher> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::PerceptionInfraredFrameSourceWatcher> {};
template<> struct hash<winrt::Windows::Devices::Perception::PerceptionVideoProfile> : winrt::impl::hash_base<winrt::Windows::Devices::Perception::PerceptionVideoProfile> {};

}

WINRT_WARNING_POP
