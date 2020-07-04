// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once

WINRT_EXPORT namespace winrt::Windows::UI::Composition {

struct Compositor;

}

WINRT_EXPORT namespace winrt::Windows::UI::Composition::Core {

struct ICompositorController;
struct CompositorController;

}

namespace winrt::impl {

template <> struct category<Windows::UI::Composition::Core::ICompositorController>{ using type = interface_category; };
template <> struct category<Windows::UI::Composition::Core::CompositorController>{ using type = class_category; };
template <> struct name<Windows::UI::Composition::Core::ICompositorController>{ static constexpr auto & value{ L"Windows.UI.Composition.Core.ICompositorController" }; };
template <> struct name<Windows::UI::Composition::Core::CompositorController>{ static constexpr auto & value{ L"Windows.UI.Composition.Core.CompositorController" }; };
template <> struct guid<Windows::UI::Composition::Core::ICompositorController>{ static constexpr GUID value{ 0x2D75F35A,0x70A7,0x4395,{ 0xBA,0x2D,0xCE,0xF0,0xB1,0x83,0x99,0xF9 } }; };
template <> struct default_interface<Windows::UI::Composition::Core::CompositorController>{ using type = Windows::UI::Composition::Core::ICompositorController; };

template <typename D>
struct consume_Windows_UI_Composition_Core_ICompositorController
{
    Windows::UI::Composition::Compositor Compositor() const;
    void Commit() const;
    Windows::Foundation::IAsyncAction EnsurePreviousCommitCompletedAsync() const;
    event_token CommitNeeded(Windows::Foundation::TypedEventHandler<Windows::UI::Composition::Core::CompositorController, Windows::Foundation::IInspectable> const& handler) const;
    using CommitNeeded_revoker = event_revoker<Windows::UI::Composition::Core::ICompositorController>;
    CommitNeeded_revoker CommitNeeded(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Composition::Core::CompositorController, Windows::Foundation::IInspectable> const& handler) const;
    void CommitNeeded(event_token const& token) const;
};
template <> struct consume<Windows::UI::Composition::Core::ICompositorController> { template <typename D> using type = consume_Windows_UI_Composition_Core_ICompositorController<D>; };

template <> struct abi<Windows::UI::Composition::Core::ICompositorController>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_Compositor(void** value) noexcept = 0;
    virtual HRESULT __stdcall Commit() noexcept = 0;
    virtual HRESULT __stdcall EnsurePreviousCommitCompletedAsync(void** action) noexcept = 0;
    virtual HRESULT __stdcall add_CommitNeeded(void* handler, event_token* token) noexcept = 0;
    virtual HRESULT __stdcall remove_CommitNeeded(event_token token) noexcept = 0;
};};

}
