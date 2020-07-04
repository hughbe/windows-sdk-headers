/*++

Copyright (C) Microsoft Corporation.  All rights reserved.

Module Name:

PointOfServiceDriverInterface.h

Abstract:

Defines the data structures used in communication between device service/driver and runtime.
Also includes the set of supported IOCTLs.

Environment:

User and Kernel Mode.

--*/

#ifndef POINT_OF_SERVICE_DRIVER_INTERFACE_H
#define POINT_OF_SERVICE_DRIVER_INTERFACE_H

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#include <pshpack8.h>

#if(NTDDI_VERSION >= NTDDI_WINTHRESHOLD)

#define POINT_OF_SERVICE_COMMON_IOCTL_BASE    0x000
#define POINT_OF_SERVICE_VENDOR_IOCTL_BASE    0x800

//----------------------------------------------------------------------------------------------
// Driver Versioning information
//----------------------------------------------------------------------------------------------

// Current:
//    1.9 = PosPrinter text output attributes and vertical feeds added
//    1.8 = LineDisplay basic capabilities and text-only support added
//    1.7 = BarcodeScannerVideoDeviceId added for camera barcode scanner support
//    1.6 = IOCTL_POINT_OF_SERVICE_PRINTER_WAIT_FOR_JOB_COMPLETE added for pos printer job
//    1.5 = IOCTL_POINT_OF_SERVICE_CONNECT_REMOTE_DEVICE added for remote pos
//          peripheral support.
//    1.4 = CashDrawer support added
//    1.3 = PointOfService Printer support added
//    1.2 = Barcode Scanner Software trigger support added
//    (unification)
//    0.1, 1.1 = Initial Version (Barcode Scanner, MSR) respectively

#define MAKE_POS_VERSION(major, minor)  (((major) << 16) | (minor))
#define POS_DRIVER_MAJOR_VERSION        1
#define POS_DRIVER_MINOR_VERSION        9
#define POS_DRIVER_VERSION              MAKE_POS_VERSION(POS_DRIVER_MAJOR_VERSION, POS_DRIVER_MINOR_VERSION)

// v1.2 -- First version with software trigger support
#define POS_VERSION_1_2                 MAKE_POS_VERSION(1, 2)
#define POS_VERSION_1_3                 MAKE_POS_VERSION(1, 3)
#define POS_VERSION_1_4                 MAKE_POS_VERSION(1, 4)
#define POS_VERSION_1_5                 MAKE_POS_VERSION(1, 5)
#define POS_VERSION_1_6                 MAKE_POS_VERSION(1, 6)
#define POS_VERSION_1_7                 MAKE_POS_VERSION(1, 7)
#define POS_VERSION_1_8                 MAKE_POS_VERSION(1, 8)
#define POS_VERSION_1_9                 MAKE_POS_VERSION(1, 9)

//----------------------------------------------------------------------------------------------
//                                  Event Data
//----------------------------------------------------------------------------------------------

// Do not recycle values because that breaks backwards compatibility.
// The next available value is _Max.  Keep _Max up to date.

typedef enum _PosEventType
{
    InvalidEvent = 0,
    _MinEventType = 1,

    //------------------------------------
    // Common event types
    //------------------------------------

    // ReleaseDeviceRequested : PosEventDataHeader
    ReleaseDeviceRequested = 1,

    // StatusUpdated : PosStatusUpdatedEventData
    StatusUpdated = 2,

    //------------------------------------
    // BarcodeScanner event types
    //------------------------------------

    // BarcodeScannerTriggerPressed : PosEventDataHeader
    BarcodeScannerTriggerPressed = 3,

    // BarcodeScannerTriggerReleased : PosEventDataHeader
    BarcodeScannerTriggerReleased = 4,

    // BarcodeScannerDataReceived : PosBarcodeScannerDataReceivedEventData
    BarcodeScannerDataReceived = 5,

    // BarcodeScannerErrorOccurred : PosBarcodeScannerErrorOccurredEventData
    BarcodeScannerErrorOccurred = 6,

    // BarcodeScannerImagePreviewReceived : PosBarcodeScannerImagePreviewEventData
    BarcodeScannerImagePreviewReceived = 7,

    //------------------------------------
    // MagneticStripeReader event types
    //------------------------------------

    // MagneticStripeReaderDataReceived : ???
    MagneticStripeReaderDataReceived = 8,

    // MagneticStripeReaderErrorOccurred : PosMagneticStripeReaderErrorOccurredEventData
    MagneticStripeReaderErrorOccurred = 9,


    _Max = 14,
} PosEventType;

//------------------------------------
// Common Event Data formats
//------------------------------------

// Header
typedef struct _PosEventDataHeader
{
    // Event enumeration value
    PosEventType EventType;

    // Size of buffer required to read entire event (including header)
    UINT32 DataLength;
} PosEventDataHeader;

// PosStatusUpdatedEventData
// Status should be of a device-specific enum type
// Extended status should be OEM/driver specific and really only useful to the vendor for diagnostics.
typedef struct _PosStatusUpdatedEventData
{
    PosEventDataHeader Header;
    UINT32 Status;
    UINT32 ExtendedStatus;
} PosStatusUpdatedEventData;

//-------------------------------------------
// Common Device Statistics Structure Formats
//-------------------------------------------

#define STATISTICS_STRING_SIZE          128
#define STATISTICS_STRING_BYTE_LENGTH   (STATISTICS_STRING_SIZE * sizeof(wchar_t))


// Generic profile string value type
//   Actual unicode data follows header.
typedef struct _PosStringType
{
    // DataLengthInBytes refers to the size of the string following this header. Do NOT include the size of this header
    // when calculating and initializing DataLengthInBytes
    UINT32 DataLengthInBytes;
} PosStringType;


typedef struct _PosProfileType
{
    UINT32 BufferSize;
    UINT32 ProfileCount;
} PosProfileType;

// PosStatistiscHeader
// The structure is the header for incoming statistic
//      TotalStatisticsEntry : Total Statistic entries
//      DataLength           : Datalength of byte stream
//                             (sizeof(PosStatisticsHeader) + (TotalStatisticsEntry * sizeof(PosValueStatisticsEntry))

typedef struct _PosStatisticsHeader
{
    UINT32 EntryCount;
    PosDeviceInformation DeviceInformation;
    UINT32 DataLength;
}PosStatisticsHeader;

// PosValueStatisticEntry
// The structure holds the statistic entry value
//      EntryName           : Statistic name,  e.g., GoodScanCount, BadScanCount, etc.
//      StatisticValue      : Current statistic value

typedef struct _PosValueStatisticsEntry
{
    _Field_z_ wchar_t EntryName[STATISTICS_STRING_SIZE];
    volatile LONG  Value;
}PosValueStatisticsEntry;

//------------------------------------
// BarcodeScanner Event Data formats
//------------------------------------

// BarcodeScannerDataReceived
// Scan data should fill the ReadFile buffer in this order:
//    PosBarcodeScannerDataReceivedEventData structure (length = sizeof(PosBarcodeScannerDataReceivedEventData))
//    Scan Data (length = ScanDataLength)
//    Label Data (length = ScanDataLabelLength)
typedef struct _PosBarcodeScannerDataReceivedEventData
{
    PosEventDataHeader Header;
    UINT32 DataType;
    UINT32 ScanDataLength;
    UINT32 ScanDataLabelLength;
} PosBarcodeScannerDataReceivedEventData;

// Error occurred data should fill the ReadFile buffer in this order:
//    PosBarcodeScannerErrorOccurredData structure (length = sizeof(PosBarcodeScannerErrorOccurredData))
//    Error Message (length = MessageLength)
//    Scan Data (length = ScanDataLength)
//    Scan Data Label (length = ScanDataLabelLength)

typedef struct _PosBarcodeScannerErrorOccurredEventData
{
    PosEventDataHeader Header;
    LONG IsRetriable;
    DriverUnifiedPosErrorSeverity Severity;
    UINT32 VendorErrorCode;
    DriverUnifiedPosErrorReason Reason;
    UINT32 ExtendedReason;
    UINT32 MessageLength;
    PosBarcodeScannerDataReceivedEventData PartialData;
} PosBarcodeScannerErrorOccurredEventData;

// PosDeviceInformation
// The structure holds the device information value required by UPOS
//      All entries are as define in UPOS standard.
typedef struct _PosBarcodeScanDataTypeData
{
    UINT32 dataLengthInBytes;
    UINT32 scanDataTypes_0;
} PosBarcodeScanDataTypeData;


// Image preview data should fill the ReadFile buffer in this order:
//    PosBarcodeScannerImagePreviewData structure (length = sizeof(PosBarcodeScannerImagePreviewData))
//    Preview image data (length = DataLength)
// Since there's no additional data, just typedef the header.
typedef struct _PosEventDataHeader PosBarcodeScannerImagePreviewEventData;


//----------------------------------------------------------------------------------------------
//                                  Device Controls
//----------------------------------------------------------------------------------------------

// Do not recycle values because that breaks backwards compatibility.
// The next available value is _MaxDeviceControlType.  Keep _MaxDeviceControlType up to date.

typedef enum _PosDeviceControlType
{
    _MinDeviceControlType = 0,
    Invalid = 0,

    //------------------------------------
    // Common controls
    //------------------------------------

    // GetProperty
    //    Input:  PosPropertyId
    //    Output: Variable Type Value (Refer to PosPropertyId below)
    GetProperty = 1,

    // SetProperty
    //    Input:  PosPropertyId + Variable Type Value (Refer to PosPropertyId below)
    //    Output: None
    SetProperty = 2,

    // ClaimDevice
    //    Input:  None
    //    Output: BOOL (success = TRUE)
    ClaimDevice = 3,

    // ReleaseDevice
    //    Input:  None
    //    Output: None
    ReleaseDevice = 4,

    // RetainDevice
    //    Input:  None
    //    Output: None
    RetainDevice = 5,

    // RetrieveStatistics
    //    Input:  None
    //    Output: PosStatisticsHeader
    RetrieveStatistics = 6,

    // ResetStatistics
    //    Input:  PosStringType (could be multiple PosStringType strings)
    //    Output: None
    ResetStatistics = 7,

    // UpdateStatistics
    //    Input:  PosStatisticsHeader
    //            PosValueStatisticsEntry (statistics data buffer per API spec)
    //    Output: None
    UpdateStatistics = 8,

    // CheckHealth
    //    Input:  DriverUnifiedPosHealthCheckLevel
    //    Output: PosStringType
    CheckHealth = 9,

    // GetDeviceBasics
    //  Input:  UINT32
    //    Output: PosDeviceBasicsType
    GetDeviceBasics = 10,

    //------------------------------------
    // Scanner controls
    //------------------------------------
    BarcodeScannerInjectEvent = 11,

    //------------------------------------
    // MSR controls
    //------------------------------------

    // MsrRetrieveDeviceAuthentication
    //    Input:  length, BYTE[length]
    //    Output: BYTE[length]
    MsrRetrieveDeviceAuthentication = 12,

    // MsrAuthenticateDevice
    //    Input:  length, BYTE[length]
    //    Output: BYTE[length]
    MsrAuthenticateDevice = 13,

    // MsrDeAuthenticateDevice
    //    Input:  length, BYTE[length]
    //    Output: BYTE[length]
    MsrDeAuthenticateDevice = 14,

    // MsrUpdateKey
    //    Input:  string, string
    //    Output: None
    MsrUpdateKey = 15,

    // Added in POS Driver Version 1.2

    // Start Barcode Scanner
    StartBarcodeScannerSoftwareTrigger = 16,

    // Stop Barcode Scanner
    StopBarcodeScannerSoftwareTrigger = 17,


    //------------------------------------
    // Scanner controls
    //------------------------------------

    //   Input: BarcodeScannerSymbology
    //   Output: BarcodeSymbologyAttributesData
    BarcodeScannerGetSymbologyAttributes = 80,

    //   Input: BarcodeSymbologyAttributesData
    //   Output: None
    BarcodeScannerSetSymbologyAttributes = 81,


    // Update the following value when new device controls show up.
    _MaxDeviceControlType = 97,

} PosDeviceControlType;

typedef struct _PosDeviceBasicsType
{
    UINT32 Version;                    // (Major << 16) | (Minor)
    PosDeviceType DeviceType;        // Barcode Scanner, MSR, etc
    UINT32 RecommendedBufferSize;    // Recommended by the driver
} PosDeviceBasicsType;


//----------------------------------------------------------------------------------------------
//                                  Device Properties
//----------------------------------------------------------------------------------------------

// GetProperty I/O:
//   Input args:    just the PosPropertyId identifying the property to fetch.
//   Output args:   just the property value (specific structs as applicable, BOOL for bool, PosStringType for string).
// SetProperty I/O:
//   Input args:    PosPropertyId followed by the property value (specific structs as applicable, BOOL for bool, PosStringType for string).
//   Output args:   None


// Do not recycle values because that breaks backwards compatibility.
// The next available value is 20.  Keep this comment up to date.

typedef enum _PosPropertyId
{
    //------------------------------------
    // Common properties
    //------------------------------------

    // IsEnabled : BOOL (read/write)
    // An enabled device is expected to be powered on and fully functional.
    // In a disabled state, the device is not expected to generate input and can be powered down.
    //
    // GetProperty I/O
    //   Input args    : PosPropertyId : IsEnabled
    //   Output args   : BOOL : Current boolean value of IsEnabled
    //
    // SetProperty I/O
    //   Input args    : <PosPropertyId : IsEnabled>
    //                   <BOOL : Boolean value to update IsEnabled state>
    //   Output args   : None
    //
    IsEnabled = 1,

    // IsDisabledOnDataReceived : BOOL (read/write)
    // Indicates whether the scanner should automatically disable itself after each scan
    // event. This provides an opportunity for the hardware to enter an idle power
    // saving mode as frequently as possible.
    //
    // GetProperty I/O
    //   Input args    : PosPropertyId : IsDisabledOnDataReceived
    //   Output args   : BOOL: Current boolean value of IsDisabledOnDataReceived
    //
    // SetProperty I/O
    //   Input args    : PosPropertyId : IsDisabledOnDataReceived
    //                   BOOL : Boolean value to update IsDisabledOnDataReceived state
    //   Output args   : None
    //
    IsDisabledOnDataReceived = 4,

    // PowerState: UINT32 (readonly)
    // Reports the current power state of the device.
    //
    // GetProperty I/O
    //   Input args    : PosPropertyId : PowerState
    //   Output args   : UINT32: Current UINT32 value of PowerState
    //
    PowerState = 352,

    //------------------------------------
    // BarcodeScanner properties
    //------------------------------------

    // BarcodeScannerIsDecodeDataEnabled : BOOL (read/write)
    // When TRUE, the driver must return decoded bar code data in the form of
    // ScanDataLabel when raising a data received event in addition to ScanData.
    // Decoded barcode data typically only contains data from the scanner with
    // header information, scanner generated symbol character and length identification removed.
    //
    // GetProperty I/O
    //   Input args    : PosPropertyId : BarcodeScannerIsDecodeDataEnabled
    //   Output args   : BOOL: Current boolean value of BarcodeScannerIsDecodeDataEnabled
    //
    // SetProperty I/O
    //   Input args    : PosPropertyId : BarcodeScannerIsDecodeDataEnabled
    //                   BOOL : Boolean value to update BarcodeScannerIsDecodeDataEnabled state
    //   Output args   : None
    //
    BarcodeScannerIsDecodeDataEnabled = 5,

    // BarcodeScannerCapabilities : PosBarcodeScannerCapabilitiesType (readonly)
    // Returns the barcode scanner capability structure.
    //
    // For example, a barcode scanner may support imaging and
    // standard power reporting but not statistics updating and reporting.
    //
    //  PosBarcodeScannerCapabilitiesType DeviceCapability =
    //  {
    //      Standard;   // DriverUnifiedPosPowerReportingType PowerReportingType
    //      0;          // LONG IsStatisticsReportingSupported
    //      0;          // LONG IsStatisticsUpdatingSupported
    //      1;          // LONG IsImagePreviewSupported
    //  };
    //
    // GetProperty I/O
    //   Input args    : PosPropertyId : BarcodeScannerCapabilities
    //   Output args   : PosBarcodeScannerCapabilities Structure : Structure filled with device capability
    //
    // SetProperty I/O
    //   Input args    : None
    //   Output args   : None
    //
    BarcodeScannerCapabilities = 6,

    // BarcodeScannerSupportedSymbologies : UINT32 + UINT32[] (readonly)
    // Returns an array representing the complete list of symbologies that the
    // barcode scanner is capable of reading.
    //
    // GetProperty I/O
    //   Input args    : PosPropertyId : BarcodeScannerSupportedSymbologies
    //   Output args   : UINT32 : The number of bytes required for the array of symbologies, including this UINT32
    //                 : UINT32 [] : Array of DWORD symbologies. Refer to BarcodeSymbology enumeration
    //                                (PointOfServiceCommonTypes.h) for symbology definition.
    //
    // SetProperty I/O
    //   Input args    : None
    //   Output args   : None
    //
    BarcodeScannerSupportedSymbologies = 7,

    // BarcodeScannerActiveSymbologies : UINT32 + UINT32[] (writeonly)
    // The symbologies that the barcode scanner is actively handling.
    //
    // GetProperty I/O
    //   Input args    : None
    //   Output args   : None
    //
    // SetProperty I/O
    //   Input args    : PosPropertyId : BarcodeScannerActiveSymbologies
    //   Output args   : UINT32 : The number of bytes required for the array of symbologies, including this UINT32
    //                 : UINT32 [] : Array of DWORD symbologies. Refer to BarcodeSymbology enumeration
    //                               (PointOfServiceCommonTypes.h) for symbology definition.
    //
    BarcodeScannerActiveSymbologies = 8,

    // BarcodeScannerSupportedProfiles : PosStringType[] (readonly)
    // Returns the list of supported driver defined device configuration profiles.
    //
    // GetProperty I/O
    //   Input args    : PosPropertyId : BarcodeScannerSupportedProfiles
    //   Output args   : PosProfileType : A PosProfileType that contains the total size and count of strings
    //                   PosStringTypes[] : An array of PosStringTypes containing list of supported profiles
    //
    // SetProperty I/O
    //   Input args    : None
    //   Output args   : None
    //
    BarcodeScannerSupportedProfiles = 9,

    // BarcodeScannerActiveProfile : PosStringType (writeonly)
    // Sets the active device configuration profile.Configure the driver using one of the driver
    // or manufacture defined profiles in the list returned by the BarcodeScannerSupportedProfiles
    // property. For example, you may have one profile for warehouse staff and another profile
    // for the sales dept. Each profile is expected to configure the device based on the
    // driver/manufacturer definition
    //
    // GetProperty I/O
    //   Input args    : None
    //   Output args   : None
    //
    // SetProperty I/O
    //   Input args    : PosPropertyId : BarcodeScannerActiveProfile
    //                   PosStringType : Profile requested by current client to be set active.
    //   Output args   : None
    //
    BarcodeScannerActiveProfile = 10,

    //------------------------------------
    // MagneticStripeReader properties
    //------------------------------------

    // MagneticStripeReaderIsDecodeDataEnabled : BOOL (read/write)
    MagneticStripeReaderIsDecodeDataEnabled = 11,

    // MagneticStripeReaderCapabilities : PosMagneticStripeReaderCapabilitiesType (readonly)
    MagneticStripeReaderCapabilities = 12,

    // MagneticStripeReaderSupportedCardTypes : MSR_SUPPORTED_CARD_TYPES (readonly)
    MagneticStripeReaderSupportedCardTypes = 13,

    // MagneticStripeReaderDeviceAuthenticationProtocol : MsrAuthenticationProtocolType (readonly)
    MagneticStripeReaderDeviceAuthenticationProtocol = 14,

    // MagneticStripeReaderErrorReportingType : MsrErrorReportingType (read/write)
    MagneticStripeReaderErrorReportingType = 15,

    // MagneticStripeReaderTracksToRead : MsrTrackIds (read/write)
    MagneticStripeReaderTracksToRead = 16,

    // MagneticStripeReaderIsTransmitSentinelsEnabled : BOOL (read/write)
    MagneticStripeReaderIsTransmitSentinelsEnabled = 17,

    // MagneticStripeReaderIsDeviceAuthenticated : BOOL (readonly)
    MagneticStripeReaderIsDeviceAuthenticated = 18,

    // MagneticStripeReaderDataEncryptionAlgorithm: MsrDataEncryption (read/write)
    MagneticStripeReaderDataEncryptionAlgorithm = 19,

    // BarcodeScannerVideoDeviceId : PosStringType (readonly)
    // Returns the video device id for the camera barcode scanner.
    //
    // GetProperty I/O
    //   Input args    : PosPropertyId : BarcodeScannerVideoDeviceId
    //   Output args   : PosStringType : The video device id associated with camera lens.
    //
    BarcodeScannerVideoDeviceId = 20,


} PosPropertyId;

typedef struct _PosBarcodeScannerCapabilitiesType
{
    DriverUnifiedPosPowerReportingType PowerReportingType;
    LONG IsStatisticsReportingSupported; // whether the Statistics IOCTLs/Properties are supported
    LONG IsStatisticsUpdatingSupported; // whether IOCTL_POINT_OF_SERVICE_UPDATE_STATISTICS is supported.
    LONG IsImagePreviewSupported; // whether image data can be obtained from the barcode scanner device.
} PosBarcodeScannerCapabilitiesType;

typedef struct _PosBarcodeScannerCapabilitiesType2
{
    PosBarcodeScannerCapabilitiesType PosBarcodeScannerCapabilities;
    LONG IsSoftwareTriggerSupported; // whether software trigger is supported by the barcode scanner device.
} PosBarcodeScannerCapabilitiesType2;

typedef struct _PosMagneticStripeReaderCapabilitiesType
{
    DriverUnifiedPosPowerReportingType PowerReportingType;
    LONG IsStatisticsReportingSupported;
    LONG IsStatisticsUpdatingSupported;
    UINT32 CardAuthenticationLength;
    UINT32 SupportedEncryptionAlgorithms;
    DriverMagneticStripeReaderAuthenticationLevel AuthenticationLevel;
    LONG IsIsoSupported;
    LONG IsJisOneSupported;
    LONG IsJisTwoSupported;
    LONG IsTrackDataMaskingSupported;
    LONG IsTransmitSentinelsSupported;
} PosMagneticStripeReaderCapabilitiesType;
//enumdefinitions
#pragma endregion

#pragma region ioctldefinitions

#define POS_EVENT_DEFAULT_SIZE              2048


// helpers
#define READABLE_POS_IOCTL(enumname) \
    CTL_CODE(FILE_DEVICE_POINT_OF_SERVICE, POINT_OF_SERVICE_COMMON_IOCTL_BASE + ((UINT32)enumname), METHOD_BUFFERED, FILE_READ_ACCESS)

#define POS_IOCTL(enumname) \
    CTL_CODE(FILE_DEVICE_POINT_OF_SERVICE, POINT_OF_SERVICE_COMMON_IOCTL_BASE + ((UINT32)enumname), METHOD_BUFFERED, FILE_WRITE_ACCESS)


#define MIN_POINT_OF_SERVICE_IOCTL_READ READABLE_POS_IOCTL(_MinDeviceControlType)
#define MAX_POINT_OF_SERVICE_IOCTL_READ READABLE_POS_IOCTL(_MaxDeviceControlType)
#define MIN_POINT_OF_SERVICE_IOCTL_WRITE POS_IOCTL(_MinDeviceControlType)
#define MAX_POINT_OF_SERVICE_IOCTL_WRITE POS_IOCTL(_MaxDeviceControlType)

#define IS_POINT_OF_SERVICE_IOCTL(x)  \
    (((x) >= MIN_POINT_OF_SERVICE_IOCTL_READ && (x) <= MAX_POINT_OF_SERVICE_IOCTL_READ) || ((x) >= MIN_POINT_OF_SERVICE_IOCTL_WRITE && (x) <= MAX_POINT_OF_SERVICE_IOCTL_WRITE))

// A more generic, future proof version of IS_POINT_OF_SERVICE_IOCTL
#define IS_POINT_OF_SERVICE_DEVICE_TYPE(x) (DEVICE_TYPE_FROM_CTL_CODE(x) == FILE_DEVICE_POINT_OF_SERVICE)

// Device IOCTLs

#define IOCTL_POINT_OF_SERVICE_GET_PROPERTY \
    READABLE_POS_IOCTL(GetProperty)

#define IOCTL_POINT_OF_SERVICE_SET_PROPERTY \
    POS_IOCTL(SetProperty)

#define IOCTL_POINT_OF_SERVICE_CLAIM_DEVICE \
    POS_IOCTL(ClaimDevice)

#define IOCTL_POINT_OF_SERVICE_RELEASE_DEVICE \
    POS_IOCTL(ReleaseDevice)

#define IOCTL_POINT_OF_SERVICE_RETAIN_DEVICE \
    POS_IOCTL(RetainDevice)


#define IOCTL_POINT_OF_SERVICE_RETRIEVE_STATISTICS \
    READABLE_POS_IOCTL(RetrieveStatistics)

#define IOCTL_POINT_OF_SERVICE_RESET_STATISTICS \
    POS_IOCTL(ResetStatistics)

#define IOCTL_POINT_OF_SERVICE_UPDATE_STATISTICS \
    POS_IOCTL(UpdateStatistics)

#define IOCTL_POINT_OF_SERVICE_CHECK_HEALTH \
    POS_IOCTL(CheckHealth)

#define IOCTL_POINT_OF_SERVICE_GET_DEVICE_BASICS \
    READABLE_POS_IOCTL(GetDeviceBasics)

#define IOCTL_POINT_OF_SERVICE_MOCK_DEVICE_INJECT_EVENT \
    POS_IOCTL(BarcodeScannerInjectEvent)

#define IOCTL_POINT_OF_SERVICE_MSR_RETRIEVE_DEVICE_AUTHENTICATION \
    POS_IOCTL(MsrRetrieveDeviceAuthentication)

#define IOCTL_POINT_OF_SERVICE_MSR_AUTHENTICATE_DEVICE \
    POS_IOCTL(MsrAuthenticateDevice)

#define IOCTL_POINT_OF_SERVICE_MSR_DEAUTHENTICATE_DEVICE \
    POS_IOCTL(MsrDeAuthenticateDevice)

#define IOCTL_POINT_OF_SERVICE_MSR_UPDATE_KEY \
    POS_IOCTL(MsrUpdateKey)

#define IOCTL_POINT_OF_SERVICE_START_BARCODE_SCANNER_TRIGGER \
    POS_IOCTL(StartBarcodeScannerSoftwareTrigger)

#define IOCTL_POINT_OF_SERVICE_STOP_BARCODE_SCANNER_TRIGGER \
    POS_IOCTL(StopBarcodeScannerSoftwareTrigger)


#define IOCTL_POINT_OF_SERVICE_BARCODE_SCANNER_GET_SYMBOLOGY_ATTRIBUTES \
    READABLE_POS_IOCTL(BarcodeScannerGetSymbologyAttributes)

#define IOCTL_POINT_OF_SERVICE_BARCODE_SCANNER_SET_SYMBOLOGY_ATTRIBUTES \
    POS_IOCTL(BarcodeScannerSetSymbologyAttributes)

//----------------------------------------------------------------------------------------------
//                                  Device Interface IDs
//----------------------------------------------------------------------------------------------

DEFINE_GUID(GUID_DEVINTERFACE_POS_SCANNER,
    0xC243FFBD, 0x3AFC, 0x45E9, 0xB3, 0xD3, 0x2B, 0xA1, 0x8B, 0xC7, 0xEB, 0xC5);
/* Identifies the device as a Scanner. */

DEFINE_GUID(GUID_DEVINTERFACE_POS_MSR,
    0x2A9FE532, 0x0CDC, 0x44F9, 0x98, 0x27, 0x76, 0x19, 0x2F, 0x2C, 0xA2, 0xFB);
/* Identifies the device as an MSR. */

// {C7BC9B22-21F0-4F0D-9BB6-66C229B8CD33}
DEFINE_GUID(GUID_DEVINTERFACE_POS_PRINTER,
    0xC7BC9B22, 0x21F0, 0x4F0D, 0x9B, 0xB6, 0x66, 0xC2, 0x29, 0xB8, 0xCD, 0x33);
/* Identifies the device as a Printer. */

// {772E18F2-8925-4229-A5AC-6453CB482FDA}
DEFINE_GUID(GUID_DEVINTERFACE_POS_CASHDRAWER,
    0x772e18f2, 0x8925, 0x4229, 0xa5, 0xac, 0x64, 0x53, 0xcb, 0x48, 0x2f, 0xda);
/* Identifies the device as a Cash Drawer */

// {4FC9541C-0FE6-4480-A4F6-9495A0D17CD2}
DEFINE_GUID(GUID_DEVINTERFACE_POS_LINEDISPLAY,
    0x4fc9541c, 0xfe6, 0x4480, 0xa4, 0xf6, 0x94, 0x95, 0xa0, 0xd1, 0x7c, 0xd2);
/* Identifies the device as a Line Display */

//ioctldefinitions
#pragma endregion

//
// Data format related constants
//
#define MSR_TRACK_SIZE                              112
#define MSR_CARD_AUTHENTICATION_DATA_SIZE           128 // based on magtek + POS.Net
#define MSR_ADDITIONAL_SECURITY_INFORMATION_SIZE    10  // based on magtek + POS.Net
#define MSR_PROPERTY_NAME_LENGTH                    32
#define MSR_PROPERTY_VALUE_LENGTH                   32
#define MSR_KEY_SERIAL_NUMBER_SIZE                  10
#define MSR_CHALLENGE_SIZE                          8
#define MSR_SESSION_ID_SIZE                         8
#define MSR_KEY_SIZE                                128
#define MSR_KEY_NAME_SIZE                           128
#define MSR_ERROR_MAX_MESSAGE_LENGTH                128
#define MSR_CAP_CARD_AUTHENTICATION_MAX_LENGTH      128
#define MSR_CARD_TYPE_MAX_COUNT                     10
#define MSR_READER_SERIAL_NUMBER_SIZE               10

typedef enum _MsrCardType
{
    MsrCardType_Unknown,
    MsrCardType_Bank,
    MsrCardType_Aamva,
    MsrCardType_ExtendedBase,
} MsrCardType;

typedef enum _MsrDataEncryption
{
    MsrDataEncryption_None,
    MsrDataEncryption_3DEA_DUKPT,
    MsrDataEncryption_AES,
    MsrDataEncryption_ExtendedBase  // Values 0x01000000 and above are reserved for additional encryption algorithms supported by the service
} MsrDataEncryption;

typedef enum _MsrAuthenticationProtocol
{
    MsrAuthenticationProtocolType_None = 0,
    MsrAuthenticationProtocolType_ChallengeResponse,
} MsrAuthenticationProtocolType;

typedef enum _MsrTrackIds
{
    MsrTrackIds_None = 0x0,
    MsrTrackIds_Track1 = 0x1,
    MsrTrackIds_Track2 = 0x2,
    MsrTrackIds_Track3 = 0x4,
    MsrTrackIds_Track4 = 0x8
} MsrTrackIds;

typedef enum _MsrErrorReportingType
{
    MsrErrorReportingType_CardLevel = 0,
    MsrErrorReportingType_TrackLevel
} MsrErrorReportingType;

typedef enum _MsrTrackErrorType
{
    MsrTrackErrorType_Unknown = -1,
    MsrTrackErrorType_None = 0,
    MsrTrackErrorType_StartSentinelError = 1,
    MsrTrackErrorType_EndSentinelError = 2,
    MsrTrackErrorType_ParityError = 3,
    MsrTrackErrorType_LrcError = 4
} MsrTrackErrorType;

typedef enum _MsrStatusUpdateType
{
    // Power state reporting: Online
    // Valid if PowerReportingType is Standard or Advanced
    MsrStatusUpdateType_Online = 0,

    // Power state reporting: Powered off or detached from the terminal
    // Valid if PowerReportingType is Advanced
    MsrStatusUpdateType_Off,

    // Power state reporting: Powered on, but not ready or unable to respond to requests
    // Valid if PowerReportingType is Advanced
    MsrStatusUpdateType_Offline,

    // Power state reporting: Either Off or Offline
    // Valid if PowerReportingType is Standard
    MsrStatusUpdateType_OffOrOffline,

    // Authentication state reporting: device was unauthenticated
    // Valid if device supported authentication
    MsrStatusUpdateType_Unauthenticated,

    // Authentication state reporting: device was authenticated
    // Valid if device supported authentication
    MsrStatusUpdateType_Authenticated,

    // OEM status
    MsrStatusUpdateType_Extended
} MsrStatusUpdateType;

typedef enum _MsrStatisticsEntryType
{
    MsrStatisticsEntryType_Invalid = -1,

    // Number of hours the device was powered on
    MsrStatisticsEntryType_HoursPoweredCount,

    // Number of communication errors
    MsrStatisticsEntryType_CommunicationErrorCount,

    // Number of successful reads
    MsrStatisticsEntryType_GoodReadCount,

    // Number of failed reads
    MsrStatisticsEntryType_FailedReadCount,

    // Number of unreadable cards
    MsrStatisticsEntryType_UnreadableCardCount,

    // Number of successful writes - should never be used
    MsrStatisticsEntryType_GoodWriteCount,

    // Number of failed writes - should never be used
    MsrStatisticsEntryType_FailedWriteCount,

    // Number of error with missing start sentinel on track 1 (possible empty track)
    MsrStatisticsEntryType_MissingStartSentinelTrack1Count,

    // Number of Parity or LRC errors on track 1
    MsrStatisticsEntryType_ParityLRCErrorTrack1Count,

    // Number of error with missing start sentinel on track 2 (possible empty track)
    MsrStatisticsEntryType_MissingStartSentinelTrack2Count,

    // Number of Parity or LRC errors on track 2
    MsrStatisticsEntryType_ParityLRCErrorTrack2Count,

    // Number of error with missing start sentinel on track 3 (possible empty track)
    MsrStatisticsEntryType_MissingStartSentinelTrack3Count,

    // Number of Parity or LRC errors on track 3
    MsrStatisticsEntryType_ParityLRCErrorTrack3Count,

    // Number of error with missing start sentinel on track 4 (possible empty track)
    MsrStatisticsEntryType_MissingStartSentinelTrack4Count,

    // Number of Parity or LRC errors on track 4
    MsrStatisticsEntryType_ParityLRCErrorTrack4Count,

    // Number of successful card authentication data reads
    MsrStatisticsEntryType_GoodCardAuthenticationDataCount,

    // Number of failed card authentication data reads
    MsrStatisticsEntryType_FailedCardAuthenticationDataCount,

    // Number of successful calls to retrieveDeviceAuthenticationData
    MsrStatisticsEntryType_ChallengeRequestCount,

    // Number of successful card authentication attempts
    MsrStatisticsEntryType_GoodDeviceAuthenticationCount,

    // Number of failed card authentication attempts
    MsrStatisticsEntryType_FailedDeviceAuthenticationCount,


    // Count of entry types
    MsrStatisticsEntryType_Count
} MstStatisticsEntryType;

#define MSR_STATISTICS_TYPE_(_name_) MsrStatisticsEntryType_##_name_

#pragma pack(push,1)

//// Card data format
typedef struct _MSR_DATA_RECEIVED {

    MsrCardType CardType;

    unsigned char Track1EncryptedDataLength;
    unsigned char Track2EncryptedDataLength;
    unsigned char Track3EncryptedDataLength;
    unsigned char Track4EncryptedDataLength;

    unsigned char Track1EncryptedData[MSR_TRACK_SIZE];
    unsigned char Track2EncryptedData[MSR_TRACK_SIZE];
    unsigned char Track3EncryptedData[MSR_TRACK_SIZE];
    unsigned char Track4EncryptedData[MSR_TRACK_SIZE];

    unsigned char Track1MaskedDataLength;
    unsigned char Track2MaskedDataLength;
    unsigned char Track3MaskedDataLength;
    unsigned char Track4MaskedDataLength;

    unsigned char Track1MaskedData[MSR_TRACK_SIZE];
    unsigned char Track2MaskedData[MSR_TRACK_SIZE];
    unsigned char Track3MaskedData[MSR_TRACK_SIZE];
    unsigned char Track4MaskedData[MSR_TRACK_SIZE];

    unsigned char Track1DiscretionaryDataLength;
    unsigned char Track2DiscretionaryDataLength;

    unsigned char Track1DiscretionaryData[MSR_TRACK_SIZE];
    unsigned char Track2DiscretionaryData[MSR_TRACK_SIZE];

    unsigned char CardAuthenicationDataLength;                                  // Length of data after encryption, may include padding.
    unsigned char CardAuthenticationDataAbsoluteLength;                         // Length of data before encryption, may be needed to strip padding on decryption.
    unsigned char CardAuthenicationData[MSR_CARD_AUTHENTICATION_DATA_SIZE];

    unsigned char AdditionalSecurityInformationLength;
    unsigned char AdditionalSecurityInformation[MSR_ADDITIONAL_SECURITY_INFORMATION_SIZE];
} MSR_DATA_RECEIVED, *PMSR_DATA_RECEIVED;

//// MagneticStripeReaderSupportedCardTypes
typedef struct _MSR_SUPPORTED_CARD_TYPES {
    unsigned char Count;
    unsigned int CardTypes[MSR_CARD_TYPE_MAX_COUNT];
} MSR_SUPPORTED_CARD_TYPES, *PMSR_SUPPORTED_CARD_TYPES;

//// MsrRetrieveDeviceAuthentication
typedef struct _MSR_RETRIEVE_DEVICE_AUTHENTICATION_DATA {
    unsigned char KeySerialNumber[MSR_KEY_SERIAL_NUMBER_SIZE];
    unsigned char Challenge1[MSR_CHALLENGE_SIZE];
    unsigned char Challenge2[MSR_CHALLENGE_SIZE];
} MSR_RETRIEVE_DEVICE_AUTHENTICATION_DATA, *PMSR_RETRIEVE_DEVICE_AUTHENTICATION_DATA;

//// MsrAuthenticateDevice
typedef struct _MSR_AUTHENTICATE_DEVICE {
    unsigned char Size;  // If the optional SessionId is present this will include the size of SessionId[]
    unsigned char Challenge1[MSR_CHALLENGE_SIZE];
    unsigned char SessionId[MSR_SESSION_ID_SIZE];
} MSR_AUTHENTICATE_DEVICE, *PMSR_AUTHENTICATE_DEVICE;

//// MsrDeAuthenticateDevice
typedef struct _MSR_DEAUTHENTICATE_DEVICE {
    unsigned char Challenge2[MSR_CHALLENGE_SIZE];
} MSR_DEAUTHENTICATE_DEVICE, *PMSR_DEAUTHENTICATE_DEVICE;

//// MsrUpdateKey
typedef struct _MSR_UPDATE_KEY{
    unsigned char KeyLength;
    unsigned char KeyNameLength;
    unsigned char Key[MSR_KEY_SIZE];
    unsigned char KeyName[MSR_KEY_NAME_SIZE];
} MSR_UPDATE_KEY, *PMSR_UPDATE_KEY;

//// Error event format
typedef struct _MSR_ERROR_EVENT
{
    PosEventDataHeader Header;

    MsrTrackErrorType Track1Status;
    MsrTrackErrorType Track2Status;
    MsrTrackErrorType Track3Status;
    MsrTrackErrorType Track4Status;

    DriverUnifiedPosErrorSeverity Severity;
    DriverUnifiedPosErrorReason Reason;
    UINT32 ExtendedReason;

    MSR_DATA_RECEIVED CardData;

    wchar_t Message[MSR_ERROR_MAX_MESSAGE_LENGTH];

} MSR_ERROR_EVENT, *PMSR_ERROR_EVENT;

#pragma pack(pop)


#endif // (NTDDI_VERSION >= NTDDI_WINTHRESHOLD)

#include <poppack.h>

#endif // POINT_OF_SERVICE_DRIVER_INTERFACE_H
