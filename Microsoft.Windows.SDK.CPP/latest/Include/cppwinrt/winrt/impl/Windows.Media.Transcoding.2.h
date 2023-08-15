// C++/WinRT v2.0.200609.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Media_Transcoding_2_H
#define WINRT_Windows_Media_Transcoding_2_H
#include "winrt/impl/Windows.Media.Transcoding.1.h"
WINRT_EXPORT namespace winrt::Windows::Media::Transcoding
{
    struct __declspec(empty_bases) MediaTranscoder : Windows::Media::Transcoding::IMediaTranscoder,
        impl::require<MediaTranscoder, Windows::Media::Transcoding::IMediaTranscoder2>
    {
        MediaTranscoder(std::nullptr_t) noexcept {}
        MediaTranscoder(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Transcoding::IMediaTranscoder(ptr, take_ownership_from_abi) {}
        MediaTranscoder();
    };
    struct __declspec(empty_bases) PrepareTranscodeResult : Windows::Media::Transcoding::IPrepareTranscodeResult
    {
        PrepareTranscodeResult(std::nullptr_t) noexcept {}
        PrepareTranscodeResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::Transcoding::IPrepareTranscodeResult(ptr, take_ownership_from_abi) {}
    };
}
#endif
