// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Graphics.Imaging.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.ApplicationModel.Preview.Notes.2.h"

namespace winrt::impl {

template <typename D> int32_t consume_Windows_ApplicationModel_Preview_Notes_INotePlacementChangedPreviewEventArgs<D>::ViewId() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Preview::Notes::INotePlacementChangedPreviewEventArgs)->get_ViewId(&value));
    return value;
}

template <typename D> int32_t consume_Windows_ApplicationModel_Preview_Notes_INoteVisibilityChangedPreviewEventArgs<D>::ViewId() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Preview::Notes::INoteVisibilityChangedPreviewEventArgs)->get_ViewId(&value));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_Preview_Notes_INoteVisibilityChangedPreviewEventArgs<D>::IsVisible() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Preview::Notes::INoteVisibilityChangedPreviewEventArgs)->get_IsVisible(&value));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_Preview_Notes_INotesWindowManagerPreview<D>::IsScreenLocked() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreview)->get_IsScreenLocked(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Preview_Notes_INotesWindowManagerPreview<D>::ShowNote(int32_t noteViewId) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreview)->ShowNote(noteViewId));
}

template <typename D> void consume_Windows_ApplicationModel_Preview_Notes_INotesWindowManagerPreview<D>::ShowNoteRelativeTo(int32_t noteViewId, int32_t anchorNoteViewId) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreview)->ShowNoteRelativeTo(noteViewId, anchorNoteViewId));
}

template <typename D> void consume_Windows_ApplicationModel_Preview_Notes_INotesWindowManagerPreview<D>::ShowNoteWithPlacement(int32_t noteViewId, Windows::Storage::Streams::IBuffer const& data) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreview)->ShowNoteWithPlacement(noteViewId, get_abi(data)));
}

template <typename D> void consume_Windows_ApplicationModel_Preview_Notes_INotesWindowManagerPreview<D>::HideNote(int32_t noteViewId) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreview)->HideNote(noteViewId));
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_ApplicationModel_Preview_Notes_INotesWindowManagerPreview<D>::GetNotePlacement(int32_t noteViewId) const
{
    Windows::Storage::Streams::IBuffer data{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreview)->GetNotePlacement(noteViewId, put_abi(data)));
    return data;
}

template <typename D> bool consume_Windows_ApplicationModel_Preview_Notes_INotesWindowManagerPreview<D>::TrySetNoteSize(int32_t noteViewId, Windows::Foundation::Size const& size) const
{
    bool succeeded{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreview)->TrySetNoteSize(noteViewId, get_abi(size), &succeeded));
    return succeeded;
}

template <typename D> void consume_Windows_ApplicationModel_Preview_Notes_INotesWindowManagerPreview<D>::SetFocusToNextView() const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreview)->SetFocusToNextView());
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Preview_Notes_INotesWindowManagerPreview<D>::SetNotesThumbnailAsync(Windows::Storage::Streams::IBuffer const& thumbnail) const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreview)->SetNotesThumbnailAsync(get_abi(thumbnail), put_abi(operation)));
    return operation;
}

template <typename D> event_token consume_Windows_ApplicationModel_Preview_Notes_INotesWindowManagerPreview<D>::SystemLockStateChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreview, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreview)->add_SystemLockStateChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreview> consume_Windows_ApplicationModel_Preview_Notes_INotesWindowManagerPreview<D>::SystemLockStateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreview, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreview>(this, &abi_t<Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreview>::remove_SystemLockStateChanged, SystemLockStateChanged(handler));
}

template <typename D> void consume_Windows_ApplicationModel_Preview_Notes_INotesWindowManagerPreview<D>::SystemLockStateChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreview)->remove_SystemLockStateChanged(get_abi(token)));
}

template <typename D> event_token consume_Windows_ApplicationModel_Preview_Notes_INotesWindowManagerPreview<D>::NotePlacementChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreview, Windows::ApplicationModel::Preview::Notes::NotePlacementChangedPreviewEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreview)->add_NotePlacementChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreview> consume_Windows_ApplicationModel_Preview_Notes_INotesWindowManagerPreview<D>::NotePlacementChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreview, Windows::ApplicationModel::Preview::Notes::NotePlacementChangedPreviewEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreview>(this, &abi_t<Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreview>::remove_NotePlacementChanged, NotePlacementChanged(handler));
}

template <typename D> void consume_Windows_ApplicationModel_Preview_Notes_INotesWindowManagerPreview<D>::NotePlacementChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreview)->remove_NotePlacementChanged(get_abi(token)));
}

template <typename D> event_token consume_Windows_ApplicationModel_Preview_Notes_INotesWindowManagerPreview<D>::NoteVisibilityChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreview, Windows::ApplicationModel::Preview::Notes::NoteVisibilityChangedPreviewEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreview)->add_NoteVisibilityChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreview> consume_Windows_ApplicationModel_Preview_Notes_INotesWindowManagerPreview<D>::NoteVisibilityChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreview, Windows::ApplicationModel::Preview::Notes::NoteVisibilityChangedPreviewEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreview>(this, &abi_t<Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreview>::remove_NoteVisibilityChanged, NoteVisibilityChanged(handler));
}

template <typename D> void consume_Windows_ApplicationModel_Preview_Notes_INotesWindowManagerPreview<D>::NoteVisibilityChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreview)->remove_NoteVisibilityChanged(get_abi(token)));
}

template <typename D> void consume_Windows_ApplicationModel_Preview_Notes_INotesWindowManagerPreview2<D>::ShowNoteRelativeTo(int32_t noteViewId, int32_t anchorNoteViewId, Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreviewShowNoteOptions const& options) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreview2)->ShowNoteRelativeToWithOptions(noteViewId, anchorNoteViewId, get_abi(options)));
}

template <typename D> void consume_Windows_ApplicationModel_Preview_Notes_INotesWindowManagerPreview2<D>::ShowNoteWithPlacement(int32_t noteViewId, Windows::Storage::Streams::IBuffer const& data, Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreviewShowNoteOptions const& options) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreview2)->ShowNoteWithPlacementWithOptions(noteViewId, get_abi(data), get_abi(options)));
}

template <typename D> void consume_Windows_ApplicationModel_Preview_Notes_INotesWindowManagerPreview2<D>::SetFocusToPreviousView() const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreview2)->SetFocusToPreviousView());
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Preview_Notes_INotesWindowManagerPreview2<D>::SetThumbnailImageForTaskSwitcherAsync(Windows::Graphics::Imaging::SoftwareBitmap const& bitmap) const
{
    Windows::Foundation::IAsyncAction action{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreview2)->SetThumbnailImageForTaskSwitcherAsync(get_abi(bitmap), put_abi(action)));
    return action;
}

template <typename D> bool consume_Windows_ApplicationModel_Preview_Notes_INotesWindowManagerPreviewShowNoteOptions<D>::ShowWithFocus() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreviewShowNoteOptions)->get_ShowWithFocus(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Preview_Notes_INotesWindowManagerPreviewShowNoteOptions<D>::ShowWithFocus(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreviewShowNoteOptions)->put_ShowWithFocus(value));
}

template <typename D> Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreview consume_Windows_ApplicationModel_Preview_Notes_INotesWindowManagerPreviewStatics<D>::GetForCurrentApp() const
{
    Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreview current{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreviewStatics)->GetForCurrentApp(put_abi(current)));
    return current;
}

template <typename D>
struct produce<D, Windows::ApplicationModel::Preview::Notes::INotePlacementChangedPreviewEventArgs> : produce_base<D, Windows::ApplicationModel::Preview::Notes::INotePlacementChangedPreviewEventArgs>
{
    HRESULT __stdcall get_ViewId(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().ViewId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Preview::Notes::INoteVisibilityChangedPreviewEventArgs> : produce_base<D, Windows::ApplicationModel::Preview::Notes::INoteVisibilityChangedPreviewEventArgs>
{
    HRESULT __stdcall get_ViewId(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().ViewId());
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
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreview> : produce_base<D, Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreview>
{
    HRESULT __stdcall get_IsScreenLocked(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsScreenLocked());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ShowNote(int32_t noteViewId) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ShowNote(noteViewId);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ShowNoteRelativeTo(int32_t noteViewId, int32_t anchorNoteViewId) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ShowNoteRelativeTo(noteViewId, anchorNoteViewId);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ShowNoteWithPlacement(int32_t noteViewId, void* data) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ShowNoteWithPlacement(noteViewId, *reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&data));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall HideNote(int32_t noteViewId) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HideNote(noteViewId);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetNotePlacement(int32_t noteViewId, void** data) noexcept final
    {
        try
        {
            *data = nullptr;
            typename D::abi_guard guard(this->shim());
            *data = detach_from<Windows::Storage::Streams::IBuffer>(this->shim().GetNotePlacement(noteViewId));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall TrySetNoteSize(int32_t noteViewId, Windows::Foundation::Size size, bool* succeeded) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *succeeded = detach_from<bool>(this->shim().TrySetNoteSize(noteViewId, *reinterpret_cast<Windows::Foundation::Size const*>(&size)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetFocusToNextView() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetFocusToNextView();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetNotesThumbnailAsync(void* thumbnail, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncAction>(this->shim().SetNotesThumbnailAsync(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&thumbnail)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_SystemLockStateChanged(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().SystemLockStateChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreview, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_SystemLockStateChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SystemLockStateChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_NotePlacementChanged(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().NotePlacementChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreview, Windows::ApplicationModel::Preview::Notes::NotePlacementChangedPreviewEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_NotePlacementChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NotePlacementChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_NoteVisibilityChanged(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().NoteVisibilityChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreview, Windows::ApplicationModel::Preview::Notes::NoteVisibilityChangedPreviewEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_NoteVisibilityChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NoteVisibilityChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreview2> : produce_base<D, Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreview2>
{
    HRESULT __stdcall ShowNoteRelativeToWithOptions(int32_t noteViewId, int32_t anchorNoteViewId, void* options) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ShowNoteRelativeTo(noteViewId, anchorNoteViewId, *reinterpret_cast<Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreviewShowNoteOptions const*>(&options));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ShowNoteWithPlacementWithOptions(int32_t noteViewId, void* data, void* options) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ShowNoteWithPlacement(noteViewId, *reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&data), *reinterpret_cast<Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreviewShowNoteOptions const*>(&options));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetFocusToPreviousView() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetFocusToPreviousView();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetThumbnailImageForTaskSwitcherAsync(void* bitmap, void** action) noexcept final
    {
        try
        {
            *action = nullptr;
            typename D::abi_guard guard(this->shim());
            *action = detach_from<Windows::Foundation::IAsyncAction>(this->shim().SetThumbnailImageForTaskSwitcherAsync(*reinterpret_cast<Windows::Graphics::Imaging::SoftwareBitmap const*>(&bitmap)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreviewShowNoteOptions> : produce_base<D, Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreviewShowNoteOptions>
{
    HRESULT __stdcall get_ShowWithFocus(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().ShowWithFocus());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ShowWithFocus(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ShowWithFocus(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreviewStatics> : produce_base<D, Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreviewStatics>
{
    HRESULT __stdcall GetForCurrentApp(void** current) noexcept final
    {
        try
        {
            *current = nullptr;
            typename D::abi_guard guard(this->shim());
            *current = detach_from<Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreview>(this->shim().GetForCurrentApp());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Preview::Notes {

inline Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreview NotesWindowManagerPreview::GetForCurrentApp()
{
    return get_activation_factory<NotesWindowManagerPreview, Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreviewStatics>().GetForCurrentApp();
}

inline NotesWindowManagerPreviewShowNoteOptions::NotesWindowManagerPreviewShowNoteOptions() :
    NotesWindowManagerPreviewShowNoteOptions(get_activation_factory<NotesWindowManagerPreviewShowNoteOptions>().ActivateInstance<NotesWindowManagerPreviewShowNoteOptions>())
{}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::ApplicationModel::Preview::Notes::INotePlacementChangedPreviewEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Preview::Notes::INotePlacementChangedPreviewEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Preview::Notes::INoteVisibilityChangedPreviewEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Preview::Notes::INoteVisibilityChangedPreviewEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreview> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreview> {};
template<> struct hash<winrt::Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreview2> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreview2> {};
template<> struct hash<winrt::Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreviewShowNoteOptions> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreviewShowNoteOptions> {};
template<> struct hash<winrt::Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreviewStatics> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreviewStatics> {};
template<> struct hash<winrt::Windows::ApplicationModel::Preview::Notes::NotePlacementChangedPreviewEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Preview::Notes::NotePlacementChangedPreviewEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Preview::Notes::NoteVisibilityChangedPreviewEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Preview::Notes::NoteVisibilityChangedPreviewEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreview> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreview> {};
template<> struct hash<winrt::Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreviewShowNoteOptions> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreviewShowNoteOptions> {};

}

WINRT_WARNING_POP
