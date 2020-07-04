// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Core {

struct AppListEntry;

}

WINRT_EXPORT namespace winrt::Windows::Foundation {

struct Uri;

}

WINRT_EXPORT namespace winrt::Windows::Perception::Spatial {

struct SpatialBoundingBox;

}

WINRT_EXPORT namespace winrt::Windows::System {

struct User;

}

WINRT_EXPORT namespace winrt::Windows::UI {

struct Color;

}

WINRT_EXPORT namespace winrt::Windows::UI::Popups {

enum class Placement;

}

WINRT_EXPORT namespace winrt::Windows::UI::StartScreen {

enum class ForegroundText : int32_t
{
    Dark = 0,
    Light = 1,
};

enum class JumpListItemKind : int32_t
{
    Arguments = 0,
    Separator = 1,
};

enum class JumpListSystemGroupKind : int32_t
{
    None = 0,
    Frequent = 1,
    Recent = 2,
};

enum class TileMixedRealityModelActivationBehavior : int32_t
{
    Default = 0,
    None = 1,
};

enum class TileOptions : uint32_t
{
    None [[deprecated("TileOptions.None may be altered or unavailable for release after Windows Phone 8.1.")]] = 0x0,
    ShowNameOnLogo [[deprecated("TileOptions.ShowNameOnLogo may be altered or unavailable for releases after Windows Phone 8.1. Instead, use SecondaryTile.VisualElements.ShowNameOnSquare150x150Logo.")]] = 0x1,
    ShowNameOnWideLogo [[deprecated("TileOptions.ShowNameWideOnLogo may be altered or unavailable for releases after Windows Phone 8.1. Instead, use SecondaryTile.VisualElements.ShowNameOnWide310x150Logo.")]] = 0x2,
    CopyOnDeployment [[deprecated("TileOptions.CopyOnDeployment may be altered or unavailable for releases after Windows Phone 8.1. Instead, use SecondaryTile.RoamingEnabled to control roaming behavior.")]] = 0x4,
};

enum class TileSize : int32_t
{
    Default = 0,
    Square30x30 [[deprecated("TileSize.Square30x30 may be altered or unavailable for release after Windows 10.")]] = 1,
    Square70x70 [[deprecated("TileSize.Square70x70 may be altered or unavailable for release after Windows Phone 8.1.")]] = 2,
    Square150x150 = 3,
    Wide310x150 = 4,
    Square310x310 = 5,
    Square71x71 = 6,
    Square44x44 = 7,
};

struct IJumpList;
struct IJumpListItem;
struct IJumpListItemStatics;
struct IJumpListStatics;
struct ISecondaryTile;
struct ISecondaryTile2;
struct ISecondaryTileFactory;
struct ISecondaryTileFactory2;
struct ISecondaryTileStatics;
struct ISecondaryTileVisualElements;
struct ISecondaryTileVisualElements2;
struct ISecondaryTileVisualElements3;
struct ISecondaryTileVisualElements4;
struct IStartScreenManager;
struct IStartScreenManagerStatics;
struct ITileMixedRealityModel;
struct ITileMixedRealityModel2;
struct IVisualElementsRequest;
struct IVisualElementsRequestDeferral;
struct IVisualElementsRequestedEventArgs;
struct JumpList;
struct JumpListItem;
struct SecondaryTile;
struct SecondaryTileVisualElements;
struct StartScreenManager;
struct TileMixedRealityModel;
struct VisualElementsRequest;
struct VisualElementsRequestDeferral;
struct VisualElementsRequestedEventArgs;

}

namespace winrt::impl {

template<> struct is_enum_flag<Windows::UI::StartScreen::TileOptions> : std::true_type {};
template <> struct category<Windows::UI::StartScreen::IJumpList>{ using type = interface_category; };
template <> struct category<Windows::UI::StartScreen::IJumpListItem>{ using type = interface_category; };
template <> struct category<Windows::UI::StartScreen::IJumpListItemStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::StartScreen::IJumpListStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::StartScreen::ISecondaryTile>{ using type = interface_category; };
template <> struct category<Windows::UI::StartScreen::ISecondaryTile2>{ using type = interface_category; };
template <> struct category<Windows::UI::StartScreen::ISecondaryTileFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::StartScreen::ISecondaryTileFactory2>{ using type = interface_category; };
template <> struct category<Windows::UI::StartScreen::ISecondaryTileStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::StartScreen::ISecondaryTileVisualElements>{ using type = interface_category; };
template <> struct category<Windows::UI::StartScreen::ISecondaryTileVisualElements2>{ using type = interface_category; };
template <> struct category<Windows::UI::StartScreen::ISecondaryTileVisualElements3>{ using type = interface_category; };
template <> struct category<Windows::UI::StartScreen::ISecondaryTileVisualElements4>{ using type = interface_category; };
template <> struct category<Windows::UI::StartScreen::IStartScreenManager>{ using type = interface_category; };
template <> struct category<Windows::UI::StartScreen::IStartScreenManagerStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::StartScreen::ITileMixedRealityModel>{ using type = interface_category; };
template <> struct category<Windows::UI::StartScreen::ITileMixedRealityModel2>{ using type = interface_category; };
template <> struct category<Windows::UI::StartScreen::IVisualElementsRequest>{ using type = interface_category; };
template <> struct category<Windows::UI::StartScreen::IVisualElementsRequestDeferral>{ using type = interface_category; };
template <> struct category<Windows::UI::StartScreen::IVisualElementsRequestedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::StartScreen::JumpList>{ using type = class_category; };
template <> struct category<Windows::UI::StartScreen::JumpListItem>{ using type = class_category; };
template <> struct category<Windows::UI::StartScreen::SecondaryTile>{ using type = class_category; };
template <> struct category<Windows::UI::StartScreen::SecondaryTileVisualElements>{ using type = class_category; };
template <> struct category<Windows::UI::StartScreen::StartScreenManager>{ using type = class_category; };
template <> struct category<Windows::UI::StartScreen::TileMixedRealityModel>{ using type = class_category; };
template <> struct category<Windows::UI::StartScreen::VisualElementsRequest>{ using type = class_category; };
template <> struct category<Windows::UI::StartScreen::VisualElementsRequestDeferral>{ using type = class_category; };
template <> struct category<Windows::UI::StartScreen::VisualElementsRequestedEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::StartScreen::ForegroundText>{ using type = enum_category; };
template <> struct category<Windows::UI::StartScreen::JumpListItemKind>{ using type = enum_category; };
template <> struct category<Windows::UI::StartScreen::JumpListSystemGroupKind>{ using type = enum_category; };
template <> struct category<Windows::UI::StartScreen::TileMixedRealityModelActivationBehavior>{ using type = enum_category; };
template <> struct category<Windows::UI::StartScreen::TileOptions>{ using type = enum_category; };
template <> struct category<Windows::UI::StartScreen::TileSize>{ using type = enum_category; };
template <> struct name<Windows::UI::StartScreen::IJumpList>{ static constexpr auto & value{ L"Windows.UI.StartScreen.IJumpList" }; };
template <> struct name<Windows::UI::StartScreen::IJumpListItem>{ static constexpr auto & value{ L"Windows.UI.StartScreen.IJumpListItem" }; };
template <> struct name<Windows::UI::StartScreen::IJumpListItemStatics>{ static constexpr auto & value{ L"Windows.UI.StartScreen.IJumpListItemStatics" }; };
template <> struct name<Windows::UI::StartScreen::IJumpListStatics>{ static constexpr auto & value{ L"Windows.UI.StartScreen.IJumpListStatics" }; };
template <> struct name<Windows::UI::StartScreen::ISecondaryTile>{ static constexpr auto & value{ L"Windows.UI.StartScreen.ISecondaryTile" }; };
template <> struct name<Windows::UI::StartScreen::ISecondaryTile2>{ static constexpr auto & value{ L"Windows.UI.StartScreen.ISecondaryTile2" }; };
template <> struct name<Windows::UI::StartScreen::ISecondaryTileFactory>{ static constexpr auto & value{ L"Windows.UI.StartScreen.ISecondaryTileFactory" }; };
template <> struct name<Windows::UI::StartScreen::ISecondaryTileFactory2>{ static constexpr auto & value{ L"Windows.UI.StartScreen.ISecondaryTileFactory2" }; };
template <> struct name<Windows::UI::StartScreen::ISecondaryTileStatics>{ static constexpr auto & value{ L"Windows.UI.StartScreen.ISecondaryTileStatics" }; };
template <> struct name<Windows::UI::StartScreen::ISecondaryTileVisualElements>{ static constexpr auto & value{ L"Windows.UI.StartScreen.ISecondaryTileVisualElements" }; };
template <> struct name<Windows::UI::StartScreen::ISecondaryTileVisualElements2>{ static constexpr auto & value{ L"Windows.UI.StartScreen.ISecondaryTileVisualElements2" }; };
template <> struct name<Windows::UI::StartScreen::ISecondaryTileVisualElements3>{ static constexpr auto & value{ L"Windows.UI.StartScreen.ISecondaryTileVisualElements3" }; };
template <> struct name<Windows::UI::StartScreen::ISecondaryTileVisualElements4>{ static constexpr auto & value{ L"Windows.UI.StartScreen.ISecondaryTileVisualElements4" }; };
template <> struct name<Windows::UI::StartScreen::IStartScreenManager>{ static constexpr auto & value{ L"Windows.UI.StartScreen.IStartScreenManager" }; };
template <> struct name<Windows::UI::StartScreen::IStartScreenManagerStatics>{ static constexpr auto & value{ L"Windows.UI.StartScreen.IStartScreenManagerStatics" }; };
template <> struct name<Windows::UI::StartScreen::ITileMixedRealityModel>{ static constexpr auto & value{ L"Windows.UI.StartScreen.ITileMixedRealityModel" }; };
template <> struct name<Windows::UI::StartScreen::ITileMixedRealityModel2>{ static constexpr auto & value{ L"Windows.UI.StartScreen.ITileMixedRealityModel2" }; };
template <> struct name<Windows::UI::StartScreen::IVisualElementsRequest>{ static constexpr auto & value{ L"Windows.UI.StartScreen.IVisualElementsRequest" }; };
template <> struct name<Windows::UI::StartScreen::IVisualElementsRequestDeferral>{ static constexpr auto & value{ L"Windows.UI.StartScreen.IVisualElementsRequestDeferral" }; };
template <> struct name<Windows::UI::StartScreen::IVisualElementsRequestedEventArgs>{ static constexpr auto & value{ L"Windows.UI.StartScreen.IVisualElementsRequestedEventArgs" }; };
template <> struct name<Windows::UI::StartScreen::JumpList>{ static constexpr auto & value{ L"Windows.UI.StartScreen.JumpList" }; };
template <> struct name<Windows::UI::StartScreen::JumpListItem>{ static constexpr auto & value{ L"Windows.UI.StartScreen.JumpListItem" }; };
template <> struct name<Windows::UI::StartScreen::SecondaryTile>{ static constexpr auto & value{ L"Windows.UI.StartScreen.SecondaryTile" }; };
template <> struct name<Windows::UI::StartScreen::SecondaryTileVisualElements>{ static constexpr auto & value{ L"Windows.UI.StartScreen.SecondaryTileVisualElements" }; };
template <> struct name<Windows::UI::StartScreen::StartScreenManager>{ static constexpr auto & value{ L"Windows.UI.StartScreen.StartScreenManager" }; };
template <> struct name<Windows::UI::StartScreen::TileMixedRealityModel>{ static constexpr auto & value{ L"Windows.UI.StartScreen.TileMixedRealityModel" }; };
template <> struct name<Windows::UI::StartScreen::VisualElementsRequest>{ static constexpr auto & value{ L"Windows.UI.StartScreen.VisualElementsRequest" }; };
template <> struct name<Windows::UI::StartScreen::VisualElementsRequestDeferral>{ static constexpr auto & value{ L"Windows.UI.StartScreen.VisualElementsRequestDeferral" }; };
template <> struct name<Windows::UI::StartScreen::VisualElementsRequestedEventArgs>{ static constexpr auto & value{ L"Windows.UI.StartScreen.VisualElementsRequestedEventArgs" }; };
template <> struct name<Windows::UI::StartScreen::ForegroundText>{ static constexpr auto & value{ L"Windows.UI.StartScreen.ForegroundText" }; };
template <> struct name<Windows::UI::StartScreen::JumpListItemKind>{ static constexpr auto & value{ L"Windows.UI.StartScreen.JumpListItemKind" }; };
template <> struct name<Windows::UI::StartScreen::JumpListSystemGroupKind>{ static constexpr auto & value{ L"Windows.UI.StartScreen.JumpListSystemGroupKind" }; };
template <> struct name<Windows::UI::StartScreen::TileMixedRealityModelActivationBehavior>{ static constexpr auto & value{ L"Windows.UI.StartScreen.TileMixedRealityModelActivationBehavior" }; };
template <> struct name<Windows::UI::StartScreen::TileOptions>{ static constexpr auto & value{ L"Windows.UI.StartScreen.TileOptions" }; };
template <> struct name<Windows::UI::StartScreen::TileSize>{ static constexpr auto & value{ L"Windows.UI.StartScreen.TileSize" }; };
template <> struct guid<Windows::UI::StartScreen::IJumpList>{ static constexpr GUID value{ 0xB0234C3E,0xCD6F,0x4CB6,{ 0xA6,0x11,0x61,0xFD,0x50,0x5F,0x3E,0xD1 } }; };
template <> struct guid<Windows::UI::StartScreen::IJumpListItem>{ static constexpr GUID value{ 0x7ADB6717,0x8B5D,0x4820,{ 0x99,0x5B,0x9B,0x41,0x8D,0xBE,0x48,0xB0 } }; };
template <> struct guid<Windows::UI::StartScreen::IJumpListItemStatics>{ static constexpr GUID value{ 0xF1BFC4E8,0xC7AA,0x49CB,{ 0x8D,0xDE,0xEC,0xFC,0xCD,0x7A,0xD7,0xE4 } }; };
template <> struct guid<Windows::UI::StartScreen::IJumpListStatics>{ static constexpr GUID value{ 0xA7E0C681,0xE67E,0x4B74,{ 0x82,0x50,0x3F,0x32,0x2C,0x4D,0x92,0xC3 } }; };
template <> struct guid<Windows::UI::StartScreen::ISecondaryTile>{ static constexpr GUID value{ 0x9E9E51E0,0x2BB5,0x4BC0,{ 0xBB,0x8D,0x42,0xB2,0x3A,0xBC,0xC8,0x8D } }; };
template <> struct guid<Windows::UI::StartScreen::ISecondaryTile2>{ static constexpr GUID value{ 0xB2F6CC35,0x3250,0x4990,{ 0x92,0x3C,0x29,0x4A,0xB4,0xB6,0x94,0xDD } }; };
template <> struct guid<Windows::UI::StartScreen::ISecondaryTileFactory>{ static constexpr GUID value{ 0x57F52CA0,0x51BC,0x4ABF,{ 0x8E,0xBF,0x62,0x7A,0x03,0x98,0xB0,0x5A } }; };
template <> struct guid<Windows::UI::StartScreen::ISecondaryTileFactory2>{ static constexpr GUID value{ 0x274B8A3B,0x522D,0x448E,{ 0x9E,0xB2,0xD0,0x67,0x2A,0xB3,0x45,0xC8 } }; };
template <> struct guid<Windows::UI::StartScreen::ISecondaryTileStatics>{ static constexpr GUID value{ 0x99908DAE,0xD051,0x4676,{ 0x87,0xFE,0x9E,0xC2,0x42,0xD8,0x3C,0x74 } }; };
template <> struct guid<Windows::UI::StartScreen::ISecondaryTileVisualElements>{ static constexpr GUID value{ 0x1D8DF333,0x815E,0x413F,{ 0x9F,0x50,0xA8,0x1D,0xA7,0x0A,0x96,0xB2 } }; };
template <> struct guid<Windows::UI::StartScreen::ISecondaryTileVisualElements2>{ static constexpr GUID value{ 0xFD2E31D0,0x57DC,0x4794,{ 0x8E,0xCF,0x56,0x82,0xF5,0xF3,0xE6,0xEF } }; };
template <> struct guid<Windows::UI::StartScreen::ISecondaryTileVisualElements3>{ static constexpr GUID value{ 0x56B55AD6,0xD15C,0x40F4,{ 0x81,0xE7,0x57,0xFF,0xD8,0xF8,0xA4,0xE9 } }; };
template <> struct guid<Windows::UI::StartScreen::ISecondaryTileVisualElements4>{ static constexpr GUID value{ 0x66566117,0xB544,0x40D2,{ 0x8D,0x12,0x74,0xD4,0xEC,0x24,0xD0,0x4C } }; };
template <> struct guid<Windows::UI::StartScreen::IStartScreenManager>{ static constexpr GUID value{ 0x4A1DCBCB,0x26E9,0x4EB4,{ 0x89,0x33,0x85,0x9E,0xB6,0xEC,0xDB,0x29 } }; };
template <> struct guid<Windows::UI::StartScreen::IStartScreenManagerStatics>{ static constexpr GUID value{ 0x7865EF0F,0xB585,0x464E,{ 0x89,0x93,0x34,0xE8,0xF8,0x73,0x8D,0x48 } }; };
template <> struct guid<Windows::UI::StartScreen::ITileMixedRealityModel>{ static constexpr GUID value{ 0xB0764E5B,0x887D,0x4242,{ 0x9A,0x19,0x3D,0x0A,0x4E,0xA7,0x80,0x31 } }; };
template <> struct guid<Windows::UI::StartScreen::ITileMixedRealityModel2>{ static constexpr GUID value{ 0x439470B2,0xD7C5,0x410B,{ 0x83,0x19,0x94,0x86,0xA2,0x7B,0x6C,0x67 } }; };
template <> struct guid<Windows::UI::StartScreen::IVisualElementsRequest>{ static constexpr GUID value{ 0xC138333A,0x9308,0x4072,{ 0x88,0xCC,0xD0,0x68,0xDB,0x34,0x7C,0x68 } }; };
template <> struct guid<Windows::UI::StartScreen::IVisualElementsRequestDeferral>{ static constexpr GUID value{ 0xA1656EB0,0x0126,0x4357,{ 0x82,0x04,0xBD,0x82,0xBB,0x2A,0x04,0x6D } }; };
template <> struct guid<Windows::UI::StartScreen::IVisualElementsRequestedEventArgs>{ static constexpr GUID value{ 0x7B6FC982,0x3A0D,0x4ECE,{ 0xAF,0x96,0xCD,0x17,0xE1,0xB0,0x0B,0x2D } }; };
template <> struct default_interface<Windows::UI::StartScreen::JumpList>{ using type = Windows::UI::StartScreen::IJumpList; };
template <> struct default_interface<Windows::UI::StartScreen::JumpListItem>{ using type = Windows::UI::StartScreen::IJumpListItem; };
template <> struct default_interface<Windows::UI::StartScreen::SecondaryTile>{ using type = Windows::UI::StartScreen::ISecondaryTile; };
template <> struct default_interface<Windows::UI::StartScreen::SecondaryTileVisualElements>{ using type = Windows::UI::StartScreen::ISecondaryTileVisualElements; };
template <> struct default_interface<Windows::UI::StartScreen::StartScreenManager>{ using type = Windows::UI::StartScreen::IStartScreenManager; };
template <> struct default_interface<Windows::UI::StartScreen::TileMixedRealityModel>{ using type = Windows::UI::StartScreen::ITileMixedRealityModel; };
template <> struct default_interface<Windows::UI::StartScreen::VisualElementsRequest>{ using type = Windows::UI::StartScreen::IVisualElementsRequest; };
template <> struct default_interface<Windows::UI::StartScreen::VisualElementsRequestDeferral>{ using type = Windows::UI::StartScreen::IVisualElementsRequestDeferral; };
template <> struct default_interface<Windows::UI::StartScreen::VisualElementsRequestedEventArgs>{ using type = Windows::UI::StartScreen::IVisualElementsRequestedEventArgs; };

template <typename D>
struct consume_Windows_UI_StartScreen_IJumpList
{
    Windows::Foundation::Collections::IVector<Windows::UI::StartScreen::JumpListItem> Items() const;
    Windows::UI::StartScreen::JumpListSystemGroupKind SystemGroupKind() const;
    void SystemGroupKind(Windows::UI::StartScreen::JumpListSystemGroupKind const& value) const;
    Windows::Foundation::IAsyncAction SaveAsync() const;
};
template <> struct consume<Windows::UI::StartScreen::IJumpList> { template <typename D> using type = consume_Windows_UI_StartScreen_IJumpList<D>; };

template <typename D>
struct consume_Windows_UI_StartScreen_IJumpListItem
{
    Windows::UI::StartScreen::JumpListItemKind Kind() const;
    hstring Arguments() const;
    bool RemovedByUser() const;
    hstring Description() const;
    void Description(param::hstring const& value) const;
    hstring DisplayName() const;
    void DisplayName(param::hstring const& value) const;
    hstring GroupName() const;
    void GroupName(param::hstring const& value) const;
    Windows::Foundation::Uri Logo() const;
    void Logo(Windows::Foundation::Uri const& value) const;
};
template <> struct consume<Windows::UI::StartScreen::IJumpListItem> { template <typename D> using type = consume_Windows_UI_StartScreen_IJumpListItem<D>; };

template <typename D>
struct consume_Windows_UI_StartScreen_IJumpListItemStatics
{
    Windows::UI::StartScreen::JumpListItem CreateWithArguments(param::hstring const& arguments, param::hstring const& displayName) const;
    Windows::UI::StartScreen::JumpListItem CreateSeparator() const;
};
template <> struct consume<Windows::UI::StartScreen::IJumpListItemStatics> { template <typename D> using type = consume_Windows_UI_StartScreen_IJumpListItemStatics<D>; };

template <typename D>
struct consume_Windows_UI_StartScreen_IJumpListStatics
{
    Windows::Foundation::IAsyncOperation<Windows::UI::StartScreen::JumpList> LoadCurrentAsync() const;
    bool IsSupported() const;
};
template <> struct consume<Windows::UI::StartScreen::IJumpListStatics> { template <typename D> using type = consume_Windows_UI_StartScreen_IJumpListStatics<D>; };

template <typename D>
struct consume_Windows_UI_StartScreen_ISecondaryTile
{
    void TileId(param::hstring const& value) const;
    hstring TileId() const;
    void Arguments(param::hstring const& value) const;
    hstring Arguments() const;
    [[deprecated("ShortName may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayName.")]] void ShortName(param::hstring const& value) const;
    [[deprecated("ShortName may be altered or unavailable for releases after Windows 8.1. Instead, use DisplayName.")]] hstring ShortName() const;
    void DisplayName(param::hstring const& value) const;
    hstring DisplayName() const;
    [[deprecated("Logo may be altered or unavailable for releases after Windows 8.1. Instead, use VisualElements.Square150x150Logo.")]] void Logo(Windows::Foundation::Uri const& value) const;
    [[deprecated("Logo may be altered or unavailable for releases after Windows 8.1. Instead, use VisualElements.Square150x150Logo.")]] Windows::Foundation::Uri Logo() const;
    [[deprecated("SmallLogo may be altered or unavailable for releases after Windows 8.1. Instead, use VisualElements.Square30x30Logo.")]] void SmallLogo(Windows::Foundation::Uri const& value) const;
    [[deprecated("SmallLogo may be altered or unavailable for releases after Windows 8.1. Instead, use VisualElements.Square30x30Logo.")]] Windows::Foundation::Uri SmallLogo() const;
    [[deprecated("WideLogo may be altered or unavailable for releases after Windows 8.1. Instead, use VisualElements.Wide310x150Logo.")]] void WideLogo(Windows::Foundation::Uri const& value) const;
    [[deprecated("WideLogo may be altered or unavailable for releases after Windows 8.1. Instead, use VisualElements.Wide310x150Logo.")]] Windows::Foundation::Uri WideLogo() const;
    void LockScreenBadgeLogo(Windows::Foundation::Uri const& value) const;
    Windows::Foundation::Uri LockScreenBadgeLogo() const;
    void LockScreenDisplayBadgeAndTileText(bool value) const;
    bool LockScreenDisplayBadgeAndTileText() const;
    [[deprecated("TileOptions may be altered or unavailable for releases after Windows 8.1. Instead, use VisualElements.ShowNameOnSquare150x150Logo, VisualElements.ShowNameOnWide310x150Logo, and RoamingEnabled.")]] void TileOptions(Windows::UI::StartScreen::TileOptions const& value) const;
    [[deprecated("TileOptions may be altered or unavailable for releases after Windows 8.1. Instead, use VisualElements.ShowNameOnSquare150x150Logo, VisualElements.ShowNameOnWide310x150Logo, and RoamingEnabled.")]] Windows::UI::StartScreen::TileOptions TileOptions() const;
    [[deprecated("TileOptions may be altered or unavailable for releases after Windows 8.1. Instead, use VisualElements.ShowNameOnSquare150x150Logo, VisualElements.ShowNameOnWide310x150Logo, and RoamingEnabled.")]] void ForegroundText(Windows::UI::StartScreen::ForegroundText const& value) const;
    [[deprecated("ForegroundText may be altered or unavailable for releases after Windows 8.1. Instead, use VisualElements.ForegroundText.")]] Windows::UI::StartScreen::ForegroundText ForegroundText() const;
    [[deprecated("BackgroundColor may be altered or unavailable for releases after Windows 8.1. Instead, use VisualElements.BackgroundColor.")]] void BackgroundColor(Windows::UI::Color const& value) const;
    [[deprecated("BackgroundColor may be altered or unavailable for releases after Windows 8.1. Instead, use VisualElements.BackgroundColor.")]] Windows::UI::Color BackgroundColor() const;
    Windows::Foundation::IAsyncOperation<bool> RequestCreateAsync() const;
    Windows::Foundation::IAsyncOperation<bool> RequestCreateAsync(Windows::Foundation::Point const& invocationPoint) const;
    Windows::Foundation::IAsyncOperation<bool> RequestCreateForSelectionAsync(Windows::Foundation::Rect const& selection) const;
    Windows::Foundation::IAsyncOperation<bool> RequestCreateForSelectionAsync(Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement) const;
    Windows::Foundation::IAsyncOperation<bool> RequestDeleteAsync() const;
    Windows::Foundation::IAsyncOperation<bool> RequestDeleteAsync(Windows::Foundation::Point const& invocationPoint) const;
    Windows::Foundation::IAsyncOperation<bool> RequestDeleteForSelectionAsync(Windows::Foundation::Rect const& selection) const;
    Windows::Foundation::IAsyncOperation<bool> RequestDeleteForSelectionAsync(Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement) const;
    Windows::Foundation::IAsyncOperation<bool> UpdateAsync() const;
};
template <> struct consume<Windows::UI::StartScreen::ISecondaryTile> { template <typename D> using type = consume_Windows_UI_StartScreen_ISecondaryTile<D>; };

template <typename D>
struct consume_Windows_UI_StartScreen_ISecondaryTile2
{
    void PhoneticName(param::hstring const& value) const;
    hstring PhoneticName() const;
    Windows::UI::StartScreen::SecondaryTileVisualElements VisualElements() const;
    void RoamingEnabled(bool value) const;
    bool RoamingEnabled() const;
    event_token VisualElementsRequested(Windows::Foundation::TypedEventHandler<Windows::UI::StartScreen::SecondaryTile, Windows::UI::StartScreen::VisualElementsRequestedEventArgs> const& handler) const;
    using VisualElementsRequested_revoker = event_revoker<Windows::UI::StartScreen::ISecondaryTile2>;
    VisualElementsRequested_revoker VisualElementsRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::StartScreen::SecondaryTile, Windows::UI::StartScreen::VisualElementsRequestedEventArgs> const& handler) const;
    void VisualElementsRequested(event_token const& token) const;
};
template <> struct consume<Windows::UI::StartScreen::ISecondaryTile2> { template <typename D> using type = consume_Windows_UI_StartScreen_ISecondaryTile2<D>; };

template <typename D>
struct consume_Windows_UI_StartScreen_ISecondaryTileFactory
{
    [[deprecated("SecondaryTile(string, string, string, string, Windows.UI.StartScreen.TileOptions, Windows.Foundation.Uri) may be altered or unavailable for releases after Windows Phone 8.1. Instead, use SecondaryTile(string, string, string, Windows.Foundation.Uri, Windows.UI.StartScreen.TileSize).")]] Windows::UI::StartScreen::SecondaryTile CreateTile(param::hstring const& tileId, param::hstring const& shortName, param::hstring const& displayName, param::hstring const& arguments, Windows::UI::StartScreen::TileOptions const& tileOptions, Windows::Foundation::Uri const& logoReference) const;
    [[deprecated("SecondaryTile(string, string, string, string, Windows.UI.StartScreen.TileOptions, Windows.Foundation.Uri, Windows.Foundation.Uri) may be altered or unavailable for releases after Windows Phone 8.1. Instead, use SecondaryTile(string, string, string, Windows.Foundation.Uri, Windows.UI.StartScreen.TileSize).")]] Windows::UI::StartScreen::SecondaryTile CreateWideTile(param::hstring const& tileId, param::hstring const& shortName, param::hstring const& displayName, param::hstring const& arguments, Windows::UI::StartScreen::TileOptions const& tileOptions, Windows::Foundation::Uri const& logoReference, Windows::Foundation::Uri const& wideLogoReference) const;
    Windows::UI::StartScreen::SecondaryTile CreateWithId(param::hstring const& tileId) const;
};
template <> struct consume<Windows::UI::StartScreen::ISecondaryTileFactory> { template <typename D> using type = consume_Windows_UI_StartScreen_ISecondaryTileFactory<D>; };

template <typename D>
struct consume_Windows_UI_StartScreen_ISecondaryTileFactory2
{
    Windows::UI::StartScreen::SecondaryTile CreateMinimalTile(param::hstring const& tileId, param::hstring const& displayName, param::hstring const& arguments, Windows::Foundation::Uri const& square150x150Logo, Windows::UI::StartScreen::TileSize const& desiredSize) const;
};
template <> struct consume<Windows::UI::StartScreen::ISecondaryTileFactory2> { template <typename D> using type = consume_Windows_UI_StartScreen_ISecondaryTileFactory2<D>; };

template <typename D>
struct consume_Windows_UI_StartScreen_ISecondaryTileStatics
{
    bool Exists(param::hstring const& tileId) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::UI::StartScreen::SecondaryTile>> FindAllAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::UI::StartScreen::SecondaryTile>> FindAllAsync(param::hstring const& applicationId) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::UI::StartScreen::SecondaryTile>> FindAllForPackageAsync() const;
};
template <> struct consume<Windows::UI::StartScreen::ISecondaryTileStatics> { template <typename D> using type = consume_Windows_UI_StartScreen_ISecondaryTileStatics<D>; };

template <typename D>
struct consume_Windows_UI_StartScreen_ISecondaryTileVisualElements
{
    [[deprecated("SecondaryTileVisualElements.Square30x30Logo may be altered or unavailable for release after Windows 10.")]] void Square30x30Logo(Windows::Foundation::Uri const& value) const;
    [[deprecated("SecondaryTileVisualElements.Square30x30Logo may be altered or unavailable for release after Windows 10.")]] Windows::Foundation::Uri Square30x30Logo() const;
    [[deprecated("SecondaryTileVisualElements.Square70x70Logo may be altered or unavailable for release after Windows Phone 8.1.")]] void Square70x70Logo(Windows::Foundation::Uri const& value) const;
    [[deprecated("SecondaryTileVisualElements.Square70x70Logo may be altered or unavailable for release after Windows Phone 8.1.")]] Windows::Foundation::Uri Square70x70Logo() const;
    void Square150x150Logo(Windows::Foundation::Uri const& value) const;
    Windows::Foundation::Uri Square150x150Logo() const;
    void Wide310x150Logo(Windows::Foundation::Uri const& value) const;
    Windows::Foundation::Uri Wide310x150Logo() const;
    void Square310x310Logo(Windows::Foundation::Uri const& value) const;
    Windows::Foundation::Uri Square310x310Logo() const;
    void ForegroundText(Windows::UI::StartScreen::ForegroundText const& value) const;
    Windows::UI::StartScreen::ForegroundText ForegroundText() const;
    void BackgroundColor(Windows::UI::Color const& value) const;
    Windows::UI::Color BackgroundColor() const;
    void ShowNameOnSquare150x150Logo(bool value) const;
    bool ShowNameOnSquare150x150Logo() const;
    void ShowNameOnWide310x150Logo(bool value) const;
    bool ShowNameOnWide310x150Logo() const;
    void ShowNameOnSquare310x310Logo(bool value) const;
    bool ShowNameOnSquare310x310Logo() const;
};
template <> struct consume<Windows::UI::StartScreen::ISecondaryTileVisualElements> { template <typename D> using type = consume_Windows_UI_StartScreen_ISecondaryTileVisualElements<D>; };

template <typename D>
struct consume_Windows_UI_StartScreen_ISecondaryTileVisualElements2
{
    void Square71x71Logo(Windows::Foundation::Uri const& value) const;
    Windows::Foundation::Uri Square71x71Logo() const;
};
template <> struct consume<Windows::UI::StartScreen::ISecondaryTileVisualElements2> { template <typename D> using type = consume_Windows_UI_StartScreen_ISecondaryTileVisualElements2<D>; };

template <typename D>
struct consume_Windows_UI_StartScreen_ISecondaryTileVisualElements3
{
    void Square44x44Logo(Windows::Foundation::Uri const& value) const;
    Windows::Foundation::Uri Square44x44Logo() const;
};
template <> struct consume<Windows::UI::StartScreen::ISecondaryTileVisualElements3> { template <typename D> using type = consume_Windows_UI_StartScreen_ISecondaryTileVisualElements3<D>; };

template <typename D>
struct consume_Windows_UI_StartScreen_ISecondaryTileVisualElements4
{
    Windows::UI::StartScreen::TileMixedRealityModel MixedRealityModel() const;
};
template <> struct consume<Windows::UI::StartScreen::ISecondaryTileVisualElements4> { template <typename D> using type = consume_Windows_UI_StartScreen_ISecondaryTileVisualElements4<D>; };

template <typename D>
struct consume_Windows_UI_StartScreen_IStartScreenManager
{
    Windows::System::User User() const;
    bool SupportsAppListEntry(Windows::ApplicationModel::Core::AppListEntry const& appListEntry) const;
    Windows::Foundation::IAsyncOperation<bool> ContainsAppListEntryAsync(Windows::ApplicationModel::Core::AppListEntry const& appListEntry) const;
    Windows::Foundation::IAsyncOperation<bool> RequestAddAppListEntryAsync(Windows::ApplicationModel::Core::AppListEntry const& appListEntry) const;
};
template <> struct consume<Windows::UI::StartScreen::IStartScreenManager> { template <typename D> using type = consume_Windows_UI_StartScreen_IStartScreenManager<D>; };

template <typename D>
struct consume_Windows_UI_StartScreen_IStartScreenManagerStatics
{
    Windows::UI::StartScreen::StartScreenManager GetDefault() const;
    Windows::UI::StartScreen::StartScreenManager GetForUser(Windows::System::User const& user) const;
};
template <> struct consume<Windows::UI::StartScreen::IStartScreenManagerStatics> { template <typename D> using type = consume_Windows_UI_StartScreen_IStartScreenManagerStatics<D>; };

template <typename D>
struct consume_Windows_UI_StartScreen_ITileMixedRealityModel
{
    void Uri(Windows::Foundation::Uri const& value) const;
    Windows::Foundation::Uri Uri() const;
    void BoundingBox(optional<Windows::Perception::Spatial::SpatialBoundingBox> const& value) const;
    Windows::Foundation::IReference<Windows::Perception::Spatial::SpatialBoundingBox> BoundingBox() const;
};
template <> struct consume<Windows::UI::StartScreen::ITileMixedRealityModel> { template <typename D> using type = consume_Windows_UI_StartScreen_ITileMixedRealityModel<D>; };

template <typename D>
struct consume_Windows_UI_StartScreen_ITileMixedRealityModel2
{
    void ActivationBehavior(Windows::UI::StartScreen::TileMixedRealityModelActivationBehavior const& value) const;
    Windows::UI::StartScreen::TileMixedRealityModelActivationBehavior ActivationBehavior() const;
};
template <> struct consume<Windows::UI::StartScreen::ITileMixedRealityModel2> { template <typename D> using type = consume_Windows_UI_StartScreen_ITileMixedRealityModel2<D>; };

template <typename D>
struct consume_Windows_UI_StartScreen_IVisualElementsRequest
{
    Windows::UI::StartScreen::SecondaryTileVisualElements VisualElements() const;
    Windows::Foundation::Collections::IVectorView<Windows::UI::StartScreen::SecondaryTileVisualElements> AlternateVisualElements() const;
    Windows::Foundation::DateTime Deadline() const;
    Windows::UI::StartScreen::VisualElementsRequestDeferral GetDeferral() const;
};
template <> struct consume<Windows::UI::StartScreen::IVisualElementsRequest> { template <typename D> using type = consume_Windows_UI_StartScreen_IVisualElementsRequest<D>; };

template <typename D>
struct consume_Windows_UI_StartScreen_IVisualElementsRequestDeferral
{
    void Complete() const;
};
template <> struct consume<Windows::UI::StartScreen::IVisualElementsRequestDeferral> { template <typename D> using type = consume_Windows_UI_StartScreen_IVisualElementsRequestDeferral<D>; };

template <typename D>
struct consume_Windows_UI_StartScreen_IVisualElementsRequestedEventArgs
{
    Windows::UI::StartScreen::VisualElementsRequest Request() const;
};
template <> struct consume<Windows::UI::StartScreen::IVisualElementsRequestedEventArgs> { template <typename D> using type = consume_Windows_UI_StartScreen_IVisualElementsRequestedEventArgs<D>; };

template <> struct abi<Windows::UI::StartScreen::IJumpList>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_Items(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_SystemGroupKind(Windows::UI::StartScreen::JumpListSystemGroupKind* value) noexcept = 0;
    virtual HRESULT __stdcall put_SystemGroupKind(Windows::UI::StartScreen::JumpListSystemGroupKind value) noexcept = 0;
    virtual HRESULT __stdcall SaveAsync(void** result) noexcept = 0;
};};

template <> struct abi<Windows::UI::StartScreen::IJumpListItem>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_Kind(Windows::UI::StartScreen::JumpListItemKind* value) noexcept = 0;
    virtual HRESULT __stdcall get_Arguments(HSTRING* value) noexcept = 0;
    virtual HRESULT __stdcall get_RemovedByUser(bool* value) noexcept = 0;
    virtual HRESULT __stdcall get_Description(HSTRING* value) noexcept = 0;
    virtual HRESULT __stdcall put_Description(HSTRING value) noexcept = 0;
    virtual HRESULT __stdcall get_DisplayName(HSTRING* value) noexcept = 0;
    virtual HRESULT __stdcall put_DisplayName(HSTRING value) noexcept = 0;
    virtual HRESULT __stdcall get_GroupName(HSTRING* value) noexcept = 0;
    virtual HRESULT __stdcall put_GroupName(HSTRING value) noexcept = 0;
    virtual HRESULT __stdcall get_Logo(void** value) noexcept = 0;
    virtual HRESULT __stdcall put_Logo(void* value) noexcept = 0;
};};

template <> struct abi<Windows::UI::StartScreen::IJumpListItemStatics>{ struct type : IInspectable
{
    virtual HRESULT __stdcall CreateWithArguments(HSTRING arguments, HSTRING displayName, void** result) noexcept = 0;
    virtual HRESULT __stdcall CreateSeparator(void** result) noexcept = 0;
};};

template <> struct abi<Windows::UI::StartScreen::IJumpListStatics>{ struct type : IInspectable
{
    virtual HRESULT __stdcall LoadCurrentAsync(void** result) noexcept = 0;
    virtual HRESULT __stdcall IsSupported(bool* result) noexcept = 0;
};};

template <> struct abi<Windows::UI::StartScreen::ISecondaryTile>{ struct type : IInspectable
{
    virtual HRESULT __stdcall put_TileId(HSTRING value) noexcept = 0;
    virtual HRESULT __stdcall get_TileId(HSTRING* value) noexcept = 0;
    virtual HRESULT __stdcall put_Arguments(HSTRING value) noexcept = 0;
    virtual HRESULT __stdcall get_Arguments(HSTRING* value) noexcept = 0;
    virtual HRESULT __stdcall put_ShortName(HSTRING value) noexcept = 0;
    virtual HRESULT __stdcall get_ShortName(HSTRING* value) noexcept = 0;
    virtual HRESULT __stdcall put_DisplayName(HSTRING value) noexcept = 0;
    virtual HRESULT __stdcall get_DisplayName(HSTRING* value) noexcept = 0;
    virtual HRESULT __stdcall put_Logo(void* value) noexcept = 0;
    virtual HRESULT __stdcall get_Logo(void** value) noexcept = 0;
    virtual HRESULT __stdcall put_SmallLogo(void* value) noexcept = 0;
    virtual HRESULT __stdcall get_SmallLogo(void** value) noexcept = 0;
    virtual HRESULT __stdcall put_WideLogo(void* value) noexcept = 0;
    virtual HRESULT __stdcall get_WideLogo(void** value) noexcept = 0;
    virtual HRESULT __stdcall put_LockScreenBadgeLogo(void* value) noexcept = 0;
    virtual HRESULT __stdcall get_LockScreenBadgeLogo(void** value) noexcept = 0;
    virtual HRESULT __stdcall put_LockScreenDisplayBadgeAndTileText(bool value) noexcept = 0;
    virtual HRESULT __stdcall get_LockScreenDisplayBadgeAndTileText(bool* value) noexcept = 0;
    virtual HRESULT __stdcall put_TileOptions(Windows::UI::StartScreen::TileOptions value) noexcept = 0;
    virtual HRESULT __stdcall get_TileOptions(Windows::UI::StartScreen::TileOptions* value) noexcept = 0;
    virtual HRESULT __stdcall put_ForegroundText(Windows::UI::StartScreen::ForegroundText value) noexcept = 0;
    virtual HRESULT __stdcall get_ForegroundText(Windows::UI::StartScreen::ForegroundText* value) noexcept = 0;
    virtual HRESULT __stdcall put_BackgroundColor(struct struct_Windows_UI_Color value) noexcept = 0;
    virtual HRESULT __stdcall get_BackgroundColor(struct struct_Windows_UI_Color* value) noexcept = 0;
    virtual HRESULT __stdcall RequestCreateAsync(void** operation) noexcept = 0;
    virtual HRESULT __stdcall RequestCreateAsyncWithPoint(Windows::Foundation::Point invocationPoint, void** operation) noexcept = 0;
    virtual HRESULT __stdcall RequestCreateAsyncWithRect(Windows::Foundation::Rect selection, void** operation) noexcept = 0;
    virtual HRESULT __stdcall RequestCreateAsyncWithRectAndPlacement(Windows::Foundation::Rect selection, Windows::UI::Popups::Placement preferredPlacement, void** operation) noexcept = 0;
    virtual HRESULT __stdcall RequestDeleteAsync(void** operation) noexcept = 0;
    virtual HRESULT __stdcall RequestDeleteAsyncWithPoint(Windows::Foundation::Point invocationPoint, void** operation) noexcept = 0;
    virtual HRESULT __stdcall RequestDeleteAsyncWithRect(Windows::Foundation::Rect selection, void** operation) noexcept = 0;
    virtual HRESULT __stdcall RequestDeleteAsyncWithRectAndPlacement(Windows::Foundation::Rect selection, Windows::UI::Popups::Placement preferredPlacement, void** operation) noexcept = 0;
    virtual HRESULT __stdcall UpdateAsync(void** operation) noexcept = 0;
};};

template <> struct abi<Windows::UI::StartScreen::ISecondaryTile2>{ struct type : IInspectable
{
    virtual HRESULT __stdcall put_PhoneticName(HSTRING value) noexcept = 0;
    virtual HRESULT __stdcall get_PhoneticName(HSTRING* value) noexcept = 0;
    virtual HRESULT __stdcall get_VisualElements(void** value) noexcept = 0;
    virtual HRESULT __stdcall put_RoamingEnabled(bool value) noexcept = 0;
    virtual HRESULT __stdcall get_RoamingEnabled(bool* value) noexcept = 0;
    virtual HRESULT __stdcall add_VisualElementsRequested(void* handler, event_token* token) noexcept = 0;
    virtual HRESULT __stdcall remove_VisualElementsRequested(event_token token) noexcept = 0;
};};

template <> struct abi<Windows::UI::StartScreen::ISecondaryTileFactory>{ struct type : IInspectable
{
    virtual HRESULT __stdcall CreateTile(HSTRING tileId, HSTRING shortName, HSTRING displayName, HSTRING arguments, Windows::UI::StartScreen::TileOptions tileOptions, void* logoReference, void** value) noexcept = 0;
    virtual HRESULT __stdcall CreateWideTile(HSTRING tileId, HSTRING shortName, HSTRING displayName, HSTRING arguments, Windows::UI::StartScreen::TileOptions tileOptions, void* logoReference, void* wideLogoReference, void** value) noexcept = 0;
    virtual HRESULT __stdcall CreateWithId(HSTRING tileId, void** value) noexcept = 0;
};};

template <> struct abi<Windows::UI::StartScreen::ISecondaryTileFactory2>{ struct type : IInspectable
{
    virtual HRESULT __stdcall CreateMinimalTile(HSTRING tileId, HSTRING displayName, HSTRING arguments, void* square150x150Logo, Windows::UI::StartScreen::TileSize desiredSize, void** value) noexcept = 0;
};};

template <> struct abi<Windows::UI::StartScreen::ISecondaryTileStatics>{ struct type : IInspectable
{
    virtual HRESULT __stdcall Exists(HSTRING tileId, bool* exists) noexcept = 0;
    virtual HRESULT __stdcall FindAllAsync(void** operation) noexcept = 0;
    virtual HRESULT __stdcall FindAllForApplicationAsync(HSTRING applicationId, void** operation) noexcept = 0;
    virtual HRESULT __stdcall FindAllForPackageAsync(void** operation) noexcept = 0;
};};

template <> struct abi<Windows::UI::StartScreen::ISecondaryTileVisualElements>{ struct type : IInspectable
{
    virtual HRESULT __stdcall put_Square30x30Logo(void* value) noexcept = 0;
    virtual HRESULT __stdcall get_Square30x30Logo(void** value) noexcept = 0;
    virtual HRESULT __stdcall put_Square70x70Logo(void* value) noexcept = 0;
    virtual HRESULT __stdcall get_Square70x70Logo(void** value) noexcept = 0;
    virtual HRESULT __stdcall put_Square150x150Logo(void* value) noexcept = 0;
    virtual HRESULT __stdcall get_Square150x150Logo(void** value) noexcept = 0;
    virtual HRESULT __stdcall put_Wide310x150Logo(void* value) noexcept = 0;
    virtual HRESULT __stdcall get_Wide310x150Logo(void** value) noexcept = 0;
    virtual HRESULT __stdcall put_Square310x310Logo(void* value) noexcept = 0;
    virtual HRESULT __stdcall get_Square310x310Logo(void** value) noexcept = 0;
    virtual HRESULT __stdcall put_ForegroundText(Windows::UI::StartScreen::ForegroundText value) noexcept = 0;
    virtual HRESULT __stdcall get_ForegroundText(Windows::UI::StartScreen::ForegroundText* value) noexcept = 0;
    virtual HRESULT __stdcall put_BackgroundColor(struct struct_Windows_UI_Color value) noexcept = 0;
    virtual HRESULT __stdcall get_BackgroundColor(struct struct_Windows_UI_Color* value) noexcept = 0;
    virtual HRESULT __stdcall put_ShowNameOnSquare150x150Logo(bool value) noexcept = 0;
    virtual HRESULT __stdcall get_ShowNameOnSquare150x150Logo(bool* value) noexcept = 0;
    virtual HRESULT __stdcall put_ShowNameOnWide310x150Logo(bool value) noexcept = 0;
    virtual HRESULT __stdcall get_ShowNameOnWide310x150Logo(bool* value) noexcept = 0;
    virtual HRESULT __stdcall put_ShowNameOnSquare310x310Logo(bool value) noexcept = 0;
    virtual HRESULT __stdcall get_ShowNameOnSquare310x310Logo(bool* value) noexcept = 0;
};};

template <> struct abi<Windows::UI::StartScreen::ISecondaryTileVisualElements2>{ struct type : IInspectable
{
    virtual HRESULT __stdcall put_Square71x71Logo(void* value) noexcept = 0;
    virtual HRESULT __stdcall get_Square71x71Logo(void** value) noexcept = 0;
};};

template <> struct abi<Windows::UI::StartScreen::ISecondaryTileVisualElements3>{ struct type : IInspectable
{
    virtual HRESULT __stdcall put_Square44x44Logo(void* value) noexcept = 0;
    virtual HRESULT __stdcall get_Square44x44Logo(void** value) noexcept = 0;
};};

template <> struct abi<Windows::UI::StartScreen::ISecondaryTileVisualElements4>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_MixedRealityModel(void** value) noexcept = 0;
};};

template <> struct abi<Windows::UI::StartScreen::IStartScreenManager>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_User(void** value) noexcept = 0;
    virtual HRESULT __stdcall SupportsAppListEntry(void* appListEntry, bool* result) noexcept = 0;
    virtual HRESULT __stdcall ContainsAppListEntryAsync(void* appListEntry, void** operation) noexcept = 0;
    virtual HRESULT __stdcall RequestAddAppListEntryAsync(void* appListEntry, void** operation) noexcept = 0;
};};

template <> struct abi<Windows::UI::StartScreen::IStartScreenManagerStatics>{ struct type : IInspectable
{
    virtual HRESULT __stdcall GetDefault(void** value) noexcept = 0;
    virtual HRESULT __stdcall GetForUser(void* user, void** result) noexcept = 0;
};};

template <> struct abi<Windows::UI::StartScreen::ITileMixedRealityModel>{ struct type : IInspectable
{
    virtual HRESULT __stdcall put_Uri(void* value) noexcept = 0;
    virtual HRESULT __stdcall get_Uri(void** value) noexcept = 0;
    virtual HRESULT __stdcall put_BoundingBox(void* value) noexcept = 0;
    virtual HRESULT __stdcall get_BoundingBox(void** value) noexcept = 0;
};};

template <> struct abi<Windows::UI::StartScreen::ITileMixedRealityModel2>{ struct type : IInspectable
{
    virtual HRESULT __stdcall put_ActivationBehavior(Windows::UI::StartScreen::TileMixedRealityModelActivationBehavior value) noexcept = 0;
    virtual HRESULT __stdcall get_ActivationBehavior(Windows::UI::StartScreen::TileMixedRealityModelActivationBehavior* value) noexcept = 0;
};};

template <> struct abi<Windows::UI::StartScreen::IVisualElementsRequest>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_VisualElements(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_AlternateVisualElements(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_Deadline(Windows::Foundation::DateTime* value) noexcept = 0;
    virtual HRESULT __stdcall GetDeferral(void** deferral) noexcept = 0;
};};

template <> struct abi<Windows::UI::StartScreen::IVisualElementsRequestDeferral>{ struct type : IInspectable
{
    virtual HRESULT __stdcall Complete() noexcept = 0;
};};

template <> struct abi<Windows::UI::StartScreen::IVisualElementsRequestedEventArgs>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_Request(void** value) noexcept = 0;
};};

}
