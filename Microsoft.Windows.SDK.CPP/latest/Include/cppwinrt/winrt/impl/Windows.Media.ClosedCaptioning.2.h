// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Media_ClosedCaptioning_2_H
#define WINRT_Windows_Media_ClosedCaptioning_2_H
#include "winrt/impl/Windows.Media.ClosedCaptioning.1.h"
namespace winrt::Windows::Media::ClosedCaptioning
{
    struct ClosedCaptionProperties
    {
        ClosedCaptionProperties() = delete;
        [[nodiscard]] static auto FontColor();
        [[nodiscard]] static auto ComputedFontColor();
        [[nodiscard]] static auto FontOpacity();
        [[nodiscard]] static auto FontSize();
        [[nodiscard]] static auto FontStyle();
        [[nodiscard]] static auto FontEffect();
        [[nodiscard]] static auto BackgroundColor();
        [[nodiscard]] static auto ComputedBackgroundColor();
        [[nodiscard]] static auto BackgroundOpacity();
        [[nodiscard]] static auto RegionColor();
        [[nodiscard]] static auto ComputedRegionColor();
        [[nodiscard]] static auto RegionOpacity();
    };
}
#endif
