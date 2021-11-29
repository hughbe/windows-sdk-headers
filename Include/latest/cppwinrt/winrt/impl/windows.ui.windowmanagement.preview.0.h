// C++/WinRT v2.0.200609.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_WindowManagement_Preview_0_H
#define WINRT_Windows_UI_WindowManagement_Preview_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct Size;
}
WINRT_EXPORT namespace winrt::Windows::UI::WindowManagement
{
    struct AppWindow;
}
WINRT_EXPORT namespace winrt::Windows::UI::WindowManagement::Preview
{
    struct IWindowManagementPreview;
    struct IWindowManagementPreviewStatics;
    struct WindowManagementPreview;
}
namespace winrt::impl
{
    template <> struct category<Windows::UI::WindowManagement::Preview::IWindowManagementPreview>{ using type = interface_category; };
    template <> struct category<Windows::UI::WindowManagement::Preview::IWindowManagementPreviewStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::WindowManagement::Preview::WindowManagementPreview>{ using type = class_category; };
    template <> inline constexpr auto& name_v<Windows::UI::WindowManagement::Preview::WindowManagementPreview> = L"Windows.UI.WindowManagement.Preview.WindowManagementPreview";
    template <> inline constexpr auto& name_v<Windows::UI::WindowManagement::Preview::IWindowManagementPreview> = L"Windows.UI.WindowManagement.Preview.IWindowManagementPreview";
    template <> inline constexpr auto& name_v<Windows::UI::WindowManagement::Preview::IWindowManagementPreviewStatics> = L"Windows.UI.WindowManagement.Preview.IWindowManagementPreviewStatics";
    template <> inline constexpr guid guid_v<Windows::UI::WindowManagement::Preview::IWindowManagementPreview>{ 0x4EF55B0D,0x561D,0x513C,{ 0xA6,0x7C,0x2C,0x02,0xB6,0x9C,0xEF,0x41 } }; // 4EF55B0D-561D-513C-A67C-2C02B69CEF41
    template <> inline constexpr guid guid_v<Windows::UI::WindowManagement::Preview::IWindowManagementPreviewStatics>{ 0x0F9725C6,0xC004,0x5A23,{ 0x8F,0xD2,0x8D,0x09,0x2C,0xE2,0x70,0x4A } }; // 0F9725C6-C004-5A23-8FD2-8D092CE2704A
    template <> struct default_interface<Windows::UI::WindowManagement::Preview::WindowManagementPreview>{ using type = Windows::UI::WindowManagement::Preview::IWindowManagementPreview; };
    template <> struct abi<Windows::UI::WindowManagement::Preview::IWindowManagementPreview>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::WindowManagement::Preview::IWindowManagementPreviewStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SetPreferredMinSize(void*, Windows::Foundation::Size) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_UI_WindowManagement_Preview_IWindowManagementPreview
    {
    };
    template <> struct consume<Windows::UI::WindowManagement::Preview::IWindowManagementPreview>
    {
        template <typename D> using type = consume_Windows_UI_WindowManagement_Preview_IWindowManagementPreview<D>;
    };
    template <typename D>
    struct consume_Windows_UI_WindowManagement_Preview_IWindowManagementPreviewStatics
    {
        WINRT_IMPL_AUTO(void) SetPreferredMinSize(Windows::UI::WindowManagement::AppWindow const& window, Windows::Foundation::Size const& preferredFrameMinSize) const;
    };
    template <> struct consume<Windows::UI::WindowManagement::Preview::IWindowManagementPreviewStatics>
    {
        template <typename D> using type = consume_Windows_UI_WindowManagement_Preview_IWindowManagementPreviewStatics<D>;
    };
}
#endif
