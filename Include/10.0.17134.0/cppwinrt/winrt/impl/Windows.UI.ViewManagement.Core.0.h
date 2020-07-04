// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once

WINRT_EXPORT namespace winrt::Windows::UI::ViewManagement::Core {

enum class CoreInputViewOcclusionKind : int32_t
{
    Docked = 0,
    Floating = 1,
    Overlay = 2,
};

enum class CoreInputViewXYFocusTransferDirection : int32_t
{
    Up = 0,
    Right = 1,
    Down = 2,
    Left = 3,
};

struct ICoreInputView;
struct ICoreInputView2;
struct ICoreInputViewOcclusion;
struct ICoreInputViewOcclusionsChangedEventArgs;
struct ICoreInputViewStatics;
struct ICoreInputViewTransferringXYFocusEventArgs;
struct CoreInputView;
struct CoreInputViewOcclusion;
struct CoreInputViewOcclusionsChangedEventArgs;
struct CoreInputViewTransferringXYFocusEventArgs;

}

namespace winrt::impl {

template <> struct category<Windows::UI::ViewManagement::Core::ICoreInputView>{ using type = interface_category; };
template <> struct category<Windows::UI::ViewManagement::Core::ICoreInputView2>{ using type = interface_category; };
template <> struct category<Windows::UI::ViewManagement::Core::ICoreInputViewOcclusion>{ using type = interface_category; };
template <> struct category<Windows::UI::ViewManagement::Core::ICoreInputViewOcclusionsChangedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::ViewManagement::Core::ICoreInputViewStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::ViewManagement::Core::ICoreInputViewTransferringXYFocusEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::ViewManagement::Core::CoreInputView>{ using type = class_category; };
template <> struct category<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion>{ using type = class_category; };
template <> struct category<Windows::UI::ViewManagement::Core::CoreInputViewOcclusionsChangedEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::ViewManagement::Core::CoreInputViewTransferringXYFocusEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::ViewManagement::Core::CoreInputViewOcclusionKind>{ using type = enum_category; };
template <> struct category<Windows::UI::ViewManagement::Core::CoreInputViewXYFocusTransferDirection>{ using type = enum_category; };
template <> struct name<Windows::UI::ViewManagement::Core::ICoreInputView>{ static constexpr auto & value{ L"Windows.UI.ViewManagement.Core.ICoreInputView" }; };
template <> struct name<Windows::UI::ViewManagement::Core::ICoreInputView2>{ static constexpr auto & value{ L"Windows.UI.ViewManagement.Core.ICoreInputView2" }; };
template <> struct name<Windows::UI::ViewManagement::Core::ICoreInputViewOcclusion>{ static constexpr auto & value{ L"Windows.UI.ViewManagement.Core.ICoreInputViewOcclusion" }; };
template <> struct name<Windows::UI::ViewManagement::Core::ICoreInputViewOcclusionsChangedEventArgs>{ static constexpr auto & value{ L"Windows.UI.ViewManagement.Core.ICoreInputViewOcclusionsChangedEventArgs" }; };
template <> struct name<Windows::UI::ViewManagement::Core::ICoreInputViewStatics>{ static constexpr auto & value{ L"Windows.UI.ViewManagement.Core.ICoreInputViewStatics" }; };
template <> struct name<Windows::UI::ViewManagement::Core::ICoreInputViewTransferringXYFocusEventArgs>{ static constexpr auto & value{ L"Windows.UI.ViewManagement.Core.ICoreInputViewTransferringXYFocusEventArgs" }; };
template <> struct name<Windows::UI::ViewManagement::Core::CoreInputView>{ static constexpr auto & value{ L"Windows.UI.ViewManagement.Core.CoreInputView" }; };
template <> struct name<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion>{ static constexpr auto & value{ L"Windows.UI.ViewManagement.Core.CoreInputViewOcclusion" }; };
template <> struct name<Windows::UI::ViewManagement::Core::CoreInputViewOcclusionsChangedEventArgs>{ static constexpr auto & value{ L"Windows.UI.ViewManagement.Core.CoreInputViewOcclusionsChangedEventArgs" }; };
template <> struct name<Windows::UI::ViewManagement::Core::CoreInputViewTransferringXYFocusEventArgs>{ static constexpr auto & value{ L"Windows.UI.ViewManagement.Core.CoreInputViewTransferringXYFocusEventArgs" }; };
template <> struct name<Windows::UI::ViewManagement::Core::CoreInputViewOcclusionKind>{ static constexpr auto & value{ L"Windows.UI.ViewManagement.Core.CoreInputViewOcclusionKind" }; };
template <> struct name<Windows::UI::ViewManagement::Core::CoreInputViewXYFocusTransferDirection>{ static constexpr auto & value{ L"Windows.UI.ViewManagement.Core.CoreInputViewXYFocusTransferDirection" }; };
template <> struct guid<Windows::UI::ViewManagement::Core::ICoreInputView>{ static constexpr GUID value{ 0xC770CD7A,0x7001,0x4C32,{ 0xBF,0x94,0x25,0xC1,0xF5,0x54,0xCB,0xF1 } }; };
template <> struct guid<Windows::UI::ViewManagement::Core::ICoreInputView2>{ static constexpr GUID value{ 0x0ED726C1,0xE09A,0x4AE8,{ 0xAE,0xDF,0xDF,0xA4,0x85,0x7D,0x1A,0x01 } }; };
template <> struct guid<Windows::UI::ViewManagement::Core::ICoreInputViewOcclusion>{ static constexpr GUID value{ 0xCC36CE06,0x3865,0x4177,{ 0xB5,0xF5,0x8B,0x65,0xE0,0xB9,0xCE,0x84 } }; };
template <> struct guid<Windows::UI::ViewManagement::Core::ICoreInputViewOcclusionsChangedEventArgs>{ static constexpr GUID value{ 0xBE1027E8,0xB3EE,0x4DF7,{ 0x95,0x54,0x89,0xCD,0xC6,0x60,0x82,0xC2 } }; };
template <> struct guid<Windows::UI::ViewManagement::Core::ICoreInputViewStatics>{ static constexpr GUID value{ 0x7D9B97CD,0xEDBE,0x49CF,{ 0xA5,0x4F,0x33,0x7D,0xE0,0x52,0x90,0x7F } }; };
template <> struct guid<Windows::UI::ViewManagement::Core::ICoreInputViewTransferringXYFocusEventArgs>{ static constexpr GUID value{ 0x04DE169F,0xBA02,0x4850,{ 0x8B,0x55,0xD8,0x2D,0x03,0xBA,0x6D,0x7F } }; };
template <> struct default_interface<Windows::UI::ViewManagement::Core::CoreInputView>{ using type = Windows::UI::ViewManagement::Core::ICoreInputView; };
template <> struct default_interface<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion>{ using type = Windows::UI::ViewManagement::Core::ICoreInputViewOcclusion; };
template <> struct default_interface<Windows::UI::ViewManagement::Core::CoreInputViewOcclusionsChangedEventArgs>{ using type = Windows::UI::ViewManagement::Core::ICoreInputViewOcclusionsChangedEventArgs; };
template <> struct default_interface<Windows::UI::ViewManagement::Core::CoreInputViewTransferringXYFocusEventArgs>{ using type = Windows::UI::ViewManagement::Core::ICoreInputViewTransferringXYFocusEventArgs; };

template <typename D>
struct consume_Windows_UI_ViewManagement_Core_ICoreInputView
{
    event_token OcclusionsChanged(Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::Core::CoreInputView, Windows::UI::ViewManagement::Core::CoreInputViewOcclusionsChangedEventArgs> const& handler) const;
    using OcclusionsChanged_revoker = event_revoker<Windows::UI::ViewManagement::Core::ICoreInputView>;
    OcclusionsChanged_revoker OcclusionsChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::Core::CoreInputView, Windows::UI::ViewManagement::Core::CoreInputViewOcclusionsChangedEventArgs> const& handler) const;
    void OcclusionsChanged(event_token const& token) const;
    Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion> GetCoreInputViewOcclusions() const;
    bool TryShowPrimaryView() const;
    bool TryHidePrimaryView() const;
};
template <> struct consume<Windows::UI::ViewManagement::Core::ICoreInputView> { template <typename D> using type = consume_Windows_UI_ViewManagement_Core_ICoreInputView<D>; };

template <typename D>
struct consume_Windows_UI_ViewManagement_Core_ICoreInputView2
{
    event_token XYFocusTransferringFromPrimaryView(Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::Core::CoreInputView, Windows::UI::ViewManagement::Core::CoreInputViewTransferringXYFocusEventArgs> const& handler) const;
    using XYFocusTransferringFromPrimaryView_revoker = event_revoker<Windows::UI::ViewManagement::Core::ICoreInputView2>;
    XYFocusTransferringFromPrimaryView_revoker XYFocusTransferringFromPrimaryView(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::Core::CoreInputView, Windows::UI::ViewManagement::Core::CoreInputViewTransferringXYFocusEventArgs> const& handler) const;
    void XYFocusTransferringFromPrimaryView(event_token const& token) const;
    event_token XYFocusTransferredToPrimaryView(Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::Core::CoreInputView, Windows::Foundation::IInspectable> const& handler) const;
    using XYFocusTransferredToPrimaryView_revoker = event_revoker<Windows::UI::ViewManagement::Core::ICoreInputView2>;
    XYFocusTransferredToPrimaryView_revoker XYFocusTransferredToPrimaryView(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::ViewManagement::Core::CoreInputView, Windows::Foundation::IInspectable> const& handler) const;
    void XYFocusTransferredToPrimaryView(event_token const& token) const;
    bool TryTransferXYFocusToPrimaryView(Windows::Foundation::Rect const& origin, Windows::UI::ViewManagement::Core::CoreInputViewXYFocusTransferDirection const& direction) const;
};
template <> struct consume<Windows::UI::ViewManagement::Core::ICoreInputView2> { template <typename D> using type = consume_Windows_UI_ViewManagement_Core_ICoreInputView2<D>; };

template <typename D>
struct consume_Windows_UI_ViewManagement_Core_ICoreInputViewOcclusion
{
    Windows::Foundation::Rect OccludingRect() const;
    Windows::UI::ViewManagement::Core::CoreInputViewOcclusionKind OcclusionKind() const;
};
template <> struct consume<Windows::UI::ViewManagement::Core::ICoreInputViewOcclusion> { template <typename D> using type = consume_Windows_UI_ViewManagement_Core_ICoreInputViewOcclusion<D>; };

template <typename D>
struct consume_Windows_UI_ViewManagement_Core_ICoreInputViewOcclusionsChangedEventArgs
{
    Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion> Occlusions() const;
    bool Handled() const;
    void Handled(bool value) const;
};
template <> struct consume<Windows::UI::ViewManagement::Core::ICoreInputViewOcclusionsChangedEventArgs> { template <typename D> using type = consume_Windows_UI_ViewManagement_Core_ICoreInputViewOcclusionsChangedEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_ViewManagement_Core_ICoreInputViewStatics
{
    Windows::UI::ViewManagement::Core::CoreInputView GetForCurrentView() const;
};
template <> struct consume<Windows::UI::ViewManagement::Core::ICoreInputViewStatics> { template <typename D> using type = consume_Windows_UI_ViewManagement_Core_ICoreInputViewStatics<D>; };

template <typename D>
struct consume_Windows_UI_ViewManagement_Core_ICoreInputViewTransferringXYFocusEventArgs
{
    Windows::Foundation::Rect Origin() const;
    Windows::UI::ViewManagement::Core::CoreInputViewXYFocusTransferDirection Direction() const;
    void TransferHandled(bool value) const;
    bool TransferHandled() const;
    void KeepPrimaryViewVisible(bool value) const;
    bool KeepPrimaryViewVisible() const;
};
template <> struct consume<Windows::UI::ViewManagement::Core::ICoreInputViewTransferringXYFocusEventArgs> { template <typename D> using type = consume_Windows_UI_ViewManagement_Core_ICoreInputViewTransferringXYFocusEventArgs<D>; };

template <> struct abi<Windows::UI::ViewManagement::Core::ICoreInputView>{ struct type : IInspectable
{
    virtual HRESULT __stdcall add_OcclusionsChanged(void* handler, event_token* token) noexcept = 0;
    virtual HRESULT __stdcall remove_OcclusionsChanged(event_token token) noexcept = 0;
    virtual HRESULT __stdcall GetCoreInputViewOcclusions(void** result) noexcept = 0;
    virtual HRESULT __stdcall TryShowPrimaryView(bool* result) noexcept = 0;
    virtual HRESULT __stdcall TryHidePrimaryView(bool* result) noexcept = 0;
};};

template <> struct abi<Windows::UI::ViewManagement::Core::ICoreInputView2>{ struct type : IInspectable
{
    virtual HRESULT __stdcall add_XYFocusTransferringFromPrimaryView(void* handler, event_token* token) noexcept = 0;
    virtual HRESULT __stdcall remove_XYFocusTransferringFromPrimaryView(event_token token) noexcept = 0;
    virtual HRESULT __stdcall add_XYFocusTransferredToPrimaryView(void* handler, event_token* token) noexcept = 0;
    virtual HRESULT __stdcall remove_XYFocusTransferredToPrimaryView(event_token token) noexcept = 0;
    virtual HRESULT __stdcall TryTransferXYFocusToPrimaryView(Windows::Foundation::Rect origin, Windows::UI::ViewManagement::Core::CoreInputViewXYFocusTransferDirection direction, bool* result) noexcept = 0;
};};

template <> struct abi<Windows::UI::ViewManagement::Core::ICoreInputViewOcclusion>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_OccludingRect(Windows::Foundation::Rect* value) noexcept = 0;
    virtual HRESULT __stdcall get_OcclusionKind(Windows::UI::ViewManagement::Core::CoreInputViewOcclusionKind* value) noexcept = 0;
};};

template <> struct abi<Windows::UI::ViewManagement::Core::ICoreInputViewOcclusionsChangedEventArgs>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_Occlusions(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_Handled(bool* value) noexcept = 0;
    virtual HRESULT __stdcall put_Handled(bool value) noexcept = 0;
};};

template <> struct abi<Windows::UI::ViewManagement::Core::ICoreInputViewStatics>{ struct type : IInspectable
{
    virtual HRESULT __stdcall GetForCurrentView(void** result) noexcept = 0;
};};

template <> struct abi<Windows::UI::ViewManagement::Core::ICoreInputViewTransferringXYFocusEventArgs>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_Origin(Windows::Foundation::Rect* value) noexcept = 0;
    virtual HRESULT __stdcall get_Direction(Windows::UI::ViewManagement::Core::CoreInputViewXYFocusTransferDirection* value) noexcept = 0;
    virtual HRESULT __stdcall put_TransferHandled(bool value) noexcept = 0;
    virtual HRESULT __stdcall get_TransferHandled(bool* value) noexcept = 0;
    virtual HRESULT __stdcall put_KeepPrimaryViewVisible(bool value) noexcept = 0;
    virtual HRESULT __stdcall get_KeepPrimaryViewVisible(bool* value) noexcept = 0;
};};

}
