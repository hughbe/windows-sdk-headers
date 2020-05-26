/*++

   slerror.h --  error code definitions for the Software Licensing

   Copyright (c) Microsoft Corp.  All rights reserved.

--*/

#ifndef __SLERROR_H__
#define __SLERROR_H__

#if defined(SPP_CODE_PROJECT_MARKER) || defined(SPP_CODE_PROJECT_MARKER_SECURE)
#if !defined(SPP_PUBLISHING_INCLUDED_FROM_TRAMPOLINE) && !defined(SPP_PUBLISHING_USE_FORCE_OFFICIAL)
#error this header file cannot be included directly from SPP projects; use sppinc_* prefix instead.
#endif
#endif

#if defined (_MSC_VER) && (_MSC_VER >= 1020) && !defined(__midl)
#pragma once
#endif

#define SL_SERVER_ZONE     0xB000 // zone for SL server errors
#define SL_MSCH_ZONE       0xC000 // zone for SL clearing house errors
// 0XD000 is reserved for SP
#define SL_INTERNAL_ZONE   0xE000 // zone for SL service internal errors
#define SL_CLIENTAPI_ZONE  0xF000 // zone for SL client API errors

#define IS_SL_SERVER_ERROR(hr)     ((hr & 0xF000) == SL_SERVER_ZONE)
#define IS_SL_MSCH_ERROR(hr)       ((hr & 0xF000) == SL_MSCH_ZONE)
#define IS_SL_INTERNAL_ERROR(hr)   ((hr & 0xF000) == SL_INTERNAL_ZONE)
#define IS_SL_SERVICE_ERROR(hr)    ((hr & 0xF000) == SL_SERVICE_ZONE)
#define IS_SL_CLIENTAPI_ERROR(hr)  ((hr & 0xF000) == SL_CLIENTAPI_ZONE)

#define IS_SL_VGA_STRICT_ERROR(hr)  (((hr & 0xF000) == SL_MSCH_ZONE) && ((hr & 0xFFF) >= 0x401) && ((hr & 0xFFF) <= 0x496))
#define IS_SL_VGA_LITE_ERROR(hr)  (((hr & 0xF000) == SL_MSCH_ZONE) && ((hr & 0xFFF) >= 0x497) && ((hr & 0xFFF) <= 0x600))


//////////////////////////////////////////////////////////
//     SL Server errors
//     These error codes come from SL Server
//////////////////////////////////////////////////////////

//
//  Values are 32 bit values laid out as follows:
//
//   3 3 2 2 2 2 2 2 2 2 2 2 1 1 1 1 1 1 1 1 1 1
//   1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0
//  +---+-+-+-----------------------+-------------------------------+
//  |Sev|C|R|     Facility          |               Code            |
//  +---+-+-+-----------------------+-------------------------------+
//
//  where
//
//      Sev - is the severity code
//
//          00 - Success
//          01 - Informational
//          10 - Warning
//          11 - Error
//
//      C - is the Customer code flag
//
//      R - is a reserved bit
//
//      Facility - is the facility code
//
//      Code - is the facility's status code
//
//
// Define the facility codes
//
#define FACILITY_SL_ITF                  0x4


//
// Define the severity codes
//
#define STATUS_SEVERITY_WARNING          0x2
#define STATUS_SEVERITY_SUCCESS          0x0
#define STATUS_SEVERITY_INFORMATIONAL    0x1
#define STATUS_SEVERITY_ERROR            0x3


//
// MessageId: SL_E_SRV_INVALID_PUBLISH_LICENSE
//
// MessageText:
//
// The activation server determined that the license is invalid.
//
#define SL_E_SRV_INVALID_PUBLISH_LICENSE ((HRESULT)0xC004B001L)

//
// MessageId: SL_E_SRV_INVALID_PRODUCT_KEY_LICENSE
//
// MessageText:
//
// The activation server determined that the license is invalid.
//
#define SL_E_SRV_INVALID_PRODUCT_KEY_LICENSE ((HRESULT)0xC004B002L)

//
// MessageId: SL_E_SRV_INVALID_RIGHTS_ACCOUNT_LICENSE
//
// MessageText:
//
// The activation server determined that the license is invalid.
//
#define SL_E_SRV_INVALID_RIGHTS_ACCOUNT_LICENSE ((HRESULT)0xC004B003L)

//
// MessageId: SL_E_SRV_INVALID_LICENSE_STRUCTURE
//
// MessageText:
//
// The activation server determined that the license is invalid.
//
#define SL_E_SRV_INVALID_LICENSE_STRUCTURE ((HRESULT)0xC004B004L)

//
// MessageId: SL_E_SRV_AUTHORIZATION_FAILED
//
// MessageText:
//
// The activation server determined that the license is invalid.
//
#define SL_E_SRV_AUTHORIZATION_FAILED    ((HRESULT)0xC004B005L)

//
// MessageId: SL_E_SRV_INVALID_BINDING
//
// MessageText:
//
// The activation server determined that the license is invalid.
//
#define SL_E_SRV_INVALID_BINDING         ((HRESULT)0xC004B006L)

//
// MessageId: SL_E_SRV_SERVER_PONG
//
// MessageText:
//
// The activation server reported that the computer could not connect to the activation server.
//
#define SL_E_SRV_SERVER_PONG             ((HRESULT)0xC004B007L)

//
// MessageId: SL_E_SRV_INVALID_PAYLOAD
//
// MessageText:
//
// The activation server determined that the computer could not be activated.
//
#define SL_E_SRV_INVALID_PAYLOAD         ((HRESULT)0xC004B008L)

//
// MessageId: SL_E_SRV_INVALID_SECURITY_PROCESSOR_LICENSE
//
// MessageText:
//
// The activation server determined that the license is invalid.
//
#define SL_E_SRV_INVALID_SECURITY_PROCESSOR_LICENSE ((HRESULT)0xC004B009L)

//
// MessageId: SL_E_SRV_CLIENT_CLOCK_OUT_OF_SYNC
//
// MessageText:
//
// The activation server determined that your computer clock time is not correct. You must correct your clock before you can activate.
//
#define SL_E_SRV_CLIENT_CLOCK_OUT_OF_SYNC ((HRESULT)0xC004B011L)

//
// MessageId: SL_E_SRV_GENERAL_ERROR
//
// MessageText:
//
// The activation server determined that the computer could not be activated.
//
#define SL_E_SRV_GENERAL_ERROR           ((HRESULT)0xC004B100L)

////////////////////////////////////////////////////////////////
//     Clearing house errors
//     These error codes come from MSCH PA Implementation
////////////////////////////////////////////////////////////////

//
// MessageId: SL_E_CHPA_PRODUCT_KEY_OUT_OF_RANGE
//
// MessageText:
//
// The activation server determined the specified product key is invalid.
//
#define SL_E_CHPA_PRODUCT_KEY_OUT_OF_RANGE ((HRESULT)0xC004C001L)

//
// MessageId: SL_E_CHPA_INVALID_BINDING
//
// MessageText:
//
// The activation server determined there is a problem with the specified product key.
//
#define SL_E_CHPA_INVALID_BINDING        ((HRESULT)0xC004C002L)

//
// MessageId: SL_E_CHPA_PRODUCT_KEY_BLOCKED
//
// MessageText:
//
// The activation server determined the specified product key has been blocked.
//
#define SL_E_CHPA_PRODUCT_KEY_BLOCKED    ((HRESULT)0xC004C003L)

//
// MessageId: SL_E_CHPA_INVALID_PRODUCT_KEY
//
// MessageText:
//
// The activation server determined the specified product key is invalid. 
//
#define SL_E_CHPA_INVALID_PRODUCT_KEY    ((HRESULT)0xC004C004L)

//
// MessageId: SL_E_CHPA_BINDING_NOT_FOUND
//
// MessageText:
//
// The activation server determined the license is invalid.
//
#define SL_E_CHPA_BINDING_NOT_FOUND      ((HRESULT)0xC004C005L)

//
// MessageId: SL_E_CHPA_BINDING_MAPPING_NOT_FOUND
//
// MessageText:
//
// The activation server determined the license is invalid.
//
#define SL_E_CHPA_BINDING_MAPPING_NOT_FOUND ((HRESULT)0xC004C006L)

//
// MessageId: SL_E_CHPA_UNSUPPORTED_PRODUCT_KEY
//
// MessageText:
//
// The activation server determined the specified product key is invalid.
//
#define SL_E_CHPA_UNSUPPORTED_PRODUCT_KEY ((HRESULT)0xC004C007L)

//
// MessageId: SL_E_CHPA_MAXIMUM_UNLOCK_EXCEEDED
//
// MessageText:
//
// The activation server determined that the specified product key could not be used.
//
#define SL_E_CHPA_MAXIMUM_UNLOCK_EXCEEDED ((HRESULT)0xC004C008L)

//
// MessageId: SL_E_CHPA_ACTCONFIG_ID_NOT_FOUND
//
// MessageText:
//
// The activation server determined the license is invalid.
//
#define SL_E_CHPA_ACTCONFIG_ID_NOT_FOUND ((HRESULT)0xC004C009L)

//
// MessageId: SL_E_CHPA_INVALID_PRODUCT_DATA_ID
//
// MessageText:
//
// The activation server determined the license is invalid.
//
#define SL_E_CHPA_INVALID_PRODUCT_DATA_ID ((HRESULT)0xC004C00AL)

//
// MessageId: SL_E_CHPA_INVALID_PRODUCT_DATA
//
// MessageText:
//
// The activation server determined the license is invalid.
//
#define SL_E_CHPA_INVALID_PRODUCT_DATA   ((HRESULT)0xC004C00BL)

//
// MessageId: SL_E_CHPA_SYSTEM_ERROR
//
// MessageText:
//
// The activation server experienced an error.
//
#define SL_E_CHPA_SYSTEM_ERROR           ((HRESULT)0xC004C00CL)

//
// MessageId: SL_E_CHPA_INVALID_ACTCONFIG_ID
//
// MessageText:
//
// The activation server determined the license is invalid.
//
#define SL_E_CHPA_INVALID_ACTCONFIG_ID   ((HRESULT)0xC004C00DL)

//
// MessageId: SL_E_CHPA_INVALID_PRODUCT_KEY_LENGTH
//
// MessageText:
//
// The activation server determined the specified product key is invalid.
//
#define SL_E_CHPA_INVALID_PRODUCT_KEY_LENGTH ((HRESULT)0xC004C00EL)

//
// MessageId: SL_E_CHPA_INVALID_PRODUCT_KEY_FORMAT
//
// MessageText:
//
// The activation server determined the specified product key is invalid.
//
#define SL_E_CHPA_INVALID_PRODUCT_KEY_FORMAT ((HRESULT)0xC004C00FL)

//
// MessageId: SL_E_CHPA_INVALID_PRODUCT_KEY_CHAR
//
// MessageText:
//
// The activation server determined the specified product key is invalid.
//
#define SL_E_CHPA_INVALID_PRODUCT_KEY_CHAR ((HRESULT)0xC004C010L)

//
// MessageId: SL_E_CHPA_INVALID_BINDING_URI
//
// MessageText:
//
// The activation server determined the license is invalid.
//
#define SL_E_CHPA_INVALID_BINDING_URI    ((HRESULT)0xC004C011L)

//
// MessageId: SL_E_CHPA_NETWORK_ERROR
//
// MessageText:
//
// The activation server experienced a network error.
//
#define SL_E_CHPA_NETWORK_ERROR          ((HRESULT)0xC004C012L)

//
// MessageId: SL_E_CHPA_DATABASE_ERROR
//
// MessageText:
//
// The activation server experienced an error.
//
#define SL_E_CHPA_DATABASE_ERROR         ((HRESULT)0xC004C013L)

//
// MessageId: SL_E_CHPA_INVALID_ARGUMENT
//
// MessageText:
//
// The activation server experienced an error.
//
#define SL_E_CHPA_INVALID_ARGUMENT       ((HRESULT)0xC004C014L)

//
// MessageId: SL_E_CHPA_DMAK_LIMIT_EXCEEDED
//
// MessageText:
//
// The activation server reported that the Multiple Activation Key has exceeded its limit.
//
#define SL_E_CHPA_DMAK_LIMIT_EXCEEDED    ((HRESULT)0xC004C020L)

//
// MessageId: SL_E_CHPA_DMAK_EXTENSION_LIMIT_EXCEEDED
//
// MessageText:
//
// The activation server reported that the Multiple Activation Key extension limit has been exceeded.
//
#define SL_E_CHPA_DMAK_EXTENSION_LIMIT_EXCEEDED ((HRESULT)0xC004C021L)

//
// MessageId: SL_E_CHPA_REISSUANCE_LIMIT_NOT_FOUND
//
// MessageText:
//
// The activation server reported that the re-issuance limit was not found. 
//
#define SL_E_CHPA_REISSUANCE_LIMIT_NOT_FOUND ((HRESULT)0xC004C022L)

//
// MessageId: SL_E_CHPA_OVERRIDE_REQUEST_NOT_FOUND
//
// MessageText:
//
// The activation server reported that the override request was not found. 
//
#define SL_E_CHPA_OVERRIDE_REQUEST_NOT_FOUND ((HRESULT)0xC004C023L)

//
// MessageId: SL_E_CHPA_OEM_SLP_COA0
//
// MessageText:
//
// The activation server reported that the specified product key cannot be used for online activation.
//
#define SL_E_CHPA_OEM_SLP_COA0           ((HRESULT)0xC004C016L)

//
// MessageId: SL_E_CHPA_PRODUCT_KEY_BLOCKED_IPLOCATION
//
// MessageText:
//
// The activation server determined the specified product key has been blocked for this geographic location.
//
#define SL_E_CHPA_PRODUCT_KEY_BLOCKED_IPLOCATION ((HRESULT)0xC004C017L)

//
// MessageId: SL_E_CHPA_RESPONSE_NOT_AVAILABLE
//
// MessageText:
//
// The activation server experienced an error.
//
#define SL_E_CHPA_RESPONSE_NOT_AVAILABLE ((HRESULT)0xC004C015L)

//
// MessageId: SL_E_CHPA_GENERAL_ERROR
//
// MessageText:
//
// The activation server experienced a general error.
//
#define SL_E_CHPA_GENERAL_ERROR          ((HRESULT)0xC004C050L)

//
// MessageId: SL_E_CHPA_TIMEBASED_ACTIVATION_BEFORE_START_DATE
//
// MessageText:
//
// The activation server reported that time based activation attempted before start date.
//
#define SL_E_CHPA_TIMEBASED_ACTIVATION_BEFORE_START_DATE ((HRESULT)0xC004C030L)

//
// MessageId: SL_E_CHPA_TIMEBASED_ACTIVATION_AFTER_END_DATE
//
// MessageText:
//
// The activation server reported that time based activation attempted after end date.
//
#define SL_E_CHPA_TIMEBASED_ACTIVATION_AFTER_END_DATE ((HRESULT)0xC004C031L)

//
// MessageId: SL_E_CHPA_TIMEBASED_ACTIVATION_NOT_AVAILABLE
//
// MessageText:
//
// The activation server reported that new time based activation not available.
//
#define SL_E_CHPA_TIMEBASED_ACTIVATION_NOT_AVAILABLE ((HRESULT)0xC004C032L)

//
// MessageId: SL_E_CHPA_TIMEBASED_PRODUCT_KEY_NOT_CONFIGURED
//
// MessageText:
//
// The activation server reported that time based product key not configured for activation.
//
#define SL_E_CHPA_TIMEBASED_PRODUCT_KEY_NOT_CONFIGURED ((HRESULT)0xC004C033L)

//
// MessageId: SL_E_CHPA_NO_RULES_TO_ACTIVATE
//
// MessageText:
//
// The activation server reported that no business rules available to activate specified product key.
//
#define SL_E_CHPA_NO_RULES_TO_ACTIVATE   ((HRESULT)0xC004C04FL)

//
// MessageId: SL_E_CHPA_BUSINESS_RULE_INPUT_NOT_FOUND
//
// MessageText:
//
// The activation server reported that business rule cound not find required input.
//
#define SL_E_CHPA_BUSINESS_RULE_INPUT_NOT_FOUND ((HRESULT)0xC004C700L)

//
// MessageId: SL_E_CHPA_NULL_VALUE_FOR_PROPERTY_NAME_OR_ID
//
// MessageText:
//
// The activation server reported that NULL value specified for business property name and Id.
//
#define SL_E_CHPA_NULL_VALUE_FOR_PROPERTY_NAME_OR_ID ((HRESULT)0xC004C750L)

//
// MessageId: SL_E_CHPA_UNKNOWN_PROPERTY_NAME
//
// MessageText:
//
// The activation server reported that property name specifies unknown property.
//
#define SL_E_CHPA_UNKNOWN_PROPERTY_NAME  ((HRESULT)0xC004C751L)

//
// MessageId: SL_E_CHPA_UNKNOWN_PROPERTY_ID
//
// MessageText:
//
// The activation server reported that property Id specifies unknown property.
//
#define SL_E_CHPA_UNKNOWN_PROPERTY_ID    ((HRESULT)0xC004C752L)

//
// MessageId: SL_E_CHPA_FAILED_TO_UPDATE_PRODUCTKEY_BINDING
//
// MessageText:
//
// The activation server reported that it failed to update product key binding.
//
#define SL_E_CHPA_FAILED_TO_UPDATE_PRODUCTKEY_BINDING ((HRESULT)0xC004C755L)

//
// MessageId: SL_E_CHPA_FAILED_TO_INSERT_PRODUCTKEY_BINDING
//
// MessageText:
//
// The activation server reported that it failed to insert product key binding.
//
#define SL_E_CHPA_FAILED_TO_INSERT_PRODUCTKEY_BINDING ((HRESULT)0xC004C756L)

//
// MessageId: SL_E_CHPA_FAILED_TO_DELETE_PRODUCTKEY_BINDING
//
// MessageText:
//
// The activation server reported that it failed to delete product key binding.
//
#define SL_E_CHPA_FAILED_TO_DELETE_PRODUCTKEY_BINDING ((HRESULT)0xC004C757L)

//
// MessageId: SL_E_CHPA_FAILED_TO_PROCESS_PRODUCT_KEY_BINDINGS_XML
//
// MessageText:
//
// The activation server reported that it failed to process input XML for product key bindings.
//
#define SL_E_CHPA_FAILED_TO_PROCESS_PRODUCT_KEY_BINDINGS_XML ((HRESULT)0xC004C758L)

//
// MessageId: SL_E_CHPA_FAILED_TO_INSERT_PRODUCT_KEY_PROPERTY
//
// MessageText:
//
// The activation server reported that it failed to insert product key property.
//
#define SL_E_CHPA_FAILED_TO_INSERT_PRODUCT_KEY_PROPERTY ((HRESULT)0xC004C75AL)

//
// MessageId: SL_E_CHPA_FAILED_TO_UPDATE_PRODUCT_KEY_PROPERTY
//
// MessageText:
//
// The activation server reported that it failed to update product key property.
//
#define SL_E_CHPA_FAILED_TO_UPDATE_PRODUCT_KEY_PROPERTY ((HRESULT)0xC004C75BL)

//
// MessageId: SL_E_CHPA_FAILED_TO_DELETE_PRODUCT_KEY_PROPERTY
//
// MessageText:
//
// The activation server reported that it failed to delete product key property.
//
#define SL_E_CHPA_FAILED_TO_DELETE_PRODUCT_KEY_PROPERTY ((HRESULT)0xC004C75CL)

//
// MessageId: SL_E_CHPA_UNKNOWN_PRODUCT_KEY_TYPE
//
// MessageText:
//
// The activation server reported that the product key type is unknown.
//
#define SL_E_CHPA_UNKNOWN_PRODUCT_KEY_TYPE ((HRESULT)0xC004C764L)

//
// MessageId: SL_E_CHPA_PRODUCT_KEY_BEING_USED
//
// MessageText:
//
// The activation server reported that the product key type is being used by another user.
//
#define SL_E_CHPA_PRODUCT_KEY_BEING_USED ((HRESULT)0xC004C770L)

//
// MessageId: SL_E_CHPA_FAILED_TO_INSERT_PRODUCT_KEY_RECORD
//
// MessageText:
//
// The activation server reported that it failed to insert product key record.
//
#define SL_E_CHPA_FAILED_TO_INSERT_PRODUCT_KEY_RECORD ((HRESULT)0xC004C780L)

//
// MessageId: SL_E_CHPA_FAILED_TO_UPDATE_PRODUCT_KEY_RECORD
//
// MessageText:
//
// The activation server reported that it failed to update product key record.
//
#define SL_E_CHPA_FAILED_TO_UPDATE_PRODUCT_KEY_RECORD ((HRESULT)0xC004C781L)

////////////////////////////////////////////////////////////////
//     VGA (Vista Genuine Advantage) error code range
////////////////////////////////////////////////////////////////
//
// MessageId: SL_E_VGA_NON_GENUINE_STATUS_FIRST
//
// MessageText:
//
// The Vista Genuine Advantage Service determined that the installation is not genuine. 
//
#define SL_E_VGA_NON_GENUINE_STATUS_FIRST ((HRESULT)0xC004C401L)

//
// MessageId: SL_E_VGA_NON_GENUINE_STATUS_LAST
//
// MessageText:
//
// The Vista Genuine Advantage Service determined that the installation is not genuine. 
//
#define SL_E_VGA_NON_GENUINE_STATUS_LAST ((HRESULT)0xC004C600L)

////////////////////////////////////////////////////////////////
//     Clearing house errors
//     These error codes come from MSCH Reference Implementation
////////////////////////////////////////////////////////////////

//
// MessageId: SL_E_CHREF_INVALID_PRODUCT_KEY
//
// MessageText:
//
// The activation server determined the specified product key is invalid.
//
#define SL_E_CHREF_INVALID_PRODUCT_KEY   ((HRESULT)0xC004C801L)

//
// MessageId: SL_E_CHREF_EXCLUDED_PRODUCT_KEY
//
// MessageText:
//
// The activation server determined the specified product key is invalid.
//
#define SL_E_CHREF_EXCLUDED_PRODUCT_KEY  ((HRESULT)0xC004C802L)

//
// MessageId: SL_E_CHREF_PRODUCT_KEY_REVOKED
//
// MessageText:
//
// The activation server determined the specified product key has been revoked.
//
#define SL_E_CHREF_PRODUCT_KEY_REVOKED   ((HRESULT)0xC004C803L)

//
// MessageId: SL_E_CHREF_INVALID_PRODUCT_KEY_ALGORITHM
//
// MessageText:
//
// The activation server determined the specified product key is invalid.
//
#define SL_E_CHREF_INVALID_PRODUCT_KEY_ALGORITHM ((HRESULT)0xC004C804L)

//
// MessageId: SL_E_CHREF_INVALID_PRODUCT_KEY_UNIQUEID
//
// MessageText:
//
// The activation server determined the specified product key is invalid.
//
#define SL_E_CHREF_INVALID_PRODUCT_KEY_UNIQUEID ((HRESULT)0xC004C805L)

//
// MessageId: SL_E_CHREF_INVALID_PRODUCT_DATA
//
// MessageText:
//
// The activation server determined the specified product key is invalid.
//
#define SL_E_CHREF_INVALID_PRODUCT_DATA  ((HRESULT)0xC004C810L)

//
// MessageId: SL_E_CHREF_CANNOT_CREATE_BINDING_ASSOC
//
// MessageText:
//
// The activation server determined the license is invalid.
//
#define SL_E_CHREF_CANNOT_CREATE_BINDING_ASSOC ((HRESULT)0xC004C811L)

//
// MessageId: SL_E_CHREF_BINDING_OUT_OF_TOLERANCE
//
// MessageText:
//
// The activation server determined that the specified product key has exceeded its activation count.
//
#define SL_E_CHREF_BINDING_OUT_OF_TOLERANCE ((HRESULT)0xC004C812L)

//
// MessageId: SL_E_CHREF_PRODUCT_KEY_POLICY_MISSING
//
// MessageText:
//
// The activation server determined the license is invalid.
//
#define SL_E_CHREF_PRODUCT_KEY_POLICY_MISSING ((HRESULT)0xC004C813L)

//
// MessageId: SL_E_CHREF_PRODUCT_KEY_POLICY_OVERLAPPED
//
// MessageText:
//
// The activation server determined the specified product key is invalid.
//
#define SL_E_CHREF_PRODUCT_KEY_POLICY_OVERLAPPED ((HRESULT)0xC004C814L)

//
// MessageId: SL_E_CHREF_PRODUCT_KEY_BINDING_MISMATCH
//
// MessageText:
//
// The activation server determined the license is invalid.
//
#define SL_E_CHREF_PRODUCT_KEY_BINDING_MISMATCH ((HRESULT)0xC004C815L)

//
// MessageId: SL_E_CHREF_OEM_SLP_COA0
//
// MessageText:
//
// The activation server reported that the specified product key cannot be used for online activation.
//
#define SL_E_CHREF_OEM_SLP_COA0          ((HRESULT)0xC004C816L)

//////////////////////////////////////////////////////////
// SL service internal error
//     Internal program errors for SL develpers
//////////////////////////////////////////////////////////

//
// MessageId: SL_E_INVALID_CONTEXT
//
// MessageText:
//
// The Software Licensing Service determined that the specified context is invalid.
//
#define SL_E_INVALID_CONTEXT             ((HRESULT)0xC004E001L)

//
// MessageId: SL_E_TOKEN_STORE_INVALID_STATE
//
// MessageText:
//
// The Software Licensing Service reported that the license store contains inconsistent data.
//
#define SL_E_TOKEN_STORE_INVALID_STATE   ((HRESULT)0xC004E002L)

//
// MessageId: SL_E_EVALUATION_FAILED
//
// MessageText:
//
// The Software Licensing Service reported that license evaluation failed.
//
#define SL_E_EVALUATION_FAILED           ((HRESULT)0xC004E003L)

//
// MessageId: SL_E_NOT_EVALUATED
//
// MessageText:
//
// The Software Licensing Service reported that the license has not been evaluated.
//
#define SL_E_NOT_EVALUATED               ((HRESULT)0xC004E004L)

//
// MessageId: SL_E_NOT_ACTIVATED
//
// MessageText:
//
// The Software Licensing Service reported that the license is not activated.
//
#define SL_E_NOT_ACTIVATED               ((HRESULT)0xC004E005L)

//
// MessageId: SL_E_INVALID_GUID
//
// MessageText:
//
// The Software Licensing Service reported that the license contains invalid data.
//
#define SL_E_INVALID_GUID                ((HRESULT)0xC004E006L)

//
// MessageId: SL_E_TOKSTO_TOKEN_NOT_FOUND
//
// MessageText:
//
// The Software Licensing Service reported that the license store does not contain the requested license.
//
#define SL_E_TOKSTO_TOKEN_NOT_FOUND      ((HRESULT)0xC004E007L)

//
// MessageId: SL_E_TOKSTO_NO_PROPERTIES
//
// MessageText:
//
// The Software Licensing Service reported that the license property is invalid.
//
#define SL_E_TOKSTO_NO_PROPERTIES        ((HRESULT)0xC004E008L)

//
// MessageId: SL_E_TOKSTO_NOT_INITIALIZED
//
// MessageText:
//
// The Software Licensing Service reported that the license store is not initialized.
//
#define SL_E_TOKSTO_NOT_INITIALIZED      ((HRESULT)0xC004E009L)

//
// MessageId: SL_E_TOKSTO_ALREADY_INITIALIZED
//
// MessageText:
//
// The Software Licensing Service reported that the license store is already initialized.
//
#define SL_E_TOKSTO_ALREADY_INITIALIZED  ((HRESULT)0xC004E00AL)

//
// MessageId: SL_E_TOKSTO_NO_ID_SET
//
// MessageText:
//
// The Software Licensing Service reported that the license property is invalid.
//
#define SL_E_TOKSTO_NO_ID_SET            ((HRESULT)0xC004E00BL)

//
// MessageId: SL_E_TOKSTO_CANT_CREATE_FILE
//
// MessageText:
//
// The Software Licensing Service reported that the license could not be opened or created.
//
#define SL_E_TOKSTO_CANT_CREATE_FILE     ((HRESULT)0xC004E00CL)

//
// MessageId: SL_E_TOKSTO_CANT_WRITE_TO_FILE
//
// MessageText:
//
// The Software Licensing Service reported that the license could not be written.
//
#define SL_E_TOKSTO_CANT_WRITE_TO_FILE   ((HRESULT)0xC004E00DL)

//
// MessageId: SL_E_TOKSTO_CANT_READ_FILE
//
// MessageText:
//
// The Software Licensing Service reported that the license store could not read the license file.
//
#define SL_E_TOKSTO_CANT_READ_FILE       ((HRESULT)0xC004E00EL)

//
// MessageId: SL_E_TOKSTO_CANT_PARSE_PROPERTIES
//
// MessageText:
//
// The Software Licensing Service reported that the license property is corrupted.
//
#define SL_E_TOKSTO_CANT_PARSE_PROPERTIES ((HRESULT)0xC004E00FL)

//
// MessageId: SL_E_TOKSTO_PROPERTY_NOT_FOUND
//
// MessageText:
//
// The Software Licensing Service reported that the license property is missing.
//
#define SL_E_TOKSTO_PROPERTY_NOT_FOUND   ((HRESULT)0xC004E010L)

//
// MessageId: SL_E_TOKSTO_INVALID_FILE
//
// MessageText:
//
// The Software Licensing Service reported that the license store contains an invalid license file.
//
#define SL_E_TOKSTO_INVALID_FILE         ((HRESULT)0xC004E011L)

//
// MessageId: SL_E_TOKSTO_CANT_CREATE_MUTEX
//
// MessageText:
//
// The Software Licensing Service reported that the license store failed to start synchronization properly.
//
#define SL_E_TOKSTO_CANT_CREATE_MUTEX    ((HRESULT)0xC004E012L)

//
// MessageId: SL_E_TOKSTO_CANT_ACQUIRE_MUTEX
//
// MessageText:
//
// The Software Licensing Service reported that the license store failed to synchronize properly.
//
#define SL_E_TOKSTO_CANT_ACQUIRE_MUTEX   ((HRESULT)0xC004E013L)

//
// MessageId: SL_E_TOKSTO_NO_TOKEN_DATA
//
// MessageText:
//
// The Software Licensing Service reported that the license property is invalid.
//
#define SL_E_TOKSTO_NO_TOKEN_DATA        ((HRESULT)0xC004E014L)

//
// MessageId: SL_E_EUL_CONSUMPTION_FAILED
//
// MessageText:
//
// The Software Licensing Service reported that license consumption failed.
//
#define SL_E_EUL_CONSUMPTION_FAILED      ((HRESULT)0xC004E015L)

//
// MessageId: SL_E_PKEY_INVALID_CONFIG
//
// MessageText:
//
// The Software Licensing Service reported that the product key is invalid.
//
#define SL_E_PKEY_INVALID_CONFIG         ((HRESULT)0xC004E016L)

//
// MessageId: SL_E_PKEY_INVALID_UNIQUEID
//
// MessageText:
//
// The Software Licensing Service reported that the product key is invalid.
//
#define SL_E_PKEY_INVALID_UNIQUEID       ((HRESULT)0xC004E017L)

//
// MessageId: SL_E_PKEY_INVALID_ALGORITHM
//
// MessageText:
//
// The Software Licensing Service reported that the product key is invalid.
//
#define SL_E_PKEY_INVALID_ALGORITHM      ((HRESULT)0xC004E018L)

//
// MessageId: SL_E_PKEY_INTERNAL_ERROR
//
// MessageText:
//
// The Software Licensing Service determined that validation of the specified product key failed.
//
#define SL_E_PKEY_INTERNAL_ERROR         ((HRESULT)0xC004E019L)

//
// MessageId: SL_E_LICENSE_INVALID_ADDON_INFO
//
// MessageText:
//
// The Software Licensing Service reported that invalid add-on information was found. 
//
#define SL_E_LICENSE_INVALID_ADDON_INFO  ((HRESULT)0xC004E01AL)

//
// MessageId: SL_E_HWID_ERROR
//
// MessageText:
//
// The Software Licensing Service reported that not all hardware information could be collected. 
//
#define SL_E_HWID_ERROR                  ((HRESULT)0xC004E01BL)

//
// MessageId: SL_E_PKEY_INVALID_KEYCHANGE1
//
// MessageText:
//
// This evaluation product key is no longer valid.
//
#define SL_E_PKEY_INVALID_KEYCHANGE1     ((HRESULT)0xC004E01CL)

//
// MessageId: SL_E_PKEY_INVALID_KEYCHANGE2
//
// MessageText:
//
// The new product key cannot be used on this installation of Windows. Type a different product key. (CD-AB)
//
#define SL_E_PKEY_INVALID_KEYCHANGE2     ((HRESULT)0xC004E01DL)

//
// MessageId: SL_E_PKEY_INVALID_KEYCHANGE3
//
// MessageText:
//
// The new product key cannot be used on this installation of Windows. Type a different product key. (AB-AB)
//
#define SL_E_PKEY_INVALID_KEYCHANGE3     ((HRESULT)0xC004E01EL)

//
// MessageId: SL_E_PKEY_INVALID_KEYCHANGE4
//
// MessageText:
//
// The new product key cannot be used on this installation of Windows. Type a different product key. (AB-CD)
//
#define SL_E_PKEY_INVALID_KEYCHANGE4     ((HRESULT)0xC004E01FL)

//
// MessageId: SL_E_POLICY_OTHERINFO_MISMATCH
//
// MessageText:
//
// The Software Licensing Service reported that there is a mismatched between a policy value and information stored in the OtherInfo section.
//
#define SL_E_POLICY_OTHERINFO_MISMATCH   ((HRESULT)0xC004E020L)

//
// MessageId: SL_E_PRODUCT_UNIQUENESS_GROUP_ID_INVALID
//
// MessageText:
//
// The Software Licensing Service reported that the Genuine information contained in the license is not consistent.
//
#define SL_E_PRODUCT_UNIQUENESS_GROUP_ID_INVALID ((HRESULT)0xC004E021L)

//
// MessageId: SL_E_SECURE_STORE_ID_MISMATCH
//
// MessageText:
//
// The Software Licensing Service reported that the secure store id value in license does not match with the current value.
//
#define SL_E_SECURE_STORE_ID_MISMATCH    ((HRESULT)0xC004E022L)

////////////////////////////////////////////////////////////////
//     Internal Token Store errors
//     0xE1xx is reserved for Token Store internal errors
////////////////////////////////////////////////////////////////

//
// MessageId: SL_E_SFS_INVALID_FS_VERSION
//
// MessageText:
//
// The Software Licensing Service reported that the Token Store file version is invalid. 
//
#define SL_E_SFS_INVALID_FS_VERSION      ((HRESULT)0x8004E101L)

//
// MessageId: SL_E_SFS_INVALID_FD_TABLE
//
// MessageText:
//
// The Software Licensing Service reported that the Token Store contains an invalid descriptor table. 
//
#define SL_E_SFS_INVALID_FD_TABLE        ((HRESULT)0x8004E102L)

//
// MessageId: SL_E_SFS_INVALID_SYNC
//
// MessageText:
//
// The Software Licensing Service reported that the Token Store contains a token with an invalid header/footer. 
//
#define SL_E_SFS_INVALID_SYNC            ((HRESULT)0x8004E103L)

//
// MessageId: SL_E_SFS_BAD_TOKEN_NAME
//
// MessageText:
//
// The Software Licensing Service reported that a Token Store token has an invalid name. 
//
#define SL_E_SFS_BAD_TOKEN_NAME          ((HRESULT)0x8004E104L)

//
// MessageId: SL_E_SFS_BAD_TOKEN_EXT
//
// MessageText:
//
// The Software Licensing Service reported that a Token Store token has an invalid extension. 
//
#define SL_E_SFS_BAD_TOKEN_EXT           ((HRESULT)0x8004E105L)

//
// MessageId: SL_E_SFS_DUPLICATE_TOKEN_NAME
//
// MessageText:
//
// The Software Licensing Service reported that the Token Store contains a duplicate token. 
//
#define SL_E_SFS_DUPLICATE_TOKEN_NAME    ((HRESULT)0x8004E106L)

//
// MessageId: SL_E_SFS_TOKEN_SIZE_MISMATCH
//
// MessageText:
//
// The Software Licensing Service reported that a token in the Token Store has a size mismatch. 
//
#define SL_E_SFS_TOKEN_SIZE_MISMATCH     ((HRESULT)0x8004E107L)

//
// MessageId: SL_E_SFS_INVALID_TOKEN_DATA_HASH
//
// MessageText:
//
// The Software Licensing Service reported that a token in the Token Store contains an invalid hash. 
//
#define SL_E_SFS_INVALID_TOKEN_DATA_HASH ((HRESULT)0x8004E108L)

//
// MessageId: SL_E_SFS_FILE_READ_ERROR
//
// MessageText:
//
// The Software Licensing Service reported that the Token Store was unable to read a token. 
//
#define SL_E_SFS_FILE_READ_ERROR         ((HRESULT)0x8004E109L)

//
// MessageId: SL_E_SFS_FILE_WRITE_ERROR
//
// MessageText:
//
// The Software Licensing Service reported that the Token Store was unable to write a token. 
//
#define SL_E_SFS_FILE_WRITE_ERROR        ((HRESULT)0x8004E10AL)

//
// MessageId: SL_E_SFS_INVALID_FILE_POSITION
//
// MessageText:
//
// The Software Licensing Service reported that the Token Store attempted an invalid file operation. 
//
#define SL_E_SFS_INVALID_FILE_POSITION   ((HRESULT)0x8004E10BL)

//
// MessageId: SL_E_SFS_NO_ACTIVE_TRANSACTION
//
// MessageText:
//
// The Software Licensing Service reported that there is no active transaction. 
//
#define SL_E_SFS_NO_ACTIVE_TRANSACTION   ((HRESULT)0x8004E10CL)

//
// MessageId: SL_E_SFS_INVALID_FS_HEADER
//
// MessageText:
//
// The Software Licensing Service reported that the Token Store file header is invalid. 
//
#define SL_E_SFS_INVALID_FS_HEADER       ((HRESULT)0x8004E10DL)

//
// MessageId: SL_E_SFS_INVALID_TOKEN_DESCRIPTOR
//
// MessageText:
//
// The Software Licensing Service reported that a Token Store token descriptor is invalid. 
//
#define SL_E_SFS_INVALID_TOKEN_DESCRIPTOR ((HRESULT)0x8004E10EL)


//////////////////////////////////////////////////////////
// Extended SL Client API error, license evaluation errors
//////////////////////////////////////////////////////////

//
// MessageId: SL_E_INTERNAL_ERROR
//
// MessageText:
//
// The Software Licensing Service reported an internal error.
//
#define SL_E_INTERNAL_ERROR              ((HRESULT)0xC004F001L)

//
// MessageId: SL_E_RIGHT_NOT_CONSUMED
//
// MessageText:
//
// The Software Licensing Service reported that rights consumption failed.
//
#define SL_E_RIGHT_NOT_CONSUMED          ((HRESULT)0xC004F002L)

//
// MessageId: SL_E_USE_LICENSE_NOT_INSTALLED
//
// MessageText:
//
// The Software Licensing Service reported that the required license could not be found.
//
#define SL_E_USE_LICENSE_NOT_INSTALLED   ((HRESULT)0xC004F003L)

//
// MessageId: SL_E_MISMATCHED_PKEY_RANGE
//
// MessageText:
//
// The Software Licensing Service reported that the product key does not match the range defined in the license.
//
#define SL_E_MISMATCHED_PKEY_RANGE       ((HRESULT)0xC004F004L)

//
// MessageId: SL_E_MISMATCHED_PID
//
// MessageText:
//
// The Software Licensing Service reported that the product key does not match the product key for the license.
//
#define SL_E_MISMATCHED_PID              ((HRESULT)0xC004F005L)

//
// MessageId: SL_E_EXTERNAL_SIGNATURE_NOT_FOUND
//
// MessageText:
//
// The Software Licensing Service reported that the signature file for the license is not available.
//
#define SL_E_EXTERNAL_SIGNATURE_NOT_FOUND ((HRESULT)0xC004F006L)

//
// MessageId: SL_E_RAC_NOT_AVAILABLE
//
// MessageText:
//
// The Software Licensing Service reported that the license could not be found.
//
#define SL_E_RAC_NOT_AVAILABLE           ((HRESULT)0xC004F007L)

//
// MessageId: SL_E_SPC_NOT_AVAILABLE
//
// MessageText:
//
// The Software Licensing Service reported that the license could not be found.
//
#define SL_E_SPC_NOT_AVAILABLE           ((HRESULT)0xC004F008L)

//
// MessageId: SL_E_GRACE_TIME_EXPIRED
//
// MessageText:
//
// The Software Licensing Service reported that the grace period expired.
//
#define SL_E_GRACE_TIME_EXPIRED          ((HRESULT)0xC004F009L)

//
// MessageId: SL_E_MISMATCHED_APPID
//
// MessageText:
//
// The Software Licensing Service reported that the application ID does not match the application ID for the license.
//
#define SL_E_MISMATCHED_APPID            ((HRESULT)0xC004F00AL)

//
// MessageId: SL_E_NO_PID_CONFIG_DATA
//
// MessageText:
//
// The Software Licensing Service reported that the product identification data is not available.
//
#define SL_E_NO_PID_CONFIG_DATA          ((HRESULT)0xC004F00BL)

//
// MessageId: SL_I_OOB_GRACE_PERIOD
//
// MessageText:
//
// The Software Licensing Service reported that the application is running within the valid grace period.
//
#define SL_I_OOB_GRACE_PERIOD            ((HRESULT)0x4004F00CL)

//
// MessageId: SL_I_OOT_GRACE_PERIOD
//
// MessageText:
//
// The Software Licensing Service reported that the application is running within the valid out of tolerance grace period.
//
#define SL_I_OOT_GRACE_PERIOD            ((HRESULT)0x4004F00DL)

//
// MessageId: SL_E_MISMATCHED_SECURITY_PROCESSOR
//
// MessageText:
//
// The Software Licensing Service determined that the license could not be used by the current version of the security processor component.
//
#define SL_E_MISMATCHED_SECURITY_PROCESSOR ((HRESULT)0xC004F00EL)

//
// MessageId: SL_E_OUT_OF_TOLERANCE
//
// MessageText:
//
// The Software Licensing Service reported that the hardware ID binding is beyond the level of tolerance.
//
#define SL_E_OUT_OF_TOLERANCE            ((HRESULT)0xC004F00FL)

//
// MessageId: SL_E_INVALID_PKEY
//
// MessageText:
//
// The Software Licensing Service reported that the product key is invalid.
//
#define SL_E_INVALID_PKEY                ((HRESULT)0xC004F010L)

//
// MessageId: SL_E_LICENSE_FILE_NOT_INSTALLED
//
// MessageText:
//
// The Software Licensing Service reported that the license file is not installed.
//
#define SL_E_LICENSE_FILE_NOT_INSTALLED  ((HRESULT)0xC004F011L)

//
// MessageId: SL_E_VALUE_NOT_FOUND
//
// MessageText:
//
// The Software Licensing Service reported that the call has failed because the value for the input key was not found.
//
#define SL_E_VALUE_NOT_FOUND             ((HRESULT)0xC004F012L)

//
// MessageId: SL_E_RIGHT_NOT_GRANTED
//
// MessageText:
//
// The Software Licensing Service determined that there is no permission to run the software.
//
#define SL_E_RIGHT_NOT_GRANTED           ((HRESULT)0xC004F013L)

//
// MessageId: SL_E_PKEY_NOT_INSTALLED
//
// MessageText:
//
// The Software Licensing Service reported that the product key is not available.
//
#define SL_E_PKEY_NOT_INSTALLED          ((HRESULT)0xC004F014L)

//
// MessageId: SL_E_PRODUCT_SKU_NOT_INSTALLED
//
// MessageText:
//
// The Software Licensing Service reported that the license is not installed.
//
#define SL_E_PRODUCT_SKU_NOT_INSTALLED   ((HRESULT)0xC004F015L)

//
// MessageId: SL_E_NOT_SUPPORTED
//
// MessageText:
//
// The Software Licensing Service determined that the request is not supported.
//
#define SL_E_NOT_SUPPORTED               ((HRESULT)0xC004F016L)

//
// MessageId: SL_E_PUBLISHING_LICENSE_NOT_INSTALLED
//
// MessageText:
//
// The Software Licensing Service reported that the license is not installed.
//
#define SL_E_PUBLISHING_LICENSE_NOT_INSTALLED ((HRESULT)0xC004F017L)

//
// MessageId: SL_E_LICENSE_SERVER_URL_NOT_FOUND
//
// MessageText:
//
// The Software Licensing Service reported that the license does not contain valid location data for the activation server.
//
#define SL_E_LICENSE_SERVER_URL_NOT_FOUND ((HRESULT)0xC004F018L)

//
// MessageId: SL_E_INVALID_EVENT_ID
//
// MessageText:
//
// The Software Licensing Service determined that the requested event ID is invalid.
//
#define SL_E_INVALID_EVENT_ID            ((HRESULT)0xC004F019L)

//
// MessageId: SL_E_EVENT_NOT_REGISTERED
//
// MessageText:
//
// The Software Licensing Service determined that the requested event is not registered with the service.
//
#define SL_E_EVENT_NOT_REGISTERED        ((HRESULT)0xC004F01AL)

//
// MessageId: SL_E_EVENT_ALREADY_REGISTERED
//
// MessageText:
//
// The Software Licensing Service reported that the event ID is already registered.
//
#define SL_E_EVENT_ALREADY_REGISTERED    ((HRESULT)0xC004F01BL)

//
// MessageId: SL_E_DECRYPTION_LICENSES_NOT_AVAILABLE
//
// MessageText:
//
// The Software Licensing Service reported that the license is not installed.
//
#define SL_E_DECRYPTION_LICENSES_NOT_AVAILABLE ((HRESULT)0xC004F01CL)

//
// MessageId: SL_E_LICENSE_SIGNATURE_VERIFICATION_FAILED
//
// MessageText:
//
// The Software Licensing Service reported that the verification of the license failed.
//
#define SL_E_LICENSE_SIGNATURE_VERIFICATION_FAILED ((HRESULT)0xC004F01DL)

//
// MessageId: SL_E_DATATYPE_MISMATCHED
//
// MessageText:
//
// The Software Licensing Service determined that the input data type does not match the data type in the license.
//
#define SL_E_DATATYPE_MISMATCHED         ((HRESULT)0xC004F01EL)

//
// MessageId: SL_E_INVALID_LICENSE
//
// MessageText:
//
// The Software Licensing Service determined that the license is invalid.
//
#define SL_E_INVALID_LICENSE             ((HRESULT)0xC004F01FL)

//
// MessageId: SL_E_INVALID_PACKAGE
//
// MessageText:
//
// The Software Licensing Service determined that the license package is invalid.
//
#define SL_E_INVALID_PACKAGE             ((HRESULT)0xC004F020L)

//
// MessageId: SL_E_VALIDITY_TIME_EXPIRED
//
// MessageText:
//
// The Software Licensing Service reported that the validity period of the license has expired.
//
#define SL_E_VALIDITY_TIME_EXPIRED       ((HRESULT)0xC004F021L)

//
// MessageId: SL_E_LICENSE_AUTHORIZATION_FAILED
//
// MessageText:
//
// The Software Licensing Service reported that the license authorization failed.
//
#define SL_E_LICENSE_AUTHORIZATION_FAILED ((HRESULT)0xC004F022L)

//
// MessageId: SL_E_LICENSE_DECRYPTION_FAILED
//
// MessageText:
//
// The Software Licensing Service reported that the license is invalid.
//
#define SL_E_LICENSE_DECRYPTION_FAILED   ((HRESULT)0xC004F023L)

//
// MessageId: SL_E_WINDOWS_INVALID_LICENSE_STATE
//
// MessageText:
//
// The Software Licensing Service reported that the license is invalid.
//
#define SL_E_WINDOWS_INVALID_LICENSE_STATE ((HRESULT)0xC004F024L)

//
// MessageId: SL_E_LUA_ACCESSDENIED
//
// MessageText:
//
// The Software Licensing Service reported that the action requires administrator privilege.
//
#define SL_E_LUA_ACCESSDENIED            ((HRESULT)0xC004F025L)

//
// MessageId: SL_E_PROXY_KEY_NOT_FOUND
//
// MessageText:
//
// The Software Licensing Service reported that the required data is not found.
//
#define SL_E_PROXY_KEY_NOT_FOUND         ((HRESULT)0xC004F026L)

//
// MessageId: SL_E_TAMPER_DETECTED
//
// MessageText:
//
// The Software Licensing Service reported that the license is tampered.
//
#define SL_E_TAMPER_DETECTED             ((HRESULT)0xC004F027L)

//
// MessageId: SL_E_POLICY_CACHE_INVALID
//
// MessageText:
//
// The Software Licensing Service reported that the policy cache is invalid.
//
#define SL_E_POLICY_CACHE_INVALID        ((HRESULT)0xC004F028L)

//
// MessageId: SL_E_INVALID_RUNNING_MODE
//
// MessageText:
//
// The Software Licensing Service cannot be started in the current OS mode.
//
#define SL_E_INVALID_RUNNING_MODE        ((HRESULT)0xC004F029L)

//
// MessageId: SL_E_SLP_NOT_SIGNED
//
// MessageText:
//
// The Software Licensing Service reported that the license is invalid.
//
#define SL_E_SLP_NOT_SIGNED              ((HRESULT)0xC004F02AL)

//
// MessageId: SL_E_CIDIID_INVALID_DATA
//
// MessageText:
//
// The Software Licensing Service reported that the format for the offline activation data is incorrect.
//
#define SL_E_CIDIID_INVALID_DATA         ((HRESULT)0xC004F02CL)

//
// MessageId: SL_E_CIDIID_INVALID_VERSION
//
// MessageText:
//
// The Software Licensing Service determined that the version of the offline Confirmation ID (CID) is incorrect.
//
#define SL_E_CIDIID_INVALID_VERSION      ((HRESULT)0xC004F02DL)

//
// MessageId: SL_E_CIDIID_VERSION_NOT_SUPPORTED
//
// MessageText:
//
// The Software Licensing Service determined that the version of the offline Confirmation ID (CID) is not supported.
//
#define SL_E_CIDIID_VERSION_NOT_SUPPORTED ((HRESULT)0xC004F02EL)

//
// MessageId: SL_E_CIDIID_INVALID_DATA_LENGTH
//
// MessageText:
//
// The Software Licensing Service reported that the length of the offline Confirmation ID (CID) is incorrect.
//
#define SL_E_CIDIID_INVALID_DATA_LENGTH  ((HRESULT)0xC004F02FL)

//
// MessageId: SL_E_CIDIID_NOT_DEPOSITED
//
// MessageText:
//
// The Software Licensing Service determined that the Installation ID (IID) or the Confirmation ID (CID) could not been saved.
//
#define SL_E_CIDIID_NOT_DEPOSITED        ((HRESULT)0xC004F030L)

//
// MessageId: SL_E_CIDIID_MISMATCHED
//
// MessageText:
//
// The Installation ID (IID) and the Confirmation ID (CID) do not match. Please confirm the IID and reacquire a new CID if necessary.
//
#define SL_E_CIDIID_MISMATCHED           ((HRESULT)0xC004F031L)

//
// MessageId: SL_E_INVALID_BINDING_BLOB
//
// MessageText:
//
// The Software Licensing Service determined that the binding data is invalid.
//
#define SL_E_INVALID_BINDING_BLOB        ((HRESULT)0xC004F032L)

//
// MessageId: SL_E_PRODUCT_KEY_INSTALLATION_NOT_ALLOWED
//
// MessageText:
//
// The Software Licensing Service reported that the product key is not allowed to be installed. Please see the eventlog for details.
//
#define SL_E_PRODUCT_KEY_INSTALLATION_NOT_ALLOWED ((HRESULT)0xC004F033L)

//
// MessageId: SL_E_EUL_NOT_AVAILABLE
//
// MessageText:
//
// The Software Licensing Service reported that the license could not be found or was invalid.
//
#define SL_E_EUL_NOT_AVAILABLE           ((HRESULT)0xC004F034L)

//
// MessageId: SL_E_VL_NOT_WINDOWS_SLP
//
// MessageText:
//
// The Software Licensing Service reported that the computer could not be activated with a Volume license product key. Volume-licensed systems require upgrading from a qualifying operating system. Please contact your system administrator or use a different type of key.
//
#define SL_E_VL_NOT_WINDOWS_SLP          ((HRESULT)0xC004F035L)

//
// MessageId: SL_E_VL_NOT_ENOUGH_COUNT
//
// MessageText:
//
// The Software Licensing Service reported that the computer could not be activated. The count reported by your Key Management Service (KMS) is insufficient. Please contact your system administrator.
//
#define SL_E_VL_NOT_ENOUGH_COUNT         ((HRESULT)0xC004F038L)

//
// MessageId: SL_E_VL_BINDING_SERVICE_NOT_ENABLED
//
// MessageText:
//
// The Software Licensing Service reported that the computer could not be activated.  The Key Management Service (KMS) is not enabled.
//
#define SL_E_VL_BINDING_SERVICE_NOT_ENABLED ((HRESULT)0xC004F039L)

//
// MessageId: SL_E_VL_INFO_PRODUCT_USER_RIGHT
//
// MessageText:
//
// The Software Licensing Service reported that the computer was activated but the owner should verify the Product Use Rights.
//
#define SL_E_VL_INFO_PRODUCT_USER_RIGHT  ((HRESULT)0x4004F040L)

//
// MessageId: SL_E_VL_KEY_MANAGEMENT_SERVICE_NOT_ACTIVATED
//
// MessageText:
//
// The Software Licensing Service determined that the Key Management Service (KMS) is not activated. KMS needs to be activated. Please contact system administrator.
//
#define SL_E_VL_KEY_MANAGEMENT_SERVICE_NOT_ACTIVATED ((HRESULT)0xC004F041L)

//
// MessageId: SL_E_VL_KEY_MANAGEMENT_SERVICE_ID_MISMATCH
//
// MessageText:
//
// The Software Licensing Service determined that the specified Key Management Service (KMS) cannot be used.
//
#define SL_E_VL_KEY_MANAGEMENT_SERVICE_ID_MISMATCH ((HRESULT)0xC004F042L)

//
// MessageId: SL_E_PROXY_POLICY_NOT_UPDATED
//
// MessageText:
//
// The Software Licensing Service reported that the proxy policy has not been updated.
//
#define SL_E_PROXY_POLICY_NOT_UPDATED    ((HRESULT)0xC004F047L)

//
// MessageId: SL_E_CIDIID_INVALID_CHECK_DIGITS
//
// MessageText:
//
// The Software Licensing Service determined that the Installation ID (IID) or the Confirmation ID (CID) is invalid.
//
#define SL_E_CIDIID_INVALID_CHECK_DIGITS ((HRESULT)0xC004F04DL)

//
// MessageId: SL_E_LICENSE_MANAGEMENT_DATA_NOT_FOUND
//
// MessageText:
//
// The Software Licensing Service reported that license management information was not found in the licenses.
//
#define SL_E_LICENSE_MANAGEMENT_DATA_NOT_FOUND ((HRESULT)0xC004F04FL)

//
// MessageId: SL_E_INVALID_PRODUCT_KEY
//
// MessageText:
//
// The Software Licensing Service reported that the product key is invalid.
//
#define SL_E_INVALID_PRODUCT_KEY         ((HRESULT)0xC004F050L)

//
// MessageId: SL_E_BLOCKED_PRODUCT_KEY
//
// MessageText:
//
// The Software Licensing Service reported that the product key is blocked.
//
#define SL_E_BLOCKED_PRODUCT_KEY         ((HRESULT)0xC004F051L)

//
// MessageId: SL_E_DUPLICATE_POLICY
//
// MessageText:
//
// The Software Licensing Service reported that the licenses contain duplicated properties. 
//
#define SL_E_DUPLICATE_POLICY            ((HRESULT)0xC004F052L)

//
// MessageId: SL_E_MISSING_OVERRIDE_ONLY_ATTRIBUTE
//
// MessageText:
//
// The Software Licensing Service determined that the license is invalid. The license contains an override policy that is not configured properly.
//
#define SL_E_MISSING_OVERRIDE_ONLY_ATTRIBUTE ((HRESULT)0xC004F053L)

//
// MessageId: SL_E_LICENSE_MANAGEMENT_DATA_DUPLICATED
//
// MessageText:
//
// The Software Licensing Service reported that license management information has duplicated data. 
//
#define SL_E_LICENSE_MANAGEMENT_DATA_DUPLICATED ((HRESULT)0xC004F054L)

//
// MessageId: SL_E_BASE_SKU_NOT_AVAILABLE
//
// MessageText:
//
// The Software Licensing Service reported that the base SKU is not available.
//
#define SL_E_BASE_SKU_NOT_AVAILABLE      ((HRESULT)0xC004F055L)

//
// MessageId: SL_E_VL_MACHINE_NOT_BOUND
//
// MessageText:
//
// The Software Licensing Service reported that the computer could not be activated using the Key Management Service (KMS).
//
#define SL_E_VL_MACHINE_NOT_BOUND        ((HRESULT)0xC004F056L)

//
// MessageId: SL_E_SLP_MISSING_ACPI_SLIC
//
// MessageText:
//
// The Software Licensing Service reported that the computer BIOS is missing a required license.
//
#define SL_E_SLP_MISSING_ACPI_SLIC       ((HRESULT)0xC004F057L)

//
// MessageId: SL_E_SLP_MISSING_SLP_MARKER
//
// MessageText:
//
// The Software Licensing Service reported that the computer BIOS is missing a required license.
//
#define SL_E_SLP_MISSING_SLP_MARKER      ((HRESULT)0xC004F058L)

//
// MessageId: SL_E_SLP_BAD_FORMAT
//
// MessageText:
//
// The Software Licensing Service reported that a license in the computer BIOS is invalid.
//
#define SL_E_SLP_BAD_FORMAT              ((HRESULT)0xC004F059L)

//
// MessageId: SL_E_INVALID_PACKAGE_VERSION
//
// MessageText:
//
// The Software Licensing Service determined that the version of the license package is invalid.
//
#define SL_E_INVALID_PACKAGE_VERSION     ((HRESULT)0xC004F060L)

//
// MessageId: SL_E_PKEY_INVALID_UPGRADE
//
// MessageText:
//
// The Software Licensing Service determined that this specified product key can only be used for upgrading, not for clean installations.
//
#define SL_E_PKEY_INVALID_UPGRADE        ((HRESULT)0xC004F061L)

//
// MessageId: SL_E_ISSUANCE_LICENSE_NOT_INSTALLED
//
// MessageText:
//
// The Software Licensing Service reported that a required license could not be found.
//
#define SL_E_ISSUANCE_LICENSE_NOT_INSTALLED ((HRESULT)0xC004F062L)

//
// MessageId: SL_E_SLP_OEM_CERT_MISSING
//
// MessageText:
//
// The Software Licensing Service reported that the computer BIOS is missing a required license.
//
#define SL_E_SLP_OEM_CERT_MISSING        ((HRESULT)0xC004F063L)

//
// MessageId: SL_E_NONGENUINE_GRACE_TIME_EXPIRED
//
// MessageText:
//
// The Software Licensing Service reported that the non-genuine grace period expired.
//
#define SL_E_NONGENUINE_GRACE_TIME_EXPIRED ((HRESULT)0xC004F064L)

//
// MessageId: SL_I_NONGENUINE_GRACE_PERIOD
//
// MessageText:
//
// The Software Licensing Service reported that the application is running within the valid non-genuine grace period.
//
#define SL_I_NONGENUINE_GRACE_PERIOD     ((HRESULT)0x4004F065L)

//
// MessageId: SL_E_DEPENDENT_PROPERTY_NOT_SET
//
// MessageText:
//
// The Software Licensing Service reported that the genuine information property can not be set before dependent property been set.
//
#define SL_E_DEPENDENT_PROPERTY_NOT_SET  ((HRESULT)0xC004F066L)

//
// MessageId: SL_E_NONGENUINE_GRACE_TIME_EXPIRED_2
//
// MessageText:
//
// The Software Licensing Service reported that the non-genuine grace period expired (type 2).
//
#define SL_E_NONGENUINE_GRACE_TIME_EXPIRED_2 ((HRESULT)0xC004F067L)

//
// MessageId: SL_I_NONGENUINE_GRACE_PERIOD_2
//
// MessageText:
//
// The Software Licensing Service reported that the application is running within the valid non-genuine grace period (type 2).
//
#define SL_I_NONGENUINE_GRACE_PERIOD_2   ((HRESULT)0x4004F068L)

//
// MessageId: SL_E_MISMATCHED_PRODUCT_SKU
//
// MessageText:
//
// The Software Licensing Service reported that the product SKU is not found.
//
#define SL_E_MISMATCHED_PRODUCT_SKU      ((HRESULT)0xC004F069L)

//
// MessageId: SL_E_OPERATION_NOT_ALLOWED
//
// MessageText:
//
// The Software Licensing Service reported that the requested operation is not allowed.
//
#define SL_E_OPERATION_NOT_ALLOWED       ((HRESULT)0xC004F06AL)

//
// MessageId: SL_E_VL_KEY_MANAGEMENT_SERVICE_VM_NOT_SUPPORTED
//
// MessageText:
//
// The Software Licensing Service determined that it is running in a virtual machine. The Key Management Service (KMS) is not supported in this mode.
//
#define SL_E_VL_KEY_MANAGEMENT_SERVICE_VM_NOT_SUPPORTED ((HRESULT)0xC004F06BL)

//
// MessageId: SL_E_VL_INVALID_TIMESTAMP
//
// MessageText:
//
// The Software Licensing Service reported that the computer could not be activated. The Key Management Service (KMS) determined that the request timestamp is invalid.
//
#define SL_E_VL_INVALID_TIMESTAMP        ((HRESULT)0xC004F06CL)

//
// MessageId: SL_E_PLUGIN_INVALID_MANIFEST
//
// MessageText:
//
// The Software Licensing Service reported that the plug-in manifest file is incorrect.
//
#define SL_E_PLUGIN_INVALID_MANIFEST     ((HRESULT)0xC004F071L)

//
// MessageId: SL_E_APPLICATION_POLICIES_MISSING
//
// MessageText:
//
// The Software Licensing Service reported that the license policies for fast query could not be found.
//
#define SL_E_APPLICATION_POLICIES_MISSING ((HRESULT)0xC004F072L)

//
// MessageId: SL_E_APPLICATION_POLICIES_NOT_LOADED
//
// MessageText:
//
// The Software Licensing Service reported that the license policies for fast query have not been loaded.
//
#define SL_E_APPLICATION_POLICIES_NOT_LOADED ((HRESULT)0xC004F073L)

//
// MessageId: SL_E_VL_BINDING_SERVICE_UNAVAILABLE
//
// MessageText:
//
// The Software Licensing Service reported that the computer could not be activated. No Key Management Service (KMS) could be contacted. Please see the Application Event Log for additional information.
//
#define SL_E_VL_BINDING_SERVICE_UNAVAILABLE ((HRESULT)0xC004F074L)

//
// MessageId: SL_E_SERVICE_STOPPING
//
// MessageText:
//
// The Software Licensing Service reported that the operation cannot be completed because the service is stopping.
//
#define SL_E_SERVICE_STOPPING            ((HRESULT)0xC004F075L)

//
// MessageId: SL_E_PLUGIN_NOT_REGISTERED
//
// MessageText:
//
// The Software Licensing Service reported that the requested plug-in cannot be found.
//
#define SL_E_PLUGIN_NOT_REGISTERED       ((HRESULT)0xC004F076L)

//
// MessageId: SL_E_AUTHN_WRONG_VERSION
//
// MessageText:
//
// The Software Licensing Service determined incompatible version of authentication data.
//
#define SL_E_AUTHN_WRONG_VERSION         ((HRESULT)0xC004F077L)

//
// MessageId: SL_E_AUTHN_MISMATCHED_KEY
//
// MessageText:
//
// The Software Licensing Service reported that the key is mismatched.
//
#define SL_E_AUTHN_MISMATCHED_KEY        ((HRESULT)0xC004F078L)

//
// MessageId: SL_E_AUTHN_CHALLENGE_NOT_SET
//
// MessageText:
//
// The Software Licensing Service reported that the authentication data is not set.
//
#define SL_E_AUTHN_CHALLENGE_NOT_SET     ((HRESULT)0xC004F079L)

//
// MessageId: SL_E_AUTHN_CANT_VERIFY
//
// MessageText:
//
// The Software Licensing Service reported that the verification could not be done.
//
#define SL_E_AUTHN_CANT_VERIFY           ((HRESULT)0xC004F07AL)

//
// MessageId: SL_E_SERVICE_RUNNING
//
// MessageText:
//
// The requested operation is unavailable while the Software Licensing Service is running.
//
#define SL_E_SERVICE_RUNNING             ((HRESULT)0xC004F07BL)

//
// MessageId: SL_E_SLP_INVALID_MARKER_VERSION
//
// MessageText:
//
// The Software Licensing Service determined that the version of the computer BIOS is invalid.
//
#define SL_E_SLP_INVALID_MARKER_VERSION  ((HRESULT)0xC004F07CL)

//
// MessageId: SL_E_NOT_GENUINE
//
// MessageText:
//
// The Software Licensing Service reported that current state is not genuine.
//
#define SL_E_NOT_GENUINE                 ((HRESULT)0xC004F200L)

//
// 0xF300 - 0xF3FF reserved for token-based activation
//
//
// MessageId: SL_E_TKA_CHALLENGE_EXPIRED
//
// MessageText:
//
// The Software Licensing Service reported that the computer could not be activated. The token-based activation challenge has expired.
//
#define SL_E_TKA_CHALLENGE_EXPIRED       ((HRESULT)0xC004F301L)

//
// MessageId: SL_E_TKA_SILENT_ACTIVATION_FAILURE
//
// MessageText:
//
// The Software Licensing Service reported that Silent Activation failed. The Software Licensing Service reported that there are no certificates found in the system that could activate the product without user interaction.
//
#define SL_E_TKA_SILENT_ACTIVATION_FAILURE ((HRESULT)0xC004F302L)

//
// MessageId: SL_E_TKA_INVALID_CERT_CHAIN
//
// MessageText:
//
// The Software Licensing Service reported that the certificate chain could not be built or failed validation.
//
#define SL_E_TKA_INVALID_CERT_CHAIN      ((HRESULT)0xC004F303L)

//
// MessageId: SL_E_TKA_GRANT_NOT_FOUND
//
// MessageText:
//
// The Software Licensing Service reported that required license could not be found.
//
#define SL_E_TKA_GRANT_NOT_FOUND         ((HRESULT)0xC004F304L)

//
// MessageId: SL_E_TKA_CERT_NOT_FOUND
//
// MessageText:
//
// The Software Licensing Service reported that there are no certificates found in the system that could activate the product.
//
#define SL_E_TKA_CERT_NOT_FOUND          ((HRESULT)0xC004F305L)

//
// MessageId: SL_E_TKA_INVALID_SKU_ID
//
// MessageText:
//
// The Software Licensing Service reported that this software edition does not support token-based activation.
//
#define SL_E_TKA_INVALID_SKU_ID          ((HRESULT)0xC004F306L)

//
// MessageId: SL_E_TKA_INVALID_BLOB
//
// MessageText:
//
// The Software Licensing Service reported that the computer could not be activated. Activation data is invalid.
//
#define SL_E_TKA_INVALID_BLOB            ((HRESULT)0xC004F307L)

//
// MessageId: SL_E_TKA_TAMPERED_CERT_CHAIN
//
// MessageText:
//
// The Software Licensing Service reported that the computer could not be activated. Activation data is tampered.
//
#define SL_E_TKA_TAMPERED_CERT_CHAIN     ((HRESULT)0xC004F308L)

//
// MessageId: SL_E_TKA_CHALLENGE_MISMATCH
//
// MessageText:
//
// The Software Licensing Service reported that the computer could not be activated. Activation challenge and response do not match.
//
#define SL_E_TKA_CHALLENGE_MISMATCH      ((HRESULT)0xC004F309L)

//
// MessageId: SL_E_TKA_INVALID_CERTIFICATE
//
// MessageText:
//
// The Software Licensing Service reported that the computer could not be activated. The certificate does not match the conditions in the license.
//
#define SL_E_TKA_INVALID_CERTIFICATE     ((HRESULT)0xC004F30AL)

//
// MessageId: SL_E_TKA_INVALID_SMARTCARD
//
// MessageText:
//
// The Software Licensing Service reported that the inserted smartcard could not be used to activate the product.
//
#define SL_E_TKA_INVALID_SMARTCARD       ((HRESULT)0xC004F30BL)

//
// MessageId: SL_E_TKA_FAILED_GRANT_PARSING
//
// MessageText:
//
// The Software Licensing Service reported that the token-based activation license content is invalid.
//
#define SL_E_TKA_FAILED_GRANT_PARSING    ((HRESULT)0xC004F30CL)

//
// MessageId: SL_E_TKA_INVALID_THUMBPRINT
//
// MessageText:
//
// The Software Licensing Service reported that the computer could not be activated. The thumbprint is invalid.
//
#define SL_E_TKA_INVALID_THUMBPRINT      ((HRESULT)0xC004F30DL)

//
// MessageId: SL_E_TKA_THUMBPRINT_CERT_NOT_FOUND
//
// MessageText:
//
// The Software Licensing Service reported that the computer could not be activated. The thumbprint does not match any certificate.
//
#define SL_E_TKA_THUMBPRINT_CERT_NOT_FOUND ((HRESULT)0xC004F30EL)

//
// MessageId: SL_E_TKA_CRITERIA_MISMATCH
//
// MessageText:
//
// The Software Licensing Service reported that the computer could not be activated. The certificate does not match the criteria specified in the issuance license.
//
#define SL_E_TKA_CRITERIA_MISMATCH       ((HRESULT)0xC004F30FL)

//
// MessageId: SL_E_TKA_TPID_MISMATCH
//
// MessageText:
//
// The Software Licensing Service reported that the computer could not be activated. The certificate does not match the trust point identifier (TPID) specified in the issuance license.
//
#define SL_E_TKA_TPID_MISMATCH           ((HRESULT)0xC004F310L)

//
// MessageId: SL_E_TKA_SOFT_CERT_DISALLOWED
//
// MessageText:
//
// The Software Licensing Service reported that the computer could not be activated. A soft token cannot be used for activation.
//
#define SL_E_TKA_SOFT_CERT_DISALLOWED    ((HRESULT)0xC004F311L)

//
// MessageId: SL_E_TKA_SOFT_CERT_INVALID
//
// MessageText:
//
// The Software Licensing Service reported that the computer could not be activated. The certificate cannot be used because its private key is exportable.
//
#define SL_E_TKA_SOFT_CERT_INVALID       ((HRESULT)0xC004F312L)

//
// MessageId: SL_E_TKA_CERT_CNG_NOT_AVAILABLE
//
// MessageText:
//
// The Software Licensing Service reported that the CNG encryption library could not be loaded.  The current certificate may not be available on this version of Windows.
//
#define SL_E_TKA_CERT_CNG_NOT_AVAILABLE  ((HRESULT)0xC004F313L)

//
// End of Token-Based activation errors
//
//
// MessageId: E_RM_UNKNOWN_ERROR
//
// MessageText:
//
// A networking problem has occurred while activating your copy of Windows.
//
#define E_RM_UNKNOWN_ERROR               ((HRESULT)0xC004FC03L)

//
// MessageId: SL_I_TIMEBASED_VALIDITY_PERIOD
//
// MessageText:
//
// The Software Licensing Service reported that the application is running within the timebased validity period.
//
#define SL_I_TIMEBASED_VALIDITY_PERIOD   ((HRESULT)0x4004FC04L)

//
// MessageId: SL_I_PERPETUAL_OOB_GRACE_PERIOD
//
// MessageText:
//
// The Software Licensing Service reported that the application has a perpetual grace period.
//
#define SL_I_PERPETUAL_OOB_GRACE_PERIOD  ((HRESULT)0x4004FC05L)

//
// MessageId: SL_I_TIMEBASED_EXTENDED_GRACE_PERIOD
//
// MessageText:
//
// The Software Licensing Service reported that the application is running within the valid extended grace period.
//
#define SL_I_TIMEBASED_EXTENDED_GRACE_PERIOD ((HRESULT)0x4004FC06L)

//
// MessageId: SL_E_VALIDITY_PERIOD_EXPIRED
//
// MessageText:
//
// The Software Licensing Service reported that the validity period expired.
//
#define SL_E_VALIDITY_PERIOD_EXPIRED     ((HRESULT)0xC004FC07L)

//
// MessageId: SL_E_TAMPER_RECOVERY_REQUIRES_ACTIVATION
//
// MessageText:
//
// The Software Licensing Service reported that activation is required to recover from tampering of SL Service trusted store.
//
#define SL_E_TAMPER_RECOVERY_REQUIRES_ACTIVATION ((HRESULT)0xC004FE00L)

// ******************
// ******************
//
// The following errors are mappings to the SPAPI error strings for UX messaging
//
// ******************
// ******************

//////////////////////////////////////////////////////////
//SP_PUB_GENERAL_ZONE
//////////////////////////////////////////////////////////

//
// MessageId: SL_REMAPPING_SP_PUB_GENERAL_NOT_INITIALIZED
//
// MessageText:
//
// The security processor reported an initialization error.
//
#define SL_REMAPPING_SP_PUB_GENERAL_NOT_INITIALIZED ((HRESULT)0xC004D101L)

//
// MessageId: SL_REMAPPING_SP_STATUS_SYSTEM_TIME_SKEWED
//
// MessageText:
//
// The security processor reported that the machine time is inconsistent with the trusted time.
//
#define SL_REMAPPING_SP_STATUS_SYSTEM_TIME_SKEWED ((HRESULT)0x8004D102L)

//
// MessageId: SL_REMAPPING_SP_STATUS_GENERIC_FAILURE
//
// MessageText:
//
// The security processor reported that an error has occurred.
//
#define SL_REMAPPING_SP_STATUS_GENERIC_FAILURE ((HRESULT)0xC004D103L)

//
// MessageId: SL_REMAPPING_SP_STATUS_INVALIDARG
//
// MessageText:
//
// The security processor reported that invalid data was used.
//
#define SL_REMAPPING_SP_STATUS_INVALIDARG ((HRESULT)0xC004D104L)

//
// MessageId: SL_REMAPPING_SP_STATUS_ALREADY_EXISTS
//
// MessageText:
//
// The security processor reported that the value already exists.
//
#define SL_REMAPPING_SP_STATUS_ALREADY_EXISTS ((HRESULT)0xC004D105L)

//
// MessageId: SL_REMAPPING_SP_STATUS_INSUFFICIENT_BUFFER
//
// MessageText:
//
// The security processor reported that an insufficient buffer was used.
//
#define SL_REMAPPING_SP_STATUS_INSUFFICIENT_BUFFER ((HRESULT)0xC004D107L)

//
// MessageId: SL_REMAPPING_SP_STATUS_INVALIDDATA
//
// MessageText:
//
// The security processor reported that invalid data was used.
//
#define SL_REMAPPING_SP_STATUS_INVALIDDATA ((HRESULT)0xC004D108L)

//
// MessageId: SL_REMAPPING_SP_STATUS_INVALID_SPAPI_CALL
//
// MessageText:
//
// The security processor reported that an invalid call was made.
//
#define SL_REMAPPING_SP_STATUS_INVALID_SPAPI_CALL ((HRESULT)0xC004D109L)

//
// MessageId: SL_REMAPPING_SP_STATUS_INVALID_SPAPI_VERSION
//
// MessageText:
//
// The security processor reported a version mismatch error.
//
#define SL_REMAPPING_SP_STATUS_INVALID_SPAPI_VERSION ((HRESULT)0xC004D10AL)

//
// MessageId: SL_REMAPPING_SP_STATUS_DEBUGGER_DETECTED
//
// MessageText:
//
// The security processor cannot operate while a debugger is attached.
//
#define SL_REMAPPING_SP_STATUS_DEBUGGER_DETECTED ((HRESULT)0x8004D10BL)


//////////////////////////////////////////////////////////
// SP_PUB_TS_ZONE
//////////////////////////////////////////////////////////

//
// MessageId: SL_REMAPPING_SP_PUB_TS_TAMPERED
//
// MessageText:
//
// The security processor reported that the trusted data store was tampered.
//
#define SL_REMAPPING_SP_PUB_TS_TAMPERED  ((HRESULT)0xC004D301L)

//
// MessageId: SL_REMAPPING_SP_PUB_TS_REARMED
//
// MessageText:
//
// The security processor reported that the trusted data store was rearmed.
//
#define SL_REMAPPING_SP_PUB_TS_REARMED   ((HRESULT)0xC004D302L)

//
// MessageId: SL_REMAPPING_SP_PUB_TS_RECREATED
//
// MessageText:
//
// The security processor reported that the trusted store has been recreated.
//
#define SL_REMAPPING_SP_PUB_TS_RECREATED ((HRESULT)0xC004D303L)

//
// MessageId: SL_REMAPPING_SP_PUB_TS_ENTRY_KEY_NOT_FOUND
//
// MessageText:
//
// The security processor reported that entry key was not found in the trusted data store.
//
#define SL_REMAPPING_SP_PUB_TS_ENTRY_KEY_NOT_FOUND ((HRESULT)0xC004D304L)

//
// MessageId: SL_REMAPPING_SP_PUB_TS_ENTRY_KEY_ALREADY_EXISTS
//
// MessageText:
//
// The security processor reported that the entry key already exists in the trusted data store.
//
#define SL_REMAPPING_SP_PUB_TS_ENTRY_KEY_ALREADY_EXISTS ((HRESULT)0xC004D305L)

//
// MessageId: SL_REMAPPING_SP_PUB_TS_ENTRY_KEY_SIZE_TOO_BIG
//
// MessageText:
//
// The security processor reported that the entry key is too big to fit in the trusted data store.
//
#define SL_REMAPPING_SP_PUB_TS_ENTRY_KEY_SIZE_TOO_BIG ((HRESULT)0xC004D306L)

//
// MessageId: SL_REMAPPING_SP_PUB_TS_MAX_REARM_REACHED
//
// MessageText:
//
// The security processor reported that the maximum allowed number of re-arms has been exceeded.  You must re-install the OS before trying to re-arm again.
//
#define SL_REMAPPING_SP_PUB_TS_MAX_REARM_REACHED ((HRESULT)0xC004D307L)

//
// MessageId: SL_REMAPPING_SP_PUB_TS_DATA_SIZE_TOO_BIG
//
// MessageText:
//
// The security processor has reported that entry data size is too big to fit in the trusted data store.
//
#define SL_REMAPPING_SP_PUB_TS_DATA_SIZE_TOO_BIG ((HRESULT)0xC004D308L)

//
// MessageId: SL_REMAPPING_SP_PUB_TS_INVALID_HW_BINDING
//
// MessageText:
//
// The security processor has reported that the machine has gone out of hardware tolerance.
//
#define SL_REMAPPING_SP_PUB_TS_INVALID_HW_BINDING ((HRESULT)0xC004D309L)

//
// MessageId: SL_REMAPPING_SP_PUB_TIMER_ALREADY_EXISTS
//
// MessageText:
//
// The security processor has reported that the secure timer already exists.
//
#define SL_REMAPPING_SP_PUB_TIMER_ALREADY_EXISTS ((HRESULT)0xC004D30AL)

//
// MessageId: SL_REMAPPING_SP_PUB_TIMER_NOT_FOUND
//
// MessageText:
//
// The security processor has reported that the secure timer was not found.
//
#define SL_REMAPPING_SP_PUB_TIMER_NOT_FOUND ((HRESULT)0xC004D30BL)

//
// MessageId: SL_REMAPPING_SP_PUB_TIMER_EXPIRED
//
// MessageText:
//
// The security processor has reported that the secure timer has expired.
//
#define SL_REMAPPING_SP_PUB_TIMER_EXPIRED ((HRESULT)0xC004D30CL)

//
// MessageId: SL_REMAPPING_SP_PUB_TIMER_NAME_SIZE_TOO_BIG
//
// MessageText:
//
// The security processor has reported that the secure timer name is too long.
//
#define SL_REMAPPING_SP_PUB_TIMER_NAME_SIZE_TOO_BIG ((HRESULT)0xC004D30DL)

//
// MessageId: SL_REMAPPING_SP_PUB_TS_FULL
//
// MessageText:
//
// The security processor reported that the trusted data store is full.
//
#define SL_REMAPPING_SP_PUB_TS_FULL      ((HRESULT)0xC004D30EL)


//////////////////////////////////////////////////////////
// SP_PUB_MODAUTH_ZONE
//////////////////////////////////////////////////////////

//
// MessageId: SL_REMAPPING_SP_PUB_TAMPER_MODULE_AUTHENTICATION
//
// MessageText:
//
// The security processor reported a system file mismatch error.
//
#define SL_REMAPPING_SP_PUB_TAMPER_MODULE_AUTHENTICATION ((HRESULT)0xC004D401L)

//
// MessageId: SL_REMAPPING_SP_PUB_TAMPER_SECURITY_PROCESSOR_PATCHED
//
// MessageText:
//
// The security processor reported a system file mismatch error.
//
#define SL_REMAPPING_SP_PUB_TAMPER_SECURITY_PROCESSOR_PATCHED ((HRESULT)0xC004D402L)


//////////////////////////////////////////////////////////
// SP_PUB_KM_CACHE_ZONE (Error codes)
//////////////////////////////////////////////////////////

//
// MessageId: SL_REMAPPING_SP_PUB_KM_CACHE_TAMPER
//
// MessageText:
//
// The security processor reported an error with the kernel data.
//
#define SL_REMAPPING_SP_PUB_KM_CACHE_TAMPER ((HRESULT)0xC004D501L)

#endif//_SLERROR_

