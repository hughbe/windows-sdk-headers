﻿// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Globalization.2.h"
#include "winrt/impl/Windows.UI.Text.2.h"
#include "winrt/impl/Windows.UI.ViewManagement.2.h"
#include "winrt/impl/Windows.UI.Text.Core.2.h"
#include "winrt/Windows.UI.Text.h"

namespace winrt::impl {

template <typename D> bool consume_Windows_UI_Text_Core_ICoreTextCompositionCompletedEventArgs<D>::IsCanceled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::Core::ICoreTextCompositionCompletedEventArgs)->get_IsCanceled(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::UI::Text::Core::CoreTextCompositionSegment> consume_Windows_UI_Text_Core_ICoreTextCompositionCompletedEventArgs<D>::CompositionSegments() const
{
    Windows::Foundation::Collections::IVectorView<Windows::UI::Text::Core::CoreTextCompositionSegment> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Text::Core::ICoreTextCompositionCompletedEventArgs)->get_CompositionSegments(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Deferral consume_Windows_UI_Text_Core_ICoreTextCompositionCompletedEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Text::Core::ICoreTextCompositionCompletedEventArgs)->GetDeferral(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_UI_Text_Core_ICoreTextCompositionSegment<D>::PreconversionString() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::Core::ICoreTextCompositionSegment)->get_PreconversionString(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Text::Core::CoreTextRange consume_Windows_UI_Text_Core_ICoreTextCompositionSegment<D>::Range() const
{
    Windows::UI::Text::Core::CoreTextRange value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::Core::ICoreTextCompositionSegment)->get_Range(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Text_Core_ICoreTextCompositionStartedEventArgs<D>::IsCanceled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::Core::ICoreTextCompositionStartedEventArgs)->get_IsCanceled(&value));
    return value;
}

template <typename D> Windows::Foundation::Deferral consume_Windows_UI_Text_Core_ICoreTextCompositionStartedEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Text::Core::ICoreTextCompositionStartedEventArgs)->GetDeferral(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_UI_Text_Core_ICoreTextEditContext<D>::Name() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::Core::ICoreTextEditContext)->get_Name(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Text_Core_ICoreTextEditContext<D>::Name(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::Core::ICoreTextEditContext)->put_Name(get_abi(value)));
}

template <typename D> Windows::UI::Text::Core::CoreTextInputScope consume_Windows_UI_Text_Core_ICoreTextEditContext<D>::InputScope() const
{
    Windows::UI::Text::Core::CoreTextInputScope value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::Core::ICoreTextEditContext)->get_InputScope(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Text_Core_ICoreTextEditContext<D>::InputScope(Windows::UI::Text::Core::CoreTextInputScope const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::Core::ICoreTextEditContext)->put_InputScope(get_abi(value)));
}

template <typename D> bool consume_Windows_UI_Text_Core_ICoreTextEditContext<D>::IsReadOnly() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::Core::ICoreTextEditContext)->get_IsReadOnly(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Text_Core_ICoreTextEditContext<D>::IsReadOnly(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::Core::ICoreTextEditContext)->put_IsReadOnly(value));
}

template <typename D> Windows::UI::Text::Core::CoreTextInputPaneDisplayPolicy consume_Windows_UI_Text_Core_ICoreTextEditContext<D>::InputPaneDisplayPolicy() const
{
    Windows::UI::Text::Core::CoreTextInputPaneDisplayPolicy value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::Core::ICoreTextEditContext)->get_InputPaneDisplayPolicy(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Text_Core_ICoreTextEditContext<D>::InputPaneDisplayPolicy(Windows::UI::Text::Core::CoreTextInputPaneDisplayPolicy const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::Core::ICoreTextEditContext)->put_InputPaneDisplayPolicy(get_abi(value)));
}

template <typename D> event_token consume_Windows_UI_Text_Core_ICoreTextEditContext<D>::TextRequested(Windows::Foundation::TypedEventHandler<Windows::UI::Text::Core::CoreTextEditContext, Windows::UI::Text::Core::CoreTextTextRequestedEventArgs> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::Core::ICoreTextEditContext)->add_TextRequested(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::UI::Text::Core::ICoreTextEditContext> consume_Windows_UI_Text_Core_ICoreTextEditContext<D>::TextRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Text::Core::CoreTextEditContext, Windows::UI::Text::Core::CoreTextTextRequestedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Text::Core::ICoreTextEditContext>(this, &abi_t<Windows::UI::Text::Core::ICoreTextEditContext>::remove_TextRequested, TextRequested(handler));
}

template <typename D> void consume_Windows_UI_Text_Core_ICoreTextEditContext<D>::TextRequested(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::Core::ICoreTextEditContext)->remove_TextRequested(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_UI_Text_Core_ICoreTextEditContext<D>::SelectionRequested(Windows::Foundation::TypedEventHandler<Windows::UI::Text::Core::CoreTextEditContext, Windows::UI::Text::Core::CoreTextSelectionRequestedEventArgs> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::Core::ICoreTextEditContext)->add_SelectionRequested(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::UI::Text::Core::ICoreTextEditContext> consume_Windows_UI_Text_Core_ICoreTextEditContext<D>::SelectionRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Text::Core::CoreTextEditContext, Windows::UI::Text::Core::CoreTextSelectionRequestedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Text::Core::ICoreTextEditContext>(this, &abi_t<Windows::UI::Text::Core::ICoreTextEditContext>::remove_SelectionRequested, SelectionRequested(handler));
}

template <typename D> void consume_Windows_UI_Text_Core_ICoreTextEditContext<D>::SelectionRequested(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::Core::ICoreTextEditContext)->remove_SelectionRequested(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_UI_Text_Core_ICoreTextEditContext<D>::LayoutRequested(Windows::Foundation::TypedEventHandler<Windows::UI::Text::Core::CoreTextEditContext, Windows::UI::Text::Core::CoreTextLayoutRequestedEventArgs> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::Core::ICoreTextEditContext)->add_LayoutRequested(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::UI::Text::Core::ICoreTextEditContext> consume_Windows_UI_Text_Core_ICoreTextEditContext<D>::LayoutRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Text::Core::CoreTextEditContext, Windows::UI::Text::Core::CoreTextLayoutRequestedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Text::Core::ICoreTextEditContext>(this, &abi_t<Windows::UI::Text::Core::ICoreTextEditContext>::remove_LayoutRequested, LayoutRequested(handler));
}

template <typename D> void consume_Windows_UI_Text_Core_ICoreTextEditContext<D>::LayoutRequested(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::Core::ICoreTextEditContext)->remove_LayoutRequested(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_UI_Text_Core_ICoreTextEditContext<D>::TextUpdating(Windows::Foundation::TypedEventHandler<Windows::UI::Text::Core::CoreTextEditContext, Windows::UI::Text::Core::CoreTextTextUpdatingEventArgs> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::Core::ICoreTextEditContext)->add_TextUpdating(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::UI::Text::Core::ICoreTextEditContext> consume_Windows_UI_Text_Core_ICoreTextEditContext<D>::TextUpdating(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Text::Core::CoreTextEditContext, Windows::UI::Text::Core::CoreTextTextUpdatingEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Text::Core::ICoreTextEditContext>(this, &abi_t<Windows::UI::Text::Core::ICoreTextEditContext>::remove_TextUpdating, TextUpdating(handler));
}

template <typename D> void consume_Windows_UI_Text_Core_ICoreTextEditContext<D>::TextUpdating(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::Core::ICoreTextEditContext)->remove_TextUpdating(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_UI_Text_Core_ICoreTextEditContext<D>::SelectionUpdating(Windows::Foundation::TypedEventHandler<Windows::UI::Text::Core::CoreTextEditContext, Windows::UI::Text::Core::CoreTextSelectionUpdatingEventArgs> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::Core::ICoreTextEditContext)->add_SelectionUpdating(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::UI::Text::Core::ICoreTextEditContext> consume_Windows_UI_Text_Core_ICoreTextEditContext<D>::SelectionUpdating(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Text::Core::CoreTextEditContext, Windows::UI::Text::Core::CoreTextSelectionUpdatingEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Text::Core::ICoreTextEditContext>(this, &abi_t<Windows::UI::Text::Core::ICoreTextEditContext>::remove_SelectionUpdating, SelectionUpdating(handler));
}

template <typename D> void consume_Windows_UI_Text_Core_ICoreTextEditContext<D>::SelectionUpdating(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::Core::ICoreTextEditContext)->remove_SelectionUpdating(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_UI_Text_Core_ICoreTextEditContext<D>::FormatUpdating(Windows::Foundation::TypedEventHandler<Windows::UI::Text::Core::CoreTextEditContext, Windows::UI::Text::Core::CoreTextFormatUpdatingEventArgs> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::Core::ICoreTextEditContext)->add_FormatUpdating(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::UI::Text::Core::ICoreTextEditContext> consume_Windows_UI_Text_Core_ICoreTextEditContext<D>::FormatUpdating(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Text::Core::CoreTextEditContext, Windows::UI::Text::Core::CoreTextFormatUpdatingEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Text::Core::ICoreTextEditContext>(this, &abi_t<Windows::UI::Text::Core::ICoreTextEditContext>::remove_FormatUpdating, FormatUpdating(handler));
}

template <typename D> void consume_Windows_UI_Text_Core_ICoreTextEditContext<D>::FormatUpdating(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::Core::ICoreTextEditContext)->remove_FormatUpdating(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_UI_Text_Core_ICoreTextEditContext<D>::CompositionStarted(Windows::Foundation::TypedEventHandler<Windows::UI::Text::Core::CoreTextEditContext, Windows::UI::Text::Core::CoreTextCompositionStartedEventArgs> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::Core::ICoreTextEditContext)->add_CompositionStarted(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::UI::Text::Core::ICoreTextEditContext> consume_Windows_UI_Text_Core_ICoreTextEditContext<D>::CompositionStarted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Text::Core::CoreTextEditContext, Windows::UI::Text::Core::CoreTextCompositionStartedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Text::Core::ICoreTextEditContext>(this, &abi_t<Windows::UI::Text::Core::ICoreTextEditContext>::remove_CompositionStarted, CompositionStarted(handler));
}

template <typename D> void consume_Windows_UI_Text_Core_ICoreTextEditContext<D>::CompositionStarted(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::Core::ICoreTextEditContext)->remove_CompositionStarted(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_UI_Text_Core_ICoreTextEditContext<D>::CompositionCompleted(Windows::Foundation::TypedEventHandler<Windows::UI::Text::Core::CoreTextEditContext, Windows::UI::Text::Core::CoreTextCompositionCompletedEventArgs> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::Core::ICoreTextEditContext)->add_CompositionCompleted(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::UI::Text::Core::ICoreTextEditContext> consume_Windows_UI_Text_Core_ICoreTextEditContext<D>::CompositionCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Text::Core::CoreTextEditContext, Windows::UI::Text::Core::CoreTextCompositionCompletedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Text::Core::ICoreTextEditContext>(this, &abi_t<Windows::UI::Text::Core::ICoreTextEditContext>::remove_CompositionCompleted, CompositionCompleted(handler));
}

template <typename D> void consume_Windows_UI_Text_Core_ICoreTextEditContext<D>::CompositionCompleted(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::Core::ICoreTextEditContext)->remove_CompositionCompleted(get_abi(cookie)));
}

template <typename D> event_token consume_Windows_UI_Text_Core_ICoreTextEditContext<D>::FocusRemoved(Windows::Foundation::TypedEventHandler<Windows::UI::Text::Core::CoreTextEditContext, Windows::Foundation::IInspectable> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::Core::ICoreTextEditContext)->add_FocusRemoved(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::UI::Text::Core::ICoreTextEditContext> consume_Windows_UI_Text_Core_ICoreTextEditContext<D>::FocusRemoved(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Text::Core::CoreTextEditContext, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Text::Core::ICoreTextEditContext>(this, &abi_t<Windows::UI::Text::Core::ICoreTextEditContext>::remove_FocusRemoved, FocusRemoved(handler));
}

template <typename D> void consume_Windows_UI_Text_Core_ICoreTextEditContext<D>::FocusRemoved(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::Core::ICoreTextEditContext)->remove_FocusRemoved(get_abi(cookie)));
}

template <typename D> void consume_Windows_UI_Text_Core_ICoreTextEditContext<D>::NotifyFocusEnter() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::Core::ICoreTextEditContext)->NotifyFocusEnter());
}

template <typename D> void consume_Windows_UI_Text_Core_ICoreTextEditContext<D>::NotifyFocusLeave() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::Core::ICoreTextEditContext)->NotifyFocusLeave());
}

template <typename D> void consume_Windows_UI_Text_Core_ICoreTextEditContext<D>::NotifyTextChanged(Windows::UI::Text::Core::CoreTextRange const& modifiedRange, int32_t newLength, Windows::UI::Text::Core::CoreTextRange const& newSelection) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::Core::ICoreTextEditContext)->NotifyTextChanged(get_abi(modifiedRange), newLength, get_abi(newSelection)));
}

template <typename D> void consume_Windows_UI_Text_Core_ICoreTextEditContext<D>::NotifySelectionChanged(Windows::UI::Text::Core::CoreTextRange const& selection) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::Core::ICoreTextEditContext)->NotifySelectionChanged(get_abi(selection)));
}

template <typename D> void consume_Windows_UI_Text_Core_ICoreTextEditContext<D>::NotifyLayoutChanged() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::Core::ICoreTextEditContext)->NotifyLayoutChanged());
}

template <typename D> event_token consume_Windows_UI_Text_Core_ICoreTextEditContext2<D>::NotifyFocusLeaveCompleted(Windows::Foundation::TypedEventHandler<Windows::UI::Text::Core::CoreTextEditContext, Windows::Foundation::IInspectable> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::Core::ICoreTextEditContext2)->add_NotifyFocusLeaveCompleted(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::UI::Text::Core::ICoreTextEditContext2> consume_Windows_UI_Text_Core_ICoreTextEditContext2<D>::NotifyFocusLeaveCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Text::Core::CoreTextEditContext, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Text::Core::ICoreTextEditContext2>(this, &abi_t<Windows::UI::Text::Core::ICoreTextEditContext2>::remove_NotifyFocusLeaveCompleted, NotifyFocusLeaveCompleted(handler));
}

template <typename D> void consume_Windows_UI_Text_Core_ICoreTextEditContext2<D>::NotifyFocusLeaveCompleted(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::Core::ICoreTextEditContext2)->remove_NotifyFocusLeaveCompleted(get_abi(cookie)));
}

template <typename D> Windows::UI::Text::Core::CoreTextRange consume_Windows_UI_Text_Core_ICoreTextFormatUpdatingEventArgs<D>::Range() const
{
    Windows::UI::Text::Core::CoreTextRange value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::Core::ICoreTextFormatUpdatingEventArgs)->get_Range(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::UI::ViewManagement::UIElementType> consume_Windows_UI_Text_Core_ICoreTextFormatUpdatingEventArgs<D>::TextColor() const
{
    Windows::Foundation::IReference<Windows::UI::ViewManagement::UIElementType> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Text::Core::ICoreTextFormatUpdatingEventArgs)->get_TextColor(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::UI::ViewManagement::UIElementType> consume_Windows_UI_Text_Core_ICoreTextFormatUpdatingEventArgs<D>::BackgroundColor() const
{
    Windows::Foundation::IReference<Windows::UI::ViewManagement::UIElementType> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Text::Core::ICoreTextFormatUpdatingEventArgs)->get_BackgroundColor(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::UI::ViewManagement::UIElementType> consume_Windows_UI_Text_Core_ICoreTextFormatUpdatingEventArgs<D>::UnderlineColor() const
{
    Windows::Foundation::IReference<Windows::UI::ViewManagement::UIElementType> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Text::Core::ICoreTextFormatUpdatingEventArgs)->get_UnderlineColor(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::UI::Text::UnderlineType> consume_Windows_UI_Text_Core_ICoreTextFormatUpdatingEventArgs<D>::UnderlineType() const
{
    Windows::Foundation::IReference<Windows::UI::Text::UnderlineType> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Text::Core::ICoreTextFormatUpdatingEventArgs)->get_UnderlineType(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Text::Core::CoreTextFormatUpdatingReason consume_Windows_UI_Text_Core_ICoreTextFormatUpdatingEventArgs<D>::Reason() const
{
    Windows::UI::Text::Core::CoreTextFormatUpdatingReason value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::Core::ICoreTextFormatUpdatingEventArgs)->get_Reason(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Text::Core::CoreTextFormatUpdatingResult consume_Windows_UI_Text_Core_ICoreTextFormatUpdatingEventArgs<D>::Result() const
{
    Windows::UI::Text::Core::CoreTextFormatUpdatingResult value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::Core::ICoreTextFormatUpdatingEventArgs)->get_Result(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Text_Core_ICoreTextFormatUpdatingEventArgs<D>::Result(Windows::UI::Text::Core::CoreTextFormatUpdatingResult const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::Core::ICoreTextFormatUpdatingEventArgs)->put_Result(get_abi(value)));
}

template <typename D> bool consume_Windows_UI_Text_Core_ICoreTextFormatUpdatingEventArgs<D>::IsCanceled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::Core::ICoreTextFormatUpdatingEventArgs)->get_IsCanceled(&value));
    return value;
}

template <typename D> Windows::Foundation::Deferral consume_Windows_UI_Text_Core_ICoreTextFormatUpdatingEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Text::Core::ICoreTextFormatUpdatingEventArgs)->GetDeferral(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Rect consume_Windows_UI_Text_Core_ICoreTextLayoutBounds<D>::TextBounds() const
{
    Windows::Foundation::Rect value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::Core::ICoreTextLayoutBounds)->get_TextBounds(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Text_Core_ICoreTextLayoutBounds<D>::TextBounds(Windows::Foundation::Rect const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::Core::ICoreTextLayoutBounds)->put_TextBounds(get_abi(value)));
}

template <typename D> Windows::Foundation::Rect consume_Windows_UI_Text_Core_ICoreTextLayoutBounds<D>::ControlBounds() const
{
    Windows::Foundation::Rect value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::Core::ICoreTextLayoutBounds)->get_ControlBounds(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Text_Core_ICoreTextLayoutBounds<D>::ControlBounds(Windows::Foundation::Rect const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::Core::ICoreTextLayoutBounds)->put_ControlBounds(get_abi(value)));
}

template <typename D> Windows::UI::Text::Core::CoreTextRange consume_Windows_UI_Text_Core_ICoreTextLayoutRequest<D>::Range() const
{
    Windows::UI::Text::Core::CoreTextRange value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::Core::ICoreTextLayoutRequest)->get_Range(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Text::Core::CoreTextLayoutBounds consume_Windows_UI_Text_Core_ICoreTextLayoutRequest<D>::LayoutBounds() const
{
    Windows::UI::Text::Core::CoreTextLayoutBounds value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Text::Core::ICoreTextLayoutRequest)->get_LayoutBounds(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Text_Core_ICoreTextLayoutRequest<D>::IsCanceled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::Core::ICoreTextLayoutRequest)->get_IsCanceled(&value));
    return value;
}

template <typename D> Windows::Foundation::Deferral consume_Windows_UI_Text_Core_ICoreTextLayoutRequest<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Text::Core::ICoreTextLayoutRequest)->GetDeferral(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Text::Core::CoreTextLayoutRequest consume_Windows_UI_Text_Core_ICoreTextLayoutRequestedEventArgs<D>::Request() const
{
    Windows::UI::Text::Core::CoreTextLayoutRequest value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Text::Core::ICoreTextLayoutRequestedEventArgs)->get_Request(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Text::Core::CoreTextRange consume_Windows_UI_Text_Core_ICoreTextSelectionRequest<D>::Selection() const
{
    Windows::UI::Text::Core::CoreTextRange value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::Core::ICoreTextSelectionRequest)->get_Selection(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Text_Core_ICoreTextSelectionRequest<D>::Selection(Windows::UI::Text::Core::CoreTextRange const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::Core::ICoreTextSelectionRequest)->put_Selection(get_abi(value)));
}

template <typename D> bool consume_Windows_UI_Text_Core_ICoreTextSelectionRequest<D>::IsCanceled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::Core::ICoreTextSelectionRequest)->get_IsCanceled(&value));
    return value;
}

template <typename D> Windows::Foundation::Deferral consume_Windows_UI_Text_Core_ICoreTextSelectionRequest<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Text::Core::ICoreTextSelectionRequest)->GetDeferral(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Text::Core::CoreTextSelectionRequest consume_Windows_UI_Text_Core_ICoreTextSelectionRequestedEventArgs<D>::Request() const
{
    Windows::UI::Text::Core::CoreTextSelectionRequest value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Text::Core::ICoreTextSelectionRequestedEventArgs)->get_Request(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Text::Core::CoreTextRange consume_Windows_UI_Text_Core_ICoreTextSelectionUpdatingEventArgs<D>::Selection() const
{
    Windows::UI::Text::Core::CoreTextRange value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::Core::ICoreTextSelectionUpdatingEventArgs)->get_Selection(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Text::Core::CoreTextSelectionUpdatingResult consume_Windows_UI_Text_Core_ICoreTextSelectionUpdatingEventArgs<D>::Result() const
{
    Windows::UI::Text::Core::CoreTextSelectionUpdatingResult value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::Core::ICoreTextSelectionUpdatingEventArgs)->get_Result(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Text_Core_ICoreTextSelectionUpdatingEventArgs<D>::Result(Windows::UI::Text::Core::CoreTextSelectionUpdatingResult const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::Core::ICoreTextSelectionUpdatingEventArgs)->put_Result(get_abi(value)));
}

template <typename D> bool consume_Windows_UI_Text_Core_ICoreTextSelectionUpdatingEventArgs<D>::IsCanceled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::Core::ICoreTextSelectionUpdatingEventArgs)->get_IsCanceled(&value));
    return value;
}

template <typename D> Windows::Foundation::Deferral consume_Windows_UI_Text_Core_ICoreTextSelectionUpdatingEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Text::Core::ICoreTextSelectionUpdatingEventArgs)->GetDeferral(put_abi(value)));
    return value;
}

template <typename D> Windows::Globalization::Language consume_Windows_UI_Text_Core_ICoreTextServicesManager<D>::InputLanguage() const
{
    Windows::Globalization::Language value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Text::Core::ICoreTextServicesManager)->get_InputLanguage(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_UI_Text_Core_ICoreTextServicesManager<D>::InputLanguageChanged(Windows::Foundation::TypedEventHandler<Windows::UI::Text::Core::CoreTextServicesManager, Windows::Foundation::IInspectable> const& handler) const
{
    event_token cookie{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::Core::ICoreTextServicesManager)->add_InputLanguageChanged(get_abi(handler), put_abi(cookie)));
    return cookie;
}

template <typename D> event_revoker<Windows::UI::Text::Core::ICoreTextServicesManager> consume_Windows_UI_Text_Core_ICoreTextServicesManager<D>::InputLanguageChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Text::Core::CoreTextServicesManager, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::Text::Core::ICoreTextServicesManager>(this, &abi_t<Windows::UI::Text::Core::ICoreTextServicesManager>::remove_InputLanguageChanged, InputLanguageChanged(handler));
}

template <typename D> void consume_Windows_UI_Text_Core_ICoreTextServicesManager<D>::InputLanguageChanged(event_token const& cookie) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::Core::ICoreTextServicesManager)->remove_InputLanguageChanged(get_abi(cookie)));
}

template <typename D> Windows::UI::Text::Core::CoreTextEditContext consume_Windows_UI_Text_Core_ICoreTextServicesManager<D>::CreateEditContext() const
{
    Windows::UI::Text::Core::CoreTextEditContext value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Text::Core::ICoreTextServicesManager)->CreateEditContext(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Text::Core::CoreTextServicesManager consume_Windows_UI_Text_Core_ICoreTextServicesManagerStatics<D>::GetForCurrentView() const
{
    Windows::UI::Text::Core::CoreTextServicesManager value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Text::Core::ICoreTextServicesManagerStatics)->GetForCurrentView(put_abi(value)));
    return value;
}

template <typename D> char16_t consume_Windows_UI_Text_Core_ICoreTextServicesStatics<D>::HiddenCharacter() const
{
    char16_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::Core::ICoreTextServicesStatics)->get_HiddenCharacter(&value));
    return value;
}

template <typename D> Windows::UI::Text::Core::CoreTextRange consume_Windows_UI_Text_Core_ICoreTextTextRequest<D>::Range() const
{
    Windows::UI::Text::Core::CoreTextRange value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::Core::ICoreTextTextRequest)->get_Range(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_UI_Text_Core_ICoreTextTextRequest<D>::Text() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::Core::ICoreTextTextRequest)->get_Text(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Text_Core_ICoreTextTextRequest<D>::Text(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::Core::ICoreTextTextRequest)->put_Text(get_abi(value)));
}

template <typename D> bool consume_Windows_UI_Text_Core_ICoreTextTextRequest<D>::IsCanceled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::Core::ICoreTextTextRequest)->get_IsCanceled(&value));
    return value;
}

template <typename D> Windows::Foundation::Deferral consume_Windows_UI_Text_Core_ICoreTextTextRequest<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Text::Core::ICoreTextTextRequest)->GetDeferral(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Text::Core::CoreTextTextRequest consume_Windows_UI_Text_Core_ICoreTextTextRequestedEventArgs<D>::Request() const
{
    Windows::UI::Text::Core::CoreTextTextRequest value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Text::Core::ICoreTextTextRequestedEventArgs)->get_Request(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Text::Core::CoreTextRange consume_Windows_UI_Text_Core_ICoreTextTextUpdatingEventArgs<D>::Range() const
{
    Windows::UI::Text::Core::CoreTextRange value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::Core::ICoreTextTextUpdatingEventArgs)->get_Range(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_UI_Text_Core_ICoreTextTextUpdatingEventArgs<D>::Text() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::Core::ICoreTextTextUpdatingEventArgs)->get_Text(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Text::Core::CoreTextRange consume_Windows_UI_Text_Core_ICoreTextTextUpdatingEventArgs<D>::NewSelection() const
{
    Windows::UI::Text::Core::CoreTextRange value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::Core::ICoreTextTextUpdatingEventArgs)->get_NewSelection(put_abi(value)));
    return value;
}

template <typename D> Windows::Globalization::Language consume_Windows_UI_Text_Core_ICoreTextTextUpdatingEventArgs<D>::InputLanguage() const
{
    Windows::Globalization::Language value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Text::Core::ICoreTextTextUpdatingEventArgs)->get_InputLanguage(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Text::Core::CoreTextTextUpdatingResult consume_Windows_UI_Text_Core_ICoreTextTextUpdatingEventArgs<D>::Result() const
{
    Windows::UI::Text::Core::CoreTextTextUpdatingResult value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::Core::ICoreTextTextUpdatingEventArgs)->get_Result(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Text_Core_ICoreTextTextUpdatingEventArgs<D>::Result(Windows::UI::Text::Core::CoreTextTextUpdatingResult const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::Core::ICoreTextTextUpdatingEventArgs)->put_Result(get_abi(value)));
}

template <typename D> bool consume_Windows_UI_Text_Core_ICoreTextTextUpdatingEventArgs<D>::IsCanceled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::Core::ICoreTextTextUpdatingEventArgs)->get_IsCanceled(&value));
    return value;
}

template <typename D> Windows::Foundation::Deferral consume_Windows_UI_Text_Core_ICoreTextTextUpdatingEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Text::Core::ICoreTextTextUpdatingEventArgs)->GetDeferral(put_abi(value)));
    return value;
}

template <typename D>
struct produce<D, Windows::UI::Text::Core::ICoreTextCompositionCompletedEventArgs> : produce_base<D, Windows::UI::Text::Core::ICoreTextCompositionCompletedEventArgs>
{
    HRESULT __stdcall get_IsCanceled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsCanceled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CompositionSegments(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::UI::Text::Core::CoreTextCompositionSegment>>(this->shim().CompositionSegments());
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
struct produce<D, Windows::UI::Text::Core::ICoreTextCompositionSegment> : produce_base<D, Windows::UI::Text::Core::ICoreTextCompositionSegment>
{
    HRESULT __stdcall get_PreconversionString(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().PreconversionString());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Range(struct struct_Windows_UI_Text_Core_CoreTextRange* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Text::Core::CoreTextRange>(this->shim().Range());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Text::Core::ICoreTextCompositionStartedEventArgs> : produce_base<D, Windows::UI::Text::Core::ICoreTextCompositionStartedEventArgs>
{
    HRESULT __stdcall get_IsCanceled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsCanceled());
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
struct produce<D, Windows::UI::Text::Core::ICoreTextEditContext> : produce_base<D, Windows::UI::Text::Core::ICoreTextEditContext>
{
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

    HRESULT __stdcall put_Name(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Name(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_InputScope(Windows::UI::Text::Core::CoreTextInputScope* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Text::Core::CoreTextInputScope>(this->shim().InputScope());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_InputScope(Windows::UI::Text::Core::CoreTextInputScope value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InputScope(*reinterpret_cast<Windows::UI::Text::Core::CoreTextInputScope const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsReadOnly(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsReadOnly());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsReadOnly(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsReadOnly(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_InputPaneDisplayPolicy(Windows::UI::Text::Core::CoreTextInputPaneDisplayPolicy* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Text::Core::CoreTextInputPaneDisplayPolicy>(this->shim().InputPaneDisplayPolicy());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_InputPaneDisplayPolicy(Windows::UI::Text::Core::CoreTextInputPaneDisplayPolicy value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InputPaneDisplayPolicy(*reinterpret_cast<Windows::UI::Text::Core::CoreTextInputPaneDisplayPolicy const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_TextRequested(void* handler, event_token* cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_from<event_token>(this->shim().TextRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Text::Core::CoreTextEditContext, Windows::UI::Text::Core::CoreTextTextRequestedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_TextRequested(event_token cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TextRequested(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_SelectionRequested(void* handler, event_token* cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_from<event_token>(this->shim().SelectionRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Text::Core::CoreTextEditContext, Windows::UI::Text::Core::CoreTextSelectionRequestedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_SelectionRequested(event_token cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SelectionRequested(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_LayoutRequested(void* handler, event_token* cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_from<event_token>(this->shim().LayoutRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Text::Core::CoreTextEditContext, Windows::UI::Text::Core::CoreTextLayoutRequestedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_LayoutRequested(event_token cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LayoutRequested(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_TextUpdating(void* handler, event_token* cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_from<event_token>(this->shim().TextUpdating(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Text::Core::CoreTextEditContext, Windows::UI::Text::Core::CoreTextTextUpdatingEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_TextUpdating(event_token cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TextUpdating(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_SelectionUpdating(void* handler, event_token* cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_from<event_token>(this->shim().SelectionUpdating(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Text::Core::CoreTextEditContext, Windows::UI::Text::Core::CoreTextSelectionUpdatingEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_SelectionUpdating(event_token cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SelectionUpdating(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_FormatUpdating(void* handler, event_token* cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_from<event_token>(this->shim().FormatUpdating(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Text::Core::CoreTextEditContext, Windows::UI::Text::Core::CoreTextFormatUpdatingEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_FormatUpdating(event_token cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FormatUpdating(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_CompositionStarted(void* handler, event_token* cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_from<event_token>(this->shim().CompositionStarted(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Text::Core::CoreTextEditContext, Windows::UI::Text::Core::CoreTextCompositionStartedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_CompositionStarted(event_token cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CompositionStarted(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_CompositionCompleted(void* handler, event_token* cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_from<event_token>(this->shim().CompositionCompleted(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Text::Core::CoreTextEditContext, Windows::UI::Text::Core::CoreTextCompositionCompletedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_CompositionCompleted(event_token cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CompositionCompleted(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_FocusRemoved(void* handler, event_token* cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_from<event_token>(this->shim().FocusRemoved(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Text::Core::CoreTextEditContext, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_FocusRemoved(event_token cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FocusRemoved(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall NotifyFocusEnter() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NotifyFocusEnter();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall NotifyFocusLeave() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NotifyFocusLeave();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall NotifyTextChanged(struct struct_Windows_UI_Text_Core_CoreTextRange modifiedRange, int32_t newLength, struct struct_Windows_UI_Text_Core_CoreTextRange newSelection) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NotifyTextChanged(*reinterpret_cast<Windows::UI::Text::Core::CoreTextRange const*>(&modifiedRange), newLength, *reinterpret_cast<Windows::UI::Text::Core::CoreTextRange const*>(&newSelection));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall NotifySelectionChanged(struct struct_Windows_UI_Text_Core_CoreTextRange selection) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NotifySelectionChanged(*reinterpret_cast<Windows::UI::Text::Core::CoreTextRange const*>(&selection));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall NotifyLayoutChanged() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NotifyLayoutChanged();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Text::Core::ICoreTextEditContext2> : produce_base<D, Windows::UI::Text::Core::ICoreTextEditContext2>
{
    HRESULT __stdcall add_NotifyFocusLeaveCompleted(void* handler, event_token* cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_from<event_token>(this->shim().NotifyFocusLeaveCompleted(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Text::Core::CoreTextEditContext, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_NotifyFocusLeaveCompleted(event_token cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NotifyFocusLeaveCompleted(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Text::Core::ICoreTextFormatUpdatingEventArgs> : produce_base<D, Windows::UI::Text::Core::ICoreTextFormatUpdatingEventArgs>
{
    HRESULT __stdcall get_Range(struct struct_Windows_UI_Text_Core_CoreTextRange* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Text::Core::CoreTextRange>(this->shim().Range());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TextColor(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<Windows::UI::ViewManagement::UIElementType>>(this->shim().TextColor());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_BackgroundColor(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<Windows::UI::ViewManagement::UIElementType>>(this->shim().BackgroundColor());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_UnderlineColor(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<Windows::UI::ViewManagement::UIElementType>>(this->shim().UnderlineColor());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_UnderlineType(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<Windows::UI::Text::UnderlineType>>(this->shim().UnderlineType());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Reason(Windows::UI::Text::Core::CoreTextFormatUpdatingReason* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Text::Core::CoreTextFormatUpdatingReason>(this->shim().Reason());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Result(Windows::UI::Text::Core::CoreTextFormatUpdatingResult* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Text::Core::CoreTextFormatUpdatingResult>(this->shim().Result());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Result(Windows::UI::Text::Core::CoreTextFormatUpdatingResult value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Result(*reinterpret_cast<Windows::UI::Text::Core::CoreTextFormatUpdatingResult const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsCanceled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsCanceled());
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
struct produce<D, Windows::UI::Text::Core::ICoreTextLayoutBounds> : produce_base<D, Windows::UI::Text::Core::ICoreTextLayoutBounds>
{
    HRESULT __stdcall get_TextBounds(Windows::Foundation::Rect* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Rect>(this->shim().TextBounds());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_TextBounds(Windows::Foundation::Rect value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TextBounds(*reinterpret_cast<Windows::Foundation::Rect const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ControlBounds(Windows::Foundation::Rect* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Rect>(this->shim().ControlBounds());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ControlBounds(Windows::Foundation::Rect value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ControlBounds(*reinterpret_cast<Windows::Foundation::Rect const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Text::Core::ICoreTextLayoutRequest> : produce_base<D, Windows::UI::Text::Core::ICoreTextLayoutRequest>
{
    HRESULT __stdcall get_Range(struct struct_Windows_UI_Text_Core_CoreTextRange* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Text::Core::CoreTextRange>(this->shim().Range());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_LayoutBounds(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Text::Core::CoreTextLayoutBounds>(this->shim().LayoutBounds());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsCanceled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsCanceled());
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
struct produce<D, Windows::UI::Text::Core::ICoreTextLayoutRequestedEventArgs> : produce_base<D, Windows::UI::Text::Core::ICoreTextLayoutRequestedEventArgs>
{
    HRESULT __stdcall get_Request(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Text::Core::CoreTextLayoutRequest>(this->shim().Request());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Text::Core::ICoreTextSelectionRequest> : produce_base<D, Windows::UI::Text::Core::ICoreTextSelectionRequest>
{
    HRESULT __stdcall get_Selection(struct struct_Windows_UI_Text_Core_CoreTextRange* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Text::Core::CoreTextRange>(this->shim().Selection());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Selection(struct struct_Windows_UI_Text_Core_CoreTextRange value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Selection(*reinterpret_cast<Windows::UI::Text::Core::CoreTextRange const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsCanceled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsCanceled());
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
struct produce<D, Windows::UI::Text::Core::ICoreTextSelectionRequestedEventArgs> : produce_base<D, Windows::UI::Text::Core::ICoreTextSelectionRequestedEventArgs>
{
    HRESULT __stdcall get_Request(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Text::Core::CoreTextSelectionRequest>(this->shim().Request());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Text::Core::ICoreTextSelectionUpdatingEventArgs> : produce_base<D, Windows::UI::Text::Core::ICoreTextSelectionUpdatingEventArgs>
{
    HRESULT __stdcall get_Selection(struct struct_Windows_UI_Text_Core_CoreTextRange* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Text::Core::CoreTextRange>(this->shim().Selection());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Result(Windows::UI::Text::Core::CoreTextSelectionUpdatingResult* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Text::Core::CoreTextSelectionUpdatingResult>(this->shim().Result());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Result(Windows::UI::Text::Core::CoreTextSelectionUpdatingResult value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Result(*reinterpret_cast<Windows::UI::Text::Core::CoreTextSelectionUpdatingResult const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsCanceled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsCanceled());
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
struct produce<D, Windows::UI::Text::Core::ICoreTextServicesManager> : produce_base<D, Windows::UI::Text::Core::ICoreTextServicesManager>
{
    HRESULT __stdcall get_InputLanguage(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Globalization::Language>(this->shim().InputLanguage());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_InputLanguageChanged(void* handler, event_token* cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookie = detach_from<event_token>(this->shim().InputLanguageChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Text::Core::CoreTextServicesManager, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_InputLanguageChanged(event_token cookie) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InputLanguageChanged(*reinterpret_cast<event_token const*>(&cookie));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateEditContext(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Text::Core::CoreTextEditContext>(this->shim().CreateEditContext());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Text::Core::ICoreTextServicesManagerStatics> : produce_base<D, Windows::UI::Text::Core::ICoreTextServicesManagerStatics>
{
    HRESULT __stdcall GetForCurrentView(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Text::Core::CoreTextServicesManager>(this->shim().GetForCurrentView());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Text::Core::ICoreTextServicesStatics> : produce_base<D, Windows::UI::Text::Core::ICoreTextServicesStatics>
{
    HRESULT __stdcall get_HiddenCharacter(char16_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<char16_t>(this->shim().HiddenCharacter());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Text::Core::ICoreTextTextRequest> : produce_base<D, Windows::UI::Text::Core::ICoreTextTextRequest>
{
    HRESULT __stdcall get_Range(struct struct_Windows_UI_Text_Core_CoreTextRange* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Text::Core::CoreTextRange>(this->shim().Range());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Text(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Text());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Text(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Text(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsCanceled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsCanceled());
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
struct produce<D, Windows::UI::Text::Core::ICoreTextTextRequestedEventArgs> : produce_base<D, Windows::UI::Text::Core::ICoreTextTextRequestedEventArgs>
{
    HRESULT __stdcall get_Request(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Text::Core::CoreTextTextRequest>(this->shim().Request());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Text::Core::ICoreTextTextUpdatingEventArgs> : produce_base<D, Windows::UI::Text::Core::ICoreTextTextUpdatingEventArgs>
{
    HRESULT __stdcall get_Range(struct struct_Windows_UI_Text_Core_CoreTextRange* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Text::Core::CoreTextRange>(this->shim().Range());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Text(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Text());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_NewSelection(struct struct_Windows_UI_Text_Core_CoreTextRange* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Text::Core::CoreTextRange>(this->shim().NewSelection());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_InputLanguage(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Globalization::Language>(this->shim().InputLanguage());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Result(Windows::UI::Text::Core::CoreTextTextUpdatingResult* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Text::Core::CoreTextTextUpdatingResult>(this->shim().Result());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Result(Windows::UI::Text::Core::CoreTextTextUpdatingResult value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Result(*reinterpret_cast<Windows::UI::Text::Core::CoreTextTextUpdatingResult const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsCanceled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsCanceled());
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

}

WINRT_EXPORT namespace winrt::Windows::UI::Text::Core {

inline char16_t CoreTextServicesConstants::HiddenCharacter()
{
    return get_activation_factory<CoreTextServicesConstants, Windows::UI::Text::Core::ICoreTextServicesStatics>().HiddenCharacter();
}

inline Windows::UI::Text::Core::CoreTextServicesManager CoreTextServicesManager::GetForCurrentView()
{
    return get_activation_factory<CoreTextServicesManager, Windows::UI::Text::Core::ICoreTextServicesManagerStatics>().GetForCurrentView();
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::UI::Text::Core::ICoreTextCompositionCompletedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Text::Core::ICoreTextCompositionCompletedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Text::Core::ICoreTextCompositionSegment> : winrt::impl::hash_base<winrt::Windows::UI::Text::Core::ICoreTextCompositionSegment> {};
template<> struct hash<winrt::Windows::UI::Text::Core::ICoreTextCompositionStartedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Text::Core::ICoreTextCompositionStartedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Text::Core::ICoreTextEditContext> : winrt::impl::hash_base<winrt::Windows::UI::Text::Core::ICoreTextEditContext> {};
template<> struct hash<winrt::Windows::UI::Text::Core::ICoreTextEditContext2> : winrt::impl::hash_base<winrt::Windows::UI::Text::Core::ICoreTextEditContext2> {};
template<> struct hash<winrt::Windows::UI::Text::Core::ICoreTextFormatUpdatingEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Text::Core::ICoreTextFormatUpdatingEventArgs> {};
template<> struct hash<winrt::Windows::UI::Text::Core::ICoreTextLayoutBounds> : winrt::impl::hash_base<winrt::Windows::UI::Text::Core::ICoreTextLayoutBounds> {};
template<> struct hash<winrt::Windows::UI::Text::Core::ICoreTextLayoutRequest> : winrt::impl::hash_base<winrt::Windows::UI::Text::Core::ICoreTextLayoutRequest> {};
template<> struct hash<winrt::Windows::UI::Text::Core::ICoreTextLayoutRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Text::Core::ICoreTextLayoutRequestedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Text::Core::ICoreTextSelectionRequest> : winrt::impl::hash_base<winrt::Windows::UI::Text::Core::ICoreTextSelectionRequest> {};
template<> struct hash<winrt::Windows::UI::Text::Core::ICoreTextSelectionRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Text::Core::ICoreTextSelectionRequestedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Text::Core::ICoreTextSelectionUpdatingEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Text::Core::ICoreTextSelectionUpdatingEventArgs> {};
template<> struct hash<winrt::Windows::UI::Text::Core::ICoreTextServicesManager> : winrt::impl::hash_base<winrt::Windows::UI::Text::Core::ICoreTextServicesManager> {};
template<> struct hash<winrt::Windows::UI::Text::Core::ICoreTextServicesManagerStatics> : winrt::impl::hash_base<winrt::Windows::UI::Text::Core::ICoreTextServicesManagerStatics> {};
template<> struct hash<winrt::Windows::UI::Text::Core::ICoreTextServicesStatics> : winrt::impl::hash_base<winrt::Windows::UI::Text::Core::ICoreTextServicesStatics> {};
template<> struct hash<winrt::Windows::UI::Text::Core::ICoreTextTextRequest> : winrt::impl::hash_base<winrt::Windows::UI::Text::Core::ICoreTextTextRequest> {};
template<> struct hash<winrt::Windows::UI::Text::Core::ICoreTextTextRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Text::Core::ICoreTextTextRequestedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Text::Core::ICoreTextTextUpdatingEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Text::Core::ICoreTextTextUpdatingEventArgs> {};
template<> struct hash<winrt::Windows::UI::Text::Core::CoreTextCompositionCompletedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Text::Core::CoreTextCompositionCompletedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Text::Core::CoreTextCompositionSegment> : winrt::impl::hash_base<winrt::Windows::UI::Text::Core::CoreTextCompositionSegment> {};
template<> struct hash<winrt::Windows::UI::Text::Core::CoreTextCompositionStartedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Text::Core::CoreTextCompositionStartedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Text::Core::CoreTextEditContext> : winrt::impl::hash_base<winrt::Windows::UI::Text::Core::CoreTextEditContext> {};
template<> struct hash<winrt::Windows::UI::Text::Core::CoreTextFormatUpdatingEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Text::Core::CoreTextFormatUpdatingEventArgs> {};
template<> struct hash<winrt::Windows::UI::Text::Core::CoreTextLayoutBounds> : winrt::impl::hash_base<winrt::Windows::UI::Text::Core::CoreTextLayoutBounds> {};
template<> struct hash<winrt::Windows::UI::Text::Core::CoreTextLayoutRequest> : winrt::impl::hash_base<winrt::Windows::UI::Text::Core::CoreTextLayoutRequest> {};
template<> struct hash<winrt::Windows::UI::Text::Core::CoreTextLayoutRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Text::Core::CoreTextLayoutRequestedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Text::Core::CoreTextSelectionRequest> : winrt::impl::hash_base<winrt::Windows::UI::Text::Core::CoreTextSelectionRequest> {};
template<> struct hash<winrt::Windows::UI::Text::Core::CoreTextSelectionRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Text::Core::CoreTextSelectionRequestedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Text::Core::CoreTextSelectionUpdatingEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Text::Core::CoreTextSelectionUpdatingEventArgs> {};
template<> struct hash<winrt::Windows::UI::Text::Core::CoreTextServicesConstants> : winrt::impl::hash_base<winrt::Windows::UI::Text::Core::CoreTextServicesConstants> {};
template<> struct hash<winrt::Windows::UI::Text::Core::CoreTextServicesManager> : winrt::impl::hash_base<winrt::Windows::UI::Text::Core::CoreTextServicesManager> {};
template<> struct hash<winrt::Windows::UI::Text::Core::CoreTextTextRequest> : winrt::impl::hash_base<winrt::Windows::UI::Text::Core::CoreTextTextRequest> {};
template<> struct hash<winrt::Windows::UI::Text::Core::CoreTextTextRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Text::Core::CoreTextTextRequestedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Text::Core::CoreTextTextUpdatingEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Text::Core::CoreTextTextUpdatingEventArgs> {};

}

WINRT_WARNING_POP
