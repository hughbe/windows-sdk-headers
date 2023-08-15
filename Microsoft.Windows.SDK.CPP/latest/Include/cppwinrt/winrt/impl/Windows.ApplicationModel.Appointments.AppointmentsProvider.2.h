﻿// C++/WinRT v1.0.190111.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/impl/Windows.ApplicationModel.Appointments.1.h"
#include "winrt/impl/Windows.ApplicationModel.Appointments.AppointmentsProvider.1.h"

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Appointments::AppointmentsProvider {

}

namespace winrt::impl {

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Appointments::AppointmentsProvider {

struct WINRT_EBO AddAppointmentOperation :
    Windows::ApplicationModel::Appointments::AppointmentsProvider::IAddAppointmentOperation
{
    AddAppointmentOperation(std::nullptr_t) noexcept {}
};

struct AppointmentsProviderLaunchActionVerbs
{
    AppointmentsProviderLaunchActionVerbs() = delete;
    static hstring AddAppointment();
    static hstring ReplaceAppointment();
    static hstring RemoveAppointment();
    static hstring ShowTimeFrame();
    static hstring ShowAppointmentDetails();
};

struct WINRT_EBO RemoveAppointmentOperation :
    Windows::ApplicationModel::Appointments::AppointmentsProvider::IRemoveAppointmentOperation
{
    RemoveAppointmentOperation(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ReplaceAppointmentOperation :
    Windows::ApplicationModel::Appointments::AppointmentsProvider::IReplaceAppointmentOperation
{
    ReplaceAppointmentOperation(std::nullptr_t) noexcept {}
};

}
