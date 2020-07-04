// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Storage_Compression_0_H
#define WINRT_Windows_Storage_Compression_0_H
namespace winrt::Windows::Storage::Streams
{
    struct IInputStream;
    struct IOutputStream;
}
namespace winrt::Windows::Storage::Compression
{
    enum class CompressAlgorithm : int32_t
    {
        InvalidAlgorithm = 0,
        NullAlgorithm = 1,
        Mszip = 2,
        Xpress = 3,
        XpressHuff = 4,
        Lzms = 5,
    };
    struct ICompressor;
    struct ICompressorFactory;
    struct IDecompressor;
    struct IDecompressorFactory;
    struct Compressor;
    struct Decompressor;
}
namespace winrt::impl
{
    template <> struct category<Windows::Storage::Compression::ICompressor>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Storage::Compression::ICompressorFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Storage::Compression::IDecompressor>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Storage::Compression::IDecompressorFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Storage::Compression::Compressor>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Storage::Compression::Decompressor>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Storage::Compression::CompressAlgorithm>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::Storage::Compression::ICompressor>
    {
        static constexpr auto & value{ L"Windows.Storage.Compression.ICompressor" };
    };
    template <> struct name<Windows::Storage::Compression::ICompressorFactory>
    {
        static constexpr auto & value{ L"Windows.Storage.Compression.ICompressorFactory" };
    };
    template <> struct name<Windows::Storage::Compression::IDecompressor>
    {
        static constexpr auto & value{ L"Windows.Storage.Compression.IDecompressor" };
    };
    template <> struct name<Windows::Storage::Compression::IDecompressorFactory>
    {
        static constexpr auto & value{ L"Windows.Storage.Compression.IDecompressorFactory" };
    };
    template <> struct name<Windows::Storage::Compression::Compressor>
    {
        static constexpr auto & value{ L"Windows.Storage.Compression.Compressor" };
    };
    template <> struct name<Windows::Storage::Compression::Decompressor>
    {
        static constexpr auto & value{ L"Windows.Storage.Compression.Decompressor" };
    };
    template <> struct name<Windows::Storage::Compression::CompressAlgorithm>
    {
        static constexpr auto & value{ L"Windows.Storage.Compression.CompressAlgorithm" };
    };
    template <> struct guid_storage<Windows::Storage::Compression::ICompressor>
    {
        static constexpr guid value{ 0x0AC3645A,0x57AC,0x4EE1,{ 0xB7,0x02,0x84,0xD3,0x9D,0x54,0x24,0xE0 } };
    };
    template <> struct guid_storage<Windows::Storage::Compression::ICompressorFactory>
    {
        static constexpr guid value{ 0x5F3D96A4,0x2CFB,0x442C,{ 0xA8,0xBA,0xD7,0xD1,0x1B,0x03,0x9D,0xA0 } };
    };
    template <> struct guid_storage<Windows::Storage::Compression::IDecompressor>
    {
        static constexpr guid value{ 0xB883FE46,0xD68A,0x4C8B,{ 0xAD,0xA0,0x4E,0xE8,0x13,0xFC,0x52,0x83 } };
    };
    template <> struct guid_storage<Windows::Storage::Compression::IDecompressorFactory>
    {
        static constexpr guid value{ 0x5337E252,0x1DA2,0x42E1,{ 0x88,0x34,0x03,0x79,0xD2,0x8D,0x74,0x2F } };
    };
    template <> struct default_interface<Windows::Storage::Compression::Compressor>
    {
        using type = Windows::Storage::Compression::ICompressor;
    };
    template <> struct default_interface<Windows::Storage::Compression::Decompressor>
    {
        using type = Windows::Storage::Compression::IDecompressor;
    };
    template <> struct abi<Windows::Storage::Compression::ICompressor>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FinishAsync(void**) noexcept = 0;
            virtual int32_t __stdcall DetachStream(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::Compression::ICompressorFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateCompressor(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateCompressorEx(void*, int32_t, uint32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::Compression::IDecompressor>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall DetachStream(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Storage::Compression::IDecompressorFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateDecompressor(void*, void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Storage_Compression_ICompressor
    {
        auto FinishAsync() const;
        auto DetachStream() const;
    };
    template <> struct consume<Windows::Storage::Compression::ICompressor>
    {
        template <typename D> using type = consume_Windows_Storage_Compression_ICompressor<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_Compression_ICompressorFactory
    {
        auto CreateCompressor(Windows::Storage::Streams::IOutputStream const& underlyingStream) const;
        auto CreateCompressorEx(Windows::Storage::Streams::IOutputStream const& underlyingStream, Windows::Storage::Compression::CompressAlgorithm const& algorithm, uint32_t blockSize) const;
    };
    template <> struct consume<Windows::Storage::Compression::ICompressorFactory>
    {
        template <typename D> using type = consume_Windows_Storage_Compression_ICompressorFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_Compression_IDecompressor
    {
        auto DetachStream() const;
    };
    template <> struct consume<Windows::Storage::Compression::IDecompressor>
    {
        template <typename D> using type = consume_Windows_Storage_Compression_IDecompressor<D>;
    };
    template <typename D>
    struct consume_Windows_Storage_Compression_IDecompressorFactory
    {
        auto CreateDecompressor(Windows::Storage::Streams::IInputStream const& underlyingStream) const;
    };
    template <> struct consume<Windows::Storage::Compression::IDecompressorFactory>
    {
        template <typename D> using type = consume_Windows_Storage_Compression_IDecompressorFactory<D>;
    };
}
#endif
