// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Media_AppRecording_1_H
#define WINRT_Windows_Media_AppRecording_1_H
#include "winrt/impl/Windows.Media.AppRecording.0.h"
namespace winrt::Windows::Media::AppRecording
{
    struct __declspec(empty_bases) IAppRecordingManager :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAppRecordingManager>
    {
        IAppRecordingManager(std::nullptr_t = nullptr) noexcept {}
        IAppRecordingManager(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAppRecordingManagerStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAppRecordingManagerStatics>
    {
        IAppRecordingManagerStatics(std::nullptr_t = nullptr) noexcept {}
        IAppRecordingManagerStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAppRecordingResult :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAppRecordingResult>
    {
        IAppRecordingResult(std::nullptr_t = nullptr) noexcept {}
        IAppRecordingResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAppRecordingSaveScreenshotResult :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAppRecordingSaveScreenshotResult>
    {
        IAppRecordingSaveScreenshotResult(std::nullptr_t = nullptr) noexcept {}
        IAppRecordingSaveScreenshotResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAppRecordingSavedScreenshotInfo :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAppRecordingSavedScreenshotInfo>
    {
        IAppRecordingSavedScreenshotInfo(std::nullptr_t = nullptr) noexcept {}
        IAppRecordingSavedScreenshotInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAppRecordingStatus :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAppRecordingStatus>
    {
        IAppRecordingStatus(std::nullptr_t = nullptr) noexcept {}
        IAppRecordingStatus(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAppRecordingStatusDetails :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAppRecordingStatusDetails>
    {
        IAppRecordingStatusDetails(std::nullptr_t = nullptr) noexcept {}
        IAppRecordingStatusDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
