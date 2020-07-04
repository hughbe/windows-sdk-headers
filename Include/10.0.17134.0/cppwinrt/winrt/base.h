// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once

#ifndef WINRT_HAS_CXX17
#if defined(_MSVC_LANG)
#if _MSVC_LANG > 201402
#define WINRT_HAS_CXX17	1
#else
#define WINRT_HAS_CXX17	0
#endif
#else
#if __cplusplus > 201402
#define WINRT_HAS_CXX17	1
#els
#define WINRT_HAS_CXX17	0
#endif
#endif
#endif
#if !WINRT_HAS_CXX17
#error C++/WinRT requires language features only available with C++17.
#endif 
#undef WINRT_HAS_CXX17

#if defined(_MSC_FULL_VER) && _MSC_FULL_VER < 191125506
#define WINRT_STRINGIZE_(x) #x
#define WINRT_STRINGIZE(x) WINRT_STRINGIZE_(x)
#pragma message(__FILE__ "(" WINRT_STRINGIZE(__LINE__) ") : warning: Visual Studio 2017 version 15.3 or later is recommended.")
#endif

#if defined(__clang__) 
#define WINRT_WARNING_PUSH \
_Pragma("clang diagnostic push") \
_Pragma("clang diagnostic ignored \"-Wdeprecated-declarations\"") \
_Pragma("clang diagnostic ignored \"-Wdeprecated-implementations\"")
#define WINRT_WARNING_POP \
_Pragma("clang diagnostic pop")
#else
#define WINRT_WARNING_PUSH \
__pragma(warning(push)) \
__pragma(warning(disable: 4996))
#define WINRT_WARNING_POP \
__pragma(warning(pop))
#endif

WINRT_WARNING_PUSH

#include <restrictederrorinfo.h>
#include <winstring.h>
#include <ctxtcall.h>

#include <algorithm>
#include <array>
#include <atomic>
#include <chrono>
#include <clocale>
#include <cstddef>
#include <iterator>
#include <map>
#include <memory>
#include <new>
#include <optional>
#include <shared_mutex>
#include <string>
#include <string_view>
#include <stdexcept>
#include <tuple>
#include <type_traits>
#include <utility>
#include <unordered_map>
#include <vector>
#include <experimental/coroutine>

extern "C"
{
    HRESULT __stdcall WINRT_GetRestrictedErrorInfo(IRestrictedErrorInfo** info) noexcept;
    HRESULT __stdcall WINRT_RoGetActivationFactory(HSTRING classId, GUID const& iid, void** factory) noexcept;
    HRESULT __stdcall WINRT_RoInitialize(uint32_t type) noexcept;
    BOOL    __stdcall WINRT_RoOriginateLanguageException(HRESULT error, HSTRING message, IUnknown* exception) noexcept;
    void    __stdcall WINRT_RoUninitialize() noexcept;
    HRESULT __stdcall WINRT_SetRestrictedErrorInfo(IRestrictedErrorInfo* info) noexcept;
    HRESULT __stdcall WINRT_RoGetAgileReference(uint32_t options, GUID const& iid, void* object, void** reference) noexcept;
}

#ifdef _M_IX86
#pragma comment(linker, "/alternatename:_WINRT_GetRestrictedErrorInfo@4=_GetRestrictedErrorInfo@4")
#pragma comment(linker, "/alternatename:_WINRT_RoGetActivationFactory@12=_RoGetActivationFactory@12")
#pragma comment(linker, "/alternatename:_WINRT_RoInitialize@4=_RoInitialize@4")
#pragma comment(linker, "/alternatename:_WINRT_RoOriginateLanguageException@12=_RoOriginateLanguageException@12")
#pragma comment(linker, "/alternatename:_WINRT_RoUninitialize@0=_RoUninitialize@0")
#pragma comment(linker, "/alternatename:_WINRT_SetRestrictedErrorInfo@4=_SetRestrictedErrorInfo@4")
#pragma comment(linker, "/alternatename:_WINRT_RoGetAgileReference@16=_RoGetAgileReference@16")
#else
#pragma comment(linker, "/alternatename:WINRT_GetRestrictedErrorInfo=GetRestrictedErrorInfo")
#pragma comment(linker, "/alternatename:WINRT_RoGetActivationFactory=RoGetActivationFactory")
#pragma comment(linker, "/alternatename:WINRT_RoInitialize=RoInitialize")
#pragma comment(linker, "/alternatename:WINRT_RoOriginateLanguageException=RoOriginateLanguageException")
#pragma comment(linker, "/alternatename:WINRT_RoUninitialize=RoUninitialize")
#pragma comment(linker, "/alternatename:WINRT_SetRestrictedErrorInfo=SetRestrictedErrorInfo")
#pragma comment(linker, "/alternatename:WINRT_RoGetAgileReference=RoGetAgileReference")
#endif

namespace winrt::impl
{
    using namespace std::literals;
}

#ifdef _DEBUG

#define WINRT_ASSERT _ASSERTE
#define WINRT_VERIFY WINRT_ASSERT
#define WINRT_VERIFY_(result, expression) WINRT_ASSERT(result == expression)

template <typename... Args>
void WINRT_TRACE(char const* const message, Args... args) noexcept
{
    char buffer[1024];
    (void)snprintf(buffer, sizeof(buffer), message, args...);
    OutputDebugStringA(buffer);
}

#else

#define WINRT_ASSERT __noop
#define WINRT_VERIFY(expression) (void)(expression)
#define WINRT_VERIFY_(result, expression) (void)(expression)
#define WINRT_TRACE __noop

#endif

#ifndef WINRT_EXPORT
#define WINRT_EXPORT
#endif

#define WINRT_EBO __declspec(empty_bases)

#ifdef _WIN64
#define WINRT_64
#endif

#if defined(_MSC_VER) && _ITERATOR_DEBUG_LEVEL != 0
#define WINRT_CHECKED_ITERATORS
#endif

#define _WINDOWS_NUMERICS_NAMESPACE_ winrt::Windows::Foundation::Numerics
#define _WINDOWS_NUMERICS_BEGIN_NAMESPACE_ WINRT_EXPORT namespace winrt::Windows::Foundation::Numerics
#define _WINDOWS_NUMERICS_END_NAMESPACE_

#ifdef __clang__
#define _XM_NO_INTRINSICS_
#endif

#if !__has_include(<WindowsNumerics.impl.h>)
static_assert(false, "Please target platform version 10.0.14393.0 or later.");
#endif
#include <WindowsNumerics.impl.h>

#ifdef __clang__
#undef _XM_NO_INTRINSICS_
#endif

#undef _WINDOWS_NUMERICS_NAMESPACE_
#undef _WINDOWS_NUMERICS_BEGIN_NAMESPACE_
#undef _WINDOWS_NUMERICS_END_NAMESPACE_

#define WINRT_SHIM(Type) (*(abi_t<Type>**)&static_cast<Type const&>(static_cast<D const&>(*this)))

#undef GetCurrentTime

#ifndef WINRT_EXTERNAL_CATCH_CLAUSE
#define WINRT_EXTERNAL_CATCH_CLAUSE
#endif

namespace winrt::impl
{
    template <typename T>
    struct identity
    {
        using type = T;
    };

    template <typename T>
    struct abi
    {
        using type = T;
    };

    template <typename T>
    using abi_t = typename abi<T>::type;

    template <typename T>
    struct consume;

    template <typename D, typename I = D>
    using consume_t = typename consume<I>::template type<D>;

    template <typename T>
    struct delegate;

    template <typename T, typename H>
    using delegate_t = typename delegate<T>::template type<H>;

    template <typename D, typename I>
    struct produce;

    template <typename T, typename = std::void_t<>>
    struct default_interface
    {
        using type = T;
    };

    template <typename T>
    using default_interface_t = typename default_interface<T>::type;

    struct basic_category;
    struct interface_category;
    struct delegate_category;
    struct enum_category;
    struct class_category;

    template <typename T>
    struct category
    {
        using type = void;
    };

    template <typename T>
    using category_t = typename category<T>::type;

    template <typename T>
    constexpr bool has_category_v = !std::is_same_v<category_t<T>, void>;

    template <typename... Args>
    struct pinterface_category;

    template <typename... Fields>
    struct struct_category;

    template <typename Category, typename T>
    struct category_signature;

    template <typename T>
    struct signature
    {
        static constexpr auto data{ category_signature<typename category<T>::type, T>::data };
    };

    template <typename T>
    struct guid
    {
        static constexpr GUID value = __uuidof(T);
    };

#ifdef __clang__
    template <typename T>
    constexpr GUID const guid_v = guid<default_interface_t<T>>::value;
#endif

    template <typename T>
    struct is_enum_flag : std::false_type {};

    template <typename T>
    constexpr bool is_enum_flag_v = is_enum_flag<T>::value;

    template <typename T>
    constexpr auto to_underlying_type(T const value) noexcept
    {
        return static_cast<std::underlying_type_t<T>>(value);
    }

    template <typename, typename = std::void_t<>>
    struct is_implements : std::false_type {};

    template <typename T>
    struct is_implements<T, std::void_t<typename T::implements_type>> : std::true_type {};

    template <typename T>
    constexpr bool is_implements_v = is_implements<T>::value;
}

template <typename T>
constexpr auto operator|(T const left, T const right) noexcept -> std::enable_if_t<winrt::impl::is_enum_flag_v<T>, T>
{
    return static_cast<T>(winrt::impl::to_underlying_type(left) | winrt::impl::to_underlying_type(right));
}

template <typename T>
constexpr auto operator|=(T& left, T const right) noexcept -> std::enable_if_t<winrt::impl::is_enum_flag_v<T>, T>
{
    left = left | right;
    return left;
}

template <typename T>
constexpr auto operator&(T const left, T const right) noexcept -> std::enable_if_t<winrt::impl::is_enum_flag_v<T>, T>
{
    return static_cast<T>(winrt::impl::to_underlying_type(left) & winrt::impl::to_underlying_type(right));
}

template <typename T>
constexpr auto operator&=(T& left, T const right) noexcept -> std::enable_if_t<winrt::impl::is_enum_flag_v<T>, T>
{
    left = left & right;
    return left;
}

template <typename T>
constexpr auto operator~(T const value) noexcept -> std::enable_if_t<winrt::impl::is_enum_flag_v<T>, T>
{
    return static_cast<T>(~winrt::impl::to_underlying_type(value));
}

template <typename T>
constexpr auto operator^(T const left, T const right) noexcept -> std::enable_if_t<winrt::impl::is_enum_flag_v<T>, T>
{
    return static_cast<T>(winrt::impl::to_underlying_type(left) ^ winrt::impl::to_underlying_type(right));
}

template <typename T>
constexpr auto operator^=(T& left, T const right) noexcept -> std::enable_if_t<winrt::impl::is_enum_flag_v<T>, T>
{
    left = left ^ right;
    return left;
}

WINRT_EXPORT namespace winrt
{
    template <typename T>
    constexpr GUID const& guid_of() noexcept
    {
#ifdef __clang__
        return impl::guid_v<T>;
#else
        return impl::guid<impl::default_interface_t<T>>::value;
#endif
    }

    struct event_token;
}

namespace winrt::impl
{
    template <typename D, typename I>
    struct require_one : consume_t<D, I>
    {
        operator I() const noexcept
        {
            D const& d = *static_cast<D const*>(this);

            if (d)
            {
                return d.template try_as<I>();
            }

            return nullptr;
        }
    };

    template <typename D, typename... I>
    struct WINRT_EBO require : require_one<D, I>...
    {};

    template <typename D, typename I>
    struct base_one
    {
        operator I() const noexcept
        {
            D const& d = *static_cast<D const*>(this);

            if (d)
            {
                return d.template try_as<I>();
            }

            return nullptr;
        }
    };

    template <typename D, typename... I>
    struct WINRT_EBO base : base_one<D, I>...
    {};

    template <typename T>
    class no_ref : public T
    {
        unsigned long __stdcall AddRef() noexcept;
        unsigned long __stdcall Release() noexcept;
    };
}

namespace winrt::impl
{
    template <size_t Size, typename T, size_t... Index>
    constexpr std::array<T, Size> to_array(T const* value, std::index_sequence<Index...> const) noexcept
    {
        return { value[Index]... };
    }

    template <typename T, size_t Size>
    constexpr auto to_array(std::array<T, Size> const& value) noexcept
    {
        return value;
    }

    template <size_t Size>
    constexpr auto to_array(char const(&value)[Size]) noexcept
    {
        return to_array<Size - 1>(value, std::make_index_sequence<Size - 1>());
    }

    template <size_t Size>
    constexpr auto to_array(wchar_t const(&value)[Size]) noexcept
    {
        return to_array<Size - 1>(value, std::make_index_sequence<Size - 1>());
    }

    template <typename T, size_t LeftSize, size_t RightSize, size_t... LeftIndex, size_t... RightIndex>
    constexpr std::array<T, LeftSize + RightSize> concat(
        [[maybe_unused]] std::array<T, LeftSize> const& left,
        [[maybe_unused]] std::array<T, RightSize> const& right,
        std::index_sequence<LeftIndex...> const,
        std::index_sequence<RightIndex...> const) noexcept
    {
        return { left[LeftIndex]..., right[RightIndex]... };
    }

    template <typename T, size_t LeftSize, size_t RightSize>
    constexpr auto operator+(std::array<T, LeftSize> const& left, std::array<T, RightSize> const& right) noexcept
    {
        return concat(left, right, std::make_index_sequence<LeftSize>(), std::make_index_sequence<RightSize>());
    }

    template <typename T, size_t LeftSize, size_t RightSize>
    constexpr auto operator+(std::array<T, LeftSize> const& left, T const(&right)[RightSize]) noexcept
    {
        return left + to_array(right);
    }

    template <typename T, size_t LeftSize, size_t RightSize>
    constexpr auto operator+(T const(&left)[LeftSize], std::array<T, RightSize> const& right) noexcept
    {
        return to_array(left) + right;
    }

    template <typename T, size_t LeftSize>
    constexpr auto operator+(std::array<T, LeftSize> const& left, T const right) noexcept
    {
        return left + std::array<T, 1>{right};
    }

    template <typename T, size_t RightSize>
    constexpr auto operator+(T const left, std::array<T, RightSize> const& right) noexcept
    {
        return std::array<T, 1>{left} + right;
    }

    constexpr std::array<uint8_t, 4> to_array(unsigned long value) noexcept
    {
        return { static_cast<uint8_t>(value & 0x000000ff), static_cast<uint8_t>((value & 0x0000ff00) >> 8), static_cast<uint8_t>((value & 0x00ff0000) >> 16), static_cast<uint8_t>((value & 0xff000000) >> 24) };
    }

    constexpr std::array<uint8_t, 2> to_array(unsigned short value) noexcept
    {
        return { static_cast<uint8_t>(value & 0x00ff), static_cast<uint8_t>((value & 0xff00) >> 8) };
    }

    constexpr auto to_array(GUID const& value) noexcept
    {
        return to_array(value.Data1) + to_array(value.Data2) + to_array(value.Data3) +
            std::array<uint8_t, 8>{ value.Data4[0], value.Data4[1], value.Data4[2], value.Data4[3], value.Data4[4], value.Data4[5], value.Data4[6], value.Data4[7] };
    }

    template <typename T>
    constexpr T to_hex_digit(uint8_t value) noexcept
    {
        value &= 0xF;
        return value < 10 ? static_cast<T>('0') + value : static_cast<T>('a') + (value - 10);
    }

    template <typename T>
    constexpr std::array<T, 2> uint8_to_hex(uint8_t const value) noexcept
    {
        return { to_hex_digit<T>(value >> 4), to_hex_digit<T>(value & 0xF) };
    }

    template <typename T>
    constexpr auto uint16_to_hex(uint16_t value) noexcept
    {
        return uint8_to_hex<T>(static_cast<uint8_t>(value >> 8)) + uint8_to_hex<T>(value & 0xFF);
    }

    template <typename T>
    constexpr auto uint32_to_hex(uint32_t const value) noexcept
    {
        return uint16_to_hex<T>(value >> 16) + uint16_to_hex<T>(value & 0xFFFF);
    }

    template <typename T>
    constexpr auto to_array(GUID const& value) noexcept
    {
        return
            static_cast<T>('{') +
            uint32_to_hex<T>(value.Data1) + static_cast<T>('-') +
            uint16_to_hex<T>(value.Data2) + static_cast<T>('-') +
            uint16_to_hex<T>(value.Data3) + static_cast<T>('-') +
            uint16_to_hex<T>(value.Data4[0] << 8 | value.Data4[1]) + static_cast<T>('-') +
            uint16_to_hex<T>(value.Data4[2] << 8 | value.Data4[3]) +
            uint16_to_hex<T>(value.Data4[4] << 8 | value.Data4[5]) +
            uint16_to_hex<T>(value.Data4[6] << 8 | value.Data4[7]) +
            static_cast<T>('}');
    }

    constexpr uint32_t to_guid(uint8_t a, uint8_t b, uint8_t c, uint8_t d) noexcept
    {
        return (static_cast<uint32_t>(d) << 24) | (static_cast<uint32_t>(c) << 16) | (static_cast<uint32_t>(b) << 8) | static_cast<uint32_t>(a);
    }

    constexpr uint16_t to_guid(uint8_t a, uint8_t b) noexcept
    {
        return (static_cast<uint32_t>(b) << 8) | static_cast<uint32_t>(a);
    }

    template <size_t Size>
    constexpr GUID to_guid(std::array<uint8_t, Size> const& arr) noexcept
    {
        return
        {
            to_guid(arr[0], arr[1], arr[2], arr[3]),
            to_guid(arr[4], arr[5]),
            to_guid(arr[6], arr[7]),
            { arr[8], arr[9], arr[10], arr[11], arr[12], arr[13], arr[14], arr[15] }
        };
    }

    template <typename T>
    struct name
    {
#pragma warning(suppress: 4307)
        static constexpr auto value{ to_array<wchar_t>(guid_of<T>()) };
    };

    template <typename T>
    constexpr auto& name_v = name<T>::value;

    template <typename T, size_t Size>
    constexpr std::basic_string_view<T> to_string(std::array<T, Size> const& value) noexcept
    {
        return { value.data(), Size };
    }

    template <typename T, size_t Size>
    constexpr std::wstring_view to_string(T const (&value)[Size]) noexcept
    {
        return { value, Size - 1 };
    }

    constexpr unsigned long endian_swap(unsigned long value) noexcept
    {
        return (value & 0xFF000000) >> 24 | (value & 0x00FF0000) >> 8 | (value & 0x0000FF00) << 8 | (value & 0x000000FF) << 24;
    }

    constexpr unsigned short endian_swap(unsigned short value) noexcept
    {
        return (value & 0xFF00) >> 8 | (value & 0x00FF) << 8;
    }

    constexpr GUID endian_swap(GUID const& value) noexcept
    {
        return
        {
            endian_swap(value.Data1),
            endian_swap(value.Data2),
            endian_swap(value.Data3),
            { value.Data4[0], value.Data4[1], value.Data4[2], value.Data4[3], value.Data4[4], value.Data4[5], value.Data4[6], value.Data4[7] }
        };
    }

    constexpr GUID set_named_guid_fields(GUID value) noexcept
    {
        value.Data3 = static_cast<uint16_t>((value.Data3 & 0x0fff) | (5 << 12));
        value.Data4[0] = static_cast<uint8_t>((value.Data4[0] & 0x3f) | 0x80);
        return value;
    }

    template <typename T, size_t Size, size_t... Index>
    constexpr std::array<uint8_t, Size> char_to_byte_array(std::array<T, Size> const& value, std::index_sequence<Index...> const) noexcept
    {
        return { static_cast<uint8_t>(value[Index])... };
    }

    constexpr auto sha1_rotl(uint8_t bits, uint32_t word) noexcept
    {
        return  (word << bits) | (word >> (32 - bits));
    }

    constexpr auto sha_ch(uint32_t x, uint32_t y, uint32_t z) noexcept
    {
        return (x & y) ^ ((~x) & z);
    }

    constexpr auto sha_parity(uint32_t x, uint32_t y, uint32_t z) noexcept
    {
        return x ^ y ^ z;
    }

    constexpr auto sha_maj(uint32_t x, uint32_t y, uint32_t z) noexcept
    {
        return (x & y) ^ (x & z) ^ (y & z);
    }

    template <size_t Size>
    constexpr std::array<uint32_t, 5> process_msg_block(std::array<uint8_t, Size> const& input, uint32_t start_pos, std::array<uint32_t, 5> const& intermediate_hash) noexcept
    {
        uint32_t const K[4] = { 0x5A827999, 0x6ED9EBA1, 0x8F1BBCDC, 0xCA62C1D6 };
        std::array<uint32_t, 80> W = {};

        int t = 0;
        uint32_t temp = 0;

        for (t = 0; t < 16; t++)
        {
            W[t] = static_cast<uint32_t>(input[start_pos + t * 4]) << 24;
            W[t] = W[t] | static_cast<uint32_t>(input[start_pos + t * 4 + 1]) << 16;
            W[t] = W[t] | static_cast<uint32_t>(input[start_pos + t * 4 + 2]) << 8;
            W[t] = W[t] | static_cast<uint32_t>(input[start_pos + t * 4 + 3]);
        }

        for (t = 16; t < 80; t++)
        {
            W[t] = sha1_rotl(1, W[t - 3] ^ W[t - 8] ^ W[t - 14] ^ W[t - 16]);
        }

        uint32_t A = intermediate_hash[0];
        uint32_t B = intermediate_hash[1];
        uint32_t C = intermediate_hash[2];
        uint32_t D = intermediate_hash[3];
        uint32_t E = intermediate_hash[4];

        for (t = 0; t < 20; t++)
        {
            temp = sha1_rotl(5, A) + sha_ch(B, C, D) + E + W[t] + K[0];
            E = D;
            D = C;
            C = sha1_rotl(30, B);
            B = A;
            A = temp;
        }

        for (t = 20; t < 40; t++)
        {
            temp = sha1_rotl(5, A) + sha_parity(B, C, D) + E + W[t] + K[1];
            E = D;
            D = C;
            C = sha1_rotl(30, B);
            B = A;
            A = temp;
        }

        for (t = 40; t < 60; t++)
        {
            temp = sha1_rotl(5, A) + sha_maj(B, C, D) + E + W[t] + K[2];
            E = D;
            D = C;
            C = sha1_rotl(30, B);
            B = A;
            A = temp;
        }

        for (t = 60; t < 80; t++)
        {
            temp = sha1_rotl(5, A) + sha_parity(B, C, D) + E + W[t] + K[3];
            E = D;
            D = C;
            C = sha1_rotl(30, B);
            B = A;
            A = temp;
        }

        return { intermediate_hash[0] + A, intermediate_hash[1] + B, intermediate_hash[2] + C, intermediate_hash[3] + D, intermediate_hash[4] + E };
    }

    constexpr std::array<uint8_t, 8> size_to_bytes(size_t size) noexcept
    {
        return
        {
            static_cast<uint8_t>((size & 0xff00000000000000) >> 56),
            static_cast<uint8_t>((size & 0x00ff000000000000) >> 48),
            static_cast<uint8_t>((size & 0x0000ff0000000000) >> 40),
            static_cast<uint8_t>((size & 0x000000ff00000000) >> 32),
            static_cast<uint8_t>((size & 0x00000000ff000000) >> 24),
            static_cast<uint8_t>((size & 0x0000000000ff0000) >> 16),
            static_cast<uint8_t>((size & 0x000000000000ff00) >> 8),
            static_cast<uint8_t>((size & 0x00000000000000ff) >> 0)
        };
    }

    template <size_t Size, size_t RemainingSize, size_t... Index>
    constexpr std::array<uint8_t, RemainingSize + 1> make_remaining(std::array<uint8_t, Size> const& input, uint32_t start_pos, std::index_sequence<Index...>) noexcept
    {
        return { input[Index + start_pos]..., 0x80 };
    }

    template <size_t Size>
    constexpr auto make_remaining(std::array<uint8_t, Size> const& input, uint32_t start_pos) noexcept
    {
        constexpr auto remaining_size = Size % 64;
        return make_remaining<Size, remaining_size>(input, start_pos, std::make_index_sequence<remaining_size>());
    }

    template <size_t InputSize, size_t RemainderSize>
    constexpr auto make_buffer(std::array<uint8_t, RemainderSize> const& remaining_buffer) noexcept
    {
        constexpr auto message_length = (RemainderSize + 8 <= 64) ? 64 : 64 * 2;
        constexpr auto padding_length = message_length - RemainderSize - 8;

        auto padding_buffer = std::array<uint8_t, padding_length>{};
        auto length_buffer = size_to_bytes(InputSize * 8);

        return remaining_buffer + padding_buffer + length_buffer;
    }

    template <size_t Size>
    constexpr std::array<uint32_t, 5> finalize_remaining_buffer(std::array<uint8_t, Size> const& input, std::array<uint32_t, 5> const& intermediate_hash) noexcept
    {
        if constexpr (Size == 64)
        {
            return process_msg_block(input, 0, intermediate_hash);
        }
        else if constexpr (Size == 64 * 2)
        {
            return process_msg_block(input, 64, process_msg_block(input, 0, intermediate_hash));
        }
    }

    template <size_t... Index>
    constexpr std::array<uint8_t, 20> get_result(std::array<uint32_t, 5> const& intermediate_hash, std::index_sequence<Index...>) noexcept
    {
        return { static_cast<uint8_t>(intermediate_hash[Index >> 2] >> (8 * (3 - (Index & 0x03))))... };
    }

    constexpr auto get_result(std::array<uint32_t, 5> const& intermediate_hash) noexcept
    {
        return get_result(intermediate_hash, std::make_index_sequence<20>{});
    }

    template <size_t Size>
    constexpr auto calculate_sha1(std::array<uint8_t, Size> const& input) noexcept
    {
        std::array<uint32_t, 5> intermediate_hash{ 0x67452301, 0xEFCDAB89, 0x98BADCFE, 0x10325476, 0xC3D2E1F0 };
        uint32_t i = 0;

        while (i + 64 <= Size)
        {
            intermediate_hash = process_msg_block(input, i, intermediate_hash);
            i += 64;
        }

        intermediate_hash = finalize_remaining_buffer(make_buffer<Size>(make_remaining(input, i)), intermediate_hash);
        return get_result(intermediate_hash);
    }

    template <size_t Size>
    constexpr GUID generate_guid(std::array<char, Size> const& value) noexcept
    {
        GUID namespace_guid = { 0xd57af411, 0x737b, 0xc042,{ 0xab, 0xae, 0x87, 0x8b, 0x1e, 0x16, 0xad, 0xee } };

        auto buffer = to_array(namespace_guid) + char_to_byte_array(value, std::make_index_sequence<Size>());
        auto hash = calculate_sha1(buffer);
        auto big_endian_guid = to_guid(hash);
        auto little_endian_guid = endian_swap(big_endian_guid);
        return set_named_guid_fields(little_endian_guid);
    }

    template <typename TArg, typename... TRest>
    struct arg_collection
    {
        constexpr static auto data{ to_array(signature<TArg>::data) + ";" + arg_collection<TRest...>::data };
    };

    template <typename TArg>
    struct arg_collection<TArg>
    {
        constexpr static auto data{ to_array(signature<TArg>::data) };
    };

    template <typename T>
    struct pinterface_guid
    {
#pragma warning(suppress: 4307)
        static constexpr GUID value{ generate_guid(signature<T>::data) };
    };

    constexpr size_t to_utf8_size(wchar_t const value) noexcept
    {
        if (value <= 0x7F)
        {
            return 1;
        }

        if (value <= 0x7FF)
        {
            return 2;
        }

        return 3;
    }

    constexpr size_t to_utf8(wchar_t const value, char* buffer) noexcept
    {
        if (value <= 0x7F)
        {
            *buffer = static_cast<char>(value);
            return 1;
        }

        if (value <= 0x7FF)
        {
            *buffer = static_cast<char>(0xC0 | (value >> 6));
            *(buffer + 1) = 0x80 | (value & 0x3F);
            return 2;
        }

        *buffer = 0xE0 | (value >> 12);
        *(buffer + 1) = 0x80 | ((value >> 6) & 0x3F);
        *(buffer + 2) = 0x80 | (value & 0x3F);
        return 3;
    }

    template <typename T>
    constexpr size_t to_utf8_size() noexcept
    {
        auto input = to_array(name_v<T>);
        size_t length = 0;

        for (wchar_t const element : input)
        {
            length += to_utf8_size(element);
        }

        return length;
    }

    template <typename T>
    constexpr auto to_utf8() noexcept
    {
        auto input = to_array(name_v<T>);
        std::array<char, to_utf8_size<T>()> output{};
        size_t offset{};

        for (wchar_t const element : input)
        {
            offset += to_utf8(element, &output[offset]);
        }

        return output;
    }

    template <>
    struct name<bool>
    {
        static constexpr auto & value{ L"Boolean" };
        static constexpr auto & data{ "b1" };
    };

    template <>
    struct category<bool>
    {
        using type = basic_category;
    };

    template <>
    struct name<int8_t>
    {
        static constexpr auto & value{ L"Int8" };
        static constexpr auto & data{ "i1" };
    };

    template <>
    struct category<int8_t>
    {
        using type = basic_category;
    };

    template <>
    struct name<int16_t>
    {
        static constexpr auto & value{ L"Int16" };
        static constexpr auto & data{ "i2" };
    };

    template <>
    struct category<int16_t>
    {
        using type = basic_category;
    };

    template <>
    struct name<int32_t>
    {
        static constexpr auto & value{ L"Int32" };
        static constexpr auto & data{ "i4" };
    };

    template <>
    struct category<int32_t>
    {
        using type = basic_category;
    };

    template <>
    struct name<int64_t>
    {
        static constexpr auto & value{ L"Int64" };
        static constexpr auto & data{ "i8" };
    };

    template <>
    struct category<int64_t>
    {
        using type = basic_category;
    };

    template <>
    struct name<uint8_t>
    {
        static constexpr auto & value{ L"UInt8" };
        static constexpr auto & data{ "u1" };
    };

    template <>
    struct category<uint8_t>
    {
        using type = basic_category;
    };

    template <>
    struct name<uint16_t>
    {
        static constexpr auto & value{ L"UInt16" };
        static constexpr auto & data{ "u2" };
    };

    template <>
    struct category<uint16_t>
    {
        using type = basic_category;
    };

    template <>
    struct name<uint32_t>
    {
        static constexpr auto & value{ L"UInt32" };
        static constexpr auto & data{ "u4" };
    };

    template <>
    struct category<uint32_t>
    {
        using type = basic_category;
    };

    template <>
    struct name<uint64_t>
    {
        static constexpr auto & value{ L"UInt64" };
        static constexpr auto & data{ "u8" };
    };

    template <>
    struct category<uint64_t>
    {
        using type = basic_category;
    };

    template <>
    struct name<float>
    {
        static constexpr auto & value{ L"Single" };
        static constexpr auto & data{ "f4" };
    };

    template <>
    struct category<float>
    {
        using type = basic_category;
    };

    template <>
    struct name<double>
    {
        static constexpr auto & value{ L"Double" };
        static constexpr auto & data{ "f8" };
    };

    template <>
    struct category<double>
    {
        using type = basic_category;
    };

    template <>
    struct name<char16_t>
    {
        static constexpr auto & value{ L"Char16" };
        static constexpr auto & data{ "c2" };
    };

    template <>
    struct category<char16_t>
    {
        using type = basic_category;
    };

    template <>
    struct name<GUID>
    {
        static constexpr auto & value{ L"Guid" };
        static constexpr auto & data{ "g16" };
    };

    template <>
    struct category<GUID>
    {
        using type = basic_category;
    };

    template <>
    struct name<HRESULT>
    {
        static constexpr auto & value{ L"Windows.Foundation.HResult" };
    };

    template <>
    struct category<HRESULT>
    {
        using type = struct_category<int32_t>;
    };

    template <>
    struct name<event_token>
    {
        static constexpr auto & value{ L"Windows.Foundation.EventRegistrationToken" };
    };

    template <>
    struct category<event_token>
    {
        using type = struct_category<int64_t>;
    };

    template <typename T>
    struct category_signature<basic_category, T>
    {
        constexpr static auto data{ to_array(name<T>::data) };
    };

    template <typename T>
    struct category_signature<enum_category, T>
    {
        using enum_type = std::underlying_type_t<T>;
        constexpr static auto data{ "enum(" + to_utf8<T>() + ";" + signature<enum_type>::data + ")" };
    };

    template <typename... Fields, typename T>
    struct category_signature<struct_category<Fields...>, T>
    {
        constexpr static auto data{ "struct(" + to_utf8<T>() + ";" + arg_collection<Fields...>::data + ")" };
    };

    template <typename T>
    struct category_signature<class_category, T>
    {
        constexpr static auto data{ "rc(" + to_utf8<T>() + ";" + signature<default_interface_t<T>>::data + ")" };
    };

    template <typename... Args, typename T>
    struct category_signature<pinterface_category<Args...>, T>
    {
        constexpr static auto data{ "pinterface(" + to_array<char>(category<T>::value) + ";" + arg_collection<Args...>::data + ")" };
    };

    template <typename T>
    struct category_signature<interface_category, T>
    {
        constexpr static auto data{ to_array<char>(guid_of<T>()) };
    };

    template <typename T>
    struct category_signature<delegate_category, T>
    {
        constexpr static auto data{ "delegate(" + to_array<char>(guid_of<T>()) + ")" };
    };
}

WINRT_EXPORT namespace winrt
{
    template <typename T>
    constexpr std::wstring_view name_of() noexcept
    {
        return impl::to_string(impl::name_v<T>);
    }
}

WINRT_EXPORT namespace winrt
{
    template <typename T>
    struct handle_type
    {
        using type = typename T::type;

        handle_type() noexcept = default;

        handle_type(type value) noexcept : m_value(value)
        {
        }

        handle_type(handle_type&& other) noexcept : m_value(other.detach())
        {
        }

        handle_type& operator=(handle_type&& other) noexcept
        {
            if (this != &other)
            {
                attach(other.detach());
            }

            return*this;
        }

        ~handle_type() noexcept
        {
            close();
        }

        void close() noexcept
        {
            if (*this)
            {
                T::close(m_value);
                m_value = T::invalid();
            }
        }

        explicit operator bool() const noexcept
        {
            return T::invalid() != m_value;
        }

        type get() const noexcept
        {
            return m_value;
        }

        type* put() noexcept
        {
            WINRT_ASSERT(m_value == T::invalid());
            return &m_value;
        }

        void attach(type value) noexcept
        {
            close();
            *put() = value;
        }

        type detach() noexcept
        {
            type value = m_value;
            m_value = T::invalid();
            return value;
        }

        friend void swap(handle_type& left, handle_type& right) noexcept
        {
            std::swap(left.m_value, right.m_value);
        }

    private:

        type m_value = T::invalid();
    };

    struct handle_traits
    {
        using type = HANDLE;

        static void close(type value) noexcept
        {
            WINRT_VERIFY_(TRUE, CloseHandle(value));
        }

        static constexpr type invalid() noexcept
        {
            return nullptr;
        }
    };

    using handle = handle_type<handle_traits>;

    struct file_handle_traits
    {
        using type = HANDLE;

        static void close(type value) noexcept
        {
            WINRT_VERIFY_(TRUE, CloseHandle(value));
        }

        static type invalid() noexcept
        {
            return INVALID_HANDLE_VALUE;
        }
    };

    using file_handle = handle_type<file_handle_traits>;
}

WINRT_EXPORT namespace winrt
{
    struct slim_condition_variable;

    struct slim_mutex
    {
        slim_mutex(slim_mutex const&) = delete;
        slim_mutex& operator=(slim_mutex const&) = delete;
        slim_mutex() noexcept = default;

        void lock() noexcept
        {
            AcquireSRWLockExclusive(&m_lock);
        }

        void lock_shared() noexcept
        {
            AcquireSRWLockShared(&m_lock);
        }

        bool try_lock() noexcept
        {
            return 0 != TryAcquireSRWLockExclusive(&m_lock);
        }

        bool try_lock_shared() noexcept
        {
            return 0 != TryAcquireSRWLockShared(&m_lock);
        }

        void unlock() noexcept
        {
            __analysis_assume_lock_acquired(m_lock);
            ReleaseSRWLockExclusive(&m_lock);
        }

        void unlock_shared() noexcept
        {
            __analysis_assume_lock_acquired(m_lock);
            ReleaseSRWLockShared(&m_lock);
        }

    private:
        friend slim_condition_variable;

        PSRWLOCK get() noexcept
        {
            return&m_lock;
        }

        SRWLOCK m_lock{};
    };

    struct slim_lock_guard
    {
        explicit slim_lock_guard(slim_mutex& m) noexcept :
            m_mutex(m)
        {
            m_mutex.lock();
        }

        ~slim_lock_guard() noexcept
        {
            m_mutex.unlock();
        }

    private:
        slim_mutex & m_mutex;
    };

    struct slim_shared_lock_guard
    {
        explicit slim_shared_lock_guard(slim_mutex& m) noexcept :
            m_mutex(m)
        {
            m_mutex.lock_shared();
        }

        ~slim_shared_lock_guard() noexcept
        {
            m_mutex.unlock_shared();
        }

    private:
        slim_mutex & m_mutex;
    };

    struct slim_condition_variable
    {
        slim_condition_variable(slim_condition_variable const&) = delete;
        slim_condition_variable const& operator=(slim_condition_variable const&) = delete;
        slim_condition_variable() noexcept = default;

        template <typename T>
        void wait(slim_mutex& x, T predicate)
        {
            while (!predicate())
            {
                WINRT_VERIFY(SleepConditionVariableSRW(&m_cv, x.get(), INFINITE, 0));
            }
        }

        void notify_one() noexcept
        {
            WakeConditionVariable(&m_cv);
        }

        void notify_all() noexcept
        {
            WakeAllConditionVariable(&m_cv);
        }

    private:
        CONDITION_VARIABLE m_cv{};
    };
}

#ifdef WINRT_DIAGNOSTICS

WINRT_EXPORT namespace winrt
{
    struct factory_diagnostics_info
    {
        bool is_agile{ true };
        uint32_t requests{ 0 };
    };

    struct diagnostics_info
    {
        std::map<std::wstring_view, uint32_t> queries;
        std::map<std::wstring_view, factory_diagnostics_info> factories;
    };
}

namespace winrt::impl
{
    struct diagnostics_info
    {
        template <typename T>
        void add_query()
        {
            slim_lock_guard const guard(m_lock);
            ++m_info.queries[name_of<T>()];
        }

        template <typename T>
        void add_factory()
        {
            slim_lock_guard const guard(m_lock);
            factory_diagnostics_info& factory = m_info.factories[name_of<T>()];
            ++factory.requests;
        }

        template <typename T>
        void non_agile_factory()
        {
            slim_lock_guard const guard(m_lock);
            factory_diagnostics_info& factory = m_info.factories[name_of<T>()];
            factory.is_agile = false;
        }

        auto get()
        {
            slim_lock_guard const guard(m_lock);
            return m_info;
        }

        auto detach()
        {
            slim_lock_guard const guard(m_lock);
            return std::move(m_info);
        }

    private:

        slim_mutex m_lock;
        winrt::diagnostics_info m_info;
    };

    inline diagnostics_info& get_diagnostics_info() noexcept
    {
        static diagnostics_info info;
        return info;
    }
}

WINRT_EXPORT namespace winrt
{
    inline auto get_diagnostics_info()
    {
        return impl::get_diagnostics_info().get();
    }

    inline auto detach_diagnostics_info()
    {
        return impl::get_diagnostics_info().detach();
    }
}

#endif

WINRT_EXPORT namespace winrt::Windows::Foundation
{
    enum class TrustLevel
    {
        BaseTrust,
        PartialTrust,
        FullTrust
    };

    struct IUnknown;
    struct IInspectable;
    struct IInspectable;
    struct IActivationFactory;
}

WINRT_EXPORT namespace winrt
{
    void check_hresult(HRESULT result);

    template <typename T>
    struct com_ptr;

    template <typename T, typename = std::enable_if_t<!std::is_base_of_v<Windows::Foundation::IUnknown, T>>>
    auto get_abi(T const& object) noexcept
    {
        return reinterpret_cast<impl::abi_t<T> const&>(object);
    }

    template <typename T, typename = std::enable_if_t<!std::is_base_of_v<Windows::Foundation::IUnknown, T>>>
    auto put_abi(T& object) noexcept
    {
        return reinterpret_cast<impl::abi_t<T>*>(&object);
    }

    template <typename T, typename V, typename = std::enable_if_t<!std::is_base_of_v<Windows::Foundation::IUnknown, T>>>
    void copy_from_abi(T& object, V&& value)
    {
        object = reinterpret_cast<T const&>(value);
    }

    template <typename T, typename V, typename = std::enable_if_t<!std::is_base_of_v<Windows::Foundation::IUnknown, T>>>
    void copy_to_abi(T const& object, V& value)
    {
        reinterpret_cast<T&>(value) = object;
    }

    template <typename T, typename = std::enable_if_t<!std::is_base_of_v<Windows::Foundation::IUnknown, std::decay_t<T>> && !std::is_convertible_v<T, std::wstring_view>>>
        auto detach_abi(T&& object)
    {
        impl::abi_t<T> result{};
        reinterpret_cast<T&>(result) = std::move(object);
        return result;
    }
}

namespace winrt::impl
{
    template <> struct abi<Windows::Foundation::IUnknown>
    {
        struct __declspec(novtable) type
        {
            virtual HRESULT __stdcall QueryInterface(GUID const& id, void** object) noexcept = 0;
            virtual ULONG __stdcall AddRef() noexcept = 0;
            virtual ULONG __stdcall Release() noexcept = 0;
        };
    };

    using IUnknown = abi_t<Windows::Foundation::IUnknown>;

    template <> struct abi<Windows::Foundation::IInspectable>
    {
        struct __declspec(novtable) type : IUnknown
        {
            virtual HRESULT __stdcall GetIids(ULONG* count, GUID** ids) noexcept = 0;
            virtual HRESULT __stdcall GetRuntimeClassName(HSTRING* name) noexcept = 0;
            virtual HRESULT __stdcall GetTrustLevel(Windows::Foundation::TrustLevel* level) noexcept = 0;
        };
    };

    using IInspectable = abi_t<Windows::Foundation::IInspectable>;

    template <> struct abi<Windows::Foundation::IActivationFactory>
    {
        struct __declspec(novtable) type : IInspectable
        {
            virtual HRESULT __stdcall ActivateInstance(void** instance) noexcept = 0;
        };
    };

    template <> struct guid<Windows::Foundation::IUnknown>
    {
        static constexpr GUID value{ 0x00000000,0x0000,0x0000,{ 0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46 } };
    };

    template <> struct category<Windows::Foundation::IUnknown>
    {
        using type = interface_category;
    };

    template <> struct guid<Windows::Foundation::IInspectable>
    {
        static constexpr GUID value{ 0xAF86E2E0,0xB12D,0x4C6A,{ 0x9C,0x5A,0xD7,0xAA,0x65,0x10,0x1E,0x90 } };
    };

    template <> struct name<Windows::Foundation::IInspectable>
    {
        static constexpr auto & value{ L"Object" };
        static constexpr auto & data{ "cinterface(IInspectable)" };
    };

    template <> struct category<Windows::Foundation::IInspectable>
    {
        using type = basic_category;
    };

    template <> struct guid<Windows::Foundation::IActivationFactory>
    {
        static constexpr GUID value{ 0x00000035,0x0000,0x0000,{ 0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46 } };
    };

    template <> struct guid<::IAgileObject>
    {
        static constexpr GUID value{ 0x94EA2B94,0xE9CC,0x49E0,{ 0xC0,0xFF,0xEE,0x64,0xCA,0x8F,0x5B,0x90 } };
    };

    template <> struct name<Windows::Foundation::IActivationFactory>
    {
        static constexpr auto & value{ L"Windows.Foundation.IActivationFactory" };
    };

    template <> struct category<Windows::Foundation::IActivationFactory>
    {
        using type = interface_category;
    };

    template <> struct name<::IAgileObject>
    {
        static constexpr auto & value{ L"IAgileObject" };
    };

    template <> struct guid<::IMarshal>
    {
        static constexpr GUID value{ 0x00000003,0x0000,0x0000,{ 0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46 } };
    };

    struct __declspec(novtable) IStaticLifetime : IInspectable
    {
        virtual HRESULT __stdcall unused() noexcept = 0;
        virtual HRESULT __stdcall GetCollection(void** value) noexcept = 0;
    };

    template <> struct guid<IStaticLifetime>
    {
        static constexpr GUID value{ 0x17b0e613,0x942a,0x422d,{ 0x90,0x4c,0xf9,0x0d,0xc7,0x1a,0x7d,0xae } };
    };

    template <typename D>
    struct consume_IActivationFactory
    {
        template <typename T>
        T ActivateInstance() const;
    };

    template <> struct consume<Windows::Foundation::IActivationFactory>
    {
        template <typename D> using type = consume_IActivationFactory<D>;
    };

    template <typename T>
    using com_ref = std::conditional_t<std::is_base_of_v<Windows::Foundation::IUnknown, T>, T, com_ptr<T>>;

    template <typename To, typename From>
    com_ref<To> as(From* ptr);

    template <typename To, typename From>
    com_ref<To> try_as(From* ptr) noexcept;

    template <typename T>
    struct wrapped_type
    {
        using type = T;
    };

    template <typename T>
    struct wrapped_type<com_ptr<T>>
    {
        using type = T;
    };

    template <typename T>
    using wrapped_type_t = typename wrapped_type<T>::type;
}

WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct IUnknown
    {
        IUnknown() noexcept = default;
        IUnknown(std::nullptr_t) noexcept {}
        void* operator new(size_t) = delete;

        IUnknown(IUnknown const& other) noexcept : m_ptr(other.m_ptr)
        {
            add_ref();
        }

        IUnknown(IUnknown&& other) noexcept : m_ptr(other.m_ptr)
        {
            other.m_ptr = nullptr;
        }

        ~IUnknown() noexcept
        {
            release_ref();
        }

        IUnknown& operator=(IUnknown const& other) noexcept
        {
            if (this != &other)
            {
                release_ref();
                m_ptr = other.m_ptr;
                add_ref();
            }

            return*this;
        }

        IUnknown& operator=(IUnknown&& other) noexcept
        {
            if (this != &other)
            {
                release_ref();
                m_ptr = other.m_ptr;
                other.m_ptr = nullptr;
            }

            return*this;
        }

        explicit operator bool() const noexcept
        {
            return nullptr != m_ptr;
        }

        IUnknown& operator=(std::nullptr_t) noexcept
        {
            release_ref();
            return*this;
        }

        template <typename To>
        auto as() const
        {
            return impl::as<To>(m_ptr);
        }

        template <typename To>
        auto try_as() const noexcept
        {
            return impl::try_as<To>(m_ptr);
        }

        template <typename To>
        void as(To& to) const
        {
            to = as<impl::wrapped_type_t<To>>();
        }

        template <typename To>
        bool try_as(To& to) const noexcept
        {
            to = try_as<impl::wrapped_type_t<To>>();
            return static_cast<bool>(to);
        }

        friend void swap(IUnknown& left, IUnknown& right) noexcept
        {
            std::swap(left.m_ptr, right.m_ptr);
        }

    private:

        void add_ref() const noexcept
        {
            if (m_ptr)
            {
                m_ptr->AddRef();
            }
        }

        void release_ref() noexcept
        {
            if (m_ptr)
            {
                unconditional_release_ref();
            }
        }

        __declspec(noinline) void unconditional_release_ref() noexcept
        {
            WINRT_ASSERT(m_ptr != nullptr);
            auto temp = m_ptr;
            m_ptr = nullptr;
            temp->Release();
        }

        impl::IUnknown* m_ptr{ nullptr };
    };
}

WINRT_EXPORT namespace winrt
{
    inline void* get_abi(Windows::Foundation::IUnknown const& object) noexcept
    {
        return *(void**)(&object);
    }

    inline void** put_abi(Windows::Foundation::IUnknown& object) noexcept
    {
        WINRT_ASSERT(get_abi(object) == nullptr);
        return reinterpret_cast<void**>(&object);
    }

    inline void attach_abi(Windows::Foundation::IUnknown& object, void* value) noexcept
    {
        object = nullptr;
        *put_abi(object) = value;
    }

    inline void* detach_abi(Windows::Foundation::IUnknown& object) noexcept
    {
        void* temp = get_abi(object);
        *reinterpret_cast<void**>(&object) = nullptr;
        return temp;
    }

    inline void* detach_abi(Windows::Foundation::IUnknown&& object) noexcept
    {
        void* temp = get_abi(object);
        *reinterpret_cast<void**>(&object) = nullptr;
        return temp;
    }

    constexpr void* detach_abi(std::nullptr_t) noexcept
    {
        return nullptr;
    }

    inline void copy_from_abi(Windows::Foundation::IUnknown& object, void* value) noexcept
    {
        object = nullptr;

        if (value)
        {
            static_cast<IUnknown*>(value)->AddRef();
            *put_abi(object) = value;
        }
    }

    inline void copy_to_abi(Windows::Foundation::IUnknown const& object, void*& value) noexcept
    {
        WINRT_ASSERT(value == nullptr);
        value = get_abi(object);

        if (value)
        {
            static_cast<IUnknown*>(value)->AddRef();
        }
    }

    inline ::IUnknown* get_unknown(Windows::Foundation::IUnknown const& object) noexcept
    {
        return static_cast<::IUnknown*>(get_abi(object));
    }
}

WINRT_EXPORT namespace winrt::Windows::Foundation
{
    inline bool operator==(IUnknown const& left, IUnknown const& right) noexcept
    {
        if (get_abi(left) == get_abi(right))
        {
            return true;
        }
        if (!left || !right)
        {
            return false;
        }
        return get_abi(left.try_as<IUnknown>()) == get_abi(right.try_as<IUnknown>());
    }

    inline bool operator!=(IUnknown const& left, IUnknown const& right) noexcept
    {
        return !(left == right);
    }

    inline bool operator<(IUnknown const& left, IUnknown const& right) noexcept
    {
        if (get_abi(left) == get_abi(right))
        {
            return false;
        }
        if (!left || !right)
        {
            return get_abi(left) < get_abi(right);
        }
        return get_abi(left.try_as<IUnknown>()) < get_abi(right.try_as<IUnknown>());
    }

    inline bool operator>(IUnknown const& left, IUnknown const& right) noexcept
    {
        return right < left;
    }

    inline bool operator<=(IUnknown const& left, IUnknown const& right) noexcept
    {
        return !(right < left);
    }

    inline bool operator>=(IUnknown const& left, IUnknown const& right) noexcept
    {
        return !(left < right);
    }

    struct IInspectable : IUnknown
    {
        IInspectable(std::nullptr_t = nullptr) noexcept {}
    };
}

namespace winrt::impl
{
    template <typename T>
    auto detach_from(T&& object) noexcept
    {
        return detach_abi(std::forward<T>(object));
    }

    template <typename T>
    T empty_value() noexcept
    {
        if constexpr (std::is_base_of_v<Windows::Foundation::IUnknown, T>)
        {
            return nullptr;
        }
        else
        {
            return {};
        }
    }

    template <typename T, typename Enable = void>
    struct arg
    {
        using in = abi_t<T>;
    };

    template <typename T>
    struct arg<T, std::enable_if_t<std::is_base_of_v<Windows::Foundation::IUnknown, T>>>
    {
        using in = void*;
    };

    template <typename T>
    using arg_in = typename arg<T>::in;

    template <typename T>
    using arg_out = arg_in<T>*;
}

WINRT_EXPORT namespace winrt
{
    template <typename T>
    struct com_ptr
    {
        using type = impl::abi_t<T>;

        com_ptr(std::nullptr_t = nullptr) noexcept {}

        com_ptr(com_ptr const& other) noexcept : m_ptr(other.m_ptr)
        {
            add_ref();
        }

        template <typename U>
        com_ptr(com_ptr<U> const& other) noexcept : m_ptr(other.m_ptr)
        {
            add_ref();
        }

        template <typename U>
        com_ptr(com_ptr<U>&& other) noexcept : m_ptr(other.m_ptr)
        {
            other.m_ptr = nullptr;
        }

        ~com_ptr() noexcept
        {
            release_ref();
        }

        com_ptr& operator=(com_ptr const& other) noexcept
        {
            copy_ref(other.m_ptr);
            return*this;
        }

        template <typename U>
        com_ptr& operator=(com_ptr<U> const& other) noexcept
        {
            copy_ref(other.m_ptr);
            return*this;
        }

        template <typename U>
        com_ptr& operator=(com_ptr<U>&& other) noexcept
        {
            if (m_ptr != other.m_ptr)
            {
                release_ref();
                m_ptr = other.m_ptr;
                other.m_ptr = nullptr;
            }

            return*this;
        }

        explicit operator bool() const noexcept
        {
            return m_ptr != nullptr;
        }

        auto operator->() const noexcept
        {
            if constexpr (std::is_abstract_v<type>)
            {
                return static_cast<impl::no_ref<type>*>(m_ptr);
            }
            else
            {
                return m_ptr;
            }
        }

        T& operator*() const noexcept
        {
            return *m_ptr;
        }

        type* get() const noexcept
        {
            return m_ptr;
        }

        type** put() noexcept
        {
            WINRT_ASSERT(m_ptr == nullptr);
            return &m_ptr;
        }

        void** put_void() noexcept
        {
            return reinterpret_cast<void**>(put());
        }

        void attach(type* value) noexcept
        {
            release_ref();
            *put() = value;
        }

        type* detach() noexcept
        {
            type* temp = m_ptr;
            m_ptr = nullptr;
            return temp;
        }

        friend void swap(com_ptr& left, com_ptr& right) noexcept
        {
            std::swap(left.m_ptr, right.m_ptr);
        }

        template <typename To>
        auto as() const
        {
            return impl::as<To>(m_ptr);
        }

        template <typename To>
        auto try_as() const noexcept
        {
            return impl::try_as<To>(m_ptr);
        }

        template <typename To>
        void as(To& to) const
        {
            to = as<impl::wrapped_type_t<To>>();
        }

        template <typename To>
        bool try_as(To& to) const noexcept
        {
            to = try_as<impl::wrapped_type_t<To>>();
            return static_cast<bool>(to);
        }

        void copy_from(type* other) noexcept
        {
            copy_ref(other);
        }

        void copy_to(type** other) const noexcept
        {
            add_ref();
            *other = m_ptr;
        }

    private:

        void copy_ref(type* other) noexcept
        {
            if (m_ptr != other)
            {
                release_ref();
                m_ptr = other;
                add_ref();
            }
        }

        void add_ref() const noexcept
        {
            if (m_ptr)
            {
                m_ptr->AddRef();
            }
        }

        void release_ref() noexcept
        {
            if (m_ptr)
            {
                unconditional_release_ref();
            }
        }

        __declspec(noinline) void unconditional_release_ref() noexcept
        {
            WINRT_ASSERT(m_ptr != nullptr);
            type* temp = m_ptr;
            m_ptr = nullptr;
            temp->Release();
        }

        template <typename U>
        friend struct com_ptr;

        type* m_ptr{ nullptr };
    };

    template <typename T>
    auto get_abi(com_ptr<T> const& object) noexcept
    {
        return object.get();
    }

    template <typename T>
    auto put_abi(com_ptr<T>& object) noexcept
    {
        return object.put_void();
    }

    template <typename T>
    void attach_abi(com_ptr<T>& object, impl::abi_t<T>* value) noexcept
    {
        object.attach(value);
    }

    template <typename T>
    auto detach_abi(com_ptr<T>& object) noexcept
    {
        return object.detach();
    }

    template <typename T>
    bool operator==(com_ptr<T> const& left, com_ptr<T> const& right) noexcept
    {
        return get_abi(left) == get_abi(right);
    }

    template <typename T>
    bool operator==(com_ptr<T> const& left, std::nullptr_t) noexcept
    {
        return get_abi(left) == nullptr;
    }

    template <typename T>
    bool operator==(std::nullptr_t, com_ptr<T> const& right) noexcept
    {
        return nullptr == get_abi(right);
    }

    template <typename T>
    bool operator!=(com_ptr<T> const& left, com_ptr<T> const& right) noexcept
    {
        return !(left == right);
    }

    template <typename T>
    bool operator!=(com_ptr<T> const& left, std::nullptr_t) noexcept
    {
        return !(left == nullptr);
    }

    template <typename T>
    bool operator!=(std::nullptr_t, com_ptr<T> const& right) noexcept
    {
        return !(nullptr == right);
    }

    template <typename T>
    bool operator<(com_ptr<T> const& left, com_ptr<T> const& right) noexcept
    {
        return get_abi(left) < get_abi(right);
    }

    template <typename T>
    bool operator>(com_ptr<T> const& left, com_ptr<T> const& right) noexcept
    {
        return right < left;
    }

    template <typename T>
    bool operator<=(com_ptr<T> const& left, com_ptr<T> const& right) noexcept
    {
        return !(right < left);
    }

    template <typename T>
    bool operator>=(com_ptr<T> const& left, com_ptr<T> const& right) noexcept
    {
        return !(left < right);
    }
}

namespace winrt::impl
{
    template <typename To, typename From>
    com_ref<To> as(From* ptr)
    {
#ifdef WINRT_DIAGNOSTICS
        get_diagnostics_info().add_query<To>();
#endif

        com_ref<To> result{ nullptr };

        if constexpr (is_implements_v<To>)
        {
            impl::com_ref<impl::default_interface_t<To>> temp;
            check_hresult(ptr->QueryInterface(guid_of<To>(), put_abi(temp)));
            attach_abi(result, from_abi<To>(temp));
            detach_abi(temp);
        }
        else
        {
            check_hresult(ptr->QueryInterface(guid_of<To>(), put_abi(result)));
        }

        return result;
    }

    template <typename To, typename From>
    com_ref<To> try_as(From* ptr) noexcept
    {
#ifdef WINRT_DIAGNOSTICS
        get_diagnostics_info().add_query<To>();
#endif

        com_ref<To> result{ nullptr };

        if constexpr (is_implements_v<To>)
        {
            impl::com_ref<impl::default_interface_t<To>> temp;
            ptr->QueryInterface(guid_of<To>(), put_abi(temp));
            attach_abi(result, from_abi<To>(temp));
            detach_abi(temp);
        }
        else
        {
            ptr->QueryInterface(guid_of<To>(), put_abi(result));
        }

        return result;
    }
}
namespace winrt::impl
{
    inline HSTRING duplicate_string(HSTRING other)
    {
        HSTRING result = nullptr;
        check_hresult(WindowsDuplicateString(other, &result));
        return result;
    }

    inline HSTRING create_string(wchar_t const* value, uint32_t const length)
    {
        HSTRING result = nullptr;
        check_hresult(WindowsCreateString(value, length, &result));
        return result;
    }

    inline uint32_t string_length(wchar_t const* value) noexcept
    {
        size_t length = 0;
        if (value)
        {
            length = wcslen(value);
        }
        WINRT_ASSERT(length <= 0xffffffff);
        return static_cast<uint32_t>(length);
    }

    inline bool embedded_null(HSTRING value) noexcept
    {
        BOOL result = 0;
        WINRT_VERIFY_(S_OK, WindowsStringHasEmbeddedNull(value, &result));
        return 0 != result;
    }

    struct hstring_traits
    {
        using type = HSTRING;

        static void close(type value) noexcept
        {
            WINRT_VERIFY_(S_OK, WindowsDeleteString(value));
        }

        static constexpr type invalid() noexcept
        {
            return nullptr;
        }
    };
}

WINRT_EXPORT namespace winrt
{
    struct hstring
    {
        using value_type = wchar_t;
        using size_type = uint32_t;
        using const_reference = value_type const&;
        using const_pointer = value_type const*;
        using const_iterator = const_pointer;
        using const_reverse_iterator = std::reverse_iterator<const_iterator>;

        hstring() noexcept = default;

        hstring(hstring const& value) :
            m_handle(impl::duplicate_string(value.m_handle.get()))
        {}

        hstring& operator=(hstring const& value)
        {
            m_handle = impl::duplicate_string(value.m_handle.get());
            return*this;
        }

        hstring(hstring&&) noexcept = default;
        hstring& operator=(hstring&&) = default;
        hstring(std::nullptr_t) = delete;

        hstring(wchar_t const* value) :
            hstring(std::wstring_view(value))
        {}

        hstring(wchar_t const* value, size_type size) :
            m_handle(impl::create_string(value, size))
        {}

        explicit hstring(std::wstring_view const& value) :
            hstring(value.data(), static_cast<size_type>(value.size()))
        {}

        hstring& operator=(std::wstring_view const& value)
        {
            return *this = hstring{ value };
        }

        void clear() noexcept
        {
            m_handle.close();
        }

        operator std::wstring_view() const noexcept
        {
            uint32_t size;
            wchar_t const* data = WindowsGetStringRawBuffer(m_handle.get(), &size);
            return std::wstring_view(data, size);
        }

        const_reference operator[](size_type pos) const noexcept
        {
            WINRT_ASSERT(pos < size());
            return*(begin() + pos);
        }

        const_reference front() const noexcept
        {
            WINRT_ASSERT(!empty());
            return*begin();
        }

        const_reference back() const noexcept
        {
            WINRT_ASSERT(!empty());
            return*(end() - 1);
        }

        const_pointer data() const noexcept
        {
            return begin();
        }

        const_pointer c_str() const noexcept
        {
            return begin();
        }

        const_iterator begin() const noexcept
        {
            return WindowsGetStringRawBuffer(m_handle.get(), nullptr);
        }

        const_iterator cbegin() const noexcept
        {
            return begin();
        }

        const_iterator end() const noexcept
        {
            uint32_t length = 0;
            const_pointer buffer = WindowsGetStringRawBuffer(m_handle.get(), &length);
            return buffer + length;
        }

        const_iterator cend() const noexcept
        {
            return end();
        }

        const_reverse_iterator rbegin() const noexcept
        {
            return const_reverse_iterator(end());
        }

        const_reverse_iterator crbegin() const noexcept
        {
            return rbegin();
        }

        const_reverse_iterator rend() const noexcept
        {
            return const_reverse_iterator(begin());
        }

        const_reverse_iterator crend() const noexcept
        {
            return rend();
        }

        bool empty() const noexcept
        {
            return 0 == size();
        }

        size_type size() const noexcept
        {
            return WindowsGetStringLen(m_handle.get());
        }

        friend void swap(hstring& left, hstring& right) noexcept
        {
            swap(left.m_handle, right.m_handle);
        }

    private:

        handle_type<impl::hstring_traits> m_handle;
    };

    inline HSTRING get_abi(hstring const& object) noexcept
    {
        return *(HSTRING*)(&object);
    }

    inline HSTRING* put_abi(hstring& object) noexcept
    {
        WINRT_ASSERT(get_abi(object) == nullptr);
        return reinterpret_cast<HSTRING*>(&object);
    }

    inline void attach_abi(hstring& object, HSTRING value) noexcept
    {
        object.clear();
        *put_abi(object) = value;
    }

    inline HSTRING detach_abi(hstring& object) noexcept
    {
        HSTRING temp = get_abi(object);
        *reinterpret_cast<HSTRING*>(&object) = nullptr;
        return temp;
    }

    inline HSTRING detach_abi(hstring&& object) noexcept
    {
        return detach_abi(object);
    }

    inline void copy_from_abi(hstring& object, HSTRING value)
    {
        attach_abi(object, impl::duplicate_string(value));
    }

    inline void copy_to_abi(hstring const& object, HSTRING& value)
    {
        WINRT_ASSERT(value == nullptr);
        value = impl::duplicate_string(get_abi(object));
    }

    inline HSTRING detach_abi(std::wstring_view const& value)
    {
        return impl::create_string(value.data(), static_cast<uint32_t>(value.size()));
    }
}

namespace winrt::impl
{
    template <> struct abi<hstring>
    {
        using type = HSTRING;
    };

    template <> struct name<hstring>
    {
        static constexpr auto & value{ L"String" };
        static constexpr auto & data{ "string" };
    };

    template <> struct category<hstring>
    {
        using type = basic_category;
    };

    // Temporary workaround to support locale-independent numeric formatting
    // until C++17's to_chars arrives
    struct locale_handle_traits
    {
        using type = _locale_t;

        static void close(type value) noexcept
        {
            _free_locale(value);
        }

        static constexpr type invalid() noexcept
        {
            return nullptr;
        }
    };

    inline _locale_t get_default_locale()
    {
        static handle_type<locale_handle_traits> locale_handle{ _create_locale(LC_ALL, "C") };
        return locale_handle.get();
    }

    struct hstring_builder
    {
        hstring_builder(hstring_builder const&) = delete;
        hstring_builder& operator=(hstring_builder const&) = delete;

        explicit hstring_builder(uint32_t const size)
        {
            check_hresult(WindowsPreallocateStringBuffer(size, &m_data, &m_buffer));
        }

        ~hstring_builder() noexcept
        {
            if (m_buffer != nullptr)
            {
                WINRT_VERIFY_(S_OK, WindowsDeleteStringBuffer(m_buffer));
            }
        }

        wchar_t* data() noexcept
        {
            WINRT_ASSERT(m_buffer != nullptr);
            return m_data;
        }

        hstring to_hstring()
        {
            WINRT_ASSERT(m_buffer != nullptr);
            hstring result;
            check_hresult(WindowsPromoteStringBuffer(m_buffer, put_abi(result)));
            m_buffer = nullptr;
            return result;
        }

    private:

        wchar_t* m_data{ nullptr };
        HSTRING_BUFFER m_buffer{ nullptr };
    };
}

WINRT_EXPORT namespace winrt
{
    inline bool embedded_null(hstring const& value) noexcept
    {
        return impl::embedded_null(get_abi(value));
    }

    inline hstring to_hstring(uint8_t value)
    {
        wchar_t buffer[32];
        swprintf_s(buffer, L"%hhu", value);
        return hstring{ buffer };
    }

    inline hstring to_hstring(int8_t value)
    {
        wchar_t buffer[32];
        swprintf_s(buffer, L"%hhd", value);
        return hstring{ buffer };
    }

    inline hstring to_hstring(uint16_t value)
    {
        wchar_t buffer[32];
        swprintf_s(buffer, L"%hu", value);
        return hstring{ buffer };
    }

    inline hstring to_hstring(int16_t value)
    {
        wchar_t buffer[32];
        swprintf_s(buffer, L"%hd", value);
        return hstring{ buffer };
    }

    inline hstring to_hstring(uint32_t value)
    {
        wchar_t buffer[32];
        swprintf_s(buffer, L"%I32u", value);
        return hstring{ buffer };
    }

    inline hstring to_hstring(int32_t value)
    {
        wchar_t buffer[32];
        swprintf_s(buffer, L"%I32d", value);
        return hstring{ buffer };
    }

    inline hstring to_hstring(uint64_t value)
    {
        wchar_t buffer[32];
        swprintf_s(buffer, L"%I64u", value);
        return hstring{ buffer };
    }

    inline hstring to_hstring(int64_t value)
    {
        wchar_t buffer[32];
        swprintf_s(buffer, L"%I64d", value);
        return hstring{ buffer };
    }

    inline hstring to_hstring(float value)
    {
        wchar_t buffer[32];
        _swprintf_s_l(buffer, _countof(buffer), L"%G", impl::get_default_locale(), value);
        return hstring{ buffer };
    }

    inline hstring to_hstring(double value)
    {
        wchar_t buffer[32];
        _swprintf_s_l(buffer, _countof(buffer), L"%G", impl::get_default_locale(), value);
        return hstring{ buffer };
    }

    inline hstring to_hstring(char16_t value)
    {
        wchar_t buffer[2] = { value, 0 };
        return hstring{ buffer };
    }

    inline hstring to_hstring(hstring const& value) noexcept
    {
        return value;
    }

    inline hstring to_hstring(bool value)
    {
        if (value)
        {
            return hstring{ L"true" };
        }
        else
        {
            return hstring{ L"false" };
        }
    }

    inline hstring to_hstring(GUID const& value)
    {
        wchar_t buffer[40];
        //{00000000-0000-0000-0000-000000000000}
        swprintf_s(buffer, L"{%08x-%04hx-%04hx-%02hhx%02hhx-%02hhx%02hhx%02hhx%02hhx%02hhx%02hhx}",
            value.Data1, value.Data2, value.Data3, value.Data4[0], value.Data4[1],
            value.Data4[2], value.Data4[3], value.Data4[4], value.Data4[5], value.Data4[6], value.Data4[7]);
        return hstring{ buffer };
    }

    template <typename T, typename = std::enable_if_t<std::is_convertible_v<T, std::string_view>>>
    hstring to_hstring(T const& value)
    {
        std::string_view const view(value);
        int const size = MultiByteToWideChar(CP_UTF8, 0, view.data(), static_cast<int32_t>(view.size()), nullptr, 0);

        if (size == 0)
        {
            return{};
        }

        impl::hstring_builder result(size);
        WINRT_VERIFY_(size, MultiByteToWideChar(CP_UTF8, 0, view.data(), static_cast<int32_t>(view.size()), result.data(), size));
        return result.to_hstring();
    }

    inline std::string to_string(std::wstring_view value)
    {
        int const size = WideCharToMultiByte( CP_UTF8, 0, value.data(), static_cast<int32_t>(value.size()), nullptr, 0, nullptr, nullptr);

        if (size == 0)
        {
            return{};
        }

        std::string result(size, '?');
        WINRT_VERIFY_(size, WideCharToMultiByte(CP_UTF8, 0, value.data(), static_cast<int32_t>(value.size()), result.data(), size, nullptr, nullptr));
        return result;
    }
}

WINRT_EXPORT namespace winrt::param
{
    struct hstring
    {
        hstring() noexcept : m_handle(nullptr) {}
        hstring(hstring const& values) = delete;
        hstring& operator=(hstring const& values) = delete;
        hstring(std::nullptr_t) = delete;

        hstring(winrt::hstring const& value) noexcept : m_handle(get_abi(value))
        {
        }

        hstring(std::wstring_view const& value) noexcept
        {
            WINRT_VERIFY_(S_OK, WindowsCreateStringReference(value.data(), static_cast<uint32_t>(value.size()), &m_header, &m_handle));
        }

        hstring(std::wstring const& value) noexcept : hstring(std::wstring_view(value))
        {
        }

        hstring(wchar_t const* const value) noexcept : hstring(std::wstring_view(value))
        {
        }

    private:

        HSTRING m_handle;
        HSTRING_HEADER m_header;
    };

    inline HSTRING get_abi(hstring const& object) noexcept
    {
        return *(HSTRING*)(&object);
    }
}

WINRT_EXPORT namespace winrt
{
    inline bool operator==(hstring const& left, hstring const& right) noexcept
    {
        return std::wstring_view(left) == std::wstring_view(right);
    }

    inline bool operator==(hstring const& left, std::wstring const& right) noexcept
    {
        return std::wstring_view(left) == right;
    }

    inline bool operator==(std::wstring const& left, hstring const& right) noexcept
    {
        return left == std::wstring_view(right);
    }

    inline bool operator==(hstring const& left, wchar_t const* right) noexcept
    {
        return std::wstring_view(left) == right;
    }

    inline bool operator==(wchar_t const* left, hstring const& right) noexcept
    {
        return left == std::wstring_view(right);
    }

    bool operator==(hstring const& left, nullptr_t) = delete;

    bool operator==(nullptr_t, hstring const& right) = delete;

    inline bool operator<(hstring const& left, hstring const& right) noexcept
    {
        return std::wstring_view(left) < std::wstring_view(right);
    }

    inline bool operator<(std::wstring const& left, hstring const& right) noexcept
    {
        return left < std::wstring_view(right);
    }

    inline bool operator<(hstring const& left, std::wstring const& right) noexcept
    {
        return std::wstring_view(left) < right;
    }

    inline bool operator<(hstring const& left, wchar_t const* right) noexcept
    {
        return std::wstring_view(left) < right;
    }

    inline bool operator<(wchar_t const* left, hstring const& right) noexcept
    {
        return left < std::wstring_view(right);
    }

    bool operator<(hstring const& left, nullptr_t) = delete;

    bool operator<(nullptr_t, hstring const& right) = delete;
    inline bool operator!=(hstring const& left, hstring const& right) noexcept { return !(left == right); }
    inline bool operator>(hstring const& left, hstring const& right) noexcept { return right < left; }
    inline bool operator<=(hstring const& left, hstring const& right) noexcept { return !(right < left); }
    inline bool operator>=(hstring const& left, hstring const& right) noexcept { return !(left < right); }

    inline bool operator!=(hstring const& left, std::wstring const& right) noexcept { return !(left == right); }
    inline bool operator>(hstring const& left, std::wstring const& right) noexcept { return right < left; }
    inline bool operator<=(hstring const& left, std::wstring const& right) noexcept { return !(right < left); }
    inline bool operator>=(hstring const& left, std::wstring const& right) noexcept { return !(left < right); }

    inline bool operator!=(std::wstring const& left, hstring const& right) noexcept { return !(left == right); }
    inline bool operator>(std::wstring const& left, hstring const& right) noexcept { return right < left; }
    inline bool operator<=(std::wstring const& left, hstring const& right) noexcept { return !(right < left); }
    inline bool operator>=(std::wstring const& left, hstring const& right) noexcept { return !(left < right); }

    inline bool operator!=(hstring const& left, wchar_t const* right) noexcept { return !(left == right); }
    inline bool operator>(hstring const& left, wchar_t const* right) noexcept { return right < left; }
    inline bool operator<=(hstring const& left, wchar_t const* right) noexcept { return !(right < left); }
    inline bool operator>=(hstring const& left, wchar_t const* right) noexcept { return !(left < right); }

    inline bool operator!=(wchar_t const* left, hstring const& right) noexcept { return !(left == right); }
    inline bool operator>(wchar_t const* left, hstring const& right) noexcept { return right < left; }
    inline bool operator<=(wchar_t const* left, hstring const& right) noexcept { return !(right < left); }
    inline bool operator>=(wchar_t const* left, hstring const& right) noexcept { return !(left < right); }

    bool operator!=(hstring const& left, nullptr_t right) = delete;
    bool operator>(hstring const& left, nullptr_t right) = delete;
    bool operator<=(hstring const& left, nullptr_t right) = delete;
    bool operator>=(hstring const& left, nullptr_t right) = delete;

    bool operator!=(nullptr_t left, hstring const& right) = delete;
    bool operator>(nullptr_t left, hstring const& right) = delete;
    bool operator<=(nullptr_t left, hstring const& right) = delete;
    bool operator>=(nullptr_t left, hstring const& right) = delete;
}

namespace winrt::impl
{
    inline hstring concat_hstring(param::hstring const& left, param::hstring const& right)
    {
        hstring result;
        check_hresult(WindowsConcatString(get_abi(left), get_abi(right), put_abi(result)));
        return result;
    }
}

WINRT_EXPORT namespace winrt
{
    inline hstring operator+(hstring const& left, hstring const& right)
    {
        return impl::concat_hstring(left, right);
    }

    inline hstring operator+(hstring const& left, std::wstring const& right)
    {
        return impl::concat_hstring(left, right);
    }

    inline hstring operator+(std::wstring const& left, hstring const& right)
    {
        return impl::concat_hstring(left, right);
    }

    inline hstring operator+(hstring const& left, wchar_t const* right)
    {
        return impl::concat_hstring(left, right);
    }

    inline hstring operator+(wchar_t const* left, hstring const& right)
    {
        return impl::concat_hstring(left, right);
    }

    inline hstring operator+(hstring const& left, wchar_t right)
    {
        return impl::concat_hstring(left, std::wstring_view(&right, 1));
    }

    inline hstring operator+(wchar_t left, hstring const& right)
    {
        return impl::concat_hstring(std::wstring_view(&left, 1), right);
    }

    hstring operator+(hstring const& left, nullptr_t) = delete;

    hstring operator+(nullptr_t, hstring const& right) = delete;

    inline hstring operator+(hstring const& left, std::wstring_view const& right)
    {
        return impl::concat_hstring(left, right);
    }

    inline hstring operator+(std::wstring_view const& left, hstring const& right)
    {
        return impl::concat_hstring(left, right);
    }
}

namespace winrt::impl
{
    struct heap_traits
    {
        using type = wchar_t*;

        static void close(type value) noexcept
        {
            WINRT_VERIFY(HeapFree(GetProcessHeap(), 0, value));
        }

        static constexpr type invalid() noexcept
        {
            return nullptr;
        }
    };

    struct bstr_traits
    {
        using type = BSTR;

        static void close(type value) noexcept
        {
            SysFreeString(value);
        }

        static constexpr type invalid() noexcept
        {
            return nullptr;
        }
    };

    using bstr_handle = handle_type<bstr_traits>;

    inline hstring trim_hresult_message(wchar_t const* const message, uint32_t size) noexcept
    {
        wchar_t const* back = message + size - 1;

        while (size&& iswspace(*back))
        {
            --size;
            --back;
        }

        hstring result;
        WindowsCreateString(message, size, put_abi(result));
        return result;
    }

    template <> struct guid<::ILanguageExceptionErrorInfo2>
    {
        static constexpr GUID value{ 0x5746E5C4,0x5B97,0x424C,{ 0xB6,0x20,0x28,0x22,0x91,0x57,0x34,0xDD } };
    };
}

WINRT_EXPORT namespace winrt
{
    struct hresult_error
    {
        struct from_abi_t {};
        static constexpr from_abi_t from_abi{};

        hresult_error() noexcept = default;
        hresult_error(hresult_error&&) = default;
        hresult_error& operator=(hresult_error&&) = default;

        hresult_error(hresult_error const& other) noexcept :
        m_code(other.m_code),
            m_info(other.m_info)
        {
        }

        hresult_error& operator=(hresult_error const& other) noexcept
        {
            m_code = other.m_code;
            m_info = other.m_info;
            return *this;
        }

        explicit hresult_error(HRESULT const code) noexcept : m_code(code)
        {
            WINRT_VERIFY(WINRT_RoOriginateLanguageException(code, nullptr, nullptr));
            WINRT_VERIFY_(S_OK, WINRT_GetRestrictedErrorInfo(m_info.put()));
        }

        hresult_error(HRESULT const code, param::hstring const& message, ::IUnknown* object = nullptr) noexcept : m_code(code)
        {
            WINRT_VERIFY(WINRT_RoOriginateLanguageException(code, get_abi(message), object));
            WINRT_VERIFY_(S_OK, WINRT_GetRestrictedErrorInfo(m_info.put()));
        }

        hresult_error(HRESULT const code, from_abi_t) noexcept : m_code(code)
        {
            WINRT_GetRestrictedErrorInfo(m_info.put());

            if (m_info == nullptr)
            {
                WINRT_VERIFY(WINRT_RoOriginateLanguageException(code, nullptr, nullptr));
                WINRT_VERIFY_(S_OK, WINRT_GetRestrictedErrorInfo(m_info.put()));
            }

            if (m_info != nullptr)
            {
                WINRT_VERIFY_(S_OK, m_info->GetReference(m_debug_reference.put()));

                if (com_ptr<ILanguageExceptionErrorInfo2> info2 = m_info.try_as<ILanguageExceptionErrorInfo2>())
                {
                    WINRT_VERIFY_(S_OK, info2->CapturePropagationContext(nullptr));
                }
            }
        }

        HRESULT code() const noexcept
        {
            return m_code;
        }

        hstring message() const noexcept
        {
            if (m_info)
            {
                HRESULT code{};
                impl::bstr_handle fallback;
                impl::bstr_handle message;
                impl::bstr_handle unused;

                if (S_OK == m_info->GetErrorDetails(fallback.put(), &code, message.put(), unused.put()))
                {
                    if (code == m_code)
                    {
                        if (message)
                        {
                            return impl::trim_hresult_message(message.get(), SysStringLen(message.get()));
                        }
                        else
                        {
                            return impl::trim_hresult_message(fallback.get(), SysStringLen(fallback.get()));
                        }
                    }
                }
            }

            handle_type<impl::heap_traits> message;

            uint32_t const size = FormatMessageW(FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_FROM_SYSTEM | FORMAT_MESSAGE_IGNORE_INSERTS,
                nullptr,
                m_code,
                MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT),
                reinterpret_cast<wchar_t*>(message.put()),
                0,
                nullptr);

            return impl::trim_hresult_message(message.get(), size);
        }

        com_ptr<IRestrictedErrorInfo> const& info() const noexcept
        {
            return m_info;
        }

        HRESULT to_abi() const noexcept
        {
            if (m_info)
            {
                WINRT_SetRestrictedErrorInfo(m_info.get());
            }

            return m_code;
        }

    private:

        impl::bstr_handle m_debug_reference;
        uint32_t const m_debug_magic{ 0xAABBCCDD };
        HRESULT m_code{ E_FAIL };
        com_ptr<IRestrictedErrorInfo> m_info;
    };

    struct hresult_access_denied : hresult_error
    {
        hresult_access_denied() noexcept : hresult_error(E_ACCESSDENIED) {}
        hresult_access_denied(param::hstring const& message) noexcept : hresult_error(E_ACCESSDENIED, message) {}
        hresult_access_denied(from_abi_t) noexcept : hresult_error(E_ACCESSDENIED, from_abi) {}
    };

    struct hresult_wrong_thread : hresult_error
    {
        hresult_wrong_thread() noexcept : hresult_error(RPC_E_WRONG_THREAD) {}
        hresult_wrong_thread(param::hstring const& message) noexcept : hresult_error(RPC_E_WRONG_THREAD, message) {}
        hresult_wrong_thread(from_abi_t) noexcept : hresult_error(RPC_E_WRONG_THREAD, from_abi) {}
    };

    struct hresult_not_implemented : hresult_error
    {
        hresult_not_implemented() noexcept : hresult_error(E_NOTIMPL) {}
        hresult_not_implemented(param::hstring const& message) noexcept : hresult_error(E_NOTIMPL, message) {}
        hresult_not_implemented(from_abi_t) noexcept : hresult_error(E_NOTIMPL, from_abi) {}
    };

    struct hresult_invalid_argument : hresult_error
    {
        hresult_invalid_argument() noexcept : hresult_error(E_INVALIDARG) {}
        hresult_invalid_argument(param::hstring const& message) noexcept : hresult_error(E_INVALIDARG, message) {}
        hresult_invalid_argument(from_abi_t) noexcept : hresult_error(E_INVALIDARG, from_abi) {}
    };

    struct hresult_out_of_bounds : hresult_error
    {
        hresult_out_of_bounds() noexcept : hresult_error(E_BOUNDS) {}
        hresult_out_of_bounds(param::hstring const& message) noexcept : hresult_error(E_BOUNDS, message) {}
        hresult_out_of_bounds(from_abi_t) noexcept : hresult_error(E_BOUNDS, from_abi) {}
    };

    struct hresult_no_interface : hresult_error
    {
        hresult_no_interface() noexcept : hresult_error(E_NOINTERFACE) {}
        hresult_no_interface(param::hstring const& message) noexcept : hresult_error(E_NOINTERFACE, message) {}
        hresult_no_interface(from_abi_t) noexcept : hresult_error(E_NOINTERFACE, from_abi) {}
    };

    struct hresult_class_not_available : hresult_error
    {
        hresult_class_not_available() noexcept : hresult_error(CLASS_E_CLASSNOTAVAILABLE) {}
        hresult_class_not_available(param::hstring const& message) noexcept : hresult_error(CLASS_E_CLASSNOTAVAILABLE, message) {}
        hresult_class_not_available(from_abi_t) noexcept : hresult_error(CLASS_E_CLASSNOTAVAILABLE, from_abi) {}
    };

    struct hresult_changed_state : hresult_error
    {
        hresult_changed_state() noexcept : hresult_error(E_CHANGED_STATE) {}
        hresult_changed_state(param::hstring const& message) noexcept : hresult_error(E_CHANGED_STATE, message) {}
        hresult_changed_state(from_abi_t) noexcept : hresult_error(E_CHANGED_STATE, from_abi) {}
    };

    struct hresult_illegal_method_call : hresult_error
    {
        hresult_illegal_method_call() noexcept : hresult_error(E_ILLEGAL_METHOD_CALL) {}
        hresult_illegal_method_call(param::hstring const& message) noexcept : hresult_error(E_ILLEGAL_METHOD_CALL, message) {}
        hresult_illegal_method_call(from_abi_t) noexcept : hresult_error(E_ILLEGAL_METHOD_CALL, from_abi) {}
    };

    struct hresult_illegal_state_change : hresult_error
    {
        hresult_illegal_state_change() noexcept : hresult_error(E_ILLEGAL_STATE_CHANGE) {}
        hresult_illegal_state_change(param::hstring const& message) noexcept : hresult_error(E_ILLEGAL_STATE_CHANGE, message) {}
        hresult_illegal_state_change(from_abi_t) noexcept : hresult_error(E_ILLEGAL_STATE_CHANGE, from_abi) {}
    };

    struct hresult_illegal_delegate_assignment : hresult_error
    {
        hresult_illegal_delegate_assignment() noexcept : hresult_error(E_ILLEGAL_DELEGATE_ASSIGNMENT) {}
        hresult_illegal_delegate_assignment(param::hstring const& message) noexcept : hresult_error(E_ILLEGAL_DELEGATE_ASSIGNMENT, message) {}
        hresult_illegal_delegate_assignment(from_abi_t) noexcept : hresult_error(E_ILLEGAL_DELEGATE_ASSIGNMENT, from_abi) {}
    };

    struct hresult_canceled : hresult_error
    {
        hresult_canceled() noexcept : hresult_error(HRESULT_FROM_WIN32(ERROR_CANCELLED)) {}
        hresult_canceled(param::hstring const& message) noexcept : hresult_error(HRESULT_FROM_WIN32(ERROR_CANCELLED), message) {}
        hresult_canceled(from_abi_t) noexcept : hresult_error(HRESULT_FROM_WIN32(ERROR_CANCELLED), from_abi) {}
    };
}

WINRT_EXPORT namespace winrt
{
    [[noreturn]] inline __declspec(noinline) void throw_hresult(HRESULT const result)
    {
        if (result == E_OUTOFMEMORY)
        {
            throw std::bad_alloc();
        }

        if (result == E_ACCESSDENIED)
        {
            throw hresult_access_denied(hresult_error::from_abi);
        }

        if (result == RPC_E_WRONG_THREAD)
        {
            throw hresult_wrong_thread(hresult_error::from_abi);
        }

        if (result == E_NOTIMPL)
        {
            throw hresult_not_implemented(hresult_error::from_abi);
        }

        if (result == E_INVALIDARG)
        {
            throw hresult_invalid_argument(hresult_error::from_abi);
        }

        if (result == E_BOUNDS)
        {
            throw hresult_out_of_bounds(hresult_error::from_abi);
        }

        if (result == E_NOINTERFACE)
        {
            throw hresult_no_interface(hresult_error::from_abi);
        }

        if (result == CLASS_E_CLASSNOTAVAILABLE)
        {
            throw hresult_class_not_available(hresult_error::from_abi);
        }

        if (result == E_CHANGED_STATE)
        {
            throw hresult_changed_state(hresult_error::from_abi);
        }

        if (result == E_ILLEGAL_METHOD_CALL)
        {
            throw hresult_illegal_method_call(hresult_error::from_abi);
        }

        if (result == E_ILLEGAL_STATE_CHANGE)
        {
            throw hresult_illegal_state_change(hresult_error::from_abi);
        }

        if (result == E_ILLEGAL_DELEGATE_ASSIGNMENT)
        {
            throw hresult_illegal_delegate_assignment(hresult_error::from_abi);
        }

        if (result == HRESULT_FROM_WIN32(ERROR_CANCELLED))
        {
            throw hresult_canceled(hresult_error::from_abi);
        }

        throw hresult_error(result, hresult_error::from_abi);
    }

    inline __declspec(noinline) HRESULT to_hresult() noexcept
    {
        try
        {
            throw;
        }
        catch (hresult_error const& e)
        {
            return e.to_abi();
        }
        WINRT_EXTERNAL_CATCH_CLAUSE
        catch (std::bad_alloc const&)
        {
            return E_OUTOFMEMORY;
        }
        catch (std::out_of_range const& e)
        {
            return hresult_out_of_bounds(to_hstring(e.what())).to_abi();
        }
        catch (std::invalid_argument const& e)
        {
            return hresult_invalid_argument(to_hstring(e.what())).to_abi();
        }
        catch (std::exception const& e)
        {
            return hresult_error(E_FAIL, to_hstring(e.what())).to_abi();
        }
    }

    [[noreturn]] inline void throw_last_error()
    {
        throw_hresult(HRESULT_FROM_WIN32(GetLastError()));
    }
}

WINRT_EXPORT namespace winrt
{
    __forceinline void check_hresult(HRESULT const result)
    {
#ifdef WINRT_STRICT_HRESULT
        if (result != S_OK)
#else
        if (result < 0)
#endif
        {
            throw_hresult(result);
        }
    }

    template<typename T>
    void check_nt(T result)
    {
        if (result != 0)
        {
            throw_hresult(HRESULT_FROM_NT(result));
        }
    }

    template<typename T>
    void check_win32(T result)
    {
        if (result != 0)
        {
            throw_hresult(HRESULT_FROM_WIN32(result));
        }
    }

    template<typename T>
    void check_bool(T result)
    {
        if (!result)
        {
            winrt::throw_last_error();
        }
    }

    template<typename T>
    T* check_pointer(T* pointer)
    {
        if (!pointer)
        {
            throw_last_error();
        }

        return pointer;
    }
}

namespace winrt::impl
{
#ifdef WINRT_CHECKED_ITERATORS

    template <typename T>
    using array_iterator = stdext::checked_array_iterator<T*>;

    template <typename T>
    auto make_array_iterator(T* data, uint32_t size, uint32_t index = 0) noexcept
    {
        return array_iterator<T>(data, size, index);
    }

#else

    template <typename T>
    using array_iterator = T*;

    template <typename T>
    auto make_array_iterator(T* data, uint32_t, uint32_t index = 0) noexcept
    {
        return data + index;
    }

#endif
}

WINRT_EXPORT namespace winrt
{
    template <typename T>
    struct array_view
    {
        using value_type = T;
        using size_type = uint32_t;
        using reference = value_type&;
        using const_reference = value_type const&;
        using pointer = value_type*;
        using const_pointer = value_type const*;
        using iterator = impl::array_iterator<value_type>;
        using const_iterator = impl::array_iterator<value_type const>;
        using reverse_iterator = std::reverse_iterator<iterator>;
        using const_reverse_iterator = std::reverse_iterator<const_iterator>;

        array_view() noexcept = default;

        array_view(pointer first, pointer last) noexcept :
            m_data(first),
            m_size(static_cast<size_type>(last - first))
        {}

        array_view(std::initializer_list<value_type> value) noexcept :
            array_view(value.begin(), static_cast<size_type>(value.size()))
        {}

        template <typename C, size_type N>
        array_view(C(&value)[N]) noexcept :
            array_view(value, N)
        {}

        template <typename C>
        array_view(std::vector<C>& value) noexcept :
            array_view(value.data(), static_cast<size_type>(value.size()))
        {}

        template <typename C>
        array_view(std::vector<C> const& value) noexcept :
            array_view(value.data(), static_cast<size_type>(value.size()))
        {}

        template <typename C, size_type N>
        array_view(std::array<C, N>& value) noexcept :
            array_view(value.data(), static_cast<size_type>(value.size()))
        {}

        template <typename C, size_type N>
        array_view(std::array<C, N> const& value) noexcept :
            array_view(value.data(), static_cast<size_type>(value.size()))
        {}

        reference operator[](size_type const pos) noexcept
        {
            WINRT_ASSERT(pos < size());
            return m_data[pos];
        }

        const_reference operator[](size_type const pos) const noexcept
        {
            WINRT_ASSERT(pos < size());
            return m_data[pos];
        }

        reference at(size_type const pos)
        {
            if (size() <= pos)
            {
                throw std::out_of_range("Invalid array subscript");
            }

            return m_data[pos];
        }

        const_reference at(size_type const pos) const
        {
            if (size() <= pos)
            {
                throw std::out_of_range("Invalid array subscript");
            }

            return m_data[pos];
        }

        reference front() noexcept
        {
            WINRT_ASSERT(m_size > 0);
            return*m_data;
        }

        const_reference front() const noexcept
        {
            WINRT_ASSERT(m_size > 0);
            return*m_data;
        }

        reference back() noexcept
        {
            WINRT_ASSERT(m_size > 0);
            return m_data[m_size - 1];
        }

        const_reference back() const noexcept
        {
            WINRT_ASSERT(m_size > 0);
            return m_data[m_size - 1];
        }

        pointer data() noexcept
        {
            return m_data;
        }

        const_pointer data() const noexcept
        {
            return m_data;
        }

        iterator begin() noexcept
        {
            return impl::make_array_iterator(m_data, m_size);
        }

        const_iterator begin() const noexcept
        {
            return impl::make_array_iterator<value_type const>(m_data, m_size);
        }

        const_iterator cbegin() const noexcept
        {
            return impl::make_array_iterator<value_type const>(m_data, m_size);
        }

        iterator end() noexcept
        {
            return impl::make_array_iterator(m_data, m_size, m_size);
        }

        const_iterator end() const noexcept
        {
            return impl::make_array_iterator<value_type const>(m_data, m_size, m_size);
        }

        const_iterator cend() const noexcept
        {
            return impl::make_array_iterator<value_type const>(m_data, m_size, m_size);
        }

        reverse_iterator rbegin() noexcept
        {
            return reverse_iterator(end());
        }

        const_reverse_iterator rbegin() const noexcept
        {
            return const_reverse_iterator(end());
        }

        const_reverse_iterator crbegin() const noexcept
        {
            return rbegin();
        }

        reverse_iterator rend() noexcept
        {
            return reverse_iterator(begin());
        }

        const_reverse_iterator rend() const noexcept
        {
            return const_reverse_iterator(begin());
        }

        const_reverse_iterator crend() const noexcept
        {
            return rend();
        }

        bool empty() const noexcept
        {
            return m_size == 0;
        }

        size_type size() const noexcept
        {
            return m_size;
        }

    protected:

        array_view(pointer data, size_type size) noexcept :
            m_data(data),
            m_size(size)
        {}

        pointer m_data{ nullptr };
        size_type m_size{ 0 };
    };

    template <typename T>
    struct com_array : array_view<T>
    {
        using typename array_view<T>::value_type;
        using typename array_view<T>::size_type;
        using typename array_view<T>::reference;
        using typename array_view<T>::const_reference;
        using typename array_view<T>::pointer;
        using typename array_view<T>::const_pointer;
        using typename array_view<T>::iterator;
        using typename array_view<T>::const_iterator;
        using typename array_view<T>::reverse_iterator;
        using typename array_view<T>::const_reverse_iterator;

        com_array(com_array const&) = delete;
        com_array& operator=(com_array const&) = delete;

        com_array() noexcept = default;

        explicit com_array(size_type const count) :
            com_array(count, value_type())
        {}

        com_array(size_type const count, value_type const& value)
        {
            alloc(count);
            std::uninitialized_fill_n(this->m_data, count, value);
        }

        template <typename InIt> com_array(InIt first, InIt last)
        {
            alloc(static_cast<size_type>(std::distance(first, last)));
            std::uninitialized_copy(first, last, this->begin());
        }

        explicit com_array(std::vector<value_type> const& value) :
            com_array(value.begin(), value.end())
        {}

        template <size_type N>
        explicit com_array(std::array<value_type, N> const& value) :
            com_array(value.begin(), value.end())
        {}

        template <size_type N>
        explicit com_array(value_type const(&value)[N]) :
            com_array(value, value + N)
        {}

        com_array(std::initializer_list<value_type> value) :
            com_array(value.begin(), value.end())
        {}

        com_array(com_array&& other) noexcept :
            array_view<T>(other.m_data, other.m_size)
        {
            other.m_data = nullptr;
            other.m_size = 0;
        }

        com_array& operator=(com_array&& other) noexcept
        {
            clear();
            this->m_data = other.m_data;
            this->m_size = other.m_size;
            other.m_data = nullptr;
            other.m_size = 0;
            return*this;
        }

        ~com_array() noexcept
        {
            clear();
        }

        void clear() noexcept
        {
            if (this->m_data == nullptr) { return; }

            std::destroy(this->begin(), this->end());

            CoTaskMemFree(this->m_data);
            this->m_data = nullptr;
            this->m_size = 0;
        }

        friend void swap(com_array& left, com_array& right) noexcept
        {
            std::swap(left.m_data, right.m_data);
            std::swap(left.m_size, right.m_size);
        }

    private:

        void alloc(size_type const size)
        {
            WINRT_ASSERT(this->empty());

            if (0 != size)
            {
                this->m_data = static_cast<value_type*>(CoTaskMemAlloc(size * sizeof(value_type)));

                if (this->m_data == nullptr)
                {
                    throw std::bad_alloc();
                }

                this->m_size = size;
            }
        }
    };

    template <typename T>
    bool operator==(array_view<T> const& left, array_view<T> const& right) noexcept
    {
        return std::equal(left.begin(), left.end(), right.begin(), right.end());
    }

    template <typename T>
    bool operator<(array_view<T> const& left, array_view<T> const& right) noexcept
    {
        return std::lexicographical_compare(left.begin(), left.end(), right.begin(), right.end());
    }

    template <typename T> bool operator!=(array_view<T> const& left, array_view<T> const& right) noexcept { return !(left == right); }
    template <typename T> bool operator>(array_view<T> const& left, array_view<T> const& right) noexcept { return right < left; }
    template <typename T> bool operator<=(array_view<T> const& left, array_view<T> const& right) noexcept { return !(right < left); }
    template <typename T> bool operator>=(array_view<T> const& left, array_view<T> const& right) noexcept { return !(left < right); }

    template <typename T>
    static auto get_abi(array_view<T> object) noexcept
    {
        if constexpr (std::is_base_of_v<Windows::Foundation::IUnknown, T>)
        {
            return (void**)object.data();
        }
        else
        {
            return reinterpret_cast<impl::arg_out<std::remove_const_t<T>>>(const_cast<std::remove_const_t<T>*>(object.data()));
        }
    }

    template<typename T>
    auto put_abi(com_array<T>& object) noexcept
    {
        WINRT_ASSERT(!object.data());
        return reinterpret_cast<impl::arg_out<T>*>(&object);
    }

    template <typename T>
    auto detach_abi(com_array<T>& object) noexcept
    {
        std::pair<uint32_t, impl::arg_out<T>> result(object.size(), *reinterpret_cast<impl::arg_out<T>*>(&object));
        memset(&object, 0, sizeof(com_array<T>));
        return result;
    }

    template <typename T>
    auto detach_abi(com_array<T>&& object) noexcept
    {
        return detach_abi(object);
    }
}

namespace winrt::impl
{
    template <typename T>
    struct array_size_proxy
    {
        array_size_proxy& operator=(array_size_proxy const&) = delete;

        array_size_proxy(com_array<T>& value) noexcept : m_value(value)
        {}

        ~array_size_proxy() noexcept
        {
            WINRT_ASSERT(m_value.data() || (!m_value.data() && m_size == 0));
            *reinterpret_cast<uint32_t*>(reinterpret_cast<uintptr_t*>(&m_value) + 1) = m_size;
        }

        operator uint32_t*() noexcept
        {
            return &m_size;
        }

        operator unsigned long*() noexcept
        {
            return reinterpret_cast<unsigned long*>(&m_size);
        }

    private:

        com_array<T>& m_value;
        uint32_t m_size{ 0 };
    };

    template<typename T>
    array_size_proxy<T> put_size_abi(com_array<T>& object) noexcept
    {
        return array_size_proxy<T>(object);
    }

    template <typename T>
    struct com_array_proxy
    {
        com_array_proxy(uint32_t* size, winrt::impl::arg_out<T>* value) noexcept : m_size(size), m_value(value)
        {}

        ~com_array_proxy() noexcept
        {
            std::tie(*m_size, *m_value) = detach_abi(m_temp);
        }

        operator com_array<T>&() noexcept
        {
            return m_temp;
        }

        com_array_proxy(com_array_proxy const&) noexcept
        {
            // A Visual C++ compiler bug (550631) requires the copy constructor even though it is never called.
            WINRT_ASSERT(false);
        }

    private:

        uint32_t* m_size;
        arg_out<T>* m_value;
        com_array<T> m_temp;
    };
}

WINRT_EXPORT namespace winrt
{
    template <typename T>
    auto detach_abi(uint32_t* __valueSize, impl::arg_out<T>* value) noexcept
    {
        return impl::com_array_proxy<T>(__valueSize, value);
    }

    inline hstring get_class_name(Windows::Foundation::IInspectable const& object)
    {
        hstring value;
        check_hresult((*(impl::IInspectable**)&object)->GetRuntimeClassName(put_abi(value)));
        return value;
    }

    inline com_array<GUID> get_interfaces(Windows::Foundation::IInspectable const& object)
    {
        com_array<GUID> value;
        check_hresult((*(impl::IInspectable**)&object)->GetIids(impl::put_size_abi(value), put_abi(value)));
        return value;
    }

    inline Windows::Foundation::TrustLevel get_trust_level(Windows::Foundation::IInspectable const& object)
    {
        Windows::Foundation::TrustLevel value{};
        check_hresult((*(impl::IInspectable**)&object)->GetTrustLevel(&value));
        return value;
    }
}

namespace winrt::impl
{
    struct __declspec(novtable) IWeakReference : IUnknown
    {
        virtual HRESULT __stdcall Resolve(GUID const& iid, void** objectReference) noexcept = 0;
    };

    struct __declspec(novtable) IWeakReferenceSource : IUnknown
    {
        virtual HRESULT __stdcall GetWeakReference(IWeakReference** weakReference) noexcept = 0;
    };

    template <> struct guid<IWeakReference>
    {
        static constexpr GUID value{ 0x00000037,0x0000,0x0000,{ 0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46 } };
    };

    template <> struct guid<IWeakReferenceSource>
    {
        static constexpr GUID value{ 0x00000038,0x0000,0x0000,{ 0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46 } };
    };

    template <> struct name<IWeakReferenceSource>
    {
        static constexpr auto & value{ L"IWeakReferenceSource" };
    };
}

WINRT_EXPORT namespace winrt
{
    template <typename T>
    struct weak_ref
    {
        weak_ref(std::nullptr_t = nullptr) noexcept {}

        weak_ref(impl::com_ref<T> const& object)
        {
            if (object)
            {
                if constexpr(impl::is_implements_v<T>)
                {
                    m_ref = std::move(object->get_weak().m_ref);
                }
                else
                {
                    check_hresult(object.template as<impl::IWeakReferenceSource>()->GetWeakReference(m_ref.put()));
                }
            }
        }

        impl::com_ref<T> get() const noexcept
        {
            impl::com_ref<T> object{ nullptr };

            if (m_ref)
            {
                if constexpr(impl::is_implements_v<T>)
                {
                    impl::com_ref<impl::default_interface_t<T>> temp;
                    m_ref->Resolve(guid_of<T>(), put_abi(temp));
                    attach_abi(object, from_abi<T>(temp));
                    detach_abi(temp);
                }
                else
                {
                    m_ref->Resolve(guid_of<T>(), put_abi(object));
                }
            }

            return object;
        }

        explicit operator bool() const noexcept
        {
            return static_cast<bool>(m_ref);
        }

        template <typename T>
        friend inline auto put_abi(weak_ref<T>& object) noexcept;

    private:

        com_ptr<impl::IWeakReference> m_ref;
    };

    template <typename T>
    auto put_abi(weak_ref<T>& object) noexcept
    {
        return object.m_ref.put();
    }

    template <typename T>
    weak_ref<impl::wrapped_type_t<T>> make_weak(T const& object)
    {
        return object;
    }
}

WINRT_EXPORT namespace winrt
{
    template <typename T>
    struct agile_ref
    {
        agile_ref(std::nullptr_t = nullptr) noexcept {}

        agile_ref(T const& object)
        {
            check_hresult(WINRT_RoGetAgileReference(0,
                guid_of<T>(),
                winrt::get_abi(object),
                m_ref.put_void()));
        }

        T get() const
        {
            T result = nullptr;
            check_hresult(m_ref->Resolve(guid_of<T>(), put_abi(result)));
            return result;
        }

        explicit operator bool() const noexcept
        {
            return static_cast<bool>(m_ref);
        }

    private:

        com_ptr<IAgileReference> m_ref;
    };

    template <typename T>
    agile_ref<T> make_agile(T const& object)
    {
        return object;
    }
}

WINRT_EXPORT namespace winrt
{
    struct event_token
    {
        int64_t value{};

        explicit operator bool() const noexcept
        {
            return value != 0;
        }
    };

    inline bool operator==(event_token const& left, event_token const& right) noexcept
    {
        return left.value == right.value;
    }

    struct auto_revoke_t {};
    constexpr auto_revoke_t auto_revoke{};

    template <typename I>
    struct event_revoker
    {
        using method_type = HRESULT(__stdcall impl::abi_t<I>::*)(event_token);

        event_revoker() noexcept = default;
        event_revoker(event_revoker const&) = delete;
        event_revoker& operator=(event_revoker const&) = delete;
        event_revoker(event_revoker&&) = default;
        event_revoker& operator=(event_revoker&&) = default;

        event_revoker(I const& object, method_type method, event_token token) :
            m_object(object),
            m_method(method),
            m_token(token)
        {}

        ~event_revoker() noexcept
        {
            revoke();
        }

        void revoke() noexcept
        {
            if (!m_object)
            {
                return;
            }

            if (I object = m_object.get())
            {
                ((*reinterpret_cast<impl::abi_t<I>**>(&object))->*(m_method))(m_token);
            }

            m_object = nullptr;
        }

        explicit operator bool() const noexcept
        {
            return static_cast<bool>(m_object);
        }

    private:

        weak_ref<I> m_object;
        method_type m_method{};
        event_token m_token{};
    };

    template <typename I>
    struct factory_event_revoker
    {
        using method_type = HRESULT(__stdcall impl::abi_t<I>::*)(event_token);

        factory_event_revoker() noexcept = default;
        factory_event_revoker(factory_event_revoker const&) = delete;
        factory_event_revoker& operator=(factory_event_revoker const&) = delete;
        factory_event_revoker(factory_event_revoker&&) = default;
        factory_event_revoker& operator=(factory_event_revoker&&) = default;

        factory_event_revoker(I const& object, method_type method, event_token token) :
            m_object(object),
            m_method(method),
            m_token(token)
        {}

        ~factory_event_revoker() noexcept
        {
            revoke();
        }

        void revoke() noexcept
        {
            if (!m_object)
            {
                return;
            }

            ((*reinterpret_cast<impl::abi_t<I>**>(&m_object))->*(m_method))(m_token);
            m_object = nullptr;
        }

        explicit operator bool() const noexcept
        {
            return m_object != nullptr;
        }

    private:

        I m_object;
        method_type m_method{};
        event_token m_token{};
    };
}

namespace winrt::impl
{
    template <typename D, typename I, typename S, typename M>
    auto make_event_revoker(S source, M method, event_token token)
    {
        return event_revoker<I>(static_cast<I const&>(static_cast<D const&>(*source)), method, token);
    }
}

namespace winrt::impl
{
    template <typename T>
    struct event_array
    {
        using value_type = T;
        using reference = value_type&;
        using pointer = value_type*;
        using iterator = array_iterator<value_type>;

        explicit event_array(uint32_t const count) noexcept : m_size(count)
        {
            std::uninitialized_fill_n(data(), count, value_type());
        }

        unsigned long AddRef() noexcept
        {
            return 1 + m_references.fetch_add(1, std::memory_order_relaxed);
        }

        unsigned long Release() noexcept
        {
            uint32_t const remaining = m_references.fetch_sub(1, std::memory_order_release) - 1;

            if (remaining == 0)
            {
                std::atomic_thread_fence(std::memory_order_acquire);
                this->~event_array();
                ::operator delete(static_cast<void*>(this));
            }

            return remaining;
        }

        reference back() noexcept
        {
            WINRT_ASSERT(m_size > 0);
            return*(data() + m_size - 1);
        }

        iterator begin() noexcept
        {
            return make_array_iterator(data(), m_size);
        }

        iterator end() noexcept
        {
            return make_array_iterator(data(), m_size, m_size);
        }

        uint32_t size() const noexcept
        {
            return m_size;
        }

        ~event_array() noexcept
        {
            std::destroy(begin(), end());
        }

    private:

        pointer data() noexcept
        {
            return reinterpret_cast<pointer>(this + 1);
        }

        std::atomic<uint32_t> m_references{ 1 };
        uint32_t m_size{ 0 };
    };

    template <typename T>
    auto make_event_array(uint32_t const capacity)
    {
        com_ptr<event_array<T>> instance;
        void* raw = ::operator new(sizeof(event_array<T>) + (sizeof(T)* capacity));
#pragma warning(suppress: 6386)
        *put_abi(instance) = new(raw) event_array<T>(capacity);
        return instance;
    }
}

WINRT_EXPORT namespace winrt
{
    template <typename Delegate>
    struct event
    {
        using delegate_type = Delegate;

        event() = default;
        event(event<Delegate> const&) = delete;
        event<Delegate>& operator =(event<Delegate> const&) = delete;

        explicit operator bool() const noexcept
        {
            return m_targets != nullptr;
        }

        event_token add(delegate_type const& delegate)
        {
            event_token token{};

            // Extends life of old targets array to release delegates outside of lock.
            delegate_array temp_targets;

            {
                slim_lock_guard const change_guard(m_change);
                delegate_array new_targets = impl::make_event_array<delegate_type>((!m_targets) ? 1 : m_targets->size() + 1);

                if (m_targets)
                {
                    std::copy_n(m_targets->begin(), m_targets->size(), new_targets->begin());
                }

                if constexpr (!impl::has_category_v<delegate_type>)
                {
                    new_targets->back() = delegate;
                }
                else if (delegate.template try_as<IAgileObject>() || !delegate.template try_as<IMarshal>())
                {
                    new_targets->back() = delegate;
                }
                else
                {
                    new_targets->back() = [delegate = agile_ref<delegate_type>(delegate)](auto&&... args)
                    {
                        delegate.get()(args...);
                    };
                }

                token = get_token(new_targets->back());

                slim_lock_guard const swap_guard(m_swap);
                temp_targets = m_targets;
                m_targets = new_targets;
            }

            return token;
        }

        void remove(event_token const token)
        {
            // Extends life of old targets array to release delegates outside of lock.
            delegate_array temp_targets;

            {
                slim_lock_guard const change_guard(m_change);

                if (!m_targets)
                {
                    return;
                }

                uint32_t const available_slots = m_targets->size() - 1;
                delegate_array new_targets;
                bool removed = false;

                if (available_slots == 0)
                {
                    if (get_token(*m_targets->begin()) == token)
                    {
                        removed = true;
                    }
                }
                else
                {
                    new_targets = impl::make_event_array<delegate_type>(available_slots);
                    auto new_iterator = new_targets->begin();

                    for (delegate_type const& element : *m_targets)
                    {
                        if (!removed&& token == get_token(element))
                        {
                            removed = true;
                            continue;
                        }

                        *new_iterator = element;
                        ++new_iterator;
                    }
                }

                if (removed)
                {
                    slim_lock_guard const swap_guard(m_swap);
                    temp_targets = m_targets;
                    m_targets = new_targets;
                }
            }
        }

        template<typename...Arg>
        void operator()(Arg const&... args)
        {
            delegate_array temp_targets;

            {
                slim_lock_guard const swap_guard(m_swap);
                temp_targets = m_targets;
            }

            if (temp_targets)
            {
                for (delegate_type const& element : *temp_targets)
                {
                    bool remove_delegate = false;

                    try
                    {
                        element(args...);
                    }
                    catch (hresult_error const& e)
                    {
                        if (e.code() == JSCRIPT_E_CANTEXECUTE ||
                            e.code() == RPC_S_SERVER_UNAVAILABLE ||
                            e.code() == RPC_E_DISCONNECTED)
                        {
                            remove_delegate = true;
                        }
                    }

                    if (remove_delegate)
                    {
                        remove(get_token(element));
                    }
                }
            }
        }

    private:

        event_token get_token(delegate_type const& delegate) const noexcept
        {
            return event_token{ reinterpret_cast<int64_t>(get_abi(delegate)) };
        }

        using delegate_array = com_ptr<impl::event_array<delegate_type>>;

        delegate_array m_targets;
        slim_mutex m_swap;
        slim_mutex m_change;
    };
}

namespace winrt::impl
{
    struct free_threaded_marshaler final : ::IMarshal
    {
        free_threaded_marshaler(impl::IUnknown* object) noexcept
        {
            m_object.copy_from(object);
        }

        HRESULT __stdcall QueryInterface(GUID const& id, void** object) noexcept final
        {
            if (id == guid_of<::IMarshal>())
            {
                *object = static_cast<::IMarshal*>(this);
                AddRef();
                return S_OK;
            }

            return m_object->QueryInterface(id, object);
        }

        unsigned long __stdcall AddRef() noexcept final
        {
            return 1 + m_references.fetch_add(1, std::memory_order_relaxed);
        }

        unsigned long __stdcall Release() noexcept final
        {
            uint32_t const remaining = m_references.fetch_sub(1, std::memory_order_relaxed) - 1;

            if (remaining == 0)
            {
                delete this;
            }

            return remaining;
        }

        HRESULT __stdcall GetUnmarshalClass(REFIID riid, void* pv, DWORD dwDestContext, void* pvDestContext, DWORD mshlflags, CLSID* pCid) noexcept final
        {
            if (m_marshaler)
            {
                return m_marshaler->GetUnmarshalClass(riid, pv, dwDestContext, pvDestContext, mshlflags, pCid);
            }

            return E_OUTOFMEMORY;
        }

        HRESULT __stdcall GetMarshalSizeMax(REFIID riid, void* pv, DWORD dwDestContext, void* pvDestContext, DWORD mshlflags, DWORD* pSize) noexcept final
        {
            if (m_marshaler)
            {
                return m_marshaler->GetMarshalSizeMax(riid, pv, dwDestContext, pvDestContext, mshlflags, pSize);
            }

            return E_OUTOFMEMORY;
        }

        HRESULT __stdcall MarshalInterface(IStream* pStm, REFIID riid, void* pv, DWORD dwDestContext, void* pvDestContext, DWORD mshlflags) noexcept final
        {
            if (m_marshaler)
            {
                return m_marshaler->MarshalInterface(pStm, riid, pv, dwDestContext, pvDestContext, mshlflags);
            }

            return E_OUTOFMEMORY;
        }

        HRESULT __stdcall UnmarshalInterface(IStream* pStm, REFIID riid, void** ppv) noexcept final
        {
            if (m_marshaler)
            {
                return m_marshaler->UnmarshalInterface(pStm, riid, ppv);
            }

            *ppv = nullptr;
            return E_OUTOFMEMORY;
        }

        HRESULT __stdcall ReleaseMarshalData(IStream* pStm) noexcept final
        {
            if (m_marshaler)
            {
                return m_marshaler->ReleaseMarshalData(pStm);
            }

            return E_OUTOFMEMORY;
        }

        HRESULT __stdcall DisconnectObject(DWORD dwReserved) noexcept final
        {
            if (m_marshaler)
            {
                return m_marshaler->DisconnectObject(dwReserved);
            }

            return E_OUTOFMEMORY;
        }

    private:

        static com_ptr<::IMarshal> get_marshaler() noexcept
        {
            com_ptr<::IUnknown> unknown;
            WINRT_VERIFY_(S_OK, CoCreateFreeThreadedMarshaler(nullptr, unknown.put()));
            return unknown ? unknown.try_as<::IMarshal>() : nullptr;
        }

        com_ptr<impl::IUnknown> m_object;
        com_ptr<::IMarshal> m_marshaler{ get_marshaler() };
        std::atomic<uint32_t> m_references{ 1 };
    };
}

WINRT_EXPORT namespace winrt::Windows::Foundation
{
    template <typename T> struct EventHandler;
    template <typename TSender, typename TArgs> struct TypedEventHandler;
}

namespace winrt::impl
{
    template <typename T, typename H>
    struct implements_delegate : abi_t<T>, H
    {
        implements_delegate(H&& handler) : H(std::forward<H>(handler)) {}

        HRESULT __stdcall QueryInterface(GUID const& id, void** result) noexcept final
        {
            if (id == guid_of<T>() || id == guid_of<Windows::Foundation::IUnknown>() || id == guid_of<IAgileObject>())
            {
                *result = static_cast<abi_t<T>*>(this);
                AddRef();
                return S_OK;
            }

            if (id == guid_of<IMarshal>())
            {
                *result = new (std::nothrow) free_threaded_marshaler(this);
                return *result ? S_OK : E_OUTOFMEMORY;
            }

            *result = nullptr;
            return E_NOINTERFACE;
        }

        unsigned long __stdcall AddRef() noexcept final
        {
            return 1 + m_references.fetch_add(1, std::memory_order_relaxed);
        }

        unsigned long __stdcall Release() noexcept final
        {
            uint32_t const target = m_references.fetch_sub(1, std::memory_order_release) - 1;

            if (target == 0)
            {
                std::atomic_thread_fence(std::memory_order_acquire);
                delete this;
            }

            return target;
        }

    private:

        std::atomic<uint32_t> m_references{ 1 };
    };

    template <typename T, typename H>
    auto make_delegate(H&& handler)
    {
        T instance{};
        *put_abi(instance) = (new delegate_t<T, H>(std::forward<H>(handler)));
        return instance;
    }

    template <typename T>
    struct abi<Windows::Foundation::EventHandler<T>>
    {
        struct __declspec(novtable) type : IUnknown
        {
            virtual HRESULT __stdcall Invoke(void* sender, arg_in<T> args) noexcept = 0;
        };
    };

    template <typename TSender, typename TArgs>
    struct abi<Windows::Foundation::TypedEventHandler<TSender, TArgs>>
    {
        struct __declspec(novtable) type : IUnknown
        {
            virtual HRESULT __stdcall Invoke(arg_in<TSender> sender, arg_in<TArgs> args) noexcept = 0;
        };
    };

    template <typename T>
    struct delegate<Windows::Foundation::EventHandler<T>>
    {
        template <typename H>
        struct type final : implements_delegate<Windows::Foundation::EventHandler<T>, H>
        {
            type(H&& handler) : implements_delegate<Windows::Foundation::EventHandler<T>, H>(std::forward<H>(handler)) {}

            HRESULT __stdcall Invoke(void* sender, arg_in<T> args) noexcept final
            {
                try
                {
                    (*this)(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&sender), *reinterpret_cast<T const*>(&args));
                    return S_OK;
                }
                catch (...) { return to_hresult(); }
            }
        };
    };

    template <typename TSender, typename TArgs>
    struct delegate<Windows::Foundation::TypedEventHandler<TSender, TArgs>>
    {
        template <typename H>
        struct type final : implements_delegate<Windows::Foundation::TypedEventHandler<TSender, TArgs>, H>
        {
            type(H&& handler) : implements_delegate<Windows::Foundation::TypedEventHandler<TSender, TArgs>, H>(std::forward<H>(handler)) {}

            HRESULT __stdcall Invoke(arg_in<TSender> sender, arg_in<TArgs> args) noexcept final
            {
                try
                {
                    (*this)(*reinterpret_cast<TSender const*>(&sender), *reinterpret_cast<TArgs const*>(&args));
                    return S_OK;
                }
                catch (...) { return to_hresult(); }
            }
        };
    };

    template <typename T>
    struct guid<Windows::Foundation::EventHandler<T>>
    {
        static constexpr GUID value{ pinterface_guid<Windows::Foundation::EventHandler<T>>::value };
    };

    template <typename TSender, typename TArgs>
    struct guid<Windows::Foundation::TypedEventHandler<TSender, TArgs>>
    {
        static constexpr GUID value{ pinterface_guid<Windows::Foundation::TypedEventHandler<TSender, TArgs>>::value };
    };

    template <typename T>
    struct name<Windows::Foundation::EventHandler<T>>
    {
        static constexpr auto value{ L"Windows.Foundation.EventHandler`1<" + to_array(name_v<T>) + L">" };
    };

    template <typename TSender, typename TArgs>
    struct name<Windows::Foundation::TypedEventHandler<TSender, TArgs>>
    {
        static constexpr auto value{ L"Windows.Foundation.TypedEventHandler`2<" + to_array(name_v<TSender>) + L", " + to_array(name_v<TArgs>) + L">" };
    };

    template <typename T>
    struct category<Windows::Foundation::EventHandler<T>>
    {
        using type = pinterface_category<T>;
        static constexpr GUID value{ 0x9de1c535, 0x6ae1, 0x11e0,{ 0x84, 0xe1, 0x18, 0xa9, 0x05, 0xbc, 0xc5, 0x3f } };
    };

    template <typename TSender, typename TArgs>
    struct category<Windows::Foundation::TypedEventHandler<TSender, TArgs>>
    {
        using type = pinterface_category<TSender, TArgs>;
        static constexpr GUID value{ 0x9de1c534, 0x6ae1, 0x11e0,{ 0x84, 0xe1, 0x18, 0xa9, 0x05, 0xbc, 0xc5, 0x3f } };
    };
}

WINRT_EXPORT namespace winrt::Windows::Foundation
{
    template <typename T>
    struct WINRT_EBO EventHandler : IUnknown
    {
        static_assert(impl::has_category_v<T>, "T must be WinRT type.");
        EventHandler(std::nullptr_t = nullptr) noexcept {}

        template <typename L>
        EventHandler(L handler) :
            EventHandler(impl::make_delegate<EventHandler<T>>(std::forward<L>(handler)))
        {}

        template <typename F> EventHandler(F* handler) :
            EventHandler([=](auto&&... args) { handler(args...); })
        {}

        template <typename O, typename M> EventHandler(O* object, M method) :
            EventHandler([=](auto&&... args) { ((*object).*(method))(args...); })
        {}

        void operator()(IInspectable const& sender, T const& args) const
        {
            check_hresult((*(impl::abi_t<EventHandler<T>>**)this)->Invoke(get_abi(sender), get_abi(args)));
        }
    };

    template <typename TSender, typename TArgs>
    struct WINRT_EBO TypedEventHandler : IUnknown
    {
        static_assert(impl::has_category_v<TSender>, "TSender must be WinRT type.");
        static_assert(impl::has_category_v<TArgs>, "TArgs must be WinRT type.");
        TypedEventHandler(std::nullptr_t = nullptr) noexcept {}

        template <typename L>
        TypedEventHandler(L handler) :
            TypedEventHandler(impl::make_delegate<TypedEventHandler<TSender, TArgs>>(std::forward<L>(handler)))
        {}

        template <typename F> TypedEventHandler(F* handler) :
            TypedEventHandler([=](auto&&... args) { handler(args...); })
        {}

        template <typename O, typename M> TypedEventHandler(O* object, M method) :
            TypedEventHandler([=](auto&&... args) { ((*object).*(method))(args...); })
        {}

        void operator()(TSender const& sender, TArgs const& args) const
        {
            check_hresult((*(impl::abi_t<TypedEventHandler<TSender, TArgs>>**)this)->Invoke(get_abi(sender), get_abi(args)));
        }
    };
}

namespace winrt::impl
{
    template <typename... T>
    struct __declspec(novtable) variadic_delegate_abi : IUnknown
    {
        virtual void invoke(T const&...) = 0;
    };

    template <typename H, typename... T>
    struct variadic_delegate final : variadic_delegate_abi<T...>, H
    {
        variadic_delegate(H&& handler) : H(std::forward<H>(handler)) {}

        void invoke(T const&... args) final
        {
            (*this)(args...);
        }

        HRESULT __stdcall QueryInterface(GUID const& id, void** result) noexcept final
        {
            if (id == guid_of<Windows::Foundation::IUnknown>() || id == guid_of<IAgileObject>())
            {
                *result = static_cast<IUnknown*>(this);
                AddRef();
                return S_OK;
            }

            *result = nullptr;
            return E_NOINTERFACE;
        }

        unsigned long __stdcall AddRef() noexcept final
        {
            return 1 + m_references.fetch_add(1, std::memory_order_relaxed);
        }

        unsigned long __stdcall Release() noexcept final
        {
            uint32_t const target = m_references.fetch_sub(1, std::memory_order_release) - 1;

            if (target == 0)
            {
                std::atomic_thread_fence(std::memory_order_acquire);
                delete this;
            }

            return target;
        }

    private:

        std::atomic<uint32_t> m_references{ 1 };

    };
}

WINRT_EXPORT namespace winrt
{
    template <typename... T>
    struct WINRT_EBO delegate : Windows::Foundation::IUnknown
    {
        delegate(std::nullptr_t = nullptr) noexcept {}

        template <typename L>
        delegate(L handler) :
            delegate(make(std::forward<L>(handler)))
        {}

        template <typename F> delegate(F* handler) :
            delegate([=](auto&&... args) { handler(args...); })
        {}

        template <typename O, typename M> delegate(O* object, M method) :
            delegate([=](auto&&... args) { ((*object).*(method))(args...); })
        {}

        void operator()(T const&... args) const
        {
            (*(impl::variadic_delegate_abi<T...>**)this)->invoke(args...);
        }

    private:

        template <typename H>
        static auto make(H&& handler)
        {
            winrt::delegate<T...> instance;
            *put_abi(instance) = (new impl::variadic_delegate<H, T...>(std::forward<H>(handler)));
            return instance;
        }
    };
}

WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    enum class CollectionChange : int32_t
    {
        Reset,
        ItemInserted,
        ItemRemoved,
        ItemChanged,
    };

    struct IVectorChangedEventArgs;
    template <typename K> struct IMapChangedEventArgs;

    template <typename T> struct VectorChangedEventHandler;
    template <typename K, typename V> struct MapChangedEventHandler;

    template <typename T> struct IIterator;
    template <typename T> struct IIterable;
    template <typename T> struct IVectorView;
    template <typename T> struct IVector;
    template <typename T> struct IObservableVector;

    template <typename K, typename V> struct IKeyValuePair;
    template <typename K, typename V> struct IMapView;
    template <typename K, typename V> struct IMap;
    template <typename K, typename V> struct IObservableMap;
}

namespace winrt::impl
{
    namespace wfc = Windows::Foundation::Collections;

    template <>
    struct abi<wfc::IVectorChangedEventArgs>
    {
        struct __declspec(novtable) type : IInspectable
        {
            virtual HRESULT __stdcall get_CollectionChange(wfc::CollectionChange* value) noexcept = 0;
            virtual HRESULT __stdcall get_Index(uint32_t* value) noexcept = 0;
        };
    };

    template <typename D>
    struct consume_IVectorChangedEventArgs
    {
        wfc::CollectionChange CollectionChange() const
        {
            wfc::CollectionChange value{};
            check_hresult((*(abi_t<wfc::IVectorChangedEventArgs>**)&static_cast<wfc::IVectorChangedEventArgs const&>(static_cast<D const&>(*this)))->get_CollectionChange(&value));
            return value;
        }

        uint32_t Index() const
        {
            uint32_t index{};
            check_hresult((*(abi_t<wfc::IVectorChangedEventArgs>**)&static_cast<wfc::IVectorChangedEventArgs const&>(static_cast<D const&>(*this)))->get_Index(&index));
            return index;
        }
    };

    template <typename D, typename K>
    struct consume_IMapChangedEventArgs
    {
        wfc::CollectionChange CollectionChange() const
        {
            wfc::CollectionChange value{};
            check_hresult((*(abi_t<wfc::IMapChangedEventArgs<K>>**)&static_cast<wfc::IMapChangedEventArgs<K> const&>(static_cast<D const&>(*this)))->get_CollectionChange(&value));
            return value;
        }

        K Key() const
        {
            K result{ empty_value<K>() };
            check_hresult((*(abi_t<wfc::IMapChangedEventArgs<K>>**)&static_cast<wfc::IMapChangedEventArgs<K> const&>(static_cast<D const&>(*this)))->get_Key(put_abi(result)));
            return result;
        }
    };

    template <typename D, typename T>
    struct consume_IIterator
    {
        T Current() const
        {
            T result{ empty_value<T>() };
            check_hresult((*(abi_t<wfc::IIterator<T>>**)&static_cast<wfc::IIterator<T> const&>(static_cast<D const&>(*this)))->get_Current(put_abi(result)));
            return result;
        }

        bool HasCurrent() const
        {
            bool temp{};
            check_hresult((*(abi_t<wfc::IIterator<T>>**)&static_cast<wfc::IIterator<T> const&>(static_cast<D const&>(*this)))->get_HasCurrent(put_abi(temp)));
            return temp;
        }

        bool MoveNext() const
        {
            bool temp{};
            check_hresult((*(abi_t<wfc::IIterator<T>>**)&static_cast<wfc::IIterator<T> const&>(static_cast<D const&>(*this)))->MoveNext(put_abi(temp)));
            return temp;
        }

        uint32_t GetMany(array_view<T> values) const
        {
            uint32_t actual{};
            check_hresult((*(abi_t<wfc::IIterator<T>>**)&static_cast<wfc::IIterator<T> const&>(static_cast<D const&>(*this)))->GetMany(values.size(), get_abi(values), &actual));
            return actual;
        }

        auto& operator++()
        {
            if (!MoveNext())
            {
                static_cast<D&>(*this) = nullptr;
            }

            return *this;
        }

        T operator*() const
        {
            return Current();
        }
    };

    template <typename D, typename T>
    struct consume_IIterable
    {
        wfc::IIterator<T> First() const
        {
            wfc::IIterator<T> iterator;
            check_hresult((*(abi_t<wfc::IIterable<T>>**)&static_cast<wfc::IIterable<T> const&>(static_cast<D const&>(*this)))->First(put_abi(iterator)));
            return iterator;
        }
    };

    template <typename D, typename T>
    struct consume_IVectorView
    {
        T GetAt(uint32_t const index) const
        {
            T result{ empty_value<T>() };
            check_hresult((*(abi_t<wfc::IVectorView<T>>**)&static_cast<wfc::IVectorView<T> const&>(static_cast<D const&>(*this)))->GetAt(index, put_abi(result)));
            return result;
        }

        uint32_t Size() const
        {
            uint32_t size{};
            check_hresult((*(abi_t<wfc::IVectorView<T>>**)&static_cast<wfc::IVectorView<T> const&>(static_cast<D const&>(*this)))->get_Size(&size));
            return size;
        }

        bool IndexOf(T const& value, uint32_t& index) const
        {
            bool found{};
            check_hresult((*(abi_t<wfc::IVectorView<T>>**)&static_cast<wfc::IVectorView<T> const&>(static_cast<D const&>(*this)))->IndexOf(get_abi(value), &index, &found));
            return found;
        }

        uint32_t GetMany(uint32_t startIndex, array_view<T> values) const
        {
            uint32_t actual{};
            check_hresult((*(abi_t<wfc::IVectorView<T>>**)&static_cast<wfc::IVectorView<T> const&>(static_cast<D const&>(*this)))->GetMany(startIndex, values.size(), get_abi(values), &actual));
            return actual;
        }
    };

    template <typename D, typename T>
    struct consume_IVector
    {
        T GetAt(uint32_t const index) const
        {
            T result{ empty_value<T>() };
            check_hresult((*(abi_t<wfc::IVector<T>>**)&static_cast<wfc::IVector<T> const&>(static_cast<D const&>(*this)))->GetAt(index, put_abi(result)));
            return result;
        }

        uint32_t Size() const
        {
            uint32_t size = 0;
            check_hresult((*(abi_t<wfc::IVector<T>>**)&static_cast<wfc::IVector<T> const&>(static_cast<D const&>(*this)))->get_Size(&size));
            return size;
        }

        wfc::IVectorView<T> GetView() const
        {
            wfc::IVectorView<T> view;
            check_hresult((*(abi_t<wfc::IVector<T>>**)&static_cast<wfc::IVector<T> const&>(static_cast<D const&>(*this)))->GetView(put_abi(view)));
            return view;
        }

        bool IndexOf(T const& value, uint32_t& index) const
        {
            bool found{};
            check_hresult((*(abi_t<wfc::IVector<T>>**)&static_cast<wfc::IVector<T> const&>(static_cast<D const&>(*this)))->IndexOf(get_abi(value), &index, &found));
            return found;
        }

        void SetAt(uint32_t const index, T const& value) const
        {
            check_hresult((*(abi_t<wfc::IVector<T>>**)&static_cast<wfc::IVector<T> const&>(static_cast<D const&>(*this)))->SetAt(index, get_abi(value)));
        }

        void InsertAt(uint32_t const index, T const& value) const
        {
            check_hresult((*(abi_t<wfc::IVector<T>>**)&static_cast<wfc::IVector<T> const&>(static_cast<D const&>(*this)))->InsertAt(index, get_abi(value)));
        }

        void RemoveAt(uint32_t const index) const
        {
            check_hresult((*(abi_t<wfc::IVector<T>>**)&static_cast<wfc::IVector<T> const&>(static_cast<D const&>(*this)))->RemoveAt(index));
        }

        void Append(T const& value) const
        {
            check_hresult((*(abi_t<wfc::IVector<T>>**)&static_cast<wfc::IVector<T> const&>(static_cast<D const&>(*this)))->Append(get_abi(value)));
        }

        void RemoveAtEnd() const
        {
            check_hresult((*(abi_t<wfc::IVector<T>>**)&static_cast<wfc::IVector<T> const&>(static_cast<D const&>(*this)))->RemoveAtEnd());
        }

        void Clear() const
        {
            check_hresult((*(abi_t<wfc::IVector<T>>**)&static_cast<wfc::IVector<T> const&>(static_cast<D const&>(*this)))->Clear());
        }

        uint32_t GetMany(uint32_t startIndex, array_view<T> values) const
        {
            uint32_t actual{};
            check_hresult((*(abi_t<wfc::IVector<T>>**)&static_cast<wfc::IVector<T> const&>(static_cast<D const&>(*this)))->GetMany(startIndex, values.size(), get_abi(values), &actual));
            return actual;
        }

        void ReplaceAll(array_view<T const> value) const
        {
            check_hresult((*(abi_t<wfc::IVector<T>>**)&static_cast<wfc::IVector<T> const&>(static_cast<D const&>(*this)))->ReplaceAll(value.size(), get_abi(value)));
        }
    };

    template <typename D, typename T>
    struct consume_IObservableVector
    {
        event_token VectorChanged(wfc::VectorChangedEventHandler<T> const& handler) const
        {
            event_token cookie{};
            check_hresult((*(abi_t<wfc::IObservableVector<T>>**)&static_cast<wfc::IObservableVector<T> const&>(static_cast<D const&>(*this)))->add_VectorChanged(get_abi(handler), &cookie));
            return cookie;
        }

        void VectorChanged(event_token const cookie) const
        {
            check_hresult((*(abi_t<wfc::IObservableVector<T>>**)&static_cast<wfc::IObservableVector<T> const&>(static_cast<D const&>(*this)))->remove_VectorChanged(cookie));
        }

        using VectorChanged_revoker = event_revoker<wfc::IObservableVector<T>>;

        VectorChanged_revoker VectorChanged(auto_revoke_t, wfc::VectorChangedEventHandler<T> const& handler) const
        {
            return make_event_revoker<D, wfc::IObservableVector<T>>(this, &abi<wfc::IObservableVector<T>>::remove_VectorChanged, VectorChanged(handler));
        }
    };

    template <typename D, typename K, typename V>
    struct consume_IKeyValuePair
    {
        K Key() const
        {
            K result{ empty_value<K>() };
            check_hresult((*(abi_t<wfc::IKeyValuePair<K, V>>**)&static_cast<wfc::IKeyValuePair<K, V> const&>(static_cast<D const&>(*this)))->get_Key(put_abi(result)));
            return result;
        }

        V Value() const
        {
            V result{ empty_value<V>() };
            check_hresult((*(abi_t<wfc::IKeyValuePair<K, V>>**)&static_cast<wfc::IKeyValuePair<K, V> const&>(static_cast<D const&>(*this)))->get_Value(put_abi(result)));
            return result;
        }

        bool operator==(wfc::IKeyValuePair<K, V> const& other) const
        {
            return Key() == other.Key() && Value() == other.Value();
        }

        bool operator!=(wfc::IKeyValuePair<K, V> const& other) const
        {
            return !(*this == other);
        }
    };

    template <typename D, typename K, typename V>
    struct consume_IMapView
    {
        V Lookup(K const& key) const
        {
            V result{ empty_value<V>() };
            check_hresult((*(abi_t<wfc::IMapView<K, V>>**)&static_cast<wfc::IMapView<K, V> const&>(static_cast<D const&>(*this)))->Lookup(get_abi(key), put_abi(result)));
            return result;
        }

        uint32_t Size() const
        {
            uint32_t size{};
            check_hresult((*(abi_t<wfc::IMapView<K, V>>**)&static_cast<wfc::IMapView<K, V> const&>(static_cast<D const&>(*this)))->get_Size(&size));
            return size;
        }

        bool HasKey(K const& key) const
        {
            bool found{};
            check_hresult((*(abi_t<wfc::IMapView<K, V>>**)&static_cast<wfc::IMapView<K, V> const&>(static_cast<D const&>(*this)))->HasKey(get_abi(key), &found));
            return found;
        }
        void Split(wfc::IMapView<K, V>& firstPartition, wfc::IMapView<K, V>& secondPartition)
        {
            check_hresult((*(abi_t<wfc::IMapView<K, V>>**)&static_cast<wfc::IMapView<K, V> const&>(static_cast<D const&>(*this)))->Split(put_abi(firstPartition), put_abi(secondPartition)));
        }
    };

    template <typename D, typename K, typename V>
    struct consume_IMap
    {
        V Lookup(K const& key) const
        {
            V result{ empty_value<V>() };
            check_hresult((*(abi_t<wfc::IMap<K, V>>**)&static_cast<wfc::IMap<K, V> const&>(static_cast<D const&>(*this)))->Lookup(get_abi(key), put_abi(result)));
            return result;
        }

        uint32_t Size() const
        {
            uint32_t size{};
            check_hresult((*(abi_t<wfc::IMap<K, V>>**)&static_cast<wfc::IMap<K, V> const&>(static_cast<D const&>(*this)))->get_Size(&size));
            return size;
        }

        bool HasKey(K const& key) const
        {
            bool found{};
            check_hresult((*(abi_t<wfc::IMap<K, V>>**)&static_cast<wfc::IMap<K, V> const&>(static_cast<D const&>(*this)))->HasKey(get_abi(key), &found));
            return found;
        }

        wfc::IMapView<K, V> GetView() const
        {
            wfc::IMapView<K, V> view;
            check_hresult((*(abi_t<wfc::IMap<K, V>>**)&static_cast<wfc::IMap<K, V> const&>(static_cast<D const&>(*this)))->GetView(put_abi(view)));
            return view;
        }

        bool Insert(K const& key, V const& value) const
        {
            bool replaced{};
            check_hresult((*(abi_t<wfc::IMap<K, V>>**)&static_cast<wfc::IMap<K, V> const&>(static_cast<D const&>(*this)))->Insert(get_abi(key), get_abi(value), &replaced));
            return replaced;
        }

        void Remove(K const& key) const
        {
            check_hresult((*(abi_t<wfc::IMap<K, V>>**)&static_cast<wfc::IMap<K, V> const&>(static_cast<D const&>(*this)))->Remove(get_abi(key)));
        }

        void Clear() const
        {
            check_hresult((*(abi_t<wfc::IMap<K, V>>**)&static_cast<wfc::IMap<K, V> const&>(static_cast<D const&>(*this)))->Clear());
        }
    };

    template <typename D, typename K, typename V>
    struct consume_IObservableMap
    {
        event_token MapChanged(wfc::MapChangedEventHandler<K, V> const& handler) const
        {
            event_token cookie{};
            check_hresult((*(abi_t<wfc::IObservableMap<K, V>>**)&static_cast<wfc::IObservableMap<K, V> const&>(static_cast<D const&>(*this)))->add_MapChanged(get_abi(handler), &cookie));
            return cookie;
        }

        void MapChanged(event_token const cookie) const
        {
            check_hresult((*(abi_t<wfc::IObservableMap<K, V>>**)&static_cast<wfc::IObservableMap<K, V> const&>(static_cast<D const&>(*this)))->remove_MapChanged(cookie));
        }

        using MapChanged_revoker = event_revoker<wfc::IObservableMap<K, V>>;

        MapChanged_revoker MapChanged(auto_revoke_t, wfc::MapChangedEventHandler<K, V> const& handler) const
        {
            return make_event_revoker<D, wfc::IObservableMap<K, V>>(this, &abi_t<wfc::IObservableMap<K, V>>::remove_MapChanged, MapChanged(handler));
        }
    };

    template <>
    struct consume<wfc::IVectorChangedEventArgs>
    {
        template <typename D> using type = consume_IVectorChangedEventArgs<D>;
    };

    template <typename K>
    struct abi<wfc::IMapChangedEventArgs<K>>
    {
        struct __declspec(novtable) type : IInspectable
        {
            virtual HRESULT __stdcall get_CollectionChange(wfc::CollectionChange* value) noexcept = 0;
            virtual HRESULT __stdcall get_Key(arg_out<K> value) noexcept = 0;
        };
    };

    template <typename K>
    struct consume<wfc::IMapChangedEventArgs<K>>
    {
        template <typename D> using type = consume_IMapChangedEventArgs<D, K>;
    };

    template <typename T>
    struct abi<wfc::VectorChangedEventHandler<T>>
    {
        struct __declspec(novtable) type : IUnknown
        {
            virtual HRESULT __stdcall Invoke(void* sender, void* args) noexcept = 0;
        };
    };

    template <typename T>
    struct delegate<wfc::VectorChangedEventHandler<T>>
    {
        template <typename H>
        struct type final : implements_delegate<wfc::VectorChangedEventHandler<T>, H>
        {
            type(H&& handler) : implements_delegate<wfc::VectorChangedEventHandler<T>, H>(std::forward<H>(handler)) {}

            HRESULT __stdcall Invoke(void* sender, void* args) noexcept final
            {
                try
                {
                    (*this)(*reinterpret_cast<wfc::IObservableVector<T> const*>(&sender), *reinterpret_cast<wfc::IVectorChangedEventArgs const*>(&args));
                    return S_OK;
                }
                catch (...) { return to_hresult(); }
            }
        };
    };

    template <typename K, typename V>
    struct abi<wfc::MapChangedEventHandler<K, V>>
    {
        struct __declspec(novtable) type : IUnknown
        {
            virtual HRESULT __stdcall Invoke(void* sender, void* args) noexcept = 0;
        };
    };

    template <typename K, typename V>
    struct delegate<wfc::MapChangedEventHandler<K, V>>
    {
        template <typename H>
        struct type final : implements_delegate<wfc::MapChangedEventHandler<K, V>, H>
        {
            type(H&& handler) : implements_delegate<wfc::MapChangedEventHandler<K, V>, H>(std::forward<H>(handler)) {}

            HRESULT __stdcall Invoke(void* sender, void* args) noexcept final
            {
                try
                {
                    (*this)(*reinterpret_cast<wfc::IObservableMap<K, V> const*>(&sender), *reinterpret_cast<wfc::IMapChangedEventArgs<K> const*>(&args));
                    return S_OK;
                }
                catch (...) { return to_hresult(); }
            }
        };
    };

    template <typename T>
    struct abi<wfc::IIterator<T>>
    {
        struct __declspec(novtable) type : IInspectable
        {
            virtual HRESULT __stdcall get_Current(arg_out<T> current) noexcept = 0;
            virtual HRESULT __stdcall get_HasCurrent(bool* hasCurrent) noexcept = 0;
            virtual HRESULT __stdcall MoveNext(bool* hasCurrent) noexcept = 0;
            virtual HRESULT __stdcall GetMany(uint32_t capacity, arg_out<T> value, uint32_t* actual) noexcept = 0;
        };
    };

    template <typename T>
    struct consume<wfc::IIterator<T>>
    {
        template <typename D> using type = consume_IIterator<D, T>;
    };

    template <typename T>
    struct abi<wfc::IIterable<T>>
    {
        struct __declspec(novtable) type : IInspectable
        {
            virtual HRESULT __stdcall First(void** first) noexcept = 0;
        };
    };

    template <typename T>
    struct consume<wfc::IIterable<T>>
    {
        template <typename D> using type = consume_IIterable<D, T>;
    };

    template <typename T>
    struct abi<wfc::IVectorView<T>>
    {
        struct __declspec(novtable) type : IInspectable
        {
            virtual HRESULT __stdcall GetAt(uint32_t index, arg_out<T> item) noexcept = 0;
            virtual HRESULT __stdcall get_Size(uint32_t* size) noexcept = 0;
            virtual HRESULT __stdcall IndexOf(arg_in<T> value, uint32_t* index, bool* found) noexcept = 0;
            virtual HRESULT __stdcall GetMany(uint32_t startIndex, uint32_t capacity, arg_out<T> value, uint32_t* actual) noexcept = 0;
        };
    };

    template <typename T>
    struct consume<wfc::IVectorView<T>>
    {
        template <typename D> using type = consume_IVectorView<D, T>;
    };

    template <typename T>
    struct abi<wfc::IVector<T>>
    {
        struct __declspec(novtable) type : IInspectable
        {
            virtual HRESULT __stdcall GetAt(uint32_t index, arg_out<T> item) noexcept = 0;
            virtual HRESULT __stdcall get_Size(uint32_t* size) noexcept = 0;
            virtual HRESULT __stdcall GetView(void** view) noexcept = 0;
            virtual HRESULT __stdcall IndexOf(arg_in<T> value, uint32_t* index, bool* found) noexcept = 0;
            virtual HRESULT __stdcall SetAt(uint32_t index, arg_in<T> item) noexcept = 0;
            virtual HRESULT __stdcall InsertAt(uint32_t index, arg_in<T> item) noexcept = 0;
            virtual HRESULT __stdcall RemoveAt(uint32_t index) noexcept = 0;
            virtual HRESULT __stdcall Append(arg_in<T> item) noexcept = 0;
            virtual HRESULT __stdcall RemoveAtEnd() noexcept = 0;
            virtual HRESULT __stdcall Clear() noexcept = 0;
            virtual HRESULT __stdcall GetMany(uint32_t startIndex, uint32_t capacity, arg_out<T> value, uint32_t* actual) noexcept = 0;
            virtual HRESULT __stdcall ReplaceAll(uint32_t count, arg_out<T> value) noexcept = 0;
        };
    };

    template <typename T>
    struct consume<wfc::IVector<T>>
    {
        template <typename D> using type = consume_IVector<D, T>;
    };

    template <typename T>
    struct abi<wfc::IObservableVector<T>>
    {
        struct __declspec(novtable) type : IInspectable
        {
            virtual HRESULT __stdcall add_VectorChanged(void* handler, event_token*  token) noexcept = 0;
            virtual HRESULT __stdcall remove_VectorChanged(event_token token) noexcept = 0;
        };
    };

    template <typename T>
    struct consume<wfc::IObservableVector<T>>
    {
        template <typename D> using type = consume_IObservableVector<D, T>;
    };

    template <typename K, typename V>
    struct abi<wfc::IKeyValuePair<K, V>>
    {
        struct __declspec(novtable) type : IInspectable
        {
            virtual HRESULT __stdcall get_Key(arg_out<K> key) noexcept = 0;
            virtual HRESULT __stdcall get_Value(arg_out<V> value) noexcept = 0;
        };
    };

    template <typename K, typename V>
    struct consume<wfc::IKeyValuePair<K, V>>
    {
        template <typename D> using type = consume_IKeyValuePair<D, K, V>;
    };

    template <typename K, typename V>
    struct abi<wfc::IMapView<K, V>>
    {
        struct __declspec(novtable) type : IInspectable
        {
            virtual HRESULT __stdcall Lookup(arg_in<K> key, arg_out<V> value) noexcept = 0;
            virtual HRESULT __stdcall get_Size(uint32_t* size) noexcept = 0;
            virtual HRESULT __stdcall HasKey(arg_in<K> key, bool* found) noexcept = 0;
            virtual HRESULT __stdcall Split(void** firstPartition, void** secondPartition) noexcept = 0;
        };
    };

    template <typename K, typename V>
    struct consume<wfc::IMapView<K, V>>
    {
        template <typename D> using type = consume_IMapView<D, K, V>;
    };

    template <typename K, typename V>
    struct abi<wfc::IMap<K, V>>
    {
        struct __declspec(novtable) type : IInspectable
        {
            virtual HRESULT __stdcall Lookup(arg_in<K> key, arg_out<V> value) noexcept = 0;
            virtual HRESULT __stdcall get_Size(uint32_t* size) noexcept = 0;
            virtual HRESULT __stdcall HasKey(arg_in<K> key, bool* found) noexcept = 0;
            virtual HRESULT __stdcall GetView(void** view) noexcept = 0;
            virtual HRESULT __stdcall Insert(arg_in<K> key, arg_in<V> value, bool* replaced) noexcept = 0;
            virtual HRESULT __stdcall Remove(arg_in<K> key) noexcept = 0;
            virtual HRESULT __stdcall Clear() noexcept = 0;
        };
    };

    template <typename K, typename V>
    struct consume<wfc::IMap<K, V>>
    {
        template <typename D> using type = consume_IMap<D, K, V>;
    };

    template <typename K, typename V>
    struct abi<wfc::IObservableMap<K, V>>
    {
        struct __declspec(novtable) type : IInspectable
        {
            virtual HRESULT __stdcall add_MapChanged(void* handler, event_token* token) noexcept = 0;
            virtual HRESULT __stdcall remove_MapChanged(event_token token) noexcept = 0;
        };
    };

    template <typename K, typename V>
    struct consume<wfc::IObservableMap<K, V>>
    {
        template <typename D> using type = consume_IObservableMap<D, K, V>;
    };

    template <>
    struct guid<wfc::IVectorChangedEventArgs>
    {
        static constexpr GUID value{ 0x575933DF,0x34FE,0x4480,{ 0xAF,0x15,0x07,0x69,0x1F,0x3D,0x5D,0x9B } };
    };

    template <>
    struct name<wfc::IVectorChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Foundation.Collections.IVectorChangedEventArgs" };
    };

    template <>
    struct category<wfc::IVectorChangedEventArgs>
    {
        using type = interface_category;
    };

    template <typename K>
    struct guid<wfc::IMapChangedEventArgs<K>>
    {
        static constexpr GUID value{ pinterface_guid<wfc::IMapChangedEventArgs<K>>::value };
    };

    template <typename K>
    struct name<wfc::IMapChangedEventArgs<K>>
    {
        static constexpr auto value{ L"Windows.Foundation.Collections.IMapChangedEventArgs`1<" + to_array(name_v<K>) + L">" };
    };

    template <typename K>
    struct category<wfc::IMapChangedEventArgs<K>>
    {
        using type = pinterface_category<K>;
        static constexpr GUID value{ 0x9939f4df, 0x050a, 0x4c0f,{ 0xaa, 0x60, 0x77, 0x07, 0x5f, 0x9c, 0x47, 0x77 } };
    };

    template <typename T>
    struct guid<wfc::VectorChangedEventHandler<T>>
    {
        static constexpr GUID value{ pinterface_guid<wfc::VectorChangedEventHandler<T>>::value };
    };

    template <typename T>
    struct name<wfc::VectorChangedEventHandler<T>>
    {
        static constexpr auto value{ L"Windows.Foundation.Collections.VectorChangedEventHandler`1<" + to_array(name_v<T>) + L">" };
    };

    template <typename T>
    struct category<wfc::VectorChangedEventHandler<T>>
    {
        using type = pinterface_category<T>;
        static constexpr GUID value{ 0x0c051752, 0x9fbf, 0x4c70,{ 0xaa, 0x0c, 0x0e, 0x4c, 0x82, 0xd9, 0xa7, 0x61 } };
    };

    template <typename K, typename V>
    struct guid<wfc::MapChangedEventHandler<K, V>>
    {
        static constexpr GUID value{ pinterface_guid<wfc::MapChangedEventHandler<K, V>>::value };
    };

    template <typename K, typename V>
    struct name<wfc::MapChangedEventHandler<K, V>>
    {
        static constexpr auto value{ L"Windows.Foundation.Collections.MapChangedEventHandler`2<" + to_array(name_v<K>) + L", " + to_array(name_v<V>) + L">" };
    };

    template <typename K, typename V>
    struct category<wfc::MapChangedEventHandler<K, V>>
    {
        using type = pinterface_category<K, V>;
        static constexpr GUID value{ 0x179517f3, 0x94ee, 0x41f8,{ 0xbd, 0xdc, 0x76, 0x8a, 0x89, 0x55, 0x44, 0xf3 } };
    };

    template <typename T>
    struct guid<wfc::IIterator<T>>
    {
        static constexpr GUID value{ pinterface_guid<wfc::IIterator<T>>::value };
    };

    template <typename T>
    struct name<wfc::IIterator<T>>
    {
        static constexpr auto value{ L"Windows.Foundation.Collections.IIterator`1<" + to_array(name_v<T>) + L">" };
    };

    template <typename T>
    struct category<wfc::IIterator<T>>
    {
        using type = pinterface_category<T>;
        static constexpr GUID value{ 0x6a79e863, 0x4300, 0x459a,{ 0x99, 0x66, 0xcb, 0xb6, 0x60, 0x96, 0x3e, 0xe1 } };
    };

    template <typename T>
    struct guid<wfc::IIterable<T>>
    {
        static constexpr GUID value{ pinterface_guid<wfc::IIterable<T>>::value };
    };

    template <typename T>
    struct name<wfc::IIterable<T>>
    {
        static constexpr auto value{ L"Windows.Foundation.Collections.IIterable`1<" + to_array(name_v<T>) + L">" };
    };

    template <typename T>
    struct category<wfc::IIterable<T>>
    {
        using type = pinterface_category<T>;
        static constexpr GUID value{ 0xfaa585ea, 0x6214, 0x4217,{ 0xaf, 0xda, 0x7f, 0x46, 0xde, 0x58, 0x69, 0xb3 } };
    };

    template <typename T>
    struct guid<wfc::IVectorView<T>>
    {
        static constexpr GUID value{ pinterface_guid<wfc::IVectorView<T>>::value };
    };

    template <typename T>
    struct name<wfc::IVectorView<T>>
    {
        static constexpr auto value{ L"Windows.Foundation.Collections.IVectorView`1<" + to_array(name_v<T>) + L">" };
    };

    template <typename T>
    struct category<wfc::IVectorView<T>>
    {
        using type = pinterface_category<T>;
        static constexpr GUID value{ 0xbbe1fa4c, 0xb0e3, 0x4583,{ 0xba, 0xef, 0x1f, 0x1b, 0x2e, 0x48, 0x3e, 0x56 } };
    };

    template <typename T>
    struct guid<wfc::IVector<T>>
    {
        static constexpr GUID value{ pinterface_guid<wfc::IVector<T>>::value };
    };

    template <typename T>
    struct name<wfc::IVector<T>>
    {
        static constexpr auto value{ L"Windows.Foundation.Collections.IVector`1<" + to_array(name_v<T>) + L">" };
    };

    template <typename T>
    struct category<wfc::IVector<T>>
    {
        using type = pinterface_category<T>;
        static constexpr GUID value{ 0x913337e9, 0x11a1, 0x4345,{ 0xa3, 0xa2, 0x4e, 0x7f, 0x95, 0x6e, 0x22, 0x2d } };
    };

    template <typename T>
    struct guid<wfc::IObservableVector<T>>
    {
        static constexpr GUID value{ pinterface_guid<wfc::IObservableVector<T>>::value };
    };

    template <typename T>
    struct name<wfc::IObservableVector<T>>
    {
        static constexpr auto value{ L"Windows.Foundation.Collections.IObservableVector`1<" + to_array(name_v<T>) + L">" };
    };

    template <typename T>
    struct category<wfc::IObservableVector<T>>
    {
        using type = pinterface_category<T>;
        static constexpr GUID value{ 0x5917eb53, 0x50b4, 0x4a0d,{ 0xb3, 0x09, 0x65, 0x86, 0x2b, 0x3f, 0x1d, 0xbc } };
    };

    template <typename K, typename V>
    struct guid<wfc::IKeyValuePair<K, V>>
    {
        static constexpr GUID value{ pinterface_guid<wfc::IKeyValuePair<K, V>>::value };
    };

    template <typename K, typename V>
    struct name<wfc::IKeyValuePair<K, V>>
    {
        static constexpr auto value{ L"Windows.Foundation.Collections.IKeyValuePair`2<" + to_array(name_v<K>) + L", " + to_array(name_v<V>) + L">" };
    };

    template <typename K, typename V>
    struct category<wfc::IKeyValuePair<K, V>>
    {
        using type = pinterface_category<K, V>;
        static constexpr GUID value{ 0x02b51929, 0xc1c4, 0x4a7e,{ 0x89, 0x40, 0x03, 0x12, 0xb5, 0xc1, 0x85, 0x00 } };
    };

    template <typename K, typename V>
    struct guid<wfc::IMapView<K, V>>
    {
        static constexpr GUID value{ pinterface_guid<wfc::IMapView<K, V>>::value };
    };

    template <typename K, typename V>
    struct name<wfc::IMapView<K, V>>
    {
        static constexpr auto value{ L"Windows.Foundation.Collections.IMapView`2<" + to_array(name_v<K>) + L", " + to_array(name_v<V>) + L">" };
    };

    template <typename K, typename V>
    struct category<wfc::IMapView<K, V>>
    {
        using type = pinterface_category<K, V>;
        static constexpr GUID value{ 0xe480ce40, 0xa338, 0x4ada,{ 0xad, 0xcf, 0x27, 0x22, 0x72, 0xe4, 0x8c, 0xb9 } };
    };

    template <typename K, typename V>
    struct guid<wfc::IMap<K, V>>
    {
        static constexpr GUID value{ pinterface_guid<wfc::IMap<K, V>>::value };
    };

    template <typename K, typename V>
    struct name<wfc::IMap<K, V>>
    {
        static constexpr auto value{ L"Windows.Foundation.Collections.IMap`2<" + to_array(name_v<K>) + L", " + to_array(name_v<V>) + L">" };
    };

    template <typename K, typename V>
    struct category<wfc::IMap<K, V>>
    {
        using type = pinterface_category<K, V>;
        static constexpr GUID value{ 0x3c2925fe, 0x8519, 0x45c1,{ 0xaa, 0x79, 0x19, 0x7b, 0x67, 0x18, 0xc1, 0xc1 } };
    };

    template <typename K, typename V>
    struct guid<wfc::IObservableMap<K, V>>
    {
        static constexpr GUID value{ pinterface_guid<wfc::IObservableMap<K, V>>::value };
    };

    template <typename K, typename V>
    struct name<wfc::IObservableMap<K, V>>
    {
        static constexpr auto value{ L"Windows.Foundation.Collections.IObservableMap`2<" + to_array(name_v<K>) + L", " + to_array(name_v<V>) + L">" };
    };

    template <typename K, typename V>
    struct category<wfc::IObservableMap<K, V>>
    {
        using type = pinterface_category<K, V>;
        static constexpr GUID value{ 0x65df2bf5, 0xbf39, 0x41b5,{ 0xae, 0xbc, 0x5a, 0x9d, 0x86, 0x5e, 0x47, 0x2b } };
    };

    template <typename T>
    struct fast_iterator
    {
        using iterator_category = std::input_iterator_tag;
        using value_type = T;
        using difference_type = ptrdiff_t;
        using pointer = T*;
        using reference = T&;

        fast_iterator(T const& collection, uint32_t const index) noexcept :
            m_collection(&collection),
            m_index(index)
        {}

        fast_iterator& operator++() noexcept
        {
            ++m_index;
            return*this;
        }

        auto operator*() const
        {
            return m_collection->GetAt(m_index);
        }

        bool operator==(fast_iterator const& other) const noexcept
        {
            WINRT_ASSERT(m_collection == other.m_collection);
            return m_index == other.m_index;
        }

        bool operator!=(fast_iterator const& other) const noexcept
        {
            return !(*this == other);
        }

    private:

        T const* m_collection = nullptr;
        uint32_t m_index = 0;
    };

    template <typename T>
    class has_GetAt
    {
        template <typename U, typename = decltype(std::declval<U>().GetAt(0))> static constexpr bool get_value(int) { return true; }
        template <typename> static constexpr bool get_value(...) { return false; }

    public:

        static constexpr bool value = get_value<T>(0);
    };

    template <typename T, std::enable_if_t<!has_GetAt<T>::value>* = nullptr>
    auto begin(T const& collection) -> decltype(collection.First())
    {
        auto result = collection.First();

        if (!result.HasCurrent())
        {
            return {};
        }

        return result;
    }

    template <typename T, std::enable_if_t<!has_GetAt<T>::value>* = nullptr>
    auto end([[maybe_unused]] T const& collection) noexcept -> decltype(collection.First())
    {
        return {};
    }

    template <typename T, std::enable_if_t<has_GetAt<T>::value>* = nullptr>
    fast_iterator<T> begin(T const& collection) noexcept
    {
        return fast_iterator<T>(collection, 0);
    }

    template <typename T, std::enable_if_t<has_GetAt<T>::value>* = nullptr>
    fast_iterator<T> end(T const& collection)
    {
        return fast_iterator<T>(collection, collection.Size());
    }
}

WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    struct IVectorChangedEventArgs :
        IInspectable,
        impl::consume_t<IVectorChangedEventArgs>
    {
        IVectorChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
    };

    template <typename K>
    struct WINRT_EBO IMapChangedEventArgs :
        IInspectable,
        impl::consume_t<IMapChangedEventArgs<K>>
    {
        static_assert(impl::has_category_v<K>, "K must be WinRT type.");
        IMapChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
    };

    template <typename T>
    struct WINRT_EBO VectorChangedEventHandler : IUnknown
    {
        static_assert(impl::has_category_v<T>, "T must be WinRT type.");
        VectorChangedEventHandler(std::nullptr_t = nullptr) noexcept {}

        template <typename L>
        VectorChangedEventHandler(L handler) :
            VectorChangedEventHandler(impl::make_delegate<VectorChangedEventHandler<T>>(std::forward<L>(handler)))
        {}

        template <typename F> VectorChangedEventHandler(F* handler) :
            VectorChangedEventHandler([=](auto&&... args) { handler(args...); })
        {}

        template <typename O, typename M> VectorChangedEventHandler(O* object, M method) :
            VectorChangedEventHandler([=](auto&&... args) { ((*object).*(method))(args...); })
        {}

        void operator()(IObservableVector<T> const& sender, IVectorChangedEventArgs const& args) const
        {
            check_hresult((*(impl::abi_t<VectorChangedEventHandler<T>>**)this)->Invoke(get_abi(sender), get_abi(args)));
        }
    };

    template <typename K, typename V>
    struct WINRT_EBO MapChangedEventHandler : IUnknown
    {
        static_assert(impl::has_category_v<K>, "K must be WinRT type.");
        static_assert(impl::has_category_v<V>, "V must be WinRT type.");
        MapChangedEventHandler(std::nullptr_t = nullptr) noexcept {}

        template <typename L>
        MapChangedEventHandler(L handler) :
            MapChangedEventHandler(impl::make_delegate<MapChangedEventHandler<K, V>>(std::forward<L>(handler)))
        {}

        template <typename F> MapChangedEventHandler(F* handler) :
            MapChangedEventHandler([=](auto&&... args) { handler(args...); })
        {}

        template <typename O, typename M> MapChangedEventHandler(O* object, M method) :
            MapChangedEventHandler([=](auto&&... args) { ((*object).*(method))(args...); })
        {}

        void operator()(IObservableMap<K, V> const& sender, IMapChangedEventArgs<K> const& args) const
        {
            check_hresult((*(impl::abi_t<MapChangedEventHandler<K, V>>**)this)->Invoke(get_abi(sender), get_abi(args)));
        }
    };

    template <typename T>
    struct WINRT_EBO IIterator :
        IInspectable,
        impl::consume_t<IIterator<T>>
    {
        static_assert(impl::has_category_v<T>, "T must be WinRT type.");
        IIterator(std::nullptr_t = nullptr) noexcept {}

        using iterator_category = std::input_iterator_tag;
        using value_type = T;
        using difference_type = ptrdiff_t;
        using pointer = T*;
        using reference = T&;
    };

    template <typename T>
    struct WINRT_EBO IIterable :
        IInspectable,
        impl::consume_t<IIterable<T>>
    {
        static_assert(impl::has_category_v<T>, "T must be WinRT type.");
        IIterable(std::nullptr_t = nullptr) noexcept {}
    };

    template <typename T>
    struct WINRT_EBO IVectorView :
        IInspectable,
        impl::consume_t<IVectorView<T>>,
        impl::require<IVectorView<T>, IIterable<T>>
    {
        static_assert(impl::has_category_v<T>, "T must be WinRT type.");
        IVectorView(std::nullptr_t = nullptr) noexcept {}
    };

    template <typename T>
    struct WINRT_EBO IVector :
        IInspectable,
        impl::consume_t<IVector<T>>,
        impl::require<IVector<T>, IIterable<T>>
    {
        static_assert(impl::has_category_v<T>, "T must be WinRT type.");
        IVector(std::nullptr_t = nullptr) noexcept {}
    };

    template <typename T>
    struct WINRT_EBO IObservableVector :
        IInspectable,
        impl::consume_t<IObservableVector<T>>,
        impl::require<IObservableVector<T>, IVector<T>, IIterable<T>>
    {
        static_assert(impl::has_category_v<T>, "T must be WinRT type.");
        IObservableVector(std::nullptr_t = nullptr) noexcept {}
    };

    template <typename K, typename V>
    struct WINRT_EBO IKeyValuePair :
        IInspectable,
        impl::consume_t<IKeyValuePair<K, V>>
    {
        static_assert(impl::has_category_v<K>, "K must be WinRT type.");
        static_assert(impl::has_category_v<V>, "V must be WinRT type.");
        IKeyValuePair(std::nullptr_t = nullptr) noexcept {}
    };

    template <typename K, typename V>
    struct WINRT_EBO IMapView :
        IInspectable,
        impl::consume_t<IMapView<K, V>>,
        impl::require<IMapView<K, V>, IIterable<IKeyValuePair<K, V>>>
    {
        static_assert(impl::has_category_v<K>, "K must be WinRT type.");
        static_assert(impl::has_category_v<V>, "V must be WinRT type.");
        IMapView(std::nullptr_t = nullptr) noexcept {}
    };

    template <typename K, typename V>
    struct WINRT_EBO IMap :
        IInspectable,
        impl::consume_t<IMap<K, V>>,
        impl::require<IMap<K, V>, IIterable<IKeyValuePair<K, V>>>
    {
        static_assert(impl::has_category_v<K>, "K must be WinRT type.");
        static_assert(impl::has_category_v<V>, "V must be WinRT type.");
        IMap(std::nullptr_t = nullptr) noexcept {}
    };

    template <typename K, typename V>
    struct WINRT_EBO IObservableMap :
        IInspectable,
        impl::consume_t<IObservableMap<K, V>>,
        impl::require<IObservableMap<K, V>, IMap<K, V>, IIterable<IKeyValuePair<K, V>>>
    {
        static_assert(impl::has_category_v<K>, "K must be WinRT type.");
        static_assert(impl::has_category_v<V>, "V must be WinRT type.");
        IObservableMap(std::nullptr_t = nullptr) noexcept {}
    };
}

namespace winrt::impl
{
    template <typename D>
    struct consume_IVectorView<D, hstring>
    {
        hstring GetAt(uint32_t const index) const
        {
            hstring result;
            check_hresult((*(abi_t<wfc::IVectorView<hstring>>**)&static_cast<wfc::IVectorView<hstring> const&>(static_cast<D const&>(*this)))->GetAt(index, put_abi(result)));
            return result;
        }

        uint32_t Size() const
        {
            uint32_t size{};
            check_hresult((*(abi_t<wfc::IVectorView<hstring>>**)&static_cast<wfc::IVectorView<hstring> const&>(static_cast<D const&>(*this)))->get_Size(&size));
            return size;
        }

        bool IndexOf(param::hstring const& value, uint32_t& index) const
        {
            bool found{};
            check_hresult((*(abi_t<wfc::IVectorView<hstring>>**)&static_cast<wfc::IVectorView<hstring> const&>(static_cast<D const&>(*this)))->IndexOf(get_abi(value), &index, &found));
            return found;
        }

        uint32_t GetMany(uint32_t startIndex, array_view<hstring> values) const
        {
            uint32_t actual{};
            check_hresult((*(abi_t<wfc::IVectorView<hstring>>**)&static_cast<wfc::IVectorView<hstring> const&>(static_cast<D const&>(*this)))->GetMany(startIndex, values.size(), get_abi(values), &actual));
            return actual;
        }
    };

    template <typename D>
    struct consume_IVector<D, hstring>
    {
        hstring GetAt(uint32_t const index) const
        {
            hstring result;
            check_hresult((*(abi_t<wfc::IVector<hstring>>**)&static_cast<wfc::IVector<hstring> const&>(static_cast<D const&>(*this)))->GetAt(index, put_abi(result)));
            return result;
        }

        uint32_t Size() const
        {
            uint32_t size = 0;
            check_hresult((*(abi_t<wfc::IVector<hstring>>**)&static_cast<wfc::IVector<hstring> const&>(static_cast<D const&>(*this)))->get_Size(&size));
            return size;
        }

        wfc::IVectorView<hstring> GetView() const
        {
            wfc::IVectorView<hstring> view;
            check_hresult((*(abi_t<wfc::IVector<hstring>>**)&static_cast<wfc::IVector<hstring> const&>(static_cast<D const&>(*this)))->GetView(put_abi(view)));
            return view;
        }

        bool IndexOf(param::hstring const& value, uint32_t& index) const
        {
            bool found{};
            check_hresult((*(abi_t<wfc::IVector<hstring>>**)&static_cast<wfc::IVector<hstring> const&>(static_cast<D const&>(*this)))->IndexOf(get_abi(value), &index, &found));
            return found;
        }

        void SetAt(uint32_t const index, param::hstring const& value) const
        {
            check_hresult((*(abi_t<wfc::IVector<hstring>>**)&static_cast<wfc::IVector<hstring> const&>(static_cast<D const&>(*this)))->SetAt(index, get_abi(value)));
        }

        void InsertAt(uint32_t const index, param::hstring const& value) const
        {
            check_hresult((*(abi_t<wfc::IVector<hstring>>**)&static_cast<wfc::IVector<hstring> const&>(static_cast<D const&>(*this)))->InsertAt(index, get_abi(value)));
        }

        void RemoveAt(uint32_t const index) const
        {
            check_hresult((*(abi_t<wfc::IVector<hstring>>**)&static_cast<wfc::IVector<hstring> const&>(static_cast<D const&>(*this)))->RemoveAt(index));
        }

        void Append(param::hstring const& value) const
        {
            check_hresult((*(abi_t<wfc::IVector<hstring>>**)&static_cast<wfc::IVector<hstring> const&>(static_cast<D const&>(*this)))->Append(get_abi(value)));
        }

        void RemoveAtEnd() const
        {
            check_hresult((*(abi_t<wfc::IVector<hstring>>**)&static_cast<wfc::IVector<hstring> const&>(static_cast<D const&>(*this)))->RemoveAtEnd());
        }

        void Clear() const
        {
            check_hresult((*(abi_t<wfc::IVector<hstring>>**)&static_cast<wfc::IVector<hstring> const&>(static_cast<D const&>(*this)))->Clear());
        }

        uint32_t GetMany(uint32_t startIndex, array_view<hstring> values) const
        {
            uint32_t actual{};
            check_hresult((*(abi_t<wfc::IVector<hstring>>**)&static_cast<wfc::IVector<hstring> const&>(static_cast<D const&>(*this)))->GetMany(startIndex, values.size(), get_abi(values), &actual));
            return actual;
        }

        void ReplaceAll(array_view<hstring const> value) const
        {
            check_hresult((*(abi_t<wfc::IVector<hstring>>**)&static_cast<wfc::IVector<hstring> const&>(static_cast<D const&>(*this)))->ReplaceAll(value.size(), get_abi(value)));
        }
    };

    template <typename D, typename V>
    struct consume_IMapView<D, hstring, V>
    {
        V Lookup(param::hstring const& key) const
        {
            V result{ empty_value<V>() };
            check_hresult((*(abi_t<wfc::IMapView<hstring, V>>**)&static_cast<wfc::IMapView<hstring, V> const&>(static_cast<D const&>(*this)))->Lookup(get_abi(key), put_abi(result)));
            return result;
        }

        uint32_t Size() const
        {
            uint32_t size{};
            check_hresult((*(abi_t<wfc::IMapView<hstring, V>>**)&static_cast<wfc::IMapView<hstring, V> const&>(static_cast<D const&>(*this)))->get_Size(&size));
            return size;
        }

        bool HasKey(param::hstring const& key) const
        {
            bool found{};
            check_hresult((*(abi_t<wfc::IMapView<hstring, V>>**)&static_cast<wfc::IMapView<hstring, V> const&>(static_cast<D const&>(*this)))->HasKey(get_abi(key), &found));
            return found;
        }

        void Split(wfc::IMapView<hstring, V>& firstPartition, wfc::IMapView<hstring, V>& secondPartition)
        {
            check_hresult((*(abi_t<wfc::IMapView<hstring, V>>**)&static_cast<wfc::IMapView<hstring, V> const&>(static_cast<D const&>(*this)))->Split(put_abi(firstPartition), put_abi(secondPartition)));
        }
    };

    template <typename D, typename V>
    struct consume_IMap<D, hstring, V>
    {
        V Lookup(param::hstring const& key) const
        {
            V result{ empty_value<V>() };
            check_hresult((*(abi_t<wfc::IMap<hstring, V>>**)&static_cast<wfc::IMap<hstring, V> const&>(static_cast<D const&>(*this)))->Lookup(get_abi(key), put_abi(result)));
            return result;
        }

        uint32_t Size() const
        {
            uint32_t size{};
            check_hresult((*(abi_t<wfc::IMap<hstring, V>>**)&static_cast<wfc::IMap<hstring, V> const&>(static_cast<D const&>(*this)))->get_Size(&size));
            return size;
        }

        bool HasKey(param::hstring const& key) const
        {
            bool found{};
            check_hresult((*(abi_t<wfc::IMap<hstring, V>>**)&static_cast<wfc::IMap<hstring, V> const&>(static_cast<D const&>(*this)))->HasKey(get_abi(key), &found));
            return found;
        }

        wfc::IMapView<hstring, V> GetView() const
        {
            wfc::IMapView<hstring, V> view;
            check_hresult((*(abi_t<wfc::IMap<hstring, V>>**)&static_cast<wfc::IMap<hstring, V> const&>(static_cast<D const&>(*this)))->GetView(put_abi(view)));
            return view;
        }

        bool Insert(param::hstring const& key, V const& value) const
        {
            bool replaced{};
            check_hresult((*(abi_t<wfc::IMap<hstring, V>>**)&static_cast<wfc::IMap<hstring, V> const&>(static_cast<D const&>(*this)))->Insert(get_abi(key), get_abi(value), &replaced));
            return replaced;
        }

        void Remove(param::hstring const& key) const
        {
            check_hresult((*(abi_t<wfc::IMap<hstring, V>>**)&static_cast<wfc::IMap<hstring, V> const&>(static_cast<D const&>(*this)))->Remove(get_abi(key)));
        }

        void Clear() const
        {
            check_hresult((*(abi_t<wfc::IMap<hstring, V>>**)&static_cast<wfc::IMap<hstring, V> const&>(static_cast<D const&>(*this)))->Clear());
        }
    };
}

namespace winrt::impl
{
    struct marker {};
}

WINRT_EXPORT namespace winrt
{
    struct non_agile : impl::marker {};
    struct no_weak_ref : impl::marker {};
    struct composing : impl::marker {};
    struct composable : impl::marker {};
    struct no_module_lock : impl::marker {};

    template <typename Interface>
    struct cloaked : Interface {};

    template <typename D, typename... I>
    struct implements;

    inline std::atomic<uint32_t>& get_module_lock() noexcept
    {
        static std::atomic<uint32_t> s_lock;
        return s_lock;
    }
}

namespace winrt::impl
{
    template <typename T>
    struct is_marker : std::is_base_of<impl::marker, T> {};

    template <typename T>
    constexpr bool is_marker_v = is_marker<T>::value;

    template <typename T>
    struct uncloak
    {
        using type = T;
    };

    template <typename T>
    struct uncloak<cloaked<T>>
    {
        using type = T;
    };

    template <typename T>
    using uncloak_t = typename uncloak<T>::type;

    template <typename I>
    struct is_cloaked : std::disjunction<
        std::is_same<Windows::Foundation::IInspectable, I>,
        std::negation<std::is_base_of<Windows::Foundation::IInspectable, I>>
    > {};

    template <typename I>
    struct is_cloaked<cloaked<I>> : std::true_type {};

    template <typename I>
    constexpr bool is_cloaked_v = is_cloaked<I>::value;

    template <typename D, typename... I>
    struct root_implements;
    
    template <typename T, typename = std::void_t<>>
    struct unwrap_implements
    {
        using type = T;
    };

    template <typename T>
    struct unwrap_implements<T, std::void_t<typename T::implements_type>>
    {
        using type = typename T::implements_type;
    };

    template <typename T>
    using unwrap_implements_t = typename unwrap_implements<T>::type;

    template <typename...>
    struct nested_implements
    {};

    template <typename First, typename... Rest>
    struct nested_implements<First, Rest...>
        : std::conditional_t<is_implements_v<First>,
        impl::identity<First>, nested_implements<Rest...>>
    {
        static_assert(!is_implements_v<First> || !std::disjunction_v<is_implements<Rest>...>,
            "Duplicate nested implements found");
    };

    template <typename D, typename Dummy = std::void_t<>, typename... I>
    struct base_implements_impl
        : impl::identity<root_implements<D, I...>> {};

    template <typename D, typename... I>
    struct base_implements_impl<D, std::void_t<typename nested_implements<I...>::type>, I...>
        : nested_implements<I...> {};

    template <typename D, typename... I>
    using base_implements = base_implements_impl<D, void, I...>;

    template <typename...> struct interface_list;

    template <>
    struct interface_list<>
    {
        template <typename T, typename Predicate>
        static void* find(const T*, const Predicate&) noexcept
        {
            return nullptr;
        }
    };

    template <typename First, typename ... Rest>
    struct interface_list<First, Rest...>
    {
        template <typename T, typename Predicate>
        static void* find(const T* obj, const Predicate& pred) noexcept
        {
            if (pred.template test<First>())
            {
                return winrt::to_abi<First>(obj);
            }
            return interface_list<Rest...>::find(obj, pred);
        }
        using first_interface = First;
    };

    template <typename, typename> struct interface_list_append_impl;

    template <typename... T, typename... U>
    struct interface_list_append_impl<interface_list<T...>, interface_list<U...>>
    {
        using type = interface_list<T..., U...>;
    };

    template <template <typename> class, typename...>
    struct filter_impl;

    template <template <typename> class Predicate, typename... T>
    using filter = typename filter_impl<Predicate, unwrap_implements_t<T>...>::type;

    template <template <typename> class Predicate>
    struct filter_impl<Predicate>
    {
        using type = interface_list<>;
    };

    template <template <typename> class Predicate, typename T, typename... Rest>
    struct filter_impl<Predicate, T, Rest...>
    {
        using type = typename interface_list_append_impl<
            std::conditional_t<
            Predicate<T>::value,
            interface_list<winrt::impl::uncloak_t<T>>,
            interface_list<>
            >,
            typename filter_impl<Predicate, Rest...>::type
        >::type;
    };

    template <template <typename> class Predicate, typename ... T, typename ... Rest>
    struct filter_impl<Predicate, interface_list<T...>, Rest...>
    {
        using type = typename interface_list_append_impl<
            filter<Predicate, T...>,
            filter<Predicate, Rest...>
        >::type;
    };

    template <template <typename> class Predicate, typename D, typename ... I, typename ... Rest>
    struct filter_impl<Predicate, winrt::implements<D, I...>, Rest...>
    {
        using type = typename interface_list_append_impl<
            filter<Predicate, I...>,
            filter<Predicate, Rest...>
        >::type;
    };

    template <typename T>
    struct is_interface : std::negation<winrt::impl::is_marker<T>> {};
    template <typename T>
    using implemented_interfaces = filter<is_interface, typename T::implements_type>;

    template <typename T>
    struct is_uncloaked_interface : std::conjunction<is_interface<T>, std::negation<winrt::impl::is_cloaked<T>>> {};
    template <typename T>
    using uncloaked_interfaces = filter<is_uncloaked_interface, typename T::implements_type>;

    template <typename T>
    struct uncloaked_iids;

    template <typename ... T>
    struct uncloaked_iids<interface_list<T...>>
    {
#pragma warning(suppress: 4307)
        static constexpr std::array<GUID, sizeof...(T)> value { winrt::guid_of<T>() ... };
    };

    template <typename D, typename I>
    struct produce;

    template <typename D, typename I, typename Enable = void>
    struct producer;

    template <typename T, typename = std::void_t<>>
    struct has_composable : std::false_type {};

    template <typename T>
    struct has_composable<T, std::void_t<typename T::composable>> : std::true_type {};

    template <typename T, typename = std::void_t<>>
    struct has_class_type : std::false_type {};

    template <typename T>
    struct has_class_type<T, std::void_t<typename T::class_type>> : std::true_type {};

    template <typename T, typename = void>
    struct implements_default_interface
    {
        using type = typename implemented_interfaces<T>::first_interface;
    };

    template <typename T>
    struct implements_default_interface<T, std::void_t<typename T::class_type>>
    {
        using type = default_interface_t<typename T::class_type>;
    };

    template <typename T>
    struct default_interface<T, std::void_t<typename T::implements_type>>
    {
        using type = typename implements_default_interface<T>::type;
    };

    struct iid_finder
    {
        const GUID& m_guid;
        template <typename I>
        constexpr bool test() const noexcept
        {
            return winrt::guid_of<I>() == m_guid;
        }
    };

    template <typename T>
    winrt::impl::IUnknown* find_iid(const T* obj, const GUID& iid) noexcept
    {
        return static_cast<IUnknown*>(implemented_interfaces<T>::find(obj, iid_finder{ iid }));
    }

    struct inspectable_finder
    {
        template <typename I>
        static constexpr bool test() noexcept
        {
            return std::is_base_of_v<IInspectable, abi_t<I>>;
        }
    };

    template <typename T>
    winrt::impl::IInspectable* find_inspectable(const T* obj) noexcept
    {
        using default_interface = typename implements_default_interface<T>::type;
        if constexpr (std::is_base_of_v<IInspectable, abi_t<default_interface>>)
        {
            return to_abi<default_interface>(obj);
        }
        else
        {
            return static_cast<IInspectable*>(implemented_interfaces<T>::find(obj, inspectable_finder{}));
        }
    }

    template <typename I, typename = std::void_t<>>
    struct runtime_class_name
    {
        static hstring get()
        {
            throw hresult_not_implemented{};
        }
    };

    template <typename I>
    struct runtime_class_name<I, std::void_t<decltype(name<I>::value)>>
    {
        static hstring get()
        {
            return hstring{ name_of<I>() };
        }
    };

    template <typename T>
    void clear_abi(T*) noexcept
    {}

    template <typename T>
    void clear_abi(T** value) noexcept
    {
        *value = nullptr;
    }
}

WINRT_EXPORT namespace winrt
{
    template <typename D, typename I>
    D* from_abi(I const& from) noexcept
    {
        return &static_cast<impl::produce<D, impl::default_interface_t<I>>*>(get_abi(from))->shim();
    }

    template <typename I, typename D, std::enable_if_t<std::is_base_of_v<Windows::Foundation::IUnknown, I>>* = nullptr>
    impl::abi_t<I>* to_abi(impl::producer<D, I> const* from) noexcept
    {
        return reinterpret_cast<impl::abi_t<I>*>(const_cast<impl::producer<D, I>*>(from));
    }

    template <typename I, typename D, std::enable_if_t<std::is_base_of_v< ::IUnknown, I>>* = nullptr>
    impl::abi_t<I>* to_abi(impl::producer<D, I> const* from) noexcept
    {
        return const_cast<impl::producer<D, I>*>(from);
    }

    template <typename D, typename... Args, std::enable_if_t<!impl::has_composable<D>::value && !impl::has_class_type<D>::value>* = nullptr>
    auto make(Args&&... args)
    {
        using I = typename impl::implements_default_interface<D>::type;
        impl::com_ref<I> result{ nullptr };
        *put_abi(result) = to_abi<I>(new D(std::forward<Args>(args)...));
        return result;
    }

    template <typename D, typename... Args, std::enable_if_t<!impl::has_composable<D>::value && impl::has_class_type<D>::value>* = nullptr>
    auto make(Args&&... args)
    {
        using I = typename impl::implements_default_interface<D>::type;
        static_assert(std::is_same_v<I, impl::default_interface_t<typename D::class_type>>);
        typename D::class_type result{ nullptr };
        *put_abi(result) = to_abi<I>(new D(std::forward<Args>(args)...));
        return result;
    }

    template <typename D, typename... Args, std::enable_if_t<impl::has_composable<D>::value>* = nullptr>
    auto make(Args&&... args)
    {
        using I = typename impl::implements_default_interface<D>::type;
        impl::com_ref<I> result;
        *put_abi(result) = to_abi<I>(new D(std::forward<Args>(args)...));
        return result.template as<typename D::composable>();
    }

    template <typename D, typename... Args>
    auto make_self(Args&&... args)
    {
        com_ptr<D> result;
        *put_abi(result) = new D(std::forward<Args>(args)...);
        return result;
    }
}

namespace winrt::impl
{
    template <typename D, typename I, typename Enable>
    struct producer
    {
        operator I() const noexcept
        {
            I result = nullptr;
            copy_from_abi(result, const_cast<produce<D, I>*>(&vtable));
            return result;
        }

    private:

        produce<D, I> vtable;
    };

    template <typename D, typename I>
    struct produce_base : abi_t<I>
    {
        D& shim() noexcept
        {
            return*static_cast<D*>(reinterpret_cast<producer<D, I>*>(this));
        }

        HRESULT __stdcall QueryInterface(GUID const& id, void** object) noexcept override
        {
            return shim().QueryInterface(id, object);
        }

        unsigned long __stdcall AddRef() noexcept override
        {
            return shim().AddRef();
        }

        unsigned long __stdcall Release() noexcept override
        {
            return shim().Release();
        }

        HRESULT __stdcall GetIids(ULONG* count, GUID** array) noexcept override
        {
            return shim().GetIids(count, array);
        }

        HRESULT __stdcall GetRuntimeClassName(HSTRING* name) noexcept override
        {
            return shim().abi_GetRuntimeClassName(name);
        }

        HRESULT __stdcall GetTrustLevel(Windows::Foundation::TrustLevel* trustLevel) noexcept final
        {
            return shim().abi_GetTrustLevel(trustLevel);
        }
    };

    template <typename D, typename I>
    struct producer<D, I, std::enable_if_t<std::is_base_of_v< ::IUnknown, I> && !is_implements_v<I>>> : abi_t<I>
    {};

    template <typename D, typename I>
    struct producer<D, I, std::enable_if_t<is_marker_v<I>>>
    {};

    template <typename D, typename I>
    struct producer<D, I, std::enable_if_t<is_implements_v<I>>>
    {};

    template <typename D>
    struct produce<D, Windows::Foundation::IInspectable> : produce_base<D, Windows::Foundation::IInspectable>
    {};

    struct INonDelegatingInspectable : Windows::Foundation::IUnknown
    {
        INonDelegatingInspectable(std::nullptr_t = nullptr) noexcept {}
    };

    template <> struct abi<INonDelegatingInspectable>
    {
        using type = IInspectable;
    };

    template <typename D>
    struct produce<D, INonDelegatingInspectable> : produce_base<D, INonDelegatingInspectable>
    {
        HRESULT __stdcall QueryInterface(const GUID& id, void** object) noexcept final
        {
            return this->shim().NonDelegatingQueryInterface(id, object);
        }

        unsigned long __stdcall AddRef() noexcept final
        {
            return this->shim().NonDelegatingAddRef();
        }

        unsigned long __stdcall Release() noexcept final
        {
            return this->shim().NonDelegatingRelease();
        }

        HRESULT __stdcall GetIids(ULONG* count, GUID** array) noexcept final
        {
            return this->shim().NonDelegatingGetIids(count, array);
        }

        HRESULT __stdcall GetRuntimeClassName(HSTRING* name) noexcept final
        {
            return this->shim().NonDelegatingGetRuntimeClassName(name);
        }
    };

    template <bool Agile>
    struct weak_ref;

    template <bool Agile>
    struct weak_source_producer;

    template <bool Agile>
    struct weak_source : IWeakReferenceSource
    {
        weak_ref<Agile>* that() noexcept
        {
            return static_cast<weak_ref<Agile>*>(reinterpret_cast<weak_source_producer<Agile>*>(this));
        }

        HRESULT __stdcall QueryInterface(GUID const& id, void** object) noexcept override
        {
            if (id == guid_of<IWeakReferenceSource>())
            {
                *object = static_cast<IWeakReferenceSource*>(this);
                that()->increment_strong();
                return S_OK;
            }

            return that()->m_object->QueryInterface(id, object);
        }

        unsigned long __stdcall AddRef() noexcept override
        {
            return that()->increment_strong();
        }

        unsigned long __stdcall Release() noexcept override
        {
            return that()->m_object->Release();
        }

        HRESULT __stdcall GetWeakReference(IWeakReference** weakReference) noexcept override
        {
            *weakReference = that();
            that()->AddRef();
            return S_OK;
        }
    };

    template <bool Agile>
    struct weak_source_producer
    {
    protected:
        weak_source<Agile> m_source;
    };

    template <bool Agile>
    struct weak_ref : IWeakReference, weak_source_producer<Agile>
    {
        weak_ref(IUnknown* object, uint32_t const strong) noexcept :
            m_object(object),
            m_strong(strong)
        {
            WINRT_ASSERT(object);
        }

        HRESULT __stdcall QueryInterface(GUID const& id, void** object) noexcept override
        {
            if (id == guid_of<IWeakReference>() || id == guid_of<Windows::Foundation::IUnknown>())
            {
                *object = static_cast<IWeakReference*>(this);
                AddRef();
                return S_OK;
            }

            if constexpr (Agile)
            {
                if (id == guid_of<IAgileObject>())
                {
                    *object = static_cast<IUnknown*>(this);
                    AddRef();
                    return S_OK;
                }

                if (id == guid_of<IMarshal>())
                {
                    *object = new (std::nothrow) free_threaded_marshaler(this);
                    return *object ? S_OK : E_OUTOFMEMORY;
                }
            }

            *object = nullptr;
            return E_NOINTERFACE;
        }

        unsigned long __stdcall AddRef() noexcept override
        {
            return 1 + m_weak.fetch_add(1, std::memory_order_relaxed);
        }

        unsigned long __stdcall Release() noexcept override
        {
            uint32_t const target = m_weak.fetch_sub(1, std::memory_order_relaxed) - 1;

            if (target == 0)
            {
                delete this;
            }

            return target;
        }

        HRESULT __stdcall Resolve(GUID const& id, void** objectReference) noexcept override
        {
            uint32_t target = m_strong.load(std::memory_order_relaxed);

            while (true)
            {
                if (target == 0)
                {
                    *objectReference = nullptr;
                    return S_OK;
                }

                if (m_strong.compare_exchange_weak(target, target + 1, std::memory_order_acquire, std::memory_order_relaxed))
                {
                    HRESULT hr = m_object->QueryInterface(id, objectReference);
                    m_strong.fetch_sub(1, std::memory_order_relaxed);
                    return hr;
                }
            }
        }

        void set_strong(uint32_t const count) noexcept
        {
            m_strong = count;
        }

        uint32_t increment_strong() noexcept
        {
            return 1 + m_strong.fetch_add(1, std::memory_order_relaxed);
        }

        uint32_t decrement_strong() noexcept
        {
            uint32_t const target = m_strong.fetch_sub(1, std::memory_order_release) - 1;

            if (target == 0)
            {
                Release();
            }

            return target;
        }

        IWeakReferenceSource* get_source() noexcept
        {
            increment_strong();
            return &this->m_source;
        }

    private:
        template <bool Agile>
        friend struct weak_source;

        static_assert(sizeof(weak_source_producer<Agile>) == sizeof(weak_source<Agile>));

        IUnknown* m_object{};
        std::atomic<uint32_t> m_strong{ 1 };
        std::atomic<uint32_t> m_weak{ 1 };
    };

    template <bool>
    struct WINRT_EBO root_implements_composing_outer
    {
    protected:
        static constexpr bool is_composing = false;
        static constexpr IInspectable* m_inner = nullptr;
    };

    template <>
    struct WINRT_EBO root_implements_composing_outer<true>
    {
        template <typename Qi>
        Qi try_as() const noexcept
        {
            return m_inner.try_as<Qi>();
        }

        explicit operator bool() const noexcept
        {
            return m_inner.operator bool();
        }
    protected:
        static constexpr bool is_composing = true;
        Windows::Foundation::IInspectable m_inner;
    };

    template <typename D, bool>
    struct WINRT_EBO root_implements_composable_inner
    {
    protected:
        static constexpr IInspectable* outer() noexcept { return nullptr; }

        template <typename T, typename D, typename I>
        friend class produce_dispatch_to_overridable_base;
    };

    template <typename D>
    struct WINRT_EBO root_implements_composable_inner<D, true> : producer<D, INonDelegatingInspectable>
    {
    protected:
        IInspectable* outer() noexcept { return m_outer; }
    private:
        IInspectable* m_outer = nullptr;

        template <typename T, typename D, typename I>
        friend class produce_dispatch_to_overridable_base;

        template <typename D>
        friend struct composable_factory;
    };

    template <typename D, typename... I>
    struct __declspec(novtable) root_implements
        : root_implements_composing_outer<std::disjunction<std::is_same<composing, I>...>::value>
        , root_implements_composable_inner<D, std::disjunction<std::is_same<composable, I>...>::value>
    {
        using IInspectable = Windows::Foundation::IInspectable;
        using root_implements_type = root_implements;

        HRESULT __stdcall QueryInterface(GUID const& id, void** object) noexcept
        {
            if (this->outer())
            {
                return this->outer()->QueryInterface(id, object);
            }

            HRESULT result = query_interface(id, object);

            if (result == E_NOINTERFACE && this->m_inner)
            {
                result = static_cast<impl::IUnknown*>(get_abi(this->m_inner))->QueryInterface(id, object);
            }

            return result;
        }

        unsigned long __stdcall AddRef() noexcept
        {
            if (this->outer())
            {
                return this->outer()->AddRef();
            }

            return NonDelegatingAddRef();
        }

        unsigned long __stdcall Release() noexcept
        {
            if (this->outer())
            {
                return this->outer()->Release();
            }

            return NonDelegatingRelease();
        }

        struct abi_guard
        {
            abi_guard(D& derived) :
                m_derived(derived)
            {
                m_derived.abi_enter();
            }

            ~abi_guard()
            {
                m_derived.abi_exit();
            }

        private:

            D& m_derived;
        };

    protected:

        root_implements() noexcept
        {
            if constexpr (use_module_lock::value)
            {
                ++get_module_lock();
            }
        }

        virtual ~root_implements() noexcept
        {
            if constexpr (use_module_lock::value)
            {
                --get_module_lock();
            }
        }

        HRESULT __stdcall GetIids(ULONG* count, GUID** array) noexcept
        {
            if (this->outer())
            {
                return this->outer()->GetIids(count, array);
            }

            return NonDelegatingGetIids(count, array);
        }

        HRESULT __stdcall abi_GetRuntimeClassName(HSTRING* name) noexcept
        {
            if (this->outer())
            {
                return this->outer()->GetRuntimeClassName(name);
            }

            return NonDelegatingGetRuntimeClassName(name);
        }

        HRESULT __stdcall abi_GetTrustLevel(Windows::Foundation::TrustLevel* trustLevel) noexcept
        {
            if (this->outer())
            {
                return this->outer()->GetTrustLevel(trustLevel);
            }

            return NonDelegatingGetTrustLevel(trustLevel);
        }

        unsigned long __stdcall NonDelegatingAddRef() noexcept
        {
            if constexpr (is_weak_ref_source::value)
            {
                uintptr_t count_or_pointer = m_references.load(std::memory_order_relaxed);

                while (true)
                {
                    if (is_weak_ref(count_or_pointer))
                    {
                        return decode_weak_ref(count_or_pointer)->increment_strong();
                    }

                    uintptr_t const target = count_or_pointer + 1;

                    if (m_references.compare_exchange_weak(count_or_pointer, target, std::memory_order_relaxed))
                    {
                        return static_cast<uint32_t>(target);
                    }
                }
            }
            else
            {
                return 1 + m_references.fetch_add(1, std::memory_order_relaxed);
            }
        }

        unsigned long __stdcall NonDelegatingRelease() noexcept
        {
            uint32_t const target = subtract_reference();

            if (target == 0)
            {
                std::atomic_thread_fence(std::memory_order_acquire);
                delete this;
            }

            return target;
        }

        HRESULT __stdcall NonDelegatingQueryInterface(const GUID& id, void** object) noexcept
        {
            if (id == guid_of<IInspectable>() || id == guid_of<Windows::Foundation::IUnknown>())
            {
                impl::IInspectable* result = to_abi<impl::INonDelegatingInspectable>(this);
                NonDelegatingAddRef();
                *object = result;
                return S_OK;
            }

            HRESULT result = query_interface(id, object);

            if (result == E_NOINTERFACE && this->m_inner)
            {
                result = static_cast<impl::IUnknown*>(get_abi(this->m_inner))->QueryInterface(id, object);
            }

            return result;
        }

        HRESULT __stdcall NonDelegatingGetIids(ULONG* count, GUID** array) noexcept
        {
            const auto& local_iids = static_cast<D*>(this)->get_local_iids();
            const uint32_t& local_count = local_iids.first;
            if constexpr(root_implements_type::is_composing)
            {
                if (local_count > 0)
                {
                    const com_array<GUID>& inner_iids = get_interfaces(root_implements_type::m_inner);
                    *count = local_count + inner_iids.size();
                    *array = static_cast<GUID*>(CoTaskMemAlloc(sizeof(GUID)*(*count)));
                    if (*array == nullptr)
                    {
                        return E_OUTOFMEMORY;
                    }
                    auto out = impl::make_array_iterator(*array, *count);
                    out = std::copy(local_iids.second, local_iids.second + local_count, out);
                    std::copy(inner_iids.cbegin(), inner_iids.cend(), out);
                }
                else
                {
                    return static_cast<impl::IInspectable*>(get_abi(root_implements_type::m_inner))->GetIids(count, array);
                }
            }
            else
            {
                if (local_count > 0)
                {
                    *count = local_count;
                    *array = static_cast<GUID*>(CoTaskMemAlloc(sizeof(GUID)*(*count)));
                    if (*array == nullptr)
                    {
                        return E_OUTOFMEMORY;
                    }
                    auto out = impl::make_array_iterator(*array, *count);
                    std::copy(local_iids.second, local_iids.second + local_count, out);
                }
                else
                {
                    *count = 0;
                    *array = nullptr;
                }
            }
            return S_OK;
        }

        HRESULT __stdcall NonDelegatingGetRuntimeClassName(HSTRING* name) noexcept
        {
            try
            {
                *name = detach_abi(static_cast<D*>(this)->GetRuntimeClassName());
                return S_OK;
            }
            catch (...) { return to_hresult(); }
        }

        HRESULT __stdcall NonDelegatingGetTrustLevel(Windows::Foundation::TrustLevel* trustLevel) noexcept
        {
            try
            {
                *trustLevel = static_cast<D*>(this)->GetTrustLevel();
                return S_OK;
            }
            catch (...) { return to_hresult(); }
        }

        uint32_t subtract_reference() noexcept
        {
            if constexpr (is_weak_ref_source::value)
            {
                uintptr_t count_or_pointer = m_references.load(std::memory_order_relaxed);

                while (true)
                {
                    if (is_weak_ref(count_or_pointer))
                    {
                        return decode_weak_ref(count_or_pointer)->decrement_strong();
                    }

                    uintptr_t const target = count_or_pointer - 1;

                    if (m_references.compare_exchange_weak(count_or_pointer, target, std::memory_order_release, std::memory_order_relaxed))
                    {
                        return static_cast<uint32_t>(target);
                    }
                }
            }
            else
            {
                return m_references.fetch_sub(1, std::memory_order_release) - 1;
            }
        }

        template <typename T>
        winrt::weak_ref<T> get_weak()
        {
            impl::IWeakReferenceSource* weak_ref = make_weak_ref();
            if (!weak_ref)
            {
                throw std::bad_alloc{};
            }
            com_ptr<impl::IWeakReferenceSource> source;
            attach_abi(source, weak_ref);

            winrt::weak_ref<T> result;
            check_hresult(source->GetWeakReference(put_abi(result)));
            return result;
        }

        using is_factory = std::disjunction<std::is_same<Windows::Foundation::IActivationFactory, I>...>;

    private:
        void abi_enter() noexcept {}
        void abi_exit() noexcept {}

        using is_agile = std::negation<std::disjunction<std::is_same<non_agile, I>...>>;
        using is_inspectable = std::disjunction<std::is_base_of<Windows::Foundation::IInspectable, I>...>;
        using is_weak_ref_source = std::conjunction<is_inspectable, std::negation<is_factory>, std::negation<std::disjunction<std::is_same<no_weak_ref, I>...>>>;
        using use_module_lock = std::negation<std::disjunction<std::is_same<no_module_lock, I>...>>;
        using weak_ref_t = impl::weak_ref<is_agile::value>;

        static_assert(!is_factory::value || (is_factory::value&& is_agile::value), "winrt::implements - activation factories must be agile.");

        std::atomic<std::conditional_t<is_weak_ref_source::value, uintptr_t, uint32_t>> m_references{ 1 };

        HRESULT query_interface(GUID const& id, void** object) noexcept
        {
            *object = static_cast<D*>(this)->find_interface(id);

            if (*object != nullptr)
            {
                AddRef();
                return S_OK;
            }

            if constexpr (is_agile::value)
            {
                if (id == guid_of<IAgileObject>())
                {
                    *object = get_unknown();
                    AddRef();
                    return S_OK;
                }

                if (id == guid_of<IMarshal>())
                {
                    *object = new (std::nothrow) free_threaded_marshaler(get_unknown());
                    return *object ? S_OK : E_OUTOFMEMORY;
                }
            }

            if constexpr (is_inspectable::value)
            {
                if (id == guid_of<IInspectable>())
                {
                    *object = find_inspectable();
                    AddRef();
                    return S_OK;
                }
            }

            if (id == guid_of<Windows::Foundation::IUnknown>())
            {
                *object = get_unknown();
                AddRef();
                return S_OK;
            }

            if constexpr (is_weak_ref_source::value)
            {
                if (id == guid_of<impl::IWeakReferenceSource>())
                {
                    *object = make_weak_ref();
                    return*object ? S_OK : E_OUTOFMEMORY;
                }
            }

            return E_NOINTERFACE;
        }

        impl::IWeakReferenceSource* make_weak_ref() noexcept
        {
            static_assert(is_weak_ref_source::value, "This is only for weak ref support.");
            uintptr_t count_or_pointer = m_references.load(std::memory_order_relaxed);

            if (is_weak_ref(count_or_pointer))
            {
                return decode_weak_ref(count_or_pointer)->get_source();
            }

            com_ptr<weak_ref_t> weak_ref;
            *weak_ref.put() = new (std::nothrow) weak_ref_t(get_unknown(), static_cast<uint32_t>(count_or_pointer));

            if (!weak_ref)
            {
                return nullptr;
            }

            uintptr_t const encoding = encode_weak_ref(weak_ref.get());

            for (;;)
            {
                if (m_references.compare_exchange_weak(count_or_pointer, encoding, std::memory_order_acq_rel, std::memory_order_relaxed))
                {
                    impl::IWeakReferenceSource* result = weak_ref->get_source();
                    detach_abi(weak_ref);
                    return result;
                }

                if (is_weak_ref(count_or_pointer))
                {
                    return decode_weak_ref(count_or_pointer)->get_source();
                }

                weak_ref->set_strong(static_cast<uint32_t>(count_or_pointer));
            }
        }

        static bool is_weak_ref(intptr_t const value) noexcept
        {
            static_assert(is_weak_ref_source::value, "This is only for weak ref support.");
            return value < 0;
        }

        static weak_ref_t* decode_weak_ref(uintptr_t const value) noexcept
        {
            static_assert(is_weak_ref_source::value, "This is only for weak ref support.");
            return reinterpret_cast<weak_ref_t*>(value << 1);
        }

        static uintptr_t encode_weak_ref(weak_ref_t* value) noexcept
        {
            static_assert(is_weak_ref_source::value, "This is only for weak ref support.");
            constexpr uintptr_t pointer_flag = static_cast<uintptr_t>(1) << ((sizeof(uintptr_t) * 8) - 1);
            WINRT_ASSERT((reinterpret_cast<uintptr_t>(value) & 1) == 0);
            return (reinterpret_cast<uintptr_t>(value) >> 1) | pointer_flag;
        }

        virtual IUnknown* get_unknown() const noexcept = 0;
        virtual std::pair<uint32_t, const GUID*> get_local_iids() const noexcept = 0;
        virtual hstring GetRuntimeClassName() const = 0;
        virtual void* find_interface(GUID const&) const noexcept = 0;
        virtual impl::IInspectable* find_inspectable() const noexcept = 0;

        virtual Windows::Foundation::TrustLevel GetTrustLevel() const noexcept
        {
            return Windows::Foundation::TrustLevel::BaseTrust;
        }

        template <typename D, typename I>
        friend struct impl::produce_base;

        template <typename D, typename I>
        friend struct impl::produce;
    };
}

WINRT_EXPORT namespace winrt
{
    template <typename D, typename... I>
    struct implements : impl::producer<D, impl::uncloak_t<I>>..., impl::base_implements<D, I...>::type
    {
    protected:

        using base_type = typename impl::base_implements<D, I...>::type;
        using root_implements_type = typename base_type::root_implements_type;
        using is_factory = typename root_implements_type::is_factory;

        using base_type::base_type;

        void static_lifetime()
        {
            static_assert(is_factory::value);

            param::hstring classId{ L"Windows.ApplicationModel.Core.CoreApplication" };
            com_ptr<impl::IStaticLifetime> factory;
            check_hresult(WINRT_RoGetActivationFactory(get_abi(classId), guid_of<impl::IStaticLifetime>(), factory.put_void()));

            Windows::Foundation::IUnknown collection;
            check_hresult(factory->GetCollection(put_abi(collection)));

            auto map = collection.as<Windows::Foundation::Collections::IMap<hstring, Windows::Foundation::IInspectable>>();
            map.Insert(GetRuntimeClassName(), *this);
        }

        weak_ref<D> get_weak()
        {
            return root_implements_type::get_weak<D>();
        }

        com_ptr<D> get_strong() noexcept
        {
            com_ptr<D> result;
            result.copy_from(static_cast<D*>(this));
            return result;
        }

    public:

        using implements_type = implements;
        using IInspectable = Windows::Foundation::IInspectable;

        operator IInspectable() const noexcept
        {
            IInspectable result;
            copy_from_abi(result, find_inspectable());
            return result;
        }

        HRESULT __stdcall QueryInterface(GUID const& id, void** object) noexcept
        {
            return root_implements_type::QueryInterface(id, object);
        }

        unsigned long __stdcall AddRef() noexcept
        {
            return root_implements_type::AddRef();
        }

        unsigned long __stdcall Release() noexcept
        {
            return root_implements_type::Release();
        }

        void* find_interface(GUID const& id) const noexcept override
        {
            return impl::find_iid(static_cast<const D*>(this), id);
        }

        impl::IInspectable* find_inspectable() const noexcept override
        {
            return impl::find_inspectable(static_cast<const D*>(this));
        }

        std::pair<uint32_t, const GUID*> get_local_iids() const noexcept override
        {
            using interfaces = impl::uncloaked_interfaces<D>;
            using local_iids = impl::uncloaked_iids<interfaces>;
            return { static_cast<uint32_t>(local_iids::value.size()), local_iids::value.data() };
        }

    private:
        impl::IUnknown* get_unknown() const noexcept override
        {
            return reinterpret_cast<impl::IUnknown*>(to_abi<typename impl::implements_default_interface<D>::type>(this));
        }

        hstring GetRuntimeClassName() const override
        {
            return impl::runtime_class_name<typename impl::implements_default_interface<D>::type>::get();
        }

        template <typename D, typename... I>
        friend struct impl::root_implements;

        template <typename T>
        friend struct weak_ref;
    };
}

namespace winrt::impl
{
    template <typename D>
    struct composable_factory
    {
        template <typename I, typename... Args>
        static I CreateInstance(const Windows::Foundation::IInspectable& outer, Windows::Foundation::IInspectable& inner, Args&&... args)
        {
            static_assert(std::is_base_of_v<Windows::Foundation::IInspectable, I>, "Requested interface must derive from winrt::Windows::Foundation::IInspectable");
            inner = CreateInstanceImpl(outer, std::forward<Args>(args)...);
            return inner.as<I>();
        }

    private:
        template <typename... Args>
        static Windows::Foundation::IInspectable CreateInstanceImpl(const Windows::Foundation::IInspectable& outer, Args&&... args)
        {
            // Very specific dance here. The return value must have a ref on the outer, while inner must have a ref count of 1.
            // Be sure not to make a delegating QueryInterface call because the controlling outer is not fully constructed yet.
            com_ptr<D> instance = make_self<D>(std::forward<Args>(args)...);
            instance->m_outer = static_cast<IInspectable*>(get_abi(outer));
            Windows::Foundation::IInspectable inner;
            attach_abi(inner, to_abi<INonDelegatingInspectable>(detach_abi(instance)));
            return inner;
        }
    };

    template <typename T, typename D, typename I>
    class WINRT_EBO produce_dispatch_to_overridable_base
    {
    protected:
        D& shim() noexcept
        {
            return static_cast<T&>(*this).instance;
        }

        I shim_overridable()
        {
            I result;
            if (shim().outer())
            {
                check_hresult(shim().QueryInterface(guid_of<I>(), put_abi(result)));
            }
            return result;
        }
    };

    template <typename T, typename D, typename I>
    struct produce_dispatch_to_overridable;

    template <typename D, typename... I>
    class dispatch_to_overridable
    {
        class wrapper : public produce_dispatch_to_overridable<wrapper, D, I>...
        {
            D& instance;

            template <typename T, typename D, typename I>
            friend class produce_dispatch_to_overridable_base;

            template <typename D, typename... I>
            friend class dispatch_to_overridable;

            explicit wrapper(D& d) : instance(d) {}

        public:
            wrapper(const wrapper&) = delete;
            wrapper(wrapper&&) = default;
        };

    public:
        static wrapper overridable(D& instance) noexcept
        {
            return wrapper{ instance };
        }
    };
}

namespace winrt::impl
{
    template <typename D> template <typename T>
    T consume_IActivationFactory<D>::ActivateInstance() const
    {
        Windows::Foundation::IInspectable instance;
        check_hresult(WINRT_SHIM(Windows::Foundation::IActivationFactory)->ActivateInstance(put_abi(instance)));
        return instance.try_as<T>();
    }

    template <typename D>
    struct produce<D, Windows::Foundation::IActivationFactory> : produce_base<D, Windows::Foundation::IActivationFactory>
    {
        HRESULT __stdcall ActivateInstance(void** instance) noexcept final
        {
            try
            {
                *instance = nullptr;
                typename D::abi_guard guard(this->shim());
                *instance = detach_abi(this->shim().ActivateInstance());
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };

    template <typename Class, typename Interface>
    com_ref<Interface> get_activation_factory()
    {
        param::hstring classId{ name_of<Class>() };

        com_ref<Interface> factory;
        check_hresult(WINRT_RoGetActivationFactory(get_abi(classId), guid_of<Interface>(), put_abi(factory)));
        return factory;
    }

    struct factory_cache_typeless_entry
    {
        void clear() noexcept
        {
            slim_lock_guard const guard(m_lock);
            m_factory = nullptr;
        }

        factory_cache_typeless_entry* next{ nullptr };

    private:

        slim_mutex m_lock;
        Windows::Foundation::IUnknown m_factory;
    };

    struct factory_cache
    {
        void add(factory_cache_typeless_entry* entry) noexcept
        {
            WINRT_ASSERT(entry);
            slim_lock_guard const guard(m_lock);
            entry->next = m_begin;
            m_begin = entry;
        }

        void clear() noexcept
        {
            slim_lock_guard const guard(m_lock);

            while (m_begin != nullptr)
            {
                m_begin->clear();
                m_begin = m_begin->next;
            }
        }

    private:

        slim_mutex m_lock;
        factory_cache_typeless_entry* m_begin{ nullptr };
    };

    inline factory_cache& get_factory_cache() noexcept
    {
        static factory_cache cache;
        return cache;
    }

    template <typename Class, typename Interface>
    struct factory_cache_entry
    {
        factory_cache_entry() {} 

        com_ref<Interface> get()
        {
#ifdef WINRT_DIAGNOSTICS
            get_diagnostics_info().add_factory<Class>();
#endif

            {
                slim_shared_lock_guard const guard(m_lock);

                if (m_factory)
                {
                    return m_factory;
                }
            }

            com_ref<Interface> factory = get_activation_factory<Class, Interface>();

            if (!factory.template try_as<IAgileObject>())
            {
#ifdef WINRT_DIAGNOSTICS
                get_diagnostics_info().non_agile_factory<Class>();
#endif
                return factory;
            }

            slim_lock_guard const guard(m_lock);

            if (!m_factory)
            {
                m_factory = std::move(factory);
                get_factory_cache().add(reinterpret_cast<factory_cache_typeless_entry*>(this));
            }

            return m_factory;
        }

        void clear() noexcept
        {
            slim_lock_guard const guard(m_lock);
            m_factory = nullptr;
        }

    private:

        void* m_next{ nullptr };
        slim_mutex m_lock;
        com_ref<Interface> m_factory;
    };
}

WINRT_EXPORT namespace winrt
{
    namespace Windows::Foundation
    {
        struct IActivationFactory :
            IInspectable,
            impl::consume_t<IActivationFactory>
        {
            IActivationFactory(std::nullptr_t = nullptr) noexcept {}
        };
    }

    enum class apartment_type : int32_t
    {
        single_threaded,
        multi_threaded
    };

    inline void init_apartment(apartment_type const type = apartment_type::multi_threaded)
    {
        HRESULT const result = WINRT_RoInitialize(static_cast<uint32_t>(type));

        if (result < 0)
        {
            throw_hresult(result);
        }
    }

    inline void uninit_apartment() noexcept
    {
        WINRT_RoUninitialize();
    }

    template <typename Class, typename Interface = Windows::Foundation::IActivationFactory>
    impl::com_ref<Interface> get_activation_factory()
    {
        static impl::factory_cache_entry<Class, Interface> factory;
        return factory.get();
    }

    inline void clear_factory_cache() noexcept
    {
        impl::get_factory_cache().clear();
    }

    template <typename Interface>
    impl::com_ref<Interface> create_instance(GUID const& clsid, DWORD context = CLSCTX_INPROC_SERVER, ::IUnknown* outer = nullptr)
    {
        impl::com_ref<Interface> temp{ nullptr };
        check_hresult(CoCreateInstance(clsid, outer, context, guid_of<Interface>(), put_abi(temp)));
        return temp;
    }
}

namespace winrt::impl
{
    template <typename D>
    struct produce<D, wfc::IVectorChangedEventArgs> : produce_base<D, wfc::IVectorChangedEventArgs>
    {
        HRESULT __stdcall get_CollectionChange(wfc::CollectionChange* value) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                *value = this->shim().CollectionChange();
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }

        HRESULT __stdcall get_Index(uint32_t* value) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                *value = this->shim().Index();
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };

    template <typename D, typename T>
    struct produce<D, wfc::IIterator<T>> : produce_base<D, wfc::IIterator<T>>
    {
        HRESULT __stdcall get_Current(arg_out<T> current) noexcept final
        {
            try
            {
                clear_abi(current);
                typename D::abi_guard guard(this->shim());
                *current = detach_from<T>(this->shim().Current());
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }

        HRESULT __stdcall get_HasCurrent(bool* hasCurrent) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                *hasCurrent = this->shim().HasCurrent();
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }

        HRESULT __stdcall MoveNext(bool* hasCurrent) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                *hasCurrent = this->shim().MoveNext();
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }

        HRESULT __stdcall GetMany(uint32_t capacity, arg_out<T> value, uint32_t* actual) noexcept final
        {
            try
            {
                clear_abi(value);
                typename D::abi_guard guard(this->shim());
                *actual = this->shim().GetMany(array_view<T>(reinterpret_cast<T*>(value), reinterpret_cast<T*>(value) + capacity));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };

    template <typename D, typename T>
    struct produce<D, wfc::IIterable<T>> : produce_base<D, wfc::IIterable<T>>
    {
        HRESULT __stdcall First(void** first) noexcept final
        {
            try
            {
                *first = nullptr;
                typename D::abi_guard guard(this->shim());
                *first = detach_from<wfc::IIterator<T>>(this->shim().First());
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };

    template <typename D, typename K, typename V>
    struct produce<D, wfc::IKeyValuePair<K, V>> : produce_base<D, wfc::IKeyValuePair<K, V>>
    {
        HRESULT __stdcall get_Key(arg_out<K> key) noexcept final
        {
            try
            {
                clear_abi(key);
                typename D::abi_guard guard(this->shim());
                *key = detach_from<K>(this->shim().Key());
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }

        HRESULT __stdcall get_Value(arg_out<V> value) noexcept final
        {
            try
            {
                clear_abi(value);
                typename D::abi_guard guard(this->shim());
                *value = detach_from<V>(this->shim().Value());
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };

    template <typename D, typename T>
    struct produce<D, wfc::IVectorView<T>> : produce_base<D, wfc::IVectorView<T>>
    {
        HRESULT __stdcall GetAt(uint32_t index, arg_out<T> item) noexcept final
        {
            try
            {
                clear_abi(item);
                typename D::abi_guard guard(this->shim());
                *item = detach_from<T>(this->shim().GetAt(index));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }

        HRESULT __stdcall get_Size(uint32_t* size) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                *size = this->shim().Size();
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }

        HRESULT __stdcall IndexOf(arg_in<T> value, uint32_t* index, bool* found) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                *found = this->shim().IndexOf(*reinterpret_cast<T const*>(&value), *index);
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }

        HRESULT __stdcall GetMany(uint32_t startIndex, uint32_t capacity, arg_out<T> value, uint32_t* actual) noexcept final
        {
            try
            {
                clear_abi(value);
                typename D::abi_guard guard(this->shim());
                *actual = this->shim().GetMany(startIndex, array_view<T>(reinterpret_cast<T*>(value), reinterpret_cast<T*>(value) + capacity));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };

    template <typename D, typename T>
    struct produce<D, wfc::IVector<T>> : produce_base<D, wfc::IVector<T>>
    {
        HRESULT __stdcall GetAt(uint32_t index, arg_out<T> item) noexcept final
        {
            try
            {
                clear_abi(item);
                typename D::abi_guard guard(this->shim());
                *item = detach_from<T>(this->shim().GetAt(index));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }

        HRESULT __stdcall get_Size(uint32_t* size) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                *size = this->shim().Size();
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }

        HRESULT __stdcall GetView(void** view) noexcept final
        {
            try
            {
                *view = nullptr;
                typename D::abi_guard guard(this->shim());
                *view = detach_from<wfc::IVectorView<T>>(this->shim().GetView());
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }

        HRESULT __stdcall IndexOf(arg_in<T> value, uint32_t* index, bool* found) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                *found = this->shim().IndexOf(*reinterpret_cast<T const*>(&value), *index);
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }

        HRESULT __stdcall SetAt(uint32_t index, arg_in<T> item) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                this->shim().SetAt(index, *reinterpret_cast<T const*>(&item));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }

        HRESULT __stdcall InsertAt(uint32_t index, arg_in<T> item) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                this->shim().InsertAt(index, *reinterpret_cast<T const*>(&item));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }

        HRESULT __stdcall RemoveAt(uint32_t index) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                this->shim().RemoveAt(index);
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }

        HRESULT __stdcall Append(arg_in<T> item) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                this->shim().Append(*reinterpret_cast<T const*>(&item));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }

        HRESULT __stdcall RemoveAtEnd() noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                this->shim().RemoveAtEnd();
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }

        HRESULT __stdcall Clear() noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                this->shim().Clear();
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }

        HRESULT __stdcall GetMany(uint32_t startIndex, uint32_t capacity, arg_out<T> value, uint32_t* actual) noexcept final
        {
            try
            {
                clear_abi(value);
                typename D::abi_guard guard(this->shim());
                *actual = this->shim().GetMany(startIndex, array_view<T>(reinterpret_cast<T*>(value), reinterpret_cast<T*>(value) + capacity));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }

        HRESULT __stdcall ReplaceAll(uint32_t count, arg_out<T> item) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                this->shim().ReplaceAll(array_view<T const>(reinterpret_cast<T const*>(item), reinterpret_cast<T const*>(item) + count));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };

    template <typename D, typename K, typename V>
    struct produce<D, wfc::IMapView<K, V>> : produce_base<D, wfc::IMapView<K, V>>
    {
        HRESULT __stdcall Lookup(arg_in<K> key, arg_out<V> value) noexcept final
        {
            try
            {
                clear_abi(value);
                typename D::abi_guard guard(this->shim());
                *value = detach_from<V>(this->shim().Lookup(*reinterpret_cast<K const*>(&key)));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }

        HRESULT __stdcall get_Size(uint32_t* size) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                *size = this->shim().Size();
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }

        HRESULT __stdcall HasKey(arg_in<K> key, bool* found) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                *found = this->shim().HasKey(*reinterpret_cast<K const*>(&key));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }

        HRESULT __stdcall Split(void** firstPartition, void** secondPartition) noexcept final
        {
            try
            {
                *firstPartition = nullptr;
                *secondPartition = nullptr;
                typename D::abi_guard guard(this->shim());
                this->shim().Split(*reinterpret_cast<wfc::IMapView<K, V>*>(firstPartition), *reinterpret_cast<wfc::IMapView<K, V>*>(secondPartition));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };

    template <typename D, typename K, typename V>
    struct produce<D, wfc::IMap<K, V>> : produce_base<D, wfc::IMap<K, V>>
    {
        HRESULT __stdcall Lookup(arg_in<K> key, arg_out<V> value) noexcept final
        {
            try
            {
                clear_abi(value);
                typename D::abi_guard guard(this->shim());
                *value = detach_from<V>(this->shim().Lookup(*reinterpret_cast<K const*>(&key)));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }

        HRESULT __stdcall get_Size(uint32_t* size) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                *size = this->shim().Size();
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }

        HRESULT __stdcall HasKey(arg_in<K> key, bool* found) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                *found = this->shim().HasKey(*reinterpret_cast<K const*>(&key));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }

        HRESULT __stdcall GetView(void** view) noexcept final
        {
            try
            {
                *view = nullptr;
                typename D::abi_guard guard(this->shim());
                *view = detach_from<wfc::IMapView<K, V>>(this->shim().GetView());
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }

        HRESULT __stdcall Insert(arg_in<K> key, arg_in<V> value, bool* replaced) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                *replaced = this->shim().Insert(*reinterpret_cast<K const*>(&key), *reinterpret_cast<V const*>(&value));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }

        HRESULT __stdcall Remove(arg_in<K> key) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                this->shim().Remove(*reinterpret_cast<K const*>(&key));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }

        HRESULT __stdcall Clear() noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                this->shim().Clear();
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };

    template <typename D, typename K>
    struct produce<D, wfc::IMapChangedEventArgs<K>> : produce_base<D, wfc::IMapChangedEventArgs<K>>
    {
        HRESULT __stdcall get_CollectionChange(wfc::CollectionChange* value) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                *value = this->shim().CollectionChange();
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }

        HRESULT __stdcall get_Key(arg_out<K> value) noexcept final
        {
            try
            {
                clear_abi(value);
                typename D::abi_guard guard(this->shim());
                *value = detach_from<K>(this->shim().Key());
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };

    template <typename D, typename K, typename V>
    struct produce<D, wfc::IObservableMap<K, V>> : produce_base<D, wfc::IObservableMap<K, V>>
    {
        HRESULT __stdcall add_MapChanged(void* handler, event_token* token) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                *token = this->shim().MapChanged(*reinterpret_cast<wfc::MapChangedEventHandler<K, V> const*>(&handler));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }

        HRESULT __stdcall remove_MapChanged(event_token token) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                this->shim().MapChanged(token);
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };

    template <typename D, typename T>
    struct produce<D, wfc::IObservableVector<T>> : produce_base<D, wfc::IObservableVector<T>>
    {
        HRESULT __stdcall add_VectorChanged(void* handler, event_token* token) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                *token = this->shim().VectorChanged(*reinterpret_cast<wfc::VectorChangedEventHandler<T> const*>(&handler));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }

        HRESULT __stdcall remove_VectorChanged(event_token token) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                this->shim().VectorChanged(token);
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };
}

namespace winrt::impl
{
    template <typename K, typename V>
    struct key_value_pair final : implements<key_value_pair<K, V>, wfc::IKeyValuePair<K, V>>
    {
        explicit key_value_pair(std::pair<K const, V> const& value) : m_value(value)
        {}

        K Key() const
        {
            return m_value.first;
        }

        V Value() const
        {
            return m_value.second;
        }

    private:

        std::pair<K const, V> const m_value;
    };

    template <typename T>
    struct collection_traits
    {
        static T copy(T const& value)
        {
            return value;
        }

        template<typename InputIt, typename Size, typename OutputIt>
        static auto copy_n(InputIt first, Size count, OutputIt result)
        {
            return std::copy_n(first, count, result);
        }
    };

    template <typename K, typename V>
    struct collection_traits<wfc::IKeyValuePair<K, V>>
    {
        static auto copy(std::pair<K const, V> const& value)
        {
            return make<key_value_pair<K, V>>(value);
        }

        template<typename InputIt, typename Size, typename OutputIt>
        static auto copy_n(InputIt first, Size count, OutputIt result)
        {
            return std::transform(first, std::next(first, count), result, [](std::pair<K const, V> const& value)
            {
                return make<key_value_pair<K, V>>(value);
            });
        }
    };

    struct input_scope
    {
        void invalidate_scope() noexcept
        {
            m_invalid = true;
        }

        void check_scope() const
        {
            if (m_invalid)
            {
                throw hresult_illegal_method_call();
            }
        }

    private:

        bool m_invalid{};
    };
}

namespace winrt::impl
{
    template <typename T, typename Container>
    struct input_iterable final : implements<input_iterable<T, Container>, non_agile, no_weak_ref, wfc::IIterable<T>>
    {
        static_assert(std::is_same_v<Container, std::remove_reference_t<Container>>, "Must be constructed with rvalue.");

        explicit input_iterable(Container&& values) : m_values(std::forward<Container>(values))
        {
        }

        wfc::IIterator<T> First()
        {
            return make<iterator>(this);
        }

    private:

        Container const m_values;

        struct iterator final : implements<iterator, non_agile, no_weak_ref, wfc::IIterator<T>>
        {
            explicit iterator(input_iterable<T, Container>* owner) noexcept :
            m_current(owner->m_values.begin()),
                m_end(owner->m_values.end())
            {
                m_owner.copy_from(owner);
            }

            T Current() const
            {
                if (m_current == m_end)
                {
                    throw hresult_out_of_bounds();
                }

                return collection_traits<T>::copy(*m_current);
            }

            bool HasCurrent() const noexcept
            {
                return m_current != m_end;
            }

            bool MoveNext() noexcept
            {
                if (m_current != m_end)
                {
                    ++m_current;
                }

                return HasCurrent();
            }

            uint32_t GetMany(array_view<T> values)
            {
                uint32_t actual = static_cast<uint32_t>(std::distance(m_current, m_end));

                if (actual > values.size())
                {
                    actual = values.size();
                }

                collection_traits<T>::copy_n(m_current, actual, values.begin());
                std::advance(m_current, actual);
                return actual;
            }

        private:

            com_ptr<input_iterable<T, Container>> m_owner;
            typename Container::const_iterator m_current;
            typename Container::const_iterator const m_end;
        };
    };

    template <typename T, typename InputIt>
    struct scoped_input_iterable final : input_scope, implements<scoped_input_iterable<T, InputIt>, non_agile, no_weak_ref, wfc::IIterable<T>>
    {
        void abi_enter() const
        {
            check_scope();
        }

        scoped_input_iterable(InputIt first, InputIt last) : m_begin(first), m_end(last)
        {
        }

        wfc::IIterator<T> First()
        {
            return make<iterator>(this);
        }

    private:

        InputIt const m_begin;
        InputIt const m_end;

        struct iterator final : implements<iterator, non_agile, no_weak_ref, wfc::IIterator<T>>
        {
            void abi_enter() const
            {
                m_owner->check_scope();
            }

            explicit iterator(scoped_input_iterable<T, InputIt>* owner) noexcept :
            m_current(owner->m_begin),
                m_end(owner->m_end)
            {
                m_owner.copy_from(owner);
            }

            T Current() const
            {
                if (m_current == m_end)
                {
                    throw hresult_out_of_bounds();
                }

                return collection_traits<T>::copy(*m_current);
            }

            bool HasCurrent() const noexcept
            {
                return m_current != m_end;
            }

            bool MoveNext() noexcept
            {
                if (m_current != m_end)
                {
                    ++m_current;
                }

                return HasCurrent();
            }

            uint32_t GetMany(array_view<T> values)
            {
                uint32_t actual = static_cast<uint32_t>(std::distance(m_current, m_end));

                if (actual > values.size())
                {
                    actual = values.size();
                }

                collection_traits<T>::copy_n(m_current, actual, values.begin());
                std::advance(m_current, actual);
                return actual;
            }

        private:

            com_ptr<scoped_input_iterable<T, InputIt>> m_owner;
            InputIt m_current;
            InputIt const m_end;
        };
    };

    template <typename T, typename Container>
    auto make_input_iterable(Container&& values)
    {
        return make<input_iterable<T, Container>>(std::forward<Container>(values));
    }

    template <typename T, typename InputIt>
    auto make_scoped_input_iterable(InputIt first, InputIt last)
    {
        using interface_type = wfc::IIterable<T>;
        std::pair<interface_type, input_scope*> result;
        auto ptr = new scoped_input_iterable<T, InputIt>(first, last);
        *put_abi(result.first) = to_abi<interface_type>(ptr);
        result.second = ptr;
        return result;
    }
}

WINRT_EXPORT namespace winrt::param
{
    template <typename T>
    struct iterable
    {
        using value_type = T;
        using interface_type = Windows::Foundation::Collections::IIterable<value_type>;

        iterable(std::nullptr_t) noexcept
        {
        }

        iterable(iterable const& values) = delete;
        iterable& operator=(iterable const& values) = delete;

        iterable(interface_type const& values) noexcept : m_owned(false)
        {
            attach_abi(m_pair.first, winrt::get_abi(values));
        }

        template <typename Collection, std::enable_if_t<std::is_convertible_v<Collection, interface_type>>* = nullptr>
        iterable(Collection const& values) noexcept
        {
            m_pair.first = values;
        }

        template <typename Allocator>
        iterable(std::vector<value_type, Allocator>&& values) : m_pair(impl::make_input_iterable<value_type>(std::move(values)), nullptr)
        {
        }

        template <typename Allocator>
        iterable(std::vector<value_type, Allocator> const& values) : m_pair(impl::make_scoped_input_iterable<value_type>(values.begin(), values.end()))
        {
        }

        iterable(std::initializer_list<value_type> values) : m_pair(impl::make_scoped_input_iterable<value_type>(values.begin(), values.end()))
        {
        }

        template<class InputIt>
        iterable(InputIt first, InputIt last) : m_pair(impl::make_scoped_input_iterable<value_type>(first, last))
        {
        }

        ~iterable() noexcept
        {
            if (m_pair.second)
            {
                m_pair.second->invalidate_scope();
            }

            if (!m_owned)
            {
                detach_abi(m_pair.first);
            }
        }

    private:

        std::pair<interface_type, impl::input_scope*> m_pair;
        bool m_owned{ true };
    };

    template <typename K, typename V>
    struct iterable<Windows::Foundation::Collections::IKeyValuePair<K, V>>
    {
        using value_type = Windows::Foundation::Collections::IKeyValuePair<K, V>;
        using interface_type = Windows::Foundation::Collections::IIterable<value_type>;

        iterable(std::nullptr_t) noexcept
        {
        }

        iterable(iterable const& values) = delete;
        iterable& operator=(iterable const& values) = delete;

        iterable(interface_type const& values) noexcept : m_owned(false)
        {
            attach_abi(m_pair.first, winrt::get_abi(values));
        }

        template <typename Collection, std::enable_if_t<std::is_convertible_v<Collection, interface_type>>* = nullptr>
        iterable(Collection const& values) noexcept
        {
            m_pair.first = values;
        }

        template <typename Compare, typename Allocator>
        iterable(std::map<K, V, Compare, Allocator>&& values) : m_pair(impl::make_input_iterable<value_type>(std::move(values)), nullptr)
        {
        }

        template <typename Compare, typename Allocator>
        iterable(std::map<K, V, Compare, Allocator> const& values) : m_pair(impl::make_scoped_input_iterable<value_type>(values.begin(), values.end()))
        {
        }

        template <typename Hash, typename KeyEqual, typename Allocator>
        iterable(std::unordered_map<K, V, Hash, KeyEqual, Allocator>&& values) : m_pair(impl::make_input_iterable<value_type>(std::move(values)), nullptr)
        {
        }

        template <typename Hash, typename KeyEqual, typename Allocator>
        iterable(std::unordered_map<K, V, Hash, KeyEqual, Allocator> const& values) : m_pair(impl::make_scoped_input_iterable<value_type>(values.begin(), values.end()))
        {
        }

        iterable(std::initializer_list<std::pair<K const, V>> values) : m_pair(impl::make_scoped_input_iterable<value_type>(values.begin(), values.end()))
        {
        }

        template<class InputIt>
        iterable(InputIt first, InputIt last) : m_pair(impl::make_scoped_input_iterable<value_type>(first, last))
        {
        }

        ~iterable() noexcept
        {
            if (m_pair.second)
            {
                m_pair.second->invalidate_scope();
            }

            if (!m_owned)
            {
                detach_abi(m_pair.first);
            }
        }

    private:

        std::pair<interface_type, impl::input_scope*> m_pair;
        bool m_owned{ true };
    };

    template <typename T>
    auto get_abi(iterable<T> const& object) noexcept
    {
        return *(::IUnknown**)(&object);
    }

    template <typename T>
    struct async_iterable
    {
        using value_type = T;
        using interface_type = Windows::Foundation::Collections::IIterable<value_type>;

        async_iterable(std::nullptr_t) noexcept
        {
        }

        async_iterable(async_iterable const& values) = delete;
        async_iterable& operator=(async_iterable const& values) = delete;

        async_iterable(interface_type const& values) noexcept : m_owned(false)
        {
            attach_abi(m_interface, winrt::get_abi(values));
        }

        template <typename Collection, std::enable_if_t<std::is_convertible_v<Collection, interface_type>>* = nullptr>
        async_iterable(Collection const& values) noexcept
        {
            m_interface = values;
        }

        template <typename Allocator>
        async_iterable(std::vector<value_type, Allocator>&& values) :
            m_interface(impl::make_input_iterable<value_type>(std::move(values)))
        {
        }

        async_iterable(std::initializer_list<value_type> values) :
            m_interface(impl::make_input_iterable<value_type>(std::vector<value_type>(values)))
        {
        }

        ~async_iterable() noexcept
        {
            if (!m_owned)
            {
                detach_abi(m_interface);
            }
        }

    private:

        interface_type m_interface;
        bool m_owned{ true };
    };

    template <typename K, typename V>
    struct async_iterable<Windows::Foundation::Collections::IKeyValuePair<K, V>>
    {
        using value_type = Windows::Foundation::Collections::IKeyValuePair<K, V>;
        using interface_type = Windows::Foundation::Collections::IIterable<value_type>;

        async_iterable(std::nullptr_t) noexcept
        {
        }

        async_iterable(async_iterable const& values) = delete;
        async_iterable& operator=(async_iterable const& values) = delete;

        async_iterable(interface_type const& values) noexcept : m_owned(false)
        {
            attach_abi(m_interface, winrt::get_abi(values));
        }

        template <typename Collection, std::enable_if_t<std::is_convertible_v<Collection, interface_type>>* = nullptr>
        async_iterable(Collection const& values) noexcept
        {
            m_interface = values;
        }

        template <typename Compare, typename Allocator>
        async_iterable(std::map<K, V, Compare, Allocator>&& values) :
            m_interface(impl::make_input_iterable<value_type>(std::move(values)))
        {
        }

        template <typename Hash, typename KeyEqual, typename Allocator>
        async_iterable(std::unordered_map<K, V, Hash, KeyEqual, Allocator>&& values) :
            m_interface(impl::make_input_iterable<value_type>(std::move(values)))
        {
        }

        async_iterable(std::initializer_list<std::pair<K const, V>> values) :
            m_interface(impl::make_input_iterable<value_type>(std::map<K, V>(values)))
        {
        }

        ~async_iterable() noexcept
        {
            if (!m_owned)
            {
                detach_abi(m_interface);
            }
        }

    private:

        interface_type m_interface;
        bool m_owned{ true };
    };

    template <typename T>
    auto get_abi(async_iterable<T> const& object) noexcept
    {
        return *(::IUnknown**)(&object);
    }
}

namespace winrt::impl
{
    template <typename T, typename Container>
    struct input_vector_view final : implements<input_vector_view<T, Container>, non_agile, no_weak_ref, wfc::IVectorView<T>, wfc::IIterable<T>>
    {
        static_assert(std::is_same_v<Container, std::remove_reference_t<Container>>, "Must be constructed with rvalue.");

        explicit input_vector_view(Container&& values) : m_values(std::forward<Container>(values))
        {
        }

        T GetAt(uint32_t const index) const
        {
            if (index >= Size())
            {
                throw hresult_out_of_bounds();
            }

            return m_values[index];
        }

        uint32_t Size() const noexcept
        {
            return static_cast<uint32_t>(m_values.size());
        }

        bool IndexOf(T const& value, uint32_t& index) const noexcept
        {
            index = static_cast<uint32_t>(std::find(m_values.begin(), m_values.end(), value) - m_values.begin());
            return index < m_values.size();
        }

        uint32_t GetMany(uint32_t const startIndex, array_view<T> values) const
        {
            if (startIndex >= Size())
            {
                return 0;
            }

            uint32_t actual = Size() - startIndex;

            if (actual > values.size())
            {
                actual = values.size();
            }

            std::copy_n(m_values.begin() + startIndex, actual, values.begin());
            return actual;
        }

        wfc::IIterator<T> First()
        {
            return make<iterator>(this);
        }

    private:

        Container const m_values;

        struct iterator final : implements<iterator, non_agile, no_weak_ref, wfc::IIterator<T>>
        {
            explicit iterator(input_vector_view<T, Container>* owner) noexcept :
            m_current(owner->m_values.begin()),
                m_end(owner->m_values.end())
            {
                m_owner.copy_from(owner);
            }

            T Current() const
            {
                if (m_current == m_end)
                {
                    throw hresult_out_of_bounds();
                }

                return*m_current;
            }

            bool HasCurrent() const noexcept
            {
                return m_current != m_end;
            }

            bool MoveNext() noexcept
            {
                if (m_current != m_end)
                {
                    ++m_current;
                }

                return HasCurrent();
            }

            uint32_t GetMany(array_view<T> values)
            {
                uint32_t actual = static_cast<uint32_t>(std::distance(m_current, m_end));

                if (actual > values.size())
                {
                    actual = values.size();
                }

                std::copy_n(m_current, actual, values.begin());
                std::advance(m_current, actual);
                return actual;
            }

        private:

            com_ptr<input_vector_view<T, Container>> m_owner;
            typename Container::const_iterator m_current;
            typename Container::const_iterator const m_end;
        };
    };

    template <typename T, typename InputIt>
    struct scoped_input_vector_view final : input_scope, implements<scoped_input_vector_view<T, InputIt>, non_agile, no_weak_ref, wfc::IVectorView<T>, wfc::IIterable<T>>
    {
        void abi_enter() const
        {
            check_scope();
        }

        scoped_input_vector_view(InputIt first, InputIt last) : m_begin(first), m_end(last)
        {
        }

        T GetAt(uint32_t const index) const
        {
            if (index >= Size())
            {
                throw hresult_out_of_bounds();
            }

            return*std::next(m_begin, index);
        }

        uint32_t Size() const noexcept
        {
            return static_cast<uint32_t>(std::distance(m_begin, m_end));
        }

        bool IndexOf(T const& value, uint32_t& index) const noexcept
        {
            index = static_cast<uint32_t>(std::find(m_begin, m_end, value) - m_begin);
            return index < Size();
        }

        uint32_t GetMany(uint32_t const startIndex, array_view<T> values) const
        {
            if (startIndex >= Size())
            {
                return 0;
            }

            uint32_t actual = Size() - startIndex;

            if (actual > values.size())
            {
                actual = values.size();
            }

            std::copy_n(m_begin + startIndex, actual, values.begin());
            return actual;
        }

        wfc::IIterator<T> First()
        {
            return make<iterator>(this);
        }

    private:

        InputIt const m_begin;
        InputIt const m_end;

        struct iterator final : implements<iterator, non_agile, no_weak_ref, wfc::IIterator<T>>
        {
            void abi_enter() const
            {
                m_owner->check_scope();
            }

            explicit iterator(scoped_input_vector_view<T, InputIt>* owner) noexcept :
            m_current(owner->m_begin),
                m_end(owner->m_end)
            {
                m_owner.copy_from(owner);
            }

            T Current() const
            {
                if (m_current == m_end)
                {
                    throw hresult_out_of_bounds();
                }

                return*m_current;
            }

            bool HasCurrent() const noexcept
            {
                return m_current != m_end;
            }

            bool MoveNext() noexcept
            {
                if (m_current != m_end)
                {
                    ++m_current;
                }

                return HasCurrent();
            }

            uint32_t GetMany(array_view<T> values)
            {
                uint32_t actual = static_cast<uint32_t>(std::distance(m_current, m_end));

                if (actual > values.size())
                {
                    actual = values.size();
                }

                std::copy_n(m_current, actual, values.begin());
                std::advance(m_current, actual);
                return actual;
            }

        private:

            com_ptr<scoped_input_vector_view<T, InputIt>> m_owner;
            InputIt m_current;
            InputIt const m_end;
        };
    };

    template <typename T, typename InputIt>
    auto make_scoped_input_vector_view(InputIt first, InputIt last)
    {
        using interface_type = wfc::IVectorView<T>;
        std::pair<interface_type, input_scope*> result;
        auto ptr = new scoped_input_vector_view<T, InputIt>(first, last);
        *put_abi(result.first) = to_abi<interface_type>(ptr);
        result.second = ptr;
        return result;
    }
}

WINRT_EXPORT namespace winrt::param
{
    template <typename T>
    struct vector_view
    {
        using value_type = T;
        using interface_type = Windows::Foundation::Collections::IVectorView<value_type>;

        vector_view(std::nullptr_t) noexcept
        {
        }

        vector_view(vector_view const& values) = delete;
        vector_view& operator=(vector_view const& values) = delete;

        vector_view(interface_type const& values) noexcept : m_owned(false)
        {
            attach_abi(m_pair.first, winrt::get_abi(values));
        }

        template <typename Collection, std::enable_if_t<std::is_convertible_v<Collection, interface_type>>* = nullptr>
        vector_view(Collection const& values) noexcept
        {
            m_pair.first = values;
        }

        template <typename Allocator>
        vector_view(std::vector<value_type, Allocator>&& values) : m_pair(make<impl::input_vector_view<value_type, std::vector<value_type, Allocator>>>(std::move(values)), nullptr)
        {
        }

        template <typename Allocator>
        vector_view(std::vector<value_type, Allocator> const& values) : m_pair(impl::make_scoped_input_vector_view<value_type>(values.begin(), values.end()))
        {
        }

        vector_view(std::initializer_list<value_type> values) : m_pair(impl::make_scoped_input_vector_view<value_type>(values.begin(), values.end()))
        {
        }

        template<class InputIt>
        vector_view(InputIt first, InputIt last) : m_pair(impl::make_scoped_input_vector_view<value_type>(first, last))
        {
        }

        ~vector_view() noexcept
        {
            if (m_pair.second)
            {
                m_pair.second->invalidate_scope();
            }

            if (!m_owned)
            {
                detach_abi(m_pair.first);
            }
        }

    private:

        std::pair<interface_type, impl::input_scope*> m_pair;
        bool m_owned{ true };
    };

    template <typename T>
    auto get_abi(vector_view<T> const& object) noexcept
    {
        return *(::IUnknown**)(&object);
    }

    template <typename T>
    struct async_vector_view
    {
        using value_type = T;
        using interface_type = Windows::Foundation::Collections::IVectorView<value_type>;

        async_vector_view(std::nullptr_t) noexcept
        {
        }

        async_vector_view(async_vector_view const& values) = delete;
        async_vector_view& operator=(async_vector_view const& values) = delete;

        async_vector_view(interface_type const& values) noexcept : m_owned(false)
        {
            attach_abi(m_interface, winrt::get_abi(values));
        }

        template <typename Collection, std::enable_if_t<std::is_convertible_v<Collection, interface_type>>* = nullptr>
        async_vector_view(Collection const& values) noexcept
        {
            m_interface = values;
        }

        template <typename Allocator>
        async_vector_view(std::vector<value_type, Allocator>&& values) :
            m_interface(make<impl::input_vector_view<value_type, std::vector<value_type, Allocator>>>(std::move(values)))
        {
        }

        async_vector_view(std::initializer_list<value_type> values) :
            m_interface(make<impl::input_vector_view<value_type, std::vector<value_type>>>(values))
        {
        }

        ~async_vector_view() noexcept
        {
            if (!m_owned)
            {
                detach_abi(m_interface);
            }
        }

    private:

        interface_type m_interface;
        bool m_owned{ true };
    };

    template <typename T>
    auto get_abi(async_vector_view<T> const& object) noexcept
    {
        return *(::IUnknown**)(&object);
    }
}

namespace winrt::impl
{
    template <typename K, typename V, typename Container>
    struct input_map_view final : implements<input_map_view<K, V, Container>, non_agile, no_weak_ref, wfc::IMapView<K, V>, wfc::IIterable<wfc::IKeyValuePair<K, V>>>
    {
        static_assert(std::is_same_v<Container, std::remove_reference_t<Container>>, "Must be constructed with rvalue.");

        using value_type = wfc::IKeyValuePair<K, V>;
        using interface_type = wfc::IMapView<K, V>;

        explicit input_map_view(Container&& values) : m_values(std::forward<Container>(values))
        {
        }

        V Lookup(K const& key) const
        {
            auto pair = m_values.find(key);

            if (pair == m_values.end())
            {
                throw hresult_out_of_bounds();
            }

            return pair->second;
        }

        uint32_t Size() const noexcept
        {
            return static_cast<uint32_t>(m_values.size());
        }

        bool HasKey(K const& key) const noexcept
        {
            return m_values.find(key) != m_values.end();
        }

        void Split(interface_type& first, interface_type& second) const noexcept
        {
            first = nullptr;
            second = nullptr;
        }

        wfc::IIterator<value_type> First()
        {
            return make<iterator>(this);
        }

    private:

        Container const m_values;

        struct iterator final : implements<iterator, non_agile, no_weak_ref, wfc::IIterator<value_type>>
        {
            explicit iterator(input_map_view<K, V, Container>* owner) noexcept :
            m_current(owner->m_values.begin()),
                m_end(owner->m_values.end())
            {
                m_owner.copy_from(owner);
            }

            value_type Current() const
            {
                if (m_current == m_end)
                {
                    throw hresult_out_of_bounds();
                }

                return collection_traits<value_type>::copy(*m_current);
            }

            bool HasCurrent() const noexcept
            {
                return m_current != m_end;
            }

            bool MoveNext() noexcept
            {
                if (m_current != m_end)
                {
                    ++m_current;
                }

                return HasCurrent();
            }

            uint32_t GetMany(array_view<value_type> values)
            {
                uint32_t actual = static_cast<uint32_t>(std::distance(m_current, m_end));

                if (actual > values.size())
                {
                    actual = values.size();
                }

                collection_traits<value_type>::copy_n(m_current, actual, values.begin());
                std::advance(m_current, actual);
                return actual;
            }

        private:

            com_ptr<input_map_view<K, V, Container>> m_owner;
            typename Container::const_iterator m_current;
            typename Container::const_iterator const m_end;
        };
    };

    template <typename K, typename V, typename Container>
    struct scoped_input_map_view final : input_scope, implements<scoped_input_map_view<K, V, Container>, non_agile, no_weak_ref, wfc::IMapView<K, V>, wfc::IIterable<wfc::IKeyValuePair<K, V>>>
    {
        using value_type = wfc::IKeyValuePair<K, V>;
        using interface_type = wfc::IMapView<K, V>;

        void abi_enter() const
        {
            check_scope();
        }

        explicit scoped_input_map_view(Container const& values) : m_values(values)
        {
        }

        V Lookup(K const& key) const
        {
            auto pair = m_values.find(key);

            if (pair == m_values.end())
            {
                throw hresult_out_of_bounds();
            }

            return pair->second;
        }

        uint32_t Size() const noexcept
        {
            return static_cast<uint32_t>(m_values.size());
        }

        bool HasKey(K const& key) const noexcept
        {
            return m_values.find(key) != m_values.end();
        }

        void Split(interface_type& first, interface_type& second) const noexcept
        {
            first = nullptr;
            second = nullptr;
        }

        wfc::IIterator<value_type> First()
        {
            return make<iterator>(this);
        }

    private:

        Container const& m_values;

        struct iterator final : implements<iterator, non_agile, no_weak_ref, wfc::IIterator<value_type>>
        {
            void abi_enter() const
            {
                m_owner->check_scope();
            }

            explicit iterator(scoped_input_map_view<K, V, Container>* owner) noexcept :
            m_current(owner->m_values.begin()),
                m_end(owner->m_values.end())
            {
                m_owner.copy_from(owner);
            }

            value_type Current() const
            {
                if (m_current == m_end)
                {
                    throw hresult_out_of_bounds();
                }

                return collection_traits<value_type>::copy(*m_current);
            }

            bool HasCurrent() const noexcept
            {
                return m_current != m_end;
            }

            bool MoveNext() noexcept
            {
                if (m_current != m_end)
                {
                    ++m_current;
                }

                return HasCurrent();
            }

            uint32_t GetMany(array_view<value_type> values)
            {
                uint32_t actual = static_cast<uint32_t>(std::distance(m_current, m_end));

                if (actual > values.size())
                {
                    actual = values.size();
                }

                collection_traits<value_type>::copy_n(m_current, actual, values.begin());
                std::advance(m_current, actual);
                return actual;
            }

        private:

            com_ptr<scoped_input_map_view<K, V, Container>> m_owner;
            typename Container::const_iterator m_current;
            typename Container::const_iterator const m_end;
        };
    };

    template <typename K, typename V, typename Container>
    auto make_input_map_view(Container&& values)
    {
        return make<input_map_view<K, V, Container>>(std::forward<Container>(values));
    }

    template <typename K, typename V, typename Container>
    auto make_scoped_input_map_view(Container const& values)
    {
        using interface_type = wfc::IMapView<K, V>;
        std::pair<interface_type, input_scope*> result;
        auto ptr = new scoped_input_map_view<K, V, Container>(values);
        *put_abi(result.first) = to_abi<interface_type>(ptr);
        result.second = ptr;
        return result;
    }
}

WINRT_EXPORT namespace winrt::param
{
    template <typename K, typename V>
    struct map_view
    {
        using value_type = Windows::Foundation::Collections::IKeyValuePair<K, V>;
        using interface_type = Windows::Foundation::Collections::IMapView<K, V>;

        map_view(std::nullptr_t) noexcept
        {
        }

        map_view(map_view const& values) = delete;
        map_view& operator=(map_view const& values) = delete;

        map_view(interface_type const& values) noexcept : m_owned(false)
        {
            attach_abi(m_pair.first, winrt::get_abi(values));
        }

        template <typename Collection, std::enable_if_t<std::is_convertible_v<Collection, interface_type>>* = nullptr>
        map_view(Collection const& values) noexcept
        {
            m_pair.first = values;
        }

        template <typename Compare, typename Allocator>
        map_view(std::map<K, V, Compare, Allocator>&& values) : m_pair(impl::make_input_map_view<K, V>(std::move(values)), nullptr)
        {
        }

        template <typename Compare, typename Allocator>
        map_view(std::map<K, V, Compare, Allocator> const& values) : m_pair(impl::make_scoped_input_map_view<K, V>(values))
        {
        }

        template <typename Hash, typename KeyEqual, typename Allocator>
        map_view(std::unordered_map<K, V, Hash, KeyEqual, Allocator>&& values) : m_pair(impl::make_input_map_view<K, V>(std::move(values)), nullptr)
        {
        }

        template <typename Hash, typename KeyEqual, typename Allocator>
        map_view(std::unordered_map<K, V, Hash, KeyEqual, Allocator> const& values) : m_pair(impl::make_scoped_input_map_view<K, V>(values))
        {
        }

        map_view(std::initializer_list<std::pair<K const, V>> values) : m_pair(impl::make_input_map_view<K, V>(std::map<K, V>(values)), nullptr)
        {
        }

        ~map_view() noexcept
        {
            if (m_pair.second)
            {
                m_pair.second->invalidate_scope();
            }

            if (!m_owned)
            {
                detach_abi(m_pair.first);
            }
        }

    private:

        std::pair<interface_type, impl::input_scope*> m_pair;
        bool m_owned{ true };
    };

    template <typename K, typename V>
    auto get_abi(map_view<K, V> const& object) noexcept
    {
        return *(::IUnknown**)(&object);
    }

    template <typename K, typename V>
    struct async_map_view
    {
        using value_type = Windows::Foundation::Collections::IKeyValuePair<K, V>;
        using interface_type = Windows::Foundation::Collections::IMapView<K, V>;

        async_map_view(std::nullptr_t) noexcept
        {
        }

        async_map_view(async_map_view const& values) = delete;
        async_map_view& operator=(async_map_view const& values) = delete;

        async_map_view(interface_type const& values) noexcept : m_owned(false)
        {
            attach_abi(m_interface, winrt::get_abi(values));
        }

        template <typename Collection, std::enable_if_t<std::is_convertible_v<Collection, interface_type>>* = nullptr>
        async_map_view(Collection const& values) noexcept
        {
            m_interface = values;
        }

        template <typename Compare, typename Allocator>
        async_map_view(std::map<K, V, Compare, Allocator>&& values) :
            m_interface(impl::make_input_map_view<K, V>(std::move(values)))
        {
        }

        template <typename Hash, typename KeyEqual, typename Allocator>
        async_map_view(std::unordered_map<K, V, Hash, KeyEqual, Allocator>&& values) :
            m_interface(impl::make_input_map_view<K, V>(std::move(values)))
        {
        }

        async_map_view(std::initializer_list<std::pair<K const, V>> values) :
            m_interface(impl::make_input_map_view<K, V>(std::map<K, V>(values)))
        {
        }

        ~async_map_view() noexcept
        {
            if (!m_owned)
            {
                detach_abi(m_interface);
            }
        }

    private:

        interface_type m_interface;
        bool m_owned{ true };
    };

    template <typename K, typename V>
    auto get_abi(async_map_view<K, V> const& object) noexcept
    {
        return *(::IUnknown**)(&object);
    }
}

namespace winrt::impl
{
    template <typename T, typename Container>
    struct input_vector final : implements<input_vector<T, Container>, wfc::IVector<T>, wfc::IVectorView<T>, wfc::IIterable<T>>
    {
        static_assert(std::is_same_v<Container, std::remove_reference_t<Container>>, "Must be constructed with rvalue.");

        explicit input_vector(Container&& values) : m_values(std::forward<Container>(values))
        {
        }

        T GetAt(uint32_t const index) const
        {
            if (index >= m_values.size())
            {
                throw hresult_out_of_bounds();
            }

            return m_values[index];
        }

        uint32_t Size() const noexcept
        {
            return static_cast<uint32_t>(m_values.size());
        }

        wfc::IVectorView<T> GetView()
        {
            return*this;
        }

        bool IndexOf(T const& value, uint32_t& index) const noexcept
        {
            index = static_cast<uint32_t>(std::find(m_values.begin(), m_values.end(), value) - m_values.begin());
            return index < m_values.size();
        }

        void SetAt(uint32_t const index, T const& value)
        {
            if (index >= m_values.size())
            {
                throw hresult_out_of_bounds();
            }

            ++m_version;
            m_values[index] = value;
        }

        void InsertAt(uint32_t const index, T const& value)
        {
            if (index > m_values.size())
            {
                throw hresult_out_of_bounds();
            }

            ++m_version;
            m_values.insert(m_values.begin() + index, value);
        }

        void RemoveAt(uint32_t const index)
        {
            if (index >= m_values.size())
            {
                throw hresult_out_of_bounds();
            }

            ++m_version;
            m_values.erase(m_values.begin() + index);
        }

        void Append(T const& value)
        {
            ++m_version;
            m_values.push_back(value);
        }

        void RemoveAtEnd()
        {
            if (m_values.empty())
            {
                throw hresult_out_of_bounds();
            }

            ++m_version;
            m_values.pop_back();
        }

        void Clear() noexcept
        {
            ++m_version;
            m_values.clear();
        }

        uint32_t GetMany(uint32_t const startIndex, array_view<T> values) const
        {
            if (startIndex >= m_values.size())
            {
                return 0;
            }

            uint32_t actual = static_cast<uint32_t>(m_values.size() - startIndex);

            if (actual > values.size())
            {
                actual = values.size();
            }

            std::copy_n(m_values.begin() + startIndex, actual, values.begin());
            return actual;
        }

        void ReplaceAll(array_view<T const> value)
        {
            ++m_version;
            m_values.assign(value.begin(), value.end());
        }

        wfc::IIterator<T> First()
        {
            return make<iterator>(this);
        }

    private:

        Container m_values;
        uint32_t m_version{};

        struct iterator final : implements<iterator, wfc::IIterator<T>>
        {
            explicit iterator(input_vector<T, Container>* owner) noexcept :
            m_version(owner->m_version),
                m_current(owner->m_values.begin()),
                m_end(owner->m_values.end())
            {
                m_owner.copy_from(owner);
            }

            void abi_enter() const
            {
                if (m_version != m_owner->m_version)
                {
                    throw hresult_changed_state();
                }
            }

            T Current() const
            {
                if (m_current == m_end)
                {
                    throw hresult_out_of_bounds();
                }

                return*m_current;
            }

            bool HasCurrent() const noexcept
            {
                return m_current != m_end;
            }

            bool MoveNext() noexcept
            {
                if (m_current != m_end)
                {
                    ++m_current;
                }

                return HasCurrent();
            }

            uint32_t GetMany(array_view<T> values)
            {
                uint32_t actual = static_cast<uint32_t>(std::distance(m_current, m_end));

                if (actual > values.size())
                {
                    actual = values.size();
                }

                std::copy_n(m_current, actual, values.begin());
                std::advance(m_current, actual);
                return actual;
            }

        private:

            com_ptr<input_vector<T, Container>> m_owner;
            uint32_t const m_version;
            typename Container::const_iterator m_current;
            typename Container::const_iterator const m_end;
        };
    };
}

WINRT_EXPORT namespace winrt::param
{
    template <typename T>
    struct vector
    {
        using value_type = T;
        using interface_type = Windows::Foundation::Collections::IVector<value_type>;

        vector(std::nullptr_t) noexcept
        {
        }

        vector(vector const& values) = delete;
        vector& operator=(vector const& values) = delete;

        vector(interface_type const& values) noexcept : m_owned(false)
        {
            attach_abi(m_interface, winrt::get_abi(values));
        }

        template <typename Collection, std::enable_if_t<std::is_convertible_v<Collection, interface_type>>* = nullptr>
        vector(Collection const& values) noexcept
        {
            m_interface = values;
        }

        template <typename Allocator>
        vector(std::vector<value_type, Allocator>&& values) :
            m_interface(make<impl::input_vector<value_type, std::vector<value_type, Allocator>>>(std::move(values)))
        {
        }

        vector(std::initializer_list<value_type> values) :
            m_interface(make<impl::input_vector<value_type, std::vector<value_type>>>(values))
        {
        }

        ~vector() noexcept
        {
            if (!m_owned)
            {
                detach_abi(m_interface);
            }
        }

    private:

        interface_type m_interface;
        bool m_owned{ true };
    };

    template <typename T>
    auto get_abi(vector<T> const& object) noexcept
    {
        return *(::IUnknown**)(&object);
    }
}

namespace winrt::impl
{
    template <typename K, typename V, typename Container>
    struct input_map final : implements<input_map<K, V, Container>, wfc::IMap<K, V>, wfc::IMapView<K, V>, wfc::IIterable<wfc::IKeyValuePair<K, V>>>
    {
        static_assert(std::is_same_v<Container, std::remove_reference_t<Container>>, "Must be constructed with rvalue.");

        using value_type = wfc::IKeyValuePair<K, V>;

        explicit input_map(Container&& values) : m_values(std::forward<Container>(values))
        {
        }

        V Lookup(K const& key) const
        {
            auto pair = m_values.find(key);

            if (pair == m_values.end())
            {
                throw hresult_out_of_bounds();
            }

            return pair->second;
        }

        uint32_t Size() const noexcept
        {
            return static_cast<uint32_t>(m_values.size());
        }

        bool HasKey(K const& key) const noexcept
        {
            return m_values.find(key) != m_values.end();
        }

        wfc::IMapView<K, V> GetView() const
        {
            return*this;
        }

        bool Insert(K const& key, V const& value)
        {
            ++m_version;
            auto pair = m_values.insert_or_assign(key, value);
            return !pair.second;

        }

        void Remove(K const& key)
        {
            ++m_version;
            m_values.erase(key);
        }

        void Clear() noexcept
        {
            ++m_version;
            m_values.clear();
        }

        void Split(wfc::IMapView<K, V>& first, wfc::IMapView<K, V>& second) const noexcept
        {
            first = nullptr;
            second = nullptr;
        }

        wfc::IIterator<value_type> First()
        {
            return make<iterator>(this);
        }

    private:

        Container m_values;
        uint32_t m_version{};

        struct iterator final : implements<iterator, wfc::IIterator<value_type>>
        {
            explicit iterator(input_map<K, V, Container>* owner) noexcept :
            m_version(owner->m_version),
                m_current(owner->m_values.begin()),
                m_end(owner->m_values.end())
            {
                m_owner.copy_from(owner);
            }

            void abi_enter() const
            {
                if (m_version != m_owner->m_version)
                {
                    throw hresult_changed_state();
                }
            }

            value_type Current() const
            {
                if (m_current == m_end)
                {
                    throw hresult_out_of_bounds();
                }

                return collection_traits<value_type>::copy(*m_current);
            }

            bool HasCurrent() const noexcept
            {
                return m_current != m_end;
            }

            bool MoveNext() noexcept
            {
                if (m_current != m_end)
                {
                    ++m_current;
                }

                return HasCurrent();
            }

            uint32_t GetMany(array_view<value_type> values)
            {
                uint32_t actual = static_cast<uint32_t>(std::distance(m_current, m_end));

                if (actual > values.size())
                {
                    actual = values.size();
                }

                collection_traits<value_type>::copy_n(m_current, actual, values.begin());
                std::advance(m_current, actual);
                return actual;
            }

        private:

            com_ptr<input_map<K, V, Container>> m_owner;
            uint32_t const m_version;
            typename Container::const_iterator m_current;
            typename Container::const_iterator const m_end;
        };
    };

    template <typename K, typename V, typename Container>
    auto make_input_map(Container&& values)
    {
        return make<input_map<K, V, Container>>(std::forward<Container>(values));
    }
}

WINRT_EXPORT namespace winrt::param
{
    template <typename K, typename V>
    struct map
    {
        using value_type = Windows::Foundation::Collections::IKeyValuePair<K, V>;
        using interface_type = Windows::Foundation::Collections::IMap<K, V>;

        map(std::nullptr_t) noexcept
        {
        }

        map(map const& values) = delete;
        map& operator=(map const& values) = delete;

        map(interface_type const& values) noexcept : m_owned(false)
        {
            attach_abi(m_interface, winrt::get_abi(values));
        }

        template <typename Collection, std::enable_if_t<std::is_convertible_v<Collection, interface_type>>* = nullptr>
        map(Collection const& values) noexcept
        {
            m_interface = values;
        }

        template <typename Compare, typename Allocator>
        map(std::map<K, V, Compare, Allocator>&& values) :
            m_interface(impl::make_input_map<K, V>(std::move(values)))
        {
        }

        template <typename Hash, typename KeyEqual, typename Allocator>
        map(std::unordered_map<K, V, Hash, KeyEqual, Allocator>&& values) :
            m_interface(impl::make_input_map<K, V>(std::move(values)))
        {
        }

        map(std::initializer_list<std::pair<K const, V>> values) :
            m_interface(impl::make_input_map<K, V>(std::map<K, V>(values)))
        {
        }

        ~map() noexcept
        {
            if (!m_owned)
            {
                detach_abi(m_interface);
            }
        }

    private:

        interface_type m_interface;
        bool m_owned{ true };
    };

    template <typename K, typename V>
    auto get_abi(map<K, V> const& object) noexcept
    {
        return *(::IUnknown**)(&object);
    }
}

WINRT_EXPORT namespace winrt
{
    template <typename T, typename Allocator = std::allocator<T>>
    Windows::Foundation::Collections::IVector<T> single_threaded_vector(std::vector<T, Allocator>&& values = {})
    {
        return make<impl::input_vector<T, std::vector<T, Allocator>>>(std::move(values));
    }
}

WINRT_EXPORT namespace winrt
{
    template <typename K, typename V, typename Compare = std::less<K>, typename Allocator = std::allocator<std::pair<K const, V>>>
    Windows::Foundation::Collections::IMap<K, V> single_threaded_map()
    {
        return make<impl::input_map<K, V, std::map<K, V, Compare, Allocator>>>(std::map<K, V, Compare, Allocator>{});
    }

    template <typename K, typename V, typename Compare = std::less<K>, typename Allocator = std::allocator<std::pair<K const, V>>>
    Windows::Foundation::Collections::IMap<K, V> single_threaded_map(std::map<K, V, Compare, Allocator>&& values)
    {
        return make<impl::input_map<K, V, std::map<K, V, Compare, Allocator>>>(std::move(values));
    }

    template <typename K, typename V, typename Hash = std::hash<K>, typename KeyEqual = std::equal_to<K>, typename Allocator = std::allocator<std::pair<K const, V>>>
    Windows::Foundation::Collections::IMap<K, V> single_threaded_map(std::unordered_map<K, V, Hash, KeyEqual, Allocator>&& values)
    {
        return make<impl::input_map<K, V, std::unordered_map<K, V, Hash, KeyEqual, Allocator>>>(std::move(values));
    }
}

WINRT_EXPORT namespace winrt::Windows::Foundation
{
    template <typename T> struct IReference;
}

namespace winrt::impl
{
    template <typename T>
    struct abi<Windows::Foundation::IReference<T>>
    {
        struct __declspec(novtable) type : IInspectable
        {
            virtual HRESULT __stdcall get_Value(arg_out<T> value) noexcept = 0;
        };
    };

    template <typename D, typename T>
    struct consume_IReference
    {
        T Value() const
        {
            T result{};
            check_hresult((*(abi_t<Windows::Foundation::IReference<T>>**)&static_cast<const Windows::Foundation::IReference<T>&>(static_cast<const D&>(*this)))->get_Value(put_abi(result)));
            return result;
        }
    };

    template <typename T>
    struct consume<Windows::Foundation::IReference<T>>
    {
        template <typename D> using type = consume_IReference<D, T>;
    };

    template <typename T>
    struct guid<Windows::Foundation::IReference<T>>
    {
        static constexpr GUID value{ pinterface_guid<Windows::Foundation::IReference<T>>::value };
    };

    template <typename T> 
    struct name<Windows::Foundation::IReference<T>>
    {
        static constexpr auto value{ L"Windows.Foundation.IReference`1<" + to_array(name_v<T>) + L">" };
    };

    template <typename T>
    struct category<Windows::Foundation::IReference<T>>
    {
        using type = pinterface_category<T>;
        static constexpr GUID value{ 0x61c17706, 0x2d65, 0x11e0,{ 0x9a, 0xe8, 0xd4, 0x85, 0x64, 0x01, 0x54, 0x72 } };
    };
}

WINRT_EXPORT namespace winrt
{
    template <typename T>
    using optional = Windows::Foundation::IReference<T>;
}

WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct Point
    {
        float X;
        float Y;

        Point() noexcept = default;

        constexpr Point(float X, float Y) noexcept
            : X(X), Y(Y)
        {}

        constexpr Point(Numerics::float2 const& value) noexcept
            : X(value.x), Y(value.y)
        {}

        operator Numerics::float2() const noexcept
        {
            return { X, Y };
        }
    };

    constexpr bool operator==(Point const& left, Point const& right) noexcept
    {
        return left.X == right.X && left.Y == right.Y;
    }

    constexpr bool operator!=(Point const& left, Point const& right) noexcept
    {
        return !(left == right);
    }

    struct Size
    {
        float Width;
        float Height;

        Size() noexcept = default;

        constexpr Size(float Width, float Height) noexcept
            : Width(Width), Height(Height)
        {}

        constexpr Size(Numerics::float2 const& value) noexcept
            : Width(value.x), Height(value.y)
        {}

        operator Numerics::float2() const noexcept
        {
            return { Width, Height };
        }
    };

    constexpr bool operator==(Size const& left, Size const& right) noexcept
    {
        return left.Width == right.Width && left.Height == right.Height;
    }

    constexpr bool operator!=(Size const& left, Size const& right) noexcept
    {
        return !(left == right);
    }

    struct Rect
    {
        float X;
        float Y;
        float Width;
        float Height;

        Rect() noexcept = default;

        constexpr Rect(float X, float Y, float Width, float Height) noexcept :
            X(X), Y(Y), Width(Width), Height(Height)
        {}

        constexpr Rect(Point const& point, Size const& size)  noexcept :
            X(point.X), Y(point.Y), Width(size.Width), Height(size.Height)
        {}
    };

    constexpr bool operator==(Rect const& left, Rect const& right) noexcept
    {
        return left.X == right.X && left.Y == right.Y && left.Width == right.Width && left.Height == right.Height;
    }

    constexpr bool operator!=(Rect const& left, Rect const& right) noexcept
    {
        return !(left == right);
    }
}

namespace winrt::impl
{
    template <> struct name<Windows::Foundation::Point>
    {
        static constexpr auto & value{ L"Windows.Foundation.Point" };
    };

    template <> struct category<Windows::Foundation::Point>
    {
        using type = struct_category<float, float>;
    };

    template <> struct name<Windows::Foundation::Size>
    {
        static constexpr auto & value{ L"Windows.Foundation.Size" };
    };

    template <> struct category<Windows::Foundation::Size>
    {
        using type = struct_category<float, float>;
    };
    
    template <> struct name<Windows::Foundation::Rect>
    {
        static constexpr auto & value{ L"Windows.Foundation.Rect" };
    };

    template <> struct category<Windows::Foundation::Rect>
    {
        using type = struct_category<float, float, float, float>;
    };

    template <> struct name<Windows::Foundation::Numerics::float2>
    {
        static constexpr auto & value{ L"Windows.Foundation.Numerics.Vector2" };
    };

    template <> struct category<Windows::Foundation::Numerics::float2>
    {
        using type = struct_category<float, float>;
    };

    template <> struct name<Windows::Foundation::Numerics::float3>
    {
        static constexpr auto & value{ L"Windows.Foundation.Numerics.Vector3" };
    };

    template <> struct category<Windows::Foundation::Numerics::float3>
    {
        using type = struct_category<float, float, float>;
    };

    template <> struct name<Windows::Foundation::Numerics::float4>
    {
        static constexpr auto & value{ L"Windows.Foundation.Numerics.Vector4" };
    };

    template <> struct category<Windows::Foundation::Numerics::float4>
    {
        using type = struct_category<float, float, float, float>;
    };

    template <> struct name<Windows::Foundation::Numerics::float3x2>
    {
        static constexpr auto & value{ L"Windows.Foundation.Numerics.Matrix3x2" };
    };

    template <> struct category<Windows::Foundation::Numerics::float3x2>
    {
        using type = struct_category<float, float, float, float, float, float>;
    };

    template <> struct name<Windows::Foundation::Numerics::float4x4>
    {
        static constexpr auto & value{ L"Windows.Foundation.Numerics.Matrix4x4" };
    };

    template <> struct category<Windows::Foundation::Numerics::float4x4>
    {
        using type = struct_category<
            float, float, float, float,
            float, float, float, float,
            float, float, float, float,
            float, float, float, float
        >;
    };

    template <> struct name<Windows::Foundation::Numerics::quaternion>
    {
        static constexpr auto & value{ L"Windows.Foundation.Numerics.Quaternion" };
    };

    template <> struct category<Windows::Foundation::Numerics::quaternion>
    {
        using type = struct_category<float, float, float, float>;
    };

    template <> struct name<Windows::Foundation::Numerics::plane>
    {
        static constexpr auto & value{ L"Windows.Foundation.Numerics.Plane" };
    };

    template <> struct category<Windows::Foundation::Numerics::plane>
    {
        using type = struct_category<Windows::Foundation::Numerics::float3, float>;
    };
}

namespace winrt::impl
{
    using filetime_period = std::ratio_multiply<std::ratio<100>, std::nano>;
}

WINRT_EXPORT namespace winrt
{
    struct clock;

    namespace Windows::Foundation
    {
        using TimeSpan = std::chrono::duration<int64_t, impl::filetime_period>;
        using DateTime = std::chrono::time_point<clock, TimeSpan>;
    }
}

namespace winrt::impl
{
    template <> struct name<Windows::Foundation::TimeSpan>
    {
        static constexpr auto & value{ L"Windows.Foundation.TimeSpan" };
    };

    template <> struct category<Windows::Foundation::TimeSpan>
    {
        using type = struct_category<int64_t>;
    };

    template <> struct name<Windows::Foundation::DateTime>
    {
        static constexpr auto & value{ L"Windows.Foundation.DateTime" };
    };

    template <> struct category<Windows::Foundation::DateTime>
    {
        using type = struct_category<int64_t>;
    };
}

WINRT_EXPORT namespace winrt
{
    struct clock
    {
        using rep = int64_t;
        using period = impl::filetime_period;
        using duration = Windows::Foundation::TimeSpan;
        using time_point = Windows::Foundation::DateTime;

        static constexpr bool is_steady = false;

        static time_point now() noexcept
        {
            FILETIME ft;
            ::GetSystemTimePreciseAsFileTime(&ft);
            return from_FILETIME(ft);
        }

        static time_t to_time_t(time_point const& time) noexcept
        {
            return std::chrono::duration_cast<time_t_duration>(time - time_t_epoch).count();
        }

        static time_point from_time_t(time_t time) noexcept
        {
            return time_t_epoch + time_t_duration{ time };
        }

        // FILETIME is identical to WinRT's DateTime, save for the fact that it's unsigned.
        // Detect mismatch, but this only matters for dates before 27000 BC or after 29000 AD.
        static FILETIME to_FILETIME(time_point const& time) noexcept
        {
            ULARGE_INTEGER ul;
            ul.QuadPart = time.time_since_epoch().count();
            WINRT_ASSERT(static_cast<int32_t>(ul.HighPart) >= 0);
            return FILETIME{ ul.LowPart, ul.HighPart };
        }

        static time_point from_FILETIME(FILETIME const& time) noexcept
        {
            ULARGE_INTEGER ul{ { time.dwLowDateTime, time.dwHighDateTime } };
            WINRT_ASSERT(static_cast<int32_t>(ul.HighPart) >= 0);
            return time_point{ duration{ ul.QuadPart } };
        }

    private:

        // Define 00:00:00, Jan 1 1970 UTC in FILETIME units.
        static constexpr time_point time_t_epoch{ duration{ 0x019DB1DED53E8000 } };
        using time_t_duration = std::chrono::duration<time_t>;
    };
}

WINRT_EXPORT namespace winrt
{
    struct access_token : handle
    {
        static access_token process()
        {
            access_token token;
            check_bool(OpenProcessToken(GetCurrentProcess(), TOKEN_DUPLICATE, token.put()));
            access_token duplicate;
            check_bool(DuplicateToken(token.get(), SecurityImpersonation, duplicate.put()));
            return duplicate;
        }

        static access_token thread()
        {
            access_token token;

            if (!OpenThreadToken(GetCurrentThread(), TOKEN_IMPERSONATE, TRUE, token.put()))
            {
                DWORD const error = GetLastError();

                if (error != ERROR_NO_TOKEN)
                {
                    throw_hresult(HRESULT_FROM_WIN32(error));
                }
            }

            return token;
        }

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
        static access_token client()
        {
            struct impersonate_guard
            {
                impersonate_guard(com_ptr<IServerSecurity> const& server) : m_server(server)
                {
                    check_hresult(m_server->ImpersonateClient());
                }

                ~impersonate_guard()
                {
                    check_hresult(m_server->RevertToSelf());
                }

            private:

                com_ptr<IServerSecurity> const& m_server;
            };

            com_ptr<IServerSecurity> server;
            check_hresult(CoGetCallContext(__uuidof(server), server.put_void()));
            impersonate_guard impersonate(server);
            return thread();
        }
#endif

        access_token() = default;
        access_token(access_token&& other) = default;
        access_token& operator=(access_token&& other) = default;

        access_token impersonate() const
        {
            auto previous = thread();
            check_bool(SetThreadToken(nullptr, get()));
            return previous;
        }

        void revert() const
        {
            check_bool(SetThreadToken(nullptr, get()));
        }

        auto operator()() const
        {
            struct guard
            {
                guard(access_token&& previous) noexcept : m_previous(std::move(previous))
                {
                }

                ~guard()
                {
                    m_previous.revert();
                }

                guard(guard const&)
                {
                    // A Visual C++ compiler bug (550631) requires the copy constructor even though it is never called.
                    WINRT_ASSERT(false);
                }

            private:

                access_token const m_previous;
            };

            return guard(impersonate());
        }
    };
}

WINRT_EXPORT namespace winrt::Windows::Foundation
{
    enum class AsyncStatus : int32_t
    {
        Started,
        Completed,
        Canceled,
        Error,
    };

    struct AsyncActionCompletedHandler;
    template <typename TResult> struct AsyncOperationCompletedHandler;
    template <typename TProgress> struct AsyncActionProgressHandler;
    template <typename TProgress> struct AsyncActionWithProgressCompletedHandler;
    template <typename TResult, typename TProgress> struct AsyncOperationProgressHandler;
    template <typename TResult, typename TProgress> struct AsyncOperationWithProgressCompletedHandler;

    struct IAsyncInfo;
    struct IAsyncAction;
    template <typename TResult> struct IAsyncOperation;
    template <typename TProgress> struct IAsyncActionWithProgress;
    template <typename TResult, typename TProgress> struct IAsyncOperationWithProgress;
}

namespace winrt::impl
{
    inline bool is_sta() noexcept
    {
        APTTYPE aptType;
        APTTYPEQUALIFIER aptTypeQualifier;
        return (S_OK == CoGetApartmentType(&aptType, &aptTypeQualifier)) && ((aptType == APTTYPE_STA) || (aptType == APTTYPE_MAINSTA));
    }

    template <typename Async>
    void blocking_suspend(Async const& async)
    {
        WINRT_ASSERT(!is_sta());

        if (async.Status() == Windows::Foundation::AsyncStatus::Completed)
        {
            return;
        }

        slim_mutex m;
        slim_condition_variable cv;
        bool completed = false;
        async.Completed([&](Async const&, Windows::Foundation::AsyncStatus)
        {
            {
                slim_lock_guard const guard(m);
                completed = true;
            }
            cv.notify_one();
        });

        slim_lock_guard guard(m);
        cv.wait(m, [&] { return completed; }); 
    }

    template <typename D>
    struct consume_IAsyncInfo
    {
        uint32_t Id() const;
        Windows::Foundation::AsyncStatus Status() const;
        HRESULT ErrorCode() const;
        void Cancel() const;
        void Close() const;
    };


    template <typename D>
    struct consume_IAsyncAction
    {
        void Completed(Windows::Foundation::AsyncActionCompletedHandler const& handler) const;
        Windows::Foundation::AsyncActionCompletedHandler Completed() const;
        void GetResults() const;
        void get() const;
    };

    template <typename D, typename TResult>
    struct consume_IAsyncOperation
    {
        void Completed(Windows::Foundation::AsyncOperationCompletedHandler<TResult> const& handler) const;
        Windows::Foundation::AsyncOperationCompletedHandler<TResult> Completed() const;
        TResult GetResults() const;
        TResult get() const;
    };

    template <typename D, typename TProgress>
    struct consume_IAsyncActionWithProgress
    {
        void Progress(Windows::Foundation::AsyncActionProgressHandler<TProgress> const& handler) const;
        Windows::Foundation::AsyncActionProgressHandler<TProgress> Progress() const;
        void Completed(Windows::Foundation::AsyncActionWithProgressCompletedHandler<TProgress> const& handler) const;
        Windows::Foundation::AsyncActionWithProgressCompletedHandler<TProgress> Completed() const;
        void GetResults() const;
        void get() const;
    };

    template <typename D, typename TResult, typename TProgress>
    struct consume_IAsyncOperationWithProgress
    {
        void Progress(Windows::Foundation::AsyncOperationProgressHandler<TResult, TProgress> const& handler) const;
        Windows::Foundation::AsyncOperationProgressHandler<TResult, TProgress> Progress() const;
        void Completed(Windows::Foundation::AsyncOperationWithProgressCompletedHandler<TResult, TProgress> const& handler) const;
        Windows::Foundation::AsyncOperationWithProgressCompletedHandler<TResult, TProgress> Completed() const;
        TResult GetResults() const;
        TResult get() const;
    };

    template <>
    struct abi<Windows::Foundation::AsyncActionCompletedHandler>
    {
        struct type : IUnknown
        {
            virtual HRESULT __stdcall Invoke(void* asyncInfo, Windows::Foundation::AsyncStatus asyncStatus) noexcept = 0;
        };
    };

    template <typename TResult>
    struct abi<Windows::Foundation::AsyncOperationCompletedHandler<TResult>>
    {
        struct type : IUnknown
        {
            virtual HRESULT __stdcall Invoke(void* asyncInfo, Windows::Foundation::AsyncStatus status) noexcept = 0;
        };
    };

    template <typename TProgress>
    struct abi<Windows::Foundation::AsyncActionProgressHandler<TProgress>>
    {
        struct type : IUnknown
        {
            virtual HRESULT __stdcall Invoke(void* asyncInfo, arg_in<TProgress> progressInfo) noexcept = 0;
        };
    };

    template <typename TProgress>
    struct abi<Windows::Foundation::AsyncActionWithProgressCompletedHandler<TProgress>>
    {
        struct type : IUnknown
        {
            virtual HRESULT __stdcall Invoke(void* asyncInfo, Windows::Foundation::AsyncStatus status) noexcept = 0;
        };
    };

    template <typename TResult, typename TProgress>
    struct abi<Windows::Foundation::AsyncOperationProgressHandler<TResult, TProgress>>
    {
        struct type : IUnknown
        {
            virtual HRESULT __stdcall Invoke(void* asyncInfo, arg_in<TProgress> progressInfo) noexcept = 0;
        };
    };

    template <typename TResult, typename TProgress>
    struct abi<Windows::Foundation::AsyncOperationWithProgressCompletedHandler<TResult, TProgress>>
    {
        struct type : IUnknown
        {
            virtual HRESULT __stdcall Invoke(void* asyncInfo, Windows::Foundation::AsyncStatus status) noexcept = 0;
        };
    };

    template <>
    struct abi<Windows::Foundation::IAsyncInfo>
    {
        struct __declspec(novtable) type : IInspectable
        {
            virtual HRESULT __stdcall get_Id(uint32_t* id) noexcept = 0;
            virtual HRESULT __stdcall get_Status(Windows::Foundation::AsyncStatus* status) noexcept = 0;
            virtual HRESULT __stdcall get_ErrorCode(HRESULT* errorCode) noexcept = 0;
            virtual HRESULT __stdcall Cancel() noexcept = 0;
            virtual HRESULT __stdcall Close() noexcept = 0;
        };
    };

    template <>
    struct consume<Windows::Foundation::IAsyncInfo>
    {
        template <typename D> using type = consume_IAsyncInfo<D>;
    };

    template <>
    struct abi<Windows::Foundation::IAsyncAction>
    {
        struct type : IInspectable
        {
            virtual HRESULT __stdcall put_Completed(void* handler) noexcept = 0;
            virtual HRESULT __stdcall get_Completed(void** handler) noexcept = 0;
            virtual HRESULT __stdcall GetResults() noexcept = 0;
        };
    };

    template <>
    struct consume<Windows::Foundation::IAsyncAction>
    {
        template <typename D> using type = consume_IAsyncAction<D>;
    };

    template <>
    struct delegate<Windows::Foundation::AsyncActionCompletedHandler>
    {
        template <typename H>
        struct type final : implements_delegate<Windows::Foundation::AsyncActionCompletedHandler, H>
        {
            type(H&& handler) : implements_delegate<Windows::Foundation::AsyncActionCompletedHandler, H>(std::forward<H>(handler)) {}

            HRESULT __stdcall Invoke(void* asyncInfo, Windows::Foundation::AsyncStatus asyncStatus) noexcept final
            {
                try
                {
                    (*this)(*reinterpret_cast<Windows::Foundation::IAsyncAction const*>(&asyncInfo), asyncStatus);
                    return S_OK;
                }
                catch (...)
                {
                    return to_hresult();
                }
            }
        };
    };

    template <typename TResult>
    struct delegate<Windows::Foundation::AsyncOperationCompletedHandler<TResult>>
    {
        template <typename H>
        struct type final : implements_delegate<Windows::Foundation::AsyncOperationCompletedHandler<TResult>, H>
        {
            type(H&& handler) : implements_delegate<Windows::Foundation::AsyncOperationCompletedHandler<TResult>, H>(std::forward<H>(handler)) {}

            HRESULT __stdcall Invoke(void* sender, Windows::Foundation::AsyncStatus args) noexcept final
            {
                try
                {
                    (*this)(*reinterpret_cast<Windows::Foundation::IAsyncOperation<TResult> const*>(&sender), args);
                    return S_OK;
                }
                catch (...) { return to_hresult(); }
            }
        };
    };

    template <typename TProgress>
    struct delegate<Windows::Foundation::AsyncActionProgressHandler<TProgress>>
    {
        template <typename H>
        struct type final : implements_delegate<Windows::Foundation::AsyncActionProgressHandler<TProgress>, H>
        {
            type(H&& handler) : implements_delegate<Windows::Foundation::AsyncActionProgressHandler<TProgress>, H>(std::forward<H>(handler)) {}

            HRESULT __stdcall Invoke(void* sender, arg_in<TProgress> args) noexcept final
            {
                try
                {
                    (*this)(*reinterpret_cast<Windows::Foundation::IAsyncActionWithProgress<TProgress> const*>(&sender), *reinterpret_cast<TProgress const*>(&args));
                    return S_OK;
                }
                catch (...) { return to_hresult(); }
            }
        };
    };

    template <typename TProgress>
    struct delegate<Windows::Foundation::AsyncActionWithProgressCompletedHandler<TProgress>>
    {
        template <typename H>
        struct type final : implements_delegate<Windows::Foundation::AsyncActionWithProgressCompletedHandler<TProgress>, H>
        {
            type(H&& handler) : implements_delegate<Windows::Foundation::AsyncActionWithProgressCompletedHandler<TProgress>, H>(std::forward<H>(handler)) {}

            HRESULT __stdcall Invoke(void* sender, Windows::Foundation::AsyncStatus args) noexcept final
            {
                try
                {
                    (*this)(*reinterpret_cast<Windows::Foundation::IAsyncActionWithProgress<TProgress> const*>(&sender), args);
                    return S_OK;
                }
                catch (...) { return to_hresult(); }
            }
        };
    };

    template <typename TResult, typename TProgress>
    struct delegate<Windows::Foundation::AsyncOperationProgressHandler<TResult, TProgress>>
    {
        template <typename H>
        struct type final : implements_delegate<Windows::Foundation::AsyncOperationProgressHandler<TResult, TProgress>, H>
        {
            type(H&& handler) : implements_delegate<Windows::Foundation::AsyncOperationProgressHandler<TResult, TProgress>, H>(std::forward<H>(handler)) {}

            HRESULT __stdcall Invoke(void* sender, arg_in<TProgress> args) noexcept final
            {
                try
                {
                    (*this)(*reinterpret_cast<Windows::Foundation::IAsyncOperationWithProgress<TResult, TProgress> const*>(&sender), *reinterpret_cast<TProgress const*>(&args));
                    return S_OK;
                }
                catch (...) { return to_hresult(); }
            }
        };
    };

    template <typename TResult, typename TProgress>
    struct delegate<Windows::Foundation::AsyncOperationWithProgressCompletedHandler<TResult, TProgress>>
    {
        template <typename H>
        struct type final : implements_delegate<Windows::Foundation::AsyncOperationWithProgressCompletedHandler<TResult, TProgress>, H>
        {
            type(H&& handler) : implements_delegate<Windows::Foundation::AsyncOperationWithProgressCompletedHandler<TResult, TProgress>, H>(std::forward<H>(handler)) {}

            HRESULT __stdcall Invoke(void* sender, Windows::Foundation::AsyncStatus args) noexcept final
            {
                try
                {
                    (*this)(*reinterpret_cast<Windows::Foundation::IAsyncOperationWithProgress<TResult, TProgress> const*>(&sender), args);
                    return S_OK;
                }
                catch (...) { return to_hresult(); }
            }
        };
    };

    template <typename TResult>
    struct abi<Windows::Foundation::IAsyncOperation<TResult>>
    {
        struct __declspec(novtable) type : IInspectable
        {
            virtual HRESULT __stdcall put_Completed(void* handler) noexcept = 0;
            virtual HRESULT __stdcall get_Completed(void** handler) noexcept = 0;
            virtual HRESULT __stdcall GetResults(arg_out<TResult> results) noexcept = 0;
        };
    };

    template <typename TResult>
    struct consume<Windows::Foundation::IAsyncOperation<TResult>>
    {
        template <typename D> using type = consume_IAsyncOperation<D, TResult>;
    };

    template <typename TProgress>
    struct abi<Windows::Foundation::IAsyncActionWithProgress<TProgress>>
    {
        struct __declspec(novtable) type : IInspectable
        {
            virtual HRESULT __stdcall put_Progress(void* handler) noexcept = 0;
            virtual HRESULT __stdcall get_Progress(void** handler) noexcept = 0;
            virtual HRESULT __stdcall put_Completed(void* handler) noexcept = 0;
            virtual HRESULT __stdcall get_Completed(void** handler) noexcept = 0;
            virtual HRESULT __stdcall GetResults() noexcept = 0;
        };
    };

    template <typename TProgress>
    struct consume<Windows::Foundation::IAsyncActionWithProgress<TProgress>>
    {
        template <typename D> using type = consume_IAsyncActionWithProgress<D, TProgress>;
    };

    template <typename TResult, typename TProgress>
    struct abi<Windows::Foundation::IAsyncOperationWithProgress<TResult, TProgress>>
    {
        struct __declspec(novtable) type : IInspectable
        {
            virtual HRESULT __stdcall put_Progress(void* handler) noexcept = 0;
            virtual HRESULT __stdcall get_Progress(void** handler) noexcept = 0;
            virtual HRESULT __stdcall put_Completed(void* handler) noexcept = 0;
            virtual HRESULT __stdcall get_Completed(void** handler) noexcept = 0;
            virtual HRESULT __stdcall GetResults(arg_out<TResult> results) noexcept = 0;
        };
    };

    template <typename TResult, typename TProgress>
    struct consume<Windows::Foundation::IAsyncOperationWithProgress<TResult, TProgress>>
    {
        template <typename D> using type = consume_IAsyncOperationWithProgress<D, TResult, TProgress>;
    };

    template <>
    struct guid<Windows::Foundation::AsyncActionCompletedHandler>
    {
        static constexpr GUID value{ 0xA4ED5C81,0x76C9,0x40BD,{ 0x8B,0xE6,0xB1,0xD9,0x0F,0xB2,0x0A,0xE7 } };
    };
    
    template <> 
    struct name<Windows::Foundation::AsyncActionCompletedHandler>
    {
        static constexpr auto & value{ L"Windows.Foundation.AsyncActionCompletedHandler" };
    };

    template <>
    struct category<Windows::Foundation::AsyncActionCompletedHandler>
    {
        using type = delegate_category;
    };

    template <typename TResult>
    struct guid<Windows::Foundation::AsyncOperationCompletedHandler<TResult>>
    {
        static constexpr GUID value{ pinterface_guid<Windows::Foundation::AsyncOperationCompletedHandler<TResult>>::value };
    };

    template <typename TResult>
    struct name<Windows::Foundation::AsyncOperationCompletedHandler<TResult>>
    {
        static constexpr auto value{ L"Windows.Foundation.AsyncOperationCompletedHandler`1<" + to_array(name_v<TResult>) + L">" };
    };

    template <typename TResult>
    struct category<Windows::Foundation::AsyncOperationCompletedHandler<TResult>>
    {
        using type = pinterface_category<TResult>;
        static constexpr GUID value{ 0xfcdcf02c, 0xe5d8, 0x4478,{ 0x91, 0x5a, 0x4d, 0x90, 0xb7, 0x4b, 0x83, 0xa5 } };
    };

    template <typename TProgress>
    struct guid<Windows::Foundation::AsyncActionWithProgressCompletedHandler<TProgress>>
    {
        static constexpr GUID value{ pinterface_guid<Windows::Foundation::AsyncActionWithProgressCompletedHandler<TProgress>>::value };
    };

    template <typename TProgress>
    struct name<Windows::Foundation::AsyncActionWithProgressCompletedHandler<TProgress>>
    {
        static constexpr auto value{ L"Windows.Foundation.AsyncActionWithProgressCompletedHandler`1<" + to_array(name_v<TProgress>) + L">" };
    };

    template <typename TProgress>
    struct category<Windows::Foundation::AsyncActionWithProgressCompletedHandler<TProgress>>
    {
        using type = pinterface_category<TProgress>;
        static constexpr GUID value{ 0x9c029f91, 0xcc84, 0x44fd,{ 0xac, 0x26, 0x0a, 0x6c, 0x4e, 0x55, 0x52, 0x81 } };
    };

    template <typename TProgress>
    struct guid<Windows::Foundation::AsyncActionProgressHandler<TProgress>>
    {
        static constexpr GUID value{ pinterface_guid<Windows::Foundation::AsyncActionProgressHandler<TProgress>>::value };
    };

    template <typename TProgress>
    struct name<Windows::Foundation::AsyncActionProgressHandler<TProgress>>
    {
        static constexpr auto value{ L"Windows.Foundation.AsyncActionProgressHandler`1<" + to_array(name_v<TProgress>) + L">" };
    };

    template <typename TProgress>
    struct category<Windows::Foundation::AsyncActionProgressHandler<TProgress>>
    {
        using type = pinterface_category<TProgress>;
        static constexpr GUID value{ 0x6d844858, 0x0cff, 0x4590,{ 0xae, 0x89, 0x95, 0xa5, 0xa5, 0xc8, 0xb4, 0xb8 } };
    };

    template <typename TResult, typename TProgress>
    struct guid<Windows::Foundation::AsyncOperationProgressHandler<TResult, TProgress>>
    {
        static constexpr GUID value{ pinterface_guid<Windows::Foundation::AsyncOperationProgressHandler<TResult, TProgress>>::value };
    };

    template <typename TResult, typename TProgress>
    struct name<Windows::Foundation::AsyncOperationProgressHandler<TResult, TProgress>>
    {
        static constexpr auto value{ L"Windows.Foundation.AsyncOperationProgressHandler`2<" + to_array(name_v<TResult>) + L", " + to_array(name_v<TProgress>) + L">" };
    };

    template <typename TResult, typename TProgress>
    struct category<Windows::Foundation::AsyncOperationProgressHandler<TResult, TProgress>>
    {
        using type = pinterface_category<TResult, TProgress>;
        static constexpr GUID value{ 0x55690902, 0x0aab, 0x421a,{ 0x87, 0x78, 0xf8, 0xce, 0x50, 0x26, 0xd7, 0x58 } };
    };

    template <typename TResult, typename TProgress>
    struct guid<Windows::Foundation::AsyncOperationWithProgressCompletedHandler<TResult, TProgress>>
    {
        static constexpr GUID value{ pinterface_guid<Windows::Foundation::AsyncOperationWithProgressCompletedHandler<TResult, TProgress>>::value };
    };

    template <typename TResult, typename TProgress>
    struct name<Windows::Foundation::AsyncOperationWithProgressCompletedHandler<TResult, TProgress>>
    {
        static constexpr auto value{ L"Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<" + to_array(name_v<TResult>) + L", " + to_array(name_v<TProgress>) + L">" };
    };

    template <typename TResult, typename TProgress>
    struct category<Windows::Foundation::AsyncOperationWithProgressCompletedHandler<TResult, TProgress>>
    {
        using type = pinterface_category<TResult, TProgress>;
        static constexpr GUID value{ 0xe85df41d, 0x6aa7, 0x46e3,{ 0xa8, 0xe2, 0xf0, 0x09, 0xd8, 0x40, 0xc6, 0x27 } };
    };

    template <>
    struct guid<Windows::Foundation::IAsyncInfo>
    {
        static constexpr GUID value{ 0x00000036,0x0000,0x0000,{ 0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46 } };
    };

    template <>
    struct name<Windows::Foundation::IAsyncInfo>
    {
        static constexpr auto & value{ L"Windows.Foundation.IAsyncInfo" };
    };

    template <>
    struct category<Windows::Foundation::IAsyncInfo>
    {
        using type = interface_category;
    };

    template <>
    struct guid<Windows::Foundation::IAsyncAction>
    {
        static constexpr GUID value{ 0x5A648006,0x843A,0x4DA9,{ 0x86,0x5B,0x9D,0x26,0xE5,0xDF,0xAD,0x7B } };
    };

    template <>
    struct name<Windows::Foundation::IAsyncAction>
    {
        static constexpr auto & value{ L"Windows.Foundation.IAsyncAction" };
    };

    template <>
    struct category<Windows::Foundation::IAsyncAction>
    {
        using type = interface_category;
    };

    template <typename TResult>
    struct guid<Windows::Foundation::IAsyncOperation<TResult>>
    {
        static constexpr GUID value{ pinterface_guid<Windows::Foundation::IAsyncOperation<TResult>>::value };
    };

    template <typename TResult>
    struct name<Windows::Foundation::IAsyncOperation<TResult>>
    {
        static constexpr auto value{ L"Windows.Foundation.IAsyncOperation`1<" + to_array(name_v<TResult>) + L">" };
    };

    template <typename TResult>
    struct category<Windows::Foundation::IAsyncOperation<TResult>>
    {
        using type = pinterface_category<TResult>;
        static constexpr GUID value{ 0x9fc2b0bb, 0xe446, 0x44e2,{ 0xaa, 0x61, 0x9c, 0xab, 0x8f, 0x63, 0x6a, 0xf2 } };
    };

    template <typename TProgress>
    struct guid<Windows::Foundation::IAsyncActionWithProgress<TProgress>>
    {
        static constexpr GUID value{ pinterface_guid<Windows::Foundation::IAsyncActionWithProgress<TProgress>>::value };
    };

    template <typename TProgress>
    struct name<Windows::Foundation::IAsyncActionWithProgress<TProgress>>
    {
        static constexpr auto value{ L"Windows.Foundation.IAsyncActionWithProgress`1<" + to_array(name_v<TProgress>) + L">" };
    };

    template <typename TProgress>
    struct category<Windows::Foundation::IAsyncActionWithProgress<TProgress>>
    {
        using type = pinterface_category<TProgress>;
        static constexpr GUID value{ 0x1f6db258, 0xe803, 0x48a1,{ 0x95, 0x46, 0xeb, 0x73, 0x53, 0x39, 0x88, 0x84 } };
    };

    template <typename TResult, typename TProgress>
    struct guid<Windows::Foundation::IAsyncOperationWithProgress<TResult, TProgress>>
    {
        static constexpr GUID value{ pinterface_guid<Windows::Foundation::IAsyncOperationWithProgress<TResult, TProgress>>::value };
    };

    template <typename TResult, typename TProgress>
    struct name<Windows::Foundation::IAsyncOperationWithProgress<TResult, TProgress>>
    {
        static constexpr auto value{ L"Windows.Foundation.IAsyncOperationWithProgress`2<" + to_array(name_v<TResult>) + L", " + to_array(name_v<TProgress>) + L">" };
    };

    template <typename TResult, typename TProgress>
    struct category<Windows::Foundation::IAsyncOperationWithProgress<TResult, TProgress>>
    {
        using type = pinterface_category<TResult, TProgress>;
        static constexpr GUID value{ 0xb5d036d7, 0xe297, 0x498f,{ 0xba, 0x60, 0x02, 0x89, 0xe7, 0x6e, 0x23, 0xdd } };
    };
}

WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct IAsyncInfo :
        IInspectable,
        impl::consume_t<IAsyncInfo>
    {
        IAsyncInfo(std::nullptr_t = nullptr) noexcept {}
    };

    struct IAsyncAction :
        IInspectable,
        impl::consume_t<IAsyncAction>,
        impl::require<IAsyncAction, IAsyncInfo>
    {
        IAsyncAction(std::nullptr_t = nullptr) noexcept {}
    };

    template <typename TProgress>
    struct WINRT_EBO IAsyncActionWithProgress :
        IInspectable,
        impl::consume_t<IAsyncActionWithProgress<TProgress>>,
        impl::require<IAsyncActionWithProgress<TProgress>, IAsyncInfo>
    {
        static_assert(impl::has_category_v<TProgress>, "TProgress must be WinRT type.");
        IAsyncActionWithProgress(std::nullptr_t = nullptr) noexcept {}
    };

    template <typename TResult>
    struct WINRT_EBO IAsyncOperation :
        IInspectable,
        impl::consume_t<IAsyncOperation<TResult>>,
        impl::require<IAsyncOperation<TResult>, IAsyncInfo>
    {
        static_assert(impl::has_category_v<TResult>, "TResult must be WinRT type.");
        IAsyncOperation(std::nullptr_t = nullptr) noexcept {}
    };

    template <typename TResult, typename TProgress>
    struct WINRT_EBO IAsyncOperationWithProgress :
        IInspectable,
        impl::consume_t<IAsyncOperationWithProgress<TResult, TProgress>>,
        impl::require<IAsyncOperationWithProgress<TResult, TProgress>, IAsyncInfo>
    {
        static_assert(impl::has_category_v<TResult>, "TResult must be WinRT type.");
        static_assert(impl::has_category_v<TProgress>, "TProgress must be WinRT type.");
        IAsyncOperationWithProgress(std::nullptr_t = nullptr) noexcept {}
    };

    struct AsyncActionCompletedHandler : IUnknown
    {
        AsyncActionCompletedHandler(std::nullptr_t = nullptr) noexcept {}

        template <typename L>
        AsyncActionCompletedHandler(L handler) :
            AsyncActionCompletedHandler(impl::make_delegate<AsyncActionCompletedHandler>(std::forward<L>(handler)))
        {}

        template <typename F> AsyncActionCompletedHandler(F* handler) :
            AsyncActionCompletedHandler([=](auto&&... args) { handler(args...); })
        {}

        template <typename O, typename M> AsyncActionCompletedHandler(O* object, M method) :
            AsyncActionCompletedHandler([=](auto&&... args) { ((*object).*(method))(args...); })
        {}

        void operator()(IAsyncAction const& sender, AsyncStatus args) const
        {
            check_hresult((*(impl::abi_t<AsyncActionCompletedHandler>**)this)->Invoke(get_abi(sender), args));
        }
    };

    template <typename TProgress>
    struct WINRT_EBO AsyncActionProgressHandler : IUnknown
    {
        static_assert(impl::has_category_v<TProgress>, "TProgress must be WinRT type.");
        AsyncActionProgressHandler(std::nullptr_t = nullptr) noexcept {}

        template <typename L>
        AsyncActionProgressHandler(L handler) :
            AsyncActionProgressHandler(impl::make_delegate<AsyncActionProgressHandler<TProgress>>(std::forward<L>(handler)))
        {}

        template <typename F> AsyncActionProgressHandler(F* handler) :
            AsyncActionProgressHandler([=](auto&&... args) { handler(args...); })
        {}

        template <typename O, typename M> AsyncActionProgressHandler(O* object, M method) :
            AsyncActionProgressHandler([=](auto&&... args) { ((*object).*(method))(args...); })
        {}

        void operator()(IAsyncActionWithProgress<TProgress> const& sender, TProgress const& args) const
        {
            check_hresult((*(impl::abi_t<AsyncActionProgressHandler<TProgress>>**)this)->Invoke(get_abi(sender), get_abi(args)));
        }
    };

    template <typename TProgress>
    struct WINRT_EBO AsyncActionWithProgressCompletedHandler : IUnknown
    {
        static_assert(impl::has_category_v<TProgress>, "TProgress must be WinRT type.");
        AsyncActionWithProgressCompletedHandler(std::nullptr_t = nullptr) noexcept {}

        template <typename L>
        AsyncActionWithProgressCompletedHandler(L handler) :
            AsyncActionWithProgressCompletedHandler(impl::make_delegate<AsyncActionWithProgressCompletedHandler<TProgress>>(std::forward<L>(handler)))
        {}

        template <typename F> AsyncActionWithProgressCompletedHandler(F* handler) :
            AsyncActionWithProgressCompletedHandler([=](auto&&... args) { handler(args...); })
        {}

        template <typename O, typename M> AsyncActionWithProgressCompletedHandler(O* object, M method) :
            AsyncActionWithProgressCompletedHandler([=](auto&&... args) { ((*object).*(method))(args...); })
        {}

        void operator()(IAsyncActionWithProgress<TProgress> const& sender, AsyncStatus const args) const
        {
            check_hresult((*(impl::abi_t<AsyncActionWithProgressCompletedHandler<TProgress>>**)this)->Invoke(get_abi(sender), args));
        }
    };

    template <typename TResult, typename TProgress>
    struct WINRT_EBO AsyncOperationProgressHandler : IUnknown
    {
        static_assert(impl::has_category_v<TResult>, "TResult must be WinRT type.");
        static_assert(impl::has_category_v<TProgress>, "TProgress must be WinRT type.");
        AsyncOperationProgressHandler(std::nullptr_t = nullptr) noexcept {}

        template <typename L>
        AsyncOperationProgressHandler(L handler) :
            AsyncOperationProgressHandler(impl::make_delegate<AsyncOperationProgressHandler<TResult, TProgress>>(std::forward<L>(handler)))
        {}

        template <typename F> AsyncOperationProgressHandler(F* handler) :
            AsyncOperationProgressHandler([=](auto&&... args) { handler(args...); })
        {}

        template <typename O, typename M> AsyncOperationProgressHandler(O* object, M method) :
            AsyncOperationProgressHandler([=](auto&&... args) { ((*object).*(method))(args...); })
        {}

        void operator()(IAsyncOperationWithProgress<TResult, TProgress> const& sender, TProgress const& args) const
        {
            check_hresult((*(impl::abi_t<AsyncOperationProgressHandler<TResult, TProgress>>**)this)->Invoke(get_abi(sender), get_abi(args)));
        }
    };

    template <typename TResult, typename TProgress>
    struct WINRT_EBO AsyncOperationWithProgressCompletedHandler : IUnknown
    {
        static_assert(impl::has_category_v<TResult>, "TResult must be WinRT type.");
        static_assert(impl::has_category_v<TProgress>, "TProgress must be WinRT type.");
        AsyncOperationWithProgressCompletedHandler(std::nullptr_t = nullptr) noexcept {}

        template <typename L>
        AsyncOperationWithProgressCompletedHandler(L handler) :
            AsyncOperationWithProgressCompletedHandler(impl::make_delegate<AsyncOperationWithProgressCompletedHandler<TResult, TProgress>>(std::forward<L>(handler)))
        {}

        template <typename F> AsyncOperationWithProgressCompletedHandler(F* handler) :
            AsyncOperationWithProgressCompletedHandler([=](auto&&... args) { handler(args...); })
        {}

        template <typename O, typename M> AsyncOperationWithProgressCompletedHandler(O* object, M method) :
            AsyncOperationWithProgressCompletedHandler([=](auto&&... args) { ((*object).*(method))(args...); })
        {}

        void operator()(IAsyncOperationWithProgress<TResult, TProgress> const& sender, AsyncStatus const args) const
        {
            check_hresult((*(impl::abi_t<AsyncOperationWithProgressCompletedHandler<TResult, TProgress>>**)this)->Invoke(get_abi(sender), args));
        }
    };

    template <typename TResult>
    struct WINRT_EBO AsyncOperationCompletedHandler : IUnknown
    {
        static_assert(impl::has_category_v<TResult>, "TResult must be WinRT type.");
        AsyncOperationCompletedHandler(std::nullptr_t = nullptr) noexcept {}

        template <typename L>
        AsyncOperationCompletedHandler(L handler) :
            AsyncOperationCompletedHandler(impl::make_delegate<AsyncOperationCompletedHandler<TResult>>(std::forward<L>(handler)))
        {}

        template <typename F> AsyncOperationCompletedHandler(F* handler) :
            AsyncOperationCompletedHandler([=](auto&&... args) { handler(args...); })
        {}

        template <typename O, typename M> AsyncOperationCompletedHandler(O* object, M method) :
            AsyncOperationCompletedHandler([=](auto&&... args) { ((*object).*(method))(args...); })
        {}

        void operator()(IAsyncOperation<TResult> const& sender, AsyncStatus args) const
        {
            check_hresult((*(impl::abi_t<AsyncOperationCompletedHandler<TResult>>**)this)->Invoke(get_abi(sender), args));
        }
    };
}

namespace winrt::impl
{
    template <typename D>
    uint32_t consume_IAsyncInfo<D>::Id() const
    {
        uint32_t id{};
        check_hresult((*(abi_t<Windows::Foundation::IAsyncInfo>**)&static_cast<Windows::Foundation::IAsyncInfo const&>(static_cast<D const&>(*this)))->get_Id(&id));
        return id;
    }

    template <typename D>
    Windows::Foundation::AsyncStatus consume_IAsyncInfo<D>::Status() const
    {
        Windows::Foundation::AsyncStatus status{};
        check_hresult((*(abi_t<Windows::Foundation::IAsyncInfo>**)&static_cast<Windows::Foundation::IAsyncInfo const&>(static_cast<D const&>(*this)))->get_Status(&status));
        return status;
    }

    template <typename D>
    HRESULT consume_IAsyncInfo<D>::ErrorCode() const
    {
        HRESULT code = S_OK;
        check_hresult((*(abi_t<Windows::Foundation::IAsyncInfo>**)&static_cast<Windows::Foundation::IAsyncInfo const&>(static_cast<D const&>(*this)))->get_ErrorCode(&code));
        return code;
    }

    template <typename D>
    void consume_IAsyncInfo<D>::Cancel() const
    {
        check_hresult((*(abi_t<Windows::Foundation::IAsyncInfo>**)&static_cast<Windows::Foundation::IAsyncInfo const&>(static_cast<D const&>(*this)))->Cancel());
    }

    template <typename D>
    void consume_IAsyncInfo<D>::Close() const
    {
        check_hresult((*(abi_t<Windows::Foundation::IAsyncInfo>**)&static_cast<Windows::Foundation::IAsyncInfo const&>(static_cast<D const&>(*this)))->Close());
    }


    template <typename D>
    void consume_IAsyncAction<D>::Completed(const Windows::Foundation::AsyncActionCompletedHandler& handler) const
    {
        check_hresult((*(abi_t<Windows::Foundation::IAsyncAction>**)&static_cast<Windows::Foundation::IAsyncAction const&>(static_cast<D const&>(*this)))->put_Completed(get_abi(handler)));
    }

    template <typename D>
    Windows::Foundation::AsyncActionCompletedHandler consume_IAsyncAction<D>::Completed() const
    {
        Windows::Foundation::AsyncActionCompletedHandler handler{};
        check_hresult((*(abi_t<Windows::Foundation::IAsyncAction>**)&static_cast<Windows::Foundation::IAsyncAction const&>(static_cast<D const&>(*this)))->get_Completed(put_abi(handler)));
        return handler;
    }

    template <typename D>
    void consume_IAsyncAction<D>::GetResults() const
    {
        check_hresult((*(abi_t<Windows::Foundation::IAsyncAction>**)&static_cast<Windows::Foundation::IAsyncAction const&>(static_cast<D const&>(*this)))->GetResults());
    }

    template <typename D>
    void consume_IAsyncAction<D>::get() const
    {
        blocking_suspend(static_cast<Windows::Foundation::IAsyncAction const&>(static_cast<D const&>(*this)));
        GetResults();
    }

    template <typename D, typename TResult>
    void consume_IAsyncOperation<D, TResult>::Completed(Windows::Foundation::AsyncOperationCompletedHandler<TResult> const& handler) const
    {
        check_hresult((*(abi_t<Windows::Foundation::IAsyncOperation<TResult>>**)&static_cast<Windows::Foundation::IAsyncOperation<TResult> const&>(static_cast<D const&>(*this)))->put_Completed(get_abi(handler)));
    }

    template <typename D, typename TResult>
    Windows::Foundation::AsyncOperationCompletedHandler<TResult> consume_IAsyncOperation<D, TResult>::Completed() const
    {
        Windows::Foundation::AsyncOperationCompletedHandler<TResult> temp;
        check_hresult((*(abi_t<Windows::Foundation::IAsyncOperation<TResult>>**)&static_cast<Windows::Foundation::IAsyncOperation<TResult> const&>(static_cast<D const&>(*this)))->get_Completed(put_abi(temp)));
        return temp;
    }

    template <typename D, typename TResult>
    TResult consume_IAsyncOperation<D, TResult>::GetResults() const
    {
        TResult result = empty_value<TResult>();
        check_hresult((*(abi_t<Windows::Foundation::IAsyncOperation<TResult>>**)&static_cast<Windows::Foundation::IAsyncOperation<TResult> const&>(static_cast<D const&>(*this)))->GetResults(put_abi(result)));
        return result;
    }

    template <typename D, typename TResult>
    TResult consume_IAsyncOperation<D, TResult>::get() const
    {
        blocking_suspend(static_cast<Windows::Foundation::IAsyncOperation<TResult> const&>(static_cast<D const&>(*this)));
        return GetResults();
    }

    template <typename D, typename TProgress>
    void consume_IAsyncActionWithProgress<D, TProgress>::Progress(Windows::Foundation::AsyncActionProgressHandler<TProgress> const& handler) const
    {
        check_hresult((*(abi_t<Windows::Foundation::IAsyncActionWithProgress<TProgress>>**)&static_cast<Windows::Foundation::IAsyncActionWithProgress<TProgress> const&>(static_cast<D const&>(*this)))->put_Progress(get_abi(handler)));
    }

    template <typename D, typename TProgress>
    Windows::Foundation::AsyncActionProgressHandler<TProgress> consume_IAsyncActionWithProgress<D, TProgress>::Progress() const
    {
        Windows::Foundation::AsyncActionProgressHandler<TProgress> handler;
        check_hresult((*(abi_t<Windows::Foundation::IAsyncActionWithProgress<TProgress>>**)&static_cast<Windows::Foundation::IAsyncActionWithProgress<TProgress> const&>(static_cast<D const&>(*this)))->get_Progress(put_abi(handler)));
        return handler;
    }

    template <typename D, typename TProgress>
    void consume_IAsyncActionWithProgress<D, TProgress>::Completed(Windows::Foundation::AsyncActionWithProgressCompletedHandler<TProgress> const& handler) const
    {
        check_hresult((*(abi_t<Windows::Foundation::IAsyncActionWithProgress<TProgress>>**)&static_cast<Windows::Foundation::IAsyncActionWithProgress<TProgress> const&>(static_cast<D const&>(*this)))->put_Completed(get_abi(handler)));
    }

    template <typename D, typename TProgress>
    Windows::Foundation::AsyncActionWithProgressCompletedHandler<TProgress> consume_IAsyncActionWithProgress<D, TProgress>::Completed() const
    {
        Windows::Foundation::AsyncActionWithProgressCompletedHandler<TProgress> handler;
        check_hresult((*(abi_t<Windows::Foundation::IAsyncActionWithProgress<TProgress>>**)&static_cast<Windows::Foundation::IAsyncActionWithProgress<TProgress> const&>(static_cast<D const&>(*this)))->get_Completed(put_abi(handler)));
        return handler;
    }

    template <typename D, typename TProgress>
    void consume_IAsyncActionWithProgress<D, TProgress>::GetResults() const
    {
        check_hresult((*(abi_t<Windows::Foundation::IAsyncActionWithProgress<TProgress>>**)&static_cast<Windows::Foundation::IAsyncActionWithProgress<TProgress> const&>(static_cast<D const&>(*this)))->GetResults());
    }

    template <typename D, typename TProgress>
    void consume_IAsyncActionWithProgress<D, TProgress>::get() const
    {
        blocking_suspend(static_cast<Windows::Foundation::IAsyncActionWithProgress<TProgress> const&>(static_cast<D const&>(*this)));
        GetResults();
    }

    template <typename D, typename TResult, typename TProgress>
    void consume_IAsyncOperationWithProgress<D, TResult, TProgress>::Progress(Windows::Foundation::AsyncOperationProgressHandler<TResult, TProgress> const& handler) const
    {
        check_hresult((*(abi_t<Windows::Foundation::IAsyncOperationWithProgress<TResult, TProgress>>**)&static_cast<Windows::Foundation::IAsyncOperationWithProgress<TResult, TProgress> const&>(static_cast<D const&>(*this)))->put_Progress(get_abi(handler)));
    }

    template <typename D, typename TResult, typename TProgress>
    Windows::Foundation::AsyncOperationProgressHandler<TResult, TProgress> consume_IAsyncOperationWithProgress<D, TResult, TProgress>::Progress() const
    {
        Windows::Foundation::AsyncOperationProgressHandler<TResult, TProgress> handler;
        check_hresult((*(abi_t<Windows::Foundation::IAsyncOperationWithProgress<TResult, TProgress>>**)&static_cast<Windows::Foundation::IAsyncOperationWithProgress<TResult, TProgress> const&>(static_cast<D const&>(*this)))->get_Progress(put_abi(handler)));
        return handler;
    }

    template <typename D, typename TResult, typename TProgress>
    void consume_IAsyncOperationWithProgress<D, TResult, TProgress>::Completed(Windows::Foundation::AsyncOperationWithProgressCompletedHandler<TResult, TProgress> const& handler) const
    {
        check_hresult((*(abi_t<Windows::Foundation::IAsyncOperationWithProgress<TResult, TProgress>>**)&static_cast<Windows::Foundation::IAsyncOperationWithProgress<TResult, TProgress> const&>(static_cast<D const&>(*this)))->put_Completed(get_abi(handler)));
    }

    template <typename D, typename TResult, typename TProgress>
    Windows::Foundation::AsyncOperationWithProgressCompletedHandler<TResult, TProgress> consume_IAsyncOperationWithProgress<D, TResult, TProgress>::Completed() const
    {
        Windows::Foundation::AsyncOperationWithProgressCompletedHandler<TResult, TProgress> handler;
        check_hresult((*(abi_t<Windows::Foundation::IAsyncOperationWithProgress<TResult, TProgress>>**)&static_cast<Windows::Foundation::IAsyncOperationWithProgress<TResult, TProgress> const&>(static_cast<D const&>(*this)))->get_Completed(put_abi(handler)));
        return handler;
    }

    template <typename D, typename TResult, typename TProgress>
    TResult consume_IAsyncOperationWithProgress<D, TResult, TProgress>::GetResults() const
    {
        TResult result = empty_value<TResult>();
        check_hresult((*(abi_t<Windows::Foundation::IAsyncOperationWithProgress<TResult, TProgress>>**)&static_cast<Windows::Foundation::IAsyncOperationWithProgress<TResult, TProgress> const&>(static_cast<D const&>(*this)))->GetResults(put_abi(result)));
        return result;
    }

    template <typename D, typename TResult, typename TProgress>
    TResult consume_IAsyncOperationWithProgress<D, TResult, TProgress>::get() const
    {
        blocking_suspend(static_cast<Windows::Foundation::IAsyncOperationWithProgress<TResult, TProgress> const&>(static_cast<D const&>(*this)));
        return GetResults();
    }
}

namespace winrt::impl
{
    template <typename D>
    struct produce<D, Windows::Foundation::IAsyncAction> : produce_base<D, Windows::Foundation::IAsyncAction>
    {
        HRESULT __stdcall put_Completed(void* handler) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                this->shim().Completed(*reinterpret_cast<Windows::Foundation::AsyncActionCompletedHandler const*>(&handler));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }

        HRESULT __stdcall get_Completed(void** handler) noexcept final
        {
            try
            {
                *handler = nullptr;
                typename D::abi_guard guard(this->shim());
                *handler = detach_from<Windows::Foundation::AsyncActionCompletedHandler>(this->shim().Completed());
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }

        HRESULT __stdcall GetResults() noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                this->shim().GetResults();
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };

    template <typename D>
    struct produce<D, Windows::Foundation::IAsyncInfo> : produce_base<D, Windows::Foundation::IAsyncInfo>
    {
        HRESULT __stdcall get_Id(uint32_t* id) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                *id = this->shim().Id();
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }

        HRESULT __stdcall get_Status(winrt::Windows::Foundation::AsyncStatus* status) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                *status = this->shim().Status();
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }

        HRESULT __stdcall get_ErrorCode(HRESULT* errorCode) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                *errorCode = this->shim().ErrorCode();
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }

        HRESULT __stdcall Cancel() noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                this->shim().Cancel();
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }

        HRESULT __stdcall Close() noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                this->shim().Close();
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };

    template <typename D, typename TProgress>
    struct produce<D, Windows::Foundation::IAsyncActionWithProgress<TProgress>> : produce_base<D, Windows::Foundation::IAsyncActionWithProgress<TProgress>>
    {
        HRESULT __stdcall put_Progress(void* handler) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                this->shim().Progress(*reinterpret_cast<Windows::Foundation::AsyncActionProgressHandler<TProgress> const*>(&handler));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }

        HRESULT __stdcall get_Progress(void** handler) noexcept final
        {
            try
            {
                *handler = nullptr;
                typename D::abi_guard guard(this->shim());
                *handler = detach_from<Windows::Foundation::AsyncActionProgressHandler<TProgress>>(this->shim().Progress());
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }

        HRESULT __stdcall put_Completed(void* handler) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                this->shim().Completed(*reinterpret_cast<Windows::Foundation::AsyncActionWithProgressCompletedHandler<TProgress> const*>(&handler));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }

        HRESULT __stdcall get_Completed(void** handler) noexcept final
        {
            try
            {
                *handler = nullptr;
                typename D::abi_guard guard(this->shim());
                *handler = detach_from<Windows::Foundation::AsyncActionWithProgressCompletedHandler<TProgress>>(this->shim().Completed());
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }

        HRESULT __stdcall GetResults() noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                this->shim().GetResults();
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };

    template <typename D, typename TResult>
    struct produce<D, Windows::Foundation::IAsyncOperation<TResult>> : produce_base<D, Windows::Foundation::IAsyncOperation<TResult>>
    {
        HRESULT __stdcall put_Completed(void* handler) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                this->shim().Completed(*reinterpret_cast<Windows::Foundation::AsyncOperationCompletedHandler<TResult> const*>(&handler));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }

        HRESULT __stdcall get_Completed(void** handler) noexcept final
        {
            try
            {
                *handler = nullptr;
                typename D::abi_guard guard(this->shim());
                *handler = detach_from<Windows::Foundation::AsyncOperationCompletedHandler<TResult>>(this->shim().Completed());
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }

        HRESULT __stdcall GetResults(arg_out<TResult> results) noexcept final
        {
            try
            {
                clear_abi(results);
                typename D::abi_guard guard(this->shim());
                *results = detach_from<TResult>(this->shim().GetResults());
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };

    template <typename D, typename TResult, typename TProgress>
    struct produce<D, Windows::Foundation::IAsyncOperationWithProgress<TResult, TProgress>> : produce_base<D, Windows::Foundation::IAsyncOperationWithProgress<TResult, TProgress>>
    {
        HRESULT __stdcall put_Progress(void* handler) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                this->shim().Progress(*reinterpret_cast<Windows::Foundation::AsyncOperationProgressHandler<TResult, TProgress> const*>(&handler));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }

        HRESULT __stdcall get_Progress(void** handler) noexcept final
        {
            try
            {
                *handler = nullptr;
                typename D::abi_guard guard(this->shim());
                *handler = detach_from<Windows::Foundation::AsyncOperationProgressHandler<TResult, TProgress>>(this->shim().Progress());
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }

        HRESULT __stdcall put_Completed(void* handler) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                this->shim().Completed(*reinterpret_cast<Windows::Foundation::AsyncOperationWithProgressCompletedHandler<TResult, TProgress> const*>(&handler));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }

        HRESULT __stdcall get_Completed(void** handler) noexcept final
        {
            try
            {
                *handler = nullptr;
                typename D::abi_guard guard(this->shim());
                *handler = detach_from<Windows::Foundation::AsyncOperationWithProgressCompletedHandler<TResult, TProgress>>(this->shim().Completed());
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }

        HRESULT __stdcall GetResults(arg_out<TResult> results) noexcept final
        {
            try
            {
                clear_abi(results);
                typename D::abi_guard guard(this->shim());
                *results = detach_from<TResult>(this->shim().GetResults());
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };
}

namespace winrt::impl
{
    template <typename Async>
    struct await_adapter
    {
        Async const& async;

        bool await_ready() const
        {
            return async.Status() == Windows::Foundation::AsyncStatus::Completed;
        }

        void await_suspend(std::experimental::coroutine_handle<> handle) const
        {
            com_ptr<IContextCallback> context;
            check_hresult(CoGetObjectContext(__uuidof(context), context.put_void()));

            async.Completed([handle, context = std::move(context)](auto const&, Windows::Foundation::AsyncStatus)
            {
                ComCallData data = {};
                data.pUserDefined = handle.address();

                auto callback = [](ComCallData* data)
                {
                    std::experimental::coroutine_handle<>::from_address(data->pUserDefined)();
                    return S_OK;
                };

                check_hresult(context->ContextCallback(callback, &data, IID_ICallbackWithNoReentrancyToApplicationSTA, 5, nullptr));
            });
        }

        auto await_resume() const
        {
            return async.GetResults();
        }
    };
}

#ifdef _RESUMABLE_FUNCTIONS_SUPPORTED
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    inline impl::await_adapter<IAsyncAction> operator co_await(IAsyncAction const& async)
    {
        return{ async };
    }

    template <typename TProgress>
    impl::await_adapter<IAsyncActionWithProgress<TProgress>> operator co_await(IAsyncActionWithProgress<TProgress> const& async)
    {
        return{ async };
    }

    template <typename TResult>
    impl::await_adapter<IAsyncOperation<TResult>> operator co_await(IAsyncOperation<TResult> const& async)
    {
        return{ async };
    }

    template <typename TResult, typename TProgress>
    impl::await_adapter<IAsyncOperationWithProgress<TResult, TProgress>> operator co_await(IAsyncOperationWithProgress<TResult, TProgress> const& async)
    {
        return{ async };
    }
}
#endif

WINRT_EXPORT namespace winrt
{
    inline auto resume_background()
    {
        struct awaitable
        {
            bool await_ready() const noexcept
            {
                return false;
            }

            void await_resume() const noexcept
            {
            }

            void await_suspend(std::experimental::coroutine_handle<> handle) const
            {
                if (!TrySubmitThreadpoolCallback(callback, handle.address(), nullptr))
                {
                    throw_last_error();
                }
            }

        private:

            static void __stdcall callback(PTP_CALLBACK_INSTANCE, void* context) noexcept
            {
                std::experimental::coroutine_handle<>::from_address(context)();
            }
        };

        return awaitable{};
    }

    template <typename T>
    auto resume_background(T&& context)
    {
        struct awaitable
        {
            awaitable(T&& context) : m_context(std::forward<T>(context))
            {
            }

            bool await_ready() const noexcept
            {
                return false;
            }

            void await_resume() const noexcept
            {
            }

            void await_suspend(std::experimental::coroutine_handle<> resume)
            {
                m_resume = resume;

                if (!TrySubmitThreadpoolCallback(callback, this, nullptr))
                {
                    throw_last_error();
                }
            }

        private:

            static void __stdcall callback(PTP_CALLBACK_INSTANCE, void* context) noexcept
            {
                auto that = static_cast<awaitable*>(context);
                auto guard = that->m_context();
                that->m_resume();
            }

            T&& m_context;
            std::experimental::coroutine_handle<> m_resume{ nullptr };
        };

        return awaitable{ std::forward<T>(context) };
    }

    struct apartment_context
    {
        apartment_context()
        {
            check_hresult(CoGetObjectContext(__uuidof(m_context), m_context.put_void()));
        }

        bool await_ready() const noexcept
        {
            return false;
        }

        void await_resume() const noexcept
        {
        }

        void await_suspend(std::experimental::coroutine_handle<> handle) const
        {
            ComCallData data = {};
            data.pUserDefined = handle.address();
            check_hresult(m_context->ContextCallback(callback, &data, IID_ICallbackWithNoReentrancyToApplicationSTA, 5, nullptr));
        }

    private:

        static HRESULT __stdcall callback(ComCallData* data) noexcept
        {
            std::experimental::coroutine_handle<>::from_address(data->pUserDefined)();
            return S_OK;
        }

        com_ptr<IContextCallback> m_context;
    };

    struct resume_after
    {
        explicit resume_after(Windows::Foundation::TimeSpan duration) noexcept :
        m_duration(duration)
        {
        }

        bool await_ready() const noexcept
        {
            return m_duration.count() <= 0;
        }

        void await_suspend(std::experimental::coroutine_handle<> handle)
        {
            m_timer = check_pointer(CreateThreadpoolTimer(callback, handle.address(), nullptr));
            int64_t relative_count = -m_duration.count();
            SetThreadpoolTimer(m_timer.get(), reinterpret_cast<PFILETIME>(&relative_count), 0, 0);
        }

        void await_resume() const noexcept
        {
        }

    private:

        static void __stdcall callback(PTP_CALLBACK_INSTANCE, void* context, PTP_TIMER) noexcept
        {
            std::experimental::coroutine_handle<>::from_address(context)();
        }

        struct timer_traits
        {
            using type = PTP_TIMER;

            static void close(type value) noexcept
            {
                CloseThreadpoolTimer(value);
            }

            static constexpr type invalid() noexcept
            {
                return nullptr;
            }
        };

        handle_type<timer_traits> m_timer;
        Windows::Foundation::TimeSpan m_duration;
    };

    struct resume_on_signal
    {
        explicit resume_on_signal(HANDLE handle) noexcept :
            m_handle(handle)
        {}

        resume_on_signal(HANDLE handle, Windows::Foundation::TimeSpan timeout) noexcept :
            m_timeout(timeout),
            m_handle(handle)
        {}

        bool await_ready() const noexcept
        {
            return WaitForSingleObject(m_handle, 0) == WAIT_OBJECT_0;
        }

        void await_suspend(std::experimental::coroutine_handle<> resume)
        {
            m_resume = resume;
            m_wait = check_pointer(CreateThreadpoolWait(callback, this, nullptr));
            int64_t relative_count = -m_timeout.count();
            PFILETIME file_time = relative_count != 0 ? reinterpret_cast<PFILETIME>(&relative_count) : nullptr;
            SetThreadpoolWait(m_wait.get(), m_handle, file_time);
        }

        bool await_resume() const noexcept
        {
            return m_result == WAIT_OBJECT_0;
        }

    private:

        static void __stdcall callback(PTP_CALLBACK_INSTANCE, void* context, PTP_WAIT, TP_WAIT_RESULT result) noexcept
        {
            auto that = static_cast<resume_on_signal*>(context);
            that->m_result = result;
            that->m_resume();
        }

        struct wait_traits
        {
            using type = PTP_WAIT;

            static void close(type value) noexcept
            {
                CloseThreadpoolWait(value);
            }

            static constexpr type invalid() noexcept
            {
                return nullptr;
            }
        };

        handle_type<wait_traits> m_wait;
        Windows::Foundation::TimeSpan m_timeout{ 0 };
        HANDLE m_handle{};
        uint32_t m_result{};
        std::experimental::coroutine_handle<> m_resume{ nullptr };
    };

    struct awaitable_base
    {
        static void __stdcall callback(PTP_CALLBACK_INSTANCE, void*, void* overlapped, ULONG result, ULONG_PTR, PTP_IO) noexcept
        {
            auto context = static_cast<awaitable_base*>(overlapped);
            context->m_result = result;
            context->m_resume();
        }

    protected:

        OVERLAPPED m_overlapped{};
        uint32_t m_result{};
        std::experimental::coroutine_handle<> m_resume{ nullptr };
    };

    struct resumable_io
    {
        resumable_io(HANDLE object) :
            m_io(check_pointer(CreateThreadpoolIo(object, awaitable_base::callback, nullptr, nullptr)))
        {
        }

        template <typename F>
        auto start(F callback)
        {
            struct awaitable : awaitable_base, F
            {
                awaitable(PTP_IO io, F callback) noexcept :
                    F(callback),
                    m_io(io)
                {}

                bool await_ready() const noexcept
                {
                    return false;
                }

                void await_suspend(std::experimental::coroutine_handle<> resume_handle)
                {
                    m_resume = resume_handle;
                    StartThreadpoolIo(m_io);

                    try
                    {
                        (*this)(m_overlapped);
                    }
                    catch (...)
                    {
                        CancelThreadpoolIo(m_io);
                        throw;
                    }
                }

                uint32_t await_resume() const
                {
                    if (m_result != ERROR_HANDLE_EOF)
                    {
                        check_win32(m_result);
                    }
                    return static_cast<uint32_t>(m_overlapped.InternalHigh);
                }

                PTP_IO m_io = nullptr;
            };

            return awaitable(get(), callback);
        }

        template <typename F>
        auto start_pending(F callback)
        {
            struct awaitable : awaitable_base, F
            {
                awaitable(PTP_IO io, F callback) noexcept :
                    F(callback),
                    m_io(io)
                {}

                bool await_ready() const noexcept
                {
                    return false;
                }

                bool await_suspend(std::experimental::coroutine_handle<> resume_handle)
                {
                    m_resume = resume_handle;
                    StartThreadpoolIo(m_io);

                    try
                    {
                        bool const pending = (*this)(m_overlapped);

                        if (!pending)
                        {
                            CancelThreadpoolIo(m_io);
                        }

                        return pending;
                    }
                    catch (...)
                    {
                        CancelThreadpoolIo(m_io);
                        throw;
                    }
                }

                uint32_t await_resume() const
                {
                    if (m_result != ERROR_HANDLE_EOF)
                    {
                        check_win32(m_result);
                    }
                    return static_cast<uint32_t>(m_overlapped.InternalHigh);
                }

                PTP_IO m_io = nullptr;
            };

            return awaitable(get(), callback);
        }

        PTP_IO get() const noexcept
        {
            return m_io.get();
        }

    private:

        struct io_traits
        {
            using type = PTP_IO;

            static void close(type value) noexcept
            {
                CloseThreadpoolIo(value);
            }

            static constexpr type invalid() noexcept
            {
                return nullptr;
            }
        };

        handle_type<io_traits> m_io;
    };

#ifdef _RESUMABLE_FUNCTIONS_SUPPORTED
    inline auto operator co_await(Windows::Foundation::TimeSpan duration)
    {
        return resume_after(duration);
    }
#endif

    struct get_progress_token_t {};

    inline get_progress_token_t get_progress_token() noexcept
    {
        return{};
    }

    struct get_cancellation_token_t {};

    inline get_cancellation_token_t get_cancellation_token() noexcept
    {
        return{};
    }

    struct fire_and_forget {};
}

namespace winrt::impl
{
    template <typename Derived, typename AsyncInterface, typename CompletedHandler>
    struct promise_base : implements<Derived, AsyncInterface, Windows::Foundation::IAsyncInfo>
    {
        using AsyncStatus = Windows::Foundation::AsyncStatus;

        unsigned long __stdcall Release() noexcept
        {
            uint32_t const remaining = this->subtract_reference();

            if (remaining == 0)
            {
                std::atomic_thread_fence(std::memory_order_acquire);
                std::experimental::coroutine_handle<Derived>::from_promise(*static_cast<Derived*>(this)).destroy();
            }

            return remaining;
        }

        void Completed(CompletedHandler const& handler)
        {
            AsyncStatus status;

            {
                slim_lock_guard const guard(m_lock);

                if (m_completed_assigned)
                {
                    throw hresult_illegal_delegate_assignment();
                }

                m_completed_assigned = true;

                if (m_status == AsyncStatus::Started)
                {
                    m_completed = handler;
                    return;
                }

                status = m_status;
            }

            if (handler)
            {
                handler(*this, status);
            }
        }

        CompletedHandler Completed() noexcept
        {
            slim_lock_guard const guard(m_lock);
            return m_completed;
        }

        uint32_t Id() const noexcept
        {
            return 1;
        }

        AsyncStatus Status() noexcept
        {
            slim_lock_guard const guard(m_lock);
            return m_status;
        }

        HRESULT ErrorCode() noexcept
        {
            try
            {
                slim_lock_guard const guard(m_lock);
                rethrow_if_failed();
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }

        void Cancel() noexcept
        {
            slim_lock_guard const guard(m_lock);

            if (m_status == AsyncStatus::Started)
            {
                m_status = AsyncStatus::Canceled;
            }
        }

        void Close()
        {
            slim_lock_guard const guard(m_lock);

            if (m_status == AsyncStatus::Started)
            {
                throw hresult_illegal_state_change();
            }
        }

        AsyncInterface get_return_object() const noexcept
        {
            return*this;
        }

        std::experimental::suspend_never initial_suspend() const noexcept
        {
            return{};
        }

        struct final_suspend_type
        {
            promise_base* promise;

            bool await_ready() const noexcept
            {
                return false;
            }

            void await_resume() const noexcept
            {
            }

            bool await_suspend(std::experimental::coroutine_handle<>) const noexcept
            {
                uint32_t const remaining = promise->subtract_reference();

                if (remaining == 0)
                {
                    std::atomic_thread_fence(std::memory_order_acquire);
                }

                return remaining > 0;
            }
        };

        final_suspend_type final_suspend() noexcept
        {
            return{ this };
        }

        void unhandled_exception() noexcept
        {
            CompletedHandler handler;
            AsyncStatus status;

            {
                slim_lock_guard const guard(m_lock);
                WINRT_ASSERT(m_status == AsyncStatus::Started || m_status == AsyncStatus::Canceled);
                m_exception = std::current_exception();

                try
                {
                    std::rethrow_exception(m_exception.value());
                }
                catch (hresult_canceled const&)
                {
                    m_status = AsyncStatus::Canceled;
                }
                catch (...)
                {
                    m_status = AsyncStatus::Error;
                }

                handler = std::move(m_completed);
                status = m_status;
            }

            if (handler)
            {
                handler(*this, status);
            }
        }

    protected:

        void rethrow_if_failed() const
        {
            if (this->m_status == AsyncStatus::Error || this->m_status == AsyncStatus::Canceled)
            {
                std::rethrow_exception(m_exception.value());
            }
        }

        std::optional<std::exception_ptr> m_exception;
        slim_mutex m_lock;
        CompletedHandler m_completed;
        AsyncStatus m_status{ AsyncStatus::Started };
        bool m_completed_assigned{ false };
    };

    template <typename Promise>
    struct cancellation_token
    {
        cancellation_token(Promise* promise) noexcept :
        m_promise(promise)
        {
        }

        bool await_ready() const noexcept
        {
            return true;
        }

        void await_suspend(std::experimental::coroutine_handle<>) const noexcept
        {
        }

        cancellation_token<Promise> await_resume() const noexcept
        {
            return*this;
        }

        bool operator()() const noexcept
        {
            return m_promise->Status() == Windows::Foundation::AsyncStatus::Canceled;
        }

    private:

        Promise* m_promise;
    };

    template <typename Promise, typename Progress>
    struct progress_token
    {
        progress_token(Promise* promise) noexcept :
        m_promise(promise)
        {
        }

        bool await_ready() const noexcept
        {
            return true;
        }

        void await_suspend(std::experimental::coroutine_handle<>) const noexcept
        {
        }

        progress_token<Promise, Progress> await_resume() const noexcept
        {
            return*this;
        }

        void operator()(Progress const& result)
        {
            m_promise->set_progress(result);
        }

    private:

        Promise* m_promise;
    };
}

namespace winrt::impl
{
    inline size_t hash_data(void const* ptr, size_t const bytes) noexcept
    {
#ifdef WINRT_64
        constexpr size_t fnv_offset_basis = 14695981039346656037ULL;
        constexpr size_t fnv_prime = 1099511628211ULL;
#else
        constexpr size_t fnv_offset_basis = 2166136261U;
        constexpr size_t fnv_prime = 16777619U;
#endif
        size_t result = fnv_offset_basis;
        uint8_t const* const buffer = static_cast<uint8_t const*>(ptr);

        for (size_t next = 0; next < bytes; ++next)
        {
            result ^= buffer[next];
            result *= fnv_prime;
        }

        return result;
    }

    inline size_t hash_unknown(Windows::Foundation::IUnknown const& value) noexcept
    {
        void* abi_value = nullptr;

        if (value)
        {
            abi_value = get_abi(value.try_as<Windows::Foundation::IUnknown>());
        }

        return std::hash<void*>{}(abi_value);
    }

    template<typename T>
    struct hash_base
    {
        size_t operator()(T const& value) const noexcept
        {
            return hash_unknown(value);
        }
    };
}

WINRT_EXPORT namespace std
{
    template<> struct hash<winrt::hstring>
    {
        size_t operator()(winrt::hstring const& value) const noexcept
        {
            uint32_t length = 0;
            const wchar_t* const buffer = WindowsGetStringRawBuffer(get_abi(value), &length);
            return winrt::impl::hash_data(buffer, length * sizeof(wchar_t));
        }
    };
}

WINRT_EXPORT namespace std::experimental
{
    template <typename... Args>
    struct coroutine_traits<winrt::fire_and_forget, Args...>
    {
        struct promise_type
        {
            winrt::fire_and_forget get_return_object() const noexcept
            {
                return{};
            }

            void return_void() const noexcept
            {
            }

            suspend_never initial_suspend() const noexcept
            {
                return{};
            }

            suspend_never final_suspend() const noexcept
            {
                return{};
            }

            void unhandled_exception() noexcept
            {
            }
        };
    };
}

WINRT_EXPORT namespace std::experimental
{
    template <typename... Args>
    struct coroutine_traits<winrt::Windows::Foundation::IAsyncAction, Args...>
    {
        struct promise_type final : winrt::impl::promise_base<promise_type, winrt::Windows::Foundation::IAsyncAction,
            winrt::Windows::Foundation::AsyncActionCompletedHandler>
        {
            using AsyncStatus = winrt::Windows::Foundation::AsyncStatus;

            void GetResults()
            {
                winrt::slim_lock_guard const guard(this->m_lock);

                if (this->m_status == AsyncStatus::Completed)
                {
                    return;
                }

                this->rethrow_if_failed();
                WINRT_ASSERT(this->m_status == AsyncStatus::Started);
                throw winrt::hresult_illegal_method_call();
            }

            void return_void()
            {
                winrt::Windows::Foundation::AsyncActionCompletedHandler handler;
                AsyncStatus status;

                {
                    winrt::slim_lock_guard const guard(this->m_lock);

                    if (this->m_status == AsyncStatus::Started)
                    {
                        this->m_status = AsyncStatus::Completed;
                    }
                    else
                    {
                        WINRT_ASSERT(this->m_status == AsyncStatus::Canceled);
                        this->m_exception = make_exception_ptr(winrt::hresult_canceled());
                    }

                    handler = std::move(this->m_completed);
                    status = this->m_status;
                }

                if (handler)
                {
                    handler(*this, status);
                }
            }

            template <typename Expression>
            Expression&& await_transform(Expression&& expression)
            {
                if (this->Status() == AsyncStatus::Canceled)
                {
                    throw winrt::hresult_canceled();
                }

                return forward<Expression>(expression);
            }

            winrt::impl::cancellation_token<promise_type> await_transform(winrt::get_cancellation_token_t) noexcept
            {
                return{ this };
            }
        };
    };
}

WINRT_EXPORT namespace std::experimental
{
    template <typename TProgress, typename... Args>
    struct coroutine_traits<winrt::Windows::Foundation::IAsyncActionWithProgress<TProgress>, Args...>
    {
        struct promise_type final : winrt::impl::promise_base<promise_type, winrt::Windows::Foundation::IAsyncActionWithProgress<TProgress>,
            winrt::Windows::Foundation::AsyncActionWithProgressCompletedHandler<TProgress>>
        {
            using AsyncStatus = winrt::Windows::Foundation::AsyncStatus;
            using ProgressHandler = winrt::Windows::Foundation::AsyncActionProgressHandler<TProgress>;

            void Progress(ProgressHandler const& handler)
            {
                winrt::slim_lock_guard const guard(this->m_lock);
                m_progress = handler;
            }

            ProgressHandler Progress()
            {
                winrt::slim_lock_guard const guard(this->m_lock);
                return m_progress;
            }

            void GetResults()
            {
                winrt::slim_lock_guard const guard(this->m_lock);

                if (this->m_status == AsyncStatus::Completed)
                {
                    return;
                }

                this->rethrow_if_failed();
                WINRT_ASSERT(this->m_status == AsyncStatus::Started);
                throw winrt::hresult_illegal_method_call();
            }

            void return_void()
            {
                winrt::Windows::Foundation::AsyncActionWithProgressCompletedHandler<TProgress> handler;
                AsyncStatus status;

                {
                    winrt::slim_lock_guard const guard(this->m_lock);

                    if (this->m_status == AsyncStatus::Started)
                    {
                        this->m_status = AsyncStatus::Completed;
                    }
                    else
                    {
                        WINRT_ASSERT(this->m_status == AsyncStatus::Canceled);
                        this->m_exception = make_exception_ptr(winrt::hresult_canceled());
                    }

                    handler = std::move(this->m_completed);
                    status = this->m_status;
                }

                if (handler)
                {
                    handler(*this, status);
                }
            }

            void set_progress(TProgress const& result)
            {
                if (auto handler = Progress())
                {
                    handler(*this, result);
                }
            }

            template <typename Expression>
            Expression&& await_transform(Expression&& expression)
            {
                if (this->Status() == AsyncStatus::Canceled)
                {
                    throw winrt::hresult_canceled();
                }

                return forward<Expression>(expression);
            }

            winrt::impl::cancellation_token<promise_type> await_transform(winrt::get_cancellation_token_t) noexcept
            {
                return{ this };
            }

            winrt::impl::progress_token<promise_type, TProgress> await_transform(winrt::get_progress_token_t) noexcept
            {
                return{ this };
            }

            ProgressHandler m_progress;
        };
    };
}

WINRT_EXPORT namespace std::experimental
{
    template <typename TResult, typename... Args>
    struct coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<TResult>, Args...>
    {
        struct promise_type final : winrt::impl::promise_base<promise_type, winrt::Windows::Foundation::IAsyncOperation<TResult>,
            winrt::Windows::Foundation::AsyncOperationCompletedHandler<TResult>>
        {
            using AsyncStatus = winrt::Windows::Foundation::AsyncStatus;

            TResult GetResults()
            {
                winrt::slim_lock_guard const guard(this->m_lock);

                if (this->m_status == AsyncStatus::Completed)
                {
                    return m_result;
                }

                this->rethrow_if_failed();
                WINRT_ASSERT(this->m_status == AsyncStatus::Started);
                throw winrt::hresult_illegal_method_call();
            }

            void return_value(TResult const& result)
            {
                winrt::Windows::Foundation::AsyncOperationCompletedHandler<TResult> handler;
                AsyncStatus status;

                {
                    winrt::slim_lock_guard const guard(this->m_lock);

                    if (this->m_status == AsyncStatus::Started)
                    {
                        this->m_status = AsyncStatus::Completed;
                        m_result = result;
                    }
                    else
                    {
                        WINRT_ASSERT(this->m_status == AsyncStatus::Canceled);
                        this->m_exception = make_exception_ptr(winrt::hresult_canceled());
                    }

                    handler = std::move(this->m_completed);
                    status = this->m_status;
                }

                if (handler)
                {
                    handler(*this, status);
                }
            }

            template <typename Expression>
            Expression&& await_transform(Expression&& expression)
            {
                if (this->Status() == AsyncStatus::Canceled)
                {
                    throw winrt::hresult_canceled();
                }

                return forward<Expression>(expression);
            }

            winrt::impl::cancellation_token<promise_type> await_transform(winrt::get_cancellation_token_t) noexcept
            {
                return{ this };
            }

            TResult m_result{ winrt::impl::empty_value<TResult>() };
        };
    };
}

WINRT_EXPORT namespace std::experimental
{
    template <typename TResult, typename TProgress, typename... Args>
    struct coroutine_traits<winrt::Windows::Foundation::IAsyncOperationWithProgress<TResult, TProgress>, Args...>
    {
        struct promise_type final : winrt::impl::promise_base<promise_type, winrt::Windows::Foundation::IAsyncOperationWithProgress<TResult, TProgress>,
            winrt::Windows::Foundation::AsyncOperationWithProgressCompletedHandler<TResult, TProgress>>
        {
            using AsyncStatus = winrt::Windows::Foundation::AsyncStatus;
            using ProgressHandler = winrt::Windows::Foundation::AsyncOperationProgressHandler<TResult, TProgress>;

            void Progress(ProgressHandler const& handler)
            {
                winrt::slim_lock_guard const guard(this->m_lock);
                m_progress = handler;
            }

            ProgressHandler Progress()
            {
                winrt::slim_lock_guard const guard(this->m_lock);
                return m_progress;
            }

            TResult GetResults()
            {
                winrt::slim_lock_guard const guard(this->m_lock);

                if (this->m_status == AsyncStatus::Completed)
                {
                    return m_result;
                }

                this->rethrow_if_failed();
                WINRT_ASSERT(this->m_status == AsyncStatus::Started);
                throw winrt::hresult_illegal_method_call();
            }

            void return_value(TResult const& result)
            {
                winrt::Windows::Foundation::AsyncOperationWithProgressCompletedHandler<TResult, TProgress> handler;
                AsyncStatus status;

                {
                    winrt::slim_lock_guard const guard(this->m_lock);

                    if (this->m_status == AsyncStatus::Started)
                    {
                        this->m_status = AsyncStatus::Completed;
                        m_result = result;
                    }
                    else
                    {
                        WINRT_ASSERT(this->m_status == AsyncStatus::Canceled);
                        this->m_exception = make_exception_ptr(winrt::hresult_canceled());
                    }

                    handler = std::move(this->m_completed);
                    status = this->m_status;
                }

                if (handler)
                {
                    handler(*this, status);
                }
            }

            void set_progress(TProgress const& result)
            {
                if (auto handler = Progress())
                {
                    handler(*this, result);
                }
            }

            template <typename Expression>
            Expression&& await_transform(Expression&& expression)
            {
                if (this->Status() == AsyncStatus::Canceled)
                {
                    throw winrt::hresult_canceled();
                }

                return forward<Expression>(expression);
            }

            winrt::impl::cancellation_token<promise_type> await_transform(winrt::get_cancellation_token_t) noexcept
            {
                return{ this };
            }

            winrt::impl::progress_token<promise_type, TProgress> await_transform(winrt::get_progress_token_t) noexcept
            {
                return{ this };
            }

            TResult m_result{ winrt::impl::empty_value<TResult>() };
            ProgressHandler m_progress;
        };
    };
}

#ifdef _DEBUG
#define WINRT_NATVIS
#endif

#ifdef WINRT_NATVIS

namespace winrt::impl
{
    struct natvis
    {
        static auto __stdcall abi_val(::IUnknown* object, wchar_t const * iid_str, int method)
        {
            union variant
            {
                bool b;
                wchar_t c;
                int8_t i1;
                int16_t i2;
                int32_t i4;
                int64_t i8;
                uint8_t u1;
                uint16_t u2;
                uint32_t u4;
                uint64_t u8;
                float r4;
                double r8;
                GUID g;
                HSTRING s;
                BYTE v[1024];
            }
            value{};
            IID iid{};
            if (SUCCEEDED(IIDFromString(iid_str, &iid)))
            {
                IInspectable* pinsp;
                typedef HRESULT(__stdcall IInspectable::* PropertyAccessor)(void*);
                if (SUCCEEDED(object->QueryInterface(iid, reinterpret_cast<void**>(&pinsp))))
                {
                    auto vtbl = *(PropertyAccessor**)pinsp;
                    static const int IInspectable_vtbl_size = 6;
                    auto get_Property = vtbl[method + IInspectable_vtbl_size];
                    (pinsp->*get_Property)(&value);
                    pinsp->Release();
                }
            }
            return value;
        }

        static auto __stdcall get_val(winrt::Windows::Foundation::IInspectable* object, wchar_t const * iid_str, int method)
        {
            return abi_val(get_unknown(*object), iid_str, method);
        }
    };
}

extern "C"
__declspec(selectany)
decltype(winrt::impl::natvis::abi_val) & WINRT_abi_val = winrt::impl::natvis::abi_val;

extern "C"
__declspec(selectany)
decltype(winrt::impl::natvis::get_val) & WINRT_get_val = winrt::impl::natvis::get_val;

#ifdef _M_IX86
#pragma comment(linker, "/include:_WINRT_abi_val")
#pragma comment(linker, "/include:_WINRT_get_val")
#else
#pragma comment(linker, "/include:WINRT_abi_val")
#pragma comment(linker, "/include:WINRT_get_val")
#endif

#endif

#define CPPWINRT_VERSION "1.0.180227.3"

// WINRT_version is used by Microsoft to analyze C++/WinRT library adoption and inform future product decisions.
extern "C"
__declspec(selectany)
char const * const WINRT_version = "C++/WinRT version:" CPPWINRT_VERSION;

#ifdef _M_IX86
#pragma comment(linker, "/include:_WINRT_version")
#else
#pragma comment(linker, "/include:WINRT_version")
#endif

WINRT_EXPORT namespace winrt
{
    template <size_t BaseSize, size_t ComponentSize>
    constexpr bool check_version(char const(&base)[BaseSize], char const(&component)[ComponentSize]) noexcept
    {
        if constexpr (BaseSize != ComponentSize)
        {
            return false;
        }

        for (size_t i = 0; i != BaseSize - 1; ++i)
        {
            if (base[i] != component[i])
            {
                return false;
            }
        }

        return true;
    }
}

WINRT_WARNING_POP
