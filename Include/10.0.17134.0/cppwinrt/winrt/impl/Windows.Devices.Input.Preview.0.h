// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Devices::HumanInterfaceDevice {

struct HidBooleanControlDescription;
struct HidInputReport;
struct HidNumericControlDescription;

}

WINRT_EXPORT namespace winrt::Windows::Devices::Input::Preview {

enum class GazeDeviceConfigurationStatePreview : int32_t
{
    Unknown = 0,
    Ready = 1,
    Configuring = 2,
    ScreenSetupNeeded = 3,
    UserCalibrationNeeded = 4,
};

struct IGazeDevicePreview;
struct IGazeDeviceWatcherAddedPreviewEventArgs;
struct IGazeDeviceWatcherPreview;
struct IGazeDeviceWatcherRemovedPreviewEventArgs;
struct IGazeDeviceWatcherUpdatedPreviewEventArgs;
struct IGazeEnteredPreviewEventArgs;
struct IGazeExitedPreviewEventArgs;
struct IGazeInputSourcePreview;
struct IGazeInputSourcePreviewStatics;
struct IGazeMovedPreviewEventArgs;
struct IGazePointPreview;
struct GazeDevicePreview;
struct GazeDeviceWatcherAddedPreviewEventArgs;
struct GazeDeviceWatcherPreview;
struct GazeDeviceWatcherRemovedPreviewEventArgs;
struct GazeDeviceWatcherUpdatedPreviewEventArgs;
struct GazeEnteredPreviewEventArgs;
struct GazeExitedPreviewEventArgs;
struct GazeInputSourcePreview;
struct GazeMovedPreviewEventArgs;
struct GazePointPreview;

}

namespace winrt::impl {

template <> struct category<Windows::Devices::Input::Preview::IGazeDevicePreview>{ using type = interface_category; };
template <> struct category<Windows::Devices::Input::Preview::IGazeDeviceWatcherAddedPreviewEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Devices::Input::Preview::IGazeDeviceWatcherPreview>{ using type = interface_category; };
template <> struct category<Windows::Devices::Input::Preview::IGazeDeviceWatcherRemovedPreviewEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Devices::Input::Preview::IGazeDeviceWatcherUpdatedPreviewEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Devices::Input::Preview::IGazeEnteredPreviewEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Devices::Input::Preview::IGazeExitedPreviewEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Devices::Input::Preview::IGazeInputSourcePreview>{ using type = interface_category; };
template <> struct category<Windows::Devices::Input::Preview::IGazeInputSourcePreviewStatics>{ using type = interface_category; };
template <> struct category<Windows::Devices::Input::Preview::IGazeMovedPreviewEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Devices::Input::Preview::IGazePointPreview>{ using type = interface_category; };
template <> struct category<Windows::Devices::Input::Preview::GazeDevicePreview>{ using type = class_category; };
template <> struct category<Windows::Devices::Input::Preview::GazeDeviceWatcherAddedPreviewEventArgs>{ using type = class_category; };
template <> struct category<Windows::Devices::Input::Preview::GazeDeviceWatcherPreview>{ using type = class_category; };
template <> struct category<Windows::Devices::Input::Preview::GazeDeviceWatcherRemovedPreviewEventArgs>{ using type = class_category; };
template <> struct category<Windows::Devices::Input::Preview::GazeDeviceWatcherUpdatedPreviewEventArgs>{ using type = class_category; };
template <> struct category<Windows::Devices::Input::Preview::GazeEnteredPreviewEventArgs>{ using type = class_category; };
template <> struct category<Windows::Devices::Input::Preview::GazeExitedPreviewEventArgs>{ using type = class_category; };
template <> struct category<Windows::Devices::Input::Preview::GazeInputSourcePreview>{ using type = class_category; };
template <> struct category<Windows::Devices::Input::Preview::GazeMovedPreviewEventArgs>{ using type = class_category; };
template <> struct category<Windows::Devices::Input::Preview::GazePointPreview>{ using type = class_category; };
template <> struct category<Windows::Devices::Input::Preview::GazeDeviceConfigurationStatePreview>{ using type = enum_category; };
template <> struct name<Windows::Devices::Input::Preview::IGazeDevicePreview>{ static constexpr auto & value{ L"Windows.Devices.Input.Preview.IGazeDevicePreview" }; };
template <> struct name<Windows::Devices::Input::Preview::IGazeDeviceWatcherAddedPreviewEventArgs>{ static constexpr auto & value{ L"Windows.Devices.Input.Preview.IGazeDeviceWatcherAddedPreviewEventArgs" }; };
template <> struct name<Windows::Devices::Input::Preview::IGazeDeviceWatcherPreview>{ static constexpr auto & value{ L"Windows.Devices.Input.Preview.IGazeDeviceWatcherPreview" }; };
template <> struct name<Windows::Devices::Input::Preview::IGazeDeviceWatcherRemovedPreviewEventArgs>{ static constexpr auto & value{ L"Windows.Devices.Input.Preview.IGazeDeviceWatcherRemovedPreviewEventArgs" }; };
template <> struct name<Windows::Devices::Input::Preview::IGazeDeviceWatcherUpdatedPreviewEventArgs>{ static constexpr auto & value{ L"Windows.Devices.Input.Preview.IGazeDeviceWatcherUpdatedPreviewEventArgs" }; };
template <> struct name<Windows::Devices::Input::Preview::IGazeEnteredPreviewEventArgs>{ static constexpr auto & value{ L"Windows.Devices.Input.Preview.IGazeEnteredPreviewEventArgs" }; };
template <> struct name<Windows::Devices::Input::Preview::IGazeExitedPreviewEventArgs>{ static constexpr auto & value{ L"Windows.Devices.Input.Preview.IGazeExitedPreviewEventArgs" }; };
template <> struct name<Windows::Devices::Input::Preview::IGazeInputSourcePreview>{ static constexpr auto & value{ L"Windows.Devices.Input.Preview.IGazeInputSourcePreview" }; };
template <> struct name<Windows::Devices::Input::Preview::IGazeInputSourcePreviewStatics>{ static constexpr auto & value{ L"Windows.Devices.Input.Preview.IGazeInputSourcePreviewStatics" }; };
template <> struct name<Windows::Devices::Input::Preview::IGazeMovedPreviewEventArgs>{ static constexpr auto & value{ L"Windows.Devices.Input.Preview.IGazeMovedPreviewEventArgs" }; };
template <> struct name<Windows::Devices::Input::Preview::IGazePointPreview>{ static constexpr auto & value{ L"Windows.Devices.Input.Preview.IGazePointPreview" }; };
template <> struct name<Windows::Devices::Input::Preview::GazeDevicePreview>{ static constexpr auto & value{ L"Windows.Devices.Input.Preview.GazeDevicePreview" }; };
template <> struct name<Windows::Devices::Input::Preview::GazeDeviceWatcherAddedPreviewEventArgs>{ static constexpr auto & value{ L"Windows.Devices.Input.Preview.GazeDeviceWatcherAddedPreviewEventArgs" }; };
template <> struct name<Windows::Devices::Input::Preview::GazeDeviceWatcherPreview>{ static constexpr auto & value{ L"Windows.Devices.Input.Preview.GazeDeviceWatcherPreview" }; };
template <> struct name<Windows::Devices::Input::Preview::GazeDeviceWatcherRemovedPreviewEventArgs>{ static constexpr auto & value{ L"Windows.Devices.Input.Preview.GazeDeviceWatcherRemovedPreviewEventArgs" }; };
template <> struct name<Windows::Devices::Input::Preview::GazeDeviceWatcherUpdatedPreviewEventArgs>{ static constexpr auto & value{ L"Windows.Devices.Input.Preview.GazeDeviceWatcherUpdatedPreviewEventArgs" }; };
template <> struct name<Windows::Devices::Input::Preview::GazeEnteredPreviewEventArgs>{ static constexpr auto & value{ L"Windows.Devices.Input.Preview.GazeEnteredPreviewEventArgs" }; };
template <> struct name<Windows::Devices::Input::Preview::GazeExitedPreviewEventArgs>{ static constexpr auto & value{ L"Windows.Devices.Input.Preview.GazeExitedPreviewEventArgs" }; };
template <> struct name<Windows::Devices::Input::Preview::GazeInputSourcePreview>{ static constexpr auto & value{ L"Windows.Devices.Input.Preview.GazeInputSourcePreview" }; };
template <> struct name<Windows::Devices::Input::Preview::GazeMovedPreviewEventArgs>{ static constexpr auto & value{ L"Windows.Devices.Input.Preview.GazeMovedPreviewEventArgs" }; };
template <> struct name<Windows::Devices::Input::Preview::GazePointPreview>{ static constexpr auto & value{ L"Windows.Devices.Input.Preview.GazePointPreview" }; };
template <> struct name<Windows::Devices::Input::Preview::GazeDeviceConfigurationStatePreview>{ static constexpr auto & value{ L"Windows.Devices.Input.Preview.GazeDeviceConfigurationStatePreview" }; };
template <> struct guid<Windows::Devices::Input::Preview::IGazeDevicePreview>{ static constexpr GUID value{ 0xE79E7EE9,0xB389,0x11E7,{ 0xB2,0x01,0xC8,0xD3,0xFF,0xB7,0x57,0x21 } }; };
template <> struct guid<Windows::Devices::Input::Preview::IGazeDeviceWatcherAddedPreviewEventArgs>{ static constexpr GUID value{ 0xE79E7EED,0xB389,0x11E7,{ 0xB2,0x01,0xC8,0xD3,0xFF,0xB7,0x57,0x21 } }; };
template <> struct guid<Windows::Devices::Input::Preview::IGazeDeviceWatcherPreview>{ static constexpr GUID value{ 0xE79E7EE7,0xB389,0x11E7,{ 0xB2,0x01,0xC8,0xD3,0xFF,0xB7,0x57,0x21 } }; };
template <> struct guid<Windows::Devices::Input::Preview::IGazeDeviceWatcherRemovedPreviewEventArgs>{ static constexpr GUID value{ 0xF2631F08,0x0E3F,0x431F,{ 0xA6,0x06,0x50,0xB3,0x5A,0xF9,0x4A,0x1C } }; };
template <> struct guid<Windows::Devices::Input::Preview::IGazeDeviceWatcherUpdatedPreviewEventArgs>{ static constexpr GUID value{ 0x7FE830EF,0x7F08,0x4737,{ 0x88,0xE1,0x4A,0x83,0xAE,0x4E,0x48,0x85 } }; };
template <> struct guid<Windows::Devices::Input::Preview::IGazeEnteredPreviewEventArgs>{ static constexpr GUID value{ 0x2567BF43,0x1225,0x489F,{ 0x9D,0xD1,0xDA,0xA7,0xC5,0x0F,0xBF,0x4B } }; };
template <> struct guid<Windows::Devices::Input::Preview::IGazeExitedPreviewEventArgs>{ static constexpr GUID value{ 0x5D0AF07E,0x7D83,0x40EF,{ 0x9F,0x0A,0xFB,0xC1,0xBB,0xDC,0xC5,0xAC } }; };
template <> struct guid<Windows::Devices::Input::Preview::IGazeInputSourcePreview>{ static constexpr GUID value{ 0xE79E7EE8,0xB389,0x11E7,{ 0xB2,0x01,0xC8,0xD3,0xFF,0xB7,0x57,0x21 } }; };
template <> struct guid<Windows::Devices::Input::Preview::IGazeInputSourcePreviewStatics>{ static constexpr GUID value{ 0xE79E7EE6,0xB389,0x11E7,{ 0xB2,0x01,0xC8,0xD3,0xFF,0xB7,0x57,0x21 } }; };
template <> struct guid<Windows::Devices::Input::Preview::IGazeMovedPreviewEventArgs>{ static constexpr GUID value{ 0xE79E7EEB,0xB389,0x11E7,{ 0xB2,0x01,0xC8,0xD3,0xFF,0xB7,0x57,0x21 } }; };
template <> struct guid<Windows::Devices::Input::Preview::IGazePointPreview>{ static constexpr GUID value{ 0xE79E7EEA,0xB389,0x11E7,{ 0xB2,0x01,0xC8,0xD3,0xFF,0xB7,0x57,0x21 } }; };
template <> struct default_interface<Windows::Devices::Input::Preview::GazeDevicePreview>{ using type = Windows::Devices::Input::Preview::IGazeDevicePreview; };
template <> struct default_interface<Windows::Devices::Input::Preview::GazeDeviceWatcherAddedPreviewEventArgs>{ using type = Windows::Devices::Input::Preview::IGazeDeviceWatcherAddedPreviewEventArgs; };
template <> struct default_interface<Windows::Devices::Input::Preview::GazeDeviceWatcherPreview>{ using type = Windows::Devices::Input::Preview::IGazeDeviceWatcherPreview; };
template <> struct default_interface<Windows::Devices::Input::Preview::GazeDeviceWatcherRemovedPreviewEventArgs>{ using type = Windows::Devices::Input::Preview::IGazeDeviceWatcherRemovedPreviewEventArgs; };
template <> struct default_interface<Windows::Devices::Input::Preview::GazeDeviceWatcherUpdatedPreviewEventArgs>{ using type = Windows::Devices::Input::Preview::IGazeDeviceWatcherUpdatedPreviewEventArgs; };
template <> struct default_interface<Windows::Devices::Input::Preview::GazeEnteredPreviewEventArgs>{ using type = Windows::Devices::Input::Preview::IGazeEnteredPreviewEventArgs; };
template <> struct default_interface<Windows::Devices::Input::Preview::GazeExitedPreviewEventArgs>{ using type = Windows::Devices::Input::Preview::IGazeExitedPreviewEventArgs; };
template <> struct default_interface<Windows::Devices::Input::Preview::GazeInputSourcePreview>{ using type = Windows::Devices::Input::Preview::IGazeInputSourcePreview; };
template <> struct default_interface<Windows::Devices::Input::Preview::GazeMovedPreviewEventArgs>{ using type = Windows::Devices::Input::Preview::IGazeMovedPreviewEventArgs; };
template <> struct default_interface<Windows::Devices::Input::Preview::GazePointPreview>{ using type = Windows::Devices::Input::Preview::IGazePointPreview; };

template <typename D>
struct consume_Windows_Devices_Input_Preview_IGazeDevicePreview
{
    uint32_t Id() const;
    bool CanTrackEyes() const;
    bool CanTrackHead() const;
    Windows::Devices::Input::Preview::GazeDeviceConfigurationStatePreview ConfigurationState() const;
    Windows::Foundation::IAsyncOperation<bool> RequestCalibrationAsync() const;
    Windows::Foundation::Collections::IVectorView<Windows::Devices::HumanInterfaceDevice::HidNumericControlDescription> GetNumericControlDescriptions(uint16_t usagePage, uint16_t usageId) const;
    Windows::Foundation::Collections::IVectorView<Windows::Devices::HumanInterfaceDevice::HidBooleanControlDescription> GetBooleanControlDescriptions(uint16_t usagePage, uint16_t usageId) const;
};
template <> struct consume<Windows::Devices::Input::Preview::IGazeDevicePreview> { template <typename D> using type = consume_Windows_Devices_Input_Preview_IGazeDevicePreview<D>; };

template <typename D>
struct consume_Windows_Devices_Input_Preview_IGazeDeviceWatcherAddedPreviewEventArgs
{
    Windows::Devices::Input::Preview::GazeDevicePreview Device() const;
};
template <> struct consume<Windows::Devices::Input::Preview::IGazeDeviceWatcherAddedPreviewEventArgs> { template <typename D> using type = consume_Windows_Devices_Input_Preview_IGazeDeviceWatcherAddedPreviewEventArgs<D>; };

template <typename D>
struct consume_Windows_Devices_Input_Preview_IGazeDeviceWatcherPreview
{
    event_token Added(Windows::Foundation::TypedEventHandler<Windows::Devices::Input::Preview::GazeDeviceWatcherPreview, Windows::Devices::Input::Preview::GazeDeviceWatcherAddedPreviewEventArgs> const& handler) const;
    using Added_revoker = event_revoker<Windows::Devices::Input::Preview::IGazeDeviceWatcherPreview>;
    Added_revoker Added(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Input::Preview::GazeDeviceWatcherPreview, Windows::Devices::Input::Preview::GazeDeviceWatcherAddedPreviewEventArgs> const& handler) const;
    void Added(event_token const& token) const;
    event_token Removed(Windows::Foundation::TypedEventHandler<Windows::Devices::Input::Preview::GazeDeviceWatcherPreview, Windows::Devices::Input::Preview::GazeDeviceWatcherRemovedPreviewEventArgs> const& handler) const;
    using Removed_revoker = event_revoker<Windows::Devices::Input::Preview::IGazeDeviceWatcherPreview>;
    Removed_revoker Removed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Input::Preview::GazeDeviceWatcherPreview, Windows::Devices::Input::Preview::GazeDeviceWatcherRemovedPreviewEventArgs> const& handler) const;
    void Removed(event_token const& token) const;
    event_token Updated(Windows::Foundation::TypedEventHandler<Windows::Devices::Input::Preview::GazeDeviceWatcherPreview, Windows::Devices::Input::Preview::GazeDeviceWatcherUpdatedPreviewEventArgs> const& handler) const;
    using Updated_revoker = event_revoker<Windows::Devices::Input::Preview::IGazeDeviceWatcherPreview>;
    Updated_revoker Updated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Input::Preview::GazeDeviceWatcherPreview, Windows::Devices::Input::Preview::GazeDeviceWatcherUpdatedPreviewEventArgs> const& handler) const;
    void Updated(event_token const& token) const;
    event_token EnumerationCompleted(Windows::Foundation::TypedEventHandler<Windows::Devices::Input::Preview::GazeDeviceWatcherPreview, Windows::Foundation::IInspectable> const& handler) const;
    using EnumerationCompleted_revoker = event_revoker<Windows::Devices::Input::Preview::IGazeDeviceWatcherPreview>;
    EnumerationCompleted_revoker EnumerationCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Input::Preview::GazeDeviceWatcherPreview, Windows::Foundation::IInspectable> const& handler) const;
    void EnumerationCompleted(event_token const& token) const;
    void Start() const;
    void Stop() const;
};
template <> struct consume<Windows::Devices::Input::Preview::IGazeDeviceWatcherPreview> { template <typename D> using type = consume_Windows_Devices_Input_Preview_IGazeDeviceWatcherPreview<D>; };

template <typename D>
struct consume_Windows_Devices_Input_Preview_IGazeDeviceWatcherRemovedPreviewEventArgs
{
    Windows::Devices::Input::Preview::GazeDevicePreview Device() const;
};
template <> struct consume<Windows::Devices::Input::Preview::IGazeDeviceWatcherRemovedPreviewEventArgs> { template <typename D> using type = consume_Windows_Devices_Input_Preview_IGazeDeviceWatcherRemovedPreviewEventArgs<D>; };

template <typename D>
struct consume_Windows_Devices_Input_Preview_IGazeDeviceWatcherUpdatedPreviewEventArgs
{
    Windows::Devices::Input::Preview::GazeDevicePreview Device() const;
};
template <> struct consume<Windows::Devices::Input::Preview::IGazeDeviceWatcherUpdatedPreviewEventArgs> { template <typename D> using type = consume_Windows_Devices_Input_Preview_IGazeDeviceWatcherUpdatedPreviewEventArgs<D>; };

template <typename D>
struct consume_Windows_Devices_Input_Preview_IGazeEnteredPreviewEventArgs
{
    bool Handled() const;
    void Handled(bool value) const;
    Windows::Devices::Input::Preview::GazePointPreview CurrentPoint() const;
};
template <> struct consume<Windows::Devices::Input::Preview::IGazeEnteredPreviewEventArgs> { template <typename D> using type = consume_Windows_Devices_Input_Preview_IGazeEnteredPreviewEventArgs<D>; };

template <typename D>
struct consume_Windows_Devices_Input_Preview_IGazeExitedPreviewEventArgs
{
    bool Handled() const;
    void Handled(bool value) const;
    Windows::Devices::Input::Preview::GazePointPreview CurrentPoint() const;
};
template <> struct consume<Windows::Devices::Input::Preview::IGazeExitedPreviewEventArgs> { template <typename D> using type = consume_Windows_Devices_Input_Preview_IGazeExitedPreviewEventArgs<D>; };

template <typename D>
struct consume_Windows_Devices_Input_Preview_IGazeInputSourcePreview
{
    event_token GazeMoved(Windows::Foundation::TypedEventHandler<Windows::Devices::Input::Preview::GazeInputSourcePreview, Windows::Devices::Input::Preview::GazeMovedPreviewEventArgs> const& handler) const;
    using GazeMoved_revoker = event_revoker<Windows::Devices::Input::Preview::IGazeInputSourcePreview>;
    GazeMoved_revoker GazeMoved(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Input::Preview::GazeInputSourcePreview, Windows::Devices::Input::Preview::GazeMovedPreviewEventArgs> const& handler) const;
    void GazeMoved(event_token const& token) const;
    event_token GazeEntered(Windows::Foundation::TypedEventHandler<Windows::Devices::Input::Preview::GazeInputSourcePreview, Windows::Devices::Input::Preview::GazeEnteredPreviewEventArgs> const& handler) const;
    using GazeEntered_revoker = event_revoker<Windows::Devices::Input::Preview::IGazeInputSourcePreview>;
    GazeEntered_revoker GazeEntered(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Input::Preview::GazeInputSourcePreview, Windows::Devices::Input::Preview::GazeEnteredPreviewEventArgs> const& handler) const;
    void GazeEntered(event_token const& token) const;
    event_token GazeExited(Windows::Foundation::TypedEventHandler<Windows::Devices::Input::Preview::GazeInputSourcePreview, Windows::Devices::Input::Preview::GazeExitedPreviewEventArgs> const& handler) const;
    using GazeExited_revoker = event_revoker<Windows::Devices::Input::Preview::IGazeInputSourcePreview>;
    GazeExited_revoker GazeExited(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Input::Preview::GazeInputSourcePreview, Windows::Devices::Input::Preview::GazeExitedPreviewEventArgs> const& handler) const;
    void GazeExited(event_token const& token) const;
};
template <> struct consume<Windows::Devices::Input::Preview::IGazeInputSourcePreview> { template <typename D> using type = consume_Windows_Devices_Input_Preview_IGazeInputSourcePreview<D>; };

template <typename D>
struct consume_Windows_Devices_Input_Preview_IGazeInputSourcePreviewStatics
{
    Windows::Devices::Input::Preview::GazeInputSourcePreview GetForCurrentView() const;
    Windows::Devices::Input::Preview::GazeDeviceWatcherPreview CreateWatcher() const;
};
template <> struct consume<Windows::Devices::Input::Preview::IGazeInputSourcePreviewStatics> { template <typename D> using type = consume_Windows_Devices_Input_Preview_IGazeInputSourcePreviewStatics<D>; };

template <typename D>
struct consume_Windows_Devices_Input_Preview_IGazeMovedPreviewEventArgs
{
    bool Handled() const;
    void Handled(bool value) const;
    Windows::Devices::Input::Preview::GazePointPreview CurrentPoint() const;
    Windows::Foundation::Collections::IVector<Windows::Devices::Input::Preview::GazePointPreview> GetIntermediatePoints() const;
};
template <> struct consume<Windows::Devices::Input::Preview::IGazeMovedPreviewEventArgs> { template <typename D> using type = consume_Windows_Devices_Input_Preview_IGazeMovedPreviewEventArgs<D>; };

template <typename D>
struct consume_Windows_Devices_Input_Preview_IGazePointPreview
{
    Windows::Devices::Input::Preview::GazeDevicePreview SourceDevice() const;
    Windows::Foundation::IReference<Windows::Foundation::Point> EyeGazePosition() const;
    Windows::Foundation::IReference<Windows::Foundation::Point> HeadGazePosition() const;
    uint64_t Timestamp() const;
    Windows::Devices::HumanInterfaceDevice::HidInputReport HidInputReport() const;
};
template <> struct consume<Windows::Devices::Input::Preview::IGazePointPreview> { template <typename D> using type = consume_Windows_Devices_Input_Preview_IGazePointPreview<D>; };

template <> struct abi<Windows::Devices::Input::Preview::IGazeDevicePreview>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_Id(uint32_t* value) noexcept = 0;
    virtual HRESULT __stdcall get_CanTrackEyes(bool* value) noexcept = 0;
    virtual HRESULT __stdcall get_CanTrackHead(bool* value) noexcept = 0;
    virtual HRESULT __stdcall get_ConfigurationState(Windows::Devices::Input::Preview::GazeDeviceConfigurationStatePreview* value) noexcept = 0;
    virtual HRESULT __stdcall RequestCalibrationAsync(void** operation) noexcept = 0;
    virtual HRESULT __stdcall GetNumericControlDescriptions(uint16_t usagePage, uint16_t usageId, void** result) noexcept = 0;
    virtual HRESULT __stdcall GetBooleanControlDescriptions(uint16_t usagePage, uint16_t usageId, void** result) noexcept = 0;
};};

template <> struct abi<Windows::Devices::Input::Preview::IGazeDeviceWatcherAddedPreviewEventArgs>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_Device(void** value) noexcept = 0;
};};

template <> struct abi<Windows::Devices::Input::Preview::IGazeDeviceWatcherPreview>{ struct type : IInspectable
{
    virtual HRESULT __stdcall add_Added(void* handler, event_token* token) noexcept = 0;
    virtual HRESULT __stdcall remove_Added(event_token token) noexcept = 0;
    virtual HRESULT __stdcall add_Removed(void* handler, event_token* token) noexcept = 0;
    virtual HRESULT __stdcall remove_Removed(event_token token) noexcept = 0;
    virtual HRESULT __stdcall add_Updated(void* handler, event_token* token) noexcept = 0;
    virtual HRESULT __stdcall remove_Updated(event_token token) noexcept = 0;
    virtual HRESULT __stdcall add_EnumerationCompleted(void* handler, event_token* token) noexcept = 0;
    virtual HRESULT __stdcall remove_EnumerationCompleted(event_token token) noexcept = 0;
    virtual HRESULT __stdcall Start() noexcept = 0;
    virtual HRESULT __stdcall Stop() noexcept = 0;
};};

template <> struct abi<Windows::Devices::Input::Preview::IGazeDeviceWatcherRemovedPreviewEventArgs>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_Device(void** value) noexcept = 0;
};};

template <> struct abi<Windows::Devices::Input::Preview::IGazeDeviceWatcherUpdatedPreviewEventArgs>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_Device(void** value) noexcept = 0;
};};

template <> struct abi<Windows::Devices::Input::Preview::IGazeEnteredPreviewEventArgs>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_Handled(bool* value) noexcept = 0;
    virtual HRESULT __stdcall put_Handled(bool value) noexcept = 0;
    virtual HRESULT __stdcall get_CurrentPoint(void** value) noexcept = 0;
};};

template <> struct abi<Windows::Devices::Input::Preview::IGazeExitedPreviewEventArgs>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_Handled(bool* value) noexcept = 0;
    virtual HRESULT __stdcall put_Handled(bool value) noexcept = 0;
    virtual HRESULT __stdcall get_CurrentPoint(void** value) noexcept = 0;
};};

template <> struct abi<Windows::Devices::Input::Preview::IGazeInputSourcePreview>{ struct type : IInspectable
{
    virtual HRESULT __stdcall add_GazeMoved(void* handler, event_token* token) noexcept = 0;
    virtual HRESULT __stdcall remove_GazeMoved(event_token token) noexcept = 0;
    virtual HRESULT __stdcall add_GazeEntered(void* handler, event_token* token) noexcept = 0;
    virtual HRESULT __stdcall remove_GazeEntered(event_token token) noexcept = 0;
    virtual HRESULT __stdcall add_GazeExited(void* handler, event_token* token) noexcept = 0;
    virtual HRESULT __stdcall remove_GazeExited(event_token token) noexcept = 0;
};};

template <> struct abi<Windows::Devices::Input::Preview::IGazeInputSourcePreviewStatics>{ struct type : IInspectable
{
    virtual HRESULT __stdcall GetForCurrentView(void** result) noexcept = 0;
    virtual HRESULT __stdcall CreateWatcher(void** result) noexcept = 0;
};};

template <> struct abi<Windows::Devices::Input::Preview::IGazeMovedPreviewEventArgs>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_Handled(bool* value) noexcept = 0;
    virtual HRESULT __stdcall put_Handled(bool value) noexcept = 0;
    virtual HRESULT __stdcall get_CurrentPoint(void** value) noexcept = 0;
    virtual HRESULT __stdcall GetIntermediatePoints(void** result) noexcept = 0;
};};

template <> struct abi<Windows::Devices::Input::Preview::IGazePointPreview>{ struct type : IInspectable
{
    virtual HRESULT __stdcall get_SourceDevice(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_EyeGazePosition(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_HeadGazePosition(void** value) noexcept = 0;
    virtual HRESULT __stdcall get_Timestamp(uint64_t* value) noexcept = 0;
    virtual HRESULT __stdcall get_HidInputReport(void** value) noexcept = 0;
};};

}
