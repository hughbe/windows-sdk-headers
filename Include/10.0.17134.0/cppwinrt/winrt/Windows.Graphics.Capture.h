// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Graphics.2.h"
#include "winrt/impl/Windows.Graphics.DirectX.2.h"
#include "winrt/impl/Windows.Graphics.DirectX.Direct3D11.2.h"
#include "winrt/impl/Windows.System.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Graphics.Capture.2.h"
#include "winrt/Windows.Graphics.h"

namespace winrt::impl {

template <typename D> Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface consume_Windows_Graphics_Capture_IDirect3D11CaptureFrame<D>::Surface() const
{
    Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Capture::IDirect3D11CaptureFrame)->get_Surface(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Graphics_Capture_IDirect3D11CaptureFrame<D>::SystemRelativeTime() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Capture::IDirect3D11CaptureFrame)->get_SystemRelativeTime(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::SizeInt32 consume_Windows_Graphics_Capture_IDirect3D11CaptureFrame<D>::ContentSize() const
{
    Windows::Graphics::SizeInt32 value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Capture::IDirect3D11CaptureFrame)->get_ContentSize(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Capture_IDirect3D11CaptureFramePool<D>::Recreate(Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice const& device, Windows::Graphics::DirectX::DirectXPixelFormat const& pixelFormat, int32_t numberOfBuffers, Windows::Graphics::SizeInt32 const& size) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Capture::IDirect3D11CaptureFramePool)->Recreate(get_abi(device), get_abi(pixelFormat), numberOfBuffers, get_abi(size)));
}

template <typename D> Windows::Graphics::Capture::Direct3D11CaptureFrame consume_Windows_Graphics_Capture_IDirect3D11CaptureFramePool<D>::TryGetNextFrame() const
{
    Windows::Graphics::Capture::Direct3D11CaptureFrame value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Capture::IDirect3D11CaptureFramePool)->TryGetNextFrame(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Graphics_Capture_IDirect3D11CaptureFramePool<D>::FrameArrived(Windows::Foundation::TypedEventHandler<Windows::Graphics::Capture::Direct3D11CaptureFramePool, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Capture::IDirect3D11CaptureFramePool)->add_FrameArrived(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Graphics::Capture::IDirect3D11CaptureFramePool> consume_Windows_Graphics_Capture_IDirect3D11CaptureFramePool<D>::FrameArrived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Capture::Direct3D11CaptureFramePool, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Graphics::Capture::IDirect3D11CaptureFramePool>(this, &abi_t<Windows::Graphics::Capture::IDirect3D11CaptureFramePool>::remove_FrameArrived, FrameArrived(handler));
}

template <typename D> void consume_Windows_Graphics_Capture_IDirect3D11CaptureFramePool<D>::FrameArrived(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Capture::IDirect3D11CaptureFramePool)->remove_FrameArrived(get_abi(token)));
}

template <typename D> Windows::Graphics::Capture::GraphicsCaptureSession consume_Windows_Graphics_Capture_IDirect3D11CaptureFramePool<D>::CreateCaptureSession(Windows::Graphics::Capture::GraphicsCaptureItem const& item) const
{
    Windows::Graphics::Capture::GraphicsCaptureSession value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Capture::IDirect3D11CaptureFramePool)->CreateCaptureSession(get_abi(item), put_abi(value)));
    return value;
}

template <typename D> Windows::System::DispatcherQueue consume_Windows_Graphics_Capture_IDirect3D11CaptureFramePool<D>::DispatcherQueue() const
{
    Windows::System::DispatcherQueue value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Capture::IDirect3D11CaptureFramePool)->get_DispatcherQueue(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Capture::Direct3D11CaptureFramePool consume_Windows_Graphics_Capture_IDirect3D11CaptureFramePoolStatics<D>::Create(Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice const& device, Windows::Graphics::DirectX::DirectXPixelFormat const& pixelFormat, int32_t numberOfBuffers, Windows::Graphics::SizeInt32 const& size) const
{
    Windows::Graphics::Capture::Direct3D11CaptureFramePool result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Capture::IDirect3D11CaptureFramePoolStatics)->Create(get_abi(device), get_abi(pixelFormat), numberOfBuffers, get_abi(size), put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_Graphics_Capture_IGraphicsCaptureItem<D>::DisplayName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Capture::IGraphicsCaptureItem)->get_DisplayName(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::SizeInt32 consume_Windows_Graphics_Capture_IGraphicsCaptureItem<D>::Size() const
{
    Windows::Graphics::SizeInt32 value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Capture::IGraphicsCaptureItem)->get_Size(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Graphics_Capture_IGraphicsCaptureItem<D>::Closed(Windows::Foundation::TypedEventHandler<Windows::Graphics::Capture::GraphicsCaptureItem, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Capture::IGraphicsCaptureItem)->add_Closed(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Graphics::Capture::IGraphicsCaptureItem> consume_Windows_Graphics_Capture_IGraphicsCaptureItem<D>::Closed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Capture::GraphicsCaptureItem, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Graphics::Capture::IGraphicsCaptureItem>(this, &abi_t<Windows::Graphics::Capture::IGraphicsCaptureItem>::remove_Closed, Closed(handler));
}

template <typename D> void consume_Windows_Graphics_Capture_IGraphicsCaptureItem<D>::Closed(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Capture::IGraphicsCaptureItem)->remove_Closed(get_abi(token)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Graphics::Capture::GraphicsCaptureItem> consume_Windows_Graphics_Capture_IGraphicsCapturePicker<D>::PickSingleItemAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Graphics::Capture::GraphicsCaptureItem> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Capture::IGraphicsCapturePicker)->PickSingleItemAsync(put_abi(result)));
    return result;
}

template <typename D> void consume_Windows_Graphics_Capture_IGraphicsCaptureSession<D>::StartCapture() const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Capture::IGraphicsCaptureSession)->StartCapture());
}

template <typename D> bool consume_Windows_Graphics_Capture_IGraphicsCaptureSessionStatics<D>::IsSupported() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Capture::IGraphicsCaptureSessionStatics)->IsSupported(&value));
    return value;
}

template <typename D>
struct produce<D, Windows::Graphics::Capture::IDirect3D11CaptureFrame> : produce_base<D, Windows::Graphics::Capture::IDirect3D11CaptureFrame>
{
    HRESULT __stdcall get_Surface(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface>(this->shim().Surface());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SystemRelativeTime(Windows::Foundation::TimeSpan* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().SystemRelativeTime());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ContentSize(struct struct_Windows_Graphics_SizeInt32* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::SizeInt32>(this->shim().ContentSize());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Capture::IDirect3D11CaptureFramePool> : produce_base<D, Windows::Graphics::Capture::IDirect3D11CaptureFramePool>
{
    HRESULT __stdcall Recreate(void* device, Windows::Graphics::DirectX::DirectXPixelFormat pixelFormat, int32_t numberOfBuffers, struct struct_Windows_Graphics_SizeInt32 size) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Recreate(*reinterpret_cast<Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice const*>(&device), *reinterpret_cast<Windows::Graphics::DirectX::DirectXPixelFormat const*>(&pixelFormat), numberOfBuffers, *reinterpret_cast<Windows::Graphics::SizeInt32 const*>(&size));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall TryGetNextFrame(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Capture::Direct3D11CaptureFrame>(this->shim().TryGetNextFrame());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_FrameArrived(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().FrameArrived(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Graphics::Capture::Direct3D11CaptureFramePool, Windows::Foundation::IInspectable> const*>(&handler)));
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

    HRESULT __stdcall CreateCaptureSession(void* item, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Capture::GraphicsCaptureSession>(this->shim().CreateCaptureSession(*reinterpret_cast<Windows::Graphics::Capture::GraphicsCaptureItem const*>(&item)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DispatcherQueue(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::System::DispatcherQueue>(this->shim().DispatcherQueue());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Capture::IDirect3D11CaptureFramePoolStatics> : produce_base<D, Windows::Graphics::Capture::IDirect3D11CaptureFramePoolStatics>
{
    HRESULT __stdcall Create(void* device, Windows::Graphics::DirectX::DirectXPixelFormat pixelFormat, int32_t numberOfBuffers, struct struct_Windows_Graphics_SizeInt32 size, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Graphics::Capture::Direct3D11CaptureFramePool>(this->shim().Create(*reinterpret_cast<Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice const*>(&device), *reinterpret_cast<Windows::Graphics::DirectX::DirectXPixelFormat const*>(&pixelFormat), numberOfBuffers, *reinterpret_cast<Windows::Graphics::SizeInt32 const*>(&size)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Capture::IGraphicsCaptureItem> : produce_base<D, Windows::Graphics::Capture::IGraphicsCaptureItem>
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

    HRESULT __stdcall get_Size(struct struct_Windows_Graphics_SizeInt32* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::SizeInt32>(this->shim().Size());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_Closed(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().Closed(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Graphics::Capture::GraphicsCaptureItem, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_Closed(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Closed(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Capture::IGraphicsCapturePicker> : produce_base<D, Windows::Graphics::Capture::IGraphicsCapturePicker>
{
    HRESULT __stdcall PickSingleItemAsync(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::Graphics::Capture::GraphicsCaptureItem>>(this->shim().PickSingleItemAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Capture::IGraphicsCaptureSession> : produce_base<D, Windows::Graphics::Capture::IGraphicsCaptureSession>
{
    HRESULT __stdcall StartCapture() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StartCapture();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Capture::IGraphicsCaptureSessionStatics> : produce_base<D, Windows::Graphics::Capture::IGraphicsCaptureSessionStatics>
{
    HRESULT __stdcall IsSupported(bool* value) noexcept final
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
};

}

WINRT_EXPORT namespace winrt::Windows::Graphics::Capture {

inline Windows::Graphics::Capture::Direct3D11CaptureFramePool Direct3D11CaptureFramePool::Create(Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice const& device, Windows::Graphics::DirectX::DirectXPixelFormat const& pixelFormat, int32_t numberOfBuffers, Windows::Graphics::SizeInt32 const& size)
{
    return get_activation_factory<Direct3D11CaptureFramePool, Windows::Graphics::Capture::IDirect3D11CaptureFramePoolStatics>().Create(device, pixelFormat, numberOfBuffers, size);
}

inline GraphicsCapturePicker::GraphicsCapturePicker() :
    GraphicsCapturePicker(get_activation_factory<GraphicsCapturePicker>().ActivateInstance<GraphicsCapturePicker>())
{}

inline bool GraphicsCaptureSession::IsSupported()
{
    return get_activation_factory<GraphicsCaptureSession, Windows::Graphics::Capture::IGraphicsCaptureSessionStatics>().IsSupported();
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Graphics::Capture::IDirect3D11CaptureFrame> : winrt::impl::hash_base<winrt::Windows::Graphics::Capture::IDirect3D11CaptureFrame> {};
template<> struct hash<winrt::Windows::Graphics::Capture::IDirect3D11CaptureFramePool> : winrt::impl::hash_base<winrt::Windows::Graphics::Capture::IDirect3D11CaptureFramePool> {};
template<> struct hash<winrt::Windows::Graphics::Capture::IDirect3D11CaptureFramePoolStatics> : winrt::impl::hash_base<winrt::Windows::Graphics::Capture::IDirect3D11CaptureFramePoolStatics> {};
template<> struct hash<winrt::Windows::Graphics::Capture::IGraphicsCaptureItem> : winrt::impl::hash_base<winrt::Windows::Graphics::Capture::IGraphicsCaptureItem> {};
template<> struct hash<winrt::Windows::Graphics::Capture::IGraphicsCapturePicker> : winrt::impl::hash_base<winrt::Windows::Graphics::Capture::IGraphicsCapturePicker> {};
template<> struct hash<winrt::Windows::Graphics::Capture::IGraphicsCaptureSession> : winrt::impl::hash_base<winrt::Windows::Graphics::Capture::IGraphicsCaptureSession> {};
template<> struct hash<winrt::Windows::Graphics::Capture::IGraphicsCaptureSessionStatics> : winrt::impl::hash_base<winrt::Windows::Graphics::Capture::IGraphicsCaptureSessionStatics> {};
template<> struct hash<winrt::Windows::Graphics::Capture::Direct3D11CaptureFrame> : winrt::impl::hash_base<winrt::Windows::Graphics::Capture::Direct3D11CaptureFrame> {};
template<> struct hash<winrt::Windows::Graphics::Capture::Direct3D11CaptureFramePool> : winrt::impl::hash_base<winrt::Windows::Graphics::Capture::Direct3D11CaptureFramePool> {};
template<> struct hash<winrt::Windows::Graphics::Capture::GraphicsCaptureItem> : winrt::impl::hash_base<winrt::Windows::Graphics::Capture::GraphicsCaptureItem> {};
template<> struct hash<winrt::Windows::Graphics::Capture::GraphicsCapturePicker> : winrt::impl::hash_base<winrt::Windows::Graphics::Capture::GraphicsCapturePicker> {};
template<> struct hash<winrt::Windows::Graphics::Capture::GraphicsCaptureSession> : winrt::impl::hash_base<winrt::Windows::Graphics::Capture::GraphicsCaptureSession> {};

}

WINRT_WARNING_POP
