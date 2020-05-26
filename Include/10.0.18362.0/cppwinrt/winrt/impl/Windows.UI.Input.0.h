﻿// C++/WinRT v1.0.190111.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Devices::Haptics {

struct SimpleHapticsController;

}

WINRT_EXPORT namespace winrt::Windows::Devices::Input {

enum class PointerDeviceType;
struct PointerDevice;

}

WINRT_EXPORT namespace winrt::Windows::Foundation {

struct Uri;

}

WINRT_EXPORT namespace winrt::Windows::Storage::Streams {

struct RandomAccessStreamReference;

}

WINRT_EXPORT namespace winrt::Windows::UI::Core {

struct KeyEventArgs;

}

WINRT_EXPORT namespace winrt::Windows::UI::Input {

enum class CrossSlidingState : int32_t
{
    Started = 0,
    Dragging = 1,
    Selecting = 2,
    SelectSpeedBumping = 3,
    SpeedBumping = 4,
    Rearranging = 5,
    Completed = 6,
};

enum class DraggingState : int32_t
{
    Started = 0,
    Continuing = 1,
    Completed = 2,
};

enum class EdgeGestureKind : int32_t
{
    Touch = 0,
    Keyboard = 1,
    Mouse = 2,
};

enum class GazeInputAccessStatus : int32_t
{
    Unspecified = 0,
    Allowed = 1,
    DeniedByUser = 2,
    DeniedBySystem = 3,
};

enum class GestureSettings : uint32_t
{
    None = 0x0,
    Tap = 0x1,
    DoubleTap = 0x2,
    Hold = 0x4,
    HoldWithMouse = 0x8,
    RightTap = 0x10,
    Drag = 0x20,
    ManipulationTranslateX = 0x40,
    ManipulationTranslateY = 0x80,
    ManipulationTranslateRailsX = 0x100,
    ManipulationTranslateRailsY = 0x200,
    ManipulationRotate = 0x400,
    ManipulationScale = 0x800,
    ManipulationTranslateInertia = 0x1000,
    ManipulationRotateInertia = 0x2000,
    ManipulationScaleInertia = 0x4000,
    CrossSlide = 0x8000,
    ManipulationMultipleFingerPanning = 0x10000,
};

enum class HoldingState : int32_t
{
    Started = 0,
    Completed = 1,
    Canceled = 2,
};

enum class InputActivationState : int32_t
{
    None = 0,
    Deactivated = 1,
    ActivatedNotForeground = 2,
    ActivatedInForeground = 3,
};

enum class PointerUpdateKind : int32_t
{
    Other = 0,
    LeftButtonPressed = 1,
    LeftButtonReleased = 2,
    RightButtonPressed = 3,
    RightButtonReleased = 4,
    MiddleButtonPressed = 5,
    MiddleButtonReleased = 6,
    XButton1Pressed = 7,
    XButton1Released = 8,
    XButton2Pressed = 9,
    XButton2Released = 10,
};

enum class RadialControllerMenuKnownIcon : int32_t
{
    Scroll = 0,
    Zoom = 1,
    UndoRedo = 2,
    Volume = 3,
    NextPreviousTrack = 4,
    Ruler = 5,
    InkColor = 6,
    InkThickness = 7,
    PenType = 8,
};

enum class RadialControllerSystemMenuItemKind : int32_t
{
    Scroll = 0,
    Zoom = 1,
    UndoRedo = 2,
    Volume = 3,
    NextPreviousTrack = 4,
};

struct IAttachableInputObject;
struct IAttachableInputObjectFactory;
struct ICrossSlidingEventArgs;
struct IDraggingEventArgs;
struct IEdgeGesture;
struct IEdgeGestureEventArgs;
struct IEdgeGestureStatics;
struct IGestureRecognizer;
struct IHoldingEventArgs;
struct IInputActivationListener;
struct IInputActivationListenerActivationChangedEventArgs;
struct IKeyboardDeliveryInterceptor;
struct IKeyboardDeliveryInterceptorStatics;
struct IManipulationCompletedEventArgs;
struct IManipulationInertiaStartingEventArgs;
struct IManipulationStartedEventArgs;
struct IManipulationUpdatedEventArgs;
struct IMouseWheelParameters;
struct IPointerPoint;
struct IPointerPointProperties;
struct IPointerPointProperties2;
struct IPointerPointStatics;
struct IPointerPointTransform;
struct IPointerVisualizationSettings;
struct IPointerVisualizationSettingsStatics;
struct IRadialController;
struct IRadialController2;
struct IRadialControllerButtonClickedEventArgs;
struct IRadialControllerButtonClickedEventArgs2;
struct IRadialControllerButtonHoldingEventArgs;
struct IRadialControllerButtonPressedEventArgs;
struct IRadialControllerButtonReleasedEventArgs;
struct IRadialControllerConfiguration;
struct IRadialControllerConfiguration2;
struct IRadialControllerConfigurationStatics;
struct IRadialControllerConfigurationStatics2;
struct IRadialControllerControlAcquiredEventArgs;
struct IRadialControllerControlAcquiredEventArgs2;
struct IRadialControllerMenu;
struct IRadialControllerMenuItem;
struct IRadialControllerMenuItemStatics;
struct IRadialControllerMenuItemStatics2;
struct IRadialControllerRotationChangedEventArgs;
struct IRadialControllerRotationChangedEventArgs2;
struct IRadialControllerScreenContact;
struct IRadialControllerScreenContactContinuedEventArgs;
struct IRadialControllerScreenContactContinuedEventArgs2;
struct IRadialControllerScreenContactEndedEventArgs;
struct IRadialControllerScreenContactStartedEventArgs;
struct IRadialControllerScreenContactStartedEventArgs2;
struct IRadialControllerStatics;
struct IRightTappedEventArgs;
struct ITappedEventArgs;
struct AttachableInputObject;
struct CrossSlidingEventArgs;
struct DraggingEventArgs;
struct EdgeGesture;
struct EdgeGestureEventArgs;
struct GestureRecognizer;
struct HoldingEventArgs;
struct InputActivationListener;
struct InputActivationListenerActivationChangedEventArgs;
struct KeyboardDeliveryInterceptor;
struct ManipulationCompletedEventArgs;
struct ManipulationInertiaStartingEventArgs;
struct ManipulationStartedEventArgs;
struct ManipulationUpdatedEventArgs;
struct MouseWheelParameters;
struct PointerPoint;
struct PointerPointProperties;
struct PointerVisualizationSettings;
struct RadialController;
struct RadialControllerButtonClickedEventArgs;
struct RadialControllerButtonHoldingEventArgs;
struct RadialControllerButtonPressedEventArgs;
struct RadialControllerButtonReleasedEventArgs;
struct RadialControllerConfiguration;
struct RadialControllerControlAcquiredEventArgs;
struct RadialControllerMenu;
struct RadialControllerMenuItem;
struct RadialControllerRotationChangedEventArgs;
struct RadialControllerScreenContact;
struct RadialControllerScreenContactContinuedEventArgs;
struct RadialControllerScreenContactEndedEventArgs;
struct RadialControllerScreenContactStartedEventArgs;
struct RightTappedEventArgs;
struct TappedEventArgs;
struct CrossSlideThresholds;
struct ManipulationDelta;
struct ManipulationVelocities;

}

namespace winrt::impl {

template<> struct is_enum_flag<Windows::UI::Input::GestureSettings> : std::true_type {};
template <> struct category<Windows::UI::Input::IAttachableInputObject>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::IAttachableInputObjectFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::ICrossSlidingEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::IDraggingEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::IEdgeGesture>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::IEdgeGestureEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::IEdgeGestureStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::IGestureRecognizer>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::IHoldingEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::IInputActivationListener>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::IInputActivationListenerActivationChangedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::IKeyboardDeliveryInterceptor>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::IKeyboardDeliveryInterceptorStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::IManipulationCompletedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::IManipulationInertiaStartingEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::IManipulationStartedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::IManipulationUpdatedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::IMouseWheelParameters>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::IPointerPoint>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::IPointerPointProperties>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::IPointerPointProperties2>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::IPointerPointStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::IPointerPointTransform>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::IPointerVisualizationSettings>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::IPointerVisualizationSettingsStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::IRadialController>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::IRadialController2>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::IRadialControllerButtonClickedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::IRadialControllerButtonClickedEventArgs2>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::IRadialControllerButtonHoldingEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::IRadialControllerButtonPressedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::IRadialControllerButtonReleasedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::IRadialControllerConfiguration>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::IRadialControllerConfiguration2>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::IRadialControllerConfigurationStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::IRadialControllerConfigurationStatics2>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::IRadialControllerControlAcquiredEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::IRadialControllerControlAcquiredEventArgs2>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::IRadialControllerMenu>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::IRadialControllerMenuItem>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::IRadialControllerMenuItemStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::IRadialControllerMenuItemStatics2>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::IRadialControllerRotationChangedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::IRadialControllerRotationChangedEventArgs2>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::IRadialControllerScreenContact>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::IRadialControllerScreenContactContinuedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::IRadialControllerScreenContactContinuedEventArgs2>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::IRadialControllerScreenContactEndedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::IRadialControllerScreenContactStartedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::IRadialControllerScreenContactStartedEventArgs2>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::IRadialControllerStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::IRightTappedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::ITappedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Input::AttachableInputObject>{ using type = class_category; };
template <> struct category<Windows::UI::Input::CrossSlidingEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Input::DraggingEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Input::EdgeGesture>{ using type = class_category; };
template <> struct category<Windows::UI::Input::EdgeGestureEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Input::GestureRecognizer>{ using type = class_category; };
template <> struct category<Windows::UI::Input::HoldingEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Input::InputActivationListener>{ using type = class_category; };
template <> struct category<Windows::UI::Input::InputActivationListenerActivationChangedEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Input::KeyboardDeliveryInterceptor>{ using type = class_category; };
template <> struct category<Windows::UI::Input::ManipulationCompletedEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Input::ManipulationInertiaStartingEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Input::ManipulationStartedEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Input::ManipulationUpdatedEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Input::MouseWheelParameters>{ using type = class_category; };
template <> struct category<Windows::UI::Input::PointerPoint>{ using type = class_category; };
template <> struct category<Windows::UI::Input::PointerPointProperties>{ using type = class_category; };
template <> struct category<Windows::UI::Input::PointerVisualizationSettings>{ using type = class_category; };
template <> struct category<Windows::UI::Input::RadialController>{ using type = class_category; };
template <> struct category<Windows::UI::Input::RadialControllerButtonClickedEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Input::RadialControllerButtonHoldingEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Input::RadialControllerButtonPressedEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Input::RadialControllerButtonReleasedEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Input::RadialControllerConfiguration>{ using type = class_category; };
template <> struct category<Windows::UI::Input::RadialControllerControlAcquiredEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Input::RadialControllerMenu>{ using type = class_category; };
template <> struct category<Windows::UI::Input::RadialControllerMenuItem>{ using type = class_category; };
template <> struct category<Windows::UI::Input::RadialControllerRotationChangedEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Input::RadialControllerScreenContact>{ using type = class_category; };
template <> struct category<Windows::UI::Input::RadialControllerScreenContactContinuedEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Input::RadialControllerScreenContactEndedEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Input::RadialControllerScreenContactStartedEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Input::RightTappedEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Input::TappedEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Input::CrossSlidingState>{ using type = enum_category; };
template <> struct category<Windows::UI::Input::DraggingState>{ using type = enum_category; };
template <> struct category<Windows::UI::Input::EdgeGestureKind>{ using type = enum_category; };
template <> struct category<Windows::UI::Input::GazeInputAccessStatus>{ using type = enum_category; };
template <> struct category<Windows::UI::Input::GestureSettings>{ using type = enum_category; };
template <> struct category<Windows::UI::Input::HoldingState>{ using type = enum_category; };
template <> struct category<Windows::UI::Input::InputActivationState>{ using type = enum_category; };
template <> struct category<Windows::UI::Input::PointerUpdateKind>{ using type = enum_category; };
template <> struct category<Windows::UI::Input::RadialControllerMenuKnownIcon>{ using type = enum_category; };
template <> struct category<Windows::UI::Input::RadialControllerSystemMenuItemKind>{ using type = enum_category; };
template <> struct category<Windows::UI::Input::CrossSlideThresholds>{ using type = struct_category<float,float,float,float>; };
template <> struct category<Windows::UI::Input::ManipulationDelta>{ using type = struct_category<Windows::Foundation::Point,float,float,float>; };
template <> struct category<Windows::UI::Input::ManipulationVelocities>{ using type = struct_category<Windows::Foundation::Point,float,float>; };
template <> struct name<Windows::UI::Input::IAttachableInputObject>{ static constexpr auto & value{ L"Windows.UI.Input.IAttachableInputObject" }; };
template <> struct name<Windows::UI::Input::IAttachableInputObjectFactory>{ static constexpr auto & value{ L"Windows.UI.Input.IAttachableInputObjectFactory" }; };
template <> struct name<Windows::UI::Input::ICrossSlidingEventArgs>{ static constexpr auto & value{ L"Windows.UI.Input.ICrossSlidingEventArgs" }; };
template <> struct name<Windows::UI::Input::IDraggingEventArgs>{ static constexpr auto & value{ L"Windows.UI.Input.IDraggingEventArgs" }; };
template <> struct name<Windows::UI::Input::IEdgeGesture>{ static constexpr auto & value{ L"Windows.UI.Input.IEdgeGesture" }; };
template <> struct name<Windows::UI::Input::IEdgeGestureEventArgs>{ static constexpr auto & value{ L"Windows.UI.Input.IEdgeGestureEventArgs" }; };
template <> struct name<Windows::UI::Input::IEdgeGestureStatics>{ static constexpr auto & value{ L"Windows.UI.Input.IEdgeGestureStatics" }; };
template <> struct name<Windows::UI::Input::IGestureRecognizer>{ static constexpr auto & value{ L"Windows.UI.Input.IGestureRecognizer" }; };
template <> struct name<Windows::UI::Input::IHoldingEventArgs>{ static constexpr auto & value{ L"Windows.UI.Input.IHoldingEventArgs" }; };
template <> struct name<Windows::UI::Input::IInputActivationListener>{ static constexpr auto & value{ L"Windows.UI.Input.IInputActivationListener" }; };
template <> struct name<Windows::UI::Input::IInputActivationListenerActivationChangedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Input.IInputActivationListenerActivationChangedEventArgs" }; };
template <> struct name<Windows::UI::Input::IKeyboardDeliveryInterceptor>{ static constexpr auto & value{ L"Windows.UI.Input.IKeyboardDeliveryInterceptor" }; };
template <> struct name<Windows::UI::Input::IKeyboardDeliveryInterceptorStatics>{ static constexpr auto & value{ L"Windows.UI.Input.IKeyboardDeliveryInterceptorStatics" }; };
template <> struct name<Windows::UI::Input::IManipulationCompletedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Input.IManipulationCompletedEventArgs" }; };
template <> struct name<Windows::UI::Input::IManipulationInertiaStartingEventArgs>{ static constexpr auto & value{ L"Windows.UI.Input.IManipulationInertiaStartingEventArgs" }; };
template <> struct name<Windows::UI::Input::IManipulationStartedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Input.IManipulationStartedEventArgs" }; };
template <> struct name<Windows::UI::Input::IManipulationUpdatedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Input.IManipulationUpdatedEventArgs" }; };
template <> struct name<Windows::UI::Input::IMouseWheelParameters>{ static constexpr auto & value{ L"Windows.UI.Input.IMouseWheelParameters" }; };
template <> struct name<Windows::UI::Input::IPointerPoint>{ static constexpr auto & value{ L"Windows.UI.Input.IPointerPoint" }; };
template <> struct name<Windows::UI::Input::IPointerPointProperties>{ static constexpr auto & value{ L"Windows.UI.Input.IPointerPointProperties" }; };
template <> struct name<Windows::UI::Input::IPointerPointProperties2>{ static constexpr auto & value{ L"Windows.UI.Input.IPointerPointProperties2" }; };
template <> struct name<Windows::UI::Input::IPointerPointStatics>{ static constexpr auto & value{ L"Windows.UI.Input.IPointerPointStatics" }; };
template <> struct name<Windows::UI::Input::IPointerPointTransform>{ static constexpr auto & value{ L"Windows.UI.Input.IPointerPointTransform" }; };
template <> struct name<Windows::UI::Input::IPointerVisualizationSettings>{ static constexpr auto & value{ L"Windows.UI.Input.IPointerVisualizationSettings" }; };
template <> struct name<Windows::UI::Input::IPointerVisualizationSettingsStatics>{ static constexpr auto & value{ L"Windows.UI.Input.IPointerVisualizationSettingsStatics" }; };
template <> struct name<Windows::UI::Input::IRadialController>{ static constexpr auto & value{ L"Windows.UI.Input.IRadialController" }; };
template <> struct name<Windows::UI::Input::IRadialController2>{ static constexpr auto & value{ L"Windows.UI.Input.IRadialController2" }; };
template <> struct name<Windows::UI::Input::IRadialControllerButtonClickedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Input.IRadialControllerButtonClickedEventArgs" }; };
template <> struct name<Windows::UI::Input::IRadialControllerButtonClickedEventArgs2>{ static constexpr auto & value{ L"Windows.UI.Input.IRadialControllerButtonClickedEventArgs2" }; };
template <> struct name<Windows::UI::Input::IRadialControllerButtonHoldingEventArgs>{ static constexpr auto & value{ L"Windows.UI.Input.IRadialControllerButtonHoldingEventArgs" }; };
template <> struct name<Windows::UI::Input::IRadialControllerButtonPressedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Input.IRadialControllerButtonPressedEventArgs" }; };
template <> struct name<Windows::UI::Input::IRadialControllerButtonReleasedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Input.IRadialControllerButtonReleasedEventArgs" }; };
template <> struct name<Windows::UI::Input::IRadialControllerConfiguration>{ static constexpr auto & value{ L"Windows.UI.Input.IRadialControllerConfiguration" }; };
template <> struct name<Windows::UI::Input::IRadialControllerConfiguration2>{ static constexpr auto & value{ L"Windows.UI.Input.IRadialControllerConfiguration2" }; };
template <> struct name<Windows::UI::Input::IRadialControllerConfigurationStatics>{ static constexpr auto & value{ L"Windows.UI.Input.IRadialControllerConfigurationStatics" }; };
template <> struct name<Windows::UI::Input::IRadialControllerConfigurationStatics2>{ static constexpr auto & value{ L"Windows.UI.Input.IRadialControllerConfigurationStatics2" }; };
template <> struct name<Windows::UI::Input::IRadialControllerControlAcquiredEventArgs>{ static constexpr auto & value{ L"Windows.UI.Input.IRadialControllerControlAcquiredEventArgs" }; };
template <> struct name<Windows::UI::Input::IRadialControllerControlAcquiredEventArgs2>{ static constexpr auto & value{ L"Windows.UI.Input.IRadialControllerControlAcquiredEventArgs2" }; };
template <> struct name<Windows::UI::Input::IRadialControllerMenu>{ static constexpr auto & value{ L"Windows.UI.Input.IRadialControllerMenu" }; };
template <> struct name<Windows::UI::Input::IRadialControllerMenuItem>{ static constexpr auto & value{ L"Windows.UI.Input.IRadialControllerMenuItem" }; };
template <> struct name<Windows::UI::Input::IRadialControllerMenuItemStatics>{ static constexpr auto & value{ L"Windows.UI.Input.IRadialControllerMenuItemStatics" }; };
template <> struct name<Windows::UI::Input::IRadialControllerMenuItemStatics2>{ static constexpr auto & value{ L"Windows.UI.Input.IRadialControllerMenuItemStatics2" }; };
template <> struct name<Windows::UI::Input::IRadialControllerRotationChangedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Input.IRadialControllerRotationChangedEventArgs" }; };
template <> struct name<Windows::UI::Input::IRadialControllerRotationChangedEventArgs2>{ static constexpr auto & value{ L"Windows.UI.Input.IRadialControllerRotationChangedEventArgs2" }; };
template <> struct name<Windows::UI::Input::IRadialControllerScreenContact>{ static constexpr auto & value{ L"Windows.UI.Input.IRadialControllerScreenContact" }; };
template <> struct name<Windows::UI::Input::IRadialControllerScreenContactContinuedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Input.IRadialControllerScreenContactContinuedEventArgs" }; };
template <> struct name<Windows::UI::Input::IRadialControllerScreenContactContinuedEventArgs2>{ static constexpr auto & value{ L"Windows.UI.Input.IRadialControllerScreenContactContinuedEventArgs2" }; };
template <> struct name<Windows::UI::Input::IRadialControllerScreenContactEndedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Input.IRadialControllerScreenContactEndedEventArgs" }; };
template <> struct name<Windows::UI::Input::IRadialControllerScreenContactStartedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Input.IRadialControllerScreenContactStartedEventArgs" }; };
template <> struct name<Windows::UI::Input::IRadialControllerScreenContactStartedEventArgs2>{ static constexpr auto & value{ L"Windows.UI.Input.IRadialControllerScreenContactStartedEventArgs2" }; };
template <> struct name<Windows::UI::Input::IRadialControllerStatics>{ static constexpr auto & value{ L"Windows.UI.Input.IRadialControllerStatics" }; };
template <> struct name<Windows::UI::Input::IRightTappedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Input.IRightTappedEventArgs" }; };
template <> struct name<Windows::UI::Input::ITappedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Input.ITappedEventArgs" }; };
template <> struct name<Windows::UI::Input::AttachableInputObject>{ static constexpr auto & value{ L"Windows.UI.Input.AttachableInputObject" }; };
template <> struct name<Windows::UI::Input::CrossSlidingEventArgs>{ static constexpr auto & value{ L"Windows.UI.Input.CrossSlidingEventArgs" }; };
template <> struct name<Windows::UI::Input::DraggingEventArgs>{ static constexpr auto & value{ L"Windows.UI.Input.DraggingEventArgs" }; };
template <> struct name<Windows::UI::Input::EdgeGesture>{ static constexpr auto & value{ L"Windows.UI.Input.EdgeGesture" }; };
template <> struct name<Windows::UI::Input::EdgeGestureEventArgs>{ static constexpr auto & value{ L"Windows.UI.Input.EdgeGestureEventArgs" }; };
template <> struct name<Windows::UI::Input::GestureRecognizer>{ static constexpr auto & value{ L"Windows.UI.Input.GestureRecognizer" }; };
template <> struct name<Windows::UI::Input::HoldingEventArgs>{ static constexpr auto & value{ L"Windows.UI.Input.HoldingEventArgs" }; };
template <> struct name<Windows::UI::Input::InputActivationListener>{ static constexpr auto & value{ L"Windows.UI.Input.InputActivationListener" }; };
template <> struct name<Windows::UI::Input::InputActivationListenerActivationChangedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Input.InputActivationListenerActivationChangedEventArgs" }; };
template <> struct name<Windows::UI::Input::KeyboardDeliveryInterceptor>{ static constexpr auto & value{ L"Windows.UI.Input.KeyboardDeliveryInterceptor" }; };
template <> struct name<Windows::UI::Input::ManipulationCompletedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Input.ManipulationCompletedEventArgs" }; };
template <> struct name<Windows::UI::Input::ManipulationInertiaStartingEventArgs>{ static constexpr auto & value{ L"Windows.UI.Input.ManipulationInertiaStartingEventArgs" }; };
template <> struct name<Windows::UI::Input::ManipulationStartedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Input.ManipulationStartedEventArgs" }; };
template <> struct name<Windows::UI::Input::ManipulationUpdatedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Input.ManipulationUpdatedEventArgs" }; };
template <> struct name<Windows::UI::Input::MouseWheelParameters>{ static constexpr auto & value{ L"Windows.UI.Input.MouseWheelParameters" }; };
template <> struct name<Windows::UI::Input::PointerPoint>{ static constexpr auto & value{ L"Windows.UI.Input.PointerPoint" }; };
template <> struct name<Windows::UI::Input::PointerPointProperties>{ static constexpr auto & value{ L"Windows.UI.Input.PointerPointProperties" }; };
template <> struct name<Windows::UI::Input::PointerVisualizationSettings>{ static constexpr auto & value{ L"Windows.UI.Input.PointerVisualizationSettings" }; };
template <> struct name<Windows::UI::Input::RadialController>{ static constexpr auto & value{ L"Windows.UI.Input.RadialController" }; };
template <> struct name<Windows::UI::Input::RadialControllerButtonClickedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Input.RadialControllerButtonClickedEventArgs" }; };
template <> struct name<Windows::UI::Input::RadialControllerButtonHoldingEventArgs>{ static constexpr auto & value{ L"Windows.UI.Input.RadialControllerButtonHoldingEventArgs" }; };
template <> struct name<Windows::UI::Input::RadialControllerButtonPressedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Input.RadialControllerButtonPressedEventArgs" }; };
template <> struct name<Windows::UI::Input::RadialControllerButtonReleasedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Input.RadialControllerButtonReleasedEventArgs" }; };
template <> struct name<Windows::UI::Input::RadialControllerConfiguration>{ static constexpr auto & value{ L"Windows.UI.Input.RadialControllerConfiguration" }; };
template <> struct name<Windows::UI::Input::RadialControllerControlAcquiredEventArgs>{ static constexpr auto & value{ L"Windows.UI.Input.RadialControllerControlAcquiredEventArgs" }; };
template <> struct name<Windows::UI::Input::RadialControllerMenu>{ static constexpr auto & value{ L"Windows.UI.Input.RadialControllerMenu" }; };
template <> struct name<Windows::UI::Input::RadialControllerMenuItem>{ static constexpr auto & value{ L"Windows.UI.Input.RadialControllerMenuItem" }; };
template <> struct name<Windows::UI::Input::RadialControllerRotationChangedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Input.RadialControllerRotationChangedEventArgs" }; };
template <> struct name<Windows::UI::Input::RadialControllerScreenContact>{ static constexpr auto & value{ L"Windows.UI.Input.RadialControllerScreenContact" }; };
template <> struct name<Windows::UI::Input::RadialControllerScreenContactContinuedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Input.RadialControllerScreenContactContinuedEventArgs" }; };
template <> struct name<Windows::UI::Input::RadialControllerScreenContactEndedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Input.RadialControllerScreenContactEndedEventArgs" }; };
template <> struct name<Windows::UI::Input::RadialControllerScreenContactStartedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Input.RadialControllerScreenContactStartedEventArgs" }; };
template <> struct name<Windows::UI::Input::RightTappedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Input.RightTappedEventArgs" }; };
template <> struct name<Windows::UI::Input::TappedEventArgs>{ static constexpr auto & value{ L"Windows.UI.Input.TappedEventArgs" }; };
template <> struct name<Windows::UI::Input::CrossSlidingState>{ static constexpr auto & value{ L"Windows.UI.Input.CrossSlidingState" }; };
template <> struct name<Windows::UI::Input::DraggingState>{ static constexpr auto & value{ L"Windows.UI.Input.DraggingState" }; };
template <> struct name<Windows::UI::Input::EdgeGestureKind>{ static constexpr auto & value{ L"Windows.UI.Input.EdgeGestureKind" }; };
template <> struct name<Windows::UI::Input::GazeInputAccessStatus>{ static constexpr auto & value{ L"Windows.UI.Input.GazeInputAccessStatus" }; };
template <> struct name<Windows::UI::Input::GestureSettings>{ static constexpr auto & value{ L"Windows.UI.Input.GestureSettings" }; };
template <> struct name<Windows::UI::Input::HoldingState>{ static constexpr auto & value{ L"Windows.UI.Input.HoldingState" }; };
template <> struct name<Windows::UI::Input::InputActivationState>{ static constexpr auto & value{ L"Windows.UI.Input.InputActivationState" }; };
template <> struct name<Windows::UI::Input::PointerUpdateKind>{ static constexpr auto & value{ L"Windows.UI.Input.PointerUpdateKind" }; };
template <> struct name<Windows::UI::Input::RadialControllerMenuKnownIcon>{ static constexpr auto & value{ L"Windows.UI.Input.RadialControllerMenuKnownIcon" }; };
template <> struct name<Windows::UI::Input::RadialControllerSystemMenuItemKind>{ static constexpr auto & value{ L"Windows.UI.Input.RadialControllerSystemMenuItemKind" }; };
template <> struct name<Windows::UI::Input::CrossSlideThresholds>{ static constexpr auto & value{ L"Windows.UI.Input.CrossSlideThresholds" }; };
template <> struct name<Windows::UI::Input::ManipulationDelta>{ static constexpr auto & value{ L"Windows.UI.Input.ManipulationDelta" }; };
template <> struct name<Windows::UI::Input::ManipulationVelocities>{ static constexpr auto & value{ L"Windows.UI.Input.ManipulationVelocities" }; };
template <> struct guid_storage<Windows::UI::Input::IAttachableInputObject>{ static constexpr guid value{ 0x9B822734,0xA3C1,0x542A,{ 0xB2,0xF4,0x0E,0x32,0xB7,0x73,0xFB,0x07 } }; };
template <> struct guid_storage<Windows::UI::Input::IAttachableInputObjectFactory>{ static constexpr guid value{ 0xA4C54C4E,0x42BC,0x58FA,{ 0xA6,0x40,0xEA,0x15,0x16,0xF4,0xC0,0x6B } }; };
template <> struct guid_storage<Windows::UI::Input::ICrossSlidingEventArgs>{ static constexpr guid value{ 0xE9374738,0x6F88,0x41D9,{ 0x87,0x20,0x78,0xE0,0x8E,0x39,0x83,0x49 } }; };
template <> struct guid_storage<Windows::UI::Input::IDraggingEventArgs>{ static constexpr guid value{ 0x1C905384,0x083C,0x4BD3,{ 0xB5,0x59,0x17,0x9C,0xDD,0xEB,0x33,0xEC } }; };
template <> struct guid_storage<Windows::UI::Input::IEdgeGesture>{ static constexpr guid value{ 0x580D5292,0x2AB1,0x49AA,{ 0xA7,0xF0,0x33,0xBD,0x3F,0x8D,0xF9,0xF1 } }; };
template <> struct guid_storage<Windows::UI::Input::IEdgeGestureEventArgs>{ static constexpr guid value{ 0x44FA4A24,0x2D09,0x42E1,{ 0x8B,0x5E,0x36,0x82,0x08,0x79,0x6A,0x4C } }; };
template <> struct guid_storage<Windows::UI::Input::IEdgeGestureStatics>{ static constexpr guid value{ 0xBC6A8519,0x18EE,0x4043,{ 0x98,0x39,0x4F,0xC5,0x84,0xD6,0x0A,0x14 } }; };
template <> struct guid_storage<Windows::UI::Input::IGestureRecognizer>{ static constexpr guid value{ 0xB47A37BF,0x3D6B,0x4F88,{ 0x83,0xE8,0x6D,0xCB,0x40,0x12,0xFF,0xB0 } }; };
template <> struct guid_storage<Windows::UI::Input::IHoldingEventArgs>{ static constexpr guid value{ 0x2BF755C5,0xE799,0x41B4,{ 0xBB,0x40,0x24,0x2F,0x40,0x95,0x9B,0x71 } }; };
template <> struct guid_storage<Windows::UI::Input::IInputActivationListener>{ static constexpr guid value{ 0x5D6D4ED2,0x28C7,0x5AE3,{ 0xAA,0x74,0xC9,0x18,0xA9,0xF2,0x43,0xCA } }; };
template <> struct guid_storage<Windows::UI::Input::IInputActivationListenerActivationChangedEventArgs>{ static constexpr guid value{ 0x7699B465,0x1DCF,0x5791,{ 0xB4,0xB9,0x6C,0xAF,0xBE,0xED,0x20,0x56 } }; };
template <> struct guid_storage<Windows::UI::Input::IKeyboardDeliveryInterceptor>{ static constexpr guid value{ 0xB4BAF068,0x8F49,0x446C,{ 0x8D,0xB5,0x8C,0x0F,0xFE,0x85,0xCC,0x9E } }; };
template <> struct guid_storage<Windows::UI::Input::IKeyboardDeliveryInterceptorStatics>{ static constexpr guid value{ 0xF9F63BA2,0xCEBA,0x4755,{ 0x8A,0x7E,0x14,0xC0,0xFF,0xEC,0xD2,0x39 } }; };
template <> struct guid_storage<Windows::UI::Input::IManipulationCompletedEventArgs>{ static constexpr guid value{ 0xB34AB22B,0xD19B,0x46FF,{ 0x9F,0x38,0xDE,0xC7,0x75,0x4B,0xB9,0xE7 } }; };
template <> struct guid_storage<Windows::UI::Input::IManipulationInertiaStartingEventArgs>{ static constexpr guid value{ 0xDD37A898,0x26BF,0x467A,{ 0x9C,0xE5,0xCC,0xF3,0xFB,0x11,0x37,0x1E } }; };
template <> struct guid_storage<Windows::UI::Input::IManipulationStartedEventArgs>{ static constexpr guid value{ 0xDDEC873E,0xCFCE,0x4932,{ 0x8C,0x1D,0x3C,0x3D,0x01,0x1A,0x34,0xC0 } }; };
template <> struct guid_storage<Windows::UI::Input::IManipulationUpdatedEventArgs>{ static constexpr guid value{ 0xCB354CE5,0xABB8,0x4F9F,{ 0xB3,0xCE,0x81,0x81,0xAA,0x61,0xAD,0x82 } }; };
template <> struct guid_storage<Windows::UI::Input::IMouseWheelParameters>{ static constexpr guid value{ 0xEAD0CA44,0x9DED,0x4037,{ 0x81,0x49,0x5E,0x4C,0xC2,0x56,0x44,0x68 } }; };
template <> struct guid_storage<Windows::UI::Input::IPointerPoint>{ static constexpr guid value{ 0xE995317D,0x7296,0x42D9,{ 0x82,0x33,0xC5,0xBE,0x73,0xB7,0x4A,0x4A } }; };
template <> struct guid_storage<Windows::UI::Input::IPointerPointProperties>{ static constexpr guid value{ 0xC79D8A4B,0xC163,0x4EE7,{ 0x80,0x3F,0x67,0xCE,0x79,0xF9,0x97,0x2D } }; };
template <> struct guid_storage<Windows::UI::Input::IPointerPointProperties2>{ static constexpr guid value{ 0x22C3433A,0xC83B,0x41C0,{ 0xA2,0x96,0x5E,0x23,0x2D,0x64,0xD6,0xAF } }; };
template <> struct guid_storage<Windows::UI::Input::IPointerPointStatics>{ static constexpr guid value{ 0xA506638D,0x2A1A,0x413E,{ 0xBC,0x75,0x9F,0x38,0x38,0x1C,0xC0,0x69 } }; };
template <> struct guid_storage<Windows::UI::Input::IPointerPointTransform>{ static constexpr guid value{ 0x4D5FE14F,0xB87C,0x4028,{ 0xBC,0x9C,0x59,0xE9,0x94,0x7F,0xB0,0x56 } }; };
template <> struct guid_storage<Windows::UI::Input::IPointerVisualizationSettings>{ static constexpr guid value{ 0x4D1E6461,0x84F7,0x499D,{ 0xBD,0x91,0x2A,0x36,0xE2,0xB7,0xAA,0xA2 } }; };
template <> struct guid_storage<Windows::UI::Input::IPointerVisualizationSettingsStatics>{ static constexpr guid value{ 0x68870EDB,0x165B,0x4214,{ 0xB4,0xF3,0x58,0x4E,0xCA,0x8C,0x8A,0x69 } }; };
template <> struct guid_storage<Windows::UI::Input::IRadialController>{ static constexpr guid value{ 0x3055D1C8,0xDF51,0x43D4,{ 0xB2,0x3B,0x0E,0x10,0x37,0x46,0x7A,0x09 } }; };
template <> struct guid_storage<Windows::UI::Input::IRadialController2>{ static constexpr guid value{ 0x3D577EFF,0x4CEE,0x11E6,{ 0xB5,0x35,0x00,0x1B,0xDC,0x06,0xAB,0x3B } }; };
template <> struct guid_storage<Windows::UI::Input::IRadialControllerButtonClickedEventArgs>{ static constexpr guid value{ 0x206AA438,0xE651,0x11E5,{ 0xBF,0x62,0x2C,0x27,0xD7,0x40,0x4E,0x85 } }; };
template <> struct guid_storage<Windows::UI::Input::IRadialControllerButtonClickedEventArgs2>{ static constexpr guid value{ 0x3D577EF3,0x3CEE,0x11E6,{ 0xB5,0x35,0x00,0x1B,0xDC,0x06,0xAB,0x3B } }; };
template <> struct guid_storage<Windows::UI::Input::IRadialControllerButtonHoldingEventArgs>{ static constexpr guid value{ 0x3D577EEE,0x3CEE,0x11E6,{ 0xB5,0x35,0x00,0x1B,0xDC,0x06,0xAB,0x3B } }; };
template <> struct guid_storage<Windows::UI::Input::IRadialControllerButtonPressedEventArgs>{ static constexpr guid value{ 0x3D577EED,0x4CEE,0x11E6,{ 0xB5,0x35,0x00,0x1B,0xDC,0x06,0xAB,0x3B } }; };
template <> struct guid_storage<Windows::UI::Input::IRadialControllerButtonReleasedEventArgs>{ static constexpr guid value{ 0x3D577EEF,0x3CEE,0x11E6,{ 0xB5,0x35,0x00,0x1B,0xDC,0x06,0xAB,0x3B } }; };
template <> struct guid_storage<Windows::UI::Input::IRadialControllerConfiguration>{ static constexpr guid value{ 0xA6B79ECB,0x6A52,0x4430,{ 0x91,0x0C,0x56,0x37,0x0A,0x9D,0x6B,0x42 } }; };
template <> struct guid_storage<Windows::UI::Input::IRadialControllerConfiguration2>{ static constexpr guid value{ 0x3D577EF7,0x3CEE,0x11E6,{ 0xB5,0x35,0x00,0x1B,0xDC,0x06,0xAB,0x3B } }; };
template <> struct guid_storage<Windows::UI::Input::IRadialControllerConfigurationStatics>{ static constexpr guid value{ 0x79B6B0E5,0x069A,0x4486,{ 0xA9,0x9D,0x8D,0xB7,0x72,0xB9,0x64,0x2F } }; };
template <> struct guid_storage<Windows::UI::Input::IRadialControllerConfigurationStatics2>{ static constexpr guid value{ 0x53E08B17,0xE205,0x48D3,{ 0x9C,0xAF,0x80,0xFF,0x47,0xC4,0xD7,0xC7 } }; };
template <> struct guid_storage<Windows::UI::Input::IRadialControllerControlAcquiredEventArgs>{ static constexpr guid value{ 0x206AA439,0xE651,0x11E5,{ 0xBF,0x62,0x2C,0x27,0xD7,0x40,0x4E,0x85 } }; };
template <> struct guid_storage<Windows::UI::Input::IRadialControllerControlAcquiredEventArgs2>{ static constexpr guid value{ 0x3D577EF4,0x3CEE,0x11E6,{ 0xB5,0x35,0x00,0x1B,0xDC,0x06,0xAB,0x3B } }; };
template <> struct guid_storage<Windows::UI::Input::IRadialControllerMenu>{ static constexpr guid value{ 0x8506B35D,0xF640,0x4412,{ 0xAB,0xA0,0xBA,0xD0,0x77,0xE5,0xEA,0x8A } }; };
template <> struct guid_storage<Windows::UI::Input::IRadialControllerMenuItem>{ static constexpr guid value{ 0xC80FC98D,0xAD0B,0x4C9C,{ 0x8F,0x2F,0x13,0x6A,0x23,0x73,0xA6,0xBA } }; };
template <> struct guid_storage<Windows::UI::Input::IRadialControllerMenuItemStatics>{ static constexpr guid value{ 0x249E0887,0xD842,0x4524,{ 0x9D,0xF8,0xE0,0xD6,0x47,0xED,0xC8,0x87 } }; };
template <> struct guid_storage<Windows::UI::Input::IRadialControllerMenuItemStatics2>{ static constexpr guid value{ 0x0CBB70BE,0x7E3E,0x48BD,{ 0xBE,0x04,0x2C,0x7F,0xCA,0xA9,0xC1,0xFF } }; };
template <> struct guid_storage<Windows::UI::Input::IRadialControllerRotationChangedEventArgs>{ static constexpr guid value{ 0x206AA435,0xE651,0x11E5,{ 0xBF,0x62,0x2C,0x27,0xD7,0x40,0x4E,0x85 } }; };
template <> struct guid_storage<Windows::UI::Input::IRadialControllerRotationChangedEventArgs2>{ static constexpr guid value{ 0x3D577EEC,0x4CEE,0x11E6,{ 0xB5,0x35,0x00,0x1B,0xDC,0x06,0xAB,0x3B } }; };
template <> struct guid_storage<Windows::UI::Input::IRadialControllerScreenContact>{ static constexpr guid value{ 0x206AA434,0xE651,0x11E5,{ 0xBF,0x62,0x2C,0x27,0xD7,0x40,0x4E,0x85 } }; };
template <> struct guid_storage<Windows::UI::Input::IRadialControllerScreenContactContinuedEventArgs>{ static constexpr guid value{ 0x206AA437,0xE651,0x11E5,{ 0xBF,0x62,0x2C,0x27,0xD7,0x40,0x4E,0x85 } }; };
template <> struct guid_storage<Windows::UI::Input::IRadialControllerScreenContactContinuedEventArgs2>{ static constexpr guid value{ 0x3D577EF1,0x3CEE,0x11E6,{ 0xB5,0x35,0x00,0x1B,0xDC,0x06,0xAB,0x3B } }; };
template <> struct guid_storage<Windows::UI::Input::IRadialControllerScreenContactEndedEventArgs>{ static constexpr guid value{ 0x3D577EF2,0x3CEE,0x11E6,{ 0xB5,0x35,0x00,0x1B,0xDC,0x06,0xAB,0x3B } }; };
template <> struct guid_storage<Windows::UI::Input::IRadialControllerScreenContactStartedEventArgs>{ static constexpr guid value{ 0x206AA436,0xE651,0x11E5,{ 0xBF,0x62,0x2C,0x27,0xD7,0x40,0x4E,0x85 } }; };
template <> struct guid_storage<Windows::UI::Input::IRadialControllerScreenContactStartedEventArgs2>{ static constexpr guid value{ 0x3D577EF0,0x3CEE,0x11E6,{ 0xB5,0x35,0x00,0x1B,0xDC,0x06,0xAB,0x3B } }; };
template <> struct guid_storage<Windows::UI::Input::IRadialControllerStatics>{ static constexpr guid value{ 0xFADED0B7,0xB84C,0x4894,{ 0x87,0xAA,0x8F,0x25,0xAA,0x5F,0x28,0x8B } }; };
template <> struct guid_storage<Windows::UI::Input::IRightTappedEventArgs>{ static constexpr guid value{ 0x4CBF40BD,0xAF7A,0x4A36,{ 0x94,0x76,0xB1,0xDC,0xE1,0x41,0x70,0x9A } }; };
template <> struct guid_storage<Windows::UI::Input::ITappedEventArgs>{ static constexpr guid value{ 0xCFA126E4,0x253A,0x4C3C,{ 0x95,0x3B,0x39,0x5C,0x37,0xAE,0xD3,0x09 } }; };
template <> struct default_interface<Windows::UI::Input::AttachableInputObject>{ using type = Windows::UI::Input::IAttachableInputObject; };
template <> struct default_interface<Windows::UI::Input::CrossSlidingEventArgs>{ using type = Windows::UI::Input::ICrossSlidingEventArgs; };
template <> struct default_interface<Windows::UI::Input::DraggingEventArgs>{ using type = Windows::UI::Input::IDraggingEventArgs; };
template <> struct default_interface<Windows::UI::Input::EdgeGesture>{ using type = Windows::UI::Input::IEdgeGesture; };
template <> struct default_interface<Windows::UI::Input::EdgeGestureEventArgs>{ using type = Windows::UI::Input::IEdgeGestureEventArgs; };
template <> struct default_interface<Windows::UI::Input::GestureRecognizer>{ using type = Windows::UI::Input::IGestureRecognizer; };
template <> struct default_interface<Windows::UI::Input::HoldingEventArgs>{ using type = Windows::UI::Input::IHoldingEventArgs; };
template <> struct default_interface<Windows::UI::Input::InputActivationListener>{ using type = Windows::UI::Input::IInputActivationListener; };
template <> struct default_interface<Windows::UI::Input::InputActivationListenerActivationChangedEventArgs>{ using type = Windows::UI::Input::IInputActivationListenerActivationChangedEventArgs; };
template <> struct default_interface<Windows::UI::Input::KeyboardDeliveryInterceptor>{ using type = Windows::UI::Input::IKeyboardDeliveryInterceptor; };
template <> struct default_interface<Windows::UI::Input::ManipulationCompletedEventArgs>{ using type = Windows::UI::Input::IManipulationCompletedEventArgs; };
template <> struct default_interface<Windows::UI::Input::ManipulationInertiaStartingEventArgs>{ using type = Windows::UI::Input::IManipulationInertiaStartingEventArgs; };
template <> struct default_interface<Windows::UI::Input::ManipulationStartedEventArgs>{ using type = Windows::UI::Input::IManipulationStartedEventArgs; };
template <> struct default_interface<Windows::UI::Input::ManipulationUpdatedEventArgs>{ using type = Windows::UI::Input::IManipulationUpdatedEventArgs; };
template <> struct default_interface<Windows::UI::Input::MouseWheelParameters>{ using type = Windows::UI::Input::IMouseWheelParameters; };
template <> struct default_interface<Windows::UI::Input::PointerPoint>{ using type = Windows::UI::Input::IPointerPoint; };
template <> struct default_interface<Windows::UI::Input::PointerPointProperties>{ using type = Windows::UI::Input::IPointerPointProperties; };
template <> struct default_interface<Windows::UI::Input::PointerVisualizationSettings>{ using type = Windows::UI::Input::IPointerVisualizationSettings; };
template <> struct default_interface<Windows::UI::Input::RadialController>{ using type = Windows::UI::Input::IRadialController; };
template <> struct default_interface<Windows::UI::Input::RadialControllerButtonClickedEventArgs>{ using type = Windows::UI::Input::IRadialControllerButtonClickedEventArgs; };
template <> struct default_interface<Windows::UI::Input::RadialControllerButtonHoldingEventArgs>{ using type = Windows::UI::Input::IRadialControllerButtonHoldingEventArgs; };
template <> struct default_interface<Windows::UI::Input::RadialControllerButtonPressedEventArgs>{ using type = Windows::UI::Input::IRadialControllerButtonPressedEventArgs; };
template <> struct default_interface<Windows::UI::Input::RadialControllerButtonReleasedEventArgs>{ using type = Windows::UI::Input::IRadialControllerButtonReleasedEventArgs; };
template <> struct default_interface<Windows::UI::Input::RadialControllerConfiguration>{ using type = Windows::UI::Input::IRadialControllerConfiguration; };
template <> struct default_interface<Windows::UI::Input::RadialControllerControlAcquiredEventArgs>{ using type = Windows::UI::Input::IRadialControllerControlAcquiredEventArgs; };
template <> struct default_interface<Windows::UI::Input::RadialControllerMenu>{ using type = Windows::UI::Input::IRadialControllerMenu; };
template <> struct default_interface<Windows::UI::Input::RadialControllerMenuItem>{ using type = Windows::UI::Input::IRadialControllerMenuItem; };
template <> struct default_interface<Windows::UI::Input::RadialControllerRotationChangedEventArgs>{ using type = Windows::UI::Input::IRadialControllerRotationChangedEventArgs; };
template <> struct default_interface<Windows::UI::Input::RadialControllerScreenContact>{ using type = Windows::UI::Input::IRadialControllerScreenContact; };
template <> struct default_interface<Windows::UI::Input::RadialControllerScreenContactContinuedEventArgs>{ using type = Windows::UI::Input::IRadialControllerScreenContactContinuedEventArgs; };
template <> struct default_interface<Windows::UI::Input::RadialControllerScreenContactEndedEventArgs>{ using type = Windows::UI::Input::IRadialControllerScreenContactEndedEventArgs; };
template <> struct default_interface<Windows::UI::Input::RadialControllerScreenContactStartedEventArgs>{ using type = Windows::UI::Input::IRadialControllerScreenContactStartedEventArgs; };
template <> struct default_interface<Windows::UI::Input::RightTappedEventArgs>{ using type = Windows::UI::Input::IRightTappedEventArgs; };
template <> struct default_interface<Windows::UI::Input::TappedEventArgs>{ using type = Windows::UI::Input::ITappedEventArgs; };

template <> struct abi<Windows::UI::Input::IAttachableInputObject>{ struct type : IInspectable
{
};};

template <> struct abi<Windows::UI::Input::IAttachableInputObjectFactory>{ struct type : IInspectable
{
};};

template <> struct abi<Windows::UI::Input::ICrossSlidingEventArgs>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_PointerDeviceType(Windows::Devices::Input::PointerDeviceType* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Position(Windows::Foundation::Point* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_CrossSlidingState(Windows::UI::Input::CrossSlidingState* value) noexcept = 0;
};};

template <> struct abi<Windows::UI::Input::IDraggingEventArgs>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_PointerDeviceType(Windows::Devices::Input::PointerDeviceType* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Position(Windows::Foundation::Point* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_DraggingState(Windows::UI::Input::DraggingState* value) noexcept = 0;
};};

template <> struct abi<Windows::UI::Input::IEdgeGesture>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL add_Starting(void* handler, winrt::event_token* token) noexcept = 0;
    virtual int32_t WINRT_CALL remove_Starting(winrt::event_token token) noexcept = 0;
    virtual int32_t WINRT_CALL add_Completed(void* handler, winrt::event_token* token) noexcept = 0;
    virtual int32_t WINRT_CALL remove_Completed(winrt::event_token token) noexcept = 0;
    virtual int32_t WINRT_CALL add_Canceled(void* handler, winrt::event_token* token) noexcept = 0;
    virtual int32_t WINRT_CALL remove_Canceled(winrt::event_token token) noexcept = 0;
};};

template <> struct abi<Windows::UI::Input::IEdgeGestureEventArgs>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_Kind(Windows::UI::Input::EdgeGestureKind* value) noexcept = 0;
};};

template <> struct abi<Windows::UI::Input::IEdgeGestureStatics>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL GetForCurrentView(void** current) noexcept = 0;
};};

template <> struct abi<Windows::UI::Input::IGestureRecognizer>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_GestureSettings(Windows::UI::Input::GestureSettings* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_GestureSettings(Windows::UI::Input::GestureSettings value) noexcept = 0;
    virtual int32_t WINRT_CALL get_IsInertial(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_IsActive(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_ShowGestureFeedback(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_ShowGestureFeedback(bool value) noexcept = 0;
    virtual int32_t WINRT_CALL get_PivotCenter(Windows::Foundation::Point* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_PivotCenter(Windows::Foundation::Point value) noexcept = 0;
    virtual int32_t WINRT_CALL get_PivotRadius(float* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_PivotRadius(float value) noexcept = 0;
    virtual int32_t WINRT_CALL get_InertiaTranslationDeceleration(float* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_InertiaTranslationDeceleration(float value) noexcept = 0;
    virtual int32_t WINRT_CALL get_InertiaRotationDeceleration(float* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_InertiaRotationDeceleration(float value) noexcept = 0;
    virtual int32_t WINRT_CALL get_InertiaExpansionDeceleration(float* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_InertiaExpansionDeceleration(float value) noexcept = 0;
    virtual int32_t WINRT_CALL get_InertiaTranslationDisplacement(float* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_InertiaTranslationDisplacement(float value) noexcept = 0;
    virtual int32_t WINRT_CALL get_InertiaRotationAngle(float* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_InertiaRotationAngle(float value) noexcept = 0;
    virtual int32_t WINRT_CALL get_InertiaExpansion(float* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_InertiaExpansion(float value) noexcept = 0;
    virtual int32_t WINRT_CALL get_ManipulationExact(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_ManipulationExact(bool value) noexcept = 0;
    virtual int32_t WINRT_CALL get_CrossSlideThresholds(struct struct_Windows_UI_Input_CrossSlideThresholds* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_CrossSlideThresholds(struct struct_Windows_UI_Input_CrossSlideThresholds value) noexcept = 0;
    virtual int32_t WINRT_CALL get_CrossSlideHorizontally(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_CrossSlideHorizontally(bool value) noexcept = 0;
    virtual int32_t WINRT_CALL get_CrossSlideExact(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_CrossSlideExact(bool value) noexcept = 0;
    virtual int32_t WINRT_CALL get_AutoProcessInertia(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_AutoProcessInertia(bool value) noexcept = 0;
    virtual int32_t WINRT_CALL get_MouseWheelParameters(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL CanBeDoubleTap(void* value, bool* canBeDoubleTap) noexcept = 0;
    virtual int32_t WINRT_CALL ProcessDownEvent(void* value) noexcept = 0;
    virtual int32_t WINRT_CALL ProcessMoveEvents(void* value) noexcept = 0;
    virtual int32_t WINRT_CALL ProcessUpEvent(void* value) noexcept = 0;
    virtual int32_t WINRT_CALL ProcessMouseWheelEvent(void* value, bool isShiftKeyDown, bool isControlKeyDown) noexcept = 0;
    virtual int32_t WINRT_CALL ProcessInertia() noexcept = 0;
    virtual int32_t WINRT_CALL CompleteGesture() noexcept = 0;
    virtual int32_t WINRT_CALL add_Tapped(void* handler, winrt::event_token* pCookie) noexcept = 0;
    virtual int32_t WINRT_CALL remove_Tapped(winrt::event_token cookie) noexcept = 0;
    virtual int32_t WINRT_CALL add_RightTapped(void* handler, winrt::event_token* pCookie) noexcept = 0;
    virtual int32_t WINRT_CALL remove_RightTapped(winrt::event_token cookie) noexcept = 0;
    virtual int32_t WINRT_CALL add_Holding(void* handler, winrt::event_token* pCookie) noexcept = 0;
    virtual int32_t WINRT_CALL remove_Holding(winrt::event_token cookie) noexcept = 0;
    virtual int32_t WINRT_CALL add_Dragging(void* handler, winrt::event_token* pCookie) noexcept = 0;
    virtual int32_t WINRT_CALL remove_Dragging(winrt::event_token cookie) noexcept = 0;
    virtual int32_t WINRT_CALL add_ManipulationStarted(void* handler, winrt::event_token* pCookie) noexcept = 0;
    virtual int32_t WINRT_CALL remove_ManipulationStarted(winrt::event_token cookie) noexcept = 0;
    virtual int32_t WINRT_CALL add_ManipulationUpdated(void* handler, winrt::event_token* pCookie) noexcept = 0;
    virtual int32_t WINRT_CALL remove_ManipulationUpdated(winrt::event_token cookie) noexcept = 0;
    virtual int32_t WINRT_CALL add_ManipulationInertiaStarting(void* handler, winrt::event_token* pCookie) noexcept = 0;
    virtual int32_t WINRT_CALL remove_ManipulationInertiaStarting(winrt::event_token cookie) noexcept = 0;
    virtual int32_t WINRT_CALL add_ManipulationCompleted(void* handler, winrt::event_token* pCookie) noexcept = 0;
    virtual int32_t WINRT_CALL remove_ManipulationCompleted(winrt::event_token cookie) noexcept = 0;
    virtual int32_t WINRT_CALL add_CrossSliding(void* handler, winrt::event_token* pCookie) noexcept = 0;
    virtual int32_t WINRT_CALL remove_CrossSliding(winrt::event_token cookie) noexcept = 0;
};};

template <> struct abi<Windows::UI::Input::IHoldingEventArgs>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_PointerDeviceType(Windows::Devices::Input::PointerDeviceType* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Position(Windows::Foundation::Point* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_HoldingState(Windows::UI::Input::HoldingState* value) noexcept = 0;
};};

template <> struct abi<Windows::UI::Input::IInputActivationListener>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_State(Windows::UI::Input::InputActivationState* value) noexcept = 0;
    virtual int32_t WINRT_CALL add_InputActivationChanged(void* handler, winrt::event_token* token) noexcept = 0;
    virtual int32_t WINRT_CALL remove_InputActivationChanged(winrt::event_token token) noexcept = 0;
};};

template <> struct abi<Windows::UI::Input::IInputActivationListenerActivationChangedEventArgs>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_State(Windows::UI::Input::InputActivationState* value) noexcept = 0;
};};

template <> struct abi<Windows::UI::Input::IKeyboardDeliveryInterceptor>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_IsInterceptionEnabledWhenInForeground(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_IsInterceptionEnabledWhenInForeground(bool value) noexcept = 0;
    virtual int32_t WINRT_CALL add_KeyDown(void* handler, winrt::event_token* token) noexcept = 0;
    virtual int32_t WINRT_CALL remove_KeyDown(winrt::event_token token) noexcept = 0;
    virtual int32_t WINRT_CALL add_KeyUp(void* handler, winrt::event_token* token) noexcept = 0;
    virtual int32_t WINRT_CALL remove_KeyUp(winrt::event_token token) noexcept = 0;
};};

template <> struct abi<Windows::UI::Input::IKeyboardDeliveryInterceptorStatics>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL GetForCurrentView(void** keyboardDeliverySettings) noexcept = 0;
};};

template <> struct abi<Windows::UI::Input::IManipulationCompletedEventArgs>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_PointerDeviceType(Windows::Devices::Input::PointerDeviceType* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Position(Windows::Foundation::Point* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Cumulative(struct struct_Windows_UI_Input_ManipulationDelta* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Velocities(struct struct_Windows_UI_Input_ManipulationVelocities* value) noexcept = 0;
};};

template <> struct abi<Windows::UI::Input::IManipulationInertiaStartingEventArgs>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_PointerDeviceType(Windows::Devices::Input::PointerDeviceType* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Position(Windows::Foundation::Point* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Delta(struct struct_Windows_UI_Input_ManipulationDelta* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Cumulative(struct struct_Windows_UI_Input_ManipulationDelta* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Velocities(struct struct_Windows_UI_Input_ManipulationVelocities* value) noexcept = 0;
};};

template <> struct abi<Windows::UI::Input::IManipulationStartedEventArgs>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_PointerDeviceType(Windows::Devices::Input::PointerDeviceType* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Position(Windows::Foundation::Point* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Cumulative(struct struct_Windows_UI_Input_ManipulationDelta* value) noexcept = 0;
};};

template <> struct abi<Windows::UI::Input::IManipulationUpdatedEventArgs>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_PointerDeviceType(Windows::Devices::Input::PointerDeviceType* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Position(Windows::Foundation::Point* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Delta(struct struct_Windows_UI_Input_ManipulationDelta* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Cumulative(struct struct_Windows_UI_Input_ManipulationDelta* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Velocities(struct struct_Windows_UI_Input_ManipulationVelocities* value) noexcept = 0;
};};

template <> struct abi<Windows::UI::Input::IMouseWheelParameters>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_CharTranslation(Windows::Foundation::Point* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_CharTranslation(Windows::Foundation::Point value) noexcept = 0;
    virtual int32_t WINRT_CALL get_DeltaScale(float* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_DeltaScale(float value) noexcept = 0;
    virtual int32_t WINRT_CALL get_DeltaRotationAngle(float* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_DeltaRotationAngle(float value) noexcept = 0;
    virtual int32_t WINRT_CALL get_PageTranslation(Windows::Foundation::Point* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_PageTranslation(Windows::Foundation::Point value) noexcept = 0;
};};

template <> struct abi<Windows::UI::Input::IPointerPoint>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_PointerDevice(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Position(Windows::Foundation::Point* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_RawPosition(Windows::Foundation::Point* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_PointerId(uint32_t* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_FrameId(uint32_t* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Timestamp(uint64_t* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_IsInContact(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Properties(void** value) noexcept = 0;
};};

template <> struct abi<Windows::UI::Input::IPointerPointProperties>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_Pressure(float* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_IsInverted(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_IsEraser(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Orientation(float* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_XTilt(float* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_YTilt(float* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Twist(float* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_ContactRect(Windows::Foundation::Rect* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_ContactRectRaw(Windows::Foundation::Rect* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_TouchConfidence(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_IsLeftButtonPressed(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_IsRightButtonPressed(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_IsMiddleButtonPressed(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_MouseWheelDelta(int32_t* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_IsHorizontalMouseWheel(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_IsPrimary(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_IsInRange(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_IsCanceled(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_IsBarrelButtonPressed(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_IsXButton1Pressed(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_IsXButton2Pressed(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_PointerUpdateKind(Windows::UI::Input::PointerUpdateKind* value) noexcept = 0;
    virtual int32_t WINRT_CALL HasUsage(uint32_t usagePage, uint32_t usageId, bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL GetUsageValue(uint32_t usagePage, uint32_t usageId, int32_t* value) noexcept = 0;
};};

template <> struct abi<Windows::UI::Input::IPointerPointProperties2>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_ZDistance(void** value) noexcept = 0;
};};

template <> struct abi<Windows::UI::Input::IPointerPointStatics>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL GetCurrentPoint(uint32_t pointerId, void** pointerPoint) noexcept = 0;
    virtual int32_t WINRT_CALL GetIntermediatePoints(uint32_t pointerId, void** pointerPoints) noexcept = 0;
    virtual int32_t WINRT_CALL GetCurrentPointTransformed(uint32_t pointerId, void* transform, void** pointerPoint) noexcept = 0;
    virtual int32_t WINRT_CALL GetIntermediatePointsTransformed(uint32_t pointerId, void* transform, void** pointerPoints) noexcept = 0;
};};

template <> struct abi<Windows::UI::Input::IPointerPointTransform>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_Inverse(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL TryTransform(Windows::Foundation::Point inPoint, Windows::Foundation::Point* outPoint, bool* returnValue) noexcept = 0;
    virtual int32_t WINRT_CALL TransformBounds(Windows::Foundation::Rect rect, Windows::Foundation::Rect* returnValue) noexcept = 0;
};};

template <> struct abi<Windows::UI::Input::IPointerVisualizationSettings>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL put_IsContactFeedbackEnabled(bool value) noexcept = 0;
    virtual int32_t WINRT_CALL get_IsContactFeedbackEnabled(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_IsBarrelButtonFeedbackEnabled(bool value) noexcept = 0;
    virtual int32_t WINRT_CALL get_IsBarrelButtonFeedbackEnabled(bool* value) noexcept = 0;
};};

template <> struct abi<Windows::UI::Input::IPointerVisualizationSettingsStatics>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL GetForCurrentView(void** visualizationSettings) noexcept = 0;
};};

template <> struct abi<Windows::UI::Input::IRadialController>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_Menu(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_RotationResolutionInDegrees(double* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_RotationResolutionInDegrees(double value) noexcept = 0;
    virtual int32_t WINRT_CALL get_UseAutomaticHapticFeedback(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_UseAutomaticHapticFeedback(bool value) noexcept = 0;
    virtual int32_t WINRT_CALL add_ScreenContactStarted(void* handler, winrt::event_token* cookie) noexcept = 0;
    virtual int32_t WINRT_CALL remove_ScreenContactStarted(winrt::event_token cookie) noexcept = 0;
    virtual int32_t WINRT_CALL add_ScreenContactEnded(void* handler, winrt::event_token* cookie) noexcept = 0;
    virtual int32_t WINRT_CALL remove_ScreenContactEnded(winrt::event_token cookie) noexcept = 0;
    virtual int32_t WINRT_CALL add_ScreenContactContinued(void* handler, winrt::event_token* cookie) noexcept = 0;
    virtual int32_t WINRT_CALL remove_ScreenContactContinued(winrt::event_token cookie) noexcept = 0;
    virtual int32_t WINRT_CALL add_ControlLost(void* handler, winrt::event_token* cookie) noexcept = 0;
    virtual int32_t WINRT_CALL remove_ControlLost(winrt::event_token cookie) noexcept = 0;
    virtual int32_t WINRT_CALL add_RotationChanged(void* handler, winrt::event_token* token) noexcept = 0;
    virtual int32_t WINRT_CALL remove_RotationChanged(winrt::event_token token) noexcept = 0;
    virtual int32_t WINRT_CALL add_ButtonClicked(void* handler, winrt::event_token* token) noexcept = 0;
    virtual int32_t WINRT_CALL remove_ButtonClicked(winrt::event_token token) noexcept = 0;
    virtual int32_t WINRT_CALL add_ControlAcquired(void* handler, winrt::event_token* cookie) noexcept = 0;
    virtual int32_t WINRT_CALL remove_ControlAcquired(winrt::event_token cookie) noexcept = 0;
};};

template <> struct abi<Windows::UI::Input::IRadialController2>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL add_ButtonPressed(void* handler, winrt::event_token* token) noexcept = 0;
    virtual int32_t WINRT_CALL remove_ButtonPressed(winrt::event_token token) noexcept = 0;
    virtual int32_t WINRT_CALL add_ButtonHolding(void* handler, winrt::event_token* token) noexcept = 0;
    virtual int32_t WINRT_CALL remove_ButtonHolding(winrt::event_token token) noexcept = 0;
    virtual int32_t WINRT_CALL add_ButtonReleased(void* handler, winrt::event_token* token) noexcept = 0;
    virtual int32_t WINRT_CALL remove_ButtonReleased(winrt::event_token token) noexcept = 0;
};};

template <> struct abi<Windows::UI::Input::IRadialControllerButtonClickedEventArgs>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_Contact(void** value) noexcept = 0;
};};

template <> struct abi<Windows::UI::Input::IRadialControllerButtonClickedEventArgs2>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_SimpleHapticsController(void** value) noexcept = 0;
};};

template <> struct abi<Windows::UI::Input::IRadialControllerButtonHoldingEventArgs>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_Contact(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_SimpleHapticsController(void** value) noexcept = 0;
};};

template <> struct abi<Windows::UI::Input::IRadialControllerButtonPressedEventArgs>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_Contact(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_SimpleHapticsController(void** value) noexcept = 0;
};};

template <> struct abi<Windows::UI::Input::IRadialControllerButtonReleasedEventArgs>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_Contact(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_SimpleHapticsController(void** value) noexcept = 0;
};};

template <> struct abi<Windows::UI::Input::IRadialControllerConfiguration>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL SetDefaultMenuItems(void* buttons) noexcept = 0;
    virtual int32_t WINRT_CALL ResetToDefaultMenuItems() noexcept = 0;
    virtual int32_t WINRT_CALL TrySelectDefaultMenuItem(Windows::UI::Input::RadialControllerSystemMenuItemKind type, bool* result) noexcept = 0;
};};

template <> struct abi<Windows::UI::Input::IRadialControllerConfiguration2>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL put_ActiveControllerWhenMenuIsSuppressed(void* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_ActiveControllerWhenMenuIsSuppressed(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL put_IsMenuSuppressed(bool value) noexcept = 0;
    virtual int32_t WINRT_CALL get_IsMenuSuppressed(bool* value) noexcept = 0;
};};

template <> struct abi<Windows::UI::Input::IRadialControllerConfigurationStatics>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL GetForCurrentView(void** configuration) noexcept = 0;
};};

template <> struct abi<Windows::UI::Input::IRadialControllerConfigurationStatics2>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL put_AppController(void* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_AppController(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL put_IsAppControllerEnabled(bool value) noexcept = 0;
    virtual int32_t WINRT_CALL get_IsAppControllerEnabled(bool* value) noexcept = 0;
};};

template <> struct abi<Windows::UI::Input::IRadialControllerControlAcquiredEventArgs>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_Contact(void** value) noexcept = 0;
};};

template <> struct abi<Windows::UI::Input::IRadialControllerControlAcquiredEventArgs2>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_IsButtonPressed(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_SimpleHapticsController(void** value) noexcept = 0;
};};

template <> struct abi<Windows::UI::Input::IRadialControllerMenu>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_Items(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_IsEnabled(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_IsEnabled(bool value) noexcept = 0;
    virtual int32_t WINRT_CALL GetSelectedMenuItem(void** result) noexcept = 0;
    virtual int32_t WINRT_CALL SelectMenuItem(void* menuItem) noexcept = 0;
    virtual int32_t WINRT_CALL TrySelectPreviouslySelectedMenuItem(bool* result) noexcept = 0;
};};

template <> struct abi<Windows::UI::Input::IRadialControllerMenuItem>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_DisplayText(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Tag(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL put_Tag(void* value) noexcept = 0;
    virtual int32_t WINRT_CALL add_Invoked(void* handler, winrt::event_token* token) noexcept = 0;
    virtual int32_t WINRT_CALL remove_Invoked(winrt::event_token token) noexcept = 0;
};};

template <> struct abi<Windows::UI::Input::IRadialControllerMenuItemStatics>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL CreateFromIcon(void* displayText, void* icon, void** result) noexcept = 0;
    virtual int32_t WINRT_CALL CreateFromKnownIcon(void* displayText, Windows::UI::Input::RadialControllerMenuKnownIcon value, void** result) noexcept = 0;
};};

template <> struct abi<Windows::UI::Input::IRadialControllerMenuItemStatics2>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL CreateFromFontGlyph(void* displayText, void* glyph, void* fontFamily, void** result) noexcept = 0;
    virtual int32_t WINRT_CALL CreateFromFontGlyphWithUri(void* displayText, void* glyph, void* fontFamily, void* fontUri, void** result) noexcept = 0;
};};

template <> struct abi<Windows::UI::Input::IRadialControllerRotationChangedEventArgs>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_RotationDeltaInDegrees(double* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Contact(void** value) noexcept = 0;
};};

template <> struct abi<Windows::UI::Input::IRadialControllerRotationChangedEventArgs2>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_IsButtonPressed(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_SimpleHapticsController(void** value) noexcept = 0;
};};

template <> struct abi<Windows::UI::Input::IRadialControllerScreenContact>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_Bounds(Windows::Foundation::Rect* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Position(Windows::Foundation::Point* value) noexcept = 0;
};};

template <> struct abi<Windows::UI::Input::IRadialControllerScreenContactContinuedEventArgs>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_Contact(void** value) noexcept = 0;
};};

template <> struct abi<Windows::UI::Input::IRadialControllerScreenContactContinuedEventArgs2>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_IsButtonPressed(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_SimpleHapticsController(void** value) noexcept = 0;
};};

template <> struct abi<Windows::UI::Input::IRadialControllerScreenContactEndedEventArgs>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_IsButtonPressed(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_SimpleHapticsController(void** value) noexcept = 0;
};};

template <> struct abi<Windows::UI::Input::IRadialControllerScreenContactStartedEventArgs>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_Contact(void** value) noexcept = 0;
};};

template <> struct abi<Windows::UI::Input::IRadialControllerScreenContactStartedEventArgs2>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_IsButtonPressed(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_SimpleHapticsController(void** value) noexcept = 0;
};};

template <> struct abi<Windows::UI::Input::IRadialControllerStatics>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL IsSupported(bool* result) noexcept = 0;
    virtual int32_t WINRT_CALL CreateForCurrentView(void** result) noexcept = 0;
};};

template <> struct abi<Windows::UI::Input::IRightTappedEventArgs>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_PointerDeviceType(Windows::Devices::Input::PointerDeviceType* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Position(Windows::Foundation::Point* value) noexcept = 0;
};};

template <> struct abi<Windows::UI::Input::ITappedEventArgs>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_PointerDeviceType(Windows::Devices::Input::PointerDeviceType* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Position(Windows::Foundation::Point* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_TapCount(uint32_t* value) noexcept = 0;
};};

template <typename D>
struct consume_Windows_UI_Input_IAttachableInputObject
{
};
template <> struct consume<Windows::UI::Input::IAttachableInputObject> { template <typename D> using type = consume_Windows_UI_Input_IAttachableInputObject<D>; };

template <typename D>
struct consume_Windows_UI_Input_IAttachableInputObjectFactory
{
};
template <> struct consume<Windows::UI::Input::IAttachableInputObjectFactory> { template <typename D> using type = consume_Windows_UI_Input_IAttachableInputObjectFactory<D>; };

template <typename D>
struct consume_Windows_UI_Input_ICrossSlidingEventArgs
{
    Windows::Devices::Input::PointerDeviceType PointerDeviceType() const;
    Windows::Foundation::Point Position() const;
    Windows::UI::Input::CrossSlidingState CrossSlidingState() const;
};
template <> struct consume<Windows::UI::Input::ICrossSlidingEventArgs> { template <typename D> using type = consume_Windows_UI_Input_ICrossSlidingEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Input_IDraggingEventArgs
{
    Windows::Devices::Input::PointerDeviceType PointerDeviceType() const;
    Windows::Foundation::Point Position() const;
    Windows::UI::Input::DraggingState DraggingState() const;
};
template <> struct consume<Windows::UI::Input::IDraggingEventArgs> { template <typename D> using type = consume_Windows_UI_Input_IDraggingEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Input_IEdgeGesture
{
    winrt::event_token Starting(Windows::Foundation::TypedEventHandler<Windows::UI::Input::EdgeGesture, Windows::UI::Input::EdgeGestureEventArgs> const& handler) const;
    using Starting_revoker = impl::event_revoker<Windows::UI::Input::IEdgeGesture, &impl::abi_t<Windows::UI::Input::IEdgeGesture>::remove_Starting>;
    Starting_revoker Starting(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::EdgeGesture, Windows::UI::Input::EdgeGestureEventArgs> const& handler) const;
    void Starting(winrt::event_token const& token) const noexcept;
    winrt::event_token Completed(Windows::Foundation::TypedEventHandler<Windows::UI::Input::EdgeGesture, Windows::UI::Input::EdgeGestureEventArgs> const& handler) const;
    using Completed_revoker = impl::event_revoker<Windows::UI::Input::IEdgeGesture, &impl::abi_t<Windows::UI::Input::IEdgeGesture>::remove_Completed>;
    Completed_revoker Completed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::EdgeGesture, Windows::UI::Input::EdgeGestureEventArgs> const& handler) const;
    void Completed(winrt::event_token const& token) const noexcept;
    winrt::event_token Canceled(Windows::Foundation::TypedEventHandler<Windows::UI::Input::EdgeGesture, Windows::UI::Input::EdgeGestureEventArgs> const& handler) const;
    using Canceled_revoker = impl::event_revoker<Windows::UI::Input::IEdgeGesture, &impl::abi_t<Windows::UI::Input::IEdgeGesture>::remove_Canceled>;
    Canceled_revoker Canceled(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::EdgeGesture, Windows::UI::Input::EdgeGestureEventArgs> const& handler) const;
    void Canceled(winrt::event_token const& token) const noexcept;
};
template <> struct consume<Windows::UI::Input::IEdgeGesture> { template <typename D> using type = consume_Windows_UI_Input_IEdgeGesture<D>; };

template <typename D>
struct consume_Windows_UI_Input_IEdgeGestureEventArgs
{
    Windows::UI::Input::EdgeGestureKind Kind() const;
};
template <> struct consume<Windows::UI::Input::IEdgeGestureEventArgs> { template <typename D> using type = consume_Windows_UI_Input_IEdgeGestureEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Input_IEdgeGestureStatics
{
    Windows::UI::Input::EdgeGesture GetForCurrentView() const;
};
template <> struct consume<Windows::UI::Input::IEdgeGestureStatics> { template <typename D> using type = consume_Windows_UI_Input_IEdgeGestureStatics<D>; };

template <typename D>
struct consume_Windows_UI_Input_IGestureRecognizer
{
    Windows::UI::Input::GestureSettings GestureSettings() const;
    void GestureSettings(Windows::UI::Input::GestureSettings const& value) const;
    bool IsInertial() const;
    bool IsActive() const;
    bool ShowGestureFeedback() const;
    void ShowGestureFeedback(bool value) const;
    Windows::Foundation::Point PivotCenter() const;
    void PivotCenter(Windows::Foundation::Point const& value) const;
    float PivotRadius() const;
    void PivotRadius(float value) const;
    float InertiaTranslationDeceleration() const;
    void InertiaTranslationDeceleration(float value) const;
    float InertiaRotationDeceleration() const;
    void InertiaRotationDeceleration(float value) const;
    float InertiaExpansionDeceleration() const;
    void InertiaExpansionDeceleration(float value) const;
    float InertiaTranslationDisplacement() const;
    void InertiaTranslationDisplacement(float value) const;
    float InertiaRotationAngle() const;
    void InertiaRotationAngle(float value) const;
    float InertiaExpansion() const;
    void InertiaExpansion(float value) const;
    bool ManipulationExact() const;
    void ManipulationExact(bool value) const;
    Windows::UI::Input::CrossSlideThresholds CrossSlideThresholds() const;
    void CrossSlideThresholds(Windows::UI::Input::CrossSlideThresholds const& value) const;
    bool CrossSlideHorizontally() const;
    void CrossSlideHorizontally(bool value) const;
    bool CrossSlideExact() const;
    void CrossSlideExact(bool value) const;
    bool AutoProcessInertia() const;
    void AutoProcessInertia(bool value) const;
    Windows::UI::Input::MouseWheelParameters MouseWheelParameters() const;
    bool CanBeDoubleTap(Windows::UI::Input::PointerPoint const& value) const;
    void ProcessDownEvent(Windows::UI::Input::PointerPoint const& value) const;
    void ProcessMoveEvents(param::vector<Windows::UI::Input::PointerPoint> const& value) const;
    void ProcessUpEvent(Windows::UI::Input::PointerPoint const& value) const;
    void ProcessMouseWheelEvent(Windows::UI::Input::PointerPoint const& value, bool isShiftKeyDown, bool isControlKeyDown) const;
    void ProcessInertia() const;
    void CompleteGesture() const;
    winrt::event_token Tapped(Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::TappedEventArgs> const& handler) const;
    using Tapped_revoker = impl::event_revoker<Windows::UI::Input::IGestureRecognizer, &impl::abi_t<Windows::UI::Input::IGestureRecognizer>::remove_Tapped>;
    Tapped_revoker Tapped(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::TappedEventArgs> const& handler) const;
    void Tapped(winrt::event_token const& cookie) const noexcept;
    winrt::event_token RightTapped(Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::RightTappedEventArgs> const& handler) const;
    using RightTapped_revoker = impl::event_revoker<Windows::UI::Input::IGestureRecognizer, &impl::abi_t<Windows::UI::Input::IGestureRecognizer>::remove_RightTapped>;
    RightTapped_revoker RightTapped(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::RightTappedEventArgs> const& handler) const;
    void RightTapped(winrt::event_token const& cookie) const noexcept;
    winrt::event_token Holding(Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::HoldingEventArgs> const& handler) const;
    using Holding_revoker = impl::event_revoker<Windows::UI::Input::IGestureRecognizer, &impl::abi_t<Windows::UI::Input::IGestureRecognizer>::remove_Holding>;
    Holding_revoker Holding(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::HoldingEventArgs> const& handler) const;
    void Holding(winrt::event_token const& cookie) const noexcept;
    winrt::event_token Dragging(Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::DraggingEventArgs> const& handler) const;
    using Dragging_revoker = impl::event_revoker<Windows::UI::Input::IGestureRecognizer, &impl::abi_t<Windows::UI::Input::IGestureRecognizer>::remove_Dragging>;
    Dragging_revoker Dragging(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::DraggingEventArgs> const& handler) const;
    void Dragging(winrt::event_token const& cookie) const noexcept;
    winrt::event_token ManipulationStarted(Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::ManipulationStartedEventArgs> const& handler) const;
    using ManipulationStarted_revoker = impl::event_revoker<Windows::UI::Input::IGestureRecognizer, &impl::abi_t<Windows::UI::Input::IGestureRecognizer>::remove_ManipulationStarted>;
    ManipulationStarted_revoker ManipulationStarted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::ManipulationStartedEventArgs> const& handler) const;
    void ManipulationStarted(winrt::event_token const& cookie) const noexcept;
    winrt::event_token ManipulationUpdated(Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::ManipulationUpdatedEventArgs> const& handler) const;
    using ManipulationUpdated_revoker = impl::event_revoker<Windows::UI::Input::IGestureRecognizer, &impl::abi_t<Windows::UI::Input::IGestureRecognizer>::remove_ManipulationUpdated>;
    ManipulationUpdated_revoker ManipulationUpdated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::ManipulationUpdatedEventArgs> const& handler) const;
    void ManipulationUpdated(winrt::event_token const& cookie) const noexcept;
    winrt::event_token ManipulationInertiaStarting(Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::ManipulationInertiaStartingEventArgs> const& handler) const;
    using ManipulationInertiaStarting_revoker = impl::event_revoker<Windows::UI::Input::IGestureRecognizer, &impl::abi_t<Windows::UI::Input::IGestureRecognizer>::remove_ManipulationInertiaStarting>;
    ManipulationInertiaStarting_revoker ManipulationInertiaStarting(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::ManipulationInertiaStartingEventArgs> const& handler) const;
    void ManipulationInertiaStarting(winrt::event_token const& cookie) const noexcept;
    winrt::event_token ManipulationCompleted(Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::ManipulationCompletedEventArgs> const& handler) const;
    using ManipulationCompleted_revoker = impl::event_revoker<Windows::UI::Input::IGestureRecognizer, &impl::abi_t<Windows::UI::Input::IGestureRecognizer>::remove_ManipulationCompleted>;
    ManipulationCompleted_revoker ManipulationCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::ManipulationCompletedEventArgs> const& handler) const;
    void ManipulationCompleted(winrt::event_token const& cookie) const noexcept;
    winrt::event_token CrossSliding(Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::CrossSlidingEventArgs> const& handler) const;
    using CrossSliding_revoker = impl::event_revoker<Windows::UI::Input::IGestureRecognizer, &impl::abi_t<Windows::UI::Input::IGestureRecognizer>::remove_CrossSliding>;
    CrossSliding_revoker CrossSliding(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::GestureRecognizer, Windows::UI::Input::CrossSlidingEventArgs> const& handler) const;
    void CrossSliding(winrt::event_token const& cookie) const noexcept;
};
template <> struct consume<Windows::UI::Input::IGestureRecognizer> { template <typename D> using type = consume_Windows_UI_Input_IGestureRecognizer<D>; };

template <typename D>
struct consume_Windows_UI_Input_IHoldingEventArgs
{
    Windows::Devices::Input::PointerDeviceType PointerDeviceType() const;
    Windows::Foundation::Point Position() const;
    Windows::UI::Input::HoldingState HoldingState() const;
};
template <> struct consume<Windows::UI::Input::IHoldingEventArgs> { template <typename D> using type = consume_Windows_UI_Input_IHoldingEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Input_IInputActivationListener
{
    Windows::UI::Input::InputActivationState State() const;
    winrt::event_token InputActivationChanged(Windows::Foundation::TypedEventHandler<Windows::UI::Input::InputActivationListener, Windows::UI::Input::InputActivationListenerActivationChangedEventArgs> const& handler) const;
    using InputActivationChanged_revoker = impl::event_revoker<Windows::UI::Input::IInputActivationListener, &impl::abi_t<Windows::UI::Input::IInputActivationListener>::remove_InputActivationChanged>;
    InputActivationChanged_revoker InputActivationChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::InputActivationListener, Windows::UI::Input::InputActivationListenerActivationChangedEventArgs> const& handler) const;
    void InputActivationChanged(winrt::event_token const& token) const noexcept;
};
template <> struct consume<Windows::UI::Input::IInputActivationListener> { template <typename D> using type = consume_Windows_UI_Input_IInputActivationListener<D>; };

template <typename D>
struct consume_Windows_UI_Input_IInputActivationListenerActivationChangedEventArgs
{
    Windows::UI::Input::InputActivationState State() const;
};
template <> struct consume<Windows::UI::Input::IInputActivationListenerActivationChangedEventArgs> { template <typename D> using type = consume_Windows_UI_Input_IInputActivationListenerActivationChangedEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Input_IKeyboardDeliveryInterceptor
{
    bool IsInterceptionEnabledWhenInForeground() const;
    void IsInterceptionEnabledWhenInForeground(bool value) const;
    winrt::event_token KeyDown(Windows::Foundation::TypedEventHandler<Windows::UI::Input::KeyboardDeliveryInterceptor, Windows::UI::Core::KeyEventArgs> const& handler) const;
    using KeyDown_revoker = impl::event_revoker<Windows::UI::Input::IKeyboardDeliveryInterceptor, &impl::abi_t<Windows::UI::Input::IKeyboardDeliveryInterceptor>::remove_KeyDown>;
    KeyDown_revoker KeyDown(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::KeyboardDeliveryInterceptor, Windows::UI::Core::KeyEventArgs> const& handler) const;
    void KeyDown(winrt::event_token const& token) const noexcept;
    winrt::event_token KeyUp(Windows::Foundation::TypedEventHandler<Windows::UI::Input::KeyboardDeliveryInterceptor, Windows::UI::Core::KeyEventArgs> const& handler) const;
    using KeyUp_revoker = impl::event_revoker<Windows::UI::Input::IKeyboardDeliveryInterceptor, &impl::abi_t<Windows::UI::Input::IKeyboardDeliveryInterceptor>::remove_KeyUp>;
    KeyUp_revoker KeyUp(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::KeyboardDeliveryInterceptor, Windows::UI::Core::KeyEventArgs> const& handler) const;
    void KeyUp(winrt::event_token const& token) const noexcept;
};
template <> struct consume<Windows::UI::Input::IKeyboardDeliveryInterceptor> { template <typename D> using type = consume_Windows_UI_Input_IKeyboardDeliveryInterceptor<D>; };

template <typename D>
struct consume_Windows_UI_Input_IKeyboardDeliveryInterceptorStatics
{
    Windows::UI::Input::KeyboardDeliveryInterceptor GetForCurrentView() const;
};
template <> struct consume<Windows::UI::Input::IKeyboardDeliveryInterceptorStatics> { template <typename D> using type = consume_Windows_UI_Input_IKeyboardDeliveryInterceptorStatics<D>; };

template <typename D>
struct consume_Windows_UI_Input_IManipulationCompletedEventArgs
{
    Windows::Devices::Input::PointerDeviceType PointerDeviceType() const;
    Windows::Foundation::Point Position() const;
    Windows::UI::Input::ManipulationDelta Cumulative() const;
    Windows::UI::Input::ManipulationVelocities Velocities() const;
};
template <> struct consume<Windows::UI::Input::IManipulationCompletedEventArgs> { template <typename D> using type = consume_Windows_UI_Input_IManipulationCompletedEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Input_IManipulationInertiaStartingEventArgs
{
    Windows::Devices::Input::PointerDeviceType PointerDeviceType() const;
    Windows::Foundation::Point Position() const;
    Windows::UI::Input::ManipulationDelta Delta() const;
    Windows::UI::Input::ManipulationDelta Cumulative() const;
    Windows::UI::Input::ManipulationVelocities Velocities() const;
};
template <> struct consume<Windows::UI::Input::IManipulationInertiaStartingEventArgs> { template <typename D> using type = consume_Windows_UI_Input_IManipulationInertiaStartingEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Input_IManipulationStartedEventArgs
{
    Windows::Devices::Input::PointerDeviceType PointerDeviceType() const;
    Windows::Foundation::Point Position() const;
    Windows::UI::Input::ManipulationDelta Cumulative() const;
};
template <> struct consume<Windows::UI::Input::IManipulationStartedEventArgs> { template <typename D> using type = consume_Windows_UI_Input_IManipulationStartedEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Input_IManipulationUpdatedEventArgs
{
    Windows::Devices::Input::PointerDeviceType PointerDeviceType() const;
    Windows::Foundation::Point Position() const;
    Windows::UI::Input::ManipulationDelta Delta() const;
    Windows::UI::Input::ManipulationDelta Cumulative() const;
    Windows::UI::Input::ManipulationVelocities Velocities() const;
};
template <> struct consume<Windows::UI::Input::IManipulationUpdatedEventArgs> { template <typename D> using type = consume_Windows_UI_Input_IManipulationUpdatedEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Input_IMouseWheelParameters
{
    Windows::Foundation::Point CharTranslation() const;
    void CharTranslation(Windows::Foundation::Point const& value) const;
    float DeltaScale() const;
    void DeltaScale(float value) const;
    float DeltaRotationAngle() const;
    void DeltaRotationAngle(float value) const;
    Windows::Foundation::Point PageTranslation() const;
    void PageTranslation(Windows::Foundation::Point const& value) const;
};
template <> struct consume<Windows::UI::Input::IMouseWheelParameters> { template <typename D> using type = consume_Windows_UI_Input_IMouseWheelParameters<D>; };

template <typename D>
struct consume_Windows_UI_Input_IPointerPoint
{
    Windows::Devices::Input::PointerDevice PointerDevice() const;
    Windows::Foundation::Point Position() const;
    Windows::Foundation::Point RawPosition() const;
    uint32_t PointerId() const;
    uint32_t FrameId() const;
    uint64_t Timestamp() const;
    bool IsInContact() const;
    Windows::UI::Input::PointerPointProperties Properties() const;
};
template <> struct consume<Windows::UI::Input::IPointerPoint> { template <typename D> using type = consume_Windows_UI_Input_IPointerPoint<D>; };

template <typename D>
struct consume_Windows_UI_Input_IPointerPointProperties
{
    float Pressure() const;
    bool IsInverted() const;
    bool IsEraser() const;
    float Orientation() const;
    float XTilt() const;
    float YTilt() const;
    float Twist() const;
    Windows::Foundation::Rect ContactRect() const;
    Windows::Foundation::Rect ContactRectRaw() const;
    bool TouchConfidence() const;
    bool IsLeftButtonPressed() const;
    bool IsRightButtonPressed() const;
    bool IsMiddleButtonPressed() const;
    int32_t MouseWheelDelta() const;
    bool IsHorizontalMouseWheel() const;
    bool IsPrimary() const;
    bool IsInRange() const;
    bool IsCanceled() const;
    bool IsBarrelButtonPressed() const;
    bool IsXButton1Pressed() const;
    bool IsXButton2Pressed() const;
    Windows::UI::Input::PointerUpdateKind PointerUpdateKind() const;
    bool HasUsage(uint32_t usagePage, uint32_t usageId) const;
    int32_t GetUsageValue(uint32_t usagePage, uint32_t usageId) const;
};
template <> struct consume<Windows::UI::Input::IPointerPointProperties> { template <typename D> using type = consume_Windows_UI_Input_IPointerPointProperties<D>; };

template <typename D>
struct consume_Windows_UI_Input_IPointerPointProperties2
{
    Windows::Foundation::IReference<float> ZDistance() const;
};
template <> struct consume<Windows::UI::Input::IPointerPointProperties2> { template <typename D> using type = consume_Windows_UI_Input_IPointerPointProperties2<D>; };

template <typename D>
struct consume_Windows_UI_Input_IPointerPointStatics
{
    Windows::UI::Input::PointerPoint GetCurrentPoint(uint32_t pointerId) const;
    Windows::Foundation::Collections::IVector<Windows::UI::Input::PointerPoint> GetIntermediatePoints(uint32_t pointerId) const;
    Windows::UI::Input::PointerPoint GetCurrentPoint(uint32_t pointerId, Windows::UI::Input::IPointerPointTransform const& transform) const;
    Windows::Foundation::Collections::IVector<Windows::UI::Input::PointerPoint> GetIntermediatePoints(uint32_t pointerId, Windows::UI::Input::IPointerPointTransform const& transform) const;
};
template <> struct consume<Windows::UI::Input::IPointerPointStatics> { template <typename D> using type = consume_Windows_UI_Input_IPointerPointStatics<D>; };

template <typename D>
struct consume_Windows_UI_Input_IPointerPointTransform
{
    Windows::UI::Input::IPointerPointTransform Inverse() const;
    bool TryTransform(Windows::Foundation::Point const& inPoint, Windows::Foundation::Point& outPoint) const;
    Windows::Foundation::Rect TransformBounds(Windows::Foundation::Rect const& rect) const;
};
template <> struct consume<Windows::UI::Input::IPointerPointTransform> { template <typename D> using type = consume_Windows_UI_Input_IPointerPointTransform<D>; };

template <typename D>
struct consume_Windows_UI_Input_IPointerVisualizationSettings
{
    void IsContactFeedbackEnabled(bool value) const;
    bool IsContactFeedbackEnabled() const;
    void IsBarrelButtonFeedbackEnabled(bool value) const;
    bool IsBarrelButtonFeedbackEnabled() const;
};
template <> struct consume<Windows::UI::Input::IPointerVisualizationSettings> { template <typename D> using type = consume_Windows_UI_Input_IPointerVisualizationSettings<D>; };

template <typename D>
struct consume_Windows_UI_Input_IPointerVisualizationSettingsStatics
{
    Windows::UI::Input::PointerVisualizationSettings GetForCurrentView() const;
};
template <> struct consume<Windows::UI::Input::IPointerVisualizationSettingsStatics> { template <typename D> using type = consume_Windows_UI_Input_IPointerVisualizationSettingsStatics<D>; };

template <typename D>
struct consume_Windows_UI_Input_IRadialController
{
    Windows::UI::Input::RadialControllerMenu Menu() const;
    double RotationResolutionInDegrees() const;
    void RotationResolutionInDegrees(double value) const;
    bool UseAutomaticHapticFeedback() const;
    void UseAutomaticHapticFeedback(bool value) const;
    winrt::event_token ScreenContactStarted(Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::UI::Input::RadialControllerScreenContactStartedEventArgs> const& handler) const;
    using ScreenContactStarted_revoker = impl::event_revoker<Windows::UI::Input::IRadialController, &impl::abi_t<Windows::UI::Input::IRadialController>::remove_ScreenContactStarted>;
    ScreenContactStarted_revoker ScreenContactStarted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::UI::Input::RadialControllerScreenContactStartedEventArgs> const& handler) const;
    void ScreenContactStarted(winrt::event_token const& cookie) const noexcept;
    winrt::event_token ScreenContactEnded(Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::Foundation::IInspectable> const& handler) const;
    using ScreenContactEnded_revoker = impl::event_revoker<Windows::UI::Input::IRadialController, &impl::abi_t<Windows::UI::Input::IRadialController>::remove_ScreenContactEnded>;
    ScreenContactEnded_revoker ScreenContactEnded(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::Foundation::IInspectable> const& handler) const;
    void ScreenContactEnded(winrt::event_token const& cookie) const noexcept;
    winrt::event_token ScreenContactContinued(Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::UI::Input::RadialControllerScreenContactContinuedEventArgs> const& handler) const;
    using ScreenContactContinued_revoker = impl::event_revoker<Windows::UI::Input::IRadialController, &impl::abi_t<Windows::UI::Input::IRadialController>::remove_ScreenContactContinued>;
    ScreenContactContinued_revoker ScreenContactContinued(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::UI::Input::RadialControllerScreenContactContinuedEventArgs> const& handler) const;
    void ScreenContactContinued(winrt::event_token const& cookie) const noexcept;
    winrt::event_token ControlLost(Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::Foundation::IInspectable> const& handler) const;
    using ControlLost_revoker = impl::event_revoker<Windows::UI::Input::IRadialController, &impl::abi_t<Windows::UI::Input::IRadialController>::remove_ControlLost>;
    ControlLost_revoker ControlLost(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::Foundation::IInspectable> const& handler) const;
    void ControlLost(winrt::event_token const& cookie) const noexcept;
    winrt::event_token RotationChanged(Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::UI::Input::RadialControllerRotationChangedEventArgs> const& handler) const;
    using RotationChanged_revoker = impl::event_revoker<Windows::UI::Input::IRadialController, &impl::abi_t<Windows::UI::Input::IRadialController>::remove_RotationChanged>;
    RotationChanged_revoker RotationChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::UI::Input::RadialControllerRotationChangedEventArgs> const& handler) const;
    void RotationChanged(winrt::event_token const& token) const noexcept;
    winrt::event_token ButtonClicked(Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::UI::Input::RadialControllerButtonClickedEventArgs> const& handler) const;
    using ButtonClicked_revoker = impl::event_revoker<Windows::UI::Input::IRadialController, &impl::abi_t<Windows::UI::Input::IRadialController>::remove_ButtonClicked>;
    ButtonClicked_revoker ButtonClicked(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::UI::Input::RadialControllerButtonClickedEventArgs> const& handler) const;
    void ButtonClicked(winrt::event_token const& token) const noexcept;
    winrt::event_token ControlAcquired(Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::UI::Input::RadialControllerControlAcquiredEventArgs> const& handler) const;
    using ControlAcquired_revoker = impl::event_revoker<Windows::UI::Input::IRadialController, &impl::abi_t<Windows::UI::Input::IRadialController>::remove_ControlAcquired>;
    ControlAcquired_revoker ControlAcquired(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::UI::Input::RadialControllerControlAcquiredEventArgs> const& handler) const;
    void ControlAcquired(winrt::event_token const& cookie) const noexcept;
};
template <> struct consume<Windows::UI::Input::IRadialController> { template <typename D> using type = consume_Windows_UI_Input_IRadialController<D>; };

template <typename D>
struct consume_Windows_UI_Input_IRadialController2
{
    winrt::event_token ButtonPressed(Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::UI::Input::RadialControllerButtonPressedEventArgs> const& handler) const;
    using ButtonPressed_revoker = impl::event_revoker<Windows::UI::Input::IRadialController2, &impl::abi_t<Windows::UI::Input::IRadialController2>::remove_ButtonPressed>;
    ButtonPressed_revoker ButtonPressed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::UI::Input::RadialControllerButtonPressedEventArgs> const& handler) const;
    void ButtonPressed(winrt::event_token const& token) const noexcept;
    winrt::event_token ButtonHolding(Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::UI::Input::RadialControllerButtonHoldingEventArgs> const& handler) const;
    using ButtonHolding_revoker = impl::event_revoker<Windows::UI::Input::IRadialController2, &impl::abi_t<Windows::UI::Input::IRadialController2>::remove_ButtonHolding>;
    ButtonHolding_revoker ButtonHolding(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::UI::Input::RadialControllerButtonHoldingEventArgs> const& handler) const;
    void ButtonHolding(winrt::event_token const& token) const noexcept;
    winrt::event_token ButtonReleased(Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::UI::Input::RadialControllerButtonReleasedEventArgs> const& handler) const;
    using ButtonReleased_revoker = impl::event_revoker<Windows::UI::Input::IRadialController2, &impl::abi_t<Windows::UI::Input::IRadialController2>::remove_ButtonReleased>;
    ButtonReleased_revoker ButtonReleased(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialController, Windows::UI::Input::RadialControllerButtonReleasedEventArgs> const& handler) const;
    void ButtonReleased(winrt::event_token const& token) const noexcept;
};
template <> struct consume<Windows::UI::Input::IRadialController2> { template <typename D> using type = consume_Windows_UI_Input_IRadialController2<D>; };

template <typename D>
struct consume_Windows_UI_Input_IRadialControllerButtonClickedEventArgs
{
    Windows::UI::Input::RadialControllerScreenContact Contact() const;
};
template <> struct consume<Windows::UI::Input::IRadialControllerButtonClickedEventArgs> { template <typename D> using type = consume_Windows_UI_Input_IRadialControllerButtonClickedEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Input_IRadialControllerButtonClickedEventArgs2
{
    Windows::Devices::Haptics::SimpleHapticsController SimpleHapticsController() const;
};
template <> struct consume<Windows::UI::Input::IRadialControllerButtonClickedEventArgs2> { template <typename D> using type = consume_Windows_UI_Input_IRadialControllerButtonClickedEventArgs2<D>; };

template <typename D>
struct consume_Windows_UI_Input_IRadialControllerButtonHoldingEventArgs
{
    Windows::UI::Input::RadialControllerScreenContact Contact() const;
    Windows::Devices::Haptics::SimpleHapticsController SimpleHapticsController() const;
};
template <> struct consume<Windows::UI::Input::IRadialControllerButtonHoldingEventArgs> { template <typename D> using type = consume_Windows_UI_Input_IRadialControllerButtonHoldingEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Input_IRadialControllerButtonPressedEventArgs
{
    Windows::UI::Input::RadialControllerScreenContact Contact() const;
    Windows::Devices::Haptics::SimpleHapticsController SimpleHapticsController() const;
};
template <> struct consume<Windows::UI::Input::IRadialControllerButtonPressedEventArgs> { template <typename D> using type = consume_Windows_UI_Input_IRadialControllerButtonPressedEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Input_IRadialControllerButtonReleasedEventArgs
{
    Windows::UI::Input::RadialControllerScreenContact Contact() const;
    Windows::Devices::Haptics::SimpleHapticsController SimpleHapticsController() const;
};
template <> struct consume<Windows::UI::Input::IRadialControllerButtonReleasedEventArgs> { template <typename D> using type = consume_Windows_UI_Input_IRadialControllerButtonReleasedEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Input_IRadialControllerConfiguration
{
    void SetDefaultMenuItems(param::iterable<Windows::UI::Input::RadialControllerSystemMenuItemKind> const& buttons) const;
    void ResetToDefaultMenuItems() const;
    bool TrySelectDefaultMenuItem(Windows::UI::Input::RadialControllerSystemMenuItemKind const& type) const;
};
template <> struct consume<Windows::UI::Input::IRadialControllerConfiguration> { template <typename D> using type = consume_Windows_UI_Input_IRadialControllerConfiguration<D>; };

template <typename D>
struct consume_Windows_UI_Input_IRadialControllerConfiguration2
{
    void ActiveControllerWhenMenuIsSuppressed(Windows::UI::Input::RadialController const& value) const;
    Windows::UI::Input::RadialController ActiveControllerWhenMenuIsSuppressed() const;
    void IsMenuSuppressed(bool value) const;
    bool IsMenuSuppressed() const;
};
template <> struct consume<Windows::UI::Input::IRadialControllerConfiguration2> { template <typename D> using type = consume_Windows_UI_Input_IRadialControllerConfiguration2<D>; };

template <typename D>
struct consume_Windows_UI_Input_IRadialControllerConfigurationStatics
{
    Windows::UI::Input::RadialControllerConfiguration GetForCurrentView() const;
};
template <> struct consume<Windows::UI::Input::IRadialControllerConfigurationStatics> { template <typename D> using type = consume_Windows_UI_Input_IRadialControllerConfigurationStatics<D>; };

template <typename D>
struct consume_Windows_UI_Input_IRadialControllerConfigurationStatics2
{
    void AppController(Windows::UI::Input::RadialController const& value) const;
    Windows::UI::Input::RadialController AppController() const;
    void IsAppControllerEnabled(bool value) const;
    bool IsAppControllerEnabled() const;
};
template <> struct consume<Windows::UI::Input::IRadialControllerConfigurationStatics2> { template <typename D> using type = consume_Windows_UI_Input_IRadialControllerConfigurationStatics2<D>; };

template <typename D>
struct consume_Windows_UI_Input_IRadialControllerControlAcquiredEventArgs
{
    Windows::UI::Input::RadialControllerScreenContact Contact() const;
};
template <> struct consume<Windows::UI::Input::IRadialControllerControlAcquiredEventArgs> { template <typename D> using type = consume_Windows_UI_Input_IRadialControllerControlAcquiredEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Input_IRadialControllerControlAcquiredEventArgs2
{
    bool IsButtonPressed() const;
    Windows::Devices::Haptics::SimpleHapticsController SimpleHapticsController() const;
};
template <> struct consume<Windows::UI::Input::IRadialControllerControlAcquiredEventArgs2> { template <typename D> using type = consume_Windows_UI_Input_IRadialControllerControlAcquiredEventArgs2<D>; };

template <typename D>
struct consume_Windows_UI_Input_IRadialControllerMenu
{
    Windows::Foundation::Collections::IVector<Windows::UI::Input::RadialControllerMenuItem> Items() const;
    bool IsEnabled() const;
    void IsEnabled(bool value) const;
    Windows::UI::Input::RadialControllerMenuItem GetSelectedMenuItem() const;
    void SelectMenuItem(Windows::UI::Input::RadialControllerMenuItem const& menuItem) const;
    bool TrySelectPreviouslySelectedMenuItem() const;
};
template <> struct consume<Windows::UI::Input::IRadialControllerMenu> { template <typename D> using type = consume_Windows_UI_Input_IRadialControllerMenu<D>; };

template <typename D>
struct consume_Windows_UI_Input_IRadialControllerMenuItem
{
    hstring DisplayText() const;
    Windows::Foundation::IInspectable Tag() const;
    void Tag(Windows::Foundation::IInspectable const& value) const;
    winrt::event_token Invoked(Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialControllerMenuItem, Windows::Foundation::IInspectable> const& handler) const;
    using Invoked_revoker = impl::event_revoker<Windows::UI::Input::IRadialControllerMenuItem, &impl::abi_t<Windows::UI::Input::IRadialControllerMenuItem>::remove_Invoked>;
    Invoked_revoker Invoked(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Input::RadialControllerMenuItem, Windows::Foundation::IInspectable> const& handler) const;
    void Invoked(winrt::event_token const& token) const noexcept;
};
template <> struct consume<Windows::UI::Input::IRadialControllerMenuItem> { template <typename D> using type = consume_Windows_UI_Input_IRadialControllerMenuItem<D>; };

template <typename D>
struct consume_Windows_UI_Input_IRadialControllerMenuItemStatics
{
    Windows::UI::Input::RadialControllerMenuItem CreateFromIcon(param::hstring const& displayText, Windows::Storage::Streams::RandomAccessStreamReference const& icon) const;
    Windows::UI::Input::RadialControllerMenuItem CreateFromKnownIcon(param::hstring const& displayText, Windows::UI::Input::RadialControllerMenuKnownIcon const& value) const;
};
template <> struct consume<Windows::UI::Input::IRadialControllerMenuItemStatics> { template <typename D> using type = consume_Windows_UI_Input_IRadialControllerMenuItemStatics<D>; };

template <typename D>
struct consume_Windows_UI_Input_IRadialControllerMenuItemStatics2
{
    Windows::UI::Input::RadialControllerMenuItem CreateFromFontGlyph(param::hstring const& displayText, param::hstring const& glyph, param::hstring const& fontFamily) const;
    Windows::UI::Input::RadialControllerMenuItem CreateFromFontGlyph(param::hstring const& displayText, param::hstring const& glyph, param::hstring const& fontFamily, Windows::Foundation::Uri const& fontUri) const;
};
template <> struct consume<Windows::UI::Input::IRadialControllerMenuItemStatics2> { template <typename D> using type = consume_Windows_UI_Input_IRadialControllerMenuItemStatics2<D>; };

template <typename D>
struct consume_Windows_UI_Input_IRadialControllerRotationChangedEventArgs
{
    double RotationDeltaInDegrees() const;
    Windows::UI::Input::RadialControllerScreenContact Contact() const;
};
template <> struct consume<Windows::UI::Input::IRadialControllerRotationChangedEventArgs> { template <typename D> using type = consume_Windows_UI_Input_IRadialControllerRotationChangedEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Input_IRadialControllerRotationChangedEventArgs2
{
    bool IsButtonPressed() const;
    Windows::Devices::Haptics::SimpleHapticsController SimpleHapticsController() const;
};
template <> struct consume<Windows::UI::Input::IRadialControllerRotationChangedEventArgs2> { template <typename D> using type = consume_Windows_UI_Input_IRadialControllerRotationChangedEventArgs2<D>; };

template <typename D>
struct consume_Windows_UI_Input_IRadialControllerScreenContact
{
    Windows::Foundation::Rect Bounds() const;
    Windows::Foundation::Point Position() const;
};
template <> struct consume<Windows::UI::Input::IRadialControllerScreenContact> { template <typename D> using type = consume_Windows_UI_Input_IRadialControllerScreenContact<D>; };

template <typename D>
struct consume_Windows_UI_Input_IRadialControllerScreenContactContinuedEventArgs
{
    Windows::UI::Input::RadialControllerScreenContact Contact() const;
};
template <> struct consume<Windows::UI::Input::IRadialControllerScreenContactContinuedEventArgs> { template <typename D> using type = consume_Windows_UI_Input_IRadialControllerScreenContactContinuedEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Input_IRadialControllerScreenContactContinuedEventArgs2
{
    bool IsButtonPressed() const;
    Windows::Devices::Haptics::SimpleHapticsController SimpleHapticsController() const;
};
template <> struct consume<Windows::UI::Input::IRadialControllerScreenContactContinuedEventArgs2> { template <typename D> using type = consume_Windows_UI_Input_IRadialControllerScreenContactContinuedEventArgs2<D>; };

template <typename D>
struct consume_Windows_UI_Input_IRadialControllerScreenContactEndedEventArgs
{
    bool IsButtonPressed() const;
    Windows::Devices::Haptics::SimpleHapticsController SimpleHapticsController() const;
};
template <> struct consume<Windows::UI::Input::IRadialControllerScreenContactEndedEventArgs> { template <typename D> using type = consume_Windows_UI_Input_IRadialControllerScreenContactEndedEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Input_IRadialControllerScreenContactStartedEventArgs
{
    Windows::UI::Input::RadialControllerScreenContact Contact() const;
};
template <> struct consume<Windows::UI::Input::IRadialControllerScreenContactStartedEventArgs> { template <typename D> using type = consume_Windows_UI_Input_IRadialControllerScreenContactStartedEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Input_IRadialControllerScreenContactStartedEventArgs2
{
    bool IsButtonPressed() const;
    Windows::Devices::Haptics::SimpleHapticsController SimpleHapticsController() const;
};
template <> struct consume<Windows::UI::Input::IRadialControllerScreenContactStartedEventArgs2> { template <typename D> using type = consume_Windows_UI_Input_IRadialControllerScreenContactStartedEventArgs2<D>; };

template <typename D>
struct consume_Windows_UI_Input_IRadialControllerStatics
{
    bool IsSupported() const;
    Windows::UI::Input::RadialController CreateForCurrentView() const;
};
template <> struct consume<Windows::UI::Input::IRadialControllerStatics> { template <typename D> using type = consume_Windows_UI_Input_IRadialControllerStatics<D>; };

template <typename D>
struct consume_Windows_UI_Input_IRightTappedEventArgs
{
    Windows::Devices::Input::PointerDeviceType PointerDeviceType() const;
    Windows::Foundation::Point Position() const;
};
template <> struct consume<Windows::UI::Input::IRightTappedEventArgs> { template <typename D> using type = consume_Windows_UI_Input_IRightTappedEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Input_ITappedEventArgs
{
    Windows::Devices::Input::PointerDeviceType PointerDeviceType() const;
    Windows::Foundation::Point Position() const;
    uint32_t TapCount() const;
};
template <> struct consume<Windows::UI::Input::ITappedEventArgs> { template <typename D> using type = consume_Windows_UI_Input_ITappedEventArgs<D>; };

struct struct_Windows_UI_Input_CrossSlideThresholds
{
    float SelectionStart;
    float SpeedBumpStart;
    float SpeedBumpEnd;
    float RearrangeStart;
};
template <> struct abi<Windows::UI::Input::CrossSlideThresholds>{ using type = struct_Windows_UI_Input_CrossSlideThresholds; };


struct struct_Windows_UI_Input_ManipulationDelta
{
    Windows::Foundation::Point Translation;
    float Scale;
    float Rotation;
    float Expansion;
};
template <> struct abi<Windows::UI::Input::ManipulationDelta>{ using type = struct_Windows_UI_Input_ManipulationDelta; };


struct struct_Windows_UI_Input_ManipulationVelocities
{
    Windows::Foundation::Point Linear;
    float Angular;
    float Expansion;
};
template <> struct abi<Windows::UI::Input::ManipulationVelocities>{ using type = struct_Windows_UI_Input_ManipulationVelocities; };


}
