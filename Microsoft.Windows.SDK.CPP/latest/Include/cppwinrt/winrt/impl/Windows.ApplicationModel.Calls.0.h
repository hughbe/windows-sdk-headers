﻿// C++/WinRT v1.0.190111.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Contacts {

struct Contact;
struct ContactPhone;

}

WINRT_EXPORT namespace winrt::Windows::Devices::Enumeration {

enum class DeviceAccessStatus;

}

WINRT_EXPORT namespace winrt::Windows::Foundation {

struct Uri;

}

WINRT_EXPORT namespace winrt::Windows::System {

struct User;

}

WINRT_EXPORT namespace winrt::Windows::UI {

struct Color;

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Calls {

enum class CellularDtmfMode : int32_t
{
    Continuous = 0,
    Burst = 1,
};

enum class PhoneAudioRoutingEndpoint : int32_t
{
    Default = 0,
    Bluetooth = 1,
    Speakerphone = 2,
};

enum class PhoneCallHistoryEntryMedia : int32_t
{
    Audio = 0,
    Video = 1,
};

enum class PhoneCallHistoryEntryOtherAppReadAccess : int32_t
{
    Full = 0,
    SystemOnly = 1,
};

enum class PhoneCallHistoryEntryQueryDesiredMedia : uint32_t
{
    None = 0x0,
    Audio = 0x1,
    Video = 0x2,
    All = 0xFFFFFFFF,
};

enum class PhoneCallHistoryEntryRawAddressKind : int32_t
{
    PhoneNumber = 0,
    Custom = 1,
};

enum class PhoneCallHistorySourceIdKind : int32_t
{
    CellularPhoneLineId = 0,
    PackageFamilyName = 1,
};

enum class PhoneCallHistoryStoreAccessType : int32_t
{
    AppEntriesReadWrite = 0,
    AllEntriesLimitedReadWrite = 1,
    AllEntriesReadWrite = 2,
};

enum class PhoneCallMedia : int32_t
{
    Audio = 0,
    AudioAndVideo = 1,
    AudioAndRealTimeText = 2,
};

enum class PhoneLineNetworkOperatorDisplayTextLocation : int32_t
{
    Default = 0,
    Tile = 1,
    Dialer = 2,
    InCallUI = 3,
};

enum class PhoneLineTransport : int32_t
{
    Cellular = 0,
    VoipApp = 1,
    Bluetooth = 2,
};

enum class PhoneLineWatcherStatus : int32_t
{
    Created = 0,
    Started = 1,
    EnumerationCompleted = 2,
    Stopped = 3,
};

enum class PhoneNetworkState : int32_t
{
    Unknown = 0,
    NoSignal = 1,
    Deregistered = 2,
    Denied = 3,
    Searching = 4,
    Home = 5,
    RoamingInternational = 6,
    RoamingDomestic = 7,
};

enum class PhoneSimState : int32_t
{
    Unknown = 0,
    PinNotRequired = 1,
    PinUnlocked = 2,
    PinLocked = 3,
    PukLocked = 4,
    NotInserted = 5,
    Invalid = 6,
    Disabled = 7,
};

enum class PhoneVoicemailType : int32_t
{
    None = 0,
    Traditional = 1,
    Visual = 2,
};

enum class VoipPhoneCallMedia : uint32_t
{
    None = 0x0,
    Audio = 0x1,
    Video = 0x2,
};

enum class VoipPhoneCallRejectReason : int32_t
{
    UserIgnored = 0,
    TimedOut = 1,
    OtherIncomingCall = 2,
    EmergencyCallExists = 3,
    InvalidCallState = 4,
};

enum class VoipPhoneCallResourceReservationStatus : int32_t
{
    Success = 0,
    ResourcesNotAvailable = 1,
};

enum class VoipPhoneCallState : int32_t
{
    Ended = 0,
    Held = 1,
    Active = 2,
    Incoming = 3,
    Outgoing = 4,
};

struct ICallAnswerEventArgs;
struct ICallRejectEventArgs;
struct ICallStateChangeEventArgs;
struct ILockScreenCallEndCallDeferral;
struct ILockScreenCallEndRequestedEventArgs;
struct ILockScreenCallUI;
struct IMuteChangeEventArgs;
struct IPhoneCallBlockingStatics;
struct IPhoneCallHistoryEntry;
struct IPhoneCallHistoryEntryAddress;
struct IPhoneCallHistoryEntryAddressFactory;
struct IPhoneCallHistoryEntryQueryOptions;
struct IPhoneCallHistoryEntryReader;
struct IPhoneCallHistoryManagerForUser;
struct IPhoneCallHistoryManagerStatics;
struct IPhoneCallHistoryManagerStatics2;
struct IPhoneCallHistoryStore;
struct IPhoneCallManagerStatics;
struct IPhoneCallManagerStatics2;
struct IPhoneCallStore;
struct IPhoneCallVideoCapabilities;
struct IPhoneCallVideoCapabilitiesManagerStatics;
struct IPhoneDialOptions;
struct IPhoneLine;
struct IPhoneLine2;
struct IPhoneLineCellularDetails;
struct IPhoneLineConfiguration;
struct IPhoneLineStatics;
struct IPhoneLineTransportDevice;
struct IPhoneLineTransportDeviceStatics;
struct IPhoneLineWatcher;
struct IPhoneLineWatcherEventArgs;
struct IPhoneVoicemail;
struct IVoipCallCoordinator;
struct IVoipCallCoordinator2;
struct IVoipCallCoordinator3;
struct IVoipCallCoordinator4;
struct IVoipCallCoordinatorStatics;
struct IVoipPhoneCall;
struct IVoipPhoneCall2;
struct IVoipPhoneCall3;
struct CallAnswerEventArgs;
struct CallRejectEventArgs;
struct CallStateChangeEventArgs;
struct LockScreenCallEndCallDeferral;
struct LockScreenCallEndRequestedEventArgs;
struct LockScreenCallUI;
struct MuteChangeEventArgs;
struct PhoneCallBlocking;
struct PhoneCallHistoryEntry;
struct PhoneCallHistoryEntryAddress;
struct PhoneCallHistoryEntryQueryOptions;
struct PhoneCallHistoryEntryReader;
struct PhoneCallHistoryManager;
struct PhoneCallHistoryManagerForUser;
struct PhoneCallHistoryStore;
struct PhoneCallManager;
struct PhoneCallStore;
struct PhoneCallVideoCapabilities;
struct PhoneCallVideoCapabilitiesManager;
struct PhoneDialOptions;
struct PhoneLine;
struct PhoneLineCellularDetails;
struct PhoneLineConfiguration;
struct PhoneLineTransportDevice;
struct PhoneLineWatcher;
struct PhoneLineWatcherEventArgs;
struct PhoneVoicemail;
struct VoipCallCoordinator;
struct VoipPhoneCall;

}

namespace winrt::impl {

template<> struct is_enum_flag<Windows::ApplicationModel::Calls::PhoneCallHistoryEntryQueryDesiredMedia> : std::true_type {};
template<> struct is_enum_flag<Windows::ApplicationModel::Calls::VoipPhoneCallMedia> : std::true_type {};
template <> struct category<Windows::ApplicationModel::Calls::ICallAnswerEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Calls::ICallRejectEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Calls::ICallStateChangeEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Calls::ILockScreenCallEndCallDeferral>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Calls::ILockScreenCallEndRequestedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Calls::ILockScreenCallUI>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Calls::IMuteChangeEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Calls::IPhoneCallBlockingStatics>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Calls::IPhoneCallHistoryEntry>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Calls::IPhoneCallHistoryEntryAddress>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Calls::IPhoneCallHistoryEntryAddressFactory>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Calls::IPhoneCallHistoryEntryQueryOptions>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Calls::IPhoneCallHistoryEntryReader>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Calls::IPhoneCallHistoryManagerForUser>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Calls::IPhoneCallHistoryManagerStatics>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Calls::IPhoneCallHistoryManagerStatics2>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Calls::IPhoneCallHistoryStore>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Calls::IPhoneCallManagerStatics>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Calls::IPhoneCallManagerStatics2>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Calls::IPhoneCallStore>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Calls::IPhoneCallVideoCapabilities>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Calls::IPhoneCallVideoCapabilitiesManagerStatics>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Calls::IPhoneDialOptions>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Calls::IPhoneLine>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Calls::IPhoneLine2>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Calls::IPhoneLineCellularDetails>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Calls::IPhoneLineConfiguration>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Calls::IPhoneLineStatics>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Calls::IPhoneLineTransportDevice>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Calls::IPhoneLineTransportDeviceStatics>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Calls::IPhoneLineWatcher>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Calls::IPhoneLineWatcherEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Calls::IPhoneVoicemail>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Calls::IVoipCallCoordinator>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Calls::IVoipCallCoordinator2>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Calls::IVoipCallCoordinator3>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Calls::IVoipCallCoordinator4>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Calls::IVoipCallCoordinatorStatics>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Calls::IVoipPhoneCall>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Calls::IVoipPhoneCall2>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Calls::IVoipPhoneCall3>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Calls::CallAnswerEventArgs>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Calls::CallRejectEventArgs>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Calls::CallStateChangeEventArgs>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Calls::LockScreenCallEndCallDeferral>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Calls::LockScreenCallEndRequestedEventArgs>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Calls::LockScreenCallUI>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Calls::MuteChangeEventArgs>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Calls::PhoneCallBlocking>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Calls::PhoneCallHistoryEntry>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Calls::PhoneCallHistoryEntryAddress>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Calls::PhoneCallHistoryEntryQueryOptions>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Calls::PhoneCallHistoryEntryReader>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Calls::PhoneCallHistoryManager>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Calls::PhoneCallHistoryManagerForUser>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Calls::PhoneCallHistoryStore>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Calls::PhoneCallManager>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Calls::PhoneCallStore>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Calls::PhoneCallVideoCapabilities>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Calls::PhoneCallVideoCapabilitiesManager>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Calls::PhoneDialOptions>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Calls::PhoneLine>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Calls::PhoneLineCellularDetails>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Calls::PhoneLineConfiguration>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Calls::PhoneLineTransportDevice>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Calls::PhoneLineWatcher>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Calls::PhoneLineWatcherEventArgs>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Calls::PhoneVoicemail>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Calls::VoipCallCoordinator>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Calls::VoipPhoneCall>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Calls::CellularDtmfMode>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Calls::PhoneAudioRoutingEndpoint>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Calls::PhoneCallHistoryEntryMedia>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Calls::PhoneCallHistoryEntryOtherAppReadAccess>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Calls::PhoneCallHistoryEntryQueryDesiredMedia>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Calls::PhoneCallHistoryEntryRawAddressKind>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Calls::PhoneCallHistorySourceIdKind>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Calls::PhoneCallHistoryStoreAccessType>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Calls::PhoneCallMedia>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Calls::PhoneLineNetworkOperatorDisplayTextLocation>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Calls::PhoneLineTransport>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Calls::PhoneLineWatcherStatus>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Calls::PhoneNetworkState>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Calls::PhoneSimState>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Calls::PhoneVoicemailType>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Calls::VoipPhoneCallMedia>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Calls::VoipPhoneCallRejectReason>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Calls::VoipPhoneCallResourceReservationStatus>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Calls::VoipPhoneCallState>{ using type = enum_category; };
template <> struct name<Windows::ApplicationModel::Calls::ICallAnswerEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.ICallAnswerEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Calls::ICallRejectEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.ICallRejectEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Calls::ICallStateChangeEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.ICallStateChangeEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Calls::ILockScreenCallEndCallDeferral>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.ILockScreenCallEndCallDeferral" }; };
template <> struct name<Windows::ApplicationModel::Calls::ILockScreenCallEndRequestedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.ILockScreenCallEndRequestedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Calls::ILockScreenCallUI>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.ILockScreenCallUI" }; };
template <> struct name<Windows::ApplicationModel::Calls::IMuteChangeEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.IMuteChangeEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Calls::IPhoneCallBlockingStatics>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.IPhoneCallBlockingStatics" }; };
template <> struct name<Windows::ApplicationModel::Calls::IPhoneCallHistoryEntry>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.IPhoneCallHistoryEntry" }; };
template <> struct name<Windows::ApplicationModel::Calls::IPhoneCallHistoryEntryAddress>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.IPhoneCallHistoryEntryAddress" }; };
template <> struct name<Windows::ApplicationModel::Calls::IPhoneCallHistoryEntryAddressFactory>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.IPhoneCallHistoryEntryAddressFactory" }; };
template <> struct name<Windows::ApplicationModel::Calls::IPhoneCallHistoryEntryQueryOptions>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.IPhoneCallHistoryEntryQueryOptions" }; };
template <> struct name<Windows::ApplicationModel::Calls::IPhoneCallHistoryEntryReader>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.IPhoneCallHistoryEntryReader" }; };
template <> struct name<Windows::ApplicationModel::Calls::IPhoneCallHistoryManagerForUser>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.IPhoneCallHistoryManagerForUser" }; };
template <> struct name<Windows::ApplicationModel::Calls::IPhoneCallHistoryManagerStatics>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.IPhoneCallHistoryManagerStatics" }; };
template <> struct name<Windows::ApplicationModel::Calls::IPhoneCallHistoryManagerStatics2>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.IPhoneCallHistoryManagerStatics2" }; };
template <> struct name<Windows::ApplicationModel::Calls::IPhoneCallHistoryStore>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.IPhoneCallHistoryStore" }; };
template <> struct name<Windows::ApplicationModel::Calls::IPhoneCallManagerStatics>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.IPhoneCallManagerStatics" }; };
template <> struct name<Windows::ApplicationModel::Calls::IPhoneCallManagerStatics2>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.IPhoneCallManagerStatics2" }; };
template <> struct name<Windows::ApplicationModel::Calls::IPhoneCallStore>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.IPhoneCallStore" }; };
template <> struct name<Windows::ApplicationModel::Calls::IPhoneCallVideoCapabilities>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.IPhoneCallVideoCapabilities" }; };
template <> struct name<Windows::ApplicationModel::Calls::IPhoneCallVideoCapabilitiesManagerStatics>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.IPhoneCallVideoCapabilitiesManagerStatics" }; };
template <> struct name<Windows::ApplicationModel::Calls::IPhoneDialOptions>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.IPhoneDialOptions" }; };
template <> struct name<Windows::ApplicationModel::Calls::IPhoneLine>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.IPhoneLine" }; };
template <> struct name<Windows::ApplicationModel::Calls::IPhoneLine2>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.IPhoneLine2" }; };
template <> struct name<Windows::ApplicationModel::Calls::IPhoneLineCellularDetails>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.IPhoneLineCellularDetails" }; };
template <> struct name<Windows::ApplicationModel::Calls::IPhoneLineConfiguration>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.IPhoneLineConfiguration" }; };
template <> struct name<Windows::ApplicationModel::Calls::IPhoneLineStatics>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.IPhoneLineStatics" }; };
template <> struct name<Windows::ApplicationModel::Calls::IPhoneLineTransportDevice>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.IPhoneLineTransportDevice" }; };
template <> struct name<Windows::ApplicationModel::Calls::IPhoneLineTransportDeviceStatics>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.IPhoneLineTransportDeviceStatics" }; };
template <> struct name<Windows::ApplicationModel::Calls::IPhoneLineWatcher>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.IPhoneLineWatcher" }; };
template <> struct name<Windows::ApplicationModel::Calls::IPhoneLineWatcherEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.IPhoneLineWatcherEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Calls::IPhoneVoicemail>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.IPhoneVoicemail" }; };
template <> struct name<Windows::ApplicationModel::Calls::IVoipCallCoordinator>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.IVoipCallCoordinator" }; };
template <> struct name<Windows::ApplicationModel::Calls::IVoipCallCoordinator2>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.IVoipCallCoordinator2" }; };
template <> struct name<Windows::ApplicationModel::Calls::IVoipCallCoordinator3>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.IVoipCallCoordinator3" }; };
template <> struct name<Windows::ApplicationModel::Calls::IVoipCallCoordinator4>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.IVoipCallCoordinator4" }; };
template <> struct name<Windows::ApplicationModel::Calls::IVoipCallCoordinatorStatics>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.IVoipCallCoordinatorStatics" }; };
template <> struct name<Windows::ApplicationModel::Calls::IVoipPhoneCall>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.IVoipPhoneCall" }; };
template <> struct name<Windows::ApplicationModel::Calls::IVoipPhoneCall2>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.IVoipPhoneCall2" }; };
template <> struct name<Windows::ApplicationModel::Calls::IVoipPhoneCall3>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.IVoipPhoneCall3" }; };
template <> struct name<Windows::ApplicationModel::Calls::CallAnswerEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.CallAnswerEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Calls::CallRejectEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.CallRejectEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Calls::CallStateChangeEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.CallStateChangeEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Calls::LockScreenCallEndCallDeferral>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.LockScreenCallEndCallDeferral" }; };
template <> struct name<Windows::ApplicationModel::Calls::LockScreenCallEndRequestedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.LockScreenCallEndRequestedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Calls::LockScreenCallUI>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.LockScreenCallUI" }; };
template <> struct name<Windows::ApplicationModel::Calls::MuteChangeEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.MuteChangeEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Calls::PhoneCallBlocking>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.PhoneCallBlocking" }; };
template <> struct name<Windows::ApplicationModel::Calls::PhoneCallHistoryEntry>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.PhoneCallHistoryEntry" }; };
template <> struct name<Windows::ApplicationModel::Calls::PhoneCallHistoryEntryAddress>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.PhoneCallHistoryEntryAddress" }; };
template <> struct name<Windows::ApplicationModel::Calls::PhoneCallHistoryEntryQueryOptions>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.PhoneCallHistoryEntryQueryOptions" }; };
template <> struct name<Windows::ApplicationModel::Calls::PhoneCallHistoryEntryReader>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.PhoneCallHistoryEntryReader" }; };
template <> struct name<Windows::ApplicationModel::Calls::PhoneCallHistoryManager>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.PhoneCallHistoryManager" }; };
template <> struct name<Windows::ApplicationModel::Calls::PhoneCallHistoryManagerForUser>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.PhoneCallHistoryManagerForUser" }; };
template <> struct name<Windows::ApplicationModel::Calls::PhoneCallHistoryStore>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.PhoneCallHistoryStore" }; };
template <> struct name<Windows::ApplicationModel::Calls::PhoneCallManager>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.PhoneCallManager" }; };
template <> struct name<Windows::ApplicationModel::Calls::PhoneCallStore>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.PhoneCallStore" }; };
template <> struct name<Windows::ApplicationModel::Calls::PhoneCallVideoCapabilities>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.PhoneCallVideoCapabilities" }; };
template <> struct name<Windows::ApplicationModel::Calls::PhoneCallVideoCapabilitiesManager>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.PhoneCallVideoCapabilitiesManager" }; };
template <> struct name<Windows::ApplicationModel::Calls::PhoneDialOptions>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.PhoneDialOptions" }; };
template <> struct name<Windows::ApplicationModel::Calls::PhoneLine>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.PhoneLine" }; };
template <> struct name<Windows::ApplicationModel::Calls::PhoneLineCellularDetails>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.PhoneLineCellularDetails" }; };
template <> struct name<Windows::ApplicationModel::Calls::PhoneLineConfiguration>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.PhoneLineConfiguration" }; };
template <> struct name<Windows::ApplicationModel::Calls::PhoneLineTransportDevice>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.PhoneLineTransportDevice" }; };
template <> struct name<Windows::ApplicationModel::Calls::PhoneLineWatcher>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.PhoneLineWatcher" }; };
template <> struct name<Windows::ApplicationModel::Calls::PhoneLineWatcherEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.PhoneLineWatcherEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Calls::PhoneVoicemail>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.PhoneVoicemail" }; };
template <> struct name<Windows::ApplicationModel::Calls::VoipCallCoordinator>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.VoipCallCoordinator" }; };
template <> struct name<Windows::ApplicationModel::Calls::VoipPhoneCall>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.VoipPhoneCall" }; };
template <> struct name<Windows::ApplicationModel::Calls::CellularDtmfMode>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.CellularDtmfMode" }; };
template <> struct name<Windows::ApplicationModel::Calls::PhoneAudioRoutingEndpoint>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.PhoneAudioRoutingEndpoint" }; };
template <> struct name<Windows::ApplicationModel::Calls::PhoneCallHistoryEntryMedia>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.PhoneCallHistoryEntryMedia" }; };
template <> struct name<Windows::ApplicationModel::Calls::PhoneCallHistoryEntryOtherAppReadAccess>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.PhoneCallHistoryEntryOtherAppReadAccess" }; };
template <> struct name<Windows::ApplicationModel::Calls::PhoneCallHistoryEntryQueryDesiredMedia>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.PhoneCallHistoryEntryQueryDesiredMedia" }; };
template <> struct name<Windows::ApplicationModel::Calls::PhoneCallHistoryEntryRawAddressKind>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.PhoneCallHistoryEntryRawAddressKind" }; };
template <> struct name<Windows::ApplicationModel::Calls::PhoneCallHistorySourceIdKind>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.PhoneCallHistorySourceIdKind" }; };
template <> struct name<Windows::ApplicationModel::Calls::PhoneCallHistoryStoreAccessType>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.PhoneCallHistoryStoreAccessType" }; };
template <> struct name<Windows::ApplicationModel::Calls::PhoneCallMedia>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.PhoneCallMedia" }; };
template <> struct name<Windows::ApplicationModel::Calls::PhoneLineNetworkOperatorDisplayTextLocation>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.PhoneLineNetworkOperatorDisplayTextLocation" }; };
template <> struct name<Windows::ApplicationModel::Calls::PhoneLineTransport>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.PhoneLineTransport" }; };
template <> struct name<Windows::ApplicationModel::Calls::PhoneLineWatcherStatus>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.PhoneLineWatcherStatus" }; };
template <> struct name<Windows::ApplicationModel::Calls::PhoneNetworkState>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.PhoneNetworkState" }; };
template <> struct name<Windows::ApplicationModel::Calls::PhoneSimState>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.PhoneSimState" }; };
template <> struct name<Windows::ApplicationModel::Calls::PhoneVoicemailType>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.PhoneVoicemailType" }; };
template <> struct name<Windows::ApplicationModel::Calls::VoipPhoneCallMedia>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.VoipPhoneCallMedia" }; };
template <> struct name<Windows::ApplicationModel::Calls::VoipPhoneCallRejectReason>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.VoipPhoneCallRejectReason" }; };
template <> struct name<Windows::ApplicationModel::Calls::VoipPhoneCallResourceReservationStatus>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.VoipPhoneCallResourceReservationStatus" }; };
template <> struct name<Windows::ApplicationModel::Calls::VoipPhoneCallState>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.VoipPhoneCallState" }; };
template <> struct guid_storage<Windows::ApplicationModel::Calls::ICallAnswerEventArgs>{ static constexpr guid value{ 0xFD789617,0x2DD7,0x4C8C,{ 0xB2,0xBD,0x95,0xD1,0x7A,0x5B,0xB7,0x33 } }; };
template <> struct guid_storage<Windows::ApplicationModel::Calls::ICallRejectEventArgs>{ static constexpr guid value{ 0xDA47FAD7,0x13D4,0x4D92,{ 0xA1,0xC2,0xB7,0x78,0x11,0xEE,0x37,0xEC } }; };
template <> struct guid_storage<Windows::ApplicationModel::Calls::ICallStateChangeEventArgs>{ static constexpr guid value{ 0xEAB2349E,0x66F5,0x47F9,{ 0x9F,0xB5,0x45,0x9C,0x51,0x98,0xC7,0x20 } }; };
template <> struct guid_storage<Windows::ApplicationModel::Calls::ILockScreenCallEndCallDeferral>{ static constexpr guid value{ 0x2DD7ED0D,0x98ED,0x4041,{ 0x96,0x32,0x50,0xFF,0x81,0x2B,0x77,0x3F } }; };
template <> struct guid_storage<Windows::ApplicationModel::Calls::ILockScreenCallEndRequestedEventArgs>{ static constexpr guid value{ 0x8190A363,0x6F27,0x46E9,{ 0xAE,0xB6,0xC0,0xAE,0x83,0xE4,0x7D,0xC7 } }; };
template <> struct guid_storage<Windows::ApplicationModel::Calls::ILockScreenCallUI>{ static constexpr guid value{ 0xC596FD8D,0x73C9,0x4A14,{ 0xB0,0x21,0xEC,0x1C,0x50,0xA3,0xB7,0x27 } }; };
template <> struct guid_storage<Windows::ApplicationModel::Calls::IMuteChangeEventArgs>{ static constexpr guid value{ 0x8585E159,0x0C41,0x432C,{ 0x81,0x4D,0xC5,0xF1,0xFD,0xF5,0x30,0xBE } }; };
template <> struct guid_storage<Windows::ApplicationModel::Calls::IPhoneCallBlockingStatics>{ static constexpr guid value{ 0x19646F84,0x2B79,0x26F1,{ 0xA4,0x6F,0x69,0x4B,0xE0,0x43,0xF3,0x13 } }; };
template <> struct guid_storage<Windows::ApplicationModel::Calls::IPhoneCallHistoryEntry>{ static constexpr guid value{ 0xFAB0E129,0x32A4,0x4B85,{ 0x83,0xD1,0xF9,0x0D,0x8C,0x23,0xA8,0x57 } }; };
template <> struct guid_storage<Windows::ApplicationModel::Calls::IPhoneCallHistoryEntryAddress>{ static constexpr guid value{ 0x30F159DA,0x3955,0x4042,{ 0x84,0xE6,0x66,0xEE,0xBF,0x82,0xE6,0x7F } }; };
template <> struct guid_storage<Windows::ApplicationModel::Calls::IPhoneCallHistoryEntryAddressFactory>{ static constexpr guid value{ 0xFB0FADBA,0xC7F0,0x4BB6,{ 0x9F,0x6B,0xBA,0x5D,0x73,0x20,0x9A,0xCA } }; };
template <> struct guid_storage<Windows::ApplicationModel::Calls::IPhoneCallHistoryEntryQueryOptions>{ static constexpr guid value{ 0x9C5FE15C,0x8BED,0x40CA,{ 0xB0,0x6E,0xC4,0xCA,0x8E,0xAE,0x5C,0x87 } }; };
template <> struct guid_storage<Windows::ApplicationModel::Calls::IPhoneCallHistoryEntryReader>{ static constexpr guid value{ 0x61ECE4BE,0x8D86,0x479F,{ 0x84,0x04,0xA9,0x84,0x69,0x20,0xFE,0xE6 } }; };
template <> struct guid_storage<Windows::ApplicationModel::Calls::IPhoneCallHistoryManagerForUser>{ static constexpr guid value{ 0xD925C523,0xF55F,0x4353,{ 0x9D,0xB4,0x02,0x05,0xA5,0x26,0x5A,0x55 } }; };
template <> struct guid_storage<Windows::ApplicationModel::Calls::IPhoneCallHistoryManagerStatics>{ static constexpr guid value{ 0xF5A6DA39,0xB31F,0x4F45,{ 0xAC,0x8E,0x1B,0x08,0x89,0x3C,0x1B,0x50 } }; };
template <> struct guid_storage<Windows::ApplicationModel::Calls::IPhoneCallHistoryManagerStatics2>{ static constexpr guid value{ 0xEFD474F0,0xA2DB,0x4188,{ 0x9E,0x92,0xBC,0x3C,0xFA,0x68,0x13,0xCF } }; };
template <> struct guid_storage<Windows::ApplicationModel::Calls::IPhoneCallHistoryStore>{ static constexpr guid value{ 0x2F907DB8,0xB40E,0x422B,{ 0x85,0x45,0xCB,0x19,0x10,0xA6,0x1C,0x52 } }; };
template <> struct guid_storage<Windows::ApplicationModel::Calls::IPhoneCallManagerStatics>{ static constexpr guid value{ 0x60EDAC78,0x78A6,0x4872,{ 0xA3,0xEF,0x98,0x32,0x5E,0xC8,0xB8,0x43 } }; };
template <> struct guid_storage<Windows::ApplicationModel::Calls::IPhoneCallManagerStatics2>{ static constexpr guid value{ 0xC7E3C8BC,0x2370,0x431C,{ 0x98,0xFD,0x43,0xBE,0x5F,0x03,0x08,0x6D } }; };
template <> struct guid_storage<Windows::ApplicationModel::Calls::IPhoneCallStore>{ static constexpr guid value{ 0x5F610748,0x18A6,0x4173,{ 0x86,0xD1,0x28,0xBE,0x9D,0xC6,0x2D,0xBA } }; };
template <> struct guid_storage<Windows::ApplicationModel::Calls::IPhoneCallVideoCapabilities>{ static constexpr guid value{ 0x02382786,0xB16A,0x4FDB,{ 0xBE,0x3B,0xC4,0x24,0x0E,0x13,0xAD,0x0D } }; };
template <> struct guid_storage<Windows::ApplicationModel::Calls::IPhoneCallVideoCapabilitiesManagerStatics>{ static constexpr guid value{ 0xF3C64B56,0xF00B,0x4A1C,{ 0xA0,0xC6,0xEE,0x19,0x10,0x74,0x9C,0xE7 } }; };
template <> struct guid_storage<Windows::ApplicationModel::Calls::IPhoneDialOptions>{ static constexpr guid value{ 0xB639C4B8,0xF06F,0x36CB,{ 0xA8,0x63,0x82,0x37,0x42,0xB5,0xF2,0xD4 } }; };
template <> struct guid_storage<Windows::ApplicationModel::Calls::IPhoneLine>{ static constexpr guid value{ 0x27C66F30,0x6A69,0x34CA,{ 0xA2,0xBA,0x65,0x30,0x25,0x30,0xC3,0x11 } }; };
template <> struct guid_storage<Windows::ApplicationModel::Calls::IPhoneLine2>{ static constexpr guid value{ 0x0167F56A,0x5344,0x5D64,{ 0x8A,0xF3,0xA3,0x1A,0x95,0x0E,0x91,0x6A } }; };
template <> struct guid_storage<Windows::ApplicationModel::Calls::IPhoneLineCellularDetails>{ static constexpr guid value{ 0x192601D5,0x147C,0x4769,{ 0xB6,0x73,0x98,0xA5,0xEC,0x84,0x26,0xCB } }; };
template <> struct guid_storage<Windows::ApplicationModel::Calls::IPhoneLineConfiguration>{ static constexpr guid value{ 0xFE265862,0xF64F,0x4312,{ 0xB2,0xA8,0x4E,0x25,0x77,0x21,0xAA,0x95 } }; };
template <> struct guid_storage<Windows::ApplicationModel::Calls::IPhoneLineStatics>{ static constexpr guid value{ 0xF38B5F23,0xCEB0,0x404F,{ 0xBC,0xF2,0xBA,0x9F,0x69,0x7D,0x8A,0xDF } }; };
template <> struct guid_storage<Windows::ApplicationModel::Calls::IPhoneLineTransportDevice>{ static constexpr guid value{ 0xEFA8F889,0xCFFA,0x59F4,{ 0x97,0xE4,0x74,0x70,0x5B,0x7D,0xC4,0x90 } }; };
template <> struct guid_storage<Windows::ApplicationModel::Calls::IPhoneLineTransportDeviceStatics>{ static constexpr guid value{ 0x0F3121AC,0xD609,0x51A1,{ 0x96,0xF3,0xFB,0x00,0xD1,0x81,0x92,0x52 } }; };
template <> struct guid_storage<Windows::ApplicationModel::Calls::IPhoneLineWatcher>{ static constexpr guid value{ 0x8A45CD0A,0x6323,0x44E0,{ 0xA6,0xF6,0x9F,0x21,0xF6,0x4D,0xC9,0x0A } }; };
template <> struct guid_storage<Windows::ApplicationModel::Calls::IPhoneLineWatcherEventArgs>{ static constexpr guid value{ 0xD07C753E,0x9E12,0x4A37,{ 0x82,0xB7,0xAD,0x53,0x5D,0xAD,0x6A,0x67 } }; };
template <> struct guid_storage<Windows::ApplicationModel::Calls::IPhoneVoicemail>{ static constexpr guid value{ 0xC9CE77F6,0x6E9F,0x3A8B,{ 0xB7,0x27,0x6E,0x0C,0xF6,0x99,0x82,0x24 } }; };
template <> struct guid_storage<Windows::ApplicationModel::Calls::IVoipCallCoordinator>{ static constexpr guid value{ 0x4F118BCF,0xE8EF,0x4434,{ 0x9C,0x5F,0xA8,0xD8,0x93,0xFA,0xFE,0x79 } }; };
template <> struct guid_storage<Windows::ApplicationModel::Calls::IVoipCallCoordinator2>{ static constexpr guid value{ 0xBEB4A9F3,0xC704,0x4234,{ 0x89,0xCE,0xE8,0x8C,0xC0,0xD2,0x8F,0xBE } }; };
template <> struct guid_storage<Windows::ApplicationModel::Calls::IVoipCallCoordinator3>{ static constexpr guid value{ 0x338D0CBF,0x9B55,0x4021,{ 0x87,0xCA,0xE6,0x4B,0x9B,0xD6,0x66,0xC7 } }; };
template <> struct guid_storage<Windows::ApplicationModel::Calls::IVoipCallCoordinator4>{ static constexpr guid value{ 0x83737239,0x9311,0x468F,{ 0xBB,0x49,0x47,0xE0,0xDF,0xB5,0xD9,0x3E } }; };
template <> struct guid_storage<Windows::ApplicationModel::Calls::IVoipCallCoordinatorStatics>{ static constexpr guid value{ 0x7F5D1F2B,0xE04A,0x4D10,{ 0xB3,0x1A,0xA5,0x5C,0x92,0x2C,0xC2,0xFB } }; };
template <> struct guid_storage<Windows::ApplicationModel::Calls::IVoipPhoneCall>{ static constexpr guid value{ 0x6CF1F19A,0x7794,0x4A5A,{ 0x8C,0x68,0xAE,0x87,0x94,0x7A,0x69,0x90 } }; };
template <> struct guid_storage<Windows::ApplicationModel::Calls::IVoipPhoneCall2>{ static constexpr guid value{ 0x741B46E1,0x245F,0x41F3,{ 0x93,0x99,0x31,0x41,0xD2,0x5B,0x52,0xE3 } }; };
template <> struct guid_storage<Windows::ApplicationModel::Calls::IVoipPhoneCall3>{ static constexpr guid value{ 0x0D891522,0xE258,0x4AA9,{ 0x90,0x7A,0x1A,0xA4,0x13,0xC2,0x55,0x23 } }; };
template <> struct default_interface<Windows::ApplicationModel::Calls::CallAnswerEventArgs>{ using type = Windows::ApplicationModel::Calls::ICallAnswerEventArgs; };
template <> struct default_interface<Windows::ApplicationModel::Calls::CallRejectEventArgs>{ using type = Windows::ApplicationModel::Calls::ICallRejectEventArgs; };
template <> struct default_interface<Windows::ApplicationModel::Calls::CallStateChangeEventArgs>{ using type = Windows::ApplicationModel::Calls::ICallStateChangeEventArgs; };
template <> struct default_interface<Windows::ApplicationModel::Calls::LockScreenCallEndCallDeferral>{ using type = Windows::ApplicationModel::Calls::ILockScreenCallEndCallDeferral; };
template <> struct default_interface<Windows::ApplicationModel::Calls::LockScreenCallEndRequestedEventArgs>{ using type = Windows::ApplicationModel::Calls::ILockScreenCallEndRequestedEventArgs; };
template <> struct default_interface<Windows::ApplicationModel::Calls::LockScreenCallUI>{ using type = Windows::ApplicationModel::Calls::ILockScreenCallUI; };
template <> struct default_interface<Windows::ApplicationModel::Calls::MuteChangeEventArgs>{ using type = Windows::ApplicationModel::Calls::IMuteChangeEventArgs; };
template <> struct default_interface<Windows::ApplicationModel::Calls::PhoneCallHistoryEntry>{ using type = Windows::ApplicationModel::Calls::IPhoneCallHistoryEntry; };
template <> struct default_interface<Windows::ApplicationModel::Calls::PhoneCallHistoryEntryAddress>{ using type = Windows::ApplicationModel::Calls::IPhoneCallHistoryEntryAddress; };
template <> struct default_interface<Windows::ApplicationModel::Calls::PhoneCallHistoryEntryQueryOptions>{ using type = Windows::ApplicationModel::Calls::IPhoneCallHistoryEntryQueryOptions; };
template <> struct default_interface<Windows::ApplicationModel::Calls::PhoneCallHistoryEntryReader>{ using type = Windows::ApplicationModel::Calls::IPhoneCallHistoryEntryReader; };
template <> struct default_interface<Windows::ApplicationModel::Calls::PhoneCallHistoryManagerForUser>{ using type = Windows::ApplicationModel::Calls::IPhoneCallHistoryManagerForUser; };
template <> struct default_interface<Windows::ApplicationModel::Calls::PhoneCallHistoryStore>{ using type = Windows::ApplicationModel::Calls::IPhoneCallHistoryStore; };
template <> struct default_interface<Windows::ApplicationModel::Calls::PhoneCallStore>{ using type = Windows::ApplicationModel::Calls::IPhoneCallStore; };
template <> struct default_interface<Windows::ApplicationModel::Calls::PhoneCallVideoCapabilities>{ using type = Windows::ApplicationModel::Calls::IPhoneCallVideoCapabilities; };
template <> struct default_interface<Windows::ApplicationModel::Calls::PhoneDialOptions>{ using type = Windows::ApplicationModel::Calls::IPhoneDialOptions; };
template <> struct default_interface<Windows::ApplicationModel::Calls::PhoneLine>{ using type = Windows::ApplicationModel::Calls::IPhoneLine; };
template <> struct default_interface<Windows::ApplicationModel::Calls::PhoneLineCellularDetails>{ using type = Windows::ApplicationModel::Calls::IPhoneLineCellularDetails; };
template <> struct default_interface<Windows::ApplicationModel::Calls::PhoneLineConfiguration>{ using type = Windows::ApplicationModel::Calls::IPhoneLineConfiguration; };
template <> struct default_interface<Windows::ApplicationModel::Calls::PhoneLineTransportDevice>{ using type = Windows::ApplicationModel::Calls::IPhoneLineTransportDevice; };
template <> struct default_interface<Windows::ApplicationModel::Calls::PhoneLineWatcher>{ using type = Windows::ApplicationModel::Calls::IPhoneLineWatcher; };
template <> struct default_interface<Windows::ApplicationModel::Calls::PhoneLineWatcherEventArgs>{ using type = Windows::ApplicationModel::Calls::IPhoneLineWatcherEventArgs; };
template <> struct default_interface<Windows::ApplicationModel::Calls::PhoneVoicemail>{ using type = Windows::ApplicationModel::Calls::IPhoneVoicemail; };
template <> struct default_interface<Windows::ApplicationModel::Calls::VoipCallCoordinator>{ using type = Windows::ApplicationModel::Calls::IVoipCallCoordinator; };
template <> struct default_interface<Windows::ApplicationModel::Calls::VoipPhoneCall>{ using type = Windows::ApplicationModel::Calls::IVoipPhoneCall; };

template <> struct abi<Windows::ApplicationModel::Calls::ICallAnswerEventArgs>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_AcceptedMedia(Windows::ApplicationModel::Calls::VoipPhoneCallMedia* value) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Calls::ICallRejectEventArgs>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_RejectReason(Windows::ApplicationModel::Calls::VoipPhoneCallRejectReason* value) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Calls::ICallStateChangeEventArgs>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_State(Windows::ApplicationModel::Calls::VoipPhoneCallState* value) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Calls::ILockScreenCallEndCallDeferral>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL Complete() noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Calls::ILockScreenCallEndRequestedEventArgs>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL GetDeferral(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Deadline(Windows::Foundation::DateTime* value) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Calls::ILockScreenCallUI>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL Dismiss() noexcept = 0;
    virtual int32_t WINRT_CALL add_EndRequested(void* handler, winrt::event_token* token) noexcept = 0;
    virtual int32_t WINRT_CALL remove_EndRequested(winrt::event_token token) noexcept = 0;
    virtual int32_t WINRT_CALL add_Closed(void* handler, winrt::event_token* token) noexcept = 0;
    virtual int32_t WINRT_CALL remove_Closed(winrt::event_token token) noexcept = 0;
    virtual int32_t WINRT_CALL get_CallTitle(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL put_CallTitle(void* value) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Calls::IMuteChangeEventArgs>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_Muted(bool* value) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Calls::IPhoneCallBlockingStatics>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_BlockUnknownNumbers(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_BlockUnknownNumbers(bool value) noexcept = 0;
    virtual int32_t WINRT_CALL get_BlockPrivateNumbers(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_BlockPrivateNumbers(bool value) noexcept = 0;
    virtual int32_t WINRT_CALL SetCallBlockingListAsync(void* phoneNumberList, void** result) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Calls::IPhoneCallHistoryEntry>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_Id(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Address(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL put_Address(void* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Duration(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL put_Duration(void* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_IsCallerIdBlocked(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_IsCallerIdBlocked(bool value) noexcept = 0;
    virtual int32_t WINRT_CALL get_IsEmergency(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_IsEmergency(bool value) noexcept = 0;
    virtual int32_t WINRT_CALL get_IsIncoming(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_IsIncoming(bool value) noexcept = 0;
    virtual int32_t WINRT_CALL get_IsMissed(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_IsMissed(bool value) noexcept = 0;
    virtual int32_t WINRT_CALL get_IsRinging(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_IsRinging(bool value) noexcept = 0;
    virtual int32_t WINRT_CALL get_IsSeen(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_IsSeen(bool value) noexcept = 0;
    virtual int32_t WINRT_CALL get_IsSuppressed(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_IsSuppressed(bool value) noexcept = 0;
    virtual int32_t WINRT_CALL get_IsVoicemail(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_IsVoicemail(bool value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Media(Windows::ApplicationModel::Calls::PhoneCallHistoryEntryMedia* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_Media(Windows::ApplicationModel::Calls::PhoneCallHistoryEntryMedia value) noexcept = 0;
    virtual int32_t WINRT_CALL get_OtherAppReadAccess(Windows::ApplicationModel::Calls::PhoneCallHistoryEntryOtherAppReadAccess* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_OtherAppReadAccess(Windows::ApplicationModel::Calls::PhoneCallHistoryEntryOtherAppReadAccess value) noexcept = 0;
    virtual int32_t WINRT_CALL get_RemoteId(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL put_RemoteId(void* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_SourceDisplayName(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_SourceId(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL put_SourceId(void* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_SourceIdKind(Windows::ApplicationModel::Calls::PhoneCallHistorySourceIdKind* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_SourceIdKind(Windows::ApplicationModel::Calls::PhoneCallHistorySourceIdKind value) noexcept = 0;
    virtual int32_t WINRT_CALL get_StartTime(Windows::Foundation::DateTime* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_StartTime(Windows::Foundation::DateTime value) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Calls::IPhoneCallHistoryEntryAddress>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_ContactId(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL put_ContactId(void* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_DisplayName(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL put_DisplayName(void* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_RawAddress(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL put_RawAddress(void* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_RawAddressKind(Windows::ApplicationModel::Calls::PhoneCallHistoryEntryRawAddressKind* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_RawAddressKind(Windows::ApplicationModel::Calls::PhoneCallHistoryEntryRawAddressKind value) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Calls::IPhoneCallHistoryEntryAddressFactory>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL Create(void* rawAddress, Windows::ApplicationModel::Calls::PhoneCallHistoryEntryRawAddressKind rawAddressKind, void** result) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Calls::IPhoneCallHistoryEntryQueryOptions>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_DesiredMedia(Windows::ApplicationModel::Calls::PhoneCallHistoryEntryQueryDesiredMedia* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_DesiredMedia(Windows::ApplicationModel::Calls::PhoneCallHistoryEntryQueryDesiredMedia value) noexcept = 0;
    virtual int32_t WINRT_CALL get_SourceIds(void** value) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Calls::IPhoneCallHistoryEntryReader>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL ReadBatchAsync(void** result) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Calls::IPhoneCallHistoryManagerForUser>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL RequestStoreAsync(Windows::ApplicationModel::Calls::PhoneCallHistoryStoreAccessType accessType, void** result) noexcept = 0;
    virtual int32_t WINRT_CALL get_User(void** value) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Calls::IPhoneCallHistoryManagerStatics>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL RequestStoreAsync(Windows::ApplicationModel::Calls::PhoneCallHistoryStoreAccessType accessType, void** result) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Calls::IPhoneCallHistoryManagerStatics2>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL GetForUser(void* user, void** result) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Calls::IPhoneCallHistoryStore>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL GetEntryAsync(void* callHistoryEntryId, void** result) noexcept = 0;
    virtual int32_t WINRT_CALL GetEntryReader(void** result) noexcept = 0;
    virtual int32_t WINRT_CALL GetEntryReaderWithOptions(void* queryOptions, void** result) noexcept = 0;
    virtual int32_t WINRT_CALL SaveEntryAsync(void* callHistoryEntry, void** result) noexcept = 0;
    virtual int32_t WINRT_CALL DeleteEntryAsync(void* callHistoryEntry, void** result) noexcept = 0;
    virtual int32_t WINRT_CALL DeleteEntriesAsync(void* callHistoryEntries, void** result) noexcept = 0;
    virtual int32_t WINRT_CALL MarkEntryAsSeenAsync(void* callHistoryEntry, void** result) noexcept = 0;
    virtual int32_t WINRT_CALL MarkEntriesAsSeenAsync(void* callHistoryEntries, void** result) noexcept = 0;
    virtual int32_t WINRT_CALL GetUnseenCountAsync(void** result) noexcept = 0;
    virtual int32_t WINRT_CALL MarkAllAsSeenAsync(void** result) noexcept = 0;
    virtual int32_t WINRT_CALL GetSourcesUnseenCountAsync(void* sourceIds, void** result) noexcept = 0;
    virtual int32_t WINRT_CALL MarkSourcesAsSeenAsync(void* sourceIds, void** result) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Calls::IPhoneCallManagerStatics>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL ShowPhoneCallUI(void* phoneNumber, void* displayName) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Calls::IPhoneCallManagerStatics2>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL add_CallStateChanged(void* handler, winrt::event_token* token) noexcept = 0;
    virtual int32_t WINRT_CALL remove_CallStateChanged(winrt::event_token token) noexcept = 0;
    virtual int32_t WINRT_CALL get_IsCallActive(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_IsCallIncoming(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL ShowPhoneCallSettingsUI() noexcept = 0;
    virtual int32_t WINRT_CALL RequestStoreAsync(void** result) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Calls::IPhoneCallStore>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL IsEmergencyPhoneNumberAsync(void* number, void** result) noexcept = 0;
    virtual int32_t WINRT_CALL GetDefaultLineAsync(void** result) noexcept = 0;
    virtual int32_t WINRT_CALL RequestLineWatcher(void** result) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Calls::IPhoneCallVideoCapabilities>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_IsVideoCallingCapable(bool* pValue) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Calls::IPhoneCallVideoCapabilitiesManagerStatics>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL GetCapabilitiesAsync(void* phoneNumber, void** result) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Calls::IPhoneDialOptions>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_Number(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL put_Number(void* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_DisplayName(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL put_DisplayName(void* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Contact(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL put_Contact(void* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_ContactPhone(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL put_ContactPhone(void* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Media(Windows::ApplicationModel::Calls::PhoneCallMedia* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_Media(Windows::ApplicationModel::Calls::PhoneCallMedia value) noexcept = 0;
    virtual int32_t WINRT_CALL get_AudioEndpoint(Windows::ApplicationModel::Calls::PhoneAudioRoutingEndpoint* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_AudioEndpoint(Windows::ApplicationModel::Calls::PhoneAudioRoutingEndpoint value) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Calls::IPhoneLine>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL add_LineChanged(void* handler, winrt::event_token* token) noexcept = 0;
    virtual int32_t WINRT_CALL remove_LineChanged(winrt::event_token token) noexcept = 0;
    virtual int32_t WINRT_CALL get_Id(winrt::guid* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_DisplayColor(struct struct_Windows_UI_Color* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_NetworkState(Windows::ApplicationModel::Calls::PhoneNetworkState* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_DisplayName(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Voicemail(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_NetworkName(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_CellularDetails(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Transport(Windows::ApplicationModel::Calls::PhoneLineTransport* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_CanDial(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_SupportsTile(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_VideoCallingCapabilities(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_LineConfiguration(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL IsImmediateDialNumberAsync(void* number, void** result) noexcept = 0;
    virtual int32_t WINRT_CALL Dial(void* number, void* displayName) noexcept = 0;
    virtual int32_t WINRT_CALL DialWithOptions(void* options) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Calls::IPhoneLine2>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL EnableTextReply(bool value) noexcept = 0;
    virtual int32_t WINRT_CALL get_TransportDeviceId(void** value) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Calls::IPhoneLineCellularDetails>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_SimState(Windows::ApplicationModel::Calls::PhoneSimState* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_SimSlotIndex(int32_t* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_IsModemOn(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_RegistrationRejectCode(int32_t* value) noexcept = 0;
    virtual int32_t WINRT_CALL GetNetworkOperatorDisplayText(Windows::ApplicationModel::Calls::PhoneLineNetworkOperatorDisplayTextLocation location, void** value) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Calls::IPhoneLineConfiguration>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_IsVideoCallingEnabled(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_ExtendedProperties(void** value) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Calls::IPhoneLineStatics>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL FromIdAsync(winrt::guid lineId, void** result) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Calls::IPhoneLineTransportDevice>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_DeviceId(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Transport(Windows::ApplicationModel::Calls::PhoneLineTransport* value) noexcept = 0;
    virtual int32_t WINRT_CALL RequestAccessAsync(void** operation) noexcept = 0;
    virtual int32_t WINRT_CALL RegisterApp() noexcept = 0;
    virtual int32_t WINRT_CALL RegisterAppForUser(void* user) noexcept = 0;
    virtual int32_t WINRT_CALL UnregisterApp() noexcept = 0;
    virtual int32_t WINRT_CALL UnregisterAppForUser(void* user) noexcept = 0;
    virtual int32_t WINRT_CALL IsRegistered(bool* result) noexcept = 0;
    virtual int32_t WINRT_CALL Connect(bool* result) noexcept = 0;
    virtual int32_t WINRT_CALL ConnectAsync(void** operation) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Calls::IPhoneLineTransportDeviceStatics>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL FromId(void* id, void** result) noexcept = 0;
    virtual int32_t WINRT_CALL GetDeviceSelector(void** result) noexcept = 0;
    virtual int32_t WINRT_CALL GetDeviceSelectorForPhoneLineTransport(Windows::ApplicationModel::Calls::PhoneLineTransport transport, void** result) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Calls::IPhoneLineWatcher>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL Start() noexcept = 0;
    virtual int32_t WINRT_CALL Stop() noexcept = 0;
    virtual int32_t WINRT_CALL add_LineAdded(void* handler, winrt::event_token* token) noexcept = 0;
    virtual int32_t WINRT_CALL remove_LineAdded(winrt::event_token token) noexcept = 0;
    virtual int32_t WINRT_CALL add_LineRemoved(void* handler, winrt::event_token* token) noexcept = 0;
    virtual int32_t WINRT_CALL remove_LineRemoved(winrt::event_token token) noexcept = 0;
    virtual int32_t WINRT_CALL add_LineUpdated(void* handler, winrt::event_token* token) noexcept = 0;
    virtual int32_t WINRT_CALL remove_LineUpdated(winrt::event_token token) noexcept = 0;
    virtual int32_t WINRT_CALL add_EnumerationCompleted(void* handler, winrt::event_token* token) noexcept = 0;
    virtual int32_t WINRT_CALL remove_EnumerationCompleted(winrt::event_token token) noexcept = 0;
    virtual int32_t WINRT_CALL add_Stopped(void* handler, winrt::event_token* token) noexcept = 0;
    virtual int32_t WINRT_CALL remove_Stopped(winrt::event_token token) noexcept = 0;
    virtual int32_t WINRT_CALL get_Status(Windows::ApplicationModel::Calls::PhoneLineWatcherStatus* status) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Calls::IPhoneLineWatcherEventArgs>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_LineId(winrt::guid* value) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Calls::IPhoneVoicemail>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_Number(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_MessageCount(int32_t* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Type(Windows::ApplicationModel::Calls::PhoneVoicemailType* value) noexcept = 0;
    virtual int32_t WINRT_CALL DialVoicemailAsync(void** result) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Calls::IVoipCallCoordinator>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL ReserveCallResourcesAsync(void* taskEntryPoint, void** operation) noexcept = 0;
    virtual int32_t WINRT_CALL add_MuteStateChanged(void* muteChangeHandler, winrt::event_token* token) noexcept = 0;
    virtual int32_t WINRT_CALL remove_MuteStateChanged(winrt::event_token token) noexcept = 0;
    virtual int32_t WINRT_CALL RequestNewIncomingCall(void* context, void* contactName, void* contactNumber, void* contactImage, void* serviceName, void* brandingImage, void* callDetails, void* ringtone, Windows::ApplicationModel::Calls::VoipPhoneCallMedia media, Windows::Foundation::TimeSpan ringTimeout, void** call) noexcept = 0;
    virtual int32_t WINRT_CALL RequestNewOutgoingCall(void* context, void* contactName, void* serviceName, Windows::ApplicationModel::Calls::VoipPhoneCallMedia media, void** call) noexcept = 0;
    virtual int32_t WINRT_CALL NotifyMuted() noexcept = 0;
    virtual int32_t WINRT_CALL NotifyUnmuted() noexcept = 0;
    virtual int32_t WINRT_CALL RequestOutgoingUpgradeToVideoCall(winrt::guid callUpgradeGuid, void* context, void* contactName, void* serviceName, void** call) noexcept = 0;
    virtual int32_t WINRT_CALL RequestIncomingUpgradeToVideoCall(void* context, void* contactName, void* contactNumber, void* contactImage, void* serviceName, void* brandingImage, void* callDetails, void* ringtone, Windows::Foundation::TimeSpan ringTimeout, void** call) noexcept = 0;
    virtual int32_t WINRT_CALL TerminateCellularCall(winrt::guid callUpgradeGuid) noexcept = 0;
    virtual int32_t WINRT_CALL CancelUpgrade(winrt::guid callUpgradeGuid) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Calls::IVoipCallCoordinator2>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL SetupNewAcceptedCall(void* context, void* contactName, void* contactNumber, void* serviceName, Windows::ApplicationModel::Calls::VoipPhoneCallMedia media, void** call) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Calls::IVoipCallCoordinator3>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL RequestNewAppInitiatedCall(void* context, void* contactName, void* contactNumber, void* serviceName, Windows::ApplicationModel::Calls::VoipPhoneCallMedia media, void** call) noexcept = 0;
    virtual int32_t WINRT_CALL RequestNewIncomingCallWithContactRemoteId(void* context, void* contactName, void* contactNumber, void* contactImage, void* serviceName, void* brandingImage, void* callDetails, void* ringtone, Windows::ApplicationModel::Calls::VoipPhoneCallMedia media, Windows::Foundation::TimeSpan ringTimeout, void* contactRemoteId, void** call) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Calls::IVoipCallCoordinator4>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL ReserveOneProcessCallResourcesAsync(void** operation) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Calls::IVoipCallCoordinatorStatics>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL GetDefault(void** coordinator) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Calls::IVoipPhoneCall>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL add_EndRequested(void* handler, winrt::event_token* token) noexcept = 0;
    virtual int32_t WINRT_CALL remove_EndRequested(winrt::event_token token) noexcept = 0;
    virtual int32_t WINRT_CALL add_HoldRequested(void* handler, winrt::event_token* token) noexcept = 0;
    virtual int32_t WINRT_CALL remove_HoldRequested(winrt::event_token token) noexcept = 0;
    virtual int32_t WINRT_CALL add_ResumeRequested(void* handler, winrt::event_token* token) noexcept = 0;
    virtual int32_t WINRT_CALL remove_ResumeRequested(winrt::event_token token) noexcept = 0;
    virtual int32_t WINRT_CALL add_AnswerRequested(void* acceptHandler, winrt::event_token* token) noexcept = 0;
    virtual int32_t WINRT_CALL remove_AnswerRequested(winrt::event_token token) noexcept = 0;
    virtual int32_t WINRT_CALL add_RejectRequested(void* rejectHandler, winrt::event_token* token) noexcept = 0;
    virtual int32_t WINRT_CALL remove_RejectRequested(winrt::event_token token) noexcept = 0;
    virtual int32_t WINRT_CALL NotifyCallHeld() noexcept = 0;
    virtual int32_t WINRT_CALL NotifyCallActive() noexcept = 0;
    virtual int32_t WINRT_CALL NotifyCallEnded() noexcept = 0;
    virtual int32_t WINRT_CALL get_ContactName(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL put_ContactName(void* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_StartTime(Windows::Foundation::DateTime* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_StartTime(Windows::Foundation::DateTime value) noexcept = 0;
    virtual int32_t WINRT_CALL get_CallMedia(Windows::ApplicationModel::Calls::VoipPhoneCallMedia* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_CallMedia(Windows::ApplicationModel::Calls::VoipPhoneCallMedia value) noexcept = 0;
    virtual int32_t WINRT_CALL NotifyCallReady() noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Calls::IVoipPhoneCall2>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL TryShowAppUI() noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Calls::IVoipPhoneCall3>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL NotifyCallAccepted(Windows::ApplicationModel::Calls::VoipPhoneCallMedia media) noexcept = 0;
};};

template <typename D>
struct consume_Windows_ApplicationModel_Calls_ICallAnswerEventArgs
{
    Windows::ApplicationModel::Calls::VoipPhoneCallMedia AcceptedMedia() const;
};
template <> struct consume<Windows::ApplicationModel::Calls::ICallAnswerEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_Calls_ICallAnswerEventArgs<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Calls_ICallRejectEventArgs
{
    Windows::ApplicationModel::Calls::VoipPhoneCallRejectReason RejectReason() const;
};
template <> struct consume<Windows::ApplicationModel::Calls::ICallRejectEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_Calls_ICallRejectEventArgs<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Calls_ICallStateChangeEventArgs
{
    Windows::ApplicationModel::Calls::VoipPhoneCallState State() const;
};
template <> struct consume<Windows::ApplicationModel::Calls::ICallStateChangeEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_Calls_ICallStateChangeEventArgs<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Calls_ILockScreenCallEndCallDeferral
{
    void Complete() const;
};
template <> struct consume<Windows::ApplicationModel::Calls::ILockScreenCallEndCallDeferral> { template <typename D> using type = consume_Windows_ApplicationModel_Calls_ILockScreenCallEndCallDeferral<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Calls_ILockScreenCallEndRequestedEventArgs
{
    Windows::ApplicationModel::Calls::LockScreenCallEndCallDeferral GetDeferral() const;
    Windows::Foundation::DateTime Deadline() const;
};
template <> struct consume<Windows::ApplicationModel::Calls::ILockScreenCallEndRequestedEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_Calls_ILockScreenCallEndRequestedEventArgs<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Calls_ILockScreenCallUI
{
    void Dismiss() const;
    winrt::event_token EndRequested(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Calls::LockScreenCallUI, Windows::ApplicationModel::Calls::LockScreenCallEndRequestedEventArgs> const& handler) const;
    using EndRequested_revoker = impl::event_revoker<Windows::ApplicationModel::Calls::ILockScreenCallUI, &impl::abi_t<Windows::ApplicationModel::Calls::ILockScreenCallUI>::remove_EndRequested>;
    EndRequested_revoker EndRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Calls::LockScreenCallUI, Windows::ApplicationModel::Calls::LockScreenCallEndRequestedEventArgs> const& handler) const;
    void EndRequested(winrt::event_token const& token) const noexcept;
    winrt::event_token Closed(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Calls::LockScreenCallUI, Windows::Foundation::IInspectable> const& handler) const;
    using Closed_revoker = impl::event_revoker<Windows::ApplicationModel::Calls::ILockScreenCallUI, &impl::abi_t<Windows::ApplicationModel::Calls::ILockScreenCallUI>::remove_Closed>;
    Closed_revoker Closed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Calls::LockScreenCallUI, Windows::Foundation::IInspectable> const& handler) const;
    void Closed(winrt::event_token const& token) const noexcept;
    hstring CallTitle() const;
    void CallTitle(param::hstring const& value) const;
};
template <> struct consume<Windows::ApplicationModel::Calls::ILockScreenCallUI> { template <typename D> using type = consume_Windows_ApplicationModel_Calls_ILockScreenCallUI<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Calls_IMuteChangeEventArgs
{
    bool Muted() const;
};
template <> struct consume<Windows::ApplicationModel::Calls::IMuteChangeEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_Calls_IMuteChangeEventArgs<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Calls_IPhoneCallBlockingStatics
{
    bool BlockUnknownNumbers() const;
    void BlockUnknownNumbers(bool value) const;
    bool BlockPrivateNumbers() const;
    void BlockPrivateNumbers(bool value) const;
    Windows::Foundation::IAsyncOperation<bool> SetCallBlockingListAsync(param::async_iterable<hstring> const& phoneNumberList) const;
};
template <> struct consume<Windows::ApplicationModel::Calls::IPhoneCallBlockingStatics> { template <typename D> using type = consume_Windows_ApplicationModel_Calls_IPhoneCallBlockingStatics<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Calls_IPhoneCallHistoryEntry
{
    hstring Id() const;
    Windows::ApplicationModel::Calls::PhoneCallHistoryEntryAddress Address() const;
    void Address(Windows::ApplicationModel::Calls::PhoneCallHistoryEntryAddress const& value) const;
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> Duration() const;
    void Duration(optional<Windows::Foundation::TimeSpan> const& value) const;
    bool IsCallerIdBlocked() const;
    void IsCallerIdBlocked(bool value) const;
    bool IsEmergency() const;
    void IsEmergency(bool value) const;
    bool IsIncoming() const;
    void IsIncoming(bool value) const;
    bool IsMissed() const;
    void IsMissed(bool value) const;
    bool IsRinging() const;
    void IsRinging(bool value) const;
    bool IsSeen() const;
    void IsSeen(bool value) const;
    bool IsSuppressed() const;
    void IsSuppressed(bool value) const;
    bool IsVoicemail() const;
    void IsVoicemail(bool value) const;
    Windows::ApplicationModel::Calls::PhoneCallHistoryEntryMedia Media() const;
    void Media(Windows::ApplicationModel::Calls::PhoneCallHistoryEntryMedia const& value) const;
    Windows::ApplicationModel::Calls::PhoneCallHistoryEntryOtherAppReadAccess OtherAppReadAccess() const;
    void OtherAppReadAccess(Windows::ApplicationModel::Calls::PhoneCallHistoryEntryOtherAppReadAccess const& value) const;
    hstring RemoteId() const;
    void RemoteId(param::hstring const& value) const;
    hstring SourceDisplayName() const;
    hstring SourceId() const;
    void SourceId(param::hstring const& value) const;
    Windows::ApplicationModel::Calls::PhoneCallHistorySourceIdKind SourceIdKind() const;
    void SourceIdKind(Windows::ApplicationModel::Calls::PhoneCallHistorySourceIdKind const& value) const;
    Windows::Foundation::DateTime StartTime() const;
    void StartTime(Windows::Foundation::DateTime const& value) const;
};
template <> struct consume<Windows::ApplicationModel::Calls::IPhoneCallHistoryEntry> { template <typename D> using type = consume_Windows_ApplicationModel_Calls_IPhoneCallHistoryEntry<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Calls_IPhoneCallHistoryEntryAddress
{
    hstring ContactId() const;
    void ContactId(param::hstring const& value) const;
    hstring DisplayName() const;
    void DisplayName(param::hstring const& value) const;
    hstring RawAddress() const;
    void RawAddress(param::hstring const& value) const;
    Windows::ApplicationModel::Calls::PhoneCallHistoryEntryRawAddressKind RawAddressKind() const;
    void RawAddressKind(Windows::ApplicationModel::Calls::PhoneCallHistoryEntryRawAddressKind const& value) const;
};
template <> struct consume<Windows::ApplicationModel::Calls::IPhoneCallHistoryEntryAddress> { template <typename D> using type = consume_Windows_ApplicationModel_Calls_IPhoneCallHistoryEntryAddress<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Calls_IPhoneCallHistoryEntryAddressFactory
{
    Windows::ApplicationModel::Calls::PhoneCallHistoryEntryAddress Create(param::hstring const& rawAddress, Windows::ApplicationModel::Calls::PhoneCallHistoryEntryRawAddressKind const& rawAddressKind) const;
};
template <> struct consume<Windows::ApplicationModel::Calls::IPhoneCallHistoryEntryAddressFactory> { template <typename D> using type = consume_Windows_ApplicationModel_Calls_IPhoneCallHistoryEntryAddressFactory<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Calls_IPhoneCallHistoryEntryQueryOptions
{
    Windows::ApplicationModel::Calls::PhoneCallHistoryEntryQueryDesiredMedia DesiredMedia() const;
    void DesiredMedia(Windows::ApplicationModel::Calls::PhoneCallHistoryEntryQueryDesiredMedia const& value) const;
    Windows::Foundation::Collections::IVector<hstring> SourceIds() const;
};
template <> struct consume<Windows::ApplicationModel::Calls::IPhoneCallHistoryEntryQueryOptions> { template <typename D> using type = consume_Windows_ApplicationModel_Calls_IPhoneCallHistoryEntryQueryOptions<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Calls_IPhoneCallHistoryEntryReader
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Calls::PhoneCallHistoryEntry>> ReadBatchAsync() const;
};
template <> struct consume<Windows::ApplicationModel::Calls::IPhoneCallHistoryEntryReader> { template <typename D> using type = consume_Windows_ApplicationModel_Calls_IPhoneCallHistoryEntryReader<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Calls_IPhoneCallHistoryManagerForUser
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Calls::PhoneCallHistoryStore> RequestStoreAsync(Windows::ApplicationModel::Calls::PhoneCallHistoryStoreAccessType const& accessType) const;
    Windows::System::User User() const;
};
template <> struct consume<Windows::ApplicationModel::Calls::IPhoneCallHistoryManagerForUser> { template <typename D> using type = consume_Windows_ApplicationModel_Calls_IPhoneCallHistoryManagerForUser<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Calls_IPhoneCallHistoryManagerStatics
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Calls::PhoneCallHistoryStore> RequestStoreAsync(Windows::ApplicationModel::Calls::PhoneCallHistoryStoreAccessType const& accessType) const;
};
template <> struct consume<Windows::ApplicationModel::Calls::IPhoneCallHistoryManagerStatics> { template <typename D> using type = consume_Windows_ApplicationModel_Calls_IPhoneCallHistoryManagerStatics<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Calls_IPhoneCallHistoryManagerStatics2
{
    Windows::ApplicationModel::Calls::PhoneCallHistoryManagerForUser GetForUser(Windows::System::User const& user) const;
};
template <> struct consume<Windows::ApplicationModel::Calls::IPhoneCallHistoryManagerStatics2> { template <typename D> using type = consume_Windows_ApplicationModel_Calls_IPhoneCallHistoryManagerStatics2<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Calls_IPhoneCallHistoryStore
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Calls::PhoneCallHistoryEntry> GetEntryAsync(param::hstring const& callHistoryEntryId) const;
    Windows::ApplicationModel::Calls::PhoneCallHistoryEntryReader GetEntryReader() const;
    Windows::ApplicationModel::Calls::PhoneCallHistoryEntryReader GetEntryReader(Windows::ApplicationModel::Calls::PhoneCallHistoryEntryQueryOptions const& queryOptions) const;
    Windows::Foundation::IAsyncAction SaveEntryAsync(Windows::ApplicationModel::Calls::PhoneCallHistoryEntry const& callHistoryEntry) const;
    Windows::Foundation::IAsyncAction DeleteEntryAsync(Windows::ApplicationModel::Calls::PhoneCallHistoryEntry const& callHistoryEntry) const;
    Windows::Foundation::IAsyncAction DeleteEntriesAsync(param::async_iterable<Windows::ApplicationModel::Calls::PhoneCallHistoryEntry> const& callHistoryEntries) const;
    Windows::Foundation::IAsyncAction MarkEntryAsSeenAsync(Windows::ApplicationModel::Calls::PhoneCallHistoryEntry const& callHistoryEntry) const;
    Windows::Foundation::IAsyncAction MarkEntriesAsSeenAsync(param::async_iterable<Windows::ApplicationModel::Calls::PhoneCallHistoryEntry> const& callHistoryEntries) const;
    Windows::Foundation::IAsyncOperation<uint32_t> GetUnseenCountAsync() const;
    Windows::Foundation::IAsyncAction MarkAllAsSeenAsync() const;
    Windows::Foundation::IAsyncOperation<uint32_t> GetSourcesUnseenCountAsync(param::async_iterable<hstring> const& sourceIds) const;
    Windows::Foundation::IAsyncAction MarkSourcesAsSeenAsync(param::async_iterable<hstring> const& sourceIds) const;
};
template <> struct consume<Windows::ApplicationModel::Calls::IPhoneCallHistoryStore> { template <typename D> using type = consume_Windows_ApplicationModel_Calls_IPhoneCallHistoryStore<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Calls_IPhoneCallManagerStatics
{
    void ShowPhoneCallUI(param::hstring const& phoneNumber, param::hstring const& displayName) const;
};
template <> struct consume<Windows::ApplicationModel::Calls::IPhoneCallManagerStatics> { template <typename D> using type = consume_Windows_ApplicationModel_Calls_IPhoneCallManagerStatics<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Calls_IPhoneCallManagerStatics2
{
    winrt::event_token CallStateChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
    using CallStateChanged_revoker = impl::event_revoker<Windows::ApplicationModel::Calls::IPhoneCallManagerStatics2, &impl::abi_t<Windows::ApplicationModel::Calls::IPhoneCallManagerStatics2>::remove_CallStateChanged>;
    CallStateChanged_revoker CallStateChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
    void CallStateChanged(winrt::event_token const& token) const noexcept;
    bool IsCallActive() const;
    bool IsCallIncoming() const;
    void ShowPhoneCallSettingsUI() const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Calls::PhoneCallStore> RequestStoreAsync() const;
};
template <> struct consume<Windows::ApplicationModel::Calls::IPhoneCallManagerStatics2> { template <typename D> using type = consume_Windows_ApplicationModel_Calls_IPhoneCallManagerStatics2<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Calls_IPhoneCallStore
{
    Windows::Foundation::IAsyncOperation<bool> IsEmergencyPhoneNumberAsync(param::hstring const& number) const;
    Windows::Foundation::IAsyncOperation<winrt::guid> GetDefaultLineAsync() const;
    Windows::ApplicationModel::Calls::PhoneLineWatcher RequestLineWatcher() const;
};
template <> struct consume<Windows::ApplicationModel::Calls::IPhoneCallStore> { template <typename D> using type = consume_Windows_ApplicationModel_Calls_IPhoneCallStore<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Calls_IPhoneCallVideoCapabilities
{
    bool IsVideoCallingCapable() const;
};
template <> struct consume<Windows::ApplicationModel::Calls::IPhoneCallVideoCapabilities> { template <typename D> using type = consume_Windows_ApplicationModel_Calls_IPhoneCallVideoCapabilities<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Calls_IPhoneCallVideoCapabilitiesManagerStatics
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Calls::PhoneCallVideoCapabilities> GetCapabilitiesAsync(param::hstring const& phoneNumber) const;
};
template <> struct consume<Windows::ApplicationModel::Calls::IPhoneCallVideoCapabilitiesManagerStatics> { template <typename D> using type = consume_Windows_ApplicationModel_Calls_IPhoneCallVideoCapabilitiesManagerStatics<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Calls_IPhoneDialOptions
{
    hstring Number() const;
    void Number(param::hstring const& value) const;
    hstring DisplayName() const;
    void DisplayName(param::hstring const& value) const;
    Windows::ApplicationModel::Contacts::Contact Contact() const;
    void Contact(Windows::ApplicationModel::Contacts::Contact const& value) const;
    Windows::ApplicationModel::Contacts::ContactPhone ContactPhone() const;
    void ContactPhone(Windows::ApplicationModel::Contacts::ContactPhone const& value) const;
    Windows::ApplicationModel::Calls::PhoneCallMedia Media() const;
    void Media(Windows::ApplicationModel::Calls::PhoneCallMedia const& value) const;
    Windows::ApplicationModel::Calls::PhoneAudioRoutingEndpoint AudioEndpoint() const;
    void AudioEndpoint(Windows::ApplicationModel::Calls::PhoneAudioRoutingEndpoint const& value) const;
};
template <> struct consume<Windows::ApplicationModel::Calls::IPhoneDialOptions> { template <typename D> using type = consume_Windows_ApplicationModel_Calls_IPhoneDialOptions<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Calls_IPhoneLine
{
    winrt::event_token LineChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Calls::PhoneLine, Windows::Foundation::IInspectable> const& handler) const;
    using LineChanged_revoker = impl::event_revoker<Windows::ApplicationModel::Calls::IPhoneLine, &impl::abi_t<Windows::ApplicationModel::Calls::IPhoneLine>::remove_LineChanged>;
    LineChanged_revoker LineChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Calls::PhoneLine, Windows::Foundation::IInspectable> const& handler) const;
    void LineChanged(winrt::event_token const& token) const noexcept;
    winrt::guid Id() const;
    Windows::UI::Color DisplayColor() const;
    Windows::ApplicationModel::Calls::PhoneNetworkState NetworkState() const;
    hstring DisplayName() const;
    Windows::ApplicationModel::Calls::PhoneVoicemail Voicemail() const;
    hstring NetworkName() const;
    Windows::ApplicationModel::Calls::PhoneLineCellularDetails CellularDetails() const;
    Windows::ApplicationModel::Calls::PhoneLineTransport Transport() const;
    bool CanDial() const;
    bool SupportsTile() const;
    Windows::ApplicationModel::Calls::PhoneCallVideoCapabilities VideoCallingCapabilities() const;
    Windows::ApplicationModel::Calls::PhoneLineConfiguration LineConfiguration() const;
    Windows::Foundation::IAsyncOperation<bool> IsImmediateDialNumberAsync(param::hstring const& number) const;
    void Dial(param::hstring const& number, param::hstring const& displayName) const;
    void DialWithOptions(Windows::ApplicationModel::Calls::PhoneDialOptions const& options) const;
};
template <> struct consume<Windows::ApplicationModel::Calls::IPhoneLine> { template <typename D> using type = consume_Windows_ApplicationModel_Calls_IPhoneLine<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Calls_IPhoneLine2
{
    void EnableTextReply(bool value) const;
    hstring TransportDeviceId() const;
};
template <> struct consume<Windows::ApplicationModel::Calls::IPhoneLine2> { template <typename D> using type = consume_Windows_ApplicationModel_Calls_IPhoneLine2<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Calls_IPhoneLineCellularDetails
{
    Windows::ApplicationModel::Calls::PhoneSimState SimState() const;
    int32_t SimSlotIndex() const;
    bool IsModemOn() const;
    int32_t RegistrationRejectCode() const;
    hstring GetNetworkOperatorDisplayText(Windows::ApplicationModel::Calls::PhoneLineNetworkOperatorDisplayTextLocation const& location) const;
};
template <> struct consume<Windows::ApplicationModel::Calls::IPhoneLineCellularDetails> { template <typename D> using type = consume_Windows_ApplicationModel_Calls_IPhoneLineCellularDetails<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Calls_IPhoneLineConfiguration
{
    bool IsVideoCallingEnabled() const;
    Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable> ExtendedProperties() const;
};
template <> struct consume<Windows::ApplicationModel::Calls::IPhoneLineConfiguration> { template <typename D> using type = consume_Windows_ApplicationModel_Calls_IPhoneLineConfiguration<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Calls_IPhoneLineStatics
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Calls::PhoneLine> FromIdAsync(winrt::guid const& lineId) const;
};
template <> struct consume<Windows::ApplicationModel::Calls::IPhoneLineStatics> { template <typename D> using type = consume_Windows_ApplicationModel_Calls_IPhoneLineStatics<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Calls_IPhoneLineTransportDevice
{
    hstring DeviceId() const;
    Windows::ApplicationModel::Calls::PhoneLineTransport Transport() const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceAccessStatus> RequestAccessAsync() const;
    void RegisterApp() const;
    void RegisterAppForUser(Windows::System::User const& user) const;
    void UnregisterApp() const;
    void UnregisterAppForUser(Windows::System::User const& user) const;
    bool IsRegistered() const;
    bool Connect() const;
    Windows::Foundation::IAsyncOperation<bool> ConnectAsync() const;
};
template <> struct consume<Windows::ApplicationModel::Calls::IPhoneLineTransportDevice> { template <typename D> using type = consume_Windows_ApplicationModel_Calls_IPhoneLineTransportDevice<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Calls_IPhoneLineTransportDeviceStatics
{
    Windows::ApplicationModel::Calls::PhoneLineTransportDevice FromId(param::hstring const& id) const;
    hstring GetDeviceSelector() const;
    hstring GetDeviceSelector(Windows::ApplicationModel::Calls::PhoneLineTransport const& transport) const;
};
template <> struct consume<Windows::ApplicationModel::Calls::IPhoneLineTransportDeviceStatics> { template <typename D> using type = consume_Windows_ApplicationModel_Calls_IPhoneLineTransportDeviceStatics<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Calls_IPhoneLineWatcher
{
    void Start() const;
    void Stop() const;
    winrt::event_token LineAdded(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Calls::PhoneLineWatcher, Windows::ApplicationModel::Calls::PhoneLineWatcherEventArgs> const& handler) const;
    using LineAdded_revoker = impl::event_revoker<Windows::ApplicationModel::Calls::IPhoneLineWatcher, &impl::abi_t<Windows::ApplicationModel::Calls::IPhoneLineWatcher>::remove_LineAdded>;
    LineAdded_revoker LineAdded(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Calls::PhoneLineWatcher, Windows::ApplicationModel::Calls::PhoneLineWatcherEventArgs> const& handler) const;
    void LineAdded(winrt::event_token const& token) const noexcept;
    winrt::event_token LineRemoved(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Calls::PhoneLineWatcher, Windows::ApplicationModel::Calls::PhoneLineWatcherEventArgs> const& handler) const;
    using LineRemoved_revoker = impl::event_revoker<Windows::ApplicationModel::Calls::IPhoneLineWatcher, &impl::abi_t<Windows::ApplicationModel::Calls::IPhoneLineWatcher>::remove_LineRemoved>;
    LineRemoved_revoker LineRemoved(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Calls::PhoneLineWatcher, Windows::ApplicationModel::Calls::PhoneLineWatcherEventArgs> const& handler) const;
    void LineRemoved(winrt::event_token const& token) const noexcept;
    winrt::event_token LineUpdated(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Calls::PhoneLineWatcher, Windows::ApplicationModel::Calls::PhoneLineWatcherEventArgs> const& handler) const;
    using LineUpdated_revoker = impl::event_revoker<Windows::ApplicationModel::Calls::IPhoneLineWatcher, &impl::abi_t<Windows::ApplicationModel::Calls::IPhoneLineWatcher>::remove_LineUpdated>;
    LineUpdated_revoker LineUpdated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Calls::PhoneLineWatcher, Windows::ApplicationModel::Calls::PhoneLineWatcherEventArgs> const& handler) const;
    void LineUpdated(winrt::event_token const& token) const noexcept;
    winrt::event_token EnumerationCompleted(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Calls::PhoneLineWatcher, Windows::Foundation::IInspectable> const& handler) const;
    using EnumerationCompleted_revoker = impl::event_revoker<Windows::ApplicationModel::Calls::IPhoneLineWatcher, &impl::abi_t<Windows::ApplicationModel::Calls::IPhoneLineWatcher>::remove_EnumerationCompleted>;
    EnumerationCompleted_revoker EnumerationCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Calls::PhoneLineWatcher, Windows::Foundation::IInspectable> const& handler) const;
    void EnumerationCompleted(winrt::event_token const& token) const noexcept;
    winrt::event_token Stopped(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Calls::PhoneLineWatcher, Windows::Foundation::IInspectable> const& handler) const;
    using Stopped_revoker = impl::event_revoker<Windows::ApplicationModel::Calls::IPhoneLineWatcher, &impl::abi_t<Windows::ApplicationModel::Calls::IPhoneLineWatcher>::remove_Stopped>;
    Stopped_revoker Stopped(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Calls::PhoneLineWatcher, Windows::Foundation::IInspectable> const& handler) const;
    void Stopped(winrt::event_token const& token) const noexcept;
    Windows::ApplicationModel::Calls::PhoneLineWatcherStatus Status() const;
};
template <> struct consume<Windows::ApplicationModel::Calls::IPhoneLineWatcher> { template <typename D> using type = consume_Windows_ApplicationModel_Calls_IPhoneLineWatcher<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Calls_IPhoneLineWatcherEventArgs
{
    winrt::guid LineId() const;
};
template <> struct consume<Windows::ApplicationModel::Calls::IPhoneLineWatcherEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_Calls_IPhoneLineWatcherEventArgs<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Calls_IPhoneVoicemail
{
    hstring Number() const;
    int32_t MessageCount() const;
    Windows::ApplicationModel::Calls::PhoneVoicemailType Type() const;
    Windows::Foundation::IAsyncAction DialVoicemailAsync() const;
};
template <> struct consume<Windows::ApplicationModel::Calls::IPhoneVoicemail> { template <typename D> using type = consume_Windows_ApplicationModel_Calls_IPhoneVoicemail<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Calls_IVoipCallCoordinator
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Calls::VoipPhoneCallResourceReservationStatus> ReserveCallResourcesAsync(param::hstring const& taskEntryPoint) const;
    winrt::event_token MuteStateChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Calls::VoipCallCoordinator, Windows::ApplicationModel::Calls::MuteChangeEventArgs> const& muteChangeHandler) const;
    using MuteStateChanged_revoker = impl::event_revoker<Windows::ApplicationModel::Calls::IVoipCallCoordinator, &impl::abi_t<Windows::ApplicationModel::Calls::IVoipCallCoordinator>::remove_MuteStateChanged>;
    MuteStateChanged_revoker MuteStateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Calls::VoipCallCoordinator, Windows::ApplicationModel::Calls::MuteChangeEventArgs> const& muteChangeHandler) const;
    void MuteStateChanged(winrt::event_token const& token) const noexcept;
    Windows::ApplicationModel::Calls::VoipPhoneCall RequestNewIncomingCall(param::hstring const& context, param::hstring const& contactName, param::hstring const& contactNumber, Windows::Foundation::Uri const& contactImage, param::hstring const& serviceName, Windows::Foundation::Uri const& brandingImage, param::hstring const& callDetails, Windows::Foundation::Uri const& ringtone, Windows::ApplicationModel::Calls::VoipPhoneCallMedia const& media, Windows::Foundation::TimeSpan const& ringTimeout) const;
    Windows::ApplicationModel::Calls::VoipPhoneCall RequestNewOutgoingCall(param::hstring const& context, param::hstring const& contactName, param::hstring const& serviceName, Windows::ApplicationModel::Calls::VoipPhoneCallMedia const& media) const;
    void NotifyMuted() const;
    void NotifyUnmuted() const;
    Windows::ApplicationModel::Calls::VoipPhoneCall RequestOutgoingUpgradeToVideoCall(winrt::guid const& callUpgradeGuid, param::hstring const& context, param::hstring const& contactName, param::hstring const& serviceName) const;
    Windows::ApplicationModel::Calls::VoipPhoneCall RequestIncomingUpgradeToVideoCall(param::hstring const& context, param::hstring const& contactName, param::hstring const& contactNumber, Windows::Foundation::Uri const& contactImage, param::hstring const& serviceName, Windows::Foundation::Uri const& brandingImage, param::hstring const& callDetails, Windows::Foundation::Uri const& ringtone, Windows::Foundation::TimeSpan const& ringTimeout) const;
    void TerminateCellularCall(winrt::guid const& callUpgradeGuid) const;
    void CancelUpgrade(winrt::guid const& callUpgradeGuid) const;
};
template <> struct consume<Windows::ApplicationModel::Calls::IVoipCallCoordinator> { template <typename D> using type = consume_Windows_ApplicationModel_Calls_IVoipCallCoordinator<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Calls_IVoipCallCoordinator2
{
    Windows::ApplicationModel::Calls::VoipPhoneCall SetupNewAcceptedCall(param::hstring const& context, param::hstring const& contactName, param::hstring const& contactNumber, param::hstring const& serviceName, Windows::ApplicationModel::Calls::VoipPhoneCallMedia const& media) const;
};
template <> struct consume<Windows::ApplicationModel::Calls::IVoipCallCoordinator2> { template <typename D> using type = consume_Windows_ApplicationModel_Calls_IVoipCallCoordinator2<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Calls_IVoipCallCoordinator3
{
    Windows::ApplicationModel::Calls::VoipPhoneCall RequestNewAppInitiatedCall(param::hstring const& context, param::hstring const& contactName, param::hstring const& contactNumber, param::hstring const& serviceName, Windows::ApplicationModel::Calls::VoipPhoneCallMedia const& media) const;
    Windows::ApplicationModel::Calls::VoipPhoneCall RequestNewIncomingCall(param::hstring const& context, param::hstring const& contactName, param::hstring const& contactNumber, Windows::Foundation::Uri const& contactImage, param::hstring const& serviceName, Windows::Foundation::Uri const& brandingImage, param::hstring const& callDetails, Windows::Foundation::Uri const& ringtone, Windows::ApplicationModel::Calls::VoipPhoneCallMedia const& media, Windows::Foundation::TimeSpan const& ringTimeout, param::hstring const& contactRemoteId) const;
};
template <> struct consume<Windows::ApplicationModel::Calls::IVoipCallCoordinator3> { template <typename D> using type = consume_Windows_ApplicationModel_Calls_IVoipCallCoordinator3<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Calls_IVoipCallCoordinator4
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Calls::VoipPhoneCallResourceReservationStatus> ReserveCallResourcesAsync() const;
};
template <> struct consume<Windows::ApplicationModel::Calls::IVoipCallCoordinator4> { template <typename D> using type = consume_Windows_ApplicationModel_Calls_IVoipCallCoordinator4<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Calls_IVoipCallCoordinatorStatics
{
    Windows::ApplicationModel::Calls::VoipCallCoordinator GetDefault() const;
};
template <> struct consume<Windows::ApplicationModel::Calls::IVoipCallCoordinatorStatics> { template <typename D> using type = consume_Windows_ApplicationModel_Calls_IVoipCallCoordinatorStatics<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Calls_IVoipPhoneCall
{
    winrt::event_token EndRequested(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Calls::VoipPhoneCall, Windows::ApplicationModel::Calls::CallStateChangeEventArgs> const& handler) const;
    using EndRequested_revoker = impl::event_revoker<Windows::ApplicationModel::Calls::IVoipPhoneCall, &impl::abi_t<Windows::ApplicationModel::Calls::IVoipPhoneCall>::remove_EndRequested>;
    EndRequested_revoker EndRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Calls::VoipPhoneCall, Windows::ApplicationModel::Calls::CallStateChangeEventArgs> const& handler) const;
    void EndRequested(winrt::event_token const& token) const noexcept;
    winrt::event_token HoldRequested(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Calls::VoipPhoneCall, Windows::ApplicationModel::Calls::CallStateChangeEventArgs> const& handler) const;
    using HoldRequested_revoker = impl::event_revoker<Windows::ApplicationModel::Calls::IVoipPhoneCall, &impl::abi_t<Windows::ApplicationModel::Calls::IVoipPhoneCall>::remove_HoldRequested>;
    HoldRequested_revoker HoldRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Calls::VoipPhoneCall, Windows::ApplicationModel::Calls::CallStateChangeEventArgs> const& handler) const;
    void HoldRequested(winrt::event_token const& token) const noexcept;
    winrt::event_token ResumeRequested(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Calls::VoipPhoneCall, Windows::ApplicationModel::Calls::CallStateChangeEventArgs> const& handler) const;
    using ResumeRequested_revoker = impl::event_revoker<Windows::ApplicationModel::Calls::IVoipPhoneCall, &impl::abi_t<Windows::ApplicationModel::Calls::IVoipPhoneCall>::remove_ResumeRequested>;
    ResumeRequested_revoker ResumeRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Calls::VoipPhoneCall, Windows::ApplicationModel::Calls::CallStateChangeEventArgs> const& handler) const;
    void ResumeRequested(winrt::event_token const& token) const noexcept;
    winrt::event_token AnswerRequested(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Calls::VoipPhoneCall, Windows::ApplicationModel::Calls::CallAnswerEventArgs> const& acceptHandler) const;
    using AnswerRequested_revoker = impl::event_revoker<Windows::ApplicationModel::Calls::IVoipPhoneCall, &impl::abi_t<Windows::ApplicationModel::Calls::IVoipPhoneCall>::remove_AnswerRequested>;
    AnswerRequested_revoker AnswerRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Calls::VoipPhoneCall, Windows::ApplicationModel::Calls::CallAnswerEventArgs> const& acceptHandler) const;
    void AnswerRequested(winrt::event_token const& token) const noexcept;
    winrt::event_token RejectRequested(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Calls::VoipPhoneCall, Windows::ApplicationModel::Calls::CallRejectEventArgs> const& rejectHandler) const;
    using RejectRequested_revoker = impl::event_revoker<Windows::ApplicationModel::Calls::IVoipPhoneCall, &impl::abi_t<Windows::ApplicationModel::Calls::IVoipPhoneCall>::remove_RejectRequested>;
    RejectRequested_revoker RejectRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Calls::VoipPhoneCall, Windows::ApplicationModel::Calls::CallRejectEventArgs> const& rejectHandler) const;
    void RejectRequested(winrt::event_token const& token) const noexcept;
    void NotifyCallHeld() const;
    void NotifyCallActive() const;
    void NotifyCallEnded() const;
    hstring ContactName() const;
    void ContactName(param::hstring const& value) const;
    Windows::Foundation::DateTime StartTime() const;
    void StartTime(Windows::Foundation::DateTime const& value) const;
    Windows::ApplicationModel::Calls::VoipPhoneCallMedia CallMedia() const;
    void CallMedia(Windows::ApplicationModel::Calls::VoipPhoneCallMedia const& value) const;
    void NotifyCallReady() const;
};
template <> struct consume<Windows::ApplicationModel::Calls::IVoipPhoneCall> { template <typename D> using type = consume_Windows_ApplicationModel_Calls_IVoipPhoneCall<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Calls_IVoipPhoneCall2
{
    void TryShowAppUI() const;
};
template <> struct consume<Windows::ApplicationModel::Calls::IVoipPhoneCall2> { template <typename D> using type = consume_Windows_ApplicationModel_Calls_IVoipPhoneCall2<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Calls_IVoipPhoneCall3
{
    void NotifyCallAccepted(Windows::ApplicationModel::Calls::VoipPhoneCallMedia const& media) const;
};
template <> struct consume<Windows::ApplicationModel::Calls::IVoipPhoneCall3> { template <typename D> using type = consume_Windows_ApplicationModel_Calls_IVoipPhoneCall3<D>; };

}
