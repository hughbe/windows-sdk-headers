﻿// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Graphics.Imaging.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.ApplicationModel.SocialInfo.2.h"
#include "winrt/Windows.ApplicationModel.h"

namespace winrt::impl {

template <typename D> Windows::ApplicationModel::SocialInfo::SocialUserInfo consume_Windows_ApplicationModel_SocialInfo_ISocialFeedChildItem<D>::Author() const
{
    Windows::ApplicationModel::SocialInfo::SocialUserInfo value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::SocialInfo::ISocialFeedChildItem)->get_Author(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::SocialInfo::SocialFeedContent consume_Windows_ApplicationModel_SocialInfo_ISocialFeedChildItem<D>::PrimaryContent() const
{
    Windows::ApplicationModel::SocialInfo::SocialFeedContent value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::SocialInfo::ISocialFeedChildItem)->get_PrimaryContent(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::SocialInfo::SocialFeedContent consume_Windows_ApplicationModel_SocialInfo_ISocialFeedChildItem<D>::SecondaryContent() const
{
    Windows::ApplicationModel::SocialInfo::SocialFeedContent value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::SocialInfo::ISocialFeedChildItem)->get_SecondaryContent(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_ApplicationModel_SocialInfo_ISocialFeedChildItem<D>::Timestamp() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::SocialInfo::ISocialFeedChildItem)->get_Timestamp(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_SocialInfo_ISocialFeedChildItem<D>::Timestamp(Windows::Foundation::DateTime const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::SocialInfo::ISocialFeedChildItem)->put_Timestamp(get_abi(value)));
}

template <typename D> Windows::Foundation::Uri consume_Windows_ApplicationModel_SocialInfo_ISocialFeedChildItem<D>::TargetUri() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::SocialInfo::ISocialFeedChildItem)->get_TargetUri(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_SocialInfo_ISocialFeedChildItem<D>::TargetUri(Windows::Foundation::Uri const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::SocialInfo::ISocialFeedChildItem)->put_TargetUri(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::ApplicationModel::SocialInfo::SocialItemThumbnail> consume_Windows_ApplicationModel_SocialInfo_ISocialFeedChildItem<D>::Thumbnails() const
{
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::SocialInfo::SocialItemThumbnail> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::SocialInfo::ISocialFeedChildItem)->get_Thumbnails(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::SocialInfo::SocialFeedSharedItem consume_Windows_ApplicationModel_SocialInfo_ISocialFeedChildItem<D>::SharedItem() const
{
    Windows::ApplicationModel::SocialInfo::SocialFeedSharedItem value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::SocialInfo::ISocialFeedChildItem)->get_SharedItem(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_SocialInfo_ISocialFeedChildItem<D>::SharedItem(Windows::ApplicationModel::SocialInfo::SocialFeedSharedItem const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::SocialInfo::ISocialFeedChildItem)->put_SharedItem(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_SocialInfo_ISocialFeedContent<D>::Title() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::SocialInfo::ISocialFeedContent)->get_Title(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_SocialInfo_ISocialFeedContent<D>::Title(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::SocialInfo::ISocialFeedContent)->put_Title(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_SocialInfo_ISocialFeedContent<D>::Message() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::SocialInfo::ISocialFeedContent)->get_Message(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_SocialInfo_ISocialFeedContent<D>::Message(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::SocialInfo::ISocialFeedContent)->put_Message(get_abi(value)));
}

template <typename D> Windows::Foundation::Uri consume_Windows_ApplicationModel_SocialInfo_ISocialFeedContent<D>::TargetUri() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::SocialInfo::ISocialFeedContent)->get_TargetUri(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_SocialInfo_ISocialFeedContent<D>::TargetUri(Windows::Foundation::Uri const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::SocialInfo::ISocialFeedContent)->put_TargetUri(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::SocialInfo::SocialUserInfo consume_Windows_ApplicationModel_SocialInfo_ISocialFeedItem<D>::Author() const
{
    Windows::ApplicationModel::SocialInfo::SocialUserInfo value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::SocialInfo::ISocialFeedItem)->get_Author(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::SocialInfo::SocialFeedContent consume_Windows_ApplicationModel_SocialInfo_ISocialFeedItem<D>::PrimaryContent() const
{
    Windows::ApplicationModel::SocialInfo::SocialFeedContent value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::SocialInfo::ISocialFeedItem)->get_PrimaryContent(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::SocialInfo::SocialFeedContent consume_Windows_ApplicationModel_SocialInfo_ISocialFeedItem<D>::SecondaryContent() const
{
    Windows::ApplicationModel::SocialInfo::SocialFeedContent value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::SocialInfo::ISocialFeedItem)->get_SecondaryContent(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_ApplicationModel_SocialInfo_ISocialFeedItem<D>::Timestamp() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::SocialInfo::ISocialFeedItem)->get_Timestamp(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_SocialInfo_ISocialFeedItem<D>::Timestamp(Windows::Foundation::DateTime const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::SocialInfo::ISocialFeedItem)->put_Timestamp(get_abi(value)));
}

template <typename D> Windows::Foundation::Uri consume_Windows_ApplicationModel_SocialInfo_ISocialFeedItem<D>::TargetUri() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::SocialInfo::ISocialFeedItem)->get_TargetUri(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_SocialInfo_ISocialFeedItem<D>::TargetUri(Windows::Foundation::Uri const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::SocialInfo::ISocialFeedItem)->put_TargetUri(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::ApplicationModel::SocialInfo::SocialItemThumbnail> consume_Windows_ApplicationModel_SocialInfo_ISocialFeedItem<D>::Thumbnails() const
{
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::SocialInfo::SocialItemThumbnail> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::SocialInfo::ISocialFeedItem)->get_Thumbnails(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::SocialInfo::SocialFeedSharedItem consume_Windows_ApplicationModel_SocialInfo_ISocialFeedItem<D>::SharedItem() const
{
    Windows::ApplicationModel::SocialInfo::SocialFeedSharedItem value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::SocialInfo::ISocialFeedItem)->get_SharedItem(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_SocialInfo_ISocialFeedItem<D>::SharedItem(Windows::ApplicationModel::SocialInfo::SocialFeedSharedItem const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::SocialInfo::ISocialFeedItem)->put_SharedItem(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::SocialInfo::SocialItemBadgeStyle consume_Windows_ApplicationModel_SocialInfo_ISocialFeedItem<D>::BadgeStyle() const
{
    Windows::ApplicationModel::SocialInfo::SocialItemBadgeStyle value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::SocialInfo::ISocialFeedItem)->get_BadgeStyle(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_SocialInfo_ISocialFeedItem<D>::BadgeStyle(Windows::ApplicationModel::SocialInfo::SocialItemBadgeStyle const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::SocialInfo::ISocialFeedItem)->put_BadgeStyle(get_abi(value)));
}

template <typename D> int32_t consume_Windows_ApplicationModel_SocialInfo_ISocialFeedItem<D>::BadgeCountValue() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::SocialInfo::ISocialFeedItem)->get_BadgeCountValue(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_SocialInfo_ISocialFeedItem<D>::BadgeCountValue(int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::SocialInfo::ISocialFeedItem)->put_BadgeCountValue(value));
}

template <typename D> hstring consume_Windows_ApplicationModel_SocialInfo_ISocialFeedItem<D>::RemoteId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::SocialInfo::ISocialFeedItem)->get_RemoteId(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_SocialInfo_ISocialFeedItem<D>::RemoteId(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::SocialInfo::ISocialFeedItem)->put_RemoteId(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::SocialInfo::SocialFeedChildItem consume_Windows_ApplicationModel_SocialInfo_ISocialFeedItem<D>::ChildItem() const
{
    Windows::ApplicationModel::SocialInfo::SocialFeedChildItem value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::SocialInfo::ISocialFeedItem)->get_ChildItem(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_SocialInfo_ISocialFeedItem<D>::ChildItem(Windows::ApplicationModel::SocialInfo::SocialFeedChildItem const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::SocialInfo::ISocialFeedItem)->put_ChildItem(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::SocialInfo::SocialFeedItemStyle consume_Windows_ApplicationModel_SocialInfo_ISocialFeedItem<D>::Style() const
{
    Windows::ApplicationModel::SocialInfo::SocialFeedItemStyle value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::SocialInfo::ISocialFeedItem)->get_Style(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_SocialInfo_ISocialFeedItem<D>::Style(Windows::ApplicationModel::SocialInfo::SocialFeedItemStyle const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::SocialInfo::ISocialFeedItem)->put_Style(get_abi(value)));
}

template <typename D> Windows::Foundation::Uri consume_Windows_ApplicationModel_SocialInfo_ISocialFeedSharedItem<D>::OriginalSource() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::SocialInfo::ISocialFeedSharedItem)->get_OriginalSource(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_SocialInfo_ISocialFeedSharedItem<D>::OriginalSource(Windows::Foundation::Uri const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::SocialInfo::ISocialFeedSharedItem)->put_OriginalSource(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::SocialInfo::SocialFeedContent consume_Windows_ApplicationModel_SocialInfo_ISocialFeedSharedItem<D>::Content() const
{
    Windows::ApplicationModel::SocialInfo::SocialFeedContent value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::SocialInfo::ISocialFeedSharedItem)->get_Content(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_ApplicationModel_SocialInfo_ISocialFeedSharedItem<D>::Timestamp() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::SocialInfo::ISocialFeedSharedItem)->get_Timestamp(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_SocialInfo_ISocialFeedSharedItem<D>::Timestamp(Windows::Foundation::DateTime const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::SocialInfo::ISocialFeedSharedItem)->put_Timestamp(get_abi(value)));
}

template <typename D> Windows::Foundation::Uri consume_Windows_ApplicationModel_SocialInfo_ISocialFeedSharedItem<D>::TargetUri() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::SocialInfo::ISocialFeedSharedItem)->get_TargetUri(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_SocialInfo_ISocialFeedSharedItem<D>::TargetUri(Windows::Foundation::Uri const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::SocialInfo::ISocialFeedSharedItem)->put_TargetUri(get_abi(value)));
}

template <typename D> void consume_Windows_ApplicationModel_SocialInfo_ISocialFeedSharedItem<D>::Thumbnail(Windows::ApplicationModel::SocialInfo::SocialItemThumbnail const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::SocialInfo::ISocialFeedSharedItem)->put_Thumbnail(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::SocialInfo::SocialItemThumbnail consume_Windows_ApplicationModel_SocialInfo_ISocialFeedSharedItem<D>::Thumbnail() const
{
    Windows::ApplicationModel::SocialInfo::SocialItemThumbnail value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::SocialInfo::ISocialFeedSharedItem)->get_Thumbnail(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri consume_Windows_ApplicationModel_SocialInfo_ISocialItemThumbnail<D>::TargetUri() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::SocialInfo::ISocialItemThumbnail)->get_TargetUri(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_SocialInfo_ISocialItemThumbnail<D>::TargetUri(Windows::Foundation::Uri const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::SocialInfo::ISocialItemThumbnail)->put_TargetUri(get_abi(value)));
}

template <typename D> Windows::Foundation::Uri consume_Windows_ApplicationModel_SocialInfo_ISocialItemThumbnail<D>::ImageUri() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::SocialInfo::ISocialItemThumbnail)->get_ImageUri(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_SocialInfo_ISocialItemThumbnail<D>::ImageUri(Windows::Foundation::Uri const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::SocialInfo::ISocialItemThumbnail)->put_ImageUri(get_abi(value)));
}

template <typename D> Windows::Graphics::Imaging::BitmapSize consume_Windows_ApplicationModel_SocialInfo_ISocialItemThumbnail<D>::BitmapSize() const
{
    Windows::Graphics::Imaging::BitmapSize value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::SocialInfo::ISocialItemThumbnail)->get_BitmapSize(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_SocialInfo_ISocialItemThumbnail<D>::BitmapSize(Windows::Graphics::Imaging::BitmapSize const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::SocialInfo::ISocialItemThumbnail)->put_BitmapSize(get_abi(value)));
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_SocialInfo_ISocialItemThumbnail<D>::SetImageAsync(Windows::Storage::Streams::IInputStream const& image) const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::SocialInfo::ISocialItemThumbnail)->SetImageAsync(get_abi(image), put_abi(operation)));
    return operation;
}

template <typename D> hstring consume_Windows_ApplicationModel_SocialInfo_ISocialUserInfo<D>::DisplayName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::SocialInfo::ISocialUserInfo)->get_DisplayName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_SocialInfo_ISocialUserInfo<D>::DisplayName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::SocialInfo::ISocialUserInfo)->put_DisplayName(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_SocialInfo_ISocialUserInfo<D>::UserName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::SocialInfo::ISocialUserInfo)->get_UserName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_SocialInfo_ISocialUserInfo<D>::UserName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::SocialInfo::ISocialUserInfo)->put_UserName(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_SocialInfo_ISocialUserInfo<D>::RemoteId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::SocialInfo::ISocialUserInfo)->get_RemoteId(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_SocialInfo_ISocialUserInfo<D>::RemoteId(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::SocialInfo::ISocialUserInfo)->put_RemoteId(get_abi(value)));
}

template <typename D> Windows::Foundation::Uri consume_Windows_ApplicationModel_SocialInfo_ISocialUserInfo<D>::TargetUri() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::SocialInfo::ISocialUserInfo)->get_TargetUri(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_SocialInfo_ISocialUserInfo<D>::TargetUri(Windows::Foundation::Uri const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::SocialInfo::ISocialUserInfo)->put_TargetUri(get_abi(value)));
}

template <typename D>
struct produce<D, Windows::ApplicationModel::SocialInfo::ISocialFeedChildItem> : produce_base<D, Windows::ApplicationModel::SocialInfo::ISocialFeedChildItem>
{
    HRESULT __stdcall get_Author(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::SocialInfo::SocialUserInfo>(this->shim().Author());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PrimaryContent(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::SocialInfo::SocialFeedContent>(this->shim().PrimaryContent());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SecondaryContent(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::SocialInfo::SocialFeedContent>(this->shim().SecondaryContent());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Timestamp(Windows::Foundation::DateTime* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::DateTime>(this->shim().Timestamp());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Timestamp(Windows::Foundation::DateTime value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Timestamp(*reinterpret_cast<Windows::Foundation::DateTime const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TargetUri(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().TargetUri());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_TargetUri(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TargetUri(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Thumbnails(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::SocialInfo::SocialItemThumbnail>>(this->shim().Thumbnails());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SharedItem(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::SocialInfo::SocialFeedSharedItem>(this->shim().SharedItem());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_SharedItem(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SharedItem(*reinterpret_cast<Windows::ApplicationModel::SocialInfo::SocialFeedSharedItem const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::SocialInfo::ISocialFeedContent> : produce_base<D, Windows::ApplicationModel::SocialInfo::ISocialFeedContent>
{
    HRESULT __stdcall get_Title(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Title());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Title(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Title(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Message(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Message());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Message(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Message(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TargetUri(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().TargetUri());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_TargetUri(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TargetUri(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::SocialInfo::ISocialFeedItem> : produce_base<D, Windows::ApplicationModel::SocialInfo::ISocialFeedItem>
{
    HRESULT __stdcall get_Author(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::SocialInfo::SocialUserInfo>(this->shim().Author());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PrimaryContent(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::SocialInfo::SocialFeedContent>(this->shim().PrimaryContent());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SecondaryContent(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::SocialInfo::SocialFeedContent>(this->shim().SecondaryContent());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Timestamp(Windows::Foundation::DateTime* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::DateTime>(this->shim().Timestamp());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Timestamp(Windows::Foundation::DateTime value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Timestamp(*reinterpret_cast<Windows::Foundation::DateTime const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TargetUri(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().TargetUri());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_TargetUri(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TargetUri(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Thumbnails(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::SocialInfo::SocialItemThumbnail>>(this->shim().Thumbnails());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SharedItem(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::SocialInfo::SocialFeedSharedItem>(this->shim().SharedItem());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_SharedItem(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SharedItem(*reinterpret_cast<Windows::ApplicationModel::SocialInfo::SocialFeedSharedItem const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_BadgeStyle(Windows::ApplicationModel::SocialInfo::SocialItemBadgeStyle* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::SocialInfo::SocialItemBadgeStyle>(this->shim().BadgeStyle());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_BadgeStyle(Windows::ApplicationModel::SocialInfo::SocialItemBadgeStyle value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BadgeStyle(*reinterpret_cast<Windows::ApplicationModel::SocialInfo::SocialItemBadgeStyle const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_BadgeCountValue(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().BadgeCountValue());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_BadgeCountValue(int32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BadgeCountValue(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RemoteId(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().RemoteId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_RemoteId(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RemoteId(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ChildItem(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::SocialInfo::SocialFeedChildItem>(this->shim().ChildItem());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ChildItem(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ChildItem(*reinterpret_cast<Windows::ApplicationModel::SocialInfo::SocialFeedChildItem const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Style(Windows::ApplicationModel::SocialInfo::SocialFeedItemStyle* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::SocialInfo::SocialFeedItemStyle>(this->shim().Style());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Style(Windows::ApplicationModel::SocialInfo::SocialFeedItemStyle value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Style(*reinterpret_cast<Windows::ApplicationModel::SocialInfo::SocialFeedItemStyle const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::SocialInfo::ISocialFeedSharedItem> : produce_base<D, Windows::ApplicationModel::SocialInfo::ISocialFeedSharedItem>
{
    HRESULT __stdcall get_OriginalSource(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().OriginalSource());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_OriginalSource(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OriginalSource(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Content(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::SocialInfo::SocialFeedContent>(this->shim().Content());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Timestamp(Windows::Foundation::DateTime* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::DateTime>(this->shim().Timestamp());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Timestamp(Windows::Foundation::DateTime value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Timestamp(*reinterpret_cast<Windows::Foundation::DateTime const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TargetUri(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().TargetUri());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_TargetUri(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TargetUri(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Thumbnail(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Thumbnail(*reinterpret_cast<Windows::ApplicationModel::SocialInfo::SocialItemThumbnail const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Thumbnail(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::SocialInfo::SocialItemThumbnail>(this->shim().Thumbnail());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::SocialInfo::ISocialItemThumbnail> : produce_base<D, Windows::ApplicationModel::SocialInfo::ISocialItemThumbnail>
{
    HRESULT __stdcall get_TargetUri(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().TargetUri());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_TargetUri(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TargetUri(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ImageUri(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().ImageUri());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ImageUri(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ImageUri(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_BitmapSize(struct struct_Windows_Graphics_Imaging_BitmapSize* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Imaging::BitmapSize>(this->shim().BitmapSize());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_BitmapSize(struct struct_Windows_Graphics_Imaging_BitmapSize value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BitmapSize(*reinterpret_cast<Windows::Graphics::Imaging::BitmapSize const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetImageAsync(void* image, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncAction>(this->shim().SetImageAsync(*reinterpret_cast<Windows::Storage::Streams::IInputStream const*>(&image)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::SocialInfo::ISocialUserInfo> : produce_base<D, Windows::ApplicationModel::SocialInfo::ISocialUserInfo>
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

    HRESULT __stdcall put_DisplayName(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DisplayName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_UserName(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().UserName());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_UserName(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UserName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RemoteId(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().RemoteId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_RemoteId(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RemoteId(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TargetUri(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().TargetUri());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_TargetUri(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TargetUri(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::SocialInfo {

inline SocialFeedChildItem::SocialFeedChildItem() :
    SocialFeedChildItem(get_activation_factory<SocialFeedChildItem>().ActivateInstance<SocialFeedChildItem>())
{}

inline SocialFeedItem::SocialFeedItem() :
    SocialFeedItem(get_activation_factory<SocialFeedItem>().ActivateInstance<SocialFeedItem>())
{}

inline SocialFeedSharedItem::SocialFeedSharedItem() :
    SocialFeedSharedItem(get_activation_factory<SocialFeedSharedItem>().ActivateInstance<SocialFeedSharedItem>())
{}

inline SocialItemThumbnail::SocialItemThumbnail() :
    SocialItemThumbnail(get_activation_factory<SocialItemThumbnail>().ActivateInstance<SocialItemThumbnail>())
{}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::ApplicationModel::SocialInfo::ISocialFeedChildItem> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::SocialInfo::ISocialFeedChildItem> {};
template<> struct hash<winrt::Windows::ApplicationModel::SocialInfo::ISocialFeedContent> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::SocialInfo::ISocialFeedContent> {};
template<> struct hash<winrt::Windows::ApplicationModel::SocialInfo::ISocialFeedItem> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::SocialInfo::ISocialFeedItem> {};
template<> struct hash<winrt::Windows::ApplicationModel::SocialInfo::ISocialFeedSharedItem> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::SocialInfo::ISocialFeedSharedItem> {};
template<> struct hash<winrt::Windows::ApplicationModel::SocialInfo::ISocialItemThumbnail> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::SocialInfo::ISocialItemThumbnail> {};
template<> struct hash<winrt::Windows::ApplicationModel::SocialInfo::ISocialUserInfo> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::SocialInfo::ISocialUserInfo> {};
template<> struct hash<winrt::Windows::ApplicationModel::SocialInfo::SocialFeedChildItem> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::SocialInfo::SocialFeedChildItem> {};
template<> struct hash<winrt::Windows::ApplicationModel::SocialInfo::SocialFeedContent> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::SocialInfo::SocialFeedContent> {};
template<> struct hash<winrt::Windows::ApplicationModel::SocialInfo::SocialFeedItem> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::SocialInfo::SocialFeedItem> {};
template<> struct hash<winrt::Windows::ApplicationModel::SocialInfo::SocialFeedSharedItem> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::SocialInfo::SocialFeedSharedItem> {};
template<> struct hash<winrt::Windows::ApplicationModel::SocialInfo::SocialItemThumbnail> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::SocialInfo::SocialItemThumbnail> {};
template<> struct hash<winrt::Windows::ApplicationModel::SocialInfo::SocialUserInfo> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::SocialInfo::SocialUserInfo> {};

}

WINRT_WARNING_POP
