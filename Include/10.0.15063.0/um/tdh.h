/*++

Copyright (c) Microsoft Corporation

Module Name:

    Tdh.h

Abstract:

    ETW Event payload parsing API && ETW trace providers browsing API.


--*/

#ifndef __TDH_H__
#define __TDH_H__
#include <winapifamily.h>

#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)


#ifdef __cplusplus
extern "C" {
#endif

#include <wmistr.h>
#include <evntrace.h>
#include <evntcons.h>

#pragma warning(push)
#pragma warning (disable:4201)  // nameless struct/union.
#pragma warning (disable:4214)  // bit field types other than int

typedef _Return_type_success_(return == ERROR_SUCCESS) ULONG TDHSTATUS;
#define TDHAPI  TDHSTATUS __stdcall

typedef HANDLE TDH_HANDLE, *PTDH_HANDLE;

typedef struct _EVENT_MAP_ENTRY {
    ULONG OutputOffset;
    union {
        ULONG Value;        // For ULONG value (valuemap and bitmap).
        ULONG InputOffset;  // For String value (patternmap or valuemap in WBEM).
    };
} EVENT_MAP_ENTRY;
typedef EVENT_MAP_ENTRY *PEVENT_MAP_ENTRY;

typedef enum _MAP_FLAGS {
    EVENTMAP_INFO_FLAG_MANIFEST_VALUEMAP = 0x1,
    EVENTMAP_INFO_FLAG_MANIFEST_BITMAP = 0x2,
    EVENTMAP_INFO_FLAG_MANIFEST_PATTERNMAP = 0x4,
    EVENTMAP_INFO_FLAG_WBEM_VALUEMAP = 0x8,
    EVENTMAP_INFO_FLAG_WBEM_BITMAP = 0x10,
    EVENTMAP_INFO_FLAG_WBEM_FLAG = 0x20,
    EVENTMAP_INFO_FLAG_WBEM_NO_MAP = 0x40
} MAP_FLAGS;

typedef enum _MAP_VALUETYPE {
    EVENTMAP_ENTRY_VALUETYPE_ULONG,
    EVENTMAP_ENTRY_VALUETYPE_STRING
}  MAP_VALUETYPE;

typedef struct _EVENT_MAP_INFO {
    ULONG NameOffset;
    MAP_FLAGS Flag;
    ULONG EntryCount;
    union {
        MAP_VALUETYPE MapEntryValueType;
        ULONG FormatStringOffset;
    };
    _Field_size_(EntryCount) EVENT_MAP_ENTRY MapEntryArray[ANYSIZE_ARRAY];
} EVENT_MAP_INFO;
typedef EVENT_MAP_INFO *PEVENT_MAP_INFO;

/*
InType provides basic information about the raw encoding of the data in the
field of an ETW event. An event field's InType tells the event decoder how to
determine the size of the field. In the case that a field's OutType is
NULL/unspecified/unrecognized, the InType also provides a default OutType for
the data (an OutType refines how the data should be interpreted). For example,
InType = INT32 indicates that the field's data is 4 bytes in length. If the
field's OutType is NULL/unspecified/unrecognized, the InType of INT32 also
provides the default OutType, TDH_OUTTYPE_INT, indicating that the field's data
should be interpreted as a Win32 INT value.

Note that there are multiple ways for the size of a field to be determined.
- Some InTypes have a fixed size. For example, InType UINT16 is always 2 bytes.
  For these fields, the Flags and length properties of the EVENT_MAP_INFO
  structure can be ignored.
- Some InTypes support deriving the size from the data content. For example,
  the size of a COUNTEDSTRING field is determined by reading the first 2 bytes
  of the data, which contain the size of the remaining string. For these
  fields, the Flags and length properties of the EVENT_MAP_INFO structure
  must be ignored.
- Some InTypes use the Flags and length properties of the EVENT_PROPERTY_INFO
  structure associated with the field. Details on how to do this are provided
  for each type.

For ETW InType values, the corresponding default OutType and the list of
applicable OutTypes can be found in winmeta.xml. For legacy WBEM InType values
(i.e. values not defined in winmeta.xml), the details for each InType are
included below.
*/
enum _TDH_IN_TYPE {
    TDH_INTYPE_NULL, /* Invalid InType value. */
    TDH_INTYPE_UNICODESTRING, /*
        Field size depends on the Flags and length fields of the corresponding
        EVENT_PROPERTY_INFO structure (epi) as follows:
        - If ((epi.Flags & PropertyParamLength) != 0), the
          epi.lengthPropertyIndex field contains the index of the property that
          contains the number of WCHARs in the string.
        - Else if ((epi.Flags & PropertyLength) != 0 || epi.length != 0), the
          epi.length field contains number of WCHARs in the string.
        - Else the string is nul-terminated (terminated by (WCHAR)0).
        Note that some event providers do not correctly nul-terminate the last
        string field in the event. While this is technically invalid, event
        decoders may silently tolerate such behavior instead of rejecting the
        event as invalid. */
    TDH_INTYPE_ANSISTRING, /*
        Field size depends on the Flags and length fields of the corresponding
        EVENT_PROPERTY_INFO structure (epi) as follows:
        - If ((epi.Flags & PropertyParamLength) != 0), the
          epi.lengthPropertyIndex field contains the index of the property that
          contains the number of BYTEs in the string.
        - Else if ((epi.Flags & PropertyLength) != 0 || epi.length != 0), the
          epi.length field contains number of BYTEs in the string.
        - Else the string is nul-terminated (terminated by (CHAR)0).
        Note that some event providers do not correctly nul-terminate the last
        string field in the event. While this is technically invalid, event
        decoders may silently tolerate such behavior instead of rejecting the
        event as invalid. */
    TDH_INTYPE_INT8,    /* Field size is 1 byte. */
    TDH_INTYPE_UINT8,   /* Field size is 1 byte. */
    TDH_INTYPE_INT16,   /* Field size is 2 bytes. */
    TDH_INTYPE_UINT16,  /* Field size is 2 bytes. */
    TDH_INTYPE_INT32,   /* Field size is 4 bytes. */
    TDH_INTYPE_UINT32,  /* Field size is 4 bytes. */
    TDH_INTYPE_INT64,   /* Field size is 8 bytes. */
    TDH_INTYPE_UINT64,  /* Field size is 8 bytes. */
    TDH_INTYPE_FLOAT,   /* Field size is 4 bytes. */
    TDH_INTYPE_DOUBLE,  /* Field size is 8 bytes. */
    TDH_INTYPE_BOOLEAN, /* Field size is 4 bytes. */
    TDH_INTYPE_BINARY, /*
        Field size depends on the OutType, Flags, and length fields of the
        corresponding EVENT_PROPERTY_INFO structure (epi) as follows:
        - If ((epi.Flags & PropertyParamLength) != 0), the
          epi.lengthPropertyIndex field contains the index of the property that
          contains the number of BYTEs in the field.
        - Else if ((epi.Flags & PropertyLength) != 0 || epi.length != 0), the
          epi.length field contains number of BYTEs in the field.
        - Else if (epi.OutType == IPV6), the field size is 16 bytes.
        - Else the field is incorrectly encoded. */
    TDH_INTYPE_GUID, /* Field size is 16 bytes. */
    TDH_INTYPE_POINTER, /*
        Field size depends on the eventRecord.EventHeader.Flags value. If the
        EVENT_HEADER_FLAG_32_BIT_HEADER flag is set, the field size is 4 bytes.
        If the EVENT_HEADER_FLAG_64_BIT_HEADER flag is set, the field size is
        8 bytes. */
    TDH_INTYPE_FILETIME,   /* Field size is 8 bytes. */
    TDH_INTYPE_SYSTEMTIME, /* Field size is 16 bytes. */
    TDH_INTYPE_SID, /*
        Field size is determined by reading the first few bytes of the field
        value to determine the number of relative IDs. */
    TDH_INTYPE_HEXINT32, /* Field size is 4 bytes. */
    TDH_INTYPE_HEXINT64, /* Field size is 8 bytes. */

    // End of winmeta intypes.
    // Start of TDH intypes for WBEM.

    TDH_INTYPE_COUNTEDSTRING = 300, /*
        Field contains a little-endian 16-bit bytecount followed by a WCHAR
        (16-bit character) string. Default OutType is STRING. Other usable
        OutTypes include XML, JSON. Field size is determined by reading the
        first two bytes of the payload, which are then interpreted as a
        little-endian 16-bit integer which gives the number of additional bytes
        (not characters) in the field. */
    TDH_INTYPE_COUNTEDANSISTRING, /*
        Field contains a little-endian 16-bit bytecount followed by a CHAR
        (8-bit character) string. Default OutType is STRING. Other usable
        OutTypes include XML, JSON, UTF8. Field size is determined by reading
        the first two bytes of the payload, which are then interpreted as a
        little-endian 16-bit integer which gives the number of additional bytes
        (not characters) in the field. */
    TDH_INTYPE_REVERSEDCOUNTEDSTRING, /*
        Deprecated. Prefer TDH_INTYPE_COUNTEDSTRING.
        Field contains a big-endian 16-bit bytecount followed by a WCHAR
        (16-bit little-endian character) string. Default OutType is STRING.
        Other usable OutTypes include XML, JSON. Field size is determined by
        reading the first two bytes of the payload, which are then interpreted
        as a big-endian 16-bit integer which gives the number of additional
        bytes (not characters) in the field. */
    TDH_INTYPE_REVERSEDCOUNTEDANSISTRING, /*
        Deprecated. Prefer TDH_INTYPE_COUNTEDANSISTRING.
        Field contains a big-endian 16-bit bytecount followed by a CHAR (8-bit
        character) string. Default OutType is STRING. Other usable OutTypes
        include XML, JSON, UTF8. Field size is determined by reading the first
        two bytes of the payload, which are then interpreted as a big-endian
        16-bit integer which gives the number of additional bytes in the
        field. */
    TDH_INTYPE_NONNULLTERMINATEDSTRING, /*
        Deprecated. Prefer TDH_INTYPE_COUNTEDSTRING.
        Field contains a WCHAR (16-bit character) string. Default OutType is
        STRING. Other usable OutTypes include XML, JSON. Field size is the
        remaining bytes of data in the event. */
    TDH_INTYPE_NONNULLTERMINATEDANSISTRING, /*
        Deprecated. Prefer TDH_INTYPE_COUNTEDANSISTRING.
        Field contains a CHAR (8-bit character) string. Default OutType is
        STRING. Other usable OutTypes include XML, JSON, UTF8. Field size is
        the remaining bytes of data in the event. */
    TDH_INTYPE_UNICODECHAR, /*
        Deprecated. Prefer TDH_INTYPE_UINT16 with TDH_OUTTYPE_STRING.
        Field contains a WCHAR (16-bit character) value. Default OutType is
        STRING. Field size is 2 bytes. */
    TDH_INTYPE_ANSICHAR, /*
        Deprecated. Prefer TDH_INTYPE_UINT8 with TDH_OUTTYPE_STRING.
        Field contains a CHAR (8-bit character) value. Default OutType is
        STRING. Field size is 1 byte. */
    TDH_INTYPE_SIZET, /*
        Field contains a SIZE_T (UINT_PTR) value. Default OutType is HEXINT64.
        Field size depends on the eventRecord.EventHeader.Flags value. If the
        EVENT_HEADER_FLAG_32_BIT_HEADER flag is set, the field size is 4 bytes.
        If the EVENT_HEADER_FLAG_64_BIT_HEADER flag is set, the field size is
        8 bytes. */
    TDH_INTYPE_HEXDUMP, /*
        Deprecated. Prefer TDH_INTYPE_BINARY.
        Field contains binary data. Default OutType is HEXBINARY. Field size is
        determined by reading the first four bytes of the payload, which are
        then interpreted as a little-endian UINT32 which gives the number of
        additional bytes in the field. */
    TDH_INTYPE_WBEMSID /*
        Deprecated. Prefer TDH_INTYPE_SID.
        Field contains an SE_TOKEN_USER (security identifier) value. Default
        OutType is STRING (i.e. the SID will be converted to a string during
        decoding using ConvertSidToStringSid or equivalent). Field size is
        determined by reading the first few bytes of the field value to
        determine the number of relative IDs. Because the SE_TOKEN_USER
        structure includes pointers, decoding this structure requires accurate
        knowledge of the event provider's pointer size (i.e. from
        eventRecord.EventHeader.Flags). */
};

/*
OutType describes how to interpret a field's data. If a field's OutType is
not specified in the manifest, it defaults to TDH_OUTTYPE_NULL. If the field's
OutType is NULL, decoding should use the default OutType associated with the
field's InType.

Not all combinations of InType and OutType are valid, and event decoding tools
will only recognize a small set of InType+OutType combinations. If an
InType+OutType combination is not recognized by a decoder, the decoder should
use the default OutType associated with the field's InType (i.e. the decoder
should behave as if the OutType were NULL).
*/
enum _TDH_OUT_TYPE {
    TDH_OUTTYPE_NULL, /*
        Default OutType value. If a field's OutType is set to this value, the
        decoder should determine the default OutType corresponding to the
        field's InType and use that OutType when decoding the field. */
    TDH_OUTTYPE_STRING, /*
        Implied by the STRING, CHAR, and SID InType values. Applicable to the
        INT8, UINT8, UINT16 InType values. Specifies that the field should be
        decoded as text. Decoding depends on the InType. For INT8, UINT8, and
        ANSISTRING InTypes, the data is decoded using the ANSI code page of the
        event provider. For UINT16 and UNICODESTRING InTypes, the data is
        decoded as UTF-16LE. For SID InTypes, the data is decoded using
        ConvertSidToStringSid or equivalent. */
    TDH_OUTTYPE_DATETIME, /*
        Implied by the FILETIME and SYSTEMTIME InType values. Data is decoded
        as a date/time. FILETIME is decoded as a 64-bit integer representing
        the number of 100-nanosecond intervals since January 1, 1601.
        SYSTEMTIME is decoded as the Win32 SYSTEMTIME structure. In both cases,
        the time zone must be determined using other methods. (FILETIME is
        usually but not always UTC.) */
    TDH_OUTTYPE_BYTE, /*
        Implied by the INT8 InType value. Data is decoded as a signed integer. */
    TDH_OUTTYPE_UNSIGNEDBYTE, /*
        Implied by the UINT8 InType value. Data is decoded as an unsigned
        integer. */
    TDH_OUTTYPE_SHORT, /*
        Implied by the INT16 InType value. Data is decoded as a signed
        little-endian integer. */
    TDH_OUTTYPE_UNSIGNEDSHORT, /*
        Implied by the UINT16 InType value. Data is decoded as an unsigned
        little-endian integer. */
    TDH_OUTTYPE_INT, /*
        Implied by the INT32 InType value. Data is decoded as a signed
        little-endian integer. */
    TDH_OUTTYPE_UNSIGNEDINT, /*
        Implied by the UINT32 InType value. Data is decoded as an unsigned
        little-endian integer. */
    TDH_OUTTYPE_LONG, /*
        Implied by the INT64 InType value. Applicable to the INT32 InType value
        (i.e. to distinguish between the C data types "long int" and "int").
        Data is decoded as a signed little-endian integer. */
    TDH_OUTTYPE_UNSIGNEDLONG, /*
        Implied by the UINT64 InType value. Applicable to the UINT32 InType
        value (i.e. to distinguish between the C data types "long int" and
        "int"). Data is decoded as an unsigned little-endian integer. */
    TDH_OUTTYPE_FLOAT, /*
        Implied by the FLOAT InType value. Data is decoded as a
        single-precision floating-point number. */
    TDH_OUTTYPE_DOUBLE, /*
        Implied by the DOUBLE InType value. Data is decoded as a
        double-precision floating-point number. */
    TDH_OUTTYPE_BOOLEAN, /*
        Implied by the BOOL InType value. Applicable to the UINT8 InType value.
        Data is decoded as a Boolean (false if zero, true if non-zero). */
    TDH_OUTTYPE_GUID, /*
        Implied by the GUID InType value. Data is decoded as a GUID. */
    TDH_OUTTYPE_HEXBINARY, /*
        Not commonly used. Implied by the BINARY and HEXDUMP InType values. */
    TDH_OUTTYPE_HEXINT8, /*
        Specifies that the field should be formatted as a hexadecimal integer.
        Applicable to the UINT8 InType value. */
    TDH_OUTTYPE_HEXINT16, /*
        Specifies that the field should be formatted as a hexadecimal integer.
        Applicable to the UINT16 InType value. */
    TDH_OUTTYPE_HEXINT32, /*
        Not commonly used. Implied by the HEXINT32 InType value. Applicable to
        the UINT32 InType value. */
    TDH_OUTTYPE_HEXINT64, /*
        Not commonly used. Implied by the HEXINT64 InType value. Applicable to
        the UINT64 InType value. */
    TDH_OUTTYPE_PID, /*
        Specifies that the field is a process identifier. Applicable to the
        UINT32 InType value. */
    TDH_OUTTYPE_TID, /*
        Specifies that the field is a thread identifier. Applicable to the
        UINT32 InType value. */
    TDH_OUTTYPE_PORT, /*
        Specifies that the field is an Internet Protocol port number, specified
        in network byte order (big-endian). Applicable to the UINT16 InType
        value. */
    TDH_OUTTYPE_IPV4, /*
        Specifies that the field is an Internet Protocol V4 address. Applicable
        to the UINT32 InType value. */
    TDH_OUTTYPE_IPV6, /*
        Specifies that the field is an Internet Protocol V6 address. Applicable
        to the BINARY InType value. If the length of a field is unspecified in
        the EVENT_PROPERTY_INFO but the field's InType is BINARY and its
        OutType is IPV6, the field's length should be assumed to be 16 bytes. */
    TDH_OUTTYPE_SOCKETADDRESS, /*
        Specifies that the field is a SOCKADDR structure. Applicable to the
        BINARY InType value. Note that different address types have different
        sizes. */
    TDH_OUTTYPE_CIMDATETIME, /*
        Not commonly used. */
    TDH_OUTTYPE_ETWTIME, /*
        Not commonly used. Applicable to the UINT32 InType value. */
    TDH_OUTTYPE_XML, /*
        Specifies that the field should be treated as XML text. Applicable to
        the *STRING InType values. When this OutType is used, decoders should
        use standard XML decoding rules (i.e. assume a Unicode encoding unless
        the document specifies a different encoding in its encoding
        attribute). */
    TDH_OUTTYPE_ERRORCODE, /*
        Not commonly used. Specifies that the field is an error code of
        some type. Applicable to the UINT32 InType value. */
    TDH_OUTTYPE_WIN32ERROR, /*
        Specifies that the field is a Win32 error code. Applicable to the
        UINT32 and HEXINT32 InType values. */
    TDH_OUTTYPE_NTSTATUS, /*
        Specifies that the field is an NTSTATUS code. Applicable to the UINT32
        and HEXINT32 InType values. */
    TDH_OUTTYPE_HRESULT, /*
        Specifies that the field is an HRESULT error code. Applicable to the
        INT32 InType value. */
    TDH_OUTTYPE_CULTURE_INSENSITIVE_DATETIME, /*
        Specifies that a date/time value should be formatted in a
        locale-invariant format. Applicable to the FILETIME and SYSTEMTIME
        InType values. */
    TDH_OUTTYPE_JSON, /*
        Specifies that the field should be treated as JSON text. Applicable to
        the *STRING InType values. When this OutType is used with the ANSI
        string InType values, decoders should decode the data as UTF-8. */
    TDH_OUTTYPE_UTF8, /*
        Specifies that the field should be treated as UTF-8 text. Applicable to
        the *ANSISTRING InType values. */
    TDH_OUTTYPE_PKCS7_WITH_TYPE_INFO, /*
        Specifies that the field should be treated as a PKCS#7 message (e.g.
        encrypted and/or signed). Applicable to the BINARY InType value. One
        or more bytes of TraceLogging-compatible type information (providing
        the type of the inner content) may optionally be appended immediately
        after the PKCS#7 message. For example, the byte 0x01
        (TlgInUNICODESTRING = 0x01) might be appended to indicate that the
        inner content is to be interpreted as InType = UNICODESTRING; the bytes
        0x82 0x22 (TlgInANSISTRING + TlgInChain = 0x82, TlgOutJSON = 0x22)
        might be appended to indicate that the inner content is to be
        interpreted as InType = ANSISTRING, OutType = JSON. */

    // End of winmeta outtypes.
    // Start of TDH outtypes for WBEM.

    TDH_OUTTYPE_REDUCEDSTRING = 300, /*
        Not commonly used. */
    TDH_OUTTYPE_NOPRINT /*
        Not commonly used. Specifies that the field should not be shown in the
        output of the decoding tool. This might be applied to a Count or a
        Length field. Applicable to all InType values. Most decoders ignore
        this value. */
};

#define TDH_OUTYTPE_ERRORCODE TDH_OUTTYPE_ERRORCODE

typedef enum _PROPERTY_FLAGS
{
   PropertyStruct        = 0x1,      // Type is struct.
   PropertyParamLength   = 0x2,      // Length field is index of param with length.
   PropertyParamCount    = 0x4,      // Count file is index of param with count.
   PropertyWBEMXmlFragment = 0x8,    // WBEM extension flag for property.
   PropertyParamFixedLength = 0x10,  // Length of the parameter is fixed.
   PropertyParamFixedCount = 0x20,   // Count of the parameter is fixed.
   PropertyHasTags       = 0x40,     // The Tags field has been initialized.
   PropertyHasCustomSchema = 0x80,   // Type is described with a custom schema.
} PROPERTY_FLAGS;

typedef struct _EVENT_PROPERTY_INFO {
    PROPERTY_FLAGS Flags;
    ULONG NameOffset;
    union {
        struct _nonStructType {
            USHORT InType;
            USHORT OutType;
            ULONG MapNameOffset;
        } nonStructType;
        struct _structType {
            USHORT StructStartIndex;
            USHORT NumOfStructMembers;
            ULONG padding;
        } structType;
        struct _customSchemaType {
            USHORT padding2;
            USHORT OutType;
            ULONG CustomSchemaOffset;
        } customSchemaType;
    };
    union {
        USHORT count;
        USHORT countPropertyIndex;
    };
    union {
        USHORT length;
        USHORT lengthPropertyIndex;
    };
    union {
        ULONG Reserved;
        struct {
            ULONG Tags : 28;
        };
    };
} EVENT_PROPERTY_INFO;
typedef EVENT_PROPERTY_INFO *PEVENT_PROPERTY_INFO;

typedef enum _DECODING_SOURCE {
    DecodingSourceXMLFile,
    DecodingSourceWbem,
    DecodingSourceWPP,
    DecodingSourceTlg,
    DecodingSourceMax
} DECODING_SOURCE;

// Copy from Binres.h
typedef enum _TEMPLATE_FLAGS
{
    TEMPLATE_EVENT_DATA = 1, // Used when custom xml is not specified.
    TEMPLATE_USER_DATA = 2   // Used when custom xml is specified.
} TEMPLATE_FLAGS;

typedef struct _TRACE_EVENT_INFO {
    GUID ProviderGuid;
    GUID EventGuid;
    EVENT_DESCRIPTOR EventDescriptor;
    DECODING_SOURCE DecodingSource;
    ULONG ProviderNameOffset;
    ULONG LevelNameOffset;
    ULONG ChannelNameOffset;
    ULONG KeywordsNameOffset;
    ULONG TaskNameOffset;
    ULONG OpcodeNameOffset;
    ULONG EventMessageOffset;
    ULONG ProviderMessageOffset;
    ULONG BinaryXMLOffset;
    ULONG BinaryXMLSize;
    ULONG ActivityIDNameOffset;
    ULONG RelatedActivityIDNameOffset;
    ULONG PropertyCount;
    _Field_range_(0, PropertyCount) ULONG TopLevelPropertyCount;
    union {
        TEMPLATE_FLAGS Flags;
        struct {
            ULONG Reserved : 4; // TEMPLATE_FLAGS values
            ULONG Tags : 28;
        };
    };
    _Field_size_(PropertyCount) EVENT_PROPERTY_INFO EventPropertyInfoArray[ANYSIZE_ARRAY];
} TRACE_EVENT_INFO;
typedef TRACE_EVENT_INFO *PTRACE_EVENT_INFO;

typedef struct _PROPERTY_DATA_DESCRIPTOR {
    ULONGLONG PropertyName;                // Pointer to property name.
    ULONG ArrayIndex;                      // Array Index.
    ULONG Reserved;
} PROPERTY_DATA_DESCRIPTOR;
typedef PROPERTY_DATA_DESCRIPTOR *PPROPERTY_DATA_DESCRIPTOR;

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */
#pragma endregion

#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

//
// ETW Payload Filtering Tdh support
//

//
// Payload filtering definitions
//

//
// TDH_PAYLOADFIELD_OPERATORs are used to build Payload filters.
//
//    BETWEEN uses a closed interval: [LowerBound <= FieldValue <= UpperBound].
//    Floating-point comparisons are not supported.
//    String comparisons are case-sensitive.
//    Values are converted based on the manifest field type.
//

typedef enum _PAYLOAD_OPERATOR {

    //
    // For integers, comparison can be one of:
    //

    PAYLOADFIELD_EQ = 0,
    PAYLOADFIELD_NE = 1,
    PAYLOADFIELD_LE = 2,
    PAYLOADFIELD_GT = 3,
    PAYLOADFIELD_LT = 4,
    PAYLOADFIELD_GE = 5,
    PAYLOADFIELD_BETWEEN = 6,        // Two values: lower/upper bounds
    PAYLOADFIELD_NOTBETWEEN = 7,     // Two values: lower/upper bounds
    PAYLOADFIELD_MODULO = 8,         // For periodically sampling a field

    //
    // For strings:
    //

    PAYLOADFIELD_CONTAINS      = 20, // Substring identical to Value
    PAYLOADFIELD_DOESNTCONTAIN = 21, // No substring identical to Value

    //
    // For strings or other non-integer values
    //

    PAYLOADFIELD_IS    = 30,         // Field is identical to Value
    PAYLOADFIELD_ISNOT = 31,         // Field is NOT identical to Value
    PAYLOADFIELD_INVALID = 32
} PAYLOAD_OPERATOR;


typedef struct _PAYLOAD_FILTER_PREDICATE {
    LPWSTR FieldName;
    USHORT CompareOp;    // PAYLOAD_OPERATOR
    LPWSTR Value;        // One or two values (i.e., two for BETWEEN operations)
} PAYLOAD_FILTER_PREDICATE, *PPAYLOAD_FILTER_PREDICATE;

#define MAX_PAYLOAD_PREDICATES 8

#if (WINVER >= _WIN32_WINNT_WINBLUE)

TDHAPI
TdhCreatePayloadFilter(
     _In_ LPCGUID ProviderGuid,        
     _In_ PCEVENT_DESCRIPTOR EventDescriptor,
     _In_ BOOLEAN EventMatchANY,
     _In_ ULONG PayloadPredicateCount,
     _In_reads_(PayloadPredicateCount)
        PPAYLOAD_FILTER_PREDICATE PayloadPredicates,
     _Outptr_result_maybenull_ PVOID *PayloadFilter
    );

TDHAPI
TdhDeletePayloadFilter(
     _Inout_ PVOID *PayloadFilter
    );

TDHAPI
TdhAggregatePayloadFilters(
    _In_ ULONG PayloadFilterCount,
    _In_reads_(PayloadFilterCount) PVOID *PayloadFilterPtrs,
    _In_reads_opt_(PayloadFilterCount) PBOOLEAN EventMatchALLFlags,
    _Out_ PEVENT_FILTER_DESCRIPTOR EventFilterDescriptor
    );

TDHAPI
TdhCleanupPayloadEventFilterDescriptor(
    _Inout_ PEVENT_FILTER_DESCRIPTOR EventFilterDescriptor
    );

#endif // WINVER

//
// Provider-side filters.
//

typedef struct _PROVIDER_FILTER_INFO {
    UCHAR Id;
    UCHAR Version;
    ULONG MessageOffset;
    ULONG Reserved;
    ULONG PropertyCount;
    _Field_size_(PropertyCount) EVENT_PROPERTY_INFO EventPropertyInfoArray[ANYSIZE_ARRAY];
} PROVIDER_FILTER_INFO, *PPROVIDER_FILTER_INFO;

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion

#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

// Provider Enumeration.

typedef enum _EVENT_FIELD_TYPE {
    EventKeywordInformation = 0,
    EventLevelInformation,
    EventChannelInformation,
    EventTaskInformation,
    EventOpcodeInformation,
    EventInformationMax
} EVENT_FIELD_TYPE;

typedef struct _PROVIDER_FIELD_INFO {
    ULONG NameOffset;                  // English only.
    ULONG DescriptionOffset;           // Localizable String.
    ULONGLONG Value;
} PROVIDER_FIELD_INFO;
typedef PROVIDER_FIELD_INFO *PPROVIDER_FIELD_INFO;

typedef struct _PROVIDER_FIELD_INFOARRAY {
    ULONG NumberOfElements;
    EVENT_FIELD_TYPE FieldType;
    PROVIDER_FIELD_INFO FieldInfoArray[ANYSIZE_ARRAY];
} PROVIDER_FIELD_INFOARRAY;
typedef PROVIDER_FIELD_INFOARRAY *PPROVIDER_FIELD_INFOARRAY;

typedef struct _TRACE_PROVIDER_INFO {
    GUID ProviderGuid;
    ULONG SchemaSource;
    ULONG ProviderNameOffset;
} TRACE_PROVIDER_INFO;
typedef TRACE_PROVIDER_INFO *PTRACE_PROVIDER_INFO;

typedef struct _PROVIDER_ENUMERATION_INFO {
    ULONG NumberOfProviders;
    ULONG Reserved;
    _Field_size_(NumberOfProviders) TRACE_PROVIDER_INFO TraceProviderInfoArray[ANYSIZE_ARRAY];
} PROVIDER_ENUMERATION_INFO;
typedef PROVIDER_ENUMERATION_INFO *PPROVIDER_ENUMERATION_INFO;

typedef struct _PROVIDER_EVENT_INFO {
    ULONG NumberOfEvents;
    ULONG Reserved;
    _Field_size_(NumberOfEvents) EVENT_DESCRIPTOR EventDescriptorsArray[ANYSIZE_ARRAY];
} PROVIDER_EVENT_INFO;
typedef PROVIDER_EVENT_INFO *PPROVIDER_EVENT_INFO;

typedef enum _TDH_CONTEXT_TYPE {
    TDH_CONTEXT_WPP_TMFFILE = 0,
    TDH_CONTEXT_WPP_TMFSEARCHPATH,
    TDH_CONTEXT_WPP_GMT,
    TDH_CONTEXT_POINTERSIZE,
    TDH_CONTEXT_PDB_PATH,
    TDH_CONTEXT_MAXIMUM
} TDH_CONTEXT_TYPE;

typedef struct _TDH_CONTEXT {
    ULONGLONG ParameterValue;    // Pointer to Data.
    TDH_CONTEXT_TYPE ParameterType;
    ULONG ParameterSize;
} TDH_CONTEXT;
typedef TDH_CONTEXT *PTDH_CONTEXT;

TDHAPI
TdhGetEventInformation(
    _In_ PEVENT_RECORD Event,
    _In_ ULONG TdhContextCount,
    _In_reads_opt_(TdhContextCount) PTDH_CONTEXT TdhContext,
    _Out_writes_bytes_opt_(*BufferSize) PTRACE_EVENT_INFO Buffer,
    _Inout_ PULONG BufferSize
    );

TDHAPI
TdhGetEventMapInformation(
    _In_ PEVENT_RECORD pEvent,
    _In_ PWSTR pMapName,
    _Out_writes_bytes_opt_(*pBufferSize) PEVENT_MAP_INFO pBuffer,
    _Inout_ ULONG *pBufferSize
    );

TDHAPI
TdhGetPropertySize(
    _In_ PEVENT_RECORD pEvent,
    _In_ ULONG TdhContextCount,
    _In_reads_opt_(TdhContextCount) PTDH_CONTEXT pTdhContext,
    _In_ ULONG PropertyDataCount,
    _In_reads_(PropertyDataCount) PPROPERTY_DATA_DESCRIPTOR pPropertyData,
    _Out_ ULONG *pPropertySize
    );

TDHAPI
TdhGetProperty(
    _In_ PEVENT_RECORD pEvent,
    _In_ ULONG TdhContextCount,
    _In_reads_opt_(TdhContextCount) PTDH_CONTEXT pTdhContext,
    _In_ ULONG PropertyDataCount,
    _In_reads_(PropertyDataCount) PPROPERTY_DATA_DESCRIPTOR pPropertyData,
    _In_ ULONG BufferSize,
    _Out_writes_bytes_(BufferSize) PBYTE pBuffer
    );

TDHAPI
TdhEnumerateProviders(
    _Out_writes_bytes_opt_(*pBufferSize) PPROVIDER_ENUMERATION_INFO pBuffer,
    _Inout_ ULONG *pBufferSize
    );

TDHAPI
TdhQueryProviderFieldInformation(
    _In_ LPGUID pGuid,
    _In_ ULONGLONG EventFieldValue,
    _In_ EVENT_FIELD_TYPE EventFieldType,
    _Out_writes_bytes_opt_(*pBufferSize) PPROVIDER_FIELD_INFOARRAY pBuffer,
    _Inout_ ULONG *pBufferSize
    );

TDHAPI
TdhEnumerateProviderFieldInformation(
    _In_ LPGUID pGuid,
    _In_ EVENT_FIELD_TYPE EventFieldType,
    _Out_writes_bytes_opt_(*pBufferSize) PPROVIDER_FIELD_INFOARRAY pBuffer,
    _Inout_ ULONG *pBufferSize
    );

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */
#pragma endregion

#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#if (WINVER >= _WIN32_WINNT_WIN7)
TDHAPI
TdhEnumerateProviderFilters(
    _In_ LPGUID Guid,
    _In_ ULONG TdhContextCount,
    _In_reads_opt_(TdhContextCount) PTDH_CONTEXT TdhContext,
    _Out_ ULONG *FilterCount,
    _Out_writes_bytes_opt_(*BufferSize) PPROVIDER_FILTER_INFO *Buffer,
    _Inout_ ULONG *BufferSize
    );
#endif

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

#if (WINVER >= _WIN32_WINNT_WIN7)
TDHAPI
TdhLoadManifest(
    _In_ PWSTR Manifest
    );
#endif

#if (WINVER >= _WIN32_WINNT_WIN7)
TDHAPI
TdhUnloadManifest(
    _In_ PWSTR Manifest
    );
#endif

#if (WINVER >= _WIN32_WINNT_WIN7)
TDHAPI
TdhFormatProperty(
    _In_ PTRACE_EVENT_INFO EventInfo,
    _In_opt_ PEVENT_MAP_INFO MapInfo,
    _In_ ULONG PointerSize,
    _In_ USHORT PropertyInType,
    _In_ USHORT PropertyOutType,
    _In_ USHORT PropertyLength,
    _In_ USHORT UserDataLength,
    _In_reads_bytes_(UserDataLength) PBYTE UserData,
    _Inout_ PULONG BufferSize,
    _Out_writes_bytes_opt_(*BufferSize) PWCHAR Buffer,
    _Out_ PUSHORT UserDataConsumed
    );
#endif

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */
#pragma endregion

#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#if (WINVER >= _WIN32_WINNT_WIN8)
TDHAPI
TdhOpenDecodingHandle(
    _Out_ PTDH_HANDLE Handle
    );
#endif

#if (WINVER >= _WIN32_WINNT_WIN8)
TDHAPI
TdhSetDecodingParameter(
    _In_ TDH_HANDLE Handle,
    _In_ PTDH_CONTEXT TdhContext
    );
#endif

#if (WINVER >= _WIN32_WINNT_WIN8)
TDHAPI
TdhGetDecodingParameter(
    _In_ TDH_HANDLE Handle,
    _Inout_ PTDH_CONTEXT TdhContext
    );
#endif

#if (WINVER >= _WIN32_WINNT_WIN8)
TDHAPI
TdhGetWppProperty(
    _In_ TDH_HANDLE Handle,
    _In_ PEVENT_RECORD EventRecord,
    _In_ PWSTR PropertyName,
    _Inout_ PULONG BufferSize,
    _Out_writes_bytes_(*BufferSize) PBYTE Buffer
    );
#endif

#if (WINVER >= _WIN32_WINNT_WIN8)
TDHAPI
TdhGetWppMessage(
    _In_ TDH_HANDLE Handle,
    _In_ PEVENT_RECORD EventRecord,
    _Inout_ PULONG BufferSize,
    _Out_writes_bytes_(*BufferSize) PBYTE Buffer
    );
#endif

#if (WINVER >= _WIN32_WINNT_WIN8)
TDHAPI
TdhCloseDecodingHandle(
    _In_ TDH_HANDLE Handle
    );
#endif

#if (WINVER >= _WIN32_WINNT_WIN8)
TDHAPI
TdhLoadManifestFromBinary(
    _In_ PWSTR BinaryPath
    );
#endif

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion

#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

#if (WINVER >= _WIN32_WINNT_WINBLUE)
TDHAPI
TdhEnumerateManifestProviderEvents (
    _In_ LPGUID ProviderGuid,        
    _Out_writes_bytes_opt_(*BufferSize) PPROVIDER_EVENT_INFO Buffer,
    _Inout_ ULONG *BufferSize  
    );
#endif

#if (WINVER >= _WIN32_WINNT_WINBLUE)
TDHAPI
TdhGetManifestEventInformation (
    _In_ LPGUID ProviderGuid,        
    _In_ PEVENT_DESCRIPTOR EventDescriptor,
    _Out_writes_bytes_opt_(*BufferSize) PTRACE_EVENT_INFO Buffer,
    _Inout_  ULONG *BufferSize
    );
#endif

//
//  Helper macros to access strings from variable length Tdh structures.
//

FORCEINLINE
PWSTR
EMI_MAP_NAME(
    _In_ PEVENT_MAP_INFO MapInfo
    )
{
    return (MapInfo->NameOffset == 0) ?
           NULL :
           (PWSTR)((PBYTE)MapInfo + MapInfo->NameOffset);
}

FORCEINLINE
PWSTR
EMI_MAP_FORMAT(
    _In_ PEVENT_MAP_INFO MapInfo
    )
{
    if ((MapInfo->Flag & EVENTMAP_INFO_FLAG_MANIFEST_PATTERNMAP) &&
        (MapInfo->FormatStringOffset)) {
        return (PWSTR)((PBYTE)MapInfo + MapInfo->FormatStringOffset);
    } else {
        return NULL;
    }
}

FORCEINLINE
PWSTR
EMI_MAP_OUTPUT(
    _In_ PEVENT_MAP_INFO MapInfo,
    _In_ PEVENT_MAP_ENTRY Map
    )
{
    return (Map->OutputOffset == 0) ?
           NULL :
           (PWSTR)((PBYTE)MapInfo + Map->OutputOffset);
}

FORCEINLINE
PWSTR
EMI_MAP_INPUT(
    _In_ PEVENT_MAP_INFO MapInfo,
    _In_ PEVENT_MAP_ENTRY Map
    )
{
    if ((MapInfo->Flag & EVENTMAP_INFO_FLAG_MANIFEST_PATTERNMAP) &&
        (Map->InputOffset != 0)) {
        return (PWSTR)((PBYTE)MapInfo + Map->InputOffset);
    } else {
        return NULL;
    }
}

FORCEINLINE
PWSTR
TEI_MAP_NAME(
    _In_ PTRACE_EVENT_INFO EventInfo,
    _In_ PEVENT_PROPERTY_INFO Property
    )
{
    return (Property->nonStructType.MapNameOffset == 0) ?
           NULL :
           (PWSTR)((PBYTE)EventInfo + Property->nonStructType.MapNameOffset);
}

FORCEINLINE
PWSTR
TEI_PROPERTY_NAME(
    _In_ PTRACE_EVENT_INFO EventInfo,
    _In_ PEVENT_PROPERTY_INFO Property
    )
{
    return (Property->NameOffset == 0) ?
           NULL :
           (PWSTR)((PBYTE)EventInfo + Property->NameOffset);
}

FORCEINLINE
PWSTR
TEI_PROVIDER_NAME(
    _In_ PTRACE_EVENT_INFO EventInfo
    )
{
    return (EventInfo->ProviderNameOffset == 0) ?
           NULL :
           (PWSTR)((PBYTE)EventInfo + EventInfo->ProviderNameOffset);
}

FORCEINLINE
PWSTR
TEI_LEVEL_NAME(
    _In_ PTRACE_EVENT_INFO EventInfo
    )
{
    return (EventInfo->LevelNameOffset == 0) ?
           NULL :
           (PWSTR)((PBYTE)EventInfo + EventInfo->LevelNameOffset);
}

FORCEINLINE
PWSTR
TEI_CHANNEL_NAME(
    _In_ PTRACE_EVENT_INFO EventInfo
    )
{
    return (EventInfo->ChannelNameOffset == 0) ?
           NULL :
           (PWSTR)((PBYTE)EventInfo + EventInfo->ChannelNameOffset);
}

FORCEINLINE
PWSTR
TEI_KEYWORDS_NAME(
    _In_ PTRACE_EVENT_INFO EventInfo
    )
{
    return (EventInfo->KeywordsNameOffset == 0) ?
           NULL :
           (PWSTR)((PBYTE)EventInfo + EventInfo->KeywordsNameOffset);
}

FORCEINLINE
PWSTR
TEI_TASK_NAME(
    _In_ PTRACE_EVENT_INFO EventInfo
    )
{
    return (EventInfo->TaskNameOffset == 0) ?
           NULL :
           (PWSTR)((PBYTE)EventInfo + EventInfo->TaskNameOffset);
}

FORCEINLINE
PWSTR
TEI_OPCODE_NAME(
    _In_ PTRACE_EVENT_INFO EventInfo
    )
{
    return (EventInfo->OpcodeNameOffset == 0) ?
           NULL :
           (PWSTR)((PBYTE)EventInfo + EventInfo->OpcodeNameOffset);
}

FORCEINLINE
PWSTR
TEI_EVENT_MESSAGE(
    _In_ PTRACE_EVENT_INFO EventInfo
    )
{
    return (EventInfo->EventMessageOffset == 0) ?
           NULL :
           (PWSTR)((PBYTE)EventInfo + EventInfo->EventMessageOffset);
}

FORCEINLINE
PWSTR
TEI_PROVIDER_MESSAGE(
    _In_ PTRACE_EVENT_INFO EventInfo
    )
{
    return (EventInfo->ProviderMessageOffset == 0) ?
           NULL :
           (PWSTR)((PBYTE)EventInfo + EventInfo->ProviderMessageOffset);
}

FORCEINLINE
PWSTR
TEI_ACTIVITYID_NAME(
    _In_ PTRACE_EVENT_INFO EventInfo
    )
{
    return (EventInfo->ActivityIDNameOffset == 0) ?
           NULL :
           (PWSTR)((PBYTE)EventInfo + EventInfo->ActivityIDNameOffset);
}

FORCEINLINE
PWSTR
TEI_RELATEDACTIVITYID_NAME(
    _In_ PTRACE_EVENT_INFO EventInfo
    )
{
    return (EventInfo->RelatedActivityIDNameOffset == 0) ?
           NULL :
           (PWSTR)((PBYTE)EventInfo + EventInfo->RelatedActivityIDNameOffset);
}

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */
#pragma endregion

#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#if (WINVER >= _WIN32_WINNT_WIN7)
FORCEINLINE
PWSTR
PFI_FILTER_MESSAGE(
    _In_ PPROVIDER_FILTER_INFO FilterInfo
    )
{
    return (FilterInfo->MessageOffset == 0) ?
           NULL :
           (PWSTR)((PBYTE)FilterInfo + FilterInfo->MessageOffset);
}
#endif

#if (WINVER >= _WIN32_WINNT_WIN7)
FORCEINLINE
PWSTR
PFI_PROPERTY_NAME(
    _In_ PPROVIDER_FILTER_INFO FilterInfo,
    _In_ PEVENT_PROPERTY_INFO Property
    )
{
    return (Property->NameOffset == 0) ?
           NULL :
           (PWSTR)((PBYTE)FilterInfo + Property->NameOffset);
}
#endif

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion

#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

FORCEINLINE
PWSTR
PFI_FIELD_NAME(
    _In_ PPROVIDER_FIELD_INFOARRAY FieldInfoArray,
    _In_ PPROVIDER_FIELD_INFO FieldInfo
    )
{
    return (FieldInfo->NameOffset == 0) ?
           NULL :
           (PWSTR)((PBYTE)FieldInfoArray + FieldInfo->NameOffset);
}

FORCEINLINE
PWSTR
PFI_FIELD_MESSAGE(
    _In_ PPROVIDER_FIELD_INFOARRAY FieldInfoArray,
    _In_ PPROVIDER_FIELD_INFO FieldInfo
    )
{
    return (FieldInfo->DescriptionOffset == 0) ?
           NULL :
           (PWSTR)((PBYTE)FieldInfoArray + FieldInfo->DescriptionOffset);
}

FORCEINLINE
PWSTR
PEI_PROVIDER_NAME(
    _In_ PPROVIDER_ENUMERATION_INFO ProviderEnum,
    _In_ PTRACE_PROVIDER_INFO ProviderInfo
    )
{
    return (ProviderInfo->ProviderNameOffset == 0) ?
           NULL :
           (PWSTR)((PBYTE)ProviderEnum + ProviderInfo->ProviderNameOffset);
}

#pragma warning(pop)

#ifdef __cplusplus
}
#endif


#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */
#pragma endregion

#endif  // __TDH_H__
