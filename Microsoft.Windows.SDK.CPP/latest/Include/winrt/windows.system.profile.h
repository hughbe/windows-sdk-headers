/* Header file automatically generated from windows.system.profile.idl */
/*
 * File built with Microsoft(R) MIDLRT Compiler Engine Version 10.00.0226 
 */

#pragma warning( disable: 4049 )  /* more than 64k source lines */

/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

/* verify that the <rpcsal.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif

#include <rpc.h>
#include <rpcndr.h>

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif /*COM_NO_WINDOWS_H*/
#ifndef __windows2Esystem2Eprofile_h__
#define __windows2Esystem2Eprofile_h__
#ifndef __windows2Esystem2Eprofile_p_h__
#define __windows2Esystem2Eprofile_p_h__


#pragma once

//
// Deprecated attribute support
//

#pragma push_macro("DEPRECATED")
#undef DEPRECATED

#if !defined(DISABLE_WINRT_DEPRECATION)
#if defined(__cplusplus)
#if __cplusplus >= 201402
#define DEPRECATED(x) [[deprecated(x)]]
#define DEPRECATEDENUMERATOR(x) [[deprecated(x)]]
#elif defined(_MSC_VER)
#if _MSC_VER >= 1900
#define DEPRECATED(x) [[deprecated(x)]]
#define DEPRECATEDENUMERATOR(x) [[deprecated(x)]]
#else
#define DEPRECATED(x) __declspec(deprecated(x))
#define DEPRECATEDENUMERATOR(x)
#endif // _MSC_VER >= 1900
#else // Not Standard C++ or MSVC, ignore the construct.
#define DEPRECATED(x)
#define DEPRECATEDENUMERATOR(x)
#endif  // C++ deprecation
#else // C - disable deprecation
#define DEPRECATED(x)
#define DEPRECATEDENUMERATOR(x)
#endif
#else // Deprecation is disabled
#define DEPRECATED(x)
#define DEPRECATEDENUMERATOR(x)
#endif  /* DEPRECATED */

// Disable Deprecation for this header, MIDL verifies that cross-type access is acceptable
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#else
#pragma warning(push)
#pragma warning(disable: 4996)
#endif

// Ensure that the setting of the /ns_prefix command line switch is consistent for all headers.
// If you get an error from the compiler indicating "warning C4005: 'CHECK_NS_PREFIX_STATE': macro redefinition", this
// indicates that you have included two different headers with different settings for the /ns_prefix MIDL command line switch
#if !defined(DISABLE_NS_PREFIX_CHECKS)
#define CHECK_NS_PREFIX_STATE "always"
#endif // !defined(DISABLE_NS_PREFIX_CHECKS)


#pragma push_macro("MIDL_CONST_ID")
#undef MIDL_CONST_ID
#define MIDL_CONST_ID const __declspec(selectany)


//  API Contract Inclusion Definitions
#if !defined(SPECIFIC_API_CONTRACT_DEFINITIONS)
#if !defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATEDEVENTSCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATEDEVENTSCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATEDEVENTSCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATIONCAMERASETTINGSCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATIONCAMERASETTINGSCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATIONCAMERASETTINGSCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_WEBUISEARCHACTIVATEDEVENTSCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_ACTIVATION_WEBUISEARCHACTIVATEDEVENTSCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_WEBUISEARCHACTIVATEDEVENTSCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_BACKGROUND_BACKGROUNDALARMAPPLICATIONCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_BACKGROUND_BACKGROUNDALARMAPPLICATIONCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_BACKGROUND_BACKGROUNDALARMAPPLICATIONCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_CALLS_BACKGROUND_CALLSBACKGROUNDCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_CALLS_BACKGROUND_CALLSBACKGROUNDCONTRACT_VERSION 0x20000
#endif // defined(WINDOWS_APPLICATIONMODEL_CALLS_BACKGROUND_CALLSBACKGROUNDCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION 0x50000
#endif // defined(WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_CALLS_CALLSVOIPCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_CALLS_CALLSVOIPCONTRACT_VERSION 0x40000
#endif // defined(WINDOWS_APPLICATIONMODEL_CALLS_CALLSVOIPCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_CALLS_LOCKSCREENCALLCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_CALLS_LOCKSCREENCALLCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_CALLS_LOCKSCREENCALLCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_COMMUNICATIONBLOCKING_COMMUNICATIONBLOCKINGCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_COMMUNICATIONBLOCKING_COMMUNICATIONBLOCKINGCONTRACT_VERSION 0x20000
#endif // defined(WINDOWS_APPLICATIONMODEL_COMMUNICATIONBLOCKING_COMMUNICATIONBLOCKINGCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_FULLTRUSTAPPCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_FULLTRUSTAPPCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_FULLTRUSTAPPCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_SEARCH_SEARCHCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_SEARCH_SEARCHCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_SEARCH_SEARCHCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_STARTUPTASKCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_STARTUPTASKCONTRACT_VERSION 0x30000
#endif // defined(WINDOWS_APPLICATIONMODEL_STARTUPTASKCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_WALLET_WALLETCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_WALLET_WALLETCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_WALLET_WALLETCONTRACT_VERSION)

#if !defined(WINDOWS_DEVICES_PRINTERS_EXTENSIONS_EXTENSIONSCONTRACT_VERSION)
#define WINDOWS_DEVICES_PRINTERS_EXTENSIONS_EXTENSIONSCONTRACT_VERSION 0x20000
#endif // defined(WINDOWS_DEVICES_PRINTERS_EXTENSIONS_EXTENSIONSCONTRACT_VERSION)

#if !defined(WINDOWS_DEVICES_SMARTCARDS_SMARTCARDBACKGROUNDTRIGGERCONTRACT_VERSION)
#define WINDOWS_DEVICES_SMARTCARDS_SMARTCARDBACKGROUNDTRIGGERCONTRACT_VERSION 0x30000
#endif // defined(WINDOWS_DEVICES_SMARTCARDS_SMARTCARDBACKGROUNDTRIGGERCONTRACT_VERSION)

#if !defined(WINDOWS_DEVICES_SMARTCARDS_SMARTCARDEMULATORCONTRACT_VERSION)
#define WINDOWS_DEVICES_SMARTCARDS_SMARTCARDEMULATORCONTRACT_VERSION 0x60000
#endif // defined(WINDOWS_DEVICES_SMARTCARDS_SMARTCARDEMULATORCONTRACT_VERSION)

#if !defined(WINDOWS_DEVICES_SMS_LEGACYSMSAPICONTRACT_VERSION)
#define WINDOWS_DEVICES_SMS_LEGACYSMSAPICONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_DEVICES_SMS_LEGACYSMSAPICONTRACT_VERSION)

#if !defined(WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION)
#define WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION 0x30000
#endif // defined(WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION)

#if !defined(WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION)
#define WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION 0x80000
#endif // defined(WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION)

#if !defined(WINDOWS_GAMING_INPUT_GAMINGINPUTPREVIEWCONTRACT_VERSION)
#define WINDOWS_GAMING_INPUT_GAMINGINPUTPREVIEWCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_GAMING_INPUT_GAMINGINPUTPREVIEWCONTRACT_VERSION)

#if !defined(WINDOWS_GLOBALIZATION_GLOBALIZATIONJAPANESEPHONETICANALYZERCONTRACT_VERSION)
#define WINDOWS_GLOBALIZATION_GLOBALIZATIONJAPANESEPHONETICANALYZERCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_GLOBALIZATION_GLOBALIZATIONJAPANESEPHONETICANALYZERCONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_CAPTURE_APPBROADCASTCONTRACT_VERSION)
#define WINDOWS_MEDIA_CAPTURE_APPBROADCASTCONTRACT_VERSION 0x20000
#endif // defined(WINDOWS_MEDIA_CAPTURE_APPBROADCASTCONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_CAPTURE_APPCAPTURECONTRACT_VERSION)
#define WINDOWS_MEDIA_CAPTURE_APPCAPTURECONTRACT_VERSION 0x40000
#endif // defined(WINDOWS_MEDIA_CAPTURE_APPCAPTURECONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_CAPTURE_APPCAPTUREMETADATACONTRACT_VERSION)
#define WINDOWS_MEDIA_CAPTURE_APPCAPTUREMETADATACONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_MEDIA_CAPTURE_APPCAPTUREMETADATACONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_CAPTURE_CAMERACAPTUREUICONTRACT_VERSION)
#define WINDOWS_MEDIA_CAPTURE_CAMERACAPTUREUICONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_MEDIA_CAPTURE_CAMERACAPTUREUICONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_CAPTURE_GAMEBARCONTRACT_VERSION)
#define WINDOWS_MEDIA_CAPTURE_GAMEBARCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_MEDIA_CAPTURE_GAMEBARCONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_DEVICES_CALLCONTROLCONTRACT_VERSION)
#define WINDOWS_MEDIA_DEVICES_CALLCONTROLCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_MEDIA_DEVICES_CALLCONTROLCONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION)
#define WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_PROTECTION_PROTECTIONRENEWALCONTRACT_VERSION)
#define WINDOWS_MEDIA_PROTECTION_PROTECTIONRENEWALCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_MEDIA_PROTECTION_PROTECTIONRENEWALCONTRACT_VERSION)

#if !defined(WINDOWS_NETWORKING_CONNECTIVITY_WWANCONTRACT_VERSION)
#define WINDOWS_NETWORKING_CONNECTIVITY_WWANCONTRACT_VERSION 0x20000
#endif // defined(WINDOWS_NETWORKING_CONNECTIVITY_WWANCONTRACT_VERSION)

#if !defined(WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION)
#define WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION 0x30000
#endif // defined(WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION)

#if !defined(WINDOWS_PHONE_PHONECONTRACT_VERSION)
#define WINDOWS_PHONE_PHONECONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_PHONE_PHONECONTRACT_VERSION)

#if !defined(WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION)
#define WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION)

#if !defined(WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION)
#define WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION 0x50000
#endif // defined(WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION)

#if !defined(WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION)
#define WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION 0x30000
#endif // defined(WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION)

#if !defined(WINDOWS_SYSTEM_PROFILE_PROFILEHARDWARETOKENCONTRACT_VERSION)
#define WINDOWS_SYSTEM_PROFILE_PROFILEHARDWARETOKENCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_SYSTEM_PROFILE_PROFILEHARDWARETOKENCONTRACT_VERSION)

#if !defined(WINDOWS_SYSTEM_PROFILE_PROFILERETAILINFOCONTRACT_VERSION)
#define WINDOWS_SYSTEM_PROFILE_PROFILERETAILINFOCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_SYSTEM_PROFILE_PROFILERETAILINFOCONTRACT_VERSION)

#if !defined(WINDOWS_SYSTEM_PROFILE_PROFILESHAREDMODECONTRACT_VERSION)
#define WINDOWS_SYSTEM_PROFILE_PROFILESHAREDMODECONTRACT_VERSION 0x20000
#endif // defined(WINDOWS_SYSTEM_PROFILE_PROFILESHAREDMODECONTRACT_VERSION)

#if !defined(WINDOWS_SYSTEM_SYSTEMMANAGEMENTCONTRACT_VERSION)
#define WINDOWS_SYSTEM_SYSTEMMANAGEMENTCONTRACT_VERSION 0x60000
#endif // defined(WINDOWS_SYSTEM_SYSTEMMANAGEMENTCONTRACT_VERSION)

#if !defined(WINDOWS_UI_CORE_COREWINDOWDIALOGSCONTRACT_VERSION)
#define WINDOWS_UI_CORE_COREWINDOWDIALOGSCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_UI_CORE_COREWINDOWDIALOGSCONTRACT_VERSION)

#if !defined(WINDOWS_UI_VIEWMANAGEMENT_VIEWMANAGEMENTVIEWSCALINGCONTRACT_VERSION)
#define WINDOWS_UI_VIEWMANAGEMENT_VIEWMANAGEMENTVIEWSCALINGCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_UI_VIEWMANAGEMENT_VIEWMANAGEMENTVIEWSCALINGCONTRACT_VERSION)

#if !defined(WINDOWS_UI_WEBUI_CORE_WEBUICOMMANDBARCONTRACT_VERSION)
#define WINDOWS_UI_WEBUI_CORE_WEBUICOMMANDBARCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_UI_WEBUI_CORE_WEBUICOMMANDBARCONTRACT_VERSION)

#endif // defined(SPECIFIC_API_CONTRACT_DEFINITIONS)


// Header files for imported files
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "windowscontracts.h"
#include "Windows.Foundation.h"
#include "Windows.Storage.Streams.h"
#include "Windows.System.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Profile {
                interface IAnalyticsInfoStatics;
            } /* Profile */
        } /* System */
    } /* Windows */} /* ABI */
#define __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStatics ABI::Windows::System::Profile::IAnalyticsInfoStatics

#endif // ____x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStatics2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Profile {
                interface IAnalyticsInfoStatics2;
            } /* Profile */
        } /* System */
    } /* Windows */} /* ABI */
#define __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStatics2 ABI::Windows::System::Profile::IAnalyticsInfoStatics2

#endif // ____x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CProfile_CIAnalyticsVersionInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CProfile_CIAnalyticsVersionInfo_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Profile {
                interface IAnalyticsVersionInfo;
            } /* Profile */
        } /* System */
    } /* Windows */} /* ABI */
#define __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsVersionInfo ABI::Windows::System::Profile::IAnalyticsVersionInfo

#endif // ____x_ABI_CWindows_CSystem_CProfile_CIAnalyticsVersionInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CProfile_CIAppApplicabilityStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CProfile_CIAppApplicabilityStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Profile {
                interface IAppApplicabilityStatics;
            } /* Profile */
        } /* System */
    } /* Windows */} /* ABI */
#define __x_ABI_CWindows_CSystem_CProfile_CIAppApplicabilityStatics ABI::Windows::System::Profile::IAppApplicabilityStatics

#endif // ____x_ABI_CWindows_CSystem_CProfile_CIAppApplicabilityStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CProfile_CIEducationSettingsStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CProfile_CIEducationSettingsStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Profile {
                interface IEducationSettingsStatics;
            } /* Profile */
        } /* System */
    } /* Windows */} /* ABI */
#define __x_ABI_CWindows_CSystem_CProfile_CIEducationSettingsStatics ABI::Windows::System::Profile::IEducationSettingsStatics

#endif // ____x_ABI_CWindows_CSystem_CProfile_CIEducationSettingsStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CProfile_CIHardwareIdentificationStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CProfile_CIHardwareIdentificationStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Profile {
                interface IHardwareIdentificationStatics;
            } /* Profile */
        } /* System */
    } /* Windows */} /* ABI */
#define __x_ABI_CWindows_CSystem_CProfile_CIHardwareIdentificationStatics ABI::Windows::System::Profile::IHardwareIdentificationStatics

#endif // ____x_ABI_CWindows_CSystem_CProfile_CIHardwareIdentificationStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CProfile_CIHardwareToken_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CProfile_CIHardwareToken_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Profile {
                interface IHardwareToken;
            } /* Profile */
        } /* System */
    } /* Windows */} /* ABI */
#define __x_ABI_CWindows_CSystem_CProfile_CIHardwareToken ABI::Windows::System::Profile::IHardwareToken

#endif // ____x_ABI_CWindows_CSystem_CProfile_CIHardwareToken_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Profile {
                interface IKnownRetailInfoPropertiesStatics;
            } /* Profile */
        } /* System */
    } /* Windows */} /* ABI */
#define __x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics ABI::Windows::System::Profile::IKnownRetailInfoPropertiesStatics

#endif // ____x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CProfile_CIPlatformDiagnosticsAndUsageDataSettingsStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CProfile_CIPlatformDiagnosticsAndUsageDataSettingsStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Profile {
                interface IPlatformDiagnosticsAndUsageDataSettingsStatics;
            } /* Profile */
        } /* System */
    } /* Windows */} /* ABI */
#define __x_ABI_CWindows_CSystem_CProfile_CIPlatformDiagnosticsAndUsageDataSettingsStatics ABI::Windows::System::Profile::IPlatformDiagnosticsAndUsageDataSettingsStatics

#endif // ____x_ABI_CWindows_CSystem_CProfile_CIPlatformDiagnosticsAndUsageDataSettingsStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CProfile_CIRetailInfoStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CProfile_CIRetailInfoStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Profile {
                interface IRetailInfoStatics;
            } /* Profile */
        } /* System */
    } /* Windows */} /* ABI */
#define __x_ABI_CWindows_CSystem_CProfile_CIRetailInfoStatics ABI::Windows::System::Profile::IRetailInfoStatics

#endif // ____x_ABI_CWindows_CSystem_CProfile_CIRetailInfoStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CProfile_CISharedModeSettingsStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CProfile_CISharedModeSettingsStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Profile {
                interface ISharedModeSettingsStatics;
            } /* Profile */
        } /* System */
    } /* Windows */} /* ABI */
#define __x_ABI_CWindows_CSystem_CProfile_CISharedModeSettingsStatics ABI::Windows::System::Profile::ISharedModeSettingsStatics

#endif // ____x_ABI_CWindows_CSystem_CProfile_CISharedModeSettingsStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CProfile_CISharedModeSettingsStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CProfile_CISharedModeSettingsStatics2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Profile {
                interface ISharedModeSettingsStatics2;
            } /* Profile */
        } /* System */
    } /* Windows */} /* ABI */
#define __x_ABI_CWindows_CSystem_CProfile_CISharedModeSettingsStatics2 ABI::Windows::System::Profile::ISharedModeSettingsStatics2

#endif // ____x_ABI_CWindows_CSystem_CProfile_CISharedModeSettingsStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationInfo_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Profile {
                interface ISystemIdentificationInfo;
            } /* Profile */
        } /* System */
    } /* Windows */} /* ABI */
#define __x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationInfo ABI::Windows::System::Profile::ISystemIdentificationInfo

#endif // ____x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Profile {
                interface ISystemIdentificationStatics;
            } /* Profile */
        } /* System */
    } /* Windows */} /* ABI */
#define __x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationStatics ABI::Windows::System::Profile::ISystemIdentificationStatics

#endif // ____x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CProfile_CISystemSetupInfoStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CProfile_CISystemSetupInfoStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Profile {
                interface ISystemSetupInfoStatics;
            } /* Profile */
        } /* System */
    } /* Windows */} /* ABI */
#define __x_ABI_CWindows_CSystem_CProfile_CISystemSetupInfoStatics ABI::Windows::System::Profile::ISystemSetupInfoStatics

#endif // ____x_ABI_CWindows_CSystem_CProfile_CISystemSetupInfoStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CProfile_CIUnsupportedAppRequirement_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CProfile_CIUnsupportedAppRequirement_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Profile {
                interface IUnsupportedAppRequirement;
            } /* Profile */
        } /* System */
    } /* Windows */} /* ABI */
#define __x_ABI_CWindows_CSystem_CProfile_CIUnsupportedAppRequirement ABI::Windows::System::Profile::IUnsupportedAppRequirement

#endif // ____x_ABI_CWindows_CSystem_CProfile_CIUnsupportedAppRequirement_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CProfile_CIWindowsIntegrityPolicyStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CProfile_CIWindowsIntegrityPolicyStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Profile {
                interface IWindowsIntegrityPolicyStatics;
            } /* Profile */
        } /* System */
    } /* Windows */} /* ABI */
#define __x_ABI_CWindows_CSystem_CProfile_CIWindowsIntegrityPolicyStatics ABI::Windows::System::Profile::IWindowsIntegrityPolicyStatics

#endif // ____x_ABI_CWindows_CSystem_CProfile_CIWindowsIntegrityPolicyStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Profile {
                class UnsupportedAppRequirement;
            } /* Profile */
        } /* System */
    } /* Windows */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x80000

#ifndef DEF___FIIterator_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement_USE
#define DEF___FIIterator_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("10956160-6437-5430-9322-df0d6ab2ebe6"))
IIterator<ABI::Windows::System::Profile::UnsupportedAppRequirement*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::System::Profile::UnsupportedAppRequirement*, ABI::Windows::System::Profile::IUnsupportedAppRequirement*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.System.Profile.UnsupportedAppRequirement>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::System::Profile::UnsupportedAppRequirement*> __FIIterator_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement_t;
#define __FIIterator_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::System::Profile::IUnsupportedAppRequirement*>
//#define __FIIterator_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::System::Profile::IUnsupportedAppRequirement*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x80000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x80000

#ifndef DEF___FIIterable_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement_USE
#define DEF___FIIterable_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("bd9ded1d-0379-5143-a490-168b6b8413a3"))
IIterable<ABI::Windows::System::Profile::UnsupportedAppRequirement*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::System::Profile::UnsupportedAppRequirement*, ABI::Windows::System::Profile::IUnsupportedAppRequirement*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.System.Profile.UnsupportedAppRequirement>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::System::Profile::UnsupportedAppRequirement*> __FIIterable_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement_t;
#define __FIIterable_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::System::Profile::IUnsupportedAppRequirement*>
//#define __FIIterable_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::System::Profile::IUnsupportedAppRequirement*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x80000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x80000

#ifndef DEF___FIVectorView_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement_USE
#define DEF___FIVectorView_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("5b638c58-9d04-5d1a-92fb-860852c3e4d0"))
IVectorView<ABI::Windows::System::Profile::UnsupportedAppRequirement*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::System::Profile::UnsupportedAppRequirement*, ABI::Windows::System::Profile::IUnsupportedAppRequirement*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.System.Profile.UnsupportedAppRequirement>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::System::Profile::UnsupportedAppRequirement*> __FIVectorView_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement_t;
#define __FIVectorView_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::System::Profile::IUnsupportedAppRequirement*>
//#define __FIVectorView_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::System::Profile::IUnsupportedAppRequirement*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x80000


#ifndef DEF___FIIterator_1_HSTRING_USE
#define DEF___FIIterator_1_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("8c304ebb-6615-50a4-8829-879ecd443236"))
IIterator<HSTRING> : IIterator_impl<HSTRING> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<String>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<HSTRING> __FIIterator_1_HSTRING_t;
#define __FIIterator_1_HSTRING ABI::Windows::Foundation::Collections::__FIIterator_1_HSTRING_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_HSTRING ABI::Windows::Foundation::Collections::IIterator<HSTRING>
//#define __FIIterator_1_HSTRING_t ABI::Windows::Foundation::Collections::IIterator<HSTRING>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_HSTRING_USE */




#ifndef DEF___FIIterable_1_HSTRING_USE
#define DEF___FIIterable_1_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("e2fcc7c1-3bfc-5a0b-b2b0-72e769d1cb7e"))
IIterable<HSTRING> : IIterable_impl<HSTRING> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<String>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<HSTRING> __FIIterable_1_HSTRING_t;
#define __FIIterable_1_HSTRING ABI::Windows::Foundation::Collections::__FIIterable_1_HSTRING_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_HSTRING ABI::Windows::Foundation::Collections::IIterable<HSTRING>
//#define __FIIterable_1_HSTRING_t ABI::Windows::Foundation::Collections::IIterable<HSTRING>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_HSTRING_USE */




#ifndef DEF___FIKeyValuePair_2_HSTRING_HSTRING_USE
#define DEF___FIKeyValuePair_2_HSTRING_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("60310303-49c5-52e6-abc6-a9b36eccc716"))
IKeyValuePair<HSTRING,HSTRING> : IKeyValuePair_impl<HSTRING,HSTRING> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IKeyValuePair`2<String, String>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IKeyValuePair<HSTRING,HSTRING> __FIKeyValuePair_2_HSTRING_HSTRING_t;
#define __FIKeyValuePair_2_HSTRING_HSTRING ABI::Windows::Foundation::Collections::__FIKeyValuePair_2_HSTRING_HSTRING_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIKeyValuePair_2_HSTRING_HSTRING ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,HSTRING>
//#define __FIKeyValuePair_2_HSTRING_HSTRING_t ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,HSTRING>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIKeyValuePair_2_HSTRING_HSTRING_USE */





#ifndef DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_USE
#define DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("05eb86f1-7140-5517-b88d-cbaebe57e6b1"))
IIterator<__FIKeyValuePair_2_HSTRING_HSTRING*> : IIterator_impl<__FIKeyValuePair_2_HSTRING_HSTRING*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Foundation.Collections.IKeyValuePair`2<String, String>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<__FIKeyValuePair_2_HSTRING_HSTRING*> __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_t;
#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING ABI::Windows::Foundation::Collections::__FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,HSTRING>*>
//#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,HSTRING>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_USE */





#ifndef DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_USE
#define DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("e9bdaaf0-cbf6-5c72-be90-29cbf3a1319b"))
IIterable<__FIKeyValuePair_2_HSTRING_HSTRING*> : IIterable_impl<__FIKeyValuePair_2_HSTRING_HSTRING*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Foundation.Collections.IKeyValuePair`2<String, String>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<__FIKeyValuePair_2_HSTRING_HSTRING*> __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_t;
#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING ABI::Windows::Foundation::Collections::__FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,HSTRING>*>
//#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,HSTRING>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_USE */




#ifndef DEF___FIMapView_2_HSTRING_HSTRING_USE
#define DEF___FIMapView_2_HSTRING_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("ac7f26f2-feb7-5b2a-8ac4-345bc62caede"))
IMapView<HSTRING,HSTRING> : IMapView_impl<HSTRING,HSTRING> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IMapView`2<String, String>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IMapView<HSTRING,HSTRING> __FIMapView_2_HSTRING_HSTRING_t;
#define __FIMapView_2_HSTRING_HSTRING ABI::Windows::Foundation::Collections::__FIMapView_2_HSTRING_HSTRING_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIMapView_2_HSTRING_HSTRING ABI::Windows::Foundation::Collections::IMapView<HSTRING,HSTRING>
//#define __FIMapView_2_HSTRING_HSTRING_t ABI::Windows::Foundation::Collections::IMapView<HSTRING,HSTRING>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIMapView_2_HSTRING_HSTRING_USE */





#ifndef DEF___FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_HSTRING_USE
#define DEF___FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("75e3182c-e6e1-589c-ab73-e8644bc285bf"))
IAsyncOperationCompletedHandler<__FIMapView_2_HSTRING_HSTRING*> : IAsyncOperationCompletedHandler_impl<__FIMapView_2_HSTRING_HSTRING*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Foundation.Collections.IMapView`2<String, String>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<__FIMapView_2_HSTRING_HSTRING*> __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_HSTRING_t;
#define __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_HSTRING ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_HSTRING_t
/* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_HSTRING ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IMapView<HSTRING,HSTRING>*>
//#define __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_HSTRING_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IMapView<HSTRING,HSTRING>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_HSTRING_USE */





#ifndef DEF___FIAsyncOperation_1___FIMapView_2_HSTRING_HSTRING_USE
#define DEF___FIAsyncOperation_1___FIMapView_2_HSTRING_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("817944b6-f046-5391-bb0b-4cc34d8040f3"))
IAsyncOperation<__FIMapView_2_HSTRING_HSTRING*> : IAsyncOperation_impl<__FIMapView_2_HSTRING_HSTRING*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Foundation.Collections.IMapView`2<String, String>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<__FIMapView_2_HSTRING_HSTRING*> __FIAsyncOperation_1___FIMapView_2_HSTRING_HSTRING_t;
#define __FIAsyncOperation_1___FIMapView_2_HSTRING_HSTRING ABI::Windows::Foundation::__FIAsyncOperation_1___FIMapView_2_HSTRING_HSTRING_t
/* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1___FIMapView_2_HSTRING_HSTRING ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IMapView<HSTRING,HSTRING>*>
//#define __FIAsyncOperation_1___FIMapView_2_HSTRING_HSTRING_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IMapView<HSTRING,HSTRING>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1___FIMapView_2_HSTRING_HSTRING_USE */





#ifndef DEF___FIEventHandler_1_IInspectable_USE
#define DEF___FIEventHandler_1_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("c50898f6-c536-5f47-8583-8b2c2438a13b"))
IEventHandler<IInspectable*> : IEventHandler_impl<IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.EventHandler`1<Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IEventHandler<IInspectable*> __FIEventHandler_1_IInspectable_t;
#define __FIEventHandler_1_IInspectable ABI::Windows::Foundation::__FIEventHandler_1_IInspectable_t
/* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIEventHandler_1_IInspectable ABI::Windows::Foundation::IEventHandler<IInspectable*>
//#define __FIEventHandler_1_IInspectable_t ABI::Windows::Foundation::IEventHandler<IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIEventHandler_1_IInspectable_USE */





#ifndef DEF___FIKeyValuePair_2_HSTRING_IInspectable_USE
#define DEF___FIKeyValuePair_2_HSTRING_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("09335560-6c6b-5a26-9348-97b781132b20"))
IKeyValuePair<HSTRING,IInspectable*> : IKeyValuePair_impl<HSTRING,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IKeyValuePair`2<String, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IKeyValuePair<HSTRING,IInspectable*> __FIKeyValuePair_2_HSTRING_IInspectable_t;
#define __FIKeyValuePair_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::__FIKeyValuePair_2_HSTRING_IInspectable_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIKeyValuePair_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,IInspectable*>
//#define __FIKeyValuePair_2_HSTRING_IInspectable_t ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIKeyValuePair_2_HSTRING_IInspectable_USE */





#ifndef DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_USE
#define DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("5db5fa32-707c-5849-a06b-91c8eb9d10e8"))
IIterator<__FIKeyValuePair_2_HSTRING_IInspectable*> : IIterator_impl<__FIKeyValuePair_2_HSTRING_IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Foundation.Collections.IKeyValuePair`2<String, Object>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<__FIKeyValuePair_2_HSTRING_IInspectable*> __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_t;
#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::__FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,IInspectable*>*>
//#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,IInspectable*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_USE */





#ifndef DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_USE
#define DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("fe2f3d47-5d47-5499-8374-430c7cda0204"))
IIterable<__FIKeyValuePair_2_HSTRING_IInspectable*> : IIterable_impl<__FIKeyValuePair_2_HSTRING_IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Foundation.Collections.IKeyValuePair`2<String, Object>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<__FIKeyValuePair_2_HSTRING_IInspectable*> __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_t;
#define __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::__FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,IInspectable*>*>
//#define __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,IInspectable*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_USE */





#ifndef DEF___FIMapView_2_HSTRING_IInspectable_USE
#define DEF___FIMapView_2_HSTRING_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("bb78502a-f79d-54fa-92c9-90c5039fdf7e"))
IMapView<HSTRING,IInspectable*> : IMapView_impl<HSTRING,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IMapView`2<String, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IMapView<HSTRING,IInspectable*> __FIMapView_2_HSTRING_IInspectable_t;
#define __FIMapView_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::__FIMapView_2_HSTRING_IInspectable_t
/* Collections */ } /* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIMapView_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::IMapView<HSTRING,IInspectable*>
//#define __FIMapView_2_HSTRING_IInspectable_t ABI::Windows::Foundation::Collections::IMapView<HSTRING,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIMapView_2_HSTRING_IInspectable_USE */








#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Streams {
                interface IBuffer;
            } /* Streams */
        } /* Storage */
    } /* Windows */} /* ABI */
#define __x_ABI_CWindows_CStorage_CStreams_CIBuffer ABI::Windows::Storage::Streams::IBuffer

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__





namespace ABI {
    namespace Windows {
        namespace System {
            class User;
        } /* System */
    } /* Windows */} /* ABI */

#ifndef ____x_ABI_CWindows_CSystem_CIUser_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CIUser_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            interface IUser;
        } /* System */
    } /* Windows */} /* ABI */
#define __x_ABI_CWindows_CSystem_CIUser ABI::Windows::System::IUser

#endif // ____x_ABI_CWindows_CSystem_CIUser_FWD_DEFINED__







namespace ABI {
    namespace Windows {
        namespace System {
            namespace Profile {
                
                typedef enum PlatformDataCollectionLevel : int PlatformDataCollectionLevel;
                
            } /* Profile */
        } /* System */
    } /* Windows */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace System {
            namespace Profile {
                
                typedef enum SystemIdentificationSource : int SystemIdentificationSource;
                
            } /* Profile */
        } /* System */
    } /* Windows */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace System {
            namespace Profile {
                
                typedef enum SystemOutOfBoxExperienceState : int SystemOutOfBoxExperienceState;
                
            } /* Profile */
        } /* System */
    } /* Windows */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace System {
            namespace Profile {
                
                typedef enum UnsupportedAppRequirementReasons : unsigned int UnsupportedAppRequirementReasons;
                
            } /* Profile */
        } /* System */
    } /* Windows */} /* ABI */



















namespace ABI {
    namespace Windows {
        namespace System {
            namespace Profile {
                class AnalyticsVersionInfo;
            } /* Profile */
        } /* System */
    } /* Windows */} /* ABI */





namespace ABI {
    namespace Windows {
        namespace System {
            namespace Profile {
                class HardwareToken;
            } /* Profile */
        } /* System */
    } /* Windows */} /* ABI */







namespace ABI {
    namespace Windows {
        namespace System {
            namespace Profile {
                class SystemIdentificationInfo;
            } /* Profile */
        } /* System */
    } /* Windows */} /* ABI */
















/*
 *
 * Struct Windows.System.Profile.PlatformDataCollectionLevel
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Profile {
                /* [v1_enum, contract] */
                enum PlatformDataCollectionLevel : int
                {
                    PlatformDataCollectionLevel_Security = 0,
                    PlatformDataCollectionLevel_Basic = 1,
                    PlatformDataCollectionLevel_Enhanced = 2,
                    PlatformDataCollectionLevel_Full = 3,
                };
                
            } /* Profile */
        } /* System */
    } /* Windows */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Struct Windows.System.Profile.SystemIdentificationSource
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Profile {
                /* [v1_enum, contract] */
                enum SystemIdentificationSource : int
                {
                    SystemIdentificationSource_None = 0,
                    SystemIdentificationSource_Tpm = 1,
                    SystemIdentificationSource_Uefi = 2,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
                    
                    SystemIdentificationSource_Registry = 3,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
                    
                };
                
            } /* Profile */
        } /* System */
    } /* Windows */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.System.Profile.SystemOutOfBoxExperienceState
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 7.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x70000
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Profile {
                /* [v1_enum, contract] */
                enum SystemOutOfBoxExperienceState : int
                {
                    SystemOutOfBoxExperienceState_NotStarted = 0,
                    SystemOutOfBoxExperienceState_InProgress = 1,
                    SystemOutOfBoxExperienceState_Completed = 2,
                };
                
            } /* Profile */
        } /* System */
    } /* Windows */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x70000


/*
 *
 * Struct Windows.System.Profile.UnsupportedAppRequirementReasons
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 8.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x80000
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Profile {
                /* [v1_enum, flags, contract] */
                enum UnsupportedAppRequirementReasons : unsigned int
                {
                    UnsupportedAppRequirementReasons_Unknown = 0,
                    UnsupportedAppRequirementReasons_DeniedBySystem = 0x1,
                };
                
                DEFINE_ENUM_FLAG_OPERATORS(UnsupportedAppRequirementReasons)
                
            } /* Profile */
        } /* System */
    } /* Windows */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x80000


/*
 *
 * Interface Windows.System.Profile.IAnalyticsInfoStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.Profile.AnalyticsInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Profile_IAnalyticsInfoStatics[] = L"Windows.System.Profile.IAnalyticsInfoStatics";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Profile {
                /* [object, uuid("1D5EE066-188D-5BA9-4387-ACAEB0E7E305"), exclusiveto, contract] */
                MIDL_INTERFACE("1D5EE066-188D-5BA9-4387-ACAEB0E7E305")
                IAnalyticsInfoStatics : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_VersionInfo(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::System::Profile::IAnalyticsVersionInfo * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DeviceForm(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAnalyticsInfoStatics=_uuidof(IAnalyticsInfoStatics);
                
            } /* Profile */
        } /* System */
    } /* Windows */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStatics;
#endif /* !defined(____x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.System.Profile.IAnalyticsInfoStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 6.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.Profile.AnalyticsInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x60000
#if !defined(____x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Profile_IAnalyticsInfoStatics2[] = L"Windows.System.Profile.IAnalyticsInfoStatics2";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Profile {
                /* [object, uuid("101704EA-A7F9-46D2-AB94-016865AFDB25"), exclusiveto, contract] */
                MIDL_INTERFACE("101704EA-A7F9-46D2-AB94-016865AFDB25")
                IAnalyticsInfoStatics2 : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE GetSystemPropertiesAsync(
                        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * attributeNames,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIMapView_2_HSTRING_HSTRING * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAnalyticsInfoStatics2=_uuidof(IAnalyticsInfoStatics2);
                
            } /* Profile */
        } /* System */
    } /* Windows */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStatics2;
#endif /* !defined(____x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x60000


/*
 *
 * Interface Windows.System.Profile.IAnalyticsVersionInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.Profile.AnalyticsVersionInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSystem_CProfile_CIAnalyticsVersionInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CProfile_CIAnalyticsVersionInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Profile_IAnalyticsVersionInfo[] = L"Windows.System.Profile.IAnalyticsVersionInfo";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Profile {
                /* [object, uuid("926130B8-9955-4C74-BDC1-7CD0DECF9B03"), exclusiveto, contract] */
                MIDL_INTERFACE("926130B8-9955-4C74-BDC1-7CD0DECF9B03")
                IAnalyticsVersionInfo : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DeviceFamily(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DeviceFamilyVersion(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAnalyticsVersionInfo=_uuidof(IAnalyticsVersionInfo);
                
            } /* Profile */
        } /* System */
    } /* Windows */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CProfile_CIAnalyticsVersionInfo;
#endif /* !defined(____x_ABI_CWindows_CSystem_CProfile_CIAnalyticsVersionInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.System.Profile.IAppApplicabilityStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 8.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.Profile.AppApplicability
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x80000
#if !defined(____x_ABI_CWindows_CSystem_CProfile_CIAppApplicabilityStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CProfile_CIAppApplicabilityStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Profile_IAppApplicabilityStatics[] = L"Windows.System.Profile.IAppApplicabilityStatics";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Profile {
                /* [object, uuid("1664A082-0F38-5C99-83E4-48995970861C"), exclusiveto, contract] */
                MIDL_INTERFACE("1664A082-0F38-5C99-83E4-48995970861C")
                IAppApplicabilityStatics : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE GetUnsupportedAppRequirements(
                        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * capabilities,
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAppApplicabilityStatics=_uuidof(IAppApplicabilityStatics);
                
            } /* Profile */
        } /* System */
    } /* Windows */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CProfile_CIAppApplicabilityStatics;
#endif /* !defined(____x_ABI_CWindows_CSystem_CProfile_CIAppApplicabilityStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x80000


/*
 *
 * Interface Windows.System.Profile.IEducationSettingsStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.Profile.EducationSettings
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSystem_CProfile_CIEducationSettingsStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CProfile_CIEducationSettingsStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Profile_IEducationSettingsStatics[] = L"Windows.System.Profile.IEducationSettingsStatics";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Profile {
                /* [object, uuid("FC53F0EF-4D3E-4E13-9B23-505F4D091E92"), exclusiveto, contract] */
                MIDL_INTERFACE("FC53F0EF-4D3E-4E13-9B23-505F4D091E92")
                IEducationSettingsStatics : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsEducationEnvironment(
                        /* [retval, out] */__RPC__out ::boolean * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IEducationSettingsStatics=_uuidof(IEducationSettingsStatics);
                
            } /* Profile */
        } /* System */
    } /* Windows */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CProfile_CIEducationSettingsStatics;
#endif /* !defined(____x_ABI_CWindows_CSystem_CProfile_CIEducationSettingsStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.System.Profile.IHardwareIdentificationStatics
 *
 * Introduced to Windows.System.Profile.ProfileHardwareTokenContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.Profile.HardwareIdentification
 *
 *
 */
#if WINDOWS_SYSTEM_PROFILE_PROFILEHARDWARETOKENCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSystem_CProfile_CIHardwareIdentificationStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CProfile_CIHardwareIdentificationStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Profile_IHardwareIdentificationStatics[] = L"Windows.System.Profile.IHardwareIdentificationStatics";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Profile {
                /* [object, uuid("971260E0-F170-4A42-BD55-A900B212DAE2"), exclusiveto, contract] */
                MIDL_INTERFACE("971260E0-F170-4A42-BD55-A900B212DAE2")
                IHardwareIdentificationStatics : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE GetPackageSpecificToken(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * nonce,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::System::Profile::IHardwareToken * * packageSpecificHardwareToken
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IHardwareIdentificationStatics=_uuidof(IHardwareIdentificationStatics);
                
            } /* Profile */
        } /* System */
    } /* Windows */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CProfile_CIHardwareIdentificationStatics;
#endif /* !defined(____x_ABI_CWindows_CSystem_CProfile_CIHardwareIdentificationStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_SYSTEM_PROFILE_PROFILEHARDWARETOKENCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.System.Profile.IHardwareToken
 *
 * Introduced to Windows.System.Profile.ProfileHardwareTokenContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.Profile.HardwareToken
 *
 *
 */
#if WINDOWS_SYSTEM_PROFILE_PROFILEHARDWARETOKENCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSystem_CProfile_CIHardwareToken_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CProfile_CIHardwareToken_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Profile_IHardwareToken[] = L"Windows.System.Profile.IHardwareToken";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Profile {
                /* [object, uuid("28F6D4C0-FB12-40A4-8167-7F4E03D2724C"), exclusiveto, contract] */
                MIDL_INTERFACE("28F6D4C0-FB12-40A4-8167-7F4E03D2724C")
                IHardwareToken : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Id(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IBuffer * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Signature(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IBuffer * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Certificate(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IBuffer * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IHardwareToken=_uuidof(IHardwareToken);
                
            } /* Profile */
        } /* System */
    } /* Windows */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CProfile_CIHardwareToken;
#endif /* !defined(____x_ABI_CWindows_CSystem_CProfile_CIHardwareToken_INTERFACE_DEFINED__) */
#endif // WINDOWS_SYSTEM_PROFILE_PROFILEHARDWARETOKENCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.System.Profile.IKnownRetailInfoPropertiesStatics
 *
 * Introduced to Windows.System.Profile.ProfileRetailInfoContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.Profile.KnownRetailInfoProperties
 *
 *
 */
#if WINDOWS_SYSTEM_PROFILE_PROFILERETAILINFOCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Profile_IKnownRetailInfoPropertiesStatics[] = L"Windows.System.Profile.IKnownRetailInfoPropertiesStatics";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Profile {
                /* [object, uuid("99571178-500F-487E-8E75-29E551728712"), exclusiveto, contract] */
                MIDL_INTERFACE("99571178-500F-487E-8E75-29E551728712")
                IKnownRetailInfoPropertiesStatics : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RetailAccessCode(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ManufacturerName(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ModelName(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DisplayModelName(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Price(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsFeatured(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FormFactor(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ScreenSize(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Weight(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DisplayDescription(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BatteryLifeDescription(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ProcessorDescription(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Memory(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_StorageDescription(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_GraphicsDescription(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FrontCameraDescription(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RearCameraDescription(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HasNfc(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HasSdSlot(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HasOpticalDrive(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsOfficeInstalled(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_WindowsEdition(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IKnownRetailInfoPropertiesStatics=_uuidof(IKnownRetailInfoPropertiesStatics);
                
            } /* Profile */
        } /* System */
    } /* Windows */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics;
#endif /* !defined(____x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_SYSTEM_PROFILE_PROFILERETAILINFOCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.System.Profile.IPlatformDiagnosticsAndUsageDataSettingsStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.Profile.PlatformDiagnosticsAndUsageDataSettings
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CSystem_CProfile_CIPlatformDiagnosticsAndUsageDataSettingsStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CProfile_CIPlatformDiagnosticsAndUsageDataSettingsStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Profile_IPlatformDiagnosticsAndUsageDataSettingsStatics[] = L"Windows.System.Profile.IPlatformDiagnosticsAndUsageDataSettingsStatics";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Profile {
                /* [object, uuid("B6E24C1B-7B1C-4B32-8C62-A66597CE723A"), exclusiveto, contract] */
                MIDL_INTERFACE("B6E24C1B-7B1C-4B32-8C62-A66597CE723A")
                IPlatformDiagnosticsAndUsageDataSettingsStatics : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CollectionLevel(
                        /* [retval, out] */__RPC__out ABI::Windows::System::Profile::PlatformDataCollectionLevel * value
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_CollectionLevelChanged(
                        /* [in] */__RPC__in_opt __FIEventHandler_1_IInspectable * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_CollectionLevelChanged(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CanCollectDiagnostics(
                        /* [in] */ABI::Windows::System::Profile::PlatformDataCollectionLevel level,
                        /* [retval, out] */__RPC__out ::boolean * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPlatformDiagnosticsAndUsageDataSettingsStatics=_uuidof(IPlatformDiagnosticsAndUsageDataSettingsStatics);
                
            } /* Profile */
        } /* System */
    } /* Windows */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CProfile_CIPlatformDiagnosticsAndUsageDataSettingsStatics;
#endif /* !defined(____x_ABI_CWindows_CSystem_CProfile_CIPlatformDiagnosticsAndUsageDataSettingsStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.System.Profile.IRetailInfoStatics
 *
 * Introduced to Windows.System.Profile.ProfileRetailInfoContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.Profile.RetailInfo
 *
 *
 */
#if WINDOWS_SYSTEM_PROFILE_PROFILERETAILINFOCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSystem_CProfile_CIRetailInfoStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CProfile_CIRetailInfoStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Profile_IRetailInfoStatics[] = L"Windows.System.Profile.IRetailInfoStatics";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Profile {
                /* [object, uuid("0712C6B8-8B92-4F2A-8499-031F1798D6EF"), exclusiveto, contract] */
                MIDL_INTERFACE("0712C6B8-8B92-4F2A-8499-031F1798D6EF")
                IRetailInfoStatics : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsDemoModeEnabled(
                        /* [retval, out] */__RPC__out ::boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Properties(
                        /* [retval, out] */__RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRetailInfoStatics=_uuidof(IRetailInfoStatics);
                
            } /* Profile */
        } /* System */
    } /* Windows */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CProfile_CIRetailInfoStatics;
#endif /* !defined(____x_ABI_CWindows_CSystem_CProfile_CIRetailInfoStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_SYSTEM_PROFILE_PROFILERETAILINFOCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.System.Profile.ISharedModeSettingsStatics
 *
 * Introduced to Windows.System.Profile.ProfileSharedModeContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.Profile.SharedModeSettings
 *
 *
 */
#if WINDOWS_SYSTEM_PROFILE_PROFILESHAREDMODECONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSystem_CProfile_CISharedModeSettingsStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CProfile_CISharedModeSettingsStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Profile_ISharedModeSettingsStatics[] = L"Windows.System.Profile.ISharedModeSettingsStatics";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Profile {
                /* [object, uuid("893DF40E-CAD6-4D50-8C49-6FCFC03EDB29"), exclusiveto, contract] */
                MIDL_INTERFACE("893DF40E-CAD6-4D50-8C49-6FCFC03EDB29")
                ISharedModeSettingsStatics : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsEnabled(
                        /* [retval, out] */__RPC__out ::boolean * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISharedModeSettingsStatics=_uuidof(ISharedModeSettingsStatics);
                
            } /* Profile */
        } /* System */
    } /* Windows */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CProfile_CISharedModeSettingsStatics;
#endif /* !defined(____x_ABI_CWindows_CSystem_CProfile_CISharedModeSettingsStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_SYSTEM_PROFILE_PROFILESHAREDMODECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.System.Profile.ISharedModeSettingsStatics2
 *
 * Introduced to Windows.System.Profile.ProfileSharedModeContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.Profile.SharedModeSettings
 *
 *
 */
#if WINDOWS_SYSTEM_PROFILE_PROFILESHAREDMODECONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CSystem_CProfile_CISharedModeSettingsStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CProfile_CISharedModeSettingsStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Profile_ISharedModeSettingsStatics2[] = L"Windows.System.Profile.ISharedModeSettingsStatics2";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Profile {
                /* [object, uuid("608988A4-CCF1-4EE8-A5E2-FD6A1D0CFAC8"), exclusiveto, contract] */
                MIDL_INTERFACE("608988A4-CCF1-4EE8-A5E2-FD6A1D0CFAC8")
                ISharedModeSettingsStatics2 : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ShouldAvoidLocalStorage(
                        /* [retval, out] */__RPC__out ::boolean * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISharedModeSettingsStatics2=_uuidof(ISharedModeSettingsStatics2);
                
            } /* Profile */
        } /* System */
    } /* Windows */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CProfile_CISharedModeSettingsStatics2;
#endif /* !defined(____x_ABI_CWindows_CSystem_CProfile_CISharedModeSettingsStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_SYSTEM_PROFILE_PROFILESHAREDMODECONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.System.Profile.ISystemIdentificationInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.Profile.SystemIdentificationInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Profile_ISystemIdentificationInfo[] = L"Windows.System.Profile.ISystemIdentificationInfo";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Profile {
                /* [object, uuid("0C659E7D-C3C2-4D33-A2DF-21BC41916EB3"), exclusiveto, contract] */
                MIDL_INTERFACE("0C659E7D-C3C2-4D33-A2DF-21BC41916EB3")
                ISystemIdentificationInfo : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Id(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IBuffer * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Source(
                        /* [retval, out] */__RPC__out ABI::Windows::System::Profile::SystemIdentificationSource * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISystemIdentificationInfo=_uuidof(ISystemIdentificationInfo);
                
            } /* Profile */
        } /* System */
    } /* Windows */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationInfo;
#endif /* !defined(____x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.System.Profile.ISystemIdentificationStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.Profile.SystemIdentification
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Profile_ISystemIdentificationStatics[] = L"Windows.System.Profile.ISystemIdentificationStatics";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Profile {
                /* [object, uuid("5581F42A-D3DF-4D93-A37D-C41A616C6D01"), exclusiveto, contract] */
                MIDL_INTERFACE("5581F42A-D3DF-4D93-A37D-C41A616C6D01")
                ISystemIdentificationStatics : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE GetSystemIdForPublisher(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::System::Profile::ISystemIdentificationInfo * * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetSystemIdForUser(
                        /* [in] */__RPC__in_opt ABI::Windows::System::IUser * user,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::System::Profile::ISystemIdentificationInfo * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISystemIdentificationStatics=_uuidof(ISystemIdentificationStatics);
                
            } /* Profile */
        } /* System */
    } /* Windows */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationStatics;
#endif /* !defined(____x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.System.Profile.ISystemSetupInfoStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 7.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.Profile.SystemSetupInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x70000
#if !defined(____x_ABI_CWindows_CSystem_CProfile_CISystemSetupInfoStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CProfile_CISystemSetupInfoStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Profile_ISystemSetupInfoStatics[] = L"Windows.System.Profile.ISystemSetupInfoStatics";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Profile {
                /* [object, uuid("2C9620A8-1D88-5E2D-A324-A543AF4247EE"), exclusiveto, contract] */
                MIDL_INTERFACE("2C9620A8-1D88-5E2D-A324-A543AF4247EE")
                ISystemSetupInfoStatics : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_OutOfBoxExperienceState(
                        /* [retval, out] */__RPC__out ABI::Windows::System::Profile::SystemOutOfBoxExperienceState * value
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_OutOfBoxExperienceStateChanged(
                        /* [in] */__RPC__in_opt __FIEventHandler_1_IInspectable * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_OutOfBoxExperienceStateChanged(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISystemSetupInfoStatics=_uuidof(ISystemSetupInfoStatics);
                
            } /* Profile */
        } /* System */
    } /* Windows */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CProfile_CISystemSetupInfoStatics;
#endif /* !defined(____x_ABI_CWindows_CSystem_CProfile_CISystemSetupInfoStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x70000


/*
 *
 * Interface Windows.System.Profile.IUnsupportedAppRequirement
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 8.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.Profile.UnsupportedAppRequirement
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x80000
#if !defined(____x_ABI_CWindows_CSystem_CProfile_CIUnsupportedAppRequirement_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CProfile_CIUnsupportedAppRequirement_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Profile_IUnsupportedAppRequirement[] = L"Windows.System.Profile.IUnsupportedAppRequirement";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Profile {
                /* [object, uuid("6182445C-894B-5CBC-8976-A98E0A9B998D"), exclusiveto, contract] */
                MIDL_INTERFACE("6182445C-894B-5CBC-8976-A98E0A9B998D")
                IUnsupportedAppRequirement : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Requirement(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Reasons(
                        /* [retval, out] */__RPC__out ABI::Windows::System::Profile::UnsupportedAppRequirementReasons * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IUnsupportedAppRequirement=_uuidof(IUnsupportedAppRequirement);
                
            } /* Profile */
        } /* System */
    } /* Windows */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CProfile_CIUnsupportedAppRequirement;
#endif /* !defined(____x_ABI_CWindows_CSystem_CProfile_CIUnsupportedAppRequirement_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x80000


/*
 *
 * Interface Windows.System.Profile.IWindowsIntegrityPolicyStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 7.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.Profile.WindowsIntegrityPolicy
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x70000
#if !defined(____x_ABI_CWindows_CSystem_CProfile_CIWindowsIntegrityPolicyStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CProfile_CIWindowsIntegrityPolicyStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Profile_IWindowsIntegrityPolicyStatics[] = L"Windows.System.Profile.IWindowsIntegrityPolicyStatics";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Profile {
                /* [object, uuid("7D1D81DB-8D63-4789-9EA5-DDCF65A94F3C"), exclusiveto, contract] */
                MIDL_INTERFACE("7D1D81DB-8D63-4789-9EA5-DDCF65A94F3C")
                IWindowsIntegrityPolicyStatics : public IInspectable
                {
                public:
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsEnabled(
                        /* [retval, out] */__RPC__out ::boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsEnabledForTrial(
                        /* [retval, out] */__RPC__out ::boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CanDisable(
                        /* [retval, out] */__RPC__out ::boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsDisableSupported(
                        /* [retval, out] */__RPC__out ::boolean * value
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_PolicyChanged(
                        /* [in] */__RPC__in_opt __FIEventHandler_1_IInspectable * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_PolicyChanged(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IWindowsIntegrityPolicyStatics=_uuidof(IWindowsIntegrityPolicyStatics);
                
            } /* Profile */
        } /* System */
    } /* Windows */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CProfile_CIWindowsIntegrityPolicyStatics;
#endif /* !defined(____x_ABI_CWindows_CSystem_CProfile_CIWindowsIntegrityPolicyStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x70000


/*
 *
 * Class Windows.System.Profile.AnalyticsInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.System.Profile.IAnalyticsInfoStatics2 interface starting with version 6.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.System.Profile.IAnalyticsInfoStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_System_Profile_AnalyticsInfo_DEFINED
#define RUNTIMECLASS_Windows_System_Profile_AnalyticsInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Profile_AnalyticsInfo[] = L"Windows.System.Profile.AnalyticsInfo";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.System.Profile.AnalyticsVersionInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.System.Profile.IAnalyticsVersionInfo ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_System_Profile_AnalyticsVersionInfo_DEFINED
#define RUNTIMECLASS_Windows_System_Profile_AnalyticsVersionInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Profile_AnalyticsVersionInfo[] = L"Windows.System.Profile.AnalyticsVersionInfo";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.System.Profile.AppApplicability
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 8.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.System.Profile.IAppApplicabilityStatics interface starting with version 8.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x80000
#ifndef RUNTIMECLASS_Windows_System_Profile_AppApplicability_DEFINED
#define RUNTIMECLASS_Windows_System_Profile_AppApplicability_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Profile_AppApplicability[] = L"Windows.System.Profile.AppApplicability";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x80000


/*
 *
 * Class Windows.System.Profile.EducationSettings
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.System.Profile.IEducationSettingsStatics interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#ifndef RUNTIMECLASS_Windows_System_Profile_EducationSettings_DEFINED
#define RUNTIMECLASS_Windows_System_Profile_EducationSettings_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Profile_EducationSettings[] = L"Windows.System.Profile.EducationSettings";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.System.Profile.HardwareIdentification
 *
 * Introduced to Windows.System.Profile.ProfileHardwareTokenContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.System.Profile.IHardwareIdentificationStatics interface starting with version 1.0 of the Windows.System.Profile.ProfileHardwareTokenContract API contract
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_SYSTEM_PROFILE_PROFILEHARDWARETOKENCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_System_Profile_HardwareIdentification_DEFINED
#define RUNTIMECLASS_Windows_System_Profile_HardwareIdentification_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Profile_HardwareIdentification[] = L"Windows.System.Profile.HardwareIdentification";
#endif
#endif // WINDOWS_SYSTEM_PROFILE_PROFILEHARDWARETOKENCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.System.Profile.HardwareToken
 *
 * Introduced to Windows.System.Profile.ProfileHardwareTokenContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.System.Profile.IHardwareToken ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_SYSTEM_PROFILE_PROFILEHARDWARETOKENCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_System_Profile_HardwareToken_DEFINED
#define RUNTIMECLASS_Windows_System_Profile_HardwareToken_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Profile_HardwareToken[] = L"Windows.System.Profile.HardwareToken";
#endif
#endif // WINDOWS_SYSTEM_PROFILE_PROFILEHARDWARETOKENCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.System.Profile.KnownRetailInfoProperties
 *
 * Introduced to Windows.System.Profile.ProfileRetailInfoContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.System.Profile.IKnownRetailInfoPropertiesStatics interface starting with version 1.0 of the Windows.System.Profile.ProfileRetailInfoContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_SYSTEM_PROFILE_PROFILERETAILINFOCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_System_Profile_KnownRetailInfoProperties_DEFINED
#define RUNTIMECLASS_Windows_System_Profile_KnownRetailInfoProperties_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Profile_KnownRetailInfoProperties[] = L"Windows.System.Profile.KnownRetailInfoProperties";
#endif
#endif // WINDOWS_SYSTEM_PROFILE_PROFILERETAILINFOCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.System.Profile.PlatformDiagnosticsAndUsageDataSettings
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.System.Profile.IPlatformDiagnosticsAndUsageDataSettingsStatics interface starting with version 2.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#ifndef RUNTIMECLASS_Windows_System_Profile_PlatformDiagnosticsAndUsageDataSettings_DEFINED
#define RUNTIMECLASS_Windows_System_Profile_PlatformDiagnosticsAndUsageDataSettings_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Profile_PlatformDiagnosticsAndUsageDataSettings[] = L"Windows.System.Profile.PlatformDiagnosticsAndUsageDataSettings";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.System.Profile.RetailInfo
 *
 * Introduced to Windows.System.Profile.ProfileRetailInfoContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.System.Profile.IRetailInfoStatics interface starting with version 1.0 of the Windows.System.Profile.ProfileRetailInfoContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_SYSTEM_PROFILE_PROFILERETAILINFOCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_System_Profile_RetailInfo_DEFINED
#define RUNTIMECLASS_Windows_System_Profile_RetailInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Profile_RetailInfo[] = L"Windows.System.Profile.RetailInfo";
#endif
#endif // WINDOWS_SYSTEM_PROFILE_PROFILERETAILINFOCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.System.Profile.SharedModeSettings
 *
 * Introduced to Windows.System.Profile.ProfileSharedModeContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.System.Profile.ISharedModeSettingsStatics2 interface starting with version 2.0 of the Windows.System.Profile.ProfileSharedModeContract API contract
 *   Static Methods exist on the Windows.System.Profile.ISharedModeSettingsStatics interface starting with version 1.0 of the Windows.System.Profile.ProfileSharedModeContract API contract
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_SYSTEM_PROFILE_PROFILESHAREDMODECONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_System_Profile_SharedModeSettings_DEFINED
#define RUNTIMECLASS_Windows_System_Profile_SharedModeSettings_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Profile_SharedModeSettings[] = L"Windows.System.Profile.SharedModeSettings";
#endif
#endif // WINDOWS_SYSTEM_PROFILE_PROFILESHAREDMODECONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.System.Profile.SystemIdentification
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.System.Profile.ISystemIdentificationStatics interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#ifndef RUNTIMECLASS_Windows_System_Profile_SystemIdentification_DEFINED
#define RUNTIMECLASS_Windows_System_Profile_SystemIdentification_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Profile_SystemIdentification[] = L"Windows.System.Profile.SystemIdentification";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.System.Profile.SystemIdentificationInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.System.Profile.ISystemIdentificationInfo ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_System_Profile_SystemIdentificationInfo_DEFINED
#define RUNTIMECLASS_Windows_System_Profile_SystemIdentificationInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Profile_SystemIdentificationInfo[] = L"Windows.System.Profile.SystemIdentificationInfo";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.System.Profile.SystemSetupInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 7.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.System.Profile.ISystemSetupInfoStatics interface starting with version 7.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x70000
#ifndef RUNTIMECLASS_Windows_System_Profile_SystemSetupInfo_DEFINED
#define RUNTIMECLASS_Windows_System_Profile_SystemSetupInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Profile_SystemSetupInfo[] = L"Windows.System.Profile.SystemSetupInfo";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x70000


/*
 *
 * Class Windows.System.Profile.UnsupportedAppRequirement
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 8.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.System.Profile.IUnsupportedAppRequirement ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x80000

#ifndef RUNTIMECLASS_Windows_System_Profile_UnsupportedAppRequirement_DEFINED
#define RUNTIMECLASS_Windows_System_Profile_UnsupportedAppRequirement_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Profile_UnsupportedAppRequirement[] = L"Windows.System.Profile.UnsupportedAppRequirement";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x80000


/*
 *
 * Class Windows.System.Profile.WindowsIntegrityPolicy
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 7.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.System.Profile.IWindowsIntegrityPolicyStatics interface starting with version 7.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x70000
#ifndef RUNTIMECLASS_Windows_System_Profile_WindowsIntegrityPolicy_DEFINED
#define RUNTIMECLASS_Windows_System_Profile_WindowsIntegrityPolicy_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Profile_WindowsIntegrityPolicy[] = L"Windows.System.Profile.WindowsIntegrityPolicy";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x70000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStatics __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStatics;

#endif // ____x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStatics2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStatics2 __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStatics2;

#endif // ____x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CProfile_CIAnalyticsVersionInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CProfile_CIAnalyticsVersionInfo_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsVersionInfo __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsVersionInfo;

#endif // ____x_ABI_CWindows_CSystem_CProfile_CIAnalyticsVersionInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CProfile_CIAppApplicabilityStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CProfile_CIAppApplicabilityStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CProfile_CIAppApplicabilityStatics __x_ABI_CWindows_CSystem_CProfile_CIAppApplicabilityStatics;

#endif // ____x_ABI_CWindows_CSystem_CProfile_CIAppApplicabilityStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CProfile_CIEducationSettingsStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CProfile_CIEducationSettingsStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CProfile_CIEducationSettingsStatics __x_ABI_CWindows_CSystem_CProfile_CIEducationSettingsStatics;

#endif // ____x_ABI_CWindows_CSystem_CProfile_CIEducationSettingsStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CProfile_CIHardwareIdentificationStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CProfile_CIHardwareIdentificationStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CProfile_CIHardwareIdentificationStatics __x_ABI_CWindows_CSystem_CProfile_CIHardwareIdentificationStatics;

#endif // ____x_ABI_CWindows_CSystem_CProfile_CIHardwareIdentificationStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CProfile_CIHardwareToken_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CProfile_CIHardwareToken_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CProfile_CIHardwareToken __x_ABI_CWindows_CSystem_CProfile_CIHardwareToken;

#endif // ____x_ABI_CWindows_CSystem_CProfile_CIHardwareToken_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics __x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics;

#endif // ____x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CProfile_CIPlatformDiagnosticsAndUsageDataSettingsStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CProfile_CIPlatformDiagnosticsAndUsageDataSettingsStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CProfile_CIPlatformDiagnosticsAndUsageDataSettingsStatics __x_ABI_CWindows_CSystem_CProfile_CIPlatformDiagnosticsAndUsageDataSettingsStatics;

#endif // ____x_ABI_CWindows_CSystem_CProfile_CIPlatformDiagnosticsAndUsageDataSettingsStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CProfile_CIRetailInfoStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CProfile_CIRetailInfoStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CProfile_CIRetailInfoStatics __x_ABI_CWindows_CSystem_CProfile_CIRetailInfoStatics;

#endif // ____x_ABI_CWindows_CSystem_CProfile_CIRetailInfoStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CProfile_CISharedModeSettingsStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CProfile_CISharedModeSettingsStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CProfile_CISharedModeSettingsStatics __x_ABI_CWindows_CSystem_CProfile_CISharedModeSettingsStatics;

#endif // ____x_ABI_CWindows_CSystem_CProfile_CISharedModeSettingsStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CProfile_CISharedModeSettingsStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CProfile_CISharedModeSettingsStatics2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CProfile_CISharedModeSettingsStatics2 __x_ABI_CWindows_CSystem_CProfile_CISharedModeSettingsStatics2;

#endif // ____x_ABI_CWindows_CSystem_CProfile_CISharedModeSettingsStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationInfo_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationInfo __x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationInfo;

#endif // ____x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationStatics __x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationStatics;

#endif // ____x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CProfile_CISystemSetupInfoStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CProfile_CISystemSetupInfoStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CProfile_CISystemSetupInfoStatics __x_ABI_CWindows_CSystem_CProfile_CISystemSetupInfoStatics;

#endif // ____x_ABI_CWindows_CSystem_CProfile_CISystemSetupInfoStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CProfile_CIUnsupportedAppRequirement_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CProfile_CIUnsupportedAppRequirement_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CProfile_CIUnsupportedAppRequirement __x_ABI_CWindows_CSystem_CProfile_CIUnsupportedAppRequirement;

#endif // ____x_ABI_CWindows_CSystem_CProfile_CIUnsupportedAppRequirement_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CProfile_CIWindowsIntegrityPolicyStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CProfile_CIWindowsIntegrityPolicyStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CProfile_CIWindowsIntegrityPolicyStatics __x_ABI_CWindows_CSystem_CProfile_CIWindowsIntegrityPolicyStatics;

#endif // ____x_ABI_CWindows_CSystem_CProfile_CIWindowsIntegrityPolicyStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x80000
#if !defined(____FIIterator_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement __FIIterator_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement;

typedef struct __FIIterator_1_Windows__CSystem__CProfile__CUnsupportedAppRequirementVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CSystem_CProfile_CIUnsupportedAppRequirement * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CSystem_CProfile_CIUnsupportedAppRequirement * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CSystem__CProfile__CUnsupportedAppRequirementVtbl;

interface __FIIterator_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement
{
    CONST_VTBL struct __FIIterator_1_Windows__CSystem__CProfile__CUnsupportedAppRequirementVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x80000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x80000
#if !defined(____FIIterable_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement __FIIterable_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement;

typedef  struct __FIIterable_1_Windows__CSystem__CProfile__CUnsupportedAppRequirementVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement **first);

    END_INTERFACE
} __FIIterable_1_Windows__CSystem__CProfile__CUnsupportedAppRequirementVtbl;

interface __FIIterable_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement
{
    CONST_VTBL struct __FIIterable_1_Windows__CSystem__CProfile__CUnsupportedAppRequirementVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x80000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x80000
#if !defined(____FIVectorView_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement __FIVectorView_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement;

typedef struct __FIVectorView_1_Windows__CSystem__CProfile__CUnsupportedAppRequirementVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CSystem_CProfile_CIUnsupportedAppRequirement * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement * This,
            /* [in] */ __x_ABI_CWindows_CSystem_CProfile_CIUnsupportedAppRequirement * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CSystem_CProfile_CIUnsupportedAppRequirement * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CSystem__CProfile__CUnsupportedAppRequirementVtbl;

interface __FIVectorView_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement
{
    CONST_VTBL struct __FIVectorView_1_Windows__CSystem__CProfile__CUnsupportedAppRequirementVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x80000

#if !defined(____FIIterator_1_HSTRING_INTERFACE_DEFINED__)
#define ____FIIterator_1_HSTRING_INTERFACE_DEFINED__

typedef interface __FIIterator_1_HSTRING __FIIterator_1_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_HSTRING;

typedef struct __FIIterator_1_HSTRINGVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_HSTRING * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_HSTRING * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_HSTRING * This, /* [retval][out] */ __RPC__out HSTRING *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_HSTRING * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_HSTRING * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_HSTRING * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) HSTRING *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_HSTRINGVtbl;

interface __FIIterator_1_HSTRING
{
    CONST_VTBL struct __FIIterator_1_HSTRINGVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_HSTRING_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_HSTRING_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_HSTRING_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_HSTRING_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_HSTRING_INTERFACE_DEFINED__


#if !defined(____FIIterable_1_HSTRING_INTERFACE_DEFINED__)
#define ____FIIterable_1_HSTRING_INTERFACE_DEFINED__

typedef interface __FIIterable_1_HSTRING __FIIterable_1_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_HSTRING;

typedef  struct __FIIterable_1_HSTRINGVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_HSTRING * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_HSTRING * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_HSTRING * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_HSTRING * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_HSTRING * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_HSTRING **first);

    END_INTERFACE
} __FIIterable_1_HSTRINGVtbl;

interface __FIIterable_1_HSTRING
{
    CONST_VTBL struct __FIIterable_1_HSTRINGVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_HSTRING_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_HSTRING_INTERFACE_DEFINED__


#if !defined(____FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__)
#define ____FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__

typedef interface __FIKeyValuePair_2_HSTRING_HSTRING __FIKeyValuePair_2_HSTRING_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIKeyValuePair_2_HSTRING_HSTRING;

typedef struct __FIKeyValuePair_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This, /* [retval][out] */ __RPC__out HSTRING *key);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This, /* [retval][out] */ __RPC__deref_out_opt HSTRING *value);
    END_INTERFACE
} __FIKeyValuePair_2_HSTRING_HSTRINGVtbl;

interface __FIKeyValuePair_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIKeyValuePair_2_HSTRING_HSTRINGVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIKeyValuePair_2_HSTRING_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIKeyValuePair_2_HSTRING_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIKeyValuePair_2_HSTRING_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIKeyValuePair_2_HSTRING_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIKeyValuePair_2_HSTRING_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIKeyValuePair_2_HSTRING_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIKeyValuePair_2_HSTRING_HSTRING_get_Key(This,key)	\
    ( (This)->lpVtbl -> get_Key(This,key) ) 

#define __FIKeyValuePair_2_HSTRING_HSTRING_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__



#if !defined(____FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__)
#define ____FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__

typedef interface __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING;

typedef struct __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, /* [retval][out] */ __RPC__out __FIKeyValuePair_2_HSTRING_HSTRING * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_HSTRING_HSTRING * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl;

interface __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__



#if !defined(____FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__)
#define ____FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__

typedef interface __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING;

typedef  struct __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING **first);

    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl;

interface __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__


#if !defined(____FIMapView_2_HSTRING_HSTRING_INTERFACE_DEFINED__)
#define ____FIMapView_2_HSTRING_HSTRING_INTERFACE_DEFINED__

typedef interface __FIMapView_2_HSTRING_HSTRING __FIMapView_2_HSTRING_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIMapView_2_HSTRING_HSTRING;

typedef struct __FIMapView_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This,/* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This,
        /* [in] */ __RPC__in HSTRING key,
        /* [retval][out] */ __RPC__deref_out_opt HSTRING *value);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This, /* [retval][out] */ __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This, /* [in] */ __RPC__in HSTRING key, /* [retval][out] */ __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This,/* [out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_HSTRING **firstPartition,
        /* [out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_HSTRING **secondPartition);
    END_INTERFACE
} __FIMapView_2_HSTRING_HSTRINGVtbl;

interface __FIMapView_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIMapView_2_HSTRING_HSTRINGVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIMapView_2_HSTRING_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIMapView_2_HSTRING_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIMapView_2_HSTRING_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIMapView_2_HSTRING_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIMapView_2_HSTRING_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIMapView_2_HSTRING_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIMapView_2_HSTRING_HSTRING_Lookup(This,key,value)	\
    ( (This)->lpVtbl -> Lookup(This,key,value) ) 
#define __FIMapView_2_HSTRING_HSTRING_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 
#define __FIMapView_2_HSTRING_HSTRING_HasKey(This,key,found)	\
    ( (This)->lpVtbl -> HasKey(This,key,found) ) 
#define __FIMapView_2_HSTRING_HSTRING_Split(This,firstPartition,secondPartition)	\
    ( (This)->lpVtbl -> Split(This,firstPartition,secondPartition) ) 
#endif /* COBJMACROS */


#endif // ____FIMapView_2_HSTRING_HSTRING_INTERFACE_DEFINED__



#if !defined(____FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_HSTRING_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_HSTRING_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_HSTRING __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_HSTRING;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1___FIMapView_2_HSTRING_HSTRING __FIAsyncOperation_1___FIMapView_2_HSTRING_HSTRING;

typedef struct __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_HSTRING * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_HSTRING * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1___FIMapView_2_HSTRING_HSTRING *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_HSTRINGVtbl;

interface __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_HSTRINGVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_HSTRING_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_HSTRING_INTERFACE_DEFINED__



#if !defined(____FIAsyncOperation_1___FIMapView_2_HSTRING_HSTRING_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1___FIMapView_2_HSTRING_HSTRING_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1___FIMapView_2_HSTRING_HSTRING __FIAsyncOperation_1___FIMapView_2_HSTRING_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1___FIMapView_2_HSTRING_HSTRING;

typedef struct __FIAsyncOperation_1___FIMapView_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIMapView_2_HSTRING_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIMapView_2_HSTRING_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIMapView_2_HSTRING_HSTRING * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIMapView_2_HSTRING_HSTRING * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIMapView_2_HSTRING_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIMapView_2_HSTRING_HSTRING * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIMapView_2_HSTRING_HSTRING * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_HSTRING *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIMapView_2_HSTRING_HSTRING * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_HSTRING **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIMapView_2_HSTRING_HSTRING * This, /* [retval][out] */ __RPC__out __FIMapView_2_HSTRING_HSTRING * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIMapView_2_HSTRING_HSTRINGVtbl;

interface __FIAsyncOperation_1___FIMapView_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIAsyncOperation_1___FIMapView_2_HSTRING_HSTRINGVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1___FIMapView_2_HSTRING_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1___FIMapView_2_HSTRING_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1___FIMapView_2_HSTRING_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1___FIMapView_2_HSTRING_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1___FIMapView_2_HSTRING_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1___FIMapView_2_HSTRING_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1___FIMapView_2_HSTRING_HSTRING_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIMapView_2_HSTRING_HSTRING_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIMapView_2_HSTRING_HSTRING_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1___FIMapView_2_HSTRING_HSTRING_INTERFACE_DEFINED__



#if !defined(____FIEventHandler_1_IInspectable_INTERFACE_DEFINED__)
#define ____FIEventHandler_1_IInspectable_INTERFACE_DEFINED__

typedef interface __FIEventHandler_1_IInspectable __FIEventHandler_1_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIEventHandler_1_IInspectable;

typedef struct __FIEventHandler_1_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIEventHandler_1_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIEventHandler_1_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIEventHandler_1_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIEventHandler_1_IInspectable * This,/* [in] */ __RPC__in_opt IInspectable *sender,/* [in] */ __RPC__in_opt IInspectable * *e);
    END_INTERFACE
} __FIEventHandler_1_IInspectableVtbl;

interface __FIEventHandler_1_IInspectable
{
    CONST_VTBL struct __FIEventHandler_1_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIEventHandler_1_IInspectable_QueryInterface(This,riid,ppvObject)	\
        ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIEventHandler_1_IInspectable_AddRef(This)	\
        ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIEventHandler_1_IInspectable_Release(This)	\
        ( (This)->lpVtbl -> Release(This) ) 

#define __FIEventHandler_1_IInspectable_Invoke(This,sender,e)	\
        ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */


#endif // ____FIEventHandler_1_IInspectable_INTERFACE_DEFINED__



#if !defined(____FIKeyValuePair_2_HSTRING_IInspectable_INTERFACE_DEFINED__)
#define ____FIKeyValuePair_2_HSTRING_IInspectable_INTERFACE_DEFINED__

typedef interface __FIKeyValuePair_2_HSTRING_IInspectable __FIKeyValuePair_2_HSTRING_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIKeyValuePair_2_HSTRING_IInspectable;

typedef struct __FIKeyValuePair_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This, /* [retval][out] */ __RPC__out HSTRING *key);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This, /* [retval][out] */ __RPC__deref_out_opt IInspectable * *value);
    END_INTERFACE
} __FIKeyValuePair_2_HSTRING_IInspectableVtbl;

interface __FIKeyValuePair_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIKeyValuePair_2_HSTRING_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIKeyValuePair_2_HSTRING_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIKeyValuePair_2_HSTRING_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIKeyValuePair_2_HSTRING_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIKeyValuePair_2_HSTRING_IInspectable_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIKeyValuePair_2_HSTRING_IInspectable_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIKeyValuePair_2_HSTRING_IInspectable_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIKeyValuePair_2_HSTRING_IInspectable_get_Key(This,key)	\
    ( (This)->lpVtbl -> get_Key(This,key) ) 

#define __FIKeyValuePair_2_HSTRING_IInspectable_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIKeyValuePair_2_HSTRING_IInspectable_INTERFACE_DEFINED__



#if !defined(____FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_INTERFACE_DEFINED__)
#define ____FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_INTERFACE_DEFINED__

typedef interface __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable;

typedef struct __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This, /* [retval][out] */ __RPC__out __FIKeyValuePair_2_HSTRING_IInspectable * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_HSTRING_IInspectable * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl;

interface __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_INTERFACE_DEFINED__



#if !defined(____FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_INTERFACE_DEFINED__)
#define ____FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_INTERFACE_DEFINED__

typedef interface __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable;

typedef  struct __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable **first);

    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl;

interface __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_INTERFACE_DEFINED__



#if !defined(____FIMapView_2_HSTRING_IInspectable_INTERFACE_DEFINED__)
#define ____FIMapView_2_HSTRING_IInspectable_INTERFACE_DEFINED__

typedef interface __FIMapView_2_HSTRING_IInspectable __FIMapView_2_HSTRING_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIMapView_2_HSTRING_IInspectable;

typedef struct __FIMapView_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This,/* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This,
        /* [in] */ __RPC__in HSTRING key,
        /* [retval][out] */ __RPC__deref_out_opt IInspectable * *value);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This, /* [retval][out] */ __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This, /* [in] */ __RPC__in HSTRING key, /* [retval][out] */ __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This,/* [out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable **firstPartition,
        /* [out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable **secondPartition);
    END_INTERFACE
} __FIMapView_2_HSTRING_IInspectableVtbl;

interface __FIMapView_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIMapView_2_HSTRING_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIMapView_2_HSTRING_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIMapView_2_HSTRING_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIMapView_2_HSTRING_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIMapView_2_HSTRING_IInspectable_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIMapView_2_HSTRING_IInspectable_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIMapView_2_HSTRING_IInspectable_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIMapView_2_HSTRING_IInspectable_Lookup(This,key,value)	\
    ( (This)->lpVtbl -> Lookup(This,key,value) ) 
#define __FIMapView_2_HSTRING_IInspectable_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 
#define __FIMapView_2_HSTRING_IInspectable_HasKey(This,key,found)	\
    ( (This)->lpVtbl -> HasKey(This,key,found) ) 
#define __FIMapView_2_HSTRING_IInspectable_Split(This,firstPartition,secondPartition)	\
    ( (This)->lpVtbl -> Split(This,firstPartition,secondPartition) ) 
#endif /* COBJMACROS */


#endif // ____FIMapView_2_HSTRING_IInspectable_INTERFACE_DEFINED__






#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIBuffer __x_ABI_CWindows_CStorage_CStreams_CIBuffer;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__





#ifndef ____x_ABI_CWindows_CSystem_CIUser_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CIUser_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CIUser __x_ABI_CWindows_CSystem_CIUser;

#endif // ____x_ABI_CWindows_CSystem_CIUser_FWD_DEFINED__








typedef enum __x_ABI_CWindows_CSystem_CProfile_CPlatformDataCollectionLevel __x_ABI_CWindows_CSystem_CProfile_CPlatformDataCollectionLevel;


typedef enum __x_ABI_CWindows_CSystem_CProfile_CSystemIdentificationSource __x_ABI_CWindows_CSystem_CProfile_CSystemIdentificationSource;


typedef enum __x_ABI_CWindows_CSystem_CProfile_CSystemOutOfBoxExperienceState __x_ABI_CWindows_CSystem_CProfile_CSystemOutOfBoxExperienceState;


typedef enum __x_ABI_CWindows_CSystem_CProfile_CUnsupportedAppRequirementReasons __x_ABI_CWindows_CSystem_CProfile_CUnsupportedAppRequirementReasons;












































/*
 *
 * Struct Windows.System.Profile.PlatformDataCollectionLevel
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CSystem_CProfile_CPlatformDataCollectionLevel
{
    PlatformDataCollectionLevel_Security = 0,
    PlatformDataCollectionLevel_Basic = 1,
    PlatformDataCollectionLevel_Enhanced = 2,
    PlatformDataCollectionLevel_Full = 3,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Struct Windows.System.Profile.SystemIdentificationSource
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CSystem_CProfile_CSystemIdentificationSource
{
    SystemIdentificationSource_None = 0,
    SystemIdentificationSource_Tpm = 1,
    SystemIdentificationSource_Uefi = 2,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
    
    SystemIdentificationSource_Registry = 3,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
    
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.System.Profile.SystemOutOfBoxExperienceState
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 7.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x70000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CSystem_CProfile_CSystemOutOfBoxExperienceState
{
    SystemOutOfBoxExperienceState_NotStarted = 0,
    SystemOutOfBoxExperienceState_InProgress = 1,
    SystemOutOfBoxExperienceState_Completed = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x70000


/*
 *
 * Struct Windows.System.Profile.UnsupportedAppRequirementReasons
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 8.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x80000
/* [v1_enum, flags, contract] */
enum __x_ABI_CWindows_CSystem_CProfile_CUnsupportedAppRequirementReasons
{
    UnsupportedAppRequirementReasons_Unknown = 0,
    UnsupportedAppRequirementReasons_DeniedBySystem = 0x1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x80000


/*
 *
 * Interface Windows.System.Profile.IAnalyticsInfoStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.Profile.AnalyticsInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Profile_IAnalyticsInfoStatics[] = L"Windows.System.Profile.IAnalyticsInfoStatics";
/* [object, uuid("1D5EE066-188D-5BA9-4387-ACAEB0E7E305"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_VersionInfo )(
        __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsVersionInfo * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DeviceForm )(
        __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStaticsVtbl;

interface __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStatics_get_VersionInfo(This,value) \
    ( (This)->lpVtbl->get_VersionInfo(This,value) )

#define __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStatics_get_DeviceForm(This,value) \
    ( (This)->lpVtbl->get_DeviceForm(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStatics;
#endif /* !defined(____x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.System.Profile.IAnalyticsInfoStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 6.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.Profile.AnalyticsInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x60000
#if !defined(____x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Profile_IAnalyticsInfoStatics2[] = L"Windows.System.Profile.IAnalyticsInfoStatics2";
/* [object, uuid("101704EA-A7F9-46D2-AB94-016865AFDB25"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStatics2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStatics2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStatics2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStatics2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStatics2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStatics2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetSystemPropertiesAsync )(
        __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStatics2 * This,
        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * attributeNames,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIMapView_2_HSTRING_HSTRING * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStatics2Vtbl;

interface __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStatics2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStatics2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStatics2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStatics2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStatics2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStatics2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStatics2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStatics2_GetSystemPropertiesAsync(This,attributeNames,operation) \
    ( (This)->lpVtbl->GetSystemPropertiesAsync(This,attributeNames,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStatics2;
#endif /* !defined(____x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x60000


/*
 *
 * Interface Windows.System.Profile.IAnalyticsVersionInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.Profile.AnalyticsVersionInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSystem_CProfile_CIAnalyticsVersionInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CProfile_CIAnalyticsVersionInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Profile_IAnalyticsVersionInfo[] = L"Windows.System.Profile.IAnalyticsVersionInfo";
/* [object, uuid("926130B8-9955-4C74-BDC1-7CD0DECF9B03"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsVersionInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsVersionInfo * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsVersionInfo * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsVersionInfo * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsVersionInfo * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsVersionInfo * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsVersionInfo * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DeviceFamily )(
        __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsVersionInfo * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DeviceFamilyVersion )(
        __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsVersionInfo * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsVersionInfoVtbl;

interface __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsVersionInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsVersionInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsVersionInfo_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsVersionInfo_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsVersionInfo_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsVersionInfo_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsVersionInfo_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsVersionInfo_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsVersionInfo_get_DeviceFamily(This,value) \
    ( (This)->lpVtbl->get_DeviceFamily(This,value) )

#define __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsVersionInfo_get_DeviceFamilyVersion(This,value) \
    ( (This)->lpVtbl->get_DeviceFamilyVersion(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CProfile_CIAnalyticsVersionInfo;
#endif /* !defined(____x_ABI_CWindows_CSystem_CProfile_CIAnalyticsVersionInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.System.Profile.IAppApplicabilityStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 8.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.Profile.AppApplicability
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x80000
#if !defined(____x_ABI_CWindows_CSystem_CProfile_CIAppApplicabilityStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CProfile_CIAppApplicabilityStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Profile_IAppApplicabilityStatics[] = L"Windows.System.Profile.IAppApplicabilityStatics";
/* [object, uuid("1664A082-0F38-5C99-83E4-48995970861C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CProfile_CIAppApplicabilityStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIAppApplicabilityStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIAppApplicabilityStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIAppApplicabilityStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIAppApplicabilityStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIAppApplicabilityStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIAppApplicabilityStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetUnsupportedAppRequirements )(
        __x_ABI_CWindows_CSystem_CProfile_CIAppApplicabilityStatics * This,
        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * capabilities,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CProfile_CIAppApplicabilityStaticsVtbl;

interface __x_ABI_CWindows_CSystem_CProfile_CIAppApplicabilityStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CProfile_CIAppApplicabilityStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CProfile_CIAppApplicabilityStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CProfile_CIAppApplicabilityStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CProfile_CIAppApplicabilityStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CProfile_CIAppApplicabilityStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CProfile_CIAppApplicabilityStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CProfile_CIAppApplicabilityStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CProfile_CIAppApplicabilityStatics_GetUnsupportedAppRequirements(This,capabilities,result) \
    ( (This)->lpVtbl->GetUnsupportedAppRequirements(This,capabilities,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CProfile_CIAppApplicabilityStatics;
#endif /* !defined(____x_ABI_CWindows_CSystem_CProfile_CIAppApplicabilityStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x80000


/*
 *
 * Interface Windows.System.Profile.IEducationSettingsStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.Profile.EducationSettings
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSystem_CProfile_CIEducationSettingsStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CProfile_CIEducationSettingsStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Profile_IEducationSettingsStatics[] = L"Windows.System.Profile.IEducationSettingsStatics";
/* [object, uuid("FC53F0EF-4D3E-4E13-9B23-505F4D091E92"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CProfile_CIEducationSettingsStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIEducationSettingsStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIEducationSettingsStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIEducationSettingsStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIEducationSettingsStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIEducationSettingsStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIEducationSettingsStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsEducationEnvironment )(
        __x_ABI_CWindows_CSystem_CProfile_CIEducationSettingsStatics * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CProfile_CIEducationSettingsStaticsVtbl;

interface __x_ABI_CWindows_CSystem_CProfile_CIEducationSettingsStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CProfile_CIEducationSettingsStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CProfile_CIEducationSettingsStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CProfile_CIEducationSettingsStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CProfile_CIEducationSettingsStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CProfile_CIEducationSettingsStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CProfile_CIEducationSettingsStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CProfile_CIEducationSettingsStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CProfile_CIEducationSettingsStatics_get_IsEducationEnvironment(This,value) \
    ( (This)->lpVtbl->get_IsEducationEnvironment(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CProfile_CIEducationSettingsStatics;
#endif /* !defined(____x_ABI_CWindows_CSystem_CProfile_CIEducationSettingsStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.System.Profile.IHardwareIdentificationStatics
 *
 * Introduced to Windows.System.Profile.ProfileHardwareTokenContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.Profile.HardwareIdentification
 *
 *
 */
#if WINDOWS_SYSTEM_PROFILE_PROFILEHARDWARETOKENCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSystem_CProfile_CIHardwareIdentificationStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CProfile_CIHardwareIdentificationStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Profile_IHardwareIdentificationStatics[] = L"Windows.System.Profile.IHardwareIdentificationStatics";
/* [object, uuid("971260E0-F170-4A42-BD55-A900B212DAE2"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CProfile_CIHardwareIdentificationStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIHardwareIdentificationStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIHardwareIdentificationStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIHardwareIdentificationStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIHardwareIdentificationStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIHardwareIdentificationStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIHardwareIdentificationStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetPackageSpecificToken )(
        __x_ABI_CWindows_CSystem_CProfile_CIHardwareIdentificationStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * nonce,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSystem_CProfile_CIHardwareToken * * packageSpecificHardwareToken
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CProfile_CIHardwareIdentificationStaticsVtbl;

interface __x_ABI_CWindows_CSystem_CProfile_CIHardwareIdentificationStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CProfile_CIHardwareIdentificationStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CProfile_CIHardwareIdentificationStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CProfile_CIHardwareIdentificationStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CProfile_CIHardwareIdentificationStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CProfile_CIHardwareIdentificationStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CProfile_CIHardwareIdentificationStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CProfile_CIHardwareIdentificationStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CProfile_CIHardwareIdentificationStatics_GetPackageSpecificToken(This,nonce,packageSpecificHardwareToken) \
    ( (This)->lpVtbl->GetPackageSpecificToken(This,nonce,packageSpecificHardwareToken) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CProfile_CIHardwareIdentificationStatics;
#endif /* !defined(____x_ABI_CWindows_CSystem_CProfile_CIHardwareIdentificationStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_SYSTEM_PROFILE_PROFILEHARDWARETOKENCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.System.Profile.IHardwareToken
 *
 * Introduced to Windows.System.Profile.ProfileHardwareTokenContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.Profile.HardwareToken
 *
 *
 */
#if WINDOWS_SYSTEM_PROFILE_PROFILEHARDWARETOKENCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSystem_CProfile_CIHardwareToken_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CProfile_CIHardwareToken_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Profile_IHardwareToken[] = L"Windows.System.Profile.IHardwareToken";
/* [object, uuid("28F6D4C0-FB12-40A4-8167-7F4E03D2724C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CProfile_CIHardwareTokenVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIHardwareToken * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIHardwareToken * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIHardwareToken * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIHardwareToken * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIHardwareToken * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIHardwareToken * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CSystem_CProfile_CIHardwareToken * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Signature )(
        __x_ABI_CWindows_CSystem_CProfile_CIHardwareToken * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Certificate )(
        __x_ABI_CWindows_CSystem_CProfile_CIHardwareToken * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CProfile_CIHardwareTokenVtbl;

interface __x_ABI_CWindows_CSystem_CProfile_CIHardwareToken
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CProfile_CIHardwareTokenVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CProfile_CIHardwareToken_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CProfile_CIHardwareToken_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CProfile_CIHardwareToken_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CProfile_CIHardwareToken_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CProfile_CIHardwareToken_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CProfile_CIHardwareToken_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CProfile_CIHardwareToken_get_Id(This,value) \
    ( (This)->lpVtbl->get_Id(This,value) )

#define __x_ABI_CWindows_CSystem_CProfile_CIHardwareToken_get_Signature(This,value) \
    ( (This)->lpVtbl->get_Signature(This,value) )

#define __x_ABI_CWindows_CSystem_CProfile_CIHardwareToken_get_Certificate(This,value) \
    ( (This)->lpVtbl->get_Certificate(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CProfile_CIHardwareToken;
#endif /* !defined(____x_ABI_CWindows_CSystem_CProfile_CIHardwareToken_INTERFACE_DEFINED__) */
#endif // WINDOWS_SYSTEM_PROFILE_PROFILEHARDWARETOKENCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.System.Profile.IKnownRetailInfoPropertiesStatics
 *
 * Introduced to Windows.System.Profile.ProfileRetailInfoContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.Profile.KnownRetailInfoProperties
 *
 *
 */
#if WINDOWS_SYSTEM_PROFILE_PROFILERETAILINFOCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Profile_IKnownRetailInfoPropertiesStatics[] = L"Windows.System.Profile.IKnownRetailInfoPropertiesStatics";
/* [object, uuid("99571178-500F-487E-8E75-29E551728712"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RetailAccessCode )(
        __x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ManufacturerName )(
        __x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ModelName )(
        __x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DisplayModelName )(
        __x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Price )(
        __x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsFeatured )(
        __x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FormFactor )(
        __x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ScreenSize )(
        __x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Weight )(
        __x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DisplayDescription )(
        __x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BatteryLifeDescription )(
        __x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ProcessorDescription )(
        __x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Memory )(
        __x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_StorageDescription )(
        __x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_GraphicsDescription )(
        __x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FrontCameraDescription )(
        __x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RearCameraDescription )(
        __x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HasNfc )(
        __x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HasSdSlot )(
        __x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HasOpticalDrive )(
        __x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsOfficeInstalled )(
        __x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_WindowsEdition )(
        __x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStaticsVtbl;

interface __x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics_get_RetailAccessCode(This,value) \
    ( (This)->lpVtbl->get_RetailAccessCode(This,value) )

#define __x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics_get_ManufacturerName(This,value) \
    ( (This)->lpVtbl->get_ManufacturerName(This,value) )

#define __x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics_get_ModelName(This,value) \
    ( (This)->lpVtbl->get_ModelName(This,value) )

#define __x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics_get_DisplayModelName(This,value) \
    ( (This)->lpVtbl->get_DisplayModelName(This,value) )

#define __x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics_get_Price(This,value) \
    ( (This)->lpVtbl->get_Price(This,value) )

#define __x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics_get_IsFeatured(This,value) \
    ( (This)->lpVtbl->get_IsFeatured(This,value) )

#define __x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics_get_FormFactor(This,value) \
    ( (This)->lpVtbl->get_FormFactor(This,value) )

#define __x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics_get_ScreenSize(This,value) \
    ( (This)->lpVtbl->get_ScreenSize(This,value) )

#define __x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics_get_Weight(This,value) \
    ( (This)->lpVtbl->get_Weight(This,value) )

#define __x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics_get_DisplayDescription(This,value) \
    ( (This)->lpVtbl->get_DisplayDescription(This,value) )

#define __x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics_get_BatteryLifeDescription(This,value) \
    ( (This)->lpVtbl->get_BatteryLifeDescription(This,value) )

#define __x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics_get_ProcessorDescription(This,value) \
    ( (This)->lpVtbl->get_ProcessorDescription(This,value) )

#define __x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics_get_Memory(This,value) \
    ( (This)->lpVtbl->get_Memory(This,value) )

#define __x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics_get_StorageDescription(This,value) \
    ( (This)->lpVtbl->get_StorageDescription(This,value) )

#define __x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics_get_GraphicsDescription(This,value) \
    ( (This)->lpVtbl->get_GraphicsDescription(This,value) )

#define __x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics_get_FrontCameraDescription(This,value) \
    ( (This)->lpVtbl->get_FrontCameraDescription(This,value) )

#define __x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics_get_RearCameraDescription(This,value) \
    ( (This)->lpVtbl->get_RearCameraDescription(This,value) )

#define __x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics_get_HasNfc(This,value) \
    ( (This)->lpVtbl->get_HasNfc(This,value) )

#define __x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics_get_HasSdSlot(This,value) \
    ( (This)->lpVtbl->get_HasSdSlot(This,value) )

#define __x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics_get_HasOpticalDrive(This,value) \
    ( (This)->lpVtbl->get_HasOpticalDrive(This,value) )

#define __x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics_get_IsOfficeInstalled(This,value) \
    ( (This)->lpVtbl->get_IsOfficeInstalled(This,value) )

#define __x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics_get_WindowsEdition(This,value) \
    ( (This)->lpVtbl->get_WindowsEdition(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics;
#endif /* !defined(____x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_SYSTEM_PROFILE_PROFILERETAILINFOCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.System.Profile.IPlatformDiagnosticsAndUsageDataSettingsStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.Profile.PlatformDiagnosticsAndUsageDataSettings
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CSystem_CProfile_CIPlatformDiagnosticsAndUsageDataSettingsStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CProfile_CIPlatformDiagnosticsAndUsageDataSettingsStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Profile_IPlatformDiagnosticsAndUsageDataSettingsStatics[] = L"Windows.System.Profile.IPlatformDiagnosticsAndUsageDataSettingsStatics";
/* [object, uuid("B6E24C1B-7B1C-4B32-8C62-A66597CE723A"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CProfile_CIPlatformDiagnosticsAndUsageDataSettingsStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIPlatformDiagnosticsAndUsageDataSettingsStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIPlatformDiagnosticsAndUsageDataSettingsStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIPlatformDiagnosticsAndUsageDataSettingsStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIPlatformDiagnosticsAndUsageDataSettingsStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIPlatformDiagnosticsAndUsageDataSettingsStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIPlatformDiagnosticsAndUsageDataSettingsStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CollectionLevel )(
        __x_ABI_CWindows_CSystem_CProfile_CIPlatformDiagnosticsAndUsageDataSettingsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CSystem_CProfile_CPlatformDataCollectionLevel * value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_CollectionLevelChanged )(
        __x_ABI_CWindows_CSystem_CProfile_CIPlatformDiagnosticsAndUsageDataSettingsStatics * This,
        /* [in] */__RPC__in_opt __FIEventHandler_1_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_CollectionLevelChanged )(
        __x_ABI_CWindows_CSystem_CProfile_CIPlatformDiagnosticsAndUsageDataSettingsStatics * This,
        /* [in] */EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *CanCollectDiagnostics )(
        __x_ABI_CWindows_CSystem_CProfile_CIPlatformDiagnosticsAndUsageDataSettingsStatics * This,
        /* [in] */__x_ABI_CWindows_CSystem_CProfile_CPlatformDataCollectionLevel level,
        /* [retval, out] */__RPC__out boolean * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CProfile_CIPlatformDiagnosticsAndUsageDataSettingsStaticsVtbl;

interface __x_ABI_CWindows_CSystem_CProfile_CIPlatformDiagnosticsAndUsageDataSettingsStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CProfile_CIPlatformDiagnosticsAndUsageDataSettingsStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CProfile_CIPlatformDiagnosticsAndUsageDataSettingsStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CProfile_CIPlatformDiagnosticsAndUsageDataSettingsStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CProfile_CIPlatformDiagnosticsAndUsageDataSettingsStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CProfile_CIPlatformDiagnosticsAndUsageDataSettingsStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CProfile_CIPlatformDiagnosticsAndUsageDataSettingsStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CProfile_CIPlatformDiagnosticsAndUsageDataSettingsStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CProfile_CIPlatformDiagnosticsAndUsageDataSettingsStatics_get_CollectionLevel(This,value) \
    ( (This)->lpVtbl->get_CollectionLevel(This,value) )

#define __x_ABI_CWindows_CSystem_CProfile_CIPlatformDiagnosticsAndUsageDataSettingsStatics_add_CollectionLevelChanged(This,handler,token) \
    ( (This)->lpVtbl->add_CollectionLevelChanged(This,handler,token) )

#define __x_ABI_CWindows_CSystem_CProfile_CIPlatformDiagnosticsAndUsageDataSettingsStatics_remove_CollectionLevelChanged(This,token) \
    ( (This)->lpVtbl->remove_CollectionLevelChanged(This,token) )

#define __x_ABI_CWindows_CSystem_CProfile_CIPlatformDiagnosticsAndUsageDataSettingsStatics_CanCollectDiagnostics(This,level,result) \
    ( (This)->lpVtbl->CanCollectDiagnostics(This,level,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CProfile_CIPlatformDiagnosticsAndUsageDataSettingsStatics;
#endif /* !defined(____x_ABI_CWindows_CSystem_CProfile_CIPlatformDiagnosticsAndUsageDataSettingsStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.System.Profile.IRetailInfoStatics
 *
 * Introduced to Windows.System.Profile.ProfileRetailInfoContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.Profile.RetailInfo
 *
 *
 */
#if WINDOWS_SYSTEM_PROFILE_PROFILERETAILINFOCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSystem_CProfile_CIRetailInfoStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CProfile_CIRetailInfoStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Profile_IRetailInfoStatics[] = L"Windows.System.Profile.IRetailInfoStatics";
/* [object, uuid("0712C6B8-8B92-4F2A-8499-031F1798D6EF"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CProfile_CIRetailInfoStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIRetailInfoStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIRetailInfoStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIRetailInfoStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIRetailInfoStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIRetailInfoStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIRetailInfoStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsDemoModeEnabled )(
        __x_ABI_CWindows_CSystem_CProfile_CIRetailInfoStatics * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Properties )(
        __x_ABI_CWindows_CSystem_CProfile_CIRetailInfoStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CProfile_CIRetailInfoStaticsVtbl;

interface __x_ABI_CWindows_CSystem_CProfile_CIRetailInfoStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CProfile_CIRetailInfoStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CProfile_CIRetailInfoStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CProfile_CIRetailInfoStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CProfile_CIRetailInfoStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CProfile_CIRetailInfoStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CProfile_CIRetailInfoStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CProfile_CIRetailInfoStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CProfile_CIRetailInfoStatics_get_IsDemoModeEnabled(This,value) \
    ( (This)->lpVtbl->get_IsDemoModeEnabled(This,value) )

#define __x_ABI_CWindows_CSystem_CProfile_CIRetailInfoStatics_get_Properties(This,value) \
    ( (This)->lpVtbl->get_Properties(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CProfile_CIRetailInfoStatics;
#endif /* !defined(____x_ABI_CWindows_CSystem_CProfile_CIRetailInfoStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_SYSTEM_PROFILE_PROFILERETAILINFOCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.System.Profile.ISharedModeSettingsStatics
 *
 * Introduced to Windows.System.Profile.ProfileSharedModeContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.Profile.SharedModeSettings
 *
 *
 */
#if WINDOWS_SYSTEM_PROFILE_PROFILESHAREDMODECONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSystem_CProfile_CISharedModeSettingsStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CProfile_CISharedModeSettingsStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Profile_ISharedModeSettingsStatics[] = L"Windows.System.Profile.ISharedModeSettingsStatics";
/* [object, uuid("893DF40E-CAD6-4D50-8C49-6FCFC03EDB29"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CProfile_CISharedModeSettingsStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CISharedModeSettingsStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CISharedModeSettingsStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CISharedModeSettingsStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CISharedModeSettingsStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CISharedModeSettingsStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CISharedModeSettingsStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsEnabled )(
        __x_ABI_CWindows_CSystem_CProfile_CISharedModeSettingsStatics * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CProfile_CISharedModeSettingsStaticsVtbl;

interface __x_ABI_CWindows_CSystem_CProfile_CISharedModeSettingsStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CProfile_CISharedModeSettingsStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CProfile_CISharedModeSettingsStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CProfile_CISharedModeSettingsStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CProfile_CISharedModeSettingsStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CProfile_CISharedModeSettingsStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CProfile_CISharedModeSettingsStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CProfile_CISharedModeSettingsStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CProfile_CISharedModeSettingsStatics_get_IsEnabled(This,value) \
    ( (This)->lpVtbl->get_IsEnabled(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CProfile_CISharedModeSettingsStatics;
#endif /* !defined(____x_ABI_CWindows_CSystem_CProfile_CISharedModeSettingsStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_SYSTEM_PROFILE_PROFILESHAREDMODECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.System.Profile.ISharedModeSettingsStatics2
 *
 * Introduced to Windows.System.Profile.ProfileSharedModeContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.Profile.SharedModeSettings
 *
 *
 */
#if WINDOWS_SYSTEM_PROFILE_PROFILESHAREDMODECONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CSystem_CProfile_CISharedModeSettingsStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CProfile_CISharedModeSettingsStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Profile_ISharedModeSettingsStatics2[] = L"Windows.System.Profile.ISharedModeSettingsStatics2";
/* [object, uuid("608988A4-CCF1-4EE8-A5E2-FD6A1D0CFAC8"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CProfile_CISharedModeSettingsStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CISharedModeSettingsStatics2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CISharedModeSettingsStatics2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CISharedModeSettingsStatics2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CISharedModeSettingsStatics2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CISharedModeSettingsStatics2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CISharedModeSettingsStatics2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ShouldAvoidLocalStorage )(
        __x_ABI_CWindows_CSystem_CProfile_CISharedModeSettingsStatics2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CProfile_CISharedModeSettingsStatics2Vtbl;

interface __x_ABI_CWindows_CSystem_CProfile_CISharedModeSettingsStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CProfile_CISharedModeSettingsStatics2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CProfile_CISharedModeSettingsStatics2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CProfile_CISharedModeSettingsStatics2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CProfile_CISharedModeSettingsStatics2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CProfile_CISharedModeSettingsStatics2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CProfile_CISharedModeSettingsStatics2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CProfile_CISharedModeSettingsStatics2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CProfile_CISharedModeSettingsStatics2_get_ShouldAvoidLocalStorage(This,value) \
    ( (This)->lpVtbl->get_ShouldAvoidLocalStorage(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CProfile_CISharedModeSettingsStatics2;
#endif /* !defined(____x_ABI_CWindows_CSystem_CProfile_CISharedModeSettingsStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_SYSTEM_PROFILE_PROFILESHAREDMODECONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.System.Profile.ISystemIdentificationInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.Profile.SystemIdentificationInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Profile_ISystemIdentificationInfo[] = L"Windows.System.Profile.ISystemIdentificationInfo";
/* [object, uuid("0C659E7D-C3C2-4D33-A2DF-21BC41916EB3"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationInfo * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationInfo * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationInfo * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationInfo * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationInfo * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationInfo * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationInfo * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Source )(
        __x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationInfo * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CSystem_CProfile_CSystemIdentificationSource * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationInfoVtbl;

interface __x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationInfo_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationInfo_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationInfo_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationInfo_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationInfo_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationInfo_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationInfo_get_Id(This,value) \
    ( (This)->lpVtbl->get_Id(This,value) )

#define __x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationInfo_get_Source(This,value) \
    ( (This)->lpVtbl->get_Source(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationInfo;
#endif /* !defined(____x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.System.Profile.ISystemIdentificationStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.Profile.SystemIdentification
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Profile_ISystemIdentificationStatics[] = L"Windows.System.Profile.ISystemIdentificationStatics";
/* [object, uuid("5581F42A-D3DF-4D93-A37D-C41A616C6D01"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetSystemIdForPublisher )(
        __x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationInfo * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetSystemIdForUser )(
        __x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationInfo * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationStaticsVtbl;

interface __x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationStatics_GetSystemIdForPublisher(This,result) \
    ( (This)->lpVtbl->GetSystemIdForPublisher(This,result) )

#define __x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationStatics_GetSystemIdForUser(This,user,result) \
    ( (This)->lpVtbl->GetSystemIdForUser(This,user,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationStatics;
#endif /* !defined(____x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.System.Profile.ISystemSetupInfoStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 7.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.Profile.SystemSetupInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x70000
#if !defined(____x_ABI_CWindows_CSystem_CProfile_CISystemSetupInfoStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CProfile_CISystemSetupInfoStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Profile_ISystemSetupInfoStatics[] = L"Windows.System.Profile.ISystemSetupInfoStatics";
/* [object, uuid("2C9620A8-1D88-5E2D-A324-A543AF4247EE"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CProfile_CISystemSetupInfoStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CISystemSetupInfoStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CISystemSetupInfoStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CISystemSetupInfoStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CISystemSetupInfoStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CISystemSetupInfoStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CISystemSetupInfoStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_OutOfBoxExperienceState )(
        __x_ABI_CWindows_CSystem_CProfile_CISystemSetupInfoStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CSystem_CProfile_CSystemOutOfBoxExperienceState * value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_OutOfBoxExperienceStateChanged )(
        __x_ABI_CWindows_CSystem_CProfile_CISystemSetupInfoStatics * This,
        /* [in] */__RPC__in_opt __FIEventHandler_1_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_OutOfBoxExperienceStateChanged )(
        __x_ABI_CWindows_CSystem_CProfile_CISystemSetupInfoStatics * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CProfile_CISystemSetupInfoStaticsVtbl;

interface __x_ABI_CWindows_CSystem_CProfile_CISystemSetupInfoStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CProfile_CISystemSetupInfoStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CProfile_CISystemSetupInfoStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CProfile_CISystemSetupInfoStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CProfile_CISystemSetupInfoStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CProfile_CISystemSetupInfoStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CProfile_CISystemSetupInfoStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CProfile_CISystemSetupInfoStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CProfile_CISystemSetupInfoStatics_get_OutOfBoxExperienceState(This,value) \
    ( (This)->lpVtbl->get_OutOfBoxExperienceState(This,value) )

#define __x_ABI_CWindows_CSystem_CProfile_CISystemSetupInfoStatics_add_OutOfBoxExperienceStateChanged(This,handler,token) \
    ( (This)->lpVtbl->add_OutOfBoxExperienceStateChanged(This,handler,token) )

#define __x_ABI_CWindows_CSystem_CProfile_CISystemSetupInfoStatics_remove_OutOfBoxExperienceStateChanged(This,token) \
    ( (This)->lpVtbl->remove_OutOfBoxExperienceStateChanged(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CProfile_CISystemSetupInfoStatics;
#endif /* !defined(____x_ABI_CWindows_CSystem_CProfile_CISystemSetupInfoStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x70000


/*
 *
 * Interface Windows.System.Profile.IUnsupportedAppRequirement
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 8.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.Profile.UnsupportedAppRequirement
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x80000
#if !defined(____x_ABI_CWindows_CSystem_CProfile_CIUnsupportedAppRequirement_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CProfile_CIUnsupportedAppRequirement_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Profile_IUnsupportedAppRequirement[] = L"Windows.System.Profile.IUnsupportedAppRequirement";
/* [object, uuid("6182445C-894B-5CBC-8976-A98E0A9B998D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CProfile_CIUnsupportedAppRequirementVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIUnsupportedAppRequirement * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIUnsupportedAppRequirement * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIUnsupportedAppRequirement * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIUnsupportedAppRequirement * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIUnsupportedAppRequirement * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIUnsupportedAppRequirement * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Requirement )(
        __x_ABI_CWindows_CSystem_CProfile_CIUnsupportedAppRequirement * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Reasons )(
        __x_ABI_CWindows_CSystem_CProfile_CIUnsupportedAppRequirement * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CSystem_CProfile_CUnsupportedAppRequirementReasons * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CProfile_CIUnsupportedAppRequirementVtbl;

interface __x_ABI_CWindows_CSystem_CProfile_CIUnsupportedAppRequirement
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CProfile_CIUnsupportedAppRequirementVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CProfile_CIUnsupportedAppRequirement_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CProfile_CIUnsupportedAppRequirement_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CProfile_CIUnsupportedAppRequirement_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CProfile_CIUnsupportedAppRequirement_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CProfile_CIUnsupportedAppRequirement_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CProfile_CIUnsupportedAppRequirement_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CProfile_CIUnsupportedAppRequirement_get_Requirement(This,value) \
    ( (This)->lpVtbl->get_Requirement(This,value) )

#define __x_ABI_CWindows_CSystem_CProfile_CIUnsupportedAppRequirement_get_Reasons(This,value) \
    ( (This)->lpVtbl->get_Reasons(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CProfile_CIUnsupportedAppRequirement;
#endif /* !defined(____x_ABI_CWindows_CSystem_CProfile_CIUnsupportedAppRequirement_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x80000


/*
 *
 * Interface Windows.System.Profile.IWindowsIntegrityPolicyStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 7.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.Profile.WindowsIntegrityPolicy
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x70000
#if !defined(____x_ABI_CWindows_CSystem_CProfile_CIWindowsIntegrityPolicyStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CProfile_CIWindowsIntegrityPolicyStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Profile_IWindowsIntegrityPolicyStatics[] = L"Windows.System.Profile.IWindowsIntegrityPolicyStatics";
/* [object, uuid("7D1D81DB-8D63-4789-9EA5-DDCF65A94F3C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CProfile_CIWindowsIntegrityPolicyStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIWindowsIntegrityPolicyStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIWindowsIntegrityPolicyStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIWindowsIntegrityPolicyStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIWindowsIntegrityPolicyStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIWindowsIntegrityPolicyStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIWindowsIntegrityPolicyStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsEnabled )(
        __x_ABI_CWindows_CSystem_CProfile_CIWindowsIntegrityPolicyStatics * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsEnabledForTrial )(
        __x_ABI_CWindows_CSystem_CProfile_CIWindowsIntegrityPolicyStatics * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CanDisable )(
        __x_ABI_CWindows_CSystem_CProfile_CIWindowsIntegrityPolicyStatics * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsDisableSupported )(
        __x_ABI_CWindows_CSystem_CProfile_CIWindowsIntegrityPolicyStatics * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_PolicyChanged )(
        __x_ABI_CWindows_CSystem_CProfile_CIWindowsIntegrityPolicyStatics * This,
        /* [in] */__RPC__in_opt __FIEventHandler_1_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_PolicyChanged )(
        __x_ABI_CWindows_CSystem_CProfile_CIWindowsIntegrityPolicyStatics * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CProfile_CIWindowsIntegrityPolicyStaticsVtbl;

interface __x_ABI_CWindows_CSystem_CProfile_CIWindowsIntegrityPolicyStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CProfile_CIWindowsIntegrityPolicyStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CProfile_CIWindowsIntegrityPolicyStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CProfile_CIWindowsIntegrityPolicyStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CProfile_CIWindowsIntegrityPolicyStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CProfile_CIWindowsIntegrityPolicyStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CProfile_CIWindowsIntegrityPolicyStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CProfile_CIWindowsIntegrityPolicyStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CProfile_CIWindowsIntegrityPolicyStatics_get_IsEnabled(This,value) \
    ( (This)->lpVtbl->get_IsEnabled(This,value) )

#define __x_ABI_CWindows_CSystem_CProfile_CIWindowsIntegrityPolicyStatics_get_IsEnabledForTrial(This,value) \
    ( (This)->lpVtbl->get_IsEnabledForTrial(This,value) )

#define __x_ABI_CWindows_CSystem_CProfile_CIWindowsIntegrityPolicyStatics_get_CanDisable(This,value) \
    ( (This)->lpVtbl->get_CanDisable(This,value) )

#define __x_ABI_CWindows_CSystem_CProfile_CIWindowsIntegrityPolicyStatics_get_IsDisableSupported(This,value) \
    ( (This)->lpVtbl->get_IsDisableSupported(This,value) )

#define __x_ABI_CWindows_CSystem_CProfile_CIWindowsIntegrityPolicyStatics_add_PolicyChanged(This,handler,token) \
    ( (This)->lpVtbl->add_PolicyChanged(This,handler,token) )

#define __x_ABI_CWindows_CSystem_CProfile_CIWindowsIntegrityPolicyStatics_remove_PolicyChanged(This,token) \
    ( (This)->lpVtbl->remove_PolicyChanged(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CProfile_CIWindowsIntegrityPolicyStatics;
#endif /* !defined(____x_ABI_CWindows_CSystem_CProfile_CIWindowsIntegrityPolicyStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x70000


/*
 *
 * Class Windows.System.Profile.AnalyticsInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.System.Profile.IAnalyticsInfoStatics2 interface starting with version 6.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.System.Profile.IAnalyticsInfoStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_System_Profile_AnalyticsInfo_DEFINED
#define RUNTIMECLASS_Windows_System_Profile_AnalyticsInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Profile_AnalyticsInfo[] = L"Windows.System.Profile.AnalyticsInfo";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.System.Profile.AnalyticsVersionInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.System.Profile.IAnalyticsVersionInfo ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_System_Profile_AnalyticsVersionInfo_DEFINED
#define RUNTIMECLASS_Windows_System_Profile_AnalyticsVersionInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Profile_AnalyticsVersionInfo[] = L"Windows.System.Profile.AnalyticsVersionInfo";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.System.Profile.AppApplicability
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 8.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.System.Profile.IAppApplicabilityStatics interface starting with version 8.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x80000
#ifndef RUNTIMECLASS_Windows_System_Profile_AppApplicability_DEFINED
#define RUNTIMECLASS_Windows_System_Profile_AppApplicability_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Profile_AppApplicability[] = L"Windows.System.Profile.AppApplicability";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x80000


/*
 *
 * Class Windows.System.Profile.EducationSettings
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.System.Profile.IEducationSettingsStatics interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#ifndef RUNTIMECLASS_Windows_System_Profile_EducationSettings_DEFINED
#define RUNTIMECLASS_Windows_System_Profile_EducationSettings_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Profile_EducationSettings[] = L"Windows.System.Profile.EducationSettings";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.System.Profile.HardwareIdentification
 *
 * Introduced to Windows.System.Profile.ProfileHardwareTokenContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.System.Profile.IHardwareIdentificationStatics interface starting with version 1.0 of the Windows.System.Profile.ProfileHardwareTokenContract API contract
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_SYSTEM_PROFILE_PROFILEHARDWARETOKENCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_System_Profile_HardwareIdentification_DEFINED
#define RUNTIMECLASS_Windows_System_Profile_HardwareIdentification_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Profile_HardwareIdentification[] = L"Windows.System.Profile.HardwareIdentification";
#endif
#endif // WINDOWS_SYSTEM_PROFILE_PROFILEHARDWARETOKENCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.System.Profile.HardwareToken
 *
 * Introduced to Windows.System.Profile.ProfileHardwareTokenContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.System.Profile.IHardwareToken ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_SYSTEM_PROFILE_PROFILEHARDWARETOKENCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_System_Profile_HardwareToken_DEFINED
#define RUNTIMECLASS_Windows_System_Profile_HardwareToken_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Profile_HardwareToken[] = L"Windows.System.Profile.HardwareToken";
#endif
#endif // WINDOWS_SYSTEM_PROFILE_PROFILEHARDWARETOKENCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.System.Profile.KnownRetailInfoProperties
 *
 * Introduced to Windows.System.Profile.ProfileRetailInfoContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.System.Profile.IKnownRetailInfoPropertiesStatics interface starting with version 1.0 of the Windows.System.Profile.ProfileRetailInfoContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_SYSTEM_PROFILE_PROFILERETAILINFOCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_System_Profile_KnownRetailInfoProperties_DEFINED
#define RUNTIMECLASS_Windows_System_Profile_KnownRetailInfoProperties_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Profile_KnownRetailInfoProperties[] = L"Windows.System.Profile.KnownRetailInfoProperties";
#endif
#endif // WINDOWS_SYSTEM_PROFILE_PROFILERETAILINFOCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.System.Profile.PlatformDiagnosticsAndUsageDataSettings
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.System.Profile.IPlatformDiagnosticsAndUsageDataSettingsStatics interface starting with version 2.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#ifndef RUNTIMECLASS_Windows_System_Profile_PlatformDiagnosticsAndUsageDataSettings_DEFINED
#define RUNTIMECLASS_Windows_System_Profile_PlatformDiagnosticsAndUsageDataSettings_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Profile_PlatformDiagnosticsAndUsageDataSettings[] = L"Windows.System.Profile.PlatformDiagnosticsAndUsageDataSettings";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.System.Profile.RetailInfo
 *
 * Introduced to Windows.System.Profile.ProfileRetailInfoContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.System.Profile.IRetailInfoStatics interface starting with version 1.0 of the Windows.System.Profile.ProfileRetailInfoContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_SYSTEM_PROFILE_PROFILERETAILINFOCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_System_Profile_RetailInfo_DEFINED
#define RUNTIMECLASS_Windows_System_Profile_RetailInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Profile_RetailInfo[] = L"Windows.System.Profile.RetailInfo";
#endif
#endif // WINDOWS_SYSTEM_PROFILE_PROFILERETAILINFOCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.System.Profile.SharedModeSettings
 *
 * Introduced to Windows.System.Profile.ProfileSharedModeContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.System.Profile.ISharedModeSettingsStatics2 interface starting with version 2.0 of the Windows.System.Profile.ProfileSharedModeContract API contract
 *   Static Methods exist on the Windows.System.Profile.ISharedModeSettingsStatics interface starting with version 1.0 of the Windows.System.Profile.ProfileSharedModeContract API contract
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_SYSTEM_PROFILE_PROFILESHAREDMODECONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_System_Profile_SharedModeSettings_DEFINED
#define RUNTIMECLASS_Windows_System_Profile_SharedModeSettings_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Profile_SharedModeSettings[] = L"Windows.System.Profile.SharedModeSettings";
#endif
#endif // WINDOWS_SYSTEM_PROFILE_PROFILESHAREDMODECONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.System.Profile.SystemIdentification
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.System.Profile.ISystemIdentificationStatics interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#ifndef RUNTIMECLASS_Windows_System_Profile_SystemIdentification_DEFINED
#define RUNTIMECLASS_Windows_System_Profile_SystemIdentification_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Profile_SystemIdentification[] = L"Windows.System.Profile.SystemIdentification";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.System.Profile.SystemIdentificationInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.System.Profile.ISystemIdentificationInfo ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_System_Profile_SystemIdentificationInfo_DEFINED
#define RUNTIMECLASS_Windows_System_Profile_SystemIdentificationInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Profile_SystemIdentificationInfo[] = L"Windows.System.Profile.SystemIdentificationInfo";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.System.Profile.SystemSetupInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 7.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.System.Profile.ISystemSetupInfoStatics interface starting with version 7.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x70000
#ifndef RUNTIMECLASS_Windows_System_Profile_SystemSetupInfo_DEFINED
#define RUNTIMECLASS_Windows_System_Profile_SystemSetupInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Profile_SystemSetupInfo[] = L"Windows.System.Profile.SystemSetupInfo";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x70000


/*
 *
 * Class Windows.System.Profile.UnsupportedAppRequirement
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 8.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.System.Profile.IUnsupportedAppRequirement ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x80000

#ifndef RUNTIMECLASS_Windows_System_Profile_UnsupportedAppRequirement_DEFINED
#define RUNTIMECLASS_Windows_System_Profile_UnsupportedAppRequirement_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Profile_UnsupportedAppRequirement[] = L"Windows.System.Profile.UnsupportedAppRequirement";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x80000


/*
 *
 * Class Windows.System.Profile.WindowsIntegrityPolicy
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 7.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.System.Profile.IWindowsIntegrityPolicyStatics interface starting with version 7.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x70000
#ifndef RUNTIMECLASS_Windows_System_Profile_WindowsIntegrityPolicy_DEFINED
#define RUNTIMECLASS_Windows_System_Profile_WindowsIntegrityPolicy_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Profile_WindowsIntegrityPolicy[] = L"Windows.System.Profile.WindowsIntegrityPolicy";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x70000




#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
// Restore the original value of the 'DEPRECATED' macro
#pragma pop_macro("DEPRECATED")

#ifdef __clang__
#pragma clang diagnostic pop // deprecated-declarations
#else
#pragma warning(pop)
#endif
#endif // __windows2Esystem2Eprofile_p_h__

#endif // __windows2Esystem2Eprofile_h__
