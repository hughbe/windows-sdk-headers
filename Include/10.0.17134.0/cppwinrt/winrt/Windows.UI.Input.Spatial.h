// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Devices.Haptics.2.h"
#include "winrt/impl/Windows.Devices.Power.2.h"
#include "winrt/impl/Windows.Perception.2.h"
#include "winrt/impl/Windows.Perception.People.2.h"
#include "winrt/impl/Windows.Perception.Spatial.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.UI.Input.Spatial.2.h"
#include "winrt/Windows.UI.Input.h"

namespace winrt::impl {

template <typename D> event_token consume_Windows_UI_Input_Spatial_ISpatialGestureRecognizer<D>::RecognitionStarted(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialRecognitionStartedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialGestureRecognizer)->add_RecognitionStarted(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Input::Spatial::ISpatialGestureRecognizer> consume_Windows_UI_Input_Spatial_ISpatialGestureRecognizer<D>::RecognitionStarted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialRecognitionStartedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::Spatial::ISpatialGestureRecognizer>(this, &abi_t<Windows::UI::Input::Spatial::ISpatialGestureRecognizer>::remove_RecognitionStarted, RecognitionStarted(handler));
}

template <typename D> void consume_Windows_UI_Input_Spatial_ISpatialGestureRecognizer<D>::RecognitionStarted(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialGestureRecognizer)->remove_RecognitionStarted(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Input_Spatial_ISpatialGestureRecognizer<D>::RecognitionEnded(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialRecognitionEndedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialGestureRecognizer)->add_RecognitionEnded(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Input::Spatial::ISpatialGestureRecognizer> consume_Windows_UI_Input_Spatial_ISpatialGestureRecognizer<D>::RecognitionEnded(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialRecognitionEndedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::Spatial::ISpatialGestureRecognizer>(this, &abi_t<Windows::UI::Input::Spatial::ISpatialGestureRecognizer>::remove_RecognitionEnded, RecognitionEnded(handler));
}

template <typename D> void consume_Windows_UI_Input_Spatial_ISpatialGestureRecognizer<D>::RecognitionEnded(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialGestureRecognizer)->remove_RecognitionEnded(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Input_Spatial_ISpatialGestureRecognizer<D>::Tapped(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialTappedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialGestureRecognizer)->add_Tapped(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Input::Spatial::ISpatialGestureRecognizer> consume_Windows_UI_Input_Spatial_ISpatialGestureRecognizer<D>::Tapped(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialTappedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::Spatial::ISpatialGestureRecognizer>(this, &abi_t<Windows::UI::Input::Spatial::ISpatialGestureRecognizer>::remove_Tapped, Tapped(handler));
}

template <typename D> void consume_Windows_UI_Input_Spatial_ISpatialGestureRecognizer<D>::Tapped(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialGestureRecognizer)->remove_Tapped(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Input_Spatial_ISpatialGestureRecognizer<D>::HoldStarted(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialHoldStartedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialGestureRecognizer)->add_HoldStarted(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Input::Spatial::ISpatialGestureRecognizer> consume_Windows_UI_Input_Spatial_ISpatialGestureRecognizer<D>::HoldStarted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialHoldStartedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::Spatial::ISpatialGestureRecognizer>(this, &abi_t<Windows::UI::Input::Spatial::ISpatialGestureRecognizer>::remove_HoldStarted, HoldStarted(handler));
}

template <typename D> void consume_Windows_UI_Input_Spatial_ISpatialGestureRecognizer<D>::HoldStarted(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialGestureRecognizer)->remove_HoldStarted(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Input_Spatial_ISpatialGestureRecognizer<D>::HoldCompleted(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialHoldCompletedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialGestureRecognizer)->add_HoldCompleted(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Input::Spatial::ISpatialGestureRecognizer> consume_Windows_UI_Input_Spatial_ISpatialGestureRecognizer<D>::HoldCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialHoldCompletedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::Spatial::ISpatialGestureRecognizer>(this, &abi_t<Windows::UI::Input::Spatial::ISpatialGestureRecognizer>::remove_HoldCompleted, HoldCompleted(handler));
}

template <typename D> void consume_Windows_UI_Input_Spatial_ISpatialGestureRecognizer<D>::HoldCompleted(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialGestureRecognizer)->remove_HoldCompleted(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Input_Spatial_ISpatialGestureRecognizer<D>::HoldCanceled(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialHoldCanceledEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialGestureRecognizer)->add_HoldCanceled(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Input::Spatial::ISpatialGestureRecognizer> consume_Windows_UI_Input_Spatial_ISpatialGestureRecognizer<D>::HoldCanceled(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialHoldCanceledEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::Spatial::ISpatialGestureRecognizer>(this, &abi_t<Windows::UI::Input::Spatial::ISpatialGestureRecognizer>::remove_HoldCanceled, HoldCanceled(handler));
}

template <typename D> void consume_Windows_UI_Input_Spatial_ISpatialGestureRecognizer<D>::HoldCanceled(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialGestureRecognizer)->remove_HoldCanceled(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Input_Spatial_ISpatialGestureRecognizer<D>::ManipulationStarted(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialManipulationStartedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialGestureRecognizer)->add_ManipulationStarted(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Input::Spatial::ISpatialGestureRecognizer> consume_Windows_UI_Input_Spatial_ISpatialGestureRecognizer<D>::ManipulationStarted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialManipulationStartedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::Spatial::ISpatialGestureRecognizer>(this, &abi_t<Windows::UI::Input::Spatial::ISpatialGestureRecognizer>::remove_ManipulationStarted, ManipulationStarted(handler));
}

template <typename D> void consume_Windows_UI_Input_Spatial_ISpatialGestureRecognizer<D>::ManipulationStarted(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialGestureRecognizer)->remove_ManipulationStarted(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Input_Spatial_ISpatialGestureRecognizer<D>::ManipulationUpdated(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialManipulationUpdatedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialGestureRecognizer)->add_ManipulationUpdated(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Input::Spatial::ISpatialGestureRecognizer> consume_Windows_UI_Input_Spatial_ISpatialGestureRecognizer<D>::ManipulationUpdated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialManipulationUpdatedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::Spatial::ISpatialGestureRecognizer>(this, &abi_t<Windows::UI::Input::Spatial::ISpatialGestureRecognizer>::remove_ManipulationUpdated, ManipulationUpdated(handler));
}

template <typename D> void consume_Windows_UI_Input_Spatial_ISpatialGestureRecognizer<D>::ManipulationUpdated(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialGestureRecognizer)->remove_ManipulationUpdated(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Input_Spatial_ISpatialGestureRecognizer<D>::ManipulationCompleted(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialManipulationCompletedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialGestureRecognizer)->add_ManipulationCompleted(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Input::Spatial::ISpatialGestureRecognizer> consume_Windows_UI_Input_Spatial_ISpatialGestureRecognizer<D>::ManipulationCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialManipulationCompletedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::Spatial::ISpatialGestureRecognizer>(this, &abi_t<Windows::UI::Input::Spatial::ISpatialGestureRecognizer>::remove_ManipulationCompleted, ManipulationCompleted(handler));
}

template <typename D> void consume_Windows_UI_Input_Spatial_ISpatialGestureRecognizer<D>::ManipulationCompleted(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialGestureRecognizer)->remove_ManipulationCompleted(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Input_Spatial_ISpatialGestureRecognizer<D>::ManipulationCanceled(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialManipulationCanceledEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialGestureRecognizer)->add_ManipulationCanceled(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Input::Spatial::ISpatialGestureRecognizer> consume_Windows_UI_Input_Spatial_ISpatialGestureRecognizer<D>::ManipulationCanceled(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialManipulationCanceledEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::Spatial::ISpatialGestureRecognizer>(this, &abi_t<Windows::UI::Input::Spatial::ISpatialGestureRecognizer>::remove_ManipulationCanceled, ManipulationCanceled(handler));
}

template <typename D> void consume_Windows_UI_Input_Spatial_ISpatialGestureRecognizer<D>::ManipulationCanceled(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialGestureRecognizer)->remove_ManipulationCanceled(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Input_Spatial_ISpatialGestureRecognizer<D>::NavigationStarted(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialNavigationStartedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialGestureRecognizer)->add_NavigationStarted(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Input::Spatial::ISpatialGestureRecognizer> consume_Windows_UI_Input_Spatial_ISpatialGestureRecognizer<D>::NavigationStarted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialNavigationStartedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::Spatial::ISpatialGestureRecognizer>(this, &abi_t<Windows::UI::Input::Spatial::ISpatialGestureRecognizer>::remove_NavigationStarted, NavigationStarted(handler));
}

template <typename D> void consume_Windows_UI_Input_Spatial_ISpatialGestureRecognizer<D>::NavigationStarted(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialGestureRecognizer)->remove_NavigationStarted(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Input_Spatial_ISpatialGestureRecognizer<D>::NavigationUpdated(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialNavigationUpdatedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialGestureRecognizer)->add_NavigationUpdated(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Input::Spatial::ISpatialGestureRecognizer> consume_Windows_UI_Input_Spatial_ISpatialGestureRecognizer<D>::NavigationUpdated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialNavigationUpdatedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::Spatial::ISpatialGestureRecognizer>(this, &abi_t<Windows::UI::Input::Spatial::ISpatialGestureRecognizer>::remove_NavigationUpdated, NavigationUpdated(handler));
}

template <typename D> void consume_Windows_UI_Input_Spatial_ISpatialGestureRecognizer<D>::NavigationUpdated(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialGestureRecognizer)->remove_NavigationUpdated(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Input_Spatial_ISpatialGestureRecognizer<D>::NavigationCompleted(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialNavigationCompletedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialGestureRecognizer)->add_NavigationCompleted(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Input::Spatial::ISpatialGestureRecognizer> consume_Windows_UI_Input_Spatial_ISpatialGestureRecognizer<D>::NavigationCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialNavigationCompletedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::Spatial::ISpatialGestureRecognizer>(this, &abi_t<Windows::UI::Input::Spatial::ISpatialGestureRecognizer>::remove_NavigationCompleted, NavigationCompleted(handler));
}

template <typename D> void consume_Windows_UI_Input_Spatial_ISpatialGestureRecognizer<D>::NavigationCompleted(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialGestureRecognizer)->remove_NavigationCompleted(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Input_Spatial_ISpatialGestureRecognizer<D>::NavigationCanceled(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialNavigationCanceledEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialGestureRecognizer)->add_NavigationCanceled(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Input::Spatial::ISpatialGestureRecognizer> consume_Windows_UI_Input_Spatial_ISpatialGestureRecognizer<D>::NavigationCanceled(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialNavigationCanceledEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::Spatial::ISpatialGestureRecognizer>(this, &abi_t<Windows::UI::Input::Spatial::ISpatialGestureRecognizer>::remove_NavigationCanceled, NavigationCanceled(handler));
}

template <typename D> void consume_Windows_UI_Input_Spatial_ISpatialGestureRecognizer<D>::NavigationCanceled(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialGestureRecognizer)->remove_NavigationCanceled(get_abi(token)));
}

template <typename D> void consume_Windows_UI_Input_Spatial_ISpatialGestureRecognizer<D>::CaptureInteraction(Windows::UI::Input::Spatial::SpatialInteraction const& interaction) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialGestureRecognizer)->CaptureInteraction(get_abi(interaction)));
}

template <typename D> void consume_Windows_UI_Input_Spatial_ISpatialGestureRecognizer<D>::CancelPendingGestures() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialGestureRecognizer)->CancelPendingGestures());
}

template <typename D> bool consume_Windows_UI_Input_Spatial_ISpatialGestureRecognizer<D>::TrySetGestureSettings(Windows::UI::Input::Spatial::SpatialGestureSettings const& settings) const
{
    bool succeeded{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialGestureRecognizer)->TrySetGestureSettings(get_abi(settings), &succeeded));
    return succeeded;
}

template <typename D> Windows::UI::Input::Spatial::SpatialGestureSettings consume_Windows_UI_Input_Spatial_ISpatialGestureRecognizer<D>::GestureSettings() const
{
    Windows::UI::Input::Spatial::SpatialGestureSettings value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialGestureRecognizer)->get_GestureSettings(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialGestureRecognizer consume_Windows_UI_Input_Spatial_ISpatialGestureRecognizerFactory<D>::Create(Windows::UI::Input::Spatial::SpatialGestureSettings const& settings) const
{
    Windows::UI::Input::Spatial::SpatialGestureRecognizer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialGestureRecognizerFactory)->Create(get_abi(settings), put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialInteractionSourceKind consume_Windows_UI_Input_Spatial_ISpatialHoldCanceledEventArgs<D>::InteractionSourceKind() const
{
    Windows::UI::Input::Spatial::SpatialInteractionSourceKind value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialHoldCanceledEventArgs)->get_InteractionSourceKind(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialInteractionSourceKind consume_Windows_UI_Input_Spatial_ISpatialHoldCompletedEventArgs<D>::InteractionSourceKind() const
{
    Windows::UI::Input::Spatial::SpatialInteractionSourceKind value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialHoldCompletedEventArgs)->get_InteractionSourceKind(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialInteractionSourceKind consume_Windows_UI_Input_Spatial_ISpatialHoldStartedEventArgs<D>::InteractionSourceKind() const
{
    Windows::UI::Input::Spatial::SpatialInteractionSourceKind value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialHoldStartedEventArgs)->get_InteractionSourceKind(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialPointerPose consume_Windows_UI_Input_Spatial_ISpatialHoldStartedEventArgs<D>::TryGetPointerPose(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem) const
{
    Windows::UI::Input::Spatial::SpatialPointerPose value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialHoldStartedEventArgs)->TryGetPointerPose(get_abi(coordinateSystem), put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialInteractionSourceState consume_Windows_UI_Input_Spatial_ISpatialInteraction<D>::SourceState() const
{
    Windows::UI::Input::Spatial::SpatialInteractionSourceState value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteraction)->get_SourceState(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Input_Spatial_ISpatialInteractionController<D>::HasTouchpad() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionController)->get_HasTouchpad(&value));
    return value;
}

template <typename D> bool consume_Windows_UI_Input_Spatial_ISpatialInteractionController<D>::HasThumbstick() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionController)->get_HasThumbstick(&value));
    return value;
}

template <typename D> Windows::Devices::Haptics::SimpleHapticsController consume_Windows_UI_Input_Spatial_ISpatialInteractionController<D>::SimpleHapticsController() const
{
    Windows::Devices::Haptics::SimpleHapticsController value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionController)->get_SimpleHapticsController(put_abi(value)));
    return value;
}

template <typename D> uint16_t consume_Windows_UI_Input_Spatial_ISpatialInteractionController<D>::VendorId() const
{
    uint16_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionController)->get_VendorId(&value));
    return value;
}

template <typename D> uint16_t consume_Windows_UI_Input_Spatial_ISpatialInteractionController<D>::ProductId() const
{
    uint16_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionController)->get_ProductId(&value));
    return value;
}

template <typename D> uint16_t consume_Windows_UI_Input_Spatial_ISpatialInteractionController<D>::Version() const
{
    uint16_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionController)->get_Version(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType> consume_Windows_UI_Input_Spatial_ISpatialInteractionController2<D>::TryGetRenderableModelAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionController2)->TryGetRenderableModelAsync(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Power::BatteryReport consume_Windows_UI_Input_Spatial_ISpatialInteractionController3<D>::TryGetBatteryReport() const
{
    Windows::Devices::Power::BatteryReport value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionController3)->TryGetBatteryReport(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Input_Spatial_ISpatialInteractionControllerProperties<D>::IsTouchpadTouched() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionControllerProperties)->get_IsTouchpadTouched(&value));
    return value;
}

template <typename D> bool consume_Windows_UI_Input_Spatial_ISpatialInteractionControllerProperties<D>::IsTouchpadPressed() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionControllerProperties)->get_IsTouchpadPressed(&value));
    return value;
}

template <typename D> bool consume_Windows_UI_Input_Spatial_ISpatialInteractionControllerProperties<D>::IsThumbstickPressed() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionControllerProperties)->get_IsThumbstickPressed(&value));
    return value;
}

template <typename D> double consume_Windows_UI_Input_Spatial_ISpatialInteractionControllerProperties<D>::ThumbstickX() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionControllerProperties)->get_ThumbstickX(&value));
    return value;
}

template <typename D> double consume_Windows_UI_Input_Spatial_ISpatialInteractionControllerProperties<D>::ThumbstickY() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionControllerProperties)->get_ThumbstickY(&value));
    return value;
}

template <typename D> double consume_Windows_UI_Input_Spatial_ISpatialInteractionControllerProperties<D>::TouchpadX() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionControllerProperties)->get_TouchpadX(&value));
    return value;
}

template <typename D> double consume_Windows_UI_Input_Spatial_ISpatialInteractionControllerProperties<D>::TouchpadY() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionControllerProperties)->get_TouchpadY(&value));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialInteractionSourceKind consume_Windows_UI_Input_Spatial_ISpatialInteractionDetectedEventArgs<D>::InteractionSourceKind() const
{
    Windows::UI::Input::Spatial::SpatialInteractionSourceKind value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionDetectedEventArgs)->get_InteractionSourceKind(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialPointerPose consume_Windows_UI_Input_Spatial_ISpatialInteractionDetectedEventArgs<D>::TryGetPointerPose(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem) const
{
    Windows::UI::Input::Spatial::SpatialPointerPose value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionDetectedEventArgs)->TryGetPointerPose(get_abi(coordinateSystem), put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialInteraction consume_Windows_UI_Input_Spatial_ISpatialInteractionDetectedEventArgs<D>::Interaction() const
{
    Windows::UI::Input::Spatial::SpatialInteraction value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionDetectedEventArgs)->get_Interaction(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialInteractionSource consume_Windows_UI_Input_Spatial_ISpatialInteractionDetectedEventArgs2<D>::InteractionSource() const
{
    Windows::UI::Input::Spatial::SpatialInteractionSource value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionDetectedEventArgs2)->get_InteractionSource(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_UI_Input_Spatial_ISpatialInteractionManager<D>::SourceDetected(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialInteractionManager, Windows::UI::Input::Spatial::SpatialInteractionSourceEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionManager)->add_SourceDetected(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Input::Spatial::ISpatialInteractionManager> consume_Windows_UI_Input_Spatial_ISpatialInteractionManager<D>::SourceDetected(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialInteractionManager, Windows::UI::Input::Spatial::SpatialInteractionSourceEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::Spatial::ISpatialInteractionManager>(this, &abi_t<Windows::UI::Input::Spatial::ISpatialInteractionManager>::remove_SourceDetected, SourceDetected(handler));
}

template <typename D> void consume_Windows_UI_Input_Spatial_ISpatialInteractionManager<D>::SourceDetected(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionManager)->remove_SourceDetected(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Input_Spatial_ISpatialInteractionManager<D>::SourceLost(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialInteractionManager, Windows::UI::Input::Spatial::SpatialInteractionSourceEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionManager)->add_SourceLost(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Input::Spatial::ISpatialInteractionManager> consume_Windows_UI_Input_Spatial_ISpatialInteractionManager<D>::SourceLost(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialInteractionManager, Windows::UI::Input::Spatial::SpatialInteractionSourceEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::Spatial::ISpatialInteractionManager>(this, &abi_t<Windows::UI::Input::Spatial::ISpatialInteractionManager>::remove_SourceLost, SourceLost(handler));
}

template <typename D> void consume_Windows_UI_Input_Spatial_ISpatialInteractionManager<D>::SourceLost(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionManager)->remove_SourceLost(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Input_Spatial_ISpatialInteractionManager<D>::SourceUpdated(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialInteractionManager, Windows::UI::Input::Spatial::SpatialInteractionSourceEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionManager)->add_SourceUpdated(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Input::Spatial::ISpatialInteractionManager> consume_Windows_UI_Input_Spatial_ISpatialInteractionManager<D>::SourceUpdated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialInteractionManager, Windows::UI::Input::Spatial::SpatialInteractionSourceEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::Spatial::ISpatialInteractionManager>(this, &abi_t<Windows::UI::Input::Spatial::ISpatialInteractionManager>::remove_SourceUpdated, SourceUpdated(handler));
}

template <typename D> void consume_Windows_UI_Input_Spatial_ISpatialInteractionManager<D>::SourceUpdated(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionManager)->remove_SourceUpdated(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Input_Spatial_ISpatialInteractionManager<D>::SourcePressed(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialInteractionManager, Windows::UI::Input::Spatial::SpatialInteractionSourceEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionManager)->add_SourcePressed(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Input::Spatial::ISpatialInteractionManager> consume_Windows_UI_Input_Spatial_ISpatialInteractionManager<D>::SourcePressed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialInteractionManager, Windows::UI::Input::Spatial::SpatialInteractionSourceEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::Spatial::ISpatialInteractionManager>(this, &abi_t<Windows::UI::Input::Spatial::ISpatialInteractionManager>::remove_SourcePressed, SourcePressed(handler));
}

template <typename D> void consume_Windows_UI_Input_Spatial_ISpatialInteractionManager<D>::SourcePressed(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionManager)->remove_SourcePressed(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Input_Spatial_ISpatialInteractionManager<D>::SourceReleased(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialInteractionManager, Windows::UI::Input::Spatial::SpatialInteractionSourceEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionManager)->add_SourceReleased(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Input::Spatial::ISpatialInteractionManager> consume_Windows_UI_Input_Spatial_ISpatialInteractionManager<D>::SourceReleased(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialInteractionManager, Windows::UI::Input::Spatial::SpatialInteractionSourceEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::Spatial::ISpatialInteractionManager>(this, &abi_t<Windows::UI::Input::Spatial::ISpatialInteractionManager>::remove_SourceReleased, SourceReleased(handler));
}

template <typename D> void consume_Windows_UI_Input_Spatial_ISpatialInteractionManager<D>::SourceReleased(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionManager)->remove_SourceReleased(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Input_Spatial_ISpatialInteractionManager<D>::InteractionDetected(Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialInteractionManager, Windows::UI::Input::Spatial::SpatialInteractionDetectedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionManager)->add_InteractionDetected(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Input::Spatial::ISpatialInteractionManager> consume_Windows_UI_Input_Spatial_ISpatialInteractionManager<D>::InteractionDetected(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialInteractionManager, Windows::UI::Input::Spatial::SpatialInteractionDetectedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Input::Spatial::ISpatialInteractionManager>(this, &abi_t<Windows::UI::Input::Spatial::ISpatialInteractionManager>::remove_InteractionDetected, InteractionDetected(handler));
}

template <typename D> void consume_Windows_UI_Input_Spatial_ISpatialInteractionManager<D>::InteractionDetected(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionManager)->remove_InteractionDetected(get_abi(token)));
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Spatial::SpatialInteractionSourceState> consume_Windows_UI_Input_Spatial_ISpatialInteractionManager<D>::GetDetectedSourcesAtTimestamp(Windows::Perception::PerceptionTimestamp const& timeStamp) const
{
    Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Spatial::SpatialInteractionSourceState> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionManager)->GetDetectedSourcesAtTimestamp(get_abi(timeStamp), put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialInteractionManager consume_Windows_UI_Input_Spatial_ISpatialInteractionManagerStatics<D>::GetForCurrentView() const
{
    Windows::UI::Input::Spatial::SpatialInteractionManager value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionManagerStatics)->GetForCurrentView(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_UI_Input_Spatial_ISpatialInteractionSource<D>::Id() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionSource)->get_Id(&value));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialInteractionSourceKind consume_Windows_UI_Input_Spatial_ISpatialInteractionSource<D>::Kind() const
{
    Windows::UI::Input::Spatial::SpatialInteractionSourceKind value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionSource)->get_Kind(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Input_Spatial_ISpatialInteractionSource2<D>::IsPointingSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionSource2)->get_IsPointingSupported(&value));
    return value;
}

template <typename D> bool consume_Windows_UI_Input_Spatial_ISpatialInteractionSource2<D>::IsMenuSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionSource2)->get_IsMenuSupported(&value));
    return value;
}

template <typename D> bool consume_Windows_UI_Input_Spatial_ISpatialInteractionSource2<D>::IsGraspSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionSource2)->get_IsGraspSupported(&value));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialInteractionController consume_Windows_UI_Input_Spatial_ISpatialInteractionSource2<D>::Controller() const
{
    Windows::UI::Input::Spatial::SpatialInteractionController value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionSource2)->get_Controller(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialInteractionSourceState consume_Windows_UI_Input_Spatial_ISpatialInteractionSource2<D>::TryGetStateAtTimestamp(Windows::Perception::PerceptionTimestamp const& timestamp) const
{
    Windows::UI::Input::Spatial::SpatialInteractionSourceState value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionSource2)->TryGetStateAtTimestamp(get_abi(timestamp), put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialInteractionSourceHandedness consume_Windows_UI_Input_Spatial_ISpatialInteractionSource3<D>::Handedness() const
{
    Windows::UI::Input::Spatial::SpatialInteractionSourceHandedness value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionSource3)->get_Handedness(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialInteractionSourceState consume_Windows_UI_Input_Spatial_ISpatialInteractionSourceEventArgs<D>::State() const
{
    Windows::UI::Input::Spatial::SpatialInteractionSourceState value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionSourceEventArgs)->get_State(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialInteractionPressKind consume_Windows_UI_Input_Spatial_ISpatialInteractionSourceEventArgs2<D>::PressKind() const
{
    Windows::UI::Input::Spatial::SpatialInteractionPressKind value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionSourceEventArgs2)->get_PressKind(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::Numerics::float3> consume_Windows_UI_Input_Spatial_ISpatialInteractionSourceLocation<D>::Position() const
{
    Windows::Foundation::IReference<Windows::Foundation::Numerics::float3> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionSourceLocation)->get_Position(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::Numerics::float3> consume_Windows_UI_Input_Spatial_ISpatialInteractionSourceLocation<D>::Velocity() const
{
    Windows::Foundation::IReference<Windows::Foundation::Numerics::float3> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionSourceLocation)->get_Velocity(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::Numerics::quaternion> consume_Windows_UI_Input_Spatial_ISpatialInteractionSourceLocation2<D>::Orientation() const
{
    Windows::Foundation::IReference<Windows::Foundation::Numerics::quaternion> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionSourceLocation2)->get_Orientation(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialInteractionSourcePositionAccuracy consume_Windows_UI_Input_Spatial_ISpatialInteractionSourceLocation3<D>::PositionAccuracy() const
{
    Windows::UI::Input::Spatial::SpatialInteractionSourcePositionAccuracy value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionSourceLocation3)->get_PositionAccuracy(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::Numerics::float3> consume_Windows_UI_Input_Spatial_ISpatialInteractionSourceLocation3<D>::AngularVelocity() const
{
    Windows::Foundation::IReference<Windows::Foundation::Numerics::float3> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionSourceLocation3)->get_AngularVelocity(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialPointerInteractionSourcePose consume_Windows_UI_Input_Spatial_ISpatialInteractionSourceLocation3<D>::SourcePointerPose() const
{
    Windows::UI::Input::Spatial::SpatialPointerInteractionSourcePose value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionSourceLocation3)->get_SourcePointerPose(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::Numerics::float3> consume_Windows_UI_Input_Spatial_ISpatialInteractionSourceProperties<D>::TryGetSourceLossMitigationDirection(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem) const
{
    Windows::Foundation::IReference<Windows::Foundation::Numerics::float3> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionSourceProperties)->TryGetSourceLossMitigationDirection(get_abi(coordinateSystem), put_abi(value)));
    return value;
}

template <typename D> double consume_Windows_UI_Input_Spatial_ISpatialInteractionSourceProperties<D>::SourceLossRisk() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionSourceProperties)->get_SourceLossRisk(&value));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialInteractionSourceLocation consume_Windows_UI_Input_Spatial_ISpatialInteractionSourceProperties<D>::TryGetLocation(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem) const
{
    Windows::UI::Input::Spatial::SpatialInteractionSourceLocation value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionSourceProperties)->TryGetLocation(get_abi(coordinateSystem), put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialInteractionSource consume_Windows_UI_Input_Spatial_ISpatialInteractionSourceState<D>::Source() const
{
    Windows::UI::Input::Spatial::SpatialInteractionSource value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionSourceState)->get_Source(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialInteractionSourceProperties consume_Windows_UI_Input_Spatial_ISpatialInteractionSourceState<D>::Properties() const
{
    Windows::UI::Input::Spatial::SpatialInteractionSourceProperties value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionSourceState)->get_Properties(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Input_Spatial_ISpatialInteractionSourceState<D>::IsPressed() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionSourceState)->get_IsPressed(&value));
    return value;
}

template <typename D> Windows::Perception::PerceptionTimestamp consume_Windows_UI_Input_Spatial_ISpatialInteractionSourceState<D>::Timestamp() const
{
    Windows::Perception::PerceptionTimestamp value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionSourceState)->get_Timestamp(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialPointerPose consume_Windows_UI_Input_Spatial_ISpatialInteractionSourceState<D>::TryGetPointerPose(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem) const
{
    Windows::UI::Input::Spatial::SpatialPointerPose value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionSourceState)->TryGetPointerPose(get_abi(coordinateSystem), put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Input_Spatial_ISpatialInteractionSourceState2<D>::IsSelectPressed() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionSourceState2)->get_IsSelectPressed(&value));
    return value;
}

template <typename D> bool consume_Windows_UI_Input_Spatial_ISpatialInteractionSourceState2<D>::IsMenuPressed() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionSourceState2)->get_IsMenuPressed(&value));
    return value;
}

template <typename D> bool consume_Windows_UI_Input_Spatial_ISpatialInteractionSourceState2<D>::IsGrasped() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionSourceState2)->get_IsGrasped(&value));
    return value;
}

template <typename D> double consume_Windows_UI_Input_Spatial_ISpatialInteractionSourceState2<D>::SelectPressedValue() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionSourceState2)->get_SelectPressedValue(&value));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialInteractionControllerProperties consume_Windows_UI_Input_Spatial_ISpatialInteractionSourceState2<D>::ControllerProperties() const
{
    Windows::UI::Input::Spatial::SpatialInteractionControllerProperties value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialInteractionSourceState2)->get_ControllerProperties(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialInteractionSourceKind consume_Windows_UI_Input_Spatial_ISpatialManipulationCanceledEventArgs<D>::InteractionSourceKind() const
{
    Windows::UI::Input::Spatial::SpatialInteractionSourceKind value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialManipulationCanceledEventArgs)->get_InteractionSourceKind(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialInteractionSourceKind consume_Windows_UI_Input_Spatial_ISpatialManipulationCompletedEventArgs<D>::InteractionSourceKind() const
{
    Windows::UI::Input::Spatial::SpatialInteractionSourceKind value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialManipulationCompletedEventArgs)->get_InteractionSourceKind(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialManipulationDelta consume_Windows_UI_Input_Spatial_ISpatialManipulationCompletedEventArgs<D>::TryGetCumulativeDelta(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem) const
{
    Windows::UI::Input::Spatial::SpatialManipulationDelta value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialManipulationCompletedEventArgs)->TryGetCumulativeDelta(get_abi(coordinateSystem), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Numerics::float3 consume_Windows_UI_Input_Spatial_ISpatialManipulationDelta<D>::Translation() const
{
    Windows::Foundation::Numerics::float3 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialManipulationDelta)->get_Translation(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialInteractionSourceKind consume_Windows_UI_Input_Spatial_ISpatialManipulationStartedEventArgs<D>::InteractionSourceKind() const
{
    Windows::UI::Input::Spatial::SpatialInteractionSourceKind value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialManipulationStartedEventArgs)->get_InteractionSourceKind(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialPointerPose consume_Windows_UI_Input_Spatial_ISpatialManipulationStartedEventArgs<D>::TryGetPointerPose(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem) const
{
    Windows::UI::Input::Spatial::SpatialPointerPose value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialManipulationStartedEventArgs)->TryGetPointerPose(get_abi(coordinateSystem), put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialInteractionSourceKind consume_Windows_UI_Input_Spatial_ISpatialManipulationUpdatedEventArgs<D>::InteractionSourceKind() const
{
    Windows::UI::Input::Spatial::SpatialInteractionSourceKind value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialManipulationUpdatedEventArgs)->get_InteractionSourceKind(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialManipulationDelta consume_Windows_UI_Input_Spatial_ISpatialManipulationUpdatedEventArgs<D>::TryGetCumulativeDelta(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem) const
{
    Windows::UI::Input::Spatial::SpatialManipulationDelta value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialManipulationUpdatedEventArgs)->TryGetCumulativeDelta(get_abi(coordinateSystem), put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialInteractionSourceKind consume_Windows_UI_Input_Spatial_ISpatialNavigationCanceledEventArgs<D>::InteractionSourceKind() const
{
    Windows::UI::Input::Spatial::SpatialInteractionSourceKind value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialNavigationCanceledEventArgs)->get_InteractionSourceKind(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialInteractionSourceKind consume_Windows_UI_Input_Spatial_ISpatialNavigationCompletedEventArgs<D>::InteractionSourceKind() const
{
    Windows::UI::Input::Spatial::SpatialInteractionSourceKind value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialNavigationCompletedEventArgs)->get_InteractionSourceKind(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Numerics::float3 consume_Windows_UI_Input_Spatial_ISpatialNavigationCompletedEventArgs<D>::NormalizedOffset() const
{
    Windows::Foundation::Numerics::float3 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialNavigationCompletedEventArgs)->get_NormalizedOffset(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialInteractionSourceKind consume_Windows_UI_Input_Spatial_ISpatialNavigationStartedEventArgs<D>::InteractionSourceKind() const
{
    Windows::UI::Input::Spatial::SpatialInteractionSourceKind value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialNavigationStartedEventArgs)->get_InteractionSourceKind(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialPointerPose consume_Windows_UI_Input_Spatial_ISpatialNavigationStartedEventArgs<D>::TryGetPointerPose(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem) const
{
    Windows::UI::Input::Spatial::SpatialPointerPose value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialNavigationStartedEventArgs)->TryGetPointerPose(get_abi(coordinateSystem), put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Input_Spatial_ISpatialNavigationStartedEventArgs<D>::IsNavigatingX() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialNavigationStartedEventArgs)->get_IsNavigatingX(&value));
    return value;
}

template <typename D> bool consume_Windows_UI_Input_Spatial_ISpatialNavigationStartedEventArgs<D>::IsNavigatingY() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialNavigationStartedEventArgs)->get_IsNavigatingY(&value));
    return value;
}

template <typename D> bool consume_Windows_UI_Input_Spatial_ISpatialNavigationStartedEventArgs<D>::IsNavigatingZ() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialNavigationStartedEventArgs)->get_IsNavigatingZ(&value));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialInteractionSourceKind consume_Windows_UI_Input_Spatial_ISpatialNavigationUpdatedEventArgs<D>::InteractionSourceKind() const
{
    Windows::UI::Input::Spatial::SpatialInteractionSourceKind value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialNavigationUpdatedEventArgs)->get_InteractionSourceKind(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Numerics::float3 consume_Windows_UI_Input_Spatial_ISpatialNavigationUpdatedEventArgs<D>::NormalizedOffset() const
{
    Windows::Foundation::Numerics::float3 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialNavigationUpdatedEventArgs)->get_NormalizedOffset(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Numerics::float3 consume_Windows_UI_Input_Spatial_ISpatialPointerInteractionSourcePose<D>::Position() const
{
    Windows::Foundation::Numerics::float3 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialPointerInteractionSourcePose)->get_Position(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Numerics::float3 consume_Windows_UI_Input_Spatial_ISpatialPointerInteractionSourcePose<D>::ForwardDirection() const
{
    Windows::Foundation::Numerics::float3 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialPointerInteractionSourcePose)->get_ForwardDirection(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Numerics::float3 consume_Windows_UI_Input_Spatial_ISpatialPointerInteractionSourcePose<D>::UpDirection() const
{
    Windows::Foundation::Numerics::float3 value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialPointerInteractionSourcePose)->get_UpDirection(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Numerics::quaternion consume_Windows_UI_Input_Spatial_ISpatialPointerInteractionSourcePose2<D>::Orientation() const
{
    Windows::Foundation::Numerics::quaternion value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialPointerInteractionSourcePose2)->get_Orientation(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialInteractionSourcePositionAccuracy consume_Windows_UI_Input_Spatial_ISpatialPointerInteractionSourcePose2<D>::PositionAccuracy() const
{
    Windows::UI::Input::Spatial::SpatialInteractionSourcePositionAccuracy value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialPointerInteractionSourcePose2)->get_PositionAccuracy(put_abi(value)));
    return value;
}

template <typename D> Windows::Perception::PerceptionTimestamp consume_Windows_UI_Input_Spatial_ISpatialPointerPose<D>::Timestamp() const
{
    Windows::Perception::PerceptionTimestamp value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialPointerPose)->get_Timestamp(put_abi(value)));
    return value;
}

template <typename D> Windows::Perception::People::HeadPose consume_Windows_UI_Input_Spatial_ISpatialPointerPose<D>::Head() const
{
    Windows::Perception::People::HeadPose value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialPointerPose)->get_Head(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialPointerInteractionSourcePose consume_Windows_UI_Input_Spatial_ISpatialPointerPose2<D>::TryGetInteractionSourcePose(Windows::UI::Input::Spatial::SpatialInteractionSource const& source) const
{
    Windows::UI::Input::Spatial::SpatialPointerInteractionSourcePose value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialPointerPose2)->TryGetInteractionSourcePose(get_abi(source), put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialPointerPose consume_Windows_UI_Input_Spatial_ISpatialPointerPoseStatics<D>::TryGetAtTimestamp(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem, Windows::Perception::PerceptionTimestamp const& timestamp) const
{
    Windows::UI::Input::Spatial::SpatialPointerPose value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialPointerPoseStatics)->TryGetAtTimestamp(get_abi(coordinateSystem), get_abi(timestamp), put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialInteractionSourceKind consume_Windows_UI_Input_Spatial_ISpatialRecognitionEndedEventArgs<D>::InteractionSourceKind() const
{
    Windows::UI::Input::Spatial::SpatialInteractionSourceKind value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialRecognitionEndedEventArgs)->get_InteractionSourceKind(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialInteractionSourceKind consume_Windows_UI_Input_Spatial_ISpatialRecognitionStartedEventArgs<D>::InteractionSourceKind() const
{
    Windows::UI::Input::Spatial::SpatialInteractionSourceKind value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialRecognitionStartedEventArgs)->get_InteractionSourceKind(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialPointerPose consume_Windows_UI_Input_Spatial_ISpatialRecognitionStartedEventArgs<D>::TryGetPointerPose(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem) const
{
    Windows::UI::Input::Spatial::SpatialPointerPose value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialRecognitionStartedEventArgs)->TryGetPointerPose(get_abi(coordinateSystem), put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Input_Spatial_ISpatialRecognitionStartedEventArgs<D>::IsGesturePossible(Windows::UI::Input::Spatial::SpatialGestureSettings const& gesture) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialRecognitionStartedEventArgs)->IsGesturePossible(get_abi(gesture), &value));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialInteractionSourceKind consume_Windows_UI_Input_Spatial_ISpatialTappedEventArgs<D>::InteractionSourceKind() const
{
    Windows::UI::Input::Spatial::SpatialInteractionSourceKind value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialTappedEventArgs)->get_InteractionSourceKind(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Input::Spatial::SpatialPointerPose consume_Windows_UI_Input_Spatial_ISpatialTappedEventArgs<D>::TryGetPointerPose(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem) const
{
    Windows::UI::Input::Spatial::SpatialPointerPose value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialTappedEventArgs)->TryGetPointerPose(get_abi(coordinateSystem), put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_UI_Input_Spatial_ISpatialTappedEventArgs<D>::TapCount() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Input::Spatial::ISpatialTappedEventArgs)->get_TapCount(&value));
    return value;
}

template <typename D>
struct produce<D, Windows::UI::Input::Spatial::ISpatialGestureRecognizer> : produce_base<D, Windows::UI::Input::Spatial::ISpatialGestureRecognizer>
{
    HRESULT __stdcall add_RecognitionStarted(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().RecognitionStarted(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialRecognitionStartedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_RecognitionStarted(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RecognitionStarted(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_RecognitionEnded(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().RecognitionEnded(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialRecognitionEndedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_RecognitionEnded(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RecognitionEnded(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_Tapped(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().Tapped(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialTappedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_Tapped(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Tapped(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_HoldStarted(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().HoldStarted(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialHoldStartedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_HoldStarted(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HoldStarted(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_HoldCompleted(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().HoldCompleted(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialHoldCompletedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_HoldCompleted(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HoldCompleted(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_HoldCanceled(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().HoldCanceled(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialHoldCanceledEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_HoldCanceled(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HoldCanceled(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_ManipulationStarted(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().ManipulationStarted(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialManipulationStartedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_ManipulationStarted(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ManipulationStarted(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_ManipulationUpdated(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().ManipulationUpdated(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialManipulationUpdatedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_ManipulationUpdated(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ManipulationUpdated(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_ManipulationCompleted(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().ManipulationCompleted(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialManipulationCompletedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_ManipulationCompleted(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ManipulationCompleted(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_ManipulationCanceled(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().ManipulationCanceled(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialManipulationCanceledEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_ManipulationCanceled(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ManipulationCanceled(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_NavigationStarted(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().NavigationStarted(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialNavigationStartedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_NavigationStarted(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NavigationStarted(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_NavigationUpdated(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().NavigationUpdated(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialNavigationUpdatedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_NavigationUpdated(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NavigationUpdated(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_NavigationCompleted(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().NavigationCompleted(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialNavigationCompletedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_NavigationCompleted(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NavigationCompleted(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_NavigationCanceled(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().NavigationCanceled(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer, Windows::UI::Input::Spatial::SpatialNavigationCanceledEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_NavigationCanceled(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NavigationCanceled(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CaptureInteraction(void* interaction) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CaptureInteraction(*reinterpret_cast<Windows::UI::Input::Spatial::SpatialInteraction const*>(&interaction));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CancelPendingGestures() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CancelPendingGestures();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall TrySetGestureSettings(Windows::UI::Input::Spatial::SpatialGestureSettings settings, bool* succeeded) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *succeeded = detach_from<bool>(this->shim().TrySetGestureSettings(*reinterpret_cast<Windows::UI::Input::Spatial::SpatialGestureSettings const*>(&settings)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_GestureSettings(Windows::UI::Input::Spatial::SpatialGestureSettings* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Input::Spatial::SpatialGestureSettings>(this->shim().GestureSettings());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Spatial::ISpatialGestureRecognizerFactory> : produce_base<D, Windows::UI::Input::Spatial::ISpatialGestureRecognizerFactory>
{
    HRESULT __stdcall Create(Windows::UI::Input::Spatial::SpatialGestureSettings settings, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Input::Spatial::SpatialGestureRecognizer>(this->shim().Create(*reinterpret_cast<Windows::UI::Input::Spatial::SpatialGestureSettings const*>(&settings)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Spatial::ISpatialHoldCanceledEventArgs> : produce_base<D, Windows::UI::Input::Spatial::ISpatialHoldCanceledEventArgs>
{
    HRESULT __stdcall get_InteractionSourceKind(Windows::UI::Input::Spatial::SpatialInteractionSourceKind* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Input::Spatial::SpatialInteractionSourceKind>(this->shim().InteractionSourceKind());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Spatial::ISpatialHoldCompletedEventArgs> : produce_base<D, Windows::UI::Input::Spatial::ISpatialHoldCompletedEventArgs>
{
    HRESULT __stdcall get_InteractionSourceKind(Windows::UI::Input::Spatial::SpatialInteractionSourceKind* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Input::Spatial::SpatialInteractionSourceKind>(this->shim().InteractionSourceKind());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Spatial::ISpatialHoldStartedEventArgs> : produce_base<D, Windows::UI::Input::Spatial::ISpatialHoldStartedEventArgs>
{
    HRESULT __stdcall get_InteractionSourceKind(Windows::UI::Input::Spatial::SpatialInteractionSourceKind* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Input::Spatial::SpatialInteractionSourceKind>(this->shim().InteractionSourceKind());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall TryGetPointerPose(void* coordinateSystem, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Input::Spatial::SpatialPointerPose>(this->shim().TryGetPointerPose(*reinterpret_cast<Windows::Perception::Spatial::SpatialCoordinateSystem const*>(&coordinateSystem)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Spatial::ISpatialInteraction> : produce_base<D, Windows::UI::Input::Spatial::ISpatialInteraction>
{
    HRESULT __stdcall get_SourceState(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Input::Spatial::SpatialInteractionSourceState>(this->shim().SourceState());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Spatial::ISpatialInteractionController> : produce_base<D, Windows::UI::Input::Spatial::ISpatialInteractionController>
{
    HRESULT __stdcall get_HasTouchpad(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().HasTouchpad());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_HasThumbstick(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().HasThumbstick());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SimpleHapticsController(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Haptics::SimpleHapticsController>(this->shim().SimpleHapticsController());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_VendorId(uint16_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint16_t>(this->shim().VendorId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ProductId(uint16_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint16_t>(this->shim().ProductId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Version(uint16_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint16_t>(this->shim().Version());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Spatial::ISpatialInteractionController2> : produce_base<D, Windows::UI::Input::Spatial::ISpatialInteractionController2>
{
    HRESULT __stdcall TryGetRenderableModelAsync(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType>>(this->shim().TryGetRenderableModelAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Spatial::ISpatialInteractionController3> : produce_base<D, Windows::UI::Input::Spatial::ISpatialInteractionController3>
{
    HRESULT __stdcall TryGetBatteryReport(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Power::BatteryReport>(this->shim().TryGetBatteryReport());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Spatial::ISpatialInteractionControllerProperties> : produce_base<D, Windows::UI::Input::Spatial::ISpatialInteractionControllerProperties>
{
    HRESULT __stdcall get_IsTouchpadTouched(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsTouchpadTouched());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsTouchpadPressed(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsTouchpadPressed());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsThumbstickPressed(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsThumbstickPressed());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ThumbstickX(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().ThumbstickX());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ThumbstickY(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().ThumbstickY());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TouchpadX(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().TouchpadX());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TouchpadY(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().TouchpadY());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Spatial::ISpatialInteractionDetectedEventArgs> : produce_base<D, Windows::UI::Input::Spatial::ISpatialInteractionDetectedEventArgs>
{
    HRESULT __stdcall get_InteractionSourceKind(Windows::UI::Input::Spatial::SpatialInteractionSourceKind* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Input::Spatial::SpatialInteractionSourceKind>(this->shim().InteractionSourceKind());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall TryGetPointerPose(void* coordinateSystem, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Input::Spatial::SpatialPointerPose>(this->shim().TryGetPointerPose(*reinterpret_cast<Windows::Perception::Spatial::SpatialCoordinateSystem const*>(&coordinateSystem)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Interaction(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Input::Spatial::SpatialInteraction>(this->shim().Interaction());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Spatial::ISpatialInteractionDetectedEventArgs2> : produce_base<D, Windows::UI::Input::Spatial::ISpatialInteractionDetectedEventArgs2>
{
    HRESULT __stdcall get_InteractionSource(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Input::Spatial::SpatialInteractionSource>(this->shim().InteractionSource());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Spatial::ISpatialInteractionManager> : produce_base<D, Windows::UI::Input::Spatial::ISpatialInteractionManager>
{
    HRESULT __stdcall add_SourceDetected(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().SourceDetected(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialInteractionManager, Windows::UI::Input::Spatial::SpatialInteractionSourceEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_SourceDetected(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SourceDetected(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_SourceLost(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().SourceLost(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialInteractionManager, Windows::UI::Input::Spatial::SpatialInteractionSourceEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_SourceLost(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SourceLost(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_SourceUpdated(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().SourceUpdated(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialInteractionManager, Windows::UI::Input::Spatial::SpatialInteractionSourceEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_SourceUpdated(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SourceUpdated(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_SourcePressed(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().SourcePressed(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialInteractionManager, Windows::UI::Input::Spatial::SpatialInteractionSourceEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_SourcePressed(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SourcePressed(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_SourceReleased(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().SourceReleased(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialInteractionManager, Windows::UI::Input::Spatial::SpatialInteractionSourceEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_SourceReleased(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SourceReleased(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_InteractionDetected(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().InteractionDetected(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Input::Spatial::SpatialInteractionManager, Windows::UI::Input::Spatial::SpatialInteractionDetectedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_InteractionDetected(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InteractionDetected(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetDetectedSourcesAtTimestamp(void* timeStamp, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::UI::Input::Spatial::SpatialInteractionSourceState>>(this->shim().GetDetectedSourcesAtTimestamp(*reinterpret_cast<Windows::Perception::PerceptionTimestamp const*>(&timeStamp)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Spatial::ISpatialInteractionManagerStatics> : produce_base<D, Windows::UI::Input::Spatial::ISpatialInteractionManagerStatics>
{
    HRESULT __stdcall GetForCurrentView(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Input::Spatial::SpatialInteractionManager>(this->shim().GetForCurrentView());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Spatial::ISpatialInteractionSource> : produce_base<D, Windows::UI::Input::Spatial::ISpatialInteractionSource>
{
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

    HRESULT __stdcall get_Kind(Windows::UI::Input::Spatial::SpatialInteractionSourceKind* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Input::Spatial::SpatialInteractionSourceKind>(this->shim().Kind());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Spatial::ISpatialInteractionSource2> : produce_base<D, Windows::UI::Input::Spatial::ISpatialInteractionSource2>
{
    HRESULT __stdcall get_IsPointingSupported(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsPointingSupported());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsMenuSupported(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsMenuSupported());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsGraspSupported(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsGraspSupported());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Controller(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Input::Spatial::SpatialInteractionController>(this->shim().Controller());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall TryGetStateAtTimestamp(void* timestamp, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Input::Spatial::SpatialInteractionSourceState>(this->shim().TryGetStateAtTimestamp(*reinterpret_cast<Windows::Perception::PerceptionTimestamp const*>(&timestamp)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Spatial::ISpatialInteractionSource3> : produce_base<D, Windows::UI::Input::Spatial::ISpatialInteractionSource3>
{
    HRESULT __stdcall get_Handedness(Windows::UI::Input::Spatial::SpatialInteractionSourceHandedness* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Input::Spatial::SpatialInteractionSourceHandedness>(this->shim().Handedness());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Spatial::ISpatialInteractionSourceEventArgs> : produce_base<D, Windows::UI::Input::Spatial::ISpatialInteractionSourceEventArgs>
{
    HRESULT __stdcall get_State(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Input::Spatial::SpatialInteractionSourceState>(this->shim().State());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Spatial::ISpatialInteractionSourceEventArgs2> : produce_base<D, Windows::UI::Input::Spatial::ISpatialInteractionSourceEventArgs2>
{
    HRESULT __stdcall get_PressKind(Windows::UI::Input::Spatial::SpatialInteractionPressKind* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Input::Spatial::SpatialInteractionPressKind>(this->shim().PressKind());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Spatial::ISpatialInteractionSourceLocation> : produce_base<D, Windows::UI::Input::Spatial::ISpatialInteractionSourceLocation>
{
    HRESULT __stdcall get_Position(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<Windows::Foundation::Numerics::float3>>(this->shim().Position());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Velocity(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<Windows::Foundation::Numerics::float3>>(this->shim().Velocity());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Spatial::ISpatialInteractionSourceLocation2> : produce_base<D, Windows::UI::Input::Spatial::ISpatialInteractionSourceLocation2>
{
    HRESULT __stdcall get_Orientation(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<Windows::Foundation::Numerics::quaternion>>(this->shim().Orientation());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Spatial::ISpatialInteractionSourceLocation3> : produce_base<D, Windows::UI::Input::Spatial::ISpatialInteractionSourceLocation3>
{
    HRESULT __stdcall get_PositionAccuracy(Windows::UI::Input::Spatial::SpatialInteractionSourcePositionAccuracy* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Input::Spatial::SpatialInteractionSourcePositionAccuracy>(this->shim().PositionAccuracy());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AngularVelocity(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<Windows::Foundation::Numerics::float3>>(this->shim().AngularVelocity());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SourcePointerPose(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Input::Spatial::SpatialPointerInteractionSourcePose>(this->shim().SourcePointerPose());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Spatial::ISpatialInteractionSourceProperties> : produce_base<D, Windows::UI::Input::Spatial::ISpatialInteractionSourceProperties>
{
    HRESULT __stdcall TryGetSourceLossMitigationDirection(void* coordinateSystem, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<Windows::Foundation::Numerics::float3>>(this->shim().TryGetSourceLossMitigationDirection(*reinterpret_cast<Windows::Perception::Spatial::SpatialCoordinateSystem const*>(&coordinateSystem)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SourceLossRisk(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().SourceLossRisk());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall TryGetLocation(void* coordinateSystem, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Input::Spatial::SpatialInteractionSourceLocation>(this->shim().TryGetLocation(*reinterpret_cast<Windows::Perception::Spatial::SpatialCoordinateSystem const*>(&coordinateSystem)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Spatial::ISpatialInteractionSourceState> : produce_base<D, Windows::UI::Input::Spatial::ISpatialInteractionSourceState>
{
    HRESULT __stdcall get_Source(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Input::Spatial::SpatialInteractionSource>(this->shim().Source());
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
            *value = detach_from<Windows::UI::Input::Spatial::SpatialInteractionSourceProperties>(this->shim().Properties());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsPressed(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsPressed());
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

    HRESULT __stdcall TryGetPointerPose(void* coordinateSystem, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Input::Spatial::SpatialPointerPose>(this->shim().TryGetPointerPose(*reinterpret_cast<Windows::Perception::Spatial::SpatialCoordinateSystem const*>(&coordinateSystem)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Spatial::ISpatialInteractionSourceState2> : produce_base<D, Windows::UI::Input::Spatial::ISpatialInteractionSourceState2>
{
    HRESULT __stdcall get_IsSelectPressed(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsSelectPressed());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsMenuPressed(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsMenuPressed());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsGrasped(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsGrasped());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SelectPressedValue(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().SelectPressedValue());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ControllerProperties(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Input::Spatial::SpatialInteractionControllerProperties>(this->shim().ControllerProperties());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Spatial::ISpatialManipulationCanceledEventArgs> : produce_base<D, Windows::UI::Input::Spatial::ISpatialManipulationCanceledEventArgs>
{
    HRESULT __stdcall get_InteractionSourceKind(Windows::UI::Input::Spatial::SpatialInteractionSourceKind* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Input::Spatial::SpatialInteractionSourceKind>(this->shim().InteractionSourceKind());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Spatial::ISpatialManipulationCompletedEventArgs> : produce_base<D, Windows::UI::Input::Spatial::ISpatialManipulationCompletedEventArgs>
{
    HRESULT __stdcall get_InteractionSourceKind(Windows::UI::Input::Spatial::SpatialInteractionSourceKind* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Input::Spatial::SpatialInteractionSourceKind>(this->shim().InteractionSourceKind());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall TryGetCumulativeDelta(void* coordinateSystem, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Input::Spatial::SpatialManipulationDelta>(this->shim().TryGetCumulativeDelta(*reinterpret_cast<Windows::Perception::Spatial::SpatialCoordinateSystem const*>(&coordinateSystem)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Spatial::ISpatialManipulationDelta> : produce_base<D, Windows::UI::Input::Spatial::ISpatialManipulationDelta>
{
    HRESULT __stdcall get_Translation(Windows::Foundation::Numerics::float3* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Numerics::float3>(this->shim().Translation());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Spatial::ISpatialManipulationStartedEventArgs> : produce_base<D, Windows::UI::Input::Spatial::ISpatialManipulationStartedEventArgs>
{
    HRESULT __stdcall get_InteractionSourceKind(Windows::UI::Input::Spatial::SpatialInteractionSourceKind* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Input::Spatial::SpatialInteractionSourceKind>(this->shim().InteractionSourceKind());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall TryGetPointerPose(void* coordinateSystem, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Input::Spatial::SpatialPointerPose>(this->shim().TryGetPointerPose(*reinterpret_cast<Windows::Perception::Spatial::SpatialCoordinateSystem const*>(&coordinateSystem)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Spatial::ISpatialManipulationUpdatedEventArgs> : produce_base<D, Windows::UI::Input::Spatial::ISpatialManipulationUpdatedEventArgs>
{
    HRESULT __stdcall get_InteractionSourceKind(Windows::UI::Input::Spatial::SpatialInteractionSourceKind* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Input::Spatial::SpatialInteractionSourceKind>(this->shim().InteractionSourceKind());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall TryGetCumulativeDelta(void* coordinateSystem, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Input::Spatial::SpatialManipulationDelta>(this->shim().TryGetCumulativeDelta(*reinterpret_cast<Windows::Perception::Spatial::SpatialCoordinateSystem const*>(&coordinateSystem)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Spatial::ISpatialNavigationCanceledEventArgs> : produce_base<D, Windows::UI::Input::Spatial::ISpatialNavigationCanceledEventArgs>
{
    HRESULT __stdcall get_InteractionSourceKind(Windows::UI::Input::Spatial::SpatialInteractionSourceKind* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Input::Spatial::SpatialInteractionSourceKind>(this->shim().InteractionSourceKind());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Spatial::ISpatialNavigationCompletedEventArgs> : produce_base<D, Windows::UI::Input::Spatial::ISpatialNavigationCompletedEventArgs>
{
    HRESULT __stdcall get_InteractionSourceKind(Windows::UI::Input::Spatial::SpatialInteractionSourceKind* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Input::Spatial::SpatialInteractionSourceKind>(this->shim().InteractionSourceKind());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_NormalizedOffset(Windows::Foundation::Numerics::float3* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Numerics::float3>(this->shim().NormalizedOffset());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Spatial::ISpatialNavigationStartedEventArgs> : produce_base<D, Windows::UI::Input::Spatial::ISpatialNavigationStartedEventArgs>
{
    HRESULT __stdcall get_InteractionSourceKind(Windows::UI::Input::Spatial::SpatialInteractionSourceKind* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Input::Spatial::SpatialInteractionSourceKind>(this->shim().InteractionSourceKind());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall TryGetPointerPose(void* coordinateSystem, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Input::Spatial::SpatialPointerPose>(this->shim().TryGetPointerPose(*reinterpret_cast<Windows::Perception::Spatial::SpatialCoordinateSystem const*>(&coordinateSystem)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsNavigatingX(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsNavigatingX());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsNavigatingY(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsNavigatingY());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsNavigatingZ(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsNavigatingZ());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Spatial::ISpatialNavigationUpdatedEventArgs> : produce_base<D, Windows::UI::Input::Spatial::ISpatialNavigationUpdatedEventArgs>
{
    HRESULT __stdcall get_InteractionSourceKind(Windows::UI::Input::Spatial::SpatialInteractionSourceKind* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Input::Spatial::SpatialInteractionSourceKind>(this->shim().InteractionSourceKind());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_NormalizedOffset(Windows::Foundation::Numerics::float3* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Numerics::float3>(this->shim().NormalizedOffset());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Spatial::ISpatialPointerInteractionSourcePose> : produce_base<D, Windows::UI::Input::Spatial::ISpatialPointerInteractionSourcePose>
{
    HRESULT __stdcall get_Position(Windows::Foundation::Numerics::float3* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Numerics::float3>(this->shim().Position());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ForwardDirection(Windows::Foundation::Numerics::float3* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Numerics::float3>(this->shim().ForwardDirection());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_UpDirection(Windows::Foundation::Numerics::float3* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Numerics::float3>(this->shim().UpDirection());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Spatial::ISpatialPointerInteractionSourcePose2> : produce_base<D, Windows::UI::Input::Spatial::ISpatialPointerInteractionSourcePose2>
{
    HRESULT __stdcall get_Orientation(Windows::Foundation::Numerics::quaternion* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Numerics::quaternion>(this->shim().Orientation());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PositionAccuracy(Windows::UI::Input::Spatial::SpatialInteractionSourcePositionAccuracy* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Input::Spatial::SpatialInteractionSourcePositionAccuracy>(this->shim().PositionAccuracy());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Spatial::ISpatialPointerPose> : produce_base<D, Windows::UI::Input::Spatial::ISpatialPointerPose>
{
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

    HRESULT __stdcall get_Head(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Perception::People::HeadPose>(this->shim().Head());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Spatial::ISpatialPointerPose2> : produce_base<D, Windows::UI::Input::Spatial::ISpatialPointerPose2>
{
    HRESULT __stdcall TryGetInteractionSourcePose(void* source, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Input::Spatial::SpatialPointerInteractionSourcePose>(this->shim().TryGetInteractionSourcePose(*reinterpret_cast<Windows::UI::Input::Spatial::SpatialInteractionSource const*>(&source)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Spatial::ISpatialPointerPoseStatics> : produce_base<D, Windows::UI::Input::Spatial::ISpatialPointerPoseStatics>
{
    HRESULT __stdcall TryGetAtTimestamp(void* coordinateSystem, void* timestamp, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Input::Spatial::SpatialPointerPose>(this->shim().TryGetAtTimestamp(*reinterpret_cast<Windows::Perception::Spatial::SpatialCoordinateSystem const*>(&coordinateSystem), *reinterpret_cast<Windows::Perception::PerceptionTimestamp const*>(&timestamp)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Spatial::ISpatialRecognitionEndedEventArgs> : produce_base<D, Windows::UI::Input::Spatial::ISpatialRecognitionEndedEventArgs>
{
    HRESULT __stdcall get_InteractionSourceKind(Windows::UI::Input::Spatial::SpatialInteractionSourceKind* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Input::Spatial::SpatialInteractionSourceKind>(this->shim().InteractionSourceKind());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Spatial::ISpatialRecognitionStartedEventArgs> : produce_base<D, Windows::UI::Input::Spatial::ISpatialRecognitionStartedEventArgs>
{
    HRESULT __stdcall get_InteractionSourceKind(Windows::UI::Input::Spatial::SpatialInteractionSourceKind* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Input::Spatial::SpatialInteractionSourceKind>(this->shim().InteractionSourceKind());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall TryGetPointerPose(void* coordinateSystem, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Input::Spatial::SpatialPointerPose>(this->shim().TryGetPointerPose(*reinterpret_cast<Windows::Perception::Spatial::SpatialCoordinateSystem const*>(&coordinateSystem)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall IsGesturePossible(Windows::UI::Input::Spatial::SpatialGestureSettings gesture, bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsGesturePossible(*reinterpret_cast<Windows::UI::Input::Spatial::SpatialGestureSettings const*>(&gesture)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Input::Spatial::ISpatialTappedEventArgs> : produce_base<D, Windows::UI::Input::Spatial::ISpatialTappedEventArgs>
{
    HRESULT __stdcall get_InteractionSourceKind(Windows::UI::Input::Spatial::SpatialInteractionSourceKind* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Input::Spatial::SpatialInteractionSourceKind>(this->shim().InteractionSourceKind());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall TryGetPointerPose(void* coordinateSystem, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Input::Spatial::SpatialPointerPose>(this->shim().TryGetPointerPose(*reinterpret_cast<Windows::Perception::Spatial::SpatialCoordinateSystem const*>(&coordinateSystem)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TapCount(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().TapCount());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::UI::Input::Spatial {

inline SpatialGestureRecognizer::SpatialGestureRecognizer(Windows::UI::Input::Spatial::SpatialGestureSettings const& settings) :
    SpatialGestureRecognizer(get_activation_factory<SpatialGestureRecognizer, Windows::UI::Input::Spatial::ISpatialGestureRecognizerFactory>().Create(settings))
{}

inline Windows::UI::Input::Spatial::SpatialInteractionManager SpatialInteractionManager::GetForCurrentView()
{
    return get_activation_factory<SpatialInteractionManager, Windows::UI::Input::Spatial::ISpatialInteractionManagerStatics>().GetForCurrentView();
}

inline Windows::UI::Input::Spatial::SpatialPointerPose SpatialPointerPose::TryGetAtTimestamp(Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem, Windows::Perception::PerceptionTimestamp const& timestamp)
{
    return get_activation_factory<SpatialPointerPose, Windows::UI::Input::Spatial::ISpatialPointerPoseStatics>().TryGetAtTimestamp(coordinateSystem, timestamp);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::UI::Input::Spatial::ISpatialGestureRecognizer> : winrt::impl::hash_base<winrt::Windows::UI::Input::Spatial::ISpatialGestureRecognizer> {};
template<> struct hash<winrt::Windows::UI::Input::Spatial::ISpatialGestureRecognizerFactory> : winrt::impl::hash_base<winrt::Windows::UI::Input::Spatial::ISpatialGestureRecognizerFactory> {};
template<> struct hash<winrt::Windows::UI::Input::Spatial::ISpatialHoldCanceledEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Input::Spatial::ISpatialHoldCanceledEventArgs> {};
template<> struct hash<winrt::Windows::UI::Input::Spatial::ISpatialHoldCompletedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Input::Spatial::ISpatialHoldCompletedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Input::Spatial::ISpatialHoldStartedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Input::Spatial::ISpatialHoldStartedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Input::Spatial::ISpatialInteraction> : winrt::impl::hash_base<winrt::Windows::UI::Input::Spatial::ISpatialInteraction> {};
template<> struct hash<winrt::Windows::UI::Input::Spatial::ISpatialInteractionController> : winrt::impl::hash_base<winrt::Windows::UI::Input::Spatial::ISpatialInteractionController> {};
template<> struct hash<winrt::Windows::UI::Input::Spatial::ISpatialInteractionController2> : winrt::impl::hash_base<winrt::Windows::UI::Input::Spatial::ISpatialInteractionController2> {};
template<> struct hash<winrt::Windows::UI::Input::Spatial::ISpatialInteractionController3> : winrt::impl::hash_base<winrt::Windows::UI::Input::Spatial::ISpatialInteractionController3> {};
template<> struct hash<winrt::Windows::UI::Input::Spatial::ISpatialInteractionControllerProperties> : winrt::impl::hash_base<winrt::Windows::UI::Input::Spatial::ISpatialInteractionControllerProperties> {};
template<> struct hash<winrt::Windows::UI::Input::Spatial::ISpatialInteractionDetectedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Input::Spatial::ISpatialInteractionDetectedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Input::Spatial::ISpatialInteractionDetectedEventArgs2> : winrt::impl::hash_base<winrt::Windows::UI::Input::Spatial::ISpatialInteractionDetectedEventArgs2> {};
template<> struct hash<winrt::Windows::UI::Input::Spatial::ISpatialInteractionManager> : winrt::impl::hash_base<winrt::Windows::UI::Input::Spatial::ISpatialInteractionManager> {};
template<> struct hash<winrt::Windows::UI::Input::Spatial::ISpatialInteractionManagerStatics> : winrt::impl::hash_base<winrt::Windows::UI::Input::Spatial::ISpatialInteractionManagerStatics> {};
template<> struct hash<winrt::Windows::UI::Input::Spatial::ISpatialInteractionSource> : winrt::impl::hash_base<winrt::Windows::UI::Input::Spatial::ISpatialInteractionSource> {};
template<> struct hash<winrt::Windows::UI::Input::Spatial::ISpatialInteractionSource2> : winrt::impl::hash_base<winrt::Windows::UI::Input::Spatial::ISpatialInteractionSource2> {};
template<> struct hash<winrt::Windows::UI::Input::Spatial::ISpatialInteractionSource3> : winrt::impl::hash_base<winrt::Windows::UI::Input::Spatial::ISpatialInteractionSource3> {};
template<> struct hash<winrt::Windows::UI::Input::Spatial::ISpatialInteractionSourceEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Input::Spatial::ISpatialInteractionSourceEventArgs> {};
template<> struct hash<winrt::Windows::UI::Input::Spatial::ISpatialInteractionSourceEventArgs2> : winrt::impl::hash_base<winrt::Windows::UI::Input::Spatial::ISpatialInteractionSourceEventArgs2> {};
template<> struct hash<winrt::Windows::UI::Input::Spatial::ISpatialInteractionSourceLocation> : winrt::impl::hash_base<winrt::Windows::UI::Input::Spatial::ISpatialInteractionSourceLocation> {};
template<> struct hash<winrt::Windows::UI::Input::Spatial::ISpatialInteractionSourceLocation2> : winrt::impl::hash_base<winrt::Windows::UI::Input::Spatial::ISpatialInteractionSourceLocation2> {};
template<> struct hash<winrt::Windows::UI::Input::Spatial::ISpatialInteractionSourceLocation3> : winrt::impl::hash_base<winrt::Windows::UI::Input::Spatial::ISpatialInteractionSourceLocation3> {};
template<> struct hash<winrt::Windows::UI::Input::Spatial::ISpatialInteractionSourceProperties> : winrt::impl::hash_base<winrt::Windows::UI::Input::Spatial::ISpatialInteractionSourceProperties> {};
template<> struct hash<winrt::Windows::UI::Input::Spatial::ISpatialInteractionSourceState> : winrt::impl::hash_base<winrt::Windows::UI::Input::Spatial::ISpatialInteractionSourceState> {};
template<> struct hash<winrt::Windows::UI::Input::Spatial::ISpatialInteractionSourceState2> : winrt::impl::hash_base<winrt::Windows::UI::Input::Spatial::ISpatialInteractionSourceState2> {};
template<> struct hash<winrt::Windows::UI::Input::Spatial::ISpatialManipulationCanceledEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Input::Spatial::ISpatialManipulationCanceledEventArgs> {};
template<> struct hash<winrt::Windows::UI::Input::Spatial::ISpatialManipulationCompletedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Input::Spatial::ISpatialManipulationCompletedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Input::Spatial::ISpatialManipulationDelta> : winrt::impl::hash_base<winrt::Windows::UI::Input::Spatial::ISpatialManipulationDelta> {};
template<> struct hash<winrt::Windows::UI::Input::Spatial::ISpatialManipulationStartedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Input::Spatial::ISpatialManipulationStartedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Input::Spatial::ISpatialManipulationUpdatedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Input::Spatial::ISpatialManipulationUpdatedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Input::Spatial::ISpatialNavigationCanceledEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Input::Spatial::ISpatialNavigationCanceledEventArgs> {};
template<> struct hash<winrt::Windows::UI::Input::Spatial::ISpatialNavigationCompletedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Input::Spatial::ISpatialNavigationCompletedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Input::Spatial::ISpatialNavigationStartedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Input::Spatial::ISpatialNavigationStartedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Input::Spatial::ISpatialNavigationUpdatedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Input::Spatial::ISpatialNavigationUpdatedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Input::Spatial::ISpatialPointerInteractionSourcePose> : winrt::impl::hash_base<winrt::Windows::UI::Input::Spatial::ISpatialPointerInteractionSourcePose> {};
template<> struct hash<winrt::Windows::UI::Input::Spatial::ISpatialPointerInteractionSourcePose2> : winrt::impl::hash_base<winrt::Windows::UI::Input::Spatial::ISpatialPointerInteractionSourcePose2> {};
template<> struct hash<winrt::Windows::UI::Input::Spatial::ISpatialPointerPose> : winrt::impl::hash_base<winrt::Windows::UI::Input::Spatial::ISpatialPointerPose> {};
template<> struct hash<winrt::Windows::UI::Input::Spatial::ISpatialPointerPose2> : winrt::impl::hash_base<winrt::Windows::UI::Input::Spatial::ISpatialPointerPose2> {};
template<> struct hash<winrt::Windows::UI::Input::Spatial::ISpatialPointerPoseStatics> : winrt::impl::hash_base<winrt::Windows::UI::Input::Spatial::ISpatialPointerPoseStatics> {};
template<> struct hash<winrt::Windows::UI::Input::Spatial::ISpatialRecognitionEndedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Input::Spatial::ISpatialRecognitionEndedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Input::Spatial::ISpatialRecognitionStartedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Input::Spatial::ISpatialRecognitionStartedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Input::Spatial::ISpatialTappedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Input::Spatial::ISpatialTappedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Input::Spatial::SpatialGestureRecognizer> : winrt::impl::hash_base<winrt::Windows::UI::Input::Spatial::SpatialGestureRecognizer> {};
template<> struct hash<winrt::Windows::UI::Input::Spatial::SpatialHoldCanceledEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Input::Spatial::SpatialHoldCanceledEventArgs> {};
template<> struct hash<winrt::Windows::UI::Input::Spatial::SpatialHoldCompletedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Input::Spatial::SpatialHoldCompletedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Input::Spatial::SpatialHoldStartedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Input::Spatial::SpatialHoldStartedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Input::Spatial::SpatialInteraction> : winrt::impl::hash_base<winrt::Windows::UI::Input::Spatial::SpatialInteraction> {};
template<> struct hash<winrt::Windows::UI::Input::Spatial::SpatialInteractionController> : winrt::impl::hash_base<winrt::Windows::UI::Input::Spatial::SpatialInteractionController> {};
template<> struct hash<winrt::Windows::UI::Input::Spatial::SpatialInteractionControllerProperties> : winrt::impl::hash_base<winrt::Windows::UI::Input::Spatial::SpatialInteractionControllerProperties> {};
template<> struct hash<winrt::Windows::UI::Input::Spatial::SpatialInteractionDetectedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Input::Spatial::SpatialInteractionDetectedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Input::Spatial::SpatialInteractionManager> : winrt::impl::hash_base<winrt::Windows::UI::Input::Spatial::SpatialInteractionManager> {};
template<> struct hash<winrt::Windows::UI::Input::Spatial::SpatialInteractionSource> : winrt::impl::hash_base<winrt::Windows::UI::Input::Spatial::SpatialInteractionSource> {};
template<> struct hash<winrt::Windows::UI::Input::Spatial::SpatialInteractionSourceEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Input::Spatial::SpatialInteractionSourceEventArgs> {};
template<> struct hash<winrt::Windows::UI::Input::Spatial::SpatialInteractionSourceLocation> : winrt::impl::hash_base<winrt::Windows::UI::Input::Spatial::SpatialInteractionSourceLocation> {};
template<> struct hash<winrt::Windows::UI::Input::Spatial::SpatialInteractionSourceProperties> : winrt::impl::hash_base<winrt::Windows::UI::Input::Spatial::SpatialInteractionSourceProperties> {};
template<> struct hash<winrt::Windows::UI::Input::Spatial::SpatialInteractionSourceState> : winrt::impl::hash_base<winrt::Windows::UI::Input::Spatial::SpatialInteractionSourceState> {};
template<> struct hash<winrt::Windows::UI::Input::Spatial::SpatialManipulationCanceledEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Input::Spatial::SpatialManipulationCanceledEventArgs> {};
template<> struct hash<winrt::Windows::UI::Input::Spatial::SpatialManipulationCompletedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Input::Spatial::SpatialManipulationCompletedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Input::Spatial::SpatialManipulationDelta> : winrt::impl::hash_base<winrt::Windows::UI::Input::Spatial::SpatialManipulationDelta> {};
template<> struct hash<winrt::Windows::UI::Input::Spatial::SpatialManipulationStartedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Input::Spatial::SpatialManipulationStartedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Input::Spatial::SpatialManipulationUpdatedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Input::Spatial::SpatialManipulationUpdatedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Input::Spatial::SpatialNavigationCanceledEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Input::Spatial::SpatialNavigationCanceledEventArgs> {};
template<> struct hash<winrt::Windows::UI::Input::Spatial::SpatialNavigationCompletedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Input::Spatial::SpatialNavigationCompletedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Input::Spatial::SpatialNavigationStartedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Input::Spatial::SpatialNavigationStartedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Input::Spatial::SpatialNavigationUpdatedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Input::Spatial::SpatialNavigationUpdatedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Input::Spatial::SpatialPointerInteractionSourcePose> : winrt::impl::hash_base<winrt::Windows::UI::Input::Spatial::SpatialPointerInteractionSourcePose> {};
template<> struct hash<winrt::Windows::UI::Input::Spatial::SpatialPointerPose> : winrt::impl::hash_base<winrt::Windows::UI::Input::Spatial::SpatialPointerPose> {};
template<> struct hash<winrt::Windows::UI::Input::Spatial::SpatialRecognitionEndedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Input::Spatial::SpatialRecognitionEndedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Input::Spatial::SpatialRecognitionStartedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Input::Spatial::SpatialRecognitionStartedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Input::Spatial::SpatialTappedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Input::Spatial::SpatialTappedEventArgs> {};

}

WINRT_WARNING_POP
