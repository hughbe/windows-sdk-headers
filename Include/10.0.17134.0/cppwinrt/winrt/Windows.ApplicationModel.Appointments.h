// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.System.2.h"
#include "winrt/impl/Windows.UI.2.h"
#include "winrt/impl/Windows.UI.Popups.2.h"
#include "winrt/impl/Windows.ApplicationModel.Appointments.2.h"
#include "winrt/Windows.ApplicationModel.h"

namespace winrt::impl {

template <typename D> Windows::Foundation::DateTime consume_Windows_ApplicationModel_Appointments_IAppointment<D>::StartTime() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointment)->get_StartTime(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Appointments_IAppointment<D>::StartTime(Windows::Foundation::DateTime const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointment)->put_StartTime(get_abi(value)));
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_ApplicationModel_Appointments_IAppointment<D>::Duration() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointment)->get_Duration(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Appointments_IAppointment<D>::Duration(Windows::Foundation::TimeSpan const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointment)->put_Duration(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Appointments_IAppointment<D>::Location() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointment)->get_Location(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Appointments_IAppointment<D>::Location(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointment)->put_Location(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Appointments_IAppointment<D>::Subject() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointment)->get_Subject(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Appointments_IAppointment<D>::Subject(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointment)->put_Subject(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Appointments_IAppointment<D>::Details() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointment)->get_Details(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Appointments_IAppointment<D>::Details(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointment)->put_Details(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::TimeSpan> consume_Windows_ApplicationModel_Appointments_IAppointment<D>::Reminder() const
{
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointment)->get_Reminder(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Appointments_IAppointment<D>::Reminder(optional<Windows::Foundation::TimeSpan> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointment)->put_Reminder(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::Appointments::AppointmentOrganizer consume_Windows_ApplicationModel_Appointments_IAppointment<D>::Organizer() const
{
    Windows::ApplicationModel::Appointments::AppointmentOrganizer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointment)->get_Organizer(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Appointments_IAppointment<D>::Organizer(Windows::ApplicationModel::Appointments::AppointmentOrganizer const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointment)->put_Organizer(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Appointments::AppointmentInvitee> consume_Windows_ApplicationModel_Appointments_IAppointment<D>::Invitees() const
{
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Appointments::AppointmentInvitee> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointment)->get_Invitees(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Appointments::AppointmentRecurrence consume_Windows_ApplicationModel_Appointments_IAppointment<D>::Recurrence() const
{
    Windows::ApplicationModel::Appointments::AppointmentRecurrence value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointment)->get_Recurrence(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Appointments_IAppointment<D>::Recurrence(Windows::ApplicationModel::Appointments::AppointmentRecurrence const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointment)->put_Recurrence(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::Appointments::AppointmentBusyStatus consume_Windows_ApplicationModel_Appointments_IAppointment<D>::BusyStatus() const
{
    Windows::ApplicationModel::Appointments::AppointmentBusyStatus value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointment)->get_BusyStatus(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Appointments_IAppointment<D>::BusyStatus(Windows::ApplicationModel::Appointments::AppointmentBusyStatus const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointment)->put_BusyStatus(get_abi(value)));
}

template <typename D> bool consume_Windows_ApplicationModel_Appointments_IAppointment<D>::AllDay() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointment)->get_AllDay(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Appointments_IAppointment<D>::AllDay(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointment)->put_AllDay(value));
}

template <typename D> Windows::ApplicationModel::Appointments::AppointmentSensitivity consume_Windows_ApplicationModel_Appointments_IAppointment<D>::Sensitivity() const
{
    Windows::ApplicationModel::Appointments::AppointmentSensitivity value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointment)->get_Sensitivity(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Appointments_IAppointment<D>::Sensitivity(Windows::ApplicationModel::Appointments::AppointmentSensitivity const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointment)->put_Sensitivity(get_abi(value)));
}

template <typename D> Windows::Foundation::Uri consume_Windows_ApplicationModel_Appointments_IAppointment<D>::Uri() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointment)->get_Uri(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Appointments_IAppointment<D>::Uri(Windows::Foundation::Uri const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointment)->put_Uri(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Appointments_IAppointment2<D>::LocalId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointment2)->get_LocalId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Appointments_IAppointment2<D>::CalendarId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointment2)->get_CalendarId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Appointments_IAppointment2<D>::RoamingId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointment2)->get_RoamingId(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Appointments_IAppointment2<D>::RoamingId(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointment2)->put_RoamingId(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> consume_Windows_ApplicationModel_Appointments_IAppointment2<D>::OriginalStartTime() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointment2)->get_OriginalStartTime(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_Appointments_IAppointment2<D>::IsResponseRequested() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointment2)->get_IsResponseRequested(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Appointments_IAppointment2<D>::IsResponseRequested(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointment2)->put_IsResponseRequested(value));
}

template <typename D> bool consume_Windows_ApplicationModel_Appointments_IAppointment2<D>::AllowNewTimeProposal() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointment2)->get_AllowNewTimeProposal(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Appointments_IAppointment2<D>::AllowNewTimeProposal(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointment2)->put_AllowNewTimeProposal(value));
}

template <typename D> hstring consume_Windows_ApplicationModel_Appointments_IAppointment2<D>::OnlineMeetingLink() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointment2)->get_OnlineMeetingLink(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Appointments_IAppointment2<D>::OnlineMeetingLink(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointment2)->put_OnlineMeetingLink(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> consume_Windows_ApplicationModel_Appointments_IAppointment2<D>::ReplyTime() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointment2)->get_ReplyTime(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Appointments_IAppointment2<D>::ReplyTime(optional<Windows::Foundation::DateTime> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointment2)->put_ReplyTime(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::Appointments::AppointmentParticipantResponse consume_Windows_ApplicationModel_Appointments_IAppointment2<D>::UserResponse() const
{
    Windows::ApplicationModel::Appointments::AppointmentParticipantResponse value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointment2)->get_UserResponse(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Appointments_IAppointment2<D>::UserResponse(Windows::ApplicationModel::Appointments::AppointmentParticipantResponse const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointment2)->put_UserResponse(get_abi(value)));
}

template <typename D> bool consume_Windows_ApplicationModel_Appointments_IAppointment2<D>::HasInvitees() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointment2)->get_HasInvitees(&value));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_Appointments_IAppointment2<D>::IsCanceledMeeting() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointment2)->get_IsCanceledMeeting(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Appointments_IAppointment2<D>::IsCanceledMeeting(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointment2)->put_IsCanceledMeeting(value));
}

template <typename D> bool consume_Windows_ApplicationModel_Appointments_IAppointment2<D>::IsOrganizedByUser() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointment2)->get_IsOrganizedByUser(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Appointments_IAppointment2<D>::IsOrganizedByUser(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointment2)->put_IsOrganizedByUser(value));
}

template <typename D> uint64_t consume_Windows_ApplicationModel_Appointments_IAppointment3<D>::ChangeNumber() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointment3)->get_ChangeNumber(&value));
    return value;
}

template <typename D> uint64_t consume_Windows_ApplicationModel_Appointments_IAppointment3<D>::RemoteChangeNumber() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointment3)->get_RemoteChangeNumber(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Appointments_IAppointment3<D>::RemoteChangeNumber(uint64_t value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointment3)->put_RemoteChangeNumber(value));
}

template <typename D> Windows::ApplicationModel::Appointments::AppointmentDetailsKind consume_Windows_ApplicationModel_Appointments_IAppointment3<D>::DetailsKind() const
{
    Windows::ApplicationModel::Appointments::AppointmentDetailsKind value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointment3)->get_DetailsKind(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Appointments_IAppointment3<D>::DetailsKind(Windows::ApplicationModel::Appointments::AppointmentDetailsKind const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointment3)->put_DetailsKind(get_abi(value)));
}

template <typename D> Windows::UI::Color consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar<D>::DisplayColor() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar)->get_DisplayColor(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar<D>::DisplayName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar)->get_DisplayName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar<D>::DisplayName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar)->put_DisplayName(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar<D>::LocalId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar)->get_LocalId(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar<D>::IsHidden() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar)->get_IsHidden(&value));
    return value;
}

template <typename D> Windows::ApplicationModel::Appointments::AppointmentCalendarOtherAppReadAccess consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar<D>::OtherAppReadAccess() const
{
    Windows::ApplicationModel::Appointments::AppointmentCalendarOtherAppReadAccess value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar)->get_OtherAppReadAccess(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar<D>::OtherAppReadAccess(Windows::ApplicationModel::Appointments::AppointmentCalendarOtherAppReadAccess const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar)->put_OtherAppReadAccess(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::Appointments::AppointmentCalendarOtherAppWriteAccess consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar<D>::OtherAppWriteAccess() const
{
    Windows::ApplicationModel::Appointments::AppointmentCalendarOtherAppWriteAccess value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar)->get_OtherAppWriteAccess(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar<D>::OtherAppWriteAccess(Windows::ApplicationModel::Appointments::AppointmentCalendarOtherAppWriteAccess const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar)->put_OtherAppWriteAccess(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar<D>::SourceDisplayName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar)->get_SourceDisplayName(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Appointments::AppointmentSummaryCardView consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar<D>::SummaryCardView() const
{
    Windows::ApplicationModel::Appointments::AppointmentSummaryCardView value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar)->get_SummaryCardView(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar<D>::SummaryCardView(Windows::ApplicationModel::Appointments::AppointmentSummaryCardView const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar)->put_SummaryCardView(get_abi(value)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::Appointment>> consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar<D>::FindAppointmentsAsync(Windows::Foundation::DateTime const& rangeStart, Windows::Foundation::TimeSpan const& rangeLength) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::Appointment>> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar)->FindAppointmentsAsync(get_abi(rangeStart), get_abi(rangeLength), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::Appointment>> consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar<D>::FindAppointmentsAsync(Windows::Foundation::DateTime const& rangeStart, Windows::Foundation::TimeSpan const& rangeLength, Windows::ApplicationModel::Appointments::FindAppointmentsOptions const& options) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::Appointment>> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar)->FindAppointmentsAsyncWithOptions(get_abi(rangeStart), get_abi(rangeLength), get_abi(options), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::AppointmentException>> consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar<D>::FindExceptionsFromMasterAsync(param::hstring const& masterLocalId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::AppointmentException>> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar)->FindExceptionsFromMasterAsync(get_abi(masterLocalId), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::Appointment>> consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar<D>::FindAllInstancesAsync(param::hstring const& masterLocalId, Windows::Foundation::DateTime const& rangeStart, Windows::Foundation::TimeSpan const& rangeLength) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::Appointment>> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar)->FindAllInstancesAsync(get_abi(masterLocalId), get_abi(rangeStart), get_abi(rangeLength), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::Appointment>> consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar<D>::FindAllInstancesAsync(param::hstring const& masterLocalId, Windows::Foundation::DateTime const& rangeStart, Windows::Foundation::TimeSpan const& rangeLength, Windows::ApplicationModel::Appointments::FindAppointmentsOptions const& pOptions) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::Appointment>> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar)->FindAllInstancesAsyncWithOptions(get_abi(masterLocalId), get_abi(rangeStart), get_abi(rangeLength), get_abi(pOptions), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::Appointment> consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar<D>::GetAppointmentAsync(param::hstring const& localId) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::Appointment> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar)->GetAppointmentAsync(get_abi(localId), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::Appointment> consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar<D>::GetAppointmentInstanceAsync(param::hstring const& localId, Windows::Foundation::DateTime const& instanceStartTime) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::Appointment> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar)->GetAppointmentInstanceAsync(get_abi(localId), get_abi(instanceStartTime), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::Appointment>> consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar<D>::FindUnexpandedAppointmentsAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::Appointment>> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar)->FindUnexpandedAppointmentsAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::Appointment>> consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar<D>::FindUnexpandedAppointmentsAsync(Windows::ApplicationModel::Appointments::FindAppointmentsOptions const& options) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::Appointment>> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar)->FindUnexpandedAppointmentsAsyncWithOptions(get_abi(options), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar<D>::DeleteAsync() const
{
    Windows::Foundation::IAsyncAction asyncAction{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar)->DeleteAsync(put_abi(asyncAction)));
    return asyncAction;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar<D>::SaveAsync() const
{
    Windows::Foundation::IAsyncAction asyncAction{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar)->SaveAsync(put_abi(asyncAction)));
    return asyncAction;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar<D>::DeleteAppointmentAsync(param::hstring const& localId) const
{
    Windows::Foundation::IAsyncAction asyncAction{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar)->DeleteAppointmentAsync(get_abi(localId), put_abi(asyncAction)));
    return asyncAction;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar<D>::DeleteAppointmentInstanceAsync(param::hstring const& localId, Windows::Foundation::DateTime const& instanceStartTime) const
{
    Windows::Foundation::IAsyncAction asyncAction{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar)->DeleteAppointmentInstanceAsync(get_abi(localId), get_abi(instanceStartTime), put_abi(asyncAction)));
    return asyncAction;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar<D>::SaveAppointmentAsync(Windows::ApplicationModel::Appointments::Appointment const& pAppointment) const
{
    Windows::Foundation::IAsyncAction asyncAction{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar)->SaveAppointmentAsync(get_abi(pAppointment), put_abi(asyncAction)));
    return asyncAction;
}

template <typename D> Windows::ApplicationModel::Appointments::AppointmentCalendarSyncManager consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar2<D>::SyncManager() const
{
    Windows::ApplicationModel::Appointments::AppointmentCalendarSyncManager value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar2)->get_SyncManager(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar2<D>::RemoteId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar2)->get_RemoteId(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar2<D>::RemoteId(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar2)->put_RemoteId(get_abi(value)));
}

template <typename D> void consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar2<D>::DisplayColor(Windows::UI::Color const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar2)->put_DisplayColor(get_abi(value)));
}

template <typename D> void consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar2<D>::IsHidden(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar2)->put_IsHidden(value));
}

template <typename D> hstring consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar2<D>::UserDataAccountId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar2)->get_UserDataAccountId(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar2<D>::CanCreateOrUpdateAppointments() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar2)->get_CanCreateOrUpdateAppointments(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar2<D>::CanCreateOrUpdateAppointments(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar2)->put_CanCreateOrUpdateAppointments(value));
}

template <typename D> bool consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar2<D>::CanCancelMeetings() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar2)->get_CanCancelMeetings(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar2<D>::CanCancelMeetings(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar2)->put_CanCancelMeetings(value));
}

template <typename D> bool consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar2<D>::CanForwardMeetings() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar2)->get_CanForwardMeetings(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar2<D>::CanForwardMeetings(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar2)->put_CanForwardMeetings(value));
}

template <typename D> bool consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar2<D>::CanProposeNewTimeForMeetings() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar2)->get_CanProposeNewTimeForMeetings(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar2<D>::CanProposeNewTimeForMeetings(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar2)->put_CanProposeNewTimeForMeetings(value));
}

template <typename D> bool consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar2<D>::CanUpdateMeetingResponses() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar2)->get_CanUpdateMeetingResponses(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar2<D>::CanUpdateMeetingResponses(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar2)->put_CanUpdateMeetingResponses(value));
}

template <typename D> bool consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar2<D>::CanNotifyInvitees() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar2)->get_CanNotifyInvitees(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar2<D>::CanNotifyInvitees(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar2)->put_CanNotifyInvitees(value));
}

template <typename D> bool consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar2<D>::MustNofityInvitees() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar2)->get_MustNofityInvitees(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar2<D>::MustNofityInvitees(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar2)->put_MustNofityInvitees(value));
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar2<D>::TryCreateOrUpdateAppointmentAsync(Windows::ApplicationModel::Appointments::Appointment const& appointment, bool notifyInvitees) const
{
    Windows::Foundation::IAsyncOperation<bool> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar2)->TryCreateOrUpdateAppointmentAsync(get_abi(appointment), notifyInvitees, put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar2<D>::TryCancelMeetingAsync(Windows::ApplicationModel::Appointments::Appointment const& meeting, param::hstring const& subject, param::hstring const& comment, bool notifyInvitees) const
{
    Windows::Foundation::IAsyncOperation<bool> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar2)->TryCancelMeetingAsync(get_abi(meeting), get_abi(subject), get_abi(comment), notifyInvitees, put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar2<D>::TryForwardMeetingAsync(Windows::ApplicationModel::Appointments::Appointment const& meeting, param::async_iterable<Windows::ApplicationModel::Appointments::AppointmentInvitee> const& invitees, param::hstring const& subject, param::hstring const& forwardHeader, param::hstring const& comment) const
{
    Windows::Foundation::IAsyncOperation<bool> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar2)->TryForwardMeetingAsync(get_abi(meeting), get_abi(invitees), get_abi(subject), get_abi(forwardHeader), get_abi(comment), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar2<D>::TryProposeNewTimeForMeetingAsync(Windows::ApplicationModel::Appointments::Appointment const& meeting, Windows::Foundation::DateTime const& newStartTime, Windows::Foundation::TimeSpan const& newDuration, param::hstring const& subject, param::hstring const& comment) const
{
    Windows::Foundation::IAsyncOperation<bool> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar2)->TryProposeNewTimeForMeetingAsync(get_abi(meeting), get_abi(newStartTime), get_abi(newDuration), get_abi(subject), get_abi(comment), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar2<D>::TryUpdateMeetingResponseAsync(Windows::ApplicationModel::Appointments::Appointment const& meeting, Windows::ApplicationModel::Appointments::AppointmentParticipantResponse const& response, param::hstring const& subject, param::hstring const& comment, bool sendUpdate) const
{
    Windows::Foundation::IAsyncOperation<bool> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar2)->TryUpdateMeetingResponseAsync(get_abi(meeting), get_abi(response), get_abi(subject), get_abi(comment), sendUpdate, put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar3<D>::RegisterSyncManagerAsync() const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendar3)->RegisterSyncManagerAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Appointments::AppointmentCalendarSyncStatus consume_Windows_ApplicationModel_Appointments_IAppointmentCalendarSyncManager<D>::Status() const
{
    Windows::ApplicationModel::Appointments::AppointmentCalendarSyncStatus value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager)->get_Status(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_ApplicationModel_Appointments_IAppointmentCalendarSyncManager<D>::LastSuccessfulSyncTime() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager)->get_LastSuccessfulSyncTime(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_ApplicationModel_Appointments_IAppointmentCalendarSyncManager<D>::LastAttemptedSyncTime() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager)->get_LastAttemptedSyncTime(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_ApplicationModel_Appointments_IAppointmentCalendarSyncManager<D>::SyncAsync() const
{
    Windows::Foundation::IAsyncOperation<bool> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager)->SyncAsync(put_abi(result)));
    return result;
}

template <typename D> event_token consume_Windows_ApplicationModel_Appointments_IAppointmentCalendarSyncManager<D>::SyncStatusChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Appointments::AppointmentCalendarSyncManager, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager)->add_SyncStatusChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager> consume_Windows_ApplicationModel_Appointments_IAppointmentCalendarSyncManager<D>::SyncStatusChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Appointments::AppointmentCalendarSyncManager, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager>(this, &abi_t<Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager>::remove_SyncStatusChanged, SyncStatusChanged(handler));
}

template <typename D> void consume_Windows_ApplicationModel_Appointments_IAppointmentCalendarSyncManager<D>::SyncStatusChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager)->remove_SyncStatusChanged(get_abi(token)));
}

template <typename D> void consume_Windows_ApplicationModel_Appointments_IAppointmentCalendarSyncManager2<D>::Status(Windows::ApplicationModel::Appointments::AppointmentCalendarSyncStatus const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager2)->put_Status(get_abi(value)));
}

template <typename D> void consume_Windows_ApplicationModel_Appointments_IAppointmentCalendarSyncManager2<D>::LastSuccessfulSyncTime(Windows::Foundation::DateTime const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager2)->put_LastSuccessfulSyncTime(get_abi(value)));
}

template <typename D> void consume_Windows_ApplicationModel_Appointments_IAppointmentCalendarSyncManager2<D>::LastAttemptedSyncTime(Windows::Foundation::DateTime const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager2)->put_LastAttemptedSyncTime(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::Appointments::AppointmentConflictType consume_Windows_ApplicationModel_Appointments_IAppointmentConflictResult<D>::Type() const
{
    Windows::ApplicationModel::Appointments::AppointmentConflictType value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentConflictResult)->get_Type(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_ApplicationModel_Appointments_IAppointmentConflictResult<D>::Date() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentConflictResult)->get_Date(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Appointments::Appointment consume_Windows_ApplicationModel_Appointments_IAppointmentException<D>::Appointment() const
{
    Windows::ApplicationModel::Appointments::Appointment value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentException)->get_Appointment(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> consume_Windows_ApplicationModel_Appointments_IAppointmentException<D>::ExceptionProperties() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentException)->get_ExceptionProperties(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_Appointments_IAppointmentException<D>::IsDeleted() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentException)->get_IsDeleted(&value));
    return value;
}

template <typename D> Windows::ApplicationModel::Appointments::AppointmentParticipantRole consume_Windows_ApplicationModel_Appointments_IAppointmentInvitee<D>::Role() const
{
    Windows::ApplicationModel::Appointments::AppointmentParticipantRole value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentInvitee)->get_Role(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Appointments_IAppointmentInvitee<D>::Role(Windows::ApplicationModel::Appointments::AppointmentParticipantRole const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentInvitee)->put_Role(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::Appointments::AppointmentParticipantResponse consume_Windows_ApplicationModel_Appointments_IAppointmentInvitee<D>::Response() const
{
    Windows::ApplicationModel::Appointments::AppointmentParticipantResponse value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentInvitee)->get_Response(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Appointments_IAppointmentInvitee<D>::Response(Windows::ApplicationModel::Appointments::AppointmentParticipantResponse const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentInvitee)->put_Response(get_abi(value)));
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> consume_Windows_ApplicationModel_Appointments_IAppointmentManagerForUser<D>::ShowAddAppointmentAsync(Windows::ApplicationModel::Appointments::Appointment const& appointment, Windows::Foundation::Rect const& selection) const
{
    Windows::Foundation::IAsyncOperation<hstring> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentManagerForUser)->ShowAddAppointmentAsync(get_abi(appointment), get_abi(selection), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> consume_Windows_ApplicationModel_Appointments_IAppointmentManagerForUser<D>::ShowAddAppointmentAsync(Windows::ApplicationModel::Appointments::Appointment const& appointment, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement) const
{
    Windows::Foundation::IAsyncOperation<hstring> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentManagerForUser)->ShowAddAppointmentWithPlacementAsync(get_abi(appointment), get_abi(selection), get_abi(preferredPlacement), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> consume_Windows_ApplicationModel_Appointments_IAppointmentManagerForUser<D>::ShowReplaceAppointmentAsync(param::hstring const& appointmentId, Windows::ApplicationModel::Appointments::Appointment const& appointment, Windows::Foundation::Rect const& selection) const
{
    Windows::Foundation::IAsyncOperation<hstring> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentManagerForUser)->ShowReplaceAppointmentAsync(get_abi(appointmentId), get_abi(appointment), get_abi(selection), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> consume_Windows_ApplicationModel_Appointments_IAppointmentManagerForUser<D>::ShowReplaceAppointmentAsync(param::hstring const& appointmentId, Windows::ApplicationModel::Appointments::Appointment const& appointment, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement) const
{
    Windows::Foundation::IAsyncOperation<hstring> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentManagerForUser)->ShowReplaceAppointmentWithPlacementAsync(get_abi(appointmentId), get_abi(appointment), get_abi(selection), get_abi(preferredPlacement), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> consume_Windows_ApplicationModel_Appointments_IAppointmentManagerForUser<D>::ShowReplaceAppointmentAsync(param::hstring const& appointmentId, Windows::ApplicationModel::Appointments::Appointment const& appointment, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement, Windows::Foundation::DateTime const& instanceStartDate) const
{
    Windows::Foundation::IAsyncOperation<hstring> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentManagerForUser)->ShowReplaceAppointmentWithPlacementAndDateAsync(get_abi(appointmentId), get_abi(appointment), get_abi(selection), get_abi(preferredPlacement), get_abi(instanceStartDate), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_ApplicationModel_Appointments_IAppointmentManagerForUser<D>::ShowRemoveAppointmentAsync(param::hstring const& appointmentId, Windows::Foundation::Rect const& selection) const
{
    Windows::Foundation::IAsyncOperation<bool> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentManagerForUser)->ShowRemoveAppointmentAsync(get_abi(appointmentId), get_abi(selection), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_ApplicationModel_Appointments_IAppointmentManagerForUser<D>::ShowRemoveAppointmentAsync(param::hstring const& appointmentId, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement) const
{
    Windows::Foundation::IAsyncOperation<bool> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentManagerForUser)->ShowRemoveAppointmentWithPlacementAsync(get_abi(appointmentId), get_abi(selection), get_abi(preferredPlacement), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_ApplicationModel_Appointments_IAppointmentManagerForUser<D>::ShowRemoveAppointmentAsync(param::hstring const& appointmentId, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement, Windows::Foundation::DateTime const& instanceStartDate) const
{
    Windows::Foundation::IAsyncOperation<bool> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentManagerForUser)->ShowRemoveAppointmentWithPlacementAndDateAsync(get_abi(appointmentId), get_abi(selection), get_abi(preferredPlacement), get_abi(instanceStartDate), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Appointments_IAppointmentManagerForUser<D>::ShowTimeFrameAsync(Windows::Foundation::DateTime const& timeToShow, Windows::Foundation::TimeSpan const& duration) const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentManagerForUser)->ShowTimeFrameAsync(get_abi(timeToShow), get_abi(duration), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Appointments_IAppointmentManagerForUser<D>::ShowAppointmentDetailsAsync(param::hstring const& appointmentId) const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentManagerForUser)->ShowAppointmentDetailsAsync(get_abi(appointmentId), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Appointments_IAppointmentManagerForUser<D>::ShowAppointmentDetailsAsync(param::hstring const& appointmentId, Windows::Foundation::DateTime const& instanceStartDate) const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentManagerForUser)->ShowAppointmentDetailsWithDateAsync(get_abi(appointmentId), get_abi(instanceStartDate), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> consume_Windows_ApplicationModel_Appointments_IAppointmentManagerForUser<D>::ShowEditNewAppointmentAsync(Windows::ApplicationModel::Appointments::Appointment const& appointment) const
{
    Windows::Foundation::IAsyncOperation<hstring> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentManagerForUser)->ShowEditNewAppointmentAsync(get_abi(appointment), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::AppointmentStore> consume_Windows_ApplicationModel_Appointments_IAppointmentManagerForUser<D>::RequestStoreAsync(Windows::ApplicationModel::Appointments::AppointmentStoreAccessType const& options) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::AppointmentStore> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentManagerForUser)->RequestStoreAsync(get_abi(options), put_abi(result)));
    return result;
}

template <typename D> Windows::System::User consume_Windows_ApplicationModel_Appointments_IAppointmentManagerForUser<D>::User() const
{
    Windows::System::User value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentManagerForUser)->get_User(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> consume_Windows_ApplicationModel_Appointments_IAppointmentManagerStatics<D>::ShowAddAppointmentAsync(Windows::ApplicationModel::Appointments::Appointment const& appointment, Windows::Foundation::Rect const& selection) const
{
    Windows::Foundation::IAsyncOperation<hstring> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentManagerStatics)->ShowAddAppointmentAsync(get_abi(appointment), get_abi(selection), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> consume_Windows_ApplicationModel_Appointments_IAppointmentManagerStatics<D>::ShowAddAppointmentAsync(Windows::ApplicationModel::Appointments::Appointment const& appointment, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement) const
{
    Windows::Foundation::IAsyncOperation<hstring> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentManagerStatics)->ShowAddAppointmentWithPlacementAsync(get_abi(appointment), get_abi(selection), get_abi(preferredPlacement), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> consume_Windows_ApplicationModel_Appointments_IAppointmentManagerStatics<D>::ShowReplaceAppointmentAsync(param::hstring const& appointmentId, Windows::ApplicationModel::Appointments::Appointment const& appointment, Windows::Foundation::Rect const& selection) const
{
    Windows::Foundation::IAsyncOperation<hstring> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentManagerStatics)->ShowReplaceAppointmentAsync(get_abi(appointmentId), get_abi(appointment), get_abi(selection), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> consume_Windows_ApplicationModel_Appointments_IAppointmentManagerStatics<D>::ShowReplaceAppointmentAsync(param::hstring const& appointmentId, Windows::ApplicationModel::Appointments::Appointment const& appointment, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement) const
{
    Windows::Foundation::IAsyncOperation<hstring> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentManagerStatics)->ShowReplaceAppointmentWithPlacementAsync(get_abi(appointmentId), get_abi(appointment), get_abi(selection), get_abi(preferredPlacement), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> consume_Windows_ApplicationModel_Appointments_IAppointmentManagerStatics<D>::ShowReplaceAppointmentAsync(param::hstring const& appointmentId, Windows::ApplicationModel::Appointments::Appointment const& appointment, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement, Windows::Foundation::DateTime const& instanceStartDate) const
{
    Windows::Foundation::IAsyncOperation<hstring> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentManagerStatics)->ShowReplaceAppointmentWithPlacementAndDateAsync(get_abi(appointmentId), get_abi(appointment), get_abi(selection), get_abi(preferredPlacement), get_abi(instanceStartDate), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_ApplicationModel_Appointments_IAppointmentManagerStatics<D>::ShowRemoveAppointmentAsync(param::hstring const& appointmentId, Windows::Foundation::Rect const& selection) const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentManagerStatics)->ShowRemoveAppointmentAsync(get_abi(appointmentId), get_abi(selection), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_ApplicationModel_Appointments_IAppointmentManagerStatics<D>::ShowRemoveAppointmentAsync(param::hstring const& appointmentId, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement) const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentManagerStatics)->ShowRemoveAppointmentWithPlacementAsync(get_abi(appointmentId), get_abi(selection), get_abi(preferredPlacement), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_ApplicationModel_Appointments_IAppointmentManagerStatics<D>::ShowRemoveAppointmentAsync(param::hstring const& appointmentId, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement, Windows::Foundation::DateTime const& instanceStartDate) const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentManagerStatics)->ShowRemoveAppointmentWithPlacementAndDateAsync(get_abi(appointmentId), get_abi(selection), get_abi(preferredPlacement), get_abi(instanceStartDate), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Appointments_IAppointmentManagerStatics<D>::ShowTimeFrameAsync(Windows::Foundation::DateTime const& timeToShow, Windows::Foundation::TimeSpan const& duration) const
{
    Windows::Foundation::IAsyncAction asyncAction{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentManagerStatics)->ShowTimeFrameAsync(get_abi(timeToShow), get_abi(duration), put_abi(asyncAction)));
    return asyncAction;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Appointments_IAppointmentManagerStatics2<D>::ShowAppointmentDetailsAsync(param::hstring const& appointmentId) const
{
    Windows::Foundation::IAsyncAction asyncAction{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentManagerStatics2)->ShowAppointmentDetailsAsync(get_abi(appointmentId), put_abi(asyncAction)));
    return asyncAction;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Appointments_IAppointmentManagerStatics2<D>::ShowAppointmentDetailsAsync(param::hstring const& appointmentId, Windows::Foundation::DateTime const& instanceStartDate) const
{
    Windows::Foundation::IAsyncAction asyncAction{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentManagerStatics2)->ShowAppointmentDetailsWithDateAsync(get_abi(appointmentId), get_abi(instanceStartDate), put_abi(asyncAction)));
    return asyncAction;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> consume_Windows_ApplicationModel_Appointments_IAppointmentManagerStatics2<D>::ShowEditNewAppointmentAsync(Windows::ApplicationModel::Appointments::Appointment const& appointment) const
{
    Windows::Foundation::IAsyncOperation<hstring> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentManagerStatics2)->ShowEditNewAppointmentAsync(get_abi(appointment), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::AppointmentStore> consume_Windows_ApplicationModel_Appointments_IAppointmentManagerStatics2<D>::RequestStoreAsync(Windows::ApplicationModel::Appointments::AppointmentStoreAccessType const& options) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::AppointmentStore> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentManagerStatics2)->RequestStoreAsync(get_abi(options), put_abi(operation)));
    return operation;
}

template <typename D> Windows::ApplicationModel::Appointments::AppointmentManagerForUser consume_Windows_ApplicationModel_Appointments_IAppointmentManagerStatics3<D>::GetForUser(Windows::System::User const& user) const
{
    Windows::ApplicationModel::Appointments::AppointmentManagerForUser result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentManagerStatics3)->GetForUser(get_abi(user), put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_ApplicationModel_Appointments_IAppointmentParticipant<D>::DisplayName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentParticipant)->get_DisplayName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Appointments_IAppointmentParticipant<D>::DisplayName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentParticipant)->put_DisplayName(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Appointments_IAppointmentParticipant<D>::Address() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentParticipant)->get_Address(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Appointments_IAppointmentParticipant<D>::Address(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentParticipant)->put_Address(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Appointments_IAppointmentPropertiesStatics<D>::Subject() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics)->get_Subject(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Appointments_IAppointmentPropertiesStatics<D>::Location() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics)->get_Location(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Appointments_IAppointmentPropertiesStatics<D>::StartTime() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics)->get_StartTime(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Appointments_IAppointmentPropertiesStatics<D>::Duration() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics)->get_Duration(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Appointments_IAppointmentPropertiesStatics<D>::Reminder() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics)->get_Reminder(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Appointments_IAppointmentPropertiesStatics<D>::BusyStatus() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics)->get_BusyStatus(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Appointments_IAppointmentPropertiesStatics<D>::Sensitivity() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics)->get_Sensitivity(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Appointments_IAppointmentPropertiesStatics<D>::OriginalStartTime() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics)->get_OriginalStartTime(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Appointments_IAppointmentPropertiesStatics<D>::IsResponseRequested() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics)->get_IsResponseRequested(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Appointments_IAppointmentPropertiesStatics<D>::AllowNewTimeProposal() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics)->get_AllowNewTimeProposal(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Appointments_IAppointmentPropertiesStatics<D>::AllDay() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics)->get_AllDay(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Appointments_IAppointmentPropertiesStatics<D>::Details() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics)->get_Details(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Appointments_IAppointmentPropertiesStatics<D>::OnlineMeetingLink() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics)->get_OnlineMeetingLink(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Appointments_IAppointmentPropertiesStatics<D>::ReplyTime() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics)->get_ReplyTime(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Appointments_IAppointmentPropertiesStatics<D>::Organizer() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics)->get_Organizer(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Appointments_IAppointmentPropertiesStatics<D>::UserResponse() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics)->get_UserResponse(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Appointments_IAppointmentPropertiesStatics<D>::HasInvitees() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics)->get_HasInvitees(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Appointments_IAppointmentPropertiesStatics<D>::IsCanceledMeeting() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics)->get_IsCanceledMeeting(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Appointments_IAppointmentPropertiesStatics<D>::IsOrganizedByUser() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics)->get_IsOrganizedByUser(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Appointments_IAppointmentPropertiesStatics<D>::Recurrence() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics)->get_Recurrence(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Appointments_IAppointmentPropertiesStatics<D>::Uri() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics)->get_Uri(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Appointments_IAppointmentPropertiesStatics<D>::Invitees() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics)->get_Invitees(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> consume_Windows_ApplicationModel_Appointments_IAppointmentPropertiesStatics<D>::DefaultProperties() const
{
    Windows::Foundation::Collections::IVector<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics)->get_DefaultProperties(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Appointments_IAppointmentPropertiesStatics2<D>::ChangeNumber() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics2)->get_ChangeNumber(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Appointments_IAppointmentPropertiesStatics2<D>::RemoteChangeNumber() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics2)->get_RemoteChangeNumber(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Appointments_IAppointmentPropertiesStatics2<D>::DetailsKind() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics2)->get_DetailsKind(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Appointments::AppointmentRecurrenceUnit consume_Windows_ApplicationModel_Appointments_IAppointmentRecurrence<D>::Unit() const
{
    Windows::ApplicationModel::Appointments::AppointmentRecurrenceUnit value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentRecurrence)->get_Unit(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Appointments_IAppointmentRecurrence<D>::Unit(Windows::ApplicationModel::Appointments::AppointmentRecurrenceUnit const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentRecurrence)->put_Unit(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<uint32_t> consume_Windows_ApplicationModel_Appointments_IAppointmentRecurrence<D>::Occurrences() const
{
    Windows::Foundation::IReference<uint32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentRecurrence)->get_Occurrences(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Appointments_IAppointmentRecurrence<D>::Occurrences(optional<uint32_t> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentRecurrence)->put_Occurrences(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> consume_Windows_ApplicationModel_Appointments_IAppointmentRecurrence<D>::Until() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentRecurrence)->get_Until(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Appointments_IAppointmentRecurrence<D>::Until(optional<Windows::Foundation::DateTime> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentRecurrence)->put_Until(get_abi(value)));
}

template <typename D> uint32_t consume_Windows_ApplicationModel_Appointments_IAppointmentRecurrence<D>::Interval() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentRecurrence)->get_Interval(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Appointments_IAppointmentRecurrence<D>::Interval(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentRecurrence)->put_Interval(value));
}

template <typename D> Windows::ApplicationModel::Appointments::AppointmentDaysOfWeek consume_Windows_ApplicationModel_Appointments_IAppointmentRecurrence<D>::DaysOfWeek() const
{
    Windows::ApplicationModel::Appointments::AppointmentDaysOfWeek value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentRecurrence)->get_DaysOfWeek(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Appointments_IAppointmentRecurrence<D>::DaysOfWeek(Windows::ApplicationModel::Appointments::AppointmentDaysOfWeek const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentRecurrence)->put_DaysOfWeek(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::Appointments::AppointmentWeekOfMonth consume_Windows_ApplicationModel_Appointments_IAppointmentRecurrence<D>::WeekOfMonth() const
{
    Windows::ApplicationModel::Appointments::AppointmentWeekOfMonth value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentRecurrence)->get_WeekOfMonth(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Appointments_IAppointmentRecurrence<D>::WeekOfMonth(Windows::ApplicationModel::Appointments::AppointmentWeekOfMonth const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentRecurrence)->put_WeekOfMonth(get_abi(value)));
}

template <typename D> uint32_t consume_Windows_ApplicationModel_Appointments_IAppointmentRecurrence<D>::Month() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentRecurrence)->get_Month(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Appointments_IAppointmentRecurrence<D>::Month(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentRecurrence)->put_Month(value));
}

template <typename D> uint32_t consume_Windows_ApplicationModel_Appointments_IAppointmentRecurrence<D>::Day() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentRecurrence)->get_Day(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Appointments_IAppointmentRecurrence<D>::Day(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentRecurrence)->put_Day(value));
}

template <typename D> Windows::ApplicationModel::Appointments::RecurrenceType consume_Windows_ApplicationModel_Appointments_IAppointmentRecurrence2<D>::RecurrenceType() const
{
    Windows::ApplicationModel::Appointments::RecurrenceType value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentRecurrence2)->get_RecurrenceType(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Appointments_IAppointmentRecurrence2<D>::TimeZone() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentRecurrence2)->get_TimeZone(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Appointments_IAppointmentRecurrence2<D>::TimeZone(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentRecurrence2)->put_TimeZone(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_Appointments_IAppointmentRecurrence3<D>::CalendarIdentifier() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentRecurrence3)->get_CalendarIdentifier(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Appointments::AppointmentStoreChangeTracker consume_Windows_ApplicationModel_Appointments_IAppointmentStore<D>::ChangeTracker() const
{
    Windows::ApplicationModel::Appointments::AppointmentStoreChangeTracker value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentStore)->get_ChangeTracker(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::AppointmentCalendar> consume_Windows_ApplicationModel_Appointments_IAppointmentStore<D>::CreateAppointmentCalendarAsync(param::hstring const& name) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::AppointmentCalendar> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentStore)->CreateAppointmentCalendarAsync(get_abi(name), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::AppointmentCalendar> consume_Windows_ApplicationModel_Appointments_IAppointmentStore<D>::GetAppointmentCalendarAsync(param::hstring const& calendarId) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::AppointmentCalendar> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentStore)->GetAppointmentCalendarAsync(get_abi(calendarId), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::Appointment> consume_Windows_ApplicationModel_Appointments_IAppointmentStore<D>::GetAppointmentAsync(param::hstring const& localId) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::Appointment> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentStore)->GetAppointmentAsync(get_abi(localId), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::Appointment> consume_Windows_ApplicationModel_Appointments_IAppointmentStore<D>::GetAppointmentInstanceAsync(param::hstring const& localId, Windows::Foundation::DateTime const& instanceStartTime) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::Appointment> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentStore)->GetAppointmentInstanceAsync(get_abi(localId), get_abi(instanceStartTime), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::AppointmentCalendar>> consume_Windows_ApplicationModel_Appointments_IAppointmentStore<D>::FindAppointmentCalendarsAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::AppointmentCalendar>> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentStore)->FindAppointmentCalendarsAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::AppointmentCalendar>> consume_Windows_ApplicationModel_Appointments_IAppointmentStore<D>::FindAppointmentCalendarsAsync(Windows::ApplicationModel::Appointments::FindAppointmentCalendarsOptions const& options) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::AppointmentCalendar>> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentStore)->FindAppointmentCalendarsAsyncWithOptions(get_abi(options), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::Appointment>> consume_Windows_ApplicationModel_Appointments_IAppointmentStore<D>::FindAppointmentsAsync(Windows::Foundation::DateTime const& rangeStart, Windows::Foundation::TimeSpan const& rangeLength) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::Appointment>> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentStore)->FindAppointmentsAsync(get_abi(rangeStart), get_abi(rangeLength), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::Appointment>> consume_Windows_ApplicationModel_Appointments_IAppointmentStore<D>::FindAppointmentsAsync(Windows::Foundation::DateTime const& rangeStart, Windows::Foundation::TimeSpan const& rangeLength, Windows::ApplicationModel::Appointments::FindAppointmentsOptions const& options) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::Appointment>> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentStore)->FindAppointmentsAsyncWithOptions(get_abi(rangeStart), get_abi(rangeLength), get_abi(options), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::AppointmentConflictResult> consume_Windows_ApplicationModel_Appointments_IAppointmentStore<D>::FindConflictAsync(Windows::ApplicationModel::Appointments::Appointment const& appointment) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::AppointmentConflictResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentStore)->FindConflictAsync(get_abi(appointment), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::AppointmentConflictResult> consume_Windows_ApplicationModel_Appointments_IAppointmentStore<D>::FindConflictAsync(Windows::ApplicationModel::Appointments::Appointment const& appointment, Windows::Foundation::DateTime const& instanceStartTime) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::AppointmentConflictResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentStore)->FindConflictAsyncWithInstanceStart(get_abi(appointment), get_abi(instanceStartTime), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Appointments_IAppointmentStore<D>::MoveAppointmentAsync(Windows::ApplicationModel::Appointments::Appointment const& appointment, Windows::ApplicationModel::Appointments::AppointmentCalendar const& destinationCalendar) const
{
    Windows::Foundation::IAsyncAction asyncAction{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentStore)->MoveAppointmentAsync(get_abi(appointment), get_abi(destinationCalendar), put_abi(asyncAction)));
    return asyncAction;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> consume_Windows_ApplicationModel_Appointments_IAppointmentStore<D>::ShowAddAppointmentAsync(Windows::ApplicationModel::Appointments::Appointment const& appointment, Windows::Foundation::Rect const& selection) const
{
    Windows::Foundation::IAsyncOperation<hstring> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentStore)->ShowAddAppointmentAsync(get_abi(appointment), get_abi(selection), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> consume_Windows_ApplicationModel_Appointments_IAppointmentStore<D>::ShowReplaceAppointmentAsync(param::hstring const& localId, Windows::ApplicationModel::Appointments::Appointment const& appointment, Windows::Foundation::Rect const& selection) const
{
    Windows::Foundation::IAsyncOperation<hstring> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentStore)->ShowReplaceAppointmentAsync(get_abi(localId), get_abi(appointment), get_abi(selection), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> consume_Windows_ApplicationModel_Appointments_IAppointmentStore<D>::ShowReplaceAppointmentAsync(param::hstring const& localId, Windows::ApplicationModel::Appointments::Appointment const& appointment, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement, Windows::Foundation::DateTime const& instanceStartDate) const
{
    Windows::Foundation::IAsyncOperation<hstring> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentStore)->ShowReplaceAppointmentWithPlacementAndDateAsync(get_abi(localId), get_abi(appointment), get_abi(selection), get_abi(preferredPlacement), get_abi(instanceStartDate), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_ApplicationModel_Appointments_IAppointmentStore<D>::ShowRemoveAppointmentAsync(param::hstring const& localId, Windows::Foundation::Rect const& selection) const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentStore)->ShowRemoveAppointmentAsync(get_abi(localId), get_abi(selection), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_ApplicationModel_Appointments_IAppointmentStore<D>::ShowRemoveAppointmentAsync(param::hstring const& localId, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement, Windows::Foundation::DateTime const& instanceStartDate) const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentStore)->ShowRemoveAppointmentWithPlacementAndDateAsync(get_abi(localId), get_abi(selection), get_abi(preferredPlacement), get_abi(instanceStartDate), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Appointments_IAppointmentStore<D>::ShowAppointmentDetailsAsync(param::hstring const& localId) const
{
    Windows::Foundation::IAsyncAction asyncAction{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentStore)->ShowAppointmentDetailsAsync(get_abi(localId), put_abi(asyncAction)));
    return asyncAction;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Appointments_IAppointmentStore<D>::ShowAppointmentDetailsAsync(param::hstring const& localId, Windows::Foundation::DateTime const& instanceStartDate) const
{
    Windows::Foundation::IAsyncAction asyncAction{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentStore)->ShowAppointmentDetailsWithDateAsync(get_abi(localId), get_abi(instanceStartDate), put_abi(asyncAction)));
    return asyncAction;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> consume_Windows_ApplicationModel_Appointments_IAppointmentStore<D>::ShowEditNewAppointmentAsync(Windows::ApplicationModel::Appointments::Appointment const& appointment) const
{
    Windows::Foundation::IAsyncOperation<hstring> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentStore)->ShowEditNewAppointmentAsync(get_abi(appointment), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<hstring>> consume_Windows_ApplicationModel_Appointments_IAppointmentStore<D>::FindLocalIdsFromRoamingIdAsync(param::hstring const& roamingId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<hstring>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentStore)->FindLocalIdsFromRoamingIdAsync(get_abi(roamingId), put_abi(operation)));
    return operation;
}

template <typename D> event_token consume_Windows_ApplicationModel_Appointments_IAppointmentStore2<D>::StoreChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Appointments::AppointmentStore, Windows::ApplicationModel::Appointments::AppointmentStoreChangedEventArgs> const& pHandler) const
{
    event_token pToken{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentStore2)->add_StoreChanged(get_abi(pHandler), put_abi(pToken)));
    return pToken;
}

template <typename D> event_revoker<Windows::ApplicationModel::Appointments::IAppointmentStore2> consume_Windows_ApplicationModel_Appointments_IAppointmentStore2<D>::StoreChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Appointments::AppointmentStore, Windows::ApplicationModel::Appointments::AppointmentStoreChangedEventArgs> const& pHandler) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::Appointments::IAppointmentStore2>(this, &abi_t<Windows::ApplicationModel::Appointments::IAppointmentStore2>::remove_StoreChanged, StoreChanged(pHandler));
}

template <typename D> void consume_Windows_ApplicationModel_Appointments_IAppointmentStore2<D>::StoreChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentStore2)->remove_StoreChanged(get_abi(token)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::AppointmentCalendar> consume_Windows_ApplicationModel_Appointments_IAppointmentStore2<D>::CreateAppointmentCalendarAsync(param::hstring const& name, param::hstring const& userDataAccountId) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::AppointmentCalendar> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentStore2)->CreateAppointmentCalendarInAccountAsync(get_abi(name), get_abi(userDataAccountId), put_abi(operation)));
    return operation;
}

template <typename D> Windows::ApplicationModel::Appointments::AppointmentStoreChangeTracker consume_Windows_ApplicationModel_Appointments_IAppointmentStore3<D>::GetChangeTracker(param::hstring const& identity) const
{
    Windows::ApplicationModel::Appointments::AppointmentStoreChangeTracker result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentStore3)->GetChangeTracker(get_abi(identity), put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Appointments::Appointment consume_Windows_ApplicationModel_Appointments_IAppointmentStoreChange<D>::Appointment() const
{
    Windows::ApplicationModel::Appointments::Appointment value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentStoreChange)->get_Appointment(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Appointments::AppointmentStoreChangeType consume_Windows_ApplicationModel_Appointments_IAppointmentStoreChange<D>::ChangeType() const
{
    Windows::ApplicationModel::Appointments::AppointmentStoreChangeType value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentStoreChange)->get_ChangeType(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Appointments::AppointmentCalendar consume_Windows_ApplicationModel_Appointments_IAppointmentStoreChange2<D>::AppointmentCalendar() const
{
    Windows::ApplicationModel::Appointments::AppointmentCalendar value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentStoreChange2)->get_AppointmentCalendar(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::AppointmentStoreChange>> consume_Windows_ApplicationModel_Appointments_IAppointmentStoreChangeReader<D>::ReadBatchAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::AppointmentStoreChange>> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentStoreChangeReader)->ReadBatchAsync(put_abi(result)));
    return result;
}

template <typename D> void consume_Windows_ApplicationModel_Appointments_IAppointmentStoreChangeReader<D>::AcceptChanges() const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentStoreChangeReader)->AcceptChanges());
}

template <typename D> void consume_Windows_ApplicationModel_Appointments_IAppointmentStoreChangeReader<D>::AcceptChangesThrough(Windows::ApplicationModel::Appointments::AppointmentStoreChange const& lastChangeToAccept) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentStoreChangeReader)->AcceptChangesThrough(get_abi(lastChangeToAccept)));
}

template <typename D> Windows::ApplicationModel::Appointments::AppointmentStoreChangeReader consume_Windows_ApplicationModel_Appointments_IAppointmentStoreChangeTracker<D>::GetChangeReader() const
{
    Windows::ApplicationModel::Appointments::AppointmentStoreChangeReader value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentStoreChangeTracker)->GetChangeReader(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Appointments_IAppointmentStoreChangeTracker<D>::Enable() const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentStoreChangeTracker)->Enable());
}

template <typename D> void consume_Windows_ApplicationModel_Appointments_IAppointmentStoreChangeTracker<D>::Reset() const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentStoreChangeTracker)->Reset());
}

template <typename D> bool consume_Windows_ApplicationModel_Appointments_IAppointmentStoreChangeTracker2<D>::IsTracking() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentStoreChangeTracker2)->get_IsTracking(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Appointments_IAppointmentStoreChangedDeferral<D>::Complete() const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentStoreChangedDeferral)->Complete());
}

template <typename D> Windows::ApplicationModel::Appointments::AppointmentStoreChangedDeferral consume_Windows_ApplicationModel_Appointments_IAppointmentStoreChangedEventArgs<D>::GetDeferral() const
{
    Windows::ApplicationModel::Appointments::AppointmentStoreChangedDeferral result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IAppointmentStoreChangedEventArgs)->GetDeferral(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> consume_Windows_ApplicationModel_Appointments_IFindAppointmentsOptions<D>::CalendarIds() const
{
    Windows::Foundation::Collections::IVector<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IFindAppointmentsOptions)->get_CalendarIds(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> consume_Windows_ApplicationModel_Appointments_IFindAppointmentsOptions<D>::FetchProperties() const
{
    Windows::Foundation::Collections::IVector<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IFindAppointmentsOptions)->get_FetchProperties(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_Appointments_IFindAppointmentsOptions<D>::IncludeHidden() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IFindAppointmentsOptions)->get_IncludeHidden(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Appointments_IFindAppointmentsOptions<D>::IncludeHidden(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IFindAppointmentsOptions)->put_IncludeHidden(value));
}

template <typename D> uint32_t consume_Windows_ApplicationModel_Appointments_IFindAppointmentsOptions<D>::MaxCount() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IFindAppointmentsOptions)->get_MaxCount(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_Appointments_IFindAppointmentsOptions<D>::MaxCount(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Appointments::IFindAppointmentsOptions)->put_MaxCount(value));
}

template <typename D>
struct produce<D, Windows::ApplicationModel::Appointments::IAppointment> : produce_base<D, Windows::ApplicationModel::Appointments::IAppointment>
{
    HRESULT __stdcall get_StartTime(Windows::Foundation::DateTime* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::DateTime>(this->shim().StartTime());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_StartTime(Windows::Foundation::DateTime value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StartTime(*reinterpret_cast<Windows::Foundation::DateTime const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Duration(Windows::Foundation::TimeSpan* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().Duration());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Duration(Windows::Foundation::TimeSpan value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Duration(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Location(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Location());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Location(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Location(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Subject(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Subject());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Subject(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Subject(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Details(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Details());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Details(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Details(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Reminder(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<Windows::Foundation::TimeSpan>>(this->shim().Reminder());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Reminder(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Reminder(*reinterpret_cast<Windows::Foundation::IReference<Windows::Foundation::TimeSpan> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Organizer(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Appointments::AppointmentOrganizer>(this->shim().Organizer());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Organizer(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Organizer(*reinterpret_cast<Windows::ApplicationModel::Appointments::AppointmentOrganizer const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Invitees(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Appointments::AppointmentInvitee>>(this->shim().Invitees());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Recurrence(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Appointments::AppointmentRecurrence>(this->shim().Recurrence());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Recurrence(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Recurrence(*reinterpret_cast<Windows::ApplicationModel::Appointments::AppointmentRecurrence const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_BusyStatus(Windows::ApplicationModel::Appointments::AppointmentBusyStatus* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Appointments::AppointmentBusyStatus>(this->shim().BusyStatus());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_BusyStatus(Windows::ApplicationModel::Appointments::AppointmentBusyStatus value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BusyStatus(*reinterpret_cast<Windows::ApplicationModel::Appointments::AppointmentBusyStatus const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AllDay(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().AllDay());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_AllDay(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AllDay(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Sensitivity(Windows::ApplicationModel::Appointments::AppointmentSensitivity* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Appointments::AppointmentSensitivity>(this->shim().Sensitivity());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Sensitivity(Windows::ApplicationModel::Appointments::AppointmentSensitivity value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Sensitivity(*reinterpret_cast<Windows::ApplicationModel::Appointments::AppointmentSensitivity const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Uri(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().Uri());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Uri(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Uri(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Appointments::IAppointment2> : produce_base<D, Windows::ApplicationModel::Appointments::IAppointment2>
{
    HRESULT __stdcall get_LocalId(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().LocalId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CalendarId(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().CalendarId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RoamingId(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().RoamingId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_RoamingId(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RoamingId(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_OriginalStartTime(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<Windows::Foundation::DateTime>>(this->shim().OriginalStartTime());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsResponseRequested(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsResponseRequested());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsResponseRequested(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsResponseRequested(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AllowNewTimeProposal(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().AllowNewTimeProposal());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_AllowNewTimeProposal(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AllowNewTimeProposal(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_OnlineMeetingLink(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().OnlineMeetingLink());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_OnlineMeetingLink(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OnlineMeetingLink(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ReplyTime(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<Windows::Foundation::DateTime>>(this->shim().ReplyTime());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ReplyTime(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReplyTime(*reinterpret_cast<Windows::Foundation::IReference<Windows::Foundation::DateTime> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_UserResponse(Windows::ApplicationModel::Appointments::AppointmentParticipantResponse* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Appointments::AppointmentParticipantResponse>(this->shim().UserResponse());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_UserResponse(Windows::ApplicationModel::Appointments::AppointmentParticipantResponse value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UserResponse(*reinterpret_cast<Windows::ApplicationModel::Appointments::AppointmentParticipantResponse const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_HasInvitees(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().HasInvitees());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsCanceledMeeting(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsCanceledMeeting());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsCanceledMeeting(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsCanceledMeeting(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsOrganizedByUser(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsOrganizedByUser());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsOrganizedByUser(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsOrganizedByUser(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Appointments::IAppointment3> : produce_base<D, Windows::ApplicationModel::Appointments::IAppointment3>
{
    HRESULT __stdcall get_ChangeNumber(uint64_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint64_t>(this->shim().ChangeNumber());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RemoteChangeNumber(uint64_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint64_t>(this->shim().RemoteChangeNumber());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_RemoteChangeNumber(uint64_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RemoteChangeNumber(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DetailsKind(Windows::ApplicationModel::Appointments::AppointmentDetailsKind* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Appointments::AppointmentDetailsKind>(this->shim().DetailsKind());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_DetailsKind(Windows::ApplicationModel::Appointments::AppointmentDetailsKind value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DetailsKind(*reinterpret_cast<Windows::ApplicationModel::Appointments::AppointmentDetailsKind const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Appointments::IAppointmentCalendar> : produce_base<D, Windows::ApplicationModel::Appointments::IAppointmentCalendar>
{
    HRESULT __stdcall get_DisplayColor(struct struct_Windows_UI_Color* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Color>(this->shim().DisplayColor());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DisplayName(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DisplayName());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_DisplayName(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DisplayName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_LocalId(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().LocalId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsHidden(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsHidden());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_OtherAppReadAccess(Windows::ApplicationModel::Appointments::AppointmentCalendarOtherAppReadAccess* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Appointments::AppointmentCalendarOtherAppReadAccess>(this->shim().OtherAppReadAccess());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_OtherAppReadAccess(Windows::ApplicationModel::Appointments::AppointmentCalendarOtherAppReadAccess value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OtherAppReadAccess(*reinterpret_cast<Windows::ApplicationModel::Appointments::AppointmentCalendarOtherAppReadAccess const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_OtherAppWriteAccess(Windows::ApplicationModel::Appointments::AppointmentCalendarOtherAppWriteAccess* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Appointments::AppointmentCalendarOtherAppWriteAccess>(this->shim().OtherAppWriteAccess());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_OtherAppWriteAccess(Windows::ApplicationModel::Appointments::AppointmentCalendarOtherAppWriteAccess value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OtherAppWriteAccess(*reinterpret_cast<Windows::ApplicationModel::Appointments::AppointmentCalendarOtherAppWriteAccess const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SourceDisplayName(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().SourceDisplayName());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SummaryCardView(Windows::ApplicationModel::Appointments::AppointmentSummaryCardView* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Appointments::AppointmentSummaryCardView>(this->shim().SummaryCardView());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_SummaryCardView(Windows::ApplicationModel::Appointments::AppointmentSummaryCardView value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SummaryCardView(*reinterpret_cast<Windows::ApplicationModel::Appointments::AppointmentSummaryCardView const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FindAppointmentsAsync(Windows::Foundation::DateTime rangeStart, Windows::Foundation::TimeSpan rangeLength, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::Appointment>>>(this->shim().FindAppointmentsAsync(*reinterpret_cast<Windows::Foundation::DateTime const*>(&rangeStart), *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&rangeLength)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FindAppointmentsAsyncWithOptions(Windows::Foundation::DateTime rangeStart, Windows::Foundation::TimeSpan rangeLength, void* options, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::Appointment>>>(this->shim().FindAppointmentsAsync(*reinterpret_cast<Windows::Foundation::DateTime const*>(&rangeStart), *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&rangeLength), *reinterpret_cast<Windows::ApplicationModel::Appointments::FindAppointmentsOptions const*>(&options)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FindExceptionsFromMasterAsync(HSTRING masterLocalId, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::AppointmentException>>>(this->shim().FindExceptionsFromMasterAsync(*reinterpret_cast<hstring const*>(&masterLocalId)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FindAllInstancesAsync(HSTRING masterLocalId, Windows::Foundation::DateTime rangeStart, Windows::Foundation::TimeSpan rangeLength, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::Appointment>>>(this->shim().FindAllInstancesAsync(*reinterpret_cast<hstring const*>(&masterLocalId), *reinterpret_cast<Windows::Foundation::DateTime const*>(&rangeStart), *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&rangeLength)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FindAllInstancesAsyncWithOptions(HSTRING masterLocalId, Windows::Foundation::DateTime rangeStart, Windows::Foundation::TimeSpan rangeLength, void* pOptions, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::Appointment>>>(this->shim().FindAllInstancesAsync(*reinterpret_cast<hstring const*>(&masterLocalId), *reinterpret_cast<Windows::Foundation::DateTime const*>(&rangeStart), *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&rangeLength), *reinterpret_cast<Windows::ApplicationModel::Appointments::FindAppointmentsOptions const*>(&pOptions)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetAppointmentAsync(HSTRING localId, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::Appointment>>(this->shim().GetAppointmentAsync(*reinterpret_cast<hstring const*>(&localId)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetAppointmentInstanceAsync(HSTRING localId, Windows::Foundation::DateTime instanceStartTime, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::Appointment>>(this->shim().GetAppointmentInstanceAsync(*reinterpret_cast<hstring const*>(&localId), *reinterpret_cast<Windows::Foundation::DateTime const*>(&instanceStartTime)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FindUnexpandedAppointmentsAsync(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::Appointment>>>(this->shim().FindUnexpandedAppointmentsAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FindUnexpandedAppointmentsAsyncWithOptions(void* options, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::Appointment>>>(this->shim().FindUnexpandedAppointmentsAsync(*reinterpret_cast<Windows::ApplicationModel::Appointments::FindAppointmentsOptions const*>(&options)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall DeleteAsync(void** asyncAction) noexcept final
    {
        try
        {
            *asyncAction = nullptr;
            typename D::abi_guard guard(this->shim());
            *asyncAction = detach_from<Windows::Foundation::IAsyncAction>(this->shim().DeleteAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SaveAsync(void** asyncAction) noexcept final
    {
        try
        {
            *asyncAction = nullptr;
            typename D::abi_guard guard(this->shim());
            *asyncAction = detach_from<Windows::Foundation::IAsyncAction>(this->shim().SaveAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall DeleteAppointmentAsync(HSTRING localId, void** asyncAction) noexcept final
    {
        try
        {
            *asyncAction = nullptr;
            typename D::abi_guard guard(this->shim());
            *asyncAction = detach_from<Windows::Foundation::IAsyncAction>(this->shim().DeleteAppointmentAsync(*reinterpret_cast<hstring const*>(&localId)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall DeleteAppointmentInstanceAsync(HSTRING localId, Windows::Foundation::DateTime instanceStartTime, void** asyncAction) noexcept final
    {
        try
        {
            *asyncAction = nullptr;
            typename D::abi_guard guard(this->shim());
            *asyncAction = detach_from<Windows::Foundation::IAsyncAction>(this->shim().DeleteAppointmentInstanceAsync(*reinterpret_cast<hstring const*>(&localId), *reinterpret_cast<Windows::Foundation::DateTime const*>(&instanceStartTime)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SaveAppointmentAsync(void* pAppointment, void** asyncAction) noexcept final
    {
        try
        {
            *asyncAction = nullptr;
            typename D::abi_guard guard(this->shim());
            *asyncAction = detach_from<Windows::Foundation::IAsyncAction>(this->shim().SaveAppointmentAsync(*reinterpret_cast<Windows::ApplicationModel::Appointments::Appointment const*>(&pAppointment)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Appointments::IAppointmentCalendar2> : produce_base<D, Windows::ApplicationModel::Appointments::IAppointmentCalendar2>
{
    HRESULT __stdcall get_SyncManager(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Appointments::AppointmentCalendarSyncManager>(this->shim().SyncManager());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RemoteId(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().RemoteId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_RemoteId(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RemoteId(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_DisplayColor(struct struct_Windows_UI_Color value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DisplayColor(*reinterpret_cast<Windows::UI::Color const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsHidden(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsHidden(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_UserDataAccountId(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().UserDataAccountId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CanCreateOrUpdateAppointments(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().CanCreateOrUpdateAppointments());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_CanCreateOrUpdateAppointments(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CanCreateOrUpdateAppointments(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CanCancelMeetings(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().CanCancelMeetings());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_CanCancelMeetings(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CanCancelMeetings(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CanForwardMeetings(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().CanForwardMeetings());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_CanForwardMeetings(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CanForwardMeetings(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CanProposeNewTimeForMeetings(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().CanProposeNewTimeForMeetings());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_CanProposeNewTimeForMeetings(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CanProposeNewTimeForMeetings(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CanUpdateMeetingResponses(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().CanUpdateMeetingResponses());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_CanUpdateMeetingResponses(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CanUpdateMeetingResponses(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CanNotifyInvitees(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().CanNotifyInvitees());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_CanNotifyInvitees(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CanNotifyInvitees(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MustNofityInvitees(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().MustNofityInvitees());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_MustNofityInvitees(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MustNofityInvitees(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall TryCreateOrUpdateAppointmentAsync(void* appointment, bool notifyInvitees, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().TryCreateOrUpdateAppointmentAsync(*reinterpret_cast<Windows::ApplicationModel::Appointments::Appointment const*>(&appointment), notifyInvitees));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall TryCancelMeetingAsync(void* meeting, HSTRING subject, HSTRING comment, bool notifyInvitees, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().TryCancelMeetingAsync(*reinterpret_cast<Windows::ApplicationModel::Appointments::Appointment const*>(&meeting), *reinterpret_cast<hstring const*>(&subject), *reinterpret_cast<hstring const*>(&comment), notifyInvitees));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall TryForwardMeetingAsync(void* meeting, void* invitees, HSTRING subject, HSTRING forwardHeader, HSTRING comment, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().TryForwardMeetingAsync(*reinterpret_cast<Windows::ApplicationModel::Appointments::Appointment const*>(&meeting), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Appointments::AppointmentInvitee> const*>(&invitees), *reinterpret_cast<hstring const*>(&subject), *reinterpret_cast<hstring const*>(&forwardHeader), *reinterpret_cast<hstring const*>(&comment)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall TryProposeNewTimeForMeetingAsync(void* meeting, Windows::Foundation::DateTime newStartTime, Windows::Foundation::TimeSpan newDuration, HSTRING subject, HSTRING comment, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().TryProposeNewTimeForMeetingAsync(*reinterpret_cast<Windows::ApplicationModel::Appointments::Appointment const*>(&meeting), *reinterpret_cast<Windows::Foundation::DateTime const*>(&newStartTime), *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&newDuration), *reinterpret_cast<hstring const*>(&subject), *reinterpret_cast<hstring const*>(&comment)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall TryUpdateMeetingResponseAsync(void* meeting, Windows::ApplicationModel::Appointments::AppointmentParticipantResponse response, HSTRING subject, HSTRING comment, bool sendUpdate, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().TryUpdateMeetingResponseAsync(*reinterpret_cast<Windows::ApplicationModel::Appointments::Appointment const*>(&meeting), *reinterpret_cast<Windows::ApplicationModel::Appointments::AppointmentParticipantResponse const*>(&response), *reinterpret_cast<hstring const*>(&subject), *reinterpret_cast<hstring const*>(&comment), sendUpdate));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Appointments::IAppointmentCalendar3> : produce_base<D, Windows::ApplicationModel::Appointments::IAppointmentCalendar3>
{
    HRESULT __stdcall RegisterSyncManagerAsync(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncAction>(this->shim().RegisterSyncManagerAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager> : produce_base<D, Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager>
{
    HRESULT __stdcall get_Status(Windows::ApplicationModel::Appointments::AppointmentCalendarSyncStatus* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Appointments::AppointmentCalendarSyncStatus>(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_LastSuccessfulSyncTime(Windows::Foundation::DateTime* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::DateTime>(this->shim().LastSuccessfulSyncTime());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_LastAttemptedSyncTime(Windows::Foundation::DateTime* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::DateTime>(this->shim().LastAttemptedSyncTime());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SyncAsync(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().SyncAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_SyncStatusChanged(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().SyncStatusChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Appointments::AppointmentCalendarSyncManager, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_SyncStatusChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SyncStatusChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager2> : produce_base<D, Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager2>
{
    HRESULT __stdcall put_Status(Windows::ApplicationModel::Appointments::AppointmentCalendarSyncStatus value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Status(*reinterpret_cast<Windows::ApplicationModel::Appointments::AppointmentCalendarSyncStatus const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_LastSuccessfulSyncTime(Windows::Foundation::DateTime value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LastSuccessfulSyncTime(*reinterpret_cast<Windows::Foundation::DateTime const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_LastAttemptedSyncTime(Windows::Foundation::DateTime value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LastAttemptedSyncTime(*reinterpret_cast<Windows::Foundation::DateTime const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Appointments::IAppointmentConflictResult> : produce_base<D, Windows::ApplicationModel::Appointments::IAppointmentConflictResult>
{
    HRESULT __stdcall get_Type(Windows::ApplicationModel::Appointments::AppointmentConflictType* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Appointments::AppointmentConflictType>(this->shim().Type());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Date(Windows::Foundation::DateTime* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::DateTime>(this->shim().Date());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Appointments::IAppointmentException> : produce_base<D, Windows::ApplicationModel::Appointments::IAppointmentException>
{
    HRESULT __stdcall get_Appointment(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Appointments::Appointment>(this->shim().Appointment());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ExceptionProperties(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<hstring>>(this->shim().ExceptionProperties());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsDeleted(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsDeleted());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Appointments::IAppointmentInvitee> : produce_base<D, Windows::ApplicationModel::Appointments::IAppointmentInvitee>
{
    HRESULT __stdcall get_Role(Windows::ApplicationModel::Appointments::AppointmentParticipantRole* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Appointments::AppointmentParticipantRole>(this->shim().Role());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Role(Windows::ApplicationModel::Appointments::AppointmentParticipantRole value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Role(*reinterpret_cast<Windows::ApplicationModel::Appointments::AppointmentParticipantRole const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Response(Windows::ApplicationModel::Appointments::AppointmentParticipantResponse* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Appointments::AppointmentParticipantResponse>(this->shim().Response());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Response(Windows::ApplicationModel::Appointments::AppointmentParticipantResponse value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Response(*reinterpret_cast<Windows::ApplicationModel::Appointments::AppointmentParticipantResponse const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Appointments::IAppointmentManagerForUser> : produce_base<D, Windows::ApplicationModel::Appointments::IAppointmentManagerForUser>
{
    HRESULT __stdcall ShowAddAppointmentAsync(void* appointment, Windows::Foundation::Rect selection, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<hstring>>(this->shim().ShowAddAppointmentAsync(*reinterpret_cast<Windows::ApplicationModel::Appointments::Appointment const*>(&appointment), *reinterpret_cast<Windows::Foundation::Rect const*>(&selection)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ShowAddAppointmentWithPlacementAsync(void* appointment, Windows::Foundation::Rect selection, Windows::UI::Popups::Placement preferredPlacement, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<hstring>>(this->shim().ShowAddAppointmentAsync(*reinterpret_cast<Windows::ApplicationModel::Appointments::Appointment const*>(&appointment), *reinterpret_cast<Windows::Foundation::Rect const*>(&selection), *reinterpret_cast<Windows::UI::Popups::Placement const*>(&preferredPlacement)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ShowReplaceAppointmentAsync(HSTRING appointmentId, void* appointment, Windows::Foundation::Rect selection, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<hstring>>(this->shim().ShowReplaceAppointmentAsync(*reinterpret_cast<hstring const*>(&appointmentId), *reinterpret_cast<Windows::ApplicationModel::Appointments::Appointment const*>(&appointment), *reinterpret_cast<Windows::Foundation::Rect const*>(&selection)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ShowReplaceAppointmentWithPlacementAsync(HSTRING appointmentId, void* appointment, Windows::Foundation::Rect selection, Windows::UI::Popups::Placement preferredPlacement, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<hstring>>(this->shim().ShowReplaceAppointmentAsync(*reinterpret_cast<hstring const*>(&appointmentId), *reinterpret_cast<Windows::ApplicationModel::Appointments::Appointment const*>(&appointment), *reinterpret_cast<Windows::Foundation::Rect const*>(&selection), *reinterpret_cast<Windows::UI::Popups::Placement const*>(&preferredPlacement)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ShowReplaceAppointmentWithPlacementAndDateAsync(HSTRING appointmentId, void* appointment, Windows::Foundation::Rect selection, Windows::UI::Popups::Placement preferredPlacement, Windows::Foundation::DateTime instanceStartDate, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<hstring>>(this->shim().ShowReplaceAppointmentAsync(*reinterpret_cast<hstring const*>(&appointmentId), *reinterpret_cast<Windows::ApplicationModel::Appointments::Appointment const*>(&appointment), *reinterpret_cast<Windows::Foundation::Rect const*>(&selection), *reinterpret_cast<Windows::UI::Popups::Placement const*>(&preferredPlacement), *reinterpret_cast<Windows::Foundation::DateTime const*>(&instanceStartDate)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ShowRemoveAppointmentAsync(HSTRING appointmentId, Windows::Foundation::Rect selection, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().ShowRemoveAppointmentAsync(*reinterpret_cast<hstring const*>(&appointmentId), *reinterpret_cast<Windows::Foundation::Rect const*>(&selection)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ShowRemoveAppointmentWithPlacementAsync(HSTRING appointmentId, Windows::Foundation::Rect selection, Windows::UI::Popups::Placement preferredPlacement, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().ShowRemoveAppointmentAsync(*reinterpret_cast<hstring const*>(&appointmentId), *reinterpret_cast<Windows::Foundation::Rect const*>(&selection), *reinterpret_cast<Windows::UI::Popups::Placement const*>(&preferredPlacement)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ShowRemoveAppointmentWithPlacementAndDateAsync(HSTRING appointmentId, Windows::Foundation::Rect selection, Windows::UI::Popups::Placement preferredPlacement, Windows::Foundation::DateTime instanceStartDate, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().ShowRemoveAppointmentAsync(*reinterpret_cast<hstring const*>(&appointmentId), *reinterpret_cast<Windows::Foundation::Rect const*>(&selection), *reinterpret_cast<Windows::UI::Popups::Placement const*>(&preferredPlacement), *reinterpret_cast<Windows::Foundation::DateTime const*>(&instanceStartDate)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ShowTimeFrameAsync(Windows::Foundation::DateTime timeToShow, Windows::Foundation::TimeSpan duration, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncAction>(this->shim().ShowTimeFrameAsync(*reinterpret_cast<Windows::Foundation::DateTime const*>(&timeToShow), *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&duration)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ShowAppointmentDetailsAsync(HSTRING appointmentId, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncAction>(this->shim().ShowAppointmentDetailsAsync(*reinterpret_cast<hstring const*>(&appointmentId)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ShowAppointmentDetailsWithDateAsync(HSTRING appointmentId, Windows::Foundation::DateTime instanceStartDate, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncAction>(this->shim().ShowAppointmentDetailsAsync(*reinterpret_cast<hstring const*>(&appointmentId), *reinterpret_cast<Windows::Foundation::DateTime const*>(&instanceStartDate)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ShowEditNewAppointmentAsync(void* appointment, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<hstring>>(this->shim().ShowEditNewAppointmentAsync(*reinterpret_cast<Windows::ApplicationModel::Appointments::Appointment const*>(&appointment)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RequestStoreAsync(Windows::ApplicationModel::Appointments::AppointmentStoreAccessType options, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::AppointmentStore>>(this->shim().RequestStoreAsync(*reinterpret_cast<Windows::ApplicationModel::Appointments::AppointmentStoreAccessType const*>(&options)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_User(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::System::User>(this->shim().User());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Appointments::IAppointmentManagerStatics> : produce_base<D, Windows::ApplicationModel::Appointments::IAppointmentManagerStatics>
{
    HRESULT __stdcall ShowAddAppointmentAsync(void* appointment, Windows::Foundation::Rect selection, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<hstring>>(this->shim().ShowAddAppointmentAsync(*reinterpret_cast<Windows::ApplicationModel::Appointments::Appointment const*>(&appointment), *reinterpret_cast<Windows::Foundation::Rect const*>(&selection)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ShowAddAppointmentWithPlacementAsync(void* appointment, Windows::Foundation::Rect selection, Windows::UI::Popups::Placement preferredPlacement, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<hstring>>(this->shim().ShowAddAppointmentAsync(*reinterpret_cast<Windows::ApplicationModel::Appointments::Appointment const*>(&appointment), *reinterpret_cast<Windows::Foundation::Rect const*>(&selection), *reinterpret_cast<Windows::UI::Popups::Placement const*>(&preferredPlacement)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ShowReplaceAppointmentAsync(HSTRING appointmentId, void* appointment, Windows::Foundation::Rect selection, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<hstring>>(this->shim().ShowReplaceAppointmentAsync(*reinterpret_cast<hstring const*>(&appointmentId), *reinterpret_cast<Windows::ApplicationModel::Appointments::Appointment const*>(&appointment), *reinterpret_cast<Windows::Foundation::Rect const*>(&selection)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ShowReplaceAppointmentWithPlacementAsync(HSTRING appointmentId, void* appointment, Windows::Foundation::Rect selection, Windows::UI::Popups::Placement preferredPlacement, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<hstring>>(this->shim().ShowReplaceAppointmentAsync(*reinterpret_cast<hstring const*>(&appointmentId), *reinterpret_cast<Windows::ApplicationModel::Appointments::Appointment const*>(&appointment), *reinterpret_cast<Windows::Foundation::Rect const*>(&selection), *reinterpret_cast<Windows::UI::Popups::Placement const*>(&preferredPlacement)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ShowReplaceAppointmentWithPlacementAndDateAsync(HSTRING appointmentId, void* appointment, Windows::Foundation::Rect selection, Windows::UI::Popups::Placement preferredPlacement, Windows::Foundation::DateTime instanceStartDate, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<hstring>>(this->shim().ShowReplaceAppointmentAsync(*reinterpret_cast<hstring const*>(&appointmentId), *reinterpret_cast<Windows::ApplicationModel::Appointments::Appointment const*>(&appointment), *reinterpret_cast<Windows::Foundation::Rect const*>(&selection), *reinterpret_cast<Windows::UI::Popups::Placement const*>(&preferredPlacement), *reinterpret_cast<Windows::Foundation::DateTime const*>(&instanceStartDate)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ShowRemoveAppointmentAsync(HSTRING appointmentId, Windows::Foundation::Rect selection, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().ShowRemoveAppointmentAsync(*reinterpret_cast<hstring const*>(&appointmentId), *reinterpret_cast<Windows::Foundation::Rect const*>(&selection)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ShowRemoveAppointmentWithPlacementAsync(HSTRING appointmentId, Windows::Foundation::Rect selection, Windows::UI::Popups::Placement preferredPlacement, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().ShowRemoveAppointmentAsync(*reinterpret_cast<hstring const*>(&appointmentId), *reinterpret_cast<Windows::Foundation::Rect const*>(&selection), *reinterpret_cast<Windows::UI::Popups::Placement const*>(&preferredPlacement)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ShowRemoveAppointmentWithPlacementAndDateAsync(HSTRING appointmentId, Windows::Foundation::Rect selection, Windows::UI::Popups::Placement preferredPlacement, Windows::Foundation::DateTime instanceStartDate, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().ShowRemoveAppointmentAsync(*reinterpret_cast<hstring const*>(&appointmentId), *reinterpret_cast<Windows::Foundation::Rect const*>(&selection), *reinterpret_cast<Windows::UI::Popups::Placement const*>(&preferredPlacement), *reinterpret_cast<Windows::Foundation::DateTime const*>(&instanceStartDate)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ShowTimeFrameAsync(Windows::Foundation::DateTime timeToShow, Windows::Foundation::TimeSpan duration, void** asyncAction) noexcept final
    {
        try
        {
            *asyncAction = nullptr;
            typename D::abi_guard guard(this->shim());
            *asyncAction = detach_from<Windows::Foundation::IAsyncAction>(this->shim().ShowTimeFrameAsync(*reinterpret_cast<Windows::Foundation::DateTime const*>(&timeToShow), *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&duration)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Appointments::IAppointmentManagerStatics2> : produce_base<D, Windows::ApplicationModel::Appointments::IAppointmentManagerStatics2>
{
    HRESULT __stdcall ShowAppointmentDetailsAsync(HSTRING appointmentId, void** asyncAction) noexcept final
    {
        try
        {
            *asyncAction = nullptr;
            typename D::abi_guard guard(this->shim());
            *asyncAction = detach_from<Windows::Foundation::IAsyncAction>(this->shim().ShowAppointmentDetailsAsync(*reinterpret_cast<hstring const*>(&appointmentId)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ShowAppointmentDetailsWithDateAsync(HSTRING appointmentId, Windows::Foundation::DateTime instanceStartDate, void** asyncAction) noexcept final
    {
        try
        {
            *asyncAction = nullptr;
            typename D::abi_guard guard(this->shim());
            *asyncAction = detach_from<Windows::Foundation::IAsyncAction>(this->shim().ShowAppointmentDetailsAsync(*reinterpret_cast<hstring const*>(&appointmentId), *reinterpret_cast<Windows::Foundation::DateTime const*>(&instanceStartDate)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ShowEditNewAppointmentAsync(void* appointment, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<hstring>>(this->shim().ShowEditNewAppointmentAsync(*reinterpret_cast<Windows::ApplicationModel::Appointments::Appointment const*>(&appointment)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RequestStoreAsync(Windows::ApplicationModel::Appointments::AppointmentStoreAccessType options, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::AppointmentStore>>(this->shim().RequestStoreAsync(*reinterpret_cast<Windows::ApplicationModel::Appointments::AppointmentStoreAccessType const*>(&options)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Appointments::IAppointmentManagerStatics3> : produce_base<D, Windows::ApplicationModel::Appointments::IAppointmentManagerStatics3>
{
    HRESULT __stdcall GetForUser(void* user, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::ApplicationModel::Appointments::AppointmentManagerForUser>(this->shim().GetForUser(*reinterpret_cast<Windows::System::User const*>(&user)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Appointments::IAppointmentParticipant> : produce_base<D, Windows::ApplicationModel::Appointments::IAppointmentParticipant>
{
    HRESULT __stdcall get_DisplayName(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DisplayName());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_DisplayName(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DisplayName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Address(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Address());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Address(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Address(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics> : produce_base<D, Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics>
{
    HRESULT __stdcall get_Subject(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Subject());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Location(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Location());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_StartTime(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().StartTime());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Duration(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Duration());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Reminder(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Reminder());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_BusyStatus(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().BusyStatus());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Sensitivity(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Sensitivity());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_OriginalStartTime(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().OriginalStartTime());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsResponseRequested(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().IsResponseRequested());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AllowNewTimeProposal(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AllowNewTimeProposal());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_AllDay(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AllDay());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Details(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Details());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_OnlineMeetingLink(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().OnlineMeetingLink());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ReplyTime(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ReplyTime());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Organizer(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Organizer());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_UserResponse(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().UserResponse());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_HasInvitees(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().HasInvitees());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsCanceledMeeting(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().IsCanceledMeeting());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsOrganizedByUser(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().IsOrganizedByUser());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Recurrence(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Recurrence());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Uri(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Uri());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Invitees(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Invitees());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DefaultProperties(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<hstring>>(this->shim().DefaultProperties());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics2> : produce_base<D, Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics2>
{
    HRESULT __stdcall get_ChangeNumber(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ChangeNumber());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RemoteChangeNumber(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().RemoteChangeNumber());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DetailsKind(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DetailsKind());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Appointments::IAppointmentRecurrence> : produce_base<D, Windows::ApplicationModel::Appointments::IAppointmentRecurrence>
{
    HRESULT __stdcall get_Unit(Windows::ApplicationModel::Appointments::AppointmentRecurrenceUnit* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Appointments::AppointmentRecurrenceUnit>(this->shim().Unit());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Unit(Windows::ApplicationModel::Appointments::AppointmentRecurrenceUnit value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Unit(*reinterpret_cast<Windows::ApplicationModel::Appointments::AppointmentRecurrenceUnit const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Occurrences(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<uint32_t>>(this->shim().Occurrences());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Occurrences(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Occurrences(*reinterpret_cast<Windows::Foundation::IReference<uint32_t> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Until(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IReference<Windows::Foundation::DateTime>>(this->shim().Until());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Until(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Until(*reinterpret_cast<Windows::Foundation::IReference<Windows::Foundation::DateTime> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Interval(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().Interval());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Interval(uint32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Interval(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DaysOfWeek(Windows::ApplicationModel::Appointments::AppointmentDaysOfWeek* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Appointments::AppointmentDaysOfWeek>(this->shim().DaysOfWeek());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_DaysOfWeek(Windows::ApplicationModel::Appointments::AppointmentDaysOfWeek value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DaysOfWeek(*reinterpret_cast<Windows::ApplicationModel::Appointments::AppointmentDaysOfWeek const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_WeekOfMonth(Windows::ApplicationModel::Appointments::AppointmentWeekOfMonth* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Appointments::AppointmentWeekOfMonth>(this->shim().WeekOfMonth());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_WeekOfMonth(Windows::ApplicationModel::Appointments::AppointmentWeekOfMonth value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WeekOfMonth(*reinterpret_cast<Windows::ApplicationModel::Appointments::AppointmentWeekOfMonth const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Month(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().Month());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Month(uint32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Month(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Day(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().Day());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Day(uint32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Day(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Appointments::IAppointmentRecurrence2> : produce_base<D, Windows::ApplicationModel::Appointments::IAppointmentRecurrence2>
{
    HRESULT __stdcall get_RecurrenceType(Windows::ApplicationModel::Appointments::RecurrenceType* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Appointments::RecurrenceType>(this->shim().RecurrenceType());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TimeZone(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().TimeZone());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_TimeZone(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TimeZone(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Appointments::IAppointmentRecurrence3> : produce_base<D, Windows::ApplicationModel::Appointments::IAppointmentRecurrence3>
{
    HRESULT __stdcall get_CalendarIdentifier(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().CalendarIdentifier());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Appointments::IAppointmentStore> : produce_base<D, Windows::ApplicationModel::Appointments::IAppointmentStore>
{
    HRESULT __stdcall get_ChangeTracker(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Appointments::AppointmentStoreChangeTracker>(this->shim().ChangeTracker());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateAppointmentCalendarAsync(HSTRING name, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::AppointmentCalendar>>(this->shim().CreateAppointmentCalendarAsync(*reinterpret_cast<hstring const*>(&name)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetAppointmentCalendarAsync(HSTRING calendarId, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::AppointmentCalendar>>(this->shim().GetAppointmentCalendarAsync(*reinterpret_cast<hstring const*>(&calendarId)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetAppointmentAsync(HSTRING localId, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::Appointment>>(this->shim().GetAppointmentAsync(*reinterpret_cast<hstring const*>(&localId)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetAppointmentInstanceAsync(HSTRING localId, Windows::Foundation::DateTime instanceStartTime, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::Appointment>>(this->shim().GetAppointmentInstanceAsync(*reinterpret_cast<hstring const*>(&localId), *reinterpret_cast<Windows::Foundation::DateTime const*>(&instanceStartTime)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FindAppointmentCalendarsAsync(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::AppointmentCalendar>>>(this->shim().FindAppointmentCalendarsAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FindAppointmentCalendarsAsyncWithOptions(Windows::ApplicationModel::Appointments::FindAppointmentCalendarsOptions options, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::AppointmentCalendar>>>(this->shim().FindAppointmentCalendarsAsync(*reinterpret_cast<Windows::ApplicationModel::Appointments::FindAppointmentCalendarsOptions const*>(&options)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FindAppointmentsAsync(Windows::Foundation::DateTime rangeStart, Windows::Foundation::TimeSpan rangeLength, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::Appointment>>>(this->shim().FindAppointmentsAsync(*reinterpret_cast<Windows::Foundation::DateTime const*>(&rangeStart), *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&rangeLength)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FindAppointmentsAsyncWithOptions(Windows::Foundation::DateTime rangeStart, Windows::Foundation::TimeSpan rangeLength, void* options, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::Appointment>>>(this->shim().FindAppointmentsAsync(*reinterpret_cast<Windows::Foundation::DateTime const*>(&rangeStart), *reinterpret_cast<Windows::Foundation::TimeSpan const*>(&rangeLength), *reinterpret_cast<Windows::ApplicationModel::Appointments::FindAppointmentsOptions const*>(&options)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FindConflictAsync(void* appointment, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::AppointmentConflictResult>>(this->shim().FindConflictAsync(*reinterpret_cast<Windows::ApplicationModel::Appointments::Appointment const*>(&appointment)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FindConflictAsyncWithInstanceStart(void* appointment, Windows::Foundation::DateTime instanceStartTime, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::AppointmentConflictResult>>(this->shim().FindConflictAsync(*reinterpret_cast<Windows::ApplicationModel::Appointments::Appointment const*>(&appointment), *reinterpret_cast<Windows::Foundation::DateTime const*>(&instanceStartTime)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall MoveAppointmentAsync(void* appointment, void* destinationCalendar, void** asyncAction) noexcept final
    {
        try
        {
            *asyncAction = nullptr;
            typename D::abi_guard guard(this->shim());
            *asyncAction = detach_from<Windows::Foundation::IAsyncAction>(this->shim().MoveAppointmentAsync(*reinterpret_cast<Windows::ApplicationModel::Appointments::Appointment const*>(&appointment), *reinterpret_cast<Windows::ApplicationModel::Appointments::AppointmentCalendar const*>(&destinationCalendar)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ShowAddAppointmentAsync(void* appointment, Windows::Foundation::Rect selection, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<hstring>>(this->shim().ShowAddAppointmentAsync(*reinterpret_cast<Windows::ApplicationModel::Appointments::Appointment const*>(&appointment), *reinterpret_cast<Windows::Foundation::Rect const*>(&selection)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ShowReplaceAppointmentAsync(HSTRING localId, void* appointment, Windows::Foundation::Rect selection, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<hstring>>(this->shim().ShowReplaceAppointmentAsync(*reinterpret_cast<hstring const*>(&localId), *reinterpret_cast<Windows::ApplicationModel::Appointments::Appointment const*>(&appointment), *reinterpret_cast<Windows::Foundation::Rect const*>(&selection)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ShowReplaceAppointmentWithPlacementAndDateAsync(HSTRING localId, void* appointment, Windows::Foundation::Rect selection, Windows::UI::Popups::Placement preferredPlacement, Windows::Foundation::DateTime instanceStartDate, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<hstring>>(this->shim().ShowReplaceAppointmentAsync(*reinterpret_cast<hstring const*>(&localId), *reinterpret_cast<Windows::ApplicationModel::Appointments::Appointment const*>(&appointment), *reinterpret_cast<Windows::Foundation::Rect const*>(&selection), *reinterpret_cast<Windows::UI::Popups::Placement const*>(&preferredPlacement), *reinterpret_cast<Windows::Foundation::DateTime const*>(&instanceStartDate)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ShowRemoveAppointmentAsync(HSTRING localId, Windows::Foundation::Rect selection, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().ShowRemoveAppointmentAsync(*reinterpret_cast<hstring const*>(&localId), *reinterpret_cast<Windows::Foundation::Rect const*>(&selection)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ShowRemoveAppointmentWithPlacementAndDateAsync(HSTRING localId, Windows::Foundation::Rect selection, Windows::UI::Popups::Placement preferredPlacement, Windows::Foundation::DateTime instanceStartDate, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().ShowRemoveAppointmentAsync(*reinterpret_cast<hstring const*>(&localId), *reinterpret_cast<Windows::Foundation::Rect const*>(&selection), *reinterpret_cast<Windows::UI::Popups::Placement const*>(&preferredPlacement), *reinterpret_cast<Windows::Foundation::DateTime const*>(&instanceStartDate)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ShowAppointmentDetailsAsync(HSTRING localId, void** asyncAction) noexcept final
    {
        try
        {
            *asyncAction = nullptr;
            typename D::abi_guard guard(this->shim());
            *asyncAction = detach_from<Windows::Foundation::IAsyncAction>(this->shim().ShowAppointmentDetailsAsync(*reinterpret_cast<hstring const*>(&localId)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ShowAppointmentDetailsWithDateAsync(HSTRING localId, Windows::Foundation::DateTime instanceStartDate, void** asyncAction) noexcept final
    {
        try
        {
            *asyncAction = nullptr;
            typename D::abi_guard guard(this->shim());
            *asyncAction = detach_from<Windows::Foundation::IAsyncAction>(this->shim().ShowAppointmentDetailsAsync(*reinterpret_cast<hstring const*>(&localId), *reinterpret_cast<Windows::Foundation::DateTime const*>(&instanceStartDate)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ShowEditNewAppointmentAsync(void* appointment, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<hstring>>(this->shim().ShowEditNewAppointmentAsync(*reinterpret_cast<Windows::ApplicationModel::Appointments::Appointment const*>(&appointment)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FindLocalIdsFromRoamingIdAsync(HSTRING roamingId, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<hstring>>>(this->shim().FindLocalIdsFromRoamingIdAsync(*reinterpret_cast<hstring const*>(&roamingId)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Appointments::IAppointmentStore2> : produce_base<D, Windows::ApplicationModel::Appointments::IAppointmentStore2>
{
    HRESULT __stdcall add_StoreChanged(void* pHandler, event_token* pToken) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *pToken = detach_from<event_token>(this->shim().StoreChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Appointments::AppointmentStore, Windows::ApplicationModel::Appointments::AppointmentStoreChangedEventArgs> const*>(&pHandler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_StoreChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StoreChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateAppointmentCalendarInAccountAsync(HSTRING name, HSTRING userDataAccountId, void** operation) noexcept final
    {
        try
        {
            *operation = nullptr;
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::AppointmentCalendar>>(this->shim().CreateAppointmentCalendarAsync(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<hstring const*>(&userDataAccountId)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Appointments::IAppointmentStore3> : produce_base<D, Windows::ApplicationModel::Appointments::IAppointmentStore3>
{
    HRESULT __stdcall GetChangeTracker(HSTRING identity, void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::ApplicationModel::Appointments::AppointmentStoreChangeTracker>(this->shim().GetChangeTracker(*reinterpret_cast<hstring const*>(&identity)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Appointments::IAppointmentStoreChange> : produce_base<D, Windows::ApplicationModel::Appointments::IAppointmentStoreChange>
{
    HRESULT __stdcall get_Appointment(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Appointments::Appointment>(this->shim().Appointment());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ChangeType(Windows::ApplicationModel::Appointments::AppointmentStoreChangeType* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Appointments::AppointmentStoreChangeType>(this->shim().ChangeType());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Appointments::IAppointmentStoreChange2> : produce_base<D, Windows::ApplicationModel::Appointments::IAppointmentStoreChange2>
{
    HRESULT __stdcall get_AppointmentCalendar(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Appointments::AppointmentCalendar>(this->shim().AppointmentCalendar());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Appointments::IAppointmentStoreChangeReader> : produce_base<D, Windows::ApplicationModel::Appointments::IAppointmentStoreChangeReader>
{
    HRESULT __stdcall ReadBatchAsync(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::AppointmentStoreChange>>>(this->shim().ReadBatchAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall AcceptChanges() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AcceptChanges();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall AcceptChangesThrough(void* lastChangeToAccept) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AcceptChangesThrough(*reinterpret_cast<Windows::ApplicationModel::Appointments::AppointmentStoreChange const*>(&lastChangeToAccept));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Appointments::IAppointmentStoreChangeTracker> : produce_base<D, Windows::ApplicationModel::Appointments::IAppointmentStoreChangeTracker>
{
    HRESULT __stdcall GetChangeReader(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Appointments::AppointmentStoreChangeReader>(this->shim().GetChangeReader());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Enable() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Enable();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Reset() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Reset();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Appointments::IAppointmentStoreChangeTracker2> : produce_base<D, Windows::ApplicationModel::Appointments::IAppointmentStoreChangeTracker2>
{
    HRESULT __stdcall get_IsTracking(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsTracking());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Appointments::IAppointmentStoreChangedDeferral> : produce_base<D, Windows::ApplicationModel::Appointments::IAppointmentStoreChangedDeferral>
{
    HRESULT __stdcall Complete() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Complete();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Appointments::IAppointmentStoreChangedEventArgs> : produce_base<D, Windows::ApplicationModel::Appointments::IAppointmentStoreChangedEventArgs>
{
    HRESULT __stdcall GetDeferral(void** result) noexcept final
    {
        try
        {
            *result = nullptr;
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::ApplicationModel::Appointments::AppointmentStoreChangedDeferral>(this->shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Appointments::IAppointmentStoreNotificationTriggerDetails> : produce_base<D, Windows::ApplicationModel::Appointments::IAppointmentStoreNotificationTriggerDetails>
{};

template <typename D>
struct produce<D, Windows::ApplicationModel::Appointments::IFindAppointmentsOptions> : produce_base<D, Windows::ApplicationModel::Appointments::IFindAppointmentsOptions>
{
    HRESULT __stdcall get_CalendarIds(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<hstring>>(this->shim().CalendarIds());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_FetchProperties(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<hstring>>(this->shim().FetchProperties());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IncludeHidden(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IncludeHidden());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IncludeHidden(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IncludeHidden(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MaxCount(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().MaxCount());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_MaxCount(uint32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MaxCount(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Appointments {

inline Appointment::Appointment() :
    Appointment(get_activation_factory<Appointment>().ActivateInstance<Appointment>())
{}

inline AppointmentInvitee::AppointmentInvitee() :
    AppointmentInvitee(get_activation_factory<AppointmentInvitee>().ActivateInstance<AppointmentInvitee>())
{}

inline Windows::Foundation::IAsyncOperation<hstring> AppointmentManager::ShowAddAppointmentAsync(Windows::ApplicationModel::Appointments::Appointment const& appointment, Windows::Foundation::Rect const& selection)
{
    return get_activation_factory<AppointmentManager, Windows::ApplicationModel::Appointments::IAppointmentManagerStatics>().ShowAddAppointmentAsync(appointment, selection);
}

inline Windows::Foundation::IAsyncOperation<hstring> AppointmentManager::ShowAddAppointmentAsync(Windows::ApplicationModel::Appointments::Appointment const& appointment, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement)
{
    return get_activation_factory<AppointmentManager, Windows::ApplicationModel::Appointments::IAppointmentManagerStatics>().ShowAddAppointmentAsync(appointment, selection, preferredPlacement);
}

inline Windows::Foundation::IAsyncOperation<hstring> AppointmentManager::ShowReplaceAppointmentAsync(param::hstring const& appointmentId, Windows::ApplicationModel::Appointments::Appointment const& appointment, Windows::Foundation::Rect const& selection)
{
    return get_activation_factory<AppointmentManager, Windows::ApplicationModel::Appointments::IAppointmentManagerStatics>().ShowReplaceAppointmentAsync(appointmentId, appointment, selection);
}

inline Windows::Foundation::IAsyncOperation<hstring> AppointmentManager::ShowReplaceAppointmentAsync(param::hstring const& appointmentId, Windows::ApplicationModel::Appointments::Appointment const& appointment, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement)
{
    return get_activation_factory<AppointmentManager, Windows::ApplicationModel::Appointments::IAppointmentManagerStatics>().ShowReplaceAppointmentAsync(appointmentId, appointment, selection, preferredPlacement);
}

inline Windows::Foundation::IAsyncOperation<hstring> AppointmentManager::ShowReplaceAppointmentAsync(param::hstring const& appointmentId, Windows::ApplicationModel::Appointments::Appointment const& appointment, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement, Windows::Foundation::DateTime const& instanceStartDate)
{
    return get_activation_factory<AppointmentManager, Windows::ApplicationModel::Appointments::IAppointmentManagerStatics>().ShowReplaceAppointmentAsync(appointmentId, appointment, selection, preferredPlacement, instanceStartDate);
}

inline Windows::Foundation::IAsyncOperation<bool> AppointmentManager::ShowRemoveAppointmentAsync(param::hstring const& appointmentId, Windows::Foundation::Rect const& selection)
{
    return get_activation_factory<AppointmentManager, Windows::ApplicationModel::Appointments::IAppointmentManagerStatics>().ShowRemoveAppointmentAsync(appointmentId, selection);
}

inline Windows::Foundation::IAsyncOperation<bool> AppointmentManager::ShowRemoveAppointmentAsync(param::hstring const& appointmentId, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement)
{
    return get_activation_factory<AppointmentManager, Windows::ApplicationModel::Appointments::IAppointmentManagerStatics>().ShowRemoveAppointmentAsync(appointmentId, selection, preferredPlacement);
}

inline Windows::Foundation::IAsyncOperation<bool> AppointmentManager::ShowRemoveAppointmentAsync(param::hstring const& appointmentId, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement, Windows::Foundation::DateTime const& instanceStartDate)
{
    return get_activation_factory<AppointmentManager, Windows::ApplicationModel::Appointments::IAppointmentManagerStatics>().ShowRemoveAppointmentAsync(appointmentId, selection, preferredPlacement, instanceStartDate);
}

inline Windows::Foundation::IAsyncAction AppointmentManager::ShowTimeFrameAsync(Windows::Foundation::DateTime const& timeToShow, Windows::Foundation::TimeSpan const& duration)
{
    return get_activation_factory<AppointmentManager, Windows::ApplicationModel::Appointments::IAppointmentManagerStatics>().ShowTimeFrameAsync(timeToShow, duration);
}

inline Windows::Foundation::IAsyncAction AppointmentManager::ShowAppointmentDetailsAsync(param::hstring const& appointmentId)
{
    return get_activation_factory<AppointmentManager, Windows::ApplicationModel::Appointments::IAppointmentManagerStatics2>().ShowAppointmentDetailsAsync(appointmentId);
}

inline Windows::Foundation::IAsyncAction AppointmentManager::ShowAppointmentDetailsAsync(param::hstring const& appointmentId, Windows::Foundation::DateTime const& instanceStartDate)
{
    return get_activation_factory<AppointmentManager, Windows::ApplicationModel::Appointments::IAppointmentManagerStatics2>().ShowAppointmentDetailsAsync(appointmentId, instanceStartDate);
}

inline Windows::Foundation::IAsyncOperation<hstring> AppointmentManager::ShowEditNewAppointmentAsync(Windows::ApplicationModel::Appointments::Appointment const& appointment)
{
    return get_activation_factory<AppointmentManager, Windows::ApplicationModel::Appointments::IAppointmentManagerStatics2>().ShowEditNewAppointmentAsync(appointment);
}

inline Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::AppointmentStore> AppointmentManager::RequestStoreAsync(Windows::ApplicationModel::Appointments::AppointmentStoreAccessType const& options)
{
    return get_activation_factory<AppointmentManager, Windows::ApplicationModel::Appointments::IAppointmentManagerStatics2>().RequestStoreAsync(options);
}

inline Windows::ApplicationModel::Appointments::AppointmentManagerForUser AppointmentManager::GetForUser(Windows::System::User const& user)
{
    return get_activation_factory<AppointmentManager, Windows::ApplicationModel::Appointments::IAppointmentManagerStatics3>().GetForUser(user);
}

inline AppointmentOrganizer::AppointmentOrganizer() :
    AppointmentOrganizer(get_activation_factory<AppointmentOrganizer>().ActivateInstance<AppointmentOrganizer>())
{}

inline hstring AppointmentProperties::Subject()
{
    return get_activation_factory<AppointmentProperties, Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics>().Subject();
}

inline hstring AppointmentProperties::Location()
{
    return get_activation_factory<AppointmentProperties, Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics>().Location();
}

inline hstring AppointmentProperties::StartTime()
{
    return get_activation_factory<AppointmentProperties, Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics>().StartTime();
}

inline hstring AppointmentProperties::Duration()
{
    return get_activation_factory<AppointmentProperties, Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics>().Duration();
}

inline hstring AppointmentProperties::Reminder()
{
    return get_activation_factory<AppointmentProperties, Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics>().Reminder();
}

inline hstring AppointmentProperties::BusyStatus()
{
    return get_activation_factory<AppointmentProperties, Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics>().BusyStatus();
}

inline hstring AppointmentProperties::Sensitivity()
{
    return get_activation_factory<AppointmentProperties, Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics>().Sensitivity();
}

inline hstring AppointmentProperties::OriginalStartTime()
{
    return get_activation_factory<AppointmentProperties, Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics>().OriginalStartTime();
}

inline hstring AppointmentProperties::IsResponseRequested()
{
    return get_activation_factory<AppointmentProperties, Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics>().IsResponseRequested();
}

inline hstring AppointmentProperties::AllowNewTimeProposal()
{
    return get_activation_factory<AppointmentProperties, Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics>().AllowNewTimeProposal();
}

inline hstring AppointmentProperties::AllDay()
{
    return get_activation_factory<AppointmentProperties, Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics>().AllDay();
}

inline hstring AppointmentProperties::Details()
{
    return get_activation_factory<AppointmentProperties, Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics>().Details();
}

inline hstring AppointmentProperties::OnlineMeetingLink()
{
    return get_activation_factory<AppointmentProperties, Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics>().OnlineMeetingLink();
}

inline hstring AppointmentProperties::ReplyTime()
{
    return get_activation_factory<AppointmentProperties, Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics>().ReplyTime();
}

inline hstring AppointmentProperties::Organizer()
{
    return get_activation_factory<AppointmentProperties, Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics>().Organizer();
}

inline hstring AppointmentProperties::UserResponse()
{
    return get_activation_factory<AppointmentProperties, Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics>().UserResponse();
}

inline hstring AppointmentProperties::HasInvitees()
{
    return get_activation_factory<AppointmentProperties, Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics>().HasInvitees();
}

inline hstring AppointmentProperties::IsCanceledMeeting()
{
    return get_activation_factory<AppointmentProperties, Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics>().IsCanceledMeeting();
}

inline hstring AppointmentProperties::IsOrganizedByUser()
{
    return get_activation_factory<AppointmentProperties, Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics>().IsOrganizedByUser();
}

inline hstring AppointmentProperties::Recurrence()
{
    return get_activation_factory<AppointmentProperties, Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics>().Recurrence();
}

inline hstring AppointmentProperties::Uri()
{
    return get_activation_factory<AppointmentProperties, Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics>().Uri();
}

inline hstring AppointmentProperties::Invitees()
{
    return get_activation_factory<AppointmentProperties, Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics>().Invitees();
}

inline Windows::Foundation::Collections::IVector<hstring> AppointmentProperties::DefaultProperties()
{
    return get_activation_factory<AppointmentProperties, Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics>().DefaultProperties();
}

inline hstring AppointmentProperties::ChangeNumber()
{
    return get_activation_factory<AppointmentProperties, Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics2>().ChangeNumber();
}

inline hstring AppointmentProperties::RemoteChangeNumber()
{
    return get_activation_factory<AppointmentProperties, Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics2>().RemoteChangeNumber();
}

inline hstring AppointmentProperties::DetailsKind()
{
    return get_activation_factory<AppointmentProperties, Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics2>().DetailsKind();
}

inline AppointmentRecurrence::AppointmentRecurrence() :
    AppointmentRecurrence(get_activation_factory<AppointmentRecurrence>().ActivateInstance<AppointmentRecurrence>())
{}

inline FindAppointmentsOptions::FindAppointmentsOptions() :
    FindAppointmentsOptions(get_activation_factory<FindAppointmentsOptions>().ActivateInstance<FindAppointmentsOptions>())
{}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::ApplicationModel::Appointments::IAppointment> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Appointments::IAppointment> {};
template<> struct hash<winrt::Windows::ApplicationModel::Appointments::IAppointment2> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Appointments::IAppointment2> {};
template<> struct hash<winrt::Windows::ApplicationModel::Appointments::IAppointment3> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Appointments::IAppointment3> {};
template<> struct hash<winrt::Windows::ApplicationModel::Appointments::IAppointmentCalendar> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Appointments::IAppointmentCalendar> {};
template<> struct hash<winrt::Windows::ApplicationModel::Appointments::IAppointmentCalendar2> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Appointments::IAppointmentCalendar2> {};
template<> struct hash<winrt::Windows::ApplicationModel::Appointments::IAppointmentCalendar3> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Appointments::IAppointmentCalendar3> {};
template<> struct hash<winrt::Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager> {};
template<> struct hash<winrt::Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager2> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager2> {};
template<> struct hash<winrt::Windows::ApplicationModel::Appointments::IAppointmentConflictResult> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Appointments::IAppointmentConflictResult> {};
template<> struct hash<winrt::Windows::ApplicationModel::Appointments::IAppointmentException> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Appointments::IAppointmentException> {};
template<> struct hash<winrt::Windows::ApplicationModel::Appointments::IAppointmentInvitee> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Appointments::IAppointmentInvitee> {};
template<> struct hash<winrt::Windows::ApplicationModel::Appointments::IAppointmentManagerForUser> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Appointments::IAppointmentManagerForUser> {};
template<> struct hash<winrt::Windows::ApplicationModel::Appointments::IAppointmentManagerStatics> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Appointments::IAppointmentManagerStatics> {};
template<> struct hash<winrt::Windows::ApplicationModel::Appointments::IAppointmentManagerStatics2> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Appointments::IAppointmentManagerStatics2> {};
template<> struct hash<winrt::Windows::ApplicationModel::Appointments::IAppointmentManagerStatics3> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Appointments::IAppointmentManagerStatics3> {};
template<> struct hash<winrt::Windows::ApplicationModel::Appointments::IAppointmentParticipant> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Appointments::IAppointmentParticipant> {};
template<> struct hash<winrt::Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics> {};
template<> struct hash<winrt::Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics2> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics2> {};
template<> struct hash<winrt::Windows::ApplicationModel::Appointments::IAppointmentRecurrence> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Appointments::IAppointmentRecurrence> {};
template<> struct hash<winrt::Windows::ApplicationModel::Appointments::IAppointmentRecurrence2> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Appointments::IAppointmentRecurrence2> {};
template<> struct hash<winrt::Windows::ApplicationModel::Appointments::IAppointmentRecurrence3> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Appointments::IAppointmentRecurrence3> {};
template<> struct hash<winrt::Windows::ApplicationModel::Appointments::IAppointmentStore> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Appointments::IAppointmentStore> {};
template<> struct hash<winrt::Windows::ApplicationModel::Appointments::IAppointmentStore2> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Appointments::IAppointmentStore2> {};
template<> struct hash<winrt::Windows::ApplicationModel::Appointments::IAppointmentStore3> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Appointments::IAppointmentStore3> {};
template<> struct hash<winrt::Windows::ApplicationModel::Appointments::IAppointmentStoreChange> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Appointments::IAppointmentStoreChange> {};
template<> struct hash<winrt::Windows::ApplicationModel::Appointments::IAppointmentStoreChange2> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Appointments::IAppointmentStoreChange2> {};
template<> struct hash<winrt::Windows::ApplicationModel::Appointments::IAppointmentStoreChangeReader> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Appointments::IAppointmentStoreChangeReader> {};
template<> struct hash<winrt::Windows::ApplicationModel::Appointments::IAppointmentStoreChangeTracker> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Appointments::IAppointmentStoreChangeTracker> {};
template<> struct hash<winrt::Windows::ApplicationModel::Appointments::IAppointmentStoreChangeTracker2> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Appointments::IAppointmentStoreChangeTracker2> {};
template<> struct hash<winrt::Windows::ApplicationModel::Appointments::IAppointmentStoreChangedDeferral> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Appointments::IAppointmentStoreChangedDeferral> {};
template<> struct hash<winrt::Windows::ApplicationModel::Appointments::IAppointmentStoreChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Appointments::IAppointmentStoreChangedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Appointments::IAppointmentStoreNotificationTriggerDetails> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Appointments::IAppointmentStoreNotificationTriggerDetails> {};
template<> struct hash<winrt::Windows::ApplicationModel::Appointments::IFindAppointmentsOptions> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Appointments::IFindAppointmentsOptions> {};
template<> struct hash<winrt::Windows::ApplicationModel::Appointments::Appointment> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Appointments::Appointment> {};
template<> struct hash<winrt::Windows::ApplicationModel::Appointments::AppointmentCalendar> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Appointments::AppointmentCalendar> {};
template<> struct hash<winrt::Windows::ApplicationModel::Appointments::AppointmentCalendarSyncManager> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Appointments::AppointmentCalendarSyncManager> {};
template<> struct hash<winrt::Windows::ApplicationModel::Appointments::AppointmentConflictResult> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Appointments::AppointmentConflictResult> {};
template<> struct hash<winrt::Windows::ApplicationModel::Appointments::AppointmentException> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Appointments::AppointmentException> {};
template<> struct hash<winrt::Windows::ApplicationModel::Appointments::AppointmentInvitee> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Appointments::AppointmentInvitee> {};
template<> struct hash<winrt::Windows::ApplicationModel::Appointments::AppointmentManager> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Appointments::AppointmentManager> {};
template<> struct hash<winrt::Windows::ApplicationModel::Appointments::AppointmentManagerForUser> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Appointments::AppointmentManagerForUser> {};
template<> struct hash<winrt::Windows::ApplicationModel::Appointments::AppointmentOrganizer> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Appointments::AppointmentOrganizer> {};
template<> struct hash<winrt::Windows::ApplicationModel::Appointments::AppointmentProperties> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Appointments::AppointmentProperties> {};
template<> struct hash<winrt::Windows::ApplicationModel::Appointments::AppointmentRecurrence> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Appointments::AppointmentRecurrence> {};
template<> struct hash<winrt::Windows::ApplicationModel::Appointments::AppointmentStore> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Appointments::AppointmentStore> {};
template<> struct hash<winrt::Windows::ApplicationModel::Appointments::AppointmentStoreChange> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Appointments::AppointmentStoreChange> {};
template<> struct hash<winrt::Windows::ApplicationModel::Appointments::AppointmentStoreChangeReader> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Appointments::AppointmentStoreChangeReader> {};
template<> struct hash<winrt::Windows::ApplicationModel::Appointments::AppointmentStoreChangeTracker> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Appointments::AppointmentStoreChangeTracker> {};
template<> struct hash<winrt::Windows::ApplicationModel::Appointments::AppointmentStoreChangedDeferral> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Appointments::AppointmentStoreChangedDeferral> {};
template<> struct hash<winrt::Windows::ApplicationModel::Appointments::AppointmentStoreChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Appointments::AppointmentStoreChangedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Appointments::AppointmentStoreNotificationTriggerDetails> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Appointments::AppointmentStoreNotificationTriggerDetails> {};
template<> struct hash<winrt::Windows::ApplicationModel::Appointments::FindAppointmentsOptions> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Appointments::FindAppointmentsOptions> {};

}

WINRT_WARNING_POP
