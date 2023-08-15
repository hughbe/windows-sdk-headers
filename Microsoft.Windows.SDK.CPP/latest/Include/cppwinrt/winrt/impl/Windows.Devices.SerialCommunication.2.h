// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Devices_SerialCommunication_2_H
#define WINRT_Windows_Devices_SerialCommunication_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Devices.SerialCommunication.1.h"
namespace winrt::Windows::Devices::SerialCommunication
{
    struct __declspec(empty_bases) ErrorReceivedEventArgs : Windows::Devices::SerialCommunication::IErrorReceivedEventArgs
    {
        ErrorReceivedEventArgs(std::nullptr_t) noexcept {}
        ErrorReceivedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::SerialCommunication::IErrorReceivedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PinChangedEventArgs : Windows::Devices::SerialCommunication::IPinChangedEventArgs
    {
        PinChangedEventArgs(std::nullptr_t) noexcept {}
        PinChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::SerialCommunication::IPinChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) SerialDevice : Windows::Devices::SerialCommunication::ISerialDevice
    {
        SerialDevice(std::nullptr_t) noexcept {}
        SerialDevice(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::SerialCommunication::ISerialDevice(ptr, take_ownership_from_abi) {}
        static auto GetDeviceSelector();
        static auto GetDeviceSelector(param::hstring const& portName);
        static auto GetDeviceSelectorFromUsbVidPid(uint16_t vendorId, uint16_t productId);
        static auto FromIdAsync(param::hstring const& deviceId);
    };
}
#endif
