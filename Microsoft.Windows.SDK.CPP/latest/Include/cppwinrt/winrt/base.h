﻿// C++/WinRT v1.0.190111.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once

#include <algorithm>
#include <array>
#include <atomic>
#include <chrono>
#include <clocale>
#include <cstddef>
#include <iterator>
#include <limits>
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

#if __has_include(<WindowsNumerics.impl.h>)
#define WINRT_NUMERICS
#include <directxmath.h>
#endif

#ifndef WINRT_EXPORT
#define WINRT_EXPORT
#else
export module winrt;
#endif

#ifdef WINRT_NUMERICS

#define _WINDOWS_NUMERICS_NAMESPACE_ winrt::Windows::Foundation::Numerics
#define _WINDOWS_NUMERICS_BEGIN_NAMESPACE_ WINRT_EXPORT namespace winrt::Windows::Foundation::Numerics
#define _WINDOWS_NUMERICS_END_NAMESPACE_

#ifdef __clang__
#define _XM_NO_INTRINSICS_
#endif

#include <WindowsNumerics.impl.h>

#ifdef __clang__
#undef _XM_NO_INTRINSICS_
#endif

#undef _WINDOWS_NUMERICS_NAMESPACE_
#undef _WINDOWS_NUMERICS_BEGIN_NAMESPACE_
#undef _WINDOWS_NUMERICS_END_NAMESPACE_

#endif

#ifdef _DEBUG

#define WINRT_ASSERT _ASSERTE
#define WINRT_VERIFY WINRT_ASSERT
#define WINRT_VERIFY_(result, expression) WINRT_ASSERT(result == expression)

#else

#define WINRT_ASSERT(expression) ((void)0)
#define WINRT_VERIFY(expression) (void)(expression)
#define WINRT_VERIFY_(result, expression) (void)(expression)

#endif

#if defined(_MSC_VER)
#define WINRT_EBO __declspec(empty_bases)
#define WINRT_NOVTABLE __declspec(novtable)
#define WINRT_CALL __stdcall
#define WINRT_NOINLINE  __declspec(noinline)
#define WINRT_FORCEINLINE __forceinline
#else
#define WINRT_EBO
#define WINRT_NOVTABLE
#define WINRT_CALL
#define WINRT_NOINLINE
#define WINRT_FORCEINLINE
#endif

#if defined(_MSC_VER) && _ITERATOR_DEBUG_LEVEL != 0
#define WINRT_CHECKED_ITERATORS
#endif

#define WINRT_SHIM(...) (*(abi_t<__VA_ARGS__>**)&static_cast<__VA_ARGS__ const&>(static_cast<D const&>(*this)))

#ifndef WINRT_EXTERNAL_CATCH_CLAUSE
#define WINRT_EXTERNAL_CATCH_CLAUSE
#endif

#if defined(_MSC_VER)
#ifdef _M_HYBRID
#define WINRT_LINK(function, count) __pragma(comment(linker, "/alternatename:#WINRT_" #function "@" #count "=#" #function "@" #count))
#elif _M_IX86
#define WINRT_LINK(function, count) __pragma(comment(linker, "/alternatename:_WINRT_" #function "@" #count "=_" #function "@" #count))
#else
#define WINRT_LINK(function, count) __pragma(comment(linker, "/alternatename:WINRT_" #function "=" #function))
#endif
#else
#define WINRT_LINK(function, count)
#endif

#if defined _M_ARM
#define WINRT_INTERLOCKED_READ_MEMORY_BARRIER (__dmb(_ARM_BARRIER_ISH));
#elif defined _M_ARM64
#define WINRT_INTERLOCKED_READ_MEMORY_BARRIER (__dmb(_ARM64_BARRIER_ISH));
#endif

#ifdef __IUnknown_INTERFACE_DEFINED__
#define WINRT_WINDOWS_ABI

namespace winrt::impl
{
    using hresult_type = long;
    using ref_count_type = unsigned long;
}

#else

namespace winrt::impl
{
    using hresult_type = int32_t;
    using ref_count_type = uint32_t;
}

#endif

#if defined(_DEBUG) && defined(_MSC_VER) && !defined(__clang__)

namespace winrt::impl
{
    template <typename L, typename T, typename...Args>
    using invoker_t = decltype(std::declval<L>()(std::declval<T>(), std::declval<Args>()...));
}

#define WINRT_WRAP(...) __VA_ARGS__

#define WINRT_ASSERT_DECLARATION(M, R, ...) WINRT_ASSERT_DECLARATION_(M, R, __VA_ARGS__)

#define WINRT_ASSERT_DECLARATION_(M, R, ...) \
{ \
    auto invocation = [](auto&& d, auto&&... params) -> decltype((R)d.M(params...)) {}; \
    static_assert(winrt::impl::is_detected_v<winrt::impl::invoker_t, decltype(invocation), D, __VA_ARGS__>, \
        "\n\n\tC++/WinRT: Could not find method in implementation class:\n\t\t" #R " " #M "(" #__VA_ARGS__ ");\n"); \
}

#else

#define WINRT_ASSERT_DECLARATION(...) ((void)0)

#endif

#if defined(__clang__) 

#define WINRT_WARNING_PUSH \
_Pragma("clang diagnostic push") \
_Pragma("clang diagnostic ignored \"-Wdeprecated-declarations\"")

#define WINRT_WARNING_POP \
_Pragma("clang diagnostic pop")

#else

#define WINRT_WARNING_PUSH
#define WINRT_WARNING_POP

#endif

namespace winrt::impl
{
    using ptp_io = struct tp_io*;
    using ptp_timer = struct tp_timer*;
    using ptp_wait = struct tp_wait*;
    using srwlock = struct srwlock_*;
    using condition_variable = struct condition_variable_*;
    using bstr = wchar_t*;

    inline bool is_guid_equal(uint32_t const* const left, uint32_t const* const right) noexcept
    {
        return left[0] == right[0] && left[1] == right[1] && left[2] == right[2] && left[3] == right[3];
    }
}

WINRT_EXPORT namespace winrt
{
    struct guid
    {
        uint32_t Data1;
        uint16_t Data2;
        uint16_t Data3;
        uint8_t  Data4[8];

        guid() noexcept = default;

        constexpr guid(uint32_t const Data1, uint16_t const Data2, uint16_t const Data3, std::array<uint8_t, 8> const& Data4) noexcept :
            Data1(Data1),
            Data2(Data2),
            Data3(Data3),
            Data4{ Data4[0], Data4[1], Data4[2], Data4[3], Data4[4], Data4[5], Data4[6], Data4[7] }
        {
        }

#ifdef WINRT_WINDOWS_ABI

        constexpr guid(GUID const& value) noexcept :
            Data1(value.Data1),
            Data2(value.Data2),
            Data3(value.Data3),
            Data4{ value.Data4[0], value.Data4[1], value.Data4[2], value.Data4[3], value.Data4[4], value.Data4[5], value.Data4[6], value.Data4[7] }
        {

        }

        operator GUID const&() const noexcept
        {
            return reinterpret_cast<GUID const&>(*this);
        }

#endif
    };

    inline bool operator==(guid const& left, guid const& right) noexcept
    {
        return impl::is_guid_equal(reinterpret_cast<uint32_t const*>(&left), reinterpret_cast<uint32_t const*>(&right));
    }

    inline bool operator!=(guid const& left, guid const& right) noexcept
    {
        return !(left == right);
    }
}

extern "C"
{
    int32_t WINRT_CALL WINRT_GetRestrictedErrorInfo(void** info) noexcept;
    int32_t WINRT_CALL WINRT_RoGetActivationFactory(void* classId, winrt::guid const& iid, void** factory) noexcept;
    int32_t WINRT_CALL WINRT_RoInitialize(uint32_t type) noexcept;
    int32_t WINRT_CALL WINRT_RoOriginateLanguageException(int32_t error, void* message, void* exception) noexcept;
    void    WINRT_CALL WINRT_RoUninitialize() noexcept;
    int32_t WINRT_CALL WINRT_SetRestrictedErrorInfo(void* info) noexcept;
    int32_t WINRT_CALL WINRT_RoGetAgileReference(uint32_t options, winrt::guid const& iid, void* object, void** reference) noexcept;
    int32_t WINRT_CALL WINRT_CoIncrementMTAUsage(void** cookie) noexcept;

    int32_t WINRT_CALL WINRT_WindowsCreateString(wchar_t const* sourceString, uint32_t length, void** string) noexcept;
    int32_t WINRT_CALL WINRT_WindowsCreateStringReference(wchar_t const* sourceString, uint32_t length, void* hstringHeader, void** string) noexcept;
    int32_t WINRT_CALL WINRT_WindowsDuplicateString(void* string, void** newString) noexcept;
    int32_t WINRT_CALL WINRT_WindowsDeleteString(void* string) noexcept;
    int32_t WINRT_CALL WINRT_WindowsStringHasEmbeddedNull(void* string, int* hasEmbedNull) noexcept;
    int32_t WINRT_CALL WINRT_WindowsPreallocateStringBuffer(uint32_t length, wchar_t** charBuffer, void** bufferHandle) noexcept;
    int32_t WINRT_CALL WINRT_WindowsDeleteStringBuffer(void* bufferHandle) noexcept;
    int32_t WINRT_CALL WINRT_WindowsPromoteStringBuffer(void* bufferHandle, void** string) noexcept;
    int32_t WINRT_CALL WINRT_WindowsConcatString(void* string1, void* string2, void** newString) noexcept;
    wchar_t const* WINRT_CALL WINRT_WindowsGetStringRawBuffer(void* string, uint32_t* length) noexcept;
    uint32_t WINRT_CALL WINRT_WindowsGetStringLen(void* string) noexcept;

    int32_t  WINRT_CALL WINRT_CoCreateFreeThreadedMarshaler(void* outer, void** marshaler) noexcept;
    int32_t  WINRT_CALL WINRT_CoCreateInstance(winrt::guid const& clsid, void* outer, uint32_t context, winrt::guid const& iid, void** object) noexcept;
    int32_t  WINRT_CALL WINRT_CoGetCallContext(winrt::guid const& iid, void** object) noexcept;
    int32_t  WINRT_CALL WINRT_CoGetObjectContext(winrt::guid const& iid, void** object) noexcept;
    int32_t  WINRT_CALL WINRT_CoGetApartmentType(int32_t* type, int32_t* qualifier) noexcept;
    void*    WINRT_CALL WINRT_CoTaskMemAlloc(std::size_t size) noexcept;
    void     WINRT_CALL WINRT_CoTaskMemFree(void* ptr) noexcept;
    void     WINRT_CALL WINRT_SysFreeString(winrt::impl::bstr string) noexcept;
    uint32_t WINRT_CALL WINRT_SysStringLen(winrt::impl::bstr string) noexcept;
    int32_t  WINRT_CALL WINRT_IIDFromString(wchar_t const* string, winrt::guid* iid) noexcept;
    int32_t  WINRT_CALL WINRT_CloseHandle(void* hObject) noexcept;
    int32_t  WINRT_CALL WINRT_MultiByteToWideChar(uint32_t codepage, uint32_t flags, char const* in_string, int32_t in_size, wchar_t* out_string, int32_t out_size) noexcept;
    int32_t  WINRT_CALL WINRT_WideCharToMultiByte(uint32_t codepage, uint32_t flags, wchar_t const* int_string, int32_t in_size, char* out_string, int32_t out_size, char const* default_char, int32_t* default_used) noexcept;
    int32_t  WINRT_CALL WINRT_HeapFree(void* heap, uint32_t flags, void* value) noexcept;
    void*    WINRT_CALL WINRT_GetProcessHeap() noexcept;
    uint32_t WINRT_CALL WINRT_FormatMessageW(uint32_t flags, void const* source, uint32_t code, uint32_t language, wchar_t* buffer, uint32_t size, va_list* arguments) noexcept;
    uint32_t WINRT_CALL WINRT_GetLastError() noexcept;
    void     WINRT_CALL WINRT_GetSystemTimePreciseAsFileTime(void* result) noexcept;

    int32_t  WINRT_CALL WINRT_OpenProcessToken(void* process, uint32_t access, void** token) noexcept;
    void*    WINRT_CALL WINRT_GetCurrentProcess() noexcept;
    int32_t  WINRT_CALL WINRT_DuplicateToken(void* existing, uint32_t level, void** duplicate) noexcept;
    int32_t  WINRT_CALL WINRT_OpenThreadToken(void* thread, uint32_t access, int32_t self, void** token) noexcept;
    void*    WINRT_CALL WINRT_GetCurrentThread() noexcept;
    int32_t  WINRT_CALL WINRT_SetThreadToken(void** thread, void* token) noexcept;

    void    WINRT_CALL WINRT_AcquireSRWLockExclusive(winrt::impl::srwlock* lock) noexcept;
    void    WINRT_CALL WINRT_AcquireSRWLockShared(winrt::impl::srwlock* lock) noexcept;
    uint8_t WINRT_CALL WINRT_TryAcquireSRWLockExclusive(winrt::impl::srwlock* lock) noexcept;
    uint8_t WINRT_CALL WINRT_TryAcquireSRWLockShared(winrt::impl::srwlock* lock) noexcept;
    void    WINRT_CALL WINRT_ReleaseSRWLockExclusive(winrt::impl::srwlock* lock) noexcept;
    void    WINRT_CALL WINRT_ReleaseSRWLockShared(winrt::impl::srwlock* lock) noexcept;
    int32_t WINRT_CALL WINRT_SleepConditionVariableSRW(winrt::impl::condition_variable* cv, winrt::impl::srwlock* lock, uint32_t milliseconds, uint32_t flags) noexcept;
    void    WINRT_CALL WINRT_WakeConditionVariable(winrt::impl::condition_variable* cv) noexcept;
    void    WINRT_CALL WINRT_WakeAllConditionVariable(winrt::impl::condition_variable* cv) noexcept;
    void    WINRT_CALL WINRT_InitializeSListHead(void* head) noexcept;
    void*   WINRT_CALL WINRT_InterlockedPushEntrySList(void* head, void* entry) noexcept;
    void*   WINRT_CALL WINRT_InterlockedFlushSList(void* head) noexcept;

    uint32_t WINRT_CALL WINRT_WaitForSingleObject(void* handle, uint32_t milliseconds) noexcept;
    int32_t  WINRT_CALL WINRT_TrySubmitThreadpoolCallback(void(WINRT_CALL *callback)(void*, void* context), void* context, void*) noexcept;
    winrt::impl::ptp_timer WINRT_CALL WINRT_CreateThreadpoolTimer(void(WINRT_CALL *callback)(void*, void* context, void*), void* context, void*) noexcept;
    void     WINRT_CALL WINRT_SetThreadpoolTimer(winrt::impl::ptp_timer timer, void* time, uint32_t period, uint32_t window) noexcept;
    void     WINRT_CALL WINRT_CloseThreadpoolTimer(winrt::impl::ptp_timer timer) noexcept;
    winrt::impl::ptp_wait WINRT_CALL WINRT_CreateThreadpoolWait(void(WINRT_CALL *callback)(void*, void* context, void*, uint32_t result), void* context, void*) noexcept;
    void     WINRT_CALL WINRT_SetThreadpoolWait(winrt::impl::ptp_wait wait, void* handle, void* timeout) noexcept;
    void     WINRT_CALL WINRT_CloseThreadpoolWait(winrt::impl::ptp_wait wait) noexcept;
    winrt::impl::ptp_io WINRT_CALL WINRT_CreateThreadpoolIo(void* object, void(WINRT_CALL *callback)(void*, void* context, void* overlapped, uint32_t result, std::size_t bytes, void*) noexcept, void* context, void*) noexcept;
    void     WINRT_CALL WINRT_StartThreadpoolIo(winrt::impl::ptp_io io) noexcept;
    void     WINRT_CALL WINRT_CancelThreadpoolIo(winrt::impl::ptp_io io) noexcept;
    void     WINRT_CALL WINRT_CloseThreadpoolIo(winrt::impl::ptp_io io) noexcept;

    int32_t WINRT_CALL WINRT_CanUnloadNow() noexcept;
    int32_t WINRT_CALL WINRT_GetActivationFactory(void* classId, void** factory) noexcept;
}

WINRT_LINK(GetRestrictedErrorInfo, 4)
WINRT_LINK(RoGetActivationFactory, 12)
WINRT_LINK(RoInitialize, 4)
WINRT_LINK(RoOriginateLanguageException, 12)
WINRT_LINK(RoUninitialize, 0)
WINRT_LINK(SetRestrictedErrorInfo, 4)
WINRT_LINK(RoGetAgileReference, 16)
WINRT_LINK(CoIncrementMTAUsage, 4)

WINRT_LINK(WindowsCreateString, 12)
WINRT_LINK(WindowsCreateStringReference, 16)
WINRT_LINK(WindowsDuplicateString, 8)
WINRT_LINK(WindowsDeleteString, 4)
WINRT_LINK(WindowsStringHasEmbeddedNull, 8)
WINRT_LINK(WindowsPreallocateStringBuffer, 12)
WINRT_LINK(WindowsDeleteStringBuffer, 4)
WINRT_LINK(WindowsPromoteStringBuffer, 8)
WINRT_LINK(WindowsConcatString, 12)
WINRT_LINK(WindowsGetStringRawBuffer, 8)
WINRT_LINK(WindowsGetStringLen, 4)

WINRT_LINK(CoCreateFreeThreadedMarshaler, 8)
WINRT_LINK(CoCreateInstance, 20)
WINRT_LINK(CoGetCallContext, 8)
WINRT_LINK(CoGetObjectContext, 8)
WINRT_LINK(CoGetApartmentType, 8)
WINRT_LINK(CoTaskMemAlloc, 4)
WINRT_LINK(CoTaskMemFree, 4)
WINRT_LINK(SysFreeString, 4)
WINRT_LINK(SysStringLen, 4)
WINRT_LINK(IIDFromString, 8)
WINRT_LINK(CloseHandle, 4)
WINRT_LINK(MultiByteToWideChar, 24)
WINRT_LINK(WideCharToMultiByte, 32)
WINRT_LINK(HeapFree, 12)
WINRT_LINK(GetProcessHeap, 0)
WINRT_LINK(FormatMessageW, 28)
WINRT_LINK(GetLastError, 0)
WINRT_LINK(GetSystemTimePreciseAsFileTime, 4)

WINRT_LINK(OpenProcessToken, 12)
WINRT_LINK(GetCurrentProcess, 0)
WINRT_LINK(DuplicateToken, 12)
WINRT_LINK(OpenThreadToken, 16)
WINRT_LINK(GetCurrentThread, 0)
WINRT_LINK(SetThreadToken, 8)

WINRT_LINK(AcquireSRWLockExclusive, 4)
WINRT_LINK(AcquireSRWLockShared, 4)
WINRT_LINK(TryAcquireSRWLockExclusive, 4)
WINRT_LINK(TryAcquireSRWLockShared, 4)
WINRT_LINK(ReleaseSRWLockExclusive, 4)
WINRT_LINK(ReleaseSRWLockShared, 4)
WINRT_LINK(SleepConditionVariableSRW, 16)
WINRT_LINK(WakeConditionVariable, 4)
WINRT_LINK(WakeAllConditionVariable, 4)
WINRT_LINK(InitializeSListHead, 4)
WINRT_LINK(InterlockedPushEntrySList, 8)
WINRT_LINK(InterlockedFlushSList, 4)

WINRT_LINK(WaitForSingleObject, 8)
WINRT_LINK(TrySubmitThreadpoolCallback, 12)
WINRT_LINK(CreateThreadpoolTimer, 12)
WINRT_LINK(SetThreadpoolTimer, 16)
WINRT_LINK(CloseThreadpoolTimer, 4)
WINRT_LINK(CreateThreadpoolWait, 12)
WINRT_LINK(SetThreadpoolWait, 12)
WINRT_LINK(CloseThreadpoolWait, 4)
WINRT_LINK(CreateThreadpoolIo, 16)
WINRT_LINK(StartThreadpoolIo, 4)
WINRT_LINK(CancelThreadpoolIo, 4)
WINRT_LINK(CloseThreadpoolIo, 4)

WINRT_EXPORT namespace winrt::Windows::Foundation
{
    enum class AsyncStatus : int32_t
    {
        Started,
        Completed,
        Canceled,
        Error,
    };

    enum class TrustLevel : int32_t
    {
        BaseTrust,
        PartialTrust,
        FullTrust
    };

    struct IUnknown;
    struct IInspectable;
    struct IActivationFactory;
    struct IAsyncInfo;
    struct IAsyncAction;
    struct AsyncActionCompletedHandler;
    template <typename T> struct IReference;
    template <typename T> struct IReferenceArray;
    template <typename TResult> struct AsyncOperationCompletedHandler;
    template <typename TProgress> struct AsyncActionProgressHandler;
    template <typename TProgress> struct AsyncActionWithProgressCompletedHandler;
    template <typename TResult, typename TProgress> struct AsyncOperationProgressHandler;
    template <typename TResult, typename TProgress> struct AsyncOperationWithProgressCompletedHandler;
    template <typename TResult> struct IAsyncOperation;
    template <typename TProgress> struct IAsyncActionWithProgress;
    template <typename TResult, typename TProgress> struct IAsyncOperationWithProgress;
    template <typename T> struct EventHandler;
    template <typename TSender, typename TArgs> struct TypedEventHandler;
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

WINRT_EXPORT namespace winrt
{
    struct hresult
    {
        int32_t value{};

        constexpr hresult() noexcept = default;

        constexpr hresult(int32_t const value) noexcept : value(value)
        {
        }

        constexpr operator int32_t() const noexcept
        {
            return value;
        }
    };

    template <typename T>
    using optional = Windows::Foundation::IReference<T>;
}

namespace winrt::impl
{
    using namespace std::literals;
    namespace wfc = Windows::Foundation::Collections;

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

    template <typename T, typename = std::void_t<>>
    struct default_interface
    {
        using type = T;
    };

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
    inline constexpr bool has_category_v = !std::is_same_v<category_t<T>, void>;

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
    struct missing_guid_of
    {
        static constexpr bool value{};
    };

    template <typename T>
    struct missing_guid
    {
        static_assert(missing_guid_of<T>::value, "Support for non-WinRT interfaces is disabled. To enable, simply #include <unknwn.h> before any C++/WinRT headers.");
    };

#ifdef WINRT_WINDOWS_ABI
    template <typename T>
    struct guid_storage
    {
        static constexpr guid value{ __uuidof(T) };
    };
#else
    template <typename T>
    struct guid_storage : missing_guid<T> {};
#endif

    template <typename T>
    struct is_enum_flag : std::false_type {};

    template <typename T>
    inline constexpr bool is_enum_flag_v = is_enum_flag<T>::value;

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
    inline constexpr bool is_implements_v = is_implements<T>::value;

    template <typename D, typename I>
    struct require_one : consume_t<D, I>
    {
        operator I() const noexcept
        {
            return static_cast<D const*>(this)->template try_as<I>();
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
            return static_cast<D const*>(this)->template try_as<I>();
        }
    };

    template <typename D, typename... I>
    struct WINRT_EBO base : base_one<D, I>...
    {};

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

    template <template <typename...> typename Trait, typename Enabler, typename... Args>
    struct is_detected : std::false_type {};

    template <template <typename...> typename Trait, typename... Args>
    struct is_detected<Trait, std::void_t<Trait<Args...>>, Args...> : std::true_type {};

    template <template <typename...> typename Trait, typename... Args>
    inline constexpr bool is_detected_v = std::is_same_v<typename is_detected<Trait, void, Args...>::type, std::true_type>;

    template <typename ... Types>
    struct typelist {};

    template <typename ... Lists>
    struct typelist_concat;

    template <>
    struct typelist_concat<> { using type = winrt::impl::typelist<>; };

    template <typename ... List>
    struct typelist_concat<winrt::impl::typelist<List...>> { using type = winrt::impl::typelist<List...>; };

    template <typename ... List1, typename ... List2, typename ... Rest>
    struct typelist_concat<winrt::impl::typelist<List1...>, winrt::impl::typelist<List2...>, Rest...>
        : typelist_concat<winrt::impl::typelist<List1..., List2...>, Rest...>
    {};

    template <typename T>
    struct for_each;

    template <typename ... Types>
    struct for_each<typelist<Types...>>
    {
        template <typename Func>
        static auto apply([[maybe_unused]] Func&& func)
        {
            return (func(Types{}), ...);
        }
    };

    template <typename T>
    struct find_if;

    template <typename ... Types>
    struct find_if<typelist<Types...>>
    {
        template <typename Func>
        static bool apply([[maybe_unused]] Func&& func)
        {
            return (func(Types{}) || ...);
        }
    };
}

WINRT_EXPORT template <typename T>
constexpr auto operator|(T const left, T const right) noexcept -> std::enable_if_t<winrt::impl::is_enum_flag_v<T>, T>
{
    return static_cast<T>(winrt::impl::to_underlying_type(left) | winrt::impl::to_underlying_type(right));
}

WINRT_EXPORT template <typename T>
constexpr auto operator|=(T& left, T const right) noexcept -> std::enable_if_t<winrt::impl::is_enum_flag_v<T>, T>
{
    left = left | right;
    return left;
}

WINRT_EXPORT template <typename T>
constexpr auto operator&(T const left, T const right) noexcept -> std::enable_if_t<winrt::impl::is_enum_flag_v<T>, T>
{
    return static_cast<T>(winrt::impl::to_underlying_type(left) & winrt::impl::to_underlying_type(right));
}

WINRT_EXPORT template <typename T>
constexpr auto operator&=(T& left, T const right) noexcept -> std::enable_if_t<winrt::impl::is_enum_flag_v<T>, T>
{
    left = left & right;
    return left;
}

WINRT_EXPORT template <typename T>
constexpr auto operator~(T const value) noexcept -> std::enable_if_t<winrt::impl::is_enum_flag_v<T>, T>
{
    return static_cast<T>(~winrt::impl::to_underlying_type(value));
}

WINRT_EXPORT template <typename T>
constexpr auto operator^(T const left, T const right) noexcept -> std::enable_if_t<winrt::impl::is_enum_flag_v<T>, T>
{
    return static_cast<T>(winrt::impl::to_underlying_type(left) ^ winrt::impl::to_underlying_type(right));
}

WINRT_EXPORT template <typename T>
constexpr auto operator^=(T& left, T const right) noexcept -> std::enable_if_t<winrt::impl::is_enum_flag_v<T>, T>
{
    left = left ^ right;
    return left;
}

WINRT_EXPORT namespace winrt
{
    template <typename T>
    using default_interface = typename impl::default_interface<T>::type;

    template <typename T>
    constexpr guid const& guid_of() noexcept
    {
        return impl::guid_storage<default_interface<T>>::value;
    }

    struct event_token;
}

namespace winrt::impl
{
    template <typename T>
    constexpr bool is_guid_of(guid const& id) noexcept
    {
        return id == guid_of<T>();
    }

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
    constexpr auto concat(std::array<T, LeftSize> const& left, std::array<T, RightSize> const& right) noexcept
    {
        return concat(left, right, std::make_index_sequence<LeftSize>(), std::make_index_sequence<RightSize>());
    }

    template <typename T, size_t LeftSize, size_t RightSize>
    constexpr auto concat(std::array<T, LeftSize> const& left, T const(&right)[RightSize]) noexcept
    {
        return concat(left, to_array(right));
    }

    template <typename T, size_t LeftSize, size_t RightSize>
    constexpr auto concat(T const(&left)[LeftSize], std::array<T, RightSize> const& right) noexcept
    {
        return concat(to_array(left), right);
    }

    template <typename T, size_t LeftSize>
    constexpr auto concat(std::array<T, LeftSize> const& left, T const right) noexcept
    {
        return concat(left, std::array<T, 1>{right});
    }

    template <typename T, size_t RightSize>
    constexpr auto concat(T const left, std::array<T, RightSize> const& right) noexcept
    {
        return concat(std::array<T, 1>{left}, right);
    }

    template <typename First, typename... Rest>
    constexpr auto combine(First const& first, Rest const&... rest) noexcept
    {
        if constexpr (sizeof...(rest) == 0)
        {
            return to_array(first);
        }
        else
        {
            return concat(first, combine(rest...));
        }
    }

    template <typename T, size_t LS, size_t RS, size_t... LI, size_t... RI>
    constexpr std::array<T, LS + RS - 1> zconcat_base(std::array<T, LS> const& left, std::array<T, RS> const& right, std::index_sequence<LI...> const, std::index_sequence<RI...> const) noexcept
    {
        return { left[LI]..., right[RI]..., T{} };
    }

    template <typename T, size_t LS, size_t RS>
    constexpr auto zconcat(std::array<T, LS> const& left, std::array<T, RS> const& right) noexcept
    {
        return zconcat_base(left, right, std::make_index_sequence<LS - 1>(), std::make_index_sequence<RS - 1>());
    }

    template <typename T, size_t S, size_t... I>
    constexpr std::array<T, S> to_zarray_base(T const(&value)[S], std::index_sequence<I...> const) noexcept
    {
        return { value[I]... };
    }

    template <typename T, size_t S>
    constexpr auto to_zarray(T const(&value)[S]) noexcept
    {
        return to_zarray_base(value, std::make_index_sequence<S>());
    }

    template <typename T, size_t S>
    constexpr auto to_zarray(std::array<T, S> const& value) noexcept
    {
        return value;
    }

    template <typename First, typename... Rest>
    constexpr auto zcombine(First const& first, Rest const&... rest) noexcept
    {
        if constexpr (sizeof...(rest) == 0)
        {
            return to_zarray(first);
        }
        else
        {
            return zconcat(to_zarray(first), zcombine(rest...));
        }
    }

    constexpr std::array<uint8_t, 4> to_array(uint32_t value) noexcept
    {
        return { static_cast<uint8_t>(value & 0x000000ff), static_cast<uint8_t>((value & 0x0000ff00) >> 8), static_cast<uint8_t>((value & 0x00ff0000) >> 16), static_cast<uint8_t>((value & 0xff000000) >> 24) };
    }

    constexpr std::array<uint8_t, 2> to_array(uint16_t value) noexcept
    {
        return { static_cast<uint8_t>(value & 0x00ff), static_cast<uint8_t>((value & 0xff00) >> 8) };
    }

    constexpr auto to_array(guid const& value) noexcept
    {
        return combine(to_array(value.Data1), to_array(value.Data2), to_array(value.Data3),
            std::array<uint8_t, 8>{ value.Data4[0], value.Data4[1], value.Data4[2], value.Data4[3], value.Data4[4], value.Data4[5], value.Data4[6], value.Data4[7] });
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
        return combine(uint8_to_hex<T>(static_cast<uint8_t>(value >> 8)), uint8_to_hex<T>(value & 0xFF));
    }

    template <typename T>
    constexpr auto uint32_to_hex(uint32_t const value) noexcept
    {
        return combine(uint16_to_hex<T>(value >> 16), uint16_to_hex<T>(value & 0xFFFF));
    }

    template <typename T>
    constexpr auto to_array(guid const& value) noexcept
    {
        return combine
        (
            std::array<T, 1>{'{'},
            uint32_to_hex<T>(value.Data1), std::array<T, 1>{'-'},
            uint16_to_hex<T>(value.Data2), std::array<T, 1>{'-'},
            uint16_to_hex<T>(value.Data3), std::array<T, 1>{'-'},
            uint16_to_hex<T>(value.Data4[0] << 8 | value.Data4[1]), std::array<T, 1>{'-'},
            uint16_to_hex<T>(value.Data4[2] << 8 | value.Data4[3]),
            uint16_to_hex<T>(value.Data4[4] << 8 | value.Data4[5]),
            uint16_to_hex<T>(value.Data4[6] << 8 | value.Data4[7]),
            std::array<T, 1>{'}'}
        );
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
    constexpr guid to_guid(std::array<uint8_t, Size> const& arr) noexcept
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
    inline constexpr auto& name_v = name<T>::value;

    constexpr uint32_t endian_swap(uint32_t value) noexcept
    {
        return (value & 0xFF000000) >> 24 | (value & 0x00FF0000) >> 8 | (value & 0x0000FF00) << 8 | (value & 0x000000FF) << 24;
    }

    constexpr uint16_t endian_swap(uint16_t value) noexcept
    {
        return (value & 0xFF00) >> 8 | (value & 0x00FF) << 8;
    }

    constexpr guid endian_swap(guid value) noexcept
    {
        value.Data1 = endian_swap(value.Data1);
        value.Data2 = endian_swap(value.Data2);
        value.Data3 = endian_swap(value.Data3);
        return value;
    }

    constexpr guid set_named_guid_fields(guid value) noexcept
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
    constexpr std::array<uint8_t, RemainingSize + 1> make_remaining([[maybe_unused]] std::array<uint8_t, Size> const& input, [[maybe_unused]] uint32_t start_pos, std::index_sequence<Index...>) noexcept
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

        return combine(remaining_buffer, padding_buffer, length_buffer);
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
    constexpr guid generate_guid(std::array<char, Size> const& value) noexcept
    {
        guid namespace_guid = { 0xd57af411, 0x737b, 0xc042,{ 0xab, 0xae, 0x87, 0x8b, 0x1e, 0x16, 0xad, 0xee } };

        auto buffer = combine(to_array(namespace_guid), char_to_byte_array(value, std::make_index_sequence<Size>()));
        auto hash = calculate_sha1(buffer);
        auto big_endian_guid = to_guid(hash);
        auto little_endian_guid = endian_swap(big_endian_guid);
        return set_named_guid_fields(little_endian_guid);
    }

    template <typename TArg, typename... TRest>
    struct arg_collection
    {
        constexpr static auto data{ combine(to_array(signature<TArg>::data), ";", arg_collection<TRest...>::data) };
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
        static constexpr guid value{ generate_guid(signature<T>::data) };
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
    struct name<guid>
    {
        static constexpr auto & value{ L"Guid" };
        static constexpr auto & data{ "g16" };
    };

    template <>
    struct category<guid>
    {
        using type = basic_category;
    };

    template <>
    struct name<hresult>
    {
        static constexpr auto & value{ L"Windows.Foundation.HResult" };
    };

    template <>
    struct category<hresult>
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
        constexpr static auto data{ combine("enum(", to_utf8<T>(), ";", signature<enum_type>::data, ")") };
    };

    template <typename... Fields, typename T>
    struct category_signature<struct_category<Fields...>, T>
    {
        constexpr static auto data{ combine("struct(", to_utf8<T>(), ";", arg_collection<Fields...>::data, ")") };
    };

    template <typename T>
    struct category_signature<class_category, T>
    {
        constexpr static auto data{ combine("rc(", to_utf8<T>(), ";", signature<winrt::default_interface<T>>::data, ")") };
    };

    template <typename... Args, typename T>
    struct category_signature<pinterface_category<Args...>, T>
    {
        constexpr static auto data{ combine("pinterface(", to_array<char>(category<T>::value), ";", arg_collection<Args...>::data, ")") };
    };

    template <typename T>
    struct category_signature<interface_category, T>
    {
        constexpr static auto data{ to_array<char>(guid_of<T>()) };
    };

    template <typename T>
    struct category_signature<delegate_category, T>
    {
        constexpr static auto data{ combine("delegate(", to_array<char>(guid_of<T>()), ")") };
    };

    template <size_t Size>
    constexpr std::wstring_view to_wstring_view(std::array<wchar_t, Size> const& value) noexcept
    {
        return { value.data(), Size - 1 };
    }

    template <size_t Size>
    constexpr std::wstring_view to_wstring_view(wchar_t const (&value)[Size]) noexcept
    {
        return { value, Size - 1 };
    }
}

WINRT_EXPORT namespace winrt
{
    template <typename T>
    constexpr auto name_of() noexcept
    {
        return impl::to_wstring_view(impl::name_v<T>);
    }
}

WINRT_EXPORT namespace winrt
{
    template <typename T>
    struct handle_type
    {
        using type = typename T::type;

        handle_type() noexcept = default;

        explicit handle_type(type value) noexcept : m_value(value)
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
        using type = void*;

        static void close(type value) noexcept
        {
            WINRT_VERIFY_(1, WINRT_CloseHandle(value));
        }

        static constexpr type invalid() noexcept
        {
            return nullptr;
        }
    };

    using handle = handle_type<handle_traits>;

    struct file_handle_traits
    {
        using type = void*;

        static void close(type value) noexcept
        {
            WINRT_VERIFY_(1, WINRT_CloseHandle(value));
        }

        static type invalid() noexcept
        {
            return reinterpret_cast<type>(-1);
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
            WINRT_AcquireSRWLockExclusive(&m_lock);
        }

        void lock_shared() noexcept
        {
            WINRT_AcquireSRWLockShared(&m_lock);
        }

        bool try_lock() noexcept
        {
            return 0 != WINRT_TryAcquireSRWLockExclusive(&m_lock);
        }

        bool try_lock_shared() noexcept
        {
            return 0 != WINRT_TryAcquireSRWLockShared(&m_lock);
        }

        void unlock() noexcept
        {
            WINRT_ReleaseSRWLockExclusive(&m_lock);
        }

        void unlock_shared() noexcept
        {
            WINRT_ReleaseSRWLockShared(&m_lock);
        }

    private:
        friend slim_condition_variable;

        auto get() noexcept
        {
            return &m_lock;
        }

        impl::srwlock m_lock{};
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
        slim_mutex& m_mutex;
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
        slim_mutex& m_mutex;
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
                WINRT_VERIFY(WINRT_SleepConditionVariableSRW(&m_cv, x.get(), 0xFFFFFFFF /*INFINITE*/, 0));
            }
        }

        template <typename T>
        bool wait_for(slim_mutex& x, std::chrono::high_resolution_clock::duration const timeout, T predicate)
        {
            auto const until = std::chrono::high_resolution_clock::now() + timeout;

            while (!predicate())
            {
                auto const milliseconds = std::chrono::duration_cast<std::chrono::milliseconds>(until - std::chrono::high_resolution_clock::now()).count();

                if (milliseconds <= 0)
                {
                    return false;
                }

                if (!WINRT_SleepConditionVariableSRW(&m_cv, x.get(), static_cast<uint32_t>(milliseconds), 0))
                {
                    return predicate();
                }
            }

            return true;
        }

        void notify_one() noexcept
        {
            WINRT_WakeConditionVariable(&m_cv);
        }

        void notify_all() noexcept
        {
            WINRT_WakeAllConditionVariable(&m_cv);
        }

    private:
        impl::condition_variable m_cv{};
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

namespace winrt::impl
{
    struct com_callback_args
    {
        uint32_t reserved1;
        uint32_t reserved2;
        void* data;
    };

    struct ICallbackWithNoReentrancyToApplicationSTA;

    template <> struct abi<Windows::Foundation::IUnknown>
    {
        struct WINRT_NOVTABLE type
        {
            virtual int32_t WINRT_CALL QueryInterface(guid const& id, void** object) noexcept = 0;
            virtual uint32_t WINRT_CALL AddRef() noexcept = 0;
            virtual uint32_t WINRT_CALL Release() noexcept = 0;
        };
    };

    using IUnknown = abi_t<Windows::Foundation::IUnknown>;

    template <> struct abi<Windows::Foundation::IInspectable>
    {
        struct WINRT_NOVTABLE type : IUnknown
        {
            virtual int32_t WINRT_CALL GetIids(uint32_t* count, guid** ids) noexcept = 0;
            virtual int32_t WINRT_CALL GetRuntimeClassName(void** name) noexcept = 0;
            virtual int32_t WINRT_CALL GetTrustLevel(Windows::Foundation::TrustLevel* level) noexcept = 0;
        };
    };

    using IInspectable = abi_t<Windows::Foundation::IInspectable>;

    struct WINRT_NOVTABLE IAgileObject : IUnknown
    {
    };

    struct WINRT_NOVTABLE IAgileReference : IUnknown
    {
        virtual int32_t WINRT_CALL Resolve(guid const& id, void** object) noexcept = 0;
    };

    struct WINRT_NOVTABLE IMarshal : IUnknown
    {
        virtual int32_t WINRT_CALL GetUnmarshalClass(guid const& riid, void* pv, uint32_t dwDestContext, void* pvDestContext, uint32_t mshlflags, guid* pCid) noexcept = 0;
        virtual int32_t WINRT_CALL GetMarshalSizeMax(guid const& riid, void* pv, uint32_t dwDestContext, void* pvDestContext, uint32_t mshlflags, uint32_t* pSize) noexcept = 0;
        virtual int32_t WINRT_CALL MarshalInterface(void* pStm, guid const& riid, void* pv, uint32_t dwDestContext, void* pvDestContext, uint32_t mshlflags) noexcept = 0;
        virtual int32_t WINRT_CALL UnmarshalInterface(void* pStm, guid const& riid, void** ppv) noexcept = 0;
        virtual int32_t WINRT_CALL ReleaseMarshalData(void* pStm) noexcept = 0;
        virtual int32_t WINRT_CALL DisconnectObject(uint32_t dwReserved) noexcept = 0;
    };

    struct WINRT_NOVTABLE IStaticLifetime : IInspectable
    {
        virtual int32_t WINRT_CALL unused() noexcept = 0;
        virtual int32_t WINRT_CALL GetCollection(void** value) noexcept = 0;
    };

    struct WINRT_NOVTABLE IWeakReference : IUnknown
    {
        virtual int32_t WINRT_CALL Resolve(guid const& iid, void** objectReference) noexcept = 0;
    };

    struct WINRT_NOVTABLE IWeakReferenceSource : IUnknown
    {
        virtual int32_t WINRT_CALL GetWeakReference(IWeakReference** weakReference) noexcept = 0;
    };

    struct WINRT_NOVTABLE IRestrictedErrorInfo : IUnknown
    {
        virtual int32_t WINRT_CALL GetErrorDetails(bstr* description, int32_t* error, bstr* restrictedDescription, bstr* capabilitySid) noexcept = 0;
        virtual int32_t WINRT_CALL GetReference(bstr* reference) noexcept = 0;
    };

    struct WINRT_NOVTABLE ILanguageExceptionErrorInfo : IUnknown
    {
        virtual int32_t WINRT_CALL GetLanguageException(IUnknown** exception) noexcept = 0;
    };

    struct WINRT_NOVTABLE ILanguageExceptionErrorInfo2 : ILanguageExceptionErrorInfo
    {
        virtual int32_t WINRT_CALL GetPreviousLanguageExceptionErrorInfo(ILanguageExceptionErrorInfo2** previous) noexcept = 0;
        virtual int32_t WINRT_CALL CapturePropagationContext(IUnknown* exception) noexcept = 0;
        virtual int32_t WINRT_CALL GetPropagationContextHead(ILanguageExceptionErrorInfo2** head) noexcept = 0;
    };

    struct WINRT_NOVTABLE IContextCallback : IUnknown
    {
        virtual int32_t WINRT_CALL ContextCallback(int32_t(WINRT_CALL *callback)(com_callback_args*), com_callback_args* args, guid const& iid, int method, IUnknown* reserved) noexcept = 0;
    };

    struct WINRT_NOVTABLE IServerSecurity : IUnknown
    {
        virtual int32_t WINRT_CALL QueryBlanket(uint32_t*, uint32_t*, wchar_t**, uint32_t*, uint32_t*, void**, uint32_t*) noexcept = 0;
        virtual int32_t WINRT_CALL ImpersonateClient() noexcept = 0;
        virtual int32_t WINRT_CALL RevertToSelf() noexcept = 0;
        virtual int32_t WINRT_CALL IsImpersonating() noexcept = 0;
    };

    struct WINRT_NOVTABLE IBufferByteAccess : IUnknown
    {
        virtual int32_t WINRT_CALL Buffer(uint8_t** value) noexcept = 0;
    };

    template <> struct abi<Windows::Foundation::IActivationFactory>
    {
        struct WINRT_NOVTABLE type : IInspectable
        {
            virtual int32_t WINRT_CALL ActivateInstance(void** instance) noexcept = 0;
        };
    };

    template <> struct abi<Windows::Foundation::AsyncActionCompletedHandler>
    {
        struct type : IUnknown
        {
            virtual int32_t WINRT_CALL Invoke(void* asyncInfo, Windows::Foundation::AsyncStatus asyncStatus) noexcept = 0;
        };
    };

    template <> struct abi<Windows::Foundation::IAsyncInfo>
    {
        struct WINRT_NOVTABLE type : IInspectable
        {
            virtual int32_t WINRT_CALL get_Id(uint32_t* id) noexcept = 0;
            virtual int32_t WINRT_CALL get_Status(Windows::Foundation::AsyncStatus* status) noexcept = 0;
            virtual int32_t WINRT_CALL get_ErrorCode(int32_t* errorCode) noexcept = 0;
            virtual int32_t WINRT_CALL Cancel() noexcept = 0;
            virtual int32_t WINRT_CALL Close() noexcept = 0;
        };
    };

    template <> struct abi<Windows::Foundation::IAsyncAction>
    {
        struct type : IInspectable
        {
            virtual int32_t WINRT_CALL put_Completed(void* handler) noexcept = 0;
            virtual int32_t WINRT_CALL get_Completed(void** handler) noexcept = 0;
            virtual int32_t WINRT_CALL GetResults() noexcept = 0;
        };
    };

    template <> struct abi<wfc::IVectorChangedEventArgs>
    {
        struct WINRT_NOVTABLE type : IInspectable
        {
            virtual int32_t WINRT_CALL get_CollectionChange(wfc::CollectionChange* value) noexcept = 0;
            virtual int32_t WINRT_CALL get_Index(uint32_t* value) noexcept = 0;
        };
    };

    template <typename TResult> struct abi<Windows::Foundation::AsyncOperationCompletedHandler<TResult>>
    {
        struct type : IUnknown
        {
            virtual int32_t WINRT_CALL Invoke(void* asyncInfo, Windows::Foundation::AsyncStatus status) noexcept = 0;
        };
    };

    template <typename TProgress> struct abi<Windows::Foundation::AsyncActionProgressHandler<TProgress>>
    {
        struct type : IUnknown
        {
            virtual int32_t WINRT_CALL Invoke(void* asyncInfo, arg_in<TProgress> progressInfo) noexcept = 0;
        };
    };

    template <typename TProgress> struct abi<Windows::Foundation::AsyncActionWithProgressCompletedHandler<TProgress>>
    {
        struct type : IUnknown
        {
            virtual int32_t WINRT_CALL Invoke(void* asyncInfo, Windows::Foundation::AsyncStatus status) noexcept = 0;
        };
    };

    template <typename TResult, typename TProgress> struct abi<Windows::Foundation::AsyncOperationProgressHandler<TResult, TProgress>>
    {
        struct type : IUnknown
        {
            virtual int32_t WINRT_CALL Invoke(void* asyncInfo, arg_in<TProgress> progressInfo) noexcept = 0;
        };
    };

    template <typename TResult, typename TProgress> struct abi<Windows::Foundation::AsyncOperationWithProgressCompletedHandler<TResult, TProgress>>
    {
        struct type : IUnknown
        {
            virtual int32_t WINRT_CALL Invoke(void* asyncInfo, Windows::Foundation::AsyncStatus status) noexcept = 0;
        };
    };

    template <typename TResult> struct abi<Windows::Foundation::IAsyncOperation<TResult>>
    {
        struct WINRT_NOVTABLE type : IInspectable
        {
            virtual int32_t WINRT_CALL put_Completed(void* handler) noexcept = 0;
            virtual int32_t WINRT_CALL get_Completed(void** handler) noexcept = 0;
            virtual int32_t WINRT_CALL GetResults(arg_out<TResult> results) noexcept = 0;
        };
    };

    template <typename TProgress> struct abi<Windows::Foundation::IAsyncActionWithProgress<TProgress>>
    {
        struct WINRT_NOVTABLE type : IInspectable
        {
            virtual int32_t WINRT_CALL put_Progress(void* handler) noexcept = 0;
            virtual int32_t WINRT_CALL get_Progress(void** handler) noexcept = 0;
            virtual int32_t WINRT_CALL put_Completed(void* handler) noexcept = 0;
            virtual int32_t WINRT_CALL get_Completed(void** handler) noexcept = 0;
            virtual int32_t WINRT_CALL GetResults() noexcept = 0;
        };
    };

    template <typename TResult, typename TProgress> struct abi<Windows::Foundation::IAsyncOperationWithProgress<TResult, TProgress>>
    {
        struct WINRT_NOVTABLE type : IInspectable
        {
            virtual int32_t WINRT_CALL put_Progress(void* handler) noexcept = 0;
            virtual int32_t WINRT_CALL get_Progress(void** handler) noexcept = 0;
            virtual int32_t WINRT_CALL put_Completed(void* handler) noexcept = 0;
            virtual int32_t WINRT_CALL get_Completed(void** handler) noexcept = 0;
            virtual int32_t WINRT_CALL GetResults(arg_out<TResult> results) noexcept = 0;
        };
    };

    template <typename T> struct abi<Windows::Foundation::IReference<T>>
    {
        struct WINRT_NOVTABLE type : IInspectable
        {
            virtual int32_t WINRT_CALL get_Value(arg_out<T> value) noexcept = 0;
        };
    };

    template <typename T> struct abi<Windows::Foundation::IReferenceArray<T>>
    {
        struct WINRT_NOVTABLE type : IInspectable
        {
            virtual int32_t WINRT_CALL get_Value(uint32_t* __valueSize, arg_out<T>* value) noexcept = 0;
        };
    };

    template <typename K> struct abi<wfc::IMapChangedEventArgs<K>>
    {
        struct WINRT_NOVTABLE type : IInspectable
        {
            virtual int32_t WINRT_CALL get_CollectionChange(wfc::CollectionChange* value) noexcept = 0;
            virtual int32_t WINRT_CALL get_Key(arg_out<K> value) noexcept = 0;
        };
    };

    template <typename T> struct abi<wfc::VectorChangedEventHandler<T>>
    {
        struct WINRT_NOVTABLE type : IUnknown
        {
            virtual int32_t WINRT_CALL Invoke(void* sender, void* args) noexcept = 0;
        };
    };

    template <typename K, typename V> struct abi<wfc::MapChangedEventHandler<K, V>>
    {
        struct WINRT_NOVTABLE type : IUnknown
        {
            virtual int32_t WINRT_CALL Invoke(void* sender, void* args) noexcept = 0;
        };
    };

    template <typename T> struct abi<wfc::IIterator<T>>
    {
        struct WINRT_NOVTABLE type : IInspectable
        {
            virtual int32_t WINRT_CALL get_Current(arg_out<T> current) noexcept = 0;
            virtual int32_t WINRT_CALL get_HasCurrent(bool* hasCurrent) noexcept = 0;
            virtual int32_t WINRT_CALL MoveNext(bool* hasCurrent) noexcept = 0;
            virtual int32_t WINRT_CALL GetMany(uint32_t capacity, arg_out<T> value, uint32_t* actual) noexcept = 0;
        };
    };

    template <typename T> struct abi<wfc::IIterable<T>>
    {
        struct WINRT_NOVTABLE type : IInspectable
        {
            virtual int32_t WINRT_CALL First(void** first) noexcept = 0;
        };
    };

    template <typename T> struct abi<wfc::IVectorView<T>>
    {
        struct WINRT_NOVTABLE type : IInspectable
        {
            virtual int32_t WINRT_CALL GetAt(uint32_t index, arg_out<T> item) noexcept = 0;
            virtual int32_t WINRT_CALL get_Size(uint32_t* size) noexcept = 0;
            virtual int32_t WINRT_CALL IndexOf(arg_in<T> value, uint32_t* index, bool* found) noexcept = 0;
            virtual int32_t WINRT_CALL GetMany(uint32_t startIndex, uint32_t capacity, arg_out<T> value, uint32_t* actual) noexcept = 0;
        };
    };

    template <typename T> struct abi<wfc::IVector<T>>
    {
        struct WINRT_NOVTABLE type : IInspectable
        {
            virtual int32_t WINRT_CALL GetAt(uint32_t index, arg_out<T> item) noexcept = 0;
            virtual int32_t WINRT_CALL get_Size(uint32_t* size) noexcept = 0;
            virtual int32_t WINRT_CALL GetView(void** view) noexcept = 0;
            virtual int32_t WINRT_CALL IndexOf(arg_in<T> value, uint32_t* index, bool* found) noexcept = 0;
            virtual int32_t WINRT_CALL SetAt(uint32_t index, arg_in<T> item) noexcept = 0;
            virtual int32_t WINRT_CALL InsertAt(uint32_t index, arg_in<T> item) noexcept = 0;
            virtual int32_t WINRT_CALL RemoveAt(uint32_t index) noexcept = 0;
            virtual int32_t WINRT_CALL Append(arg_in<T> item) noexcept = 0;
            virtual int32_t WINRT_CALL RemoveAtEnd() noexcept = 0;
            virtual int32_t WINRT_CALL Clear() noexcept = 0;
            virtual int32_t WINRT_CALL GetMany(uint32_t startIndex, uint32_t capacity, arg_out<T> value, uint32_t* actual) noexcept = 0;
            virtual int32_t WINRT_CALL ReplaceAll(uint32_t count, arg_out<T> value) noexcept = 0;
        };
    };

    template <typename T> struct abi<wfc::IObservableVector<T>>
    {
        struct WINRT_NOVTABLE type : IInspectable
        {
            virtual int32_t WINRT_CALL add_VectorChanged(void* handler, event_token*  token) noexcept = 0;
            virtual int32_t WINRT_CALL remove_VectorChanged(event_token token) noexcept = 0;
        };
    };

    template <typename K, typename V> struct abi<wfc::IKeyValuePair<K, V>>
    {
        struct WINRT_NOVTABLE type : IInspectable
        {
            virtual int32_t WINRT_CALL get_Key(arg_out<K> key) noexcept = 0;
            virtual int32_t WINRT_CALL get_Value(arg_out<V> value) noexcept = 0;
        };
    };

    template <typename K, typename V> struct abi<wfc::IMapView<K, V>>
    {
        struct WINRT_NOVTABLE type : IInspectable
        {
            virtual int32_t WINRT_CALL Lookup(arg_in<K> key, arg_out<V> value) noexcept = 0;
            virtual int32_t WINRT_CALL get_Size(uint32_t* size) noexcept = 0;
            virtual int32_t WINRT_CALL HasKey(arg_in<K> key, bool* found) noexcept = 0;
            virtual int32_t WINRT_CALL Split(void** firstPartition, void** secondPartition) noexcept = 0;
        };
    };

    template <typename K, typename V> struct abi<wfc::IMap<K, V>>
    {
        struct WINRT_NOVTABLE type : IInspectable
        {
            virtual int32_t WINRT_CALL Lookup(arg_in<K> key, arg_out<V> value) noexcept = 0;
            virtual int32_t WINRT_CALL get_Size(uint32_t* size) noexcept = 0;
            virtual int32_t WINRT_CALL HasKey(arg_in<K> key, bool* found) noexcept = 0;
            virtual int32_t WINRT_CALL GetView(void** view) noexcept = 0;
            virtual int32_t WINRT_CALL Insert(arg_in<K> key, arg_in<V> value, bool* replaced) noexcept = 0;
            virtual int32_t WINRT_CALL Remove(arg_in<K> key) noexcept = 0;
            virtual int32_t WINRT_CALL Clear() noexcept = 0;
        };
    };

    template <typename K, typename V> struct abi<wfc::IObservableMap<K, V>>
    {
        struct WINRT_NOVTABLE type : IInspectable
        {
            virtual int32_t WINRT_CALL add_MapChanged(void* handler, event_token* token) noexcept = 0;
            virtual int32_t WINRT_CALL remove_MapChanged(event_token token) noexcept = 0;
        };
    };

    template <typename T> struct abi<Windows::Foundation::EventHandler<T>>
    {
        struct WINRT_NOVTABLE type : IUnknown
        {
            virtual int32_t WINRT_CALL Invoke(void* sender, arg_in<T> args) noexcept = 0;
        };
    };

    template <typename TSender, typename TArgs> struct abi<Windows::Foundation::TypedEventHandler<TSender, TArgs>>
    {
        struct WINRT_NOVTABLE type : IUnknown
        {
            virtual int32_t WINRT_CALL Invoke(arg_in<TSender> sender, arg_in<TArgs> args) noexcept = 0;
        };
    };
}

WINRT_EXPORT namespace winrt
{
    void check_hresult(hresult result);

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

        IUnknown(IUnknown&& other) noexcept : m_ptr(std::exchange(other.m_ptr, {}))
        {
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
                m_ptr = std::exchange(other.m_ptr, {});
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

        WINRT_NOINLINE void unconditional_release_ref() noexcept
        {
            std::exchange(m_ptr, {})->Release();
        }

        impl::IUnknown* m_ptr{};
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
            static_cast<impl::IUnknown*>(value)->AddRef();
            *put_abi(object) = value;
        }
    }

    inline void copy_to_abi(Windows::Foundation::IUnknown const& object, void*& value) noexcept
    {
        WINRT_ASSERT(value == nullptr);
        value = get_abi(object);

        if (value)
        {
            static_cast<impl::IUnknown*>(value)->AddRef();
        }
    }

#ifdef WINRT_WINDOWS_ABI

    inline ::IUnknown* get_unknown(Windows::Foundation::IUnknown const& object) noexcept
    {
        return static_cast<::IUnknown*>(get_abi(object));
    }

#endif
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
    inline constexpr hresult error_ok{ 0 }; // S_OK
    inline constexpr hresult error_false{ 1 }; // S_FALSE
    inline constexpr hresult error_fail{ static_cast<hresult>(0x80004005) }; // E_FAIL
    inline constexpr hresult error_access_denied{ static_cast<hresult>(0x80070005) }; // E_ACCESSDENIED
    inline constexpr hresult error_wrong_thread{ static_cast<hresult>(0x8001010E) }; // RPC_E_WRONG_THREAD
    inline constexpr hresult error_not_implemented{ static_cast<hresult>(0x80004001) }; // E_NOTIMPL
    inline constexpr hresult error_invalid_argument{ static_cast<hresult>(0x80070057) }; // E_INVALIDARG
    inline constexpr hresult error_out_of_bounds{ static_cast<hresult>(0x8000000B) }; // E_BOUNDS
    inline constexpr hresult error_no_interface{ static_cast<hresult>(0x80004002) }; // E_NOINTERFACE
    inline constexpr hresult error_class_not_available{ static_cast<hresult>(0x80040111) }; // CLASS_E_CLASSNOTAVAILABLE
    inline constexpr hresult error_changed_state{ static_cast<hresult>(0x8000000C) }; // E_CHANGED_STATE
    inline constexpr hresult error_illegal_method_call{ static_cast<hresult>(0x8000000E) }; // E_ILLEGAL_METHOD_CALL
    inline constexpr hresult error_illegal_state_change{ static_cast<hresult>(0x8000000D) }; // E_ILLEGAL_STATE_CHANGE
    inline constexpr hresult error_illegal_delegate_assignment{ static_cast<hresult>(0x80000018) }; // E_ILLEGAL_DELEGATE_ASSIGNMENT
    inline constexpr hresult error_canceled{ static_cast<hresult>(0x800704C7) }; // HRESULT_FROM_WIN32(ERROR_CANCELLED)
    inline constexpr hresult error_bad_alloc{ static_cast<hresult>(0x8007000E) }; // E_OUTOFMEMORY
    inline constexpr hresult error_not_initialized{ static_cast<hresult>(0x800401F0) }; // CO_E_NOTINITIALIZED

    inline void* duplicate_string(void* other)
    {
        void* result = nullptr;
        check_hresult(WINRT_WindowsDuplicateString(other, &result));
        return result;
    }

    inline void* create_string(wchar_t const* value, uint32_t const length)
    {
        void* result = nullptr;
        check_hresult(WINRT_WindowsCreateString(value, length, &result));
        return result;
    }

    inline bool embedded_null(void* value) noexcept
    {
        int32_t result = 0;
        WINRT_VERIFY_(error_ok, WINRT_WindowsStringHasEmbeddedNull(value, &result));
        return 0 != result;
    }

    struct hstring_traits
    {
        using type = void*;

        static void close(type value) noexcept
        {
            WINRT_VERIFY_(error_ok, WINRT_WindowsDeleteString(value));
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
        using pointer = value_type*;
        using const_pointer = value_type const*;
        using const_iterator = const_pointer;
        using const_reverse_iterator = std::reverse_iterator<const_iterator>;

        hstring() noexcept = default;

        hstring(hstring const& value) :
            m_handle(impl::duplicate_string(value.m_handle.get()))
        {}

        hstring& operator=(hstring const& value)
        {
            m_handle.attach(impl::duplicate_string(value.m_handle.get()));
            return*this;
        }

        hstring(hstring&&) noexcept = default;
        hstring& operator=(hstring&&) = default;
        hstring(std::nullptr_t) = delete;

        hstring(std::initializer_list<wchar_t> value) :
            hstring(value.begin(), static_cast<uint32_t>(value.size()))
        {}

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

        hstring& operator=(wchar_t const* const value)
        {
            return *this = hstring{ value };
        }

        hstring& operator=(std::initializer_list<wchar_t> value)
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
            wchar_t const* data = WINRT_WindowsGetStringRawBuffer(m_handle.get(), &size);
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
            return WINRT_WindowsGetStringRawBuffer(m_handle.get(), nullptr);
        }

        const_iterator cbegin() const noexcept
        {
            return begin();
        }

        const_iterator end() const noexcept
        {
            uint32_t length = 0;
            const_pointer buffer = WINRT_WindowsGetStringRawBuffer(m_handle.get(), &length);
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
            return WINRT_WindowsGetStringLen(m_handle.get());
        }

        friend void swap(hstring& left, hstring& right) noexcept
        {
            swap(left.m_handle, right.m_handle);
        }

    private:

        handle_type<impl::hstring_traits> m_handle;
    };

    inline void* get_abi(hstring const& object) noexcept
    {
        return *(void**)(&object);
    }

    inline void** put_abi(hstring& object) noexcept
    {
        WINRT_ASSERT(get_abi(object) == nullptr);
        return reinterpret_cast<void**>(&object);
    }

    inline void attach_abi(hstring& object, void* value) noexcept
    {
        object.clear();
        *put_abi(object) = value;
    }

    inline void* detach_abi(hstring& object) noexcept
    {
        void* temp = get_abi(object);
        *reinterpret_cast<void**>(&object) = nullptr;
        return temp;
    }

    inline void* detach_abi(hstring&& object) noexcept
    {
        return detach_abi(object);
    }

    inline void copy_from_abi(hstring& object, void* value)
    {
        attach_abi(object, impl::duplicate_string(value));
    }

    inline void copy_to_abi(hstring const& object, void*& value)
    {
        WINRT_ASSERT(value == nullptr);
        value = impl::duplicate_string(get_abi(object));
    }

    inline void* detach_abi(std::wstring_view const& value)
    {
        return impl::create_string(value.data(), static_cast<uint32_t>(value.size()));
    }

    inline void* detach_abi(wchar_t const* const value)
    {
        return impl::create_string(value, static_cast<uint32_t>(wcslen(value)));
    }
}

namespace winrt::impl
{
    template <> struct abi<hstring>
    {
        using type = void*;
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
            check_hresult(WINRT_WindowsPreallocateStringBuffer(size, &m_data, &m_buffer));
        }

        ~hstring_builder() noexcept
        {
            if (m_buffer != nullptr)
            {
                WINRT_VERIFY_(error_ok, WINRT_WindowsDeleteStringBuffer(m_buffer));
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
            check_hresult(WINRT_WindowsPromoteStringBuffer(m_buffer, put_abi(result)));
            m_buffer = nullptr;
            return result;
        }

    private:

        wchar_t* m_data{ nullptr };
        void* m_buffer{ nullptr };
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
        _swprintf_s_l(buffer, std::size(buffer), L"%G", impl::get_default_locale(), value);
        return hstring{ buffer };
    }

    inline hstring to_hstring(double value)
    {
        wchar_t buffer[32];
        _swprintf_s_l(buffer, std::size(buffer), L"%G", impl::get_default_locale(), value);
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

    template <typename T, typename = std::enable_if_t<std::is_same_v<T, bool>>>
    hstring to_hstring(T const value)
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

    inline hstring to_hstring(guid const& value)
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
        int const size = WINRT_MultiByteToWideChar(65001 /*CP_UTF8*/, 0, view.data(), static_cast<int32_t>(view.size()), nullptr, 0);

        if (size == 0)
        {
            return{};
        }

        impl::hstring_builder result(size);
        WINRT_VERIFY_(size, WINRT_MultiByteToWideChar(65001 /*CP_UTF8*/, 0, view.data(), static_cast<int32_t>(view.size()), result.data(), size));
        return result.to_hstring();
    }

    inline std::string to_string(std::wstring_view value)
    {
        int const size = WINRT_WideCharToMultiByte(65001 /*CP_UTF8*/, 0, value.data(), static_cast<int32_t>(value.size()), nullptr, 0, nullptr, nullptr);

        if (size == 0)
        {
            return{};
        }

        std::string result(size, '?');
        WINRT_VERIFY_(size, WINRT_WideCharToMultiByte(65001 /*CP_UTF8*/, 0, value.data(), static_cast<int32_t>(value.size()), result.data(), size, nullptr, nullptr));
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
            if (impl::error_ok != WINRT_WindowsCreateStringReference(value.data(), static_cast<uint32_t>(value.size()), &m_header, &m_handle))
            {
                std::terminate();
            }
        }

        hstring(std::wstring const& value) noexcept
        {
            WINRT_VERIFY_(impl::error_ok, WINRT_WindowsCreateStringReference(value.data(), static_cast<uint32_t>(value.size()), &m_header, &m_handle));
        }

        hstring(wchar_t const* const value) noexcept
        {
            WINRT_VERIFY_(impl::error_ok, WINRT_WindowsCreateStringReference(value, static_cast<uint32_t>(wcslen(value)), &m_header, &m_handle));
        }

    private:

        struct header
        {
            union
            {
                void* Reserved1;
#ifdef _WIN64
                char Reserved2[24];
#else
                char Reserved2[20];
#endif
            } Reserved;
        };
        
        void* m_handle;
        header m_header;
    };

    inline void* get_abi(hstring const& object) noexcept
    {
        return *(void**)(&object);
    }
}

namespace winrt::impl
{
    template <typename T>
    using param_type = std::conditional_t<std::is_same_v<T, hstring>, param::hstring, T>;
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
    inline hstring concat_hstring(std::wstring_view const& left, std::wstring_view const& right)
    {
        hstring_builder text(static_cast<uint32_t>(left.size() + right.size()));
        memcpy_s(text.data(), left.size() * sizeof(wchar_t), left.data(), left.size() * sizeof(wchar_t));
        memcpy_s(text.data() + left.size(), right.size() * sizeof(wchar_t), right.data(), right.size() * sizeof(wchar_t));
        return text.to_hstring();
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

            WINRT_CoTaskMemFree(this->m_data);
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
                this->m_data = static_cast<value_type*>(WINRT_CoTaskMemAlloc(size * sizeof(value_type)));

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
    auto get_abi(array_view<T> object) noexcept
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

    inline com_array<guid> get_interfaces(Windows::Foundation::IInspectable const& object)
    {
        com_array<guid> value;
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
        com_ptr(com_ptr<U>&& other) noexcept : m_ptr(std::exchange(other.m_ptr, {}))
        {
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

        com_ptr& operator=(com_ptr&& other) noexcept
        {
            if (this != &other)
            {
                release_ref();
                m_ptr = std::exchange(other.m_ptr, {});
            }

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
            release_ref();
            m_ptr = std::exchange(other.m_ptr, {});
            return*this;
        }

        explicit operator bool() const noexcept
        {
            return m_ptr != nullptr;
        }

        auto operator->() const noexcept
        {
            return m_ptr;
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
            return std::exchange(m_ptr, {});
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

        template <typename F, typename...Args>
        void capture(F function, Args&&...args)
        {
            check_hresult(function(args..., guid_of<T>(), put_void()));
        }

        template <typename O, typename M, typename...Args>
        void capture(com_ptr<O> const& object, M method, Args&&...args)
        {
            check_hresult((object.get()->*(method))(args..., guid_of<T>(), put_void()));
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
                const_cast<std::remove_const_t<type>*>(m_ptr)->AddRef();
            }
        }

        void release_ref() noexcept
        {
            if (m_ptr)
            {
                unconditional_release_ref();
            }
        }

        WINRT_NOINLINE void unconditional_release_ref() noexcept
        {
            std::exchange(m_ptr, {})->Release();
        }

        template <typename U>
        friend struct com_ptr;

        type* m_ptr{};
    };

    template <typename T, typename F, typename...Args>
    auto capture(F function, Args&&...args)
    {
        com_ptr<T> result;
        check_hresult(function(args..., guid_of<T>(), result.put_void()));
        return result;
    }

    template <typename T, typename O, typename M, typename...Args>
    auto capture(com_ptr<O> const& object, M method, Args&&...args)
    {
        com_ptr<T> result;
        check_hresult((object.get()->*(method))(args..., guid_of<T>(), result.put_void()));
        return result;
    }

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

    template <typename D, typename I>
    D* get_self(I const& from) noexcept;
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

        if (ptr)
        {
            if constexpr (is_implements_v<To>)
            {
                impl::com_ref<winrt::default_interface<To>> temp;
                check_hresult(ptr->QueryInterface(guid_of<To>(), put_abi(temp)));
                attach_abi(result, get_self<To>(temp));
                detach_abi(temp);
            }
            else
            {
                check_hresult(ptr->QueryInterface(guid_of<To>(), put_abi(result)));
            }
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

        if (ptr)
        {
            if constexpr (is_implements_v<To>)
            {
                impl::com_ref<winrt::default_interface<To>> temp;
                ptr->QueryInterface(guid_of<To>(), put_abi(temp));
                attach_abi(result, get_self<To>(temp));
                detach_abi(temp);
            }
            else
            {
                ptr->QueryInterface(guid_of<To>(), put_abi(result));
            }
        }

        return result;
    }
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

        auto get() const noexcept
        {
            impl::com_ref<T> object{ nullptr };

            if (m_ref)
            {
                if constexpr(impl::is_implements_v<T>)
                {
                    impl::com_ref<default_interface<T>> temp;
                    m_ref->Resolve(guid_of<T>(), put_abi(temp));
                    attach_abi(object, get_self<T>(temp));
                    detach_abi(temp);
                }
                else
                {
                    m_ref->Resolve(guid_of<T>(), put_abi(object));
                }
            }

            return object;
        }

        auto put() noexcept
        {
            return m_ref.put();
        }

        explicit operator bool() const noexcept
        {
            return static_cast<bool>(m_ref);
        }

    private:

        com_ptr<impl::IWeakReference> m_ref;
    };

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

        agile_ref(impl::com_ref<T> const& object)
        {
            if (object)
            {
                check_hresult(WINRT_RoGetAgileReference(0, guid_of<T>(), winrt::get_abi(object), m_ref.put_void()));
            }
        }

        auto get() const noexcept
        {
            impl::com_ref<T> result{ nullptr };

            if (m_ref)
            {
                m_ref->Resolve(guid_of<T>(), put_abi(result));
            }

            return result;
        }

        explicit operator bool() const noexcept
        {
            return static_cast<bool>(m_ref);
        }

    private:

        com_ptr<impl::IAgileReference> m_ref;
    };

    template <typename T>
    agile_ref<T> make_agile(T const& object)
    {
        return object;
    }
}

namespace winrt::impl
{
    struct heap_traits
    {
        using type = wchar_t*;

        static void close(type value) noexcept
        {
            WINRT_VERIFY(WINRT_HeapFree(WINRT_GetProcessHeap(), 0, value));
        }

        static constexpr type invalid() noexcept
        {
            return nullptr;
        }
    };

    struct bstr_traits
    {
        using type = wchar_t*;

        static void close(type value) noexcept
        {
            WINRT_SysFreeString(value);
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

        return { message, size };
    }

    constexpr int32_t hresult_from_win32(uint32_t const x) noexcept
    {
        return (int32_t)(x) <= 0 ? (int32_t)(x) : (int32_t)(((x) & 0x0000FFFF) | (7 << 16) | 0x80000000);
    }

    constexpr int32_t hresult_from_nt(uint32_t const x) noexcept
    {
        return ((int32_t)((x) | 0x10000000));
    }
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

        explicit hresult_error(hresult const code) noexcept : m_code(code)
        {
            originate(code, nullptr);
        }

        hresult_error(hresult const code, param::hstring const& message) noexcept : m_code(code)
        {
            originate(code, get_abi(message));
        }

        hresult_error(hresult const code, from_abi_t) noexcept : m_code(code)
        {
            WINRT_GetRestrictedErrorInfo(m_info.put_void());

            if (m_info == nullptr)
            {
                originate(code, nullptr);
            }
            else
            {
                WINRT_VERIFY_(impl::error_ok, m_info->GetReference(m_debug_reference.put()));

                if (auto info2 = m_info.try_as<impl::ILanguageExceptionErrorInfo2>())
                {
                    WINRT_VERIFY_(impl::error_ok, info2->CapturePropagationContext(nullptr));
                }
            }
        }

        hresult code() const noexcept
        {
            return m_code;
        }

        hstring message() const noexcept
        {
            if (m_info)
            {
                int32_t code{};
                impl::bstr_handle fallback;
                impl::bstr_handle message;
                impl::bstr_handle unused;

                if (impl::error_ok == m_info->GetErrorDetails(fallback.put(), &code, message.put(), unused.put()))
                {
                    if (code == m_code)
                    {
                        if (message)
                        {
                            return impl::trim_hresult_message(message.get(), WINRT_SysStringLen(message.get()));
                        }
                        else
                        {
                            return impl::trim_hresult_message(fallback.get(), WINRT_SysStringLen(fallback.get()));
                        }
                    }
                }
            }

            handle_type<impl::heap_traits> message;

            uint32_t const size = WINRT_FormatMessageW(0x00001300, // FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_FROM_SYSTEM | FORMAT_MESSAGE_IGNORE_INSERTS
                nullptr,
                m_code,
                0x00000400, // MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT)
                reinterpret_cast<wchar_t*>(message.put()),
                0,
                nullptr);

            return impl::trim_hresult_message(message.get(), size);
        }

        template <typename To>
        auto try_as() const noexcept
        {
            return m_info.try_as<To>();
        }

        hresult to_abi() const noexcept
        {
            if (m_info)
            {
                WINRT_SetRestrictedErrorInfo(m_info.get());
            }

            return m_code;
        }

    private:

        void originate(hresult const code, void* message) noexcept
        {
            WINRT_VERIFY(WINRT_RoOriginateLanguageException(code, message, nullptr));
            WINRT_VERIFY_(impl::error_ok, WINRT_GetRestrictedErrorInfo(m_info.put_void()));
        }

        impl::bstr_handle m_debug_reference;
        uint32_t const m_debug_magic{ 0xAABBCCDD };
        hresult m_code{ impl::error_fail };
        com_ptr<impl::IRestrictedErrorInfo> m_info;
    };

    struct hresult_access_denied : hresult_error
    {
        hresult_access_denied() noexcept : hresult_error(impl::error_access_denied) {}
        hresult_access_denied(param::hstring const& message) noexcept : hresult_error(impl::error_access_denied, message) {}
        hresult_access_denied(from_abi_t) noexcept : hresult_error(impl::error_access_denied, from_abi) {}
    };

    struct hresult_wrong_thread : hresult_error
    {
        hresult_wrong_thread() noexcept : hresult_error(impl::error_wrong_thread) {}
        hresult_wrong_thread(param::hstring const& message) noexcept : hresult_error(impl::error_wrong_thread, message) {}
        hresult_wrong_thread(from_abi_t) noexcept : hresult_error(impl::error_wrong_thread, from_abi) {}
    };

    struct hresult_not_implemented : hresult_error
    {
        hresult_not_implemented() noexcept : hresult_error(impl::error_not_implemented) {}
        hresult_not_implemented(param::hstring const& message) noexcept : hresult_error(impl::error_not_implemented, message) {}
        hresult_not_implemented(from_abi_t) noexcept : hresult_error(impl::error_not_implemented, from_abi) {}
    };

    struct hresult_invalid_argument : hresult_error
    {
        hresult_invalid_argument() noexcept : hresult_error(impl::error_invalid_argument) {}
        hresult_invalid_argument(param::hstring const& message) noexcept : hresult_error(impl::error_invalid_argument, message) {}
        hresult_invalid_argument(from_abi_t) noexcept : hresult_error(impl::error_invalid_argument, from_abi) {}
    };

    struct hresult_out_of_bounds : hresult_error
    {
        hresult_out_of_bounds() noexcept : hresult_error(impl::error_out_of_bounds) {}
        hresult_out_of_bounds(param::hstring const& message) noexcept : hresult_error(impl::error_out_of_bounds, message) {}
        hresult_out_of_bounds(from_abi_t) noexcept : hresult_error(impl::error_out_of_bounds, from_abi) {}
    };

    struct hresult_no_interface : hresult_error
    {
        hresult_no_interface() noexcept : hresult_error(impl::error_no_interface) {}
        hresult_no_interface(param::hstring const& message) noexcept : hresult_error(impl::error_no_interface, message) {}
        hresult_no_interface(from_abi_t) noexcept : hresult_error(impl::error_no_interface, from_abi) {}
    };

    struct hresult_class_not_available : hresult_error
    {
        hresult_class_not_available() noexcept : hresult_error(impl::error_class_not_available) {}
        hresult_class_not_available(param::hstring const& message) noexcept : hresult_error(impl::error_class_not_available, message) {}
        hresult_class_not_available(from_abi_t) noexcept : hresult_error(impl::error_class_not_available, from_abi) {}
    };

    struct hresult_changed_state : hresult_error
    {
        hresult_changed_state() noexcept : hresult_error(impl::error_changed_state) {}
        hresult_changed_state(param::hstring const& message) noexcept : hresult_error(impl::error_changed_state, message) {}
        hresult_changed_state(from_abi_t) noexcept : hresult_error(impl::error_changed_state, from_abi) {}
    };

    struct hresult_illegal_method_call : hresult_error
    {
        hresult_illegal_method_call() noexcept : hresult_error(impl::error_illegal_method_call) {}
        hresult_illegal_method_call(param::hstring const& message) noexcept : hresult_error(impl::error_illegal_method_call, message) {}
        hresult_illegal_method_call(from_abi_t) noexcept : hresult_error(impl::error_illegal_method_call, from_abi) {}
    };

    struct hresult_illegal_state_change : hresult_error
    {
        hresult_illegal_state_change() noexcept : hresult_error(impl::error_illegal_state_change) {}
        hresult_illegal_state_change(param::hstring const& message) noexcept : hresult_error(impl::error_illegal_state_change, message) {}
        hresult_illegal_state_change(from_abi_t) noexcept : hresult_error(impl::error_illegal_state_change, from_abi) {}
    };

    struct hresult_illegal_delegate_assignment : hresult_error
    {
        hresult_illegal_delegate_assignment() noexcept : hresult_error(impl::error_illegal_delegate_assignment) {}
        hresult_illegal_delegate_assignment(param::hstring const& message) noexcept : hresult_error(impl::error_illegal_delegate_assignment, message) {}
        hresult_illegal_delegate_assignment(from_abi_t) noexcept : hresult_error(impl::error_illegal_delegate_assignment, from_abi) {}
    };

    struct hresult_canceled : hresult_error
    {
        hresult_canceled() noexcept : hresult_error(impl::error_canceled) {}
        hresult_canceled(param::hstring const& message) noexcept : hresult_error(impl::error_canceled, message) {}
        hresult_canceled(from_abi_t) noexcept : hresult_error(impl::error_canceled, from_abi) {}
    };

    [[noreturn]] inline WINRT_NOINLINE void throw_hresult(hresult const result)
    {
        if (result == impl::error_bad_alloc)
        {
            throw std::bad_alloc();
        }

        if (result == impl::error_access_denied)
        {
            throw hresult_access_denied(hresult_error::from_abi);
        }

        if (result == impl::error_wrong_thread)
        {
            throw hresult_wrong_thread(hresult_error::from_abi);
        }

        if (result == impl::error_not_implemented)
        {
            throw hresult_not_implemented(hresult_error::from_abi);
        }

        if (result == impl::error_invalid_argument)
        {
            throw hresult_invalid_argument(hresult_error::from_abi);
        }

        if (result == impl::error_out_of_bounds)
        {
            throw hresult_out_of_bounds(hresult_error::from_abi);
        }

        if (result == impl::error_no_interface)
        {
            throw hresult_no_interface(hresult_error::from_abi);
        }

        if (result == impl::error_class_not_available)
        {
            throw hresult_class_not_available(hresult_error::from_abi);
        }

        if (result == impl::error_changed_state)
        {
            throw hresult_changed_state(hresult_error::from_abi);
        }

        if (result == impl::error_illegal_method_call)
        {
            throw hresult_illegal_method_call(hresult_error::from_abi);
        }

        if (result == impl::error_illegal_state_change)
        {
            throw hresult_illegal_state_change(hresult_error::from_abi);
        }

        if (result == impl::error_illegal_delegate_assignment)
        {
            throw hresult_illegal_delegate_assignment(hresult_error::from_abi);
        }

        if (result == impl::error_canceled)
        {
            throw hresult_canceled(hresult_error::from_abi);
        }

        throw hresult_error(result, hresult_error::from_abi);
    }

    inline WINRT_NOINLINE hresult to_hresult() noexcept
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
            return impl::error_bad_alloc;
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
            return hresult_error(impl::error_fail, to_hstring(e.what())).to_abi();
        }
        catch (...)
        {
            std::terminate();
        }
    }

    [[noreturn]] inline void throw_last_error()
    {
        throw_hresult(impl::hresult_from_win32(WINRT_GetLastError()));
    }

    inline WINRT_FORCEINLINE void check_hresult(hresult const result)
    {
        if (result < 0)
        {
            throw_hresult(result);
        }
    }

    template<typename T>
    void check_nt(T result)
    {
        if (result != 0)
        {
            throw_hresult(impl::hresult_from_nt(result));
        }
    }

    template<typename T>
    void check_win32(T result)
    {
        if (result != 0)
        {
            throw_hresult(impl::hresult_from_win32(result));
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
    inline constexpr auto_revoke_t auto_revoke{};

    template <typename I>
    struct event_revoker
    {
        using method_type = int32_t(WINRT_CALL impl::abi_t<I>::*)(event_token);

        event_revoker() noexcept = default;
        event_revoker(event_revoker const&) = delete;
        event_revoker& operator=(event_revoker const&) = delete;
        event_revoker(event_revoker&&) noexcept = default;

        event_revoker& operator=(event_revoker&& other) noexcept
        {
            if (this != &other)
            {
                revoke();
                m_object = std::move(other.m_object);
                m_method = other.m_method;
                m_token = other.m_token;
            }

            return *this;
        }

        template <typename U>
        event_revoker(U&& object, method_type method, event_token token) :
            m_object(std::forward<U>(object)),
            m_method(method),
            m_token(token)
        {}

        ~event_revoker() noexcept
        {
            revoke();
        }

        void revoke() noexcept
        {
            if (I object = std::exchange(m_object, {}).get())
            {
                ((*reinterpret_cast<impl::abi_t<I>**>(&object))->*(m_method))(m_token);
            }
        }

        explicit operator bool() const noexcept
        {
            return m_object ? true : false;
        }

    private:

        weak_ref<I> m_object;
        method_type m_method{};
        event_token m_token{};
    };

    template <typename I>
    struct factory_event_revoker
    {
        using method_type = int32_t(WINRT_CALL impl::abi_t<I>::*)(event_token);

        factory_event_revoker() noexcept = default;
        factory_event_revoker(factory_event_revoker const&) = delete;
        factory_event_revoker& operator=(factory_event_revoker const&) = delete;
        factory_event_revoker(factory_event_revoker&&) noexcept = default;

        factory_event_revoker& operator=(factory_event_revoker&& other) noexcept
        {
            if (this != &other)
            {
                revoke();
                m_object = std::move(other.m_object);
                m_method = other.m_method;
                m_token = other.m_token;
            }

            return *this;
        }

        template <typename U>
        factory_event_revoker(U&& object, method_type method, event_token token) noexcept :
            m_object(std::forward<U>(object)),
            m_method(method),
            m_token(token)
        {}

        ~factory_event_revoker() noexcept
        {
            revoke();
        }

        void revoke() noexcept
        {
            if (auto object = std::exchange(m_object, {}))
            {
                ((*reinterpret_cast<impl::abi_t<I>**>(&object))->*(m_method))(m_token);
            }
        }

        explicit operator bool() const noexcept
        {
            return m_object ? true : false;
        }

    private:

        I m_object;
        method_type m_method{};
        event_token m_token{};
    };
}

namespace winrt::impl
{
    template <typename I, int32_t(WINRT_CALL abi_t<I>::*Method)(event_token)>
    struct event_revoker
    {
        event_revoker() noexcept = default;
        event_revoker(event_revoker const&) = delete;
        event_revoker& operator=(event_revoker const&) = delete;

        event_revoker(event_revoker&&) noexcept = default;
        event_revoker& operator=(event_revoker&& other) noexcept
        {
            event_revoker(std::move(other)).swap(*this);
            return *this;
        }

        event_revoker(I const& object, event_token token)
            : m_object(object)
            , m_token(token)
        {}

        operator winrt::event_revoker<I>() && noexcept
        {
            return { std::move(m_object), Method, m_token };
        }

        ~event_revoker() noexcept
        {
            if (m_object)
            {
                revoke_impl(m_object.get());
            }
        }

        void swap(event_revoker& other) noexcept
        {
            std::swap(m_object, other.m_object);
            std::swap(m_token, other.m_token);
        }

        void revoke() noexcept
        {
            revoke_impl(std::exchange(m_object, {}).get());
        }

        explicit operator bool() const noexcept
        {
            return bool{ m_object };
        }

    private:
        void revoke_impl(I object) noexcept
        {
            if (object)
            {
                ((*reinterpret_cast<impl::abi_t<I>**>(&object))->*(Method))(m_token);
            }
        }

        winrt::weak_ref<I> m_object{};
        event_token m_token{};
    };

    template <typename I, int32_t(WINRT_CALL abi_t<I>::*Method)(event_token)>
    struct factory_event_revoker
    {
        factory_event_revoker() noexcept = default;
        factory_event_revoker(factory_event_revoker const&) = delete;
        factory_event_revoker& operator=(factory_event_revoker const&) = delete;

        factory_event_revoker(factory_event_revoker&&) noexcept = default;
        factory_event_revoker& operator=(factory_event_revoker&& other) noexcept
        {
            factory_event_revoker(std::move(other)).swap(*this);
            return *this;
        }
        factory_event_revoker(I const& object, event_token token)
            : m_object(object)
            , m_token(token)
        {}

        operator winrt::factory_event_revoker<I>() && noexcept
        {
            return { std::move(m_object), Method, m_token };
        }

        ~factory_event_revoker() noexcept
        {
            if (m_object)
            {
                revoke_impl(m_object);
            }
        }

        void swap(factory_event_revoker& other) noexcept
        {
            std::swap(m_object, other.m_object);
            std::swap(m_token, other.m_token);
        }

        void revoke() noexcept
        {
            revoke_impl(std::exchange(m_object, {}));
        }

        explicit operator bool() const noexcept
        {
            return bool{ m_object };
        }

    private:
        void revoke_impl(I object) noexcept
        {
            if (object)
            {
                ((*reinterpret_cast<impl::abi_t<I>**>(&object))->*(Method))(m_token);
            }
        }
    private:
        I m_object;
        event_token m_token{};
    };

    template <typename D, typename Revoker, typename S>
    Revoker make_event_revoker(S source, event_token token)
    {
        return { static_cast<D const&>(*source), token };
    }

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

    template <typename T>
    T make_agile_delegate(T const& delegate) noexcept
    {
        if constexpr (!has_category_v<T>)
        {
            return delegate;
        }
        else
        {
            if (delegate.template try_as<IAgileObject>())
            {
                return delegate;
            }

            com_ptr<IAgileReference> ref;
            WINRT_RoGetAgileReference(0, guid_of<T>(), get_abi(delegate), ref.put_void());

            if (ref)
            {
                return[ref = std::move(ref)](auto&&... args)
                {
                    T delegate;
                    ref->Resolve(guid_of<T>(), put_abi(delegate));
                    return delegate(args...);
                };
            }

            return delegate;
        }
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

                new_targets->back() = impl::make_agile_delegate(delegate);
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
                        if (e.code() == 0x80010108 /*RPC_E_DISCONNECTED*/ ||
                            e.code() == 0x800706BA /*HRESULT_FROM_WIN32(RPC_S_SERVER_UNAVAILABLE)*/ ||
                            e.code() == 0x89020001 /*JSCRIPT_E_CANTEXECUTE*/)
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
    template <typename Async>
    void blocking_suspend(Async const& async);

    template <typename D> struct consume_IActivationFactory
    {
        template <typename T>
        T ActivateInstance() const
        {
            Windows::Foundation::IInspectable instance;
            check_hresult(WINRT_SHIM(Windows::Foundation::IActivationFactory)->ActivateInstance(put_abi(instance)));
            return instance.try_as<T>();
        }
    };

    template <typename D, typename T> struct consume_IReference
    {
        T Value() const
        {
            T result{};
            check_hresult(WINRT_SHIM(Windows::Foundation::IReference<T>)->get_Value(put_abi(result)));
            return result;
        }
    };

    template <typename D, typename T> struct consume_IReferenceArray
    {
        com_array<T> Value() const
        {
            com_array<T> result{};
            check_hresult(WINRT_SHIM(Windows::Foundation::IReferenceArray<T>)->get_Value(impl::put_size_abi(result), put_abi(result)));
            return result;
        }
    };

    template <typename D> struct consume_IVectorChangedEventArgs
    {
        wfc::CollectionChange CollectionChange() const
        {
            wfc::CollectionChange value{};
            check_hresult(WINRT_SHIM(wfc::IVectorChangedEventArgs)->get_CollectionChange(&value));
            return value;
        }

        uint32_t Index() const
        {
            uint32_t index{};
            check_hresult(WINRT_SHIM(wfc::IVectorChangedEventArgs)->get_Index(&index));
            return index;
        }
    };

    template <typename D, typename K> struct consume_IMapChangedEventArgs
    {
        wfc::CollectionChange CollectionChange() const
        {
            wfc::CollectionChange value{};
            check_hresult(WINRT_SHIM(wfc::IMapChangedEventArgs<K>)->get_CollectionChange(&value));
            return value;
        }

        K Key() const
        {
            K result{ empty_value<K>() };
            check_hresult(WINRT_SHIM(wfc::IMapChangedEventArgs<K>)->get_Key(put_abi(result)));
            return result;
        }
    };

    template <typename D, typename T> struct consume_IIterator
    {
        T Current() const
        {
            T result{ empty_value<T>() };
            check_hresult(WINRT_SHIM(wfc::IIterator<T>)->get_Current(put_abi(result)));
            return result;
        }

        bool HasCurrent() const
        {
            bool temp{};
            check_hresult(WINRT_SHIM(wfc::IIterator<T>)->get_HasCurrent(put_abi(temp)));
            return temp;
        }

        bool MoveNext() const
        {
            bool temp{};
            check_hresult(WINRT_SHIM(wfc::IIterator<T>)->MoveNext(put_abi(temp)));
            return temp;
        }

        uint32_t GetMany(array_view<T> values) const
        {
            uint32_t actual{};
            check_hresult(WINRT_SHIM(wfc::IIterator<T>)->GetMany(values.size(), get_abi(values), &actual));
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

    template <typename D, typename T> struct consume_IIterable
    {
        wfc::IIterator<T> First() const
        {
            wfc::IIterator<T> iterator;
            check_hresult(WINRT_SHIM(wfc::IIterable<T>)->First(put_abi(iterator)));
            return iterator;
        }
    };

    template <typename D, typename T> struct consume_IVectorView
    {
        T GetAt(uint32_t const index) const
        {
            T result{ empty_value<T>() };
            check_hresult(WINRT_SHIM(wfc::IVectorView<T>)->GetAt(index, put_abi(result)));
            return result;
        }

        uint32_t Size() const
        {
            uint32_t size{};
            check_hresult(WINRT_SHIM(wfc::IVectorView<T>)->get_Size(&size));
            return size;
        }

        bool IndexOf(param_type<T> const& value, uint32_t& index) const
        {
            bool found{};
            check_hresult(WINRT_SHIM(wfc::IVectorView<T>)->IndexOf(get_abi(value), &index, &found));
            return found;
        }

        uint32_t GetMany(uint32_t startIndex, array_view<T> values) const
        {
            uint32_t actual{};
            check_hresult(WINRT_SHIM(wfc::IVectorView<T>)->GetMany(startIndex, values.size(), get_abi(values), &actual));
            return actual;
        }
    };

    template <typename D, typename T> struct consume_IVector
    {
        T GetAt(uint32_t const index) const
        {
            T result{ empty_value<T>() };
            check_hresult(WINRT_SHIM(wfc::IVector<T>)->GetAt(index, put_abi(result)));
            return result;
        }

        uint32_t Size() const
        {
            uint32_t size = 0;
            check_hresult(WINRT_SHIM(wfc::IVector<T>)->get_Size(&size));
            return size;
        }

        wfc::IVectorView<T> GetView() const
        {
            wfc::IVectorView<T> view;
            check_hresult(WINRT_SHIM(wfc::IVector<T>)->GetView(put_abi(view)));
            return view;
        }

        bool IndexOf(param_type<T> const& value, uint32_t& index) const
        {
            bool found{};
            check_hresult(WINRT_SHIM(wfc::IVector<T>)->IndexOf(get_abi(value), &index, &found));
            return found;
        }

        void SetAt(uint32_t const index, param_type<T> const& value) const
        {
            check_hresult(WINRT_SHIM(wfc::IVector<T>)->SetAt(index, get_abi(value)));
        }

        void InsertAt(uint32_t const index, param_type<T> const& value) const
        {
            check_hresult(WINRT_SHIM(wfc::IVector<T>)->InsertAt(index, get_abi(value)));
        }

        void RemoveAt(uint32_t const index) const
        {
            check_hresult(WINRT_SHIM(wfc::IVector<T>)->RemoveAt(index));
        }

        void Append(param_type<T> const& value) const
        {
            check_hresult(WINRT_SHIM(wfc::IVector<T>)->Append(get_abi(value)));
        }

        void RemoveAtEnd() const
        {
            check_hresult(WINRT_SHIM(wfc::IVector<T>)->RemoveAtEnd());
        }

        void Clear() const
        {
            check_hresult(WINRT_SHIM(wfc::IVector<T>)->Clear());
        }

        uint32_t GetMany(uint32_t startIndex, array_view<T> values) const
        {
            uint32_t actual{};
            check_hresult(WINRT_SHIM(wfc::IVector<T>)->GetMany(startIndex, values.size(), get_abi(values), &actual));
            return actual;
        }

        void ReplaceAll(array_view<T const> value) const
        {
            check_hresult(WINRT_SHIM(wfc::IVector<T>)->ReplaceAll(value.size(), get_abi(value)));
        }
    };

    template <typename D, typename T> struct consume_IObservableVector
    {
        event_token VectorChanged(wfc::VectorChangedEventHandler<T> const& handler) const
        {
            event_token cookie{};
            check_hresult(WINRT_SHIM(wfc::IObservableVector<T>)->add_VectorChanged(get_abi(handler), &cookie));
            return cookie;
        }

        void VectorChanged(event_token const cookie) const noexcept
        {
            WINRT_SHIM(wfc::IObservableVector<T>)->remove_VectorChanged(cookie);
        }

        using VectorChanged_revoker = event_revoker<wfc::IObservableVector<T>, &abi_t<wfc::IObservableVector<T>>::remove_VectorChanged>;

        VectorChanged_revoker VectorChanged(auto_revoke_t, wfc::VectorChangedEventHandler<T> const& handler) const
        {
            return make_event_revoker<D, VectorChanged_revoker>(this, VectorChanged(handler));
        }
    };

    template <typename D, typename K, typename V> struct consume_IKeyValuePair
    {
        K Key() const
        {
            K result{ empty_value<K>() };
            check_hresult(WINRT_SHIM(wfc::IKeyValuePair<K, V>)->get_Key(put_abi(result)));
            return result;
        }

        V Value() const
        {
            V result{ empty_value<V>() };
            check_hresult(WINRT_SHIM(wfc::IKeyValuePair<K, V>)->get_Value(put_abi(result)));
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

    template <typename D, typename K, typename V> struct consume_IMapView
    {
        V Lookup(param_type<K> const& key) const
        {
            V result{ empty_value<V>() };
            check_hresult(WINRT_SHIM(wfc::IMapView<K, V>)->Lookup(get_abi(key), put_abi(result)));
            return result;
        }

        auto TryLookup(param_type<K> const& key) const noexcept
        {
            if constexpr (std::is_base_of_v<Windows::Foundation::IUnknown, V>)
            {
                V result{ nullptr };
                WINRT_SHIM(wfc::IMapView<K, V>)->Lookup(get_abi(key), put_abi(result));
                return result;
            }
            else
            {
                std::optional<V> result;
                V value{ empty_value<V>() };

                if (error_ok == WINRT_SHIM(wfc::IMapView<K, V>)->Lookup(get_abi(key), put_abi(value)))
                {
                    result = std::move(value);
                }

                return result;
            }
        }

        uint32_t Size() const
        {
            uint32_t size{};
            check_hresult(WINRT_SHIM(wfc::IMapView<K, V>)->get_Size(&size));
            return size;
        }

        bool HasKey(param_type<K> const& key) const
        {
            bool found{};
            check_hresult(WINRT_SHIM(wfc::IMapView<K, V>)->HasKey(get_abi(key), &found));
            return found;
        }
        void Split(wfc::IMapView<K, V>& firstPartition, wfc::IMapView<K, V>& secondPartition)
        {
            check_hresult(WINRT_SHIM(wfc::IMapView<K, V>)->Split(put_abi(firstPartition), put_abi(secondPartition)));
        }
    };

    template <typename D, typename K, typename V> struct consume_IMap
    {
        V Lookup(param_type<K> const& key) const
        {
            V result{ empty_value<V>() };
            check_hresult(WINRT_SHIM(wfc::IMap<K, V>)->Lookup(get_abi(key), put_abi(result)));
            return result;
        }

        auto TryLookup(param_type<K> const& key) const noexcept
        {
            if constexpr (std::is_base_of_v<Windows::Foundation::IUnknown, V>)
            {
                V result{ nullptr };
                WINRT_SHIM(wfc::IMap<K, V>)->Lookup(get_abi(key), put_abi(result));
                return result;
            }
            else
            {
                std::optional<V> result;
                V value{ empty_value<V>() };

                if (error_ok == WINRT_SHIM(wfc::IMap<K, V>)->Lookup(get_abi(key), put_abi(value)))
                {
                    result = std::move(value);
                }

                return result;
            }
        }

        uint32_t Size() const
        {
            uint32_t size{};
            check_hresult(WINRT_SHIM(wfc::IMap<K, V>)->get_Size(&size));
            return size;
        }

        bool HasKey(param_type<K> const& key) const
        {
            bool found{};
            check_hresult(WINRT_SHIM(wfc::IMap<K, V>)->HasKey(get_abi(key), &found));
            return found;
        }

        wfc::IMapView<K, V> GetView() const
        {
            wfc::IMapView<K, V> view;
            check_hresult(WINRT_SHIM(wfc::IMap<K, V>)->GetView(put_abi(view)));
            return view;
        }

        bool Insert(param_type<K> const& key, param_type<V> const& value) const
        {
            bool replaced{};
            check_hresult(WINRT_SHIM(wfc::IMap<K, V>)->Insert(get_abi(key), get_abi(value), &replaced));
            return replaced;
        }

        void Remove(param_type<K> const& key) const
        {
            check_hresult(WINRT_SHIM(wfc::IMap<K, V>)->Remove(get_abi(key)));
        }

        void Clear() const
        {
            check_hresult(WINRT_SHIM(wfc::IMap<K, V>)->Clear());
        }
    };

    template <typename D, typename K, typename V> struct consume_IObservableMap
    {
        event_token MapChanged(wfc::MapChangedEventHandler<K, V> const& handler) const
        {
            event_token cookie{};
            check_hresult(WINRT_SHIM(wfc::IObservableMap<K, V>)->add_MapChanged(get_abi(handler), &cookie));
            return cookie;
        }

        void MapChanged(event_token const cookie) const noexcept
        {
            WINRT_SHIM(wfc::IObservableMap<K, V>)->remove_MapChanged(cookie);
        }

        using MapChanged_revoker = event_revoker<wfc::IObservableMap<K, V>, &abi_t<wfc::IObservableMap<K, V>>::remove_MapChanged>;

        MapChanged_revoker MapChanged(auto_revoke_t, wfc::MapChangedEventHandler<K, V> const& handler) const
        {
            return make_event_revoker<D, MapChanged_revoker>(this, MapChanged(handler));
        }
    };

    template <typename D> struct consume_IAsyncInfo
    {
        uint32_t Id() const
        {
            uint32_t id{};
            check_hresult(WINRT_SHIM(Windows::Foundation::IAsyncInfo)->get_Id(&id));
            return id;
        }

        Windows::Foundation::AsyncStatus Status() const
        {
            Windows::Foundation::AsyncStatus status{};
            check_hresult(WINRT_SHIM(Windows::Foundation::IAsyncInfo)->get_Status(&status));
            return status;
        }

        hresult ErrorCode() const
        {
            int32_t code{};
            check_hresult(WINRT_SHIM(Windows::Foundation::IAsyncInfo)->get_ErrorCode(&code));
            return code;
        }

        void Cancel() const
        {
            check_hresult(WINRT_SHIM(Windows::Foundation::IAsyncInfo)->Cancel());
        }

        void Close() const
        {
            check_hresult(WINRT_SHIM(Windows::Foundation::IAsyncInfo)->Close());
        }
    };

    template <typename D> struct consume_IAsyncAction
    {
        void Completed(Windows::Foundation::AsyncActionCompletedHandler const& handler) const;
        Windows::Foundation::AsyncActionCompletedHandler Completed() const;

        void GetResults() const
        {
            check_hresult(WINRT_SHIM(Windows::Foundation::IAsyncAction)->GetResults());
        }

        void get() const
        {
            blocking_suspend(static_cast<Windows::Foundation::IAsyncAction const&>(static_cast<D const&>(*this)));
            GetResults();
        }
    };

    template <typename D, typename TResult> struct consume_IAsyncOperation
    {
        void Completed(Windows::Foundation::AsyncOperationCompletedHandler<TResult> const& handler) const;
        Windows::Foundation::AsyncOperationCompletedHandler<TResult> Completed() const;

        TResult GetResults() const
        {
            TResult result = empty_value<TResult>();
            check_hresult(WINRT_SHIM(Windows::Foundation::IAsyncOperation<TResult>)->GetResults(put_abi(result)));
            return result;
        }

        TResult get() const
        {
            blocking_suspend(static_cast<Windows::Foundation::IAsyncOperation<TResult> const&>(static_cast<D const&>(*this)));
            return GetResults();
        }
    };

    template <typename D, typename TProgress> struct consume_IAsyncActionWithProgress
    {
        void Progress(Windows::Foundation::AsyncActionProgressHandler<TProgress> const& handler) const;
        Windows::Foundation::AsyncActionProgressHandler<TProgress> Progress() const;

        void Completed(Windows::Foundation::AsyncActionWithProgressCompletedHandler<TProgress> const& handler) const;
        Windows::Foundation::AsyncActionWithProgressCompletedHandler<TProgress> Completed() const;

        void GetResults() const
        {
            check_hresult(WINRT_SHIM(Windows::Foundation::IAsyncActionWithProgress<TProgress>)->GetResults());
        }

        void get() const
        {
            blocking_suspend(static_cast<Windows::Foundation::IAsyncActionWithProgress<TProgress> const&>(static_cast<D const&>(*this)));
            GetResults();
        }

    };

    template <typename D, typename TResult, typename TProgress> struct consume_IAsyncOperationWithProgress
    {
        void Progress(Windows::Foundation::AsyncOperationProgressHandler<TResult, TProgress> const& handler) const;
        Windows::Foundation::AsyncOperationProgressHandler<TResult, TProgress> Progress() const;

        void Completed(Windows::Foundation::AsyncOperationWithProgressCompletedHandler<TResult, TProgress> const& handler) const;
        Windows::Foundation::AsyncOperationWithProgressCompletedHandler<TResult, TProgress> Completed() const;

        TResult GetResults() const
        {
            TResult result = empty_value<TResult>();
            check_hresult(WINRT_SHIM(Windows::Foundation::IAsyncOperationWithProgress<TResult, TProgress>)->GetResults(put_abi(result)));
            return result;
        }

        TResult get() const
        {
            blocking_suspend(static_cast<Windows::Foundation::IAsyncOperationWithProgress<TResult, TProgress> const&>(static_cast<D const&>(*this)));
            return GetResults();
        }
    };
}

namespace winrt::impl
{
    template <> struct guid_storage<Windows::Foundation::IUnknown>
    {
        static constexpr guid value{ 0x00000000,0x0000,0x0000,{ 0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46 } };
    };

    template <> struct guid_storage<Windows::Foundation::IInspectable>
    {
        static constexpr guid value{ 0xAF86E2E0,0xB12D,0x4C6A,{ 0x9C,0x5A,0xD7,0xAA,0x65,0x10,0x1E,0x90 } };
    };

    template <> struct guid_storage<Windows::Foundation::IActivationFactory>
    {
        static constexpr guid value{ 0x00000035,0x0000,0x0000,{ 0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x46 } };
    };

    template <> struct guid_storage<IAgileObject>
    {
        static constexpr guid value{ 0x94EA2B94,0xE9CC,0x49E0,{ 0xC0,0xFF,0xEE,0x64,0xCA,0x8F,0x5B,0x90 } };
    };

    template <> struct guid_storage<IMarshal>
    {
        static constexpr guid value{ 0x00000003,0x0000,0x0000,{ 0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46 } };
    };

    template <> struct guid_storage<IStaticLifetime>
    {
        static constexpr guid value{ 0x17b0e613,0x942a,0x422d,{ 0x90,0x4c,0xf9,0x0d,0xc7,0x1a,0x7d,0xae } };
    };

    template <> struct guid_storage<IWeakReference>
    {
        static constexpr guid value{ 0x00000037,0x0000,0x0000,{ 0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46 } };
    };

    template <> struct guid_storage<IWeakReferenceSource>
    {
        static constexpr guid value{ 0x00000038,0x0000,0x0000,{ 0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46 } };
    };

    template <> struct guid_storage<ILanguageExceptionErrorInfo2>
    {
        static constexpr guid value{ 0x5746E5C4,0x5B97,0x424C,{ 0xB6,0x20,0x28,0x22,0x91,0x57,0x34,0xDD } };
    };

    template <> struct guid_storage<IContextCallback>
    {
        static constexpr guid value{ 0x000001da,0x0000,0x0000,{ 0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46 } };
    };

    template <> struct guid_storage<IServerSecurity>
    {
        static constexpr guid value{ 0x0000013E,0x0000,0x0000,{ 0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46 } };
    };

    template <> struct guid_storage<ICallbackWithNoReentrancyToApplicationSTA>
    {
        static constexpr guid value{ 0x0A299774,0x3E4E,0xFC42,{ 0x1D,0x9D,0x72,0xCE,0xE1,0x05,0xCA,0x57 } };
    };

    template <> struct guid_storage<IBufferByteAccess>
    {
        static constexpr guid value{ 0x905a0fef,0xbc53,0x11df,{ 0x8c,0x49,0x00,0x1e,0x4f,0xc6,0x86,0xda } };
    };

    template <> struct guid_storage<wfc::IVectorChangedEventArgs>
    {
        static constexpr guid value{ 0x575933DF,0x34FE,0x4480,{ 0xAF,0x15,0x07,0x69,0x1F,0x3D,0x5D,0x9B } };
    };

    template <> struct guid_storage<Windows::Foundation::IAsyncInfo>
    {
        static constexpr guid value{ 0x00000036,0x0000,0x0000,{ 0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46 } };
    };

    template <> struct guid_storage<Windows::Foundation::AsyncActionCompletedHandler>
    {
        static constexpr guid value{ 0xA4ED5C81,0x76C9,0x40BD,{ 0x8B,0xE6,0xB1,0xD9,0x0F,0xB2,0x0A,0xE7 } };
    };

    template <> struct guid_storage<Windows::Foundation::IAsyncAction>
    {
        static constexpr guid value{ 0x5A648006,0x843A,0x4DA9,{ 0x86,0x5B,0x9D,0x26,0xE5,0xDF,0xAD,0x7B } };
    };

    template <typename T> struct guid_storage<Windows::Foundation::IReference<T>>
    {
        static constexpr guid value{ pinterface_guid<Windows::Foundation::IReference<T>>::value };
    };

    template <typename T> struct guid_storage<Windows::Foundation::IReferenceArray<T>>
    {
        static constexpr guid value{ pinterface_guid<Windows::Foundation::IReferenceArray<T>>::value };
    };

    template <typename TResult> struct guid_storage<Windows::Foundation::AsyncOperationCompletedHandler<TResult>>
    {
        static constexpr guid value{ pinterface_guid<Windows::Foundation::AsyncOperationCompletedHandler<TResult>>::value };
    };

    template <typename TProgress> struct guid_storage<Windows::Foundation::AsyncActionWithProgressCompletedHandler<TProgress>>
    {
        static constexpr guid value{ pinterface_guid<Windows::Foundation::AsyncActionWithProgressCompletedHandler<TProgress>>::value };
    };

    template <typename TProgress> struct guid_storage<Windows::Foundation::AsyncActionProgressHandler<TProgress>>
    {
        static constexpr guid value{ pinterface_guid<Windows::Foundation::AsyncActionProgressHandler<TProgress>>::value };
    };

    template <typename TResult, typename TProgress> struct guid_storage<Windows::Foundation::AsyncOperationProgressHandler<TResult, TProgress>>
    {
        static constexpr guid value{ pinterface_guid<Windows::Foundation::AsyncOperationProgressHandler<TResult, TProgress>>::value };
    };

    template <typename TResult, typename TProgress> struct guid_storage<Windows::Foundation::AsyncOperationWithProgressCompletedHandler<TResult, TProgress>>
    {
        static constexpr guid value{ pinterface_guid<Windows::Foundation::AsyncOperationWithProgressCompletedHandler<TResult, TProgress>>::value };
    };

    template <typename TResult> struct guid_storage<Windows::Foundation::IAsyncOperation<TResult>>
    {
        static constexpr guid value{ pinterface_guid<Windows::Foundation::IAsyncOperation<TResult>>::value };
    };

    template <typename TProgress> struct guid_storage<Windows::Foundation::IAsyncActionWithProgress<TProgress>>
    {
        static constexpr guid value{ pinterface_guid<Windows::Foundation::IAsyncActionWithProgress<TProgress>>::value };
    };

    template <typename TResult, typename TProgress> struct guid_storage<Windows::Foundation::IAsyncOperationWithProgress<TResult, TProgress>>
    {
        static constexpr guid value{ pinterface_guid<Windows::Foundation::IAsyncOperationWithProgress<TResult, TProgress>>::value };
    };

    template <typename K> struct guid_storage<wfc::IMapChangedEventArgs<K>>
    {
        static constexpr guid value{ pinterface_guid<wfc::IMapChangedEventArgs<K>>::value };
    };

    template <typename T> struct guid_storage<wfc::VectorChangedEventHandler<T>>
    {
        static constexpr guid value{ pinterface_guid<wfc::VectorChangedEventHandler<T>>::value };
    };

    template <typename K, typename V> struct guid_storage<wfc::MapChangedEventHandler<K, V>>
    {
        static constexpr guid value{ pinterface_guid<wfc::MapChangedEventHandler<K, V>>::value };
    };

    template <typename T> struct guid_storage<wfc::IIterator<T>>
    {
        static constexpr guid value{ pinterface_guid<wfc::IIterator<T>>::value };
    };

    template <typename T> struct guid_storage<wfc::IIterable<T>>
    {
        static constexpr guid value{ pinterface_guid<wfc::IIterable<T>>::value };
    };

    template <typename T> struct guid_storage<wfc::IVectorView<T>>
    {
        static constexpr guid value{ pinterface_guid<wfc::IVectorView<T>>::value };
    };

    template <typename T> struct guid_storage<wfc::IVector<T>>
    {
        static constexpr guid value{ pinterface_guid<wfc::IVector<T>>::value };
    };

    template <typename T> struct guid_storage<wfc::IObservableVector<T>>
    {
        static constexpr guid value{ pinterface_guid<wfc::IObservableVector<T>>::value };
    };

    template <typename K, typename V> struct guid_storage<wfc::IKeyValuePair<K, V>>
    {
        static constexpr guid value{ pinterface_guid<wfc::IKeyValuePair<K, V>>::value };
    };

    template <typename K, typename V> struct guid_storage<wfc::IMapView<K, V>>
    {
        static constexpr guid value{ pinterface_guid<wfc::IMapView<K, V>>::value };
    };

    template <typename K, typename V> struct guid_storage<wfc::IMap<K, V>>
    {
        static constexpr guid value{ pinterface_guid<wfc::IMap<K, V>>::value };
    };

    template <typename K, typename V> struct guid_storage<wfc::IObservableMap<K, V>>
    {
        static constexpr guid value{ pinterface_guid<wfc::IObservableMap<K, V>>::value };
    };

    template <typename T> struct guid_storage<Windows::Foundation::EventHandler<T>>
    {
        static constexpr guid value{ pinterface_guid<Windows::Foundation::EventHandler<T>>::value };
    };

    template <typename TSender, typename TArgs> struct guid_storage<Windows::Foundation::TypedEventHandler<TSender, TArgs>>
    {
        static constexpr guid value{ pinterface_guid<Windows::Foundation::TypedEventHandler<TSender, TArgs>>::value };
    };

    template <> struct consume<Windows::Foundation::IActivationFactory>
    {
        template <typename D> using type = consume_IActivationFactory<D>;
    };

    template <> struct consume<wfc::IVectorChangedEventArgs>
    {
        template <typename D> using type = consume_IVectorChangedEventArgs<D>;
    };

    template <typename TResult> struct consume<Windows::Foundation::IAsyncOperation<TResult>>
    {
        template <typename D> using type = consume_IAsyncOperation<D, TResult>;
    };

    template <typename TProgress> struct consume<Windows::Foundation::IAsyncActionWithProgress<TProgress>>
    {
        template <typename D> using type = consume_IAsyncActionWithProgress<D, TProgress>;
    };

    template <typename TResult, typename TProgress> struct consume<Windows::Foundation::IAsyncOperationWithProgress<TResult, TProgress>>
    {
        template <typename D> using type = consume_IAsyncOperationWithProgress<D, TResult, TProgress>;
    };

    template <> struct consume<Windows::Foundation::IAsyncInfo>
    {
        template <typename D> using type = consume_IAsyncInfo<D>;
    };

    template <> struct consume<Windows::Foundation::IAsyncAction>
    {
        template <typename D> using type = consume_IAsyncAction<D>;
    };

    template <typename T> struct consume<Windows::Foundation::IReference<T>>
    {
        template <typename D> using type = consume_IReference<D, T>;
    };

    template <typename T> struct consume<Windows::Foundation::IReferenceArray<T>>
    {
        template <typename D> using type = consume_IReferenceArray<D, T>;
    };

    template <typename K> struct consume<wfc::IMapChangedEventArgs<K>>
    {
        template <typename D> using type = consume_IMapChangedEventArgs<D, K>;
    };

    template <typename T> struct consume<wfc::IIterator<T>>
    {
        template <typename D> using type = consume_IIterator<D, T>;
    };

    template <typename T> struct consume<wfc::IIterable<T>>
    {
        template <typename D> using type = consume_IIterable<D, T>;
    };

    template <typename T> struct consume<wfc::IVectorView<T>>
    {
        template <typename D> using type = consume_IVectorView<D, T>;
    };

    template <typename T> struct consume<wfc::IVector<T>>
    {
        template <typename D> using type = consume_IVector<D, T>;
    };

    template <typename T> struct consume<wfc::IObservableVector<T>>
    {
        template <typename D> using type = consume_IObservableVector<D, T>;
    };

    template <typename K, typename V> struct consume<wfc::IKeyValuePair<K, V>>
    {
        template <typename D> using type = consume_IKeyValuePair<D, K, V>;
    };

    template <typename K, typename V> struct consume<wfc::IMapView<K, V>>
    {
        template <typename D> using type = consume_IMapView<D, K, V>;
    };

    template <typename K, typename V> struct consume<wfc::IMap<K, V>>
    {
        template <typename D> using type = consume_IMap<D, K, V>;
    };

    template <typename K, typename V> struct consume<wfc::IObservableMap<K, V>>
    {
        template <typename D> using type = consume_IObservableMap<D, K, V>;
    };

    template <> struct name<Windows::Foundation::AsyncActionCompletedHandler>
    {
        static constexpr auto & value{ L"Windows.Foundation.AsyncActionCompletedHandler" };
    };

    template <typename TResult> struct name<Windows::Foundation::AsyncOperationCompletedHandler<TResult>>
    {
        static constexpr auto value{ zcombine(L"Windows.Foundation.AsyncOperationCompletedHandler`1<", name_v<TResult>, L">") };
    };

    template <typename TProgress> struct name<Windows::Foundation::AsyncActionWithProgressCompletedHandler<TProgress>>
    {
        static constexpr auto value{ zcombine(L"Windows.Foundation.AsyncActionWithProgressCompletedHandler`1<", name_v<TProgress>, L">") };
    };

    template <typename TProgress> struct name<Windows::Foundation::AsyncActionProgressHandler<TProgress>>
    {
        static constexpr auto value{ zcombine(L"Windows.Foundation.AsyncActionProgressHandler`1<", name_v<TProgress>, L">") };
    };

    template <typename TResult, typename TProgress> struct name<Windows::Foundation::AsyncOperationProgressHandler<TResult, TProgress>>
    {
        static constexpr auto value{ zcombine(L"Windows.Foundation.AsyncOperationProgressHandler`2<", name_v<TResult>, L", ", name_v<TProgress>, L">") };
    };

    template <typename TResult, typename TProgress> struct name<Windows::Foundation::AsyncOperationWithProgressCompletedHandler<TResult, TProgress>>
    {
        static constexpr auto value{ zcombine(L"Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<", name_v<TResult>, L", ", name_v<TProgress>, L">") };
    };

    template <> struct name<Windows::Foundation::IAsyncInfo>
    {
        static constexpr auto & value{ L"Windows.Foundation.IAsyncInfo" };
    };

    template <> struct name<Windows::Foundation::IAsyncAction>
    {
        static constexpr auto & value{ L"Windows.Foundation.IAsyncAction" };
    };

    template <typename TResult> struct name<Windows::Foundation::IAsyncOperation<TResult>>
    {
        static constexpr auto value{ zcombine(L"Windows.Foundation.IAsyncOperation`1<", name_v<TResult>, L">") };
    };

    template <typename TProgress> struct name<Windows::Foundation::IAsyncActionWithProgress<TProgress>>
    {
        static constexpr auto value{ zcombine(L"Windows.Foundation.IAsyncActionWithProgress`1<", name_v<TProgress>, L">") };
    };

    template <typename TResult, typename TProgress> struct name<Windows::Foundation::IAsyncOperationWithProgress<TResult, TProgress>>
    {
        static constexpr auto value{ zcombine(L"Windows.Foundation.IAsyncOperationWithProgress`2<", name_v<TResult>, L", ", name_v<TProgress>, L">") };
    };

    template <> struct name<Windows::Foundation::IInspectable>
    {
        static constexpr auto & value{ L"Object" };
        static constexpr auto & data{ "cinterface(IInspectable)" };
    };

    template <> struct name<Windows::Foundation::IActivationFactory>
    {
        static constexpr auto & value{ L"Windows.Foundation.IActivationFactory" };
    };

    template <> struct name<IAgileObject>
    {
        static constexpr auto & value{ L"IAgileObject" };
    };

    template <> struct name<IWeakReferenceSource>
    {
        static constexpr auto & value{ L"IWeakReferenceSource" };
    };

    template <typename T> struct name<Windows::Foundation::IReference<T>>
    {
        static constexpr auto value{ zcombine(L"Windows.Foundation.IReference`1<", name_v<T>, L">") };
    };

    template <typename T> struct name<Windows::Foundation::IReferenceArray<T>>
    {
        static constexpr auto value{ zcombine(L"Windows.Foundation.IReferenceArray`1<", name_v<T>, L">") };
    };

    template <> struct name<wfc::IVectorChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Foundation.Collections.IVectorChangedEventArgs" };
    };

    template <typename K> struct name<wfc::IMapChangedEventArgs<K>>
    {
        static constexpr auto value{ zcombine(L"Windows.Foundation.Collections.IMapChangedEventArgs`1<", name_v<K>, L">") };
    };

    template <typename T> struct name<wfc::VectorChangedEventHandler<T>>
    {
        static constexpr auto value{ zcombine(L"Windows.Foundation.Collections.VectorChangedEventHandler`1<", name_v<T>, L">") };
    };

    template <typename K, typename V> struct name<wfc::MapChangedEventHandler<K, V>>
    {
        static constexpr auto value{ zcombine(L"Windows.Foundation.Collections.MapChangedEventHandler`2<", name_v<K>, L", ", name_v<V>, L">") };
    };

    template <typename T> struct name<wfc::IIterator<T>>
    {
        static constexpr auto value{ zcombine(L"Windows.Foundation.Collections.IIterator`1<", name_v<T>, L">") };
    };

    template <typename T> struct name<wfc::IIterable<T>>
    {
        static constexpr auto value{ zcombine(L"Windows.Foundation.Collections.IIterable`1<", name_v<T>, L">") };
    };

    template <typename T> struct name<wfc::IVectorView<T>>
    {
        static constexpr auto value{ zcombine(L"Windows.Foundation.Collections.IVectorView`1<", name_v<T>, L">") };
    };

    template <typename T> struct name<wfc::IVector<T>>
    {
        static constexpr auto value{ zcombine(L"Windows.Foundation.Collections.IVector`1<", name_v<T>, L">") };
    };

    template <typename T> struct name<wfc::IObservableVector<T>>
    {
        static constexpr auto value{ zcombine(L"Windows.Foundation.Collections.IObservableVector`1<", name_v<T>, L">") };
    };

    template <typename K, typename V> struct name<wfc::IKeyValuePair<K, V>>
    {
        static constexpr auto value{ zcombine(L"Windows.Foundation.Collections.IKeyValuePair`2<", name_v<K>, L", ", name_v<V>, L">") };
    };

    template <typename K, typename V> struct name<wfc::IMapView<K, V>>
    {
        static constexpr auto value{ zcombine(L"Windows.Foundation.Collections.IMapView`2<", name_v<K>, L", ", name_v<V>, L">") };
    };

    template <typename K, typename V> struct name<wfc::IMap<K, V>>
    {
        static constexpr auto value{ zcombine(L"Windows.Foundation.Collections.IMap`2<", name_v<K>, L", ", name_v<V>, L">") };
    };

    template <typename K, typename V> struct name<wfc::IObservableMap<K, V>>
    {
        static constexpr auto value{ zcombine(L"Windows.Foundation.Collections.IObservableMap`2<", name_v<K>, L", ", name_v<V>, L">") };
    };

    template <typename T> struct name<Windows::Foundation::EventHandler<T>>
    {
        static constexpr auto value{ zcombine(L"Windows.Foundation.EventHandler`1<", name_v<T>, L">") };
    };

    template <typename TSender, typename TArgs> struct name<Windows::Foundation::TypedEventHandler<TSender, TArgs>>
    {
        static constexpr auto value{ zcombine(L"Windows.Foundation.TypedEventHandler`2<", name_v<TSender>, L", ", name_v<TArgs>, L">") };
    };

    template <> struct category<Windows::Foundation::AsyncActionCompletedHandler>
    {
        using type = delegate_category;
    };

    template <typename TResult> struct category<Windows::Foundation::AsyncOperationCompletedHandler<TResult>>
    {
        using type = pinterface_category<TResult>;
        static constexpr guid value{ 0xfcdcf02c, 0xe5d8, 0x4478,{ 0x91, 0x5a, 0x4d, 0x90, 0xb7, 0x4b, 0x83, 0xa5 } };
    };

    template <typename TProgress> struct category<Windows::Foundation::AsyncActionWithProgressCompletedHandler<TProgress>>
    {
        using type = pinterface_category<TProgress>;
        static constexpr guid value{ 0x9c029f91, 0xcc84, 0x44fd,{ 0xac, 0x26, 0x0a, 0x6c, 0x4e, 0x55, 0x52, 0x81 } };
    };

    template <typename TProgress> struct category<Windows::Foundation::AsyncActionProgressHandler<TProgress>>
    {
        using type = pinterface_category<TProgress>;
        static constexpr guid value{ 0x6d844858, 0x0cff, 0x4590,{ 0xae, 0x89, 0x95, 0xa5, 0xa5, 0xc8, 0xb4, 0xb8 } };
    };

    template <typename TResult, typename TProgress> struct category<Windows::Foundation::AsyncOperationProgressHandler<TResult, TProgress>>
    {
        using type = pinterface_category<TResult, TProgress>;
        static constexpr guid value{ 0x55690902, 0x0aab, 0x421a,{ 0x87, 0x78, 0xf8, 0xce, 0x50, 0x26, 0xd7, 0x58 } };
    };

    template <typename TResult, typename TProgress> struct category<Windows::Foundation::AsyncOperationWithProgressCompletedHandler<TResult, TProgress>>
    {
        using type = pinterface_category<TResult, TProgress>;
        static constexpr guid value{ 0xe85df41d, 0x6aa7, 0x46e3,{ 0xa8, 0xe2, 0xf0, 0x09, 0xd8, 0x40, 0xc6, 0x27 } };
    };

    template <> struct category<Windows::Foundation::IAsyncInfo>
    {
        using type = interface_category;
    };

    template <> struct category<Windows::Foundation::IAsyncAction>
    {
        using type = interface_category;
    };

    template <typename TResult> struct category<Windows::Foundation::IAsyncOperation<TResult>>
    {
        using type = pinterface_category<TResult>;
        static constexpr guid value{ 0x9fc2b0bb, 0xe446, 0x44e2,{ 0xaa, 0x61, 0x9c, 0xab, 0x8f, 0x63, 0x6a, 0xf2 } };
    };

    template <typename TProgress> struct category<Windows::Foundation::IAsyncActionWithProgress<TProgress>>
    {
        using type = pinterface_category<TProgress>;
        static constexpr guid value{ 0x1f6db258, 0xe803, 0x48a1,{ 0x95, 0x46, 0xeb, 0x73, 0x53, 0x39, 0x88, 0x84 } };
    };

    template <typename TResult, typename TProgress> struct category<Windows::Foundation::IAsyncOperationWithProgress<TResult, TProgress>>
    {
        using type = pinterface_category<TResult, TProgress>;
        static constexpr guid value{ 0xb5d036d7, 0xe297, 0x498f,{ 0xba, 0x60, 0x02, 0x89, 0xe7, 0x6e, 0x23, 0xdd } };
    };

    template <> struct category<Windows::Foundation::IUnknown>
    {
        using type = interface_category;
    };

    template <> struct category<Windows::Foundation::IInspectable>
    {
        using type = basic_category;
    };

    template <> struct category<Windows::Foundation::IActivationFactory>
    {
        using type = interface_category;
    };

    template <typename T> struct category<Windows::Foundation::IReference<T>>
    {
        using type = pinterface_category<T>;
        static constexpr guid value{ 0x61c17706, 0x2d65, 0x11e0,{ 0x9a, 0xe8, 0xd4, 0x85, 0x64, 0x01, 0x54, 0x72 } };
    };

    template <typename T> struct category<Windows::Foundation::IReferenceArray<T>>
    {
        using type = pinterface_category<T>;
        static constexpr guid value{ 0x61c17707, 0x2d65, 0x11e0,{ 0x9a, 0xe8, 0xd4, 0x85, 0x64, 0x01, 0x54, 0x72 } };
    };

    template <> struct category<wfc::IVectorChangedEventArgs>
    {
        using type = interface_category;
    };

    template <typename K> struct category<wfc::IMapChangedEventArgs<K>>
    {
        using type = pinterface_category<K>;
        static constexpr guid value{ 0x9939f4df, 0x050a, 0x4c0f,{ 0xaa, 0x60, 0x77, 0x07, 0x5f, 0x9c, 0x47, 0x77 } };
    };

    template <typename T> struct category<wfc::VectorChangedEventHandler<T>>
    {
        using type = pinterface_category<T>;
        static constexpr guid value{ 0x0c051752, 0x9fbf, 0x4c70,{ 0xaa, 0x0c, 0x0e, 0x4c, 0x82, 0xd9, 0xa7, 0x61 } };
    };

    template <typename K, typename V> struct category<wfc::MapChangedEventHandler<K, V>>
    {
        using type = pinterface_category<K, V>;
        static constexpr guid value{ 0x179517f3, 0x94ee, 0x41f8,{ 0xbd, 0xdc, 0x76, 0x8a, 0x89, 0x55, 0x44, 0xf3 } };
    };

    template <typename T> struct category<wfc::IIterator<T>>
    {
        using type = pinterface_category<T>;
        static constexpr guid value{ 0x6a79e863, 0x4300, 0x459a,{ 0x99, 0x66, 0xcb, 0xb6, 0x60, 0x96, 0x3e, 0xe1 } };
    };

    template <typename T> struct category<wfc::IIterable<T>>
    {
        using type = pinterface_category<T>;
        static constexpr guid value{ 0xfaa585ea, 0x6214, 0x4217,{ 0xaf, 0xda, 0x7f, 0x46, 0xde, 0x58, 0x69, 0xb3 } };
    };

    template <typename T> struct category<wfc::IVectorView<T>>
    {
        using type = pinterface_category<T>;
        static constexpr guid value{ 0xbbe1fa4c, 0xb0e3, 0x4583,{ 0xba, 0xef, 0x1f, 0x1b, 0x2e, 0x48, 0x3e, 0x56 } };
    };

    template <typename T> struct category<wfc::IVector<T>>
    {
        using type = pinterface_category<T>;
        static constexpr guid value{ 0x913337e9, 0x11a1, 0x4345,{ 0xa3, 0xa2, 0x4e, 0x7f, 0x95, 0x6e, 0x22, 0x2d } };
    };

    template <typename T> struct category<wfc::IObservableVector<T>>
    {
        using type = pinterface_category<T>;
        static constexpr guid value{ 0x5917eb53, 0x50b4, 0x4a0d,{ 0xb3, 0x09, 0x65, 0x86, 0x2b, 0x3f, 0x1d, 0xbc } };
    };

    template <typename K, typename V> struct category<wfc::IKeyValuePair<K, V>>
    {
        using type = pinterface_category<K, V>;
        static constexpr guid value{ 0x02b51929, 0xc1c4, 0x4a7e,{ 0x89, 0x40, 0x03, 0x12, 0xb5, 0xc1, 0x85, 0x00 } };
    };

    template <typename K, typename V> struct category<wfc::IMapView<K, V>>
    {
        using type = pinterface_category<K, V>;
        static constexpr guid value{ 0xe480ce40, 0xa338, 0x4ada,{ 0xad, 0xcf, 0x27, 0x22, 0x72, 0xe4, 0x8c, 0xb9 } };
    };

    template <typename K, typename V> struct category<wfc::IMap<K, V>>
    {
        using type = pinterface_category<K, V>;
        static constexpr guid value{ 0x3c2925fe, 0x8519, 0x45c1,{ 0xaa, 0x79, 0x19, 0x7b, 0x67, 0x18, 0xc1, 0xc1 } };
    };

    template <typename K, typename V> struct category<wfc::IObservableMap<K, V>>
    {
        using type = pinterface_category<K, V>;
        static constexpr guid value{ 0x65df2bf5, 0xbf39, 0x41b5,{ 0xae, 0xbc, 0x5a, 0x9d, 0x86, 0x5e, 0x47, 0x2b } };
    };

    template <typename T> struct category<Windows::Foundation::EventHandler<T>>
    {
        using type = pinterface_category<T>;
        static constexpr guid value{ 0x9de1c535, 0x6ae1, 0x11e0,{ 0x84, 0xe1, 0x18, 0xa9, 0x05, 0xbc, 0xc5, 0x3f } };
    };

    template <typename TSender, typename TArgs> struct category<Windows::Foundation::TypedEventHandler<TSender, TArgs>>
    {
        using type = pinterface_category<TSender, TArgs>;
        static constexpr guid value{ 0x9de1c534, 0x6ae1, 0x11e0,{ 0x84, 0xe1, 0x18, 0xa9, 0x05, 0xbc, 0xc5, 0x3f } };
    };
}

namespace winrt::impl
{
    inline int32_t make_marshaler(IUnknown* outer, void** result) noexcept
    {
        struct marshaler final : IMarshal
        {
            marshaler(IUnknown* object) noexcept
            {
                m_object.copy_from(object);
            }

            int32_t WINRT_CALL QueryInterface(guid const& id, void** object) noexcept final
            {
                if (is_guid_of<IMarshal>(id))
                {
                    *object = static_cast<IMarshal*>(this);
                    AddRef();
                    return error_ok;
                }

                return m_object->QueryInterface(id, object);
            }

            uint32_t WINRT_CALL AddRef() noexcept final
            {
                return 1 + m_references.fetch_add(1, std::memory_order_relaxed);
            }

            uint32_t WINRT_CALL Release() noexcept final
            {
                uint32_t const remaining = m_references.fetch_sub(1, std::memory_order_relaxed) - 1;

                if (remaining == 0)
                {
                    delete this;
                }

                return remaining;
            }

            int32_t WINRT_CALL GetUnmarshalClass(guid const& riid, void* pv, uint32_t dwDestContext, void* pvDestContext, uint32_t mshlflags, guid* pCid) noexcept final
            {
                if (m_marshaler)
                {
                    return m_marshaler->GetUnmarshalClass(riid, pv, dwDestContext, pvDestContext, mshlflags, pCid);
                }

                return error_bad_alloc;
            }

            int32_t WINRT_CALL GetMarshalSizeMax(guid const& riid, void* pv, uint32_t dwDestContext, void* pvDestContext, uint32_t mshlflags, uint32_t* pSize) noexcept final
            {
                if (m_marshaler)
                {
                    return m_marshaler->GetMarshalSizeMax(riid, pv, dwDestContext, pvDestContext, mshlflags, pSize);
                }

                return error_bad_alloc;
            }

            int32_t WINRT_CALL MarshalInterface(void* pStm, guid const& riid, void* pv, uint32_t dwDestContext, void* pvDestContext, uint32_t mshlflags) noexcept final
            {
                if (m_marshaler)
                {
                    return m_marshaler->MarshalInterface(pStm, riid, pv, dwDestContext, pvDestContext, mshlflags);
                }

                return error_bad_alloc;
            }

            int32_t WINRT_CALL UnmarshalInterface(void* pStm, guid const& riid, void** ppv) noexcept final
            {
                if (m_marshaler)
                {
                    return m_marshaler->UnmarshalInterface(pStm, riid, ppv);
                }

                *ppv = nullptr;
                return error_bad_alloc;
            }

            int32_t WINRT_CALL ReleaseMarshalData(void* pStm) noexcept final
            {
                if (m_marshaler)
                {
                    return m_marshaler->ReleaseMarshalData(pStm);
                }

                return error_bad_alloc;
            }

            int32_t WINRT_CALL DisconnectObject(uint32_t dwReserved) noexcept final
            {
                if (m_marshaler)
                {
                    return m_marshaler->DisconnectObject(dwReserved);
                }

                return error_bad_alloc;
            }

        private:

            static com_ptr<IMarshal> get_marshaler() noexcept
            {
                com_ptr<IUnknown> unknown;
                WINRT_VERIFY_(error_ok, WINRT_CoCreateFreeThreadedMarshaler(nullptr, unknown.put_void()));
                return unknown ? unknown.try_as<IMarshal>() : nullptr;
            }

            com_ptr<IUnknown> m_object;
            com_ptr<IMarshal> m_marshaler{ get_marshaler() };
            std::atomic<uint32_t> m_references{ 1 };
        };

        *result = new (std::nothrow) marshaler(outer);
        return *result ? error_ok : error_bad_alloc;
    }
}

namespace winrt::impl
{
    template <typename T, typename H>
    struct implements_delegate : abi_t<T>, H
    {
        implements_delegate(H&& handler) : H(std::forward<H>(handler)) {}

        int32_t WINRT_CALL QueryInterface(guid const& id, void** result) noexcept final
        {
            if (is_guid_of<T>(id) || is_guid_of<Windows::Foundation::IUnknown>(id) || is_guid_of<IAgileObject>(id))
            {
                *result = static_cast<abi_t<T>*>(this);
                AddRef();
                return error_ok;
            }

            if (is_guid_of<IMarshal>(id))
            {
                return make_marshaler(this, result);
            }

            *result = nullptr;
            return error_no_interface;
        }

        uint32_t WINRT_CALL AddRef() noexcept final
        {
            return 1 + m_references.fetch_add(1, std::memory_order_relaxed);
        }

        uint32_t WINRT_CALL Release() noexcept final
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

    template <typename... T>
    struct WINRT_NOVTABLE variadic_delegate_abi : IUnknown
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

        int32_t WINRT_CALL QueryInterface(guid const& id, void** result) noexcept final
        {
            if (is_guid_of<Windows::Foundation::IUnknown>(id) || is_guid_of<IAgileObject>(id))
            {
                *result = static_cast<IUnknown*>(this);
                AddRef();
                return error_ok;
            }

            *result = nullptr;
            return error_no_interface;
        }

        uint32_t WINRT_CALL AddRef() noexcept final
        {
            return 1 + m_references.fetch_add(1, std::memory_order_relaxed);
        }

        uint32_t WINRT_CALL Release() noexcept final
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

WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct WINRT_EBO IAsyncInfo :
        IInspectable,
        impl::consume_t<IAsyncInfo>
    {
        IAsyncInfo(std::nullptr_t = nullptr) noexcept {}
    };

    struct WINRT_EBO IAsyncAction :
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

        template <typename O, typename M> EventHandler(com_ptr<O>&& object, M method) :
            EventHandler([o = std::move(object), method](auto&&... args) { ((*o).*(method))(args...); })
        {}

        template <typename O, typename M> EventHandler(weak_ref<O>&& object, M method) :
            EventHandler([o = std::move(object), method](auto&&... args) { if (auto s = o.get()) { ((*s).*(method))(args...); } })
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

        template <typename O, typename M> TypedEventHandler(com_ptr<O>&& object, M method) :
            TypedEventHandler([o = std::move(object), method](auto&&... args) { ((*o).*(method))(args...); })
        {}

        template <typename O, typename M> TypedEventHandler(weak_ref<O>&& object, M method) :
            TypedEventHandler([o = std::move(object), method](auto&&... args) { if (auto s = o.get()) { ((*s).*(method))(args...); } })
        {}

        void operator()(TSender const& sender, TArgs const& args) const
        {
            check_hresult((*(impl::abi_t<TypedEventHandler<TSender, TArgs>>**)this)->Invoke(get_abi(sender), get_abi(args)));
        }
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

        template <typename O, typename M> AsyncActionCompletedHandler(com_ptr<O>&& object, M method) :
            AsyncActionCompletedHandler([o = std::move(object), method](auto&&... args) { ((*o).*(method))(args...); })
        {}

        template <typename O, typename M> AsyncActionCompletedHandler(weak_ref<O>&& object, M method) :
            AsyncActionCompletedHandler([o = std::move(object), method](auto&&... args) { if (auto s = o.get()) { ((*s).*(method))(args...); } })
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

        template <typename O, typename M> AsyncActionProgressHandler(com_ptr<O>&& object, M method) :
            AsyncActionProgressHandler([o = std::move(object), method](auto&&... args) { ((*o).*(method))(args...); })
        {}

        template <typename O, typename M> AsyncActionProgressHandler(weak_ref<O>&& object, M method) :
            AsyncActionProgressHandler([o = std::move(object), method](auto&&... args) { if (auto s = o.get()) { ((*s).*(method))(args...); } })
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

        template <typename O, typename M> AsyncActionWithProgressCompletedHandler(com_ptr<O>&& object, M method) :
            AsyncActionWithProgressCompletedHandler([o = std::move(object), method](auto&&... args) { ((*o).*(method))(args...); })
        {}

        template <typename O, typename M> AsyncActionWithProgressCompletedHandler(weak_ref<O>&& object, M method) :
            AsyncActionWithProgressCompletedHandler([o = std::move(object), method](auto&&... args) { if (auto s = o.get()) { ((*s).*(method))(args...); } })
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

        template <typename O, typename M> AsyncOperationProgressHandler(com_ptr<O>&& object, M method) :
            AsyncOperationProgressHandler([o = std::move(object), method](auto&&... args) { ((*o).*(method))(args...); })
        {}

        template <typename O, typename M> AsyncOperationProgressHandler(weak_ref<O>&& object, M method) :
            AsyncOperationProgressHandler([o = std::move(object), method](auto&&... args) { if (auto s = o.get()) { ((*s).*(method))(args...); } })
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

        template <typename O, typename M> AsyncOperationWithProgressCompletedHandler(com_ptr<O>&& object, M method) :
            AsyncOperationWithProgressCompletedHandler([o = std::move(object), method](auto&&... args) { ((*o).*(method))(args...); })
        {}

        template <typename O, typename M> AsyncOperationWithProgressCompletedHandler(weak_ref<O>&& object, M method) :
            AsyncOperationWithProgressCompletedHandler([o = std::move(object), method](auto&&... args) { if (auto s = o.get()) { ((*s).*(method))(args...); } })
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

        template <typename O, typename M> AsyncOperationCompletedHandler(com_ptr<O>&& object, M method) :
            AsyncOperationCompletedHandler([o = std::move(object), method](auto&&... args) { ((*o).*(method))(args...); })
        {}

        template <typename O, typename M> AsyncOperationCompletedHandler(weak_ref<O>&& object, M method) :
            AsyncOperationCompletedHandler([o = std::move(object), method](auto&&... args) { if (auto s = o.get()) { ((*s).*(method))(args...); } })
        {}

        void operator()(IAsyncOperation<TResult> const& sender, AsyncStatus args) const
        {
            check_hresult((*(impl::abi_t<AsyncOperationCompletedHandler<TResult>>**)this)->Invoke(get_abi(sender), args));
        }
    };
}

WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    template <typename K>
    struct WINRT_EBO IMapChangedEventArgs :
        IInspectable,
        impl::consume_t<IMapChangedEventArgs<K>>
    {
        static_assert(impl::has_category_v<K>, "K must be WinRT type.");
        IMapChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
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
        using pointer = T * ;
        using reference = T & ;
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

    struct WINRT_EBO IVectorChangedEventArgs :
        IInspectable,
        impl::consume_t<IVectorChangedEventArgs>
    {
        IVectorChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
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

        template <typename O, typename M> VectorChangedEventHandler(com_ptr<O>&& object, M method) :
            VectorChangedEventHandler([o = std::move(object), method](auto&&... args) { ((*o).*(method))(args...); })
        {}

        template <typename O, typename M> VectorChangedEventHandler(weak_ref<O>&& object, M method) :
            VectorChangedEventHandler([o = std::move(object), method](auto&&... args) { if (auto s = o.get()) { ((*s).*(method))(args...); } })
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

        template <typename O, typename M> MapChangedEventHandler(com_ptr<O>&& object, M method) :
            MapChangedEventHandler([o = std::move(object), method](auto&&... args) { ((*o).*(method))(args...); })
        {}

        template <typename O, typename M> MapChangedEventHandler(weak_ref<O>&& object, M method) :
            MapChangedEventHandler([o = std::move(object), method](auto&&... args) { if (auto s = o.get()) { ((*s).*(method))(args...); } })
        {}

        void operator()(IObservableMap<K, V> const& sender, IMapChangedEventArgs<K> const& args) const
        {
            check_hresult((*(impl::abi_t<MapChangedEventHandler<K, V>>**)this)->Invoke(get_abi(sender), get_abi(args)));
        }
    };
}

namespace winrt::impl
{
    template <typename D>
    void consume_IAsyncAction<D>::Completed(Windows::Foundation::AsyncActionCompletedHandler const& handler) const
    {
        check_hresult(WINRT_SHIM(Windows::Foundation::IAsyncAction)->put_Completed(get_abi(handler)));
    }

    template <typename D>
    Windows::Foundation::AsyncActionCompletedHandler consume_IAsyncAction<D>::Completed() const
    {
        Windows::Foundation::AsyncActionCompletedHandler handler{};
        check_hresult(WINRT_SHIM(Windows::Foundation::IAsyncAction)->get_Completed(put_abi(handler)));
        return handler;
    }

    template <typename D, typename TResult>
    void consume_IAsyncOperation<D, TResult>::Completed(Windows::Foundation::AsyncOperationCompletedHandler<TResult> const& handler) const
    {
        check_hresult(WINRT_SHIM(Windows::Foundation::IAsyncOperation<TResult>)->put_Completed(get_abi(handler)));
    }

    template <typename D, typename TResult>
    Windows::Foundation::AsyncOperationCompletedHandler<TResult> consume_IAsyncOperation<D, TResult>::Completed() const
    {
        Windows::Foundation::AsyncOperationCompletedHandler<TResult> temp;
        check_hresult(WINRT_SHIM(Windows::Foundation::IAsyncOperation<TResult>)->get_Completed(put_abi(temp)));
        return temp;
    }

    template <typename D, typename TProgress>
    void consume_IAsyncActionWithProgress<D, TProgress>::Progress(Windows::Foundation::AsyncActionProgressHandler<TProgress> const& handler) const
    {
        check_hresult(WINRT_SHIM(Windows::Foundation::IAsyncActionWithProgress<TProgress>)->put_Progress(get_abi(handler)));
    }

    template <typename D, typename TProgress>
    Windows::Foundation::AsyncActionProgressHandler<TProgress> consume_IAsyncActionWithProgress<D, TProgress>::Progress() const
    {
        Windows::Foundation::AsyncActionProgressHandler<TProgress> handler;
        check_hresult(WINRT_SHIM(Windows::Foundation::IAsyncActionWithProgress<TProgress>)->get_Progress(put_abi(handler)));
        return handler;
    }

    template <typename D, typename TProgress>
    void consume_IAsyncActionWithProgress<D, TProgress>::Completed(Windows::Foundation::AsyncActionWithProgressCompletedHandler<TProgress> const& handler) const
    {
        check_hresult(WINRT_SHIM(Windows::Foundation::IAsyncActionWithProgress<TProgress>)->put_Completed(get_abi(handler)));
    }

    template <typename D, typename TProgress>
    Windows::Foundation::AsyncActionWithProgressCompletedHandler<TProgress> consume_IAsyncActionWithProgress<D, TProgress>::Completed() const
    {
        Windows::Foundation::AsyncActionWithProgressCompletedHandler<TProgress> handler;
        check_hresult(WINRT_SHIM(Windows::Foundation::IAsyncActionWithProgress<TProgress>)->get_Completed(put_abi(handler)));
        return handler;
    }

    template <typename D, typename TResult, typename TProgress>
    void consume_IAsyncOperationWithProgress<D, TResult, TProgress>::Progress(Windows::Foundation::AsyncOperationProgressHandler<TResult, TProgress> const& handler) const
    {
        check_hresult(WINRT_SHIM(Windows::Foundation::IAsyncOperationWithProgress<TResult, TProgress>)->put_Progress(get_abi(handler)));
    }

    template <typename D, typename TResult, typename TProgress>
    Windows::Foundation::AsyncOperationProgressHandler<TResult, TProgress> consume_IAsyncOperationWithProgress<D, TResult, TProgress>::Progress() const
    {
        Windows::Foundation::AsyncOperationProgressHandler<TResult, TProgress> handler;
        check_hresult(WINRT_SHIM(Windows::Foundation::IAsyncOperationWithProgress<TResult, TProgress>)->get_Progress(put_abi(handler)));
        return handler;
    }

    template <typename D, typename TResult, typename TProgress>
    void consume_IAsyncOperationWithProgress<D, TResult, TProgress>::Completed(Windows::Foundation::AsyncOperationWithProgressCompletedHandler<TResult, TProgress> const& handler) const
    {
        check_hresult(WINRT_SHIM(Windows::Foundation::IAsyncOperationWithProgress<TResult, TProgress>)->put_Completed(get_abi(handler)));
    }

    template <typename D, typename TResult, typename TProgress>
    Windows::Foundation::AsyncOperationWithProgressCompletedHandler<TResult, TProgress> consume_IAsyncOperationWithProgress<D, TResult, TProgress>::Completed() const
    {
        Windows::Foundation::AsyncOperationWithProgressCompletedHandler<TResult, TProgress> handler;
        check_hresult(WINRT_SHIM(Windows::Foundation::IAsyncOperationWithProgress<TResult, TProgress>)->get_Completed(put_abi(handler)));
        return handler;
    }
}

WINRT_WARNING_PUSH

WINRT_EXPORT namespace winrt
{
    template <typename Interface = Windows::Foundation::IActivationFactory>
    auto get_activation_factory(param::hstring const& name)
    {
        impl::com_ref<Interface> object;
        hresult hr = WINRT_RoGetActivationFactory(get_abi(name), guid_of<Interface>(), put_abi(object));

        if (hr == impl::error_not_initialized)
        {
            void* cookie{};
            check_hresult(WINRT_CoIncrementMTAUsage(&cookie));
            hr = WINRT_RoGetActivationFactory(get_abi(name), guid_of<Interface>(), put_abi(object));
        }

        check_hresult(hr);
        return object;
    }
}

namespace winrt::impl
{
    inline int32_t interlocked_read_32(int32_t const volatile* target) noexcept
    {
#if defined _M_IX86 || defined _M_X64
        int32_t const result = *target;
        _ReadWriteBarrier();
        return result;
#elif defined _M_ARM || defined _M_ARM64
        int32_t const result = __iso_volatile_load32(reinterpret_cast<int32_t const volatile*>(target));
        WINRT_INTERLOCKED_READ_MEMORY_BARRIER
            return result;
#else
#error Unsupported architecture
#endif
    }

#if defined _WIN64
    inline int64_t interlocked_read_64(int64_t const volatile* target) noexcept
    {
#if defined _M_X64
        int64_t const result = *target;
        _ReadWriteBarrier();
        return result;
#elif defined _M_ARM64
        int64_t const result = __iso_volatile_load64(target);
        WINRT_INTERLOCKED_READ_MEMORY_BARRIER
            return result;
#else
#error Unsupported architecture
#endif
    }
#endif

    template <typename T>
    T* interlocked_read_pointer(T* const volatile* target) noexcept
    {
#ifdef _WIN64
        return (T*)interlocked_read_64((int64_t*)target);
#else
        return (T*)interlocked_read_32((int32_t*)target);
#endif
    }

#ifdef _WIN64
    inline constexpr uint32_t memory_allocation_alignment{ 16 };
#pragma warning(push)
#pragma warning(disable:4324) // structure was padded due to alignment specifier
    struct alignas(16) slist_entry
    {
        slist_entry* next;
    };
    union alignas(16) slist_header
    {
        struct
        {
            uint64_t reserved1;
            uint64_t reserved2;
        } reserved1;
        struct
        {
            uint64_t reserved1 : 16;
            uint64_t reserved2 : 48;
            uint64_t reserved3 : 4;
            uint64_t reserved4 : 60;
        } reserved2;
    };
#pragma warning(pop)
#else
    inline constexpr uint32_t memory_allocation_alignment{ 8 };
    struct slist_entry
    {
        slist_entry* next;
    };
    union slist_header
    {
        uint64_t reserved1;
        struct
        {
            slist_entry reserved1;
            uint16_t reserved2;
            uint16_t reserved3;
        } reserved2;
    };
#endif

    struct factory_cache_typeless_entry
    {
        struct alignas(sizeof(void*) * 2) object_and_count
        {
            IUnknown* pointer;
            size_t count;
        };

        object_and_count value;
        alignas(memory_allocation_alignment) slist_entry next {};

        void clear() noexcept
        {
            IUnknown* pointer_value = interlocked_read_pointer(&value.pointer);

            if (pointer_value == nullptr)
            {
                return;
            }

            object_and_count current_value{ pointer_value, 0 };

#if defined _WIN64
            if (1 == _InterlockedCompareExchange128((int64_t*)this, 0, 0, (int64_t*)&current_value))
            {
                pointer_value->Release();
            }
#else
            int64_t const result = _InterlockedCompareExchange64((int64_t*)this, 0, *(int64_t*)&current_value);

            if (result == *(int64_t*)&current_value)
            {
                pointer_value->Release();
            }
#endif
        }
    };

    struct factory_cache
    {
        factory_cache(factory_cache const&) = delete;
        factory_cache& operator=(factory_cache const&) = delete;

        factory_cache() noexcept
        {
            WINRT_InitializeSListHead(&m_list);
        }

        void add(factory_cache_typeless_entry* const entry) noexcept
        {
            WINRT_ASSERT(entry);
            WINRT_InterlockedPushEntrySList(&m_list, &entry->next);
        }

        void clear() noexcept
        {
            slist_entry* entry = static_cast<slist_entry*>(WINRT_InterlockedFlushSList(&m_list));

            while (entry != nullptr)
            {
                // entry->Next must be read before entry->clear() is called since the InterlockedCompareExchange
                // inside clear() will allow another thread to add the entry back to the cache.
                slist_entry* next = entry->next;
                reinterpret_cast<factory_cache_typeless_entry*>(reinterpret_cast<uint8_t*>(entry) - offsetof(factory_cache_typeless_entry, next))->clear();
                entry = next;
            }
        }

    private:

        alignas(memory_allocation_alignment) slist_header m_list;
    };

    inline factory_cache& get_factory_cache() noexcept
    {
        static factory_cache cache;
        return cache;
    }

    template <typename Class, typename Interface>
    struct factory_cache_entry
    {
        template <typename F>
        auto call(F&& callback)
        {
#ifdef WINRT_DIAGNOSTICS
            get_diagnostics_info().add_factory<Class>();
#endif

            {
                count_guard const guard(m_value.count);

                if (m_value.object)
                {
                    return callback(*reinterpret_cast<com_ref<Interface> const*>(&m_value.object));
                }
            }

            auto object = get_activation_factory<Interface>(name_of<Class>());

            if (!object.template try_as<IAgileObject>())
            {
#ifdef WINRT_DIAGNOSTICS
                get_diagnostics_info().non_agile_factory<Class>();
#endif
                return callback(object);
            }

            {
                count_guard const guard(m_value.count);

                if (nullptr == _InterlockedCompareExchangePointer((void**)&m_value.object, get_abi(object), nullptr))
                {
                    // This thread successfully updated the entry to hold the factory object. We thus detach, since the
                    // factory_cache_entry now owns the reference, and add the entry to the cache list. The callback
                    // may be safely called using the cached object since the count guard is currently being held.
                    detach_abi(object);
                    get_factory_cache().add(reinterpret_cast<factory_cache_typeless_entry*>(this));
                    return callback(*reinterpret_cast<com_ref<Interface> const*>(&m_value.object));
                }
                else
                {
                    // This thread failed to update the entry since another thread managed to exchange pointers first.
                    // The callback must still be called and can simply use the temporary factory object before allowing
                    // it to be released. 
                    return callback(object);
                }
            }
        }

    private:

        struct count_guard
        {
            count_guard(count_guard const&) = delete;
            count_guard& operator=(count_guard const&) = delete;

            explicit count_guard(size_t& count) noexcept : m_count(count)
            {
#ifdef _WIN64
                _InterlockedIncrement64((int64_t*)&m_count);
#else
                _InterlockedIncrement((long*)&m_count);
#endif
            }

            ~count_guard() noexcept
            {
#ifdef _WIN64
                _InterlockedDecrement64((int64_t*)&m_count);
#else
                _InterlockedDecrement((long*)&m_count);
#endif
            }

        private:

            size_t& m_count;
        };

        struct alignas(sizeof(void*) * 2) object_and_count
        {
            void* object;
            size_t count;
        };

        object_and_count m_value;
        alignas(memory_allocation_alignment) slist_entry m_next;
    };

    template <typename Class, typename Interface>
    struct factory_storage
    {
        static factory_cache_entry<Class, Interface> factory;
    };

    template <typename Class, typename Interface>
    factory_cache_entry<Class, Interface> factory_storage<Class, Interface>::factory;

    template <typename Class, typename Interface = Windows::Foundation::IActivationFactory, typename F>
    auto call_factory(F&& callback)
    {
        static_assert(sizeof(factory_cache_typeless_entry) == sizeof(factory_cache_entry<Class, Interface>));
        static_assert(std::alignment_of_v<factory_cache_typeless_entry> == std::alignment_of_v<factory_cache_entry<Class, Interface>>);
        static_assert(std::is_standard_layout_v<factory_cache_typeless_entry>);
        static_assert(std::is_standard_layout_v<factory_cache_entry<Class, Interface>>);

        return factory_storage<Class, Interface>::factory.call(callback);
    }

    template <typename Class, typename Interface = Windows::Foundation::IActivationFactory>
    auto try_get_activation_factory(hresult_error* exception = nullptr) noexcept
    {
        param::hstring const name{ name_of<Class>() };
        impl::com_ref<Interface> object;
        hresult const hr = WINRT_RoGetActivationFactory(get_abi(name), guid_of<Interface>(), put_abi(object));

        if (hr < 0)
        {
            // Ensure that the IRestrictedErrorInfo is not left on the thread.
            hresult_error local_exception{ hr, hresult_error::from_abi };

            if (exception)
            {
                // Optionally transfer ownership to the caller.
                *exception = std::move(local_exception);
            }
        }

        return object;
    }
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
        hresult const result = WINRT_RoInitialize(static_cast<uint32_t>(type));

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
    auto get_activation_factory()
    {
        // Normally, the callback avoids having to return a ref-counted object and the resulting AddRef/Release bump.
        // In this case we do want a unique reference, so we use the lambda to return one and thus produce an
        // AddRef'd object that is returned to the caller. 
        return impl::call_factory<Class, Interface>([](auto&& factory)
        {
            return factory;
        });
    }

    template <typename Class, typename Interface = Windows::Foundation::IActivationFactory>
    auto try_get_activation_factory() noexcept
    {
        return impl::try_get_activation_factory<Class, Interface>();
    }

    template <typename Class, typename Interface = Windows::Foundation::IActivationFactory>
    auto try_get_activation_factory(hresult_error& exception) noexcept
    {
        return impl::try_get_activation_factory<Class, Interface>(&exception);
    }

    inline void clear_factory_cache() noexcept
    {
        impl::get_factory_cache().clear();
    }

    template <typename Interface>
    impl::com_ref<Interface> create_instance(guid const& clsid, uint32_t context = 0x1 /*CLSCTX_INPROC_SERVER*/, void* outer = nullptr)
    {
        impl::com_ref<Interface> temp{ nullptr };
        check_hresult(WINRT_CoCreateInstance(clsid, outer, context, guid_of<Interface>(), put_abi(temp)));
        return temp;
    }
}

WINRT_WARNING_POP

namespace winrt::impl
{
    struct marker
    {
        marker() = delete;
    };
}

WINRT_EXPORT namespace winrt
{
    struct non_agile : impl::marker {};
    struct no_weak_ref : impl::marker {};
    struct composing : impl::marker {};
    struct composable : impl::marker {};
    struct no_module_lock : impl::marker {};
    struct static_lifetime : impl::marker {};

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
    template<typename...T>
    using tuple_cat_t = decltype(std::tuple_cat(std::declval<T>()...));

    template <template <typename> typename Condition, typename>
    struct tuple_if_base;

    template <template <typename> typename Condition, typename...T>
    struct tuple_if_base<Condition, std::tuple<T...>> { using type = tuple_cat_t<typename std::conditional<Condition<T>::value, std::tuple<T>, std::tuple<>>::type...>; };

    template <template <typename> typename Condition, typename T>
    using tuple_if = typename tuple_if_base<Condition, T>::type;

#ifdef WINRT_WINDOWS_ABI

    template <typename T>
    struct is_interface : std::disjunction<std::is_base_of<Windows::Foundation::IInspectable, T>, std::conjunction<std::is_base_of<::IUnknown, T>, std::negation<is_implements<T>>>> {};

#else

    template <typename T>
    struct is_interface : std::is_base_of<Windows::Foundation::IInspectable, T> {};

#endif

    template <typename T>
    struct is_marker : std::disjunction<std::is_base_of<marker, T>, std::is_void<T>> {};

    template <typename T>
    struct uncloak_base
    {
        using type = T;
    };

    template <typename T>
    struct uncloak_base<cloaked<T>>
    {
        using type = T;
    };

    template <typename T>
    using uncloak = typename uncloak_base<T>::type;

    template <typename I>
    struct is_cloaked : std::disjunction<
        std::is_same<Windows::Foundation::IInspectable, I>,
        std::negation<std::is_base_of<Windows::Foundation::IInspectable, I>>
    > {};

    template <typename I>
    struct is_cloaked<cloaked<I>> : std::true_type {};

    template <typename D, typename I, typename Enable = void>
    struct producer;

    template <typename D, typename T>
    struct producers_base;

    template <typename D, typename...T>
    struct producers_base<D, std::tuple<T...>> : producer<D, T>... {};

    template <typename D, typename...T>
    using producers = producers_base<D, tuple_if<is_interface, std::tuple<uncloak<T>...>>>;

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

    template <typename D, typename I, typename Enable = void>
    struct produce_base;

    template <typename D, typename I>
    struct produce : produce_base<D, I>
    {
    };

    template <typename T, typename = std::void_t<>>
    struct has_composable : std::false_type {};

    template <typename T>
    struct has_composable<T, std::void_t<typename T::composable>> : std::true_type {};

    template <typename T, typename = std::void_t<>>
    struct has_class_type : std::false_type {};

    template <typename T>
    struct has_class_type<T, std::void_t<typename T::class_type>> : std::true_type {};

    template <typename>
    struct has_static_lifetime : std::false_type {};

    template <typename D, typename...I>
    struct has_static_lifetime<implements<D, I...>> : std::disjunction<std::is_same<static_lifetime, I>...> {};

    template <typename D>
    inline constexpr bool has_static_lifetime_v = has_static_lifetime<typename D::implements_type>::value;

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
    D* get_self(I const& from) noexcept
    {
        return &static_cast<impl::produce<D, default_interface<I>>*>(get_abi(from))->shim();
    }

    template <typename D, typename I>
    D* from_abi(I const& from) noexcept
    {
        return get_self<D>(from);
    }

    template <typename I, typename D>
    impl::abi_t<I>* to_abi(impl::producer<D, I> const* from) noexcept
    {
        return reinterpret_cast<impl::abi_t<I>*>(const_cast<impl::producer<D, I>*>(from));
    }
}

namespace winrt::impl
{
    template <typename...> struct interface_list;

    template <>
    struct interface_list<>
    {
        template <typename T, typename Predicate>
        static constexpr void* find(const T*, const Predicate&) noexcept
        {
            return nullptr;
        }
    };

    template <typename First, typename ... Rest>
    struct interface_list<First, Rest...>
    {
        template <typename T, typename Predicate>
        static constexpr void* find(const T* obj, const Predicate& pred) noexcept
        {
            if (pred.template test<First>())
            {
                return to_abi<First>(obj);
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
            interface_list<winrt::impl::uncloak<T>>,
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
        static constexpr std::array<guid, sizeof...(T)> value{ winrt::guid_of<T>() ... };
    };

    template <typename T, typename = void>
    struct implements_default_interface
    {
        using type = typename implemented_interfaces<T>::first_interface;
    };

    template <typename T>
    struct implements_default_interface<T, std::void_t<typename T::class_type>>
    {
        using type = winrt::default_interface<typename T::class_type>;
    };

    template <typename T>
    struct default_interface<T, std::void_t<typename T::implements_type>>
    {
        using type = typename implements_default_interface<T>::type;
    };

    struct iid_finder
    {
        const guid& m_guid;

        template <typename I>
        constexpr bool test() const noexcept
        {
            return is_guid_of<I>(m_guid);
        }
    };

    template <typename T>
    auto find_iid(const T* obj, const guid& iid) noexcept
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
    struct producer_ref : T
    {
        producer_ref(producer_ref const&) = delete;
        producer_ref& operator=(producer_ref const&) = delete;
        producer_ref(producer_ref&&) = delete;
        producer_ref& operator=(producer_ref&&) = delete;

        producer_ref(void* ptr) noexcept : T(nullptr)
        {
            *put_abi(*this) = ptr;
        }

        ~producer_ref() noexcept
        {
            detach_abi(*this);
        }
    };

    template <typename D, typename I, typename Enable>
    struct producer
    {
#if _MSC_VER < 1914
        operator I() const noexcept
        {
            I result = nullptr;
            copy_from_abi(result, const_cast<produce<D, I>*>(&vtable));
            return result;
        }
#else
        operator producer_ref<I> const() const noexcept
        {
            return { const_cast<produce<D, I>*>(&vtable) };
        }
#endif

    private:

        produce<D, I> vtable;
    };

    template <typename D, typename I, typename Enable>
    struct produce_base : abi_t<I>
    {
        D& shim() noexcept
        {
            return*static_cast<D*>(reinterpret_cast<producer<D, I>*>(this));
        }

        int32_t WINRT_CALL QueryInterface(guid const& id, void** object) noexcept override
        {
            return shim().QueryInterface(id, object);
        }

        uint32_t WINRT_CALL AddRef() noexcept override
        {
            return shim().AddRef();
        }

        uint32_t WINRT_CALL Release() noexcept override
        {
            return shim().Release();
        }

        int32_t WINRT_CALL GetIids(uint32_t* count, guid** array) noexcept override
        {
            return shim().GetIids(count, array);
        }

        int32_t WINRT_CALL GetRuntimeClassName(void** name) noexcept override
        {
            return shim().abi_GetRuntimeClassName(name);
        }

        int32_t WINRT_CALL GetTrustLevel(Windows::Foundation::TrustLevel* trustLevel) noexcept final
        {
            return shim().abi_GetTrustLevel(trustLevel);
        }
    };

#ifdef WINRT_WINDOWS_ABI

    template <typename D, typename I>
    struct producer<D, I, std::enable_if_t<std::is_base_of_v< ::IUnknown, I> && !is_implements_v<I>>> : I
    {
    };

#endif

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
        int32_t WINRT_CALL QueryInterface(const guid& id, void** object) noexcept final
        {
            return this->shim().NonDelegatingQueryInterface(id, object);
        }

        uint32_t WINRT_CALL AddRef() noexcept final
        {
            return this->shim().NonDelegatingAddRef();
        }

        uint32_t WINRT_CALL Release() noexcept final
        {
            return this->shim().NonDelegatingRelease();
        }

        int32_t WINRT_CALL GetIids(uint32_t* count, guid** array) noexcept final
        {
            return this->shim().NonDelegatingGetIids(count, array);
        }

        int32_t WINRT_CALL GetRuntimeClassName(void** name) noexcept final
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

        int32_t WINRT_CALL QueryInterface(guid const& id, void** object) noexcept override
        {
            if (is_guid_of<IWeakReferenceSource>(id))
            {
                *object = static_cast<IWeakReferenceSource*>(this);
                that()->increment_strong();
                return error_ok;
            }

            return that()->m_object->QueryInterface(id, object);
        }

        uint32_t WINRT_CALL AddRef() noexcept override
        {
            return that()->increment_strong();
        }

        uint32_t WINRT_CALL Release() noexcept override
        {
            return that()->m_object->Release();
        }

        int32_t WINRT_CALL GetWeakReference(IWeakReference** weakReference) noexcept override
        {
            *weakReference = that();
            that()->AddRef();
            return error_ok;
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

        int32_t WINRT_CALL QueryInterface(guid const& id, void** object) noexcept override
        {
            if (is_guid_of<IWeakReference>(id) || is_guid_of<Windows::Foundation::IUnknown>(id))
            {
                *object = static_cast<IWeakReference*>(this);
                AddRef();
                return error_ok;
            }

            if constexpr (Agile)
            {
                if (is_guid_of<IAgileObject>(id))
                {
                    *object = static_cast<IUnknown*>(this);
                    AddRef();
                    return error_ok;
                }

                if (is_guid_of<IMarshal>(id))
                {
                    return make_marshaler(this, object);
                }
            }

            *object = nullptr;
            return error_no_interface;
        }

        uint32_t WINRT_CALL AddRef() noexcept override
        {
            return 1 + m_weak.fetch_add(1, std::memory_order_relaxed);
        }

        uint32_t WINRT_CALL Release() noexcept override
        {
            uint32_t const target = m_weak.fetch_sub(1, std::memory_order_relaxed) - 1;

            if (target == 0)
            {
                delete this;
            }

            return target;
        }

        int32_t WINRT_CALL Resolve(guid const& id, void** objectReference) noexcept override
        {
            uint32_t target = m_strong.load(std::memory_order_relaxed);

            while (true)
            {
                if (target == 0)
                {
                    *objectReference = nullptr;
                    return error_ok;
                }

                if (m_strong.compare_exchange_weak(target, target + 1, std::memory_order_acquire, std::memory_order_relaxed))
                {
                    int32_t hr = m_object->QueryInterface(id, objectReference);
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
        template <bool T>
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
        auto try_as() const noexcept
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
    struct WINRT_NOVTABLE root_implements
        : root_implements_composing_outer<std::disjunction<std::is_same<composing, I>...>::value>
        , root_implements_composable_inner<D, std::disjunction<std::is_same<composable, I>...>::value>
    {
        using IInspectable = Windows::Foundation::IInspectable;
        using root_implements_type = root_implements;

        int32_t WINRT_CALL QueryInterface(guid const& id, void** object) noexcept
        {
            if (this->outer())
            {
                return this->outer()->QueryInterface(id, object);
            }

            int32_t result = query_interface(id, object);

            if (result == error_no_interface && this->m_inner)
            {
                result = static_cast<impl::IUnknown*>(get_abi(this->m_inner))->QueryInterface(id, object);
            }

            return result;
        }

        uint32_t WINRT_CALL AddRef() noexcept
        {
            if (this->outer())
            {
                return this->outer()->AddRef();
            }

            return NonDelegatingAddRef();
        }

        uint32_t WINRT_CALL Release() noexcept
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

        void abi_enter() const noexcept {}
        void abi_exit() const noexcept {}

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

        int32_t WINRT_CALL GetIids(uint32_t* count, guid** array) noexcept
        {
            if (this->outer())
            {
                return this->outer()->GetIids(count, array);
            }

            return NonDelegatingGetIids(count, array);
        }

        int32_t WINRT_CALL abi_GetRuntimeClassName(void** name) noexcept
        {
            if (this->outer())
            {
                return this->outer()->GetRuntimeClassName(name);
            }

            return NonDelegatingGetRuntimeClassName(name);
        }

        int32_t WINRT_CALL abi_GetTrustLevel(Windows::Foundation::TrustLevel* trustLevel) noexcept
        {
            if (this->outer())
            {
                return this->outer()->GetTrustLevel(trustLevel);
            }

            return NonDelegatingGetTrustLevel(trustLevel);
        }

        uint32_t WINRT_CALL NonDelegatingAddRef() noexcept
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

        uint32_t WINRT_CALL NonDelegatingRelease() noexcept
        {
            uint32_t const target = subtract_reference();

            if (target == 0)
            {
                std::atomic_thread_fence(std::memory_order_acquire);
                delete this;
            }

            return target;
        }

        int32_t WINRT_CALL NonDelegatingQueryInterface(const guid& id, void** object) noexcept
        {
            if (is_guid_of<IInspectable>(id) || is_guid_of<Windows::Foundation::IUnknown>(id))
            {
                impl::IInspectable* result = to_abi<impl::INonDelegatingInspectable>(this);
                NonDelegatingAddRef();
                *object = result;
                return error_ok;
            }

            int32_t result = query_interface(id, object);

            if (result == error_no_interface && this->m_inner)
            {
                result = static_cast<impl::IUnknown*>(get_abi(this->m_inner))->QueryInterface(id, object);
            }

            return result;
        }

        int32_t WINRT_CALL NonDelegatingGetIids(uint32_t* count, guid** array) noexcept
        {
            const auto& local_iids = static_cast<D*>(this)->get_local_iids();
            const uint32_t& local_count = local_iids.first;
            if constexpr (root_implements_type::is_composing)
            {
                if (local_count > 0)
                {
                    const com_array<guid>& inner_iids = get_interfaces(root_implements_type::m_inner);
                    *count = local_count + inner_iids.size();
                    *array = static_cast<guid*>(WINRT_CoTaskMemAlloc(sizeof(guid)*(*count)));
                    if (*array == nullptr)
                    {
                        return error_bad_alloc;
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
                    *array = static_cast<guid*>(WINRT_CoTaskMemAlloc(sizeof(guid)*(*count)));
                    if (*array == nullptr)
                    {
                        return error_bad_alloc;
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
            return error_ok;
        }

        int32_t WINRT_CALL NonDelegatingGetRuntimeClassName(void** name) noexcept
        {
            try
            {
                *name = detach_abi(static_cast<D*>(this)->GetRuntimeClassName());
                return error_ok;
            }
            catch (...) { return to_hresult(); }
        }

        int32_t WINRT_CALL NonDelegatingGetTrustLevel(Windows::Foundation::TrustLevel* trustLevel) noexcept
        {
            try
            {
                *trustLevel = static_cast<D*>(this)->GetTrustLevel();
                return error_ok;
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
            check_hresult(source->GetWeakReference(result.put()));
            return result;
        }

        using is_factory = std::disjunction<std::is_same<Windows::Foundation::IActivationFactory, I>...>;

    private:

        using is_agile = std::negation<std::disjunction<std::is_same<non_agile, I>...>>;
        using is_inspectable = std::disjunction<std::is_base_of<Windows::Foundation::IInspectable, I>...>;
        using is_weak_ref_source = std::conjunction<is_inspectable, std::negation<is_factory>, std::negation<std::disjunction<std::is_same<no_weak_ref, I>...>>>;
        using use_module_lock = std::negation<std::disjunction<std::is_same<no_module_lock, I>...>>;
        using weak_ref_t = impl::weak_ref<is_agile::value>;

        std::atomic<std::conditional_t<is_weak_ref_source::value, uintptr_t, uint32_t>> m_references{ 1 };

        int32_t query_interface(guid const& id, void** object) noexcept
        {
            *object = static_cast<D*>(this)->find_interface(id);

            if (*object != nullptr)
            {
                AddRef();
                return error_ok;
            }

            if constexpr (is_agile::value)
            {
                if (is_guid_of<IAgileObject>(id))
                {
                    *object = get_unknown();
                    AddRef();
                    return error_ok;
                }

                if (is_guid_of<IMarshal>(id))
                {
                    return make_marshaler(get_unknown(), object);
                }
            }

            if constexpr (is_inspectable::value)
            {
                if (is_guid_of<IInspectable>(id))
                {
                    *object = find_inspectable();
                    AddRef();
                    return error_ok;
                }
            }

            if (is_guid_of<Windows::Foundation::IUnknown>(id))
            {
                *object = get_unknown();
                AddRef();
                return error_ok;
            }

            if constexpr (is_weak_ref_source::value)
            {
                if (is_guid_of<impl::IWeakReferenceSource>(id))
                {
                    *object = make_weak_ref();
                    return *object ? error_ok : error_bad_alloc;
                }
            }

            return error_no_interface;
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
        virtual std::pair<uint32_t, const guid*> get_local_iids() const noexcept = 0;
        virtual hstring GetRuntimeClassName() const = 0;
        virtual void* find_interface(guid const&) const noexcept = 0;
        virtual impl::IInspectable* find_inspectable() const noexcept = 0;

        virtual Windows::Foundation::TrustLevel GetTrustLevel() const noexcept
        {
            return Windows::Foundation::TrustLevel::BaseTrust;
        }

        template <typename D, typename I, typename Enable>
        friend struct impl::produce_base;

        template <typename D, typename I>
        friend struct impl::produce;
    };

    template <typename D>
    Windows::Foundation::IActivationFactory make_factory()
    {
        if constexpr (!has_static_lifetime_v<D>)
        {
            Windows::Foundation::IActivationFactory factory;
            *put_abi(factory) = to_abi<Windows::Foundation::IActivationFactory>(new D);
            return factory;
        }
        else
        {
            static slim_mutex lock;
            auto const lifetime_factory = get_activation_factory<impl::IStaticLifetime>(L"Windows.ApplicationModel.Core.CoreApplication");
            Windows::Foundation::IUnknown collection;
            check_hresult(lifetime_factory->GetCollection(put_abi(collection)));
            auto const map = collection.as<Windows::Foundation::Collections::IMap<hstring, Windows::Foundation::IInspectable>>();

            {
                slim_lock_guard const guard{ lock };

                if (Windows::Foundation::IInspectable value = map.TryLookup(name_of<typename D::instance_type>()))
                {
                    Windows::Foundation::IActivationFactory factory;
                    *put_abi(factory) = detach_abi(value);
                    return factory;
                }
            }

            Windows::Foundation::IActivationFactory object;
            *put_abi(object) = to_abi<Windows::Foundation::IActivationFactory>(new D);

            {
                slim_lock_guard const guard{ lock };

                if (Windows::Foundation::IInspectable value = map.TryLookup(name_of<typename D::instance_type>()))
                {
                    Windows::Foundation::IActivationFactory factory;
                    *put_abi(factory) = detach_abi(value);
                    return factory;
                }
                else
                {
                    map.Insert(name_of<typename D::instance_type>(), object);
                    return object;
                }
            }
        }
    }
}

WINRT_EXPORT namespace winrt
{
    template <typename D, typename... Args>
    auto make(Args&&... args)
    {
        using I = typename impl::implements_default_interface<D>::type;

        if constexpr (std::is_same_v<I, Windows::Foundation::IActivationFactory>)
        {
            static_assert(sizeof...(args) == 0);
            return impl::make_factory<D>();
        }
        else if constexpr (impl::has_composable<D>::value)
        {
            impl::com_ref<I> result{ nullptr };
            *put_abi(result) = to_abi<I>(new D(std::forward<Args>(args)...));
            return result.template as<typename D::composable>();
        }
        else if constexpr (impl::has_class_type<D>::value)
        {
            static_assert(std::is_same_v<I, default_interface<typename D::class_type>>);
            typename D::class_type result{ nullptr };
            *put_abi(result) = to_abi<I>(new D(std::forward<Args>(args)...));
            return result;
        }
        else
        {
            impl::com_ref<I> result{ nullptr };
            *put_abi(result) = to_abi<I>(new D(std::forward<Args>(args)...));
            return result;
        }
    }

    template <typename D, typename... Args>
    auto make_self(Args&&... args)
    {
        com_ptr<D> result;
        *put_abi(result) = new D(std::forward<Args>(args)...);
        return result;
    }

    template <typename D, typename... I>
    struct implements : impl::producers<D, I...>, impl::base_implements<D, I...>::type
    {
    protected:

        using base_type = typename impl::base_implements<D, I...>::type;
        using root_implements_type = typename base_type::root_implements_type;
        using is_factory = typename root_implements_type::is_factory;

        using base_type::base_type;

    public:

        using implements_type = implements;
        using IInspectable = Windows::Foundation::IInspectable;

        weak_ref<D> get_weak()
        {
            return root_implements_type::template get_weak<D>();
        }

        com_ptr<D> get_strong() noexcept
        {
            com_ptr<D> result;
            result.copy_from(static_cast<D*>(this));
            return result;
        }

        operator IInspectable() const noexcept
        {
            IInspectable result;
            copy_from_abi(result, find_inspectable());
            return result;
        }

        impl::hresult_type WINRT_CALL QueryInterface(guid const& id, void** object) noexcept
        {
            return root_implements_type::QueryInterface(id, object);
        }

#ifdef WINRT_WINDOWS_ABI

        impl::hresult_type WINRT_CALL QueryInterface(GUID const& id, void** object) noexcept
        {
            return root_implements_type::QueryInterface(reinterpret_cast<guid const&>(id), object);
        }

#endif

        impl::ref_count_type WINRT_CALL AddRef() noexcept
        {
            return root_implements_type::AddRef();
        }

        impl::ref_count_type WINRT_CALL Release() noexcept
        {
            return root_implements_type::Release();
        }

        void* find_interface(guid const& id) const noexcept override
        {
            return impl::find_iid(static_cast<const D*>(this), id);
        }

        impl::IInspectable* find_inspectable() const noexcept override
        {
            return impl::find_inspectable(static_cast<const D*>(this));
        }

        std::pair<uint32_t, const guid*> get_local_iids() const noexcept override
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
    template <typename T>
    auto detach_from(T&& object) noexcept
    {
        return detach_abi(std::forward<T>(object));
    }

    template <typename D> struct produce<D, Windows::Foundation::IActivationFactory> : produce_base<D, Windows::Foundation::IActivationFactory>
    {
        int32_t WINRT_CALL ActivateInstance(void** instance) noexcept final
        {
            try
            {
                *instance = nullptr;
                typename D::abi_guard guard(this->shim());
                *instance = detach_abi(this->shim().ActivateInstance());
                return error_ok;
            }
            catch (...) { return to_hresult(); }
        }
    };

    template <typename T> struct delegate<wfc::VectorChangedEventHandler<T>>
    {
        template <typename H>
        struct type final : implements_delegate<wfc::VectorChangedEventHandler<T>, H>
        {
            type(H&& handler) : implements_delegate<wfc::VectorChangedEventHandler<T>, H>(std::forward<H>(handler)) {}

            int32_t WINRT_CALL Invoke(void* sender, void* args) noexcept final
            {
                try
                {
                    (*this)(*reinterpret_cast<wfc::IObservableVector<T> const*>(&sender), *reinterpret_cast<wfc::IVectorChangedEventArgs const*>(&args));
                    return error_ok;
                }
                catch (...) { return to_hresult(); }
            }
        };
    };

    template <typename K, typename V> struct delegate<wfc::MapChangedEventHandler<K, V>>
    {
        template <typename H>
        struct type final : implements_delegate<wfc::MapChangedEventHandler<K, V>, H>
        {
            type(H&& handler) : implements_delegate<wfc::MapChangedEventHandler<K, V>, H>(std::forward<H>(handler)) {}

            int32_t WINRT_CALL Invoke(void* sender, void* args) noexcept final
            {
                try
                {
                    (*this)(*reinterpret_cast<wfc::IObservableMap<K, V> const*>(&sender), *reinterpret_cast<wfc::IMapChangedEventArgs<K> const*>(&args));
                    return error_ok;
                }
                catch (...) { return to_hresult(); }
            }
        };
    };

    template <typename T> struct delegate<Windows::Foundation::EventHandler<T>>
    {
        template <typename H>
        struct type final : implements_delegate<Windows::Foundation::EventHandler<T>, H>
        {
            type(H&& handler) : implements_delegate<Windows::Foundation::EventHandler<T>, H>(std::forward<H>(handler)) {}

            int32_t WINRT_CALL Invoke(void* sender, arg_in<T> args) noexcept final
            {
                try
                {
                    (*this)(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&sender), *reinterpret_cast<T const*>(&args));
                    return error_ok;
                }
                catch (...) { return to_hresult(); }
            }
        };
    };

    template <typename TSender, typename TArgs> struct delegate<Windows::Foundation::TypedEventHandler<TSender, TArgs>>
    {
        template <typename H>
        struct type final : implements_delegate<Windows::Foundation::TypedEventHandler<TSender, TArgs>, H>
        {
            type(H&& handler) : implements_delegate<Windows::Foundation::TypedEventHandler<TSender, TArgs>, H>(std::forward<H>(handler)) {}

            int32_t WINRT_CALL Invoke(arg_in<TSender> sender, arg_in<TArgs> args) noexcept final
            {
                try
                {
                    (*this)(*reinterpret_cast<TSender const*>(&sender), *reinterpret_cast<TArgs const*>(&args));
                    return error_ok;
                }
                catch (...) { return to_hresult(); }
            }
        };
    };

    template <typename D> struct produce<D, Windows::Foundation::IAsyncAction> : produce_base<D, Windows::Foundation::IAsyncAction>
    {
        int32_t WINRT_CALL put_Completed(void* handler) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                this->shim().Completed(*reinterpret_cast<Windows::Foundation::AsyncActionCompletedHandler const*>(&handler));
                return error_ok;
            }
            catch (...) { return to_hresult(); }
        }

        int32_t WINRT_CALL get_Completed(void** handler) noexcept final
        {
            try
            {
                *handler = nullptr;
                typename D::abi_guard guard(this->shim());
                *handler = detach_from<Windows::Foundation::AsyncActionCompletedHandler>(this->shim().Completed());
                return error_ok;
            }
            catch (...) { return to_hresult(); }
        }

        int32_t WINRT_CALL GetResults() noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                this->shim().GetResults();
                return error_ok;
            }
            catch (...) { return to_hresult(); }
        }
    };

    template <typename D> struct produce<D, Windows::Foundation::IAsyncInfo> : produce_base<D, Windows::Foundation::IAsyncInfo>
    {
        int32_t WINRT_CALL get_Id(uint32_t* id) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                *id = this->shim().Id();
                return error_ok;
            }
            catch (...) { return to_hresult(); }
        }

        int32_t WINRT_CALL get_Status(winrt::Windows::Foundation::AsyncStatus* status) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                *status = this->shim().Status();
                return error_ok;
            }
            catch (...) { return to_hresult(); }
        }

        int32_t WINRT_CALL get_ErrorCode(int32_t* errorCode) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                *errorCode = this->shim().ErrorCode();
                return error_ok;
            }
            catch (...) { return to_hresult(); }
        }

        int32_t WINRT_CALL Cancel() noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                this->shim().Cancel();
                return error_ok;
            }
            catch (...) { return to_hresult(); }
        }

        int32_t WINRT_CALL Close() noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                this->shim().Close();
                return error_ok;
            }
            catch (...) { return to_hresult(); }
        }
    };

    template <typename D, typename TProgress> struct produce<D, Windows::Foundation::IAsyncActionWithProgress<TProgress>> : produce_base<D, Windows::Foundation::IAsyncActionWithProgress<TProgress>>
    {
        int32_t WINRT_CALL put_Progress(void* handler) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                this->shim().Progress(*reinterpret_cast<Windows::Foundation::AsyncActionProgressHandler<TProgress> const*>(&handler));
                return error_ok;
            }
            catch (...) { return to_hresult(); }
        }

        int32_t WINRT_CALL get_Progress(void** handler) noexcept final
        {
            try
            {
                *handler = nullptr;
                typename D::abi_guard guard(this->shim());
                *handler = detach_from<Windows::Foundation::AsyncActionProgressHandler<TProgress>>(this->shim().Progress());
                return error_ok;
            }
            catch (...) { return to_hresult(); }
        }

        int32_t WINRT_CALL put_Completed(void* handler) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                this->shim().Completed(*reinterpret_cast<Windows::Foundation::AsyncActionWithProgressCompletedHandler<TProgress> const*>(&handler));
                return error_ok;
            }
            catch (...) { return to_hresult(); }
        }

        int32_t WINRT_CALL get_Completed(void** handler) noexcept final
        {
            try
            {
                *handler = nullptr;
                typename D::abi_guard guard(this->shim());
                *handler = detach_from<Windows::Foundation::AsyncActionWithProgressCompletedHandler<TProgress>>(this->shim().Completed());
                return error_ok;
            }
            catch (...) { return to_hresult(); }
        }

        int32_t WINRT_CALL GetResults() noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                this->shim().GetResults();
                return error_ok;
            }
            catch (...) { return to_hresult(); }
        }
    };

    template <typename D, typename TResult> struct produce<D, Windows::Foundation::IAsyncOperation<TResult>> : produce_base<D, Windows::Foundation::IAsyncOperation<TResult>>
    {
        int32_t WINRT_CALL put_Completed(void* handler) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                this->shim().Completed(*reinterpret_cast<Windows::Foundation::AsyncOperationCompletedHandler<TResult> const*>(&handler));
                return error_ok;
            }
            catch (...) { return to_hresult(); }
        }

        int32_t WINRT_CALL get_Completed(void** handler) noexcept final
        {
            try
            {
                *handler = nullptr;
                typename D::abi_guard guard(this->shim());
                *handler = detach_from<Windows::Foundation::AsyncOperationCompletedHandler<TResult>>(this->shim().Completed());
                return error_ok;
            }
            catch (...) { return to_hresult(); }
        }

        int32_t WINRT_CALL GetResults(arg_out<TResult> results) noexcept final
        {
            try
            {
                clear_abi(results);
                typename D::abi_guard guard(this->shim());
                *results = detach_from<TResult>(this->shim().GetResults());
                return error_ok;
            }
            catch (...) { return to_hresult(); }
        }
    };

    template <typename D, typename TResult, typename TProgress> struct produce<D, Windows::Foundation::IAsyncOperationWithProgress<TResult, TProgress>> : produce_base<D, Windows::Foundation::IAsyncOperationWithProgress<TResult, TProgress>>
    {
        int32_t WINRT_CALL put_Progress(void* handler) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                this->shim().Progress(*reinterpret_cast<Windows::Foundation::AsyncOperationProgressHandler<TResult, TProgress> const*>(&handler));
                return error_ok;
            }
            catch (...) { return to_hresult(); }
        }

        int32_t WINRT_CALL get_Progress(void** handler) noexcept final
        {
            try
            {
                *handler = nullptr;
                typename D::abi_guard guard(this->shim());
                *handler = detach_from<Windows::Foundation::AsyncOperationProgressHandler<TResult, TProgress>>(this->shim().Progress());
                return error_ok;
            }
            catch (...) { return to_hresult(); }
        }

        int32_t WINRT_CALL put_Completed(void* handler) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                this->shim().Completed(*reinterpret_cast<Windows::Foundation::AsyncOperationWithProgressCompletedHandler<TResult, TProgress> const*>(&handler));
                return error_ok;
            }
            catch (...) { return to_hresult(); }
        }

        int32_t WINRT_CALL get_Completed(void** handler) noexcept final
        {
            try
            {
                *handler = nullptr;
                typename D::abi_guard guard(this->shim());
                *handler = detach_from<Windows::Foundation::AsyncOperationWithProgressCompletedHandler<TResult, TProgress>>(this->shim().Completed());
                return error_ok;
            }
            catch (...) { return to_hresult(); }
        }

        int32_t WINRT_CALL GetResults(arg_out<TResult> results) noexcept final
        {
            try
            {
                clear_abi(results);
                typename D::abi_guard guard(this->shim());
                *results = detach_from<TResult>(this->shim().GetResults());
                return error_ok;
            }
            catch (...) { return to_hresult(); }
        }
    };


    template <typename D> struct produce<D, wfc::IVectorChangedEventArgs> : produce_base<D, wfc::IVectorChangedEventArgs>
    {
        int32_t WINRT_CALL get_CollectionChange(wfc::CollectionChange* value) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                *value = this->shim().CollectionChange();
                return error_ok;
            }
            catch (...) { return to_hresult(); }
        }

        int32_t WINRT_CALL get_Index(uint32_t* value) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                *value = this->shim().Index();
                return error_ok;
            }
            catch (...) { return to_hresult(); }
        }
    };

    template <typename D, typename T> struct produce<D, wfc::IIterator<T>> : produce_base<D, wfc::IIterator<T>>
    {
        int32_t WINRT_CALL get_Current(arg_out<T> current) noexcept final
        {
            try
            {
                clear_abi(current);
                typename D::abi_guard guard(this->shim());
                *current = detach_from<T>(this->shim().Current());
                return error_ok;
            }
            catch (...) { return to_hresult(); }
        }

        int32_t WINRT_CALL get_HasCurrent(bool* hasCurrent) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                *hasCurrent = this->shim().HasCurrent();
                return error_ok;
            }
            catch (...) { return to_hresult(); }
        }

        int32_t WINRT_CALL MoveNext(bool* hasCurrent) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                *hasCurrent = this->shim().MoveNext();
                return error_ok;
            }
            catch (...) { return to_hresult(); }
        }

        int32_t WINRT_CALL GetMany(uint32_t capacity, arg_out<T> value, uint32_t* actual) noexcept final
        {
            try
            {
                clear_abi(value);
                typename D::abi_guard guard(this->shim());
                *actual = this->shim().GetMany(array_view<T>(reinterpret_cast<T*>(value), reinterpret_cast<T*>(value) + capacity));
                return error_ok;
            }
            catch (...) { return to_hresult(); }
        }
    };

    template <typename D, typename T> struct produce<D, wfc::IIterable<T>> : produce_base<D, wfc::IIterable<T>>
    {
        int32_t WINRT_CALL First(void** first) noexcept final
        {
            try
            {
                *first = nullptr;
                typename D::abi_guard guard(this->shim());
                *first = detach_from<wfc::IIterator<T>>(this->shim().First());
                return error_ok;
            }
            catch (...) { return to_hresult(); }
        }
    };

    template <typename D, typename K, typename V> struct produce<D, wfc::IKeyValuePair<K, V>> : produce_base<D, wfc::IKeyValuePair<K, V>>
    {
        int32_t WINRT_CALL get_Key(arg_out<K> key) noexcept final
        {
            try
            {
                clear_abi(key);
                typename D::abi_guard guard(this->shim());
                *key = detach_from<K>(this->shim().Key());
                return error_ok;
            }
            catch (...) { return to_hresult(); }
        }

        int32_t WINRT_CALL get_Value(arg_out<V> value) noexcept final
        {
            try
            {
                clear_abi(value);
                typename D::abi_guard guard(this->shim());
                *value = detach_from<V>(this->shim().Value());
                return error_ok;
            }
            catch (...) { return to_hresult(); }
        }
    };

    template <typename D, typename T> struct produce<D, wfc::IVectorView<T>> : produce_base<D, wfc::IVectorView<T>>
    {
        int32_t WINRT_CALL GetAt(uint32_t index, arg_out<T> item) noexcept final
        {
            try
            {
                clear_abi(item);
                typename D::abi_guard guard(this->shim());
                *item = detach_from<T>(this->shim().GetAt(index));
                return error_ok;
            }
            catch (...) { return to_hresult(); }
        }

        int32_t WINRT_CALL get_Size(uint32_t* size) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                *size = this->shim().Size();
                return error_ok;
            }
            catch (...) { return to_hresult(); }
        }

        int32_t WINRT_CALL IndexOf(arg_in<T> value, uint32_t* index, bool* found) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                *found = this->shim().IndexOf(*reinterpret_cast<T const*>(&value), *index);
                return error_ok;
            }
            catch (...) { return to_hresult(); }
        }

        int32_t WINRT_CALL GetMany(uint32_t startIndex, uint32_t capacity, arg_out<T> value, uint32_t* actual) noexcept final
        {
            try
            {
                clear_abi(value);
                typename D::abi_guard guard(this->shim());
                *actual = this->shim().GetMany(startIndex, array_view<T>(reinterpret_cast<T*>(value), reinterpret_cast<T*>(value) + capacity));
                return error_ok;
            }
            catch (...) { return to_hresult(); }
        }
    };

    template <typename D, typename T> struct produce<D, wfc::IVector<T>> : produce_base<D, wfc::IVector<T>>
    {
        int32_t WINRT_CALL GetAt(uint32_t index, arg_out<T> item) noexcept final
        {
            try
            {
                clear_abi(item);
                typename D::abi_guard guard(this->shim());
                *item = detach_from<T>(this->shim().GetAt(index));
                return error_ok;
            }
            catch (...) { return to_hresult(); }
        }

        int32_t WINRT_CALL get_Size(uint32_t* size) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                *size = this->shim().Size();
                return error_ok;
            }
            catch (...) { return to_hresult(); }
        }

        int32_t WINRT_CALL GetView(void** view) noexcept final
        {
            try
            {
                *view = nullptr;
                typename D::abi_guard guard(this->shim());
                *view = detach_from<wfc::IVectorView<T>>(this->shim().GetView());
                return error_ok;
            }
            catch (...) { return to_hresult(); }
        }

        int32_t WINRT_CALL IndexOf(arg_in<T> value, uint32_t* index, bool* found) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                *found = this->shim().IndexOf(*reinterpret_cast<T const*>(&value), *index);
                return error_ok;
            }
            catch (...) { return to_hresult(); }
        }

        int32_t WINRT_CALL SetAt(uint32_t index, arg_in<T> item) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                this->shim().SetAt(index, *reinterpret_cast<T const*>(&item));
                return error_ok;
            }
            catch (...) { return to_hresult(); }
        }

        int32_t WINRT_CALL InsertAt(uint32_t index, arg_in<T> item) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                this->shim().InsertAt(index, *reinterpret_cast<T const*>(&item));
                return error_ok;
            }
            catch (...) { return to_hresult(); }
        }

        int32_t WINRT_CALL RemoveAt(uint32_t index) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                this->shim().RemoveAt(index);
                return error_ok;
            }
            catch (...) { return to_hresult(); }
        }

        int32_t WINRT_CALL Append(arg_in<T> item) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                this->shim().Append(*reinterpret_cast<T const*>(&item));
                return error_ok;
            }
            catch (...) { return to_hresult(); }
        }

        int32_t WINRT_CALL RemoveAtEnd() noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                this->shim().RemoveAtEnd();
                return error_ok;
            }
            catch (...) { return to_hresult(); }
        }

        int32_t WINRT_CALL Clear() noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                this->shim().Clear();
                return error_ok;
            }
            catch (...) { return to_hresult(); }
        }

        int32_t WINRT_CALL GetMany(uint32_t startIndex, uint32_t capacity, arg_out<T> value, uint32_t* actual) noexcept final
        {
            try
            {
                clear_abi(value);
                typename D::abi_guard guard(this->shim());
                *actual = this->shim().GetMany(startIndex, array_view<T>(reinterpret_cast<T*>(value), reinterpret_cast<T*>(value) + capacity));
                return error_ok;
            }
            catch (...) { return to_hresult(); }
        }

        int32_t WINRT_CALL ReplaceAll(uint32_t count, arg_out<T> item) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                this->shim().ReplaceAll(array_view<T const>(reinterpret_cast<T const*>(item), reinterpret_cast<T const*>(item) + count));
                return error_ok;
            }
            catch (...) { return to_hresult(); }
        }
    };

    template <typename D, typename K, typename V> struct produce<D, wfc::IMapView<K, V>> : produce_base<D, wfc::IMapView<K, V>>
    {
        int32_t WINRT_CALL Lookup(arg_in<K> key, arg_out<V> value) noexcept final
        {
            try
            {
                clear_abi(value);
                typename D::abi_guard guard(this->shim());
                *value = detach_from<V>(this->shim().Lookup(*reinterpret_cast<K const*>(&key)));
                return error_ok;
            }
            catch (...) { return to_hresult(); }
        }

        int32_t WINRT_CALL get_Size(uint32_t* size) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                *size = this->shim().Size();
                return error_ok;
            }
            catch (...) { return to_hresult(); }
        }

        int32_t WINRT_CALL HasKey(arg_in<K> key, bool* found) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                *found = this->shim().HasKey(*reinterpret_cast<K const*>(&key));
                return error_ok;
            }
            catch (...) { return to_hresult(); }
        }

        int32_t WINRT_CALL Split(void** firstPartition, void** secondPartition) noexcept final
        {
            try
            {
                *firstPartition = nullptr;
                *secondPartition = nullptr;
                typename D::abi_guard guard(this->shim());
                this->shim().Split(*reinterpret_cast<wfc::IMapView<K, V>*>(firstPartition), *reinterpret_cast<wfc::IMapView<K, V>*>(secondPartition));
                return error_ok;
            }
            catch (...) { return to_hresult(); }
        }
    };

    template <typename D, typename K, typename V> struct produce<D, wfc::IMap<K, V>> : produce_base<D, wfc::IMap<K, V>>
    {
        int32_t WINRT_CALL Lookup(arg_in<K> key, arg_out<V> value) noexcept final
        {
            try
            {
                clear_abi(value);
                typename D::abi_guard guard(this->shim());
                *value = detach_from<V>(this->shim().Lookup(*reinterpret_cast<K const*>(&key)));
                return error_ok;
            }
            catch (...) { return to_hresult(); }
        }

        int32_t WINRT_CALL get_Size(uint32_t* size) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                *size = this->shim().Size();
                return error_ok;
            }
            catch (...) { return to_hresult(); }
        }

        int32_t WINRT_CALL HasKey(arg_in<K> key, bool* found) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                *found = this->shim().HasKey(*reinterpret_cast<K const*>(&key));
                return error_ok;
            }
            catch (...) { return to_hresult(); }
        }

        int32_t WINRT_CALL GetView(void** view) noexcept final
        {
            try
            {
                *view = nullptr;
                typename D::abi_guard guard(this->shim());
                *view = detach_from<wfc::IMapView<K, V>>(this->shim().GetView());
                return error_ok;
            }
            catch (...) { return to_hresult(); }
        }

        int32_t WINRT_CALL Insert(arg_in<K> key, arg_in<V> value, bool* replaced) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                *replaced = this->shim().Insert(*reinterpret_cast<K const*>(&key), *reinterpret_cast<V const*>(&value));
                return error_ok;
            }
            catch (...) { return to_hresult(); }
        }

        int32_t WINRT_CALL Remove(arg_in<K> key) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                this->shim().Remove(*reinterpret_cast<K const*>(&key));
                return error_ok;
            }
            catch (...) { return to_hresult(); }
        }

        int32_t WINRT_CALL Clear() noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                this->shim().Clear();
                return error_ok;
            }
            catch (...) { return to_hresult(); }
        }
    };

    template <typename D, typename K> struct produce<D, wfc::IMapChangedEventArgs<K>> : produce_base<D, wfc::IMapChangedEventArgs<K>>
    {
        int32_t WINRT_CALL get_CollectionChange(wfc::CollectionChange* value) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                *value = this->shim().CollectionChange();
                return error_ok;
            }
            catch (...) { return to_hresult(); }
        }

        int32_t WINRT_CALL get_Key(arg_out<K> value) noexcept final
        {
            try
            {
                clear_abi(value);
                typename D::abi_guard guard(this->shim());
                *value = detach_from<K>(this->shim().Key());
                return error_ok;
            }
            catch (...) { return to_hresult(); }
        }
    };

    template <typename D, typename K, typename V> struct produce<D, wfc::IObservableMap<K, V>> : produce_base<D, wfc::IObservableMap<K, V>>
    {
        int32_t WINRT_CALL add_MapChanged(void* handler, event_token* token) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                *token = this->shim().MapChanged(*reinterpret_cast<wfc::MapChangedEventHandler<K, V> const*>(&handler));
                return error_ok;
            }
            catch (...) { return to_hresult(); }
        }

        int32_t WINRT_CALL remove_MapChanged(event_token token) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                this->shim().MapChanged(token);
                return error_ok;
            }
            catch (...) { return to_hresult(); }
        }
    };

    template <typename D, typename T>
    struct produce<D, wfc::IObservableVector<T>> : produce_base<D, wfc::IObservableVector<T>>
    {
        int32_t WINRT_CALL add_VectorChanged(void* handler, event_token* token) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                *token = this->shim().VectorChanged(*reinterpret_cast<wfc::VectorChangedEventHandler<T> const*>(&handler));
                return error_ok;
            }
            catch (...) { return to_hresult(); }
        }

        int32_t WINRT_CALL remove_VectorChanged(event_token token) noexcept final
        {
            try
            {
                typename D::abi_guard guard(this->shim());
                this->shim().VectorChanged(token);
                return error_ok;
            }
            catch (...) { return to_hresult(); }
        }
    };

    template <> struct delegate<Windows::Foundation::AsyncActionCompletedHandler>
    {
        template <typename H>
        struct type final : implements_delegate<Windows::Foundation::AsyncActionCompletedHandler, H>
        {
            type(H&& handler) : implements_delegate<Windows::Foundation::AsyncActionCompletedHandler, H>(std::forward<H>(handler)) {}

            int32_t WINRT_CALL Invoke(void* asyncInfo, Windows::Foundation::AsyncStatus asyncStatus) noexcept final
            {
                try
                {
                    (*this)(*reinterpret_cast<Windows::Foundation::IAsyncAction const*>(&asyncInfo), asyncStatus);
                    return error_ok;
                }
                catch (...) { return to_hresult(); }
            }
        };
    };

    template <typename TResult> struct delegate<Windows::Foundation::AsyncOperationCompletedHandler<TResult>>
    {
        template <typename H>
        struct type final : implements_delegate<Windows::Foundation::AsyncOperationCompletedHandler<TResult>, H>
        {
            type(H&& handler) : implements_delegate<Windows::Foundation::AsyncOperationCompletedHandler<TResult>, H>(std::forward<H>(handler)) {}

            int32_t WINRT_CALL Invoke(void* sender, Windows::Foundation::AsyncStatus args) noexcept final
            {
                try
                {
                    (*this)(*reinterpret_cast<Windows::Foundation::IAsyncOperation<TResult> const*>(&sender), args);
                    return error_ok;
                }
                catch (...) { return to_hresult(); }
            }
        };
    };

    template <typename TProgress> struct delegate<Windows::Foundation::AsyncActionProgressHandler<TProgress>>
    {
        template <typename H>
        struct type final : implements_delegate<Windows::Foundation::AsyncActionProgressHandler<TProgress>, H>
        {
            type(H&& handler) : implements_delegate<Windows::Foundation::AsyncActionProgressHandler<TProgress>, H>(std::forward<H>(handler)) {}

            int32_t WINRT_CALL Invoke(void* sender, arg_in<TProgress> args) noexcept final
            {
                try
                {
                    (*this)(*reinterpret_cast<Windows::Foundation::IAsyncActionWithProgress<TProgress> const*>(&sender), *reinterpret_cast<TProgress const*>(&args));
                    return error_ok;
                }
                catch (...) { return to_hresult(); }
            }
        };
    };

    template <typename TProgress> struct delegate<Windows::Foundation::AsyncActionWithProgressCompletedHandler<TProgress>>
    {
        template <typename H>
        struct type final : implements_delegate<Windows::Foundation::AsyncActionWithProgressCompletedHandler<TProgress>, H>
        {
            type(H&& handler) : implements_delegate<Windows::Foundation::AsyncActionWithProgressCompletedHandler<TProgress>, H>(std::forward<H>(handler)) {}

            int32_t WINRT_CALL Invoke(void* sender, Windows::Foundation::AsyncStatus args) noexcept final
            {
                try
                {
                    (*this)(*reinterpret_cast<Windows::Foundation::IAsyncActionWithProgress<TProgress> const*>(&sender), args);
                    return error_ok;
                }
                catch (...) { return to_hresult(); }
            }
        };
    };

    template <typename TResult, typename TProgress> struct delegate<Windows::Foundation::AsyncOperationProgressHandler<TResult, TProgress>>
    {
        template <typename H>
        struct type final : implements_delegate<Windows::Foundation::AsyncOperationProgressHandler<TResult, TProgress>, H>
        {
            type(H&& handler) : implements_delegate<Windows::Foundation::AsyncOperationProgressHandler<TResult, TProgress>, H>(std::forward<H>(handler)) {}

            int32_t WINRT_CALL Invoke(void* sender, arg_in<TProgress> args) noexcept final
            {
                try
                {
                    (*this)(*reinterpret_cast<Windows::Foundation::IAsyncOperationWithProgress<TResult, TProgress> const*>(&sender), *reinterpret_cast<TProgress const*>(&args));
                    return error_ok;
                }
                catch (...) { return to_hresult(); }
            }
        };
    };

    template <typename TResult, typename TProgress> struct delegate<Windows::Foundation::AsyncOperationWithProgressCompletedHandler<TResult, TProgress>>
    {
        template <typename H>
        struct type final : implements_delegate<Windows::Foundation::AsyncOperationWithProgressCompletedHandler<TResult, TProgress>, H>
        {
            type(H&& handler) : implements_delegate<Windows::Foundation::AsyncOperationWithProgressCompletedHandler<TResult, TProgress>, H>(std::forward<H>(handler)) {}

            int32_t WINRT_CALL Invoke(void* sender, Windows::Foundation::AsyncStatus args) noexcept final
            {
                try
                {
                    (*this)(*reinterpret_cast<Windows::Foundation::IAsyncOperationWithProgress<TResult, TProgress> const*>(&sender), args);
                    return error_ok;
                }
                catch (...) { return to_hresult(); }
            }
        };
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

#ifdef WINRT_NUMERICS

        constexpr Point(Numerics::float2 const& value) noexcept
            : X(value.x), Y(value.y)
        {}

        operator Numerics::float2() const noexcept
        {
            return { X, Y };
        }

#endif
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

#ifdef WINRT_NUMERICS

        constexpr Size(Numerics::float2 const& value) noexcept
            : Width(value.x), Height(value.y)
        {}

        operator Numerics::float2() const noexcept
        {
            return { Width, Height };
        }

#endif
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

#ifdef WINRT_NUMERICS

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

#endif
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
    struct file_time
    {
        uint64_t value{};

        file_time() noexcept = default;

        constexpr explicit file_time(uint64_t const value) noexcept : value(value)
        {
        }

#ifdef _FILETIME_
        constexpr file_time(FILETIME const& value) noexcept
            : value(value.dwLowDateTime | (static_cast<uint64_t>(value.dwHighDateTime) << 32))
        {
        }

        operator FILETIME() const noexcept
        {
            return { value & 0xFFFFFFFF, (value >> 32) };
        }
#endif
    };

    struct clock
    {
        using rep = int64_t;
        using period = impl::filetime_period;
        using duration = Windows::Foundation::TimeSpan;
        using time_point = Windows::Foundation::DateTime;

        static constexpr bool is_steady = false;

        static time_point now() noexcept
        {
            file_time ft;
            WINRT_GetSystemTimePreciseAsFileTime(&ft);
            return from_file_time(ft);
        }

        static time_t to_time_t(time_point const& time) noexcept
        {
            return std::chrono::duration_cast<time_t_duration>(time - time_t_epoch).count();
        }

        static time_point from_time_t(time_t time) noexcept
        {
            return time_t_epoch + time_t_duration{ time };
        }

        static file_time to_file_time(time_point const& time) noexcept
        {
            return file_time{ static_cast<uint64_t>(time.time_since_epoch().count()) };
        }

        static time_point from_file_time(file_time const& time) noexcept
        {
            return time_point{ duration{ time.value } };
        }

        static auto to_FILETIME(time_point const& time) noexcept
        {
            return to_file_time(time);
        }

        static time_point from_FILETIME(file_time const& time) noexcept
        {
            return from_file_time(time);
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
            check_bool(WINRT_OpenProcessToken(WINRT_GetCurrentProcess(), 0x0002 /*TOKEN_DUPLICATE*/, token.put()));
            access_token duplicate;
            check_bool(WINRT_DuplicateToken(token.get(), 2 /*SecurityImpersonation*/, duplicate.put()));
            return duplicate;
        }

        static access_token thread()
        {
            access_token token;

            if (!WINRT_OpenThreadToken(WINRT_GetCurrentThread(), 0x0004 /*TOKEN_IMPERSONATE*/, 1, token.put()))
            {
                uint32_t const error = WINRT_GetLastError();

                if (error != 1008 /*ERROR_NO_TOKEN*/)
                {
                    throw_hresult(impl::hresult_from_win32(error));
                }
            }

            return token;
        }

        static access_token client()
        {
            struct impersonate_guard
            {
                impersonate_guard(com_ptr<impl::IServerSecurity> const& server) : m_server(server)
                {
                    check_hresult(m_server->ImpersonateClient());
                }

                ~impersonate_guard()
                {
                    check_hresult(m_server->RevertToSelf());
                }

            private:

                com_ptr<impl::IServerSecurity> const& m_server;
            };

            auto server = capture<impl::IServerSecurity>(WINRT_CoGetCallContext);
            impersonate_guard impersonate(server);
            return thread();
        }

        access_token() = default;
        access_token(access_token&& other) = default;
        access_token& operator=(access_token&& other) = default;

        access_token impersonate() const
        {
            auto previous = thread();
            check_bool(WINRT_SetThreadToken(nullptr, get()));
            return previous;
        }

        void revert() const
        {
            check_bool(WINRT_SetThreadToken(nullptr, get()));
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

namespace winrt::impl
{
    inline bool is_sta() noexcept
    {
        int32_t aptType;
        int32_t aptTypeQualifier;
        return (error_ok == WINRT_CoGetApartmentType(&aptType, &aptTypeQualifier)) && ((aptType == 0 /*APTTYPE_STA*/) || (aptType == 3 /*APTTYPE_MAINSTA*/));
    }

    template <typename Async>
    void blocking_suspend(Async const& async)
    {
        WINRT_ASSERT(!is_sta());

        slim_mutex m;
        slim_condition_variable cv;
        bool completed = false;
        async.Completed([&](auto&&...)
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
            auto context = capture<IContextCallback>(WINRT_CoGetObjectContext);

            async.Completed([handle, context = std::move(context)](auto const&, Windows::Foundation::AsyncStatus)
            {
                com_callback_args args{};
                args.data = handle.address();

                auto callback = [](com_callback_args* args) noexcept -> int32_t
                {
                    std::experimental::coroutine_handle<>::from_address(args->data)();
                    return error_ok;
                };

                check_hresult(context->ContextCallback(callback, &args, guid_of<impl::ICallbackWithNoReentrancyToApplicationSTA>(), 5, nullptr));
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
                if (!WINRT_TrySubmitThreadpoolCallback(callback, handle.address(), nullptr))
                {
                    throw_last_error();
                }
            }

        private:

            static void WINRT_CALL callback(void*, void* context) noexcept
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

                if (!WINRT_TrySubmitThreadpoolCallback(callback, this, nullptr))
                {
                    throw_last_error();
                }
            }

        private:

            static void WINRT_CALL callback(void*, void* context) noexcept
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
            m_context.capture(WINRT_CoGetObjectContext);
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
            impl::com_callback_args args{};
            args.data = handle.address();
            check_hresult(m_context->ContextCallback(callback, &args, guid_of<impl::ICallbackWithNoReentrancyToApplicationSTA>(), 5, nullptr));
        }

    private:

        static int32_t WINRT_CALL callback(impl::com_callback_args* args) noexcept
        {
            std::experimental::coroutine_handle<>::from_address(args->data)();
            return impl::error_ok;
        }

        com_ptr<impl::IContextCallback> m_context;
    };

    struct resume_after
    {
        explicit resume_after(Windows::Foundation::TimeSpan duration) noexcept : m_duration(duration)
        {
        }

        bool await_ready() const noexcept
        {
            return m_duration.count() <= 0;
        }

        void await_suspend(std::experimental::coroutine_handle<> handle)
        {
            m_timer.attach(check_pointer(WINRT_CreateThreadpoolTimer(callback, handle.address(), nullptr)));
            int64_t relative_count = -m_duration.count();
            WINRT_SetThreadpoolTimer(m_timer.get(), &relative_count, 0, 0);
        }

        void await_resume() const noexcept
        {
        }

    private:

        static void WINRT_CALL callback(void*, void* context, void*) noexcept
        {
            std::experimental::coroutine_handle<>::from_address(context)();
        }

        struct timer_traits
        {
            using type = impl::ptp_timer;

            static void close(type value) noexcept
            {
                WINRT_CloseThreadpoolTimer(value);
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
        explicit resume_on_signal(void* handle) noexcept :
            m_handle(handle)
        {}

        resume_on_signal(void* handle, Windows::Foundation::TimeSpan timeout) noexcept :
            m_timeout(timeout),
            m_handle(handle)
        {}

        bool await_ready() const noexcept
        {
            return WINRT_WaitForSingleObject(m_handle, 0) == 0;
        }

        void await_suspend(std::experimental::coroutine_handle<> resume)
        {
            m_resume = resume;
            m_wait.attach(check_pointer(WINRT_CreateThreadpoolWait(callback, this, nullptr)));
            int64_t relative_count = -m_timeout.count();
            int64_t* file_time = relative_count != 0 ? &relative_count : nullptr;
            WINRT_SetThreadpoolWait(m_wait.get(), m_handle, file_time);
        }

        bool await_resume() const noexcept
        {
            return m_result == 0;
        }

    private:

        static void WINRT_CALL callback(void*, void* context, void*, uint32_t result) noexcept
        {
            auto that = static_cast<resume_on_signal*>(context);
            that->m_result = result;
            that->m_resume();
        }

        struct wait_traits
        {
            using type = impl::ptp_wait;

            static void close(type value) noexcept
            {
                WINRT_CloseThreadpoolWait(value);
            }

            static constexpr type invalid() noexcept
            {
                return nullptr;
            }
        };

        handle_type<wait_traits> m_wait;
        Windows::Foundation::TimeSpan m_timeout{ 0 };
        void* m_handle{};
        uint32_t m_result{};
        std::experimental::coroutine_handle<> m_resume{ nullptr };
    };

    struct overlapped_io
    {
        uintptr_t Internal;
        uintptr_t InternalHigh;
        union
        {
            struct
            {
                uint32_t Offset;
                uint32_t OffsetHigh;
            } s;
            void* Pointer;
        };
        void* hEvent;
    };

    struct awaitable_base
    {
        static void WINRT_CALL callback(void*, void*, void* overlapped, uint32_t result, std::size_t, void*) noexcept
        {
            auto context = static_cast<awaitable_base*>(overlapped);
            context->m_result = result;
            context->m_resume();
        }

    protected:

        overlapped_io m_overlapped{};
        uint32_t m_result{};
        std::experimental::coroutine_handle<> m_resume{ nullptr };
    };

    struct resumable_io
    {
        resumable_io(void* object) :
            m_io(check_pointer(WINRT_CreateThreadpoolIo(object, awaitable_base::callback, nullptr, nullptr)))
        {
        }

        template <typename F>
        auto start(F callback)
        {
            struct awaitable : awaitable_base, F
            {
                awaitable(impl::ptp_io io, F callback) noexcept :
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
                    WINRT_StartThreadpoolIo(m_io);

                    try
                    {
                        (*this)(m_overlapped);
                    }
                    catch (...)
                    {
                        WINRT_CancelThreadpoolIo(m_io);
                        throw;
                    }
                }

                uint32_t await_resume() const
                {
                    if (m_result != 38 /*ERROR_HANDLE_EOF*/)
                    {
                        check_win32(m_result);
                    }
                    return static_cast<uint32_t>(m_overlapped.InternalHigh);
                }

                impl::ptp_io m_io{};
            };

            return awaitable(get(), callback);
        }

        template <typename F>
        auto start_pending(F callback)
        {
            struct awaitable : awaitable_base, F
            {
                awaitable(impl::ptp_io io, F callback) noexcept :
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
                    WINRT_StartThreadpoolIo(m_io);

                    try
                    {
                        bool const pending = (*this)(m_overlapped);

                        if (!pending)
                        {
                            WINRT_CancelThreadpoolIo(m_io);
                        }

                        return pending;
                    }
                    catch (...)
                    {
                        WINRT_CancelThreadpoolIo(m_io);
                        throw;
                    }
                }

                uint32_t await_resume() const
                {
                    if (m_result != 38 /*ERROR_HANDLE_EOF*/)
                    {
                        check_win32(m_result);
                    }
                    return static_cast<uint32_t>(m_overlapped.InternalHigh);
                }

                impl::ptp_io m_io{};
            };

            return awaitable(get(), callback);
        }

        impl::ptp_io get() const noexcept
        {
            return m_io.get();
        }

    private:

        struct io_traits
        {
            using type = impl::ptp_io;

            static void close(type value) noexcept
            {
                WINRT_CloseThreadpoolIo(value);
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
    template <typename Promise>
    struct cancellation_token
    {
        cancellation_token(Promise* promise) noexcept : m_promise(promise)
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

        void callback(winrt::delegate<>&& cancel) noexcept
        {
            m_promise->cancellation_callback(std::move(cancel));
        }

    private:

        Promise * m_promise;
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

        Promise * m_promise;
    };

    template <typename Derived, typename AsyncInterface, typename CompletedHandler, typename TProgress = void>
    struct promise_base : implements<Derived, AsyncInterface, Windows::Foundation::IAsyncInfo>
    {
        using AsyncStatus = Windows::Foundation::AsyncStatus;

        unsigned long WINRT_CALL Release() noexcept
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
                    m_completed = make_agile_delegate(handler);
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

        hresult ErrorCode() noexcept
        {
            try
            {
                slim_lock_guard const guard(m_lock);
                rethrow_if_failed();
                return error_ok;
            }
            catch (...)
            {
                return to_hresult();
            }
        }

        void Cancel() noexcept
        {
            winrt::delegate<> cancel;

            {
                slim_lock_guard const guard(m_lock);

                if (m_status == AsyncStatus::Started)
                {
                    m_status = AsyncStatus::Canceled;
                    cancel = std::move(m_cancel);
                }
            }

            if (cancel)
            {
                cancel();
            }
        }

        void Close() const noexcept
        {
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
                    std::rethrow_exception(m_exception);
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

        template <typename Expression>
        Expression&& await_transform(Expression&& expression)
        {
            if (Status() == AsyncStatus::Canceled)
            {
                throw winrt::hresult_canceled();
            }

            return std::forward<Expression>(expression);
        }

        cancellation_token<Derived> await_transform(get_cancellation_token_t) noexcept
        {
            return{ static_cast<Derived*>(this) };
        }

        progress_token<Derived, TProgress> await_transform(get_progress_token_t) noexcept
        {
            return{ static_cast<Derived*>(this) };
        }

        void cancellation_callback(winrt::delegate<>&& cancel) noexcept
        {
            {
                slim_lock_guard const guard(m_lock);

                if (m_status != AsyncStatus::Canceled)
                {
                    m_cancel = std::move(cancel);
                    return;
                }
            }

            cancel();
        }

    protected:

        void rethrow_if_failed() const
        {
            if (m_status == AsyncStatus::Error || m_status == AsyncStatus::Canceled)
            {
                std::rethrow_exception(m_exception);
            }
        }

        std::exception_ptr m_exception{};
        slim_mutex m_lock;
        CompletedHandler m_completed;
        winrt::delegate<> m_cancel;
        AsyncStatus m_status{ AsyncStatus::Started };
        bool m_completed_assigned{ false };
    };
}

namespace winrt::impl
{
    template <typename T>
    struct fast_iterator
    {
        using iterator_category = std::input_iterator_tag;
        using value_type = T;
        using difference_type = ptrdiff_t;
        using pointer = T * ;
        using reference = T & ;

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

    WINRT_EXPORT template <typename T, std::enable_if_t<!has_GetAt<T>::value>* = nullptr>
    auto begin(T const& collection) -> decltype(collection.First())
    {
        auto result = collection.First();

        if (!result.HasCurrent())
        {
            return {};
        }

        return result;
    }

    WINRT_EXPORT template <typename T, std::enable_if_t<!has_GetAt<T>::value>* = nullptr>
    auto end([[maybe_unused]] T const& collection) noexcept -> decltype(collection.First())
    {
        return {};
    }

    WINRT_EXPORT template <typename T, std::enable_if_t<has_GetAt<T>::value>* = nullptr>
    fast_iterator<T> begin(T const& collection) noexcept
    {
        return fast_iterator<T>(collection, 0);
    }

    WINRT_EXPORT template <typename T, std::enable_if_t<has_GetAt<T>::value>* = nullptr>
    fast_iterator<T> end(T const& collection)
    {
        return fast_iterator<T>(collection, collection.Size());
    }

    template <typename T>
    struct key_value_pair;

    template <typename K, typename V>
    struct key_value_pair<wfc::IKeyValuePair<K, V>> final : implements<key_value_pair<wfc::IKeyValuePair<K, V>>, wfc::IKeyValuePair<K, V>>
    {
        key_value_pair(K key, V value) :
            m_key(std::move(key)),
            m_value(std::move(value))
        {
        }

        K Key() const
        {
            return m_key;
        }

        V Value() const
        {
            return m_value;
        }

    private:

        K const m_key;
        V const m_value;
    };

    template <typename T>
    struct is_key_value_pair : std::false_type {};

    template <typename K, typename V>
    struct is_key_value_pair<wfc::IKeyValuePair<K, V>> : std::true_type {};

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

    struct no_collection_version
    {
        struct iterator_type
        {
            iterator_type(no_collection_version const&) noexcept
            {
            }

            void check_version(no_collection_version const&) const noexcept
            {
            }
        };
    };

    struct collection_version
    {
        struct iterator_type
        {
            iterator_type(collection_version const& version) noexcept :
                m_snapshot(version.get_version())
            {
            }

            void check_version(collection_version const& version) const
            {
                if (version.get_version() != m_snapshot)
                {
                    throw hresult_changed_state();
                }
            }

        private:

            uint32_t const m_snapshot;
        };

        uint32_t get_version() const noexcept
        {
            return m_version;
        }

        void increment_version() noexcept
        {
            ++m_version;
        }

    private:

        std::atomic<uint32_t> m_version{};
    };

    template <typename T>
    struct range_container
    {
        T const first;
        T const last;

        auto begin() const noexcept
        {
            return first;
        }

        auto end() const noexcept
        {
            return last;
        }
    };
}

WINRT_EXPORT namespace winrt
{
    template <typename D, typename T, typename Version = impl::no_collection_version>
    struct iterable_base : Version
    {
        template <typename U>
        static constexpr auto const& wrap_value(U const& value) noexcept
        {
            return value;
        }

        template <typename U>
        static constexpr auto const& unwrap_value(U const& value) noexcept
        {
            return value;
        }

        auto First()
        {
            return make<iterator>(static_cast<D*>(this));
        }

    protected:

        template<typename InputIt, typename Size, typename OutputIt>
        auto copy_n(InputIt first, Size count, OutputIt result) const
        {
            if constexpr (std::is_same_v<T, decltype(*std::declval<D const>().get_container().begin())> && !impl::is_key_value_pair<T>::value)
            {
                std::copy_n(first, count, result);
            }
            else
            {
                return std::transform(first, std::next(first, count), result, [&](auto&& value)
                {
                    if constexpr (!impl::is_key_value_pair<T>::value)
                    {
                        return static_cast<D const&>(*this).unwrap_value(value);
                    }
                    else
                    {
                        return make<impl::key_value_pair<T>>(static_cast<D const&>(*this).unwrap_value(value.first), static_cast<D const&>(*this).unwrap_value(value.second));
                    }
                });
            }
        }

    private:

        struct iterator final : Version::iterator_type, implements<iterator, Windows::Foundation::Collections::IIterator<T>>
        {
            void abi_enter()
            {
                m_owner->abi_enter();
                this->check_version(*m_owner);
            }

            void abi_exit()
            {
                m_owner->abi_exit();
            }

            explicit iterator(D* const owner) noexcept :
                Version::iterator_type(*owner),
                m_current(owner->get_container().begin()),
                m_end(owner->get_container().end())
            {
                m_owner.copy_from(owner);
            }

            T Current() const
            {
                if (m_current == m_end)
                {
                    throw hresult_out_of_bounds();
                }

                if constexpr (!impl::is_key_value_pair<T>::value)
                {
                    return m_owner->unwrap_value(*m_current);
                }
                else
                {
                    return make<impl::key_value_pair<T>>(m_owner->unwrap_value(m_current->first), m_owner->unwrap_value(m_current->second));
                }
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
                uint32_t const actual = (std::min)(static_cast<uint32_t>(std::distance(m_current, m_end)), values.size());
                m_owner->copy_n(m_current, actual, values.begin());
                std::advance(m_current, actual);
                return actual;
            }

        private:

            com_ptr<D> m_owner;
            decltype(m_owner->get_container().begin()) m_current;
            decltype(m_owner->get_container().end()) const m_end;
        };
    };

    template <typename D, typename T, typename Version = impl::no_collection_version>
    struct vector_view_base : iterable_base<D, T, Version>
    {
        T GetAt(uint32_t const index) const
        {
            if (index >= Size())
            {
                throw hresult_out_of_bounds();
            }

            return static_cast<D const&>(*this).unwrap_value(*std::next(static_cast<D const&>(*this).get_container().begin(), index));
        }

        uint32_t Size() const noexcept
        {
            return static_cast<uint32_t>(std::distance(static_cast<D const&>(*this).get_container().begin(), static_cast<D const&>(*this).get_container().end()));
        }

        bool IndexOf(T const& value, uint32_t& index) const noexcept
        {
            auto first = std::find_if(static_cast<D const&>(*this).get_container().begin(), static_cast<D const&>(*this).get_container().end(), [&](auto&& match)
            {
                return value == static_cast<D const&>(*this).unwrap_value(match);
            });

            index = static_cast<uint32_t>(first - static_cast<D const&>(*this).get_container().begin());
            return index < Size();
        }

        uint32_t GetMany(uint32_t const startIndex, array_view<T> values) const
        {
            if (startIndex >= Size())
            {
                return 0;
            }

            uint32_t const actual = (std::min)(Size() - startIndex, values.size());
            this->copy_n(static_cast<D const&>(*this).get_container().begin() + startIndex, actual, values.begin());
            return actual;
        }
    };

    template <typename D, typename T>
    struct vector_base : vector_view_base<D, T, impl::collection_version>
    {
        Windows::Foundation::Collections::IVectorView<T> GetView() const noexcept
        {
            return static_cast<D const&>(*this);
        }

        void SetAt(uint32_t const index, T const& value)
        {
            if (index >= static_cast<D const&>(*this).get_container().size())
            {
                throw hresult_out_of_bounds();
            }

            this->increment_version();
            static_cast<D&>(*this).get_container()[index] = static_cast<D const&>(*this).wrap_value(value);
        }

        void InsertAt(uint32_t const index, T const& value)
        {
            if (index > static_cast<D const&>(*this).get_container().size())
            {
                throw hresult_out_of_bounds();
            }

            this->increment_version();
            static_cast<D&>(*this).get_container().insert(static_cast<D const&>(*this).get_container().begin() + index, static_cast<D const&>(*this).wrap_value(value));
        }

        void RemoveAt(uint32_t const index)
        {
            if (index >= static_cast<D const&>(*this).get_container().size())
            {
                throw hresult_out_of_bounds();
            }

            this->increment_version();
            static_cast<D&>(*this).get_container().erase(static_cast<D const&>(*this).get_container().begin() + index);
        }

        void Append(T const& value)
        {
            this->increment_version();
            static_cast<D&>(*this).get_container().push_back(static_cast<D const&>(*this).wrap_value(value));
        }

        void RemoveAtEnd()
        {
            if (static_cast<D const&>(*this).get_container().empty())
            {
                throw hresult_out_of_bounds();
            }

            this->increment_version();
            static_cast<D&>(*this).get_container().pop_back();
        }

        void Clear() noexcept
        {
            this->increment_version();
            static_cast<D&>(*this).get_container().clear();
        }

        void ReplaceAll(array_view<T const> value)
        {
            this->increment_version();
            assign(value.begin(), value.end());
        }

    private:

        template <typename InputIt>
        void assign(InputIt first, InputIt last)
        {
            using container_type = std::remove_reference_t<decltype(static_cast<D&>(*this).get_container())>;

            if constexpr (std::is_same_v<T, typename container_type::value_type>)
            {
                static_cast<D&>(*this).get_container().assign(first, last);
            }
            else
            {
                auto& container = static_cast<D&>(*this).get_container();
                container.clear();
                container.reserve(std::distance(first, last));

                std::transform(first, last, std::back_inserter(container), [&](auto&& value)
                {
                    return static_cast<D const&>(*this).wrap_value(value);
                });
            }
        }
    };

    template <typename D, typename T>
    struct observable_vector_base : vector_base<D, T>
    {
        event_token VectorChanged(Windows::Foundation::Collections::VectorChangedEventHandler<T> const& handler)
        {
            return m_changed.add(handler);
        }

        void VectorChanged(event_token const cookie)
        {
            m_changed.remove(cookie);
        }

        void SetAt(uint32_t const index, T const& value)
        {
            vector_base<D, T>::SetAt(index, value);
            call_changed(Windows::Foundation::Collections::CollectionChange::ItemChanged, index);
        }

        void InsertAt(uint32_t const index, T const& value)
        {
            vector_base<D, T>::InsertAt(index, value);
            call_changed(Windows::Foundation::Collections::CollectionChange::ItemInserted, index);
        }

        void RemoveAt(uint32_t const index)
        {
            vector_base<D, T>::RemoveAt(index);
            call_changed(Windows::Foundation::Collections::CollectionChange::ItemRemoved, index);
        }

        void Append(T const& value)
        {
            vector_base<D, T>::Append(value);
            call_changed(Windows::Foundation::Collections::CollectionChange::ItemInserted, this->Size() - 1);
        }

        void RemoveAtEnd()
        {
            vector_base<D, T>::RemoveAtEnd();
            call_changed(Windows::Foundation::Collections::CollectionChange::ItemRemoved, this->Size());
        }

        void Clear()
        {
            vector_base<D, T>::Clear();
            call_changed(Windows::Foundation::Collections::CollectionChange::Reset, 0);
        }

        void ReplaceAll(array_view<T const> value)
        {
            vector_base<D, T>::ReplaceAll(value);
            call_changed(Windows::Foundation::Collections::CollectionChange::Reset, 0);
        }

    private:

        event<Windows::Foundation::Collections::VectorChangedEventHandler<T>> m_changed;

        void call_changed(Windows::Foundation::Collections::CollectionChange const change, uint32_t const index)
        {
            m_changed(static_cast<D const&>(*this), make<args>(change, index));
        }

        struct args final : implements<args, Windows::Foundation::Collections::IVectorChangedEventArgs>
        {
            args(Windows::Foundation::Collections::CollectionChange const change, uint32_t const index) noexcept :
                m_change(change),
                m_index(index)
            {
            }

            Windows::Foundation::Collections::CollectionChange CollectionChange() const noexcept
            {
                return m_change;
            }

            uint32_t Index() const noexcept
            {
                return m_index;
            }

        private:

            Windows::Foundation::Collections::CollectionChange const m_change;
            uint32_t const m_index;
        };
    };

    template <typename D, typename K, typename V, typename Version = impl::no_collection_version>
    struct map_view_base : iterable_base<D, Windows::Foundation::Collections::IKeyValuePair<K, V>, Version>
    {
        V Lookup(K const& key) const
        {
            auto pair = static_cast<D const&>(*this).get_container().find(static_cast<D const&>(*this).wrap_value(key));

            if (pair == static_cast<D const&>(*this).get_container().end())
            {
                throw hresult_out_of_bounds();
            }

            return static_cast<D const&>(*this).unwrap_value(pair->second);
        }

        uint32_t Size() const noexcept
        {
            return static_cast<uint32_t>(static_cast<D const&>(*this).get_container().size());
        }

        bool HasKey(K const& key) const noexcept
        {
            return static_cast<D const&>(*this).get_container().find(static_cast<D const&>(*this).wrap_value(key)) != static_cast<D const&>(*this).get_container().end();
        }

        void Split(Windows::Foundation::Collections::IMapView<K, V>& first, Windows::Foundation::Collections::IMapView<K, V>& second) const noexcept
        {
            first = nullptr;
            second = nullptr;
        }
    };

    template <typename D, typename K, typename V>
    struct map_base : map_view_base<D, K, V, impl::collection_version>
    {
        Windows::Foundation::Collections::IMapView<K, V> GetView() const
        {
            return static_cast<D const&>(*this);
        }

        bool Insert(K const& key, V const& value)
        {
            this->increment_version();
            auto pair = static_cast<D&>(*this).get_container().insert_or_assign(static_cast<D const&>(*this).wrap_value(key), static_cast<D const&>(*this).wrap_value(value));
            return !pair.second;
        }

        void Remove(K const& key)
        {
            this->increment_version();
            static_cast<D&>(*this).get_container().erase(static_cast<D const&>(*this).wrap_value(key));
        }

        void Clear() noexcept
        {
            this->increment_version();
            static_cast<D&>(*this).get_container().clear();
        }
    };

    template <typename D, typename K, typename V>
    struct observable_map_base : map_base<D, K, V>
    {
        event_token MapChanged(Windows::Foundation::Collections::MapChangedEventHandler<K, V> const& handler)
        {
            return m_changed.add(handler);
        }

        void MapChanged(event_token const cookie)
        {
            m_changed.remove(cookie);
        }

        bool Insert(K const& key, V const& value)
        {
            bool const result = map_base<D, K, V>::Insert(key, value);
            call_changed(Windows::Foundation::Collections::CollectionChange::ItemInserted, key);
            return result;
        }

        void Remove(K const& key)
        {
            map_base<D, K, V>::Remove(key);
            call_changed(Windows::Foundation::Collections::CollectionChange::ItemRemoved, key);
        }

        void Clear() noexcept
        {
            map_base<D, K, V>::Clear();
            call_changed(Windows::Foundation::Collections::CollectionChange::Reset, impl::empty_value<K>());
        }

    private:

        event<Windows::Foundation::Collections::MapChangedEventHandler<K, V>> m_changed;

        void call_changed(Windows::Foundation::Collections::CollectionChange const change, K const& key)
        {
            m_changed(static_cast<D const&>(*this), make<args>(change, key));
        }

        struct args final : implements<args, Windows::Foundation::Collections::IMapChangedEventArgs<K>>
        {
            args(Windows::Foundation::Collections::CollectionChange const change, K const& key) noexcept :
                m_change(change),
                m_key(key)
            {
            }

            Windows::Foundation::Collections::CollectionChange CollectionChange() const noexcept
            {
                return m_change;
            }

            K Key() const noexcept
            {
                return m_key;
            }

        private:

            Windows::Foundation::Collections::CollectionChange const m_change;
            K const m_key;
        };
    };
}

namespace winrt::impl
{
    template <typename T, typename Container>
    struct input_iterable final :
        implements<input_iterable<T, Container>, non_agile, no_weak_ref, wfc::IIterable<T>>,
        iterable_base<input_iterable<T, Container>, T>
    {
        static_assert(std::is_same_v<Container, std::remove_reference_t<Container>>, "Must be constructed with rvalue.");

        explicit input_iterable(Container&& values) : m_values(std::forward<Container>(values))
        {
        }

        auto& get_container() const noexcept
        {
            return m_values;
        }

    private:

        Container const m_values;
    };

    template <typename T, typename InputIt>
    struct scoped_input_iterable final :
        input_scope,
        implements<scoped_input_iterable<T, InputIt>, non_agile, no_weak_ref, wfc::IIterable<T>>,
        iterable_base<scoped_input_iterable<T, InputIt>, T>
    {
        void abi_enter() const
        {
            check_scope();
        }

        scoped_input_iterable(InputIt first, InputIt last) : m_begin(first), m_end(last)
        {
        }

        auto get_container() const noexcept
        {
            return range_container<InputIt>{ m_begin, m_end };
        }

    private:

        InputIt const m_begin;
        InputIt const m_end;
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

        template <typename U, std::enable_if_t<std::is_convertible_v<U, value_type>>* = nullptr>
        iterable(std::initializer_list<U> values) : m_pair(impl::make_scoped_input_iterable<value_type>(values.begin(), values.end()))
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
        return *(void**)(&object);
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
        return *(void**)(&object);
    }
}

namespace winrt::impl
{
    template <typename T, typename Container>
    struct input_vector_view final :
        implements<input_vector_view<T, Container>, non_agile, no_weak_ref, wfc::IVectorView<T>, wfc::IIterable<T>>,
        vector_view_base<input_vector_view<T, Container>, T>
    {
        static_assert(std::is_same_v<Container, std::remove_reference_t<Container>>, "Must be constructed with rvalue.");

        explicit input_vector_view(Container&& values) : m_values(std::forward<Container>(values))
        {
        }

        auto& get_container() const noexcept
        {
            return m_values;
        }

    private:

        Container const m_values;
    };

    template <typename T, typename InputIt>
    struct scoped_input_vector_view final :
        input_scope,
        implements<scoped_input_vector_view<T, InputIt>, non_agile, no_weak_ref, wfc::IVectorView<T>, wfc::IIterable<T>>,
        vector_view_base<scoped_input_vector_view<T, InputIt>, T>
    {
        void abi_enter() const
        {
            check_scope();
        }

        scoped_input_vector_view(InputIt first, InputIt last) : m_begin(first), m_end(last)
        {
        }

        auto get_container() const noexcept
        {
            return range_container<InputIt>{ m_begin, m_end };
        }

    private:

        InputIt const m_begin;
        InputIt const m_end;
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

        template <typename U, std::enable_if_t<std::is_convertible_v<U, value_type>>* = nullptr>
        vector_view(std::initializer_list<U> values) : m_pair(impl::make_scoped_input_vector_view<value_type>(values.begin(), values.end()))
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
        return *(void**)(&object);
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
        return *(void**)(&object);
    }
}

namespace winrt::impl
{
    template <typename K, typename V, typename Container>
    struct input_map_view final :
        implements<input_map_view<K, V, Container>, non_agile, no_weak_ref, wfc::IMapView<K, V>, wfc::IIterable<wfc::IKeyValuePair<K, V>>>,
        map_view_base<input_map_view<K, V, Container>, K, V>
    {
        static_assert(std::is_same_v<Container, std::remove_reference_t<Container>>, "Must be constructed with rvalue.");

        explicit input_map_view(Container&& values) : m_values(std::forward<Container>(values))
        {
        }

        auto& get_container() const noexcept
        {
            return m_values;
        }

    private:

        Container const m_values;
    };

    template <typename K, typename V, typename Container>
    struct scoped_input_map_view final :
        input_scope,
        implements<scoped_input_map_view<K, V, Container>, non_agile, no_weak_ref, wfc::IMapView<K, V>, wfc::IIterable<wfc::IKeyValuePair<K, V>>>,
        map_view_base<scoped_input_map_view<K, V, Container>, K, V>
    {
        void abi_enter() const
        {
            check_scope();
        }

        explicit scoped_input_map_view(Container const& values) : m_values(values)
        {
        }

        auto& get_container() const noexcept
        {
            return m_values;
        }

    private:

        Container const& m_values;
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
        return *(void**)(&object);
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
        return *(void**)(&object);
    }
}

namespace winrt::impl
{
    template <typename T, typename Container>
    struct input_vector final :
        implements<input_vector<T, Container>, wfc::IVector<T>, wfc::IVectorView<T>, wfc::IIterable<T>>,
        vector_base<input_vector<T, Container>, T>
    {
        static_assert(std::is_same_v<Container, std::remove_reference_t<Container>>, "Must be constructed with rvalue.");

        explicit input_vector(Container&& values) : m_values(std::forward<Container>(values))
        {
        }

        auto& get_container() noexcept
        {
            return m_values;
        }

        auto& get_container() const noexcept
        {
            return m_values;
        }

    private:

        Container m_values;
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
        return *(void**)(&object);
    }
}

namespace winrt::impl
{
    template <typename K, typename V, typename Container>
    struct input_map final :
        implements<input_map<K, V, Container>, wfc::IMap<K, V>, wfc::IMapView<K, V>, wfc::IIterable<wfc::IKeyValuePair<K, V>>>,
        map_base<input_map<K, V, Container>, K, V>
    {
        static_assert(std::is_same_v<Container, std::remove_reference_t<Container>>, "Must be constructed with rvalue.");

        explicit input_map(Container&& values) : m_values(std::forward<Container>(values))
        {
        }

        auto& get_container() noexcept
        {
            return m_values;
        }

        auto& get_container() const noexcept
        {
            return m_values;
        }

    private:

        Container m_values;
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
        return *(void**)(&object);
    }
}

namespace winrt::impl
{
    template <typename T, typename Container>
    struct observable_vector final :
        implements<observable_vector<T, Container>, wfc::IObservableVector<T>, wfc::IVector<T>, wfc::IVectorView<T>, wfc::IIterable<T>>,
        observable_vector_base<observable_vector<T, Container>, T>
    {
        static_assert(std::is_same_v<Container, std::remove_reference_t<Container>>, "Must be constructed with rvalue.");

        explicit observable_vector(Container&& values) : m_values(std::forward<Container>(values))
        {
        }

        auto& get_container() noexcept
        {
            return m_values;
        }

        auto& get_container() const noexcept
        {
            return m_values;
        }

    private:

        Container m_values;
    };
}

WINRT_EXPORT namespace winrt
{
    template <typename T, typename Allocator = std::allocator<T>>
    Windows::Foundation::Collections::IVector<T> single_threaded_vector(std::vector<T, Allocator>&& values = {})
    {
        return make<impl::input_vector<T, std::vector<T, Allocator>>>(std::move(values));
    }

    template <typename T, typename Allocator = std::allocator<T>>
    Windows::Foundation::Collections::IObservableVector<T> single_threaded_observable_vector(std::vector<T, Allocator>&& values = {})
    {
        return make<impl::observable_vector<T, std::vector<T, Allocator>>>(std::move(values));
    }
}

namespace winrt::impl
{
    template <typename K, typename V, typename Container>
    struct observable_map final :
        implements<observable_map<K, V, Container>, wfc::IObservableMap<K, V>, wfc::IMap<K, V>, wfc::IMapView<K, V>, wfc::IIterable<wfc::IKeyValuePair<K, V>>>,
        observable_map_base<observable_map<K, V, Container>, K, V>
    {
        static_assert(std::is_same_v<Container, std::remove_reference_t<Container>>, "Must be constructed with rvalue.");

        explicit observable_map(Container&& values) : m_values(std::forward<Container>(values))
        {
        }

        auto& get_container() noexcept
        {
            return m_values;
        }

        auto& get_container() const noexcept
        {
            return m_values;
        }

    private:

        Container m_values;
    };
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

    template <typename K, typename V, typename Compare = std::less<K>, typename Allocator = std::allocator<std::pair<K const, V>>>
    Windows::Foundation::Collections::IObservableMap<K, V> single_threaded_observable_map()
    {
        return make<impl::observable_map<K, V, std::map<K, V, Compare, Allocator>>>(std::map<K, V, Compare, Allocator>{});
    }

    template <typename K, typename V, typename Compare = std::less<K>, typename Allocator = std::allocator<std::pair<K const, V>>>
    Windows::Foundation::Collections::IObservableMap<K, V> single_threaded_observable_map(std::map<K, V, Compare, Allocator>&& values)
    {
        return make<impl::observable_map<K, V, std::map<K, V, Compare, Allocator>>>(std::move(values));
    }

    template <typename K, typename V, typename Hash = std::hash<K>, typename KeyEqual = std::equal_to<K>, typename Allocator = std::allocator<std::pair<K const, V>>>
    Windows::Foundation::Collections::IObservableMap<K, V> single_threaded_observable_map(std::unordered_map<K, V, Hash, KeyEqual, Allocator>&& values)
    {
        return make<impl::observable_map<K, V, std::unordered_map<K, V, Hash, KeyEqual, Allocator>>>(std::move(values));
    }
}

namespace winrt::impl
{
    inline size_t hash_data(void const* ptr, size_t const bytes) noexcept
    {
#ifdef _WIN64
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
        void* const abi_value = get_abi(value.try_as<Windows::Foundation::IUnknown>());
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
            const wchar_t* const buffer = WINRT_WindowsGetStringRawBuffer(get_abi(value), &length);
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
        };
    };
}

WINRT_EXPORT namespace std::experimental
{
    template <typename TProgress, typename... Args>
    struct coroutine_traits<winrt::Windows::Foundation::IAsyncActionWithProgress<TProgress>, Args...>
    {
        struct promise_type final : winrt::impl::promise_base<promise_type, winrt::Windows::Foundation::IAsyncActionWithProgress<TProgress>,
            winrt::Windows::Foundation::AsyncActionWithProgressCompletedHandler<TProgress>, TProgress>
        {
            using AsyncStatus = winrt::Windows::Foundation::AsyncStatus;
            using ProgressHandler = winrt::Windows::Foundation::AsyncActionProgressHandler<TProgress>;

            void Progress(ProgressHandler const& handler)
            {
                winrt::slim_lock_guard const guard(this->m_lock);
                m_progress = winrt::impl::make_agile_delegate(handler);
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
            winrt::Windows::Foundation::AsyncOperationWithProgressCompletedHandler<TResult, TProgress>, TProgress>
        {
            using AsyncStatus = winrt::Windows::Foundation::AsyncStatus;
            using ProgressHandler = winrt::Windows::Foundation::AsyncOperationProgressHandler<TResult, TProgress>;

            void Progress(ProgressHandler const& handler)
            {
                winrt::slim_lock_guard const guard(this->m_lock);
                m_progress = winrt::impl::make_agile_delegate(handler);
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

            TResult m_result{ winrt::impl::empty_value<TResult>() };
            ProgressHandler m_progress;
        };
    };
}

WINRT_EXPORT namespace winrt::experimental::reflect
{
    template <typename T>
    struct base_type
    {
        using type = Windows::Foundation::IInspectable;
    };

    template <typename T>
    using base_type_t = typename base_type<T>::type;

    template <typename T>
    struct named_property {};

    template <typename T>
    struct properties
    {
        using type = impl::typelist<>;
    };

    template <typename T>
    using properties_t = typename properties<T>::type;

    template <typename T, typename Func>
    static constexpr inline auto for_each_property(Func&& func)
    {
        return impl::for_each<properties_t<T>>::apply(std::forward<Func>(func));
    }

    template <typename T, typename Func>
    static constexpr inline bool find_property_if(Func&& func)
    {
        return impl::find_if<properties_t<T>>::apply(std::forward<Func>(func));
    }

    template <typename MetaProperty>
    using property_name = typename MetaProperty::name;

    template <typename MetaProperty>
    inline constexpr std::wstring_view property_name_v = property_name<MetaProperty>::value;

    template <typename MetaProperty>
    using is_property_readable = typename MetaProperty::is_readable;

    template <typename MetaProperty>
    inline constexpr bool is_property_readable_v = is_property_readable<MetaProperty>::value;

    template <typename MetaProperty>
    using is_property_writable = typename MetaProperty::is_writable;

    template <typename MetaProperty>
    inline constexpr bool is_property_writable_v = is_property_writable<MetaProperty>::value;

    template <typename MetaProperty>
    using is_property_static = typename MetaProperty::is_static;

    template <typename MetaProperty>
    inline constexpr bool is_property_static_v = is_property_static<MetaProperty>::value;

    template <typename MetaProperty>
    struct property_value
    {
        using type = typename MetaProperty::property_type;
    };

    template <typename MetaProperty>
    using property_value_t = typename property_value<MetaProperty>::type;

    template <typename MetaProperty>
    struct property_target
    {
        using type = typename MetaProperty::target_type;
    };

    template <typename MetaProperty>
    using property_target_t = typename property_target<MetaProperty>::type;

    template <typename MetaProperty>
    using property_getter = typename MetaProperty::getter;

    template <typename MetaProperty>
    using property_setter = typename MetaProperty::setter;

    template <typename T>
    struct get_enumerator_names
    {
        static_assert(impl::has_category_v<T> && std::is_enum_v<T>, "T must be a WinRT enum type");
    };

    template <typename T>
    struct get_enumerator_values
    {
        static_assert(impl::has_category_v<T> && std::is_enum_v<T>, "T must be a WinRT enum type");
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
        static auto WINRT_CALL abi_val(void* object, wchar_t const * iid_str, int method)
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
                guid g;
                void* s;
                uint8_t v[512];
            }
            value{};
            guid iid{};
            if (WINRT_IIDFromString(iid_str, &iid) == error_ok)
            {
                IInspectable* pinsp;
                typedef int32_t(WINRT_CALL IInspectable::* PropertyAccessor)(void*);
                if (((IUnknown*)object)->QueryInterface(iid, reinterpret_cast<void**>(&pinsp)) == error_ok)
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

        static auto WINRT_CALL get_val(winrt::Windows::Foundation::IInspectable* object, wchar_t const * iid_str, int method)
        {
            return abi_val(static_cast<IUnknown*>(get_abi(*object)), iid_str, method);
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

#define CPPWINRT_VERSION "1.0.190111.3"

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
