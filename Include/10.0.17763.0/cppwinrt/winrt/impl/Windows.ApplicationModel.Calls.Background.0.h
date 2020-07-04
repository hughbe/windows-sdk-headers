// C++/WinRT v1.0.180821.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Calls::Background {

enum class PhoneCallBlockedReason : int32_t
{
    InCallBlockingList = 0,
    PrivateNumber = 1,
    UnknownNumber = 2,
};

enum class PhoneLineChangeKind : int32_t
{
    Added = 0,
    Removed = 1,
    PropertiesChanged = 2,
};

enum class PhoneLineProperties : uint32_t
{
    None = 0x0,
    BrandingOptions = 0x1,
    CanDial = 0x2,
    CellularDetails = 0x4,
    DisplayColor = 0x8,
    DisplayName = 0x10,
    NetworkName = 0x20,
    NetworkState = 0x40,
    Transport = 0x80,
    Voicemail = 0x100,
};

enum class PhoneTriggerType : int32_t
{
    NewVoicemailMessage = 0,
    CallHistoryChanged = 1,
    LineChanged = 2,
    AirplaneModeDisabledForEmergencyCall = 3,
    CallOriginDataRequest = 4,
    CallBlocked = 5,
};

struct IPhoneCallBlockedTriggerDetails;
struct IPhoneCallOriginDataRequestTriggerDetails;
struct IPhoneLineChangedTriggerDetails;
struct IPhoneNewVoicemailMessageTriggerDetails;
struct PhoneCallBlockedTriggerDetails;
struct PhoneCallOriginDataRequestTriggerDetails;
struct PhoneLineChangedTriggerDetails;
struct PhoneNewVoicemailMessageTriggerDetails;

}

namespace winrt::impl {

template<> struct is_enum_flag<Windows::ApplicationModel::Calls::Background::PhoneLineProperties> : std::true_type {};
template <> struct category<Windows::ApplicationModel::Calls::Background::IPhoneCallBlockedTriggerDetails>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Calls::Background::IPhoneCallOriginDataRequestTriggerDetails>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Calls::Background::IPhoneLineChangedTriggerDetails>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Calls::Background::IPhoneNewVoicemailMessageTriggerDetails>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Calls::Background::PhoneCallBlockedTriggerDetails>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Calls::Background::PhoneCallOriginDataRequestTriggerDetails>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Calls::Background::PhoneLineChangedTriggerDetails>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Calls::Background::PhoneNewVoicemailMessageTriggerDetails>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Calls::Background::PhoneCallBlockedReason>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Calls::Background::PhoneLineChangeKind>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Calls::Background::PhoneLineProperties>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Calls::Background::PhoneTriggerType>{ using type = enum_category; };
template <> struct name<Windows::ApplicationModel::Calls::Background::IPhoneCallBlockedTriggerDetails>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.Background.IPhoneCallBlockedTriggerDetails" }; };
template <> struct name<Windows::ApplicationModel::Calls::Background::IPhoneCallOriginDataRequestTriggerDetails>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.Background.IPhoneCallOriginDataRequestTriggerDetails" }; };
template <> struct name<Windows::ApplicationModel::Calls::Background::IPhoneLineChangedTriggerDetails>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.Background.IPhoneLineChangedTriggerDetails" }; };
template <> struct name<Windows::ApplicationModel::Calls::Background::IPhoneNewVoicemailMessageTriggerDetails>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.Background.IPhoneNewVoicemailMessageTriggerDetails" }; };
template <> struct name<Windows::ApplicationModel::Calls::Background::PhoneCallBlockedTriggerDetails>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.Background.PhoneCallBlockedTriggerDetails" }; };
template <> struct name<Windows::ApplicationModel::Calls::Background::PhoneCallOriginDataRequestTriggerDetails>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.Background.PhoneCallOriginDataRequestTriggerDetails" }; };
template <> struct name<Windows::ApplicationModel::Calls::Background::PhoneLineChangedTriggerDetails>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.Background.PhoneLineChangedTriggerDetails" }; };
template <> struct name<Windows::ApplicationModel::Calls::Background::PhoneNewVoicemailMessageTriggerDetails>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.Background.PhoneNewVoicemailMessageTriggerDetails" }; };
template <> struct name<Windows::ApplicationModel::Calls::Background::PhoneCallBlockedReason>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.Background.PhoneCallBlockedReason" }; };
template <> struct name<Windows::ApplicationModel::Calls::Background::PhoneLineChangeKind>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.Background.PhoneLineChangeKind" }; };
template <> struct name<Windows::ApplicationModel::Calls::Background::PhoneLineProperties>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.Background.PhoneLineProperties" }; };
template <> struct name<Windows::ApplicationModel::Calls::Background::PhoneTriggerType>{ static constexpr auto & value{ L"Windows.ApplicationModel.Calls.Background.PhoneTriggerType" }; };
template <> struct guid_storage<Windows::ApplicationModel::Calls::Background::IPhoneCallBlockedTriggerDetails>{ static constexpr guid value{ 0xA4A690A2,0xE4C1,0x427F,{ 0x86,0x4E,0xE4,0x70,0x47,0x7D,0xDB,0x67 } }; };
template <> struct guid_storage<Windows::ApplicationModel::Calls::Background::IPhoneCallOriginDataRequestTriggerDetails>{ static constexpr guid value{ 0x6E9B5B3F,0xC54B,0x4E82,{ 0x4C,0xC9,0xE3,0x29,0xA4,0x18,0x45,0x92 } }; };
template <> struct guid_storage<Windows::ApplicationModel::Calls::Background::IPhoneLineChangedTriggerDetails>{ static constexpr guid value{ 0xC6D321E7,0xD11D,0x40D8,{ 0xB2,0xB7,0xE4,0x0A,0x01,0xD6,0x62,0x49 } }; };
template <> struct guid_storage<Windows::ApplicationModel::Calls::Background::IPhoneNewVoicemailMessageTriggerDetails>{ static constexpr guid value{ 0x13A8C01B,0xB831,0x48D3,{ 0x8B,0xA9,0x8D,0x22,0xA6,0x58,0x0D,0xCF } }; };
template <> struct default_interface<Windows::ApplicationModel::Calls::Background::PhoneCallBlockedTriggerDetails>{ using type = Windows::ApplicationModel::Calls::Background::IPhoneCallBlockedTriggerDetails; };
template <> struct default_interface<Windows::ApplicationModel::Calls::Background::PhoneCallOriginDataRequestTriggerDetails>{ using type = Windows::ApplicationModel::Calls::Background::IPhoneCallOriginDataRequestTriggerDetails; };
template <> struct default_interface<Windows::ApplicationModel::Calls::Background::PhoneLineChangedTriggerDetails>{ using type = Windows::ApplicationModel::Calls::Background::IPhoneLineChangedTriggerDetails; };
template <> struct default_interface<Windows::ApplicationModel::Calls::Background::PhoneNewVoicemailMessageTriggerDetails>{ using type = Windows::ApplicationModel::Calls::Background::IPhoneNewVoicemailMessageTriggerDetails; };

template <> struct abi<Windows::ApplicationModel::Calls::Background::IPhoneCallBlockedTriggerDetails>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_PhoneNumber(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_LineId(winrt::guid* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_CallBlockedReason(Windows::ApplicationModel::Calls::Background::PhoneCallBlockedReason* value) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Calls::Background::IPhoneCallOriginDataRequestTriggerDetails>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_RequestId(winrt::guid* result) noexcept = 0;
    virtual int32_t WINRT_CALL get_PhoneNumber(void** result) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Calls::Background::IPhoneLineChangedTriggerDetails>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_LineId(winrt::guid* result) noexcept = 0;
    virtual int32_t WINRT_CALL get_ChangeType(Windows::ApplicationModel::Calls::Background::PhoneLineChangeKind* result) noexcept = 0;
    virtual int32_t WINRT_CALL HasLinePropertyChanged(Windows::ApplicationModel::Calls::Background::PhoneLineProperties lineProperty, bool* result) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Calls::Background::IPhoneNewVoicemailMessageTriggerDetails>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_LineId(winrt::guid* result) noexcept = 0;
    virtual int32_t WINRT_CALL get_VoicemailCount(int32_t* result) noexcept = 0;
    virtual int32_t WINRT_CALL get_OperatorMessage(void** result) noexcept = 0;
};};

template <typename D>
struct consume_Windows_ApplicationModel_Calls_Background_IPhoneCallBlockedTriggerDetails
{
    hstring PhoneNumber() const;
    winrt::guid LineId() const;
    Windows::ApplicationModel::Calls::Background::PhoneCallBlockedReason CallBlockedReason() const;
};
template <> struct consume<Windows::ApplicationModel::Calls::Background::IPhoneCallBlockedTriggerDetails> { template <typename D> using type = consume_Windows_ApplicationModel_Calls_Background_IPhoneCallBlockedTriggerDetails<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Calls_Background_IPhoneCallOriginDataRequestTriggerDetails
{
    winrt::guid RequestId() const;
    hstring PhoneNumber() const;
};
template <> struct consume<Windows::ApplicationModel::Calls::Background::IPhoneCallOriginDataRequestTriggerDetails> { template <typename D> using type = consume_Windows_ApplicationModel_Calls_Background_IPhoneCallOriginDataRequestTriggerDetails<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Calls_Background_IPhoneLineChangedTriggerDetails
{
    winrt::guid LineId() const;
    Windows::ApplicationModel::Calls::Background::PhoneLineChangeKind ChangeType() const;
    bool HasLinePropertyChanged(Windows::ApplicationModel::Calls::Background::PhoneLineProperties const& lineProperty) const;
};
template <> struct consume<Windows::ApplicationModel::Calls::Background::IPhoneLineChangedTriggerDetails> { template <typename D> using type = consume_Windows_ApplicationModel_Calls_Background_IPhoneLineChangedTriggerDetails<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Calls_Background_IPhoneNewVoicemailMessageTriggerDetails
{
    winrt::guid LineId() const;
    int32_t VoicemailCount() const;
    hstring OperatorMessage() const;
};
template <> struct consume<Windows::ApplicationModel::Calls::Background::IPhoneNewVoicemailMessageTriggerDetails> { template <typename D> using type = consume_Windows_ApplicationModel_Calls_Background_IPhoneNewVoicemailMessageTriggerDetails<D>; };

}
