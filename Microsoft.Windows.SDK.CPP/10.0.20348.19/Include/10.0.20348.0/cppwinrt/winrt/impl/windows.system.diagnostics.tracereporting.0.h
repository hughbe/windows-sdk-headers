// C++/WinRT v2.0.200609.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_System_Diagnostics_TraceReporting_0_H
#define WINRT_Windows_System_Diagnostics_TraceReporting_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    template <typename K, typename V> struct __declspec(empty_bases) IMapView;
    template <typename T> struct __declspec(empty_bases) IVectorView;
}
WINRT_EXPORT namespace winrt::Windows::System::Diagnostics::TraceReporting
{
    enum class PlatformDiagnosticActionState : int32_t
    {
        Success = 0,
        FreeNetworkNotAvailable = 1,
        ACPowerNotAvailable = 2,
    };
    enum class PlatformDiagnosticEscalationType : int32_t
    {
        OnCompletion = 0,
        OnFailure = 1,
    };
    enum class PlatformDiagnosticEventBufferLatencies : uint32_t
    {
        Normal = 0x1,
        CostDeferred = 0x2,
        Realtime = 0x4,
    };
    enum class PlatformDiagnosticTracePriority : int32_t
    {
        Normal = 0,
        UserElevated = 1,
    };
    enum class PlatformDiagnosticTraceSlotState : int32_t
    {
        NotRunning = 0,
        Running = 1,
        Throttled = 2,
    };
    enum class PlatformDiagnosticTraceSlotType : int32_t
    {
        Alternative = 0,
        AlwaysOn = 1,
        Mini = 2,
    };
    struct IPlatformDiagnosticActionsStatics;
    struct IPlatformDiagnosticTraceInfo;
    struct IPlatformDiagnosticTraceRuntimeInfo;
    struct PlatformDiagnosticActions;
    struct PlatformDiagnosticTraceInfo;
    struct PlatformDiagnosticTraceRuntimeInfo;
}
namespace winrt::impl
{
    template <> struct category<Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticActionsStatics>{ using type = interface_category; };
    template <> struct category<Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticTraceInfo>{ using type = interface_category; };
    template <> struct category<Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticTraceRuntimeInfo>{ using type = interface_category; };
    template <> struct category<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticActions>{ using type = class_category; };
    template <> struct category<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceInfo>{ using type = class_category; };
    template <> struct category<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceRuntimeInfo>{ using type = class_category; };
    template <> struct category<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticActionState>{ using type = enum_category; };
    template <> struct category<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticEscalationType>{ using type = enum_category; };
    template <> struct category<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticEventBufferLatencies>{ using type = enum_category; };
    template <> struct category<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTracePriority>{ using type = enum_category; };
    template <> struct category<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceSlotState>{ using type = enum_category; };
    template <> struct category<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceSlotType>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticActions> = L"Windows.System.Diagnostics.TraceReporting.PlatformDiagnosticActions";
    template <> inline constexpr auto& name_v<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceInfo> = L"Windows.System.Diagnostics.TraceReporting.PlatformDiagnosticTraceInfo";
    template <> inline constexpr auto& name_v<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceRuntimeInfo> = L"Windows.System.Diagnostics.TraceReporting.PlatformDiagnosticTraceRuntimeInfo";
    template <> inline constexpr auto& name_v<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticActionState> = L"Windows.System.Diagnostics.TraceReporting.PlatformDiagnosticActionState";
    template <> inline constexpr auto& name_v<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticEscalationType> = L"Windows.System.Diagnostics.TraceReporting.PlatformDiagnosticEscalationType";
    template <> inline constexpr auto& name_v<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticEventBufferLatencies> = L"Windows.System.Diagnostics.TraceReporting.PlatformDiagnosticEventBufferLatencies";
    template <> inline constexpr auto& name_v<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTracePriority> = L"Windows.System.Diagnostics.TraceReporting.PlatformDiagnosticTracePriority";
    template <> inline constexpr auto& name_v<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceSlotState> = L"Windows.System.Diagnostics.TraceReporting.PlatformDiagnosticTraceSlotState";
    template <> inline constexpr auto& name_v<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceSlotType> = L"Windows.System.Diagnostics.TraceReporting.PlatformDiagnosticTraceSlotType";
    template <> inline constexpr auto& name_v<Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticActionsStatics> = L"Windows.System.Diagnostics.TraceReporting.IPlatformDiagnosticActionsStatics";
    template <> inline constexpr auto& name_v<Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticTraceInfo> = L"Windows.System.Diagnostics.TraceReporting.IPlatformDiagnosticTraceInfo";
    template <> inline constexpr auto& name_v<Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticTraceRuntimeInfo> = L"Windows.System.Diagnostics.TraceReporting.IPlatformDiagnosticTraceRuntimeInfo";
    template <> inline constexpr guid guid_v<Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticActionsStatics>{ 0xC1145CFA,0x9292,0x4267,{ 0x89,0x0A,0x9E,0xA3,0xED,0x07,0x23,0x12 } }; // C1145CFA-9292-4267-890A-9EA3ED072312
    template <> inline constexpr guid guid_v<Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticTraceInfo>{ 0xF870ED97,0xD597,0x4BF7,{ 0x88,0xDC,0xCF,0x5C,0x7D,0xC2,0xA1,0xD2 } }; // F870ED97-D597-4BF7-88DC-CF5C7DC2A1D2
    template <> inline constexpr guid guid_v<Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticTraceRuntimeInfo>{ 0x3D4D5E2D,0x01D8,0x4768,{ 0x85,0x54,0x1E,0xB1,0xCA,0x61,0x09,0x86 } }; // 3D4D5E2D-01D8-4768-8554-1EB1CA610986
    template <> struct default_interface<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceInfo>{ using type = Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticTraceInfo; };
    template <> struct default_interface<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceRuntimeInfo>{ using type = Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticTraceRuntimeInfo; };
    template <> struct abi<Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticActionsStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall IsScenarioEnabled(winrt::guid, bool*) noexcept = 0;
            virtual int32_t __stdcall TryEscalateScenario(winrt::guid, int32_t, void*, bool, bool, void*, bool*) noexcept = 0;
            virtual int32_t __stdcall DownloadLatestSettingsForNamespace(void*, void*, bool, bool, bool, int32_t*) noexcept = 0;
            virtual int32_t __stdcall GetActiveScenarioList(void**) noexcept = 0;
            virtual int32_t __stdcall ForceUpload(uint32_t, bool, bool, int32_t*) noexcept = 0;
            virtual int32_t __stdcall IsTraceRunning(int32_t, winrt::guid, uint64_t, int32_t*) noexcept = 0;
            virtual int32_t __stdcall GetActiveTraceRuntime(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetKnownTraceList(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticTraceInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ScenarioId(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_ProfileHash(uint64_t*) noexcept = 0;
            virtual int32_t __stdcall get_IsExclusive(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsAutoLogger(bool*) noexcept = 0;
            virtual int32_t __stdcall get_MaxTraceDurationFileTime(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_Priority(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticTraceRuntimeInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RuntimeFileTime(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_EtwRuntimeFileTime(int64_t*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_System_Diagnostics_TraceReporting_IPlatformDiagnosticActionsStatics
    {
        WINRT_IMPL_AUTO(bool) IsScenarioEnabled(winrt::guid const& scenarioId) const;
        WINRT_IMPL_AUTO(bool) TryEscalateScenario(winrt::guid const& scenarioId, Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticEscalationType const& escalationType, param::hstring const& outputDirectory, bool timestampOutputDirectory, bool forceEscalationUpload, param::map_view<hstring, hstring> const& triggers) const;
        WINRT_IMPL_AUTO(Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticActionState) DownloadLatestSettingsForNamespace(param::hstring const& partner, param::hstring const& feature, bool isScenarioNamespace, bool downloadOverCostedNetwork, bool downloadOverBattery) const;
        WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<winrt::guid>) GetActiveScenarioList() const;
        WINRT_IMPL_AUTO(Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticActionState) ForceUpload(Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticEventBufferLatencies const& latency, bool uploadOverCostedNetwork, bool uploadOverBattery) const;
        WINRT_IMPL_AUTO(Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceSlotState) IsTraceRunning(Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceSlotType const& slotType, winrt::guid const& scenarioId, uint64_t traceProfileHash) const;
        WINRT_IMPL_AUTO(Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceRuntimeInfo) GetActiveTraceRuntime(Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceSlotType const& slotType) const;
        WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceInfo>) GetKnownTraceList(Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceSlotType const& slotType) const;
    };
    template <> struct consume<Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticActionsStatics>
    {
        template <typename D> using type = consume_Windows_System_Diagnostics_TraceReporting_IPlatformDiagnosticActionsStatics<D>;
    };
    template <typename D>
    struct consume_Windows_System_Diagnostics_TraceReporting_IPlatformDiagnosticTraceInfo
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::guid) ScenarioId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint64_t) ProfileHash() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsExclusive() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsAutoLogger() const;
        [[nodiscard]] WINRT_IMPL_AUTO(int64_t) MaxTraceDurationFileTime() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTracePriority) Priority() const;
    };
    template <> struct consume<Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticTraceInfo>
    {
        template <typename D> using type = consume_Windows_System_Diagnostics_TraceReporting_IPlatformDiagnosticTraceInfo<D>;
    };
    template <typename D>
    struct consume_Windows_System_Diagnostics_TraceReporting_IPlatformDiagnosticTraceRuntimeInfo
    {
        [[nodiscard]] WINRT_IMPL_AUTO(int64_t) RuntimeFileTime() const;
        [[nodiscard]] WINRT_IMPL_AUTO(int64_t) EtwRuntimeFileTime() const;
    };
    template <> struct consume<Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticTraceRuntimeInfo>
    {
        template <typename D> using type = consume_Windows_System_Diagnostics_TraceReporting_IPlatformDiagnosticTraceRuntimeInfo<D>;
    };
}
#endif
