// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Graphics::Display::Core {

enum class HdmiDisplayColorSpace : int32_t
{
    RgbLimited = 0,
    RgbFull = 1,
    BT2020 = 2,
    BT709 = 3,
};

enum class HdmiDisplayHdrOption : int32_t
{
    None = 0,
    EotfSdr = 1,
    Eotf2084 = 2,
};

enum class HdmiDisplayPixelEncoding : int32_t
{
    Rgb444 = 0,
    Ycc444 = 1,
    Ycc422 = 2,
    Ycc420 = 3,
};

struct IHdmiDisplayInformation;
struct IHdmiDisplayInformationStatics;
struct IHdmiDisplayMode;
struct HdmiDisplayInformation;
struct HdmiDisplayMode;
struct HdmiDisplayHdr2086Metadata;

}

namespace winrt::impl {

template <> struct category<Windows::Graphics::Display::Core::IHdmiDisplayInformation>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Display::Core::IHdmiDisplayInformationStatics>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Display::Core::IHdmiDisplayMode>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Display::Core::HdmiDisplayInformation>{ using type = class_category; };
template <> struct category<Windows::Graphics::Display::Core::HdmiDisplayMode>{ using type = class_category; };
template <> struct category<Windows::Graphics::Display::Core::HdmiDisplayColorSpace>{ using type = enum_category; };
template <> struct category<Windows::Graphics::Display::Core::HdmiDisplayHdrOption>{ using type = enum_category; };
template <> struct category<Windows::Graphics::Display::Core::HdmiDisplayPixelEncoding>{ using type = enum_category; };
template <> struct category<Windows::Graphics::Display::Core::HdmiDisplayHdr2086Metadata>{ using type = struct_category<uint16_t,uint16_t,uint16_t,uint16_t,uint16_t,uint16_t,uint16_t,uint16_t,uint16_t,uint16_t,uint16_t,uint16_t>; };
template <> struct name<Windows::Graphics::Display::Core::IHdmiDisplayInformation>{ static constexpr auto & value{ L"Windows.Graphics.Display.Core.IHdmiDisplayInformation" }; };
template <> struct name<Windows::Graphics::Display::Core::IHdmiDisplayInformationStatics>{ static constexpr auto & value{ L"Windows.Graphics.Display.Core.IHdmiDisplayInformationStatics" }; };
template <> struct name<Windows::Graphics::Display::Core::IHdmiDisplayMode>{ static constexpr auto & value{ L"Windows.Graphics.Display.Core.IHdmiDisplayMode" }; };
template <> struct name<Windows::Graphics::Display::Core::HdmiDisplayInformation>{ static constexpr auto & value{ L"Windows.Graphics.Display.Core.HdmiDisplayInformation" }; };
template <> struct name<Windows::Graphics::Display::Core::HdmiDisplayMode>{ static constexpr auto & value{ L"Windows.Graphics.Display.Core.HdmiDisplayMode" }; };
template <> struct name<Windows::Graphics::Display::Core::HdmiDisplayColorSpace>{ static constexpr auto & value{ L"Windows.Graphics.Display.Core.HdmiDisplayColorSpace" }; };
template <> struct name<Windows::Graphics::Display::Core::HdmiDisplayHdrOption>{ static constexpr auto & value{ L"Windows.Graphics.Display.Core.HdmiDisplayHdrOption" }; };
template <> struct name<Windows::Graphics::Display::Core::HdmiDisplayPixelEncoding>{ static constexpr auto & value{ L"Windows.Graphics.Display.Core.HdmiDisplayPixelEncoding" }; };
template <> struct name<Windows::Graphics::Display::Core::HdmiDisplayHdr2086Metadata>{ static constexpr auto & value{ L"Windows.Graphics.Display.Core.HdmiDisplayHdr2086Metadata" }; };
template <> struct guid<Windows::Graphics::Display::Core::IHdmiDisplayInformation>{ static constexpr GUID value{ 0x130B3C0A,0xF565,0x476E,{ 0xAB,0xD5,0xEA,0x05,0xAE,0xE7,0x4C,0x69 } }; };
template <> struct guid<Windows::Graphics::Display::Core::IHdmiDisplayInformationStatics>{ static constexpr GUID value{ 0x6CE6B260,0xF42A,0x4A15,{ 0x91,0x4C,0x7B,0x8E,0x2A,0x5A,0x65,0xDF } }; };
template <> struct guid<Windows::Graphics::Display::Core::IHdmiDisplayMode>{ static constexpr GUID value{ 0x0C06D5AD,0x1B90,0x4F51,{ 0x99,0x81,0xEF,0x5A,0x1C,0x0D,0xDF,0x66 } }; };
template <> struct default_interface<Windows::Graphics::Display::Core::HdmiDisplayInformation>{ using type = Windows::Graphics::Display::Core::IHdmiDisplayInformation; };
template <> struct default_interface<Windows::Graphics::Display::Core::HdmiDisplayMode>{ using type = Windows::Graphics::Display::Core::IHdmiDisplayMode; };

template <typename D>
struct consume_Windows_Graphics_Display_Core_IHdmiDisplayInformation
{
    Windows::Foundation::Collections::IVectorView<Windows::Graphics::Display::Core::HdmiDisplayMode> GetSupportedDisplayModes() const;
    Windows::Graphics::Display::Core::HdmiDisplayMode GetCurrentDisplayMode() const;
    Windows::Foundation::IAsyncAction SetDefaultDisplayModeAsync() const;
    Windows::Foundation::IAsyncOperation<bool> RequestSetCurrentDisplayModeAsync(Windows::Graphics::Display::Core::HdmiDisplayMode const& mode) const;
    Windows::Foundation::IAsyncOperation<bool> RequestSetCurrentDisplayModeAsync(Windows::Graphics::Display::Core::HdmiDisplayMode const& mode, Windows::Graphics::Display::Core::HdmiDisplayHdrOption const& hdrOption) const;
    Windows::Foundation::IAsyncOperation<bool> RequestSetCurrentDisplayModeAsync(Windows::Graphics::Display::Core::HdmiDisplayMode const& mode, Windows::Graphics::Display::Core::HdmiDisplayHdrOption const& hdrOption, Windows::Graphics::Display::Core::HdmiDisplayHdr2086Metadata const& hdrMetadata) const;
    event_token DisplayModesChanged(Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::Core::HdmiDisplayInformation, Windows::Foundation::IInspectable> const& value) const;
    using DisplayModesChanged_revoker = event_revoker<Windows::Graphics::Display::Core::IHdmiDisplayInformation>;
    DisplayModesChanged_revoker DisplayModesChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::Core::HdmiDisplayInformation, Windows::Foundation::IInspectable> const& value) const;
    void DisplayModesChanged(event_token const& token) const;
};
template <> struct consume<Windows::Graphics::Display::Core::IHdmiDisplayInformation> { template <typename D> using type = consume_Windows_Graphics_Display_Core_IHdmiDisplayInformation<D>; };

template <typename D>
struct consume_Windows_Graphics_Display_Core_IHdmiDisplayInformationStatics
{
    Windows::Graphics::Display::Core::HdmiDisplayInformation GetForCurrentView() const;
};
template <> struct consume<Windows::Graphics::Display::Core::IHdmiDisplayInformationStatics> { template <typename D> using type = consume_Windows_Graphics_Display_Core_IHdmiDisplayInformationStatics<D>; };

template <typename D>
struct consume_Windows_Graphics_Display_Core_IHdmiDisplayMode
{
    uint32_t ResolutionWidthInRawPixels() const;
    uint32_t ResolutionHeightInRawPixels() const;
    double RefreshRate() const;
    bool StereoEnabled() const;
    uint16_t BitsPerPixel() const;
    bool IsEqual(Windows::Graphics::Display::Core::HdmiDisplayMode const& mode) const;
    Windows::Graphics::Display::Core::HdmiDisplayColorSpace ColorSpace() const;
    Windows::Graphics::Display::Core::HdmiDisplayPixelEncoding PixelEncoding() const;
    bool IsSdrLuminanceSupported() const;
    bool IsSmpte2084Supported() const;
    bool Is2086MetadataSupported() const;
};
template <> struct consume<Windows::Graphics::Display::Core::IHdmiDisplayMode> { template <typename D> using type = consume_Windows_Graphics_Display_Core_IHdmiDisplayMode<D>; };

struct struct_Windows_Graphics_Display_Core_HdmiDisplayHdr2086Metadata
{
    uint16_t RedPrimaryX;
    uint16_t RedPrimaryY;
    uint16_t GreenPrimaryX;
    uint16_t GreenPrimaryY;
    uint16_t BluePrimaryX;
    uint16_t BluePrimaryY;
    uint16_t WhitePointX;
    uint16_t WhitePointY;
    uint16_t MaxMasteringLuminance;
    uint16_t MinMasteringLuminance;
    uint16_t MaxContentLightLevel;
    uint16_t MaxFrameAverageLightLevel;
};
template <> struct abi<Windows::Graphics::Display::Core::HdmiDisplayHdr2086Metadata>{ using type = struct_Windows_Graphics_Display_Core_HdmiDisplayHdr2086Metadata; };


template <> struct abi<Windows::Graphics::Display::Core::IHdmiDisplayInformation>{ struct type : IInspectable
{
    virtual HRESULT __stdcall GetSupportedDisplayModes(void** result) noexcept = 0;
    virtual HRESULT __stdcall GetCurrentDisplayMode(void** result) noexcept = 0;
    virtual HRESULT __stdcall SetDefaultDisplayModeAsync(void** operation) noexcept = 0;
    virtual HRESULT __stdcall RequestSetCurrentDisplayModeAsync(void* mode, void** operation) noexcept = 0;
    virtual HRESULT __stdcall RequestSetCurrentDisplayModeWithHdrAsync(void* mode, Windows::Graphics::Display::Core::HdmiDisplayHdrOption hdrOption, void** operation) noexcept = 0;
    virtual HRESULT __stdcall RequestSetCurrentDisplayModeWithHdrAndMetadataAsync(void* mode, Windows::Graphics::Display::Core::HdmiDisplayHdrOption hdrOption, struct struct_Windows_Graphics_Display_Core_HdmiDisplayHdr2086Metadata hdrMetadata, void** operation) noexcept = 0;
    virtual HRESULT __stdcall add_DisplayModesChanged(void* value, event_token* token) noexcept = 0;
    virtual HRESULT __stdcall remove_DisplayModesChanged(event_token token) noexcept = 0;
};};

template <> struct abi<Windows::Graphics::Display::Core::IHdmiDisplayInformationStatics>{ struct type : IInspectable
{
    virtual HRESULT __stdcall GetForCurrentView(void** result) noexcept = 0;
};};

template <> struct abi<Windows::Graphics::Display::Core::IHdmiDisplayMode>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_ResolutionWidthInRawPixels(uint32_t* value) noexcept = 0;
    virtual HRESULT __stdcall get_ResolutionHeightInRawPixels(uint32_t* value) noexcept = 0;
    virtual HRESULT __stdcall get_RefreshRate(double* value) noexcept = 0;
    virtual HRESULT __stdcall get_StereoEnabled(bool* value) noexcept = 0;
    virtual HRESULT __stdcall get_BitsPerPixel(uint16_t* value) noexcept = 0;
    virtual HRESULT __stdcall IsEqual(void* mode, bool* result) noexcept = 0;
    virtual HRESULT __stdcall get_ColorSpace(Windows::Graphics::Display::Core::HdmiDisplayColorSpace* value) noexcept = 0;
    virtual HRESULT __stdcall get_PixelEncoding(Windows::Graphics::Display::Core::HdmiDisplayPixelEncoding* value) noexcept = 0;
    virtual HRESULT __stdcall get_IsSdrLuminanceSupported(bool* value) noexcept = 0;
    virtual HRESULT __stdcall get_IsSmpte2084Supported(bool* value) noexcept = 0;
    virtual HRESULT __stdcall get_Is2086MetadataSupported(bool* value) noexcept = 0;
};};

}
