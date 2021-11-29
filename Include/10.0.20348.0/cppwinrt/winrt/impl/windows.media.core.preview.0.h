// C++/WinRT v2.0.200609.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Media_Core_Preview_0_H
#define WINRT_Windows_Media_Core_Preview_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    template <typename T> struct __declspec(empty_bases) EventHandler;
    struct EventRegistrationToken;
}
WINRT_EXPORT namespace winrt::Windows::Media
{
    enum class SoundLevel : int32_t;
}
WINRT_EXPORT namespace winrt::Windows::Media::Core::Preview
{
    struct ISoundLevelBrokerStatics;
    struct SoundLevelBroker;
}
namespace winrt::impl
{
    template <> struct category<Windows::Media::Core::Preview::ISoundLevelBrokerStatics>{ using type = interface_category; };
    template <> struct category<Windows::Media::Core::Preview::SoundLevelBroker>{ using type = class_category; };
    template <> inline constexpr auto& name_v<Windows::Media::Core::Preview::SoundLevelBroker> = L"Windows.Media.Core.Preview.SoundLevelBroker";
    template <> inline constexpr auto& name_v<Windows::Media::Core::Preview::ISoundLevelBrokerStatics> = L"Windows.Media.Core.Preview.ISoundLevelBrokerStatics";
    template <> inline constexpr guid guid_v<Windows::Media::Core::Preview::ISoundLevelBrokerStatics>{ 0x6A633961,0xDBED,0x464C,{ 0xA0,0x9A,0x33,0x41,0x2F,0x5C,0xAA,0x3F } }; // 6A633961-DBED-464C-A09A-33412F5CAA3F
    template <> struct abi<Windows::Media::Core::Preview::ISoundLevelBrokerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SoundLevel(int32_t*) noexcept = 0;
            virtual int32_t __stdcall add_SoundLevelChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SoundLevelChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Media_Core_Preview_ISoundLevelBrokerStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Media::SoundLevel) SoundLevel() const;
        WINRT_IMPL_AUTO(winrt::event_token) SoundLevelChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        using SoundLevelChanged_revoker = impl::event_revoker<Windows::Media::Core::Preview::ISoundLevelBrokerStatics, &impl::abi_t<Windows::Media::Core::Preview::ISoundLevelBrokerStatics>::remove_SoundLevelChanged>;
        [[nodiscard]] SoundLevelChanged_revoker SoundLevelChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) SoundLevelChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Media::Core::Preview::ISoundLevelBrokerStatics>
    {
        template <typename D> using type = consume_Windows_Media_Core_Preview_ISoundLevelBrokerStatics<D>;
    };
}
#endif
