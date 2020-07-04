// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Graphics.DirectX.Direct3D11.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.Graphics.Imaging.2.h"
#include "winrt/Windows.Graphics.h"

namespace winrt::impl {

template <typename D> int32_t consume_Windows_Graphics_Imaging_IBitmapBuffer<D>::GetPlaneCount() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::IBitmapBuffer)->GetPlaneCount(&value));
    return value;
}

template <typename D> Windows::Graphics::Imaging::BitmapPlaneDescription consume_Windows_Graphics_Imaging_IBitmapBuffer<D>::GetPlaneDescription(int32_t index) const
{
    Windows::Graphics::Imaging::BitmapPlaneDescription value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::IBitmapBuffer)->GetPlaneDescription(index, put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Graphics_Imaging_IBitmapCodecInformation<D>::CodecId() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::IBitmapCodecInformation)->get_CodecId(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> consume_Windows_Graphics_Imaging_IBitmapCodecInformation<D>::FileExtensions() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::IBitmapCodecInformation)->get_FileExtensions(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Graphics_Imaging_IBitmapCodecInformation<D>::FriendlyName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::IBitmapCodecInformation)->get_FriendlyName(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> consume_Windows_Graphics_Imaging_IBitmapCodecInformation<D>::MimeTypes() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::IBitmapCodecInformation)->get_MimeTypes(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Imaging::BitmapPropertiesView consume_Windows_Graphics_Imaging_IBitmapDecoder<D>::BitmapContainerProperties() const
{
    Windows::Graphics::Imaging::BitmapPropertiesView value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::IBitmapDecoder)->get_BitmapContainerProperties(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Imaging::BitmapCodecInformation consume_Windows_Graphics_Imaging_IBitmapDecoder<D>::DecoderInformation() const
{
    Windows::Graphics::Imaging::BitmapCodecInformation value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::IBitmapDecoder)->get_DecoderInformation(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Graphics_Imaging_IBitmapDecoder<D>::FrameCount() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::IBitmapDecoder)->get_FrameCount(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::ImageStream> consume_Windows_Graphics_Imaging_IBitmapDecoder<D>::GetPreviewAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::ImageStream> asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::IBitmapDecoder)->GetPreviewAsync(put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::BitmapFrame> consume_Windows_Graphics_Imaging_IBitmapDecoder<D>::GetFrameAsync(uint32_t frameIndex) const
{
    Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::BitmapFrame> asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::IBitmapDecoder)->GetFrameAsync(frameIndex, put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> GUID consume_Windows_Graphics_Imaging_IBitmapDecoderStatics<D>::BmpDecoderId() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::IBitmapDecoderStatics)->get_BmpDecoderId(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Graphics_Imaging_IBitmapDecoderStatics<D>::JpegDecoderId() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::IBitmapDecoderStatics)->get_JpegDecoderId(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Graphics_Imaging_IBitmapDecoderStatics<D>::PngDecoderId() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::IBitmapDecoderStatics)->get_PngDecoderId(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Graphics_Imaging_IBitmapDecoderStatics<D>::TiffDecoderId() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::IBitmapDecoderStatics)->get_TiffDecoderId(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Graphics_Imaging_IBitmapDecoderStatics<D>::GifDecoderId() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::IBitmapDecoderStatics)->get_GifDecoderId(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Graphics_Imaging_IBitmapDecoderStatics<D>::JpegXRDecoderId() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::IBitmapDecoderStatics)->get_JpegXRDecoderId(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Graphics_Imaging_IBitmapDecoderStatics<D>::IcoDecoderId() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::IBitmapDecoderStatics)->get_IcoDecoderId(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Graphics::Imaging::BitmapCodecInformation> consume_Windows_Graphics_Imaging_IBitmapDecoderStatics<D>::GetDecoderInformationEnumerator() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Graphics::Imaging::BitmapCodecInformation> decoderInformationEnumerator{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::IBitmapDecoderStatics)->GetDecoderInformationEnumerator(put_abi(decoderInformationEnumerator)));
    return decoderInformationEnumerator;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::BitmapDecoder> consume_Windows_Graphics_Imaging_IBitmapDecoderStatics<D>::CreateAsync(Windows::Storage::Streams::IRandomAccessStream const& stream) const
{
    Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::BitmapDecoder> asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::IBitmapDecoderStatics)->CreateAsync(get_abi(stream), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::BitmapDecoder> consume_Windows_Graphics_Imaging_IBitmapDecoderStatics<D>::CreateAsync(GUID const& decoderId, Windows::Storage::Streams::IRandomAccessStream const& stream) const
{
    Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::BitmapDecoder> asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::IBitmapDecoderStatics)->CreateWithIdAsync(get_abi(decoderId), get_abi(stream), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Graphics::Imaging::BitmapCodecInformation consume_Windows_Graphics_Imaging_IBitmapEncoder<D>::EncoderInformation() const
{
    Windows::Graphics::Imaging::BitmapCodecInformation value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::IBitmapEncoder)->get_EncoderInformation(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Imaging::BitmapProperties consume_Windows_Graphics_Imaging_IBitmapEncoder<D>::BitmapProperties() const
{
    Windows::Graphics::Imaging::BitmapProperties value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::IBitmapEncoder)->get_BitmapProperties(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Imaging::BitmapProperties consume_Windows_Graphics_Imaging_IBitmapEncoder<D>::BitmapContainerProperties() const
{
    Windows::Graphics::Imaging::BitmapProperties value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::IBitmapEncoder)->get_BitmapContainerProperties(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Graphics_Imaging_IBitmapEncoder<D>::IsThumbnailGenerated() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::IBitmapEncoder)->get_IsThumbnailGenerated(&value));
    return value;
}

template <typename D> void consume_Windows_Graphics_Imaging_IBitmapEncoder<D>::IsThumbnailGenerated(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::IBitmapEncoder)->put_IsThumbnailGenerated(value));
}

template <typename D> uint32_t consume_Windows_Graphics_Imaging_IBitmapEncoder<D>::GeneratedThumbnailWidth() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::IBitmapEncoder)->get_GeneratedThumbnailWidth(&value));
    return value;
}

template <typename D> void consume_Windows_Graphics_Imaging_IBitmapEncoder<D>::GeneratedThumbnailWidth(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::IBitmapEncoder)->put_GeneratedThumbnailWidth(value));
}

template <typename D> uint32_t consume_Windows_Graphics_Imaging_IBitmapEncoder<D>::GeneratedThumbnailHeight() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::IBitmapEncoder)->get_GeneratedThumbnailHeight(&value));
    return value;
}

template <typename D> void consume_Windows_Graphics_Imaging_IBitmapEncoder<D>::GeneratedThumbnailHeight(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::IBitmapEncoder)->put_GeneratedThumbnailHeight(value));
}

template <typename D> Windows::Graphics::Imaging::BitmapTransform consume_Windows_Graphics_Imaging_IBitmapEncoder<D>::BitmapTransform() const
{
    Windows::Graphics::Imaging::BitmapTransform value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::IBitmapEncoder)->get_BitmapTransform(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Imaging_IBitmapEncoder<D>::SetPixelData(Windows::Graphics::Imaging::BitmapPixelFormat const& pixelFormat, Windows::Graphics::Imaging::BitmapAlphaMode const& alphaMode, uint32_t width, uint32_t height, double dpiX, double dpiY, array_view<uint8_t const> pixels) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::IBitmapEncoder)->SetPixelData(get_abi(pixelFormat), get_abi(alphaMode), width, height, dpiX, dpiY, pixels.size(), get_abi(pixels)));
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Graphics_Imaging_IBitmapEncoder<D>::GoToNextFrameAsync() const
{
    Windows::Foundation::IAsyncAction asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::IBitmapEncoder)->GoToNextFrameAsync(put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Graphics_Imaging_IBitmapEncoder<D>::GoToNextFrameAsync(param::async_iterable<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::Graphics::Imaging::BitmapTypedValue>> const& encodingOptions) const
{
    Windows::Foundation::IAsyncAction asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::IBitmapEncoder)->GoToNextFrameWithEncodingOptionsAsync(get_abi(encodingOptions), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Graphics_Imaging_IBitmapEncoder<D>::FlushAsync() const
{
    Windows::Foundation::IAsyncAction asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::IBitmapEncoder)->FlushAsync(put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> GUID consume_Windows_Graphics_Imaging_IBitmapEncoderStatics<D>::BmpEncoderId() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::IBitmapEncoderStatics)->get_BmpEncoderId(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Graphics_Imaging_IBitmapEncoderStatics<D>::JpegEncoderId() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::IBitmapEncoderStatics)->get_JpegEncoderId(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Graphics_Imaging_IBitmapEncoderStatics<D>::PngEncoderId() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::IBitmapEncoderStatics)->get_PngEncoderId(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Graphics_Imaging_IBitmapEncoderStatics<D>::TiffEncoderId() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::IBitmapEncoderStatics)->get_TiffEncoderId(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Graphics_Imaging_IBitmapEncoderStatics<D>::GifEncoderId() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::IBitmapEncoderStatics)->get_GifEncoderId(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Graphics_Imaging_IBitmapEncoderStatics<D>::JpegXREncoderId() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::IBitmapEncoderStatics)->get_JpegXREncoderId(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Graphics::Imaging::BitmapCodecInformation> consume_Windows_Graphics_Imaging_IBitmapEncoderStatics<D>::GetEncoderInformationEnumerator() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Graphics::Imaging::BitmapCodecInformation> encoderInformationEnumerator{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::IBitmapEncoderStatics)->GetEncoderInformationEnumerator(put_abi(encoderInformationEnumerator)));
    return encoderInformationEnumerator;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::BitmapEncoder> consume_Windows_Graphics_Imaging_IBitmapEncoderStatics<D>::CreateAsync(GUID const& encoderId, Windows::Storage::Streams::IRandomAccessStream const& stream) const
{
    Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::BitmapEncoder> asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::IBitmapEncoderStatics)->CreateAsync(get_abi(encoderId), get_abi(stream), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::BitmapEncoder> consume_Windows_Graphics_Imaging_IBitmapEncoderStatics<D>::CreateAsync(GUID const& encoderId, Windows::Storage::Streams::IRandomAccessStream const& stream, param::async_iterable<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::Graphics::Imaging::BitmapTypedValue>> const& encodingOptions) const
{
    Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::BitmapEncoder> asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::IBitmapEncoderStatics)->CreateWithEncodingOptionsAsync(get_abi(encoderId), get_abi(stream), get_abi(encodingOptions), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::BitmapEncoder> consume_Windows_Graphics_Imaging_IBitmapEncoderStatics<D>::CreateForTranscodingAsync(Windows::Storage::Streams::IRandomAccessStream const& stream, Windows::Graphics::Imaging::BitmapDecoder const& bitmapDecoder) const
{
    Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::BitmapEncoder> asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::IBitmapEncoderStatics)->CreateForTranscodingAsync(get_abi(stream), get_abi(bitmapDecoder), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::BitmapEncoder> consume_Windows_Graphics_Imaging_IBitmapEncoderStatics<D>::CreateForInPlacePropertyEncodingAsync(Windows::Graphics::Imaging::BitmapDecoder const& bitmapDecoder) const
{
    Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::BitmapEncoder> asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::IBitmapEncoderStatics)->CreateForInPlacePropertyEncodingAsync(get_abi(bitmapDecoder), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> void consume_Windows_Graphics_Imaging_IBitmapEncoderWithSoftwareBitmap<D>::SetSoftwareBitmap(Windows::Graphics::Imaging::SoftwareBitmap const& bitmap) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::IBitmapEncoderWithSoftwareBitmap)->SetSoftwareBitmap(get_abi(bitmap)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::ImageStream> consume_Windows_Graphics_Imaging_IBitmapFrame<D>::GetThumbnailAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::ImageStream> asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::IBitmapFrame)->GetThumbnailAsync(put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Graphics::Imaging::BitmapPropertiesView consume_Windows_Graphics_Imaging_IBitmapFrame<D>::BitmapProperties() const
{
    Windows::Graphics::Imaging::BitmapPropertiesView value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::IBitmapFrame)->get_BitmapProperties(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Imaging::BitmapPixelFormat consume_Windows_Graphics_Imaging_IBitmapFrame<D>::BitmapPixelFormat() const
{
    Windows::Graphics::Imaging::BitmapPixelFormat value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::IBitmapFrame)->get_BitmapPixelFormat(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Imaging::BitmapAlphaMode consume_Windows_Graphics_Imaging_IBitmapFrame<D>::BitmapAlphaMode() const
{
    Windows::Graphics::Imaging::BitmapAlphaMode value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::IBitmapFrame)->get_BitmapAlphaMode(put_abi(value)));
    return value;
}

template <typename D> double consume_Windows_Graphics_Imaging_IBitmapFrame<D>::DpiX() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::IBitmapFrame)->get_DpiX(&value));
    return value;
}

template <typename D> double consume_Windows_Graphics_Imaging_IBitmapFrame<D>::DpiY() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::IBitmapFrame)->get_DpiY(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Graphics_Imaging_IBitmapFrame<D>::PixelWidth() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::IBitmapFrame)->get_PixelWidth(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Graphics_Imaging_IBitmapFrame<D>::PixelHeight() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::IBitmapFrame)->get_PixelHeight(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Graphics_Imaging_IBitmapFrame<D>::OrientedPixelWidth() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::IBitmapFrame)->get_OrientedPixelWidth(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Graphics_Imaging_IBitmapFrame<D>::OrientedPixelHeight() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::IBitmapFrame)->get_OrientedPixelHeight(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::PixelDataProvider> consume_Windows_Graphics_Imaging_IBitmapFrame<D>::GetPixelDataAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::PixelDataProvider> asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::IBitmapFrame)->GetPixelDataAsync(put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::PixelDataProvider> consume_Windows_Graphics_Imaging_IBitmapFrame<D>::GetPixelDataAsync(Windows::Graphics::Imaging::BitmapPixelFormat const& pixelFormat, Windows::Graphics::Imaging::BitmapAlphaMode const& alphaMode, Windows::Graphics::Imaging::BitmapTransform const& transform, Windows::Graphics::Imaging::ExifOrientationMode const& exifOrientationMode, Windows::Graphics::Imaging::ColorManagementMode const& colorManagementMode) const
{
    Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::PixelDataProvider> asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::IBitmapFrame)->GetPixelDataTransformedAsync(get_abi(pixelFormat), get_abi(alphaMode), get_abi(transform), get_abi(exifOrientationMode), get_abi(colorManagementMode), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::SoftwareBitmap> consume_Windows_Graphics_Imaging_IBitmapFrameWithSoftwareBitmap<D>::GetSoftwareBitmapAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::SoftwareBitmap> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::IBitmapFrameWithSoftwareBitmap)->GetSoftwareBitmapAsync(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::SoftwareBitmap> consume_Windows_Graphics_Imaging_IBitmapFrameWithSoftwareBitmap<D>::GetSoftwareBitmapAsync(Windows::Graphics::Imaging::BitmapPixelFormat const& pixelFormat, Windows::Graphics::Imaging::BitmapAlphaMode const& alphaMode) const
{
    Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::SoftwareBitmap> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::IBitmapFrameWithSoftwareBitmap)->GetSoftwareBitmapConvertedAsync(get_abi(pixelFormat), get_abi(alphaMode), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::SoftwareBitmap> consume_Windows_Graphics_Imaging_IBitmapFrameWithSoftwareBitmap<D>::GetSoftwareBitmapAsync(Windows::Graphics::Imaging::BitmapPixelFormat const& pixelFormat, Windows::Graphics::Imaging::BitmapAlphaMode const& alphaMode, Windows::Graphics::Imaging::BitmapTransform const& transform, Windows::Graphics::Imaging::ExifOrientationMode const& exifOrientationMode, Windows::Graphics::Imaging::ColorManagementMode const& colorManagementMode) const
{
    Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::SoftwareBitmap> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::IBitmapFrameWithSoftwareBitmap)->GetSoftwareBitmapTransformedAsync(get_abi(pixelFormat), get_abi(alphaMode), get_abi(transform), get_abi(exifOrientationMode), get_abi(colorManagementMode), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Graphics_Imaging_IBitmapProperties<D>::SetPropertiesAsync(param::async_iterable<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::Graphics::Imaging::BitmapTypedValue>> const& propertiesToSet) const
{
    Windows::Foundation::IAsyncAction asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::IBitmapProperties)->SetPropertiesAsync(get_abi(propertiesToSet), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::BitmapPropertySet> consume_Windows_Graphics_Imaging_IBitmapPropertiesView<D>::GetPropertiesAsync(param::async_iterable<hstring> const& propertiesToRetrieve) const
{
    Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::BitmapPropertySet> asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::IBitmapPropertiesView)->GetPropertiesAsync(get_abi(propertiesToRetrieve), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> uint32_t consume_Windows_Graphics_Imaging_IBitmapTransform<D>::ScaledWidth() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::IBitmapTransform)->get_ScaledWidth(&value));
    return value;
}

template <typename D> void consume_Windows_Graphics_Imaging_IBitmapTransform<D>::ScaledWidth(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::IBitmapTransform)->put_ScaledWidth(value));
}

template <typename D> uint32_t consume_Windows_Graphics_Imaging_IBitmapTransform<D>::ScaledHeight() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::IBitmapTransform)->get_ScaledHeight(&value));
    return value;
}

template <typename D> void consume_Windows_Graphics_Imaging_IBitmapTransform<D>::ScaledHeight(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::IBitmapTransform)->put_ScaledHeight(value));
}

template <typename D> Windows::Graphics::Imaging::BitmapInterpolationMode consume_Windows_Graphics_Imaging_IBitmapTransform<D>::InterpolationMode() const
{
    Windows::Graphics::Imaging::BitmapInterpolationMode value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::IBitmapTransform)->get_InterpolationMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Imaging_IBitmapTransform<D>::InterpolationMode(Windows::Graphics::Imaging::BitmapInterpolationMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::IBitmapTransform)->put_InterpolationMode(get_abi(value)));
}

template <typename D> Windows::Graphics::Imaging::BitmapFlip consume_Windows_Graphics_Imaging_IBitmapTransform<D>::Flip() const
{
    Windows::Graphics::Imaging::BitmapFlip value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::IBitmapTransform)->get_Flip(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Imaging_IBitmapTransform<D>::Flip(Windows::Graphics::Imaging::BitmapFlip const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::IBitmapTransform)->put_Flip(get_abi(value)));
}

template <typename D> Windows::Graphics::Imaging::BitmapRotation consume_Windows_Graphics_Imaging_IBitmapTransform<D>::Rotation() const
{
    Windows::Graphics::Imaging::BitmapRotation value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::IBitmapTransform)->get_Rotation(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Imaging_IBitmapTransform<D>::Rotation(Windows::Graphics::Imaging::BitmapRotation const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::IBitmapTransform)->put_Rotation(get_abi(value)));
}

template <typename D> Windows::Graphics::Imaging::BitmapBounds consume_Windows_Graphics_Imaging_IBitmapTransform<D>::Bounds() const
{
    Windows::Graphics::Imaging::BitmapBounds value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::IBitmapTransform)->get_Bounds(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Imaging_IBitmapTransform<D>::Bounds(Windows::Graphics::Imaging::BitmapBounds const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::IBitmapTransform)->put_Bounds(get_abi(value)));
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_Graphics_Imaging_IBitmapTypedValue<D>::Value() const
{
    Windows::Foundation::IInspectable value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::IBitmapTypedValue)->get_Value(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::PropertyType consume_Windows_Graphics_Imaging_IBitmapTypedValue<D>::Type() const
{
    Windows::Foundation::PropertyType value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::IBitmapTypedValue)->get_Type(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Imaging::BitmapTypedValue consume_Windows_Graphics_Imaging_IBitmapTypedValueFactory<D>::Create(Windows::Foundation::IInspectable const& value, Windows::Foundation::PropertyType const& type) const
{
    Windows::Graphics::Imaging::BitmapTypedValue bitmapTypedValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::IBitmapTypedValueFactory)->Create(get_abi(value), get_abi(type), put_abi(bitmapTypedValue)));
    return bitmapTypedValue;
}

template <typename D> com_array<uint8_t> consume_Windows_Graphics_Imaging_IPixelDataProvider<D>::DetachPixelData() const
{
    com_array<uint8_t> pixelData;
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::IPixelDataProvider)->DetachPixelData(impl::put_size_abi(pixelData), put_abi(pixelData)));
    return pixelData;
}

template <typename D> Windows::Graphics::Imaging::BitmapPixelFormat consume_Windows_Graphics_Imaging_ISoftwareBitmap<D>::BitmapPixelFormat() const
{
    Windows::Graphics::Imaging::BitmapPixelFormat value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::ISoftwareBitmap)->get_BitmapPixelFormat(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Imaging::BitmapAlphaMode consume_Windows_Graphics_Imaging_ISoftwareBitmap<D>::BitmapAlphaMode() const
{
    Windows::Graphics::Imaging::BitmapAlphaMode value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::ISoftwareBitmap)->get_BitmapAlphaMode(put_abi(value)));
    return value;
}

template <typename D> int32_t consume_Windows_Graphics_Imaging_ISoftwareBitmap<D>::PixelWidth() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::ISoftwareBitmap)->get_PixelWidth(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Graphics_Imaging_ISoftwareBitmap<D>::PixelHeight() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::ISoftwareBitmap)->get_PixelHeight(&value));
    return value;
}

template <typename D> bool consume_Windows_Graphics_Imaging_ISoftwareBitmap<D>::IsReadOnly() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::ISoftwareBitmap)->get_IsReadOnly(&value));
    return value;
}

template <typename D> void consume_Windows_Graphics_Imaging_ISoftwareBitmap<D>::DpiX(double value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::ISoftwareBitmap)->put_DpiX(value));
}

template <typename D> double consume_Windows_Graphics_Imaging_ISoftwareBitmap<D>::DpiX() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::ISoftwareBitmap)->get_DpiX(&value));
    return value;
}

template <typename D> void consume_Windows_Graphics_Imaging_ISoftwareBitmap<D>::DpiY(double value) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::ISoftwareBitmap)->put_DpiY(value));
}

template <typename D> double consume_Windows_Graphics_Imaging_ISoftwareBitmap<D>::DpiY() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::ISoftwareBitmap)->get_DpiY(&value));
    return value;
}

template <typename D> Windows::Graphics::Imaging::BitmapBuffer consume_Windows_Graphics_Imaging_ISoftwareBitmap<D>::LockBuffer(Windows::Graphics::Imaging::BitmapBufferAccessMode const& mode) const
{
    Windows::Graphics::Imaging::BitmapBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::ISoftwareBitmap)->LockBuffer(get_abi(mode), put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Imaging_ISoftwareBitmap<D>::CopyTo(Windows::Graphics::Imaging::SoftwareBitmap const& bitmap) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::ISoftwareBitmap)->CopyTo(get_abi(bitmap)));
}

template <typename D> void consume_Windows_Graphics_Imaging_ISoftwareBitmap<D>::CopyFromBuffer(Windows::Storage::Streams::IBuffer const& buffer) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::ISoftwareBitmap)->CopyFromBuffer(get_abi(buffer)));
}

template <typename D> void consume_Windows_Graphics_Imaging_ISoftwareBitmap<D>::CopyToBuffer(Windows::Storage::Streams::IBuffer const& buffer) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::ISoftwareBitmap)->CopyToBuffer(get_abi(buffer)));
}

template <typename D> Windows::Graphics::Imaging::SoftwareBitmap consume_Windows_Graphics_Imaging_ISoftwareBitmap<D>::GetReadOnlyView() const
{
    Windows::Graphics::Imaging::SoftwareBitmap value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::ISoftwareBitmap)->GetReadOnlyView(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Imaging::SoftwareBitmap consume_Windows_Graphics_Imaging_ISoftwareBitmapFactory<D>::Create(Windows::Graphics::Imaging::BitmapPixelFormat const& format, int32_t width, int32_t height) const
{
    Windows::Graphics::Imaging::SoftwareBitmap value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::ISoftwareBitmapFactory)->Create(get_abi(format), width, height, put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Imaging::SoftwareBitmap consume_Windows_Graphics_Imaging_ISoftwareBitmapFactory<D>::CreateWithAlpha(Windows::Graphics::Imaging::BitmapPixelFormat const& format, int32_t width, int32_t height, Windows::Graphics::Imaging::BitmapAlphaMode const& alpha) const
{
    Windows::Graphics::Imaging::SoftwareBitmap value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::ISoftwareBitmapFactory)->CreateWithAlpha(get_abi(format), width, height, get_abi(alpha), put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Imaging::SoftwareBitmap consume_Windows_Graphics_Imaging_ISoftwareBitmapStatics<D>::Copy(Windows::Graphics::Imaging::SoftwareBitmap const& source) const
{
    Windows::Graphics::Imaging::SoftwareBitmap value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::ISoftwareBitmapStatics)->Copy(get_abi(source), put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Imaging::SoftwareBitmap consume_Windows_Graphics_Imaging_ISoftwareBitmapStatics<D>::Convert(Windows::Graphics::Imaging::SoftwareBitmap const& source, Windows::Graphics::Imaging::BitmapPixelFormat const& format) const
{
    Windows::Graphics::Imaging::SoftwareBitmap value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::ISoftwareBitmapStatics)->Convert(get_abi(source), get_abi(format), put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Imaging::SoftwareBitmap consume_Windows_Graphics_Imaging_ISoftwareBitmapStatics<D>::Convert(Windows::Graphics::Imaging::SoftwareBitmap const& source, Windows::Graphics::Imaging::BitmapPixelFormat const& format, Windows::Graphics::Imaging::BitmapAlphaMode const& alpha) const
{
    Windows::Graphics::Imaging::SoftwareBitmap value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::ISoftwareBitmapStatics)->ConvertWithAlpha(get_abi(source), get_abi(format), get_abi(alpha), put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Imaging::SoftwareBitmap consume_Windows_Graphics_Imaging_ISoftwareBitmapStatics<D>::CreateCopyFromBuffer(Windows::Storage::Streams::IBuffer const& source, Windows::Graphics::Imaging::BitmapPixelFormat const& format, int32_t width, int32_t height) const
{
    Windows::Graphics::Imaging::SoftwareBitmap value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::ISoftwareBitmapStatics)->CreateCopyFromBuffer(get_abi(source), get_abi(format), width, height, put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Imaging::SoftwareBitmap consume_Windows_Graphics_Imaging_ISoftwareBitmapStatics<D>::CreateCopyFromBuffer(Windows::Storage::Streams::IBuffer const& source, Windows::Graphics::Imaging::BitmapPixelFormat const& format, int32_t width, int32_t height, Windows::Graphics::Imaging::BitmapAlphaMode const& alpha) const
{
    Windows::Graphics::Imaging::SoftwareBitmap value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::ISoftwareBitmapStatics)->CreateCopyWithAlphaFromBuffer(get_abi(source), get_abi(format), width, height, get_abi(alpha), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::SoftwareBitmap> consume_Windows_Graphics_Imaging_ISoftwareBitmapStatics<D>::CreateCopyFromSurfaceAsync(Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const& surface) const
{
    Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::SoftwareBitmap> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::ISoftwareBitmapStatics)->CreateCopyFromSurfaceAsync(get_abi(surface), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::SoftwareBitmap> consume_Windows_Graphics_Imaging_ISoftwareBitmapStatics<D>::CreateCopyFromSurfaceAsync(Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const& surface, Windows::Graphics::Imaging::BitmapAlphaMode const& alpha) const
{
    Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::SoftwareBitmap> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Imaging::ISoftwareBitmapStatics)->CreateCopyWithAlphaFromSurfaceAsync(get_abi(surface), get_abi(alpha), put_abi(value)));
    return value;
}

template <typename D>
struct produce<D, Windows::Graphics::Imaging::IBitmapBuffer> : produce_base<D, Windows::Graphics::Imaging::IBitmapBuffer>
{
    HRESULT __stdcall GetPlaneCount(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().GetPlaneCount());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetPlaneDescription(int32_t index, struct struct_Windows_Graphics_Imaging_BitmapPlaneDescription* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Imaging::BitmapPlaneDescription>(this->shim().GetPlaneDescription(index));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Imaging::IBitmapCodecInformation> : produce_base<D, Windows::Graphics::Imaging::IBitmapCodecInformation>
{
    HRESULT __stdcall get_CodecId(GUID* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<GUID>(this->shim().CodecId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_FileExtensions(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<hstring>>(this->shim().FileExtensions());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_FriendlyName(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().FriendlyName());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_MimeTypes(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<hstring>>(this->shim().MimeTypes());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Imaging::IBitmapDecoder> : produce_base<D, Windows::Graphics::Imaging::IBitmapDecoder>
{
    HRESULT __stdcall get_BitmapContainerProperties(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Imaging::BitmapPropertiesView>(this->shim().BitmapContainerProperties());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DecoderInformation(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Imaging::BitmapCodecInformation>(this->shim().DecoderInformation());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_FrameCount(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().FrameCount());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetPreviewAsync(void** asyncInfo) noexcept final
    {
        try
        {
            *asyncInfo = nullptr;
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::ImageStream>>(this->shim().GetPreviewAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetFrameAsync(uint32_t frameIndex, void** asyncInfo) noexcept final
    {
        try
        {
            *asyncInfo = nullptr;
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::BitmapFrame>>(this->shim().GetFrameAsync(frameIndex));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Imaging::IBitmapDecoderStatics> : produce_base<D, Windows::Graphics::Imaging::IBitmapDecoderStatics>
{
    HRESULT __stdcall get_BmpDecoderId(GUID* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<GUID>(this->shim().BmpDecoderId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_JpegDecoderId(GUID* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<GUID>(this->shim().JpegDecoderId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PngDecoderId(GUID* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<GUID>(this->shim().PngDecoderId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TiffDecoderId(GUID* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<GUID>(this->shim().TiffDecoderId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_GifDecoderId(GUID* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<GUID>(this->shim().GifDecoderId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_JpegXRDecoderId(GUID* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<GUID>(this->shim().JpegXRDecoderId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IcoDecoderId(GUID* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<GUID>(this->shim().IcoDecoderId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetDecoderInformationEnumerator(void** decoderInformationEnumerator) noexcept final
    {
        try
        {
            *decoderInformationEnumerator = nullptr;
            typename D::abi_guard guard(this->shim());
            *decoderInformationEnumerator = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Graphics::Imaging::BitmapCodecInformation>>(this->shim().GetDecoderInformationEnumerator());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateAsync(void* stream, void** asyncInfo) noexcept final
    {
        try
        {
            *asyncInfo = nullptr;
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::BitmapDecoder>>(this->shim().CreateAsync(*reinterpret_cast<Windows::Storage::Streams::IRandomAccessStream const*>(&stream)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateWithIdAsync(GUID decoderId, void* stream, void** asyncInfo) noexcept final
    {
        try
        {
            *asyncInfo = nullptr;
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::BitmapDecoder>>(this->shim().CreateAsync(*reinterpret_cast<GUID const*>(&decoderId), *reinterpret_cast<Windows::Storage::Streams::IRandomAccessStream const*>(&stream)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Imaging::IBitmapEncoder> : produce_base<D, Windows::Graphics::Imaging::IBitmapEncoder>
{
    HRESULT __stdcall get_EncoderInformation(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Imaging::BitmapCodecInformation>(this->shim().EncoderInformation());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_BitmapProperties(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Imaging::BitmapProperties>(this->shim().BitmapProperties());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_BitmapContainerProperties(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Imaging::BitmapProperties>(this->shim().BitmapContainerProperties());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsThumbnailGenerated(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsThumbnailGenerated());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_IsThumbnailGenerated(bool value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsThumbnailGenerated(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_GeneratedThumbnailWidth(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().GeneratedThumbnailWidth());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_GeneratedThumbnailWidth(uint32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GeneratedThumbnailWidth(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_GeneratedThumbnailHeight(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().GeneratedThumbnailHeight());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_GeneratedThumbnailHeight(uint32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GeneratedThumbnailHeight(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_BitmapTransform(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Imaging::BitmapTransform>(this->shim().BitmapTransform());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetPixelData(Windows::Graphics::Imaging::BitmapPixelFormat pixelFormat, Windows::Graphics::Imaging::BitmapAlphaMode alphaMode, uint32_t width, uint32_t height, double dpiX, double dpiY, uint32_t __pixelsSize, uint8_t* pixels) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetPixelData(*reinterpret_cast<Windows::Graphics::Imaging::BitmapPixelFormat const*>(&pixelFormat), *reinterpret_cast<Windows::Graphics::Imaging::BitmapAlphaMode const*>(&alphaMode), width, height, dpiX, dpiY, array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(pixels), reinterpret_cast<uint8_t const *>(pixels) + __pixelsSize));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GoToNextFrameAsync(void** asyncInfo) noexcept final
    {
        try
        {
            *asyncInfo = nullptr;
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<Windows::Foundation::IAsyncAction>(this->shim().GoToNextFrameAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GoToNextFrameWithEncodingOptionsAsync(void* encodingOptions, void** asyncInfo) noexcept final
    {
        try
        {
            *asyncInfo = nullptr;
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<Windows::Foundation::IAsyncAction>(this->shim().GoToNextFrameAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::Graphics::Imaging::BitmapTypedValue>> const*>(&encodingOptions)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall FlushAsync(void** asyncInfo) noexcept final
    {
        try
        {
            *asyncInfo = nullptr;
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<Windows::Foundation::IAsyncAction>(this->shim().FlushAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Imaging::IBitmapEncoderStatics> : produce_base<D, Windows::Graphics::Imaging::IBitmapEncoderStatics>
{
    HRESULT __stdcall get_BmpEncoderId(GUID* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<GUID>(this->shim().BmpEncoderId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_JpegEncoderId(GUID* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<GUID>(this->shim().JpegEncoderId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PngEncoderId(GUID* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<GUID>(this->shim().PngEncoderId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_TiffEncoderId(GUID* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<GUID>(this->shim().TiffEncoderId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_GifEncoderId(GUID* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<GUID>(this->shim().GifEncoderId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_JpegXREncoderId(GUID* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<GUID>(this->shim().JpegXREncoderId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetEncoderInformationEnumerator(void** encoderInformationEnumerator) noexcept final
    {
        try
        {
            *encoderInformationEnumerator = nullptr;
            typename D::abi_guard guard(this->shim());
            *encoderInformationEnumerator = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Graphics::Imaging::BitmapCodecInformation>>(this->shim().GetEncoderInformationEnumerator());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateAsync(GUID encoderId, void* stream, void** asyncInfo) noexcept final
    {
        try
        {
            *asyncInfo = nullptr;
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::BitmapEncoder>>(this->shim().CreateAsync(*reinterpret_cast<GUID const*>(&encoderId), *reinterpret_cast<Windows::Storage::Streams::IRandomAccessStream const*>(&stream)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateWithEncodingOptionsAsync(GUID encoderId, void* stream, void* encodingOptions, void** asyncInfo) noexcept final
    {
        try
        {
            *asyncInfo = nullptr;
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::BitmapEncoder>>(this->shim().CreateAsync(*reinterpret_cast<GUID const*>(&encoderId), *reinterpret_cast<Windows::Storage::Streams::IRandomAccessStream const*>(&stream), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::Graphics::Imaging::BitmapTypedValue>> const*>(&encodingOptions)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateForTranscodingAsync(void* stream, void* bitmapDecoder, void** asyncInfo) noexcept final
    {
        try
        {
            *asyncInfo = nullptr;
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::BitmapEncoder>>(this->shim().CreateForTranscodingAsync(*reinterpret_cast<Windows::Storage::Streams::IRandomAccessStream const*>(&stream), *reinterpret_cast<Windows::Graphics::Imaging::BitmapDecoder const*>(&bitmapDecoder)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateForInPlacePropertyEncodingAsync(void* bitmapDecoder, void** asyncInfo) noexcept final
    {
        try
        {
            *asyncInfo = nullptr;
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::BitmapEncoder>>(this->shim().CreateForInPlacePropertyEncodingAsync(*reinterpret_cast<Windows::Graphics::Imaging::BitmapDecoder const*>(&bitmapDecoder)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Imaging::IBitmapEncoderWithSoftwareBitmap> : produce_base<D, Windows::Graphics::Imaging::IBitmapEncoderWithSoftwareBitmap>
{
    HRESULT __stdcall SetSoftwareBitmap(void* bitmap) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetSoftwareBitmap(*reinterpret_cast<Windows::Graphics::Imaging::SoftwareBitmap const*>(&bitmap));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Imaging::IBitmapFrame> : produce_base<D, Windows::Graphics::Imaging::IBitmapFrame>
{
    HRESULT __stdcall GetThumbnailAsync(void** asyncInfo) noexcept final
    {
        try
        {
            *asyncInfo = nullptr;
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::ImageStream>>(this->shim().GetThumbnailAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_BitmapProperties(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Imaging::BitmapPropertiesView>(this->shim().BitmapProperties());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_BitmapPixelFormat(Windows::Graphics::Imaging::BitmapPixelFormat* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Imaging::BitmapPixelFormat>(this->shim().BitmapPixelFormat());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_BitmapAlphaMode(Windows::Graphics::Imaging::BitmapAlphaMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Imaging::BitmapAlphaMode>(this->shim().BitmapAlphaMode());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DpiX(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().DpiX());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DpiY(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().DpiY());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PixelWidth(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().PixelWidth());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PixelHeight(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().PixelHeight());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_OrientedPixelWidth(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().OrientedPixelWidth());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_OrientedPixelHeight(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().OrientedPixelHeight());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetPixelDataAsync(void** asyncInfo) noexcept final
    {
        try
        {
            *asyncInfo = nullptr;
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::PixelDataProvider>>(this->shim().GetPixelDataAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetPixelDataTransformedAsync(Windows::Graphics::Imaging::BitmapPixelFormat pixelFormat, Windows::Graphics::Imaging::BitmapAlphaMode alphaMode, void* transform, Windows::Graphics::Imaging::ExifOrientationMode exifOrientationMode, Windows::Graphics::Imaging::ColorManagementMode colorManagementMode, void** asyncInfo) noexcept final
    {
        try
        {
            *asyncInfo = nullptr;
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::PixelDataProvider>>(this->shim().GetPixelDataAsync(*reinterpret_cast<Windows::Graphics::Imaging::BitmapPixelFormat const*>(&pixelFormat), *reinterpret_cast<Windows::Graphics::Imaging::BitmapAlphaMode const*>(&alphaMode), *reinterpret_cast<Windows::Graphics::Imaging::BitmapTransform const*>(&transform), *reinterpret_cast<Windows::Graphics::Imaging::ExifOrientationMode const*>(&exifOrientationMode), *reinterpret_cast<Windows::Graphics::Imaging::ColorManagementMode const*>(&colorManagementMode)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Imaging::IBitmapFrameWithSoftwareBitmap> : produce_base<D, Windows::Graphics::Imaging::IBitmapFrameWithSoftwareBitmap>
{
    HRESULT __stdcall GetSoftwareBitmapAsync(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::SoftwareBitmap>>(this->shim().GetSoftwareBitmapAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetSoftwareBitmapConvertedAsync(Windows::Graphics::Imaging::BitmapPixelFormat pixelFormat, Windows::Graphics::Imaging::BitmapAlphaMode alphaMode, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::SoftwareBitmap>>(this->shim().GetSoftwareBitmapAsync(*reinterpret_cast<Windows::Graphics::Imaging::BitmapPixelFormat const*>(&pixelFormat), *reinterpret_cast<Windows::Graphics::Imaging::BitmapAlphaMode const*>(&alphaMode)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetSoftwareBitmapTransformedAsync(Windows::Graphics::Imaging::BitmapPixelFormat pixelFormat, Windows::Graphics::Imaging::BitmapAlphaMode alphaMode, void* transform, Windows::Graphics::Imaging::ExifOrientationMode exifOrientationMode, Windows::Graphics::Imaging::ColorManagementMode colorManagementMode, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::SoftwareBitmap>>(this->shim().GetSoftwareBitmapAsync(*reinterpret_cast<Windows::Graphics::Imaging::BitmapPixelFormat const*>(&pixelFormat), *reinterpret_cast<Windows::Graphics::Imaging::BitmapAlphaMode const*>(&alphaMode), *reinterpret_cast<Windows::Graphics::Imaging::BitmapTransform const*>(&transform), *reinterpret_cast<Windows::Graphics::Imaging::ExifOrientationMode const*>(&exifOrientationMode), *reinterpret_cast<Windows::Graphics::Imaging::ColorManagementMode const*>(&colorManagementMode)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Imaging::IBitmapProperties> : produce_base<D, Windows::Graphics::Imaging::IBitmapProperties>
{
    HRESULT __stdcall SetPropertiesAsync(void* propertiesToSet, void** asyncInfo) noexcept final
    {
        try
        {
            *asyncInfo = nullptr;
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<Windows::Foundation::IAsyncAction>(this->shim().SetPropertiesAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::Graphics::Imaging::BitmapTypedValue>> const*>(&propertiesToSet)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Imaging::IBitmapPropertiesView> : produce_base<D, Windows::Graphics::Imaging::IBitmapPropertiesView>
{
    HRESULT __stdcall GetPropertiesAsync(void* propertiesToRetrieve, void** asyncInfo) noexcept final
    {
        try
        {
            *asyncInfo = nullptr;
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_from<Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::BitmapPropertySet>>(this->shim().GetPropertiesAsync(*reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&propertiesToRetrieve)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Imaging::IBitmapTransform> : produce_base<D, Windows::Graphics::Imaging::IBitmapTransform>
{
    HRESULT __stdcall get_ScaledWidth(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().ScaledWidth());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ScaledWidth(uint32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ScaledWidth(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ScaledHeight(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().ScaledHeight());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_ScaledHeight(uint32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ScaledHeight(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_InterpolationMode(Windows::Graphics::Imaging::BitmapInterpolationMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Imaging::BitmapInterpolationMode>(this->shim().InterpolationMode());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_InterpolationMode(Windows::Graphics::Imaging::BitmapInterpolationMode value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InterpolationMode(*reinterpret_cast<Windows::Graphics::Imaging::BitmapInterpolationMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Flip(Windows::Graphics::Imaging::BitmapFlip* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Imaging::BitmapFlip>(this->shim().Flip());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Flip(Windows::Graphics::Imaging::BitmapFlip value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Flip(*reinterpret_cast<Windows::Graphics::Imaging::BitmapFlip const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Rotation(Windows::Graphics::Imaging::BitmapRotation* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Imaging::BitmapRotation>(this->shim().Rotation());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Rotation(Windows::Graphics::Imaging::BitmapRotation value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Rotation(*reinterpret_cast<Windows::Graphics::Imaging::BitmapRotation const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Bounds(struct struct_Windows_Graphics_Imaging_BitmapBounds* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Imaging::BitmapBounds>(this->shim().Bounds());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Bounds(struct struct_Windows_Graphics_Imaging_BitmapBounds value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Bounds(*reinterpret_cast<Windows::Graphics::Imaging::BitmapBounds const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Imaging::IBitmapTypedValue> : produce_base<D, Windows::Graphics::Imaging::IBitmapTypedValue>
{
    HRESULT __stdcall get_Value(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IInspectable>(this->shim().Value());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Type(Windows::Foundation::PropertyType* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::PropertyType>(this->shim().Type());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Imaging::IBitmapTypedValueFactory> : produce_base<D, Windows::Graphics::Imaging::IBitmapTypedValueFactory>
{
    HRESULT __stdcall Create(void* value, Windows::Foundation::PropertyType type, void** bitmapTypedValue) noexcept final
    {
        try
        {
            *bitmapTypedValue = nullptr;
            typename D::abi_guard guard(this->shim());
            *bitmapTypedValue = detach_from<Windows::Graphics::Imaging::BitmapTypedValue>(this->shim().Create(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&value), *reinterpret_cast<Windows::Foundation::PropertyType const*>(&type)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Imaging::IPixelDataProvider> : produce_base<D, Windows::Graphics::Imaging::IPixelDataProvider>
{
    HRESULT __stdcall DetachPixelData(uint32_t* __pixelDataSize, uint8_t** pixelData) noexcept final
    {
        try
        {
            *__pixelDataSize = 0;
            *pixelData = nullptr;
            typename D::abi_guard guard(this->shim());
            std::tie(*__pixelDataSize, *pixelData) = detach_abi(this->shim().DetachPixelData());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Imaging::ISoftwareBitmap> : produce_base<D, Windows::Graphics::Imaging::ISoftwareBitmap>
{
    HRESULT __stdcall get_BitmapPixelFormat(Windows::Graphics::Imaging::BitmapPixelFormat* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Imaging::BitmapPixelFormat>(this->shim().BitmapPixelFormat());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_BitmapAlphaMode(Windows::Graphics::Imaging::BitmapAlphaMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Imaging::BitmapAlphaMode>(this->shim().BitmapAlphaMode());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PixelWidth(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().PixelWidth());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_PixelHeight(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().PixelHeight());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_IsReadOnly(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsReadOnly());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_DpiX(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DpiX(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DpiX(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().DpiX());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_DpiY(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DpiY(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DpiY(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().DpiY());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall LockBuffer(Windows::Graphics::Imaging::BitmapBufferAccessMode mode, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Imaging::BitmapBuffer>(this->shim().LockBuffer(*reinterpret_cast<Windows::Graphics::Imaging::BitmapBufferAccessMode const*>(&mode)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CopyTo(void* bitmap) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CopyTo(*reinterpret_cast<Windows::Graphics::Imaging::SoftwareBitmap const*>(&bitmap));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CopyFromBuffer(void* buffer) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CopyFromBuffer(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&buffer));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CopyToBuffer(void* buffer) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CopyToBuffer(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&buffer));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetReadOnlyView(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Imaging::SoftwareBitmap>(this->shim().GetReadOnlyView());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Imaging::ISoftwareBitmapFactory> : produce_base<D, Windows::Graphics::Imaging::ISoftwareBitmapFactory>
{
    HRESULT __stdcall Create(Windows::Graphics::Imaging::BitmapPixelFormat format, int32_t width, int32_t height, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Imaging::SoftwareBitmap>(this->shim().Create(*reinterpret_cast<Windows::Graphics::Imaging::BitmapPixelFormat const*>(&format), width, height));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateWithAlpha(Windows::Graphics::Imaging::BitmapPixelFormat format, int32_t width, int32_t height, Windows::Graphics::Imaging::BitmapAlphaMode alpha, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Imaging::SoftwareBitmap>(this->shim().CreateWithAlpha(*reinterpret_cast<Windows::Graphics::Imaging::BitmapPixelFormat const*>(&format), width, height, *reinterpret_cast<Windows::Graphics::Imaging::BitmapAlphaMode const*>(&alpha)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Imaging::ISoftwareBitmapStatics> : produce_base<D, Windows::Graphics::Imaging::ISoftwareBitmapStatics>
{
    HRESULT __stdcall Copy(void* source, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Imaging::SoftwareBitmap>(this->shim().Copy(*reinterpret_cast<Windows::Graphics::Imaging::SoftwareBitmap const*>(&source)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Convert(void* source, Windows::Graphics::Imaging::BitmapPixelFormat format, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Imaging::SoftwareBitmap>(this->shim().Convert(*reinterpret_cast<Windows::Graphics::Imaging::SoftwareBitmap const*>(&source), *reinterpret_cast<Windows::Graphics::Imaging::BitmapPixelFormat const*>(&format)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ConvertWithAlpha(void* source, Windows::Graphics::Imaging::BitmapPixelFormat format, Windows::Graphics::Imaging::BitmapAlphaMode alpha, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Imaging::SoftwareBitmap>(this->shim().Convert(*reinterpret_cast<Windows::Graphics::Imaging::SoftwareBitmap const*>(&source), *reinterpret_cast<Windows::Graphics::Imaging::BitmapPixelFormat const*>(&format), *reinterpret_cast<Windows::Graphics::Imaging::BitmapAlphaMode const*>(&alpha)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateCopyFromBuffer(void* source, Windows::Graphics::Imaging::BitmapPixelFormat format, int32_t width, int32_t height, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Imaging::SoftwareBitmap>(this->shim().CreateCopyFromBuffer(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&source), *reinterpret_cast<Windows::Graphics::Imaging::BitmapPixelFormat const*>(&format), width, height));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateCopyWithAlphaFromBuffer(void* source, Windows::Graphics::Imaging::BitmapPixelFormat format, int32_t width, int32_t height, Windows::Graphics::Imaging::BitmapAlphaMode alpha, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Imaging::SoftwareBitmap>(this->shim().CreateCopyFromBuffer(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&source), *reinterpret_cast<Windows::Graphics::Imaging::BitmapPixelFormat const*>(&format), width, height, *reinterpret_cast<Windows::Graphics::Imaging::BitmapAlphaMode const*>(&alpha)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateCopyFromSurfaceAsync(void* surface, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::SoftwareBitmap>>(this->shim().CreateCopyFromSurfaceAsync(*reinterpret_cast<Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const*>(&surface)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateCopyWithAlphaFromSurfaceAsync(void* surface, Windows::Graphics::Imaging::BitmapAlphaMode alpha, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::SoftwareBitmap>>(this->shim().CreateCopyFromSurfaceAsync(*reinterpret_cast<Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const*>(&surface), *reinterpret_cast<Windows::Graphics::Imaging::BitmapAlphaMode const*>(&alpha)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Graphics::Imaging {

inline GUID BitmapDecoder::BmpDecoderId()
{
    return get_activation_factory<BitmapDecoder, Windows::Graphics::Imaging::IBitmapDecoderStatics>().BmpDecoderId();
}

inline GUID BitmapDecoder::JpegDecoderId()
{
    return get_activation_factory<BitmapDecoder, Windows::Graphics::Imaging::IBitmapDecoderStatics>().JpegDecoderId();
}

inline GUID BitmapDecoder::PngDecoderId()
{
    return get_activation_factory<BitmapDecoder, Windows::Graphics::Imaging::IBitmapDecoderStatics>().PngDecoderId();
}

inline GUID BitmapDecoder::TiffDecoderId()
{
    return get_activation_factory<BitmapDecoder, Windows::Graphics::Imaging::IBitmapDecoderStatics>().TiffDecoderId();
}

inline GUID BitmapDecoder::GifDecoderId()
{
    return get_activation_factory<BitmapDecoder, Windows::Graphics::Imaging::IBitmapDecoderStatics>().GifDecoderId();
}

inline GUID BitmapDecoder::JpegXRDecoderId()
{
    return get_activation_factory<BitmapDecoder, Windows::Graphics::Imaging::IBitmapDecoderStatics>().JpegXRDecoderId();
}

inline GUID BitmapDecoder::IcoDecoderId()
{
    return get_activation_factory<BitmapDecoder, Windows::Graphics::Imaging::IBitmapDecoderStatics>().IcoDecoderId();
}

inline Windows::Foundation::Collections::IVectorView<Windows::Graphics::Imaging::BitmapCodecInformation> BitmapDecoder::GetDecoderInformationEnumerator()
{
    return get_activation_factory<BitmapDecoder, Windows::Graphics::Imaging::IBitmapDecoderStatics>().GetDecoderInformationEnumerator();
}

inline Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::BitmapDecoder> BitmapDecoder::CreateAsync(Windows::Storage::Streams::IRandomAccessStream const& stream)
{
    return get_activation_factory<BitmapDecoder, Windows::Graphics::Imaging::IBitmapDecoderStatics>().CreateAsync(stream);
}

inline Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::BitmapDecoder> BitmapDecoder::CreateAsync(GUID const& decoderId, Windows::Storage::Streams::IRandomAccessStream const& stream)
{
    return get_activation_factory<BitmapDecoder, Windows::Graphics::Imaging::IBitmapDecoderStatics>().CreateAsync(decoderId, stream);
}

inline GUID BitmapEncoder::BmpEncoderId()
{
    return get_activation_factory<BitmapEncoder, Windows::Graphics::Imaging::IBitmapEncoderStatics>().BmpEncoderId();
}

inline GUID BitmapEncoder::JpegEncoderId()
{
    return get_activation_factory<BitmapEncoder, Windows::Graphics::Imaging::IBitmapEncoderStatics>().JpegEncoderId();
}

inline GUID BitmapEncoder::PngEncoderId()
{
    return get_activation_factory<BitmapEncoder, Windows::Graphics::Imaging::IBitmapEncoderStatics>().PngEncoderId();
}

inline GUID BitmapEncoder::TiffEncoderId()
{
    return get_activation_factory<BitmapEncoder, Windows::Graphics::Imaging::IBitmapEncoderStatics>().TiffEncoderId();
}

inline GUID BitmapEncoder::GifEncoderId()
{
    return get_activation_factory<BitmapEncoder, Windows::Graphics::Imaging::IBitmapEncoderStatics>().GifEncoderId();
}

inline GUID BitmapEncoder::JpegXREncoderId()
{
    return get_activation_factory<BitmapEncoder, Windows::Graphics::Imaging::IBitmapEncoderStatics>().JpegXREncoderId();
}

inline Windows::Foundation::Collections::IVectorView<Windows::Graphics::Imaging::BitmapCodecInformation> BitmapEncoder::GetEncoderInformationEnumerator()
{
    return get_activation_factory<BitmapEncoder, Windows::Graphics::Imaging::IBitmapEncoderStatics>().GetEncoderInformationEnumerator();
}

inline Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::BitmapEncoder> BitmapEncoder::CreateAsync(GUID const& encoderId, Windows::Storage::Streams::IRandomAccessStream const& stream)
{
    return get_activation_factory<BitmapEncoder, Windows::Graphics::Imaging::IBitmapEncoderStatics>().CreateAsync(encoderId, stream);
}

inline Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::BitmapEncoder> BitmapEncoder::CreateAsync(GUID const& encoderId, Windows::Storage::Streams::IRandomAccessStream const& stream, param::async_iterable<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::Graphics::Imaging::BitmapTypedValue>> const& encodingOptions)
{
    return get_activation_factory<BitmapEncoder, Windows::Graphics::Imaging::IBitmapEncoderStatics>().CreateAsync(encoderId, stream, encodingOptions);
}

inline Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::BitmapEncoder> BitmapEncoder::CreateForTranscodingAsync(Windows::Storage::Streams::IRandomAccessStream const& stream, Windows::Graphics::Imaging::BitmapDecoder const& bitmapDecoder)
{
    return get_activation_factory<BitmapEncoder, Windows::Graphics::Imaging::IBitmapEncoderStatics>().CreateForTranscodingAsync(stream, bitmapDecoder);
}

inline Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::BitmapEncoder> BitmapEncoder::CreateForInPlacePropertyEncodingAsync(Windows::Graphics::Imaging::BitmapDecoder const& bitmapDecoder)
{
    return get_activation_factory<BitmapEncoder, Windows::Graphics::Imaging::IBitmapEncoderStatics>().CreateForInPlacePropertyEncodingAsync(bitmapDecoder);
}

inline BitmapPropertySet::BitmapPropertySet() :
    BitmapPropertySet(get_activation_factory<BitmapPropertySet>().ActivateInstance<BitmapPropertySet>())
{}

inline BitmapTransform::BitmapTransform() :
    BitmapTransform(get_activation_factory<BitmapTransform>().ActivateInstance<BitmapTransform>())
{}

inline BitmapTypedValue::BitmapTypedValue(Windows::Foundation::IInspectable const& value, Windows::Foundation::PropertyType const& type) :
    BitmapTypedValue(get_activation_factory<BitmapTypedValue, Windows::Graphics::Imaging::IBitmapTypedValueFactory>().Create(value, type))
{}

inline SoftwareBitmap::SoftwareBitmap(Windows::Graphics::Imaging::BitmapPixelFormat const& format, int32_t width, int32_t height) :
    SoftwareBitmap(get_activation_factory<SoftwareBitmap, Windows::Graphics::Imaging::ISoftwareBitmapFactory>().Create(format, width, height))
{}

inline SoftwareBitmap::SoftwareBitmap(Windows::Graphics::Imaging::BitmapPixelFormat const& format, int32_t width, int32_t height, Windows::Graphics::Imaging::BitmapAlphaMode const& alpha) :
    SoftwareBitmap(get_activation_factory<SoftwareBitmap, Windows::Graphics::Imaging::ISoftwareBitmapFactory>().CreateWithAlpha(format, width, height, alpha))
{}

inline Windows::Graphics::Imaging::SoftwareBitmap SoftwareBitmap::Copy(Windows::Graphics::Imaging::SoftwareBitmap const& source)
{
    return get_activation_factory<SoftwareBitmap, Windows::Graphics::Imaging::ISoftwareBitmapStatics>().Copy(source);
}

inline Windows::Graphics::Imaging::SoftwareBitmap SoftwareBitmap::Convert(Windows::Graphics::Imaging::SoftwareBitmap const& source, Windows::Graphics::Imaging::BitmapPixelFormat const& format)
{
    return get_activation_factory<SoftwareBitmap, Windows::Graphics::Imaging::ISoftwareBitmapStatics>().Convert(source, format);
}

inline Windows::Graphics::Imaging::SoftwareBitmap SoftwareBitmap::Convert(Windows::Graphics::Imaging::SoftwareBitmap const& source, Windows::Graphics::Imaging::BitmapPixelFormat const& format, Windows::Graphics::Imaging::BitmapAlphaMode const& alpha)
{
    return get_activation_factory<SoftwareBitmap, Windows::Graphics::Imaging::ISoftwareBitmapStatics>().Convert(source, format, alpha);
}

inline Windows::Graphics::Imaging::SoftwareBitmap SoftwareBitmap::CreateCopyFromBuffer(Windows::Storage::Streams::IBuffer const& source, Windows::Graphics::Imaging::BitmapPixelFormat const& format, int32_t width, int32_t height)
{
    return get_activation_factory<SoftwareBitmap, Windows::Graphics::Imaging::ISoftwareBitmapStatics>().CreateCopyFromBuffer(source, format, width, height);
}

inline Windows::Graphics::Imaging::SoftwareBitmap SoftwareBitmap::CreateCopyFromBuffer(Windows::Storage::Streams::IBuffer const& source, Windows::Graphics::Imaging::BitmapPixelFormat const& format, int32_t width, int32_t height, Windows::Graphics::Imaging::BitmapAlphaMode const& alpha)
{
    return get_activation_factory<SoftwareBitmap, Windows::Graphics::Imaging::ISoftwareBitmapStatics>().CreateCopyFromBuffer(source, format, width, height, alpha);
}

inline Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::SoftwareBitmap> SoftwareBitmap::CreateCopyFromSurfaceAsync(Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const& surface)
{
    return get_activation_factory<SoftwareBitmap, Windows::Graphics::Imaging::ISoftwareBitmapStatics>().CreateCopyFromSurfaceAsync(surface);
}

inline Windows::Foundation::IAsyncOperation<Windows::Graphics::Imaging::SoftwareBitmap> SoftwareBitmap::CreateCopyFromSurfaceAsync(Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const& surface, Windows::Graphics::Imaging::BitmapAlphaMode const& alpha)
{
    return get_activation_factory<SoftwareBitmap, Windows::Graphics::Imaging::ISoftwareBitmapStatics>().CreateCopyFromSurfaceAsync(surface, alpha);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Graphics::Imaging::IBitmapBuffer> : winrt::impl::hash_base<winrt::Windows::Graphics::Imaging::IBitmapBuffer> {};
template<> struct hash<winrt::Windows::Graphics::Imaging::IBitmapCodecInformation> : winrt::impl::hash_base<winrt::Windows::Graphics::Imaging::IBitmapCodecInformation> {};
template<> struct hash<winrt::Windows::Graphics::Imaging::IBitmapDecoder> : winrt::impl::hash_base<winrt::Windows::Graphics::Imaging::IBitmapDecoder> {};
template<> struct hash<winrt::Windows::Graphics::Imaging::IBitmapDecoderStatics> : winrt::impl::hash_base<winrt::Windows::Graphics::Imaging::IBitmapDecoderStatics> {};
template<> struct hash<winrt::Windows::Graphics::Imaging::IBitmapEncoder> : winrt::impl::hash_base<winrt::Windows::Graphics::Imaging::IBitmapEncoder> {};
template<> struct hash<winrt::Windows::Graphics::Imaging::IBitmapEncoderStatics> : winrt::impl::hash_base<winrt::Windows::Graphics::Imaging::IBitmapEncoderStatics> {};
template<> struct hash<winrt::Windows::Graphics::Imaging::IBitmapEncoderWithSoftwareBitmap> : winrt::impl::hash_base<winrt::Windows::Graphics::Imaging::IBitmapEncoderWithSoftwareBitmap> {};
template<> struct hash<winrt::Windows::Graphics::Imaging::IBitmapFrame> : winrt::impl::hash_base<winrt::Windows::Graphics::Imaging::IBitmapFrame> {};
template<> struct hash<winrt::Windows::Graphics::Imaging::IBitmapFrameWithSoftwareBitmap> : winrt::impl::hash_base<winrt::Windows::Graphics::Imaging::IBitmapFrameWithSoftwareBitmap> {};
template<> struct hash<winrt::Windows::Graphics::Imaging::IBitmapProperties> : winrt::impl::hash_base<winrt::Windows::Graphics::Imaging::IBitmapProperties> {};
template<> struct hash<winrt::Windows::Graphics::Imaging::IBitmapPropertiesView> : winrt::impl::hash_base<winrt::Windows::Graphics::Imaging::IBitmapPropertiesView> {};
template<> struct hash<winrt::Windows::Graphics::Imaging::IBitmapTransform> : winrt::impl::hash_base<winrt::Windows::Graphics::Imaging::IBitmapTransform> {};
template<> struct hash<winrt::Windows::Graphics::Imaging::IBitmapTypedValue> : winrt::impl::hash_base<winrt::Windows::Graphics::Imaging::IBitmapTypedValue> {};
template<> struct hash<winrt::Windows::Graphics::Imaging::IBitmapTypedValueFactory> : winrt::impl::hash_base<winrt::Windows::Graphics::Imaging::IBitmapTypedValueFactory> {};
template<> struct hash<winrt::Windows::Graphics::Imaging::IPixelDataProvider> : winrt::impl::hash_base<winrt::Windows::Graphics::Imaging::IPixelDataProvider> {};
template<> struct hash<winrt::Windows::Graphics::Imaging::ISoftwareBitmap> : winrt::impl::hash_base<winrt::Windows::Graphics::Imaging::ISoftwareBitmap> {};
template<> struct hash<winrt::Windows::Graphics::Imaging::ISoftwareBitmapFactory> : winrt::impl::hash_base<winrt::Windows::Graphics::Imaging::ISoftwareBitmapFactory> {};
template<> struct hash<winrt::Windows::Graphics::Imaging::ISoftwareBitmapStatics> : winrt::impl::hash_base<winrt::Windows::Graphics::Imaging::ISoftwareBitmapStatics> {};
template<> struct hash<winrt::Windows::Graphics::Imaging::BitmapBuffer> : winrt::impl::hash_base<winrt::Windows::Graphics::Imaging::BitmapBuffer> {};
template<> struct hash<winrt::Windows::Graphics::Imaging::BitmapCodecInformation> : winrt::impl::hash_base<winrt::Windows::Graphics::Imaging::BitmapCodecInformation> {};
template<> struct hash<winrt::Windows::Graphics::Imaging::BitmapDecoder> : winrt::impl::hash_base<winrt::Windows::Graphics::Imaging::BitmapDecoder> {};
template<> struct hash<winrt::Windows::Graphics::Imaging::BitmapEncoder> : winrt::impl::hash_base<winrt::Windows::Graphics::Imaging::BitmapEncoder> {};
template<> struct hash<winrt::Windows::Graphics::Imaging::BitmapFrame> : winrt::impl::hash_base<winrt::Windows::Graphics::Imaging::BitmapFrame> {};
template<> struct hash<winrt::Windows::Graphics::Imaging::BitmapProperties> : winrt::impl::hash_base<winrt::Windows::Graphics::Imaging::BitmapProperties> {};
template<> struct hash<winrt::Windows::Graphics::Imaging::BitmapPropertiesView> : winrt::impl::hash_base<winrt::Windows::Graphics::Imaging::BitmapPropertiesView> {};
template<> struct hash<winrt::Windows::Graphics::Imaging::BitmapPropertySet> : winrt::impl::hash_base<winrt::Windows::Graphics::Imaging::BitmapPropertySet> {};
template<> struct hash<winrt::Windows::Graphics::Imaging::BitmapTransform> : winrt::impl::hash_base<winrt::Windows::Graphics::Imaging::BitmapTransform> {};
template<> struct hash<winrt::Windows::Graphics::Imaging::BitmapTypedValue> : winrt::impl::hash_base<winrt::Windows::Graphics::Imaging::BitmapTypedValue> {};
template<> struct hash<winrt::Windows::Graphics::Imaging::ImageStream> : winrt::impl::hash_base<winrt::Windows::Graphics::Imaging::ImageStream> {};
template<> struct hash<winrt::Windows::Graphics::Imaging::PixelDataProvider> : winrt::impl::hash_base<winrt::Windows::Graphics::Imaging::PixelDataProvider> {};
template<> struct hash<winrt::Windows::Graphics::Imaging::SoftwareBitmap> : winrt::impl::hash_base<winrt::Windows::Graphics::Imaging::SoftwareBitmap> {};

}

WINRT_WARNING_POP
