// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.ApplicationModel.Core.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Perception.Spatial.2.h"
#include "winrt/impl/Windows.System.2.h"
#include "winrt/impl/Windows.UI.2.h"
#include "winrt/impl/Windows.UI.Popups.2.h"
#include "winrt/impl/Windows.UI.StartScreen.2.h"
#include "winrt/Windows.UI.h"

namespace winrt::impl {

template <typename D> Windows::Foundation::Collections::IVector<Windows::UI::StartScreen::JumpListItem> consume_Windows_UI_StartScreen_IJumpList<D>::Items() const
{
    Windows::Foundation::Collections::IVector<Windows::UI::StartScreen::JumpListItem> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::IJumpList)->get_Items(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::StartScreen::JumpListSystemGroupKind consume_Windows_UI_StartScreen_IJumpList<D>::SystemGroupKind() const
{
    Windows::UI::StartScreen::JumpListSystemGroupKind value{};
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::IJumpList)->get_SystemGroupKind(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_StartScreen_IJumpList<D>::SystemGroupKind(Windows::UI::StartScreen::JumpListSystemGroupKind const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::IJumpList)->put_SystemGroupKind(get_abi(value)));
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_UI_StartScreen_IJumpList<D>::SaveAsync() const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::IJumpList)->SaveAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::UI::StartScreen::JumpListItemKind consume_Windows_UI_StartScreen_IJumpListItem<D>::Kind() const
{
    Windows::UI::StartScreen::JumpListItemKind value{};
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::IJumpListItem)->get_Kind(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_UI_StartScreen_IJumpListItem<D>::Arguments() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::IJumpListItem)->get_Arguments(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_StartScreen_IJumpListItem<D>::RemovedByUser() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::IJumpListItem)->get_RemovedByUser(&value));
    return value;
}

template <typename D> hstring consume_Windows_UI_StartScreen_IJumpListItem<D>::Description() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::IJumpListItem)->get_Description(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_StartScreen_IJumpListItem<D>::Description(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::IJumpListItem)->put_Description(get_abi(value)));
}

template <typename D> hstring consume_Windows_UI_StartScreen_IJumpListItem<D>::DisplayName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::IJumpListItem)->get_DisplayName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_StartScreen_IJumpListItem<D>::DisplayName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::IJumpListItem)->put_DisplayName(get_abi(value)));
}

template <typename D> hstring consume_Windows_UI_StartScreen_IJumpListItem<D>::GroupName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::IJumpListItem)->get_GroupName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_StartScreen_IJumpListItem<D>::GroupName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::IJumpListItem)->put_GroupName(get_abi(value)));
}

template <typename D> Windows::Foundation::Uri consume_Windows_UI_StartScreen_IJumpListItem<D>::Logo() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::IJumpListItem)->get_Logo(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_StartScreen_IJumpListItem<D>::Logo(Windows::Foundation::Uri const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::IJumpListItem)->put_Logo(get_abi(value)));
}

template <typename D> Windows::UI::StartScreen::JumpListItem consume_Windows_UI_StartScreen_IJumpListItemStatics<D>::CreateWithArguments(param::hstring const& arguments, param::hstring const& displayName) const
{
    Windows::UI::StartScreen::JumpListItem result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::IJumpListItemStatics)->CreateWithArguments(get_abi(arguments), get_abi(displayName), put_abi(result)));
    return result;
}

template <typename D> Windows::UI::StartScreen::JumpListItem consume_Windows_UI_StartScreen_IJumpListItemStatics<D>::CreateSeparator() const
{
    Windows::UI::StartScreen::JumpListItem result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::IJumpListItemStatics)->CreateSeparator(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::UI::StartScreen::JumpList> consume_Windows_UI_StartScreen_IJumpListStatics<D>::LoadCurrentAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::UI::StartScreen::JumpList> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::IJumpListStatics)->LoadCurrentAsync(put_abi(result)));
    return result;
}

template <typename D> bool consume_Windows_UI_StartScreen_IJumpListStatics<D>::IsSupported() const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::IJumpListStatics)->IsSupported(&result));
    return result;
}

template <typename D> void consume_Windows_UI_StartScreen_ISecondaryTile<D>::TileId(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTile)->put_TileId(get_abi(value)));
}

template <typename D> hstring consume_Windows_UI_StartScreen_ISecondaryTile<D>::TileId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTile)->get_TileId(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_StartScreen_ISecondaryTile<D>::Arguments(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTile)->put_Arguments(get_abi(value)));
}

template <typename D> hstring consume_Windows_UI_StartScreen_ISecondaryTile<D>::Arguments() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTile)->get_Arguments(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_StartScreen_ISecondaryTile<D>::ShortName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTile)->put_ShortName(get_abi(value)));
}

template <typename D> hstring consume_Windows_UI_StartScreen_ISecondaryTile<D>::ShortName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTile)->get_ShortName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_StartScreen_ISecondaryTile<D>::DisplayName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTile)->put_DisplayName(get_abi(value)));
}

template <typename D> hstring consume_Windows_UI_StartScreen_ISecondaryTile<D>::DisplayName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTile)->get_DisplayName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_StartScreen_ISecondaryTile<D>::Logo(Windows::Foundation::Uri const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTile)->put_Logo(get_abi(value)));
}

template <typename D> Windows::Foundation::Uri consume_Windows_UI_StartScreen_ISecondaryTile<D>::Logo() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTile)->get_Logo(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_StartScreen_ISecondaryTile<D>::SmallLogo(Windows::Foundation::Uri const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTile)->put_SmallLogo(get_abi(value)));
}

template <typename D> Windows::Foundation::Uri consume_Windows_UI_StartScreen_ISecondaryTile<D>::SmallLogo() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTile)->get_SmallLogo(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_StartScreen_ISecondaryTile<D>::WideLogo(Windows::Foundation::Uri const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTile)->put_WideLogo(get_abi(value)));
}

template <typename D> Windows::Foundation::Uri consume_Windows_UI_StartScreen_ISecondaryTile<D>::WideLogo() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTile)->get_WideLogo(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_StartScreen_ISecondaryTile<D>::LockScreenBadgeLogo(Windows::Foundation::Uri const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTile)->put_LockScreenBadgeLogo(get_abi(value)));
}

template <typename D> Windows::Foundation::Uri consume_Windows_UI_StartScreen_ISecondaryTile<D>::LockScreenBadgeLogo() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTile)->get_LockScreenBadgeLogo(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_StartScreen_ISecondaryTile<D>::LockScreenDisplayBadgeAndTileText(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTile)->put_LockScreenDisplayBadgeAndTileText(value));
}

template <typename D> bool consume_Windows_UI_StartScreen_ISecondaryTile<D>::LockScreenDisplayBadgeAndTileText() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTile)->get_LockScreenDisplayBadgeAndTileText(&value));
    return value;
}

template <typename D> void consume_Windows_UI_StartScreen_ISecondaryTile<D>::TileOptions(Windows::UI::StartScreen::TileOptions const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTile)->put_TileOptions(get_abi(value)));
}

template <typename D> Windows::UI::StartScreen::TileOptions consume_Windows_UI_StartScreen_ISecondaryTile<D>::TileOptions() const
{
    Windows::UI::StartScreen::TileOptions value{};
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTile)->get_TileOptions(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_StartScreen_ISecondaryTile<D>::ForegroundText(Windows::UI::StartScreen::ForegroundText const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTile)->put_ForegroundText(get_abi(value)));
}

template <typename D> Windows::UI::StartScreen::ForegroundText consume_Windows_UI_StartScreen_ISecondaryTile<D>::ForegroundText() const
{
    Windows::UI::StartScreen::ForegroundText value{};
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTile)->get_ForegroundText(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_StartScreen_ISecondaryTile<D>::BackgroundColor(Windows::UI::Color const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTile)->put_BackgroundColor(get_abi(value)));
}

template <typename D> Windows::UI::Color consume_Windows_UI_StartScreen_ISecondaryTile<D>::BackgroundColor() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTile)->get_BackgroundColor(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_UI_StartScreen_ISecondaryTile<D>::RequestCreateAsync() const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTile)->RequestCreateAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_UI_StartScreen_ISecondaryTile<D>::RequestCreateAsync(Windows::Foundation::Point const& invocationPoint) const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTile)->RequestCreateAsyncWithPoint(get_abi(invocationPoint), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_UI_StartScreen_ISecondaryTile<D>::RequestCreateForSelectionAsync(Windows::Foundation::Rect const& selection) const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTile)->RequestCreateAsyncWithRect(get_abi(selection), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_UI_StartScreen_ISecondaryTile<D>::RequestCreateForSelectionAsync(Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement) const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTile)->RequestCreateAsyncWithRectAndPlacement(get_abi(selection), get_abi(preferredPlacement), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_UI_StartScreen_ISecondaryTile<D>::RequestDeleteAsync() const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTile)->RequestDeleteAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_UI_StartScreen_ISecondaryTile<D>::RequestDeleteAsync(Windows::Foundation::Point const& invocationPoint) const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTile)->RequestDeleteAsyncWithPoint(get_abi(invocationPoint), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_UI_StartScreen_ISecondaryTile<D>::RequestDeleteForSelectionAsync(Windows::Foundation::Rect const& selection) const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTile)->RequestDeleteAsyncWithRect(get_abi(selection), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_UI_StartScreen_ISecondaryTile<D>::RequestDeleteForSelectionAsync(Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement) const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTile)->RequestDeleteAsyncWithRectAndPlacement(get_abi(selection), get_abi(preferredPlacement), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_UI_StartScreen_ISecondaryTile<D>::UpdateAsync() const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTile)->UpdateAsync(put_abi(operation)));
    return operation;
}

template <typename D> void consume_Windows_UI_StartScreen_ISecondaryTile2<D>::PhoneticName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTile2)->put_PhoneticName(get_abi(value)));
}

template <typename D> hstring consume_Windows_UI_StartScreen_ISecondaryTile2<D>::PhoneticName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTile2)->get_PhoneticName(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::StartScreen::SecondaryTileVisualElements consume_Windows_UI_StartScreen_ISecondaryTile2<D>::VisualElements() const
{
    Windows::UI::StartScreen::SecondaryTileVisualElements value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTile2)->get_VisualElements(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_StartScreen_ISecondaryTile2<D>::RoamingEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTile2)->put_RoamingEnabled(value));
}

template <typename D> bool consume_Windows_UI_StartScreen_ISecondaryTile2<D>::RoamingEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTile2)->get_RoamingEnabled(&value));
    return value;
}

template <typename D> event_token consume_Windows_UI_StartScreen_ISecondaryTile2<D>::VisualElementsRequested(Windows::Foundation::TypedEventHandler<Windows::UI::StartScreen::SecondaryTile, Windows::UI::StartScreen::VisualElementsRequestedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTile2)->add_VisualElementsRequested(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::StartScreen::ISecondaryTile2> consume_Windows_UI_StartScreen_ISecondaryTile2<D>::VisualElementsRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::StartScreen::SecondaryTile, Windows::UI::StartScreen::VisualElementsRequestedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::UI::StartScreen::ISecondaryTile2>(this, &abi_t<Windows::UI::StartScreen::ISecondaryTile2>::remove_VisualElementsRequested, VisualElementsRequested(handler));
}

template <typename D> void consume_Windows_UI_StartScreen_ISecondaryTile2<D>::VisualElementsRequested(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTile2)->remove_VisualElementsRequested(get_abi(token)));
}

template <typename D> Windows::UI::StartScreen::SecondaryTile consume_Windows_UI_StartScreen_ISecondaryTileFactory<D>::CreateTile(param::hstring const& tileId, param::hstring const& shortName, param::hstring const& displayName, param::hstring const& arguments, Windows::UI::StartScreen::TileOptions const& tileOptions, Windows::Foundation::Uri const& logoReference) const
{
    Windows::UI::StartScreen::SecondaryTile value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTileFactory)->CreateTile(get_abi(tileId), get_abi(shortName), get_abi(displayName), get_abi(arguments), get_abi(tileOptions), get_abi(logoReference), put_abi(value)));
    return value;
}

template <typename D> Windows::UI::StartScreen::SecondaryTile consume_Windows_UI_StartScreen_ISecondaryTileFactory<D>::CreateWideTile(param::hstring const& tileId, param::hstring const& shortName, param::hstring const& displayName, param::hstring const& arguments, Windows::UI::StartScreen::TileOptions const& tileOptions, Windows::Foundation::Uri const& logoReference, Windows::Foundation::Uri const& wideLogoReference) const
{
    Windows::UI::StartScreen::SecondaryTile value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTileFactory)->CreateWideTile(get_abi(tileId), get_abi(shortName), get_abi(displayName), get_abi(arguments), get_abi(tileOptions), get_abi(logoReference), get_abi(wideLogoReference), put_abi(value)));
    return value;
}

template <typename D> Windows::UI::StartScreen::SecondaryTile consume_Windows_UI_StartScreen_ISecondaryTileFactory<D>::CreateWithId(param::hstring const& tileId) const
{
    Windows::UI::StartScreen::SecondaryTile value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTileFactory)->CreateWithId(get_abi(tileId), put_abi(value)));
    return value;
}

template <typename D> Windows::UI::StartScreen::SecondaryTile consume_Windows_UI_StartScreen_ISecondaryTileFactory2<D>::CreateMinimalTile(param::hstring const& tileId, param::hstring const& displayName, param::hstring const& arguments, Windows::Foundation::Uri const& square150x150Logo, Windows::UI::StartScreen::TileSize const& desiredSize) const
{
    Windows::UI::StartScreen::SecondaryTile value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTileFactory2)->CreateMinimalTile(get_abi(tileId), get_abi(displayName), get_abi(arguments), get_abi(square150x150Logo), get_abi(desiredSize), put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_StartScreen_ISecondaryTileStatics<D>::Exists(param::hstring const& tileId) const
{
    bool exists{};
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTileStatics)->Exists(get_abi(tileId), &exists));
    return exists;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::UI::StartScreen::SecondaryTile>> consume_Windows_UI_StartScreen_ISecondaryTileStatics<D>::FindAllAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::UI::StartScreen::SecondaryTile>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTileStatics)->FindAllAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::UI::StartScreen::SecondaryTile>> consume_Windows_UI_StartScreen_ISecondaryTileStatics<D>::FindAllAsync(param::hstring const& applicationId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::UI::StartScreen::SecondaryTile>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTileStatics)->FindAllForApplicationAsync(get_abi(applicationId), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::UI::StartScreen::SecondaryTile>> consume_Windows_UI_StartScreen_ISecondaryTileStatics<D>::FindAllForPackageAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::UI::StartScreen::SecondaryTile>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTileStatics)->FindAllForPackageAsync(put_abi(operation)));
    return operation;
}

template <typename D> void consume_Windows_UI_StartScreen_ISecondaryTileVisualElements<D>::Square30x30Logo(Windows::Foundation::Uri const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTileVisualElements)->put_Square30x30Logo(get_abi(value)));
}

template <typename D> Windows::Foundation::Uri consume_Windows_UI_StartScreen_ISecondaryTileVisualElements<D>::Square30x30Logo() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTileVisualElements)->get_Square30x30Logo(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_StartScreen_ISecondaryTileVisualElements<D>::Square70x70Logo(Windows::Foundation::Uri const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTileVisualElements)->put_Square70x70Logo(get_abi(value)));
}

template <typename D> Windows::Foundation::Uri consume_Windows_UI_StartScreen_ISecondaryTileVisualElements<D>::Square70x70Logo() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTileVisualElements)->get_Square70x70Logo(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_StartScreen_ISecondaryTileVisualElements<D>::Square150x150Logo(Windows::Foundation::Uri const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTileVisualElements)->put_Square150x150Logo(get_abi(value)));
}

template <typename D> Windows::Foundation::Uri consume_Windows_UI_StartScreen_ISecondaryTileVisualElements<D>::Square150x150Logo() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTileVisualElements)->get_Square150x150Logo(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_StartScreen_ISecondaryTileVisualElements<D>::Wide310x150Logo(Windows::Foundation::Uri const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTileVisualElements)->put_Wide310x150Logo(get_abi(value)));
}

template <typename D> Windows::Foundation::Uri consume_Windows_UI_StartScreen_ISecondaryTileVisualElements<D>::Wide310x150Logo() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTileVisualElements)->get_Wide310x150Logo(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_StartScreen_ISecondaryTileVisualElements<D>::Square310x310Logo(Windows::Foundation::Uri const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTileVisualElements)->put_Square310x310Logo(get_abi(value)));
}

template <typename D> Windows::Foundation::Uri consume_Windows_UI_StartScreen_ISecondaryTileVisualElements<D>::Square310x310Logo() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTileVisualElements)->get_Square310x310Logo(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_StartScreen_ISecondaryTileVisualElements<D>::ForegroundText(Windows::UI::StartScreen::ForegroundText const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTileVisualElements)->put_ForegroundText(get_abi(value)));
}

template <typename D> Windows::UI::StartScreen::ForegroundText consume_Windows_UI_StartScreen_ISecondaryTileVisualElements<D>::ForegroundText() const
{
    Windows::UI::StartScreen::ForegroundText value{};
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTileVisualElements)->get_ForegroundText(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_StartScreen_ISecondaryTileVisualElements<D>::BackgroundColor(Windows::UI::Color const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTileVisualElements)->put_BackgroundColor(get_abi(value)));
}

template <typename D> Windows::UI::Color consume_Windows_UI_StartScreen_ISecondaryTileVisualElements<D>::BackgroundColor() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTileVisualElements)->get_BackgroundColor(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_StartScreen_ISecondaryTileVisualElements<D>::ShowNameOnSquare150x150Logo(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTileVisualElements)->put_ShowNameOnSquare150x150Logo(value));
}

template <typename D> bool consume_Windows_UI_StartScreen_ISecondaryTileVisualElements<D>::ShowNameOnSquare150x150Logo() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTileVisualElements)->get_ShowNameOnSquare150x150Logo(&value));
    return value;
}

template <typename D> void consume_Windows_UI_StartScreen_ISecondaryTileVisualElements<D>::ShowNameOnWide310x150Logo(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTileVisualElements)->put_ShowNameOnWide310x150Logo(value));
}

template <typename D> bool consume_Windows_UI_StartScreen_ISecondaryTileVisualElements<D>::ShowNameOnWide310x150Logo() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTileVisualElements)->get_ShowNameOnWide310x150Logo(&value));
    return value;
}

template <typename D> void consume_Windows_UI_StartScreen_ISecondaryTileVisualElements<D>::ShowNameOnSquare310x310Logo(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTileVisualElements)->put_ShowNameOnSquare310x310Logo(value));
}

template <typename D> bool consume_Windows_UI_StartScreen_ISecondaryTileVisualElements<D>::ShowNameOnSquare310x310Logo() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTileVisualElements)->get_ShowNameOnSquare310x310Logo(&value));
    return value;
}

template <typename D> void consume_Windows_UI_StartScreen_ISecondaryTileVisualElements2<D>::Square71x71Logo(Windows::Foundation::Uri const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTileVisualElements2)->put_Square71x71Logo(get_abi(value)));
}

template <typename D> Windows::Foundation::Uri consume_Windows_UI_StartScreen_ISecondaryTileVisualElements2<D>::Square71x71Logo() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTileVisualElements2)->get_Square71x71Logo(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_StartScreen_ISecondaryTileVisualElements3<D>::Square44x44Logo(Windows::Foundation::Uri const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTileVisualElements3)->put_Square44x44Logo(get_abi(value)));
}

template <typename D> Windows::Foundation::Uri consume_Windows_UI_StartScreen_ISecondaryTileVisualElements3<D>::Square44x44Logo() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTileVisualElements3)->get_Square44x44Logo(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::StartScreen::TileMixedRealityModel consume_Windows_UI_StartScreen_ISecondaryTileVisualElements4<D>::MixedRealityModel() const
{
    Windows::UI::StartScreen::TileMixedRealityModel value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ISecondaryTileVisualElements4)->get_MixedRealityModel(put_abi(value)));
    return value;
}

template <typename D> Windows::System::User consume_Windows_UI_StartScreen_IStartScreenManager<D>::User() const
{
    Windows::System::User value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::IStartScreenManager)->get_User(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_StartScreen_IStartScreenManager<D>::SupportsAppListEntry(Windows::ApplicationModel::Core::AppListEntry const& appListEntry) const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::IStartScreenManager)->SupportsAppListEntry(get_abi(appListEntry), &result));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_UI_StartScreen_IStartScreenManager<D>::ContainsAppListEntryAsync(Windows::ApplicationModel::Core::AppListEntry const& appListEntry) const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::IStartScreenManager)->ContainsAppListEntryAsync(get_abi(appListEntry), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_UI_StartScreen_IStartScreenManager<D>::RequestAddAppListEntryAsync(Windows::ApplicationModel::Core::AppListEntry const& appListEntry) const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::IStartScreenManager)->RequestAddAppListEntryAsync(get_abi(appListEntry), put_abi(operation)));
    return operation;
}

template <typename D> Windows::UI::StartScreen::StartScreenManager consume_Windows_UI_StartScreen_IStartScreenManagerStatics<D>::GetDefault() const
{
    Windows::UI::StartScreen::StartScreenManager value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::IStartScreenManagerStatics)->GetDefault(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::StartScreen::StartScreenManager consume_Windows_UI_StartScreen_IStartScreenManagerStatics<D>::GetForUser(Windows::System::User const& user) const
{
    Windows::UI::StartScreen::StartScreenManager result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::IStartScreenManagerStatics)->GetForUser(get_abi(user), put_abi(result)));
    return result;
}

template <typename D> void consume_Windows_UI_StartScreen_ITileMixedRealityModel<D>::Uri(Windows::Foundation::Uri const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ITileMixedRealityModel)->put_Uri(get_abi(value)));
}

template <typename D> Windows::Foundation::Uri consume_Windows_UI_StartScreen_ITileMixedRealityModel<D>::Uri() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ITileMixedRealityModel)->get_Uri(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_StartScreen_ITileMixedRealityModel<D>::BoundingBox(optional<Windows::Perception::Spatial::SpatialBoundingBox> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ITileMixedRealityModel)->put_BoundingBox(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::Perception::Spatial::SpatialBoundingBox> consume_Windows_UI_StartScreen_ITileMixedRealityModel<D>::BoundingBox() const
{
    Windows::Foundation::IReference<Windows::Perception::Spatial::SpatialBoundingBox> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ITileMixedRealityModel)->get_BoundingBox(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_StartScreen_ITileMixedRealityModel2<D>::ActivationBehavior(Windows::UI::StartScreen::TileMixedRealityModelActivationBehavior const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ITileMixedRealityModel2)->put_ActivationBehavior(get_abi(value)));
}

template <typename D> Windows::UI::StartScreen::TileMixedRealityModelActivationBehavior consume_Windows_UI_StartScreen_ITileMixedRealityModel2<D>::ActivationBehavior() const
{
    Windows::UI::StartScreen::TileMixedRealityModelActivationBehavior value{};
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::ITileMixedRealityModel2)->get_ActivationBehavior(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::StartScreen::SecondaryTileVisualElements consume_Windows_UI_StartScreen_IVisualElementsRequest<D>::VisualElements() const
{
    Windows::UI::StartScreen::SecondaryTileVisualElements value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::IVisualElementsRequest)->get_VisualElements(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::UI::StartScreen::SecondaryTileVisualElements> consume_Windows_UI_StartScreen_IVisualElementsRequest<D>::AlternateVisualElements() const
{
    Windows::Foundation::Collections::IVectorView<Windows::UI::StartScreen::SecondaryTileVisualElements> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::IVisualElementsRequest)->get_AlternateVisualElements(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_UI_StartScreen_IVisualElementsRequest<D>::Deadline() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::IVisualElementsRequest)->get_Deadline(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::StartScreen::VisualElementsRequestDeferral consume_Windows_UI_StartScreen_IVisualElementsRequest<D>::GetDeferral() const
{
    Windows::UI::StartScreen::VisualElementsRequestDeferral deferral{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::IVisualElementsRequest)->GetDeferral(put_abi(deferral)));
    return deferral;
}

template <typename D> void consume_Windows_UI_StartScreen_IVisualElementsRequestDeferral<D>::Complete() const
{
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::IVisualElementsRequestDeferral)->Complete());
}

template <typename D> Windows::UI::StartScreen::VisualElementsRequest consume_Windows_UI_StartScreen_IVisualElementsRequestedEventArgs<D>::Request() const
{
    Windows::UI::StartScreen::VisualElementsRequest value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::StartScreen::IVisualElementsRequestedEventArgs)->get_Request(put_abi(value)));
    return value;
}

template <typename D>
struct produce<D, Windows::UI::StartScreen::IJumpList> : produce_base<D, Windows::UI::StartScreen::IJumpList>
{
    HRESULT __stdcall get_Items(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::UI::StartScreen::JumpListItem>>(this->shim().Items());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SystemGroupKind(Windows::UI::StartScreen::JumpListSystemGroupKind* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::StartScreen::JumpListSystemGroupKind>(this->shim().SystemGroupKind());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_SystemGroupKind(Windows::UI::StartScreen::JumpListSystemGroupKind value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SystemGroupKind(*reinterpret_cast<Windows::UI::StartScreen::JumpListSystemGroupKind const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SaveAsync(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncAction>(this->shim().SaveAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::StartScreen::IJumpListItem> : produce_base<D, Windows::UI::StartScreen::IJumpListItem>
{
    HRESULT __stdcall get_Kind(Windows::UI::StartScreen::JumpListItemKind* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::StartScreen::JumpListItemKind>(this->shim().Kind());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Arguments(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Arguments());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RemovedByUser(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().RemovedByUser());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Description(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Description());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Description(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Description(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

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

    HRESULT __stdcall get_GroupName(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().GroupName());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_GroupName(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GroupName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Logo(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().Logo());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Logo(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Logo(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::StartScreen::IJumpListItemStatics> : produce_base<D, Windows::UI::StartScreen::IJumpListItemStatics>
{
    HRESULT __stdcall CreateWithArguments(HSTRING arguments, HSTRING displayName, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::StartScreen::JumpListItem>(this->shim().CreateWithArguments(*reinterpret_cast<hstring const*>(&arguments), *reinterpret_cast<hstring const*>(&displayName)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateSeparator(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::StartScreen::JumpListItem>(this->shim().CreateSeparator());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::StartScreen::IJumpListStatics> : produce_base<D, Windows::UI::StartScreen::IJumpListStatics>
{
    HRESULT __stdcall LoadCurrentAsync(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::UI::StartScreen::JumpList>>(this->shim().LoadCurrentAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall IsSupported(bool* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().IsSupported());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::StartScreen::ISecondaryTile> : produce_base<D, Windows::UI::StartScreen::ISecondaryTile>
{
    HRESULT __stdcall put_TileId(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TileId(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TileId(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().TileId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Arguments(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Arguments(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Arguments(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Arguments());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ShortName(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ShortName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ShortName(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ShortName());
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

    HRESULT __stdcall put_Logo(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Logo(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Logo(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().Logo());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_SmallLogo(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SmallLogo(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SmallLogo(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().SmallLogo());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_WideLogo(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WideLogo(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_WideLogo(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().WideLogo());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_LockScreenBadgeLogo(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LockScreenBadgeLogo(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_LockScreenBadgeLogo(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().LockScreenBadgeLogo());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_LockScreenDisplayBadgeAndTileText(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LockScreenDisplayBadgeAndTileText(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_LockScreenDisplayBadgeAndTileText(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().LockScreenDisplayBadgeAndTileText());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_TileOptions(Windows::UI::StartScreen::TileOptions value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TileOptions(*reinterpret_cast<Windows::UI::StartScreen::TileOptions const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TileOptions(Windows::UI::StartScreen::TileOptions* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::StartScreen::TileOptions>(this->shim().TileOptions());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ForegroundText(Windows::UI::StartScreen::ForegroundText value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ForegroundText(*reinterpret_cast<Windows::UI::StartScreen::ForegroundText const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ForegroundText(Windows::UI::StartScreen::ForegroundText* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::StartScreen::ForegroundText>(this->shim().ForegroundText());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_BackgroundColor(struct struct_Windows_UI_Color value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BackgroundColor(*reinterpret_cast<Windows::UI::Color const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_BackgroundColor(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().BackgroundColor());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RequestCreateAsync(void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().RequestCreateAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RequestCreateAsyncWithPoint(Windows::Foundation::Point invocationPoint, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().RequestCreateAsync(*reinterpret_cast<Windows::Foundation::Point const*>(&invocationPoint)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RequestCreateAsyncWithRect(Windows::Foundation::Rect selection, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().RequestCreateForSelectionAsync(*reinterpret_cast<Windows::Foundation::Rect const*>(&selection)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RequestCreateAsyncWithRectAndPlacement(Windows::Foundation::Rect selection, Windows::UI::Popups::Placement preferredPlacement, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().RequestCreateForSelectionAsync(*reinterpret_cast<Windows::Foundation::Rect const*>(&selection), *reinterpret_cast<Windows::UI::Popups::Placement const*>(&preferredPlacement)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RequestDeleteAsync(void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().RequestDeleteAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RequestDeleteAsyncWithPoint(Windows::Foundation::Point invocationPoint, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().RequestDeleteAsync(*reinterpret_cast<Windows::Foundation::Point const*>(&invocationPoint)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RequestDeleteAsyncWithRect(Windows::Foundation::Rect selection, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().RequestDeleteForSelectionAsync(*reinterpret_cast<Windows::Foundation::Rect const*>(&selection)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RequestDeleteAsyncWithRectAndPlacement(Windows::Foundation::Rect selection, Windows::UI::Popups::Placement preferredPlacement, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().RequestDeleteForSelectionAsync(*reinterpret_cast<Windows::Foundation::Rect const*>(&selection), *reinterpret_cast<Windows::UI::Popups::Placement const*>(&preferredPlacement)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall UpdateAsync(void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().UpdateAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::StartScreen::ISecondaryTile2> : produce_base<D, Windows::UI::StartScreen::ISecondaryTile2>
{
    HRESULT __stdcall put_PhoneticName(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PhoneticName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PhoneticName(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().PhoneticName());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_VisualElements(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::StartScreen::SecondaryTileVisualElements>(this->shim().VisualElements());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_RoamingEnabled(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RoamingEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RoamingEnabled(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().RoamingEnabled());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_VisualElementsRequested(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().VisualElementsRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::StartScreen::SecondaryTile, Windows::UI::StartScreen::VisualElementsRequestedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_VisualElementsRequested(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().VisualElementsRequested(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::StartScreen::ISecondaryTileFactory> : produce_base<D, Windows::UI::StartScreen::ISecondaryTileFactory>
{
    HRESULT __stdcall CreateTile(HSTRING tileId, HSTRING shortName, HSTRING displayName, HSTRING arguments, Windows::UI::StartScreen::TileOptions tileOptions, void* logoReference, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::StartScreen::SecondaryTile>(this->shim().CreateTile(*reinterpret_cast<hstring const*>(&tileId), *reinterpret_cast<hstring const*>(&shortName), *reinterpret_cast<hstring const*>(&displayName), *reinterpret_cast<hstring const*>(&arguments), *reinterpret_cast<Windows::UI::StartScreen::TileOptions const*>(&tileOptions), *reinterpret_cast<Windows::Foundation::Uri const*>(&logoReference)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateWideTile(HSTRING tileId, HSTRING shortName, HSTRING displayName, HSTRING arguments, Windows::UI::StartScreen::TileOptions tileOptions, void* logoReference, void* wideLogoReference, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::StartScreen::SecondaryTile>(this->shim().CreateWideTile(*reinterpret_cast<hstring const*>(&tileId), *reinterpret_cast<hstring const*>(&shortName), *reinterpret_cast<hstring const*>(&displayName), *reinterpret_cast<hstring const*>(&arguments), *reinterpret_cast<Windows::UI::StartScreen::TileOptions const*>(&tileOptions), *reinterpret_cast<Windows::Foundation::Uri const*>(&logoReference), *reinterpret_cast<Windows::Foundation::Uri const*>(&wideLogoReference)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateWithId(HSTRING tileId, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::StartScreen::SecondaryTile>(this->shim().CreateWithId(*reinterpret_cast<hstring const*>(&tileId)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::StartScreen::ISecondaryTileFactory2> : produce_base<D, Windows::UI::StartScreen::ISecondaryTileFactory2>
{
    HRESULT __stdcall CreateMinimalTile(HSTRING tileId, HSTRING displayName, HSTRING arguments, void* square150x150Logo, Windows::UI::StartScreen::TileSize desiredSize, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::StartScreen::SecondaryTile>(this->shim().CreateMinimalTile(*reinterpret_cast<hstring const*>(&tileId), *reinterpret_cast<hstring const*>(&displayName), *reinterpret_cast<hstring const*>(&arguments), *reinterpret_cast<Windows::Foundation::Uri const*>(&square150x150Logo), *reinterpret_cast<Windows::UI::StartScreen::TileSize const*>(&desiredSize)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::StartScreen::ISecondaryTileStatics> : produce_base<D, Windows::UI::StartScreen::ISecondaryTileStatics>
{
    HRESULT __stdcall Exists(HSTRING tileId, bool* exists) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *exists = detach_from<bool>(this->shim().Exists(*reinterpret_cast<hstring const*>(&tileId)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FindAllAsync(void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::UI::StartScreen::SecondaryTile>>>(this->shim().FindAllAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FindAllForApplicationAsync(HSTRING applicationId, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::UI::StartScreen::SecondaryTile>>>(this->shim().FindAllAsync(*reinterpret_cast<hstring const*>(&applicationId)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FindAllForPackageAsync(void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::UI::StartScreen::SecondaryTile>>>(this->shim().FindAllForPackageAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::StartScreen::ISecondaryTileVisualElements> : produce_base<D, Windows::UI::StartScreen::ISecondaryTileVisualElements>
{
    HRESULT __stdcall put_Square30x30Logo(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Square30x30Logo(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Square30x30Logo(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().Square30x30Logo());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Square70x70Logo(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Square70x70Logo(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Square70x70Logo(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().Square70x70Logo());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Square150x150Logo(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Square150x150Logo(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Square150x150Logo(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().Square150x150Logo());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Wide310x150Logo(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Wide310x150Logo(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Wide310x150Logo(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().Wide310x150Logo());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Square310x310Logo(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Square310x310Logo(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Square310x310Logo(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().Square310x310Logo());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ForegroundText(Windows::UI::StartScreen::ForegroundText value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ForegroundText(*reinterpret_cast<Windows::UI::StartScreen::ForegroundText const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ForegroundText(Windows::UI::StartScreen::ForegroundText* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::StartScreen::ForegroundText>(this->shim().ForegroundText());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_BackgroundColor(struct struct_Windows_UI_Color value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BackgroundColor(*reinterpret_cast<Windows::UI::Color const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_BackgroundColor(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().BackgroundColor());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ShowNameOnSquare150x150Logo(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ShowNameOnSquare150x150Logo(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ShowNameOnSquare150x150Logo(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().ShowNameOnSquare150x150Logo());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ShowNameOnWide310x150Logo(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ShowNameOnWide310x150Logo(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ShowNameOnWide310x150Logo(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().ShowNameOnWide310x150Logo());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ShowNameOnSquare310x310Logo(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ShowNameOnSquare310x310Logo(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ShowNameOnSquare310x310Logo(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().ShowNameOnSquare310x310Logo());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::StartScreen::ISecondaryTileVisualElements2> : produce_base<D, Windows::UI::StartScreen::ISecondaryTileVisualElements2>
{
    HRESULT __stdcall put_Square71x71Logo(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Square71x71Logo(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Square71x71Logo(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().Square71x71Logo());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::StartScreen::ISecondaryTileVisualElements3> : produce_base<D, Windows::UI::StartScreen::ISecondaryTileVisualElements3>
{
    HRESULT __stdcall put_Square44x44Logo(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Square44x44Logo(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Square44x44Logo(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().Square44x44Logo());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::StartScreen::ISecondaryTileVisualElements4> : produce_base<D, Windows::UI::StartScreen::ISecondaryTileVisualElements4>
{
    HRESULT __stdcall get_MixedRealityModel(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::StartScreen::TileMixedRealityModel>(this->shim().MixedRealityModel());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::StartScreen::IStartScreenManager> : produce_base<D, Windows::UI::StartScreen::IStartScreenManager>
{
    HRESULT __stdcall get_User(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::System::User>(this->shim().User());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SupportsAppListEntry(void* appListEntry, bool* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().SupportsAppListEntry(*reinterpret_cast<Windows::ApplicationModel::Core::AppListEntry const*>(&appListEntry)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ContainsAppListEntryAsync(void* appListEntry, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().ContainsAppListEntryAsync(*reinterpret_cast<Windows::ApplicationModel::Core::AppListEntry const*>(&appListEntry)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RequestAddAppListEntryAsync(void* appListEntry, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().RequestAddAppListEntryAsync(*reinterpret_cast<Windows::ApplicationModel::Core::AppListEntry const*>(&appListEntry)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::StartScreen::IStartScreenManagerStatics> : produce_base<D, Windows::UI::StartScreen::IStartScreenManagerStatics>
{
    HRESULT __stdcall GetDefault(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::StartScreen::StartScreenManager>(this->shim().GetDefault());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetForUser(void* user, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::StartScreen::StartScreenManager>(this->shim().GetForUser(*reinterpret_cast<Windows::System::User const*>(&user)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::StartScreen::ITileMixedRealityModel> : produce_base<D, Windows::UI::StartScreen::ITileMixedRealityModel>
{
    HRESULT __stdcall put_Uri(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Uri(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Uri(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().Uri());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_BoundingBox(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BoundingBox(*reinterpret_cast<Windows::Foundation::IReference<Windows::Perception::Spatial::SpatialBoundingBox> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_BoundingBox(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<Windows::Perception::Spatial::SpatialBoundingBox>>(this->shim().BoundingBox());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::StartScreen::ITileMixedRealityModel2> : produce_base<D, Windows::UI::StartScreen::ITileMixedRealityModel2>
{
    HRESULT __stdcall put_ActivationBehavior(Windows::UI::StartScreen::TileMixedRealityModelActivationBehavior value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ActivationBehavior(*reinterpret_cast<Windows::UI::StartScreen::TileMixedRealityModelActivationBehavior const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ActivationBehavior(Windows::UI::StartScreen::TileMixedRealityModelActivationBehavior* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::StartScreen::TileMixedRealityModelActivationBehavior>(this->shim().ActivationBehavior());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::StartScreen::IVisualElementsRequest> : produce_base<D, Windows::UI::StartScreen::IVisualElementsRequest>
{
    HRESULT __stdcall get_VisualElements(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::StartScreen::SecondaryTileVisualElements>(this->shim().VisualElements());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AlternateVisualElements(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::UI::StartScreen::SecondaryTileVisualElements>>(this->shim().AlternateVisualElements());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Deadline(Windows::Foundation::DateTime* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::DateTime>(this->shim().Deadline());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetDeferral(void** deferral) noexcept final
    {
        try
        {
            *deferral = nullptr;
            typename D::abi_guard guard(this->shim());
            *deferral = detach_from<Windows::UI::StartScreen::VisualElementsRequestDeferral>(this->shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::StartScreen::IVisualElementsRequestDeferral> : produce_base<D, Windows::UI::StartScreen::IVisualElementsRequestDeferral>
{
    HRESULT __stdcall Complete() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Complete();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::StartScreen::IVisualElementsRequestedEventArgs> : produce_base<D, Windows::UI::StartScreen::IVisualElementsRequestedEventArgs>
{
    HRESULT __stdcall get_Request(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::StartScreen::VisualElementsRequest>(this->shim().Request());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::UI::StartScreen {

inline Windows::Foundation::IAsyncOperation<Windows::UI::StartScreen::JumpList> JumpList::LoadCurrentAsync()
{
    return get_activation_factory<JumpList, Windows::UI::StartScreen::IJumpListStatics>().LoadCurrentAsync();
}

inline bool JumpList::IsSupported()
{
    return get_activation_factory<JumpList, Windows::UI::StartScreen::IJumpListStatics>().IsSupported();
}

inline Windows::UI::StartScreen::JumpListItem JumpListItem::CreateWithArguments(param::hstring const& arguments, param::hstring const& displayName)
{
    return get_activation_factory<JumpListItem, Windows::UI::StartScreen::IJumpListItemStatics>().CreateWithArguments(arguments, displayName);
}

inline Windows::UI::StartScreen::JumpListItem JumpListItem::CreateSeparator()
{
    return get_activation_factory<JumpListItem, Windows::UI::StartScreen::IJumpListItemStatics>().CreateSeparator();
}

inline SecondaryTile::SecondaryTile() :
    SecondaryTile(get_activation_factory<SecondaryTile>().ActivateInstance<SecondaryTile>())
{}

inline SecondaryTile::SecondaryTile(param::hstring const& tileId, param::hstring const& shortName, param::hstring const& displayName, param::hstring const& arguments, Windows::UI::StartScreen::TileOptions const& tileOptions, Windows::Foundation::Uri const& logoReference) :
    SecondaryTile(get_activation_factory<SecondaryTile, Windows::UI::StartScreen::ISecondaryTileFactory>().CreateTile(tileId, shortName, displayName, arguments, tileOptions, logoReference))
{}

inline SecondaryTile::SecondaryTile(param::hstring const& tileId, param::hstring const& shortName, param::hstring const& displayName, param::hstring const& arguments, Windows::UI::StartScreen::TileOptions const& tileOptions, Windows::Foundation::Uri const& logoReference, Windows::Foundation::Uri const& wideLogoReference) :
    SecondaryTile(get_activation_factory<SecondaryTile, Windows::UI::StartScreen::ISecondaryTileFactory>().CreateWideTile(tileId, shortName, displayName, arguments, tileOptions, logoReference, wideLogoReference))
{}

inline SecondaryTile::SecondaryTile(param::hstring const& tileId) :
    SecondaryTile(get_activation_factory<SecondaryTile, Windows::UI::StartScreen::ISecondaryTileFactory>().CreateWithId(tileId))
{}

inline SecondaryTile::SecondaryTile(param::hstring const& tileId, param::hstring const& displayName, param::hstring const& arguments, Windows::Foundation::Uri const& square150x150Logo, Windows::UI::StartScreen::TileSize const& desiredSize) :
    SecondaryTile(get_activation_factory<SecondaryTile, Windows::UI::StartScreen::ISecondaryTileFactory2>().CreateMinimalTile(tileId, displayName, arguments, square150x150Logo, desiredSize))
{}

inline bool SecondaryTile::Exists(param::hstring const& tileId)
{
    return get_activation_factory<SecondaryTile, Windows::UI::StartScreen::ISecondaryTileStatics>().Exists(tileId);
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::UI::StartScreen::SecondaryTile>> SecondaryTile::FindAllAsync()
{
    return get_activation_factory<SecondaryTile, Windows::UI::StartScreen::ISecondaryTileStatics>().FindAllAsync();
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::UI::StartScreen::SecondaryTile>> SecondaryTile::FindAllAsync(param::hstring const& applicationId)
{
    return get_activation_factory<SecondaryTile, Windows::UI::StartScreen::ISecondaryTileStatics>().FindAllAsync(applicationId);
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::UI::StartScreen::SecondaryTile>> SecondaryTile::FindAllForPackageAsync()
{
    return get_activation_factory<SecondaryTile, Windows::UI::StartScreen::ISecondaryTileStatics>().FindAllForPackageAsync();
}

inline Windows::UI::StartScreen::StartScreenManager StartScreenManager::GetDefault()
{
    return get_activation_factory<StartScreenManager, Windows::UI::StartScreen::IStartScreenManagerStatics>().GetDefault();
}

inline Windows::UI::StartScreen::StartScreenManager StartScreenManager::GetForUser(Windows::System::User const& user)
{
    return get_activation_factory<StartScreenManager, Windows::UI::StartScreen::IStartScreenManagerStatics>().GetForUser(user);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::UI::StartScreen::IJumpList> : winrt::impl::hash_base<winrt::Windows::UI::StartScreen::IJumpList> {};
template<> struct hash<winrt::Windows::UI::StartScreen::IJumpListItem> : winrt::impl::hash_base<winrt::Windows::UI::StartScreen::IJumpListItem> {};
template<> struct hash<winrt::Windows::UI::StartScreen::IJumpListItemStatics> : winrt::impl::hash_base<winrt::Windows::UI::StartScreen::IJumpListItemStatics> {};
template<> struct hash<winrt::Windows::UI::StartScreen::IJumpListStatics> : winrt::impl::hash_base<winrt::Windows::UI::StartScreen::IJumpListStatics> {};
template<> struct hash<winrt::Windows::UI::StartScreen::ISecondaryTile> : winrt::impl::hash_base<winrt::Windows::UI::StartScreen::ISecondaryTile> {};
template<> struct hash<winrt::Windows::UI::StartScreen::ISecondaryTile2> : winrt::impl::hash_base<winrt::Windows::UI::StartScreen::ISecondaryTile2> {};
template<> struct hash<winrt::Windows::UI::StartScreen::ISecondaryTileFactory> : winrt::impl::hash_base<winrt::Windows::UI::StartScreen::ISecondaryTileFactory> {};
template<> struct hash<winrt::Windows::UI::StartScreen::ISecondaryTileFactory2> : winrt::impl::hash_base<winrt::Windows::UI::StartScreen::ISecondaryTileFactory2> {};
template<> struct hash<winrt::Windows::UI::StartScreen::ISecondaryTileStatics> : winrt::impl::hash_base<winrt::Windows::UI::StartScreen::ISecondaryTileStatics> {};
template<> struct hash<winrt::Windows::UI::StartScreen::ISecondaryTileVisualElements> : winrt::impl::hash_base<winrt::Windows::UI::StartScreen::ISecondaryTileVisualElements> {};
template<> struct hash<winrt::Windows::UI::StartScreen::ISecondaryTileVisualElements2> : winrt::impl::hash_base<winrt::Windows::UI::StartScreen::ISecondaryTileVisualElements2> {};
template<> struct hash<winrt::Windows::UI::StartScreen::ISecondaryTileVisualElements3> : winrt::impl::hash_base<winrt::Windows::UI::StartScreen::ISecondaryTileVisualElements3> {};
template<> struct hash<winrt::Windows::UI::StartScreen::ISecondaryTileVisualElements4> : winrt::impl::hash_base<winrt::Windows::UI::StartScreen::ISecondaryTileVisualElements4> {};
template<> struct hash<winrt::Windows::UI::StartScreen::IStartScreenManager> : winrt::impl::hash_base<winrt::Windows::UI::StartScreen::IStartScreenManager> {};
template<> struct hash<winrt::Windows::UI::StartScreen::IStartScreenManagerStatics> : winrt::impl::hash_base<winrt::Windows::UI::StartScreen::IStartScreenManagerStatics> {};
template<> struct hash<winrt::Windows::UI::StartScreen::ITileMixedRealityModel> : winrt::impl::hash_base<winrt::Windows::UI::StartScreen::ITileMixedRealityModel> {};
template<> struct hash<winrt::Windows::UI::StartScreen::ITileMixedRealityModel2> : winrt::impl::hash_base<winrt::Windows::UI::StartScreen::ITileMixedRealityModel2> {};
template<> struct hash<winrt::Windows::UI::StartScreen::IVisualElementsRequest> : winrt::impl::hash_base<winrt::Windows::UI::StartScreen::IVisualElementsRequest> {};
template<> struct hash<winrt::Windows::UI::StartScreen::IVisualElementsRequestDeferral> : winrt::impl::hash_base<winrt::Windows::UI::StartScreen::IVisualElementsRequestDeferral> {};
template<> struct hash<winrt::Windows::UI::StartScreen::IVisualElementsRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::StartScreen::IVisualElementsRequestedEventArgs> {};
template<> struct hash<winrt::Windows::UI::StartScreen::JumpList> : winrt::impl::hash_base<winrt::Windows::UI::StartScreen::JumpList> {};
template<> struct hash<winrt::Windows::UI::StartScreen::JumpListItem> : winrt::impl::hash_base<winrt::Windows::UI::StartScreen::JumpListItem> {};
template<> struct hash<winrt::Windows::UI::StartScreen::SecondaryTile> : winrt::impl::hash_base<winrt::Windows::UI::StartScreen::SecondaryTile> {};
template<> struct hash<winrt::Windows::UI::StartScreen::SecondaryTileVisualElements> : winrt::impl::hash_base<winrt::Windows::UI::StartScreen::SecondaryTileVisualElements> {};
template<> struct hash<winrt::Windows::UI::StartScreen::StartScreenManager> : winrt::impl::hash_base<winrt::Windows::UI::StartScreen::StartScreenManager> {};
template<> struct hash<winrt::Windows::UI::StartScreen::TileMixedRealityModel> : winrt::impl::hash_base<winrt::Windows::UI::StartScreen::TileMixedRealityModel> {};
template<> struct hash<winrt::Windows::UI::StartScreen::VisualElementsRequest> : winrt::impl::hash_base<winrt::Windows::UI::StartScreen::VisualElementsRequest> {};
template<> struct hash<winrt::Windows::UI::StartScreen::VisualElementsRequestDeferral> : winrt::impl::hash_base<winrt::Windows::UI::StartScreen::VisualElementsRequestDeferral> {};
template<> struct hash<winrt::Windows::UI::StartScreen::VisualElementsRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::StartScreen::VisualElementsRequestedEventArgs> {};

}

WINRT_WARNING_POP
