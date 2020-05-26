/*++

Copyright (c) 2004 Microsoft Corporation

Module Name:

    wlanapi.h

Abstract:

    Definitions and data strcutures for wlan auto config client side API.

Environment:

    User mode only

Revision History:

    11/8/2004    created

--*/

#ifndef _WLAN_WLANAPI_H
#define _WLAN_WLANAPI_H

#pragma once

#include <l2cmn.h>
#include <windot11.h>
#include <EapTypes.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef _WIN32_WINNT
#error _WIN32_WINNT must be defined to use WLAN API. It could be either _WIN32_WINNT_WIN7, _WIN32_WINNT_VISTA, or _WIN32_WINNT_WINXP, and so on.
#endif

// major version is in low-order WORD,
// minor version is in high-order WORD
#define WLAN_API_VERSION_1_0    0x00000001
#define WLAN_API_VERSION_2_0    0x00000002
#define WLAN_API_VERSION_MAJOR(_v)  ((_v) & 0xffff)
#define WLAN_API_VERSION_MINOR(_v)  (((DWORD)(_v)) >> 16)
#define WLAN_API_MAKE_VERSION(_major, _minor)   (((DWORD)(_minor)) << 16 | (_major))

// WLAN API is version 1 in all WinXP
// and version 2 in Vista
#if (_WIN32_WINNT >= _WIN32_WINNT_VISTA)
    #define WLAN_API_VERSION        WLAN_API_VERSION_2_0
#else
    #if (_WIN32_WINNT >= _WIN32_WINNT_WINXP)
        #define WLAN_API_VERSION        WLAN_API_VERSION_1_0
    #else
        #error WLAN API is not supported on platform earlier than Windows XP.
    #endif // (_WIN32_WINNT >= _WIN32_WINNT_WINXP)
#endif  // (_WIN32_WINNT >= _WIN32_WINNT_VISTA)

// maximum length of name, in characters
#define WLAN_MAX_NAME_LENGTH L2_PROFILE_MAX_NAME_LENGTH

// profile flags
#define WLAN_PROFILE_GROUP_POLICY                   0x00000001
#define WLAN_PROFILE_USER                           0x00000002
#define WLAN_PROFILE_GET_PLAINTEXT_KEY		    0x00000004
// the following flags are only used for WlanSaveTemporaryProfile API
#define WLAN_PROFILE_CONNECTION_MODE_SET_BY_CLIENT  0x00010000
#define WLAN_PROFILE_CONNECTION_MODE_AUTO           0x00020000

// EAPHost data storage flags
#define WLAN_SET_EAPHOST_DATA_ALL_USERS 0x00000001

// struct WLAN_PROFILE_INFO defines the basic information of an 802.11 network profile
typedef struct _WLAN_PROFILE_INFO {
    WCHAR strProfileName[WLAN_MAX_NAME_LENGTH];
    DWORD dwFlags;
} WLAN_PROFILE_INFO, *PWLAN_PROFILE_INFO;


typedef struct _DOT11_NETWORK {
    DOT11_SSID dot11Ssid;
    DOT11_BSS_TYPE dot11BssType;
} DOT11_NETWORK, *PDOT11_NETWORK;

// proximity service discovery IE specific definitions

// the maximum data size in one PSD IE data entry (payload), in bytes
#define DOT11_PSD_IE_MAX_DATA_SIZE 240       
// the maximum number of PSD IE data entries
#define DOT11_PSD_IE_MAX_ENTRY_NUMBER 5       

typedef struct _WLAN_RAW_DATA {
    // size of the data blob
    DWORD dwDataSize;
#ifdef __midl
    [unique, size_is(dwDataSize)] BYTE DataBlob[*];
#else
    BYTE DataBlob[1];
#endif
} WLAN_RAW_DATA, *PWLAN_RAW_DATA;

typedef struct _WLAN_RAW_DATA_LIST {
    DWORD dwTotalSize;
    DWORD dwNumberOfItems;
    struct {
        // the beginning of the data blob
        // the offset is w.r.t. the beginning of the entry
        DWORD dwDataOffset;
        // size of the data blob
        DWORD dwDataSize;
    } DataList[1];
} WLAN_RAW_DATA_LIST, *PWLAN_RAW_DATA_LIST;

typedef enum _WLAN_CONNECTION_MODE {
    wlan_connection_mode_profile = 0,
    wlan_connection_mode_temporary_profile,
    wlan_connection_mode_discovery_secure,
    wlan_connection_mode_discovery_unsecure,
    wlan_connection_mode_auto,
    wlan_connection_mode_invalid
} WLAN_CONNECTION_MODE, *PWLAN_CONNECTION_MODE;

// Wlan reason code 
//
// They are put in the following range:
// each component got 0x1000 numbers, within which:
// the first half is for capability mismatch reason, 
// the second half for connect/security error reason.
//
// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
// IMPORTANT: If you add/remove a reason code, please
// modify the corresponding entry in wlanres.h and wlanres.rc
// and the corresponding mapping in wlanapi.c
typedef DWORD WLAN_REASON_CODE, *PWLAN_REASON_CODE;
#define WLAN_REASON_CODE_SUCCESS                L2_REASON_CODE_SUCCESS
// general codes
#define WLAN_REASON_CODE_UNKNOWN                L2_REASON_CODE_UNKNOWN

#define WLAN_REASON_CODE_RANGE_SIZE             L2_REASON_CODE_GROUP_SIZE
#define WLAN_REASON_CODE_BASE                   L2_REASON_CODE_DOT11_AC_BASE

// range for Auto Config
//
#define WLAN_REASON_CODE_AC_BASE                L2_REASON_CODE_DOT11_AC_BASE
#define WLAN_REASON_CODE_AC_CONNECT_BASE        (WLAN_REASON_CODE_AC_BASE + WLAN_REASON_CODE_RANGE_SIZE / 2)
#define WLAN_REASON_CODE_AC_END                 (WLAN_REASON_CODE_AC_BASE + WLAN_REASON_CODE_RANGE_SIZE - 1)

// range for profile manager
// it has profile adding failure reason codes, but may not have 
// connection reason codes
//
#define WLAN_REASON_CODE_PROFILE_BASE           L2_REASON_CODE_PROFILE_BASE
#define WLAN_REASON_CODE_PROFILE_CONNECT_BASE   (WLAN_REASON_CODE_PROFILE_BASE + WLAN_REASON_CODE_RANGE_SIZE / 2)
#define WLAN_REASON_CODE_PROFILE_END            (WLAN_REASON_CODE_PROFILE_BASE + WLAN_REASON_CODE_RANGE_SIZE - 1)

// range for MSM
//
#define WLAN_REASON_CODE_MSM_BASE               L2_REASON_CODE_DOT11_MSM_BASE
#define WLAN_REASON_CODE_MSM_CONNECT_BASE       (WLAN_REASON_CODE_MSM_BASE + WLAN_REASON_CODE_RANGE_SIZE / 2)
#define WLAN_REASON_CODE_MSM_END                (WLAN_REASON_CODE_MSM_BASE + WLAN_REASON_CODE_RANGE_SIZE - 1)

// range for MSMSEC
//
#define WLAN_REASON_CODE_MSMSEC_BASE            L2_REASON_CODE_DOT11_SECURITY_BASE
#define WLAN_REASON_CODE_MSMSEC_CONNECT_BASE    (WLAN_REASON_CODE_MSMSEC_BASE + WLAN_REASON_CODE_RANGE_SIZE / 2)
#define WLAN_REASON_CODE_MSMSEC_END             (WLAN_REASON_CODE_MSMSEC_BASE + WLAN_REASON_CODE_RANGE_SIZE - 1)

// AC network incompatible reason codes
//
#define WLAN_REASON_CODE_NETWORK_NOT_COMPATIBLE (WLAN_REASON_CODE_AC_BASE +1)
#define WLAN_REASON_CODE_PROFILE_NOT_COMPATIBLE (WLAN_REASON_CODE_AC_BASE +2)

// AC connect reason code
//
#define WLAN_REASON_CODE_NO_AUTO_CONNECTION     (WLAN_REASON_CODE_AC_CONNECT_BASE +1)
#define WLAN_REASON_CODE_NOT_VISIBLE            (WLAN_REASON_CODE_AC_CONNECT_BASE +2)
#define WLAN_REASON_CODE_GP_DENIED              (WLAN_REASON_CODE_AC_CONNECT_BASE +3)
#define WLAN_REASON_CODE_USER_DENIED            (WLAN_REASON_CODE_AC_CONNECT_BASE +4)
#define WLAN_REASON_CODE_BSS_TYPE_NOT_ALLOWED   (WLAN_REASON_CODE_AC_CONNECT_BASE +5)
#define WLAN_REASON_CODE_IN_FAILED_LIST         (WLAN_REASON_CODE_AC_CONNECT_BASE +6)
#define WLAN_REASON_CODE_IN_BLOCKED_LIST        (WLAN_REASON_CODE_AC_CONNECT_BASE +7)
#define WLAN_REASON_CODE_SSID_LIST_TOO_LONG     (WLAN_REASON_CODE_AC_CONNECT_BASE +8)
#define WLAN_REASON_CODE_CONNECT_CALL_FAIL      (WLAN_REASON_CODE_AC_CONNECT_BASE +9)
#define WLAN_REASON_CODE_SCAN_CALL_FAIL         (WLAN_REASON_CODE_AC_CONNECT_BASE +10)
#define WLAN_REASON_CODE_NETWORK_NOT_AVAILABLE    (WLAN_REASON_CODE_AC_CONNECT_BASE +11)
#define WLAN_REASON_CODE_PROFILE_CHANGED_OR_DELETED \
                                                (WLAN_REASON_CODE_AC_CONNECT_BASE +12)
#define WLAN_REASON_CODE_KEY_MISMATCH           (WLAN_REASON_CODE_AC_CONNECT_BASE + 13)
#define WLAN_REASON_CODE_USER_NOT_RESPOND       (WLAN_REASON_CODE_AC_CONNECT_BASE + 14)
#define WLAN_REASON_CODE_AP_PROFILE_NOT_ALLOWED_FOR_CLIENT \
                                                (WLAN_REASON_CODE_AC_CONNECT_BASE + 15)
#define WLAN_REASON_CODE_AP_PROFILE_NOT_ALLOWED (WLAN_REASON_CODE_AC_CONNECT_BASE + 16)

// Profile validation errors
//
#define WLAN_REASON_CODE_INVALID_PROFILE_SCHEMA (WLAN_REASON_CODE_PROFILE_BASE +1)
#define WLAN_REASON_CODE_PROFILE_MISSING        (WLAN_REASON_CODE_PROFILE_BASE +2)
#define WLAN_REASON_CODE_INVALID_PROFILE_NAME   (WLAN_REASON_CODE_PROFILE_BASE +3)
#define WLAN_REASON_CODE_INVALID_PROFILE_TYPE   (WLAN_REASON_CODE_PROFILE_BASE +4)
#define WLAN_REASON_CODE_INVALID_PHY_TYPE       (WLAN_REASON_CODE_PROFILE_BASE +5)
#define WLAN_REASON_CODE_MSM_SECURITY_MISSING   (WLAN_REASON_CODE_PROFILE_BASE +6)
#define WLAN_REASON_CODE_IHV_SECURITY_NOT_SUPPORTED \
                                                (WLAN_REASON_CODE_PROFILE_BASE +7)
#define WLAN_REASON_CODE_IHV_OUI_MISMATCH       (WLAN_REASON_CODE_PROFILE_BASE +8)
        // IHV OUI not present but there is IHV settings in profile
#define WLAN_REASON_CODE_IHV_OUI_MISSING        (WLAN_REASON_CODE_PROFILE_BASE +9)
        // IHV OUI is present but there is no IHV settings in profile
#define WLAN_REASON_CODE_IHV_SETTINGS_MISSING   (WLAN_REASON_CODE_PROFILE_BASE +10)
        // both/conflict MSMSec and IHV security settings exist in profile 
#define WLAN_REASON_CODE_CONFLICT_SECURITY      (WLAN_REASON_CODE_PROFILE_BASE +11)
        // no IHV or MSMSec security settings in profile
#define WLAN_REASON_CODE_SECURITY_MISSING       (WLAN_REASON_CODE_PROFILE_BASE +12)
#define WLAN_REASON_CODE_INVALID_BSS_TYPE       (WLAN_REASON_CODE_PROFILE_BASE +13)
#define WLAN_REASON_CODE_INVALID_ADHOC_CONNECTION_MODE \
                                                (WLAN_REASON_CODE_PROFILE_BASE +14)
#define WLAN_REASON_CODE_NON_BROADCAST_SET_FOR_ADHOC \
                                                (WLAN_REASON_CODE_PROFILE_BASE +15)
#define WLAN_REASON_CODE_AUTO_SWITCH_SET_FOR_ADHOC \
                                                (WLAN_REASON_CODE_PROFILE_BASE +16)
#define WLAN_REASON_CODE_AUTO_SWITCH_SET_FOR_MANUAL_CONNECTION \
                                                (WLAN_REASON_CODE_PROFILE_BASE +17)
#define WLAN_REASON_CODE_IHV_SECURITY_ONEX_MISSING \
                                                (WLAN_REASON_CODE_PROFILE_BASE +18)
#define WLAN_REASON_CODE_PROFILE_SSID_INVALID   (WLAN_REASON_CODE_PROFILE_BASE +19)
#define WLAN_REASON_CODE_TOO_MANY_SSID          (WLAN_REASON_CODE_PROFILE_BASE +20)
#define WLAN_REASON_CODE_IHV_CONNECTIVITY_NOT_SUPPORTED \
                                                (WLAN_REASON_CODE_PROFILE_BASE +21)
#define WLAN_REASON_CODE_BAD_MAX_NUMBER_OF_CLIENTS_FOR_AP \
                                                (WLAN_REASON_CODE_PROFILE_BASE +22)
#define WLAN_REASON_CODE_INVALID_CHANNEL        (WLAN_REASON_CODE_PROFILE_BASE +23)
#define WLAN_REASON_CODE_OPERATION_MODE_NOT_SUPPORTED \
                                                (WLAN_REASON_CODE_PROFILE_BASE +24)
#define WLAN_REASON_CODE_AUTO_AP_PROFILE_NOT_ALLOWED \
                                                (WLAN_REASON_CODE_PROFILE_BASE +25)
#define WLAN_REASON_CODE_AUTO_CONNECTION_NOT_ALLOWED \
                                                (WLAN_REASON_CODE_PROFILE_BASE +26)

// MSM network incompatible reasons
//
#define WLAN_REASON_CODE_UNSUPPORTED_SECURITY_SET_BY_OS \
                                                (WLAN_REASON_CODE_MSM_BASE +1)
#define WLAN_REASON_CODE_UNSUPPORTED_SECURITY_SET \
                                                (WLAN_REASON_CODE_MSM_BASE +2)
#define WLAN_REASON_CODE_BSS_TYPE_UNMATCH       (WLAN_REASON_CODE_MSM_BASE +3)
#define WLAN_REASON_CODE_PHY_TYPE_UNMATCH       (WLAN_REASON_CODE_MSM_BASE +4)
#define WLAN_REASON_CODE_DATARATE_UNMATCH       (WLAN_REASON_CODE_MSM_BASE +5)

// MSM connection failure reasons, to be defined
// failure reason codes
//
        // user called to disconnect
#define WLAN_REASON_CODE_USER_CANCELLED         (WLAN_REASON_CODE_MSM_CONNECT_BASE+1)
        // got disconnect while associating
#define WLAN_REASON_CODE_ASSOCIATION_FAILURE    (WLAN_REASON_CODE_MSM_CONNECT_BASE+2)
        // timeout for association
#define WLAN_REASON_CODE_ASSOCIATION_TIMEOUT    (WLAN_REASON_CODE_MSM_CONNECT_BASE+3)
        // pre-association security completed with failure
#define WLAN_REASON_CODE_PRE_SECURITY_FAILURE   (WLAN_REASON_CODE_MSM_CONNECT_BASE+4)
        // fail to start post-association security
#define WLAN_REASON_CODE_START_SECURITY_FAILURE (WLAN_REASON_CODE_MSM_CONNECT_BASE+5)
        // post-association security completed with failure
#define WLAN_REASON_CODE_SECURITY_FAILURE       (WLAN_REASON_CODE_MSM_CONNECT_BASE+6)
        // security watchdog timeout
#define WLAN_REASON_CODE_SECURITY_TIMEOUT       (WLAN_REASON_CODE_MSM_CONNECT_BASE+7)
        // got disconnect from driver when roaming
#define WLAN_REASON_CODE_ROAMING_FAILURE        (WLAN_REASON_CODE_MSM_CONNECT_BASE+8)
        // failed to start security for roaming
#define WLAN_REASON_CODE_ROAMING_SECURITY_FAILURE   (WLAN_REASON_CODE_MSM_CONNECT_BASE+9)
        // failed to start security for adhoc-join
#define WLAN_REASON_CODE_ADHOC_SECURITY_FAILURE     (WLAN_REASON_CODE_MSM_CONNECT_BASE+10)
        // got disconnection from driver
#define WLAN_REASON_CODE_DRIVER_DISCONNECTED        (WLAN_REASON_CODE_MSM_CONNECT_BASE+11)
        // driver operation failed
#define WLAN_REASON_CODE_DRIVER_OPERATION_FAILURE   (WLAN_REASON_CODE_MSM_CONNECT_BASE+12)
        // Ihv service is not available
#define WLAN_REASON_CODE_IHV_NOT_AVAILABLE    (WLAN_REASON_CODE_MSM_CONNECT_BASE+13)
        // Response from ihv timed out
#define WLAN_REASON_CODE_IHV_NOT_RESPONDING   (WLAN_REASON_CODE_MSM_CONNECT_BASE+14)
        // Timed out waiting for driver to disconnect
#define WLAN_REASON_CODE_DISCONNECT_TIMEOUT   (WLAN_REASON_CODE_MSM_CONNECT_BASE+15)
        // An internal error prevented the operation from being completed.
#define WLAN_REASON_CODE_INTERNAL_FAILURE     (WLAN_REASON_CODE_MSM_CONNECT_BASE+16)
        // UI Request timed out.
#define WLAN_REASON_CODE_UI_REQUEST_TIMEOUT   (WLAN_REASON_CODE_MSM_CONNECT_BASE+17)
        // Roaming too often, post security is not completed after 5 times.
#define WLAN_REASON_CODE_TOO_MANY_SECURITY_ATTEMPTS (WLAN_REASON_CODE_MSM_CONNECT_BASE+18)
        // Failed to start AP
#define WLAN_REASON_CODE_AP_STARTING_FAILURE    (WLAN_REASON_CODE_MSM_CONNECT_BASE+19)
        
// MSMSEC reason codes
//

#define WLAN_REASON_CODE_MSMSEC_MIN                         WLAN_REASON_CODE_MSMSEC_BASE

// Key index specified is not valid
#define WLAN_REASON_CODE_MSMSEC_PROFILE_INVALID_KEY_INDEX   (WLAN_REASON_CODE_MSMSEC_BASE+1)
// Key required, PSK present
#define WLAN_REASON_CODE_MSMSEC_PROFILE_PSK_PRESENT         (WLAN_REASON_CODE_MSMSEC_BASE+2)
// Invalid key length
#define WLAN_REASON_CODE_MSMSEC_PROFILE_KEY_LENGTH          (WLAN_REASON_CODE_MSMSEC_BASE+3)
// Invalid PSK length
#define WLAN_REASON_CODE_MSMSEC_PROFILE_PSK_LENGTH          (WLAN_REASON_CODE_MSMSEC_BASE+4)
// No auth/cipher specified
#define WLAN_REASON_CODE_MSMSEC_PROFILE_NO_AUTH_CIPHER_SPECIFIED        (WLAN_REASON_CODE_MSMSEC_BASE+5)
// Too many auth/cipher specified
#define WLAN_REASON_CODE_MSMSEC_PROFILE_TOO_MANY_AUTH_CIPHER_SPECIFIED  (WLAN_REASON_CODE_MSMSEC_BASE+6)
// Profile contains duplicate auth/cipher
#define WLAN_REASON_CODE_MSMSEC_PROFILE_DUPLICATE_AUTH_CIPHER           (WLAN_REASON_CODE_MSMSEC_BASE+7)
// Profile raw data is invalid (1x or key data)
#define WLAN_REASON_CODE_MSMSEC_PROFILE_RAWDATA_INVALID                 (WLAN_REASON_CODE_MSMSEC_BASE+8)
// Invalid auth/cipher combination
#define WLAN_REASON_CODE_MSMSEC_PROFILE_INVALID_AUTH_CIPHER             (WLAN_REASON_CODE_MSMSEC_BASE+9)
// 802.1x disabled when it's required to be enabled
#define WLAN_REASON_CODE_MSMSEC_PROFILE_ONEX_DISABLED                   (WLAN_REASON_CODE_MSMSEC_BASE+10)
// 802.1x enabled when it's required to be disabled
#define WLAN_REASON_CODE_MSMSEC_PROFILE_ONEX_ENABLED                    (WLAN_REASON_CODE_MSMSEC_BASE+11)
#define WLAN_REASON_CODE_MSMSEC_PROFILE_INVALID_PMKCACHE_MODE           (WLAN_REASON_CODE_MSMSEC_BASE+12)
#define WLAN_REASON_CODE_MSMSEC_PROFILE_INVALID_PMKCACHE_SIZE           (WLAN_REASON_CODE_MSMSEC_BASE+13)
#define WLAN_REASON_CODE_MSMSEC_PROFILE_INVALID_PMKCACHE_TTL            (WLAN_REASON_CODE_MSMSEC_BASE+14)
#define WLAN_REASON_CODE_MSMSEC_PROFILE_INVALID_PREAUTH_MODE            (WLAN_REASON_CODE_MSMSEC_BASE+15)
#define WLAN_REASON_CODE_MSMSEC_PROFILE_INVALID_PREAUTH_THROTTLE        (WLAN_REASON_CODE_MSMSEC_BASE+16)
// PreAuth enabled when PMK cache is disabled
#define WLAN_REASON_CODE_MSMSEC_PROFILE_PREAUTH_ONLY_ENABLED            (WLAN_REASON_CODE_MSMSEC_BASE+17)
// Capability matching failed at network
#define WLAN_REASON_CODE_MSMSEC_CAPABILITY_NETWORK          (WLAN_REASON_CODE_MSMSEC_BASE+18)
// Capability matching failed at NIC
#define WLAN_REASON_CODE_MSMSEC_CAPABILITY_NIC              (WLAN_REASON_CODE_MSMSEC_BASE+19)
// Capability matching failed at profile
#define WLAN_REASON_CODE_MSMSEC_CAPABILITY_PROFILE          (WLAN_REASON_CODE_MSMSEC_BASE+20)
// Network does not support specified discovery type
#define WLAN_REASON_CODE_MSMSEC_CAPABILITY_DISCOVERY        (WLAN_REASON_CODE_MSMSEC_BASE+21)
// Passphrase contains invalid character
#define WLAN_REASON_CODE_MSMSEC_PROFILE_PASSPHRASE_CHAR     (WLAN_REASON_CODE_MSMSEC_BASE+22)
// Key material contains invalid character
#define WLAN_REASON_CODE_MSMSEC_PROFILE_KEYMATERIAL_CHAR     (WLAN_REASON_CODE_MSMSEC_BASE+23)
// Wrong key type specified for the auth/cipher pair
#define WLAN_REASON_CODE_MSMSEC_PROFILE_WRONG_KEYTYPE     (WLAN_REASON_CODE_MSMSEC_BASE+24)
// "Mixed cell" suspected (AP not beaconing privacy, we have privacy enabled profile)
#define WLAN_REASON_CODE_MSMSEC_MIXED_CELL                (WLAN_REASON_CODE_MSMSEC_BASE+25)
// Auth timers or number of timeouts in profile is incorrect
#define WLAN_REASON_CODE_MSMSEC_PROFILE_AUTH_TIMERS_INVALID (WLAN_REASON_CODE_MSMSEC_BASE+26)
// Group key update interval in profile is incorrect
#define WLAN_REASON_CODE_MSMSEC_PROFILE_INVALID_GKEY_INTV   (WLAN_REASON_CODE_MSMSEC_BASE+27)
// "Transition network" suspected, trying legacy 802.11 security
#define WLAN_REASON_CODE_MSMSEC_TRANSITION_NETWORK          (WLAN_REASON_CODE_MSMSEC_BASE+28)
// Key contains characters which do not map to ASCII
#define WLAN_REASON_CODE_MSMSEC_PROFILE_KEY_UNMAPPED_CHAR   (WLAN_REASON_CODE_MSMSEC_BASE+29)
// Capability matching failed at profile (auth not found)
#define WLAN_REASON_CODE_MSMSEC_CAPABILITY_PROFILE_AUTH     (WLAN_REASON_CODE_MSMSEC_BASE+30)
// Capability matching failed at profile (cipher not found)
#define WLAN_REASON_CODE_MSMSEC_CAPABILITY_PROFILE_CIPHER   (WLAN_REASON_CODE_MSMSEC_BASE+31)
// Safe mode value is invalid
#define WLAN_REASON_CODE_MSMSEC_PROFILE_SAFE_MODE           (WLAN_REASON_CODE_MSMSEC_BASE+32)
// Profile requires safe mode, not supported by NIC
#define WLAN_REASON_CODE_MSMSEC_CAPABILITY_PROFILE_SAFE_MODE_NIC (WLAN_REASON_CODE_MSMSEC_BASE+33)
// Profile requires safe mode, not supported by network
#define WLAN_REASON_CODE_MSMSEC_CAPABILITY_PROFILE_SAFE_MODE_NW  (WLAN_REASON_CODE_MSMSEC_BASE+34)
// Profile has unsupported auth
#define WLAN_REASON_CODE_MSMSEC_PROFILE_UNSUPPORTED_AUTH    (WLAN_REASON_CODE_MSMSEC_BASE+35)
// Profile has unsupported cipher
#define WLAN_REASON_CODE_MSMSEC_PROFILE_UNSUPPORTED_CIPHER  (WLAN_REASON_CODE_MSMSEC_BASE+36)

// Failed to queue UI request
#define WLAN_REASON_CODE_MSMSEC_UI_REQUEST_FAILURE          (WLAN_REASON_CODE_MSMSEC_CONNECT_BASE+1)
// 802.1x authentication did not start within configured time 
#define WLAN_REASON_CODE_MSMSEC_AUTH_START_TIMEOUT          (WLAN_REASON_CODE_MSMSEC_CONNECT_BASE+2)
// 802.1x authentication did not complete within configured time
#define WLAN_REASON_CODE_MSMSEC_AUTH_SUCCESS_TIMEOUT        (WLAN_REASON_CODE_MSMSEC_CONNECT_BASE+3)
// Dynamic key exchange did not start within configured time
#define WLAN_REASON_CODE_MSMSEC_KEY_START_TIMEOUT           (WLAN_REASON_CODE_MSMSEC_CONNECT_BASE+4)
// Dynamic key exchange did not succeed within configured time
#define WLAN_REASON_CODE_MSMSEC_KEY_SUCCESS_TIMEOUT         (WLAN_REASON_CODE_MSMSEC_CONNECT_BASE+5)
// Message 3 of 4 way handshake has no key data (RSN/WPA)
#define WLAN_REASON_CODE_MSMSEC_M3_MISSING_KEY_DATA         (WLAN_REASON_CODE_MSMSEC_CONNECT_BASE+6)
// Message 3 of 4 way handshake has no IE (RSN/WPA)
#define WLAN_REASON_CODE_MSMSEC_M3_MISSING_IE               (WLAN_REASON_CODE_MSMSEC_CONNECT_BASE+7)
// Message 3 of 4 way handshake has no Group Key (RSN)
#define WLAN_REASON_CODE_MSMSEC_M3_MISSING_GRP_KEY          (WLAN_REASON_CODE_MSMSEC_CONNECT_BASE+8)
// Matching security capabilities of IE in M3 failed (RSN/WPA)
#define WLAN_REASON_CODE_MSMSEC_PR_IE_MATCHING              (WLAN_REASON_CODE_MSMSEC_CONNECT_BASE+9)
// Matching security capabilities of Secondary IE in M3 failed (RSN)
#define WLAN_REASON_CODE_MSMSEC_SEC_IE_MATCHING             (WLAN_REASON_CODE_MSMSEC_CONNECT_BASE+10)
// Required a pairwise key but AP configured only group keys
#define WLAN_REASON_CODE_MSMSEC_NO_PAIRWISE_KEY             (WLAN_REASON_CODE_MSMSEC_CONNECT_BASE+11)
// Message 1 of group key handshake has no key data (RSN/WPA)
#define WLAN_REASON_CODE_MSMSEC_G1_MISSING_KEY_DATA         (WLAN_REASON_CODE_MSMSEC_CONNECT_BASE+12)
// Message 1 of group key handshake has no group key
#define WLAN_REASON_CODE_MSMSEC_G1_MISSING_GRP_KEY          (WLAN_REASON_CODE_MSMSEC_CONNECT_BASE+13)
// AP reset secure bit after connection was secured
#define WLAN_REASON_CODE_MSMSEC_PEER_INDICATED_INSECURE     (WLAN_REASON_CODE_MSMSEC_CONNECT_BASE+14)
// 802.1x indicated there is no authenticator but profile requires 802.1x
#define WLAN_REASON_CODE_MSMSEC_NO_AUTHENTICATOR            (WLAN_REASON_CODE_MSMSEC_CONNECT_BASE+15)
// Plumbing settings to NIC failed
#define WLAN_REASON_CODE_MSMSEC_NIC_FAILURE                 (WLAN_REASON_CODE_MSMSEC_CONNECT_BASE+16)
// Operation was cancelled by caller
#define WLAN_REASON_CODE_MSMSEC_CANCELLED                   (WLAN_REASON_CODE_MSMSEC_CONNECT_BASE+17)
// Key was in incorrect format 
#define WLAN_REASON_CODE_MSMSEC_KEY_FORMAT                  (WLAN_REASON_CODE_MSMSEC_CONNECT_BASE+18)
// Security downgrade detected
#define WLAN_REASON_CODE_MSMSEC_DOWNGRADE_DETECTED          (WLAN_REASON_CODE_MSMSEC_CONNECT_BASE+19)
// PSK mismatch suspected
#define WLAN_REASON_CODE_MSMSEC_PSK_MISMATCH_SUSPECTED      (WLAN_REASON_CODE_MSMSEC_CONNECT_BASE+20)
// Forced failure because connection method was not secure
#define WLAN_REASON_CODE_MSMSEC_FORCED_FAILURE              (WLAN_REASON_CODE_MSMSEC_CONNECT_BASE+21)
// Message 3 of 4 way handshake contains too many RSN IE (RSN)
#define WLAN_REASON_CODE_MSMSEC_M3_TOO_MANY_RSNIE           (WLAN_REASON_CODE_MSMSEC_CONNECT_BASE+22)
// Message 2 of 4 way handshake has no key data (RSN Adhoc)
#define WLAN_REASON_CODE_MSMSEC_M2_MISSING_KEY_DATA         (WLAN_REASON_CODE_MSMSEC_CONNECT_BASE+23)
// Message 2 of 4 way handshake has no IE (RSN Adhoc)
#define WLAN_REASON_CODE_MSMSEC_M2_MISSING_IE               (WLAN_REASON_CODE_MSMSEC_CONNECT_BASE+24)
#define WLAN_REASON_CODE_MSMSEC_AUTH_WCN_COMPLETED          (WLAN_REASON_CODE_MSMSEC_CONNECT_BASE+25)

#define WLAN_REASON_CODE_MSMSEC_MAX                         WLAN_REASON_CODE_MSMSEC_END

typedef ULONG WLAN_SIGNAL_QUALITY, *PWLAN_SIGNAL_QUALITY; 

// available network flags
#define WLAN_AVAILABLE_NETWORK_CONNECTED                    0x00000001  // This network is currently connected
#define WLAN_AVAILABLE_NETWORK_HAS_PROFILE                  0x00000002  // There is a profile for this network
#define WLAN_AVAILABLE_NETWORK_CONSOLE_USER_PROFILE         0x00000004  // The profile is the active console user's per user profile

// flags that control the list returned by WlanGetAvailableNetworkList
// include all ad hoc network profiles in the available network list, regardless they are visible or not
#define WLAN_AVAILABLE_NETWORK_INCLUDE_ALL_ADHOC_PROFILES           0x00000001  
// include all hidden network profiles in the available network list, regardless they are visible or not
#define WLAN_AVAILABLE_NETWORK_INCLUDE_ALL_MANUAL_HIDDEN_PROFILES   0x00000002

typedef struct _WLAN_RATE_SET {
    ULONG uRateSetLength;
    __field_ecount_part(DOT11_RATE_SET_MAX_LENGTH, uRateSetLength) USHORT usRateSet[DOT11_RATE_SET_MAX_LENGTH];
} WLAN_RATE_SET, * PWLAN_RATE_SET;

#define WLAN_MAX_PHY_TYPE_NUMBER    8
// 
// struct WLAN_AVAILABLE_NETWORK defines information needed for an available network
typedef struct _WLAN_AVAILABLE_NETWORK {
    WCHAR strProfileName[WLAN_MAX_NAME_LENGTH];
    DOT11_SSID dot11Ssid;
    DOT11_BSS_TYPE dot11BssType;
    ULONG uNumberOfBssids;
    BOOL bNetworkConnectable;
    WLAN_REASON_CODE wlanNotConnectableReason;
    ULONG uNumberOfPhyTypes;
    DOT11_PHY_TYPE dot11PhyTypes[WLAN_MAX_PHY_TYPE_NUMBER];
    // bMorePhyTypes is set to TRUE if the PHY types for the network
    // exceeds WLAN_MAX_PHY_TYPE_NUMBER.
    // In this case, uNumerOfPhyTypes is WLAN_MAX_PHY_TYPE_NUMBER and the
    // first WLAN_MAX_PHY_TYPE_NUMBER PHY types are returned.
    BOOL bMorePhyTypes;
    WLAN_SIGNAL_QUALITY wlanSignalQuality;
    BOOL bSecurityEnabled;
    DOT11_AUTH_ALGORITHM dot11DefaultAuthAlgorithm;
    DOT11_CIPHER_ALGORITHM dot11DefaultCipherAlgorithm;
    DWORD dwFlags;
    DWORD dwReserved;
} WLAN_AVAILABLE_NETWORK, *PWLAN_AVAILABLE_NETWORK;


typedef struct _WLAN_BSS_ENTRY {
    DOT11_SSID dot11Ssid;
    ULONG uPhyId;
    DOT11_MAC_ADDRESS dot11Bssid;
    DOT11_BSS_TYPE dot11BssType;
    DOT11_PHY_TYPE dot11BssPhyType;
    LONG lRssi;
    ULONG uLinkQuality;
    BOOLEAN bInRegDomain;
    USHORT usBeaconPeriod;
    ULONGLONG ullTimestamp;
    ULONGLONG ullHostTimestamp;
    USHORT usCapabilityInformation;
    ULONG  ulChCenterFrequency;
    WLAN_RATE_SET wlanRateSet;
    // the beginning of the IE blob
    // the offset is w.r.t. the beginning of the entry
    ULONG ulIeOffset;
    // size of the IE blob
    ULONG ulIeSize;
} WLAN_BSS_ENTRY, * PWLAN_BSS_ENTRY;

// struct WLAN_VARIABLE_SIZE_ARRAY defines a list of entries,
// each of which may have different size  
typedef struct _WLAN_BSS_LIST {
    // The total size of the data in BYTE
    DWORD dwTotalSize;
    DWORD dwNumberOfItems;
    WLAN_BSS_ENTRY wlanBssEntries[1];
} WLAN_BSS_LIST, *PWLAN_BSS_LIST;


// the states of the network (interface)
#ifdef __midl
// use the 4-byte enum
typedef [v1_enum] enum _WLAN_INTERFACE_STATE {
#else
typedef enum _WLAN_INTERFACE_STATE {
#endif
    wlan_interface_state_not_ready,
    wlan_interface_state_connected,
    wlan_interface_state_ad_hoc_network_formed,
    wlan_interface_state_disconnecting,
    wlan_interface_state_disconnected,
    wlan_interface_state_associating,
    wlan_interface_state_discovering,
    wlan_interface_state_authenticating
} WLAN_INTERFACE_STATE, *PWLAN_INTERFACE_STATE;


// Adhoc network states
#ifdef __midl
// use the 4-byte enum
typedef [v1_enum] enum _WLAN_ADHOC_NETWORK_STATE {
#else
typedef enum _WLAN_ADHOC_NETWORK_STATE {
#endif
    wlan_adhoc_network_state_formed = 0,
    wlan_adhoc_network_state_connected
} WLAN_ADHOC_NETWORK_STATE, *PWLAN_ADHOC_NETWORK_STATE;

// struct WLAN_INTERFACE_INFO defines the basic information for an interface
typedef struct _WLAN_INTERFACE_INFO {
    GUID InterfaceGuid;
    WCHAR strInterfaceDescription[WLAN_MAX_NAME_LENGTH];
    WLAN_INTERFACE_STATE isState;
} WLAN_INTERFACE_INFO, *PWLAN_INTERFACE_INFO;

// structure WLAN_ASSOCIATION_ATTRIBUTES defines attributes of a wireless
// association. The unit for Rx/Tx rate is Kbits/second.
typedef struct _WLAN_ASSOCIATION_ATTRIBUTES {
    DOT11_SSID dot11Ssid;
    DOT11_BSS_TYPE dot11BssType;
    DOT11_MAC_ADDRESS dot11Bssid;
    DOT11_PHY_TYPE dot11PhyType;
    ULONG uDot11PhyIndex;
    WLAN_SIGNAL_QUALITY wlanSignalQuality;
    ULONG ulRxRate;
    ULONG ulTxRate;
} WLAN_ASSOCIATION_ATTRIBUTES, *PWLAN_ASSOCIATION_ATTRIBUTES;

typedef struct _WLAN_SECURITY_ATTRIBUTES {
    BOOL bSecurityEnabled;
    BOOL bOneXEnabled;
    DOT11_AUTH_ALGORITHM dot11AuthAlgorithm;
    DOT11_CIPHER_ALGORITHM dot11CipherAlgorithm;
} WLAN_SECURITY_ATTRIBUTES, *PWLAN_SECURITY_ATTRIBUTES;

// structure WLAN_CONNECTION_ATTRIBUTES defines attributes of a wireless connection
typedef struct _WLAN_CONNECTION_ATTRIBUTES {
    WLAN_INTERFACE_STATE isState;
    WLAN_CONNECTION_MODE wlanConnectionMode;
    WCHAR strProfileName[WLAN_MAX_NAME_LENGTH];
    WLAN_ASSOCIATION_ATTRIBUTES wlanAssociationAttributes;
    WLAN_SECURITY_ATTRIBUTES wlanSecurityAttributes;
} WLAN_CONNECTION_ATTRIBUTES, *PWLAN_CONNECTION_ATTRIBUTES;


// use the 4-byte enum
#ifdef __midl
typedef [v1_enum] enum _DOT11_RADIO_STATE {
#else
typedef enum _DOT11_RADIO_STATE {
#endif
    dot11_radio_state_unknown = 0,
    dot11_radio_state_on,
    dot11_radio_state_off
} DOT11_RADIO_STATE, *PDOT11_RADIO_STATE;

// the maximum number of PHYs supported by a NIC
#define WLAN_MAX_PHY_INDEX 64

typedef struct _WLAN_PHY_RADIO_STATE {
    DWORD dwPhyIndex;
    DOT11_RADIO_STATE dot11SoftwareRadioState;
    DOT11_RADIO_STATE dot11HardwareRadioState;
} WLAN_PHY_RADIO_STATE, *PWLAN_PHY_RADIO_STATE;

typedef struct _WLAN_RADIO_STATE {
    DWORD dwNumberOfPhys;
    WLAN_PHY_RADIO_STATE PhyRadioState[WLAN_MAX_PHY_INDEX];
} WLAN_RADIO_STATE, *PWLAN_RADIO_STATE;

typedef enum _WLAN_INTERFACE_TYPE {
    wlan_interface_type_emulated_802_11 = 0,
    wlan_interface_type_native_802_11,
    wlan_interface_type_invalid
} WLAN_INTERFACE_TYPE, *PWLAN_INTERFACE_TYPE;

typedef struct _WLAN_INTERFACE_CAPABILITY {
    WLAN_INTERFACE_TYPE interfaceType;
    BOOL bDot11DSupported;
    DWORD dwMaxDesiredSsidListSize;
    DWORD dwMaxDesiredBssidListSize;
    DWORD dwNumberOfSupportedPhys;
    DOT11_PHY_TYPE dot11PhyTypes[WLAN_MAX_PHY_INDEX];
} WLAN_INTERFACE_CAPABILITY, *PWLAN_INTERFACE_CAPABILITY;


typedef struct _WLAN_AUTH_CIPHER_PAIR_LIST {
    DWORD dwNumberOfItems;
#ifdef __midl
    [unique, size_is(dwNumberOfItems)] DOT11_AUTH_CIPHER_PAIR pAuthCipherPairList[*];
#else
    DOT11_AUTH_CIPHER_PAIR pAuthCipherPairList[1];
#endif
} WLAN_AUTH_CIPHER_PAIR_LIST, *PWLAN_AUTH_CIPHER_PAIR_LIST;

typedef struct _WLAN_COUNTRY_OR_REGION_STRING_LIST {
    DWORD dwNumberOfItems;
#ifdef __midl
    [unique, size_is(dwNumberOfItems)] DOT11_COUNTRY_OR_REGION_STRING pCountryOrRegionStringList[*];
#else
    DOT11_COUNTRY_OR_REGION_STRING pCountryOrRegionStringList[1];
#endif
} WLAN_COUNTRY_OR_REGION_STRING_LIST, *PWLAN_COUNTRY_OR_REGION_STRING_LIST;

typedef struct _WLAN_PROFILE_INFO_LIST {
    DWORD dwNumberOfItems;
    DWORD dwIndex;
    
#ifdef __midl
    [unique, size_is(dwNumberOfItems)] WLAN_PROFILE_INFO ProfileInfo[*];
#else
    WLAN_PROFILE_INFO ProfileInfo[1];
#endif

} WLAN_PROFILE_INFO_LIST, *PWLAN_PROFILE_INFO_LIST;


typedef struct _WLAN_AVAILABLE_NETWORK_LIST {
    DWORD dwNumberOfItems;
    DWORD dwIndex;

#ifdef __midl
    [unique, size_is(dwNumberOfItems)] WLAN_AVAILABLE_NETWORK Network[*];
#else
    WLAN_AVAILABLE_NETWORK Network[1];
#endif

} WLAN_AVAILABLE_NETWORK_LIST, *PWLAN_AVAILABLE_NETWORK_LIST;

typedef struct _WLAN_INTERFACE_INFO_LIST {
    DWORD dwNumberOfItems;
    DWORD dwIndex;

#ifdef __midl
    [unique, size_is(dwNumberOfItems)] WLAN_INTERFACE_INFO InterfaceInfo[*];
#else
    WLAN_INTERFACE_INFO InterfaceInfo[1];
#endif

} WLAN_INTERFACE_INFO_LIST, *PWLAN_INTERFACE_INFO_LIST;

// network list 
typedef struct _DOT11_NETWORK_LIST {
    DWORD dwNumberOfItems;
    DWORD dwIndex;

#ifdef __midl
    [unique, size_is(dwNumberOfItems)] DOT11_NETWORK Network[*];
#else
    __field_ecount(dwNumberOfItems) DOT11_NETWORK Network[1];
#endif
} DOT11_NETWORK_LIST, *PDOT11_NETWORK_LIST;

// power settings
#ifdef __midl
// use the 4-byte enum
typedef [v1_enum] enum _WLAN_POWER_SETTING {
#else
typedef enum _WLAN_POWER_SETTING {
#endif
    wlan_power_setting_no_saving = 0,
    wlan_power_setting_low_saving,
    wlan_power_setting_medium_saving,
    wlan_power_setting_maximum_saving,
    wlan_power_setting_invalid
} WLAN_POWER_SETTING, *PWLAN_POWER_SETTING;

// Wlan connection flags used in WLAN_CONNECTION_PARAMETERS
// The network to be connected is a hidden network
// This flag cannnot be set if the network to connected is an ad hoc network
#define WLAN_CONNECTION_HIDDEN_NETWORK      0x00000001
// Only join an ad hoc network, do not form it if it doesn't exist
// This flag cannnot be set if the network to connected is not an ad hoc network
#define WLAN_CONNECTION_ADHOC_JOIN_ONLY     0x00000002
// Ignore the privacy bit for the association. This is used to support easy config.
// This flag is valid only for wlan_connection_mode_temporary_profile and infrastructure networks.
#define WLAN_CONNECTION_IGNORE_PRIVACY_BIT  0x00000004
// Exempt EAPOL traffic from encryption/decryption. This is used to
// support an application that needs to send EAPOL traffic in non-802.1x WEP
// networks. This flag is valid only for wlan_connection_mode_temporary_profile
// in infrastructure networks when using authentication algorithm Open and
// Cipher WEP with 802.1x disabled
#define WLAN_CONNECTION_EAPOL_PASSTHROUGH   0x00000008

// connection parameters
typedef struct _WLAN_CONNECTION_PARAMETERS {
    WLAN_CONNECTION_MODE wlanConnectionMode;
#ifdef __midl
    [string] LPCWSTR strProfile;
#else
    LPCWSTR strProfile;
#endif
    PDOT11_SSID pDot11Ssid;
    PDOT11_BSSID_LIST pDesiredBssidList;
    DOT11_BSS_TYPE dot11BssType;
    DWORD dwFlags;
} WLAN_CONNECTION_PARAMETERS, *PWLAN_CONNECTION_PARAMETERS;
    
// data structure for connection-related notifications.
typedef struct _WLAN_MSM_NOTIFICATION_DATA {
    WLAN_CONNECTION_MODE wlanConnectionMode;
    WCHAR strProfileName[WLAN_MAX_NAME_LENGTH];
    DOT11_SSID dot11Ssid;
    DOT11_BSS_TYPE dot11BssType;
    DOT11_MAC_ADDRESS dot11MacAddr;
    BOOL bSecurityEnabled;
    BOOL bFirstPeer;
    BOOL bLastPeer;
    WLAN_REASON_CODE wlanReasonCode;
} WLAN_MSM_NOTIFICATION_DATA, *PWLAN_MSM_NOTIFICATION_DATA;


// flags for connection notifications
// whether an adhoc network is formed or joined
#define WLAN_CONNECTION_NOTIFICATION_ADHOC_NETWORK_FORMED    0x00000001     // Formed ad hoc network
#define WLAN_CONNECTION_NOTIFICATION_CONSOLE_USER_PROFILE    0x00000004     // The profile is the active console user's per user profile

typedef struct _WLAN_CONNECTION_NOTIFICATION_DATA {
    WLAN_CONNECTION_MODE wlanConnectionMode;
    WCHAR strProfileName[WLAN_MAX_NAME_LENGTH];
    DOT11_SSID dot11Ssid;
    DOT11_BSS_TYPE dot11BssType;
    BOOL bSecurityEnabled;
    WLAN_REASON_CODE wlanReasonCode;
    DWORD dwFlags;
    WCHAR strProfileXml[1];
} WLAN_CONNECTION_NOTIFICATION_DATA, *PWLAN_CONNECTION_NOTIFICATION_DATA;


// the types of notification
// compatible with L2_NOTIFICATION_SOURCE
#define WLAN_NOTIFICATION_SOURCE_NONE         L2_NOTIFICATION_SOURCE_NONE
#define WLAN_NOTIFICATION_SOURCE_ALL          L2_NOTIFICATION_SOURCE_ALL

#define WLAN_NOTIFICATION_SOURCE_ACM          L2_NOTIFICATION_SOURCE_WLAN_ACM
#define WLAN_NOTIFICATION_SOURCE_MSM          L2_NOTIFICATION_SOURCE_WLAN_MSM
#define WLAN_NOTIFICATION_SOURCE_SECURITY     L2_NOTIFICATION_SOURCE_WLAN_SECURITY
#define WLAN_NOTIFICATION_SOURCE_IHV          L2_NOTIFICATION_SOURCE_WLAN_IHV
#define WLAN_NOTIFICATION_SOURCE_HNWK         L2_NOTIFICATION_SOURCE_WLAN_HNWK
#define WLAN_NOTIFICATION_SOURCE_ONEX         L2_NOTIFICATION_SOURCE_ONEX


#ifdef __midl
// use the 4-byte enum
typedef [v1_enum] enum _WLAN_NOTIFICATION_ACM {
#else
typedef enum _WLAN_NOTIFICATION_ACM {
#endif
    wlan_notification_acm_start = L2_NOTIFICATION_CODE_PUBLIC_BEGIN,
    wlan_notification_acm_autoconf_enabled,
    wlan_notification_acm_autoconf_disabled,
    wlan_notification_acm_background_scan_enabled,
    wlan_notification_acm_background_scan_disabled,
    wlan_notification_acm_bss_type_change,
    wlan_notification_acm_power_setting_change,
    wlan_notification_acm_scan_complete,
    wlan_notification_acm_scan_fail,
    wlan_notification_acm_connection_start,
    wlan_notification_acm_connection_complete,
    wlan_notification_acm_connection_attempt_fail,
    wlan_notification_acm_filter_list_change,
    wlan_notification_acm_interface_arrival,
    wlan_notification_acm_interface_removal,
    wlan_notification_acm_profile_change,
    wlan_notification_acm_profile_name_change,
    wlan_notification_acm_profiles_exhausted,
    wlan_notification_acm_network_not_available,
    wlan_notification_acm_network_available,
    wlan_notification_acm_disconnecting,
    wlan_notification_acm_disconnected,
    wlan_notification_acm_adhoc_network_state_change,
    wlan_notification_acm_end
} WLAN_NOTIFICATION_ACM, *PWLAN_NOTIFICATION_ACM;


#ifdef __midl
// use the 4-byte enum
typedef [v1_enum] enum _WLAN_NOTIFICATION_MSM {
#else
typedef enum _WLAN_NOTIFICATION_MSM {
#endif
    wlan_notification_msm_start = L2_NOTIFICATION_CODE_PUBLIC_BEGIN,
    wlan_notification_msm_associating,
    wlan_notification_msm_associated,
    wlan_notification_msm_authenticating,
    wlan_notification_msm_connected,
    wlan_notification_msm_roaming_start,
    wlan_notification_msm_roaming_end,
    wlan_notification_msm_radio_state_change,
    wlan_notification_msm_signal_quality_change,
    wlan_notification_msm_disassociating,
    wlan_notification_msm_disconnected,
    wlan_notification_msm_peer_join,
    wlan_notification_msm_peer_leave,
    wlan_notification_msm_adapter_removal,
    wlan_notification_msm_adapter_operation_mode_change,
    wlan_notification_msm_end
} WLAN_NOTIFICATION_MSM, *PWLAN_NOTIFICATION_MSM;


#ifdef __midl
// use the 4-byte enum
typedef [v1_enum] enum _WLAN_NOTIFICATION_SECURITY {
#else
typedef enum _WLAN_NOTIFICATION_SECURITY {
#endif
    wlan_notification_security_start = L2_NOTIFICATION_CODE_PUBLIC_BEGIN,
    wlan_notification_security_end
} WLAN_NOTIFICATION_SECURITY, *PWLAN_NOTIFICATION_SECURITY;

typedef L2_NOTIFICATION_DATA WLAN_NOTIFICATION_DATA, *PWLAN_NOTIFICATION_DATA;

// the callback function for notifications
typedef VOID (WINAPI *WLAN_NOTIFICATION_CALLBACK) (PWLAN_NOTIFICATION_DATA, PVOID);

#ifdef __midl
// use the 4-byte enum
typedef [v1_enum] enum _WLAN_OPCODE_VALUE_TYPE {
#else
typedef enum _WLAN_OPCODE_VALUE_TYPE {
#endif
        wlan_opcode_value_type_query_only = 0,
        wlan_opcode_value_type_set_by_group_policy,
        wlan_opcode_value_type_set_by_user,
        wlan_opcode_value_type_invalid
} WLAN_OPCODE_VALUE_TYPE, *PWLAN_OPCODE_VALUE_TYPE;

// OpCodes for set/query interfaces
#ifdef __midl
// use the 4-byte enum
typedef [v1_enum] enum _WLAN_INTF_OPCODE {
#else
typedef enum _WLAN_INTF_OPCODE {
#endif
    wlan_intf_opcode_autoconf_start = 0x000000000,
    wlan_intf_opcode_autoconf_enabled,
    wlan_intf_opcode_background_scan_enabled,
    wlan_intf_opcode_media_streaming_mode,
    wlan_intf_opcode_radio_state,
    wlan_intf_opcode_bss_type,
    wlan_intf_opcode_interface_state,
    wlan_intf_opcode_current_connection,
    wlan_intf_opcode_channel_number,
    wlan_intf_opcode_supported_infrastructure_auth_cipher_pairs,
    wlan_intf_opcode_supported_adhoc_auth_cipher_pairs,
    wlan_intf_opcode_supported_country_or_region_string_list,
    wlan_intf_opcode_current_operation_mode,
    wlan_intf_opcode_supported_safe_mode,
    wlan_intf_opcode_certified_safe_mode,
    wlan_intf_opcode_hosted_network_capable,
    wlan_intf_opcode_autoconf_end = 0x0fffffff,
    wlan_intf_opcode_msm_start = 0x10000100,
    wlan_intf_opcode_statistics,
    wlan_intf_opcode_rssi,
    wlan_intf_opcode_msm_end = 0x1fffffff,
    wlan_intf_opcode_security_start = 0x20010000,
    wlan_intf_opcode_security_end = 0x2fffffff,
    wlan_intf_opcode_ihv_start = 0x30000000,
    wlan_intf_opcode_ihv_end = 0x3fffffff
} WLAN_INTF_OPCODE, *PWLAN_INTF_OPCODE;


// OpCodes for set/query auto config parameters
#ifdef __midl
// use the 4-byte enum
typedef [v1_enum] enum _WLAN_AUTOCONF_OPCODE {
#else
typedef enum _WLAN_AUTOCONF_OPCODE {
#endif
    wlan_autoconf_opcode_start = 0,
    wlan_autoconf_opcode_show_denied_networks,
    wlan_autoconf_opcode_power_setting,
    wlan_autoconf_opcode_only_use_gp_profiles_for_allowed_networks,
    wlan_autoconf_opcode_allow_explicit_creds,
    wlan_autoconf_opcode_block_period,
    wlan_autoconf_opcode_allow_virtual_station_extensibility,
    wlan_autoconf_opcode_end
} WLAN_AUTOCONF_OPCODE, *PWLAN_AUTOCONF_OPCODE;


// IHV control types
#ifdef __midl
// use the 4-byte enum
typedef [v1_enum] enum _WLAN_IHV_CONTROL_TYPE {
#else
typedef enum _WLAN_IHV_CONTROL_TYPE {
#endif
    wlan_ihv_control_type_service,
    wlan_ihv_control_type_driver
} WLAN_IHV_CONTROL_TYPE, *PWLAN_IHV_CONTROL_TYPE;

typedef enum _WLAN_FILTER_LIST_TYPE {
    wlan_filter_list_type_gp_permit,
    wlan_filter_list_type_gp_deny,
    wlan_filter_list_type_user_permit,
    wlan_filter_list_type_user_deny
} WLAN_FILTER_LIST_TYPE, *PWLAN_FILTER_LIST_TYPE;

// Driver statistics
typedef struct WLAN_PHY_FRAME_STATISTICS {
    // TX counters (MSDU/MMPDU)
    ULONGLONG ullTransmittedFrameCount;
    ULONGLONG ullMulticastTransmittedFrameCount;
    ULONGLONG ullFailedCount;
    ULONGLONG ullRetryCount;
    ULONGLONG ullMultipleRetryCount;
    ULONGLONG ullMaxTXLifetimeExceededCount;

    // TX counters (MPDU)
    ULONGLONG ullTransmittedFragmentCount;
    ULONGLONG ullRTSSuccessCount;
    ULONGLONG ullRTSFailureCount;
    ULONGLONG ullACKFailureCount;

    // RX counters (MSDU/MMPDU)
    ULONGLONG ullReceivedFrameCount;
    ULONGLONG ullMulticastReceivedFrameCount;
    ULONGLONG ullPromiscuousReceivedFrameCount;
    ULONGLONG ullMaxRXLifetimeExceededCount;

    // RX counters (MPDU)
    ULONGLONG ullFrameDuplicateCount;
    ULONGLONG ullReceivedFragmentCount;
    ULONGLONG ullPromiscuousReceivedFragmentCount;
    ULONGLONG ullFCSErrorCount;
} WLAN_PHY_FRAME_STATISTICS, * PWLAN_PHY_FRAME_STATISTICS;

typedef struct WLAN_MAC_FRAME_STATISTICS {
    ULONGLONG ullTransmittedFrameCount;
    ULONGLONG ullReceivedFrameCount;
    ULONGLONG ullWEPExcludedCount;
    ULONGLONG ullTKIPLocalMICFailures;
    ULONGLONG ullTKIPReplays;
    ULONGLONG ullTKIPICVErrorCount;
    ULONGLONG ullCCMPReplays;
    ULONGLONG ullCCMPDecryptErrors;
    ULONGLONG ullWEPUndecryptableCount;
    ULONGLONG ullWEPICVErrorCount;
    ULONGLONG ullDecryptSuccessCount;
    ULONGLONG ullDecryptFailureCount;
} WLAN_MAC_FRAME_STATISTICS, * PWLAN_MAC_FRAME_STATISTICS;

typedef struct WLAN_STATISTICS {
    ULONGLONG ullFourWayHandshakeFailures;
    ULONGLONG ullTKIPCounterMeasuresInvoked;
    ULONGLONG ullReserved;
    WLAN_MAC_FRAME_STATISTICS MacUcastCounters;
    WLAN_MAC_FRAME_STATISTICS MacMcastCounters;
    DWORD dwNumberOfPhys;
#ifdef __midl
    [unique, size_is(dwNumberOfPhys)] WLAN_PHY_FRAME_STATISTICS PhyCounters[*];
#else
    WLAN_PHY_FRAME_STATISTICS PhyCounters[1];
#endif
} WLAN_STATISTICS, * PWLAN_STATISTICS;

// API protection settings

// Definition of access masks for setting non-default security
// settings on WLAN configuration objects and connection profiles.

#define WLAN_READ_ACCESS    ( STANDARD_RIGHTS_READ | FILE_READ_DATA )
#define WLAN_EXECUTE_ACCESS ( WLAN_READ_ACCESS | STANDARD_RIGHTS_EXECUTE | FILE_EXECUTE )
#define WLAN_WRITE_ACCESS   ( WLAN_READ_ACCESS | WLAN_EXECUTE_ACCESS | STANDARD_RIGHTS_WRITE | FILE_WRITE_DATA | DELETE | WRITE_DAC )


typedef enum
_WLAN_SECURABLE_OBJECT
{
    wlan_secure_permit_list = 0,
    wlan_secure_deny_list,
    wlan_secure_ac_enabled,
    wlan_secure_bc_scan_enabled,
    wlan_secure_bss_type,
    wlan_secure_show_denied,
    wlan_secure_interface_properties,
    wlan_secure_ihv_control,
    wlan_secure_all_user_profiles_order,
    wlan_secure_add_new_all_user_profiles,
    wlan_secure_add_new_per_user_profiles,
    wlan_secure_media_streaming_mode_enabled,
    wlan_secure_current_operation_mode,
    wlan_secure_get_plaintext_key,
    wlan_secure_hosted_network_elevated_access,
    wlan_secure_virtual_station_extensibility,

    WLAN_SECURABLE_OBJECT_COUNT
}
WLAN_SECURABLE_OBJECT, *PWLAN_SECURABLE_OBJECT;


// public APIs
DWORD WINAPI
WlanOpenHandle(
    __in DWORD dwClientVersion,
    __reserved PVOID pReserved,
    __out PDWORD pdwNegotiatedVersion,
    __out PHANDLE phClientHandle
);

DWORD WINAPI
WlanCloseHandle(
    __in HANDLE hClientHandle,
    __reserved PVOID pReserved
);

DWORD WINAPI
WlanEnumInterfaces(
    __in HANDLE hClientHandle,
    __reserved PVOID pReserved,
    __deref_out PWLAN_INTERFACE_INFO_LIST *ppInterfaceList
);

DWORD WINAPI
WlanSetAutoConfigParameter(
    __in HANDLE hClientHandle,
    __in WLAN_AUTOCONF_OPCODE OpCode,
    __in DWORD dwDataSize,
    __in_bcount(dwDataSize) CONST PVOID pData,
    __reserved PVOID pReserved
);

DWORD WINAPI
WlanQueryAutoConfigParameter(
    __in HANDLE hClientHandle,
    __in WLAN_AUTOCONF_OPCODE OpCode,
    __reserved PVOID pReserved,
    __out PDWORD pdwDataSize,
    __deref_out_bcount(*pdwDataSize) PVOID *ppData,
    __out_opt PWLAN_OPCODE_VALUE_TYPE pWlanOpcodeValueType
);

DWORD WINAPI 
WlanGetInterfaceCapability(
    __in HANDLE hClientHandle,
    __in CONST GUID *pInterfaceGuid,
    __reserved PVOID pReserved,
    __deref_out PWLAN_INTERFACE_CAPABILITY *ppCapability
);

DWORD WINAPI
WlanSetInterface(
    __in HANDLE hClientHandle,
    __in CONST GUID *pInterfaceGuid, 
    __in WLAN_INTF_OPCODE OpCode,
    __in DWORD dwDataSize,
    __in_bcount(dwDataSize) CONST PVOID pData,
    __reserved PVOID pReserved
);

DWORD WINAPI
WlanQueryInterface(
    __in HANDLE hClientHandle,
    __in CONST GUID *pInterfaceGuid, 
    __in WLAN_INTF_OPCODE OpCode,
    __reserved PVOID pReserved,
    __out PDWORD pdwDataSize,
    __deref_out_bcount(*pdwDataSize) PVOID *ppData,
    __out_opt PWLAN_OPCODE_VALUE_TYPE pWlanOpcodeValueType
);

DWORD WINAPI
WlanIhvControl(
    __in HANDLE hClientHandle,
    __in CONST GUID *pInterfaceGuid,
    __in WLAN_IHV_CONTROL_TYPE Type,
    __in DWORD dwInBufferSize,
    __in_bcount(dwInBufferSize) PVOID pInBuffer,
    __in DWORD dwOutBufferSize,
    __inout_bcount_opt(dwOutBufferSize) PVOID pOutBuffer,
    __out PDWORD pdwBytesReturned
);

DWORD WINAPI
WlanScan(
    __in HANDLE hClientHandle,
    __in CONST GUID *pInterfaceGuid, 
    __in_opt CONST PDOT11_SSID pDot11Ssid,
    __in_opt CONST PWLAN_RAW_DATA pIeData,
    __reserved PVOID pReserved
);

DWORD WINAPI
WlanGetAvailableNetworkList(
    __in HANDLE hClientHandle,
    __in CONST GUID *pInterfaceGuid,
    __in DWORD dwFlags,
    __reserved PVOID pReserved,
    __deref_out PWLAN_AVAILABLE_NETWORK_LIST *ppAvailableNetworkList
);

DWORD WINAPI
WlanGetNetworkBssList(
    __in HANDLE hClientHandle,
    __in CONST GUID *pInterfaceGuid, 
    __in_opt CONST PDOT11_SSID pDot11Ssid,
    __in DOT11_BSS_TYPE dot11BssType,
    __in BOOL bSecurityEnabled,
    __reserved PVOID pReserved,
    __deref_out PWLAN_BSS_LIST *ppWlanBssList
);

DWORD WINAPI 
WlanConnect(
    __in HANDLE hClientHandle,
    __in CONST GUID *pInterfaceGuid, 
    __in CONST PWLAN_CONNECTION_PARAMETERS pConnectionParameters,
    __reserved PVOID pReserved
);

DWORD WINAPI 
WlanDisconnect(
    __in HANDLE hClientHandle,
    __in CONST GUID *pInterfaceGuid, 
    __reserved PVOID pReserved
);

DWORD WINAPI
WlanRegisterNotification(
    __in HANDLE hClientHandle,
    __in DWORD dwNotifSource,
    __in BOOL bIgnoreDuplicate,
    __in_opt WLAN_NOTIFICATION_CALLBACK funcCallback,
    __in_opt PVOID pCallbackContext,
    __reserved PVOID pReserved,
    __out_opt PDWORD pdwPrevNotifSource
);


DWORD WINAPI
WlanGetProfile(
    __in HANDLE hClientHandle,
    __in CONST GUID *pInterfaceGuid,
    __in LPCWSTR strProfileName,
    __reserved PVOID pReserved,
    __deref_out LPWSTR *pstrProfileXml,
    __inout_opt DWORD *pdwFlags,    
    __out_opt DWORD *pdwGrantedAccess
);

DWORD WINAPI
WlanSetProfileEapUserData(
    __in HANDLE hClientHandle,
    __in const GUID *pInterfaceGuid,
    __in LPCWSTR strProfileName,
    __in EAP_METHOD_TYPE eapType,
    __in DWORD dwFlags,
    __in DWORD dwEapUserDataSize,
    __in_bcount(dwEapUserDataSize) const LPBYTE pbEapUserData,
    __reserved PVOID pReserved
);

DWORD WINAPI
WlanSetProfileEapXmlUserData(
    __in HANDLE hClientHandle,
    __in const GUID *pInterfaceGuid,
    __in LPCWSTR strProfileName,
    __in DWORD dwFlags,
    __in LPCWSTR strEapXmlUserData,
    __reserved PVOID pReserved
);

DWORD WINAPI
WlanSetProfile(
    __in HANDLE hClientHandle,
    __in CONST GUID *pInterfaceGuid,
    __in DWORD dwFlags,
    __in LPCWSTR strProfileXml,
    __in_opt LPCWSTR strAllUserProfileSecurity,
    __in BOOL bOverwrite,
    __reserved PVOID pReserved,
    __out DWORD *pdwReasonCode
);

DWORD WINAPI
WlanDeleteProfile(
    __in HANDLE hClientHandle,
    __in CONST GUID *pInterfaceGuid,
    __in LPCWSTR strProfileName,
    __reserved PVOID pReserved
);

DWORD WINAPI
WlanRenameProfile(
    __in HANDLE hClientHandle,
    __in CONST GUID *pInterfaceGuid,
    __in LPCWSTR strOldProfileName,
    __in LPCWSTR strNewProfileName,
    __reserved PVOID pReserved
);

DWORD WINAPI
WlanGetProfileList(
    __in HANDLE hClientHandle,
    __in CONST GUID *pInterfaceGuid,
    __reserved PVOID pReserved,
    __deref_out PWLAN_PROFILE_INFO_LIST *ppProfileList
);

DWORD WINAPI
WlanSetProfileList(
    __in HANDLE hClientHandle,
    __in CONST GUID *pInterfaceGuid,
    __in DWORD dwItems,
    __in_ecount(dwItems) LPCWSTR *strProfileNames,
    __reserved PVOID pReserved
);

DWORD WINAPI
WlanSetProfilePosition(
    __in HANDLE hClientHandle,
    __in CONST GUID *pInterfaceGuid,
    __in LPCWSTR strProfileName,
    __in DWORD dwPosition,
    __reserved PVOID pReserved
);

DWORD WINAPI
WlanSetProfileCustomUserData(
    __in HANDLE hClientHandle,
    __in CONST GUID *pInterfaceGuid,
    __in LPCWSTR strProfileName,
    __in DWORD dwDataSize,
    __in_bcount(dwDataSize) CONST PBYTE pData,
    __reserved PVOID pReserved
);

DWORD WINAPI
WlanGetProfileCustomUserData(
    __in HANDLE hClientHandle,
    __in CONST GUID *pInterfaceGuid,
    __in LPCWSTR strProfileName,
    __reserved PVOID pReserved,
    __out DWORD *pdwDataSize,
    __deref_out_bcount(*pdwDataSize) PBYTE *ppData
);

DWORD WINAPI
WlanSetFilterList(
    __in HANDLE hClientHandle,
    __in WLAN_FILTER_LIST_TYPE wlanFilterListType,
    __in_opt CONST PDOT11_NETWORK_LIST pNetworkList,
    __reserved PVOID pReserved
);

DWORD WINAPI 
WlanGetFilterList(
    __in HANDLE hClientHandle,
    __in WLAN_FILTER_LIST_TYPE wlanFilterListType,
    __reserved PVOID pReserved,
    __deref_out PDOT11_NETWORK_LIST *ppNetworkList
);

DWORD WINAPI
WlanSetPsdIEDataList(
    __in HANDLE hClientHandle,
    __in_opt LPCWSTR strFormat,
    __in_opt CONST PWLAN_RAW_DATA_LIST pPsdIEDataList,
    __reserved PVOID pReserved
);

DWORD WINAPI
WlanSaveTemporaryProfile(
    __in HANDLE hClientHandle,
    __in CONST GUID* pInterfaceGuid,
    __in LPCWSTR strProfileName,
    __in_opt LPCWSTR strAllUserProfileSecurity,
    __in DWORD dwFlags,
    __in BOOL bOverWrite,
    __reserved PVOID pReserved
);

#if !defined(__midl)

// client side APIs
DWORD WINAPI
WlanExtractPsdIEDataList(
    __in HANDLE hClientHandle,
    __in DWORD dwIeDataSize,
    __in_bcount(dwIeDataSize) CONST PBYTE pRawIeData,
    __in LPCWSTR strFormat,
    __reserved PVOID pReserved,
    __deref_out PWLAN_RAW_DATA_LIST *ppPsdIEDataList
);


DWORD WINAPI 
WlanReasonCodeToString(
    __in DWORD dwReasonCode,
    __in DWORD dwBufferSize,
    __in_ecount(dwBufferSize) PWCHAR pStringBuffer,
    __reserved PVOID pReserved
);

PVOID WINAPI 
WlanAllocateMemory(
    __in DWORD dwMemorySize
);

VOID WINAPI 
WlanFreeMemory(
    __in PVOID pMemory
);

DWORD WINAPI
WlanSetSecuritySettings(
    __in HANDLE hClientHandle,
    __in WLAN_SECURABLE_OBJECT SecurableObject,
    __in LPCWSTR strModifiedSDDL
);

DWORD WINAPI
WlanGetSecuritySettings(
    __in HANDLE hClientHandle,
    __in WLAN_SECURABLE_OBJECT SecurableObject,
    __out_opt PWLAN_OPCODE_VALUE_TYPE pValueType,
    __deref_out LPWSTR* pstrCurrentSDDL,
    __out PDWORD pdwGrantedAccess
);

#endif


// the following structures and defs are
// for the UI related functions

// current version
#define WLAN_UI_API_VERSION         1
// earliest version supported
#define WLAN_UI_API_INITIAL_VERSION 1

// The list of pages displayed by the wireless profile UI
typedef enum _WL_DISPLAY_PAGES
{
    WLConnectionPage,
    WLSecurityPage,
    WLAdvPage
} WL_DISPLAY_PAGES, *PWL_DISPLAY_PAGES;

DWORD WINAPI 
WlanUIEditProfile(
    __in DWORD dwClientVersion,
    __in LPCWSTR wstrProfileName, 
    __in GUID *pInterfaceGuid,
    __in HWND hWnd,
    __in WL_DISPLAY_PAGES wlStartPage, 
    __reserved PVOID pReserved,
    __out_opt PWLAN_REASON_CODE pWlanReasonCode
    );



#if (_WIN32_WINNT >= _WIN32_WINNT_WIN7)

// Hosted Network APIs

typedef
#ifdef __midl
[v1_enum]
#endif
enum _WLAN_HOSTED_NETWORK_STATE
{
    wlan_hosted_network_unavailable,
    wlan_hosted_network_idle,
    wlan_hosted_network_active,
}
WLAN_HOSTED_NETWORK_STATE, *PWLAN_HOSTED_NETWORK_STATE;




typedef
#ifdef __midl
[v1_enum]
#endif
enum _WLAN_HOSTED_NETWORK_REASON
{
    wlan_hosted_network_reason_success = 0,
    wlan_hosted_network_reason_unspecified,
    wlan_hosted_network_reason_bad_parameters,
    wlan_hosted_network_reason_service_shutting_down,
    wlan_hosted_network_reason_insufficient_resources,
    wlan_hosted_network_reason_elevation_required,
    wlan_hosted_network_reason_read_only,
    wlan_hosted_network_reason_persistence_failed,
    wlan_hosted_network_reason_crypt_error,
    wlan_hosted_network_reason_impersonation,
    wlan_hosted_network_reason_stop_before_start,

    wlan_hosted_network_reason_interface_available,
    wlan_hosted_network_reason_interface_unavailable,
    wlan_hosted_network_reason_miniport_stopped,
    wlan_hosted_network_reason_miniport_started,
    wlan_hosted_network_reason_incompatible_connection_started,
    wlan_hosted_network_reason_incompatible_connection_stopped,
    wlan_hosted_network_reason_user_action,
    wlan_hosted_network_reason_client_abort,
    wlan_hosted_network_reason_ap_start_failed,

    wlan_hosted_network_reason_peer_arrived,
    wlan_hosted_network_reason_peer_departed,
    wlan_hosted_network_reason_peer_timeout,
    wlan_hosted_network_reason_gp_denied,
    wlan_hosted_network_reason_service_unavailable,
    wlan_hosted_network_reason_device_change,
    wlan_hosted_network_reason_properties_change,
    wlan_hosted_network_reason_virtual_station_blocking_use,
    wlan_hosted_network_reason_service_available_on_virtual_station,

}
WLAN_HOSTED_NETWORK_REASON, *PWLAN_HOSTED_NETWORK_REASON;


typedef
#ifdef __midl
[v1_enum]
#endif
enum _WLAN_HOSTED_NETWORK_PEER_AUTH_STATE
{
    wlan_hosted_network_peer_state_invalid,
    wlan_hosted_network_peer_state_authenticated,
}
WLAN_HOSTED_NETWORK_PEER_AUTH_STATE, *PWLAN_HOSTED_NETWORK_PEER_AUTH_STATE;



DWORD
WINAPI
WlanHostedNetworkStartUsing
(
    __in        HANDLE                          hClientHandle,
    __out_opt   PWLAN_HOSTED_NETWORK_REASON     pFailReason,
    __reserved  PVOID                           pvReserved
);



DWORD
WINAPI
WlanHostedNetworkStopUsing
(
    __in        HANDLE                          hClientHandle,
    __out_opt   PWLAN_HOSTED_NETWORK_REASON     pFailReason,
    __reserved  PVOID                           pvReserved
);




DWORD
WINAPI
WlanHostedNetworkForceStart
(
    __in        HANDLE                          hClientHandle,
    __out_opt   PWLAN_HOSTED_NETWORK_REASON     pFailReason,
    __reserved  PVOID                           pvReserved
);



DWORD
WINAPI
WlanHostedNetworkForceStop
(
    __in        HANDLE                          hClientHandle,
    __out_opt   PWLAN_HOSTED_NETWORK_REASON     pFailReason,
    __reserved  PVOID                           pvReserved
);



typedef
struct _WLAN_HOSTED_NETWORK_PEER_STATE
{
    DOT11_MAC_ADDRESS                       PeerMacAddress;
    WLAN_HOSTED_NETWORK_PEER_AUTH_STATE     PeerAuthState;
}
WLAN_HOSTED_NETWORK_PEER_STATE, *PWLAN_HOSTED_NETWORK_PEER_STATE;



typedef
struct _WLAN_HOSTED_NETWORK_RADIO_STATE
{
    DOT11_RADIO_STATE   dot11SoftwareRadioState;
    DOT11_RADIO_STATE   dot11HardwareRadioState;
}
WLAN_HOSTED_NETWORK_RADIO_STATE, *PWLAN_HOSTED_NETWORK_RADIO_STATE;


// Definitions required for calling WlanRegisterNotification
// Notification source - L2_NOTIFICATION_SOURCE_WLAN_HNWK

// Notification code
typedef
#ifdef __midl
[v1_enum]
#endif
enum _WLAN_HOSTED_NETWORK_NOTIFICATION_CODE
{
    wlan_hosted_network_state_change = L2_NOTIFICATION_CODE_V2_BEGIN,
    wlan_hosted_network_peer_state_change,
    wlan_hosted_network_radio_state_change,
}
WLAN_HOSTED_NETWORK_NOTIFICATION_CODE, *PWLAN_HOSTED_NETWORK_NOTIFICATION_CODE;






// Notification data associated with wlan_hosted_network_state_change
typedef
struct _WLAN_HOSTED_NETWORK_STATE_CHANGE
{
    WLAN_HOSTED_NETWORK_STATE   OldState;
    WLAN_HOSTED_NETWORK_STATE   NewState;
    WLAN_HOSTED_NETWORK_REASON  StateChangeReason; 
}
WLAN_HOSTED_NETWORK_STATE_CHANGE, *PWLAN_HOSTED_NETWORK_STATE_CHANGE;



// Notification data associated with wlan_hosted_network_peer_state_change
typedef
struct _WLAN_HOSTED_NETWORK_DATA_PEER_STATE_CHANGE
{
    WLAN_HOSTED_NETWORK_PEER_STATE      OldState;
    WLAN_HOSTED_NETWORK_PEER_STATE      NewState;
    WLAN_HOSTED_NETWORK_REASON          PeerStateChangeReason; 
}
WLAN_HOSTED_NETWORK_DATA_PEER_STATE_CHANGE, *PWLAN_HOSTED_NETWORK_DATA_PEER_STATE_CHANGE;



// Notification data associated with wlan_hosted_network_radio_state_change
// WLAN_HOSTED_NETWORK_RADIO_STATE







// Definitions required for calling WlanHostedNetworkQueryProperty and WlanHostedNetworkSetProperty


typedef
#ifdef __midl
[v1_enum]
#endif
enum
_WLAN_HOSTED_NETWORK_OPCODE
{
    wlan_hosted_network_opcode_connection_settings,
    wlan_hosted_network_opcode_security_settings,
    wlan_hosted_network_opcode_station_profile,
    wlan_hosted_network_opcode_enable,
}
WLAN_HOSTED_NETWORK_OPCODE, *PWLAN_HOSTED_NETWORK_OPCODE;



// Data structure associated with wlan_hosted_network_opcode_connection_settings
// can be used for query and set
typedef
struct _WLAN_HOSTED_NETWORK_CONNECTION_SETTINGS
{
    DOT11_SSID  hostedNetworkSSID;
    DWORD       dwMaxNumberOfPeers;
}
WLAN_HOSTED_NETWORK_CONNECTION_SETTINGS, *PWLAN_HOSTED_NETWORK_CONNECTION_SETTINGS;


// Data structure associated with wlan_hosted_network_opcode_security_settings
// can be used for query only
typedef
struct _WLAN_HOSTED_NETWORK_SECURITY_SETTINGS
{
    DOT11_AUTH_ALGORITHM        dot11AuthAlgo;
    DOT11_CIPHER_ALGORITHM      dot11CipherAlgo;
}
WLAN_HOSTED_NETWORK_SECURITY_SETTINGS, *PWLAN_HOSTED_NETWORK_SECURITY_SETTINGS;



// Data structure associated with wlan_hosted_network_opcode_station_profile
// can be used for query only
// LPWSTR



// Data structure associated with wlan_hosted_network_opcode_enable
// can be used for query and set
// BOOL




//
// This function queries the static properties of the hosted network
//
DWORD
WINAPI
WlanHostedNetworkQueryProperty
(
    __in                                HANDLE                      hClientHandle,
    __in                                WLAN_HOSTED_NETWORK_OPCODE  OpCode,
    __out                               PDWORD                      pdwDataSize,
    __deref_out_bcount(*pdwDataSize)    PVOID*                      ppvData,
    __out                               PWLAN_OPCODE_VALUE_TYPE     pWlanOpcodeValueType,
    __reserved  PVOID                                               pvReserved
);




//
// This function sets the static properties of the hosted network
//
DWORD
WINAPI
WlanHostedNetworkSetProperty
(
    __in                        HANDLE                          hClientHandle,
    __in                        WLAN_HOSTED_NETWORK_OPCODE      OpCode,
    __in                        DWORD                           dwDataSize,
    __in_bcount(dwDataSize)     PVOID                           pvData,
    __out_opt                   PWLAN_HOSTED_NETWORK_REASON     pFailReason,
    __reserved                  PVOID                           pvReserved
);



//
// This function initializes hosted network configuration
// on a machine. There are no effects if an initial
// configuration has already been created.
//
DWORD
WINAPI
WlanHostedNetworkInitSettings
(
    __in        HANDLE                          hClientHandle,
    __out_opt   PWLAN_HOSTED_NETWORK_REASON     pFailReason,
    __reserved  PVOID                           pvReserved
);




DWORD
WINAPI
WlanHostedNetworkRefreshSecuritySettings
(
    __in        HANDLE                          hClientHandle,
    __out_opt   PWLAN_HOSTED_NETWORK_REASON     pFailReason,
    __reserved  PVOID                           pvReserved
);


typedef
struct _WLAN_HOSTED_NETWORK_STATUS
{
    WLAN_HOSTED_NETWORK_STATE   HostedNetworkState;
    GUID                        IPDeviceID;
    DOT11_MAC_ADDRESS           wlanHostedNetworkBSSID;
    DOT11_PHY_TYPE              dot11PhyType;
    ULONG                       ulChannelFrequency;

    DWORD                       dwNumberOfPeers;
#ifdef __midl
    [unique, size_is(dwNumberOfPeers)] WLAN_HOSTED_NETWORK_PEER_STATE PeerList[*];
#else
    WLAN_HOSTED_NETWORK_PEER_STATE PeerList[1];
#endif
}
WLAN_HOSTED_NETWORK_STATUS, *PWLAN_HOSTED_NETWORK_STATUS;


//
// This function queries the runtime status of the hosted network
//
DWORD
WINAPI
WlanHostedNetworkQueryStatus
(
    __in        HANDLE                          hClientHandle,
    __deref_out PWLAN_HOSTED_NETWORK_STATUS*    ppWlanHostedNetworkStatus,
    __reserved  PVOID                           pvReserved
);





//
// This function set the additional security key used by hosted network
// if it is passphrase, key length includes the terminating '\0',
// if not, key length is the number of bytes in the key data array.
//
DWORD
WINAPI
WlanHostedNetworkSetSecondaryKey
(
    __in        HANDLE                          hClientHandle,
    __in        DWORD                           dwKeyLength,
    __in_bcount(dwKeyLength) PUCHAR             pucKeyData,
    __in        BOOL                            bIsPassPhrase,
    __in        BOOL                            bPersistent,
    __out_opt   PWLAN_HOSTED_NETWORK_REASON     pFailReason,
    __reserved  PVOID                           pvReserved
);



//
// This function query the additional security key used by hosted network
// If it is passphrase, key length includes the terminating '\0',
// if not, key length is the number of bytes in the key data array.
//
DWORD
WINAPI
WlanHostedNetworkQuerySecondaryKey
(
    __in        HANDLE                          hClientHandle,
    __out       PDWORD                          pdwKeyLength,
    __deref_out_ecount(*pdwKeyLength)   PUCHAR  *ppucKeyData,
    __out       PBOOL                           pbIsPassPhrase,
    __out       PBOOL                           pbPersistent,
    __out_opt   PWLAN_HOSTED_NETWORK_REASON     pFailReason,
    __reserved  PVOID                           pvReserved
);

//
// This function is used to register and unregister notifications on virtual station.
//
DWORD
WINAPI
WlanRegisterVirtualStationNotification
(
    __in        HANDLE hClientHandle,
    __in        BOOL bRegister,
    __reserved  PVOID pReserved
);

#endif // (_WIN32_WINNT >= _WIN32_WINNT_WIN7)



#ifdef __cplusplus
}
#endif

#endif  // _WLAN_WLANAPI_H


