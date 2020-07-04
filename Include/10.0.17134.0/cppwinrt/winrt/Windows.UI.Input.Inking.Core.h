// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.UI.Composition.2.h"
#include "winrt/impl/Windows.UI.Core.2.h"
#include "winrt/impl/Windows.UI.Input.Inking.2.h"
#include "winrt/impl/Windows.UI.Input.Inking.Core.2.h"
#include "winrt/Windows.UI.Input.Inking.h"

namespace winrt::impl {

template <typename D> Windows::Foundation::Rect consume_Windows_UI_Input_Inking_Core_ICoreIncrementalInkStroke<D>::AppendInkPoints(param::iterable<Windows::UI::Input::Inking::InkPoint> const& inkPoints) const
{
    Windows::Foundation::Rect result{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::Core::ICoreIncrementalInkStroke)->AppendInkPoints(get_abi(inkPoints), put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Input::Inking::InkStroke consume_Windows_UI_Input_Inking_Core_ICoreIncrementalInkStroke<D>::CreateInkStroke() const
{
    Windows::UI::Input::Inking::InkStroke result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::Core::ICoreIncrementalInkStroke)->CreateInkStroke(put_abi(result)));
    return result;
}

template <typename D> Windows::UI::Input::Inking::InkDrawingAttributes consume_Windows_UI_Input_Inking_Core_ICoreIncrementalInkStroke<D>::DrawingAttributes() const
{
    Windows::UI::Input::Inking::InkDrawingAttributes value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::Core::ICoreIncrementalInkStroke)->get_DrawingAttributes(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Numerics::float3x2 consume_Windows_UI_Input_Inking_Core_ICoreIncrementalInkStroke<D>::PointTransform() const
{
    Windows::Foundation::Numerics::float3x2 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::Core::ICoreIncrementalInkStroke)->get_PointTransform(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Rect consume_Windows_UI_Input_Inking_Core_ICoreIncrementalInkStroke<D>::BoundingRect() const
{
    Windows::Foundation::Rect value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::Core::ICoreIncrementalInkStroke)->get_BoundingRect(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::Inking::Core::CoreIncrementalInkStroke consume_Windows_UI_Input_Inking_Core_ICoreIncrementalInkStrokeFactory<D>::Create(Windows::UI::Input::Inking::InkDrawingAttributes const& drawingAttributes, Windows::Foundation::Numerics::float3x2 const& pointTransform) const
{
    Windows::UI::Input::Inking::Core::CoreIncrementalInkStroke result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::Core::ICoreIncrementalInkStrokeFactory)->Create(get_abi(drawingAttributes), get_abi(pointTransform), put_abi(result)));
    return result;
}

template <typename D> event_token consume_Windows_UI_Input_Inking_Core_ICoreInkIndependentInputSource<D>::PointerEntering(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource)->add_PointerEntering(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource> consume_Windows_UI_Input_Inking_Core_ICoreInkIndependentInputSource<D>::PointerEntering(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource>(this, &abi_t<Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource>::remove_PointerEntering, PointerEntering(handler));
}

template <typename D> void consume_Windows_UI_Input_Inking_Core_ICoreInkIndependentInputSource<D>::PointerEntering(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource)->remove_PointerEntering(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_UI_Input_Inking_Core_ICoreInkIndependentInputSource<D>::PointerHovering(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource)->add_PointerHovering(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource> consume_Windows_UI_Input_Inking_Core_ICoreInkIndependentInputSource<D>::PointerHovering(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource>(this, &abi_t<Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource>::remove_PointerHovering, PointerHovering(handler));
}

template <typename D> void consume_Windows_UI_Input_Inking_Core_ICoreInkIndependentInputSource<D>::PointerHovering(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource)->remove_PointerHovering(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_UI_Input_Inking_Core_ICoreInkIndependentInputSource<D>::PointerExiting(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource)->add_PointerExiting(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource> consume_Windows_UI_Input_Inking_Core_ICoreInkIndependentInputSource<D>::PointerExiting(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource>(this, &abi_t<Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource>::remove_PointerExiting, PointerExiting(handler));
}

template <typename D> void consume_Windows_UI_Input_Inking_Core_ICoreInkIndependentInputSource<D>::PointerExiting(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource)->remove_PointerExiting(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_UI_Input_Inking_Core_ICoreInkIndependentInputSource<D>::PointerPressing(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource)->add_PointerPressing(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource> consume_Windows_UI_Input_Inking_Core_ICoreInkIndependentInputSource<D>::PointerPressing(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource>(this, &abi_t<Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource>::remove_PointerPressing, PointerPressing(handler));
}

template <typename D> void consume_Windows_UI_Input_Inking_Core_ICoreInkIndependentInputSource<D>::PointerPressing(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource)->remove_PointerPressing(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_UI_Input_Inking_Core_ICoreInkIndependentInputSource<D>::PointerMoving(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource)->add_PointerMoving(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource> consume_Windows_UI_Input_Inking_Core_ICoreInkIndependentInputSource<D>::PointerMoving(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource>(this, &abi_t<Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource>::remove_PointerMoving, PointerMoving(handler));
}

template <typename D> void consume_Windows_UI_Input_Inking_Core_ICoreInkIndependentInputSource<D>::PointerMoving(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource)->remove_PointerMoving(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_UI_Input_Inking_Core_ICoreInkIndependentInputSource<D>::PointerReleasing(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource)->add_PointerReleasing(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource> consume_Windows_UI_Input_Inking_Core_ICoreInkIndependentInputSource<D>::PointerReleasing(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource>(this, &abi_t<Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource>::remove_PointerReleasing, PointerReleasing(handler));
}

template <typename D> void consume_Windows_UI_Input_Inking_Core_ICoreInkIndependentInputSource<D>::PointerReleasing(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource)->remove_PointerReleasing(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_UI_Input_Inking_Core_ICoreInkIndependentInputSource<D>::PointerLost(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource)->add_PointerLost(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource> consume_Windows_UI_Input_Inking_Core_ICoreInkIndependentInputSource<D>::PointerLost(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource>(this, &abi_t<Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource>::remove_PointerLost, PointerLost(handler));
}

template <typename D> void consume_Windows_UI_Input_Inking_Core_ICoreInkIndependentInputSource<D>::PointerLost(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource)->remove_PointerLost(get_abi(cookie)));
}

template <typename D> Windows::UI::Input::Inking::InkPresenter consume_Windows_UI_Input_Inking_Core_ICoreInkIndependentInputSource<D>::InkPresenter() const
{
    Windows::UI::Input::Inking::InkPresenter value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource)->get_InkPresenter(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource consume_Windows_UI_Input_Inking_Core_ICoreInkIndependentInputSourceStatics<D>::Create(Windows::UI::Input::Inking::InkPresenter const& inkPresenter) const
{
    Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource inkIndependentInputSource{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSourceStatics)->Create(get_abi(inkPresenter), put_abi(inkIndependentInputSource)));
    return inkIndependentInputSource;
}

template <typename D> Windows::UI::Input::Inking::InkPresenter consume_Windows_UI_Input_Inking_Core_ICoreInkPresenterHost<D>::InkPresenter() const
{
    Windows::UI::Input::Inking::InkPresenter value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::Core::ICoreInkPresenterHost)->get_InkPresenter(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Composition::ContainerVisual consume_Windows_UI_Input_Inking_Core_ICoreInkPresenterHost<D>::RootVisual() const
{
    Windows::UI::Composition::ContainerVisual value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::Core::ICoreInkPresenterHost)->get_RootVisual(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Input_Inking_Core_ICoreInkPresenterHost<D>::RootVisual(Windows::UI::Composition::ContainerVisual const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::Core::ICoreInkPresenterHost)->put_RootVisual(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::UI::Input::Inking::InkPoint> consume_Windows_UI_Input_Inking_Core_ICoreWetStrokeUpdateEventArgs<D>::NewInkPoints() const
{
    Windows::Foundation::Collections::IVector<Windows::UI::Input::Inking::InkPoint> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateEventArgs)->get_NewInkPoints(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_UI_Input_Inking_Core_ICoreWetStrokeUpdateEventArgs<D>::PointerId() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateEventArgs)->get_PointerId(&value));
    return value;
}

template <typename D> Windows::UI::Input::Inking::Core::CoreWetStrokeDisposition consume_Windows_UI_Input_Inking_Core_ICoreWetStrokeUpdateEventArgs<D>::Disposition() const
{
    Windows::UI::Input::Inking::Core::CoreWetStrokeDisposition value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateEventArgs)->get_Disposition(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Input_Inking_Core_ICoreWetStrokeUpdateEventArgs<D>::Disposition(Windows::UI::Input::Inking::Core::CoreWetStrokeDisposition const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateEventArgs)->put_Disposition(get_abi(value)));
}

template <typename D> event_token consume_Windows_UI_Input_Inking_Core_ICoreWetStrokeUpdateSource<D>::WetStrokeStarting(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource, Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateEventArgs> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource)->add_WetStrokeStarting(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource> consume_Windows_UI_Input_Inking_Core_ICoreWetStrokeUpdateSource<D>::WetStrokeStarting(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource, Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource>(this, &abi_t<Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource>::remove_WetStrokeStarting, WetStrokeStarting(handler));
}

template <typename D> void consume_Windows_UI_Input_Inking_Core_ICoreWetStrokeUpdateSource<D>::WetStrokeStarting(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource)->remove_WetStrokeStarting(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_UI_Input_Inking_Core_ICoreWetStrokeUpdateSource<D>::WetStrokeContinuing(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource, Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateEventArgs> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource)->add_WetStrokeContinuing(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource> consume_Windows_UI_Input_Inking_Core_ICoreWetStrokeUpdateSource<D>::WetStrokeContinuing(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource, Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource>(this, &abi_t<Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource>::remove_WetStrokeContinuing, WetStrokeContinuing(handler));
}

template <typename D> void consume_Windows_UI_Input_Inking_Core_ICoreWetStrokeUpdateSource<D>::WetStrokeContinuing(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource)->remove_WetStrokeContinuing(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_UI_Input_Inking_Core_ICoreWetStrokeUpdateSource<D>::WetStrokeStopping(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource, Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateEventArgs> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource)->add_WetStrokeStopping(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource> consume_Windows_UI_Input_Inking_Core_ICoreWetStrokeUpdateSource<D>::WetStrokeStopping(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource, Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource>(this, &abi_t<Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource>::remove_WetStrokeStopping, WetStrokeStopping(handler));
}

template <typename D> void consume_Windows_UI_Input_Inking_Core_ICoreWetStrokeUpdateSource<D>::WetStrokeStopping(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource)->remove_WetStrokeStopping(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_UI_Input_Inking_Core_ICoreWetStrokeUpdateSource<D>::WetStrokeCompleted(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource, Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateEventArgs> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource)->add_WetStrokeCompleted(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource> consume_Windows_UI_Input_Inking_Core_ICoreWetStrokeUpdateSource<D>::WetStrokeCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource, Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource>(this, &abi_t<Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource>::remove_WetStrokeCompleted, WetStrokeCompleted(handler));
}

template <typename D> void consume_Windows_UI_Input_Inking_Core_ICoreWetStrokeUpdateSource<D>::WetStrokeCompleted(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource)->remove_WetStrokeCompleted(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_UI_Input_Inking_Core_ICoreWetStrokeUpdateSource<D>::WetStrokeCanceled(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource, Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateEventArgs> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource)->add_WetStrokeCanceled(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource> consume_Windows_UI_Input_Inking_Core_ICoreWetStrokeUpdateSource<D>::WetStrokeCanceled(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource, Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource>(this, &abi_t<Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource>::remove_WetStrokeCanceled, WetStrokeCanceled(handler));
}

template <typename D> void consume_Windows_UI_Input_Inking_Core_ICoreWetStrokeUpdateSource<D>::WetStrokeCanceled(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource)->remove_WetStrokeCanceled(get_abi(cookie)));
}

template <typename D> Windows::UI::Input::Inking::InkPresenter consume_Windows_UI_Input_Inking_Core_ICoreWetStrokeUpdateSource<D>::InkPresenter() const
{
    Windows::UI::Input::Inking::InkPresenter value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource)->get_InkPresenter(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource consume_Windows_UI_Input_Inking_Core_ICoreWetStrokeUpdateSourceStatics<D>::Create(Windows::UI::Input::Inking::InkPresenter const& inkPresenter) const
{
    Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource WetStrokeUpdateSource{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSourceStatics)->Create(get_abi(inkPresenter), put_abi(WetStrokeUpdateSource)));
    return WetStrokeUpdateSource;
}

template <typename D>
struct produce<D, Windows::UI::Input::Inking::Core::ICoreIncrementalInkStroke> : produce_base<D, Windows::UI::Input::Inking::Core::ICoreIncrementalInkStroke>
{
    HRESULT __stdcall AppendInkPoints(void* inkPoints, Windows::Foundation::Rect* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::Rect>(this->shim().AppendInkPoints(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::UI::Input::Inking::InkPoint> const*>(&inkPoints)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateInkStroke(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Input::Inking::InkStroke>(this->shim().CreateInkStroke());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DrawingAttributes(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Input::Inking::InkDrawingAttributes>(this->shim().DrawingAttributes());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PointTransform(Windows::Foundation::Numerics::float3x2* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Numerics::float3x2>(this->shim().PointTransform());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_BoundingRect(Windows::Foundation::Rect* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Rect>(this->shim().BoundingRect());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Inking::Core::ICoreIncrementalInkStrokeFactory> : produce_base<D, Windows::UI::Input::Inking::Core::ICoreIncrementalInkStrokeFactory>
{
    HRESULT __stdcall Create(void* drawingAttributes, Windows::Foundation::Numerics::float3x2 pointTransform, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Input::Inking::Core::CoreIncrementalInkStroke>(this->shim().Create(*reinterpret_cast<Windows::UI::Input::Inking::InkDrawingAttributes const*>(&drawingAttributes), *reinterpret_cast<Windows::Foundation::Numerics::float3x2 const*>(&pointTransform)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource> : produce_base<D, Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource>
{
    HRESULT __stdcall add_PointerEntering(void* handler, event_token* cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_from<event_token>(this->shim().PointerEntering(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_PointerEntering(event_token cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PointerEntering(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_PointerHovering(void* handler, event_token* cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_from<event_token>(this->shim().PointerHovering(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_PointerHovering(event_token cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PointerHovering(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_PointerExiting(void* handler, event_token* cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_from<event_token>(this->shim().PointerExiting(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_PointerExiting(event_token cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PointerExiting(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_PointerPressing(void* handler, event_token* cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_from<event_token>(this->shim().PointerPressing(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_PointerPressing(event_token cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PointerPressing(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_PointerMoving(void* handler, event_token* cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_from<event_token>(this->shim().PointerMoving(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_PointerMoving(event_token cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PointerMoving(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_PointerReleasing(void* handler, event_token* cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_from<event_token>(this->shim().PointerReleasing(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_PointerReleasing(event_token cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PointerReleasing(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_PointerLost(void* handler, event_token* cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_from<event_token>(this->shim().PointerLost(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource, Windows::UI::Core::PointerEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_PointerLost(event_token cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PointerLost(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_InkPresenter(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Input::Inking::InkPresenter>(this->shim().InkPresenter());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSourceStatics> : produce_base<D, Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSourceStatics>
{
    HRESULT __stdcall Create(void* inkPresenter, void** inkIndependentInputSource) noexcept final
    {
        try
        {
            *inkIndependentInputSource = nullptr;
            typename D::abi_guard guard(this->shim());
            *inkIndependentInputSource = detach_from<Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource>(this->shim().Create(*reinterpret_cast<Windows::UI::Input::Inking::InkPresenter const*>(&inkPresenter)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Inking::Core::ICoreInkPresenterHost> : produce_base<D, Windows::UI::Input::Inking::Core::ICoreInkPresenterHost>
{
    HRESULT __stdcall get_InkPresenter(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Input::Inking::InkPresenter>(this->shim().InkPresenter());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RootVisual(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Composition::ContainerVisual>(this->shim().RootVisual());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_RootVisual(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RootVisual(*reinterpret_cast<Windows::UI::Composition::ContainerVisual const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateEventArgs> : produce_base<D, Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateEventArgs>
{
    HRESULT __stdcall get_NewInkPoints(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::UI::Input::Inking::InkPoint>>(this->shim().NewInkPoints());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PointerId(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().PointerId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Disposition(Windows::UI::Input::Inking::Core::CoreWetStrokeDisposition* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Input::Inking::Core::CoreWetStrokeDisposition>(this->shim().Disposition());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Disposition(Windows::UI::Input::Inking::Core::CoreWetStrokeDisposition value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Disposition(*reinterpret_cast<Windows::UI::Input::Inking::Core::CoreWetStrokeDisposition const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource> : produce_base<D, Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource>
{
    HRESULT __stdcall add_WetStrokeStarting(void* handler, event_token* cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_from<event_token>(this->shim().WetStrokeStarting(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource, Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_WetStrokeStarting(event_token cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WetStrokeStarting(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_WetStrokeContinuing(void* handler, event_token* cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_from<event_token>(this->shim().WetStrokeContinuing(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource, Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_WetStrokeContinuing(event_token cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WetStrokeContinuing(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_WetStrokeStopping(void* handler, event_token* cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_from<event_token>(this->shim().WetStrokeStopping(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource, Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_WetStrokeStopping(event_token cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WetStrokeStopping(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_WetStrokeCompleted(void* handler, event_token* cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_from<event_token>(this->shim().WetStrokeCompleted(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource, Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_WetStrokeCompleted(event_token cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WetStrokeCompleted(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_WetStrokeCanceled(void* handler, event_token* cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_from<event_token>(this->shim().WetStrokeCanceled(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource, Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_WetStrokeCanceled(event_token cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WetStrokeCanceled(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_InkPresenter(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Input::Inking::InkPresenter>(this->shim().InkPresenter());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSourceStatics> : produce_base<D, Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSourceStatics>
{
    HRESULT __stdcall Create(void* inkPresenter, void** WetStrokeUpdateSource) noexcept final
    {
        try
        {
            *WetStrokeUpdateSource = nullptr;
            typename D::abi_guard guard(this->shim());
            *WetStrokeUpdateSource = detach_from<Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource>(this->shim().Create(*reinterpret_cast<Windows::UI::Input::Inking::InkPresenter const*>(&inkPresenter)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::UI::Input::Inking::Core {

inline CoreIncrementalInkStroke::CoreIncrementalInkStroke(Windows::UI::Input::Inking::InkDrawingAttributes const& drawingAttributes, Windows::Foundation::Numerics::float3x2 const& pointTransform) :
    CoreIncrementalInkStroke(get_activation_factory<CoreIncrementalInkStroke, Windows::UI::Input::Inking::Core::ICoreIncrementalInkStrokeFactory>().Create(drawingAttributes, pointTransform))
{}

inline Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource CoreInkIndependentInputSource::Create(Windows::UI::Input::Inking::InkPresenter const& inkPresenter)
{
    return get_activation_factory<CoreInkIndependentInputSource, Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSourceStatics>().Create(inkPresenter);
}

inline CoreInkPresenterHost::CoreInkPresenterHost() :
    CoreInkPresenterHost(get_activation_factory<CoreInkPresenterHost>().ActivateInstance<CoreInkPresenterHost>())
{}

inline Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource CoreWetStrokeUpdateSource::Create(Windows::UI::Input::Inking::InkPresenter const& inkPresenter)
{
    return get_activation_factory<CoreWetStrokeUpdateSource, Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSourceStatics>().Create(inkPresenter);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::UI::Input::Inking::Core::ICoreIncrementalInkStroke> : winrt::impl::hash_base<winrt::Windows::UI::Input::Inking::Core::ICoreIncrementalInkStroke> {};
template<> struct hash<winrt::Windows::UI::Input::Inking::Core::ICoreIncrementalInkStrokeFactory> : winrt::impl::hash_base<winrt::Windows::UI::Input::Inking::Core::ICoreIncrementalInkStrokeFactory> {};
template<> struct hash<winrt::Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource> : winrt::impl::hash_base<winrt::Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource> {};
template<> struct hash<winrt::Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSourceStatics> : winrt::impl::hash_base<winrt::Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSourceStatics> {};
template<> struct hash<winrt::Windows::UI::Input::Inking::Core::ICoreInkPresenterHost> : winrt::impl::hash_base<winrt::Windows::UI::Input::Inking::Core::ICoreInkPresenterHost> {};
template<> struct hash<winrt::Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateEventArgs> {};
template<> struct hash<winrt::Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource> : winrt::impl::hash_base<winrt::Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource> {};
template<> struct hash<winrt::Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSourceStatics> : winrt::impl::hash_base<winrt::Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSourceStatics> {};
template<> struct hash<winrt::Windows::UI::Input::Inking::Core::CoreIncrementalInkStroke> : winrt::impl::hash_base<winrt::Windows::UI::Input::Inking::Core::CoreIncrementalInkStroke> {};
template<> struct hash<winrt::Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource> : winrt::impl::hash_base<winrt::Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource> {};
template<> struct hash<winrt::Windows::UI::Input::Inking::Core::CoreInkPresenterHost> : winrt::impl::hash_base<winrt::Windows::UI::Input::Inking::Core::CoreInkPresenterHost> {};
template<> struct hash<winrt::Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateEventArgs> {};
template<> struct hash<winrt::Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource> : winrt::impl::hash_base<winrt::Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource> {};

}

WINRT_WARNING_POP
