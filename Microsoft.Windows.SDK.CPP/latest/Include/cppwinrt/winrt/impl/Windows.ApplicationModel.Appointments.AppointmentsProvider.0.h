﻿// C++/WinRT v1.0.190111.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Appointments {

struct Appointment;

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Appointments::AppointmentsProvider {

struct IAddAppointmentOperation;
struct IAppointmentsProviderLaunchActionVerbsStatics;
struct IAppointmentsProviderLaunchActionVerbsStatics2;
struct IRemoveAppointmentOperation;
struct IReplaceAppointmentOperation;
struct AddAppointmentOperation;
struct AppointmentsProviderLaunchActionVerbs;
struct RemoveAppointmentOperation;
struct ReplaceAppointmentOperation;

}

namespace winrt::impl {

template <> struct category<Windows::ApplicationModel::Appointments::AppointmentsProvider::IAddAppointmentOperation>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Appointments::AppointmentsProvider::IAppointmentsProviderLaunchActionVerbsStatics>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Appointments::AppointmentsProvider::IAppointmentsProviderLaunchActionVerbsStatics2>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Appointments::AppointmentsProvider::IRemoveAppointmentOperation>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Appointments::AppointmentsProvider::IReplaceAppointmentOperation>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Appointments::AppointmentsProvider::AddAppointmentOperation>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Appointments::AppointmentsProvider::AppointmentsProviderLaunchActionVerbs>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Appointments::AppointmentsProvider::RemoveAppointmentOperation>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Appointments::AppointmentsProvider::ReplaceAppointmentOperation>{ using type = class_category; };
template <> struct name<Windows::ApplicationModel::Appointments::AppointmentsProvider::IAddAppointmentOperation>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.AppointmentsProvider.IAddAppointmentOperation" }; };
template <> struct name<Windows::ApplicationModel::Appointments::AppointmentsProvider::IAppointmentsProviderLaunchActionVerbsStatics>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.AppointmentsProvider.IAppointmentsProviderLaunchActionVerbsStatics" }; };
template <> struct name<Windows::ApplicationModel::Appointments::AppointmentsProvider::IAppointmentsProviderLaunchActionVerbsStatics2>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.AppointmentsProvider.IAppointmentsProviderLaunchActionVerbsStatics2" }; };
template <> struct name<Windows::ApplicationModel::Appointments::AppointmentsProvider::IRemoveAppointmentOperation>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.AppointmentsProvider.IRemoveAppointmentOperation" }; };
template <> struct name<Windows::ApplicationModel::Appointments::AppointmentsProvider::IReplaceAppointmentOperation>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.AppointmentsProvider.IReplaceAppointmentOperation" }; };
template <> struct name<Windows::ApplicationModel::Appointments::AppointmentsProvider::AddAppointmentOperation>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.AppointmentsProvider.AddAppointmentOperation" }; };
template <> struct name<Windows::ApplicationModel::Appointments::AppointmentsProvider::AppointmentsProviderLaunchActionVerbs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.AppointmentsProvider.AppointmentsProviderLaunchActionVerbs" }; };
template <> struct name<Windows::ApplicationModel::Appointments::AppointmentsProvider::RemoveAppointmentOperation>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.AppointmentsProvider.RemoveAppointmentOperation" }; };
template <> struct name<Windows::ApplicationModel::Appointments::AppointmentsProvider::ReplaceAppointmentOperation>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.AppointmentsProvider.ReplaceAppointmentOperation" }; };
template <> struct guid_storage<Windows::ApplicationModel::Appointments::AppointmentsProvider::IAddAppointmentOperation>{ static constexpr guid value{ 0xEC4A9AF3,0x620D,0x4C69,{ 0xAD,0xD7,0x97,0x94,0xE9,0x18,0x08,0x1F } }; };
template <> struct guid_storage<Windows::ApplicationModel::Appointments::AppointmentsProvider::IAppointmentsProviderLaunchActionVerbsStatics>{ static constexpr guid value{ 0x36DBBA28,0x9E2E,0x49C6,{ 0x8E,0xF7,0x3A,0xB7,0xA5,0xDC,0xC8,0xB8 } }; };
template <> struct guid_storage<Windows::ApplicationModel::Appointments::AppointmentsProvider::IAppointmentsProviderLaunchActionVerbsStatics2>{ static constexpr guid value{ 0xEF9049A4,0xAF21,0x473C,{ 0x88,0xDC,0x76,0xCD,0x89,0xF6,0x0C,0xA5 } }; };
template <> struct guid_storage<Windows::ApplicationModel::Appointments::AppointmentsProvider::IRemoveAppointmentOperation>{ static constexpr guid value{ 0x08B66ABA,0xFE33,0x46CD,{ 0xA5,0x0C,0xA8,0xFF,0xB3,0x26,0x05,0x37 } }; };
template <> struct guid_storage<Windows::ApplicationModel::Appointments::AppointmentsProvider::IReplaceAppointmentOperation>{ static constexpr guid value{ 0xF4903D9B,0x9E61,0x4DE2,{ 0xA7,0x32,0x26,0x87,0xC0,0x7D,0x1D,0xE8 } }; };
template <> struct default_interface<Windows::ApplicationModel::Appointments::AppointmentsProvider::AddAppointmentOperation>{ using type = Windows::ApplicationModel::Appointments::AppointmentsProvider::IAddAppointmentOperation; };
template <> struct default_interface<Windows::ApplicationModel::Appointments::AppointmentsProvider::RemoveAppointmentOperation>{ using type = Windows::ApplicationModel::Appointments::AppointmentsProvider::IRemoveAppointmentOperation; };
template <> struct default_interface<Windows::ApplicationModel::Appointments::AppointmentsProvider::ReplaceAppointmentOperation>{ using type = Windows::ApplicationModel::Appointments::AppointmentsProvider::IReplaceAppointmentOperation; };

template <> struct abi<Windows::ApplicationModel::Appointments::AppointmentsProvider::IAddAppointmentOperation>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_AppointmentInformation(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_SourcePackageFamilyName(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL ReportCompleted(void* itemId) noexcept = 0;
    virtual int32_t WINRT_CALL ReportCanceled() noexcept = 0;
    virtual int32_t WINRT_CALL ReportError(void* value) noexcept = 0;
    virtual int32_t WINRT_CALL DismissUI() noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Appointments::AppointmentsProvider::IAppointmentsProviderLaunchActionVerbsStatics>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_AddAppointment(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_ReplaceAppointment(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_RemoveAppointment(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_ShowTimeFrame(void** value) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Appointments::AppointmentsProvider::IAppointmentsProviderLaunchActionVerbsStatics2>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_ShowAppointmentDetails(void** value) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Appointments::AppointmentsProvider::IRemoveAppointmentOperation>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_AppointmentId(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_InstanceStartDate(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_SourcePackageFamilyName(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL ReportCompleted() noexcept = 0;
    virtual int32_t WINRT_CALL ReportCanceled() noexcept = 0;
    virtual int32_t WINRT_CALL ReportError(void* value) noexcept = 0;
    virtual int32_t WINRT_CALL DismissUI() noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Appointments::AppointmentsProvider::IReplaceAppointmentOperation>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_AppointmentId(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_AppointmentInformation(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_InstanceStartDate(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_SourcePackageFamilyName(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL ReportCompleted(void* itemId) noexcept = 0;
    virtual int32_t WINRT_CALL ReportCanceled() noexcept = 0;
    virtual int32_t WINRT_CALL ReportError(void* value) noexcept = 0;
    virtual int32_t WINRT_CALL DismissUI() noexcept = 0;
};};

template <typename D>
struct consume_Windows_ApplicationModel_Appointments_AppointmentsProvider_IAddAppointmentOperation
{
    Windows::ApplicationModel::Appointments::Appointment AppointmentInformation() const;
    hstring SourcePackageFamilyName() const;
    void ReportCompleted(param::hstring const& itemId) const;
    void ReportCanceled() const;
    void ReportError(param::hstring const& value) const;
    void DismissUI() const;
};
template <> struct consume<Windows::ApplicationModel::Appointments::AppointmentsProvider::IAddAppointmentOperation> { template <typename D> using type = consume_Windows_ApplicationModel_Appointments_AppointmentsProvider_IAddAppointmentOperation<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Appointments_AppointmentsProvider_IAppointmentsProviderLaunchActionVerbsStatics
{
    hstring AddAppointment() const;
    hstring ReplaceAppointment() const;
    hstring RemoveAppointment() const;
    hstring ShowTimeFrame() const;
};
template <> struct consume<Windows::ApplicationModel::Appointments::AppointmentsProvider::IAppointmentsProviderLaunchActionVerbsStatics> { template <typename D> using type = consume_Windows_ApplicationModel_Appointments_AppointmentsProvider_IAppointmentsProviderLaunchActionVerbsStatics<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Appointments_AppointmentsProvider_IAppointmentsProviderLaunchActionVerbsStatics2
{
    hstring ShowAppointmentDetails() const;
};
template <> struct consume<Windows::ApplicationModel::Appointments::AppointmentsProvider::IAppointmentsProviderLaunchActionVerbsStatics2> { template <typename D> using type = consume_Windows_ApplicationModel_Appointments_AppointmentsProvider_IAppointmentsProviderLaunchActionVerbsStatics2<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Appointments_AppointmentsProvider_IRemoveAppointmentOperation
{
    hstring AppointmentId() const;
    Windows::Foundation::IReference<Windows::Foundation::DateTime> InstanceStartDate() const;
    hstring SourcePackageFamilyName() const;
    void ReportCompleted() const;
    void ReportCanceled() const;
    void ReportError(param::hstring const& value) const;
    void DismissUI() const;
};
template <> struct consume<Windows::ApplicationModel::Appointments::AppointmentsProvider::IRemoveAppointmentOperation> { template <typename D> using type = consume_Windows_ApplicationModel_Appointments_AppointmentsProvider_IRemoveAppointmentOperation<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Appointments_AppointmentsProvider_IReplaceAppointmentOperation
{
    hstring AppointmentId() const;
    Windows::ApplicationModel::Appointments::Appointment AppointmentInformation() const;
    Windows::Foundation::IReference<Windows::Foundation::DateTime> InstanceStartDate() const;
    hstring SourcePackageFamilyName() const;
    void ReportCompleted(param::hstring const& itemId) const;
    void ReportCanceled() const;
    void ReportError(param::hstring const& value) const;
    void DismissUI() const;
};
template <> struct consume<Windows::ApplicationModel::Appointments::AppointmentsProvider::IReplaceAppointmentOperation> { template <typename D> using type = consume_Windows_ApplicationModel_Appointments_AppointmentsProvider_IReplaceAppointmentOperation<D>; };

}
