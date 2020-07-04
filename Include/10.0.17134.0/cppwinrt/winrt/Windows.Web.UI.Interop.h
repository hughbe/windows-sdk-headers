// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.ApplicationModel.DataTransfer.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.System.2.h"
#include "winrt/impl/Windows.UI.2.h"
#include "winrt/impl/Windows.UI.Core.2.h"
#include "winrt/impl/Windows.Web.2.h"
#include "winrt/impl/Windows.Web.Http.2.h"
#include "winrt/impl/Windows.Web.UI.2.h"
#include "winrt/impl/Windows.Web.UI.Interop.2.h"
#include "winrt/Windows.Web.UI.h"

namespace winrt::impl {

template <typename D> Windows::UI::Core::CoreAcceleratorKeyEventType consume_Windows_Web_UI_Interop_IWebViewControlAcceleratorKeyPressedEventArgs<D>::EventType() const
{
    Windows::UI::Core::CoreAcceleratorKeyEventType value{};
    check_hresult(WINRT_SHIM(Windows::Web::UI::Interop::IWebViewControlAcceleratorKeyPressedEventArgs)->get_EventType(put_abi(value)));
    return value;
}

template <typename D> Windows::System::VirtualKey consume_Windows_Web_UI_Interop_IWebViewControlAcceleratorKeyPressedEventArgs<D>::VirtualKey() const
{
    Windows::System::VirtualKey value{};
    check_hresult(WINRT_SHIM(Windows::Web::UI::Interop::IWebViewControlAcceleratorKeyPressedEventArgs)->get_VirtualKey(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Core::CorePhysicalKeyStatus consume_Windows_Web_UI_Interop_IWebViewControlAcceleratorKeyPressedEventArgs<D>::KeyStatus() const
{
    Windows::UI::Core::CorePhysicalKeyStatus value{};
    check_hresult(WINRT_SHIM(Windows::Web::UI::Interop::IWebViewControlAcceleratorKeyPressedEventArgs)->get_KeyStatus(put_abi(value)));
    return value;
}

template <typename D> Windows::Web::UI::Interop::WebViewControlAcceleratorKeyRoutingStage consume_Windows_Web_UI_Interop_IWebViewControlAcceleratorKeyPressedEventArgs<D>::RoutingStage() const
{
    Windows::Web::UI::Interop::WebViewControlAcceleratorKeyRoutingStage value{};
    check_hresult(WINRT_SHIM(Windows::Web::UI::Interop::IWebViewControlAcceleratorKeyPressedEventArgs)->get_RoutingStage(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Web_UI_Interop_IWebViewControlAcceleratorKeyPressedEventArgs<D>::Handled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Web::UI::Interop::IWebViewControlAcceleratorKeyPressedEventArgs)->get_Handled(&value));
    return value;
}

template <typename D> void consume_Windows_Web_UI_Interop_IWebViewControlAcceleratorKeyPressedEventArgs<D>::Handled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::UI::Interop::IWebViewControlAcceleratorKeyPressedEventArgs)->put_Handled(value));
}

template <typename D> Windows::Web::UI::Interop::WebViewControlMoveFocusReason consume_Windows_Web_UI_Interop_IWebViewControlMoveFocusRequestedEventArgs<D>::Reason() const
{
    Windows::Web::UI::Interop::WebViewControlMoveFocusReason value{};
    check_hresult(WINRT_SHIM(Windows::Web::UI::Interop::IWebViewControlMoveFocusRequestedEventArgs)->get_Reason(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Web_UI_Interop_IWebViewControlProcess<D>::ProcessId() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Web::UI::Interop::IWebViewControlProcess)->get_ProcessId(&value));
    return value;
}

template <typename D> hstring consume_Windows_Web_UI_Interop_IWebViewControlProcess<D>::EnterpriseId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Web::UI::Interop::IWebViewControlProcess)->get_EnterpriseId(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Web_UI_Interop_IWebViewControlProcess<D>::IsPrivateNetworkClientServerCapabilityEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Web::UI::Interop::IWebViewControlProcess)->get_IsPrivateNetworkClientServerCapabilityEnabled(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Web::UI::Interop::WebViewControl> consume_Windows_Web_UI_Interop_IWebViewControlProcess<D>::CreateWebViewControlAsync(int64_t hostWindowHandle, Windows::Foundation::Rect const& bounds) const
{
    Windows::Foundation::IAsyncOperation<Windows::Web::UI::Interop::WebViewControl> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::UI::Interop::IWebViewControlProcess)->CreateWebViewControlAsync(hostWindowHandle, get_abi(bounds), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Web::UI::Interop::WebViewControl> consume_Windows_Web_UI_Interop_IWebViewControlProcess<D>::GetWebViewControls() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Web::UI::Interop::WebViewControl> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::UI::Interop::IWebViewControlProcess)->GetWebViewControls(put_abi(result)));
    return result;
}

template <typename D> void consume_Windows_Web_UI_Interop_IWebViewControlProcess<D>::Terminate() const
{
    check_hresult(WINRT_SHIM(Windows::Web::UI::Interop::IWebViewControlProcess)->Terminate());
}

template <typename D> event_token consume_Windows_Web_UI_Interop_IWebViewControlProcess<D>::ProcessExited(Windows::Foundation::TypedEventHandler<Windows::Web::UI::Interop::WebViewControlProcess, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Web::UI::Interop::IWebViewControlProcess)->add_ProcessExited(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Web::UI::Interop::IWebViewControlProcess> consume_Windows_Web_UI_Interop_IWebViewControlProcess<D>::ProcessExited(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Web::UI::Interop::WebViewControlProcess, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Web::UI::Interop::IWebViewControlProcess>(this, &abi_t<Windows::Web::UI::Interop::IWebViewControlProcess>::remove_ProcessExited, ProcessExited(handler));
}

template <typename D> void consume_Windows_Web_UI_Interop_IWebViewControlProcess<D>::ProcessExited(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Web::UI::Interop::IWebViewControlProcess)->remove_ProcessExited(get_abi(token)));
}

template <typename D> Windows::Web::UI::Interop::WebViewControlProcess consume_Windows_Web_UI_Interop_IWebViewControlProcessFactory<D>::CreateWithOptions(Windows::Web::UI::Interop::WebViewControlProcessOptions const& processOptions) const
{
    Windows::Web::UI::Interop::WebViewControlProcess result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::UI::Interop::IWebViewControlProcessFactory)->CreateWithOptions(get_abi(processOptions), put_abi(result)));
    return result;
}

template <typename D> void consume_Windows_Web_UI_Interop_IWebViewControlProcessOptions<D>::EnterpriseId(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::UI::Interop::IWebViewControlProcessOptions)->put_EnterpriseId(get_abi(value)));
}

template <typename D> hstring consume_Windows_Web_UI_Interop_IWebViewControlProcessOptions<D>::EnterpriseId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Web::UI::Interop::IWebViewControlProcessOptions)->get_EnterpriseId(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_UI_Interop_IWebViewControlProcessOptions<D>::PrivateNetworkClientServerCapability(Windows::Web::UI::Interop::WebViewControlProcessCapabilityState const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::UI::Interop::IWebViewControlProcessOptions)->put_PrivateNetworkClientServerCapability(get_abi(value)));
}

template <typename D> Windows::Web::UI::Interop::WebViewControlProcessCapabilityState consume_Windows_Web_UI_Interop_IWebViewControlProcessOptions<D>::PrivateNetworkClientServerCapability() const
{
    Windows::Web::UI::Interop::WebViewControlProcessCapabilityState value{};
    check_hresult(WINRT_SHIM(Windows::Web::UI::Interop::IWebViewControlProcessOptions)->get_PrivateNetworkClientServerCapability(put_abi(value)));
    return value;
}

template <typename D> Windows::Web::UI::Interop::WebViewControlProcess consume_Windows_Web_UI_Interop_IWebViewControlSite<D>::Process() const
{
    Windows::Web::UI::Interop::WebViewControlProcess value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::UI::Interop::IWebViewControlSite)->get_Process(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_UI_Interop_IWebViewControlSite<D>::Scale(double value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::UI::Interop::IWebViewControlSite)->put_Scale(value));
}

template <typename D> double consume_Windows_Web_UI_Interop_IWebViewControlSite<D>::Scale() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Web::UI::Interop::IWebViewControlSite)->get_Scale(&value));
    return value;
}

template <typename D> void consume_Windows_Web_UI_Interop_IWebViewControlSite<D>::Bounds(Windows::Foundation::Rect const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::UI::Interop::IWebViewControlSite)->put_Bounds(get_abi(value)));
}

template <typename D> Windows::Foundation::Rect consume_Windows_Web_UI_Interop_IWebViewControlSite<D>::Bounds() const
{
    Windows::Foundation::Rect value{};
    check_hresult(WINRT_SHIM(Windows::Web::UI::Interop::IWebViewControlSite)->get_Bounds(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Web_UI_Interop_IWebViewControlSite<D>::IsVisible(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Web::UI::Interop::IWebViewControlSite)->put_IsVisible(value));
}

template <typename D> bool consume_Windows_Web_UI_Interop_IWebViewControlSite<D>::IsVisible() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Web::UI::Interop::IWebViewControlSite)->get_IsVisible(&value));
    return value;
}

template <typename D> void consume_Windows_Web_UI_Interop_IWebViewControlSite<D>::Close() const
{
    check_hresult(WINRT_SHIM(Windows::Web::UI::Interop::IWebViewControlSite)->Close());
}

template <typename D> void consume_Windows_Web_UI_Interop_IWebViewControlSite<D>::MoveFocus(Windows::Web::UI::Interop::WebViewControlMoveFocusReason const& reason) const
{
    check_hresult(WINRT_SHIM(Windows::Web::UI::Interop::IWebViewControlSite)->MoveFocus(get_abi(reason)));
}

template <typename D> event_token consume_Windows_Web_UI_Interop_IWebViewControlSite<D>::MoveFocusRequested(Windows::Foundation::TypedEventHandler<Windows::Web::UI::Interop::WebViewControl, Windows::Web::UI::Interop::WebViewControlMoveFocusRequestedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Web::UI::Interop::IWebViewControlSite)->add_MoveFocusRequested(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Web::UI::Interop::IWebViewControlSite> consume_Windows_Web_UI_Interop_IWebViewControlSite<D>::MoveFocusRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Web::UI::Interop::WebViewControl, Windows::Web::UI::Interop::WebViewControlMoveFocusRequestedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Web::UI::Interop::IWebViewControlSite>(this, &abi_t<Windows::Web::UI::Interop::IWebViewControlSite>::remove_MoveFocusRequested, MoveFocusRequested(handler));
}

template <typename D> void consume_Windows_Web_UI_Interop_IWebViewControlSite<D>::MoveFocusRequested(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Web::UI::Interop::IWebViewControlSite)->remove_MoveFocusRequested(get_abi(token)));
}

template <typename D> event_token consume_Windows_Web_UI_Interop_IWebViewControlSite<D>::AcceleratorKeyPressed(Windows::Foundation::TypedEventHandler<Windows::Web::UI::Interop::WebViewControl, Windows::Web::UI::Interop::WebViewControlAcceleratorKeyPressedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Web::UI::Interop::IWebViewControlSite)->add_AcceleratorKeyPressed(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Web::UI::Interop::IWebViewControlSite> consume_Windows_Web_UI_Interop_IWebViewControlSite<D>::AcceleratorKeyPressed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Web::UI::Interop::WebViewControl, Windows::Web::UI::Interop::WebViewControlAcceleratorKeyPressedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Web::UI::Interop::IWebViewControlSite>(this, &abi_t<Windows::Web::UI::Interop::IWebViewControlSite>::remove_AcceleratorKeyPressed, AcceleratorKeyPressed(handler));
}

template <typename D> void consume_Windows_Web_UI_Interop_IWebViewControlSite<D>::AcceleratorKeyPressed(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Web::UI::Interop::IWebViewControlSite)->remove_AcceleratorKeyPressed(get_abi(token)));
}

template <typename D>
struct produce<D, Windows::Web::UI::Interop::IWebViewControlAcceleratorKeyPressedEventArgs> : produce_base<D, Windows::Web::UI::Interop::IWebViewControlAcceleratorKeyPressedEventArgs>
{
    HRESULT __stdcall get_EventType(Windows::UI::Core::CoreAcceleratorKeyEventType* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Core::CoreAcceleratorKeyEventType>(this->shim().EventType());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_VirtualKey(Windows::System::VirtualKey* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::System::VirtualKey>(this->shim().VirtualKey());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_KeyStatus(struct struct_Windows_UI_Core_CorePhysicalKeyStatus* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Core::CorePhysicalKeyStatus>(this->shim().KeyStatus());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RoutingStage(Windows::Web::UI::Interop::WebViewControlAcceleratorKeyRoutingStage* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Web::UI::Interop::WebViewControlAcceleratorKeyRoutingStage>(this->shim().RoutingStage());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Handled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Handled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Handled(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Handled(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::UI::Interop::IWebViewControlMoveFocusRequestedEventArgs> : produce_base<D, Windows::Web::UI::Interop::IWebViewControlMoveFocusRequestedEventArgs>
{
    HRESULT __stdcall get_Reason(Windows::Web::UI::Interop::WebViewControlMoveFocusReason* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Web::UI::Interop::WebViewControlMoveFocusReason>(this->shim().Reason());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::UI::Interop::IWebViewControlProcess> : produce_base<D, Windows::Web::UI::Interop::IWebViewControlProcess>
{
    HRESULT __stdcall get_ProcessId(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().ProcessId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_EnterpriseId(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().EnterpriseId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsPrivateNetworkClientServerCapabilityEnabled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsPrivateNetworkClientServerCapabilityEnabled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateWebViewControlAsync(int64_t hostWindowHandle, Windows::Foundation::Rect bounds, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Web::UI::Interop::WebViewControl>>(this->shim().CreateWebViewControlAsync(hostWindowHandle, *reinterpret_cast<Windows::Foundation::Rect const*>(&bounds)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetWebViewControls(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Web::UI::Interop::WebViewControl>>(this->shim().GetWebViewControls());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Terminate() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Terminate();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_ProcessExited(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().ProcessExited(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Web::UI::Interop::WebViewControlProcess, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_ProcessExited(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ProcessExited(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::UI::Interop::IWebViewControlProcessFactory> : produce_base<D, Windows::Web::UI::Interop::IWebViewControlProcessFactory>
{
    HRESULT __stdcall CreateWithOptions(void* processOptions, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Web::UI::Interop::WebViewControlProcess>(this->shim().CreateWithOptions(*reinterpret_cast<Windows::Web::UI::Interop::WebViewControlProcessOptions const*>(&processOptions)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::UI::Interop::IWebViewControlProcessOptions> : produce_base<D, Windows::Web::UI::Interop::IWebViewControlProcessOptions>
{
    HRESULT __stdcall put_EnterpriseId(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EnterpriseId(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_EnterpriseId(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().EnterpriseId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_PrivateNetworkClientServerCapability(Windows::Web::UI::Interop::WebViewControlProcessCapabilityState value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PrivateNetworkClientServerCapability(*reinterpret_cast<Windows::Web::UI::Interop::WebViewControlProcessCapabilityState const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PrivateNetworkClientServerCapability(Windows::Web::UI::Interop::WebViewControlProcessCapabilityState* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Web::UI::Interop::WebViewControlProcessCapabilityState>(this->shim().PrivateNetworkClientServerCapability());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::UI::Interop::IWebViewControlSite> : produce_base<D, Windows::Web::UI::Interop::IWebViewControlSite>
{
    HRESULT __stdcall get_Process(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Web::UI::Interop::WebViewControlProcess>(this->shim().Process());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Scale(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Scale(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Scale(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().Scale());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Bounds(Windows::Foundation::Rect value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Bounds(*reinterpret_cast<Windows::Foundation::Rect const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Bounds(Windows::Foundation::Rect* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Rect>(this->shim().Bounds());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsVisible(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsVisible(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsVisible(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsVisible());
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

    HRESULT __stdcall MoveFocus(Windows::Web::UI::Interop::WebViewControlMoveFocusReason reason) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MoveFocus(*reinterpret_cast<Windows::Web::UI::Interop::WebViewControlMoveFocusReason const*>(&reason));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_MoveFocusRequested(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().MoveFocusRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Web::UI::Interop::WebViewControl, Windows::Web::UI::Interop::WebViewControlMoveFocusRequestedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_MoveFocusRequested(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MoveFocusRequested(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_AcceleratorKeyPressed(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().AcceleratorKeyPressed(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Web::UI::Interop::WebViewControl, Windows::Web::UI::Interop::WebViewControlAcceleratorKeyPressedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_AcceleratorKeyPressed(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AcceleratorKeyPressed(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Web::UI::Interop {

inline WebViewControlProcess::WebViewControlProcess() :
    WebViewControlProcess(get_activation_factory<WebViewControlProcess>().ActivateInstance<WebViewControlProcess>())
{}

inline WebViewControlProcess::WebViewControlProcess(Windows::Web::UI::Interop::WebViewControlProcessOptions const& processOptions) :
    WebViewControlProcess(get_activation_factory<WebViewControlProcess, Windows::Web::UI::Interop::IWebViewControlProcessFactory>().CreateWithOptions(processOptions))
{}

inline WebViewControlProcessOptions::WebViewControlProcessOptions() :
    WebViewControlProcessOptions(get_activation_factory<WebViewControlProcessOptions>().ActivateInstance<WebViewControlProcessOptions>())
{}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Web::UI::Interop::IWebViewControlAcceleratorKeyPressedEventArgs> : winrt::impl::hash_base<winrt::Windows::Web::UI::Interop::IWebViewControlAcceleratorKeyPressedEventArgs> {};
template<> struct hash<winrt::Windows::Web::UI::Interop::IWebViewControlMoveFocusRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::Web::UI::Interop::IWebViewControlMoveFocusRequestedEventArgs> {};
template<> struct hash<winrt::Windows::Web::UI::Interop::IWebViewControlProcess> : winrt::impl::hash_base<winrt::Windows::Web::UI::Interop::IWebViewControlProcess> {};
template<> struct hash<winrt::Windows::Web::UI::Interop::IWebViewControlProcessFactory> : winrt::impl::hash_base<winrt::Windows::Web::UI::Interop::IWebViewControlProcessFactory> {};
template<> struct hash<winrt::Windows::Web::UI::Interop::IWebViewControlProcessOptions> : winrt::impl::hash_base<winrt::Windows::Web::UI::Interop::IWebViewControlProcessOptions> {};
template<> struct hash<winrt::Windows::Web::UI::Interop::IWebViewControlSite> : winrt::impl::hash_base<winrt::Windows::Web::UI::Interop::IWebViewControlSite> {};
template<> struct hash<winrt::Windows::Web::UI::Interop::WebViewControl> : winrt::impl::hash_base<winrt::Windows::Web::UI::Interop::WebViewControl> {};
template<> struct hash<winrt::Windows::Web::UI::Interop::WebViewControlAcceleratorKeyPressedEventArgs> : winrt::impl::hash_base<winrt::Windows::Web::UI::Interop::WebViewControlAcceleratorKeyPressedEventArgs> {};
template<> struct hash<winrt::Windows::Web::UI::Interop::WebViewControlMoveFocusRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::Web::UI::Interop::WebViewControlMoveFocusRequestedEventArgs> {};
template<> struct hash<winrt::Windows::Web::UI::Interop::WebViewControlProcess> : winrt::impl::hash_base<winrt::Windows::Web::UI::Interop::WebViewControlProcess> {};
template<> struct hash<winrt::Windows::Web::UI::Interop::WebViewControlProcessOptions> : winrt::impl::hash_base<winrt::Windows::Web::UI::Interop::WebViewControlProcessOptions> {};

}

WINRT_WARNING_POP
