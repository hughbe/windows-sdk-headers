﻿// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Graphics.DirectX.2.h"
#include "winrt/impl/Windows.Graphics.DirectX.Direct3D11.2.h"
#include "winrt/impl/Windows.Perception.2.h"
#include "winrt/impl/Windows.Perception.Spatial.2.h"
#include "winrt/impl/Windows.UI.Core.2.h"
#include "winrt/impl/Windows.Graphics.Holographic.2.h"
#include "winrt/Windows.Graphics.h"

namespace winrt::impl {

template <typename D> Windows::Foundation::Size consume_Windows_Graphics_Holographic_IHolographicCamera<D>::RenderTargetSize() const
{
    Windows::Foundation::Size value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicCamera)->get_RenderTargetSize(put_abi(value)));
    return value;
}

template <typename D> double consume_Windows_Graphics_Holographic_IHolographicCamera<D>::ViewportScaleFactor() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicCamera)->get_ViewportScaleFactor(&value));
    return value;
}

template <typename D> void consume_Windows_Graphics_Holographic_IHolographicCamera<D>::ViewportScaleFactor(double value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicCamera)->put_ViewportScaleFactor(value));
}

template <typename D> bool consume_Windows_Graphics_Holographic_IHolographicCamera<D>::IsStereo() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicCamera)->get_IsStereo(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Graphics_Holographic_IHolographicCamera<D>::Id() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicCamera)->get_Id(&value));
    return value;
}

template <typename D> void consume_Windows_Graphics_Holographic_IHolographicCamera<D>::SetNearPlaneDistance(double value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicCamera)->SetNearPlaneDistance(value));
}

template <typename D> void consume_Windows_Graphics_Holographic_IHolographicCamera<D>::SetFarPlaneDistance(double value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicCamera)->SetFarPlaneDistance(value));
}

template <typename D> Windows::Graphics::Holographic::HolographicCameraViewportParameters consume_Windows_Graphics_Holographic_IHolographicCamera2<D>::LeftViewportParameters() const
{
    Windows::Graphics::Holographic::HolographicCameraViewportParameters result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicCamera2)->get_LeftViewportParameters(put_abi(result)));
    return result;
}

template <typename D> Windows::Graphics::Holographic::HolographicCameraViewportParameters consume_Windows_Graphics_Holographic_IHolographicCamera2<D>::RightViewportParameters() const
{
    Windows::Graphics::Holographic::HolographicCameraViewportParameters result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicCamera2)->get_RightViewportParameters(put_abi(result)));
    return result;
}

template <typename D> Windows::Graphics::Holographic::HolographicDisplay consume_Windows_Graphics_Holographic_IHolographicCamera2<D>::Display() const
{
    Windows::Graphics::Holographic::HolographicDisplay result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicCamera2)->get_Display(put_abi(result)));
    return result;
}

template <typename D> bool consume_Windows_Graphics_Holographic_IHolographicCamera3<D>::IsPrimaryLayerEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicCamera3)->get_IsPrimaryLayerEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_Graphics_Holographic_IHolographicCamera3<D>::IsPrimaryLayerEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicCamera3)->put_IsPrimaryLayerEnabled(value));
}

template <typename D> uint32_t consume_Windows_Graphics_Holographic_IHolographicCamera3<D>::MaxQuadLayerCount() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicCamera3)->get_MaxQuadLayerCount(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Graphics::Holographic::HolographicQuadLayer> consume_Windows_Graphics_Holographic_IHolographicCamera3<D>::QuadLayers() const
{
    Windows::Foundation::Collections::IVector<Windows::Graphics::Holographic::HolographicQuadLayer> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicCamera3)->get_QuadLayers(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Graphics_Holographic_IHolographicCamera4<D>::CanOverrideViewport() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicCamera4)->get_CanOverrideViewport(&value));
    return value;
}

template <typename D> Windows::Graphics::Holographic::HolographicCamera consume_Windows_Graphics_Holographic_IHolographicCameraPose<D>::HolographicCamera() const
{
    Windows::Graphics::Holographic::HolographicCamera value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicCameraPose)->get_HolographicCamera(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Rect consume_Windows_Graphics_Holographic_IHolographicCameraPose<D>::Viewport() const
{
    Windows::Foundation::Rect value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicCameraPose)->get_Viewport(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Graphics::Holographic::HolographicStereoTransform> consume_Windows_Graphics_Holographic_IHolographicCameraPose<D>::TryGetViewTransform(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem) const
{
    Windows::Foundation::IReference<Windows::Graphics::Holographic::HolographicStereoTransform> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicCameraPose)->TryGetViewTransform(get_abi(coordinateSystem), put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Holographic::HolographicStereoTransform consume_Windows_Graphics_Holographic_IHolographicCameraPose<D>::ProjectionTransform() const
{
    Windows::Graphics::Holographic::HolographicStereoTransform value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicCameraPose)->get_ProjectionTransform(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Perception::Spatial::SpatialBoundingFrustum> consume_Windows_Graphics_Holographic_IHolographicCameraPose<D>::TryGetCullingFrustum(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem) const
{
    Windows::Foundation::IReference<Windows::Perception::Spatial::SpatialBoundingFrustum> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicCameraPose)->TryGetCullingFrustum(get_abi(coordinateSystem), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Perception::Spatial::SpatialBoundingFrustum> consume_Windows_Graphics_Holographic_IHolographicCameraPose<D>::TryGetVisibleFrustum(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem) const
{
    Windows::Foundation::IReference<Windows::Perception::Spatial::SpatialBoundingFrustum> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicCameraPose)->TryGetVisibleFrustum(get_abi(coordinateSystem), put_abi(value)));
    return value;
}

template <typename D> double consume_Windows_Graphics_Holographic_IHolographicCameraPose<D>::NearPlaneDistance() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicCameraPose)->get_NearPlaneDistance(&value));
    return value;
}

template <typename D> double consume_Windows_Graphics_Holographic_IHolographicCameraPose<D>::FarPlaneDistance() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicCameraPose)->get_FarPlaneDistance(&value));
    return value;
}

template <typename D> void consume_Windows_Graphics_Holographic_IHolographicCameraPose2<D>::OverrideViewTransform(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem, Windows::Graphics::Holographic::HolographicStereoTransform const& coordinateSystemToViewTransform) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicCameraPose2)->OverrideViewTransform(get_abi(coordinateSystem), get_abi(coordinateSystemToViewTransform)));
}

template <typename D> void consume_Windows_Graphics_Holographic_IHolographicCameraPose2<D>::OverrideProjectionTransform(Windows::Graphics::Holographic::HolographicStereoTransform const& projectionTransform) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicCameraPose2)->OverrideProjectionTransform(get_abi(projectionTransform)));
}

template <typename D> void consume_Windows_Graphics_Holographic_IHolographicCameraPose2<D>::OverrideViewport(Windows::Foundation::Rect const& leftViewport, Windows::Foundation::Rect const& rightViewport) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicCameraPose2)->OverrideViewport(get_abi(leftViewport), get_abi(rightViewport)));
}

template <typename D> void consume_Windows_Graphics_Holographic_IHolographicCameraRenderingParameters<D>::SetFocusPoint(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem, Windows::Foundation::Numerics::float3 const& position) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicCameraRenderingParameters)->SetFocusPoint(get_abi(coordinateSystem), get_abi(position)));
}

template <typename D> void consume_Windows_Graphics_Holographic_IHolographicCameraRenderingParameters<D>::SetFocusPoint(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem, Windows::Foundation::Numerics::float3 const& position, Windows::Foundation::Numerics::float3 const& normal) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicCameraRenderingParameters)->SetFocusPointWithNormal(get_abi(coordinateSystem), get_abi(position), get_abi(normal)));
}

template <typename D> void consume_Windows_Graphics_Holographic_IHolographicCameraRenderingParameters<D>::SetFocusPoint(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem, Windows::Foundation::Numerics::float3 const& position, Windows::Foundation::Numerics::float3 const& normal, Windows::Foundation::Numerics::float3 const& linearVelocity) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicCameraRenderingParameters)->SetFocusPointWithNormalLinearVelocity(get_abi(coordinateSystem), get_abi(position), get_abi(normal), get_abi(linearVelocity)));
}

template <typename D> Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice consume_Windows_Graphics_Holographic_IHolographicCameraRenderingParameters<D>::Direct3D11Device() const
{
    Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicCameraRenderingParameters)->get_Direct3D11Device(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface consume_Windows_Graphics_Holographic_IHolographicCameraRenderingParameters<D>::Direct3D11BackBuffer() const
{
    Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicCameraRenderingParameters)->get_Direct3D11BackBuffer(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Holographic::HolographicReprojectionMode consume_Windows_Graphics_Holographic_IHolographicCameraRenderingParameters2<D>::ReprojectionMode() const
{
    Windows::Graphics::Holographic::HolographicReprojectionMode value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicCameraRenderingParameters2)->get_ReprojectionMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Holographic_IHolographicCameraRenderingParameters2<D>::ReprojectionMode(Windows::Graphics::Holographic::HolographicReprojectionMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicCameraRenderingParameters2)->put_ReprojectionMode(get_abi(value)));
}

template <typename D> void consume_Windows_Graphics_Holographic_IHolographicCameraRenderingParameters2<D>::CommitDirect3D11DepthBuffer(Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicCameraRenderingParameters2)->CommitDirect3D11DepthBuffer(get_abi(value)));
}

template <typename D> bool consume_Windows_Graphics_Holographic_IHolographicCameraRenderingParameters3<D>::IsContentProtectionEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicCameraRenderingParameters3)->get_IsContentProtectionEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_Graphics_Holographic_IHolographicCameraRenderingParameters3<D>::IsContentProtectionEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicCameraRenderingParameters3)->put_IsContentProtectionEnabled(value));
}

template <typename D> com_array<Windows::Foundation::Numerics::float2> consume_Windows_Graphics_Holographic_IHolographicCameraViewportParameters<D>::HiddenAreaMesh() const
{
    com_array<Windows::Foundation::Numerics::float2> value;
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicCameraViewportParameters)->get_HiddenAreaMesh(impl::put_size_abi(value), put_abi(value)));
    return value;
}

template <typename D> com_array<Windows::Foundation::Numerics::float2> consume_Windows_Graphics_Holographic_IHolographicCameraViewportParameters<D>::VisibleAreaMesh() const
{
    com_array<Windows::Foundation::Numerics::float2> value;
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicCameraViewportParameters)->get_VisibleAreaMesh(impl::put_size_abi(value), put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Graphics_Holographic_IHolographicDisplay<D>::DisplayName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicDisplay)->get_DisplayName(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Size consume_Windows_Graphics_Holographic_IHolographicDisplay<D>::MaxViewportSize() const
{
    Windows::Foundation::Size value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicDisplay)->get_MaxViewportSize(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Graphics_Holographic_IHolographicDisplay<D>::IsStereo() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicDisplay)->get_IsStereo(&value));
    return value;
}

template <typename D> bool consume_Windows_Graphics_Holographic_IHolographicDisplay<D>::IsOpaque() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicDisplay)->get_IsOpaque(&value));
    return value;
}

template <typename D> Windows::Graphics::Holographic::HolographicAdapterId consume_Windows_Graphics_Holographic_IHolographicDisplay<D>::AdapterId() const
{
    Windows::Graphics::Holographic::HolographicAdapterId value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicDisplay)->get_AdapterId(put_abi(value)));
    return value;
}

template <typename D> Windows::Perception::Spatial::SpatialLocator consume_Windows_Graphics_Holographic_IHolographicDisplay<D>::SpatialLocator() const
{
    Windows::Perception::Spatial::SpatialLocator value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicDisplay)->get_SpatialLocator(put_abi(value)));
    return value;
}

template <typename D> double consume_Windows_Graphics_Holographic_IHolographicDisplay2<D>::RefreshRate() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicDisplay2)->get_RefreshRate(&value));
    return value;
}

template <typename D> Windows::Graphics::Holographic::HolographicDisplay consume_Windows_Graphics_Holographic_IHolographicDisplayStatics<D>::GetDefault() const
{
    Windows::Graphics::Holographic::HolographicDisplay result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicDisplayStatics)->GetDefault(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Graphics::Holographic::HolographicCamera> consume_Windows_Graphics_Holographic_IHolographicFrame<D>::AddedCameras() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Graphics::Holographic::HolographicCamera> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicFrame)->get_AddedCameras(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Graphics::Holographic::HolographicCamera> consume_Windows_Graphics_Holographic_IHolographicFrame<D>::RemovedCameras() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Graphics::Holographic::HolographicCamera> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicFrame)->get_RemovedCameras(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Holographic::HolographicCameraRenderingParameters consume_Windows_Graphics_Holographic_IHolographicFrame<D>::GetRenderingParameters(Windows::Graphics::Holographic::HolographicCameraPose const& cameraPose) const
{
    Windows::Graphics::Holographic::HolographicCameraRenderingParameters value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicFrame)->GetRenderingParameters(get_abi(cameraPose), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Graphics_Holographic_IHolographicFrame<D>::Duration() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicFrame)->get_Duration(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Holographic::HolographicFramePrediction consume_Windows_Graphics_Holographic_IHolographicFrame<D>::CurrentPrediction() const
{
    Windows::Graphics::Holographic::HolographicFramePrediction value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicFrame)->get_CurrentPrediction(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Holographic_IHolographicFrame<D>::UpdateCurrentPrediction() const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicFrame)->UpdateCurrentPrediction());
}

template <typename D> Windows::Graphics::Holographic::HolographicFramePresentResult consume_Windows_Graphics_Holographic_IHolographicFrame<D>::PresentUsingCurrentPrediction() const
{
    Windows::Graphics::Holographic::HolographicFramePresentResult result{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicFrame)->PresentUsingCurrentPrediction(put_abi(result)));
    return result;
}

template <typename D> Windows::Graphics::Holographic::HolographicFramePresentResult consume_Windows_Graphics_Holographic_IHolographicFrame<D>::PresentUsingCurrentPrediction(Windows::Graphics::Holographic::HolographicFramePresentWaitBehavior const& waitBehavior) const
{
    Windows::Graphics::Holographic::HolographicFramePresentResult result{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicFrame)->PresentUsingCurrentPredictionWithBehavior(get_abi(waitBehavior), put_abi(result)));
    return result;
}

template <typename D> void consume_Windows_Graphics_Holographic_IHolographicFrame<D>::WaitForFrameToFinish() const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicFrame)->WaitForFrameToFinish());
}

template <typename D> Windows::Graphics::Holographic::HolographicQuadLayerUpdateParameters consume_Windows_Graphics_Holographic_IHolographicFrame2<D>::GetQuadLayerUpdateParameters(Windows::Graphics::Holographic::HolographicQuadLayer const& layer) const
{
    Windows::Graphics::Holographic::HolographicQuadLayerUpdateParameters value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicFrame2)->GetQuadLayerUpdateParameters(get_abi(layer), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Graphics::Holographic::HolographicCameraPose> consume_Windows_Graphics_Holographic_IHolographicFramePrediction<D>::CameraPoses() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Graphics::Holographic::HolographicCameraPose> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicFramePrediction)->get_CameraPoses(put_abi(value)));
    return value;
}

template <typename D> Windows::Perception::PerceptionTimestamp consume_Windows_Graphics_Holographic_IHolographicFramePrediction<D>::Timestamp() const
{
    Windows::Perception::PerceptionTimestamp value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicFramePrediction)->get_Timestamp(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Graphics::Holographic::HolographicFramePresentationReport> consume_Windows_Graphics_Holographic_IHolographicFramePresentationMonitor<D>::ReadReports() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Graphics::Holographic::HolographicFramePresentationReport> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicFramePresentationMonitor)->ReadReports(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Graphics_Holographic_IHolographicFramePresentationReport<D>::CompositorGpuDuration() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicFramePresentationReport)->get_CompositorGpuDuration(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Graphics_Holographic_IHolographicFramePresentationReport<D>::AppGpuDuration() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicFramePresentationReport)->get_AppGpuDuration(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Graphics_Holographic_IHolographicFramePresentationReport<D>::AppGpuOverrun() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicFramePresentationReport)->get_AppGpuOverrun(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Graphics_Holographic_IHolographicFramePresentationReport<D>::MissedPresentationOpportunityCount() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicFramePresentationReport)->get_MissedPresentationOpportunityCount(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Graphics_Holographic_IHolographicFramePresentationReport<D>::PresentationCount() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicFramePresentationReport)->get_PresentationCount(&value));
    return value;
}

template <typename D> Windows::Graphics::DirectX::DirectXPixelFormat consume_Windows_Graphics_Holographic_IHolographicQuadLayer<D>::PixelFormat() const
{
    Windows::Graphics::DirectX::DirectXPixelFormat value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicQuadLayer)->get_PixelFormat(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Size consume_Windows_Graphics_Holographic_IHolographicQuadLayer<D>::Size() const
{
    Windows::Foundation::Size value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicQuadLayer)->get_Size(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Holographic::HolographicQuadLayer consume_Windows_Graphics_Holographic_IHolographicQuadLayerFactory<D>::Create(Windows::Foundation::Size const& size) const
{
    Windows::Graphics::Holographic::HolographicQuadLayer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicQuadLayerFactory)->Create(get_abi(size), put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Holographic::HolographicQuadLayer consume_Windows_Graphics_Holographic_IHolographicQuadLayerFactory<D>::CreateWithPixelFormat(Windows::Foundation::Size const& size, Windows::Graphics::DirectX::DirectXPixelFormat const& pixelFormat) const
{
    Windows::Graphics::Holographic::HolographicQuadLayer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicQuadLayerFactory)->CreateWithPixelFormat(get_abi(size), get_abi(pixelFormat), put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface consume_Windows_Graphics_Holographic_IHolographicQuadLayerUpdateParameters<D>::AcquireBufferToUpdateContent() const
{
    Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicQuadLayerUpdateParameters)->AcquireBufferToUpdateContent(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Holographic_IHolographicQuadLayerUpdateParameters<D>::UpdateViewport(Windows::Foundation::Rect const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicQuadLayerUpdateParameters)->UpdateViewport(get_abi(value)));
}

template <typename D> void consume_Windows_Graphics_Holographic_IHolographicQuadLayerUpdateParameters<D>::UpdateContentProtectionEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicQuadLayerUpdateParameters)->UpdateContentProtectionEnabled(value));
}

template <typename D> void consume_Windows_Graphics_Holographic_IHolographicQuadLayerUpdateParameters<D>::UpdateExtents(Windows::Foundation::Numerics::float2 const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicQuadLayerUpdateParameters)->UpdateExtents(get_abi(value)));
}

template <typename D> void consume_Windows_Graphics_Holographic_IHolographicQuadLayerUpdateParameters<D>::UpdateLocationWithStationaryMode(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem, Windows::Foundation::Numerics::float3 const& position, Windows::Foundation::Numerics::quaternion const& orientation) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicQuadLayerUpdateParameters)->UpdateLocationWithStationaryMode(get_abi(coordinateSystem), get_abi(position), get_abi(orientation)));
}

template <typename D> void consume_Windows_Graphics_Holographic_IHolographicQuadLayerUpdateParameters<D>::UpdateLocationWithDisplayRelativeMode(Windows::Foundation::Numerics::float3 const& position, Windows::Foundation::Numerics::quaternion const& orientation) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicQuadLayerUpdateParameters)->UpdateLocationWithDisplayRelativeMode(get_abi(position), get_abi(orientation)));
}

template <typename D> Windows::Graphics::Holographic::HolographicAdapterId consume_Windows_Graphics_Holographic_IHolographicSpace<D>::PrimaryAdapterId() const
{
    Windows::Graphics::Holographic::HolographicAdapterId value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicSpace)->get_PrimaryAdapterId(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Holographic_IHolographicSpace<D>::SetDirect3D11Device(Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicSpace)->SetDirect3D11Device(get_abi(value)));
}

template <typename D> event_token consume_Windows_Graphics_Holographic_IHolographicSpace<D>::CameraAdded(Windows::Foundation::TypedEventHandler<Windows::Graphics::Holographic::HolographicSpace, Windows::Graphics::Holographic::HolographicSpaceCameraAddedEventArgs> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicSpace)->add_CameraAdded(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::Graphics::Holographic::IHolographicSpace> consume_Windows_Graphics_Holographic_IHolographicSpace<D>::CameraAdded(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Holographic::HolographicSpace, Windows::Graphics::Holographic::HolographicSpaceCameraAddedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Graphics::Holographic::IHolographicSpace>(this, &abi_t<Windows::Graphics::Holographic::IHolographicSpace>::remove_CameraAdded, CameraAdded(handler));
}

template <typename D> void consume_Windows_Graphics_Holographic_IHolographicSpace<D>::CameraAdded(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicSpace)->remove_CameraAdded(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_Graphics_Holographic_IHolographicSpace<D>::CameraRemoved(Windows::Foundation::TypedEventHandler<Windows::Graphics::Holographic::HolographicSpace, Windows::Graphics::Holographic::HolographicSpaceCameraRemovedEventArgs> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicSpace)->add_CameraRemoved(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::Graphics::Holographic::IHolographicSpace> consume_Windows_Graphics_Holographic_IHolographicSpace<D>::CameraRemoved(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Holographic::HolographicSpace, Windows::Graphics::Holographic::HolographicSpaceCameraRemovedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Graphics::Holographic::IHolographicSpace>(this, &abi_t<Windows::Graphics::Holographic::IHolographicSpace>::remove_CameraRemoved, CameraRemoved(handler));
}

template <typename D> void consume_Windows_Graphics_Holographic_IHolographicSpace<D>::CameraRemoved(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicSpace)->remove_CameraRemoved(get_abi(cookie)));
}

template <typename D> Windows::Graphics::Holographic::HolographicFrame consume_Windows_Graphics_Holographic_IHolographicSpace<D>::CreateNextFrame() const
{
    Windows::Graphics::Holographic::HolographicFrame value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicSpace)->CreateNextFrame(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Holographic::HolographicSpaceUserPresence consume_Windows_Graphics_Holographic_IHolographicSpace2<D>::UserPresence() const
{
    Windows::Graphics::Holographic::HolographicSpaceUserPresence value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicSpace2)->get_UserPresence(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Graphics_Holographic_IHolographicSpace2<D>::UserPresenceChanged(Windows::Foundation::TypedEventHandler<Windows::Graphics::Holographic::HolographicSpace, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicSpace2)->add_UserPresenceChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Graphics::Holographic::IHolographicSpace2> consume_Windows_Graphics_Holographic_IHolographicSpace2<D>::UserPresenceChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Holographic::HolographicSpace, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Graphics::Holographic::IHolographicSpace2>(this, &abi_t<Windows::Graphics::Holographic::IHolographicSpace2>::remove_UserPresenceChanged, UserPresenceChanged(handler));
}

template <typename D> void consume_Windows_Graphics_Holographic_IHolographicSpace2<D>::UserPresenceChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicSpace2)->remove_UserPresenceChanged(get_abi(token)));
}

template <typename D> void consume_Windows_Graphics_Holographic_IHolographicSpace2<D>::WaitForNextFrameReady() const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicSpace2)->WaitForNextFrameReady());
}

template <typename D> void consume_Windows_Graphics_Holographic_IHolographicSpace2<D>::WaitForNextFrameReadyWithHeadStart(Windows::Foundation::TimeSpan const& requestedHeadStartDuration) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicSpace2)->WaitForNextFrameReadyWithHeadStart(get_abi(requestedHeadStartDuration)));
}

template <typename D> Windows::Graphics::Holographic::HolographicFramePresentationMonitor consume_Windows_Graphics_Holographic_IHolographicSpace2<D>::CreateFramePresentationMonitor(uint32_t maxQueuedReports) const
{
    Windows::Graphics::Holographic::HolographicFramePresentationMonitor result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicSpace2)->CreateFramePresentationMonitor(maxQueuedReports, put_abi(result)));
    return result;
}

template <typename D> Windows::Graphics::Holographic::HolographicCamera consume_Windows_Graphics_Holographic_IHolographicSpaceCameraAddedEventArgs<D>::Camera() const
{
    Windows::Graphics::Holographic::HolographicCamera value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicSpaceCameraAddedEventArgs)->get_Camera(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Deferral consume_Windows_Graphics_Holographic_IHolographicSpaceCameraAddedEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicSpaceCameraAddedEventArgs)->GetDeferral(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Holographic::HolographicCamera consume_Windows_Graphics_Holographic_IHolographicSpaceCameraRemovedEventArgs<D>::Camera() const
{
    Windows::Graphics::Holographic::HolographicCamera value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicSpaceCameraRemovedEventArgs)->get_Camera(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Holographic::HolographicSpace consume_Windows_Graphics_Holographic_IHolographicSpaceStatics<D>::CreateForCoreWindow(Windows::UI::Core::CoreWindow const& window) const
{
    Windows::Graphics::Holographic::HolographicSpace value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicSpaceStatics)->CreateForCoreWindow(get_abi(window), put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Graphics_Holographic_IHolographicSpaceStatics2<D>::IsSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicSpaceStatics2)->get_IsSupported(&value));
    return value;
}

template <typename D> bool consume_Windows_Graphics_Holographic_IHolographicSpaceStatics2<D>::IsAvailable() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicSpaceStatics2)->get_IsAvailable(&value));
    return value;
}

template <typename D> event_token consume_Windows_Graphics_Holographic_IHolographicSpaceStatics2<D>::IsAvailableChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicSpaceStatics2)->add_IsAvailableChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Graphics::Holographic::IHolographicSpaceStatics2> consume_Windows_Graphics_Holographic_IHolographicSpaceStatics2<D>::IsAvailableChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Graphics::Holographic::IHolographicSpaceStatics2>(this, &abi_t<Windows::Graphics::Holographic::IHolographicSpaceStatics2>::remove_IsAvailableChanged, IsAvailableChanged(handler));
}

template <typename D> void consume_Windows_Graphics_Holographic_IHolographicSpaceStatics2<D>::IsAvailableChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicSpaceStatics2)->remove_IsAvailableChanged(get_abi(token)));
}

template <typename D> bool consume_Windows_Graphics_Holographic_IHolographicSpaceStatics3<D>::IsConfigured() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Holographic::IHolographicSpaceStatics3)->get_IsConfigured(&value));
    return value;
}

template <typename D>
struct produce<D, Windows::Graphics::Holographic::IHolographicCamera> : produce_base<D, Windows::Graphics::Holographic::IHolographicCamera>
{
    HRESULT __stdcall get_RenderTargetSize(Windows::Foundation::Size* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Size>(this->shim().RenderTargetSize());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ViewportScaleFactor(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().ViewportScaleFactor());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ViewportScaleFactor(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ViewportScaleFactor(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsStereo(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsStereo());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Id(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetNearPlaneDistance(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetNearPlaneDistance(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetFarPlaneDistance(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetFarPlaneDistance(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Holographic::IHolographicCamera2> : produce_base<D, Windows::Graphics::Holographic::IHolographicCamera2>
{
    HRESULT __stdcall get_LeftViewportParameters(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Graphics::Holographic::HolographicCameraViewportParameters>(this->shim().LeftViewportParameters());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RightViewportParameters(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Graphics::Holographic::HolographicCameraViewportParameters>(this->shim().RightViewportParameters());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Display(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Graphics::Holographic::HolographicDisplay>(this->shim().Display());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Holographic::IHolographicCamera3> : produce_base<D, Windows::Graphics::Holographic::IHolographicCamera3>
{
    HRESULT __stdcall get_IsPrimaryLayerEnabled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsPrimaryLayerEnabled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsPrimaryLayerEnabled(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsPrimaryLayerEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MaxQuadLayerCount(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().MaxQuadLayerCount());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_QuadLayers(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Graphics::Holographic::HolographicQuadLayer>>(this->shim().QuadLayers());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Holographic::IHolographicCamera4> : produce_base<D, Windows::Graphics::Holographic::IHolographicCamera4>
{
    HRESULT __stdcall get_CanOverrideViewport(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().CanOverrideViewport());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Holographic::IHolographicCameraPose> : produce_base<D, Windows::Graphics::Holographic::IHolographicCameraPose>
{
    HRESULT __stdcall get_HolographicCamera(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Holographic::HolographicCamera>(this->shim().HolographicCamera());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Viewport(Windows::Foundation::Rect* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Rect>(this->shim().Viewport());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall TryGetViewTransform(void* coordinateSystem, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<Windows::Graphics::Holographic::HolographicStereoTransform>>(this->shim().TryGetViewTransform(*reinterpret_cast<Windows::Perception::Spatial::SpatialCoordinateSystem const*>(&coordinateSystem)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ProjectionTransform(struct struct_Windows_Graphics_Holographic_HolographicStereoTransform* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Holographic::HolographicStereoTransform>(this->shim().ProjectionTransform());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall TryGetCullingFrustum(void* coordinateSystem, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<Windows::Perception::Spatial::SpatialBoundingFrustum>>(this->shim().TryGetCullingFrustum(*reinterpret_cast<Windows::Perception::Spatial::SpatialCoordinateSystem const*>(&coordinateSystem)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall TryGetVisibleFrustum(void* coordinateSystem, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<Windows::Perception::Spatial::SpatialBoundingFrustum>>(this->shim().TryGetVisibleFrustum(*reinterpret_cast<Windows::Perception::Spatial::SpatialCoordinateSystem const*>(&coordinateSystem)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_NearPlaneDistance(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().NearPlaneDistance());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_FarPlaneDistance(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().FarPlaneDistance());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Holographic::IHolographicCameraPose2> : produce_base<D, Windows::Graphics::Holographic::IHolographicCameraPose2>
{
    HRESULT __stdcall OverrideViewTransform(void* coordinateSystem, struct struct_Windows_Graphics_Holographic_HolographicStereoTransform coordinateSystemToViewTransform) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OverrideViewTransform(*reinterpret_cast<Windows::Perception::Spatial::SpatialCoordinateSystem const*>(&coordinateSystem), *reinterpret_cast<Windows::Graphics::Holographic::HolographicStereoTransform const*>(&coordinateSystemToViewTransform));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall OverrideProjectionTransform(struct struct_Windows_Graphics_Holographic_HolographicStereoTransform projectionTransform) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OverrideProjectionTransform(*reinterpret_cast<Windows::Graphics::Holographic::HolographicStereoTransform const*>(&projectionTransform));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall OverrideViewport(Windows::Foundation::Rect leftViewport, Windows::Foundation::Rect rightViewport) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OverrideViewport(*reinterpret_cast<Windows::Foundation::Rect const*>(&leftViewport), *reinterpret_cast<Windows::Foundation::Rect const*>(&rightViewport));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Holographic::IHolographicCameraRenderingParameters> : produce_base<D, Windows::Graphics::Holographic::IHolographicCameraRenderingParameters>
{
    HRESULT __stdcall SetFocusPoint(void* coordinateSystem, Windows::Foundation::Numerics::float3 position) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetFocusPoint(*reinterpret_cast<Windows::Perception::Spatial::SpatialCoordinateSystem const*>(&coordinateSystem), *reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&position));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetFocusPointWithNormal(void* coordinateSystem, Windows::Foundation::Numerics::float3 position, Windows::Foundation::Numerics::float3 normal) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetFocusPoint(*reinterpret_cast<Windows::Perception::Spatial::SpatialCoordinateSystem const*>(&coordinateSystem), *reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&position), *reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&normal));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetFocusPointWithNormalLinearVelocity(void* coordinateSystem, Windows::Foundation::Numerics::float3 position, Windows::Foundation::Numerics::float3 normal, Windows::Foundation::Numerics::float3 linearVelocity) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetFocusPoint(*reinterpret_cast<Windows::Perception::Spatial::SpatialCoordinateSystem const*>(&coordinateSystem), *reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&position), *reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&normal), *reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&linearVelocity));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Direct3D11Device(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice>(this->shim().Direct3D11Device());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Direct3D11BackBuffer(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface>(this->shim().Direct3D11BackBuffer());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Holographic::IHolographicCameraRenderingParameters2> : produce_base<D, Windows::Graphics::Holographic::IHolographicCameraRenderingParameters2>
{
    HRESULT __stdcall get_ReprojectionMode(Windows::Graphics::Holographic::HolographicReprojectionMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Holographic::HolographicReprojectionMode>(this->shim().ReprojectionMode());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ReprojectionMode(Windows::Graphics::Holographic::HolographicReprojectionMode value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReprojectionMode(*reinterpret_cast<Windows::Graphics::Holographic::HolographicReprojectionMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CommitDirect3D11DepthBuffer(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CommitDirect3D11DepthBuffer(*reinterpret_cast<Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Holographic::IHolographicCameraRenderingParameters3> : produce_base<D, Windows::Graphics::Holographic::IHolographicCameraRenderingParameters3>
{
    HRESULT __stdcall get_IsContentProtectionEnabled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsContentProtectionEnabled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsContentProtectionEnabled(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsContentProtectionEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Holographic::IHolographicCameraViewportParameters> : produce_base<D, Windows::Graphics::Holographic::IHolographicCameraViewportParameters>
{
    HRESULT __stdcall get_HiddenAreaMesh(uint32_t* __valueSize, Windows::Foundation::Numerics::float2** value) noexcept final
    {
        try
        {
            *__valueSize = 0;
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            std::tie(*__valueSize, *value) = detach_abi(this->shim().HiddenAreaMesh());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_VisibleAreaMesh(uint32_t* __valueSize, Windows::Foundation::Numerics::float2** value) noexcept final
    {
        try
        {
            *__valueSize = 0;
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            std::tie(*__valueSize, *value) = detach_abi(this->shim().VisibleAreaMesh());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Holographic::IHolographicDisplay> : produce_base<D, Windows::Graphics::Holographic::IHolographicDisplay>
{
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

    HRESULT __stdcall get_MaxViewportSize(Windows::Foundation::Size* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Size>(this->shim().MaxViewportSize());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsStereo(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsStereo());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsOpaque(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsOpaque());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AdapterId(struct struct_Windows_Graphics_Holographic_HolographicAdapterId* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Holographic::HolographicAdapterId>(this->shim().AdapterId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SpatialLocator(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Perception::Spatial::SpatialLocator>(this->shim().SpatialLocator());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Holographic::IHolographicDisplay2> : produce_base<D, Windows::Graphics::Holographic::IHolographicDisplay2>
{
    HRESULT __stdcall get_RefreshRate(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().RefreshRate());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Holographic::IHolographicDisplayStatics> : produce_base<D, Windows::Graphics::Holographic::IHolographicDisplayStatics>
{
    HRESULT __stdcall GetDefault(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Graphics::Holographic::HolographicDisplay>(this->shim().GetDefault());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Holographic::IHolographicFrame> : produce_base<D, Windows::Graphics::Holographic::IHolographicFrame>
{
    HRESULT __stdcall get_AddedCameras(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Graphics::Holographic::HolographicCamera>>(this->shim().AddedCameras());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RemovedCameras(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Graphics::Holographic::HolographicCamera>>(this->shim().RemovedCameras());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetRenderingParameters(void* cameraPose, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Holographic::HolographicCameraRenderingParameters>(this->shim().GetRenderingParameters(*reinterpret_cast<Windows::Graphics::Holographic::HolographicCameraPose const*>(&cameraPose)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Duration(Windows::Foundation::TimeSpan* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().Duration());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CurrentPrediction(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Holographic::HolographicFramePrediction>(this->shim().CurrentPrediction());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall UpdateCurrentPrediction() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UpdateCurrentPrediction();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall PresentUsingCurrentPrediction(Windows::Graphics::Holographic::HolographicFramePresentResult* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Graphics::Holographic::HolographicFramePresentResult>(this->shim().PresentUsingCurrentPrediction());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall PresentUsingCurrentPredictionWithBehavior(Windows::Graphics::Holographic::HolographicFramePresentWaitBehavior waitBehavior, Windows::Graphics::Holographic::HolographicFramePresentResult* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Graphics::Holographic::HolographicFramePresentResult>(this->shim().PresentUsingCurrentPrediction(*reinterpret_cast<Windows::Graphics::Holographic::HolographicFramePresentWaitBehavior const*>(&waitBehavior)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall WaitForFrameToFinish() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WaitForFrameToFinish();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Holographic::IHolographicFrame2> : produce_base<D, Windows::Graphics::Holographic::IHolographicFrame2>
{
    HRESULT __stdcall GetQuadLayerUpdateParameters(void* layer, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Holographic::HolographicQuadLayerUpdateParameters>(this->shim().GetQuadLayerUpdateParameters(*reinterpret_cast<Windows::Graphics::Holographic::HolographicQuadLayer const*>(&layer)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Holographic::IHolographicFramePrediction> : produce_base<D, Windows::Graphics::Holographic::IHolographicFramePrediction>
{
    HRESULT __stdcall get_CameraPoses(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Graphics::Holographic::HolographicCameraPose>>(this->shim().CameraPoses());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Timestamp(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Perception::PerceptionTimestamp>(this->shim().Timestamp());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Holographic::IHolographicFramePresentationMonitor> : produce_base<D, Windows::Graphics::Holographic::IHolographicFramePresentationMonitor>
{
    HRESULT __stdcall ReadReports(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Graphics::Holographic::HolographicFramePresentationReport>>(this->shim().ReadReports());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Holographic::IHolographicFramePresentationReport> : produce_base<D, Windows::Graphics::Holographic::IHolographicFramePresentationReport>
{
    HRESULT __stdcall get_CompositorGpuDuration(Windows::Foundation::TimeSpan* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().CompositorGpuDuration());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AppGpuDuration(Windows::Foundation::TimeSpan* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().AppGpuDuration());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AppGpuOverrun(Windows::Foundation::TimeSpan* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().AppGpuOverrun());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MissedPresentationOpportunityCount(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().MissedPresentationOpportunityCount());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PresentationCount(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().PresentationCount());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Holographic::IHolographicQuadLayer> : produce_base<D, Windows::Graphics::Holographic::IHolographicQuadLayer>
{
    HRESULT __stdcall get_PixelFormat(Windows::Graphics::DirectX::DirectXPixelFormat* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::DirectX::DirectXPixelFormat>(this->shim().PixelFormat());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Size(Windows::Foundation::Size* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Size>(this->shim().Size());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Holographic::IHolographicQuadLayerFactory> : produce_base<D, Windows::Graphics::Holographic::IHolographicQuadLayerFactory>
{
    HRESULT __stdcall Create(Windows::Foundation::Size size, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Holographic::HolographicQuadLayer>(this->shim().Create(*reinterpret_cast<Windows::Foundation::Size const*>(&size)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateWithPixelFormat(Windows::Foundation::Size size, Windows::Graphics::DirectX::DirectXPixelFormat pixelFormat, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Holographic::HolographicQuadLayer>(this->shim().CreateWithPixelFormat(*reinterpret_cast<Windows::Foundation::Size const*>(&size), *reinterpret_cast<Windows::Graphics::DirectX::DirectXPixelFormat const*>(&pixelFormat)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Holographic::IHolographicQuadLayerUpdateParameters> : produce_base<D, Windows::Graphics::Holographic::IHolographicQuadLayerUpdateParameters>
{
    HRESULT __stdcall AcquireBufferToUpdateContent(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface>(this->shim().AcquireBufferToUpdateContent());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall UpdateViewport(Windows::Foundation::Rect value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UpdateViewport(*reinterpret_cast<Windows::Foundation::Rect const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall UpdateContentProtectionEnabled(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UpdateContentProtectionEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall UpdateExtents(Windows::Foundation::Numerics::float2 value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UpdateExtents(*reinterpret_cast<Windows::Foundation::Numerics::float2 const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall UpdateLocationWithStationaryMode(void* coordinateSystem, Windows::Foundation::Numerics::float3 position, Windows::Foundation::Numerics::quaternion orientation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UpdateLocationWithStationaryMode(*reinterpret_cast<Windows::Perception::Spatial::SpatialCoordinateSystem const*>(&coordinateSystem), *reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&position), *reinterpret_cast<Windows::Foundation::Numerics::quaternion const*>(&orientation));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall UpdateLocationWithDisplayRelativeMode(Windows::Foundation::Numerics::float3 position, Windows::Foundation::Numerics::quaternion orientation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UpdateLocationWithDisplayRelativeMode(*reinterpret_cast<Windows::Foundation::Numerics::float3 const*>(&position), *reinterpret_cast<Windows::Foundation::Numerics::quaternion const*>(&orientation));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Holographic::IHolographicSpace> : produce_base<D, Windows::Graphics::Holographic::IHolographicSpace>
{
    HRESULT __stdcall get_PrimaryAdapterId(struct struct_Windows_Graphics_Holographic_HolographicAdapterId* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Holographic::HolographicAdapterId>(this->shim().PrimaryAdapterId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetDirect3D11Device(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetDirect3D11Device(*reinterpret_cast<Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_CameraAdded(void* handler, event_token* cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_from<event_token>(this->shim().CameraAdded(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Graphics::Holographic::HolographicSpace, Windows::Graphics::Holographic::HolographicSpaceCameraAddedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_CameraAdded(event_token cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CameraAdded(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_CameraRemoved(void* handler, event_token* cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_from<event_token>(this->shim().CameraRemoved(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Graphics::Holographic::HolographicSpace, Windows::Graphics::Holographic::HolographicSpaceCameraRemovedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_CameraRemoved(event_token cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CameraRemoved(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateNextFrame(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Holographic::HolographicFrame>(this->shim().CreateNextFrame());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Holographic::IHolographicSpace2> : produce_base<D, Windows::Graphics::Holographic::IHolographicSpace2>
{
    HRESULT __stdcall get_UserPresence(Windows::Graphics::Holographic::HolographicSpaceUserPresence* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Holographic::HolographicSpaceUserPresence>(this->shim().UserPresence());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_UserPresenceChanged(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().UserPresenceChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Graphics::Holographic::HolographicSpace, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_UserPresenceChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UserPresenceChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall WaitForNextFrameReady() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WaitForNextFrameReady();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall WaitForNextFrameReadyWithHeadStart(Windows::Foundation::TimeSpan requestedHeadStartDuration) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WaitForNextFrameReadyWithHeadStart(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&requestedHeadStartDuration));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateFramePresentationMonitor(uint32_t maxQueuedReports, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Graphics::Holographic::HolographicFramePresentationMonitor>(this->shim().CreateFramePresentationMonitor(maxQueuedReports));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Holographic::IHolographicSpaceCameraAddedEventArgs> : produce_base<D, Windows::Graphics::Holographic::IHolographicSpaceCameraAddedEventArgs>
{
    HRESULT __stdcall get_Camera(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Holographic::HolographicCamera>(this->shim().Camera());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetDeferral(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Deferral>(this->shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Holographic::IHolographicSpaceCameraRemovedEventArgs> : produce_base<D, Windows::Graphics::Holographic::IHolographicSpaceCameraRemovedEventArgs>
{
    HRESULT __stdcall get_Camera(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Holographic::HolographicCamera>(this->shim().Camera());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Holographic::IHolographicSpaceStatics> : produce_base<D, Windows::Graphics::Holographic::IHolographicSpaceStatics>
{
    HRESULT __stdcall CreateForCoreWindow(void* window, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Holographic::HolographicSpace>(this->shim().CreateForCoreWindow(*reinterpret_cast<Windows::UI::Core::CoreWindow const*>(&window)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Holographic::IHolographicSpaceStatics2> : produce_base<D, Windows::Graphics::Holographic::IHolographicSpaceStatics2>
{
    HRESULT __stdcall get_IsSupported(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsSupported());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsAvailable(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsAvailable());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_IsAvailableChanged(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().IsAvailableChanged(*reinterpret_cast<Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_IsAvailableChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsAvailableChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Holographic::IHolographicSpaceStatics3> : produce_base<D, Windows::Graphics::Holographic::IHolographicSpaceStatics3>
{
    HRESULT __stdcall get_IsConfigured(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsConfigured());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Graphics::Holographic {

inline Windows::Graphics::Holographic::HolographicDisplay HolographicDisplay::GetDefault()
{
    return get_activation_factory<HolographicDisplay, Windows::Graphics::Holographic::IHolographicDisplayStatics>().GetDefault();
}

inline HolographicQuadLayer::HolographicQuadLayer(Windows::Foundation::Size const& size) :
    HolographicQuadLayer(get_activation_factory<HolographicQuadLayer, Windows::Graphics::Holographic::IHolographicQuadLayerFactory>().Create(size))
{}

inline HolographicQuadLayer::HolographicQuadLayer(Windows::Foundation::Size const& size, Windows::Graphics::DirectX::DirectXPixelFormat const& pixelFormat) :
    HolographicQuadLayer(get_activation_factory<HolographicQuadLayer, Windows::Graphics::Holographic::IHolographicQuadLayerFactory>().CreateWithPixelFormat(size, pixelFormat))
{}

inline Windows::Graphics::Holographic::HolographicSpace HolographicSpace::CreateForCoreWindow(Windows::UI::Core::CoreWindow const& window)
{
    return get_activation_factory<HolographicSpace, Windows::Graphics::Holographic::IHolographicSpaceStatics>().CreateForCoreWindow(window);
}

inline bool HolographicSpace::IsSupported()
{
    return get_activation_factory<HolographicSpace, Windows::Graphics::Holographic::IHolographicSpaceStatics2>().IsSupported();
}

inline bool HolographicSpace::IsAvailable()
{
    return get_activation_factory<HolographicSpace, Windows::Graphics::Holographic::IHolographicSpaceStatics2>().IsAvailable();
}

inline event_token HolographicSpace::IsAvailableChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler)
{
    return get_activation_factory<HolographicSpace, Windows::Graphics::Holographic::IHolographicSpaceStatics2>().IsAvailableChanged(handler);
}

inline factory_event_revoker<Windows::Graphics::Holographic::IHolographicSpaceStatics2> HolographicSpace::IsAvailableChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler)
{
    auto factory = get_activation_factory<HolographicSpace, Windows::Graphics::Holographic::IHolographicSpaceStatics2>();
    return { factory, &impl::abi_t<Windows::Graphics::Holographic::IHolographicSpaceStatics2>::remove_IsAvailableChanged, factory.IsAvailableChanged(handler) };
}

inline void HolographicSpace::IsAvailableChanged(event_token const& token)
{
    get_activation_factory<HolographicSpace, Windows::Graphics::Holographic::IHolographicSpaceStatics2>().IsAvailableChanged(token);
}

inline bool HolographicSpace::IsConfigured()
{
    return get_activation_factory<HolographicSpace, Windows::Graphics::Holographic::IHolographicSpaceStatics3>().IsConfigured();
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Graphics::Holographic::IHolographicCamera> : winrt::impl::hash_base<winrt::Windows::Graphics::Holographic::IHolographicCamera> {};
template<> struct hash<winrt::Windows::Graphics::Holographic::IHolographicCamera2> : winrt::impl::hash_base<winrt::Windows::Graphics::Holographic::IHolographicCamera2> {};
template<> struct hash<winrt::Windows::Graphics::Holographic::IHolographicCamera3> : winrt::impl::hash_base<winrt::Windows::Graphics::Holographic::IHolographicCamera3> {};
template<> struct hash<winrt::Windows::Graphics::Holographic::IHolographicCamera4> : winrt::impl::hash_base<winrt::Windows::Graphics::Holographic::IHolographicCamera4> {};
template<> struct hash<winrt::Windows::Graphics::Holographic::IHolographicCameraPose> : winrt::impl::hash_base<winrt::Windows::Graphics::Holographic::IHolographicCameraPose> {};
template<> struct hash<winrt::Windows::Graphics::Holographic::IHolographicCameraPose2> : winrt::impl::hash_base<winrt::Windows::Graphics::Holographic::IHolographicCameraPose2> {};
template<> struct hash<winrt::Windows::Graphics::Holographic::IHolographicCameraRenderingParameters> : winrt::impl::hash_base<winrt::Windows::Graphics::Holographic::IHolographicCameraRenderingParameters> {};
template<> struct hash<winrt::Windows::Graphics::Holographic::IHolographicCameraRenderingParameters2> : winrt::impl::hash_base<winrt::Windows::Graphics::Holographic::IHolographicCameraRenderingParameters2> {};
template<> struct hash<winrt::Windows::Graphics::Holographic::IHolographicCameraRenderingParameters3> : winrt::impl::hash_base<winrt::Windows::Graphics::Holographic::IHolographicCameraRenderingParameters3> {};
template<> struct hash<winrt::Windows::Graphics::Holographic::IHolographicCameraViewportParameters> : winrt::impl::hash_base<winrt::Windows::Graphics::Holographic::IHolographicCameraViewportParameters> {};
template<> struct hash<winrt::Windows::Graphics::Holographic::IHolographicDisplay> : winrt::impl::hash_base<winrt::Windows::Graphics::Holographic::IHolographicDisplay> {};
template<> struct hash<winrt::Windows::Graphics::Holographic::IHolographicDisplay2> : winrt::impl::hash_base<winrt::Windows::Graphics::Holographic::IHolographicDisplay2> {};
template<> struct hash<winrt::Windows::Graphics::Holographic::IHolographicDisplayStatics> : winrt::impl::hash_base<winrt::Windows::Graphics::Holographic::IHolographicDisplayStatics> {};
template<> struct hash<winrt::Windows::Graphics::Holographic::IHolographicFrame> : winrt::impl::hash_base<winrt::Windows::Graphics::Holographic::IHolographicFrame> {};
template<> struct hash<winrt::Windows::Graphics::Holographic::IHolographicFrame2> : winrt::impl::hash_base<winrt::Windows::Graphics::Holographic::IHolographicFrame2> {};
template<> struct hash<winrt::Windows::Graphics::Holographic::IHolographicFramePrediction> : winrt::impl::hash_base<winrt::Windows::Graphics::Holographic::IHolographicFramePrediction> {};
template<> struct hash<winrt::Windows::Graphics::Holographic::IHolographicFramePresentationMonitor> : winrt::impl::hash_base<winrt::Windows::Graphics::Holographic::IHolographicFramePresentationMonitor> {};
template<> struct hash<winrt::Windows::Graphics::Holographic::IHolographicFramePresentationReport> : winrt::impl::hash_base<winrt::Windows::Graphics::Holographic::IHolographicFramePresentationReport> {};
template<> struct hash<winrt::Windows::Graphics::Holographic::IHolographicQuadLayer> : winrt::impl::hash_base<winrt::Windows::Graphics::Holographic::IHolographicQuadLayer> {};
template<> struct hash<winrt::Windows::Graphics::Holographic::IHolographicQuadLayerFactory> : winrt::impl::hash_base<winrt::Windows::Graphics::Holographic::IHolographicQuadLayerFactory> {};
template<> struct hash<winrt::Windows::Graphics::Holographic::IHolographicQuadLayerUpdateParameters> : winrt::impl::hash_base<winrt::Windows::Graphics::Holographic::IHolographicQuadLayerUpdateParameters> {};
template<> struct hash<winrt::Windows::Graphics::Holographic::IHolographicSpace> : winrt::impl::hash_base<winrt::Windows::Graphics::Holographic::IHolographicSpace> {};
template<> struct hash<winrt::Windows::Graphics::Holographic::IHolographicSpace2> : winrt::impl::hash_base<winrt::Windows::Graphics::Holographic::IHolographicSpace2> {};
template<> struct hash<winrt::Windows::Graphics::Holographic::IHolographicSpaceCameraAddedEventArgs> : winrt::impl::hash_base<winrt::Windows::Graphics::Holographic::IHolographicSpaceCameraAddedEventArgs> {};
template<> struct hash<winrt::Windows::Graphics::Holographic::IHolographicSpaceCameraRemovedEventArgs> : winrt::impl::hash_base<winrt::Windows::Graphics::Holographic::IHolographicSpaceCameraRemovedEventArgs> {};
template<> struct hash<winrt::Windows::Graphics::Holographic::IHolographicSpaceStatics> : winrt::impl::hash_base<winrt::Windows::Graphics::Holographic::IHolographicSpaceStatics> {};
template<> struct hash<winrt::Windows::Graphics::Holographic::IHolographicSpaceStatics2> : winrt::impl::hash_base<winrt::Windows::Graphics::Holographic::IHolographicSpaceStatics2> {};
template<> struct hash<winrt::Windows::Graphics::Holographic::IHolographicSpaceStatics3> : winrt::impl::hash_base<winrt::Windows::Graphics::Holographic::IHolographicSpaceStatics3> {};
template<> struct hash<winrt::Windows::Graphics::Holographic::HolographicCamera> : winrt::impl::hash_base<winrt::Windows::Graphics::Holographic::HolographicCamera> {};
template<> struct hash<winrt::Windows::Graphics::Holographic::HolographicCameraPose> : winrt::impl::hash_base<winrt::Windows::Graphics::Holographic::HolographicCameraPose> {};
template<> struct hash<winrt::Windows::Graphics::Holographic::HolographicCameraRenderingParameters> : winrt::impl::hash_base<winrt::Windows::Graphics::Holographic::HolographicCameraRenderingParameters> {};
template<> struct hash<winrt::Windows::Graphics::Holographic::HolographicCameraViewportParameters> : winrt::impl::hash_base<winrt::Windows::Graphics::Holographic::HolographicCameraViewportParameters> {};
template<> struct hash<winrt::Windows::Graphics::Holographic::HolographicDisplay> : winrt::impl::hash_base<winrt::Windows::Graphics::Holographic::HolographicDisplay> {};
template<> struct hash<winrt::Windows::Graphics::Holographic::HolographicFrame> : winrt::impl::hash_base<winrt::Windows::Graphics::Holographic::HolographicFrame> {};
template<> struct hash<winrt::Windows::Graphics::Holographic::HolographicFramePrediction> : winrt::impl::hash_base<winrt::Windows::Graphics::Holographic::HolographicFramePrediction> {};
template<> struct hash<winrt::Windows::Graphics::Holographic::HolographicFramePresentationMonitor> : winrt::impl::hash_base<winrt::Windows::Graphics::Holographic::HolographicFramePresentationMonitor> {};
template<> struct hash<winrt::Windows::Graphics::Holographic::HolographicFramePresentationReport> : winrt::impl::hash_base<winrt::Windows::Graphics::Holographic::HolographicFramePresentationReport> {};
template<> struct hash<winrt::Windows::Graphics::Holographic::HolographicQuadLayer> : winrt::impl::hash_base<winrt::Windows::Graphics::Holographic::HolographicQuadLayer> {};
template<> struct hash<winrt::Windows::Graphics::Holographic::HolographicQuadLayerUpdateParameters> : winrt::impl::hash_base<winrt::Windows::Graphics::Holographic::HolographicQuadLayerUpdateParameters> {};
template<> struct hash<winrt::Windows::Graphics::Holographic::HolographicSpace> : winrt::impl::hash_base<winrt::Windows::Graphics::Holographic::HolographicSpace> {};
template<> struct hash<winrt::Windows::Graphics::Holographic::HolographicSpaceCameraAddedEventArgs> : winrt::impl::hash_base<winrt::Windows::Graphics::Holographic::HolographicSpaceCameraAddedEventArgs> {};
template<> struct hash<winrt::Windows::Graphics::Holographic::HolographicSpaceCameraRemovedEventArgs> : winrt::impl::hash_base<winrt::Windows::Graphics::Holographic::HolographicSpaceCameraRemovedEventArgs> {};

}

WINRT_WARNING_POP
