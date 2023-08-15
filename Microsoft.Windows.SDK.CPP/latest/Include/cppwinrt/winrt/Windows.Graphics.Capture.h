// C++/WinRT v2.0.200609.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Graphics_Capture_H
#define WINRT_Windows_Graphics_Capture_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.200609.3"), "Mismatched C++/WinRT headers.");
#include "winrt/Windows.Graphics.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Graphics.2.h"
#include "winrt/impl/Windows.Graphics.DirectX.2.h"
#include "winrt/impl/Windows.Graphics.DirectX.Direct3D11.2.h"
#include "winrt/impl/Windows.Security.Authorization.AppCapabilityAccess.2.h"
#include "winrt/impl/Windows.System.2.h"
#include "winrt/impl/Windows.UI.2.h"
#include "winrt/impl/Windows.UI.Composition.2.h"
#include "winrt/impl/Windows.Graphics.Capture.2.h"
namespace winrt::impl
{
    template <typename D> WINRT_IMPL_AUTO(Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface) consume_Windows_Graphics_Capture_IDirect3D11CaptureFrame<D>::Surface() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Capture::IDirect3D11CaptureFrame)->get_Surface(&value));
        return Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::TimeSpan) consume_Windows_Graphics_Capture_IDirect3D11CaptureFrame<D>::SystemRelativeTime() const
    {
        Windows::Foundation::TimeSpan value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Capture::IDirect3D11CaptureFrame)->get_SystemRelativeTime(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Graphics::SizeInt32) consume_Windows_Graphics_Capture_IDirect3D11CaptureFrame<D>::ContentSize() const
    {
        Windows::Graphics::SizeInt32 value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Capture::IDirect3D11CaptureFrame)->get_ContentSize(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Graphics_Capture_IDirect3D11CaptureFramePool<D>::Recreate(Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice const& device, Windows::Graphics::DirectX::DirectXPixelFormat const& pixelFormat, int32_t numberOfBuffers, Windows::Graphics::SizeInt32 const& size) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Capture::IDirect3D11CaptureFramePool)->Recreate(*(void**)(&device), static_cast<int32_t>(pixelFormat), numberOfBuffers, impl::bind_in(size)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Graphics::Capture::Direct3D11CaptureFrame) consume_Windows_Graphics_Capture_IDirect3D11CaptureFramePool<D>::TryGetNextFrame() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Capture::IDirect3D11CaptureFramePool)->TryGetNextFrame(&result));
        return Windows::Graphics::Capture::Direct3D11CaptureFrame{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_Graphics_Capture_IDirect3D11CaptureFramePool<D>::FrameArrived(Windows::Foundation::TypedEventHandler<Windows::Graphics::Capture::Direct3D11CaptureFramePool, Windows::Foundation::IInspectable> const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Capture::IDirect3D11CaptureFramePool)->add_FrameArrived(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Graphics_Capture_IDirect3D11CaptureFramePool<D>::FrameArrived_revoker consume_Windows_Graphics_Capture_IDirect3D11CaptureFramePool<D>::FrameArrived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Capture::Direct3D11CaptureFramePool, Windows::Foundation::IInspectable> const& handler) const
    {
        return impl::make_event_revoker<D, FrameArrived_revoker>(this, FrameArrived(handler));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Graphics_Capture_IDirect3D11CaptureFramePool<D>::FrameArrived(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Graphics::Capture::IDirect3D11CaptureFramePool)->remove_FrameArrived(impl::bind_in(token)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Graphics::Capture::GraphicsCaptureSession) consume_Windows_Graphics_Capture_IDirect3D11CaptureFramePool<D>::CreateCaptureSession(Windows::Graphics::Capture::GraphicsCaptureItem const& item) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Capture::IDirect3D11CaptureFramePool)->CreateCaptureSession(*(void**)(&item), &result));
        return Windows::Graphics::Capture::GraphicsCaptureSession{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::System::DispatcherQueue) consume_Windows_Graphics_Capture_IDirect3D11CaptureFramePool<D>::DispatcherQueue() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Capture::IDirect3D11CaptureFramePool)->get_DispatcherQueue(&value));
        return Windows::System::DispatcherQueue{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Graphics::Capture::Direct3D11CaptureFramePool) consume_Windows_Graphics_Capture_IDirect3D11CaptureFramePoolStatics<D>::Create(Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice const& device, Windows::Graphics::DirectX::DirectXPixelFormat const& pixelFormat, int32_t numberOfBuffers, Windows::Graphics::SizeInt32 const& size) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Capture::IDirect3D11CaptureFramePoolStatics)->Create(*(void**)(&device), static_cast<int32_t>(pixelFormat), numberOfBuffers, impl::bind_in(size), &result));
        return Windows::Graphics::Capture::Direct3D11CaptureFramePool{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Graphics::Capture::Direct3D11CaptureFramePool) consume_Windows_Graphics_Capture_IDirect3D11CaptureFramePoolStatics2<D>::CreateFreeThreaded(Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice const& device, Windows::Graphics::DirectX::DirectXPixelFormat const& pixelFormat, int32_t numberOfBuffers, Windows::Graphics::SizeInt32 const& size) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Capture::IDirect3D11CaptureFramePoolStatics2)->CreateFreeThreaded(*(void**)(&device), static_cast<int32_t>(pixelFormat), numberOfBuffers, impl::bind_in(size), &result));
        return Windows::Graphics::Capture::Direct3D11CaptureFramePool{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Security::Authorization::AppCapabilityAccess::AppCapabilityAccessStatus>) consume_Windows_Graphics_Capture_IGraphicsCaptureAccessStatics<D>::RequestAccessAsync(Windows::Graphics::Capture::GraphicsCaptureAccessKind const& request) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Capture::IGraphicsCaptureAccessStatics)->RequestAccessAsync(static_cast<int32_t>(request), &operation));
        return Windows::Foundation::IAsyncOperation<Windows::Security::Authorization::AppCapabilityAccess::AppCapabilityAccessStatus>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Graphics_Capture_IGraphicsCaptureItem<D>::DisplayName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Capture::IGraphicsCaptureItem)->get_DisplayName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Graphics::SizeInt32) consume_Windows_Graphics_Capture_IGraphicsCaptureItem<D>::Size() const
    {
        Windows::Graphics::SizeInt32 value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Capture::IGraphicsCaptureItem)->get_Size(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_Graphics_Capture_IGraphicsCaptureItem<D>::Closed(Windows::Foundation::TypedEventHandler<Windows::Graphics::Capture::GraphicsCaptureItem, Windows::Foundation::IInspectable> const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Capture::IGraphicsCaptureItem)->add_Closed(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Graphics_Capture_IGraphicsCaptureItem<D>::Closed_revoker consume_Windows_Graphics_Capture_IGraphicsCaptureItem<D>::Closed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Capture::GraphicsCaptureItem, Windows::Foundation::IInspectable> const& handler) const
    {
        return impl::make_event_revoker<D, Closed_revoker>(this, Closed(handler));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Graphics_Capture_IGraphicsCaptureItem<D>::Closed(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Graphics::Capture::IGraphicsCaptureItem)->remove_Closed(impl::bind_in(token)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Graphics::Capture::GraphicsCaptureItem) consume_Windows_Graphics_Capture_IGraphicsCaptureItemStatics<D>::CreateFromVisual(Windows::UI::Composition::Visual const& visual) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Capture::IGraphicsCaptureItemStatics)->CreateFromVisual(*(void**)(&visual), &result));
        return Windows::Graphics::Capture::GraphicsCaptureItem{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Graphics::Capture::GraphicsCaptureItem) consume_Windows_Graphics_Capture_IGraphicsCaptureItemStatics2<D>::TryCreateFromWindowId(Windows::UI::WindowId const& windowId) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Capture::IGraphicsCaptureItemStatics2)->TryCreateFromWindowId(impl::bind_in(windowId), &result));
        return Windows::Graphics::Capture::GraphicsCaptureItem{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Graphics::Capture::GraphicsCaptureItem) consume_Windows_Graphics_Capture_IGraphicsCaptureItemStatics2<D>::TryCreateFromDisplayId(Windows::Graphics::DisplayId const& displayId) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Capture::IGraphicsCaptureItemStatics2)->TryCreateFromDisplayId(impl::bind_in(displayId), &result));
        return Windows::Graphics::Capture::GraphicsCaptureItem{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Graphics::Capture::GraphicsCaptureItem>) consume_Windows_Graphics_Capture_IGraphicsCapturePicker<D>::PickSingleItemAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Capture::IGraphicsCapturePicker)->PickSingleItemAsync(&operation));
        return Windows::Foundation::IAsyncOperation<Windows::Graphics::Capture::GraphicsCaptureItem>{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Graphics_Capture_IGraphicsCaptureSession<D>::StartCapture() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Capture::IGraphicsCaptureSession)->StartCapture());
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Graphics_Capture_IGraphicsCaptureSession2<D>::IsCursorCaptureEnabled() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Capture::IGraphicsCaptureSession2)->get_IsCursorCaptureEnabled(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Graphics_Capture_IGraphicsCaptureSession2<D>::IsCursorCaptureEnabled(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Capture::IGraphicsCaptureSession2)->put_IsCursorCaptureEnabled(value));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Graphics_Capture_IGraphicsCaptureSession3<D>::IsBorderRequired() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Capture::IGraphicsCaptureSession3)->get_IsBorderRequired(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Graphics_Capture_IGraphicsCaptureSession3<D>::IsBorderRequired(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Capture::IGraphicsCaptureSession3)->put_IsBorderRequired(value));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Graphics_Capture_IGraphicsCaptureSessionStatics<D>::IsSupported() const
    {
        bool result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Graphics::Capture::IGraphicsCaptureSessionStatics)->IsSupported(&result));
        return result;
    }
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Graphics::Capture::IDirect3D11CaptureFrame> : produce_base<D, Windows::Graphics::Capture::IDirect3D11CaptureFrame>
    {
        int32_t __stdcall get_Surface(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface>(this->shim().Surface());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SystemRelativeTime(int64_t* value) noexcept final try
        {
            zero_abi<Windows::Foundation::TimeSpan>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().SystemRelativeTime());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ContentSize(struct struct_Windows_Graphics_SizeInt32* value) noexcept final try
        {
            zero_abi<Windows::Graphics::SizeInt32>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::SizeInt32>(this->shim().ContentSize());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Graphics::Capture::IDirect3D11CaptureFramePool> : produce_base<D, Windows::Graphics::Capture::IDirect3D11CaptureFramePool>
    {
        int32_t __stdcall Recreate(void* device, int32_t pixelFormat, int32_t numberOfBuffers, struct struct_Windows_Graphics_SizeInt32 size) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Recreate(*reinterpret_cast<Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice const*>(&device), *reinterpret_cast<Windows::Graphics::DirectX::DirectXPixelFormat const*>(&pixelFormat), numberOfBuffers, *reinterpret_cast<Windows::Graphics::SizeInt32 const*>(&size));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryGetNextFrame(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Graphics::Capture::Direct3D11CaptureFrame>(this->shim().TryGetNextFrame());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_FrameArrived(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().FrameArrived(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Graphics::Capture::Direct3D11CaptureFramePool, Windows::Foundation::IInspectable> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_FrameArrived(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FrameArrived(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall CreateCaptureSession(void* item, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Graphics::Capture::GraphicsCaptureSession>(this->shim().CreateCaptureSession(*reinterpret_cast<Windows::Graphics::Capture::GraphicsCaptureItem const*>(&item)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DispatcherQueue(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::System::DispatcherQueue>(this->shim().DispatcherQueue());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Graphics::Capture::IDirect3D11CaptureFramePoolStatics> : produce_base<D, Windows::Graphics::Capture::IDirect3D11CaptureFramePoolStatics>
    {
        int32_t __stdcall Create(void* device, int32_t pixelFormat, int32_t numberOfBuffers, struct struct_Windows_Graphics_SizeInt32 size, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Graphics::Capture::Direct3D11CaptureFramePool>(this->shim().Create(*reinterpret_cast<Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice const*>(&device), *reinterpret_cast<Windows::Graphics::DirectX::DirectXPixelFormat const*>(&pixelFormat), numberOfBuffers, *reinterpret_cast<Windows::Graphics::SizeInt32 const*>(&size)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Graphics::Capture::IDirect3D11CaptureFramePoolStatics2> : produce_base<D, Windows::Graphics::Capture::IDirect3D11CaptureFramePoolStatics2>
    {
        int32_t __stdcall CreateFreeThreaded(void* device, int32_t pixelFormat, int32_t numberOfBuffers, struct struct_Windows_Graphics_SizeInt32 size, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Graphics::Capture::Direct3D11CaptureFramePool>(this->shim().CreateFreeThreaded(*reinterpret_cast<Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice const*>(&device), *reinterpret_cast<Windows::Graphics::DirectX::DirectXPixelFormat const*>(&pixelFormat), numberOfBuffers, *reinterpret_cast<Windows::Graphics::SizeInt32 const*>(&size)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Graphics::Capture::IGraphicsCaptureAccessStatics> : produce_base<D, Windows::Graphics::Capture::IGraphicsCaptureAccessStatics>
    {
        int32_t __stdcall RequestAccessAsync(int32_t request, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Security::Authorization::AppCapabilityAccess::AppCapabilityAccessStatus>>(this->shim().RequestAccessAsync(*reinterpret_cast<Windows::Graphics::Capture::GraphicsCaptureAccessKind const*>(&request)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Graphics::Capture::IGraphicsCaptureItem> : produce_base<D, Windows::Graphics::Capture::IGraphicsCaptureItem>
    {
        int32_t __stdcall get_DisplayName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DisplayName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Size(struct struct_Windows_Graphics_SizeInt32* value) noexcept final try
        {
            zero_abi<Windows::Graphics::SizeInt32>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::SizeInt32>(this->shim().Size());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_Closed(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().Closed(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Graphics::Capture::GraphicsCaptureItem, Windows::Foundation::IInspectable> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_Closed(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Closed(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Graphics::Capture::IGraphicsCaptureItemStatics> : produce_base<D, Windows::Graphics::Capture::IGraphicsCaptureItemStatics>
    {
        int32_t __stdcall CreateFromVisual(void* visual, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Graphics::Capture::GraphicsCaptureItem>(this->shim().CreateFromVisual(*reinterpret_cast<Windows::UI::Composition::Visual const*>(&visual)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Graphics::Capture::IGraphicsCaptureItemStatics2> : produce_base<D, Windows::Graphics::Capture::IGraphicsCaptureItemStatics2>
    {
        int32_t __stdcall TryCreateFromWindowId(struct struct_Windows_UI_WindowId windowId, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Graphics::Capture::GraphicsCaptureItem>(this->shim().TryCreateFromWindowId(*reinterpret_cast<Windows::UI::WindowId const*>(&windowId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryCreateFromDisplayId(struct struct_Windows_Graphics_DisplayId displayId, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Graphics::Capture::GraphicsCaptureItem>(this->shim().TryCreateFromDisplayId(*reinterpret_cast<Windows::Graphics::DisplayId const*>(&displayId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Graphics::Capture::IGraphicsCapturePicker> : produce_base<D, Windows::Graphics::Capture::IGraphicsCapturePicker>
    {
        int32_t __stdcall PickSingleItemAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Graphics::Capture::GraphicsCaptureItem>>(this->shim().PickSingleItemAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Graphics::Capture::IGraphicsCaptureSession> : produce_base<D, Windows::Graphics::Capture::IGraphicsCaptureSession>
    {
        int32_t __stdcall StartCapture() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StartCapture();
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Graphics::Capture::IGraphicsCaptureSession2> : produce_base<D, Windows::Graphics::Capture::IGraphicsCaptureSession2>
    {
        int32_t __stdcall get_IsCursorCaptureEnabled(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsCursorCaptureEnabled());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_IsCursorCaptureEnabled(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsCursorCaptureEnabled(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Graphics::Capture::IGraphicsCaptureSession3> : produce_base<D, Windows::Graphics::Capture::IGraphicsCaptureSession3>
    {
        int32_t __stdcall get_IsBorderRequired(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsBorderRequired());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_IsBorderRequired(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsBorderRequired(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Graphics::Capture::IGraphicsCaptureSessionStatics> : produce_base<D, Windows::Graphics::Capture::IGraphicsCaptureSessionStatics>
    {
        int32_t __stdcall IsSupported(bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().IsSupported());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
}
WINRT_EXPORT namespace winrt::Windows::Graphics::Capture
{
    inline auto Direct3D11CaptureFramePool::Create(Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice const& device, Windows::Graphics::DirectX::DirectXPixelFormat const& pixelFormat, int32_t numberOfBuffers, Windows::Graphics::SizeInt32 const& size)
    {
        return impl::call_factory<Direct3D11CaptureFramePool, IDirect3D11CaptureFramePoolStatics>([&](IDirect3D11CaptureFramePoolStatics const& f) { return f.Create(device, pixelFormat, numberOfBuffers, size); });
    }
    inline auto Direct3D11CaptureFramePool::CreateFreeThreaded(Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice const& device, Windows::Graphics::DirectX::DirectXPixelFormat const& pixelFormat, int32_t numberOfBuffers, Windows::Graphics::SizeInt32 const& size)
    {
        return impl::call_factory<Direct3D11CaptureFramePool, IDirect3D11CaptureFramePoolStatics2>([&](IDirect3D11CaptureFramePoolStatics2 const& f) { return f.CreateFreeThreaded(device, pixelFormat, numberOfBuffers, size); });
    }
    inline auto GraphicsCaptureAccess::RequestAccessAsync(Windows::Graphics::Capture::GraphicsCaptureAccessKind const& request)
    {
        return impl::call_factory<GraphicsCaptureAccess, IGraphicsCaptureAccessStatics>([&](IGraphicsCaptureAccessStatics const& f) { return f.RequestAccessAsync(request); });
    }
    inline auto GraphicsCaptureItem::CreateFromVisual(Windows::UI::Composition::Visual const& visual)
    {
        return impl::call_factory<GraphicsCaptureItem, IGraphicsCaptureItemStatics>([&](IGraphicsCaptureItemStatics const& f) { return f.CreateFromVisual(visual); });
    }
    inline auto GraphicsCaptureItem::TryCreateFromWindowId(Windows::UI::WindowId const& windowId)
    {
        return impl::call_factory<GraphicsCaptureItem, IGraphicsCaptureItemStatics2>([&](IGraphicsCaptureItemStatics2 const& f) { return f.TryCreateFromWindowId(windowId); });
    }
    inline auto GraphicsCaptureItem::TryCreateFromDisplayId(Windows::Graphics::DisplayId const& displayId)
    {
        return impl::call_factory<GraphicsCaptureItem, IGraphicsCaptureItemStatics2>([&](IGraphicsCaptureItemStatics2 const& f) { return f.TryCreateFromDisplayId(displayId); });
    }
    inline GraphicsCapturePicker::GraphicsCapturePicker() :
        GraphicsCapturePicker(impl::call_factory_cast<GraphicsCapturePicker(*)(Windows::Foundation::IActivationFactory const&), GraphicsCapturePicker>([](Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<GraphicsCapturePicker>(); }))
    {
    }
    inline auto GraphicsCaptureSession::IsSupported()
    {
        return impl::call_factory_cast<bool(*)(IGraphicsCaptureSessionStatics const&), GraphicsCaptureSession, IGraphicsCaptureSessionStatics>([](IGraphicsCaptureSessionStatics const& f) { return f.IsSupported(); });
    }
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Windows::Graphics::Capture::IDirect3D11CaptureFrame> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Graphics::Capture::IDirect3D11CaptureFramePool> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Graphics::Capture::IDirect3D11CaptureFramePoolStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Graphics::Capture::IDirect3D11CaptureFramePoolStatics2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Graphics::Capture::IGraphicsCaptureAccessStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Graphics::Capture::IGraphicsCaptureItem> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Graphics::Capture::IGraphicsCaptureItemStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Graphics::Capture::IGraphicsCaptureItemStatics2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Graphics::Capture::IGraphicsCapturePicker> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Graphics::Capture::IGraphicsCaptureSession> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Graphics::Capture::IGraphicsCaptureSession2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Graphics::Capture::IGraphicsCaptureSession3> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Graphics::Capture::IGraphicsCaptureSessionStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Graphics::Capture::Direct3D11CaptureFrame> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Graphics::Capture::Direct3D11CaptureFramePool> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Graphics::Capture::GraphicsCaptureAccess> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Graphics::Capture::GraphicsCaptureItem> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Graphics::Capture::GraphicsCapturePicker> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Graphics::Capture::GraphicsCaptureSession> : winrt::impl::hash_base {};
#endif
}
#endif
