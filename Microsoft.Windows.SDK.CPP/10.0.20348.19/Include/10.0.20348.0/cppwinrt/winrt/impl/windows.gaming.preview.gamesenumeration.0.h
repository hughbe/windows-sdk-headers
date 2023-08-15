// C++/WinRT v2.0.200609.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Gaming_Preview_GamesEnumeration_0_H
#define WINRT_Windows_Gaming_Preview_GamesEnumeration_0_H
WINRT_EXPORT namespace winrt::Windows::ApplicationModel
{
    struct AppDisplayInfo;
}
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    struct IAsyncAction;
    template <typename TResult> struct __declspec(empty_bases) IAsyncOperation;
    template <typename T> struct __declspec(empty_bases) IReference;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    template <typename K, typename V> struct __declspec(empty_bases) IMapView;
    template <typename T> struct __declspec(empty_bases) IVectorView;
    template <typename T> struct __declspec(empty_bases) IVector;
}
WINRT_EXPORT namespace winrt::Windows::Storage
{
    struct IStorageFile;
}
WINRT_EXPORT namespace winrt::Windows::Gaming::Preview::GamesEnumeration
{
    enum class GameListCategory : int32_t
    {
        Candidate = 0,
        ConfirmedBySystem = 1,
        ConfirmedByUser = 2,
    };
    enum class GameListEntryLaunchableState : int32_t
    {
        NotLaunchable = 0,
        ByLastRunningFullPath = 1,
        ByUserProvidedPath = 2,
        ByTile = 3,
    };
    struct IGameListEntry;
    struct IGameListEntry2;
    struct IGameListStatics;
    struct IGameListStatics2;
    struct IGameModeConfiguration;
    struct IGameModeUserConfiguration;
    struct IGameModeUserConfigurationStatics;
    struct GameList;
    struct GameListEntry;
    struct GameModeConfiguration;
    struct GameModeUserConfiguration;
    struct GameListChangedEventHandler;
    struct GameListRemovedEventHandler;
}
namespace winrt::impl
{
    template <> struct category<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry>{ using type = interface_category; };
    template <> struct category<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2>{ using type = interface_category; };
    template <> struct category<Windows::Gaming::Preview::GamesEnumeration::IGameListStatics>{ using type = interface_category; };
    template <> struct category<Windows::Gaming::Preview::GamesEnumeration::IGameListStatics2>{ using type = interface_category; };
    template <> struct category<Windows::Gaming::Preview::GamesEnumeration::IGameModeConfiguration>{ using type = interface_category; };
    template <> struct category<Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration>{ using type = interface_category; };
    template <> struct category<Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfigurationStatics>{ using type = interface_category; };
    template <> struct category<Windows::Gaming::Preview::GamesEnumeration::GameList>{ using type = class_category; };
    template <> struct category<Windows::Gaming::Preview::GamesEnumeration::GameListEntry>{ using type = class_category; };
    template <> struct category<Windows::Gaming::Preview::GamesEnumeration::GameModeConfiguration>{ using type = class_category; };
    template <> struct category<Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfiguration>{ using type = class_category; };
    template <> struct category<Windows::Gaming::Preview::GamesEnumeration::GameListCategory>{ using type = enum_category; };
    template <> struct category<Windows::Gaming::Preview::GamesEnumeration::GameListEntryLaunchableState>{ using type = enum_category; };
    template <> struct category<Windows::Gaming::Preview::GamesEnumeration::GameListChangedEventHandler>{ using type = delegate_category; };
    template <> struct category<Windows::Gaming::Preview::GamesEnumeration::GameListRemovedEventHandler>{ using type = delegate_category; };
    template <> inline constexpr auto& name_v<Windows::Gaming::Preview::GamesEnumeration::GameList> = L"Windows.Gaming.Preview.GamesEnumeration.GameList";
    template <> inline constexpr auto& name_v<Windows::Gaming::Preview::GamesEnumeration::GameListEntry> = L"Windows.Gaming.Preview.GamesEnumeration.GameListEntry";
    template <> inline constexpr auto& name_v<Windows::Gaming::Preview::GamesEnumeration::GameModeConfiguration> = L"Windows.Gaming.Preview.GamesEnumeration.GameModeConfiguration";
    template <> inline constexpr auto& name_v<Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfiguration> = L"Windows.Gaming.Preview.GamesEnumeration.GameModeUserConfiguration";
    template <> inline constexpr auto& name_v<Windows::Gaming::Preview::GamesEnumeration::GameListCategory> = L"Windows.Gaming.Preview.GamesEnumeration.GameListCategory";
    template <> inline constexpr auto& name_v<Windows::Gaming::Preview::GamesEnumeration::GameListEntryLaunchableState> = L"Windows.Gaming.Preview.GamesEnumeration.GameListEntryLaunchableState";
    template <> inline constexpr auto& name_v<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry> = L"Windows.Gaming.Preview.GamesEnumeration.IGameListEntry";
    template <> inline constexpr auto& name_v<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2> = L"Windows.Gaming.Preview.GamesEnumeration.IGameListEntry2";
    template <> inline constexpr auto& name_v<Windows::Gaming::Preview::GamesEnumeration::IGameListStatics> = L"Windows.Gaming.Preview.GamesEnumeration.IGameListStatics";
    template <> inline constexpr auto& name_v<Windows::Gaming::Preview::GamesEnumeration::IGameListStatics2> = L"Windows.Gaming.Preview.GamesEnumeration.IGameListStatics2";
    template <> inline constexpr auto& name_v<Windows::Gaming::Preview::GamesEnumeration::IGameModeConfiguration> = L"Windows.Gaming.Preview.GamesEnumeration.IGameModeConfiguration";
    template <> inline constexpr auto& name_v<Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration> = L"Windows.Gaming.Preview.GamesEnumeration.IGameModeUserConfiguration";
    template <> inline constexpr auto& name_v<Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfigurationStatics> = L"Windows.Gaming.Preview.GamesEnumeration.IGameModeUserConfigurationStatics";
    template <> inline constexpr auto& name_v<Windows::Gaming::Preview::GamesEnumeration::GameListChangedEventHandler> = L"Windows.Gaming.Preview.GamesEnumeration.GameListChangedEventHandler";
    template <> inline constexpr auto& name_v<Windows::Gaming::Preview::GamesEnumeration::GameListRemovedEventHandler> = L"Windows.Gaming.Preview.GamesEnumeration.GameListRemovedEventHandler";
    template <> inline constexpr guid guid_v<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry>{ 0x735924D3,0x811F,0x4494,{ 0xB6,0x9C,0xC6,0x41,0xA0,0xC6,0x15,0x43 } }; // 735924D3-811F-4494-B69C-C641A0C61543
    template <> inline constexpr guid guid_v<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2>{ 0xD84A8F8B,0x8749,0x4A25,{ 0x90,0xD3,0xF6,0xC5,0xA4,0x27,0x88,0x6D } }; // D84A8F8B-8749-4A25-90D3-F6C5A427886D
    template <> inline constexpr guid guid_v<Windows::Gaming::Preview::GamesEnumeration::IGameListStatics>{ 0x2DDD0F6F,0x9C66,0x4B05,{ 0x94,0x5C,0xD6,0xED,0x78,0x49,0x1B,0x8C } }; // 2DDD0F6F-9C66-4B05-945C-D6ED78491B8C
    template <> inline constexpr guid guid_v<Windows::Gaming::Preview::GamesEnumeration::IGameListStatics2>{ 0x395F2098,0xEA1A,0x45AA,{ 0x92,0x68,0xA8,0x39,0x05,0x68,0x6F,0x27 } }; // 395F2098-EA1A-45AA-9268-A83905686F27
    template <> inline constexpr guid guid_v<Windows::Gaming::Preview::GamesEnumeration::IGameModeConfiguration>{ 0x78E591AF,0xB142,0x4EF0,{ 0x88,0x30,0x55,0xBC,0x2B,0xE4,0xF5,0xEA } }; // 78E591AF-B142-4EF0-8830-55BC2BE4F5EA
    template <> inline constexpr guid guid_v<Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration>{ 0x72D34AF4,0x756B,0x470F,{ 0xA0,0xC2,0xBA,0x62,0xA9,0x07,0x95,0xDB } }; // 72D34AF4-756B-470F-A0C2-BA62A90795DB
    template <> inline constexpr guid guid_v<Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfigurationStatics>{ 0x6E50D97C,0x66EA,0x478E,{ 0xA4,0xA1,0xF5,0x7C,0x0E,0x8D,0x00,0xE7 } }; // 6E50D97C-66EA-478E-A4A1-F57C0E8D00E7
    template <> inline constexpr guid guid_v<Windows::Gaming::Preview::GamesEnumeration::GameListChangedEventHandler>{ 0x25F6A421,0xD8F5,0x4D91,{ 0xB4,0x0E,0x53,0xD5,0xE8,0x6F,0xDE,0x64 } }; // 25F6A421-D8F5-4D91-B40E-53D5E86FDE64
    template <> inline constexpr guid guid_v<Windows::Gaming::Preview::GamesEnumeration::GameListRemovedEventHandler>{ 0x10C5648F,0x6C8F,0x4712,{ 0x9B,0x38,0x47,0x4B,0xC2,0x2E,0x76,0xD8 } }; // 10C5648F-6C8F-4712-9B38-474BC22E76D8
    template <> struct default_interface<Windows::Gaming::Preview::GamesEnumeration::GameListEntry>{ using type = Windows::Gaming::Preview::GamesEnumeration::IGameListEntry; };
    template <> struct default_interface<Windows::Gaming::Preview::GamesEnumeration::GameModeConfiguration>{ using type = Windows::Gaming::Preview::GamesEnumeration::IGameModeConfiguration; };
    template <> struct default_interface<Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfiguration>{ using type = Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration; };
    template <> struct abi<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DisplayInfo(void**) noexcept = 0;
            virtual int32_t __stdcall LaunchAsync(void**) noexcept = 0;
            virtual int32_t __stdcall get_Category(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Properties(void**) noexcept = 0;
            virtual int32_t __stdcall SetCategoryAsync(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_LaunchableState(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_LauncherExecutable(void**) noexcept = 0;
            virtual int32_t __stdcall get_LaunchParameters(void**) noexcept = 0;
            virtual int32_t __stdcall SetLauncherExecutableFileAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall SetLauncherExecutableFileWithParamsAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall get_TitleId(void**) noexcept = 0;
            virtual int32_t __stdcall SetTitleIdAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall get_GameModeConfiguration(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Gaming::Preview::GamesEnumeration::IGameListStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FindAllAsync(void**) noexcept = 0;
            virtual int32_t __stdcall FindAllAsyncPackageFamilyName(void*, void**) noexcept = 0;
            virtual int32_t __stdcall add_GameAdded(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_GameAdded(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_GameRemoved(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_GameRemoved(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_GameUpdated(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_GameUpdated(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Gaming::Preview::GamesEnumeration::IGameListStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall MergeEntriesAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall UnmergeEntryAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Gaming::Preview::GamesEnumeration::IGameModeConfiguration>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_RelatedProcessNames(void**) noexcept = 0;
            virtual int32_t __stdcall get_PercentGpuTimeAllocatedToGame(void**) noexcept = 0;
            virtual int32_t __stdcall put_PercentGpuTimeAllocatedToGame(void*) noexcept = 0;
            virtual int32_t __stdcall get_PercentGpuMemoryAllocatedToGame(void**) noexcept = 0;
            virtual int32_t __stdcall put_PercentGpuMemoryAllocatedToGame(void*) noexcept = 0;
            virtual int32_t __stdcall get_PercentGpuMemoryAllocatedToSystemCompositor(void**) noexcept = 0;
            virtual int32_t __stdcall put_PercentGpuMemoryAllocatedToSystemCompositor(void*) noexcept = 0;
            virtual int32_t __stdcall get_MaxCpuCount(void**) noexcept = 0;
            virtual int32_t __stdcall put_MaxCpuCount(void*) noexcept = 0;
            virtual int32_t __stdcall get_CpuExclusivityMaskLow(void**) noexcept = 0;
            virtual int32_t __stdcall put_CpuExclusivityMaskLow(void*) noexcept = 0;
            virtual int32_t __stdcall get_CpuExclusivityMaskHigh(void**) noexcept = 0;
            virtual int32_t __stdcall put_CpuExclusivityMaskHigh(void*) noexcept = 0;
            virtual int32_t __stdcall get_AffinitizeToExclusiveCpus(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AffinitizeToExclusiveCpus(bool) noexcept = 0;
            virtual int32_t __stdcall SaveAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_GamingRelatedProcessNames(void**) noexcept = 0;
            virtual int32_t __stdcall SaveAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfigurationStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDefault(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Gaming::Preview::GamesEnumeration::GameListChangedEventHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Gaming::Preview::GamesEnumeration::GameListRemovedEventHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Gaming_Preview_GamesEnumeration_IGameListEntry
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::AppDisplayInfo) DisplayInfo() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<bool>) LaunchAsync() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Gaming::Preview::GamesEnumeration::GameListCategory) Category() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable>) Properties() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) SetCategoryAsync(Windows::Gaming::Preview::GamesEnumeration::GameListCategory const& value) const;
    };
    template <> struct consume<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry>
    {
        template <typename D> using type = consume_Windows_Gaming_Preview_GamesEnumeration_IGameListEntry<D>;
    };
    template <typename D>
    struct consume_Windows_Gaming_Preview_GamesEnumeration_IGameListEntry2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Gaming::Preview::GamesEnumeration::GameListEntryLaunchableState) LaunchableState() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Storage::IStorageFile) LauncherExecutable() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) LaunchParameters() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) SetLauncherExecutableFileAsync(Windows::Storage::IStorageFile const& executableFile) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) SetLauncherExecutableFileAsync(Windows::Storage::IStorageFile const& executableFile, param::hstring const& launchParams) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) TitleId() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) SetTitleIdAsync(param::hstring const& id) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Gaming::Preview::GamesEnumeration::GameModeConfiguration) GameModeConfiguration() const;
    };
    template <> struct consume<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2>
    {
        template <typename D> using type = consume_Windows_Gaming_Preview_GamesEnumeration_IGameListEntry2<D>;
    };
    template <typename D>
    struct consume_Windows_Gaming_Preview_GamesEnumeration_IGameListStatics
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Gaming::Preview::GamesEnumeration::GameListEntry>>) FindAllAsync() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Gaming::Preview::GamesEnumeration::GameListEntry>>) FindAllAsync(param::hstring const& packageFamilyName) const;
        WINRT_IMPL_AUTO(winrt::event_token) GameAdded(Windows::Gaming::Preview::GamesEnumeration::GameListChangedEventHandler const& handler) const;
        using GameAdded_revoker = impl::event_revoker<Windows::Gaming::Preview::GamesEnumeration::IGameListStatics, &impl::abi_t<Windows::Gaming::Preview::GamesEnumeration::IGameListStatics>::remove_GameAdded>;
        [[nodiscard]] GameAdded_revoker GameAdded(auto_revoke_t, Windows::Gaming::Preview::GamesEnumeration::GameListChangedEventHandler const& handler) const;
        WINRT_IMPL_AUTO(void) GameAdded(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) GameRemoved(Windows::Gaming::Preview::GamesEnumeration::GameListRemovedEventHandler const& handler) const;
        using GameRemoved_revoker = impl::event_revoker<Windows::Gaming::Preview::GamesEnumeration::IGameListStatics, &impl::abi_t<Windows::Gaming::Preview::GamesEnumeration::IGameListStatics>::remove_GameRemoved>;
        [[nodiscard]] GameRemoved_revoker GameRemoved(auto_revoke_t, Windows::Gaming::Preview::GamesEnumeration::GameListRemovedEventHandler const& handler) const;
        WINRT_IMPL_AUTO(void) GameRemoved(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) GameUpdated(Windows::Gaming::Preview::GamesEnumeration::GameListChangedEventHandler const& handler) const;
        using GameUpdated_revoker = impl::event_revoker<Windows::Gaming::Preview::GamesEnumeration::IGameListStatics, &impl::abi_t<Windows::Gaming::Preview::GamesEnumeration::IGameListStatics>::remove_GameUpdated>;
        [[nodiscard]] GameUpdated_revoker GameUpdated(auto_revoke_t, Windows::Gaming::Preview::GamesEnumeration::GameListChangedEventHandler const& handler) const;
        WINRT_IMPL_AUTO(void) GameUpdated(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Gaming::Preview::GamesEnumeration::IGameListStatics>
    {
        template <typename D> using type = consume_Windows_Gaming_Preview_GamesEnumeration_IGameListStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Gaming_Preview_GamesEnumeration_IGameListStatics2
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Gaming::Preview::GamesEnumeration::GameListEntry>) MergeEntriesAsync(Windows::Gaming::Preview::GamesEnumeration::GameListEntry const& left, Windows::Gaming::Preview::GamesEnumeration::GameListEntry const& right) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Gaming::Preview::GamesEnumeration::GameListEntry>>) UnmergeEntryAsync(Windows::Gaming::Preview::GamesEnumeration::GameListEntry const& mergedEntry) const;
    };
    template <> struct consume<Windows::Gaming::Preview::GamesEnumeration::IGameListStatics2>
    {
        template <typename D> using type = consume_Windows_Gaming_Preview_GamesEnumeration_IGameListStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_Gaming_Preview_GamesEnumeration_IGameModeConfiguration
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsEnabled() const;
        WINRT_IMPL_AUTO(void) IsEnabled(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<hstring>) RelatedProcessNames() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<int32_t>) PercentGpuTimeAllocatedToGame() const;
        WINRT_IMPL_AUTO(void) PercentGpuTimeAllocatedToGame(Windows::Foundation::IReference<int32_t> const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<int32_t>) PercentGpuMemoryAllocatedToGame() const;
        WINRT_IMPL_AUTO(void) PercentGpuMemoryAllocatedToGame(Windows::Foundation::IReference<int32_t> const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<int32_t>) PercentGpuMemoryAllocatedToSystemCompositor() const;
        WINRT_IMPL_AUTO(void) PercentGpuMemoryAllocatedToSystemCompositor(Windows::Foundation::IReference<int32_t> const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<int32_t>) MaxCpuCount() const;
        WINRT_IMPL_AUTO(void) MaxCpuCount(Windows::Foundation::IReference<int32_t> const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<int32_t>) CpuExclusivityMaskLow() const;
        WINRT_IMPL_AUTO(void) CpuExclusivityMaskLow(Windows::Foundation::IReference<int32_t> const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<int32_t>) CpuExclusivityMaskHigh() const;
        WINRT_IMPL_AUTO(void) CpuExclusivityMaskHigh(Windows::Foundation::IReference<int32_t> const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) AffinitizeToExclusiveCpus() const;
        WINRT_IMPL_AUTO(void) AffinitizeToExclusiveCpus(bool value) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) SaveAsync() const;
    };
    template <> struct consume<Windows::Gaming::Preview::GamesEnumeration::IGameModeConfiguration>
    {
        template <typename D> using type = consume_Windows_Gaming_Preview_GamesEnumeration_IGameModeConfiguration<D>;
    };
    template <typename D>
    struct consume_Windows_Gaming_Preview_GamesEnumeration_IGameModeUserConfiguration
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<hstring>) GamingRelatedProcessNames() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) SaveAsync() const;
    };
    template <> struct consume<Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration>
    {
        template <typename D> using type = consume_Windows_Gaming_Preview_GamesEnumeration_IGameModeUserConfiguration<D>;
    };
    template <typename D>
    struct consume_Windows_Gaming_Preview_GamesEnumeration_IGameModeUserConfigurationStatics
    {
        WINRT_IMPL_AUTO(Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfiguration) GetDefault() const;
    };
    template <> struct consume<Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfigurationStatics>
    {
        template <typename D> using type = consume_Windows_Gaming_Preview_GamesEnumeration_IGameModeUserConfigurationStatics<D>;
    };
}
#endif
