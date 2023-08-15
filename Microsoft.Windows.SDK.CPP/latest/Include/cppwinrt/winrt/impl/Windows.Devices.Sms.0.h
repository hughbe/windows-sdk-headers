﻿// C++/WinRT v1.0.190111.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Storage::Streams {

struct IBuffer;

}

WINRT_EXPORT namespace winrt::Windows::Devices::Sms {

enum class CellularClass : int32_t
{
    None = 0,
    Gsm = 1,
    Cdma = 2,
};

enum class SmsBroadcastType : int32_t
{
    Other = 0,
    CmasPresidential = 1,
    CmasExtreme = 2,
    CmasSevere = 3,
    CmasAmber = 4,
    CmasTest = 5,
    EUAlert1 = 6,
    EUAlert2 = 7,
    EUAlert3 = 8,
    EUAlertAmber = 9,
    EUAlertInfo = 10,
    EtwsEarthquake = 11,
    EtwsTsunami = 12,
    EtwsTsunamiAndEarthquake = 13,
    LatAlertLocal = 14,
};

enum class SmsDataFormat : int32_t
{
    Unknown = 0,
    CdmaSubmit = 1,
    GsmSubmit = 2,
    CdmaDeliver = 3,
    GsmDeliver = 4,
};

enum class SmsDeviceStatus : int32_t
{
    Off = 0,
    Ready = 1,
    SimNotInserted = 2,
    BadSim = 3,
    DeviceFailure = 4,
    SubscriptionNotActivated = 5,
    DeviceLocked = 6,
    DeviceBlocked = 7,
};

enum class SmsEncoding : int32_t
{
    Unknown = 0,
    Optimal = 1,
    SevenBitAscii = 2,
    Unicode = 3,
    GsmSevenBit = 4,
    EightBit = 5,
    Latin = 6,
    Korean = 7,
    IA5 = 8,
    ShiftJis = 9,
    LatinHebrew = 10,
};

enum class SmsFilterActionType : int32_t
{
    AcceptImmediately = 0,
    Drop = 1,
    Peek = 2,
    Accept = 3,
};

enum class SmsGeographicalScope : int32_t
{
    None = 0,
    CellWithImmediateDisplay = 1,
    LocationArea = 2,
    Plmn = 3,
    Cell = 4,
};

enum class SmsMessageClass : int32_t
{
    None = 0,
    Class0 = 1,
    Class1 = 2,
    Class2 = 3,
    Class3 = 4,
};

enum class SmsMessageFilter : int32_t
{
    All = 0,
    Unread = 1,
    Read = 2,
    Sent = 3,
    Draft = 4,
};

enum class SmsMessageType : int32_t
{
    Binary = 0,
    Text = 1,
    Wap = 2,
    App = 3,
    Broadcast = 4,
    Voicemail = 5,
    Status = 6,
};

enum class SmsModemErrorCode : int32_t
{
    Other = 0,
    MessagingNetworkError = 1,
    SmsOperationNotSupportedByDevice = 2,
    SmsServiceNotSupportedByNetwork = 3,
    DeviceFailure = 4,
    MessageNotEncodedProperly = 5,
    MessageTooLarge = 6,
    DeviceNotReady = 7,
    NetworkNotReady = 8,
    InvalidSmscAddress = 9,
    NetworkFailure = 10,
    FixedDialingNumberRestricted = 11,
};

struct ISmsAppMessage;
struct ISmsBinaryMessage;
struct ISmsBroadcastMessage;
struct ISmsDevice;
struct ISmsDevice2;
struct ISmsDevice2Statics;
struct ISmsDeviceMessageStore;
struct ISmsDeviceStatics;
struct ISmsDeviceStatics2;
struct ISmsFilterRule;
struct ISmsFilterRuleFactory;
struct ISmsFilterRules;
struct ISmsFilterRulesFactory;
struct ISmsMessage;
struct ISmsMessageBase;
struct ISmsMessageReceivedEventArgs;
struct ISmsMessageReceivedTriggerDetails;
struct ISmsMessageRegistration;
struct ISmsMessageRegistrationStatics;
struct ISmsReceivedEventDetails;
struct ISmsReceivedEventDetails2;
struct ISmsSendMessageResult;
struct ISmsStatusMessage;
struct ISmsTextMessage;
struct ISmsTextMessage2;
struct ISmsTextMessageStatics;
struct ISmsVoicemailMessage;
struct ISmsWapMessage;
struct DeleteSmsMessageOperation;
struct DeleteSmsMessagesOperation;
struct GetSmsDeviceOperation;
struct GetSmsMessageOperation;
struct GetSmsMessagesOperation;
struct SendSmsMessageOperation;
struct SmsAppMessage;
struct SmsBinaryMessage;
struct SmsBroadcastMessage;
struct SmsDevice;
struct SmsDevice2;
struct SmsDeviceMessageStore;
struct SmsFilterRule;
struct SmsFilterRules;
struct SmsMessageReceivedEventArgs;
struct SmsMessageReceivedTriggerDetails;
struct SmsMessageRegistration;
struct SmsReceivedEventDetails;
struct SmsSendMessageResult;
struct SmsStatusMessage;
struct SmsTextMessage;
struct SmsTextMessage2;
struct SmsVoicemailMessage;
struct SmsWapMessage;
struct SmsEncodedLength;
struct SmsDeviceStatusChangedEventHandler;
struct SmsMessageReceivedEventHandler;

}

namespace winrt::impl {

template <> struct category<Windows::Devices::Sms::ISmsAppMessage>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sms::ISmsBinaryMessage>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sms::ISmsBroadcastMessage>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sms::ISmsDevice>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sms::ISmsDevice2>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sms::ISmsDevice2Statics>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sms::ISmsDeviceMessageStore>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sms::ISmsDeviceStatics>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sms::ISmsDeviceStatics2>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sms::ISmsFilterRule>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sms::ISmsFilterRuleFactory>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sms::ISmsFilterRules>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sms::ISmsFilterRulesFactory>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sms::ISmsMessage>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sms::ISmsMessageBase>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sms::ISmsMessageReceivedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sms::ISmsMessageReceivedTriggerDetails>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sms::ISmsMessageRegistration>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sms::ISmsMessageRegistrationStatics>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sms::ISmsReceivedEventDetails>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sms::ISmsReceivedEventDetails2>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sms::ISmsSendMessageResult>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sms::ISmsStatusMessage>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sms::ISmsTextMessage>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sms::ISmsTextMessage2>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sms::ISmsTextMessageStatics>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sms::ISmsVoicemailMessage>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sms::ISmsWapMessage>{ using type = interface_category; };
template <> struct category<Windows::Devices::Sms::DeleteSmsMessageOperation>{ using type = class_category; };
template <> struct category<Windows::Devices::Sms::DeleteSmsMessagesOperation>{ using type = class_category; };
template <> struct category<Windows::Devices::Sms::GetSmsDeviceOperation>{ using type = class_category; };
template <> struct category<Windows::Devices::Sms::GetSmsMessageOperation>{ using type = class_category; };
template <> struct category<Windows::Devices::Sms::GetSmsMessagesOperation>{ using type = class_category; };
template <> struct category<Windows::Devices::Sms::SendSmsMessageOperation>{ using type = class_category; };
template <> struct category<Windows::Devices::Sms::SmsAppMessage>{ using type = class_category; };
template <> struct category<Windows::Devices::Sms::SmsBinaryMessage>{ using type = class_category; };
template <> struct category<Windows::Devices::Sms::SmsBroadcastMessage>{ using type = class_category; };
template <> struct category<Windows::Devices::Sms::SmsDevice>{ using type = class_category; };
template <> struct category<Windows::Devices::Sms::SmsDevice2>{ using type = class_category; };
template <> struct category<Windows::Devices::Sms::SmsDeviceMessageStore>{ using type = class_category; };
template <> struct category<Windows::Devices::Sms::SmsFilterRule>{ using type = class_category; };
template <> struct category<Windows::Devices::Sms::SmsFilterRules>{ using type = class_category; };
template <> struct category<Windows::Devices::Sms::SmsMessageReceivedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Devices::Sms::SmsMessageReceivedTriggerDetails>{ using type = class_category; };
template <> struct category<Windows::Devices::Sms::SmsMessageRegistration>{ using type = class_category; };
template <> struct category<Windows::Devices::Sms::SmsReceivedEventDetails>{ using type = class_category; };
template <> struct category<Windows::Devices::Sms::SmsSendMessageResult>{ using type = class_category; };
template <> struct category<Windows::Devices::Sms::SmsStatusMessage>{ using type = class_category; };
template <> struct category<Windows::Devices::Sms::SmsTextMessage>{ using type = class_category; };
template <> struct category<Windows::Devices::Sms::SmsTextMessage2>{ using type = class_category; };
template <> struct category<Windows::Devices::Sms::SmsVoicemailMessage>{ using type = class_category; };
template <> struct category<Windows::Devices::Sms::SmsWapMessage>{ using type = class_category; };
template <> struct category<Windows::Devices::Sms::CellularClass>{ using type = enum_category; };
template <> struct category<Windows::Devices::Sms::SmsBroadcastType>{ using type = enum_category; };
template <> struct category<Windows::Devices::Sms::SmsDataFormat>{ using type = enum_category; };
template <> struct category<Windows::Devices::Sms::SmsDeviceStatus>{ using type = enum_category; };
template <> struct category<Windows::Devices::Sms::SmsEncoding>{ using type = enum_category; };
template <> struct category<Windows::Devices::Sms::SmsFilterActionType>{ using type = enum_category; };
template <> struct category<Windows::Devices::Sms::SmsGeographicalScope>{ using type = enum_category; };
template <> struct category<Windows::Devices::Sms::SmsMessageClass>{ using type = enum_category; };
template <> struct category<Windows::Devices::Sms::SmsMessageFilter>{ using type = enum_category; };
template <> struct category<Windows::Devices::Sms::SmsMessageType>{ using type = enum_category; };
template <> struct category<Windows::Devices::Sms::SmsModemErrorCode>{ using type = enum_category; };
template <> struct category<Windows::Devices::Sms::SmsEncodedLength>{ using type = struct_category<uint32_t,uint32_t,uint32_t,uint32_t,uint32_t>; };
template <> struct category<Windows::Devices::Sms::SmsDeviceStatusChangedEventHandler>{ using type = delegate_category; };
template <> struct category<Windows::Devices::Sms::SmsMessageReceivedEventHandler>{ using type = delegate_category; };
template <> struct name<Windows::Devices::Sms::ISmsAppMessage>{ static constexpr auto & value{ L"Windows.Devices.Sms.ISmsAppMessage" }; };
template <> struct name<Windows::Devices::Sms::ISmsBinaryMessage>{ static constexpr auto & value{ L"Windows.Devices.Sms.ISmsBinaryMessage" }; };
template <> struct name<Windows::Devices::Sms::ISmsBroadcastMessage>{ static constexpr auto & value{ L"Windows.Devices.Sms.ISmsBroadcastMessage" }; };
template <> struct name<Windows::Devices::Sms::ISmsDevice>{ static constexpr auto & value{ L"Windows.Devices.Sms.ISmsDevice" }; };
template <> struct name<Windows::Devices::Sms::ISmsDevice2>{ static constexpr auto & value{ L"Windows.Devices.Sms.ISmsDevice2" }; };
template <> struct name<Windows::Devices::Sms::ISmsDevice2Statics>{ static constexpr auto & value{ L"Windows.Devices.Sms.ISmsDevice2Statics" }; };
template <> struct name<Windows::Devices::Sms::ISmsDeviceMessageStore>{ static constexpr auto & value{ L"Windows.Devices.Sms.ISmsDeviceMessageStore" }; };
template <> struct name<Windows::Devices::Sms::ISmsDeviceStatics>{ static constexpr auto & value{ L"Windows.Devices.Sms.ISmsDeviceStatics" }; };
template <> struct name<Windows::Devices::Sms::ISmsDeviceStatics2>{ static constexpr auto & value{ L"Windows.Devices.Sms.ISmsDeviceStatics2" }; };
template <> struct name<Windows::Devices::Sms::ISmsFilterRule>{ static constexpr auto & value{ L"Windows.Devices.Sms.ISmsFilterRule" }; };
template <> struct name<Windows::Devices::Sms::ISmsFilterRuleFactory>{ static constexpr auto & value{ L"Windows.Devices.Sms.ISmsFilterRuleFactory" }; };
template <> struct name<Windows::Devices::Sms::ISmsFilterRules>{ static constexpr auto & value{ L"Windows.Devices.Sms.ISmsFilterRules" }; };
template <> struct name<Windows::Devices::Sms::ISmsFilterRulesFactory>{ static constexpr auto & value{ L"Windows.Devices.Sms.ISmsFilterRulesFactory" }; };
template <> struct name<Windows::Devices::Sms::ISmsMessage>{ static constexpr auto & value{ L"Windows.Devices.Sms.ISmsMessage" }; };
template <> struct name<Windows::Devices::Sms::ISmsMessageBase>{ static constexpr auto & value{ L"Windows.Devices.Sms.ISmsMessageBase" }; };
template <> struct name<Windows::Devices::Sms::ISmsMessageReceivedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.Sms.ISmsMessageReceivedEventArgs" }; };
template <> struct name<Windows::Devices::Sms::ISmsMessageReceivedTriggerDetails>{ static constexpr auto & value{ L"Windows.Devices.Sms.ISmsMessageReceivedTriggerDetails" }; };
template <> struct name<Windows::Devices::Sms::ISmsMessageRegistration>{ static constexpr auto & value{ L"Windows.Devices.Sms.ISmsMessageRegistration" }; };
template <> struct name<Windows::Devices::Sms::ISmsMessageRegistrationStatics>{ static constexpr auto & value{ L"Windows.Devices.Sms.ISmsMessageRegistrationStatics" }; };
template <> struct name<Windows::Devices::Sms::ISmsReceivedEventDetails>{ static constexpr auto & value{ L"Windows.Devices.Sms.ISmsReceivedEventDetails" }; };
template <> struct name<Windows::Devices::Sms::ISmsReceivedEventDetails2>{ static constexpr auto & value{ L"Windows.Devices.Sms.ISmsReceivedEventDetails2" }; };
template <> struct name<Windows::Devices::Sms::ISmsSendMessageResult>{ static constexpr auto & value{ L"Windows.Devices.Sms.ISmsSendMessageResult" }; };
template <> struct name<Windows::Devices::Sms::ISmsStatusMessage>{ static constexpr auto & value{ L"Windows.Devices.Sms.ISmsStatusMessage" }; };
template <> struct name<Windows::Devices::Sms::ISmsTextMessage>{ static constexpr auto & value{ L"Windows.Devices.Sms.ISmsTextMessage" }; };
template <> struct name<Windows::Devices::Sms::ISmsTextMessage2>{ static constexpr auto & value{ L"Windows.Devices.Sms.ISmsTextMessage2" }; };
template <> struct name<Windows::Devices::Sms::ISmsTextMessageStatics>{ static constexpr auto & value{ L"Windows.Devices.Sms.ISmsTextMessageStatics" }; };
template <> struct name<Windows::Devices::Sms::ISmsVoicemailMessage>{ static constexpr auto & value{ L"Windows.Devices.Sms.ISmsVoicemailMessage" }; };
template <> struct name<Windows::Devices::Sms::ISmsWapMessage>{ static constexpr auto & value{ L"Windows.Devices.Sms.ISmsWapMessage" }; };
template <> struct name<Windows::Devices::Sms::DeleteSmsMessageOperation>{ static constexpr auto & value{ L"Windows.Devices.Sms.DeleteSmsMessageOperation" }; };
template <> struct name<Windows::Devices::Sms::DeleteSmsMessagesOperation>{ static constexpr auto & value{ L"Windows.Devices.Sms.DeleteSmsMessagesOperation" }; };
template <> struct name<Windows::Devices::Sms::GetSmsDeviceOperation>{ static constexpr auto & value{ L"Windows.Devices.Sms.GetSmsDeviceOperation" }; };
template <> struct name<Windows::Devices::Sms::GetSmsMessageOperation>{ static constexpr auto & value{ L"Windows.Devices.Sms.GetSmsMessageOperation" }; };
template <> struct name<Windows::Devices::Sms::GetSmsMessagesOperation>{ static constexpr auto & value{ L"Windows.Devices.Sms.GetSmsMessagesOperation" }; };
template <> struct name<Windows::Devices::Sms::SendSmsMessageOperation>{ static constexpr auto & value{ L"Windows.Devices.Sms.SendSmsMessageOperation" }; };
template <> struct name<Windows::Devices::Sms::SmsAppMessage>{ static constexpr auto & value{ L"Windows.Devices.Sms.SmsAppMessage" }; };
template <> struct name<Windows::Devices::Sms::SmsBinaryMessage>{ static constexpr auto & value{ L"Windows.Devices.Sms.SmsBinaryMessage" }; };
template <> struct name<Windows::Devices::Sms::SmsBroadcastMessage>{ static constexpr auto & value{ L"Windows.Devices.Sms.SmsBroadcastMessage" }; };
template <> struct name<Windows::Devices::Sms::SmsDevice>{ static constexpr auto & value{ L"Windows.Devices.Sms.SmsDevice" }; };
template <> struct name<Windows::Devices::Sms::SmsDevice2>{ static constexpr auto & value{ L"Windows.Devices.Sms.SmsDevice2" }; };
template <> struct name<Windows::Devices::Sms::SmsDeviceMessageStore>{ static constexpr auto & value{ L"Windows.Devices.Sms.SmsDeviceMessageStore" }; };
template <> struct name<Windows::Devices::Sms::SmsFilterRule>{ static constexpr auto & value{ L"Windows.Devices.Sms.SmsFilterRule" }; };
template <> struct name<Windows::Devices::Sms::SmsFilterRules>{ static constexpr auto & value{ L"Windows.Devices.Sms.SmsFilterRules" }; };
template <> struct name<Windows::Devices::Sms::SmsMessageReceivedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.Sms.SmsMessageReceivedEventArgs" }; };
template <> struct name<Windows::Devices::Sms::SmsMessageReceivedTriggerDetails>{ static constexpr auto & value{ L"Windows.Devices.Sms.SmsMessageReceivedTriggerDetails" }; };
template <> struct name<Windows::Devices::Sms::SmsMessageRegistration>{ static constexpr auto & value{ L"Windows.Devices.Sms.SmsMessageRegistration" }; };
template <> struct name<Windows::Devices::Sms::SmsReceivedEventDetails>{ static constexpr auto & value{ L"Windows.Devices.Sms.SmsReceivedEventDetails" }; };
template <> struct name<Windows::Devices::Sms::SmsSendMessageResult>{ static constexpr auto & value{ L"Windows.Devices.Sms.SmsSendMessageResult" }; };
template <> struct name<Windows::Devices::Sms::SmsStatusMessage>{ static constexpr auto & value{ L"Windows.Devices.Sms.SmsStatusMessage" }; };
template <> struct name<Windows::Devices::Sms::SmsTextMessage>{ static constexpr auto & value{ L"Windows.Devices.Sms.SmsTextMessage" }; };
template <> struct name<Windows::Devices::Sms::SmsTextMessage2>{ static constexpr auto & value{ L"Windows.Devices.Sms.SmsTextMessage2" }; };
template <> struct name<Windows::Devices::Sms::SmsVoicemailMessage>{ static constexpr auto & value{ L"Windows.Devices.Sms.SmsVoicemailMessage" }; };
template <> struct name<Windows::Devices::Sms::SmsWapMessage>{ static constexpr auto & value{ L"Windows.Devices.Sms.SmsWapMessage" }; };
template <> struct name<Windows::Devices::Sms::CellularClass>{ static constexpr auto & value{ L"Windows.Devices.Sms.CellularClass" }; };
template <> struct name<Windows::Devices::Sms::SmsBroadcastType>{ static constexpr auto & value{ L"Windows.Devices.Sms.SmsBroadcastType" }; };
template <> struct name<Windows::Devices::Sms::SmsDataFormat>{ static constexpr auto & value{ L"Windows.Devices.Sms.SmsDataFormat" }; };
template <> struct name<Windows::Devices::Sms::SmsDeviceStatus>{ static constexpr auto & value{ L"Windows.Devices.Sms.SmsDeviceStatus" }; };
template <> struct name<Windows::Devices::Sms::SmsEncoding>{ static constexpr auto & value{ L"Windows.Devices.Sms.SmsEncoding" }; };
template <> struct name<Windows::Devices::Sms::SmsFilterActionType>{ static constexpr auto & value{ L"Windows.Devices.Sms.SmsFilterActionType" }; };
template <> struct name<Windows::Devices::Sms::SmsGeographicalScope>{ static constexpr auto & value{ L"Windows.Devices.Sms.SmsGeographicalScope" }; };
template <> struct name<Windows::Devices::Sms::SmsMessageClass>{ static constexpr auto & value{ L"Windows.Devices.Sms.SmsMessageClass" }; };
template <> struct name<Windows::Devices::Sms::SmsMessageFilter>{ static constexpr auto & value{ L"Windows.Devices.Sms.SmsMessageFilter" }; };
template <> struct name<Windows::Devices::Sms::SmsMessageType>{ static constexpr auto & value{ L"Windows.Devices.Sms.SmsMessageType" }; };
template <> struct name<Windows::Devices::Sms::SmsModemErrorCode>{ static constexpr auto & value{ L"Windows.Devices.Sms.SmsModemErrorCode" }; };
template <> struct name<Windows::Devices::Sms::SmsEncodedLength>{ static constexpr auto & value{ L"Windows.Devices.Sms.SmsEncodedLength" }; };
template <> struct name<Windows::Devices::Sms::SmsDeviceStatusChangedEventHandler>{ static constexpr auto & value{ L"Windows.Devices.Sms.SmsDeviceStatusChangedEventHandler" }; };
template <> struct name<Windows::Devices::Sms::SmsMessageReceivedEventHandler>{ static constexpr auto & value{ L"Windows.Devices.Sms.SmsMessageReceivedEventHandler" }; };
template <> struct guid_storage<Windows::Devices::Sms::ISmsAppMessage>{ static constexpr guid value{ 0xE8BB8494,0xD3A0,0x4A0A,{ 0x86,0xD7,0x29,0x10,0x33,0xA8,0xCF,0x54 } }; };
template <> struct guid_storage<Windows::Devices::Sms::ISmsBinaryMessage>{ static constexpr guid value{ 0x5BF4E813,0x3B53,0x4C6E,{ 0xB6,0x1A,0xD8,0x6A,0x63,0x75,0x56,0x50 } }; };
template <> struct guid_storage<Windows::Devices::Sms::ISmsBroadcastMessage>{ static constexpr guid value{ 0x75AEBBF1,0xE4B7,0x4874,{ 0xA0,0x9C,0x29,0x56,0xE5,0x92,0xF9,0x57 } }; };
template <> struct guid_storage<Windows::Devices::Sms::ISmsDevice>{ static constexpr guid value{ 0x091791ED,0x872B,0x4EEC,{ 0x9C,0x72,0xAB,0x11,0x62,0x7B,0x34,0xEC } }; };
template <> struct guid_storage<Windows::Devices::Sms::ISmsDevice2>{ static constexpr guid value{ 0xBD8A5C13,0xE522,0x46CB,{ 0xB8,0xD5,0x9E,0xAD,0x30,0xFB,0x6C,0x47 } }; };
template <> struct guid_storage<Windows::Devices::Sms::ISmsDevice2Statics>{ static constexpr guid value{ 0x65C78325,0x1031,0x491E,{ 0x8F,0xB6,0xEF,0x99,0x91,0xAF,0xE3,0x63 } }; };
template <> struct guid_storage<Windows::Devices::Sms::ISmsDeviceMessageStore>{ static constexpr guid value{ 0x9889F253,0xF188,0x4427,{ 0x8D,0x54,0xCE,0x0C,0x24,0x23,0xC5,0xC1 } }; };
template <> struct guid_storage<Windows::Devices::Sms::ISmsDeviceStatics>{ static constexpr guid value{ 0xF88D07EA,0xD815,0x4DD1,{ 0xA2,0x34,0x45,0x20,0xCE,0x46,0x04,0xA4 } }; };
template <> struct guid_storage<Windows::Devices::Sms::ISmsDeviceStatics2>{ static constexpr guid value{ 0x2CA11C87,0x0873,0x4CAF,{ 0x8A,0x7D,0xBD,0x47,0x1E,0x85,0x86,0xD1 } }; };
template <> struct guid_storage<Windows::Devices::Sms::ISmsFilterRule>{ static constexpr guid value{ 0x40E32FAE,0xB049,0x4FBC,{ 0xAF,0xE9,0xE2,0xA6,0x10,0xEF,0xF5,0x5C } }; };
template <> struct guid_storage<Windows::Devices::Sms::ISmsFilterRuleFactory>{ static constexpr guid value{ 0x00C36508,0x6296,0x4F29,{ 0x9A,0xAD,0x89,0x20,0xCE,0xBA,0x3C,0xE8 } }; };
template <> struct guid_storage<Windows::Devices::Sms::ISmsFilterRules>{ static constexpr guid value{ 0x4E47EAFB,0x79CD,0x4881,{ 0x98,0x94,0x55,0xA4,0x13,0x5B,0x23,0xFA } }; };
template <> struct guid_storage<Windows::Devices::Sms::ISmsFilterRulesFactory>{ static constexpr guid value{ 0xA09924ED,0x6E2E,0x4530,{ 0x9F,0xDE,0x46,0x5D,0x02,0xEE,0xD0,0x0E } }; };
template <> struct guid_storage<Windows::Devices::Sms::ISmsMessage>{ static constexpr guid value{ 0xED3C5E28,0x6984,0x4B07,{ 0x81,0x1D,0x8D,0x59,0x06,0xED,0x3C,0xEA } }; };
template <> struct guid_storage<Windows::Devices::Sms::ISmsMessageBase>{ static constexpr guid value{ 0x2CF0FE30,0xFE50,0x4FC6,{ 0xAA,0x88,0x4C,0xCF,0xE2,0x7A,0x29,0xEA } }; };
template <> struct guid_storage<Windows::Devices::Sms::ISmsMessageReceivedEventArgs>{ static constexpr guid value{ 0x08E80A98,0xB8E5,0x41C1,{ 0xA3,0xD8,0xD3,0xAB,0xFA,0xE2,0x26,0x75 } }; };
template <> struct guid_storage<Windows::Devices::Sms::ISmsMessageReceivedTriggerDetails>{ static constexpr guid value{ 0x2BCFCBD4,0x2657,0x4128,{ 0xAD,0x5F,0xE3,0x87,0x71,0x32,0xBD,0xB1 } }; };
template <> struct guid_storage<Windows::Devices::Sms::ISmsMessageRegistration>{ static constexpr guid value{ 0x1720503E,0xF34F,0x446B,{ 0x83,0xB3,0x0F,0xF1,0x99,0x23,0xB4,0x09 } }; };
template <> struct guid_storage<Windows::Devices::Sms::ISmsMessageRegistrationStatics>{ static constexpr guid value{ 0x63A05464,0x2898,0x4778,{ 0xA0,0x3C,0x6F,0x99,0x49,0x07,0xD6,0x3A } }; };
template <> struct guid_storage<Windows::Devices::Sms::ISmsReceivedEventDetails>{ static constexpr guid value{ 0x5BB50F15,0xE46D,0x4C82,{ 0x84,0x7D,0x5A,0x03,0x04,0xC1,0xD5,0x3D } }; };
template <> struct guid_storage<Windows::Devices::Sms::ISmsReceivedEventDetails2>{ static constexpr guid value{ 0x40E05C86,0xA7B4,0x4771,{ 0x9A,0xE7,0x0B,0x5F,0xFB,0x12,0xC0,0x3A } }; };
template <> struct guid_storage<Windows::Devices::Sms::ISmsSendMessageResult>{ static constexpr guid value{ 0xDB139AF2,0x78C9,0x4FEB,{ 0x96,0x22,0x45,0x23,0x28,0x08,0x8D,0x62 } }; };
template <> struct guid_storage<Windows::Devices::Sms::ISmsStatusMessage>{ static constexpr guid value{ 0xE6D28342,0xB70B,0x4677,{ 0x93,0x79,0xC9,0x78,0x3F,0xDF,0xF8,0xF4 } }; };
template <> struct guid_storage<Windows::Devices::Sms::ISmsTextMessage>{ static constexpr guid value{ 0xD61C904C,0xA495,0x487F,{ 0x9A,0x6F,0x97,0x15,0x48,0xC5,0xBC,0x9F } }; };
template <> struct guid_storage<Windows::Devices::Sms::ISmsTextMessage2>{ static constexpr guid value{ 0x22A0D893,0x4555,0x4755,{ 0xB5,0xA1,0xE7,0xFD,0x84,0x95,0x5F,0x8D } }; };
template <> struct guid_storage<Windows::Devices::Sms::ISmsTextMessageStatics>{ static constexpr guid value{ 0x7F68C5ED,0x3CCC,0x47A3,{ 0x8C,0x55,0x38,0x0D,0x3B,0x01,0x08,0x92 } }; };
template <> struct guid_storage<Windows::Devices::Sms::ISmsVoicemailMessage>{ static constexpr guid value{ 0x271AA0A6,0x95B1,0x44FF,{ 0xBC,0xB8,0xB8,0xFD,0xD7,0xE0,0x8B,0xC3 } }; };
template <> struct guid_storage<Windows::Devices::Sms::ISmsWapMessage>{ static constexpr guid value{ 0xCD937743,0x7A55,0x4D3B,{ 0x90,0x21,0xF2,0x2E,0x02,0x2D,0x09,0xC5 } }; };
template <> struct guid_storage<Windows::Devices::Sms::SmsDeviceStatusChangedEventHandler>{ static constexpr guid value{ 0x982B1162,0x3DD7,0x4618,{ 0xAF,0x89,0x0C,0x27,0x2D,0x5D,0x06,0xD8 } }; };
template <> struct guid_storage<Windows::Devices::Sms::SmsMessageReceivedEventHandler>{ static constexpr guid value{ 0x0B7AD409,0xEC2D,0x47CE,{ 0xA2,0x53,0x73,0x2B,0xEE,0xEB,0xCA,0xCD } }; };
template <> struct default_interface<Windows::Devices::Sms::DeleteSmsMessageOperation>{ using type = Windows::Foundation::IAsyncAction; };
template <> struct default_interface<Windows::Devices::Sms::DeleteSmsMessagesOperation>{ using type = Windows::Foundation::IAsyncAction; };
template <> struct default_interface<Windows::Devices::Sms::GetSmsDeviceOperation>{ using type = Windows::Foundation::IAsyncOperation<Windows::Devices::Sms::SmsDevice>; };
template <> struct default_interface<Windows::Devices::Sms::GetSmsMessageOperation>{ using type = Windows::Foundation::IAsyncOperation<Windows::Devices::Sms::ISmsMessage>; };
template <> struct default_interface<Windows::Devices::Sms::GetSmsMessagesOperation>{ using type = Windows::Foundation::IAsyncOperationWithProgress<Windows::Foundation::Collections::IVectorView<Windows::Devices::Sms::ISmsMessage>, int32_t>; };
template <> struct default_interface<Windows::Devices::Sms::SendSmsMessageOperation>{ using type = Windows::Foundation::IAsyncAction; };
template <> struct default_interface<Windows::Devices::Sms::SmsAppMessage>{ using type = Windows::Devices::Sms::ISmsAppMessage; };
template <> struct default_interface<Windows::Devices::Sms::SmsBinaryMessage>{ using type = Windows::Devices::Sms::ISmsBinaryMessage; };
template <> struct default_interface<Windows::Devices::Sms::SmsBroadcastMessage>{ using type = Windows::Devices::Sms::ISmsBroadcastMessage; };
template <> struct default_interface<Windows::Devices::Sms::SmsDevice>{ using type = Windows::Devices::Sms::ISmsDevice; };
template <> struct default_interface<Windows::Devices::Sms::SmsDevice2>{ using type = Windows::Devices::Sms::ISmsDevice2; };
template <> struct default_interface<Windows::Devices::Sms::SmsDeviceMessageStore>{ using type = Windows::Devices::Sms::ISmsDeviceMessageStore; };
template <> struct default_interface<Windows::Devices::Sms::SmsFilterRule>{ using type = Windows::Devices::Sms::ISmsFilterRule; };
template <> struct default_interface<Windows::Devices::Sms::SmsFilterRules>{ using type = Windows::Devices::Sms::ISmsFilterRules; };
template <> struct default_interface<Windows::Devices::Sms::SmsMessageReceivedEventArgs>{ using type = Windows::Devices::Sms::ISmsMessageReceivedEventArgs; };
template <> struct default_interface<Windows::Devices::Sms::SmsMessageReceivedTriggerDetails>{ using type = Windows::Devices::Sms::ISmsMessageReceivedTriggerDetails; };
template <> struct default_interface<Windows::Devices::Sms::SmsMessageRegistration>{ using type = Windows::Devices::Sms::ISmsMessageRegistration; };
template <> struct default_interface<Windows::Devices::Sms::SmsReceivedEventDetails>{ using type = Windows::Devices::Sms::ISmsReceivedEventDetails; };
template <> struct default_interface<Windows::Devices::Sms::SmsSendMessageResult>{ using type = Windows::Devices::Sms::ISmsSendMessageResult; };
template <> struct default_interface<Windows::Devices::Sms::SmsStatusMessage>{ using type = Windows::Devices::Sms::ISmsStatusMessage; };
template <> struct default_interface<Windows::Devices::Sms::SmsTextMessage>{ using type = Windows::Devices::Sms::ISmsTextMessage; };
template <> struct default_interface<Windows::Devices::Sms::SmsTextMessage2>{ using type = Windows::Devices::Sms::ISmsTextMessage2; };
template <> struct default_interface<Windows::Devices::Sms::SmsVoicemailMessage>{ using type = Windows::Devices::Sms::ISmsVoicemailMessage; };
template <> struct default_interface<Windows::Devices::Sms::SmsWapMessage>{ using type = Windows::Devices::Sms::ISmsWapMessage; };

template <> struct abi<Windows::Devices::Sms::ISmsAppMessage>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_Timestamp(Windows::Foundation::DateTime* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_To(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL put_To(void* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_From(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Body(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL put_Body(void* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_CallbackNumber(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL put_CallbackNumber(void* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_IsDeliveryNotificationEnabled(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_IsDeliveryNotificationEnabled(bool value) noexcept = 0;
    virtual int32_t WINRT_CALL get_RetryAttemptCount(int32_t* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_RetryAttemptCount(int32_t value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Encoding(Windows::Devices::Sms::SmsEncoding* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_Encoding(Windows::Devices::Sms::SmsEncoding value) noexcept = 0;
    virtual int32_t WINRT_CALL get_PortNumber(int32_t* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_PortNumber(int32_t value) noexcept = 0;
    virtual int32_t WINRT_CALL get_TeleserviceId(int32_t* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_TeleserviceId(int32_t value) noexcept = 0;
    virtual int32_t WINRT_CALL get_ProtocolId(int32_t* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_ProtocolId(int32_t value) noexcept = 0;
    virtual int32_t WINRT_CALL get_BinaryBody(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL put_BinaryBody(void* value) noexcept = 0;
};};

template <> struct abi<Windows::Devices::Sms::ISmsBinaryMessage>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_Format(Windows::Devices::Sms::SmsDataFormat* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_Format(Windows::Devices::Sms::SmsDataFormat value) noexcept = 0;
    virtual int32_t WINRT_CALL GetData(uint32_t* __valueSize, uint8_t** value) noexcept = 0;
    virtual int32_t WINRT_CALL SetData(uint32_t __valueSize, uint8_t* value) noexcept = 0;
};};

template <> struct abi<Windows::Devices::Sms::ISmsBroadcastMessage>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_Timestamp(Windows::Foundation::DateTime* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_To(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Body(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Channel(int32_t* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_GeographicalScope(Windows::Devices::Sms::SmsGeographicalScope* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_MessageCode(int32_t* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_UpdateNumber(int32_t* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_BroadcastType(Windows::Devices::Sms::SmsBroadcastType* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_IsEmergencyAlert(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_IsUserPopupRequested(bool* value) noexcept = 0;
};};

template <> struct abi<Windows::Devices::Sms::ISmsDevice>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL SendMessageAsync(void* message, void** asyncInfo) noexcept = 0;
    virtual int32_t WINRT_CALL CalculateLength(void* message, struct struct_Windows_Devices_Sms_SmsEncodedLength* encodedLength) noexcept = 0;
    virtual int32_t WINRT_CALL get_AccountPhoneNumber(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_CellularClass(Windows::Devices::Sms::CellularClass* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_MessageStore(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_DeviceStatus(Windows::Devices::Sms::SmsDeviceStatus* value) noexcept = 0;
    virtual int32_t WINRT_CALL add_SmsMessageReceived(void* eventHandler, winrt::event_token* eventCookie) noexcept = 0;
    virtual int32_t WINRT_CALL remove_SmsMessageReceived(winrt::event_token eventCookie) noexcept = 0;
    virtual int32_t WINRT_CALL add_SmsDeviceStatusChanged(void* eventHandler, winrt::event_token* eventCookie) noexcept = 0;
    virtual int32_t WINRT_CALL remove_SmsDeviceStatusChanged(winrt::event_token eventCookie) noexcept = 0;
};};

template <> struct abi<Windows::Devices::Sms::ISmsDevice2>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_SmscAddress(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL put_SmscAddress(void* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_DeviceId(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_ParentDeviceId(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_AccountPhoneNumber(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_CellularClass(Windows::Devices::Sms::CellularClass* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_DeviceStatus(Windows::Devices::Sms::SmsDeviceStatus* value) noexcept = 0;
    virtual int32_t WINRT_CALL CalculateLength(void* message, struct struct_Windows_Devices_Sms_SmsEncodedLength* value) noexcept = 0;
    virtual int32_t WINRT_CALL SendMessageAndGetResultAsync(void* message, void** asyncInfo) noexcept = 0;
    virtual int32_t WINRT_CALL add_DeviceStatusChanged(void* eventHandler, winrt::event_token* eventCookie) noexcept = 0;
    virtual int32_t WINRT_CALL remove_DeviceStatusChanged(winrt::event_token eventCookie) noexcept = 0;
};};

template <> struct abi<Windows::Devices::Sms::ISmsDevice2Statics>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL GetDeviceSelector(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL FromId(void* deviceId, void** value) noexcept = 0;
    virtual int32_t WINRT_CALL GetDefault(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL FromParentId(void* parentDeviceId, void** value) noexcept = 0;
};};

template <> struct abi<Windows::Devices::Sms::ISmsDeviceMessageStore>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL DeleteMessageAsync(uint32_t messageId, void** asyncInfo) noexcept = 0;
    virtual int32_t WINRT_CALL DeleteMessagesAsync(Windows::Devices::Sms::SmsMessageFilter messageFilter, void** asyncInfo) noexcept = 0;
    virtual int32_t WINRT_CALL GetMessageAsync(uint32_t messageId, void** asyncInfo) noexcept = 0;
    virtual int32_t WINRT_CALL GetMessagesAsync(Windows::Devices::Sms::SmsMessageFilter messageFilter, void** asyncInfo) noexcept = 0;
    virtual int32_t WINRT_CALL get_MaxMessages(uint32_t* value) noexcept = 0;
};};

template <> struct abi<Windows::Devices::Sms::ISmsDeviceStatics>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL GetDeviceSelector(void** phstrDeviceClassSelector) noexcept = 0;
    virtual int32_t WINRT_CALL FromIdAsync(void* deviceId, void** asyncInfo) noexcept = 0;
    virtual int32_t WINRT_CALL GetDefaultAsync(void** asyncInfo) noexcept = 0;
};};

template <> struct abi<Windows::Devices::Sms::ISmsDeviceStatics2>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL FromNetworkAccountIdAsync(void* networkAccountId, void** asyncInfo) noexcept = 0;
};};

template <> struct abi<Windows::Devices::Sms::ISmsFilterRule>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_MessageType(Windows::Devices::Sms::SmsMessageType* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_ImsiPrefixes(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_DeviceIds(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_SenderNumbers(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_TextMessagePrefixes(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_PortNumbers(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_CellularClass(Windows::Devices::Sms::CellularClass* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_CellularClass(Windows::Devices::Sms::CellularClass value) noexcept = 0;
    virtual int32_t WINRT_CALL get_ProtocolIds(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_TeleserviceIds(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_WapApplicationIds(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_WapContentTypes(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_BroadcastTypes(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_BroadcastChannels(void** value) noexcept = 0;
};};

template <> struct abi<Windows::Devices::Sms::ISmsFilterRuleFactory>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL CreateFilterRule(Windows::Devices::Sms::SmsMessageType messageType, void** value) noexcept = 0;
};};

template <> struct abi<Windows::Devices::Sms::ISmsFilterRules>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_ActionType(Windows::Devices::Sms::SmsFilterActionType* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Rules(void** value) noexcept = 0;
};};

template <> struct abi<Windows::Devices::Sms::ISmsFilterRulesFactory>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL CreateFilterRules(Windows::Devices::Sms::SmsFilterActionType actionType, void** value) noexcept = 0;
};};

template <> struct abi<Windows::Devices::Sms::ISmsMessage>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_Id(uint32_t* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_MessageClass(Windows::Devices::Sms::SmsMessageClass* value) noexcept = 0;
};};

template <> struct abi<Windows::Devices::Sms::ISmsMessageBase>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_MessageType(Windows::Devices::Sms::SmsMessageType* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_DeviceId(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_CellularClass(Windows::Devices::Sms::CellularClass* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_MessageClass(Windows::Devices::Sms::SmsMessageClass* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_SimIccId(void** value) noexcept = 0;
};};

template <> struct abi<Windows::Devices::Sms::ISmsMessageReceivedEventArgs>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_TextMessage(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_BinaryMessage(void** value) noexcept = 0;
};};

template <> struct abi<Windows::Devices::Sms::ISmsMessageReceivedTriggerDetails>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_MessageType(Windows::Devices::Sms::SmsMessageType* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_TextMessage(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_WapMessage(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_AppMessage(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_BroadcastMessage(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_VoicemailMessage(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_StatusMessage(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL Drop() noexcept = 0;
    virtual int32_t WINRT_CALL Accept() noexcept = 0;
};};

template <> struct abi<Windows::Devices::Sms::ISmsMessageRegistration>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_Id(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL Unregister() noexcept = 0;
    virtual int32_t WINRT_CALL add_MessageReceived(void* eventHandler, winrt::event_token* eventCookie) noexcept = 0;
    virtual int32_t WINRT_CALL remove_MessageReceived(winrt::event_token eventCookie) noexcept = 0;
};};

template <> struct abi<Windows::Devices::Sms::ISmsMessageRegistrationStatics>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_AllRegistrations(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL Register(void* id, void* filterRules, void** value) noexcept = 0;
};};

template <> struct abi<Windows::Devices::Sms::ISmsReceivedEventDetails>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_DeviceId(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_MessageIndex(uint32_t* value) noexcept = 0;
};};

template <> struct abi<Windows::Devices::Sms::ISmsReceivedEventDetails2>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_MessageClass(Windows::Devices::Sms::SmsMessageClass* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_BinaryMessage(void** value) noexcept = 0;
};};

template <> struct abi<Windows::Devices::Sms::ISmsSendMessageResult>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_IsSuccessful(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_MessageReferenceNumbers(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_CellularClass(Windows::Devices::Sms::CellularClass* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_ModemErrorCode(Windows::Devices::Sms::SmsModemErrorCode* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_IsErrorTransient(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_NetworkCauseCode(int32_t* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_TransportFailureCause(int32_t* value) noexcept = 0;
};};

template <> struct abi<Windows::Devices::Sms::ISmsStatusMessage>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_To(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_From(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Body(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Status(int32_t* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_MessageReferenceNumber(int32_t* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_ServiceCenterTimestamp(Windows::Foundation::DateTime* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_DischargeTime(Windows::Foundation::DateTime* value) noexcept = 0;
};};

template <> struct abi<Windows::Devices::Sms::ISmsTextMessage>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_Timestamp(Windows::Foundation::DateTime* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_PartReferenceId(uint32_t* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_PartNumber(uint32_t* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_PartCount(uint32_t* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_To(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL put_To(void* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_From(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL put_From(void* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Body(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL put_Body(void* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Encoding(Windows::Devices::Sms::SmsEncoding* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_Encoding(Windows::Devices::Sms::SmsEncoding value) noexcept = 0;
    virtual int32_t WINRT_CALL ToBinaryMessages(Windows::Devices::Sms::SmsDataFormat format, void** messages) noexcept = 0;
};};

template <> struct abi<Windows::Devices::Sms::ISmsTextMessage2>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_Timestamp(Windows::Foundation::DateTime* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_To(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL put_To(void* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_From(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Body(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL put_Body(void* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Encoding(Windows::Devices::Sms::SmsEncoding* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_Encoding(Windows::Devices::Sms::SmsEncoding value) noexcept = 0;
    virtual int32_t WINRT_CALL get_CallbackNumber(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL put_CallbackNumber(void* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_IsDeliveryNotificationEnabled(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_IsDeliveryNotificationEnabled(bool value) noexcept = 0;
    virtual int32_t WINRT_CALL get_RetryAttemptCount(int32_t* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_RetryAttemptCount(int32_t value) noexcept = 0;
    virtual int32_t WINRT_CALL get_TeleserviceId(int32_t* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_ProtocolId(int32_t* value) noexcept = 0;
};};

template <> struct abi<Windows::Devices::Sms::ISmsTextMessageStatics>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL FromBinaryMessage(void* binaryMessage, void** textMessage) noexcept = 0;
    virtual int32_t WINRT_CALL FromBinaryData(Windows::Devices::Sms::SmsDataFormat format, uint32_t __valueSize, uint8_t* value, void** textMessage) noexcept = 0;
};};

template <> struct abi<Windows::Devices::Sms::ISmsVoicemailMessage>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_Timestamp(Windows::Foundation::DateTime* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_To(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Body(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_MessageCount(void** value) noexcept = 0;
};};

template <> struct abi<Windows::Devices::Sms::ISmsWapMessage>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_Timestamp(Windows::Foundation::DateTime* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_To(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_From(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_ApplicationId(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_ContentType(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_BinaryBody(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Headers(void** value) noexcept = 0;
};};

template <> struct abi<Windows::Devices::Sms::SmsDeviceStatusChangedEventHandler>{ struct type : IUnknown
{
    virtual int32_t WINRT_CALL Invoke(void* sender) noexcept = 0;
};};

template <> struct abi<Windows::Devices::Sms::SmsMessageReceivedEventHandler>{ struct type : IUnknown
{
    virtual int32_t WINRT_CALL Invoke(void* sender, void* e) noexcept = 0;
};};

template <typename D>
struct consume_Windows_Devices_Sms_ISmsAppMessage
{
    Windows::Foundation::DateTime Timestamp() const;
    hstring To() const;
    void To(param::hstring const& value) const;
    hstring From() const;
    hstring Body() const;
    void Body(param::hstring const& value) const;
    hstring CallbackNumber() const;
    void CallbackNumber(param::hstring const& value) const;
    bool IsDeliveryNotificationEnabled() const;
    void IsDeliveryNotificationEnabled(bool value) const;
    int32_t RetryAttemptCount() const;
    void RetryAttemptCount(int32_t value) const;
    Windows::Devices::Sms::SmsEncoding Encoding() const;
    void Encoding(Windows::Devices::Sms::SmsEncoding const& value) const;
    int32_t PortNumber() const;
    void PortNumber(int32_t value) const;
    int32_t TeleserviceId() const;
    void TeleserviceId(int32_t value) const;
    int32_t ProtocolId() const;
    void ProtocolId(int32_t value) const;
    Windows::Storage::Streams::IBuffer BinaryBody() const;
    void BinaryBody(Windows::Storage::Streams::IBuffer const& value) const;
};
template <> struct consume<Windows::Devices::Sms::ISmsAppMessage> { template <typename D> using type = consume_Windows_Devices_Sms_ISmsAppMessage<D>; };

template <typename D>
struct consume_Windows_Devices_Sms_ISmsBinaryMessage
{
    Windows::Devices::Sms::SmsDataFormat Format() const;
    void Format(Windows::Devices::Sms::SmsDataFormat const& value) const;
    com_array<uint8_t> GetData() const;
    void SetData(array_view<uint8_t const> value) const;
};
template <> struct consume<Windows::Devices::Sms::ISmsBinaryMessage> { template <typename D> using type = consume_Windows_Devices_Sms_ISmsBinaryMessage<D>; };

template <typename D>
struct consume_Windows_Devices_Sms_ISmsBroadcastMessage
{
    Windows::Foundation::DateTime Timestamp() const;
    hstring To() const;
    hstring Body() const;
    int32_t Channel() const;
    Windows::Devices::Sms::SmsGeographicalScope GeographicalScope() const;
    int32_t MessageCode() const;
    int32_t UpdateNumber() const;
    Windows::Devices::Sms::SmsBroadcastType BroadcastType() const;
    bool IsEmergencyAlert() const;
    bool IsUserPopupRequested() const;
};
template <> struct consume<Windows::Devices::Sms::ISmsBroadcastMessage> { template <typename D> using type = consume_Windows_Devices_Sms_ISmsBroadcastMessage<D>; };

template <typename D>
struct consume_Windows_Devices_Sms_ISmsDevice
{
    Windows::Devices::Sms::SendSmsMessageOperation SendMessageAsync(Windows::Devices::Sms::ISmsMessage const& message) const;
    Windows::Devices::Sms::SmsEncodedLength CalculateLength(Windows::Devices::Sms::SmsTextMessage const& message) const;
    hstring AccountPhoneNumber() const;
    Windows::Devices::Sms::CellularClass CellularClass() const;
    Windows::Devices::Sms::SmsDeviceMessageStore MessageStore() const;
    Windows::Devices::Sms::SmsDeviceStatus DeviceStatus() const;
    winrt::event_token SmsMessageReceived(Windows::Devices::Sms::SmsMessageReceivedEventHandler const& eventHandler) const;
    using SmsMessageReceived_revoker = impl::event_revoker<Windows::Devices::Sms::ISmsDevice, &impl::abi_t<Windows::Devices::Sms::ISmsDevice>::remove_SmsMessageReceived>;
    SmsMessageReceived_revoker SmsMessageReceived(auto_revoke_t, Windows::Devices::Sms::SmsMessageReceivedEventHandler const& eventHandler) const;
    void SmsMessageReceived(winrt::event_token const& eventCookie) const noexcept;
    winrt::event_token SmsDeviceStatusChanged(Windows::Devices::Sms::SmsDeviceStatusChangedEventHandler const& eventHandler) const;
    using SmsDeviceStatusChanged_revoker = impl::event_revoker<Windows::Devices::Sms::ISmsDevice, &impl::abi_t<Windows::Devices::Sms::ISmsDevice>::remove_SmsDeviceStatusChanged>;
    SmsDeviceStatusChanged_revoker SmsDeviceStatusChanged(auto_revoke_t, Windows::Devices::Sms::SmsDeviceStatusChangedEventHandler const& eventHandler) const;
    void SmsDeviceStatusChanged(winrt::event_token const& eventCookie) const noexcept;
};
template <> struct consume<Windows::Devices::Sms::ISmsDevice> { template <typename D> using type = consume_Windows_Devices_Sms_ISmsDevice<D>; };

template <typename D>
struct consume_Windows_Devices_Sms_ISmsDevice2
{
    hstring SmscAddress() const;
    void SmscAddress(param::hstring const& value) const;
    hstring DeviceId() const;
    hstring ParentDeviceId() const;
    hstring AccountPhoneNumber() const;
    Windows::Devices::Sms::CellularClass CellularClass() const;
    Windows::Devices::Sms::SmsDeviceStatus DeviceStatus() const;
    Windows::Devices::Sms::SmsEncodedLength CalculateLength(Windows::Devices::Sms::ISmsMessageBase const& message) const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Sms::SmsSendMessageResult> SendMessageAndGetResultAsync(Windows::Devices::Sms::ISmsMessageBase const& message) const;
    winrt::event_token DeviceStatusChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Sms::SmsDevice2, Windows::Foundation::IInspectable> const& eventHandler) const;
    using DeviceStatusChanged_revoker = impl::event_revoker<Windows::Devices::Sms::ISmsDevice2, &impl::abi_t<Windows::Devices::Sms::ISmsDevice2>::remove_DeviceStatusChanged>;
    DeviceStatusChanged_revoker DeviceStatusChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Sms::SmsDevice2, Windows::Foundation::IInspectable> const& eventHandler) const;
    void DeviceStatusChanged(winrt::event_token const& eventCookie) const noexcept;
};
template <> struct consume<Windows::Devices::Sms::ISmsDevice2> { template <typename D> using type = consume_Windows_Devices_Sms_ISmsDevice2<D>; };

template <typename D>
struct consume_Windows_Devices_Sms_ISmsDevice2Statics
{
    hstring GetDeviceSelector() const;
    Windows::Devices::Sms::SmsDevice2 FromId(param::hstring const& deviceId) const;
    Windows::Devices::Sms::SmsDevice2 GetDefault() const;
    Windows::Devices::Sms::SmsDevice2 FromParentId(param::hstring const& parentDeviceId) const;
};
template <> struct consume<Windows::Devices::Sms::ISmsDevice2Statics> { template <typename D> using type = consume_Windows_Devices_Sms_ISmsDevice2Statics<D>; };

template <typename D>
struct consume_Windows_Devices_Sms_ISmsDeviceMessageStore
{
    Windows::Foundation::IAsyncAction DeleteMessageAsync(uint32_t messageId) const;
    Windows::Foundation::IAsyncAction DeleteMessagesAsync(Windows::Devices::Sms::SmsMessageFilter const& messageFilter) const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Sms::ISmsMessage> GetMessageAsync(uint32_t messageId) const;
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Foundation::Collections::IVectorView<Windows::Devices::Sms::ISmsMessage>, int32_t> GetMessagesAsync(Windows::Devices::Sms::SmsMessageFilter const& messageFilter) const;
    uint32_t MaxMessages() const;
};
template <> struct consume<Windows::Devices::Sms::ISmsDeviceMessageStore> { template <typename D> using type = consume_Windows_Devices_Sms_ISmsDeviceMessageStore<D>; };

template <typename D>
struct consume_Windows_Devices_Sms_ISmsDeviceStatics
{
    hstring GetDeviceSelector() const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Sms::SmsDevice> FromIdAsync(param::hstring const& deviceId) const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Sms::SmsDevice> GetDefaultAsync() const;
};
template <> struct consume<Windows::Devices::Sms::ISmsDeviceStatics> { template <typename D> using type = consume_Windows_Devices_Sms_ISmsDeviceStatics<D>; };

template <typename D>
struct consume_Windows_Devices_Sms_ISmsDeviceStatics2
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Sms::SmsDevice> FromNetworkAccountIdAsync(param::hstring const& networkAccountId) const;
};
template <> struct consume<Windows::Devices::Sms::ISmsDeviceStatics2> { template <typename D> using type = consume_Windows_Devices_Sms_ISmsDeviceStatics2<D>; };

template <typename D>
struct consume_Windows_Devices_Sms_ISmsFilterRule
{
    Windows::Devices::Sms::SmsMessageType MessageType() const;
    Windows::Foundation::Collections::IVector<hstring> ImsiPrefixes() const;
    Windows::Foundation::Collections::IVector<hstring> DeviceIds() const;
    Windows::Foundation::Collections::IVector<hstring> SenderNumbers() const;
    Windows::Foundation::Collections::IVector<hstring> TextMessagePrefixes() const;
    Windows::Foundation::Collections::IVector<int32_t> PortNumbers() const;
    Windows::Devices::Sms::CellularClass CellularClass() const;
    void CellularClass(Windows::Devices::Sms::CellularClass const& value) const;
    Windows::Foundation::Collections::IVector<int32_t> ProtocolIds() const;
    Windows::Foundation::Collections::IVector<int32_t> TeleserviceIds() const;
    Windows::Foundation::Collections::IVector<hstring> WapApplicationIds() const;
    Windows::Foundation::Collections::IVector<hstring> WapContentTypes() const;
    Windows::Foundation::Collections::IVector<Windows::Devices::Sms::SmsBroadcastType> BroadcastTypes() const;
    Windows::Foundation::Collections::IVector<int32_t> BroadcastChannels() const;
};
template <> struct consume<Windows::Devices::Sms::ISmsFilterRule> { template <typename D> using type = consume_Windows_Devices_Sms_ISmsFilterRule<D>; };

template <typename D>
struct consume_Windows_Devices_Sms_ISmsFilterRuleFactory
{
    Windows::Devices::Sms::SmsFilterRule CreateFilterRule(Windows::Devices::Sms::SmsMessageType const& messageType) const;
};
template <> struct consume<Windows::Devices::Sms::ISmsFilterRuleFactory> { template <typename D> using type = consume_Windows_Devices_Sms_ISmsFilterRuleFactory<D>; };

template <typename D>
struct consume_Windows_Devices_Sms_ISmsFilterRules
{
    Windows::Devices::Sms::SmsFilterActionType ActionType() const;
    Windows::Foundation::Collections::IVector<Windows::Devices::Sms::SmsFilterRule> Rules() const;
};
template <> struct consume<Windows::Devices::Sms::ISmsFilterRules> { template <typename D> using type = consume_Windows_Devices_Sms_ISmsFilterRules<D>; };

template <typename D>
struct consume_Windows_Devices_Sms_ISmsFilterRulesFactory
{
    Windows::Devices::Sms::SmsFilterRules CreateFilterRules(Windows::Devices::Sms::SmsFilterActionType const& actionType) const;
};
template <> struct consume<Windows::Devices::Sms::ISmsFilterRulesFactory> { template <typename D> using type = consume_Windows_Devices_Sms_ISmsFilterRulesFactory<D>; };

template <typename D>
struct consume_Windows_Devices_Sms_ISmsMessage
{
    uint32_t Id() const;
    Windows::Devices::Sms::SmsMessageClass MessageClass() const;
};
template <> struct consume<Windows::Devices::Sms::ISmsMessage> { template <typename D> using type = consume_Windows_Devices_Sms_ISmsMessage<D>; };

template <typename D>
struct consume_Windows_Devices_Sms_ISmsMessageBase
{
    Windows::Devices::Sms::SmsMessageType MessageType() const;
    hstring DeviceId() const;
    Windows::Devices::Sms::CellularClass CellularClass() const;
    Windows::Devices::Sms::SmsMessageClass MessageClass() const;
    hstring SimIccId() const;
};
template <> struct consume<Windows::Devices::Sms::ISmsMessageBase> { template <typename D> using type = consume_Windows_Devices_Sms_ISmsMessageBase<D>; };

template <typename D>
struct consume_Windows_Devices_Sms_ISmsMessageReceivedEventArgs
{
    Windows::Devices::Sms::SmsTextMessage TextMessage() const;
    Windows::Devices::Sms::SmsBinaryMessage BinaryMessage() const;
};
template <> struct consume<Windows::Devices::Sms::ISmsMessageReceivedEventArgs> { template <typename D> using type = consume_Windows_Devices_Sms_ISmsMessageReceivedEventArgs<D>; };

template <typename D>
struct consume_Windows_Devices_Sms_ISmsMessageReceivedTriggerDetails
{
    Windows::Devices::Sms::SmsMessageType MessageType() const;
    Windows::Devices::Sms::SmsTextMessage2 TextMessage() const;
    Windows::Devices::Sms::SmsWapMessage WapMessage() const;
    Windows::Devices::Sms::SmsAppMessage AppMessage() const;
    Windows::Devices::Sms::SmsBroadcastMessage BroadcastMessage() const;
    Windows::Devices::Sms::SmsVoicemailMessage VoicemailMessage() const;
    Windows::Devices::Sms::SmsStatusMessage StatusMessage() const;
    void Drop() const;
    void Accept() const;
};
template <> struct consume<Windows::Devices::Sms::ISmsMessageReceivedTriggerDetails> { template <typename D> using type = consume_Windows_Devices_Sms_ISmsMessageReceivedTriggerDetails<D>; };

template <typename D>
struct consume_Windows_Devices_Sms_ISmsMessageRegistration
{
    hstring Id() const;
    void Unregister() const;
    winrt::event_token MessageReceived(Windows::Foundation::TypedEventHandler<Windows::Devices::Sms::SmsMessageRegistration, Windows::Devices::Sms::SmsMessageReceivedTriggerDetails> const& eventHandler) const;
    using MessageReceived_revoker = impl::event_revoker<Windows::Devices::Sms::ISmsMessageRegistration, &impl::abi_t<Windows::Devices::Sms::ISmsMessageRegistration>::remove_MessageReceived>;
    MessageReceived_revoker MessageReceived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Sms::SmsMessageRegistration, Windows::Devices::Sms::SmsMessageReceivedTriggerDetails> const& eventHandler) const;
    void MessageReceived(winrt::event_token const& eventCookie) const noexcept;
};
template <> struct consume<Windows::Devices::Sms::ISmsMessageRegistration> { template <typename D> using type = consume_Windows_Devices_Sms_ISmsMessageRegistration<D>; };

template <typename D>
struct consume_Windows_Devices_Sms_ISmsMessageRegistrationStatics
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Sms::SmsMessageRegistration> AllRegistrations() const;
    Windows::Devices::Sms::SmsMessageRegistration Register(param::hstring const& id, Windows::Devices::Sms::SmsFilterRules const& filterRules) const;
};
template <> struct consume<Windows::Devices::Sms::ISmsMessageRegistrationStatics> { template <typename D> using type = consume_Windows_Devices_Sms_ISmsMessageRegistrationStatics<D>; };

template <typename D>
struct consume_Windows_Devices_Sms_ISmsReceivedEventDetails
{
    hstring DeviceId() const;
    uint32_t MessageIndex() const;
};
template <> struct consume<Windows::Devices::Sms::ISmsReceivedEventDetails> { template <typename D> using type = consume_Windows_Devices_Sms_ISmsReceivedEventDetails<D>; };

template <typename D>
struct consume_Windows_Devices_Sms_ISmsReceivedEventDetails2
{
    Windows::Devices::Sms::SmsMessageClass MessageClass() const;
    Windows::Devices::Sms::SmsBinaryMessage BinaryMessage() const;
};
template <> struct consume<Windows::Devices::Sms::ISmsReceivedEventDetails2> { template <typename D> using type = consume_Windows_Devices_Sms_ISmsReceivedEventDetails2<D>; };

template <typename D>
struct consume_Windows_Devices_Sms_ISmsSendMessageResult
{
    bool IsSuccessful() const;
    Windows::Foundation::Collections::IVectorView<int32_t> MessageReferenceNumbers() const;
    Windows::Devices::Sms::CellularClass CellularClass() const;
    Windows::Devices::Sms::SmsModemErrorCode ModemErrorCode() const;
    bool IsErrorTransient() const;
    int32_t NetworkCauseCode() const;
    int32_t TransportFailureCause() const;
};
template <> struct consume<Windows::Devices::Sms::ISmsSendMessageResult> { template <typename D> using type = consume_Windows_Devices_Sms_ISmsSendMessageResult<D>; };

template <typename D>
struct consume_Windows_Devices_Sms_ISmsStatusMessage
{
    hstring To() const;
    hstring From() const;
    hstring Body() const;
    int32_t Status() const;
    int32_t MessageReferenceNumber() const;
    Windows::Foundation::DateTime ServiceCenterTimestamp() const;
    Windows::Foundation::DateTime DischargeTime() const;
};
template <> struct consume<Windows::Devices::Sms::ISmsStatusMessage> { template <typename D> using type = consume_Windows_Devices_Sms_ISmsStatusMessage<D>; };

template <typename D>
struct consume_Windows_Devices_Sms_ISmsTextMessage
{
    Windows::Foundation::DateTime Timestamp() const;
    uint32_t PartReferenceId() const;
    uint32_t PartNumber() const;
    uint32_t PartCount() const;
    hstring To() const;
    void To(param::hstring const& value) const;
    hstring From() const;
    void From(param::hstring const& value) const;
    hstring Body() const;
    void Body(param::hstring const& value) const;
    Windows::Devices::Sms::SmsEncoding Encoding() const;
    void Encoding(Windows::Devices::Sms::SmsEncoding const& value) const;
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Sms::ISmsBinaryMessage> ToBinaryMessages(Windows::Devices::Sms::SmsDataFormat const& format) const;
};
template <> struct consume<Windows::Devices::Sms::ISmsTextMessage> { template <typename D> using type = consume_Windows_Devices_Sms_ISmsTextMessage<D>; };

template <typename D>
struct consume_Windows_Devices_Sms_ISmsTextMessage2
{
    Windows::Foundation::DateTime Timestamp() const;
    hstring To() const;
    void To(param::hstring const& value) const;
    hstring From() const;
    hstring Body() const;
    void Body(param::hstring const& value) const;
    Windows::Devices::Sms::SmsEncoding Encoding() const;
    void Encoding(Windows::Devices::Sms::SmsEncoding const& value) const;
    hstring CallbackNumber() const;
    void CallbackNumber(param::hstring const& value) const;
    bool IsDeliveryNotificationEnabled() const;
    void IsDeliveryNotificationEnabled(bool value) const;
    int32_t RetryAttemptCount() const;
    void RetryAttemptCount(int32_t value) const;
    int32_t TeleserviceId() const;
    int32_t ProtocolId() const;
};
template <> struct consume<Windows::Devices::Sms::ISmsTextMessage2> { template <typename D> using type = consume_Windows_Devices_Sms_ISmsTextMessage2<D>; };

template <typename D>
struct consume_Windows_Devices_Sms_ISmsTextMessageStatics
{
    Windows::Devices::Sms::SmsTextMessage FromBinaryMessage(Windows::Devices::Sms::SmsBinaryMessage const& binaryMessage) const;
    Windows::Devices::Sms::SmsTextMessage FromBinaryData(Windows::Devices::Sms::SmsDataFormat const& format, array_view<uint8_t const> value) const;
};
template <> struct consume<Windows::Devices::Sms::ISmsTextMessageStatics> { template <typename D> using type = consume_Windows_Devices_Sms_ISmsTextMessageStatics<D>; };

template <typename D>
struct consume_Windows_Devices_Sms_ISmsVoicemailMessage
{
    Windows::Foundation::DateTime Timestamp() const;
    hstring To() const;
    hstring Body() const;
    Windows::Foundation::IReference<int32_t> MessageCount() const;
};
template <> struct consume<Windows::Devices::Sms::ISmsVoicemailMessage> { template <typename D> using type = consume_Windows_Devices_Sms_ISmsVoicemailMessage<D>; };

template <typename D>
struct consume_Windows_Devices_Sms_ISmsWapMessage
{
    Windows::Foundation::DateTime Timestamp() const;
    hstring To() const;
    hstring From() const;
    hstring ApplicationId() const;
    hstring ContentType() const;
    Windows::Storage::Streams::IBuffer BinaryBody() const;
    Windows::Foundation::Collections::IMap<hstring, hstring> Headers() const;
};
template <> struct consume<Windows::Devices::Sms::ISmsWapMessage> { template <typename D> using type = consume_Windows_Devices_Sms_ISmsWapMessage<D>; };

struct struct_Windows_Devices_Sms_SmsEncodedLength
{
    uint32_t SegmentCount;
    uint32_t CharacterCountLastSegment;
    uint32_t CharactersPerSegment;
    uint32_t ByteCountLastSegment;
    uint32_t BytesPerSegment;
};
template <> struct abi<Windows::Devices::Sms::SmsEncodedLength>{ using type = struct_Windows_Devices_Sms_SmsEncodedLength; };


}
